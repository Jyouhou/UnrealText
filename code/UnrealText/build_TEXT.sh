export UE_Root="~/UnrealEngine422" # your path to the UE root folder
python3 build.py --UE4 $UE_Root >> build.log.txt
more build.log.txt | grep "BUILD SUCCESSFUL"