// Weichao Qiu @ 2017
#include "ObjectHandler.h"

#include <fstream>
#include <iostream>

#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/CoreUObject/Public/UObject/UObjectGlobals.h"
#include "Runtime/CoreUObject/Public/UObject/Package.h"

#include "UnrealcvServer.h"
#include "Controller/ActorController.h"
#include "VertexSensor.h"
#include "Utils/StrFormatter.h"
#include "Utils/UObjectUtils.h"
#include "VisionBPLib.h"
#include "CubeActor.h"
#include "CommandInterface.h"
#include "Engine.h"
#include "Engine/Light.h"

// TODO: not implemented by UnrealCV author?
FExecStatus GetObjectMobility(const TArray<FString>& Args);

AStickerTextActor* FObjectHandler::GetStickerTextActor_I_th(int32 Index)
{
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AStickerTextActor::StaticClass(), FoundActors);
	if (FoundActors.Num() <= Index)
	{
		return nullptr;
	}
	return Cast<AStickerTextActor>(FoundActors[Index]);
}

ACameraWanderActor* FObjectHandler::GetCameraActor(int32 Index)
{
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ACameraWanderActor::StaticClass(), FoundActors);
	if (FoundActors.Num() <= Index)
	{
		return nullptr;
	}
	return Cast<ACameraWanderActor>(FoundActors[Index]);
}

AEnvJitterActor* FObjectHandler::GetEnvController()
{
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AEnvJitterActor::StaticClass(), FoundActors);
	if (FoundActors.Num() <= 0)
	{
		return nullptr;
	}
	return Cast<AEnvJitterActor>(FoundActors[0]);
}

