// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 41

// StaticClass @ 14d5e0570

UClass * __cdecl AGameplayCamerasPlayerCameraManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGameplayCamerasPlayerCameraManager.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"GameplayCamerasPlayerCameraManager",
               &Z_Registration_Info_UClass_AGameplayCamerasPlayerCameraManager.InnerSingleton,
               StaticRegisterNativesAGameplayCamerasPlayerCameraManager,0x28a0,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AGameplayCamerasPlayerCameraManager>,
               InternalVTableHelperCtorCaller<AGameplayCamerasPlayerCameraManager>,local_res8,
               APlayerCameraManager::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGameplayCamerasPlayerCameraManager.InnerSingleton;
}

// AGameplayCamerasPlayerCameraManager @ 14d5fb480

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

AGameplayCamerasPlayerCameraManager * __thiscall
AGameplayCamerasPlayerCameraManager::AGameplayCamerasPlayerCameraManager
          (AGameplayCamerasPlayerCameraManager *this,FVTableHelper *param_1)

{
  APlayerCameraManager::APlayerCameraManager((APlayerCameraManager *)this,param_1);
  *(undefined ***)this = &_vftable__for__APlayerCameraManager__;
  *(undefined ***)&this->field_0x2840 = &_vftable__for__IGameplayCameraSystemHost__;
  *(undefined8 *)&this->field_0x2848 = 0;
  *(undefined8 *)&this->field_0x2850 = 0;
  *(undefined8 *)&this->field_0x2858 = 0;
  this->ViewRotationMode = None;
  this->bOverrideViewRotationMode = false;
  (this->OriginalCameraManager).field0_0x0.DebugPtr = (APlayerCameraManager *)0x0;
  (this->ViewTargetContexts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ViewTargetContexts).ArrayNum = 0;
  (this->ViewTargetContexts).ArrayMax = 0;
  (this->NullContext).Object = (FCameraEvaluationContext *)0x0;
  (this->NullContext).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bIsSettingNewViewTarget = false;
  return this;
}

// AGameplayCamerasPlayerCameraManager @ 14d5fb510

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

AGameplayCamerasPlayerCameraManager * __thiscall
AGameplayCamerasPlayerCameraManager::AGameplayCamerasPlayerCameraManager
          (AGameplayCamerasPlayerCameraManager *this,FObjectInitializer *param_1)

{
  APlayerCameraManager::APlayerCameraManager((APlayerCameraManager *)this,param_1);
  *(undefined ***)this = &_vftable__for__APlayerCameraManager__;
  *(undefined ***)&this->field_0x2840 = &_vftable__for__IGameplayCameraSystemHost__;
  *(undefined8 *)&this->field_0x2848 = 0;
  *(undefined8 *)&this->field_0x2850 = 0;
  *(undefined8 *)&this->field_0x2858 = 0;
  this->ViewRotationMode = None;
  this->bOverrideViewRotationMode = false;
  (this->OriginalCameraManager).field0_0x0.DebugPtr = (APlayerCameraManager *)0x0;
  (this->ViewTargetContexts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ViewTargetContexts).ArrayNum = 0;
  (this->ViewTargetContexts).ArrayMax = 0;
  (this->NullContext).Object = (FCameraEvaluationContext *)0x0;
  (this->NullContext).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->bIsSettingNewViewTarget = false;
  return this;
}

// ~AGameplayCamerasPlayerCameraManager @ 14d600190

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
AGameplayCamerasPlayerCameraManager::~AGameplayCamerasPlayerCameraManager
          (AGameplayCamerasPlayerCameraManager *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__APlayerCameraManager__;
  *(undefined ***)&this->field_0x2840 = &_vftable__for__IGameplayCameraSystemHost__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NullContext).SharedReferenceCount.ReferenceController);
  DestructItems<TSharedRef<UE::Cameras::FCameraEvaluationContext,1>,int>
            ((TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *)
             (this->ViewTargetContexts).AllocatorInstance.Data,(this->ViewTargetContexts).ArrayNum);
  pFVar1 = (this->ViewTargetContexts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined ***)&this->field_0x2840 = &___7IGameplayCameraSystemHost__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x2850);
  APlayerCameraManager::~APlayerCameraManager((APlayerCameraManager *)this);
  return;
}

// ActivatePersistentBaseCameraRig @ 14d606e00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
AGameplayCamerasPlayerCameraManager::ActivatePersistentBaseCameraRig
          (AGameplayCamerasPlayerCameraManager *this,UCameraRigAsset *param_1)

{
  TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> local_18;
  
  EnsureNullContext(this);
  local_18.Object = (this->NullContext).Object;
  local_18.SharedReferenceCount.ReferenceController =
       (this->NullContext).SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  IGameplayCameraSystemHost::ActivateCameraRig
            ((IGameplayCameraSystemHost *)&this->field_0x2840,param_1,&local_18,Base);
  return;
}

// ActivatePersistentGlobalCameraRig @ 14d607040

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
AGameplayCamerasPlayerCameraManager::ActivatePersistentGlobalCameraRig
          (AGameplayCamerasPlayerCameraManager *this,UCameraRigAsset *param_1)

{
  TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> local_18;
  
  EnsureNullContext(this);
  local_18.Object = (this->NullContext).Object;
  local_18.SharedReferenceCount.ReferenceController =
       (this->NullContext).SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  IGameplayCameraSystemHost::ActivateCameraRig
            ((IGameplayCameraSystemHost *)&this->field_0x2840,param_1,&local_18,Global);
  return;
}

// ActivatePersistentVisualCameraRig @ 14d607280

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
AGameplayCamerasPlayerCameraManager::ActivatePersistentVisualCameraRig
          (AGameplayCamerasPlayerCameraManager *this,UCameraRigAsset *param_1)

{
  TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> local_18;
  
  EnsureNullContext(this);
  local_18.Object = (this->NullContext).Object;
  local_18.SharedReferenceCount.ReferenceController =
       (this->NullContext).SharedReferenceCount.ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  IGameplayCameraSystemHost::ActivateCameraRig
            ((IGameplayCameraSystemHost *)&this->field_0x2840,param_1,&local_18,Visual);
  return;
}

// AddReferencedObjects @ 14d6077a0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
AGameplayCamerasPlayerCameraManager::AddReferencedObjects
          (UObject *param_1,FReferenceCollector *param_2)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  AActor::AddReferencedObjects(param_1,param_2);
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<AGameplayCamerasPlayerCameraManager>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    if (*(longlong *)&param_1[0x101].field_0x20 != 0) {
      UE::Cameras::FCameraSystemEvaluator::AddReferencedObjects
                (*(FCameraSystemEvaluator **)&param_1[0x101].field_0x20,param_2);
    }
    return;
  }
  pFVar3 = GetTypeName<AGameplayCamerasPlayerCameraManager>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// BeginDestroy @ 14d60cab0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
AGameplayCamerasPlayerCameraManager::BeginDestroy(AGameplayCamerasPlayerCameraManager *this)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  if (*(longlong *)&this->field_0x2858 != 0) {
    UDebugDrawService::Unregister((FDelegateHandle)*(ulong64 *)&this->field_0x2858);
    *(undefined8 *)&this->field_0x2858 = 0;
  }
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((undefined8 *)&this->field_0x2848 != &local_18) {
    *(undefined8 *)&this->field_0x2848 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)&this->field_0x2850,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  AActor::BeginDestroy((AActor *)this);
  return;
}

// CleanUpViewTargetContexts @ 14d60e220

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
AGameplayCamerasPlayerCameraManager::CleanUpViewTargetContexts
          (AGameplayCamerasPlayerCameraManager *this)

