import numpy as np
import random


class EnvRendererBase(object):
    def step(self, *args, **kwargs):
        raise NotImplementedError()

class NullEnvRenderer(EnvRendererBase):
    def __init__(self, *args, **kwargs):
        super().__init__()
        self.client = kwargs.get('client', None)
        if self.client is None:
            raise ValueError()

    def step(self, *args, **kwargs):
        pass
    
class DefaultEnvRenderer(EnvRendererBase):
    def __init__(self, *args, **kwargs):
        super().__init__()
        self.client = kwargs.get('client', None)
        if self.client is None:
            raise ValueError()

    def step(self, *args, **kwargs):
        self.client.randomizeEnv('All')

EnvSet = {
    "null": NullEnvRenderer,
    'default': DefaultEnvRenderer
}