void FObjectHandler::RegisterCommands()
{
	CommandDispatcher->BindCommand(
		"vget /objects",
		FDispatcherDelegate::CreateRaw(this, &FObjectHandler::GetObjectList),
		"Get the name of all objects"
	);

	CommandDispatcher->BindCommand(
		"vset /objects/spawn_cube",
		FDispatcherDelegate::CreateRaw(this, &FObjectHandler::SpawnBox),
		"Spawn a box in the scene for debugging purpose."
	);

	CommandDispatcher->BindCommand(
		"vset /objects/spawn_cube [str]",
		FDispatcherDelegate::CreateRaw(this, &FObjectHandler::SpawnBox),
		"Spawn a box in the scene for debugging purpose, with optional argument name."
	);

	CommandDispatcher->BindCommand(
		"vset /objects/spawn [str]",
		FDispatcherDelegate::CreateRaw(this, &FObjectHandler::Spawn),
		"Spawn an object with UClassName as the argument."
	);

	CommandDispatcher->BindCommand(
		"vget /object/[str]/location",
		FDispatcherDelegate::CreateRaw(this, &FObjectHandler::GetLocation),
		"Get object location [x, y, z]"
	);

	CommandDispatcher->BindCommand(
		"vset /object/[str]/location [float] [float] [float]",
		FDispatcherDelegate::CreateRaw(this, &FObjectHandler::SetLocation),
		"Set object location [x, y, z]"
	);

	CommandDispatcher->BindCommand(
		"vget /object/[str]/rotation",
		FDispatcherDelegate::CreateRaw(this, &FObjectHandler::GetRotation),
		"Get object rotation [pitch, yaw, roll]"
	);

	CommandDispatcher->BindCommand(
		"vset /object/[str]/rotation [float] [float] [float]",
		FDispatcherDelegate::CreateRaw(this, &FObjectHandler::SetRotation),
		"Set object rotation [pitch, yaw, roll]"
	);

	CommandDispatcher->BindCommand(
		"vget /object/[str]/vertex_location",
		FDispatcherDelegate::CreateRaw(this, &FObjectHandler::GetObjectVertexLocation),
		"Get vertex location"
	);

	CommandDispatcher->BindCommand(
		"vget /object/[str]/color",
		FDispatcherDelegate::CreateRaw(this, &FObjectHandler::GetAnnotationColor),
		"Get the labeling color of an object (used in object instance mask)"
	);

	CommandDispatcher->BindCommand(
		"vset /object/[str]/color [uint] [uint] [uint]",
		FDispatcherDelegate::CreateRaw(this, &FObjectHandler::SetAnnotationColor),
		"Set the labeling color of an object [r, g, b]"
	);

	CommandDispatcher->BindCommand(
		"vget /object/[str]/mobility",
		FDispatcherDelegate::CreateRaw(this, &FObjectHandler::GetMobility),
		"Is the object static or movable?"
	);

	CommandDispatcher->BindCommand(
		"vset /object/[str]/show",
		FDispatcherDelegate::CreateRaw(this, &FObjectHandler::SetShow),
		"Show object"
	);

	CommandDispatcher->BindCommand(
		"vset /object/[str]/hide",
		FDispatcherDelegate::CreateRaw(this, &FObjectHandler::SetHide),
		"Hide object"
	);

	CommandDispatcher->BindCommand(
		"vset /object/[str]/destroy",
		FDispatcherDelegate::CreateRaw(this, &FObjectHandler::Destroy),
		"Destroy object"
	);

	CommandDispatcher->BindCommand(
		"vget /object/[str]/uclass_name",
		FDispatcherDelegate::CreateRaw(this, &FObjectHandler::GetUClassName),
		"Get the UClass name for filtering objects"
	);

	CommandDispatcher->BindCommand(
		"vset /object/[str]/name [str]",
		FDispatcherDelegate::CreateRaw(this, &FObjectHandler::SetName),
		"Set the name of the object"
	);
	
	// UnrealText Command
	CommandDispatcher->BindCommand(TEXT("vget /object/stickertext/coor [uint] [float] [float] [float] [float] [float] [float] [float] [float]"), 
		FDispatcherDelegate::CreateRaw(this, &FObjectHandler::SetStickerTextCoordinates), 
		"Set the four coordinates (screen space) of an AStickerTextActor instance, and return the coordinates after adjustment");

	CommandDispatcher->BindCommand(TEXT("vset /object/stickertext/aspect [uint] [float]"), 
		FDispatcherDelegate::CreateRaw(this, &FObjectHandler::SetStickerTextMesh), 
		"adjust the mesh to new aspect ratio; non-positive value for no adjustment");

	CommandDispatcher->BindCommand(TEXT("vset /object/stickertext/load [uint] [str]"), 
		FDispatcherDelegate::CreateRaw(this, &FObjectHandler::OrderTextToLoad), 
		"order the text actor to load from a given text img file; be careful that the file name should not contain any spaces");

	CommandDispatcher->BindCommand(TEXT("vset /object/stickertext/glow [uint] [float] [float] [float]"), 
		FDispatcherDelegate::CreateRaw(this, &FObjectHandler::SetStickerTextGlowing), 
		"Set the glowing parameters, in the order of R/G/B, range >1 for glowing; remember to limit the norm size, a suitable size is 200~500; ");

	CommandDispatcher->BindCommand(TEXT("vget /object/stickertext/getlocation [uint]"), 
		FDispatcherDelegate::CreateRaw(this, &FObjectHandler::GetStickerTextCoordinates), 
		"return the coordinates in screen space");

	CommandDispatcher->BindCommand(TEXT("vget /object/cameramoverangefrom [float] [float]"), 
		FDispatcherDelegate::CreateRaw(this, &FObjectHandler::GetCameraMoveRange), 
		"calculate how far the camera can go straight");
	
	CommandDispatcher->BindCommand(TEXT("vget /object/LoadTextAttr [str]"), 
		FDispatcherDelegate::CreateRaw(this, &FObjectHandler::LoadTextAttr), 
		"LoadTextAttr");

	CommandDispatcher->BindCommand(TEXT("vget /object/GetAdjusted [uint] [str]"), 
		FDispatcherDelegate::CreateRaw(this, &FObjectHandler::GetAdjusted), 
		"GetAdjusted");
	
	CommandDispatcher->BindCommand(TEXT("vget /object/LoadTextImages [str]"), 
		FDispatcherDelegate::CreateRaw(this, &FObjectHandler::LoadTextImages), 
		"LoadTextImages");
	
	// by default, str = default, use the camera wander actor
	CommandDispatcher->BindCommand(TEXT("vget /object/walk [str]"), 
		FDispatcherDelegate::CreateRaw(this, &FObjectHandler::MoveCamera), 
		"MoveCamera");

	// by default, str = default, use the camera wander actor
	CommandDispatcher->BindCommand(TEXT("vget /object/env [str]"), 
		FDispatcherDelegate::CreateRaw(this, &FObjectHandler::EnvJitter), 
		"EnvJitter");

#if WITH_EDITOR
	CommandDispatcher->BindCommand(
		"vget /object/[str]/label",
		FDispatcherDelegate::CreateRaw(this, &FObjectHandler::GetActorLabel),
		"Get actor label"
	);

	CommandDispatcher->BindCommand(
		"vset /object/[str]/label [str]",
		FDispatcherDelegate::CreateRaw(this, &FObjectHandler::SetActorLabel),
		"Set actor label"
	);
#endif
}

