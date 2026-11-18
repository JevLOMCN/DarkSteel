// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 7

// StaticClass @ 14d5e0780

UClass * __cdecl UMovieSceneCameraFramingZonePropertySystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCameraFramingZonePropertySystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"MovieSceneCameraFramingZonePropertySystem",
               &Z_Registration_Info_UClass_UMovieSceneCameraFramingZonePropertySystem.InnerSingleton
               ,StaticRegisterNativesUMovieSceneCameraFramingZonePropertySystem,0x60,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneCameraFramingZonePropertySystem>,
               InternalVTableHelperCtorCaller<UMovieSceneCameraFramingZonePropertySystem>,local_res8
               ,UMovieScenePropertySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCameraFramingZonePropertySystem.InnerSingleton;
}

// UMovieSceneCameraFramingZonePropertySystem @ 14d5fec60

UMovieSceneCameraFramingZonePropertySystem * __thiscall
UMovieSceneCameraFramingZonePropertySystem::UMovieSceneCameraFramingZonePropertySystem
          (UMovieSceneCameraFramingZonePropertySystem *this,FVTableHelper *param_1)

{
  UMovieScenePropertySystem::UMovieScenePropertySystem((UMovieScenePropertySystem *)this,param_1);
  *(undefined ***)this = &_vftable__for__UMovieSceneEntitySystem__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
  return this;
}

// UMovieSceneCameraFramingZonePropertySystem @ 14d5feca0

UMovieSceneCameraFramingZonePropertySystem * __thiscall
UMovieSceneCameraFramingZonePropertySystem::UMovieSceneCameraFramingZonePropertySystem
          (UMovieSceneCameraFramingZonePropertySystem *this,FObjectInitializer *param_1)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneGameplayCamerasComponentTypes *pFVar3;
  UMovieSceneCameraFramingZonePropertySystem *pUVar4;
  UObject *local_res8;
  UClass *local_res18;
  UObject *local_res20;
  UClass *local_28 [2];
  
  UMovieScenePropertySystem::UMovieScenePropertySystem((UMovieScenePropertySystem *)this,param_1);
  *(undefined ***)this = &_vftable__for__UMovieSceneEntitySystem__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
  pFVar3 = UE::Cameras::FMovieSceneGameplayCamerasComponentTypes::Get();
  if (((*(short *)&this->field_0x30 != -1) || (*(int *)&this->field_0x58 != -1)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!RelevantComponent && !CompositePropertyID",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Systems\\MovieScenePropertySystem.h"
                         ,0x1f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pUVar4 = (UMovieSceneCameraFramingZonePropertySystem *)(*pcVar1)();
    return pUVar4;
  }
  *(ushort *)&this->field_0x30 = (pFVar3->CameraFramingZone).PropertyTag.Value;
  *(TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>_>
    *)&this->field_0x58 = (pFVar3->CameraFramingZone).CompositeID;
  if ((*(uint *)&this->field_0x8 & 0x10) != 0) {
    local_res8 = *(UObject **)&this->field_0x10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    local_res18 = Z_Construct_UClass_UMovieScenePiecewiseDoubleBlenderSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_res18);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)&local_res18,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res8);
    local_res20 = *(UObject **)&this->field_0x10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res20);
    }
    local_28[0] = Z_Construct_UClass_UDoubleChannelEvaluatorSystem_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28[0] != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_28[0]);
    }
    UMovieSceneEntitySystem::DefineImplicitPrerequisite
              ((TSubclassOf<UMovieSceneEntitySystem>)local_28,
               (TSubclassOf<UMovieSceneEntitySystem>)&local_res20);
  }
  return this;
}

// ~UMovieSceneCameraFramingZonePropertySystem @ 14d600d60

void __thiscall
UMovieSceneCameraFramingZonePropertySystem::~UMovieSceneCameraFramingZonePropertySystem
          (UMovieSceneCameraFramingZonePropertySystem *this)

{
  *(undefined ***)this = &_vftable__for__UMovieSceneEntitySystem__;
  *(undefined ***)&this->field_0x48 = &_vftable__for__IMovieScenePreAnimatedStateSystemInterface__;
  UMovieScenePropertySystem::~UMovieScenePropertySystem((UMovieScenePropertySystem *)this);
  return;
}

// GetPrivateStaticClass @ 14d61cd20

UClass * __cdecl UMovieSceneCameraFramingZonePropertySystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCameraFramingZonePropertySystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"MovieSceneCameraFramingZonePropertySystem",
               &Z_Registration_Info_UClass_UMovieSceneCameraFramingZonePropertySystem.InnerSingleton
               ,StaticRegisterNativesUMovieSceneCameraFramingZonePropertySystem,0x60,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneCameraFramingZonePropertySystem>,
               InternalVTableHelperCtorCaller<UMovieSceneCameraFramingZonePropertySystem>,local_res8
               ,UMovieScenePropertySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCameraFramingZonePropertySystem.InnerSingleton;
}

// OnRun @ 14d62d630

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneCameraFramingZonePropertySystem::OnRun
          (UMovieSceneCameraFramingZonePropertySystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  code *pcVar1;
  bool bVar2;
  FBuiltInComponentTypes *this_00;
  FPropertyDefinition *pFVar3;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar4;
  int aiStackX_8 [2];
  FScriptContainerElement *pFStack_28;
  uint uStack_20;
  
  if (*(UMovieScenePropertyInstantiatorSystem **)&this->field_0x50 !=
      (UMovieScenePropertyInstantiatorSystem *)0x0) {
    UMovieScenePropertyInstantiatorSystem::GetStatsForProperty
              (*(UMovieScenePropertyInstantiatorSystem **)&this->field_0x50,
               (FCompositePropertyTypeID)(int)aiStackX_8);
    if (0 < aiStackX_8[0]) {
      this_00 = UE::MovieScene::FBuiltInComponentTypes::Get();
      pFVar3 = UE::MovieScene::FPropertyRegistry::GetDefinition
                         (&this_00->PropertyRegistry,
                          (FCompositePropertyTypeID)*(int *)&this->field_0x58);
      pTVar4 = &pFVar3->Handler;
      if (!(pFVar3->Handler).bIsValid) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (!(pFVar3->Handler).bInline) {
        pTVar4 = *(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                  (pTVar4->Data).Pad;
      }
      pFStack_28 = (this_00->PropertyRegistry).CompositeDefinitions.AllocatorInstance.Data +
                   (ulonglong)pFVar3->VariableSizeCompositeOffset * 4;
      uStack_20 = (uint)pFVar3->CompositeSize;
      (**(code **)(*(longlong *)(pTVar4->Data).Pad + 0x28))
                (pTVar4,pFVar3,&pFStack_28,aiStackX_8,param_1,param_2,
                 *(undefined8 *)&this->field_0x28);
    }
  }
  return;
}

// StaticRegisterNativesUMovieSceneCameraFramingZonePropertySystem @ 14d6393a0

void __cdecl
UMovieSceneCameraFramingZonePropertySystem::
StaticRegisterNativesUMovieSceneCameraFramingZonePropertySystem(void)

{
  return;
}

