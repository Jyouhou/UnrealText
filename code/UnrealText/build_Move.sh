# rm -r Source/
# rm -r Plugins/
# cp -r "/home/shangbang/Documents/SynthV2/UnrealTextFast 4.22/Plugins/UnrealCV/Source" ./
# python3 build.py --UE4 "/home/shangbang/Documents/SynthV2/UnrealEngine422/"
rm -r "/home/shangbang/Documents/SynthV2/UnrealTextFast/Plugins/UnrealCV" # This step is important!
cp -r Plugins/UnrealCV "/home/shangbang/Documents/SynthV2/UnrealTextFast/Plugins/"
rm -r "/home/shangbang/Documents/SynthV2/UnrealText/UnrealCV_TEXT_plugin/Source"
cp -r "/home/shangbang/Documents/SynthV2/UnrealTextFast/Plugins/UnrealCV/Source" "/home/shangbang/Documents/SynthV2/UnrealText/UnrealCV_TEXT_plugin/"