AActor* GetActor(const TArray<FString>& Args)
{
	FString ActorId = Args[0];
	AActor* Actor = GetActorById(FUnrealcvServer::Get().GetWorld(), ActorId);
	return Actor;
}

FExecStatus FObjectHandler::GetObjectList(const TArray<FString>& Args)
{
	TArray<AActor*> ActorList;
	UVisionBPLib::GetActorList(ActorList);

	FString StrActorList;
	for (AActor* Actor : ActorList)
	{
		StrActorList += FString::Printf(TEXT("%s "), *Actor->GetName());
	}
	return FExecStatus::OK(StrActorList);
}

FExecStatus FObjectHandler::GetLocation(const TArray<FString>& Args)
{
	AActor* Actor = GetActor(Args);
	if (!Actor) return FExecStatus::Error("Can not find object");

	FActorController Controller(Actor);
	FVector Location = Controller.GetLocation();

	FStrFormatter Ar;
	Ar << Location;

	return FExecStatus::OK(Ar.ToString());
}

/** There is no guarantee this will always succeed, for example, hitting a wall */
FExecStatus FObjectHandler::SetLocation(const TArray<FString>& Args)
{
	AActor* Actor = GetActor(Args);
	if (!Actor) return FExecStatus::Error("Can not find object");
	FActorController Controller(Actor);

	// TODO: Check whether this object is movable
	float X = FCString::Atof(*Args[1]), Y = FCString::Atof(*Args[2]), Z = FCString::Atof(*Args[3]);
	FVector NewLocation = FVector(X, Y, Z);
	Controller.SetLocation(NewLocation);

	return FExecStatus::OK();
}

FExecStatus FObjectHandler::GetRotation(const TArray<FString>& Args)
{
	AActor* Actor = GetActor(Args);
	if (!Actor) return FExecStatus::Error("Can not find object");

	FActorController Controller(Actor);
	FRotator Rotation = Controller.GetRotation();

	FStrFormatter Ar;
	Ar << Rotation;

	return FExecStatus::OK(Ar.ToString());
}

FExecStatus FObjectHandler::SetRotation(const TArray<FString>& Args)
{
	AActor* Actor = GetActor(Args);
	if (!Actor) return FExecStatus::Error("Can not find object");
	FActorController Controller(Actor);

	// TODO: Check whether this object is movable
	float Pitch = FCString::Atof(*Args[1]), Yaw = FCString::Atof(*Args[2]), Roll = FCString::Atof(*Args[3]);
	FRotator Rotator = FRotator(Pitch, Yaw, Roll);
	Controller.SetRotation(Rotator);

	return FExecStatus::OK();
}


