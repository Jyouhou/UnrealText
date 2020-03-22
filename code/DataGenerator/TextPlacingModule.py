import numpy as np
import random
import re
import os
import pdb
import cv2
from numpy.linalg import norm
from BoxProposing import BoxProposalModule
from WordImageGenerationModule import WordRenderer
from testUtil import show, showBProposal, ShowImgAndAnnotation
from skimage.measure import block_reduce


class TextInstance(object):
    def __init__(self, Index, Name):
        self.text = ['']
        self.Index = Index
        self.bbox = None
        self.cbox = None
        self.Name = Name
        self.IsValid = False
        self.adjusted_pos = None

class TextNormalBasedLocalization(object):
    def __init__(self, *args, **kwargs):
        super().__init__()
        self.client = kwargs.get('client', None)
        self.MaxTextCount = kwargs.get('MaxTextCount', 15)
        self.ContentPath = kwargs.get('ContentPath', None)
        self.reduceRatio = kwargs.get('reduceRatio', 2)
        self.max_emissive = kwargs.get('max_emissive', 5)
        self.NormalBoundaryThreshold = kwargs.get('NormalBoundaryThreshold', 80)
        self.normal_boundary_detection_method = kwargs.get('NBM_method', 'diff')
        self.use_real_img = kwargs.get('use_real_img', 0.1)
        self.HighResFactor = kwargs.get('HighResFactor', 2.0)
        self.NextTextToRender = 0
        self.TextNum = 0
        self.is_debug = kwargs.get('is_debug', True)
        if self.client is None:
            raise ValueError()
        self.AllTextObjects = [TextInstance(ID, f'StickerTextActor_{2 * ID - 1}') for ID in range(self.MaxTextCount)]
        
        if kwargs.get('multi_lingual', False):
            self.WordPainter = [WordRenderer(ContentPath=self.ContentPath, is_debug=self.is_debug,  SeparatedBySpace=True,
                                            FontPath = ['../../resources/fonts&corpus/Latin/fonts/'],
                                            CorpusPath = '../../resources/fonts&corpus/Latin/corpus/corpus_latin.xml',
                                            FontSize=kwargs.get('FontSize', [15, 128]), is_mlt=True),
                                WordRenderer(ContentPath=self.ContentPath, is_debug=self.is_debug,  SeparatedBySpace=True, is_Arabic=True,
                                            FontPath = ['../../resources/fonts&corpus/Arabic/fonts/'],
                                            CorpusPath = '../../resources/fonts&corpus/Arabic/corpus/corpus_ar.xml',
                                            BackGroundPath='',
                                            FontSize=kwargs.get('FontSize', [15, 128]), is_mlt=True),
                                WordRenderer(ContentPath=self.ContentPath, is_debug=self.is_debug,  SeparatedBySpace=True,
                                            FontPath = ['../../resources/fonts&corpus/Bangla/fonts/'],
                                            CorpusPath = '../../resources/fonts&corpus/Bangla/corpus/corpus_bn.xml',
                                            BackGroundPath='',
                                            FontSize=kwargs.get('FontSize', [15, 128]), is_mlt=True),
                                WordRenderer(ContentPath=self.ContentPath, is_debug=self.is_debug,  SeparatedBySpace=True,
                                            FontPath = ['../../resources/fonts&corpus/Hindi/fonts/'],
                                            CorpusPath = '../../resources/fonts&corpus/Hindi/corpus/corpus_hi.xml',
                                            BackGroundPath='',
                                            FontSize=kwargs.get('FontSize', [15, 128]), is_mlt=True),
                                WordRenderer(ContentPath=self.ContentPath, is_debug=self.is_debug,  SeparatedBySpace=False,
                                            FontPath = ['../../resources/fonts&corpus/Japanese/fonts/'],
                                            CorpusPath = '../../resources/fonts&corpus/Japanese/corpus/corpus_ja.xml',
                                            BackGroundPath='',
                                            FontSize=kwargs.get('FontSize', [15, 128]), is_mlt=True),
                                WordRenderer(ContentPath=self.ContentPath, is_debug=self.is_debug,  SeparatedBySpace=False,
                                            FontPath = ['../../resources/fonts&corpus/Korean/fonts/'],
                                            CorpusPath = '../../resources/fonts&corpus/Korean/corpus/corpus_ko.xml',
                                            BackGroundPath='',
                                            FontSize=kwargs.get('FontSize', [15, 128]), is_mlt=True),
                                WordRenderer(ContentPath=self.ContentPath, is_debug=self.is_debug,  SeparatedBySpace=False,
                                            FontPath = ['../../resources/fonts&corpus/Chinese/fonts/'],
                                            CorpusPath = '../../resources/fonts&corpus/Chinese/corpus/corpus_zh.xml',
                                            BackGroundPath='',
                                            FontSize=kwargs.get('FontSize', [15, 128]), is_mlt=True)]
        else:
            # Latin/English only
            self.WordPainter = [WordRenderer(ContentPath=self.ContentPath, is_debug=self.is_debug,  SeparatedBySpace=True,
                                            FontPath = ['../../resources/fonts&corpus/Latin/fonts/'],
                                            CorpusPath = '../../resources/fonts&corpus/Latin/corpus/corpus_en.xml',
                                            FontSize=kwargs.get('FontSize', [15, 128]))]
            
        self.BoxProposalModule = BoxProposalModule(reduceRatio=self.reduceRatio, is_debug=self.is_debug)
    
    def PutTextStep(self, *args, **kwargs):
        # Step 1: get scene attributes
        NormalMap = self.client.getNormal()
        # Step 2: propose boxes and colors
        NBM = TextNormalBasedLocalization.getNormalBoundaryDifference(
            NormalMap, 
            DifferenceThreshold=self.NormalBoundaryThreshold + random.uniform(-30, 80), 
            reduceRatio=self.reduceRatio,
            useCannyEdge=self.normal_boundary_detection_method=="edge")
        # List[ndarray(4, np.int)]
        BoxProposals = self.BoxProposalModule.BoxProposing(NBM, self.MaxTextCount)
        LightMap, img_path = self.client.getColor(return_path=True)
        Colors = TextNormalBasedLocalization.propseTextColor(LightMap, BoxProposals, self.is_debug)
        
        # Step 3
        if self.is_debug:
            print('Ready to pass data.... ')
        attr_path = os.path.join(self.ContentPath, 'text_attribute.txt')
        adjusted_box_path = os.path.join(self.ContentPath, 'adjusted_text_box.txt')
        with open(attr_path, 'w')as f:
            f.write(f'{len(BoxProposals)}\n')
            for box, color in zip(BoxProposals, Colors):
                r, g, b, _ = color
                max_r = max(r, g, b, 1.0)
                r /= max_r
                g /= max_r
                b /= max_r
                emissive = 0. if random.random() < 0.95 else random.uniform(0.1, self.max_emissive)
                f.write(f'{box[0]} {box[1]} {box[2]} {box[3]} {r * emissive} {g * emissive} {b * emissive} 0.0 0.0 0.0\n')
        
        if self.is_debug:
            showBProposal(img_path, NBM, BoxProposals)
        
        # Step 4: activate text, adjust positions, perform triangulation, and generate mesh
        if self.is_debug:
            print('Ready to localize text.... ')
        _ = self.client.LoadTextAttr(attr_path)
        
        # Step 5: load adjusted box
        _ = self.client.GetAllTextLocation(len(BoxProposals), adjusted_box_path)
        if self.is_debug:
            print('Text box adjusted.... ')
        lines = open(adjusted_box_path, 'r').readlines()
        if self.is_debug:
            print('Adjusted text box loaded.... ')
        # List[(UL_X, UL_Y,
        #       UR_X, UR_Y,
        #       BR_X, BR_Y,
        #       BL_X, BL_Y)]
        box_loc = [list(map(float, line.split(','))) for line in lines if len(line) > 5]
        
        # Step 6: generate word images
        if (len(box_loc)!=len(Colors)):
            print('Some error happened ... ')
            print(len(box_loc), len(Colors))
            print('\n'.join(open(adjusted_box_path, 'r').readlines()))
        word_img_path = os.path.join(self.ContentPath, 'word_img_paths.txt')
        word_img_file_handle = open(word_img_path, 'w')
        word_img_file_handle.write(f'{len(BoxProposals)}\n')
        self.TextNum = 0
        overlapping_check_map = LightMap[:, :, 0].astype(np.float32) * 0.  # [HxW]
        map_h, map_w = overlapping_check_map.shape
        for ID, (loc, color) in enumerate(zip(box_loc, Colors)):
            # clockwise
            isValid = loc[0] > 0.5
            self.AllTextObjects[ID].IsValid = isValid
            LOC = loc[1:]
            point_0 = np.array(LOC[0:2])
            point_1 = np.array(LOC[2:4])
            point_2 = np.array(LOC[4:6])
            point_3 = np.array(LOC[6:8])
            box_height = int(min(norm(point_0-point_3), norm(point_1-point_2)))
            box_width = int(min(norm(point_0-point_1), norm(point_3-point_2)))
            
            if isValid:
                # check if this is drawable
                contour = np.stack([point_0, point_1, point_2, point_3], axis=0) # 4x2
                text_mask = np.zeros((map_h, map_w, 3), np.float32)
                cv2.fillPoly(text_mask, np.int_([contour]), (255, 255, 255))
                text_mask = (text_mask[:, :, 0] > 0).astype(np.float32)
                overlap_sum = np.sum(overlapping_check_map * text_mask)
                # this hyper-parameter needs tuning...
                if overlap_sum > 10.0:
                    self.AllTextObjects[ID].IsValid = False
                    word_img_file_handle.write(self.WordPainter[0].empty_path+'\n')
                    continue
                else:
                    overlapping_check_map += text_mask
                    
                if min(box_height, box_width) < 12:
                    if self.is_debug:
                        print(f" ---- The size is too small: {(box_height, box_width)}")
                    self.AllTextObjects[ID].IsValid = False
                    word_img_file_handle.write(self.WordPainter[0].empty_path+'\n')
                    continue
                
                if random.random() < self.use_real_img and min(box_height, box_width) > 50: 
                    if self.is_debug:
                        print(f" ---- Put bg img instead")
                    self.AllTextObjects[ID].IsValid = False
                    path = self.WordPainter[0].get_background(box_height, box_width, ID)
                    if path:
                        word_img_file_handle.write(path+'\n')
                    else:
                        word_img_file_handle.write(self.WordPainter[0].empty_path+'\n')
                    continue
                Painter = random.choice(range(len(self.WordPainter)))
                path, Texts, \
                    CBOX, BBOX, W, H = self.WordPainter[Painter].RenderWordImage(
                        Height=box_height,
                        Width=box_width,
                        WordColor=color,
                        SaveID=ID
                        )
                word_img_file_handle.write(path+'\n')
                self.AllTextObjects[ID].text = Texts
                self.AllTextObjects[ID].bbox = BBOX
                self.AllTextObjects[ID].cbox = CBOX
                self.TextNum += 1
                self.AllTextObjects[ID].adjusted_pos = np.array(LOC).reshape(4,1,2).astype(np.float32)
            else:
                word_img_file_handle.write(self.WordPainter[0].empty_path+'\n')
        word_img_file_handle.close()
        
        # Step 7: load word images
        self.client.LoadTextImages(word_img_path)

    @staticmethod
    def getNormalBoundaryDifference(NormalMap, DifferenceThreshold=100, reduceRatio=4, useCannyEdge=False):
        """
        Fist-order method
        :param NormalMap:
        :param DifferenceThreshold:
        :return: (h/4,w/4)
        """
        NormalMap = block_reduce(NormalMap, (reduceRatio, reduceRatio, 1), np.mean)
        if useCannyEdge:
            NormalMap = NormalMap.astype(np.uint8)
            edge = cv2.Canny(NormalMap, 500, 600).astype(np.float) * 1
        else:
            NormalMap = NormalMap.astype(np.float)
            h, w, _ = NormalMap.shape
            up_img = np.zeros_like(NormalMap)
            up_img[1:, :] = NormalMap[:h - 1, :]
            down_img = np.zeros_like(NormalMap)
            down_img[:h - 1, :] = NormalMap[1:, :]
            left_img = np.zeros_like(NormalMap)
            left_img[:, 1:] = NormalMap[:, :w - 1]
            right_img = np.zeros_like(NormalMap)
            right_img[:, :w - 1] = NormalMap[:, 1:]
            d_left = np.linalg.norm(left_img - NormalMap, 1, axis=2)
            d_right = np.linalg.norm(right_img - NormalMap, 1, axis=2)
            d_up = np.linalg.norm(up_img - NormalMap, 1, axis=2)
            d_down = np.linalg.norm(down_img - NormalMap, 1, axis=2)
            raw_edge = np.stack([d_up, d_down, d_left, d_right], axis=-1)
            # thresholding + eliminating sky
            dd_img = np.max(raw_edge, axis=-1) + (np.sum(NormalMap, axis=2) < 10).astype(np.float) * (DifferenceThreshold+100)
            edge = (dd_img > DifferenceThreshold).astype(np.uint8)
        if len(edge.shape) == 3:
            return edge[:, :, 0]
        else:
            return edge
    
    @staticmethod
    def propseTextColor(LightMap, Proposals, is_debug):
        text_num = len(Proposals)
        Colors = []
        LightMap_float = LightMap.astype(np.float)
        if is_debug:
            print("Start to sample colors...")
        for text_id in range(text_num):
            UL_x, UL_y, BR_x, BR_y = Proposals[text_id]
            avg_color = np.mean(np.mean(LightMap_float[UL_y:BR_y, 
                                                       UL_x:BR_x], 
                                        axis=0), 
                                axis=0, 
                                keepdims=True).astype(np.float)[:3]
            count = 0
            while True:
                color = random.random()
                if  color< 0.15:
                    # white
                    randomColor = np.random.uniform(230, 254, size=(1, 3)).astype(np.float) / 255 * random.randint(150, 255)
                elif color < 0.30:
                    # black
                    randomColor = np.random.uniform(0, 30, size=(1, 3)).astype(np.float) / 30 * random.randint(1, 120)
                elif color < 0.6:
                    # select high contrast
                    randomColor1 = np.random.uniform(230, 254, size=(1, 3)).astype(np.float) / 255 * random.randint(150, 255)
                    randomColor2 = np.random.uniform(0, 30, size=(1, 3)).astype(np.float) / 30 * random.randint(1, 120)
                    Distance1 = float(np.mean(np.abs(randomColor1 - avg_color)))
                    Distance2 = float(np.mean(np.abs(randomColor2 - avg_color)))
                    if Distance1 > Distance2:
                        randomColor = randomColor1
                    else:
                        randomColor = randomColor2
                else:
                    randomColor = np.random.uniform(0, 255, size=(1, 3)).astype(np.float) 
                    randomColor /= (np.max(randomColor) + 1e-3)
                    randomColor *= (np.random.random() + 1e-5)**1.7 * 255
                Distance = float(np.mean(np.abs(randomColor - avg_color)))
                if Distance > 40 or count > 10:
                    randomColor = randomColor[0]
                    break
                else:
                    count += 1
            Colors.append((int(randomColor[0]),
                           int(randomColor[1]),
                           int(randomColor[2]),
                           random.randint(200, 255)))
        return Colors

    def RetrieveDataStep(self, imgpath):
        """
        WordBoxes: List(ndarray 4x2)
        CharBoxes: List(ndarray 4x2)
        """
        
        # step 1: iterate through text instances, obtain coordinates of four corners, use TextInstance Attributes to calculate screen location
        Texts = []
        WordBoxes = []
        CharBoxes = []
        for TextID in range(self.MaxTextCount):
            if self.AllTextObjects[TextID].IsValid:
                BoxRelativePosition = self.AllTextObjects[TextID].adjusted_pos[:, 0, :]  #  4x1x2 -> 4x2
                source_pts = np.array([[0., 0.], [1., 0.], [1., 1.], [0., 1.]]).astype(np.float32)  # 4x2
                h, status = cv2.findHomography(source_pts, BoxRelativePosition)  # h = ndarray(3x3)
                h = h.transpose()
                
                # text
                Texts.extend(self.AllTextObjects[TextID].text)
                
                # bbox
                bbox = self.AllTextObjects[TextID].bbox  # nx4x2
                if True:
                    # homography transformation
                    bbox = bbox.reshape((-1, 2)) # 4n x 2
                    bbox = np.concatenate([bbox, np.ones((bbox.shape[0], 1), dtype=np.float32)],
                                          axis=-1) # 4n x 3
                    bbox = np.matmul(bbox, h)
                    bbox = bbox / bbox[:, 2:3]
                    screenbox = bbox[:, :2].reshape((-1, 4, 2)) # 4n x 2 -> n x 4 x 2
                else:
                    # affine transformation
                    UpperEdge = (1 - bbox[:, :, :1]) * BoxRelativePosition[:1, :, :] + bbox[:, :, :1] * BoxRelativePosition[
                                                                                                            1:2, :, :]  # nx4x2
                    BottomEdge = (1 - bbox[:, :, :1]) * BoxRelativePosition[3:, :, :] + bbox[:, :, :1] * BoxRelativePosition[
                                                                                                            2:3, :, :]  # nx4x2
                    screenbox = (1 - bbox[:, :, 1:]) * UpperEdge + bbox[:, :, 1:] * BottomEdge # nx4x2
                # screenbox *= self.HighResFactor
                WordBoxes.extend(
                    [
                        [Point[0][0], Point[0][1], Point[1][0], Point[1][1], Point[2][0], Point[2][1], Point[3][0], Point[3][1]] for Point in screenbox.astype(np.int32).tolist() # nx8
                    ]
                )
                
                # cbox
                cbox = self.AllTextObjects[TextID].cbox  ## nx4x2
                if True:
                    # homography transformation
                    cbox = cbox.reshape((-1, 2)) # 4n x 2
                    cbox = np.concatenate([cbox, np.ones((cbox.shape[0], 1), dtype=np.float32)],
                                          axis=-1) # 4n x 3
                    cbox = np.matmul(cbox, h)
                    cbox = cbox / cbox[:, 2:3]
                    screencbox = cbox[:, :2].reshape((-1, 4, 2)) # 4n x 2 -> n x 4 x 2
                else:
                    # affine transformation
                    UpperEdge = (1 - cbox[:, :, :1]) * BoxRelativePosition[:1, :, :] + cbox[:, :, :1] * BoxRelativePosition[
                                                                                                        1:2, :, :]  # nx4x2
                    BottomEdge = (1 - cbox[:, :, :1]) * BoxRelativePosition[3:, :, :] + cbox[:, :,
                                                                                        :1] * BoxRelativePosition[
                                                                                            2:3, :, :]  # nx4x2
                    screencbox = (1 - cbox[:, :, 1:]) * UpperEdge + cbox[:, :, 1:] * BottomEdge  # nx4x2
                # screencbox *= self.HighResFactor
                CharBoxes.extend(
                    [
                        [Point[0][0], Point[0][1], Point[1][0], Point[1][1], Point[2][0], Point[2][1], Point[3][0], Point[3][1]] for Point in screencbox.astype(np.int32).tolist() # nx8
                    ]
                )
            self.AllTextObjects[TextID].IsValid = False
        return imgpath, Texts, WordBoxes, CharBoxes, self.TextNum


TextPlacement = {
    "default": TextNormalBasedLocalization
}