// Weichao Qiu @ 2016
#pragma once
#include "CommandDispatcher.h"
#include "CommandHandler.h"
#include "StickerTextActor.h"
#include "CameraWanderActor.h"
#include "EnvJitterActor.h"

/** 
 * Handle vget/vset /object/ commands.
 * The definition of object is any actor contains a MeshComponent in the runtime
 * This includes StaticMesh, SkeletalMesh, ProceduralMesh (tree), Landscape, Foliage
 * Object is different than actor, only actor contains mesh can be called as object
*/
class FObjectHandler : public FCommandHandler
{
public:
	void RegisterCommands();

private:
	// See RegisterCommands in ObjectHandler.cpp for what each function is doing.
	FExecStatus GetObjectList(const TArray<FString>& Args);

	FExecStatus SpawnBox(const TArray<FString>& Args);

	FExecStatus Spawn(const TArray<FString>& Args);

	FExecStatus GetAnnotationColor(const TArray<FString>& Args);

	FExecStatus SetAnnotationColor(const TArray<FString>& Args);

	FExecStatus GetObjectName(const TArray<FString>& Args);

	FExecStatus CurrentObjectHandler(const TArray<FString>& Args);

	FExecStatus GetLocation(const TArray<FString>& Args);

	FExecStatus GetRotation(const TArray<FString>& Args);

	FExecStatus SetLocation(const TArray<FString>& Args);

	FExecStatus SetRotation(const TArray<FString>& Args);

	FExecStatus SetShow(const TArray<FString>& Args);

	FExecStatus SetHide(const TArray<FString>& Args);

	FExecStatus GetMobility(const TArray<FString>& Args);

	FExecStatus GetObjectVertexLocation(const TArray<FString>& Args);

	FExecStatus Destroy(const TArray<FString>& Args);

	FExecStatus GetUClassName(const TArray<FString>& Args);

	FExecStatus GetComponents(const TArray<FString>& Args);

	FExecStatus SetName(const TArray<FString>& Args);

	// UnrealText utilities
	AStickerTextActor* GetStickerTextActor_I_th(int32 Index);
    // Handle_SetTextPositionFromScreen
	// FExecStatus SetStickerTextCoordinates(const TArray<FString>& Args);
	// Handle_ResizeAndGenerateMesh
	FExecStatus SetStickerTextMesh(const TArray<FString>& Args);
	// Handle_LoadTextFromPngPath
	FExecStatus OrderTextToLoad(const TArray<FString>& Args);
	// SetStickerTextGlowing
	FExecStatus SetStickerTextGlowing(const TArray<FString>& Args);
	// GetStickerTextCoordinates
	FExecStatus GetStickerTextCoordinates(const TArray<FString>& Args);
	// use line trace to determine how far it can go
	FExecStatus GetCameraMoveRange(const TArray<FString>& Args);
	// move camera
	FExecStatus MoveCamera(const TArray<FString>& Args);
	// change env
	FExecStatus EnvJitter(const TArray<FString>& Args);
	// load text attributes
	FExecStatus LoadTextAttr(const TArray<FString>& Args);
	// Get adjusted locations and save them to the given path
	FExecStatus GetAdjusted(const TArray<FString>& Args);
	// Get adjusted locations and save them to the given path
	FExecStatus LoadTextImages(const TArray<FString>& Args);

	// get camera actor
	ACameraWanderActor* GetCameraActor(int32 Index);

	// get env jitter
	AEnvJitterActor* GetEnvController();

	// UnrealText utilities
	
#if WITH_EDITOR
	FExecStatus SetActorLabel(const TArray<FString>& Args);

	FExecStatus GetActorLabel(const TArray<FString>& Args);
#endif
};