FExecStatus FObjectHandler::GetAnnotationColor(const TArray<FString>& Args)
{
	AActor* Actor = GetActor(Args);
	if (!Actor) return FExecStatus::Error("Can not find object");
	FActorController Controller(Actor);

	FColor AnnotationColor;
	Controller.GetAnnotationColor(AnnotationColor);
	return FExecStatus::OK(AnnotationColor.ToString());
}

FExecStatus FObjectHandler::SetAnnotationColor(const TArray<FString>& Args)
{
	AActor* Actor = GetActor(Args);
	if (!Actor) return FExecStatus::Error("Can not find object");
	FActorController Controller(Actor);

	// ObjectName, R, G, B, A = 255
	// The color format is RGBA
	uint32 R = FCString::Atoi(*Args[1]), G = FCString::Atoi(*Args[2]), B = FCString::Atoi(*Args[3]), A = 255; // A = FCString::Atoi(*Args[4]);
	FColor AnnotationColor(R, G, B, A);

	Controller.SetAnnotationColor(AnnotationColor);
	return FExecStatus::OK();
}

FExecStatus FObjectHandler::GetMobility(const TArray<FString>& Args)
{
	AActor* Actor = GetActor(Args);
	if (!Actor) return FExecStatus::Error("Can not find object");
	FActorController Controller(Actor);

	FString MobilityName = "";
	EComponentMobility::Type Mobility = Controller.GetMobility();
	switch (Mobility)
	{
		case EComponentMobility::Type::Movable: MobilityName = "Movable"; break;
		case EComponentMobility::Type::Static: MobilityName = "Static"; break;
		case EComponentMobility::Type::Stationary: MobilityName = "Stationary"; break;
		default: MobilityName = "Unknown";
	}
	return FExecStatus::OK(MobilityName);
}

FExecStatus FObjectHandler::SetShow(const TArray<FString>& Args)
{
	AActor* Actor = GetActor(Args);
	if (!Actor) return FExecStatus::Error("Can not find object");

	FActorController Controller(Actor);
	Controller.Show();
	return FExecStatus::OK();
}

FExecStatus FObjectHandler::SetHide(const TArray<FString>& Args)
{
	AActor* Actor = GetActor(Args);
	if (!Actor) return FExecStatus::Error("Can not find object");

	FActorController Controller(Actor);
	Controller.Hide();
	return FExecStatus::OK();
}

FExecStatus FObjectHandler::GetObjectVertexLocation(const TArray<FString>& Args)
{
	AActor* Actor = GetActor(Args);
	FVertexSensor VertexSensor(Actor);
	TArray<FVector> VertexArray = VertexSensor.GetVertexArray();

	// Serialize it to json?
	FString Str = "";
	for (auto Vertex : VertexArray)
	{
		FString VertexLocation = FString::Printf(
			TEXT("%.5f     %.5f     %.5f"),
			Vertex.X, Vertex.Y, Vertex.Z);
		Str += VertexLocation + "\n";
	}

	return FExecStatus::OK(Str);
}

/** A debug utility function to create StaticBox through python API */
FExecStatus FObjectHandler::SpawnBox(const TArray<FString>& Args)
{
	FString ObjectName;
	if (Args.Num() == 1) { ObjectName = Args[0]; }

	UWorld* GameWorld = FUnrealcvServer::Get().GetWorld();
	AActor* Actor = GameWorld->SpawnActor(ACubeActor::StaticClass());

	return FExecStatus::OK();
}

FExecStatus FObjectHandler::Spawn(const TArray<FString>& Args)
{
	FString UClassName;
	if (Args.Num() == 1) { UClassName = Args[0]; }
	// Lookup UClass with a string
	UClass*	Class = FindObject<UClass>(ANY_PACKAGE, *UClassName);

	if (!IsValid(Class))
	{
		return FExecStatus::Error(FString::Printf(TEXT("Can not find a class with name '%s'"), *UClassName));
	}

	UWorld* GameWorld = FUnrealcvServer::Get().GetWorld();
	AActor* Actor = GameWorld->SpawnActor(Class);
	if (IsValid(Actor))
	{
		return FExecStatus::OK(Actor->GetName());
	}
	else
	{
		return FExecStatus::Error("Failed to spawn actor");
	}
}

