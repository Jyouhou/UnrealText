import os.path as osp
from options import data_gen_opt
from DataGeneratorModule import DataGenerator, StartEngine


StartEngine(data_gen_opt["UnrealProjectName"])
Generator = DataGenerator(**data_gen_opt)
Generator.StartGeneration(data_gen_opt["num_gen"])
