import sys
import os
import os.path as osp
opa = os.path.abspath
import pdb
import time
import json
import tqdm
import subprocess
import matplotlib.pyplot as plt
from unrealcv import client as UnrealCVClient
from ClientWrapper import WrappedClient
from CameraWandererModule import CameraSet
from EnvRendererModule import EnvSet
from TextPlacingModule import TextPlacement
from testUtil import show
import cv2 as cv
from testUtil import show, showBProposal, ShowImgAndAnnotation
from meter import AverageMeter

class DataGenerator(object):
    def __init__(self,
                 MovementModule='default',
                 EnvModule='default',
                 TextModule='default',
                 WindowHeight=720,
                 WindowWidth=1080,
                 MaxTextNum = 15,
                 DataStoragePath='../../../GeneratedData/DataFraction_1',
                 camera_anchor_filepath = './camera_anchors/urbancity.txt',
                 EnvName='',
                 anchor_freq=10,
                 max_emissive=5,
                 FontSize=[15, 128],
                 use_real_img=0.1,
                 is_debug=True,
                 languages=["Latin"],
                 HighResFactor=2.0,
                 UnrealProjectName="./",
                 **kwargs):
        self.client = WrappedClient(UnrealCVClient, DataStoragePath, HighResFactor, UnrealProjectName)
        self.DataStoragePath = DataStoragePath
        self.UnrealProjectName = UnrealProjectName
        self.WindowHeight = WindowHeight
        self.WindowWidth = WindowWidth
        self.MaxTextNum = MaxTextNum
        self.is_debug = is_debug
        self.camera_anchor_filepath = camera_anchor_filepath
        self.anchor_freq = anchor_freq
        self.HighResFactor = HighResFactor
        
        self.RootPath = opa(DataStoragePath)
        while os.path.isdir(self.RootPath):
            root_path, count = self.RootPath.split('_')
            self.RootPath = root_path + '_' + str(int(count) + 1)
        print(f"Data will be saved to: {self.RootPath}")
        self.LabelPath = osp.join(self.RootPath, 'Label.json')
        self.DataLabel = None
        self.ImgFolder = osp.join(self.RootPath, 'imgs')
        self.LabelFolder = osp.join(self.RootPath, 'labels')
        self.WordFolder = osp.join(self.RootPath, 'WordCrops') 
        self.DataCount = 0
        self.isConnected = False
        self.SaveFreq = 100

        # step 1
        self._InitializeDataStorage()
        # step 2
        if len(EnvName) > 0:
            self.StartEngine(EnvName)
        self._ConnectToGame()
        # step 3 set resolution & rotation
        self.client.setres(self.WindowWidth, self.WindowHeight)
        # self.client.setCameraRotation(0, 0, 0)

        # load modules
        self.Wanderer = CameraSet[MovementModule](client=self.client, camera_anchor_filepath=self.camera_anchor_filepath, anchor_freq=self.anchor_freq)
        self.EnvRenderer = EnvSet[EnvModule](client=self.client)
        self.TextPlacer = TextPlacement[TextModule](client=self.client, 
                                                    MaxTextCount=self.MaxTextNum, 
                                                    ContentPath=osp.join(self.RootPath, 
                                                                         'WordCrops'),
                                                    max_emissive=max_emissive,
                                                    FontSize=FontSize,
                                                    is_debug=is_debug,
                                                    use_real_img=use_real_img,
                                                    languages=languages,
                                                    HighResFactor=HighResFactor)
        
        # initializer meters
        self.camera_meter = AverageMeter()
        self.env_meter = AverageMeter()
        self.text_meter = AverageMeter()
        self.retrieve_label_meter = AverageMeter()
        self.save_label_meter = AverageMeter()
        self.save_meter = AverageMeter()

        self._cleanup()

    def __del__(self):
        if self.client.isconnected():
            self.client.QuitGame()
            self.client.disconnect()
            self._cleanup()
            # os.system('~/cache_light.png')

    def _cleanup(self):
        os.system(f'rm ../../../PackagedEnvironment/{self.UnrealProjectName}/Demo/Saved/Screenshots/LinuxNoEditor/*png')
        os.system(f'rm ../../../PackagedEnvironment/{self.UnrealProjectName}/Demo/Saved/Logs/*')

    def _InitializeDataStorage(self):
        os.makedirs(self.ImgFolder, exist_ok=True)
        os.makedirs(self.LabelFolder, exist_ok=True)
        os.makedirs(self.WordFolder, exist_ok=True)
        self.DataCount = 0
        self.DataLabel = []
        os.system(f'cp vis.py {self.RootPath}/')

    def _ConnectToGame(self):
        # wait and connect
        sleepTime = 1.0
        while True:
            self.client.connect()
            self.isConnected = self.client.isconnected()
            if self.isConnected:
                break
            else:
                if sleepTime > 120:
                    break
                time.sleep(sleepTime)
                sleepTime *= 2
        if not self.isConnected:
            print('Failed to connect to UnrealCV server.')
            sys.exit(-1)

    def _GenerateOneImageInstance(self, step_count, force_change_camera_anchor=False):
        # step 1: move around
        time_stamp = time.time()
        if not self.is_debug:
            self.Wanderer.step(height=self.WindowHeight,
                                width=self.WindowWidth,
                                step=step_count,
                                force_change_camera_anchor=force_change_camera_anchor)
        time_stamp = self.camera_meter.update(time.time()-time_stamp)
        
        # step 2: render env
        self.EnvRenderer.step()
        time_stamp = self.env_meter.update(time.time()-time_stamp)
        
        # step 3: place text
        self.TextPlacer.PutTextStep()
        time_stamp = self.text_meter.update(time.time()-time_stamp)
        if self.is_debug:
            print('Text Loaded, ready to retrieve data')
        
        # step 4: retrieve data
        img_path, Texts, WordBoxes, CharBoxes, TextNum = self.TextPlacer.RetrieveDataStep(osp.join(self.ImgFolder, f'{self.DataCount}.jpg'))
        time_stamp = self.retrieve_label_meter.update(time.time()-time_stamp)
        
        force_change_camera_anchor = TextNum == 0
        DataLabel = {'imgfile': f'imgs/{self.DataCount}.jpg',
                               'bbox': WordBoxes,
                               'cbox': CharBoxes,
                               'text': Texts,
                               'is_difficult': [0 for _ in range(len(WordBoxes))]}
        json.dump(DataLabel, open(osp.join(self.LabelFolder, str(self.DataCount)+'.json'), 'w'))
        time_stamp = self.save_label_meter.update(time.time()-time_stamp)
        if self.is_debug:
            print('Finished waiting, ready to save img')
        self.client.SaveImg(img_path)
        time_stamp = self.save_meter.update(time.time()-time_stamp)
        self.DataCount += 1
        
        if self.is_debug:
            # step 5: visualize
            ShowImgAndAnnotation(img_path, Texts, WordBoxes, CharBoxes)
        time_stamp = time.time()
        return {'force_change_camera_anchor':force_change_camera_anchor}
            
    def StartGeneration(self, IterationNum=10000, sleep_time=0, sleep_freq=1):
        status = {'force_change_camera_anchor':False}
        for Count in range(IterationNum):
            status = self._GenerateOneImageInstance(Count, **status)
            if Count % self.anchor_freq == 0: 
                print(f"{Count} images created. Timing:")
                print(f' ----- camera:               {self.camera_meter}')
                print(f' ----- env:                  {self.env_meter}')
                print(f' ----- text:                 {self.text_meter}')
                print(f' ----- retrieve label:       {self.retrieve_label_meter}')
                print(f' ----- save label:           {self.save_label_meter}')
                print(f' ----- retrieve image:       {self.save_meter}')
    
def StartEngine(UnrealProjectName):
    engine_exe = f'../../../PackagedEnvironment/{UnrealProjectName}/Demo/Binaries/Linux/Demo'
    os.system(f'chmod +x {engine_exe}')
    command = engine_exe + ' > engine_log.txt &'
    print(command)
    subprocess.call(command, shell=True)
    print('Engine Started')
    time.sleep(15)


if __name__ == '__main__':
    # test
    Generator = DataGenerator(MaxTextNum=5, is_debug=True)
    Generator.StartGeneration(5, 0.0)