FExecStatus FObjectHandler::Destroy(const TArray<FString>& Args)
{
	AActor* Actor = GetActor(Args);
	if (!Actor) return FExecStatus::Error("Can not find object");

	Actor->Destroy();
	return FExecStatus::OK();
}

FExecStatus FObjectHandler::GetUClassName(const TArray<FString>& Args)
{
	AActor* Actor = GetActor(Args);
	if (!Actor) return FExecStatus::Error("Can not find object");

	FString UClassName = Actor->StaticClass()->GetName();
	return FExecStatus::OK(UClassName);
}

/** Get component names of the object */
FExecStatus FObjectHandler::GetComponents(const TArray<FString>& Args)
{
	return FExecStatus::OK();
}

FExecStatus FObjectHandler::SetName(const TArray<FString>& Args)
{
	if (Args.Num() != 2)
	{
		return FExecStatus::InvalidArgument;
	}
	AActor* Actor = GetActor(Args);
	if (!Actor) return FExecStatus::Error("Can not find object");

	FString NewName = Args[1];
	// Check whether the object name already exists, otherwise it will crash in 
	// File:/home/qiuwch/UnrealEngine/Engine/Source/Runtime/CoreUObject/Private/UObject/Obj.cpp] [Line: 198]

	UObject* NameScopeOuter = ANY_PACKAGE;
	UObject* ExistingObject = StaticFindObject(/*Class=*/ NULL, NameScopeOuter, *NewName, true);
	if (IsValid(ExistingObject))
	{
		if (ExistingObject == Actor)
		{    
			return FExecStatus::OK("The name has already been set");
		}    
		else if (ExistingObject)
		{    
			return FExecStatus::Error("Renaming an object on top of an existing object is not allowed");
		}
	}
	else
	{
		ICommandInterface* CmdActor = Cast<ICommandInterface>(Actor);
		if (CmdActor) CmdActor->UnbindCommands();
		Actor->Rename(*NewName);
		if (CmdActor) CmdActor->BindCommands();
		return FExecStatus::OK();
	}
	return FExecStatus::OK();
}

// UnrealText Command

FExecStatus FObjectHandler::SetStickerTextCoordinates(const TArray<FString>& Args)
{
	if (Args.Num() == 9)
	{
		AStickerTextActor* TextInstance = GetStickerTextActor_I_th(FCString::Atoi(*Args[0]));
		if (TextInstance == nullptr)
		{
			return FExecStatus::Error(FString::Printf(TEXT("SetStickerTextCoordinates: instance index out of range!")));
		}
		// actual code
		FVector2D Point_UL, Point_UR, Point_BR, Point_BL;
		TextInstance->Handle_SetTextPositionFromScreen(FCString::Atof(*Args[1]), FCString::Atof(*Args[2]), FCString::Atof(*Args[3]), FCString::Atof(*Args[4]), FCString::Atof(*Args[5]), FCString::Atof(*Args[6]), FCString::Atof(*Args[7]), FCString::Atof(*Args[8]), Point_UL, Point_UR, Point_BR, Point_BL);
		return FExecStatus::OK(FString::Printf(TEXT("Location after adjustment: %.3f %.3f %.3f %.3f %.3f %.3f %.3f %.3f"), Point_UL[0], Point_UL[1], Point_UR[0], Point_UR[1], Point_BR[0], Point_BR[1], Point_BL[0], Point_BL[1]));

	}
	return FExecStatus::Error(FString::Printf(TEXT("SetStickerTextCoordinates: Absent args!")));
}

FExecStatus FObjectHandler::SetStickerTextMesh(const TArray<FString>& Args)
{
	if (Args.Num() == 2)
	{
		AStickerTextActor* TextInstance = GetStickerTextActor_I_th(FCString::Atoi(*Args[0]));
		if (TextInstance == nullptr)
		{
			return FExecStatus::Error(FString::Printf(TEXT("SetStickerTextMesh: instance index out of range!")));
		}
		// actual code
		TextInstance->Handle_ResizeAndGenerateMesh(FCString::Atof(*Args[1]));
		return FExecStatus::OK();

	}
	return FExecStatus::Error(FString::Printf(TEXT("SetStickerTextMesh: Absent args!")));
}

