// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 46

// StaticClass @ 14b42f660

UClass * __cdecl ADS_CameraManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_CameraManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CameraManager",
               &Z_Registration_Info_UClass_ADS_CameraManager.InnerSingleton,
               StaticRegisterNativesADS_CameraManager,0x28c0,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ADS_CameraManager>,
               InternalVTableHelperCtorCaller<ADS_CameraManager>,local_res8,
               APlayerCameraManager::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_CameraManager.InnerSingleton;
}

// ADS_CameraManager @ 14b433f90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

ADS_CameraManager * __thiscall
ADS_CameraManager::ADS_CameraManager(ADS_CameraManager *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  APlayerCameraManager::APlayerCameraManager((APlayerCameraManager *)this,param_1);
  this->bCommandRotationLock = false;
  this->IsBattleMode = false;
  *(undefined ***)this = &___7ADS_CameraManager__6B_;
  (this->FadeInfo).CameraManager.WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->FadeInfo,(FObjectPtr)&local_res8);
  (this->FadeInfo).FadeState = None;
  (this->FadeInfo).FadeTimeRatio = 0.0;
  (this->FadeInfo).FadeElapsedTime = 0.0;
  (this->FadeInfo).FadeTotalTime = 0.0;
  *(undefined8 *)&(this->FadeInfo).FinishFadeDelegate = 0;
  *(undefined8 *)&(this->FadeInfo).FinishFadeDelegate.field_0x8 = 0;
  *(undefined8 *)&(this->FadeInfo).FinishFadeDelegate.field_0x10 = 0;
  *(undefined8 *)&(this->FadeInfo).FinishFadeDelegate.field_0x18 = 2;
  this->bIsDebugMode = false;
  this->UnlimitCameraDist = false;
  (this->npcCameraActor).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->npcCameraActor).WeakPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&this->ChangeBossDelegate = 0;
  *(undefined8 *)&(this->ChangeBossDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangeBossDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->ChangeBossDelegate).field_0x18 = 2;
  return this;
}

// ~ADS_CameraManager @ 14b434c20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall ADS_CameraManager::~ADS_CameraManager(ADS_CameraManager *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &___7ADS_CameraManager__6B_;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->ChangeBossDelegate).field_0x8,*(int *)&(this->ChangeBossDelegate).field_0x10);
  pvVar1 = *(void **)&(this->ChangeBossDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->ChangeBossDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->FadeInfo).FinishFadeDelegate.field_0x8,
             *(int *)&(this->FadeInfo).FinishFadeDelegate.field_0x10);
  pvVar1 = *(void **)&(this->FadeInfo).FinishFadeDelegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->FadeInfo).FinishFadeDelegate);
  APlayerCameraManager::~APlayerCameraManager((APlayerCameraManager *)this);
  return;
}

// GetPrivateStaticClass @ 14b436360

UClass * __cdecl ADS_CameraManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ADS_CameraManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_CameraManager",
               &Z_Registration_Info_UClass_ADS_CameraManager.InnerSingleton,
               StaticRegisterNativesADS_CameraManager,0x28c0,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<ADS_CameraManager>,
               InternalVTableHelperCtorCaller<ADS_CameraManager>,local_res8,
               APlayerCameraManager::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ADS_CameraManager.InnerSingleton;
}

// StaticRegisterNativesADS_CameraManager @ 14b437010

void __cdecl ADS_CameraManager::StaticRegisterNativesADS_CameraManager(void)

{
  return;
}

// ADS_CameraManager @ 14b8b1270

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

ADS_CameraManager * __thiscall
ADS_CameraManager::ADS_CameraManager(ADS_CameraManager *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  APlayerCameraManager::APlayerCameraManager((APlayerCameraManager *)this,param_1);
  this->bCommandRotationLock = false;
  this->IsBattleMode = false;
  *(undefined ***)this = &___7ADS_CameraManager__6B_;
  (this->FadeInfo).CameraManager.WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->FadeInfo,(FObjectPtr)&local_res8);
  (this->FadeInfo).FadeState = None;
  (this->FadeInfo).FadeTimeRatio = 0.0;
  (this->FadeInfo).FadeElapsedTime = 0.0;
  (this->FadeInfo).FadeTotalTime = 0.0;
  *(undefined8 *)&(this->FadeInfo).FinishFadeDelegate = 0;
  *(undefined8 *)&(this->FadeInfo).FinishFadeDelegate.field_0x8 = 0;
  *(undefined8 *)&(this->FadeInfo).FinishFadeDelegate.field_0x10 = 0;
  *(undefined8 *)&(this->FadeInfo).FinishFadeDelegate.field_0x18 = 2;
  this->bIsDebugMode = false;
  this->UnlimitCameraDist = false;
  (this->npcCameraActor).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->npcCameraActor).WeakPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&this->ChangeBossDelegate = 0;
  *(undefined8 *)&(this->ChangeBossDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->ChangeBossDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->ChangeBossDelegate).field_0x18 = 2;
  return this;
}

// BeginPlay @ 14b8b5850

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_CameraManager::BeginPlay(ADS_CameraManager *this)

{
  ADS_CameraManager *local_res8 [4];
  
  AActor::BeginPlay((AActor *)this);
  StaticInstance = this;
  local_res8[0] = this;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (ADS_CameraManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&this->FadeInfo,(FObjectPtr)local_res8);
  return;
}

// CalculateLocalPositionXFromMargin @ 14b8b72e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
ADS_CameraManager::CalculateLocalPositionXFromMargin
          (TVector<double> *param_1,float param_2,float *param_3,float *param_4)

{
  UObject *pUVar1;
  APlayerController *this;
  FSceneViewport *pFVar2;
  float local_68;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_38 [2];
  
  this = (APlayerController *)(**(code **)(*(longlong *)StaticInstance + 0x7a8))();
  if (this != (APlayerController *)0x0) {
    pUVar1 = (UObject *)this->_padding_;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar1 == (UObject *)0x0) {
        return;
      }
    }
    else {
      if (pUVar1 == (UObject *)0x0) {
        return;
      }
      UE::GC::MarkAsReachable(pUVar1);
    }
    local_58._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_58._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_58._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    APlayerController::ProjectWorldLocationToScreenWithDistance
              (this,(TVector<double> *)&local_58._s_0,(TVector<double> *)&local_38[0]._s_0,false);
    pFVar2 = UGameViewportClient::GetGameViewport((GEngine->GameViewport).field0_0x0.DebugPtr);
    local_68 = SUB84((pFVar2->CachedGeometry).Size,0);
    local_68 = local_68 * __real_3f000000;
    *param_4 = local_68 * param_2 * __real_3c23d70a;
    *param_3 = (float)((double)local_38[0]._0_8_ - (double)local_68);
  }
  return;
}

// CameraShake @ 14b8b7a70

void __thiscall ADS_CameraManager::CameraShake(ADS_CameraManager *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  FDS_ResourceCameraShakeTableRow *pFVar3;
  UClass *pUVar4;
  UObject *local_res18;
  FDestructionSentinel local_68;
  undefined4 local_50;
  undefined1 local_4c;
  double local_48;
  double dStack_40;
  double local_38;
  undefined8 local_30;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType local_20;
  int local_18;
  undefined1 local_c;
  
  pFVar3 = FDS_ResourceCameraShakeTableRow::Get((longlong)param_1,true);
  if (((pFVar3 != (FDS_ResourceCameraShakeTableRow *)0x0) &&
      ((pFVar3->ShakePath).AssetPath.PackageName != (FName)0x0)) &&
     (local_res18 = FSoftObjectPath::TryLoad(&pFVar3->ShakePath,(FUObjectSerializeContext *)0x0),
     local_res18 != (UObject *)0x0)) {
    pUVar4 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&local_res18->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&local_res18->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      pcVar2 = *(code **)(*(longlong *)this + 0x8c8);
      local_50 = 0x3f800000;
      local_4c = 0;
      local_48 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      dStack_40 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      local_30 = 0;
      local_38 = UE::Math::TRotator<double>::ZeroRotator.Roll;
      local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
      local_20.Data = (FScriptContainerElement *)0x0;
      local_18 = 0;
      local_c = 0;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(local_res18);
      }
      (*pcVar2)(this,&local_res18);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                (&local_28,(FWriteAccessScope *)&local_68);
      if ((local_18 != 0) && (local_20.Data != (FScriptContainerElement *)0x0)) {
        (*(code *)**(undefined8 **)local_20.Data)();
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_20,0,0,0x10);
        local_18 = 0;
      }
      if (local_68.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
      }
      if (local_20.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20.Data);
      }
      FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
    }
  }
  return;
}

