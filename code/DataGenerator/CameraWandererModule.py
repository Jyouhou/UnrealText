import random


class CameraWanderer(object):
    def step(self, *args, **kwargs):
        raise NotImplementedError()


class NullWanderer(CameraWanderer):
    def __init__(self, *args, **kwargs):
        super().__init__()

    def step(self, *args, **kwargs):
        pass


class RandomWanderer(CameraWanderer):
    def __init__(self, *args, **kwargs):
        super().__init__()
        self.client = kwargs.get('client', None)  
        self.anchor_freq = kwargs.get('anchor_freq', 100)  # after every `anchor_freq` steps, reset the camera location
        self.camera_anchor_filepath = kwargs.get('camera_anchor_filepath', './camera_anchors/UrbanCity.txt')
        self.preset_camera_anchors = self._load_anchors()
        if self.client is None:
            raise ValueError()

    def step(self, *args, **kwargs):
        step = kwargs.get('step', 0)
        if step % self.anchor_freq == 0 or kwargs.get('force_change_camera_anchor', False):
            self.client.setCameraLocation(*(random.choice(self.preset_camera_anchors)))
            print('Camera locaton set to a pre-selected anchor.')
        self.client.stepForward('default')
    
    def _load_anchors(self):
        print('Start to load preset camera anchors... ', end='')
        contents = open(self.camera_anchor_filepath, 'r').readlines()
        anchors = []
        for line in contents:
            if len(line) > 0:
                x, y, z = list(map(float, line.split()))
                anchors.append((x, y, z))
        print(f'{len(anchors)} anchors found.')
        return anchors


CameraSet = {
    "null": NullWanderer, # or manual mode
    "default": RandomWanderer
}