FExecStatus FObjectHandler::OrderTextToLoad(const TArray<FString>& Args)
{
	if (Args.Num() == 2)
	{
		AStickerTextActor* TextInstance = GetStickerTextActor_I_th(FCString::Atoi(*Args[0]));
		if (TextInstance == nullptr)
		{
			return FExecStatus::Error(FString::Printf(TEXT("OrderTextToLoad: instance index out of range!")));
		}
		// actual code
		TextInstance->Handle_LoadTextFromPngPath(*Args[1]);
		return FExecStatus::OK();

	}
	return FExecStatus::Error(FString::Printf(TEXT("OrderTextToLoad: Absent args!")));
}

FExecStatus FObjectHandler::SetStickerTextGlowing(const TArray<FString>& Args)
{
	if (Args.Num() == 4)
	{
		AStickerTextActor* TextInstance = GetStickerTextActor_I_th(FCString::Atoi(*Args[0]));
		if (TextInstance == nullptr)
		{
			return FExecStatus::Error(FString::Printf(TEXT("SetStickerTextGlowing: instance index out of range!")));
		}
		// actual code
		TextInstance->EmissiveColor.R = FCString::Atof(*Args[1]);
		TextInstance->EmissiveColor.G = FCString::Atof(*Args[2]);
		TextInstance->EmissiveColor.B = FCString::Atof(*Args[3]);
		return FExecStatus::OK();

	}
	return FExecStatus::Error(FString::Printf(TEXT("SetStickerTextGlowing: Absent args!")));
}

FExecStatus FObjectHandler::GetStickerTextCoordinates(const TArray<FString>& Args)
{
	if (Args.Num() == 1)
	{
		AStickerTextActor* TextInstance = GetStickerTextActor_I_th(FCString::Atoi(*Args[0]));
		if (TextInstance == nullptr)
		{
			return FExecStatus::Error(FString::Printf(TEXT("GetStickerTextCoordinates: instance index out of range!")));
		}
		// actual code
		FVector2D Point_UL, Point_UR, Point_BR, Point_BL;
		TextInstance->Handle_GetCornerCoor(Point_UL, Point_UR, Point_BR, Point_BL);
		return FExecStatus::OK(FString::Printf(TEXT("Location after adjustment: %.3f %.3f %.3f %.3f %.3f %.3f %.3f %.3f"), Point_UL[0], Point_UL[1], Point_UR[0], Point_UR[1], Point_BR[0], Point_BR[1], Point_BL[0], Point_BL[1]));

	}
	return FExecStatus::Error(FString::Printf(TEXT("GetStickerTextCoordinates: Absent args!")));
}

FExecStatus FObjectHandler::GetCameraMoveRange(const TArray<FString>& Args)
{
	if (Args.Num() == 2)
	{	
        // transform
		FVector2D Center = FVector2D(FCString::Atof(*Args[0]), 
		                             FCString::Atof(*Args[1]));
		// collision
		AStickerTextActor* TextInstance = GetStickerTextActor_I_th(0);
		FVector WorldPosition = FVector(0.0f, 0.0f, 0.0f);
		FVector WorldDirection = FVector(0.0f, 0.0f, 0.0f);
		FHitResult HitResult;
		UGameplayStatics::GetPlayerController(GetWorld(), 0)->DeprojectScreenPositionToWorld(Center[0], Center[1], WorldPosition, WorldDirection);
		bool HitFlag = GetWorld()->LineTraceSingleByChannel(HitResult, WorldPosition, WorldPosition + WorldDirection * 3000.0f, ECC_Visibility, TextInstance->TraceParams);
		FVector HitPointLocation;
		if (HitFlag)
		{
			HitPointLocation = HitResult.Location;
		}
		else
		{
			HitPointLocation = WorldPosition + WorldDirection * 1000.0f;
		}
		
		return FExecStatus::OK(FString::Printf(TEXT("HitPointLocation: %.3f %.3f %.3f %.3f %.3f %.3f"), WorldPosition.X, WorldPosition.Y, WorldPosition.Z, HitPointLocation.X, HitPointLocation.Y, HitPointLocation.Z));

	}
	return FExecStatus::Error(FString::Printf(TEXT("GetCameraMoveRange: Absent args!")));
}