// CameraShake @ 14b8b7c00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
ADS_CameraManager::CameraShake
          (ADS_CameraManager *this,USkeletalMeshComponent *param_1,
          TSubclassOf<UCameraShakeBase> param_2,float param_3,float param_4,float param_5,
          float param_6,float param_7,bool param_8)

{
  undefined1 auVar1 [16];
  int iVar2;
  UObject *pUVar3;
  longlong lVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  FDS_EntityBase *pFVar8;
  UDS_CharStateData *this_00;
  UClass *pUVar9;
  UClass *pUVar10;
  FWeakObjectPtr *this_01;
  UObject *pUVar11;
  float fVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_118;
  undefined1 local_110 [24];
  EDS_CharState local_f8;
  UObject *local_f0;
  UObject *local_e8;
  float local_e0;
  undefined1 local_dc;
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined8 local_c0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  ForAnyElementType local_b0;
  int local_a8;
  float local_a0;
  undefined1 local_9c;
  undefined1 local_98 [24];
  double local_80;
  
  pUVar3 = (UObject *)param_1->_padding_;
  if (pUVar3 == (UObject *)0x0) {
    return;
  }
  if (UDS_PlayerData::MainPlayerEntityID == 0) {
    return;
  }
  if ((param_8) &&
     (pFVar8 = FDS_EntityBase::GetMainPlayerEntityBase(true), pFVar8 != (FDS_EntityBase *)0x0)) {
    UDS_CharStateData::GetData((ulong64)&local_118);
    bVar7 = FWeakObjectPtr::IsValid(&local_118);
    if (bVar7) {
      this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_118);
      local_f8 = AirWalk;
      bVar7 = UDS_CharStateData::HasCharState(this_00,&local_f8);
      if (bVar7) {
        return;
      }
    }
  }
  fVar6 = __real_3f800000;
  lVar4 = *(longlong *)param_2.Class.field0_0x0;
  pUVar10 = (UClass *)0x0;
  fVar18 = 0.0;
  fVar19 = 0.0;
  fVar20 = 0.0;
  if ((lVar4 != 0) &&
     (pUVar9 = Z_Construct_UClass_UCameraShakeBase_NoRegister(), pUVar9 != (UClass *)0x0)) {
    iVar2 = (int)pUVar9->_padding_;
    if ((*(int *)(lVar4 + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar9->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      pUVar10 = *(UClass **)param_2.Class.field0_0x0;
    }
  }
  if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar10);
  }
  pUVar11 = (pUVar10->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar10 = Z_Construct_UClass_UCameraShakeBase_NoRegister();
  lVar4 = *(longlong *)&pUVar11->field_0x10;
  iVar2 = (int)pUVar10->_padding_;
  if (((*(int *)(lVar4 + 0x38) < iVar2) ||
      ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar2 * 8) !=
       &pUVar10->_padding_)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ret->IsA(T::StaticClass())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0x1181,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar4 = *(longlong *)&pUVar11[1].field_0x8;
  if (lVar4 != 0) {
    pUVar10 = Z_Construct_UClass_UDS_PerlinNoiseCameraShakePattern_NoRegister();
    iVar2 = (int)pUVar10->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar10->_padding_)) {
      fVar20 = *(float *)(lVar4 + 0x28);
      fVar18 = *(float *)(lVar4 + 0xd8);
      fVar19 = *(float *)(lVar4 + 0xdc);
    }
  }
  if (0.0 < param_3) {
    fVar20 = param_3;
  }
  if (0.0 < param_6) {
    fVar18 = param_6;
    fVar19 = param_7;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_f0 = pUVar3;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_f0);
  pFVar8 = FDS_EntityBase::GetEntityBaseFromActor
                     ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_res10);
  if ((pFVar8 == (FDS_EntityBase *)0x0) || (local_e0 = fVar6, pFVar8->EntityType != MainCharacter))
  {
    pFVar8 = FDS_EntityBase::GetMainPlayerEntityBase(true);
    if (pFVar8 == (FDS_EntityBase *)0x0) {
      return;
    }
    this_01 = (FWeakObjectPtr *)(**(code **)(pFVar8->_padding_ + 0x150))(pFVar8,local_98);
    pUVar11 = FWeakObjectPtr::Get(this_01);
    uVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar15 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    dVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
    dVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
    lVar4 = *(longlong *)(pUVar11 + 0xb);
    if (lVar4 == 0) {
      local_110._16_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      dVar16 = dVar17;
    }
    else {
      local_110._16_8_ = *(double *)(lVar4 + 0x220);
      auVar1 = *(undefined1 (*) [16])(lVar4 + 0x210);
      uVar14 = auVar1._0_4_;
      uVar15 = auVar1._4_4_;
      dVar16 = auVar1._8_8_;
    }
    lVar4 = *(longlong *)(pUVar3 + 0xb);
    if (lVar4 == 0) {
      local_80 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    else {
      local_80 = *(double *)(lVar4 + 0x220);
      dVar13 = *(double *)(lVar4 + 0x210);
      dVar17 = *(double *)(lVar4 + 0x218);
    }
    dVar13 = (double)CONCAT44(uVar15,uVar14) - dVar13;
    fVar12 = (float)SQRT((dVar16 - dVar17) * (dVar16 - dVar17) + dVar13 * dVar13 +
                         ((double)local_110._16_8_ - local_80) *
                         ((double)local_110._16_8_ - local_80));
    if (fVar18 < fVar12) {
      return;
    }
    local_e0 = (fVar18 - fVar12) / (fVar18 - fVar19);
    if (fVar6 <= local_e0) {
      local_e0 = fVar6;
    }
  }
  local_e8 = *(UObject **)param_2.Class.field0_0x0;
  local_d8 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  dStack_d0 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  local_dc = 0;
  pcVar5 = *(code **)(*(longlong *)this + 0x8c8);
  local_c8 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  local_c0 = 0;
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8 = 0;
  local_9c = 1;
  local_a0 = fVar20;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_e8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_e8);
  }
  (*pcVar5)(this,&local_e8);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_b8,(FWriteAccessScope *)local_110);
  if ((local_a8 != 0) && (local_b0.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_b0.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_b0,0,0,0x10);
    local_a8 = 0;
  }
  if (local_110[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_110._8_8_,(FDestructionSentinel *)local_110);
  }
  if (local_b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  return;
}

// DisableDepthOfField @ 14b8be280

void __thiscall ADS_CameraManager::DisableDepthOfField(ADS_CameraManager *this)

{
  UDS_CameraComponent *this_00;
  
  this_00 = GetCurrentCameraComponent(this);
  if (this_00 != (UDS_CameraComponent *)0x0) {
    UDS_CameraComponent::DisableDepthOfField(this_00);
    return;
  }
  return;
}

// DisableMotionBlur @ 14b8be2b0

void __thiscall ADS_CameraManager::DisableMotionBlur(ADS_CameraManager *this)

{
  UDS_CameraComponent *this_00;
  
  this_00 = GetCurrentCameraComponent(this);
  if (this_00 != (UDS_CameraComponent *)0x0) {
    UDS_CameraComponent::DisableMotionBlur(this_00);
    return;
  }
  return;
}

// EnableDepthOfField @ 14b8bec00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ADS_CameraManager::EnableDepthOfField
          (ADS_CameraManager *this,EDS_DepthOfFieldType *param_1,
          TWeakObjectPtr<AActor,FWeakObjectPtr> param_2)