{
  int *piVar1;
  FRootCameraNodeEvaluator *this_00;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  TArray<TSharedRef<UE::Cameras::FCameraEvaluationContext,1>,TSizedDefaultAllocator<32>_> *pTVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext_const_,1> local_38;
  
  if ((*(longlong *)&this->field_0x2848 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar8 = &this->ViewTargetContexts;
  uVar7 = 0;
  this_00 = *(FRootCameraNodeEvaluator **)(*(longlong *)&this->field_0x2848 + 0x98);
  while( true ) {
    if (((int)uVar7 < 0) || ((this->ViewTargetContexts).ArrayNum <= (int)uVar7)) {
      return;
    }
    if (((int)uVar7 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) break;
    pFVar9 = (pTVar8->AllocatorInstance).Data;
    lVar10 = (longlong)(int)uVar7 * 0x10;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar9 + lVar10 + 8);
    local_38.Object = *(FCameraEvaluationContext **)(pFVar9 + lVar10);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.SharedReferenceCount.ReferenceController = pTVar2;
    bVar4 = UE::Cameras::FRootCameraNodeEvaluator::HasAnyRunningCameraRig(this_00,&local_38);
    if (!bVar4) {
      uVar5 = 0;
      if ((int)uVar7 < (this->ViewTargetContexts).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar9 = (pTVar8->AllocatorInstance).Data + lVar10;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(pFVar9 + 8));
      iVar6 = (this->ViewTargetContexts).ArrayNum + ~uVar7;
      if (iVar6 != 0) {
        memmove(pFVar9,pFVar9 + 0x10,(longlong)iVar6 << 4);
      }
      piVar1 = &(this->ViewTargetContexts).ArrayNum;
      *piVar1 = *piVar1 + -1;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&pTVar8->AllocatorInstance,(this->ViewTargetContexts).ArrayNum,
                 &(this->ViewTargetContexts).ArrayMax);
      uVar7 = uVar7 - 1;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    uVar7 = uVar7 + 1;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// DisplayDebug @ 14d614210

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
AGameplayCamerasPlayerCameraManager::DisplayDebug
          (AGameplayCamerasPlayerCameraManager *this,UCanvas *param_1,FDebugDisplayInfo *param_2,
          float *param_3,float *param_4)

{
  float fVar1;
  float *pfVar2;
  UFont *pUVar3;
  int iVar4;
  FString local_a8;
  FString local_98;
  TStringView<wchar_t> local_88;
  FFontRenderInfo local_78;
  
  pfVar2 = param_4;
  iVar4 = -((int)ROUND(__real_bf000000 - (*param_4 + *param_4) / *param_3) >> 1);
  pUVar3 = UEngine::GetSmallFont();
  UCanvas::SetDrawColor(param_1,&FColor::Yellow);
  local_78.bEnableShadow = 0;
  local_78.bClipText = 0;
  local_78.GlowInfo.bEnableGlow = 0;
  fVar1 = *param_3;
  local_78.GlowInfo.GlowColor.field0_0x0._0_8_ = 0;
  local_78.GlowInfo.GlowColor.field0_0x0._8_8_ = 0;
  local_78.GlowInfo.GlowOuterRadius.field0_0x0._s_0.X = 0.0;
  local_78.GlowInfo.GlowOuterRadius.field0_0x0._s_0.Y = 0.0;
  local_78.GlowInfo.GlowInnerRadius.field0_0x0._s_0.X = 0.0;
  local_78.GlowInfo.GlowInnerRadius.field0_0x0._s_0.Y = 0.0;
  if (this == (AGameplayCamerasPlayerCameraManager *)0x0) {
    ::FString::FString(&local_a8,L"None");
  }
  else {
    param_4 = *(float **)&this->field_0x18;
    ::FName::ToString((FName *)&param_4,&local_a8);
  }
  ::FString::PrintfImpl(&local_98,L"Please use the Camera Debugger panel to inspect \'%s\'.");
  local_88.Size = local_98.Data.ArrayNum + -1;
  if (local_98.Data.ArrayNum == 0) {
    local_88.Size = 0;
  }
  local_88.DataPtr = (wchar_t *)local_98.Data.AllocatorInstance.Data;
  UCanvas::DrawText(param_1,pUVar3,&local_88,fVar1,(float)iVar4 * fVar1,__real_3f800000,
                    __real_3f800000,&local_78);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  *pfVar2 = (float)(iVar4 + 1) * *param_3;
  param_4 = pfVar2;
  APlayerCameraManager::DisplayDebug((APlayerCameraManager *)this,param_1,param_2,param_3,pfVar2);
  return;
}

// DoUpdateCamera @ 14d6143f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
AGameplayCamerasPlayerCameraManager::DoUpdateCamera
          (AGameplayCamerasPlayerCameraManager *this,float param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  double dVar4;
  float fVar5;
  bool bVar6;
  UWorld *pUVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  undefined1 auStackY_988 [32];
  FCameraSystemEvaluationParams local_958 [4];
  TRotator<double> local_948;
  TVector<double>_u_0 local_928;
  TVector<double>_u_0 local_908;
  double dStack_8f0;
  double local_8e8;
  double dStack_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined4 local_8c8;
  undefined1 local_8c4;
  undefined4 local_8c0;
  undefined2 local_8bc;
  undefined8 local_8b8;
  undefined8 uStack_8b0;
  undefined1 local_8a4;
  uint local_8a0;
  undefined1 local_89c;
  undefined4 local_898;
  FPostProcessSettings local_888;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_a8;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  ulonglong local_38;
  
  fVar5 = __real_3f800000;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_988;
  if ((this->field_0x2810 & 0x40) != 0) {
    pUVar7 = AActor::GetWorld((AActor *)this);
    dVar9 = (pUVar7->TimeSeconds - (double)*(float *)&this->field_0x34c) /
            (double)*(float *)&this->field_0x348;
    if (__real_3ff0000000000000 <= dVar9) {
      dVar9 = __real_3ff0000000000000;
    }
    if (dVar9 <= 0.0) {
      dVar9 = 0.0;
    }
    dVar8 = (double)(float)dVar9;
    *(double *)&this->field_0x300 =
         (*(double *)&this->field_0x318 - *(double *)&this->field_0x330) * dVar8 +
         *(double *)&this->field_0x330;
    dVar4 = (*(double *)&this->field_0x328 - *(double *)&this->field_0x340) * dVar8 +
            *(double *)&this->field_0x340;
    auVar3._8_4_ = SUB84(dVar4,0);
    auVar3._0_8_ = (*(double *)&this->field_0x320 - *(double *)&this->field_0x338) * dVar8 +
                   *(double *)&this->field_0x338;
    auVar3._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    *(undefined1 (*) [16])&this->field_0x308 = auVar3;
    if ((float)dVar9 == fVar5) {
      *(uint *)&this->field_0x2810 = *(uint *)&this->field_0x2810 & 0xffffffbf;
    }
  }
  uVar1 = *(uint *)&this->field_0x2810;
  if ((uVar1 & 8) != 0) {
    if ((uVar1 >> 0xd & 1) != 0) {
      fVar10 = *(float *)&this->field_0x27b4 - param_1;
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      *(float *)&this->field_0x27b4 = fVar10;
      if (0.0 < *(float *)&this->field_0x27b0) {
        *(float *)&this->field_0x2fc =
             (float)((double)(fVar5 - fVar10 / *(float *)&this->field_0x27b0) *
                     (*(double *)&this->field_0x27a8 - *(double *)&this->field_0x27a0) +
                    *(double *)&this->field_0x27a0);
      }
      if (((uVar1 >> 0xc & 1) == 0) && (fVar10 <= 0.0)) {
        (**(code **)(*(longlong *)this + 0x910))(this);
      }
    }
    if ((this->field_0x2810 & 0x10) != 0) {
      (**(code **)(*(longlong *)this + 0x878))(this);
    }
  }
  if (*(FCameraSystemEvaluator **)&this->field_0x2848 != (FCameraSystemEvaluator *)0x0) {
    local_958[0].DeltaTime = param_1;
    UE::Cameras::FCameraSystemEvaluator::Update
              (*(FCameraSystemEvaluator **)&this->field_0x2848,local_958);
    local_8c8 = 0x44000000;
    local_908._s_0.X = 0.0;
    local_908._s_0.Y = 0.0;
    local_908._s_0.Z = 0.0;
    dStack_8f0 = 0.0;
    local_8a0 = local_8a0 & 0xfffffffc | 4;
    local_8e8 = 0.0;
    dStack_8e0 = 0.0;
    local_8d8 = ___xmm_3f80000042b4000042b4000042b40000;
    uStack_8d0 = _UNK_150fabfd8;
    local_8c4 = 1;
    local_8c0 = 0;
    local_8bc = 0;
    local_8b8 = ___xmm_3faaaaabbf8000004a00000000000000;
    uStack_8b0 = _UNK_150fabfe8;
    local_8a4 = 0;
    local_89c = 0;
    local_898 = 0;
    FPostProcessSettings::FPostProcessSettings(&local_888);
    local_a8 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_88 = ___xmm_3f8000003f8000003f8000003f800000;
    uStack_80 = _UNK_15076b1f8;
    local_68 = 0;
    uStack_60 = 0;
    local_48 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_98 = 0x3f800000;
    local_94 = 0x3f800000;
    local_78 = 0;
    local_58 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    dStack_50 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    if (*(longlong *)&this->field_0x2848 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UE::Cameras::FCameraSystemEvaluator::GetEvaluatedCameraView
              (*(FCameraSystemEvaluator **)&this->field_0x2848,(FMinimalViewInfo *)&local_908._s_0);
    (**(code **)(*(longlong *)this + 0x7f0))(this);
    APlayerCameraManager::FillCameraCache
              ((APlayerCameraManager *)this,(FMinimalViewInfo *)&local_908._s_0);
    CleanUpViewTargetContexts(this);
    local_948.Pitch = dStack_8f0;
    local_948.Yaw = local_8e8;
    local_948.Roll = dStack_8e0;
    local_928._s_0.X = local_908._s_0.X;
    local_928._s_0.Y = local_908._s_0.Y;
    local_928._s_0.Z = local_908._s_0.Z;
    AActor::SetActorLocationAndRotation
              ((AActor *)this,(TVector<double> *)&local_928._s_0,&local_948,false,(FHitResult *)0x0,
               None);
    if (local_888.WeightedBlendables.Array.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(local_888.WeightedBlendables.Array.AllocatorInstance.Data);
    }
  }
  return;
}

// EnsureNullContext @ 14d615890

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
AGameplayCamerasPlayerCameraManager::EnsureNullContext(AGameplayCamerasPlayerCameraManager *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TReferenceControllerBase<1> *pTVar6;
  FCameraEvaluationContext *pFVar7;
  FCameraEvaluationContext *local_38;
  FSharedReferencer<1> local_30;
  TObjectPtr<UObject>_u_0 local_28;
  undefined8 local_20;
  UObject *local_18;
  
  if ((this->NullContext).Object != (FCameraEvaluationContext *)0x0) {
    return;
  }
  local_20 = 0;
  if (UE::GC::GIsIncrementalReachabilityPending) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_28 = (TObjectPtr<UObject>_u_0)this;
  local_18 = (UObject *)(**(code **)(*(longlong *)this + 0x7a8))(this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_18);
  }
  pTVar6 = ::operator_new(0xb00);
  if (pTVar6 == (TReferenceControllerBase<1> *)0x0) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
    pFVar7 = (FCameraEvaluationContext *)&DAT_00000010;
  }
  else {
    pTVar6->SharedReferenceCount = (atomic<int>)0x1;
    pTVar6->WeakReferenceCount = (atomic<int>)0x1;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFCameraEvaluationContext_Cameras_UE___00_SharedPointerInternals__6B_
    ;
    UE::Cameras::FCameraEvaluationContext::FCameraEvaluationContext
              ((FCameraEvaluationContext *)(pTVar6 + 1),
               (FCameraEvaluationContextInitializeParams *)&local_28.ObjectPtr);
    pFVar7 = (FCameraEvaluationContext *)(pTVar6 + 1);
    if (pFVar7 == (FCameraEvaluationContext *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_14d6159db;
    }
  }
  if (((*(longlong *)&pFVar7->field_0x10 == 0) || (*(longlong *)&pFVar7->field_0x18 == 0)) ||
     (*(int *)(*(longlong *)&pFVar7->field_0x18 + 8) < 1)) {
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(FCameraEvaluationContext **)&pFVar7->field_0x10 = pFVar7;
    if (pTVar6 != *(TReferenceControllerBase<1> **)&pFVar7->field_0x18) {
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->WeakReferenceCount = (atomic<int>)((int)pTVar6->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = *(longlong **)&pFVar7->field_0x18;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pFVar7->field_0x18 = pTVar6;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
LAB_14d6159db:
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38 = pFVar7;
  local_30.ReferenceController = pTVar6;
  if (&this->NullContext != (TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *)&local_38) {
    (this->NullContext).Object = pFVar7;
    local_38 = (FCameraEvaluationContext *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->NullContext).SharedReferenceCount,&local_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// GetAsObject @ 14d618740

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UObject * __thiscall
AGameplayCamerasPlayerCameraManager::GetAsObject(AGameplayCamerasPlayerCameraManager *this)

{
  return (UObject *)&this[-1].field_0x60;
}

// GetPrivateStaticClass @ 14d61b820

UClass * __cdecl AGameplayCamerasPlayerCameraManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AGameplayCamerasPlayerCameraManager.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"GameplayCamerasPlayerCameraManager",
               &Z_Registration_Info_UClass_AGameplayCamerasPlayerCameraManager.InnerSingleton,
               StaticRegisterNativesAGameplayCamerasPlayerCameraManager,0x28a0,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<AGameplayCamerasPlayerCameraManager>,
               InternalVTableHelperCtorCaller<AGameplayCamerasPlayerCameraManager>,local_res8,
               APlayerCameraManager::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AGameplayCamerasPlayerCameraManager.InnerSingleton;
}

// InitializeFor @ 14d620780

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
AGameplayCamerasPlayerCameraManager::InitializeFor
          (AGameplayCamerasPlayerCameraManager *this,APlayerController *param_1)

{
  code *pcVar1;
  bool bVar2;
  UClass *this_00;
  
  if (this->bOverrideViewRotationMode == false) {
    this_00 = UGameplayCamerasSettings::StaticClass();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    this->ViewRotationMode =
         *(EGameplayCamerasViewRotationMode *)
          &(this_00->ClassDefaultObject).field0_0x0.DebugPtr[1].field_0x14;
  }
  IGameplayCameraSystemHost::EnsureCameraSystemInitialized
            ((IGameplayCameraSystemHost *)&this->field_0x2840);
  if (*(longlong *)&this->field_0x2848 == 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1213615714691186898>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\GameFramework\\GameplayCamerasPlayerCameraManager.cpp"
                       ,0xd2,"CameraSystemEvaluator");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
    AddUObject<AGameplayCamerasPlayerCameraManager>
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               (*(longlong *)&this->field_0x2848 + 0x38),
               (AGameplayCamerasPlayerCameraManager *)&stack0x00000008,(pmf_02a18c8c *)this);
  }
  APlayerCameraManager::InitializeFor((APlayerCameraManager *)this,param_1);
  return;
}

// IsCameraShakeAssetPlaying @ 14d620e00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
AGameplayCamerasPlayerCameraManager::IsCameraShakeAssetPlaying
          (AGameplayCamerasPlayerCameraManager *this,FCameraShakeInstanceID param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FSharedReferencer<1> FVar4;
  TSharedPtr<UE::Cameras::FCameraEvaluationService,1> local_18;
  
  if (*(FCameraSystemEvaluator **)&this->field_0x2848 == (FCameraSystemEvaluator *)0x0) {
    return false;
  }
  UE::Cameras::FCameraSystemEvaluator::FindEvaluationService
            (*(FCameraSystemEvaluator **)&this->field_0x2848,&local_18,
             (FCameraObjectTypeID *)&UE::Cameras::FCameraShakeService::PrivateTypeID);
  if ((FCameraShakeService *)local_18.Object == (FCameraShakeService *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    FVar4.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    FVar4.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
    if ((FCameraShakeService *)local_18.Object != (FCameraShakeService *)0x0) goto LAB_14d620e8d;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
LAB_14d620e8d:
  bVar2 = UE::Cameras::FCameraShakeService::IsCameraShakePlaying
                    ((FCameraShakeService *)local_18.Object,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  return bVar2;
}

// OnContextStackChanged @ 14d6262e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
AGameplayCamerasPlayerCameraManager::OnContextStackChanged
          (AGameplayCamerasPlayerCameraManager *this)

{
  code *pcVar1;
  bool bVar2;
  UObject *this_00;
  UClass *pUVar3;
  AActor *pAVar4;
  uint uStack_24;
  undefined4 uStack_1c;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> local_18;
  
  if (*(longlong *)&this->field_0x2848 == 0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1213615714691187111>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\GameFramework\\GameplayCamerasPlayerCameraManager.cpp"
                       ,0x1a7,"CameraSystemEvaluator");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (this->bIsSettingNewViewTarget == false) {
    this->bIsSettingNewViewTarget = true;
    pAVar4 = (AActor *)0x0;
    UE::Cameras::FCameraEvaluationContextStack::GetActiveContext
              ((FCameraEvaluationContextStack *)(*(longlong *)&this->field_0x2848 + 0x20),&local_18)
    ;
    if (local_18.Object != (FCameraEvaluationContext *)0x0) {
      if ((local_18.Object == (FCameraEvaluationContext *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      this_00 = FWeakObjectPtr::Get(&((local_18.Object)->WeakOwner).WeakPtr);
      if (this_00 != (UObject *)0x0) {
        pUVar3 = Z_Construct_UClass_AActor_NoRegister();
        pAVar4 = (AActor *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar3);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    FTViewTarget::SetNewTarget((FTViewTarget *)&this->field_0x350,pAVar4);
    FTViewTarget::CheckViewTarget
              ((FTViewTarget *)&this->field_0x350,*(APlayerController **)&this->field_0x2c0);
    uStack_24 = CONCAT31(uStack_24._1_3_,1);
    *(ulonglong *)&this->field_0x1534 = (ulonglong)uStack_24 << 0x20;
    *(ulonglong *)&this->field_0x153c = CONCAT44(uStack_1c,0x40000000) & 0xfffffffeffffffff;
    this->bIsSettingNewViewTarget = false;
  }
  return;
}

// ProcessViewRotation @ 14d62e660

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
AGameplayCamerasPlayerCameraManager::ProcessViewRotation
          (AGameplayCamerasPlayerCameraManager *this,float param_1,TRotator<double> *param_2,
          TRotator<double> *param_3)

{
  FCameraSystemEvaluationParams local_res8 [2];
  FCameraSystemViewRotationEvaluationResult local_48;
  
  if ((this->ViewRotationMode == PreviewUpdate) &&
     (*(FCameraSystemEvaluator **)&this->field_0x2848 != (FCameraSystemEvaluator *)0x0)) {
    local_48.ViewRotation.Pitch = param_2->Pitch;
    local_48.ViewRotation.Yaw = param_2->Yaw;
    local_48.ViewRotation.Roll = param_2->Roll;
    local_48.DeltaRotation.Pitch = param_3->Pitch;
    local_48.DeltaRotation.Yaw = param_3->Yaw;
    local_48.DeltaRotation.Roll = param_3->Roll;
    local_res8[0].DeltaTime = param_1;
    UE::Cameras::FCameraSystemEvaluator::ViewRotationPreviewUpdate
              (*(FCameraSystemEvaluator **)&this->field_0x2848,local_res8,&local_48);
    param_2->Pitch = local_48.ViewRotation.Pitch;
    param_2->Yaw = local_48.ViewRotation.Yaw;
    param_2->Roll = local_48.ViewRotation.Roll;
    param_3->Pitch = local_48.DeltaRotation.Pitch;
    param_3->Yaw = local_48.DeltaRotation.Yaw;
    param_3->Roll = local_48.DeltaRotation.Roll;
  }
  APlayerCameraManager::ProcessViewRotation((APlayerCameraManager *)this,param_1,param_2,param_3);
  return;
}

// ReleasePlayerController @ 14d630f90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
AGameplayCamerasPlayerCameraManager::ReleasePlayerController
          (AGameplayCamerasPlayerCameraManager *this)

{
  longlong lVar1;
  APlayerCameraManager *pAVar2;
  code *pcVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)&this->field_0x2c0;
  if (lVar1 != 0) {
    if (*(AGameplayCamerasPlayerCameraManager **)(lVar1 + 0x390) ==
        (AGameplayCamerasPlayerCameraManager *)0x0) {
      bVar4 = this == (AGameplayCamerasPlayerCameraManager *)0x0;
    }
    else {
      bVar4 = *(AGameplayCamerasPlayerCameraManager **)(lVar1 + 0x390) == this;
    }
    if (bVar4) {
      if ((UE::GC::GIsIncrementalReachabilityPending) &&
         (pAVar2 = (this->OriginalCameraManager).field0_0x0.DebugPtr,
         pAVar2 != (APlayerCameraManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pAVar2);
      }
      *(TObjectPtr<APlayerCameraManager>_u_0 *)(lVar1 + 0x390) =
           (this->OriginalCameraManager).field0_0x0;
      *(undefined8 *)&this->field_0x350 = 0;
      (this->OriginalCameraManager).field0_0x0.DebugPtr = (APlayerCameraManager *)0x0;
      IGameplayCameraSystemHost::DestroyCameraSystem
                ((IGameplayCameraSystemHost *)&this->field_0x2840);
      *(undefined8 *)&this->field_0x2c0 = 0;
      return;
    }
  }
  bVar4 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1213615714691186756>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\GameFramework\\GameplayCamerasPlayerCameraManager.cpp"
                     ,0x44,"PCOwner && PCOwner->PlayerCameraManager == this");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}

// RunViewRotationPreviewUpdate @ 14d6348c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
AGameplayCamerasPlayerCameraManager::RunViewRotationPreviewUpdate
          (AGameplayCamerasPlayerCameraManager *this,float param_1,TRotator<double> *param_2,
          TRotator<double> *param_3)

{
  FCameraSystemEvaluationParams local_res8 [2];
  FCameraSystemViewRotationEvaluationResult local_38;
  
  if (*(FCameraSystemEvaluator **)&this->field_0x2848 != (FCameraSystemEvaluator *)0x0) {
    local_38.ViewRotation.Pitch = param_2->Pitch;
    local_38.ViewRotation.Yaw = param_2->Yaw;
    local_38.ViewRotation.Roll = param_2->Roll;
    local_38.DeltaRotation.Pitch = param_3->Pitch;
    local_38.DeltaRotation.Yaw = param_3->Yaw;
    local_38.DeltaRotation.Roll = param_3->Roll;
    local_res8[0].DeltaTime = param_1;
    UE::Cameras::FCameraSystemEvaluator::ViewRotationPreviewUpdate
              (*(FCameraSystemEvaluator **)&this->field_0x2848,local_res8,&local_38);
    param_2->Pitch = local_38.ViewRotation.Pitch;
    param_2->Yaw = local_38.ViewRotation.Yaw;
    param_2->Roll = local_38.ViewRotation.Roll;
    param_3->Pitch = local_38.DeltaRotation.Pitch;
    param_3->Yaw = local_38.DeltaRotation.Yaw;
    param_3->Roll = local_38.DeltaRotation.Roll;
  }
  return;
}

// SetViewTarget @ 14d635f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
AGameplayCamerasPlayerCameraManager::SetViewTarget
          (AGameplayCamerasPlayerCameraManager *this,AActor *param_1,
          FViewTargetTransitionParams *param_2)

{
  int *piVar1;
  TArray<TSharedRef<UE::Cameras::FCameraEvaluationContext,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  FCameraSystemEvaluator *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  TEnumAsByte<EViewTargetBlendFunction> TVar7;
  undefined3 uVar8;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *pTVar9;
  FViewTargetTransitionParams *pFVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  AActor *pAVar14;
  UClass *pUVar15;
  ulonglong uVar16;
  UObject *this_00;
  UGameplayCameraComponentBase *this_01;
  UCameraComponent *pUVar17;
  TReferenceControllerBase<1> *pTVar18;
  UPackage *pUVar19;
  UBlendCameraNode *pUVar20;
  UCameraRigTransition *pUVar21;
  ulonglong uVar22;
  longlong *plVar23;
  TReferenceControllerBase<1> *pTVar24;
  FCameraEvaluationContextStack *pFVar25;
  FCameraEvaluationContext *pFVar26;
  ForAnyElementType FVar27;
  undefined1 auStackY_298 [32];
  undefined1 local_246 [14];
  FCameraEvaluationContext *local_238;
  TReferenceControllerBase<1> *local_230;
  FCameraEvaluationContext *local_228;
  TReferenceControllerBase<1> *local_220;
  TArray<TSharedPtr<UE::Cameras::FCameraEvaluationContext,1>,TSizedDefaultAllocator<32>_> local_218;
  uint local_208;
  undefined4 local_1f8;
  uint uStack_1f4;
  undefined4 uStack_1f0;
  uint uStack_1ec;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> local_1e8;
  FCameraEvaluationContextStack *local_1d8;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *local_1d0;
  UClass *local_1c8;
  UClass *local_1c0;
  FViewTargetTransitionParams *local_1b8;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> local_1b0;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> local_1a0;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> local_190;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> local_180;
  FViewTargetTransitionParams local_168;
  undefined1 local_158 [128];
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_298;
  local_1b8 = param_2;
  if ((this->bIsSettingNewViewTarget != false) &&
     (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1213615714691186915>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\GameFramework\\GameplayCamerasPlayerCameraManager.cpp"
                          ,0xe3,"bIsSettingNewViewTarget == false"), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  bVar11 = this->bIsSettingNewViewTarget;
  this->bIsSettingNewViewTarget = true;
  if ((*(longlong *)&this->field_0x2848 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar25 = (FCameraEvaluationContextStack *)(*(longlong *)&this->field_0x2848 + 0x20);
  local_1d8 = pFVar25;
  if (param_1 == (AActor *)0x0) {
    UE::Cameras::FCameraEvaluationContextStack::PopContext(pFVar25);
    UE::Cameras::FCameraEvaluationContextStack::GetActiveContext(pFVar25,&local_180);
    if ((local_180.Object != (FCameraEvaluationContext *)0x0) &&
       (pAVar14 = (AActor *)FWeakObjectPtr::Get(&((local_180.Object)->WeakOwner).WeakPtr),
       pAVar14 != (AActor *)0x0)) {
      pUVar15 = Z_Construct_UClass_AActor_NoRegister();
      iVar13 = (int)pUVar15->_padding_;
      if ((*(int *)(pAVar14->_padding_ + 0x38) < iVar13) ||
         (param_1 = pAVar14,
         (longlong *)
         *(undefined1 **)(*(longlong *)(pAVar14->_padding_ + 0x30) + (longlong)iVar13 * 8) !=
         &pUVar15->_padding_)) {
        pUVar15 = Z_Construct_UClass_AActor_NoRegister();
        param_1 = (AActor *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)pAVar14,pUVar15)
        ;
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_180.SharedReferenceCount.ReferenceController);
  }
  local_1f8 = 0;
  uStack_1f4 = CONCAT31(uStack_1f4._1_3_,1);
  uStack_1f0 = 0x40000000;
  local_168._0_8_ = (ulonglong)uStack_1f4 << 0x20;
  local_168._8_8_ = CONCAT44(uStack_1ec,0x40000000) & 0xfffffffeffffffff;
  uStack_1ec = uStack_1ec & 0xfffffffe;
  APlayerCameraManager::SetViewTarget((APlayerCameraManager *)this,param_1,&local_168);
  if (param_1 == (AActor *)0x0) {
    this->bIsSettingNewViewTarget = bVar11;
    return;
  }
  local_218.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  bVar12 = false;
  local_218.ArrayNum = 0;
  local_218.ArrayMax = 0;
  UE::Cameras::FCameraEvaluationContextStack::GetAllContexts(pFVar25,&local_218);
  pFVar25 = local_1d8;
  uVar16 = (ulonglong)local_218.ArrayNum;
  local_1d0 = (TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *)
              (local_218.AllocatorInstance.Data + uVar16 * 0x10);
  local_208 = local_218.ArrayNum;
  uVar22 = uVar16;
  FVar27.Data = local_218.AllocatorInstance.Data;
  while( true ) {
    pTVar9 = local_1d0;
    if ((int)uVar16 != (int)uVar22) {
      local_246[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<UE::Cameras::FCameraEvaluationContext,1>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_246);
    }
    if ((TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *)FVar27.Data == pTVar9) break;
    pTVar24 = (((TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *)FVar27.Data)->
              SharedReferenceCount).ReferenceController;
    pFVar26 = ((TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *)FVar27.Data)->Object;
    if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar26 != (FCameraEvaluationContext *)0x0) &&
       (this_00 = FWeakObjectPtr::Get(&(pFVar26->WeakOwner).WeakPtr), this_00 != (UObject *)0x0)) {
      pAVar14 = (AActor *)FWeakObjectPtr::Get(&(pFVar26->WeakOwner).WeakPtr);
      if (pAVar14 != param_1) {
        pUVar15 = Z_Construct_UClass_AActor_NoRegister();
        pAVar14 = (AActor *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this_00,pUVar15)
        ;
        if (pAVar14 != param_1) goto LAB_14d636224;
      }
      if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_1b0.Object = pFVar26;
      local_1b0.SharedReferenceCount.ReferenceController = pTVar24;
      if ((pFVar26 == (FCameraEvaluationContext *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      UE::Cameras::FCameraEvaluationContextStack::PushContext(pFVar25,&local_1b0);
      bVar12 = true;
    }
LAB_14d636224:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
    uVar16 = local_218._8_8_ & 0xffffffff;
    FVar27.Data = FVar27.Data + 0x10;
    uVar22 = (ulonglong)local_208;
  }
  pTVar24 = (TReferenceControllerBase<1> *)0x0;
  if (bVar12) goto LAB_14d6366f5;
  pcVar5 = *(code **)(param_1->_padding_ + 0x738);
  local_1c8 = UGameplayCameraComponentBase::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1c8 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1c8);
  }
  this_01 = (UGameplayCameraComponentBase *)(*pcVar5)(param_1,&local_1c8);
  if (this_01 != (UGameplayCameraComponentBase *)0x0) {
    UGameplayCameraComponentBase::ActivateCameraForPlayerController
              (this_01,*(APlayerController **)&this->field_0x2c0,true,Push);
    goto LAB_14d6366f5;
  }
  pcVar5 = *(code **)(param_1->_padding_ + 0x738);
  local_1c0 = Z_Construct_UClass_UCameraComponent_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1c0 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1c0);
  }
  pUVar17 = (UCameraComponent *)(*pcVar5)(param_1,&local_1c0);
  if (pUVar17 == (UCameraComponent *)0x0) {
    pTVar18 = ::operator_new(0xb00);
    if (pTVar18 == (TReferenceControllerBase<1> *)0x0) {
      pFVar26 = (FCameraEvaluationContext *)&DAT_00000010;
LAB_14d636555:
      if (((*(longlong *)&pFVar26->field_0x10 == 0) || (*(longlong *)&pFVar26->field_0x18 == 0)) ||
         (*(int *)(*(longlong *)&pFVar26->field_0x18 + 8) < 1)) {
        if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
          UNLOCK();
        }
        *(FCameraEvaluationContext **)&pFVar26->field_0x10 = pFVar26;
        if (pTVar24 != *(TReferenceControllerBase<1> **)&pFVar26->field_0x18) {
          if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar24->WeakReferenceCount = (atomic<int>)((int)pTVar24->WeakReferenceCount + 1);
            UNLOCK();
          }
          plVar23 = *(longlong **)&pFVar26->field_0x18;
          if (plVar23 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar23 + 0xc);
            iVar13 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar13 == 1) {
              (**(code **)(*plVar23 + 8))(plVar23,1);
            }
          }
          *(TReferenceControllerBase<1> **)&pFVar26->field_0x18 = pTVar24;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24)
        ;
      }
    }
    else {
      pTVar18->SharedReferenceCount = (atomic<int>)0x1;
      pTVar18->WeakReferenceCount = (atomic<int>)0x1;
      pTVar18->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFActorCameraEvaluationContext_Cameras_UE___00_SharedPointerInternals__6B_
      ;
      UE::Cameras::FActorCameraEvaluationContext::FActorCameraEvaluationContext
                ((FActorCameraEvaluationContext *)(pTVar18 + 1),param_1);
      pFVar26 = (FCameraEvaluationContext *)(pTVar18 + 1);
      pTVar24 = pTVar18;
      if (pFVar26 != (FCameraEvaluationContext *)0x0) goto LAB_14d636555;
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InObject != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x246,L"");
      if (bVar12) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if ((*(longlong *)&this->field_0x2848 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3 = *(FCameraSystemEvaluator **)&this->field_0x2848;
    local_190.Object = pFVar26;
    local_190.SharedReferenceCount.ReferenceController = pTVar24;
    if (pTVar24 == (TReferenceControllerBase<1> *)0x0) {
      UE::Cameras::FCameraSystemEvaluator::PushEvaluationContext(pFVar3,&local_190);
    }
    else {
      LOCK();
      pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
      UNLOCK();
      UE::Cameras::FCameraSystemEvaluator::PushEvaluationContext(pFVar3,&local_190);
      LOCK();
      pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar2 = &this->ViewTargetContexts;
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    local_228 = pFVar26;
    local_220 = pTVar24;
    if (((pFVar4 <= (FScriptContainerElement *)&local_228) &&
        ((FScriptContainerElement *)&local_228 <
         pFVar4 + (longlong)(this->ViewTargetContexts).ArrayMax * 0x10)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar13 = (this->ViewTargetContexts).ArrayNum;
    piVar1 = &(this->ViewTargetContexts).ArrayMax;
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar2->AllocatorInstance,piVar1);
    }
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    (this->ViewTargetContexts).ArrayNum = iVar13 + 1;
    *(FCameraEvaluationContext **)(pFVar4 + (longlong)iVar13 * 0x10) = local_228;
    *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)iVar13 * 0x10 + 8) = local_220;
    pTVar18 = local_220;
    if (local_220 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_220->SharedReferenceCount = (atomic<int>)((int)local_220->SharedReferenceCount + 1);
      UNLOCK();
    }
    goto LAB_14d6366e8;
  }
  pTVar18 = ::operator_new(0xb00);
  if (pTVar18 == (TReferenceControllerBase<1> *)0x0) {
    pFVar26 = (FCameraEvaluationContext *)&DAT_00000010;
LAB_14d636353:
    if (((*(longlong *)&pFVar26->field_0x10 == 0) || (*(longlong *)&pFVar26->field_0x18 == 0)) ||
       (*(int *)(*(longlong *)&pFVar26->field_0x18 + 8) < 1)) {
      if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
        UNLOCK();
      }
      *(FCameraEvaluationContext **)&pFVar26->field_0x10 = pFVar26;
      if (pTVar24 != *(TReferenceControllerBase<1> **)&pFVar26->field_0x18) {
        if (pTVar24 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar24->WeakReferenceCount = (atomic<int>)((int)pTVar24->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar23 = *(longlong **)&pFVar26->field_0x18;
        if (plVar23 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar23 + 0xc);
          iVar13 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar13 == 1) {
            (**(code **)(*plVar23 + 8))(plVar23,1);
          }
        }
        *(TReferenceControllerBase<1> **)&pFVar26->field_0x18 = pTVar24;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
    }
  }
  else {
    pTVar18->SharedReferenceCount = (atomic<int>)0x1;
    pTVar18->WeakReferenceCount = (atomic<int>)0x1;
    pTVar18->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFActorCameraEvaluationContext_Cameras_UE___00_SharedPointerInternals__6B_
    ;
    UE::Cameras::FActorCameraEvaluationContext::FActorCameraEvaluationContext
              ((FActorCameraEvaluationContext *)(pTVar18 + 1),pUVar17);
    pFVar26 = (FCameraEvaluationContext *)(pTVar18 + 1);
    pTVar24 = pTVar18;
    if (pFVar26 != (FCameraEvaluationContext *)0x0) goto LAB_14d636353;
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("InObject != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x246,L"");
    if (bVar12) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((*(longlong *)&this->field_0x2848 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = *(FCameraSystemEvaluator **)&this->field_0x2848;
  local_1a0.Object = pFVar26;
  local_1a0.SharedReferenceCount.ReferenceController = pTVar24;
  if (pTVar24 == (TReferenceControllerBase<1> *)0x0) {
    UE::Cameras::FCameraSystemEvaluator::PushEvaluationContext(pFVar3,&local_1a0);
  }
  else {
    LOCK();
    pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
    UNLOCK();
    UE::Cameras::FCameraSystemEvaluator::PushEvaluationContext(pFVar3,&local_1a0);
    LOCK();
    pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar2 = &this->ViewTargetContexts;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  local_238 = pFVar26;
  local_230 = pTVar24;
  if (((pFVar4 <= (FScriptContainerElement *)&local_238) &&
      ((FScriptContainerElement *)&local_238 <
       pFVar4 + (longlong)(this->ViewTargetContexts).ArrayMax * 0x10)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar13 = (this->ViewTargetContexts).ArrayNum;
  piVar1 = &(this->ViewTargetContexts).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->ViewTargetContexts).ArrayNum = iVar13 + 1;
  pFVar4 = (pTVar2->AllocatorInstance).Data;
  *(FCameraEvaluationContext **)(pFVar4 + (longlong)iVar13 * 0x10) = local_238;
  *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)iVar13 * 0x10 + 8) = local_230;
  pTVar18 = local_230;
  if (local_230 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_230->SharedReferenceCount = (atomic<int>)((int)local_230->SharedReferenceCount + 1);
    UNLOCK();
  }
LAB_14d6366e8:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
LAB_14d6366f5:
  if ((*(longlong *)&this->field_0x2848 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  UE::Cameras::FCameraEvaluationContextStack::GetActiveContext
            ((FCameraEvaluationContextStack *)(*(longlong *)&this->field_0x2848 + 0x20),&local_1e8);
  pFVar10 = local_1b8;
  if ((local_1e8.Object != (FCameraEvaluationContext *)0x0) && (0.0 < local_1b8->BlendTime)) {
    pUVar19 = GetTransientPackage();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar19,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar15 = UViewTargetTransitionParamsBlendCameraNode::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_158,pUVar15);
    local_158._8_8_ = pUVar19;
    pUVar20 = (UBlendCameraNode *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_158);
    if (local_158._64_8_ != 0) {
      plVar23 = (longlong *)(local_158 + 0x50);
      if ((longlong *)local_158._104_8_ != (longlong *)0x0) {
        plVar23 = (longlong *)local_158._104_8_;
      }
      (**(code **)(*plVar23 + 0x10))();
    }
    TVar7.Value = (pFVar10->BlendFunction).Value;
    uVar8 = *(undefined3 *)&pFVar10->field_0x5;
    uVar6 = *(undefined8 *)&pFVar10->BlendExp;
    *(float *)&pUVar20[1].field_0x0 = pFVar10->BlendTime;
    pUVar20[1].field_0x4 = TVar7.Value;
    *(undefined3 *)&pUVar20[1].field_0x5 = uVar8;
    *(undefined8 *)&pUVar20[1].field_0x8 = uVar6;
    pUVar19 = GetTransientPackage();
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar19,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar15 = Z_Construct_UClass_UCameraRigTransition_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_d8,pUVar15);
    local_d8._8_8_ = pUVar19;
    pUVar21 = (UCameraRigTransition *)
              StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
    if (local_d8._64_8_ != 0) {
      plVar23 = (longlong *)(local_d8 + 0x50);
      if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
        plVar23 = (longlong *)local_d8._104_8_;
      }
      (**(code **)(*plVar23 + 0x10))();
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar20);
    }
    (pUVar21->Blend).field0_0x0.DebugPtr = pUVar20;
    if ((local_1e8.Object == (FCameraEvaluationContext *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    UE::Cameras::FCameraDirectorEvaluator::OverrideNextActivationTransition
              ((local_1e8.Object)->DirectorEvaluator,pUVar21);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e8.SharedReferenceCount.ReferenceController);
  DestructItems<TSharedPtr<UE::Cameras::FCameraEvaluationContext,1>,int>
            ((TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *)local_218.AllocatorInstance.Data
             ,local_218.ArrayNum);
  if ((TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *)local_218.AllocatorInstance.Data !=
      (TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *)0x0) {
    FMemory::Free(local_218.AllocatorInstance.Data);
  }
  this->bIsSettingNewViewTarget = bVar11;
  return;
}

// StartCameraShakeAsset @ 14d6368f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraShakeInstanceID __thiscall
AGameplayCamerasPlayerCameraManager::StartCameraShakeAsset
          (AGameplayCamerasPlayerCameraManager *this,UCameraShakeAsset *param_1,float param_2,
          ECameraShakePlaySpace param_3,TRotator<double> *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSharedReferencer<1> FVar4;
  undefined8 *in_stack_00000030;
  TSharedPtr<UE::Cameras::FCameraEvaluationService,1> local_48;
  undefined1 local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (*(FCameraSystemEvaluator **)&this->field_0x2848 == (FCameraSystemEvaluator *)0x0) {
    *(undefined4 *)&param_1->_padding_ = 0xffffffff;
    return (FCameraShakeInstanceID)(uint)param_1;
  }
  local_2c = param_4._0_1_;
  local_28 = *in_stack_00000030;
  uStack_20 = in_stack_00000030[1];
  local_18 = in_stack_00000030[2];
  UE::Cameras::FCameraSystemEvaluator::FindEvaluationService
            (*(FCameraSystemEvaluator **)&this->field_0x2848,&local_48,
             (FCameraObjectTypeID *)&UE::Cameras::FCameraShakeService::PrivateTypeID);
  if ((FCameraShakeService *)local_48.Object == (FCameraShakeService *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    FVar4.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    FVar4.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
    if ((FCameraShakeService *)local_48.Object != (FCameraShakeService *)0x0) goto LAB_14d6369b0;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (FCameraShakeInstanceID)uVar3;
  }
LAB_14d6369b0:
  UE::Cameras::FCameraShakeService::StartCameraShake
            ((FCameraShakeService *)local_48.Object,(FStartCameraShakeParams *)param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  return (FCameraShakeInstanceID)(uint)param_1;
}

// StartGlobalCameraModifierRig @ 14d6369f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraRigInstanceID __thiscall
AGameplayCamerasPlayerCameraManager::StartGlobalCameraModifierRig
          (AGameplayCamerasPlayerCameraManager *this,UCameraRigAsset *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FCameraRigInstanceID FVar3;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *pTVar4;
  FSharedReferencer<1> FVar5;
  undefined4 in_register_00000084;
  undefined4 in_stack_ffffffffffffffb8;
  TSharedPtr<UE::Cameras::FCameraEvaluationService,1> local_38;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> local_28;
  
  if (*(longlong *)&this->field_0x2848 == 0) {
    *(undefined4 *)&param_1->_padding_ = 0xffffffff;
    *(undefined1 *)((longlong)&param_1->_padding_ + 4) = 0;
    return (FCameraRigInstanceID)param_1;
  }
  EnsureNullContext(this);
  if ((*(longlong *)&this->field_0x2848 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar3 = (FCameraRigInstanceID)(*pcVar1)();
    return FVar3;
  }
  UE::Cameras::FCameraSystemEvaluator::FindEvaluationService
            (*(FCameraSystemEvaluator **)&this->field_0x2848,&local_38,
             (FCameraObjectTypeID *)&UE::Cameras::FCameraModifierService::PrivateTypeID);
  if ((FCameraModifierService *)local_38.Object == (FCameraModifierService *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    FVar5.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    FVar5.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
    if ((FCameraModifierService *)local_38.Object != (FCameraModifierService *)0x0)
    goto LAB_14d636ac9;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    FVar3 = (FCameraRigInstanceID)(*pcVar1)();
    return FVar3;
  }
LAB_14d636ac9:
  pTVar4 = TSharedPtr<UE::Cameras::FCameraEvaluationContext,1>::ToSharedRef
                     (&this->NullContext,&local_28);
  UE::Cameras::FCameraModifierService::StartCameraModifierRig
            ((FCameraModifierService *)local_38.Object,param_1,
             (TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *)
             CONCAT44(in_register_00000084,param_2),(ECameraRigLayer)pTVar4,
             CONCAT31((int3)((uint)in_stack_ffffffffffffffb8 >> 8),3));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  return (FCameraRigInstanceID)param_1;
}

// StartVisualCameraModifierRig @ 14d6379b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraRigInstanceID __thiscall
AGameplayCamerasPlayerCameraManager::StartVisualCameraModifierRig
          (AGameplayCamerasPlayerCameraManager *this,UCameraRigAsset *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FCameraRigInstanceID FVar3;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *pTVar4;
  FSharedReferencer<1> FVar5;
  undefined4 in_register_00000084;
  undefined4 in_stack_ffffffffffffffb8;
  TSharedPtr<UE::Cameras::FCameraEvaluationService,1> local_38;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> local_28;
  
  if (*(longlong *)&this->field_0x2848 == 0) {
    *(undefined4 *)&param_1->_padding_ = 0xffffffff;
    *(undefined1 *)((longlong)&param_1->_padding_ + 4) = 0;
    return (FCameraRigInstanceID)param_1;
  }
  EnsureNullContext(this);
  if ((*(longlong *)&this->field_0x2848 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar3 = (FCameraRigInstanceID)(*pcVar1)();
    return FVar3;
  }
  UE::Cameras::FCameraSystemEvaluator::FindEvaluationService
            (*(FCameraSystemEvaluator **)&this->field_0x2848,&local_38,
             (FCameraObjectTypeID *)&UE::Cameras::FCameraModifierService::PrivateTypeID);
  if ((FCameraModifierService *)local_38.Object == (FCameraModifierService *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    FVar5.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    FVar5.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
    if ((FCameraModifierService *)local_38.Object != (FCameraModifierService *)0x0)
    goto LAB_14d637a89;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    FVar3 = (FCameraRigInstanceID)(*pcVar1)();
    return FVar3;
  }
LAB_14d637a89:
  pTVar4 = TSharedPtr<UE::Cameras::FCameraEvaluationContext,1>::ToSharedRef
                     (&this->NullContext,&local_28);
  UE::Cameras::FCameraModifierService::StartCameraModifierRig
            ((FCameraModifierService *)local_38.Object,param_1,
             (TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *)
             CONCAT44(in_register_00000084,param_2),(ECameraRigLayer)pTVar4,
             CONCAT31((int3)((uint)in_stack_ffffffffffffffb8 >> 8),4));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  return (FCameraRigInstanceID)param_1;
}

// StaticRegisterNativesAGameplayCamerasPlayerCameraManager @ 14d639090

void __cdecl
AGameplayCamerasPlayerCameraManager::StaticRegisterNativesAGameplayCamerasPlayerCameraManager(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xb;
  local_18.DataPtr = Z_Construct_UClass_AGameplayCamerasPlayerCameraManager_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StealPlayerController @ 14d6394d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
AGameplayCamerasPlayerCameraManager::StealPlayerController
          (AGameplayCamerasPlayerCameraManager *this,APlayerController *param_1)

{
  AGameplayCamerasPlayerCameraManager *pAVar1;
  APlayerCameraManager *this_00;
  code *pcVar2;
  AActor *pAVar3;
  bool bVar4;
  undefined4 uStack_24;
  uint uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  
  pAVar1 = (AGameplayCamerasPlayerCameraManager *)(param_1->PlayerCameraManager).field0_0x0.DebugPtr
  ;
  if (pAVar1 == (AGameplayCamerasPlayerCameraManager *)0x0) {
    bVar4 = this == (AGameplayCamerasPlayerCameraManager *)0x0;
  }
  else {
    bVar4 = pAVar1 == this;
  }
  if (bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1213615714691186740>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\GameFramework\\GameplayCamerasPlayerCameraManager.cpp"
                       ,0x34,"PlayerController->PlayerCameraManager != this");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending) &&
       (pAVar1 != (AGameplayCamerasPlayerCameraManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar1);
    }
    this_00 = (param_1->PlayerCameraManager).field0_0x0.DebugPtr;
    (this->OriginalCameraManager).field0_0x0.DebugPtr = this_00;
    pAVar3 = APlayerCameraManager::GetViewTarget(this_00);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (AGameplayCamerasPlayerCameraManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    (param_1->PlayerCameraManager).field0_0x0.DebugPtr = (APlayerCameraManager *)this;
    (**(code **)(*(longlong *)this + 0x7f8))(this,param_1);
    uStack_c = uStack_1c & 0xfffffffe;
    uStack_24 = CONCAT31(uStack_24._1_3_,1);
    local_18 = 0;
    uStack_14 = uStack_24;
    uStack_10 = 0x40000000;
    (**(code **)(*(longlong *)this + 0x898))(this,pAVar3,&local_18);
  }
  return;
}

// StopCameraModifierRig @ 14d6395f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
AGameplayCamerasPlayerCameraManager::StopCameraModifierRig
          (AGameplayCamerasPlayerCameraManager *this,FCameraRigInstanceID param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FSharedReferencer<1> FVar3;
  TSharedPtr<UE::Cameras::FCameraEvaluationService,1> local_18;
  
  if (*(FCameraSystemEvaluator **)&this->field_0x2848 == (FCameraSystemEvaluator *)0x0) {
    return;
  }
  UE::Cameras::FCameraSystemEvaluator::FindEvaluationService
            (*(FCameraSystemEvaluator **)&this->field_0x2848,&local_18,
             (FCameraObjectTypeID *)&UE::Cameras::FCameraModifierService::PrivateTypeID);
  if ((FCameraModifierService *)local_18.Object == (FCameraModifierService *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    FVar3.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    FVar3.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
    if ((FCameraModifierService *)local_18.Object != (FCameraModifierService *)0x0)
    goto LAB_14d639686;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14d639686:
  UE::Cameras::FCameraModifierService::StopCameraModifierRig
            ((FCameraModifierService *)local_18.Object,param_1,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  return;
}

// StopCameraShakeAsset @ 14d639790

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
AGameplayCamerasPlayerCameraManager::StopCameraShakeAsset
          (AGameplayCamerasPlayerCameraManager *this,FCameraShakeInstanceID param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FSharedReferencer<1> FVar4;
  TSharedPtr<UE::Cameras::FCameraEvaluationService,1> local_18;
  
  if (*(FCameraSystemEvaluator **)&this->field_0x2848 == (FCameraSystemEvaluator *)0x0) {
    return false;
  }
  UE::Cameras::FCameraSystemEvaluator::FindEvaluationService
            (*(FCameraSystemEvaluator **)&this->field_0x2848,&local_18,
             (FCameraObjectTypeID *)&UE::Cameras::FCameraShakeService::PrivateTypeID);
  if ((FCameraShakeService *)local_18.Object == (FCameraShakeService *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    FVar4.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    FVar4.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
    if ((FCameraShakeService *)local_18.Object != (FCameraShakeService *)0x0) goto LAB_14d639825;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
LAB_14d639825:
  bVar2 = UE::Cameras::FCameraShakeService::StopCameraShake
                    ((FCameraShakeService *)local_18.Object,param_1,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  return bVar2;
}

// _getUObject @ 14d63f260

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UObject * __thiscall
AGameplayCamerasPlayerCameraManager::_getUObject(AGameplayCamerasPlayerCameraManager *this)

{
  return (UObject *)&this[-1].field_0x60;
}

// execActivatePersistentBaseCameraRig @ 14d63fd00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
AGameplayCamerasPlayerCameraManager::execActivatePersistentBaseCameraRig
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UCameraRigAsset *pUVar2;
  UCameraRigAsset *local_res8;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> local_18;
  
  local_res8 = (UCameraRigAsset *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EnsureNullContext((AGameplayCamerasPlayerCameraManager *)param_1);
  local_18.Object = *(FCameraEvaluationContext **)&param_1[0x103].field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&param_1[0x103].field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  IGameplayCameraSystemHost::ActivateCameraRig
            ((IGameplayCameraSystemHost *)&param_1[0x101].field_0x18,pUVar2,&local_18,Base);
  return;
}

// execActivatePersistentGlobalCameraRig @ 14d63fe60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
AGameplayCamerasPlayerCameraManager::execActivatePersistentGlobalCameraRig
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UCameraRigAsset *pUVar2;
  UCameraRigAsset *local_res8;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> local_18;
  
  local_res8 = (UCameraRigAsset *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EnsureNullContext((AGameplayCamerasPlayerCameraManager *)param_1);
  local_18.Object = *(FCameraEvaluationContext **)&param_1[0x103].field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&param_1[0x103].field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  IGameplayCameraSystemHost::ActivateCameraRig
            ((IGameplayCameraSystemHost *)&param_1[0x101].field_0x18,pUVar2,&local_18,Global);
  return;
}

// execActivatePersistentVisualCameraRig @ 14d63ffc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
AGameplayCamerasPlayerCameraManager::execActivatePersistentVisualCameraRig
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UCameraRigAsset *pUVar2;
  UCameraRigAsset *local_res8;
  TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> local_18;
  
  local_res8 = (UCameraRigAsset *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EnsureNullContext((AGameplayCamerasPlayerCameraManager *)param_1);
  local_18.Object = *(FCameraEvaluationContext **)&param_1[0x103].field_0x8;
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&param_1[0x103].field_0x10;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  IGameplayCameraSystemHost::ActivateCameraRig
            ((IGameplayCameraSystemHost *)&param_1[0x101].field_0x18,pUVar2,&local_18,Visual);
  return;
}

// execIsCameraShakeAssetPlaying @ 14d640810

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
AGameplayCamerasPlayerCameraManager::execIsCameraShakeAssetPlaying
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FCameraShakeInstanceID FVar3;
  bool bVar4;
  FCameraShakeService *this;
  FSharedReferencer<1> FVar5;
  FCameraShakeInstanceID local_res8 [2];
  TSharedPtr<UE::Cameras::FCameraEvaluationService,1> local_18;
  
  local_res8[0].Value = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  FVar3.Value = local_res8[0].Value;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(FCameraSystemEvaluator **)&param_1[0x101].field_0x20 == (FCameraSystemEvaluator *)0x0) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  UE::Cameras::FCameraSystemEvaluator::FindEvaluationService
            (*(FCameraSystemEvaluator **)&param_1[0x101].field_0x20,&local_18,
             (FCameraObjectTypeID *)&UE::Cameras::FCameraShakeService::PrivateTypeID);
  if ((FCameraShakeService *)local_18.Object == (FCameraShakeService *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    this = (FCameraShakeService *)0x0;
    FVar5.ReferenceController = (TReferenceControllerBase<1> *)(FCameraShakeService *)0x0;
  }
  else {
    if ((FCameraShakeService *)local_18.SharedReferenceCount.ReferenceController !=
        (FCameraShakeService *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    this = (FCameraShakeService *)local_18.Object;
    FVar5.ReferenceController = local_18.SharedReferenceCount.ReferenceController;
    if ((FCameraShakeService *)local_18.Object != (FCameraShakeService *)0x0) goto LAB_14d640905;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14d640905:
  bVar4 = UE::Cameras::FCameraShakeService::IsCameraShakePlaying(this,FVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  *(bool *)param_3 = bVar4;
  return;
}

// execReleasePlayerController @ 14d640d00

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
AGameplayCamerasPlayerCameraManager::execReleasePlayerController
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar1 = *(longlong *)&param_1[0x11].field_0x18;
  if (lVar1 != 0) {
    if (*(UObject **)(lVar1 + 0x390) == (UObject *)0x0) {
      bVar3 = param_1 == (UObject *)0x0;
    }
    else {
      bVar3 = *(UObject **)(lVar1 + 0x390) == param_1;
    }
    if (bVar3) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (*(UObject **)&param_1[0x102].field_0x18 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(*(UObject **)&param_1[0x102].field_0x18);
      }
      *(undefined8 *)(lVar1 + 0x390) = *(undefined8 *)&param_1[0x102].field_0x18;
      *(undefined8 *)&param_1[0x15].field_0x8 = 0;
      *(undefined8 *)&param_1[0x102].field_0x18 = 0;
      IGameplayCameraSystemHost::DestroyCameraSystem
                ((IGameplayCameraSystemHost *)&param_1[0x101].field_0x18);
      *(undefined8 *)&param_1[0x11].field_0x18 = 0;
      return;
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<1213615714691186756>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\GameFramework\\GameplayCamerasPlayerCameraManager.cpp"
                     ,0x44,"PCOwner && PCOwner->PlayerCameraManager == this");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

// execStartCameraShakeAsset @ 14d640df0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
AGameplayCamerasPlayerCameraManager::execStartCameraShakeAsset
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  FCameraShakeService *this;
  FSharedReferencer<1> FVar4;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_res18;
  undefined8 local_res20;
  TSharedPtr<UE::Cameras::FCameraEvaluationService,1> local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  float local_50;
  ECameraShakePlaySpace EStack_4c;
  undefined3 uStack_4b;
  undefined4 local_48;
  undefined1 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_res20._0_4_ = 0.0;
  local_res20._4_1_ = CameraLocal;
  local_res20._5_3_ = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(FCameraSystemEvaluator **)&param_1[0x101].field_0x20 == (FCameraSystemEvaluator *)0x0) {
    *(undefined4 *)param_3 = 0xffffffff;
    return;
  }
  local_48 = local_res10[0];
  local_50 = (float)local_res20;
  EStack_4c = local_res20._4_1_;
  uStack_4b = local_res20._5_3_;
  local_40 = local_68;
  uStack_38 = uStack_60;
  local_44 = local_res8[0];
  local_30 = local_58;
  UE::Cameras::FCameraSystemEvaluator::FindEvaluationService
            (*(FCameraSystemEvaluator **)&param_1[0x101].field_0x20,&local_78,
             (FCameraObjectTypeID *)&UE::Cameras::FCameraShakeService::PrivateTypeID);
  if ((FCameraShakeService *)local_78.Object == (FCameraShakeService *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    this = (FCameraShakeService *)0x0;
    FVar4.ReferenceController = (TReferenceControllerBase<1> *)(FCameraShakeService *)0x0;
  }
  else {
    if ((FCameraShakeService *)local_78.SharedReferenceCount.ReferenceController !=
        (FCameraShakeService *)0x0) {
      LOCK();
      (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_78.SharedReferenceCount.ReferenceController);
    this = (FCameraShakeService *)local_78.Object;
    FVar4.ReferenceController = local_78.SharedReferenceCount.ReferenceController;
    if ((FCameraShakeService *)local_78.Object != (FCameraShakeService *)0x0) goto LAB_14d640faa;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14d640faa:
  UE::Cameras::FCameraShakeService::StartCameraShake(this,(FStartCameraShakeParams *)&local_res18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar4.ReferenceController);
  *(undefined4 *)param_3 = local_res18;
  return;
}

// execStartGlobalCameraModifierRig @ 14d640ff0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
AGameplayCamerasPlayerCameraManager::execStartGlobalCameraModifierRig
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *pTVar3;
  bool bVar4;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *pTVar5;
  FCameraModifierService *this;
  FSharedReferencer<1> FVar6;
  undefined4 local_res8 [2];
  undefined4 local_res10;
  uint uStackX_14;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *local_res18;
  undefined4 in_stack_ffffffffffffffa8;
  TSharedPtr<UE::Cameras::FCameraEvaluationService,1> local_48;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> local_38;
  
  local_res18 = (TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pTVar3 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x101].field_0x20 == 0) {
    local_res10 = 0xffffffff;
    uStackX_14 = uStackX_14 & 0xffffff00;
    goto LAB_14d6411c0;
  }
  EnsureNullContext((AGameplayCamerasPlayerCameraManager *)param_1);
  if ((*(longlong *)&param_1[0x101].field_0x20 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UE::Cameras::FCameraSystemEvaluator::FindEvaluationService
            (*(FCameraSystemEvaluator **)&param_1[0x101].field_0x20,&local_48,
             (FCameraObjectTypeID *)&UE::Cameras::FCameraModifierService::PrivateTypeID);
  if ((FCameraModifierService *)local_48.Object == (FCameraModifierService *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    this = (FCameraModifierService *)0x0;
    FVar6.ReferenceController = (TReferenceControllerBase<1> *)(FCameraModifierService *)0x0;
LAB_14d64114d:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((FCameraModifierService *)local_48.SharedReferenceCount.ReferenceController !=
        (FCameraModifierService *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    this = (FCameraModifierService *)local_48.Object;
    FVar6.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
    if ((FCameraModifierService *)local_48.Object == (FCameraModifierService *)0x0)
    goto LAB_14d64114d;
  }
  pTVar5 = TSharedPtr<UE::Cameras::FCameraEvaluationContext,1>::ToSharedRef
                     ((TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *)
                      &param_1[0x103].field_0x8,&local_38);
  UE::Cameras::FCameraModifierService::StartCameraModifierRig
            (this,(UCameraRigAsset *)&local_res10,pTVar3,(ECameraRigLayer)pTVar5,
             CONCAT31((int3)((uint)in_stack_ffffffffffffffa8 >> 8),3));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
LAB_14d6411c0:
  *(ulonglong *)param_3 = CONCAT44(uStackX_14,local_res10);
  return;
}

// execStartVisualCameraModifierRig @ 14d6413a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
AGameplayCamerasPlayerCameraManager::execStartVisualCameraModifierRig
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *pTVar3;
  bool bVar4;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *pTVar5;
  FCameraModifierService *this;
  FSharedReferencer<1> FVar6;
  undefined4 local_res8 [2];
  undefined4 local_res10;
  uint uStackX_14;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *local_res18;
  undefined4 in_stack_ffffffffffffffa8;
  TSharedPtr<UE::Cameras::FCameraEvaluationService,1> local_48;
  TSharedRef<UE::Cameras::FCameraEvaluationContext,1> local_38;
  
  local_res18 = (TSharedRef<UE::Cameras::FCameraEvaluationContext,1> *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  pTVar3 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[0x101].field_0x20 == 0) {
    local_res10 = 0xffffffff;
    uStackX_14 = uStackX_14 & 0xffffff00;
    goto LAB_14d641570;
  }
  EnsureNullContext((AGameplayCamerasPlayerCameraManager *)param_1);
  if ((*(longlong *)&param_1[0x101].field_0x20 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UE::Cameras::FCameraSystemEvaluator::FindEvaluationService
            (*(FCameraSystemEvaluator **)&param_1[0x101].field_0x20,&local_48,
             (FCameraObjectTypeID *)&UE::Cameras::FCameraModifierService::PrivateTypeID);
  if ((FCameraModifierService *)local_48.Object == (FCameraModifierService *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    this = (FCameraModifierService *)0x0;
    FVar6.ReferenceController = (TReferenceControllerBase<1> *)(FCameraModifierService *)0x0;
LAB_14d6414fd:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((FCameraModifierService *)local_48.SharedReferenceCount.ReferenceController !=
        (FCameraModifierService *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    this = (FCameraModifierService *)local_48.Object;
    FVar6.ReferenceController = local_48.SharedReferenceCount.ReferenceController;
    if ((FCameraModifierService *)local_48.Object == (FCameraModifierService *)0x0)
    goto LAB_14d6414fd;
  }
  pTVar5 = TSharedPtr<UE::Cameras::FCameraEvaluationContext,1>::ToSharedRef
                     ((TSharedPtr<UE::Cameras::FCameraEvaluationContext,1> *)
                      &param_1[0x103].field_0x8,&local_38);
  UE::Cameras::FCameraModifierService::StartCameraModifierRig
            (this,(UCameraRigAsset *)&local_res10,pTVar3,(ECameraRigLayer)pTVar5,
             CONCAT31((int3)((uint)in_stack_ffffffffffffffa8 >> 8),4));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
LAB_14d641570:
  *(ulonglong *)param_3 = CONCAT44(uStackX_14,local_res10);
  return;
}

// execStealPlayerController @ 14d641720

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
AGameplayCamerasPlayerCameraManager::execStealPlayerController
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  APlayerCameraManager *this;
  code *pcVar3;
  longlong lVar4;
  AActor *pAVar5;
  bool bVar6;
  longlong local_res8;
  undefined4 uStack_24;
  uint uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint uStack_c;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  lVar4 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = *(UObject **)(local_res8 + 0x390);
  if (pUVar2 == (UObject *)0x0) {
    bVar6 = param_1 == (UObject *)0x0;
  }
  else {
    bVar6 = pUVar2 == param_1;
  }
  if (bVar6) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1213615714691186740>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\GameFramework\\GameplayCamerasPlayerCameraManager.cpp"
                       ,0x34,"PlayerController->PlayerCameraManager != this");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    this = *(APlayerCameraManager **)(lVar4 + 0x390);
    *(APlayerCameraManager **)&param_1[0x102].field_0x18 = this;
    pAVar5 = APlayerCameraManager::GetViewTarget(this);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    *(UObject **)(lVar4 + 0x390) = param_1;
    (**(code **)(*(longlong *)param_1 + 0x7f8))(param_1,lVar4);
    uStack_c = uStack_1c & 0xfffffffe;
    uStack_24 = CONCAT31(uStack_24._1_3_,1);
    local_18 = 0;
    uStack_14 = uStack_24;
    uStack_10 = 0x40000000;
    (**(code **)(*(longlong *)param_1 + 0x898))(param_1,pAVar5,&local_18);
  }
  return;
}

// execStopCameraModifierRig @ 14d6418a0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
AGameplayCamerasPlayerCameraManager::execStopCameraModifierRig
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FCameraRigInstanceID FVar3;
  bool bVar4;
  FCameraModifierService *this;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  int local_res8 [2];
  uint local_res10;
  uint uStackX_14;
  TSharedPtr<UE::Cameras::FCameraEvaluationService,1> local_28;
  
  local_res10 = 0xffffffff;
  uStackX_14 = uStackX_14 & 0xffffff00;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar6 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar3._4_4_ = uStackX_14;
  FVar3.Value = local_res10;
  if (*(FCameraSystemEvaluator **)&param_1[0x101].field_0x20 == (FCameraSystemEvaluator *)0x0) {
    return;
  }
  UE::Cameras::FCameraSystemEvaluator::FindEvaluationService
            (*(FCameraSystemEvaluator **)&param_1[0x101].field_0x20,&local_28,
             (FCameraObjectTypeID *)&UE::Cameras::FCameraModifierService::PrivateTypeID);
  if ((FCameraModifierService *)local_28.Object == (FCameraModifierService *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    this = (FCameraModifierService *)0x0;
    FVar5.ReferenceController = (TReferenceControllerBase<1> *)(FCameraModifierService *)0x0;
  }
  else {
    if ((FCameraModifierService *)local_28.SharedReferenceCount.ReferenceController !=
        (FCameraModifierService *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    this = (FCameraModifierService *)local_28.Object;
    FVar5.ReferenceController = local_28.SharedReferenceCount.ReferenceController;
    if ((FCameraModifierService *)local_28.Object != (FCameraModifierService *)0x0)
    goto LAB_14d6419d6;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14d6419d6:
  UE::Cameras::FCameraModifierService::StopCameraModifierRig(this,FVar3,bVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  return;
}

// execStopCameraShakeAsset @ 14d641b60

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
AGameplayCamerasPlayerCameraManager::execStopCameraShakeAsset
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  FCameraShakeInstanceID FVar3;
  bool bVar4;
  FCameraShakeService *this;
  FSharedReferencer<1> FVar5;
  bool bVar6;
  int local_res8 [2];
  FCameraShakeInstanceID local_res10 [2];
  TSharedPtr<UE::Cameras::FCameraEvaluationService,1> local_28;
  
  local_res10[0].Value = 0xffffffff;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  FVar3.Value = local_res10[0].Value;
  bVar6 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(FCameraSystemEvaluator **)&param_1[0x101].field_0x20 == (FCameraSystemEvaluator *)0x0) {
    *(undefined1 *)param_3 = 0;
    return;
  }
  UE::Cameras::FCameraSystemEvaluator::FindEvaluationService
            (*(FCameraSystemEvaluator **)&param_1[0x101].field_0x20,&local_28,
             (FCameraObjectTypeID *)&UE::Cameras::FCameraShakeService::PrivateTypeID);
  if ((FCameraShakeService *)local_28.Object == (FCameraShakeService *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    this = (FCameraShakeService *)0x0;
    FVar5.ReferenceController = (TReferenceControllerBase<1> *)(FCameraShakeService *)0x0;
  }
  else {
    if ((FCameraShakeService *)local_28.SharedReferenceCount.ReferenceController !=
        (FCameraShakeService *)0x0) {
      LOCK();
      (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    this = (FCameraShakeService *)local_28.Object;
    FVar5.ReferenceController = local_28.SharedReferenceCount.ReferenceController;
    if ((FCameraShakeService *)local_28.Object != (FCameraShakeService *)0x0) goto LAB_14d641c99;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14d641c99:
  bVar6 = UE::Cameras::FCameraShakeService::StopCameraShake(this,FVar3,bVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar5.ReferenceController);
  *(bool *)param_3 = bVar6;
  return;
}