FExecStatus FObjectHandler::MoveCamera(const TArray<FString>& Args)
{
	UE_LOG(LogTemp, Warning, TEXT("Start to move"));
	if (Args.Num() == 1)
	{	
        if (Args[0] == "default")
		{
			ACameraWanderActor * camera_default = GetCameraActor(0);
			UE_LOG(LogTemp, Warning, TEXT("Camera walker found"));
			camera_default->Handle_TakeOneStep();
			return FExecStatus::OK();
		}
		return FExecStatus::Error(FString::Printf(TEXT("Move Camera: wrong types!")));

	}
	return FExecStatus::Error(FString::Printf(TEXT("Move Camera: wrong args!")));
}

FExecStatus FObjectHandler::EnvJitter(const TArray<FString>& Args)
{
	UE_LOG(LogTemp, Warning, TEXT("Start to alter environment"));
	if (Args.Num() == 1)
	{	
		AEnvJitterActor * env_jitter_actor = GetEnvController();
		UE_LOG(LogTemp, Warning, TEXT("Env Jitter Found"));
		env_jitter_actor->Handle_Command(Args[0]);
		return FExecStatus::OK();
	}
	return FExecStatus::Error(FString::Printf(TEXT("Move Camera: wrong args!")));
}

//LoadTextAttr
FExecStatus FObjectHandler::LoadTextAttr(const TArray<FString>& Args)
{
	UE_LOG(LogTemp, Warning, TEXT("Start to load attributes"));
	if (Args.Num() == 1)
	{	
		TArray<AActor*> FoundActors;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AStickerTextActor::StaticClass(), FoundActors);
		std::string FileName = std::string(TCHAR_TO_UTF8(*(Args[0])));
		std::ifstream FileHandle;
		FileHandle.open(FileName);
		int32 text_num;
		FileHandle >> text_num;
		for (int32 text_id=0;text_id<text_num;text_id++)
		{
			if (FoundActors.Num() <= text_id)
			{
				break;
			}
			float UL_X, UL_Y, BR_X, BR_Y, Color_R, Color_G, Color_B, Spe, Met, Rou;
			FileHandle>>UL_X>>UL_Y>>BR_X>>BR_Y>>Color_R>>Color_G>>Color_B>>Spe>>Met>>Rou;
			UE_LOG(LogTemp, Warning, TEXT("Text %d box loaded: %f %f %f %f %f %f %f %f %f %f"), text_id, UL_X, UL_Y, BR_X, BR_Y, Color_R, Color_G, Color_B, Spe, Met, Rou);
			Cast<AStickerTextActor>(FoundActors[text_id])->Handle_SetAttr(UL_X, UL_Y, BR_X, BR_Y, Color_R, Color_G, Color_B, Spe, Met, Rou);
		}
  
		UE_LOG(LogTemp, Warning, TEXT("Ended loading, waiting for triangulation finishes ... "));
		FileHandle.close();
		return FExecStatus::OK();
		
	}
	return FExecStatus::Error(FString::Printf(TEXT("text attr load: wrong args!")));
}

