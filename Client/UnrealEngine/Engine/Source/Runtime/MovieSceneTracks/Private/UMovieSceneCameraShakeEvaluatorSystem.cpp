// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 10

// StaticClass @ 146728320

UClass * __cdecl UMovieSceneCameraShakeEvaluatorSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCameraShakeEvaluatorSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCameraShakeEvaluatorSystem",
               &Z_Registration_Info_UClass_UMovieSceneCameraShakeEvaluatorSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneCameraShakeEvaluatorSystem,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneCameraShakeEvaluatorSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneCameraShakeEvaluatorSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCameraShakeEvaluatorSystem.InnerSingleton;
}

// UMovieSceneCameraShakeEvaluatorSystem @ 146762370

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneCameraShakeEvaluatorSystem * __thiscall
UMovieSceneCameraShakeEvaluatorSystem::UMovieSceneCameraShakeEvaluatorSystem
          (UMovieSceneCameraShakeEvaluatorSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneCameraShakeEvaluatorSystem__6B_;
  return this;
}

// UMovieSceneCameraShakeEvaluatorSystem @ 1467623a0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneCameraShakeEvaluatorSystem * __thiscall
UMovieSceneCameraShakeEvaluatorSystem::UMovieSceneCameraShakeEvaluatorSystem
          (UMovieSceneCameraShakeEvaluatorSystem *this,FObjectInitializer *param_1)

{
  FMovieSceneTracksComponentTypes *pFVar1;
  
  UMovieSceneEntitySystem::UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneCameraShakeEvaluatorSystem__6B_;
  pFVar1 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  *(TComponentTypeID<FMovieSceneCameraShakeComponentData> *)&this->field_0x30 = pFVar1->CameraShake;
  return this;
}

// ~UMovieSceneCameraShakeEvaluatorSystem @ 146769eb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneCameraShakeEvaluatorSystem::~UMovieSceneCameraShakeEvaluatorSystem
          (UMovieSceneCameraShakeEvaluatorSystem *this)

{
  *(undefined ***)this = &___7UMovieSceneCameraShakeEvaluatorSystem__6B_;
  UMovieSceneEntitySystem::~UMovieSceneEntitySystem((UMovieSceneEntitySystem *)this);
  return;
}

// GetPrivateStaticClass @ 146797a20

UClass * __cdecl UMovieSceneCameraShakeEvaluatorSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCameraShakeEvaluatorSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneCameraShakeEvaluatorSystem",
               &Z_Registration_Info_UClass_UMovieSceneCameraShakeEvaluatorSystem.InnerSingleton,
               StaticRegisterNativesUMovieSceneCameraShakeEvaluatorSystem,0x48,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneCameraShakeEvaluatorSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneCameraShakeEvaluatorSystem>,local_res8,
               UMovieSceneEntitySystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCameraShakeEvaluatorSystem.InnerSingleton;
}

// IsRelevantImpl @ 1467a5bd0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UMovieSceneCameraShakeEvaluatorSystem::IsRelevantImpl
          (UMovieSceneCameraShakeEvaluatorSystem *this,UMovieSceneEntitySystemLinker *param_1)

{
  return false;
}

// OnLink @ 1467a99d0

void __thiscall
UMovieSceneCameraShakeEvaluatorSystem::OnLink(UMovieSceneCameraShakeEvaluatorSystem *this)

{
  return;
}

// OnRun @ 1467ae000

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMovieSceneCameraShakeEvaluatorSystem::OnRun
          (UMovieSceneCameraShakeEvaluatorSystem *this,FSystemTaskPrerequisites *param_1,
          FSystemSubsequentTasks *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  FBuiltInComponentTypes *pFVar5;
  FMovieSceneTracksComponentTypes *pFVar6;
  undefined8 *local_res8;
  TComponentTypeID<UE::MovieScene::FInstanceHandle> local_58;
  TComponentTypeID<UObject_*> local_56;
  TComponentTypeID<FMovieSceneCameraShakeComponentData> local_54;
  TComponentTypeID<FMovieSceneCameraShakeInstanceData> local_52;
  undefined8 local_50;
  TStatIdData *pTStack_48;
  undefined8 local_40;
  ulonglong uStack_38;
  undefined8 local_28;
  TStatIdData *pTStack_20;
  byte local_18;
  undefined7 uStack_17;
  undefined4 uStack_10;
  uint uStack_c;
  
  pFVar5 = UE::MovieScene::FBuiltInComponentTypes::Get();
  pFVar6 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
  uVar3 = uStack_c;
  local_58 = pFVar5->InstanceHandle;
  pTStack_20 = &TStatId::TStatId_NAME_None;
  local_18 = local_18 & 0xe0;
  local_54 = pFVar6->CameraShake;
  local_52 = pFVar6->CameraShakeInstance;
  uStack_10 = 0x6ff;
  uStack_c = uStack_c & 0xffffff00;
  local_28 = 0;
  iVar2 = *(int *)(*(longlong *)&this->field_0x28 + 0x2c8);
  local_56 = pFVar5->BoundObject;
  uStack_38 = CONCAT44(uVar3,iVar2) & 0xffffff00ffffffff;
  local_50 = 0;
  pTStack_48 = &TStatId::TStatId_NAME_None;
  if ((iVar2 == 1) || (iVar2 == 0x101)) {
    bVar4 = 1;
  }
  else {
    bVar4 = 0;
  }
  local_40._1_7_ = uStack_17;
  local_40._0_1_ = local_18 | bVar4;
  UE::MovieScene::
  TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeComponentData>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeInstanceData>_>
  ::
  Dispatch_PerAllocation<UE::MovieScene::FEvaluateCameraShake,TObjectPtr<UMovieSceneEntitySystemLinker>_&>
            ((TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeComponentData>,UE::MovieScene::TReadAccess<FMovieSceneCameraShakeInstanceData>_>
              *)&local_58,(FEntityManager *)&local_res8,
             (FSystemTaskPrerequisites *)(*(longlong *)&this->field_0x28 + 0x28),
             (FSystemSubsequentTasks *)param_1,(TObjectPtr<UMovieSceneEntitySystemLinker> *)param_2)
  ;
  if (local_res8 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_res8 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  return;
}

// OnUnlink @ 1467b0c50

void __thiscall
UMovieSceneCameraShakeEvaluatorSystem::OnUnlink(UMovieSceneCameraShakeEvaluatorSystem *this)

{
  return;
}

// StaticRegisterNativesUMovieSceneCameraShakeEvaluatorSystem @ 1467c2710

void __cdecl
UMovieSceneCameraShakeEvaluatorSystem::StaticRegisterNativesUMovieSceneCameraShakeEvaluatorSystem
          (void)

{
  return;
}