{
  bool bVar1;
  UDS_CameraComponent *this_00;
  UDS_LogManager *pUVar2;
  UDS_DepthOfFieldDataAsset *this_01;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr local_168;
  FDS_DepthOfFieldData local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  this_00 = GetCurrentCameraComponent(this);
  if (this_00 != (UDS_CameraComponent *)0x0) {
    UDS_DepthOfFieldDataAsset::GetInst();
    bVar1 = TWeakObjectPtr<UDS_DepthOfFieldDataAsset,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DepthOfFieldDataAsset,FWeakObjectPtr> *)&local_168,
                       (void *)0x0);
    if (bVar1) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"ADS_CameraManager::EnableDepthOfField",0x25,Yes);
        UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x163,L"dofDataAsset is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      this_01 = (UDS_DepthOfFieldDataAsset *)FWeakObjectPtr::Get(&local_168);
      UDS_DepthOfFieldDataAsset::GetData(this_01,&local_160,*param_1);
      UDS_CameraComponent::EnableDepthOfField(this_00,&local_160,param_2);
    }
  }
  return;
}

// EnableMotionBlur @ 14b8bed40

void __thiscall ADS_CameraManager::EnableMotionBlur(ADS_CameraManager *this)

{
  UDS_CameraComponent *this_00;
  
  this_00 = GetCurrentCameraComponent(this);
  if (this_00 != (UDS_CameraComponent *)0x0) {
    UDS_CameraComponent::EnableMotionBlur
              (this_00,__real_3f800000,__real_3f800000,10,__real_3f800000);
  }
  return;
}

// EndPlay @ 14b8bedc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_CameraManager::EndPlay(ADS_CameraManager *this,Type param_1)

{
  *(undefined4 *)&this->field_0x2738 = 0;
  if (*(int *)&this->field_0x273c != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&this->field_0x2730,0,(int *)&this->field_0x273c);
  }
  (**(code **)(*(longlong *)this + 0x7e8))(this,param_1 == Destroyed);
  AActor::EndPlay((AActor *)this,param_1);
  return;
}

// GetCameraFOV @ 14b8c4920