FExecStatus FObjectHandler::GetAdjusted(const TArray<FString>& Args)
{
	UE_LOG(LogTemp, Warning, TEXT("Start to save adjusted locations"));
	if (Args.Num() == 2)
	{	
		TArray<AActor*> FoundActors;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AStickerTextActor::StaticClass(), FoundActors);
		std::string outputFileName = std::string(TCHAR_TO_UTF8(*(Args[1])));
  		std::ofstream outputFileHandle;
		outputFileHandle.open(outputFileName);

		bool all_done = false;
		int32 text_num = FCString::Atoi(*Args[0]);
		while (!all_done)
		{
			all_done = true;
			for (int32 text_id=0;text_id<text_num;text_id++)
			{
				if (FoundActors.Num() <= text_id)
				{
					break;
				}
				if (Cast<AStickerTextActor>(FoundActors[text_id])->isProcessed)
				{
					// box is invalid, or the triangulation is finished
					;
				}
				else
				{
					all_done = false;
				}
			}
		}
		UE_LOG(LogTemp, Warning, TEXT("All done, ready to write adjusted box ... "));
		for (int32 text_id=0;text_id<text_num;text_id++)
		{
			if (FoundActors.Num() <= text_id)
			{
				break;
			}
			FVector2D Point_UL, Point_UR, Point_BR, Point_BL;
			Cast<AStickerTextActor>(FoundActors[text_id])->Handle_GetCornerCoor(Point_UL, Point_UR, Point_BR, Point_BL);
			if (Cast<AStickerTextActor>(FoundActors[text_id])->isBoxValid)
			{
				outputFileHandle<<1<<",";
			}
			else
			{
				outputFileHandle<<0<<","; // 0 denotes failed triangles
			}
			outputFileHandle<<(int32)Point_UL[0]<<","<<(int32)Point_UL[1]<<","
			                <<(int32)Point_UR[0]<<","<<(int32)Point_UR[1]<<","
							<<(int32)Point_BR[0]<<","<<(int32)Point_BR[1]<<","
							<<(int32)Point_BL[0]<<","<<(int32)Point_BL[1]<<std::endl;
		}
		outputFileHandle.close();
		return FExecStatus::OK();
		
	}
	return FExecStatus::Error(FString::Printf(TEXT("text save path: wrong args!")));
}

FExecStatus FObjectHandler::LoadTextImages(const TArray<FString>& Args)
{
	UE_LOG(LogTemp, Warning, TEXT("Start to save adjusted locations"));
	if (Args.Num() == 1)
	{	
		TArray<AActor*> FoundActors;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AStickerTextActor::StaticClass(), FoundActors);
		
		std::string FileName = std::string(TCHAR_TO_UTF8(*(Args[0])));
  		std::ifstream FileHandle;
		FileHandle.open(FileName);
		int32 text_num;
		FileHandle >> text_num;
		for (int32 text_id=0;text_id<text_num;text_id++)
		{
			if (FoundActors.Num() <= text_id)
			{
				break;
			}
			std::string word_path;
			FileHandle >> word_path;
			FString WordFSTRING(word_path.c_str());
			if (Cast<AStickerTextActor>(FoundActors[text_id])->isTriangulationFinished)
			{
				Cast<AStickerTextActor>(FoundActors[text_id])->Handle_LoadTextFromPngPath(WordFSTRING);
			}
		}

		FileHandle.close();
		return FExecStatus::OK();
		
	}
	return FExecStatus::Error(FString::Printf(TEXT("text save path: wrong args!")));
}
// end UnrealText Command

#if WITH_EDITOR
FExecStatus FObjectHandler::SetActorLabel(const TArray<FString>& Args)
{
	FString ActorLabel;
	if (Args.Num() == 2) { ActorLabel = Args[1]; }

	AActor* Actor = GetActor(Args);
	if (!IsValid(Actor)) return FExecStatus::Error("Can not find object");

	Actor->SetActorLabel(ActorLabel);
	return FExecStatus::OK();
}

FExecStatus FObjectHandler::GetActorLabel(const TArray<FString>& Args)
{
	AActor* Actor = GetActor(Args);
	if (!IsValid(Actor)) return FExecStatus::Error("Can not find object");

	FString ActorLabel = Actor->GetActorLabel();
	return FExecStatus::OK(ActorLabel);
}
#endif 
