# (1) Synthetic Scene Text Dataset from 3D World

| Lanuages | Num of Images | Num of Text | Baidu Drive | Google Drive |
| :---: | :---: | :---: | :---: | :---: |
| English/Latin | 728K | ~20M | [Link](https://pan.baidu.com/s/1e4SNTG2QSM5XBhxw80D8qw)  password: 2h8d | [Link](https://drive.google.com/open?id=14i-v0FTRy0TqgiFf-dl4SKRB5NNIkXSG) |
| Multilingual | 674K | ~18M | [Link](https://pan.baidu.com/s/1DCrs0KitEC1RBAKn9jo_KA)  password: tddl | [Link](https://drive.google.com/drive/folders/1M9jVQqnda0ImmcwoQFK_WUW9XWu2G82R?usp=sharing) |

The multilingual version consists of the following 10 languages: _Arabic_, _English_, _French_, _Chinese_, _German_, _Korean_, _Japanese_, _Italian_, _Bangla_, _Hindi_

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

Note that there may be a very small proportion of wrong labels. They are caused by the defects in some scene models. These wrong samples are characterized by very small sizes. You can discard these samples by filtering out word boxes that are less than 10 pixels high. 

# (2) Demo UE Project(s)

| Scene Name | Baidu Drive | Google Drive |
| :---: | :---: | :---: |
| Realistic Rendering | [Link](https://pan.baidu.com/s/1pXw-tRsOHIg3wkVpfTwoaQ) password: wgja | [Link](https://drive.google.com/file/d/1CKW8KH4jybPux8oIYG-yRV3arrrNlQ2a/view?usp=sharing) |

How-to: 

1. download and uncompress the project
2. in UE4.22, load the following file: `Demo/Demo.uproject`

# (3) UnrealText resources

| Resources | Baidu Drive | Google Drive |
| :---: | :---: | :---: |
| background images | [Link](https://pan.baidu.com/s/1LJoBoL0GCyn8St6Y9s8lFg) password: 3x3r | [Link](https://drive.google.com/open?id=1DHJwxTF0pE35aEPM-nuN3E2tgMac4FyE) |
| fonts & corpus | [Link](https://pan.baidu.com/s/1pw-W3ggXuiRzgQnxg1sOww) password: ip8w | [Link](https://drive.google.com/open?id=1j2q3qOn_k4SyizfKjw6xb1mSWUV4G2du) |

# (4) Packaged Scene Executables

| Scenes | Baidu Drive | Google Drive |
| :---: | :---: | :---: |
| All 30 scene executables | [Link](https://pan.baidu.com/s/1x-qaeKOJMfJoO7WGzDtGkA0)  密码:br31 | [Link](https://drive.google.com/open?id=1Vv1m5DNgffhjoAXId1bOKF6HXnZouOxM) |

How-to: 

1. download and uncompress the project
2. cd to `$Name/$Name/Binaries/Linux/`, and double-click the executable `./Demo`
3. alternatively, you can launch it in terminal, `./$Name/$Name/Binaries/Linux/Demo`