float __thiscall ADS_CameraManager::GetCameraFOV(ADS_CameraManager *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UDS_CameraComponent *pUVar1;
  float fVar2;
  
  pUVar1 = GetCurrentCameraComponent(this);
  if (pUVar1 != (UDS_CameraComponent *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(pUVar1->_padding_ + 0x6c0);
                    /* WARNING: Could not recover jumptable at 0x00014b8c493f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(*UNRECOVERED_JUMPTABLE)(pUVar1,UNRECOVERED_JUMPTABLE);
    return fVar2;
  }
  return 0.0;
}

// GetCurrentCameraComponent @ 14b8c49e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UDS_CameraComponent * __thiscall
ADS_CameraManager::GetCurrentCameraComponent(ADS_CameraManager *this)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  AActor *pAVar4;
  UDS_CameraComponent *pUVar5;
  UClass *pUVar6;
  FWeakObjectPtr local_res10 [3];
  
  ADS_PlayerController::GetPlayerController();
  bVar2 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(local_res10);
    if (*(longlong *)&pUVar3[0x16].field_0x20 != 0) {
      pAVar4 = APlayerCameraManager::GetViewTarget((APlayerCameraManager *)this);
      if (pAVar4 != (AActor *)0x0) {
        pUVar5 = (UDS_CameraComponent *)MovieSceneHelpers::CameraComponentFromActor(pAVar4);
        if (pUVar5 != (UDS_CameraComponent *)0x0) {
          pUVar6 = Z_Construct_UClass_UDS_CameraComponent_NoRegister();
          iVar1 = (int)pUVar6->_padding_;
          if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar1) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar6->_padding_)) {
            pUVar5 = (UDS_CameraComponent *)0x0;
          }
          return pUVar5;
        }
      }
    }
  }
  return (UDS_CameraComponent *)0x0;
}

// GetFinishFadeDelegate @ 14b8c6420

TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> * __thiscall
ADS_CameraManager::GetFinishFadeDelegate(ADS_CameraManager *this)

{
  return &(this->FadeInfo).FinishFadeDelegate;
}

// GetInst @ 14b8c7420

ADS_CameraManager * __cdecl ADS_CameraManager::GetInst(void)

{
  return StaticInstance;
}

// GetNpcTalkCameraLocation @ 14b8c7c80

TVector<double> * __thiscall
ADS_CameraManager::GetNpcTalkCameraLocation
          (ADS_CameraManager *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  bool bVar4;
  UObject *pUVar5;
  
  bVar4 = TWeakObjectPtr<ADS_CameraActor_NPCTalk,FWeakObjectPtr>::UEOpEquals
                    (&this->npcCameraActor,(void *)0x0);
  if (!bVar4) {
    pUVar5 = FWeakObjectPtr::Get(&(this->npcCameraActor).WeakPtr);
    pUVar5 = *(UObject **)(pUVar5 + 0x12);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    if (pUVar5 == (UObject *)0x0) {
      pUVar5 = (UObject *)0x0;
    }
    if (pUVar5 != (UObject *)0x0) {
      dVar2 = *(double *)&pUVar5[0xd].field_0x10;
      dVar1 = *(double *)&pUVar5[0xd].field_0x18;
      (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)&pUVar5[0xd].field_0x8;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
      return __return_storage_ptr__;
    }
  }
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetZoomInOutValue @ 14b8c92d0

float __thiscall ADS_CameraManager::GetZoomInOutValue(ADS_CameraManager *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UDS_CameraComponent *pUVar1;
  float fVar2;
  
  pUVar1 = GetCurrentCameraComponent(this);
  if (pUVar1 != (UDS_CameraComponent *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(pUVar1->_padding_ + 0x6b0);
                    /* WARNING: Could not recover jumptable at 0x00014b8c92ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(*UNRECOVERED_JUMPTABLE)(pUVar1,UNRECOVERED_JUMPTABLE);
    return fVar2;
  }
  return 0.0;
}

// InitCameraManager @ 14b8ca000

void __thiscall ADS_CameraManager::InitCameraManager(ADS_CameraManager *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UDS_CameraComponent *pUVar1;
  
  pUVar1 = GetCurrentCameraComponent(this);
  if (pUVar1 != (UDS_CameraComponent *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(pUVar1->_padding_ + 0x670);
                    /* WARNING: Could not recover jumptable at 0x00014b8ca01f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pUVar1,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}

// IsDuringFadeAnimation @ 14b8d00e0

bool __thiscall ADS_CameraManager::IsDuringFadeAnimation(ADS_CameraManager *this)

{
  return (this->FadeInfo).FadeState != None;
}

// OnCameraNotifyBegin @ 14b8d4070

void __thiscall ADS_CameraManager::OnCameraNotifyBegin(ADS_CameraManager *this,float param_1)

{
  UDS_CameraComponent *pUVar1;
  
  pUVar1 = GetCurrentCameraComponent(this);
  if (pUVar1 != (UDS_CameraComponent *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x6f0))(pUVar1,param_1);
  }
  return;
}

// OnCameraNotifyDistance @ 14b8d40b0

void __thiscall
ADS_CameraManager::OnCameraNotifyDistance
          (ADS_CameraManager *this,float param_1,UCurveFloat *param_2,float param_3)

{
  UDS_CameraComponent *pUVar1;
  
  pUVar1 = GetCurrentCameraComponent(this);
  if (pUVar1 != (UDS_CameraComponent *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x6c8))(pUVar1,param_1,param_2,param_3);
  }
  return;
}

// OnCameraNotifyEnd @ 14b8d4110

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ADS_CameraManager::OnCameraNotifyEnd(ADS_CameraManager *this,AActor *param_1,bool param_2)

{
  UDS_CameraComponent *pUVar1;
  
  pUVar1 = GetCurrentCameraComponent(this);
  if (pUVar1 != (UDS_CameraComponent *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x6f8))(pUVar1,param_1,param_2);
  }
  return;
}

// OnCameraNotifyFOV @ 14b8d4160

void __thiscall
ADS_CameraManager::OnCameraNotifyFOV
          (ADS_CameraManager *this,float param_1,UCurveFloat *param_2,float param_3)

{
  UDS_CameraComponent *pUVar1;
  
  pUVar1 = GetCurrentCameraComponent(this);
  if (pUVar1 != (UDS_CameraComponent *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x6d8))(pUVar1,param_1,param_2,param_3);
  }
  return;
}

// OnCameraNotifyInputIgnore @ 14b8d41c0

void __thiscall
ADS_CameraManager::OnCameraNotifyInputIgnore(ADS_CameraManager *this,float param_1,float param_2)

{
  UDS_CameraComponent *pUVar1;
  
  pUVar1 = GetCurrentCameraComponent(this);
  if (pUVar1 != (UDS_CameraComponent *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x6e8))(pUVar1,param_1,param_2);
  }
  return;
}

// OnCameraNotifyRotation @ 14b8d4210

void __thiscall
ADS_CameraManager::OnCameraNotifyRotation
          (ADS_CameraManager *this,TRotator<double> *param_1,UCurveBase *param_2,float param_3)

{
  UDS_CameraComponent *pUVar1;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double local_28;
  
  pUVar1 = GetCurrentCameraComponent(this);
  if (pUVar1 != (UDS_CameraComponent *)0x0) {
    local_38 = *(undefined4 *)&param_1->Pitch;
    uStack_34 = *(undefined4 *)((longlong)&param_1->Pitch + 4);
    uStack_30 = *(undefined4 *)&param_1->Yaw;
    uStack_2c = *(undefined4 *)((longlong)&param_1->Yaw + 4);
    local_28 = param_1->Roll;
    (**(code **)(pUVar1->_padding_ + 0x6d0))(pUVar1,&local_38,param_2,param_3);
  }
  return;
}

// OnCameraNotifySocket @ 14b8d4280

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ADS_CameraManager::OnCameraNotifySocket
          (ADS_CameraManager *this,AActor *param_1,FString *param_2,TVector<double> *param_3)

{
  UDS_CameraComponent *pUVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  
  pUVar1 = GetCurrentCameraComponent(this);
  if (pUVar1 != (UDS_CameraComponent *)0x0) {
    local_28 = *(undefined4 *)&param_3->field0_0x0;
    uStack_24 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 4);
    uStack_20 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 8);
    uStack_1c = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0xc);
    local_18 = (param_3->field0_0x0)._s_0.Z;
    (**(code **)(pUVar1->_padding_ + 0x6e0))(pUVar1,param_1,param_2,&local_28);
  }
  return;
}

// PostInitializeComponents @ 14b8df410

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_CameraManager::PostInitializeComponents(ADS_CameraManager *this)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  TSubclassOf<UCameraModifier> *pTVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  IModularFeatures *pIVar9;
  FName FVar10;
  longlong lVar11;
  UClass *pUVar12;
  UObject *pUVar13;
  ulonglong uVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  undefined1 auStackX_8 [8];
  undefined1 auStackX_10 [8];
  UObject *apUStackX_18 [2];
  ulonglong uStack_68;
  ForAnyElementType FStack_60;
  uint uStack_58;
  uint uStack_54;
  ForAnyElementType FStack_50;
  int iStack_48;
  int aiStack_44 [3];
  
  AActor::PostInitializeComponents((AActor *)this);
  iVar8 = *(int *)&this->field_0x2748;
  pTVar4 = *(TSubclassOf<UCameraModifier> **)&this->field_0x2740;
  FStack_50.Data = (FScriptContainerElement *)0x0;
  iStack_48 = iVar8;
  if (iVar8 == 0) {
    aiStack_44[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar8,0,&FStack_50,iVar8,aiStack_44);
    ConstructItems<TSubclassOf<UCameraModifier>,TSubclassOf<UCameraModifier>,int>
              (FStack_50.Data,pTVar4,iVar8);
  }
  pIVar9 = IModularFeatures::Get();
  FVar10 = ICameraModularFeature::GetModularFeatureName();
  uVar5 = *(undefined8 *)FVar10;
  FStack_60.Data = (FScriptContainerElement *)0x0;
  uStack_58 = 0;
  uStack_54 = 0;
  iVar8 = (**(code **)((longlong)*pIVar9 + 0x18))(pIVar9);
  uVar14 = 0;
  if (0 < iVar8) {
    do {
      lVar11 = (**(code **)((longlong)*pIVar9 + 0x20))(pIVar9,uVar5,uVar14);
      uStack_68 = lVar11 - 8;
      if (lVar11 == 0) {
        uStack_68 = 0;
      }
      if (((FStack_60.Data <= (FScriptContainerElement *)&uStack_68) &&
          ((FScriptContainerElement *)&uStack_68 < FStack_60.Data + (longlong)(int)uStack_54 * 8))
         && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uStack_58 == uStack_54) {
        uStack_58 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&FStack_60,(int *)&uStack_54);
      }
      uVar1 = uStack_58 + 1;
      uVar16 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar16;
      *(ulonglong *)(FStack_60.Data + (longlong)(int)uStack_58 * 8) = uStack_68;
      uStack_58 = uVar1;
    } while ((int)uVar16 < iVar8);
  }
  uVar1 = uStack_58;
  uVar14 = (ulonglong)(int)uStack_58;
  pFVar2 = FStack_60.Data + uVar14 * 8;
  FVar15.Data = FStack_60.Data;
  while( true ) {
    if ((uint)uVar14 != uVar1) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<ICameraModularFeature_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_8);
    }
    iVar8 = iStack_48;
    if (FVar15.Data == pFVar2) break;
    if (*(undefined8 **)FVar15.Data == (undefined8 *)0x0) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5785548495079341435>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PlayerCameraManager.cpp"
                         ,0x285,"CameraModularFeature");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else {
      (**(code **)**(undefined8 **)FVar15.Data)();
    }
    uVar14 = (ulonglong)uStack_58;
    FVar15.Data = FVar15.Data + 8;
  }
  if (0 < iStack_48) {
    pFVar2 = FStack_50.Data + (longlong)iStack_48 * 8;
    FVar15.Data = FStack_50.Data;
    while( true ) {
      if (iStack_48 != iVar8) {
        `TCheckedPointerIterator<TSubclassOf<UCameraModifier>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(auStackX_10);
      }
      if (FVar15.Data == pFVar2) break;
      pUVar13 = *(UObject **)FVar15.Data;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar13 != (UObject *)0x0) goto LAB_14839a524;
      }
      else if (pUVar13 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar13);
LAB_14839a524:
        pUVar12 = Z_Construct_UClass_UCameraModifier_NoRegister();
        if (pUVar12 != (UClass *)0x0) {
          iVar3 = (int)pUVar12->_padding_;
          if ((*(int *)&pUVar13[1].field_0x10 < iVar3) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar13[1].field_0x8 + (longlong)iVar3 * 8)
              != &pUVar12->_padding_)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if (bVar7) {
            pcVar6 = *(code **)(*(longlong *)this + 0x7c8);
            apUStackX_18[0] = pUVar13;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar13);
            }
            pUVar13 = (UObject *)(*pcVar6)(this,apUStackX_18);
            if (pUVar13 != (UObject *)0x0) {
              pUVar12 = Z_Construct_UClass_UCameraModifier_CameraShake_NoRegister();
              iVar3 = (int)pUVar12->_padding_;
              if ((iVar3 <= *(int *)(*(longlong *)&pUVar13->field_0x10 + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&pUVar13->field_0x10 + 0x30) + (longlong)iVar3 * 8)
                  == &pUVar12->_padding_)) {
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable(pUVar13);
                }
                *(UObject **)&this->field_0x27c8 = pUVar13;
              }
            }
          }
        }
      }
      FVar15.Data = FVar15.Data + 8;
    }
  }
  if (FStack_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_60.Data);
  }
  if (FStack_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_50.Data);
  }
  return;
}

// RefreshCameraManager @ 14b8e1100

void __thiscall ADS_CameraManager::RefreshCameraManager(ADS_CameraManager *this)

{
  code *UNRECOVERED_JUMPTABLE;
  UDS_CameraComponent *pUVar1;
  
  pUVar1 = GetCurrentCameraComponent(this);
  if (pUVar1 != (UDS_CameraComponent *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(pUVar1->_padding_ + 0x678);
                    /* WARNING: Could not recover jumptable at 0x00014b8e111f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pUVar1,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}

// RequestFade @ 14b8e33b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
ADS_CameraManager::RequestFade(ADS_CameraManager *this,EDS_CameraFadeState *param_1,float *param_2)

{
  float fVar1;
  EDS_CameraFadeState EVar2;
  EDS_CameraFadeState EVar3;
  float fVar4;
  UDS_LogManager *pUVar5;
  float fVar6;
  float fVar7;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  fVar4 = __real_322bcc77;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  EVar2 = *param_1;
  if (EVar2 == None) {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 != (UDS_LogManager *)0x0) {
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"ADS_CameraManager::RequestFade",0x1e,Yes);
      UDS_LogManager::PrintLog(pUVar5,1,Warning,local_138.Ptr,0x207,L"InFadeState is None.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return;
      }
    }
  }
  else {
    fVar7 = (this->FadeInfo).FadeTimeRatio;
    EVar3 = (this->FadeInfo).FadeState;
    fVar6 = (float)((uint)fVar7 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    (this->FadeInfo).FadeState = EVar2;
    fVar1 = *param_2;
    (this->FadeInfo).FadeTotalTime = fVar1;
    if (fVar4 < fVar6) {
      if (EVar2 != EVar3) {
        fVar7 = __real_3f800000 - fVar7;
      }
      (this->FadeInfo).FadeElapsedTime = fVar1 * fVar7;
      return;
    }
    (this->FadeInfo).FadeElapsedTime = 0.0;
  }
  return;
}

// SetBossCamera @ 14b8e6e30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_CameraManager::SetBossCamera(ADS_CameraManager *this,bool param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UDS_EntityManager *this_00;
  FDS_EntityBase *pFVar5;
  UObject *pUVar6;
  FDS_NpcBaseTableRow *pFVar7;
  FWeakObjectPtr *this_01;
  UClass *pUVar8;
  UWorld *pUVar9;
  APlayerController *pAVar10;
  uint uVar11;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  ulonglong in_stack_ffffffffffffffa8;
  ulonglong in_stack_ffffffffffffffb0;
  FWeakObjectPtr local_48;
  UObject *local_40;
  undefined1 local_38 [8];
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_30;
  
  this_00 = UDS_EntityManager::GetInst();
  uVar4 = (uint)(in_stack_ffffffffffffffa8 >> 0x20);
  if ((this_00 == (UDS_EntityManager *)0x0) || (!param_1)) {
    ADS_MainCharacter::GetMainPlayer();
    bVar3 = FWeakObjectPtr::IsValid(&local_48);
    if (bVar3) {
      pUVar9 = AActor::GetWorld((AActor *)this);
      pAVar10 = UWorld::GetFirstPlayerController(pUVar9);
      if (pAVar10 != (APlayerController *)0x0) {
        pUVar8 = Z_Construct_UClass_ADS_PlayerController_NoRegister();
        iVar1 = (int)pUVar8->_padding_;
        if ((iVar1 <= *(int *)(pAVar10->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pAVar10->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar8->_padding_)) {
          pcVar2 = *(code **)(pAVar10->_padding_ + 0xd78);
          pUVar6 = FWeakObjectPtr::Get(&local_48);
          (*pcVar2)(pAVar10,pUVar6,0,0,(ulonglong)uVar4 << 0x20,
                    in_stack_ffffffffffffffb0 & 0xffffffffffffff00);
        }
      }
    }
  }
  else {
    UDS_EntityManager::GetEntityIDArray(this_00,&local_30,NPC);
    pUVar6 = (UObject *)0x0;
    if (0 < local_30.ArrayNum) {
      do {
        uVar11 = (uint)pUVar6;
        uVar4 = 0;
        if ((int)uVar11 < local_30.ArrayNum) {
          uVar4 = ~uVar11 >> 0x1f;
        }
        if (uVar4 == 0) {
          in_stack_ffffffffffffffb0 = (ulonglong)local_30.ArrayNum;
          in_stack_ffffffffffffffa8 = (ulonglong)(int)uVar11;
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        pFVar5 = FDS_EntityBase::GetEntityBase
                           ((ulong64 *)(local_30.AllocatorInstance.Data + (longlong)(int)uVar11 * 8)
                           );
        if (pFVar5 != (FDS_EntityBase *)0x0) {
          UDS_NPCBattleData::GetData((ulong64)&local_res20);
          bVar3 = FWeakObjectPtr::IsValid(&local_res20);
          if (((bVar3) &&
              (pUVar6 = FWeakObjectPtr::Get(&local_res20), 3 < (byte)pUVar6[2].field_0x9)) &&
             (pFVar7 = FDS_NpcBaseTableRow::Get(pFVar5->TableID,true),
             pFVar7 != (FDS_NpcBaseTableRow *)0x0)) {
            this_01 = (FWeakObjectPtr *)(**(code **)(pFVar5->_padding_ + 0x150))(pFVar5,local_38);
            pUVar6 = FWeakObjectPtr::Get(this_01);
            if (pUVar6 == (UObject *)0x0) {
LAB_14b8e6f7a:
              pUVar6 = (UObject *)0x0;
            }
            else {
              pUVar8 = Z_Construct_UClass_ADS_NPCBoss_NoRegister();
              iVar1 = (int)pUVar8->_padding_;
              if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar1) ||
                 ((longlong *)
                  *(undefined1 **)
                   (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
                  &pUVar8->_padding_)) goto LAB_14b8e6f7a;
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar6);
            }
            local_res18.ObjectIndex = 0;
            local_res18.ObjectSerialNumber = 0;
            local_40 = pUVar6;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar6);
            }
            FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_40);
            bVar3 = FWeakObjectPtr::IsValid(&local_res18);
            if (bVar3) {
              pUVar9 = AActor::GetWorld((AActor *)this);
              pAVar10 = UWorld::GetFirstPlayerController(pUVar9);
              if (pAVar10 != (APlayerController *)0x0) {
                pUVar8 = Z_Construct_UClass_ADS_PlayerController_NoRegister();
                iVar1 = (int)pUVar8->_padding_;
                if ((iVar1 <= *(int *)(pAVar10->_padding_ + 0x38)) &&
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)(pAVar10->_padding_ + 0x30) + (longlong)iVar1 * 8)
                    == &pUVar8->_padding_)) {
                  pcVar2 = *(code **)(pAVar10->_padding_ + 0xd78);
                  pUVar6 = FWeakObjectPtr::Get(&local_res18);
                  (*pcVar2)(pAVar10,pUVar6,0,0,in_stack_ffffffffffffffa8 & 0xffffffff00000000,
                            in_stack_ffffffffffffffb0 & 0xffffffffffffff00);
                }
              }
              break;
            }
          }
        }
        pUVar6 = (UObject *)(ulonglong)(uVar11 + 1);
      } while ((int)(uVar11 + 1) < local_30.ArrayNum);
    }
    if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// SetCameraFOV @ 14b8e72e0

void __thiscall ADS_CameraManager::SetCameraFOV(ADS_CameraManager *this,float param_1)

{
  UDS_CameraComponent *pUVar1;
  
  pUVar1 = GetCurrentCameraComponent(this);
  if (pUVar1 != (UDS_CameraComponent *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x6b8))(pUVar1,param_1);
  }
  return;
}

// SetCameraRotation @ 14b8e7440

void __thiscall
ADS_CameraManager::SetCameraRotation(ADS_CameraManager *this,TRotator<double> *param_1)

{
  UDS_CameraComponent *pUVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  
  pUVar1 = GetCurrentCameraComponent(this);
  if (pUVar1 != (UDS_CameraComponent *)0x0) {
    local_28 = *(undefined4 *)&param_1->Pitch;
    uStack_24 = *(undefined4 *)((longlong)&param_1->Pitch + 4);
    uStack_20 = *(undefined4 *)&param_1->Yaw;
    uStack_1c = *(undefined4 *)((longlong)&param_1->Yaw + 4);
    local_18 = param_1->Roll;
    (**(code **)(pUVar1->_padding_ + 0x698))(pUVar1,&local_28);
  }
  return;
}

// SetDebugMode @ 14b8e7a30

void __thiscall ADS_CameraManager::SetDebugMode(ADS_CameraManager *this,bool param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  UDS_CameraComponent *pUVar1;
  
  this->bIsDebugMode = param_1;
  pUVar1 = GetCurrentCameraComponent(this);
  if (pUVar1 != (UDS_CameraComponent *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(pUVar1->_padding_ + 0x680);
                    /* WARNING: Could not recover jumptable at 0x00014b8e7a5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pUVar1,param_1,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}

// SetMainCharCamera @ 14b8e8590

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall ADS_CameraManager::SetMainCharCamera(ADS_CameraManager *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  AActor *this_00;
  UObject *pUVar4;
  FDS_EntityBase *pFVar5;
  FWeakObjectPtr *pFVar6;
  UWorld *this_01;
  APlayerController *pAVar7;
  UClass *pUVar8;
  UDS_CameraComponent *this_02;
  undefined1 local_res8 [8];
  TVector<double>_u_0 local_28;
  
  bVar3 = TWeakObjectPtr<ADS_CameraActor_NPCTalk,FWeakObjectPtr>::UEOpEquals
                    (&this->npcCameraActor,(void *)0x0);
  if (!bVar3) {
    this_00 = (AActor *)FWeakObjectPtr::Get(&(this->npcCameraActor).WeakPtr);
    AActor::DetachFromActor(this_00,&FDetachmentTransformRules::KeepWorldTransform);
    this_00[1]._padding_ = 0;
    pUVar4 = FWeakObjectPtr::Get(&(this->npcCameraActor).WeakPtr);
    if (*(USceneComponent **)&pUVar4[0x11].field_0x20 != (USceneComponent *)0x0) {
      local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      USceneComponent::SetRelativeLocation
                (*(USceneComponent **)&pUVar4[0x11].field_0x20,(TVector<double> *)&local_28._s_0,
                 false,(FHitResult *)0x0,None);
      local_28._s_0.X = UE::Math::TRotator<double>::ZeroRotator.Pitch;
      local_28._s_0.Y = UE::Math::TRotator<double>::ZeroRotator.Yaw;
      local_28._s_0.Z = UE::Math::TRotator<double>::ZeroRotator.Roll;
      USceneComponent::SetRelativeRotation
                (*(USceneComponent **)&pUVar4[0x11].field_0x20,(TRotator<double> *)&local_28._s_0,
                 false,(FHitResult *)0x0,None);
    }
  }
  pFVar5 = FDS_EntityBase::GetMainPlayerEntityBase(true);
  if (pFVar5 != (FDS_EntityBase *)0x0) {
    pFVar6 = (FWeakObjectPtr *)(**(code **)(pFVar5->_padding_ + 0x150))(pFVar5,local_res8);
    bVar3 = FWeakObjectPtr::IsValid(pFVar6);
    if (bVar3) {
      this_01 = AActor::GetWorld((AActor *)this);
      pAVar7 = UWorld::GetFirstPlayerController(this_01);
      if (pAVar7 != (APlayerController *)0x0) {
        pUVar8 = Z_Construct_UClass_ADS_PlayerController_NoRegister();
        iVar1 = (int)pUVar8->_padding_;
        if ((iVar1 <= *(int *)(pAVar7->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pAVar7->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar8->_padding_)) {
          pcVar2 = *(code **)(pAVar7->_padding_ + 0xd78);
          pFVar6 = (FWeakObjectPtr *)(**(code **)(pFVar5->_padding_ + 0x150))(pFVar5,local_res8);
          pUVar4 = FWeakObjectPtr::Get(pFVar6);
          (*pcVar2)(pAVar7,pUVar4,0,0,0,0);
        }
      }
      this_02 = GetCurrentCameraComponent(this);
      if (this_02 != (UDS_CameraComponent *)0x0) {
        UDS_CameraComponent::DisableDepthOfField(this_02);
      }
    }
  }
  return;
}

// SetNpcTalkCamera @ 14b8e8b10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
ADS_CameraManager::SetNpcTalkCamera(ADS_CameraManager *this,ulong64 *param_1,int param_2)

{
  TWeakObjectPtr<ADS_CameraActor_NPCTalk,FWeakObjectPtr> *this_00;
  int iVar1;
  FName FVar2;
  longlong *plVar3;
  code *pcVar4;
  FWeakObjectPtr FVar5;
  bool bVar6;
  FDS_EntityBase *pFVar7;
  FWeakObjectPtr *pFVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  UDS_CharStateData *this_01;
  FName *pFVar11;
  UWorld *pUVar12;
  ADS_CameraActor *this_02;
  FDS_NpcCameraTableRow *pFVar13;
  APlayerController *pAVar14;
  UDS_CameraComponent *this_03;
  UDS_LogManager *pUVar15;
  UDS_DepthOfFieldDataAsset *this_04;
  undefined1 auStackY_288 [32];
  FWeakObjectPtr local_258;
  EDS_CharDetailState local_250 [2];
  FWeakObjectPtr local_248;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_240;
  FWeakObjectPtr local_230;
  FWeakObjectPtr local_228;
  UObject *local_220;
  UClass *local_218;
  UObject *local_210;
  undefined8 local_208 [2];
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined1 local_1d8 [8];
  FName local_1d0;
  undefined1 local_1c8 [16];
  TVector<double>_u_0 local_1b8;
  FDS_DepthOfFieldData local_198;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  if (param_2 < 1) {
    return;
  }
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_288;
  pFVar7 = FDS_EntityBase::GetEntityBase(param_1);
  if (pFVar7 == (FDS_EntityBase *)0x0) {
    return;
  }
  pFVar8 = (FWeakObjectPtr *)(**(code **)(pFVar7->_padding_ + 0x150))(pFVar7,local_1d8);
  pUVar9 = FWeakObjectPtr::Get(pFVar8);
  if (pUVar9 == (UObject *)0x0) {
LAB_14b8e8bba:
    pUVar9 = (UObject *)0x0;
  }
  else {
    pUVar10 = Z_Construct_UClass_ADS_NPC_NoRegister();
    iVar1 = (int)pUVar10->_padding_;
    if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar10->_padding_)) goto LAB_14b8e8bba;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  local_258.ObjectIndex = 0;
  local_258.ObjectSerialNumber = 0;
  local_220 = pUVar9;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar9);
  }
  FWeakObjectPtr::operator=(&local_258,(FObjectPtr)&local_220);
  bVar6 = FWeakObjectPtr::IsValid(&local_258);
  if (!bVar6) {
    return;
  }
  FDS_EntityBase::GetMainPlayerEntityID(true);
  UDS_CharStateData::GetData((ulong64)&local_230);
  bVar6 = FWeakObjectPtr::IsValid(&local_230);
  if (!bVar6) {
    return;
  }
  this_01 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_230);
  local_250[0] = Interaction_NPCTalk;
  bVar6 = UDS_CharStateData::HasCharDetailState(this_01,local_250);
  if (!bVar6) {
    return;
  }
  this_00 = &this->npcCameraActor;
  bVar6 = TWeakObjectPtr<ADS_CameraActor_NPCTalk,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  if (!bVar6) goto LAB_14b8e8d53;
  local_240.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_240.ArrayNum = 0;
  local_240.ArrayMax = 0;
  pFVar11 = ::FName::FName(&local_1d0,"NPCTalkCamera");
  FVar2 = *pFVar11;
  local_218 = Z_Construct_UClass_ADS_CameraActor_NPCTalk_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_218 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_218);
  }
  pUVar12 = AActor::GetWorld((AActor *)this);
  UGameplayStatics::GetAllActorsOfClassWithTag
            ((UObject *)pUVar12,(TSubclassOf<AActor>)&local_218,FVar2,&local_240);
  if (0 < local_240.ArrayNum) {
    pUVar9 = *(UObject **)local_240.AllocatorInstance.Data;
    if (pUVar9 == (UObject *)0x0) {
LAB_14b8e8d19:
      local_210 = (UObject *)0x0;
    }
    else {
      pUVar10 = Z_Construct_UClass_ADS_CameraActor_NPCTalk_NoRegister();
      iVar1 = (int)pUVar10->_padding_;
      if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar1) ||
         (local_210 = pUVar9,
         (longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
         &pUVar10->_padding_)) goto LAB_14b8e8d19;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_210 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_210);
    }
    FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_210);
  }
  if (local_240.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_240.AllocatorInstance.Data);
  }
LAB_14b8e8d53:
  bVar6 = TWeakObjectPtr<ADS_CameraActor_NPCTalk,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  if (!bVar6) {
    this_02 = (ADS_CameraActor *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    pFVar8 = (FWeakObjectPtr *)(**(code **)(pFVar7->_padding_ + 0x150))(pFVar7,local_1c8);
    ADS_CameraActor::SetBaseActor(this_02,(TWeakObjectPtr<AActor,FWeakObjectPtr>)*pFVar8);
    pUVar9 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    pFVar13 = FDS_NpcCameraTableRow::Get((longlong)param_2,true);
    if ((pFVar13 != (FDS_NpcCameraTableRow *)0x0) &&
       (*(USceneComponent **)&pUVar9[0x11].field_0x20 != (USceneComponent *)0x0)) {
      local_1e8 = (double)pFVar13->TargetHeightOffset;
      local_1b8._8_4_ = SUB84((double)pFVar13->TargetWidthOffset,0);
      local_1b8._0_8_ = (double)pFVar13->Distance;
      local_1b8._12_4_ = (int)((ulonglong)(double)pFVar13->TargetWidthOffset >> 0x20);
      local_1b8._s_0.Z = local_1e8;
      USceneComponent::SetRelativeLocation
                (*(USceneComponent **)&pUVar9[0x11].field_0x20,(TVector<double> *)&local_1b8._s_0,
                 false,(FHitResult *)0x0,None);
      local_1e8 = ((*(USceneComponent **)&pUVar9[0x11].field_0x20)->RelativeRotation).Roll;
      local_1f8._8_4_ = (int)__real_4066800000000000;
      local_1f8._0_8_ = (double)pFVar13->Pitch;
      local_1f8._12_4_ = (int)((ulonglong)__real_4066800000000000 >> 0x20);
      USceneComponent::SetRelativeRotation
                (*(USceneComponent **)&pUVar9[0x11].field_0x20,(TRotator<double> *)local_1f8,false,
                 (FHitResult *)0x0,None);
      plVar3 = *(longlong **)(pUVar9 + 0x12);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x640))(plVar3,pFVar13->FieldOfView);
      }
    }
    pUVar9 = FWeakObjectPtr::Get(&local_258);
    if (*(char *)(pUVar9 + 0x2f) == '\0') {
      pUVar12 = AActor::GetWorld((AActor *)this);
      pAVar14 = UWorld::GetFirstPlayerController(pUVar12);
      if (pAVar14 != (APlayerController *)0x0) {
        pUVar10 = Z_Construct_UClass_ADS_PlayerController_NoRegister();
        iVar1 = (int)pUVar10->_padding_;
        if ((iVar1 <= *(int *)(pAVar14->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pAVar14->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar10->_padding_)) {
          pcVar4 = *(code **)(pAVar14->_padding_ + 0xd78);
          pUVar9 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          (*pcVar4)(pAVar14,pUVar9,0,0);
        }
      }
      local_248.ObjectIndex = 0;
      local_248.ObjectSerialNumber = 0;
      local_208[0] = 0;
      FWeakObjectPtr::operator=(&local_248,(FObjectPtr)local_208);
      FVar5 = local_248;
      this_03 = GetCurrentCameraComponent(this);
      if (this_03 != (UDS_CameraComponent *)0x0) {
        UDS_DepthOfFieldDataAsset::GetInst();
        bVar6 = TWeakObjectPtr<UDS_DepthOfFieldDataAsset,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_DepthOfFieldDataAsset,FWeakObjectPtr> *)&local_228,
                           (void *)0x0);
        if (bVar6) {
          pUVar15 = UDS_LogManager::GetInst();
          if (pUVar15 != (UDS_LogManager *)0x0) {
            pUVar15 = UDS_LogManager::GetInst();
            local_168._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_168,"ADS_CameraManager::EnableDepthOfField",0x25,Yes);
            UDS_LogManager::PrintLog
                      (pUVar15,1,Warning,local_168.Ptr,0x163,L"dofDataAsset is nullptr.");
            if ((void *)local_168._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_168._padding_);
            }
          }
        }
        else {
          this_04 = (UDS_DepthOfFieldDataAsset *)FWeakObjectPtr::Get(&local_228);
          UDS_DepthOfFieldDataAsset::GetData(this_04,&local_198,NPCTalk);
          UDS_CameraComponent::EnableDepthOfField
                    (this_03,&local_198,(TWeakObjectPtr<AActor,FWeakObjectPtr>)FVar5);
        }
      }
    }
  }
  return;
}

// SetViewTarget @ 14b8eac00

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
ADS_CameraManager::SetViewTarget
          (ADS_CameraManager *this,AActor *param_1,FViewTargetTransitionParams *param_2)

{
  int iVar1;
  bool bVar2;
  UDS_CameraComponent *pUVar3;
  UWorld *pUVar4;
  UClass *pUVar5;
  UClass *pUVar6;
  UWN_UDS_Subsystem *this_00;
  UWN_WorldUtils_Subsystem *this_01;
  EWN_VolumeObserverMode EVar7;
  FWeakObjectPtr local_res18;
  FViewTargetTransitionParams local_18;
  
  pUVar3 = GetCurrentCameraComponent(this);
  if (pUVar3 != (UDS_CameraComponent *)0x0) {
    USceneComponent::SetVisibility((USceneComponent *)pUVar3,false,Propagate);
    (**(code **)(pUVar3->_padding_ + 0x690))(pUVar3);
  }
  local_18.BlendTime = param_2->BlendTime;
  local_18.BlendFunction.Value = (param_2->BlendFunction).Value;
  local_18._5_3_ = *(undefined3 *)&param_2->field_0x5;
  local_18.BlendExp = param_2->BlendExp;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  APlayerCameraManager::SetViewTarget((APlayerCameraManager *)this,param_1,&local_18);
  pUVar3 = GetCurrentCameraComponent(this);
  if (pUVar3 != (UDS_CameraComponent *)0x0) {
    USceneComponent::SetVisibility((USceneComponent *)pUVar3,true,Propagate);
    (**(code **)(pUVar3->_padding_ + 0x688))(pUVar3);
  }
  pUVar4 = AActor::GetWorld((AActor *)this);
  if (pUVar4 == (UWorld *)0x0) {
    return;
  }
  ADS_MainCharacter::GetMainPlayer();
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar2) {
    return;
  }
  pUVar5 = Z_Construct_UClass_UWN_UDS_Subsystem_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar5 != (UClass *)0x0) goto LAB_14b8eace5;
LAB_14b8ead13:
    pUVar5 = (UClass *)0x0;
  }
  else {
    if (pUVar5 == (UClass *)0x0) goto LAB_14b8ead13;
    UE::GC::MarkAsReachable((UObject *)pUVar5);
LAB_14b8eace5:
    pUVar6 = Z_Construct_UClass_UWN_UDS_Subsystem_NoRegister();
    if (pUVar6 == (UClass *)0x0) goto LAB_14b8ead13;
    iVar1 = (int)pUVar6->_padding_;
    if (((int)pUVar5->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) != &pUVar6->_padding_)
       ) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_14b8ead13;
  }
  this_00 = (UWN_UDS_Subsystem *)
            FSubsystemCollectionBase::GetSubsystemInternal
                      ((FSubsystemCollectionBase *)&pUVar4->SubsystemCollection,pUVar5);
  if (this_00 != (UWN_UDS_Subsystem *)0x0) {
    bVar2 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals<AActor,bool>
                      ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_res18,param_1);
    if (bVar2) {
      EVar7 = Player;
    }
    else {
      EVar7 = View;
    }
    UWN_UDS_Subsystem::SetObserverMode(this_00,EVar7);
  }
  pUVar5 = Z_Construct_UClass_UWN_WorldUtils_Subsystem_NoRegister();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (pUVar5 != (UClass *)0x0) goto LAB_14b8ead6c;
  }
  else if (pUVar5 != (UClass *)0x0) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
LAB_14b8ead6c:
    pUVar6 = Z_Construct_UClass_UWN_WorldUtils_Subsystem_NoRegister();
    if (pUVar6 != (UClass *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if (((int)pUVar5->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(pUVar5->_padding_ + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) goto LAB_14b8ead9c;
    }
  }
  pUVar5 = (UClass *)0x0;
LAB_14b8ead9c:
  this_01 = (UWN_WorldUtils_Subsystem *)
            FSubsystemCollectionBase::GetSubsystemInternal
                      ((FSubsystemCollectionBase *)&pUVar4->SubsystemCollection,pUVar5);
  if (this_01 != (UWN_WorldUtils_Subsystem *)0x0) {
    bVar2 = TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr>::UEOpEquals<AActor,bool>
                      ((TWeakObjectPtr<ADS_MainCharacter,FWeakObjectPtr> *)&local_res18,param_1);
    if (bVar2) {
      pUVar5 = Z_Construct_UClass_UWN_BGMVolumeComponent_NoRegister();
      UWN_WorldUtils_Subsystem::SetObserverMode(this_01,pUVar5,Player);
      pUVar5 = Z_Construct_UClass_UWN_AmbientSoundVolumeComponent_NoRegister();
      UWN_WorldUtils_Subsystem::SetObserverMode(this_01,pUVar5,Player);
      pUVar5 = Z_Construct_UClass_UWN_OcclusionVolumeComponent_NoRegister();
      UWN_WorldUtils_Subsystem::SetObserverMode(this_01,pUVar5,Player);
      pUVar5 = Z_Construct_UClass_UWN_UDSVolumeComponent_NoRegister();
      EVar7 = Player;
    }
    else {
      pUVar5 = Z_Construct_UClass_UWN_BGMVolumeComponent_NoRegister();
      UWN_WorldUtils_Subsystem::SetObserverMode(this_01,pUVar5,View);
      pUVar5 = Z_Construct_UClass_UWN_AmbientSoundVolumeComponent_NoRegister();
      UWN_WorldUtils_Subsystem::SetObserverMode(this_01,pUVar5,View);
      pUVar5 = Z_Construct_UClass_UWN_OcclusionVolumeComponent_NoRegister();
      UWN_WorldUtils_Subsystem::SetObserverMode(this_01,pUVar5,View);
      pUVar5 = Z_Construct_UClass_UWN_UDSVolumeComponent_NoRegister();
      EVar7 = View;
    }
    UWN_WorldUtils_Subsystem::SetObserverMode(this_01,pUVar5,EVar7);
  }
  return;
}

// SetZoomInOutValue @ 14b8eafa0

void __thiscall ADS_CameraManager::SetZoomInOutValue(ADS_CameraManager *this,float param_1)

{
  UDS_CameraComponent *pUVar1;
  
  pUVar1 = GetCurrentCameraComponent(this);
  if (pUVar1 != (UDS_CameraComponent *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x6a8))(pUVar1,param_1);
  }
  return;
}

// ShowDebugCameraWidget @ 14b8eb0f0

void __thiscall ADS_CameraManager::ShowDebugCameraWidget(ADS_CameraManager *this,bool param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  UDS_CameraComponent *pUVar1;
  
  pUVar1 = GetCurrentCameraComponent(this);
  if (pUVar1 != (UDS_CameraComponent *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(pUVar1->_padding_ + 0x680);
                    /* WARNING: Could not recover jumptable at 0x00014b8eb118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pUVar1,param_1,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}

// StopFade @ 14b8ed4b0

void __thiscall ADS_CameraManager::StopFade(ADS_CameraManager *this)

{
  FDestructionSentinel local_28;
  
  (**(code **)(*(longlong *)this + 0x910))();
  (this->FadeInfo).FadeState = None;
  (this->FadeInfo).FadeTimeRatio = 0.0;
  (this->FadeInfo).FadeElapsedTime = 0.0;
  (this->FadeInfo).FadeTotalTime = 0.0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &(this->FadeInfo).FinishFadeDelegate,(FWriteAccessScope *)&local_28);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::ClearUnchecked
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &(this->FadeInfo).FinishFadeDelegate);
  if (local_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_28.Accessor,&local_28);
  }
  return;
}

// UpdateCamera @ 14b8f1dd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall ADS_CameraManager::UpdateCamera(ADS_CameraManager *this,float param_1)

{
  UDS_CameraComponent *this_00;
  TRotator<double> *pTVar1;
  TRotator<double> local_38 [2];
  
  APlayerCameraManager::UpdateCamera((APlayerCameraManager *)this,param_1);
  this_00 = GetCurrentCameraComponent(this);
  if (this_00 != (UDS_CameraComponent *)0x0) {
    CameraLocation.field0_0x0._s_0.Z = (double)this_00->_padding_;
    CameraLocation.field0_0x0._s_0.X = (double)this_00->_padding_;
    CameraLocation.field0_0x0._s_0.Y = (double)this_00->_padding_;
    local_38[0].Roll = CameraLocation.field0_0x0._s_0.Z;
    pTVar1 = USceneComponent::GetComponentRotation((USceneComponent *)this_00,local_38);
    CameraRotation.Pitch = pTVar1->Pitch;
    CameraRotation.Yaw = pTVar1->Yaw;
    CameraRotation.Roll = pTVar1->Roll;
  }
  if ((this->FadeInfo).FadeState != None) {
    FDS_CameraFadeInfo::FadeProcess(&this->FadeInfo,param_1);
  }
  return;
}

// UpdateCameraLocation @ 14b8f3150

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ADS_CameraManager::UpdateCameraLocation(ADS_CameraManager *this)

{
  UDS_CameraComponent *this_00;
  TRotator<double> *pTVar1;
  TRotator<double> local_28;
  
  this_00 = GetCurrentCameraComponent(this);
  if (this_00 != (UDS_CameraComponent *)0x0) {
    CameraLocation.field0_0x0._s_0.Z = (double)this_00->_padding_;
    CameraLocation.field0_0x0._s_0.X = (double)this_00->_padding_;
    CameraLocation.field0_0x0._s_0.Y = (double)this_00->_padding_;
    local_28.Roll = CameraLocation.field0_0x0._s_0.Z;
    pTVar1 = USceneComponent::GetComponentRotation((USceneComponent *)this_00,&local_28);
    CameraRotation.Pitch = pTVar1->Pitch;
    CameraRotation.Yaw = pTVar1->Yaw;
    CameraRotation.Roll = pTVar1->Roll;
  }
  return;
}

// SetBossEntityID @ 14bc5ce20

void __thiscall ADS_CameraManager::SetBossEntityID(ADS_CameraManager *this,ulong64 param_1)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  FDestructionSentinel local_38;
  
  this->BossEntityID = param_1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->ChangeBossDelegate,
             (FWriteAccessScope *)&local_38);
  puVar1 = &(this->ChangeBossDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  bVar5 = false;
  uVar9 = *(int *)&(this->ChangeBossDelegate).field_0x10 - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < *(int *)&(this->ChangeBossDelegate).field_0x10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)&(this->ChangeBossDelegate).field_0x8;
      if (((*(int *)(lVar10 + 8 + lVar2) == 0) ||
          (plVar3 = *(longlong **)(lVar10 + lVar2), plVar3 == (longlong *)0x0)) ||
         (cVar7 = (**(code **)(*plVar3 + 0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  puVar1 = &(this->ChangeBossDelegate).field_0x1c;
  *(int *)puVar1 = *(int *)puVar1 + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->ChangeBossDelegate,false
              );
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  return;
}

