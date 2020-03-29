import argparse
import os
import os.path as osp

parser = argparse.ArgumentParser(formatter_class=argparse.ArgumentDefaultsHelpFormatter)
parser.add_argument('--MovementModule', type=str, default='default', help='')
parser.add_argument('--EnvModule', type=str, default='default', help='')
parser.add_argument('--TextModule', type=str, default='default', help='')
parser.add_argument('--num_gen', type=int, default=100, help='the desired number of images to generate')
parser.add_argument('--anchor_freq', type=int, default=100, help='')
parser.add_argument('--height', type=int, default=720, help='')
parser.add_argument('--width', type=int, default=1080, help='')
parser.add_argument('--HighResFactor', type=float, default=2.0, help='')
parser.add_argument('--MaxTextNum', type=int, default=15, help='')
parser.add_argument('--FontSize', type=str, default='15/128', help='')
parser.add_argument('--max_emissive', type=float, default=10, help='')
parser.add_argument('--DataStoragePath', type=str, default='../../../GeneratedData/DataFraction_1', help='')
parser.add_argument('--engine_root', type=str, default='./', help='')  # TODO set later
parser.add_argument('--camera_anchor_folder', type=str, default='./camera_anchors/', help='')
parser.add_argument('--EnvName', type=str, default='', help='')
parser.add_argument('--dark_th', type=int, default=5, help='threshold for filtering out areas that are too dark...')
parser.add_argument('--use_real_img', type=float, default=0.10)
parser.add_argument('--languages', nargs='+', type=str, default=['Latin'], help='languages to work on')
    # select from: 'Arabic', 'English', 'French', 'Chinese', 'German', 'Korean', 'Japanese', 'Italian', 'Bangla', 'Hindi', 'Latin'
    # 'Latin' = 'English' + 'French' + 'German' + 'Italian'
parser.add_argument('--is_debug', action='store_true', default=False)
parser.add_argument('--UnrealProjectName', type=str, default='RealisticRendering', help='') # TODO set later.. 
data_gen_opt_, _ = parser.parse_known_args()
data_gen_opt_.FontSize = list(map(int, data_gen_opt_.FontSize.split('/')))
data_gen_opt_.camera_anchor_filepath = osp.join(data_gen_opt_.camera_anchor_folder, f'{data_gen_opt_.UnrealProjectName}.txt')
data_gen_opt = dict()

for key in dir(data_gen_opt_):
    if key.startswith('__'):
        continue
    data_gen_opt[key] = getattr(data_gen_opt_, key)
