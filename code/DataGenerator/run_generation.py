import os.path as osp
from options import data_gen_opt
from DataGeneratorModule import DataGenerator


Generator = DataGenerator(**data_gen_opt)
Generator.StartGeneration(data_gen_opt.num_gen)
