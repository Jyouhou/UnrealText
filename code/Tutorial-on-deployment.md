# Tutorial
If you would like to build your only UE project or use new scene models, you can follow the following step 1-5. If you want to try the demo projects and precompiled executables, you should jump to Step 6.2. 
You can click the _\[Fig\]_ link to see illustrations.

## Dependencies
- [unrealcv](http://docs.unrealcv.org/en/master/tutorials/getting_started.html#install-unrealcv-python-library)
- arabic_reshaper: `pip install arabic_reshaper`
- bidi: `pip install python-bidi`


## From scratch

### Step 1: set up UE4.22
1. Download and compile Unreal Engine 4.22
2. Open a blank project
3. Copy the _Realistic Rendering_ assets and the whole _UnrealText_ folder from `Assets/RealisticRenderingAssets` into the `Content` folder of the new project
4. Restart UE, load and set `Maps/Room` as the _Editor Startup Map_ and _Game Default Map_ in `Edit -> Project Settings`. 


### Step 2: set up UnrealText plugin
1. cd to `UnrealText/code/UnrealText/`
2. In `./build_TEXT.sh`, specify the full path to the root of your Unreal Engine 4.22 after the `--UE4` argument
3. Compile the UnrealText plugin by running the script `./build_TEXT.sh`
4. Copy the `Plugins` folder to the root of your UE project in Step 1
5. Restart UE, and you should see the prompt about the new plugin; Enable it
6. Make sure the functions that inherit from UnrealCV are also working; e.g. `vset /viewmode normal` and `vset /viewmode lit`
7. In the Content Browser, click `View Options -> Show Plugin Content` [\[Fig\]](https://github.com/Jyouhou/UnrealText/blob/master/imgs/contentbrowser.png)

### Step 3: set up the scene
1. Wander around the scene, delete all objects that have text on them (or cover them)
2. Modify `your_ue422_root/Engine/Binaries/Linux/unrealcv.ini`: set _Width_ to 1080 and _Height_ to 720
3. Change the `Play` mode to `New Editor Window (PIE)` [\[Fig\]](https://github.com/Jyouhou/UnrealText/blob/master/imgs/PIE.png)
<!-- 4. In `Edit -> Editor Preferences -> Level Editor -> Play`, change `New Window Size` to 1080x720 [\[Fig1\]](https://github.com/Jyouhou/UnrealText/blob/master/imgs/ep1.png) [\[Fig2\]](https://github.com/Jyouhou/UnrealText/blob/master/imgs/ep2.png) -->
5. In `Edit -> Editor Preferences` [\[Fig\]](https://github.com/Jyouhou/UnrealText/blob/master/imgs/ep1.png), un-tick `use less cpu in background` 
6. In `Edit -> Project Settings`, change `Default GameMode` to `UnrealcvGameMode`
7. From toolbar, in `Settings -> World Settings`, change `GameMode Override` to `UnrealcvGameMode` [\[Fig\]](https://github.com/Jyouhou/UnrealText/blob/master/imgs/ws1.png)
7. From `Content Browser -> Content -> UnrealCV C++ Classes -> UnrealCV -> Public -> UnrealText`, draw and instantiate the following actors: `CameraWanderActor`, `EnvJitterActor`, `StickerTextActor`. Note that the number of `StickerTextActor` is the maximum number of textregion we can place. [\[Fig\]](https://github.com/Jyouhou/UnrealText/blob/master/imgs/content.png)
8. From `Visual Effects` add `ExponentialHeightFog` into our scene. [\[Fig\]](https://github.com/Jyouhou/UnrealText/blob/master/imgs/fog.png)
9. Select `Medium` in `Build -> Lighting Quality`, and click `Build Lighting Only` [\[Fig\]](https://github.com/Jyouhou/UnrealText/blob/master/imgs/light.png)

### Step 4: EnvJitterActor hyperparameter selection
1. `MaxFogDensity` and `MaxFogOpacity` correspond to those in the `ExponentialHeightFog` actor. We can adjust those attributes in `ExponentialHeightFog` to determine the maximum fog intensity&opacity under which the text are still visible. In our demo, we set to 0.2 and 1.0 respectively.
2. `LightIntUb` is the maximum light intensity. Since point light source is much weaker, the intensity of point light is multiplied by `LightDirPointMul`. We can ajdust the lighting intensity of the lighting objects to detemine a suitable range of lighting intensity to maintain legibility of the text objects. 


### Step 5: select camera anchors
We release the camera anchors we use in our research in `UnrealText/code/DataGenerator/camera_anchors`. If you want to label new anchors, please follow the instructions here:

1. Set bindings in `Editor -> Project Setting -> Engine -> Input` as specified in [\[Fig\]](https://github.com/Jyouhou/UnrealText/blob/master/imgs/binding.png)
2. From `Content Browser -> Content -> UnrealCV C++ Classes -> UnrealCV -> Public -> UnrealText`, instantiate the following actor: `AnchorRecordPawn`
3. Configure the Pawn: `Auto Possess Player - player 0`, `AI Controller Class - Player Controller`, `Auto Receive Input - Player 0`;  click `Add Component` to add `Scene`; you can modify the `Moving Speed` attribute to slow-down or speed-up it [\[Fig\]](https://github.com/Jyouhou/UnrealText/blob/master/imgs/pawn.png)
4. Start the game, use `WSAD` to move and mouse to change viewpoints; left-click to save the current location
5. The camera anchors are saved in `your_ue422_root/Engine/Binaries/Linux/camera_trajectory.txt`
6. Make sure you delete the `AnchorRecordPawn` before you start to generate data in the next step

### Step 6: generate data
#### 6.1 package your project!
1. Click `File -> Package Project -> Linux` to generate executables for the game environment
2. Copy `unrealcv.ini` into the `Binaries/Linux` folder

#### 6.2 generate data
1. cd to `UnrealText/code/DataGenerator`
2. `mkdir ../../../resources`, download resources([Baidu Drive](https://pan.baidu.com/s/1MfEeqWF0z_AOdWGW48DJcw) password:0cgw; [Google Drive](https://drive.google.com/drive/folders/1IrvNeMM8R1wyrNUEK8B7zz0fiVAVxyIc?usp=sharing)) and put them into this folder
3. `mkdir ../../../PackagedEnvironments`, put the generated game file or the downloaded ones into this folder
4. run: `python3 run_generation.py --UnrealProjectName $SceneName --languages Latin` 

#### 6.3 Visualize
The generated data will be stored in the `$YourUnrealTextPath/../GeneratedData/DataFraction_*` folder. `cd` into one of these folders, run `python3 vis.py`. You will need Matplotlib to do so. 


## Details:

(1) How to download & compile UE4.22?

Follow instructions from [this post](https://microsoft.github.io/AirSim/docs/build_linux/):

1. [get register](https://www.unrealengine.com/ja/) with Epic Games
2. clone the UE GitHub repo and compile:

```
git clone -b 4.22 https://github.com/EpicGames/UnrealEngine.git
cd UnrealEngine
./Setup.sh
./GenerateProjectFiles.sh
make
```

(2) After 1-3 in step 6.2, your working directory should look like:

```
./
+---PackagedEnvironment
    +---SceneName
        +---Demo
            +---Binaries
                +---Linux
                    |   Demo
                    |   unrealcv.ini
                ....
        +---Engine
            ...
+---resources
    +---bg_img
        |   imnames.cp
        |   ant+hill_1.jpg
        |   ...
        |
    +---fonts&corpus
        +---Arabic
            ...
+---UnrealText
    +---Assets
    +---code
    +---imgs
        ...
+---GeneratedData
```
