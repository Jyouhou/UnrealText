# (1) Synthetic Scene Text Dataset from 3D World
| Language | Num of Images | Num of Text | Download Link | 
| :---: | :---: | :---: | :---: |
| Latin/English | 728K | ~20M | [Baidu Drive](https://pan.baidu.com/s/1e4SNTG2QSM5XBhxw80D8qw)  password:2h8d |
| Multilingual (10 langs) | 674K | ~18M | To Be Uploaded |

Both datasets are __very__ large (~150GB). Therefore, I split them into "several" files (~130). They are organzied as follows:

```
./
+---sub_0
    +---imgs
    |   0.jpg
    |   1.jpg
    |   ...
    |
    +---labels
    |   0.json
    |   1.json
    |   ...
    |
+---sub_1
+---sub_2
+---sub_3
...
+---sub_100
...
```

The labels are stored in the following format:

```
{
    "imgfile":str path to the corresponding image file, e.g. "imgs/0.jpg",
    "bbox": List[
                word_i(8 float):[x0, y0, x1, y1, x2, y2, x3, x4] 
                (from upper left corner, clockwise),
            ],
    "cbox": List[
                char_i(8 float):[x0, y0, x1, y1, x2, y2, x3, x4] 
                (from upper left corner, clockwise),
            ],
    "text": List[str]
}
```

# (2) Demo UE Project(s)

| Scene Name | Download Link | 
| :---: | :---: |
| Realistic Rendering | To Be Uploaded |

How-to: 

1. download and uncompress the project
2. in UE4.22, load the following file: `Demo_RealisticRend/Demo_RealisticRend.uproject`

# (3) Packaged Scene Executables

| Scene Name | Download Link | 
| :---: | :---: |
| Realistic Rendering | [Baidu Drive](https://pan.baidu.com/s/1Pb4dO860LLRY1yqvMaqvWQ)  password:s3ol |

How-to: 

1. download and uncompress the project
2. cd to `Demo_RealisticRend/Demo_RealisticRend/Binaries/Linux/`, and double-click the executable `Demo_RealisticRend`
3. alternatively, you can launch it in terminal, `./Demo_RealisticRend/Demo_RealisticRend/Binaries/Linux/Demo_RealisticRend`
