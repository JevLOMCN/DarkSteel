// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 119

// StaticClass @ 148337b20

UClass * __cdecl APlayerCameraManager::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APlayerCameraManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PlayerCameraManager",
               &Z_Registration_Info_UClass_APlayerCameraManager.InnerSingleton,
               StaticRegisterNativesAPlayerCameraManager,0x2840,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<APlayerCameraManager>,
               InternalVTableHelperCtorCaller<APlayerCameraManager>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APlayerCameraManager.InnerSingleton;
}

// APlayerCameraManager @ 148348dc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

APlayerCameraManager * __thiscall
APlayerCameraManager::APlayerCameraManager(APlayerCameraManager *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7APlayerCameraManager__6B_;
  (this->PCOwner).field0_0x0.DebugPtr = (APlayerController *)0x0;
  (this->TransformComponent).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  (this->CameraStyle).ComparisonIndex = 0;
  (this->CameraStyle).Number = 0;
  (this->ViewTarget).Target.field0_0x0.DebugPtr = (AActor *)0x0;
  FMinimalViewInfo::FMinimalViewInfo(&(this->ViewTarget).POV);
  (this->ViewTarget).PlayerState.field0_0x0.DebugPtr = (APlayerState *)0x0;
  (this->PendingViewTarget).Target.field0_0x0.DebugPtr = (AActor *)0x0;
  FMinimalViewInfo::FMinimalViewInfo(&(this->PendingViewTarget).POV);
  (this->PendingViewTarget).PlayerState.field0_0x0.DebugPtr = (APlayerState *)0x0;
  (this->BlendParams).bLockOutgoing = 0;
  (this->BlendParams).BlendTime = 0.0;
  (this->BlendParams).BlendFunction.Value = '\x01';
  (this->BlendParams).BlendExp = 2.0;
  *(undefined8 *)&this->OnBlendCompleteEvent = 0;
  *(undefined8 *)&(this->OnBlendCompleteEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnBlendCompleteEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnBlendCompleteEvent).field_0x18 = 2;
  (this->CameraCachePrivate).TimeStamp = 0.0;
  FMinimalViewInfo::FMinimalViewInfo(&(this->CameraCachePrivate).POV);
  (this->LastFrameCameraCachePrivate).TimeStamp = 0.0;
  FMinimalViewInfo::FMinimalViewInfo(&(this->LastFrameCameraCachePrivate).POV);
  (this->ModifierList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModifierList).ArrayNum = 0;
  (this->ModifierList).ArrayMax = 0;
  (this->DefaultModifiers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DefaultModifiers).ArrayNum = 0;
  (this->DefaultModifiers).ArrayMax = 0;
  *(undefined8 *)&this->OnAudioFadeChangeEvent = 0;
  *(undefined8 *)&(this->OnAudioFadeChangeEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnAudioFadeChangeEvent).field_0x10 = 0;
  (this->CameraLensEffects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraLensEffects).ArrayNum = 0;
  (this->CameraLensEffects).ArrayMax = 0;
  (this->CachedCameraShakeMod).field0_0x0.DebugPtr = (UCameraModifier_CameraShake *)0x0;
  (this->PostProcessBlendCache).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PostProcessBlendCache).ArrayNum = 0;
  (this->PostProcessBlendCache).ArrayMax = 0;
  (this->PostProcessBlendCacheWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PostProcessBlendCacheWeights).ArrayNum = 0;
  (this->PostProcessBlendCacheWeights).ArrayMax = 0;
  (this->PostProcessBlendCacheOrders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PostProcessBlendCacheOrders).ArrayNum = 0;
  (this->PostProcessBlendCacheOrders).ArrayMax = 0;
  (this->AnimCameraActor).field0_0x0.DebugPtr = (ACameraActor *)0x0;
  (this->SwapPendingViewTargetWhenUsingClientSideCameraUpdatesTimerHandle).Handle = 0;
  return this;
}

// APlayerCameraManager @ 148348f20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

APlayerCameraManager * __thiscall
APlayerCameraManager::APlayerCameraManager(APlayerCameraManager *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  TArray<TSubclassOf<UCameraModifier>,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 *puVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  FNameEntryId FVar8;
  int iVar9;
  undefined4 extraout_var;
  FName *pFVar10;
  UClass *pUVar11;
  USceneComponent *pUVar12;
  APlayerCameraManager *pAVar13;
  undefined1 local_res8 [8];
  FName local_res20;
  UClass *local_28 [2];
  
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7APlayerCameraManager__6B_;
  (this->PCOwner).field0_0x0.DebugPtr = (APlayerController *)0x0;
  (this->TransformComponent).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  (this->CameraStyle).ComparisonIndex = 0;
  (this->CameraStyle).Number = 0;
  (this->ViewTarget).Target.field0_0x0.DebugPtr = (AActor *)0x0;
  FMinimalViewInfo::FMinimalViewInfo(&(this->ViewTarget).POV);
  (this->ViewTarget).PlayerState.field0_0x0.DebugPtr = (APlayerState *)0x0;
  (this->PendingViewTarget).Target.field0_0x0.DebugPtr = (AActor *)0x0;
  FMinimalViewInfo::FMinimalViewInfo(&(this->PendingViewTarget).POV);
  (this->PendingViewTarget).PlayerState.field0_0x0.DebugPtr = (APlayerState *)0x0;
  (this->BlendParams).bLockOutgoing = 0;
  (this->BlendParams).BlendTime = 0.0;
  (this->BlendParams).BlendFunction.Value = '\x01';
  (this->BlendParams).BlendExp = 2.0;
  *(undefined8 *)&this->OnBlendCompleteEvent = 0;
  *(undefined8 *)&(this->OnBlendCompleteEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnBlendCompleteEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnBlendCompleteEvent).field_0x18 = 2;
  (this->CameraCachePrivate).TimeStamp = 0.0;
  FMinimalViewInfo::FMinimalViewInfo(&(this->CameraCachePrivate).POV);
  (this->LastFrameCameraCachePrivate).TimeStamp = 0.0;
  FMinimalViewInfo::FMinimalViewInfo(&(this->LastFrameCameraCachePrivate).POV);
  this->bAutoCalculateOrthoPlanes = 1;
  pTVar2 = &this->DefaultModifiers;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->DefaultModifiers).ArrayNum = 0;
  (this->DefaultModifiers).ArrayMax = 0;
  (this->ModifierList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ModifierList).ArrayNum = 0;
  (this->ModifierList).ArrayMax = 0;
  *(undefined8 *)&this->OnAudioFadeChangeEvent = 0;
  *(undefined8 *)&(this->OnAudioFadeChangeEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnAudioFadeChangeEvent).field_0x10 = 0;
  (this->CameraLensEffects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraLensEffects).ArrayNum = 0;
  (this->CameraLensEffects).ArrayMax = 0;
  (this->CachedCameraShakeMod).field0_0x0.DebugPtr = (UCameraModifier_CameraShake *)0x0;
  (this->PostProcessBlendCache).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PostProcessBlendCache).ArrayNum = 0;
  (this->PostProcessBlendCache).ArrayMax = 0;
  (this->PostProcessBlendCacheWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PostProcessBlendCacheWeights).ArrayNum = 0;
  (this->PostProcessBlendCacheWeights).ArrayMax = 0;
  (this->PostProcessBlendCacheOrders).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PostProcessBlendCacheOrders).ArrayNum = 0;
  (this->PostProcessBlendCacheOrders).ArrayMax = 0;
  (this->AnimCameraActor).field0_0x0.DebugPtr = (ACameraActor *)0x0;
  (this->SwapPendingViewTargetWhenUsingClientSideCameraUpdatesTimerHandle).Handle = 0;
  this->bDefaultConstrainAspectRatio = 0;
  this->bUpdateOrthoPlanes = 1;
  this->bUseCameraHeightAsViewTarget = 1;
  this->DefaultFOV = 90.0;
  this->DefaultAspectRatio = 1.33333;
  this->DefaultOrthoWidth = 512.0;
  this->AutoPlaneShift = 0.0;
  AActor::SetHidden((AActor *)this,true);
  this->bDebugClientSideCamera = 0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 & 0xf7;
  this->bUseClientSideCameraUpdates = 1;
  this->FreeCamDistance = 256.0;
  this->ViewPitchMin = -89.9;
  this->ViewPitchMax = 89.9;
  this->ViewYawMin = 0.0;
  this->ViewYawMax = 359.999;
  this->ViewRollMin = -89.9;
  this->ViewRollMax = 89.9;
  FVar8 = FNameEntryId::FromValidEName((EName)local_res8);
  FVar4.Number = 0;
  FVar4.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar8.Value);
  this->CameraStyle = FVar4;
  AActor::SetCanBeDamaged((AActor *)this,false);
  this->TimeSinceLastServerUpdateCamera = 0.0;
  pFVar10 = ::FName::FName(&local_res20,L"TransformComponent0");
  FVar4 = *pFVar10;
  pUVar11 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar12 = (USceneComponent *)
            UObject::CreateDefaultSubobject((UObject *)this,FVar4,pUVar11,pUVar11,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar12);
  }
  (this->TransformComponent).field0_0x0.DebugPtr = pUVar12;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar12);
  }
  this->_padding_ = (longlong)(this->TransformComponent).field0_0x0;
  local_28[0] = Z_Construct_UClass_UCameraModifier_CameraShake_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_28[0]);
  }
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar5 <= (FScriptContainerElement *)local_28) &&
     ((FScriptContainerElement *)local_28 < pFVar5 + (longlong)(this->DefaultModifiers).ArrayMax * 8
     )) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pAVar13 = (APlayerCameraManager *)(*pcVar6)();
      return pAVar13;
    }
  }
  iVar9 = (this->DefaultModifiers).ArrayNum;
  if (iVar9 == (this->DefaultModifiers).ArrayMax) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar2->AllocatorInstance,&(this->DefaultModifiers).ArrayMax);
  }
  (this->DefaultModifiers).ArrayNum = iVar9 + 1;
  *(UClass **)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_28[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28[0] != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_28[0]);
  }
  return this;
}

// ~APlayerCameraManager @ 14834cf60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall APlayerCameraManager::~APlayerCameraManager(APlayerCameraManager *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7APlayerCameraManager__6B_;
  pFVar1 = (this->PostProcessBlendCacheOrders).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PostProcessBlendCacheWeights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FPostProcessSettings,int>
            ((FPostProcessSettings *)(this->PostProcessBlendCache).AllocatorInstance.Data,
             (this->PostProcessBlendCache).ArrayNum);
  pFVar1 = (this->PostProcessBlendCache).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CameraLensEffects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->OnAudioFadeChangeEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAudioFadeChangeEvent);
  pFVar1 = (this->DefaultModifiers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ModifierList).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LastFrameCameraCachePrivate).POV.PostProcessSettings.WeightedBlendables.Array.
           AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CameraCachePrivate).POV.PostProcessSettings.WeightedBlendables.Array.
           AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnBlendCompleteEvent).field_0x8,
             *(int *)&(this->OnBlendCompleteEvent).field_0x10);
  pvVar2 = *(void **)&(this->OnBlendCompleteEvent).field_0x8;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBlendCompleteEvent);
  pFVar1 = (this->PendingViewTarget).POV.PostProcessSettings.WeightedBlendables.Array.
           AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ViewTarget).POV.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.
           Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  AActor::~AActor((AActor *)this);
  return;
}

// AddCachedPPBlend @ 148352b50

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
APlayerCameraManager::AddCachedPPBlend
          (APlayerCameraManager *this,FPostProcessSettings *param_1,float param_2,
          EViewTargetBlendOrder param_3)

{
  int *piVar1;
  TArray<FPostProcessSettings,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<EViewTargetBlendOrder,TSizedDefaultAllocator<32>_> *pTVar4;
  FPostProcessSettings *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  float local_res18 [2];
  EViewTargetBlendOrder local_res20 [2];
  
  local_res18[0] = param_2;
  local_res20[0] = param_3;
  if ((this->PostProcessBlendCache).ArrayNum != (this->PostProcessBlendCacheWeights).ArrayNum) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("PostProcessBlendCache.Num() == PostProcessBlendCacheWeights.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PlayerCameraManager.cpp"
                       ,0x132,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if ((this->PostProcessBlendCache).ArrayNum != (this->PostProcessBlendCacheOrders).ArrayNum) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("PostProcessBlendCache.Num() == PostProcessBlendCacheOrders.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PlayerCameraManager.cpp"
                       ,0x133,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pTVar2 = &this->PostProcessBlendCache;
  pFVar5 = (FPostProcessSettings *)(pTVar2->AllocatorInstance).Data;
  if ((pFVar5 <= param_1) && (param_1 < pFVar5 + (this->PostProcessBlendCache).ArrayMax)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar9 = (this->PostProcessBlendCache).ArrayNum;
  piVar1 = &(this->PostProcessBlendCache).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x770,0x10,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->PostProcessBlendCache).ArrayNum = iVar9 + 1;
  FPostProcessSettings::FPostProcessSettings
            ((FPostProcessSettings *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 0x770),
             param_1);
  pTVar3 = &this->PostProcessBlendCacheWeights;
  pFVar6 = (pTVar3->AllocatorInstance).Data;
  if ((pFVar6 <= (FScriptContainerElement *)local_res18) &&
     ((FScriptContainerElement *)local_res18 <
      pFVar6 + (longlong)(this->PostProcessBlendCacheWeights).ArrayMax * 4)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar9 = (this->PostProcessBlendCacheWeights).ArrayNum;
  piVar1 = &(this->PostProcessBlendCacheWeights).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar3->AllocatorInstance,piVar1);
  }
  (this->PostProcessBlendCacheWeights).ArrayNum = iVar9 + 1;
  pTVar4 = &this->PostProcessBlendCacheOrders;
  *(float *)((pTVar3->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_res18[0];
  pFVar6 = (pTVar4->AllocatorInstance).Data;
  if ((pFVar6 <= (FScriptContainerElement *)local_res20) &&
     ((FScriptContainerElement *)local_res20 <
      pFVar6 + (longlong)(this->PostProcessBlendCacheOrders).ArrayMax * 4)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar9 = (this->PostProcessBlendCacheOrders).ArrayNum;
  piVar1 = &(this->PostProcessBlendCacheOrders).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar4->AllocatorInstance,piVar1);
  }
  (this->PostProcessBlendCacheOrders).ArrayNum = iVar9 + 1;
  *(EViewTargetBlendOrder *)((pTVar4->AllocatorInstance).Data + (longlong)iVar9 * 4) =
       local_res20[0];
  return;
}

// AddCameraModifierToList @ 148352dd0

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
APlayerCameraManager::AddCameraModifierToList(APlayerCameraManager *this,UCameraModifier *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  UCameraModifier *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  
  if (param_1 == (UCameraModifier *)0x0) {
LAB_148352f75:
    bVar5 = false;
  }
  else {
    uVar11 = (this->ModifierList).ArrayNum;
    uVar9 = 0;
    if (0 < (int)uVar11) {
      lVar10 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar9 < (this->ModifierList).ArrayNum) {
          uVar7 = ~uVar9 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pUVar3 = *(UCameraModifier **)((this->ModifierList).AllocatorInstance.Data + lVar10);
        if (pUVar3 != (UCameraModifier *)0x0) {
          if (pUVar3 == param_1) goto LAB_148352f75;
          if (param_1->Priority <= pUVar3->Priority) {
            uVar11 = uVar9;
            if ((param_1->bExclusive != 0) && (param_1->Priority == pUVar3->Priority))
            goto LAB_148352f75;
            break;
          }
        }
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 8;
      } while ((int)uVar9 < (this->ModifierList).ArrayNum);
    }
    piVar1 = &(this->ModifierList).ArrayNum;
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,1,&(this->ModifierList).AllocatorInstance,piVar1,
                       &(this->ModifierList).ArrayMax);
    pFVar2 = (this->ModifierList).AllocatorInstance.Data + (longlong)(int)uVar11 * 8;
    memmove(pFVar2 + 8,pFVar2,(longlong)(int)(iVar8 - uVar11) << 3);
    uVar9 = 0;
    if ((int)uVar11 < *piVar1) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pFVar2 = (this->ModifierList).AllocatorInstance.Data;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    *(UCameraModifier **)(pFVar2 + (longlong)(int)uVar11 * 8) = param_1;
    (**(code **)(param_1->_padding_ + 0x2c0))(param_1,this);
    bVar5 = true;
  }
  return bVar5;
}

// AddGenericCameraLensEffect @ 1483542d0

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

TScriptInterface<ICameraLensEffectInterface> * __thiscall
APlayerCameraManager::AddGenericCameraLensEffect
          (APlayerCameraManager *this,
          TScriptInterface<ICameraLensEffectInterface> *__return_storage_ptr__,
          TSubclassOf<AActor> param_1)

{
  int *piVar1;
  TArray<TScriptInterface<ICameraLensEffectInterface>,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  UClass *pUVar9;
  AActor *pAVar10;
  longlong *plVar11;
  TScriptInterface<ICameraLensEffectInterface> *pTVar12;
  UWorld *this_00;
  AActor *this_01;
  FString *pFVar13;
  AActor *pAVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  float fVar17;
  undefined1 auStackY_1f8 [32];
  AActor *local_1a8;
  AActor *pAStack_1a0;
  UObject *local_198;
  TRotator<double> local_190;
  TVector<double> local_178;
  undefined1 local_160 [16];
  FString local_150;
  FString local_140;
  FString local_130;
  undefined1 local_118 [112];
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  lVar3 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar3 == 0) || (pUVar9 = Z_Construct_UClass_AActor_NoRegister(), pUVar9 == (UClass *)0x0)) {
LAB_1483547fb:
    *(undefined8 *)__return_storage_ptr__ = 0;
    *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
    return __return_storage_ptr__;
  }
  iVar8 = (int)pUVar9->_padding_;
  if ((*(int *)(lVar3 + 0x38) < iVar8) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar8 * 8) !=
      &pUVar9->_padding_)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if ((!bVar7) || (lVar3 = *(longlong *)param_1.Class.field0_0x0, lVar3 == 0)) goto LAB_1483547fb;
  local_1a8 = (AActor *)0x0;
  pAStack_1a0 = (AActor *)0x0;
  pUVar9 = Z_Construct_UClass_AActor_NoRegister();
  pAVar14 = (AActor *)0x0;
  pAVar10 = pAVar14;
  if (pUVar9 != (UClass *)0x0) {
    iVar8 = (int)pUVar9->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar8) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar8 * 8) !=
        &pUVar9->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      pAVar10 = *(AActor **)param_1.Class.field0_0x0;
    }
  }
  pAVar10 = GetDefault<AActor>((UClass *)pAVar10);
  if (pAVar10 == (AActor *)0x0) {
LAB_148354458:
    if ((local_1a8 != (AActor *)0x0) && (pAStack_1a0 != (AActor *)0x0)) goto LAB_1483547af;
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pAVar10);
    }
    pUVar9 = Z_Construct_UClass_UCameraLensEffectInterface_NoRegister();
    plVar11 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pAVar10,pUVar9);
    Z_Construct_UClass_AActor_NoRegister();
    if ((plVar11 == (longlong *)0x0) ||
       (cVar6 = (**(code **)(*plVar11 + 0x30))(plVar11), cVar6 != '\0')) goto LAB_148354458;
    local_198 = *(UObject **)param_1.Class.field0_0x0;
    pcVar4 = *(code **)(this->_padding_ + 0x8a8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_198 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_198);
    }
    plVar11 = (longlong *)(*pcVar4)(this,local_160,&local_198);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UObject *)*plVar11 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)*plVar11);
    }
    local_1a8 = (AActor *)*plVar11;
    pAStack_1a0 = (AActor *)plVar11[1];
    if (local_1a8 != (AActor *)0x0) {
      if (pAStack_1a0 != (AActor *)0x0) {
        (**(code **)(pAStack_1a0->_padding_ + 0x58))();
      }
      goto LAB_148354458;
    }
  }
  FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_118);
  local_118._16_8_ = (**(code **)(((this->PCOwner).field0_0x0.DebugPtr)->_padding_ + 0x7e0))();
  local_118._24_8_ = AActor::GetInstigator((AActor *)this);
  local_118._52_4_ = local_118._52_4_ | RF_Transient;
  local_118[0x32] = local_118[0x32] | 4;
  lVar3 = *(longlong *)param_1.Class.field0_0x0;
  local_118[0x30] = AlwaysSpawn;
  pAVar10 = pAVar14;
  if ((lVar3 != 0) && (pUVar9 = Z_Construct_UClass_AActor_NoRegister(), pUVar9 != (UClass *)0x0)) {
    iVar8 = (int)pUVar9->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar8) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar8 * 8) !=
        &pUVar9->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      pAVar10 = *(AActor **)param_1.Class.field0_0x0;
    }
  }
  if ((pAVar10->ReplicatedMovement).Location.field0_0x0._s_0.Z == 0.0) {
    UClass::InternalCreateDefaultObjectWrapper((UClass *)pAVar10);
  }
  pAVar10 = *(AActor **)((longlong)&(pAVar10->ReplicatedMovement).Location.field0_0x0 + 0x10);
  pUVar9 = Z_Construct_UClass_AActor_NoRegister();
  lVar3 = pAVar10->_padding_;
  pwVar16 = L"";
  iVar8 = (int)pUVar9->_padding_;
  if (((*(int *)(lVar3 + 0x38) < iVar8) ||
      ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar8 * 8) !=
       &pUVar9->_padding_)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ret->IsA(T::StaticClass())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0x1181,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pTVar12 = (TScriptInterface<ICameraLensEffectInterface> *)(*pcVar4)();
    return pTVar12;
  }
  (**(code **)(this->_padding_ + 0x838))(this,&local_178,&local_190);
  fVar17 = (float)(**(code **)(this->_padding_ + 0x800))(this);
  ICameraLensEffectInterface::GetAttachedEmitterTransform
            (&local_a8,pAVar10,&local_178,&local_190,fVar17);
  this_00 = AActor::GetWorld((AActor *)this);
  lVar3 = *(longlong *)param_1.Class.field0_0x0;
  pAVar10 = pAVar14;
  if ((lVar3 != 0) && (pUVar9 = Z_Construct_UClass_AActor_NoRegister(), pUVar9 != (UClass *)0x0)) {
    iVar8 = (int)pUVar9->_padding_;
    if ((*(int *)(lVar3 + 0x38) < iVar8) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar8 * 8) !=
        &pUVar9->_padding_)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (bVar7) {
      pAVar10 = *(AActor **)param_1.Class.field0_0x0;
    }
  }
  this_01 = UWorld::SpawnActor(this_00,(UClass *)pAVar10,&local_a8,
                               (FActorSpawnParameters *)local_118);
  pAVar10 = pAVar14;
  if (this_01 != (AActor *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_01);
    }
    pUVar9 = Z_Construct_UClass_UCameraLensEffectInterface_NoRegister();
    pAVar10 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_01,pUVar9);
    pAVar14 = this_01;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pAVar14 == (AActor *)0x0)) {
    local_1a8 = pAVar14;
    pAStack_1a0 = pAVar10;
    if (pAVar14 != (AActor *)0x0) goto LAB_148354656;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pAVar14);
LAB_148354656:
    local_1a8 = pAVar14;
    pAStack_1a0 = pAVar10;
    if (pAVar10 != (AActor *)0x0) {
      (**(code **)(pAVar10->_padding_ + 0x50))(pAVar10,this);
      pTVar2 = &this->CameraLensEffects;
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_1a8) &&
          ((FScriptContainerElement *)&local_1a8 <
           pFVar5 + (longlong)(this->CameraLensEffects).ArrayMax * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        pTVar12 = (TScriptInterface<ICameraLensEffectInterface> *)(*pcVar4)();
        return pTVar12;
      }
      iVar8 = (this->CameraLensEffects).ArrayNum;
      piVar1 = &(this->CameraLensEffects).ArrayMax;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->CameraLensEffects).ArrayNum = iVar8 + 1;
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      *(AActor **)(pFVar5 + (longlong)iVar8 * 0x10) = local_1a8;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1a8 != (AActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_1a8);
      }
      pAVar10 = local_1a8;
      *(AActor **)(pFVar5 + (longlong)iVar8 * 0x10 + 8) = pAStack_1a0;
      if (local_1a8 == (AActor *)0x0) {
        pFVar13 = GetTypeName<AActor>(&local_130);
        if ((pFVar13->Data).ArrayNum != 0) {
          pwVar16 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar16);
      }
      pUVar9 = Z_Construct_UClass_AActor_NoRegister();
      iVar8 = (int)pUVar9->_padding_;
      if ((*(int *)(pAVar10->_padding_ + 0x38) < iVar8) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pAVar10->_padding_ + 0x30) + (longlong)iVar8 * 8) !=
          &pUVar9->_padding_)) {
        pFVar13 = GetTypeName<AActor>(&local_150);
        if ((pFVar13->Data).ArrayNum == 0) {
          pwVar15 = L"";
        }
        else {
          pwVar15 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
        }
        pFVar13 = GetFullNameForCastLogError<UObject>(&local_140,(UObject *)pAVar10);
        if ((pFVar13->Data).ArrayNum != 0) {
          pwVar16 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar16,pwVar15);
      }
      AActor::FinishSpawning
                (pAVar10,&local_a8,true,(FComponentInstanceDataCache *)0x0,OverrideRootScale);
    }
  }
  if (local_118._64_8_ != 0) {
    plVar11 = (longlong *)(local_118 + 0x50);
    if ((longlong *)local_118._104_8_ != (longlong *)0x0) {
      plVar11 = (longlong *)local_118._104_8_;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
LAB_1483547af:
  *(AActor **)__return_storage_ptr__ = local_1a8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_1a8 != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_1a8);
  }
  *(AActor **)&__return_storage_ptr__->field_0x8 = pAStack_1a0;
  return __return_storage_ptr__;
}

// AddNewCameraModifier @ 148354e10

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

UCameraModifier * __thiscall
APlayerCameraManager::AddNewCameraModifier
          (APlayerCameraManager *this,TSubclassOf<UCameraModifier> param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  FName FVar4;
  FName FVar5;
  char cVar6;
  UClass *pUVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  longlong *plVar10;
  undefined1 auStack_d8 [32];
  FName local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  pUVar9 = (UClass *)0x0;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  pUVar8 = pUVar9;
  if ((lVar2 != 0) &&
     (pUVar7 = Z_Construct_UClass_UCameraModifier_NoRegister(), pUVar7 != (UClass *)0x0)) {
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      pUVar8 = *(UClass **)param_1.Class.field0_0x0;
    }
  }
  FVar4 = local_b8;
  if (local_b8 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)this,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar7 = Z_Construct_UClass_UCameraModifier_NoRegister();
  CheckIsClassChildOf_Internal(pUVar7,pUVar8);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar8);
  FVar5 = local_b8;
  local_a8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_a8._56_8_ = (UPackage *)0x0;
  local_b8.ComparisonIndex = FVar4.ComparisonIndex.Value;
  local_b8.Number = FVar4.Number;
  local_a8._16_4_ = local_b8.ComparisonIndex.Value;
  local_a8._20_4_ = local_b8.Number;
  local_a8._24_4_ = RF_NoFlags;
  local_a8._40_8_ = (UObject *)0x0;
  local_a8[0x20] = false;
  local_b8 = FVar5;
  local_a8._8_8_ = this;
  pUVar8 = (UClass *)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar10 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar10 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if (pUVar8 == (UClass *)0x0) {
    pUVar9 = (UClass *)0x0;
  }
  else {
    cVar6 = (**(code **)(this->_padding_ + 0x7e0))(this,pUVar8);
    if (cVar6 == '\x01') {
      pUVar9 = pUVar8;
    }
  }
  return (UCameraModifier *)pUVar9;
}

// AllowPhotographyMode @ 148357760

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall APlayerCameraManager::AllowPhotographyMode(APlayerCameraManager *this)

{
  return true;
}

// ApplyAudioFade @ 1483578e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall APlayerCameraManager::ApplyAudioFade(APlayerCameraManager *this)

{
  int iVar1;
  UWorld *this_00;
  FAudioDevice *this_01;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnAudioFadeChangeEvent
             ,&local_28);
  iVar1 = *(int *)&(this->OnAudioFadeChangeEvent).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if ((iVar1 < 1) && (GEngine != (UEngine *)0x0)) {
    this_00 = AActor::GetWorld((AActor *)this);
    if (this_00 != (UWorld *)0x0) {
      this_01 = UWorld::GetAudioDeviceRaw(this_00);
      if (this_01 != (FAudioDevice *)0x0) {
        FAudioDevice::SetTransientPrimaryVolume(this_01,__real_3f800000 - this->FadeAmount);
      }
    }
  }
  return;
}

// ApplyCameraModifiers @ 148357960

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
APlayerCameraManager::ApplyCameraModifiers
          (APlayerCameraManager *this,float param_1,FMinimalViewInfo *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ForAnyElementType local_38;
  int local_30;
  int local_2c [5];
  
  DestructItems<FPostProcessSettings,int>
            ((FPostProcessSettings *)(this->PostProcessBlendCache).AllocatorInstance.Data,
             (this->PostProcessBlendCache).ArrayNum);
  uVar10 = 0;
  piVar1 = &(this->PostProcessBlendCache).ArrayMax;
  (this->PostProcessBlendCache).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x770,0x10,0,&(this->PostProcessBlendCache).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->PostProcessBlendCacheWeights).ArrayMax;
  (this->PostProcessBlendCacheWeights).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PostProcessBlendCacheWeights).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->PostProcessBlendCacheOrders).ArrayMax;
  (this->PostProcessBlendCacheOrders).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PostProcessBlendCacheOrders).AllocatorInstance,0,piVar1);
  }
  iVar8 = (this->ModifierList).ArrayNum;
  pFVar2 = (this->ModifierList).AllocatorInstance.Data;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = iVar8;
  if (iVar8 == 0) {
    local_2c[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar8,0,&local_38,iVar8,local_2c);
    ConstructItems<TObjectPtr<UCameraModifier>,TObjectPtr<UCameraModifier>,int>
              (local_38.Data,(TObjectPtr<UCameraModifier> *)pFVar2,iVar8);
  }
  uVar11 = uVar10;
  iVar8 = local_30;
  if (0 < local_30) {
    do {
      uVar9 = (uint)uVar10;
      uVar7 = 0;
      if ((int)uVar9 < iVar8) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         iVar8 = local_30, bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      plVar3 = *(longlong **)(local_38.Data + uVar11);
      if (((plVar3 != (longlong *)0x0) &&
          (cVar6 = (**(code **)(*plVar3 + 0x2d8))(plVar3), iVar8 = local_30, cVar6 == '\0')) &&
         (cVar6 = (**(code **)(*plVar3 + 0x2d0))(plVar3,param_1,param_2), iVar8 = local_30,
         cVar6 != '\0')) break;
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar11 = uVar11 + 8;
    } while ((int)(uVar9 + 1) < iVar8);
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  return;
}

// ApplyWorldOffset @ 148358790

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
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

void __thiscall
APlayerCameraManager::ApplyWorldOffset
          (APlayerCameraManager *this,TVector<double> *param_1,bool param_2)

{
  double dVar1;
  double dVar2;
  FMinimalViewInfo *pFVar3;
  undefined1 auStack_11d8 [32];
  TVector<double>_u_0 local_11b8 [83];
  void *local_9e0;
  TVector<double>_u_0 local_8e8 [83];
  void *local_110;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x1483587a0;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_11d8;
  AActor::ApplyWorldOffset((AActor *)this,param_1,param_2);
  pFVar3 = (FMinimalViewInfo *)(**(code **)(this->_padding_ + 0x798))(this);
  FMinimalViewInfo::FMinimalViewInfo((FMinimalViewInfo *)&local_8e8[0]._s_0,pFVar3);
  local_8e8[0]._0_8_ = (double)local_8e8[0]._0_8_ + (param_1->field0_0x0)._s_0.X;
  local_8e8[0]._8_8_ = (double)local_8e8[0]._8_8_ + (param_1->field0_0x0)._s_0.Y;
  local_8e8[0]._16_8_ = (double)local_8e8[0]._16_8_ + (param_1->field0_0x0)._s_0.Z;
  (**(code **)(this->_padding_ + 0x788))(this,local_8e8);
  pFVar3 = (FMinimalViewInfo *)(**(code **)(this->_padding_ + 0x7a0))(this);
  FMinimalViewInfo::FMinimalViewInfo((FMinimalViewInfo *)&local_11b8[0]._s_0,pFVar3);
  local_11b8[0]._0_8_ = (double)local_11b8[0]._0_8_ + (param_1->field0_0x0)._s_0.X;
  local_11b8[0]._8_8_ = (double)local_11b8[0]._8_8_ + (param_1->field0_0x0)._s_0.Y;
  local_11b8[0]._16_8_ = (double)local_11b8[0]._16_8_ + (param_1->field0_0x0)._s_0.Z;
  (**(code **)(this->_padding_ + 0x790))(this,local_11b8);
  dVar1 = (this->ViewTarget).POV.Location.field0_0x0._s_0.Y;
  (this->ViewTarget).POV.Location.field0_0x0._s_0.X =
       (param_1->field0_0x0)._s_0.X + (this->ViewTarget).POV.Location.field0_0x0._s_0.X;
  dVar2 = (this->ViewTarget).POV.Location.field0_0x0._s_0.Z;
  (this->ViewTarget).POV.Location.field0_0x0._s_0.Y = dVar1 + (param_1->field0_0x0)._s_0.Y;
  (this->ViewTarget).POV.Location.field0_0x0._s_0.Z = dVar2 + (param_1->field0_0x0)._s_0.Z;
  dVar1 = (this->PendingViewTarget).POV.Location.field0_0x0._s_0.Y;
  (this->PendingViewTarget).POV.Location.field0_0x0._s_0.X =
       (param_1->field0_0x0)._s_0.X + (this->PendingViewTarget).POV.Location.field0_0x0._s_0.X;
  dVar2 = (this->PendingViewTarget).POV.Location.field0_0x0._s_0.Z;
  (this->PendingViewTarget).POV.Location.field0_0x0._s_0.Y = dVar1 + (param_1->field0_0x0)._s_0.Y;
  (this->PendingViewTarget).POV.Location.field0_0x0._s_0.Z = dVar2 + (param_1->field0_0x0)._s_0.Z;
  if (local_9e0 != (void *)0x0) {
    FMemory::Free(local_9e0);
  }
  if (local_110 != (void *)0x0) {
    FMemory::Free(local_110);
  }
  return;
}

// AssignViewTarget @ 148358ca0

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
APlayerCameraManager::AssignViewTarget
          (APlayerCameraManager *this,AActor *param_1,FTViewTarget *param_2,
          FViewTargetTransitionParams *param_3)

{
  undefined1 *puVar1;
  AActor *pAVar2;
  AActor *pAVar3;
  APlayerController *pAVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  bool bVar10;
  ENetMode EVar11;
  uint uVar12;
  UFunction *pUVar13;
  FGameDelegates *pFVar14;
  uint uVar15;
  longlong lVar16;
  FDestructionSentinel local_58;
  TObjectPtr<AActor>_u_0 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if ((param_1 != (AActor *)0x0) &&
     (((pAVar2 = (param_2->Target).field0_0x0.DebugPtr, pAVar2 == (AActor *)0x0 ||
       (pAVar2 != param_1)) ||
      (((this->PendingViewTarget).Target.field0_0x0.DebugPtr != (AActor *)0x0 &&
       ((this->BlendParams).bLockOutgoing != 0)))))) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (param_2->Target).field0_0x0.DebugPtr = param_1;
    (param_2->POV).AspectRatio = this->DefaultAspectRatio;
    puVar1 = &(param_2->POV).field_0x68;
    *(uint *)puVar1 =
         *(uint *)puVar1 ^
         (this->bDefaultConstrainAspectRatio ^ (param_2->POV).bConstrainAspectRatio) & 1;
    (param_2->POV).FOV = this->DefaultFOV;
    if (pAVar2 != (AActor *)0x0) {
      (**(code **)(pAVar2->_padding_ + 0x6d0))(pAVar2,(this->PCOwner).field0_0x0.DebugPtr);
    }
    pAVar3 = (param_2->Target).field0_0x0.DebugPtr;
    (**(code **)(pAVar3->_padding_ + 0x6c8))(pAVar3,(this->PCOwner).field0_0x0.DebugPtr);
    pAVar4 = (this->PCOwner).field0_0x0.DebugPtr;
    if ((((pAVar4->_padding_ & 2) == 0) ||
        (cVar9 = (**(code **)(pAVar4->_padding_ + 0x7f0))(), cVar9 == '\0')) &&
       (EVar11 = AActor::InternalGetNetMode((AActor *)this), EVar11 != NM_Client)) {
      local_38._0_4_ = param_3->BlendTime;
      local_38._4_1_ = param_3->BlendFunction;
      local_38._5_3_ = *(undefined3 *)&param_3->field_0x5;
      uStack_30 = *(undefined8 *)&param_3->BlendExp;
      pAVar4 = (this->PCOwner).field0_0x0.DebugPtr;
      local_40 = (param_2->Target).field0_0x0;
      pUVar13 = UObject::FindFunctionChecked
                          ((UObject *)pAVar4,NAME_APlayerController_ClientSetViewTarget);
      (**(code **)(pAVar4->_padding_ + 0x260))(pAVar4,pUVar13,&local_40);
    }
    pFVar14 = FGameDelegates::Get();
    pAVar4 = (this->PCOwner).field0_0x0.DebugPtr;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &pFVar14->ViewTargetChangedDelegate,(FWriteAccessScope *)&local_58);
    puVar1 = &(pFVar14->ViewTargetChangedDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + 1;
    bVar8 = false;
    uVar15 = *(int *)&(pFVar14->ViewTargetChangedDelegate).field_0x10 - 1;
    if (-1 < (int)uVar15) {
      lVar16 = (longlong)(int)uVar15 << 4;
      bVar8 = false;
      do {
        uVar12 = 0;
        if ((int)uVar15 < *(int *)&(pFVar14->ViewTargetChangedDelegate).field_0x10) {
          uVar12 = ~uVar15 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar5 = *(longlong *)&(pFVar14->ViewTargetChangedDelegate).field_0x8;
        if (((*(int *)(lVar16 + 8 + lVar5) == 0) ||
            (plVar6 = *(longlong **)(lVar16 + lVar5), plVar6 == (longlong *)0x0)) ||
           (cVar9 = (**(code **)(*plVar6 + 0x68))(plVar6,pAVar4,pAVar2,param_1), cVar9 == '\0')) {
          bVar8 = true;
        }
        lVar16 = lVar16 + -0x10;
        uVar15 = uVar15 - 1;
      } while (-1 < (int)uVar15);
    }
    puVar1 = &(pFVar14->ViewTargetChangedDelegate).field_0x1c;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (bVar8) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &pFVar14->ViewTargetChangedDelegate,false);
    }
    if (local_58.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_58.Accessor,&local_58);
    }
  }
  return;
}

// BlendViewTargets @ 14835dae0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FPOV * __thiscall
APlayerCameraManager::BlendViewTargets
          (APlayerCameraManager *this,FPOV *__return_storage_ptr__,FTViewTarget *param_1,
          FTViewTarget *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [12];
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar15;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  double dVar24;
  undefined1 auVar23 [16];
  double dVar25;
  double dVar27;
  undefined1 auVar26 [16];
  
  (__return_storage_ptr__->Location).field0_0x0._s_0.X = 0.0;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Y = 0.0;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Z = 0.0;
  (__return_storage_ptr__->Rotation).Pitch = 0.0;
  (__return_storage_ptr__->Rotation).Yaw = 0.0;
  (__return_storage_ptr__->Rotation).Roll = 0.0;
  __return_storage_ptr__->FOV = 90.0;
  dVar1 = (param_2->POV).Location.field0_0x0._s_0.Y;
  dVar2 = (param_1->POV).Location.field0_0x0._s_0.Y;
  dVar3 = (param_2->POV).Location.field0_0x0._s_0.Z;
  dVar15 = (param_1->POV).Location.field0_0x0._s_0.Z;
  dVar4 = (double)param_3;
  dVar22 = (param_1->POV).Location.field0_0x0._s_0.Z;
  dVar24 = (param_1->POV).Location.field0_0x0._s_0.Y;
  (__return_storage_ptr__->Location).field0_0x0._s_0.X =
       ((param_2->POV).Location.field0_0x0._s_0.X - (param_1->POV).Location.field0_0x0._s_0.X) *
       dVar4 + (param_1->POV).Location.field0_0x0._s_0.X;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Y = (dVar1 - dVar2) * dVar4 + dVar24;
  (__return_storage_ptr__->Location).field0_0x0._s_0.Z = (dVar3 - dVar15) * dVar4 + dVar22;
  __return_storage_ptr__->FOV =
       ((param_2->POV).FOV - (param_1->POV).FOV) * param_3 + (param_1->POV).FOV;
  auVar11._0_8_ = (param_2->POV).Rotation.Roll - (param_1->POV).Rotation.Roll;
  dVar22 = (param_2->POV).Rotation.Pitch - (param_1->POV).Rotation.Pitch;
  auVar16._0_8_ = (param_2->POV).Rotation.Yaw - (param_1->POV).Rotation.Yaw;
  auVar16._8_8_ = 0;
  auVar10._8_4_ = SUB84(auVar16._0_8_,0);
  auVar10._0_8_ = dVar22;
  auVar10._12_4_ = (int)((ulonglong)auVar16._0_8_ >> 0x20);
  auVar10 = divpd(auVar10,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
  auVar17 = roundpd(auVar16,auVar10,3);
  auVar11._8_8_ = 0;
  auVar10 = divpd(auVar11,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
  dVar1 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
  auVar18._0_8_ = auVar17._0_8_ * dVar1;
  dVar2 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
  auVar18._8_8_ = auVar17._8_8_ * dVar2;
  dVar22 = dVar22 - auVar18._0_8_;
  dVar24 = auVar16._0_8_ - auVar18._8_8_;
  auVar10 = roundpd(auVar18,auVar10,3);
  dVar3 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
  auVar17._8_4_ = SUB84(dVar24,0);
  auVar17._0_8_ = dVar22;
  auVar17._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
  dVar25 = auVar11._0_8_ - auVar10._0_8_ * dVar3;
  dVar27 = 0.0 - auVar10._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  dVar15 = auVar17._8_8_ + dVar2;
  uVar6 = -(ulonglong)(0.0 <= dVar25);
  uVar8 = -(ulonglong)(0.0 <= dVar27);
  uVar7 = -(ulonglong)(0.0 <= dVar22);
  uVar9 = -(ulonglong)(0.0 <= dVar24);
  auVar19._0_8_ = uVar7 & (ulonglong)dVar22;
  auVar19._8_4_ = (undefined4)(uVar9 & (ulonglong)dVar24);
  auVar19._12_4_ = (undefined4)((uVar9 & (ulonglong)dVar24) >> 0x20);
  auVar21._0_4_ = ~(uint)uVar7 & SUB84(dVar22 + dVar1,0);
  auVar21._4_4_ = ~(uint)(uVar7 >> 0x20) & (uint)((ulonglong)(dVar22 + dVar1) >> 0x20);
  auVar21._8_4_ = ~(uint)uVar9 & SUB84(dVar15,0);
  auVar21._12_4_ = ~(uint)(uVar9 >> 0x20) & (uint)((ulonglong)dVar15 >> 0x20);
  auVar20._0_8_ = uVar6 & (ulonglong)dVar25;
  auVar20._8_4_ = (undefined4)(uVar8 & (ulonglong)dVar27);
  auVar20._12_4_ = (undefined4)((uVar8 & (ulonglong)dVar27) >> 0x20);
  auVar12._8_4_ = SUB84(dVar27,0);
  auVar12._0_8_ = dVar25;
  auVar12._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
  auVar21 = auVar21 | auVar19;
  dVar15 = auVar12._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
  auVar23._0_4_ = ~(uint)uVar6 & SUB84(dVar25 + dVar3,0);
  auVar23._4_4_ = ~(uint)(uVar6 >> 0x20) & (uint)((ulonglong)(dVar25 + dVar3) >> 0x20);
  auVar23._8_4_ = ~(uint)uVar8 & SUB84(dVar15,0);
  auVar23._12_4_ = ~(uint)(uVar8 >> 0x20) & (uint)((ulonglong)dVar15 >> 0x20);
  auVar23 = auVar23 | auVar20;
  uVar7 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar21._0_8_);
  uVar8 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar21._8_8_);
  auVar26._0_8_ = uVar7 & (ulonglong)(auVar21._0_8_ - dVar1);
  uVar6 = uVar8 & (ulonglong)(auVar21._8_8_ - dVar2);
  auVar26._8_4_ = (undefined4)uVar6;
  auVar26._12_4_ = (undefined4)(uVar6 >> 0x20);
  uVar6 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar23._0_8_);
  auVar13._0_4_ = ~(uint)uVar7 & auVar21._0_4_;
  auVar13._4_4_ = ~(uint)(uVar7 >> 0x20) & auVar21._4_4_;
  auVar13._8_4_ = ~(uint)uVar8 & auVar21._8_4_;
  auVar13._12_4_ = ~(uint)(uVar8 >> 0x20) & auVar21._12_4_;
  auVar26 = auVar26 | auVar13;
  auVar5._4_8_ = auVar13._8_8_;
  auVar5._0_4_ = auVar26._4_4_;
  auVar14._0_8_ = auVar5._0_8_ << 0x20;
  auVar14._8_4_ = auVar26._8_4_;
  auVar14._12_4_ = auVar26._12_4_;
  dVar1 = (param_1->POV).Rotation.Yaw;
  dVar2 = (param_1->POV).Rotation.Roll;
  (__return_storage_ptr__->Rotation).Pitch = dVar4 * auVar26._0_8_ + (param_1->POV).Rotation.Pitch;
  (__return_storage_ptr__->Rotation).Yaw = dVar4 * auVar14._8_8_ + dVar1;
  (__return_storage_ptr__->Rotation).Roll =
       dVar4 * (double)(uVar6 & (ulonglong)(auVar23._0_8_ - dVar3) |
                       CONCAT44(~(uint)(uVar6 >> 0x20) & auVar23._4_4_,~(uint)uVar6 & auVar23._0_4_)
                       ) + dVar2;
  return __return_storage_ptr__;
}

// BlueprintUpdateCamera @ 14835dcd0

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
APlayerCameraManager::BlueprintUpdateCamera
          (APlayerCameraManager *this,AActor *param_1,TVector<double> *param_2,
          TRotator<double> *param_3,float *param_4)

{
  UFunction *pUVar1;
  AActor *local_48;
  double local_40;
  double dStack_38;
  double local_30;
  double local_28;
  double dStack_20;
  double local_18;
  float local_10;
  char local_c;
  
  local_40 = (param_2->field0_0x0)._s_0.X;
  dStack_38 = (param_2->field0_0x0)._s_0.Y;
  local_30 = (param_2->field0_0x0)._s_0.Z;
  local_28 = param_3->Pitch;
  dStack_20 = param_3->Yaw;
  local_18 = param_3->Roll;
  local_10 = *param_4;
  local_c = '\0';
  local_48 = param_1;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_APlayerCameraManager_BlueprintUpdateCamera);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_48);
  (param_2->field0_0x0)._s_0.X = local_40;
  (param_2->field0_0x0)._s_0.Y = dStack_38;
  (param_2->field0_0x0)._s_0.Z = local_30;
  param_3->Pitch = local_28;
  param_3->Yaw = dStack_20;
  param_3->Roll = local_18;
  *param_4 = local_10;
  return local_c != '\0';
}

// CalcRadialShakeScale @ 1483623c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

float __cdecl
APlayerCameraManager::CalcRadialShakeScale
          (APlayerCameraManager *param_1,TVector<double> *param_2,float param_3,float param_4,
          float param_5)

{
  undefined1 auVar1 [16];
  float fVar2;
  double local_48;
  double local_40;
  double local_38;
  
  (**(code **)(param_1->_padding_ + 0x848))(param_1,&local_48);
  local_48 = (param_2->field0_0x0)._s_0.X - local_48;
  local_40 = (param_2->field0_0x0)._s_0.Y - local_40;
  local_38 = (param_2->field0_0x0)._s_0.Z - local_38;
  auVar1._0_8_ = local_40 * local_40 + local_48 * local_48 + local_38 * local_38;
  auVar1._8_8_ = 0;
  if (param_3 < param_4) {
    auVar1 = sqrtpd(auVar1,auVar1);
    fVar2 = (float)((auVar1._0_8_ - (double)param_3) / (double)(param_4 - param_3));
    if (__real_3f800000 <= fVar2) {
      fVar2 = __real_3f800000;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    fVar2 = powf(__real_3f800000 - fVar2,param_5);
    return fVar2;
  }
  if (auVar1._0_8_ < (double)(param_3 * param_3)) {
    return __real_3f800000;
  }
  return 0.0;
}

// CleanUpAnimCamera @ 1483632c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall APlayerCameraManager::CleanUpAnimCamera(APlayerCameraManager *this,bool param_1)

{
  ACameraActor *pAVar1;
  
  pAVar1 = (this->AnimCameraActor).field0_0x0.DebugPtr;
  if (pAVar1 != (ACameraActor *)0x0) {
    if (param_1) {
      AActor::Destroy((AActor *)pAVar1,false,true);
    }
    pAVar1 = (this->AnimCameraActor).field0_0x0.DebugPtr;
    (**(code **)(pAVar1->_padding_ + 0x500))(pAVar1,0);
    (this->AnimCameraActor).field0_0x0.DebugPtr = (ACameraActor *)0x0;
  }
  return;
}

// ClearCachedPPBlends @ 148363640

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall APlayerCameraManager::ClearCachedPPBlends(APlayerCameraManager *this)

{
  int *piVar1;
  
  DestructItems<FPostProcessSettings,int>
            ((FPostProcessSettings *)(this->PostProcessBlendCache).AllocatorInstance.Data,
             (this->PostProcessBlendCache).ArrayNum);
  piVar1 = &(this->PostProcessBlendCache).ArrayMax;
  (this->PostProcessBlendCache).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x770,0x10,0,&(this->PostProcessBlendCache).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->PostProcessBlendCacheWeights).ArrayMax;
  (this->PostProcessBlendCacheWeights).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PostProcessBlendCacheWeights).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->PostProcessBlendCacheOrders).ArrayMax;
  (this->PostProcessBlendCacheOrders).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->PostProcessBlendCacheOrders).AllocatorInstance,0,piVar1);
  }
  return;
}

// ClearCameraLensEffects @ 148363710

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall APlayerCameraManager::ClearCameraLensEffects(APlayerCameraManager *this)

{
  int iVar1;
  AActor *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UClass *pUVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  if (0 < (this->CameraLensEffects).ArrayNum) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->CameraLensEffects).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = *(AActor **)((this->CameraLensEffects).AllocatorInstance.Data + lVar7);
      if (this_00 != (AActor *)0x0) {
        pUVar5 = Z_Construct_UClass_AActor_NoRegister();
        iVar1 = (int)pUVar5->_padding_;
        if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
            &pUVar5->_padding_)) {
          AActor::Destroy(this_00,false,true);
        }
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x10;
    } while ((int)uVar6 < (this->CameraLensEffects).ArrayNum);
  }
  (this->CameraLensEffects).ArrayNum = 0;
  if ((this->CameraLensEffects).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->CameraLensEffects).AllocatorInstance,0,
               &(this->CameraLensEffects).ArrayMax);
  }
  return;
}

// Destroyed @ 14836b0f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall APlayerCameraManager::Destroyed(APlayerCameraManager *this)

{
  (**(code **)(this->_padding_ + 0x7e8))(this,1);
  AActor::Destroyed((AActor *)this);
  return;
}

// DisplayDebug @ 14836b5a0

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
APlayerCameraManager::DisplayDebug
          (APlayerCameraManager *this,UCanvas *param_1,FDebugDisplayInfo *param_2,float *param_3,
          float *param_4)

{
  FScriptContainerElement *pFVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  AActor *pAVar6;
  longlong *plVar7;
  float fVar8;
  char cVar9;
  TVector<double> *this_00;
  FColor *pFVar10;
  FScriptContainerElement *pFVar11;
  FDisplayDebugManager *this_01;
  FName local_res8;
  UCanvas *local_res10;
  FDebugDisplayInfo *local_res18;
  float *local_res20;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78 [3];
  
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  this_00 = (TVector<double> *)(**(code **)(this->_padding_ + 0x798))();
  this_01 = &param_1->DisplayDebugManager;
  *(undefined4 *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = 0x3f800000;
  *(undefined4 *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
       0x3f800000;
  *(undefined4 *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = 0x3f800000;
  *(undefined4 *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
       0x3f800000;
  local_res8 = (FName)((ulonglong)local_res8.Number << 0x20);
  local_b8.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)((this->ViewTarget).Target.field0_0x0.DebugPtr)->_padding_;
  ::FName::ToString((FName *)&local_b8,&local_a8);
  ::FName::ToString(&this->CameraStyle,local_78);
  ::FString::PrintfImpl(&local_98,L"   Camera Style:%s main ViewTarget:%s");
  FDisplayDebugManager::DrawString(this_01,&local_98,(float *)&local_res8);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
  }
  if ((FName)local_a8.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  pAVar6 = (this->PendingViewTarget).Target.field0_0x0.DebugPtr;
  if (pAVar6 != (AActor *)0x0) {
    local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
    local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)pAVar6->_padding_;
    ::FName::ToString((FName *)&local_b8,&local_a8);
    ::FString::PrintfImpl(&local_98,L"   PendingViewTarget:%s");
    FDisplayDebugManager::DrawString(this_01,&local_98,(float *)&local_res8);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if ((FName)local_a8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  UE::Math::TRotator<double>::ToCompactString((TRotator<double> *)(this_00 + 1),&local_a8);
  UE::Math::TVector<double>::ToCompactString(this_00,local_78);
  ::FString::PrintfImpl(&local_98,L"   CamLoc:%s CamRot:%s FOV:%f");
  FDisplayDebugManager::DrawString(this_01,&local_98,(float *)&local_res8);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
  }
  if ((FName)local_a8.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  ::FString::PrintfImpl(&local_98,L"   AspectRatio: %1.3f");
  FDisplayDebugManager::DrawString(this_01,&local_98,(float *)&local_res8);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  pAVar6 = (this->PendingViewTarget).Target.field0_0x0.DebugPtr;
  if (pAVar6 == (AActor *)0x0) {
    ::FString::FString(&local_b8,L"None");
  }
  else {
    local_res8 = (FName)pAVar6->_padding_;
    ::FName::ToString(&local_res8,&local_b8);
  }
  pAVar6 = (this->ViewTarget).Target.field0_0x0.DebugPtr;
  if (pAVar6 == (AActor *)0x0) {
    ::FString::FString(&local_a8,L"None");
  }
  else {
    local_res8 = (FName)pAVar6->_padding_;
    ::FName::ToString(&local_res8,&local_a8);
  }
  ::FString::PrintfImpl
            (&local_88,L"   ViewTarget Blend: From %s to %s, time remaining = %f, pct = %f");
  if ((FName)local_a8.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if ((FName)local_b8.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  FDisplayDebugManager::DrawString(this_01,&local_88,(float *)&local_res8);
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  ::FString::FString(&local_98,L"Modifiers:");
  FDisplayDebugManager::DrawString(this_01,&local_98,(float *)&local_res8);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  fVar8 = __real_3b808081;
  pFVar11 = (this->ModifierList).AllocatorInstance.Data;
  iVar5 = (this->ModifierList).ArrayNum;
  local_b8.Data.AllocatorInstance.Data._0_4_ = 0xff949494;
  pFVar1 = pFVar11 + (longlong)iVar5 * 8;
  while( true ) {
    if ((this->ModifierList).ArrayNum != iVar5) {
      `TCheckedPointerIterator<TObjectPtr<UCameraModifier>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (pFVar11 == pFVar1) break;
    plVar7 = *(longlong **)pFVar11;
    cVar9 = (**(code **)(*plVar7 + 0x2d8))(plVar7);
    pFVar10 = (FColor *)&local_b8;
    if (cVar9 == '\0') {
      pFVar10 = &FColor::Green;
    }
    bVar2 = (((FColor_u_0 *)&((FString *)pFVar10)->Data)->_s_0).G;
    bVar3 = (((FColor_u_0 *)&((FString *)pFVar10)->Data)->_s_0).B;
    bVar4 = (((FColor_u_0 *)&((FString *)pFVar10)->Data)->_s_0).A;
    *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ =
         (float)(((FColor_u_0 *)&((FString *)pFVar10)->Data)->_s_0).R * fVar8;
    *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
         (float)bVar2 * fVar8;
    *(float *)&(param_1->DisplayDebugManager).DebugTextItem._padding_ = (float)bVar3 * fVar8;
    *(float *)((longlong)&(param_1->DisplayDebugManager).DebugTextItem._padding_ + 4) =
         (float)bVar4 * fVar8;
    local_a8.Data.AllocatorInstance.Data = *(FScriptContainerElement **)(plVar7 + 3);
    local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
    ::FName::ToString((FName *)&local_a8,&local_98);
    FDisplayDebugManager::DrawString(this_01,&local_98,(float *)&local_res8);
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    (**(code **)(*plVar7 + 0x2b8))(plVar7,local_res10,local_res18,local_res20,param_4);
    pFVar11 = pFVar11 + 8;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return;
}

// DoUpdateCamera @ 14836cc40

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

void __thiscall APlayerCameraManager::DoUpdateCamera(APlayerCameraManager *this,float param_1)

{
  FTViewTarget *this_00;
  FTViewTarget *this_01;
  undefined1 *puVar1;
  float fVar2;
  double dVar3;
  int iVar4;
  APlayerController *pAVar5;
  longlong lVar6;
  longlong *plVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  bool bVar15;
  char cVar16;
  uint uVar17;
  UWorld *pUVar18;
  undefined8 uVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  undefined4 in_XMM1_Db;
  double dVar24;
  float fVar25;
  double dVar26;
  float fVar27;
  undefined1 auStack_998 [32];
  longlong local_978;
  longlong local_970;
  FDestructionSentinel local_968;
  FMinimalViewInfo local_948;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStack_998;
  this_00 = &this->ViewTarget;
  FMinimalViewInfo::FMinimalViewInfo(&local_948,&(this->ViewTarget).POV);
  fVar2 = __real_3f800000;
  if (this->bEnableColorScaleInterp != 0) {
    pUVar18 = AActor::GetWorld((AActor *)this);
    dVar11 = (this->OriginalColorScale).field0_0x0._s_0.Y;
    dVar10 = (this->OriginalColorScale).field0_0x0._s_0.Z;
    dVar12 = (this->DesiredColorScale).field0_0x0._s_0.Y;
    dVar13 = (this->DesiredColorScale).field0_0x0._s_0.Z;
    dVar26 = (pUVar18->TimeSeconds - (double)this->ColorScaleInterpStartTime) /
             (double)this->ColorScaleInterpDuration;
    if (__real_3ff0000000000000 <= dVar26) {
      dVar26 = __real_3ff0000000000000;
    }
    if (dVar26 <= 0.0) {
      dVar26 = 0.0;
    }
    dVar3 = (this->OriginalColorScale).field0_0x0._s_0.X;
    dVar24 = (double)(float)dVar26;
    (this->ColorScale).field0_0x0._s_0.X =
         ((this->DesiredColorScale).field0_0x0._s_0.X - dVar3) * dVar24 + dVar3;
    dVar10 = (dVar13 - dVar10) * dVar24 + dVar10;
    auVar9._8_4_ = SUB84(dVar10,0);
    auVar9._0_8_ = (dVar12 - dVar11) * dVar24 + dVar11;
    auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->ColorScale).field0_0x0 + 8) = auVar9;
    if ((float)dVar26 == fVar2) {
      this->bEnableColorScaleInterp = 0;
    }
  }
  this_01 = &this->PendingViewTarget;
  if (((this_01->Target).field0_0x0.DebugPtr == (AActor *)0x0) ||
     ((this->BlendParams).bLockOutgoing == 0)) {
    FTViewTarget::CheckViewTarget(this_00,(this->PCOwner).field0_0x0.DebugPtr);
    (**(code **)(this->_padding_ + 0x888))(this,this_00,CONCAT44(in_XMM1_Db,param_1));
  }
  FMinimalViewInfo::operator=(&local_948,&(this->ViewTarget).POV);
  uVar23 = 0;
  if ((this_01->Target).field0_0x0.DebugPtr != (AActor *)0x0) {
    pAVar5 = (this->PCOwner).field0_0x0.DebugPtr;
    this->BlendTimeToGo = this->BlendTimeToGo - param_1;
    FTViewTarget::CheckViewTarget(this_01,pAVar5);
    (**(code **)(this->_padding_ + 0x888))(this,this_01,CONCAT44(in_XMM1_Db,param_1));
    if (this->BlendTimeToGo <= 0.0) {
      FTViewTarget::operator=(this_00,this_01);
      (this_01->Target).field0_0x0.DebugPtr = (AActor *)0x0;
      this->BlendTimeToGo = 0.0;
      FMinimalViewInfo::operator=(&local_948,&(this->PendingViewTarget).POV);
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &this->OnBlendCompleteEvent,(FWriteAccessScope *)&local_968);
      puVar1 = &(this->OnBlendCompleteEvent).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + 1;
      bVar14 = false;
      uVar20 = *(int *)&(this->OnBlendCompleteEvent).field_0x10 - 1;
      if (-1 < (int)uVar20) {
        lVar22 = (longlong)(int)uVar20;
        lVar21 = lVar22 << 4;
        bVar14 = false;
        do {
          iVar4 = *(int *)&(this->OnBlendCompleteEvent).field_0x10;
          uVar17 = uVar23;
          if ((int)uVar20 < iVar4) {
            uVar17 = ~uVar20 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (local_978 = lVar22, local_970 = (longlong)iVar4,
             bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          lVar6 = *(longlong *)&(this->OnBlendCompleteEvent).field_0x8;
          if (((*(int *)(lVar21 + 8 + lVar6) == 0) ||
              (plVar7 = *(longlong **)(lVar21 + lVar6), plVar7 == (longlong *)0x0)) ||
             (cVar16 = (**(code **)(*plVar7 + 0x68))(), cVar16 == '\0')) {
            bVar14 = true;
          }
          lVar22 = lVar22 + -1;
          lVar21 = lVar21 + -0x10;
          uVar20 = uVar20 - 1;
        } while (-1 < (int)uVar20);
      }
      puVar1 = &(this->OnBlendCompleteEvent).field_0x1c;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      if (bVar14) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&this->OnBlendCompleteEvent
                   ,false);
      }
      if (local_968.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_968.Accessor,&local_968);
      }
    }
    else {
      fVar25 = (this->BlendParams).BlendTime;
      fVar25 = (fVar25 - this->BlendTimeToGo) / fVar25;
      fVar27 = 0.0;
      switch((this->BlendParams).BlendFunction.Value) {
      case '\0':
        fVar27 = fVar25;
        break;
      case '\x01':
        fVar27 = fVar25 * fVar25 * __real_40400000 - (fVar25 + fVar25) * fVar25 * fVar25;
        break;
      case '\x02':
        fVar27 = powf(fVar25,(this->BlendParams).BlendExp);
        break;
      case '\x03':
        fVar27 = powf(fVar25,fVar2 / (this->BlendParams).BlendExp);
        break;
      case '\x04':
        fVar27 = (this->BlendParams).BlendExp;
        if (__real_3f000000 <= fVar25) {
          fVar25 = powf(fVar2 - ((fVar25 + fVar25) - fVar2),fVar27);
          fVar27 = ((fVar2 - fVar25) + fVar2) * __real_3f000000;
        }
        else {
          fVar25 = powf(fVar25 + fVar25,fVar27);
          fVar27 = fVar25 * __real_3f000000;
        }
        break;
      case '\x05':
        fVar27 = fVar2;
      }
      FMinimalViewInfo::operator=(&local_948,&(this->ViewTarget).POV);
      FMinimalViewInfo::BlendViewInfo(&local_948,&(this->PendingViewTarget).POV,fVar27);
      fVar27 = fVar27 * (this->PendingViewTarget).POV.PostProcessBlendWeight;
      if (0.0 < fVar27) {
        AddCachedPPBlend(this,&(this->PendingViewTarget).POV.PostProcessSettings,fVar27,
                         VTBlendOrder_Override);
      }
    }
  }
  if (this->bEnableFading != 0) {
    if (this->bAutoAnimateFade != 0) {
      fVar25 = this->FadeTimeRemaining - param_1;
      if (fVar25 <= 0.0) {
        fVar25 = 0.0;
      }
      this->FadeTimeRemaining = fVar25;
      if (0.0 < this->FadeTime) {
        dVar10 = (this->FadeAlpha).field0_0x0._s_0.X;
        this->FadeAmount =
             (float)((double)(fVar2 - fVar25 / this->FadeTime) *
                     ((this->FadeAlpha).field0_0x0._s_0.Y - dVar10) + dVar10);
      }
      if ((this->bHoldFadeWhenFinished == 0) && (fVar25 <= 0.0)) {
        (**(code **)(this->_padding_ + 0x910))(this);
      }
    }
    if (this->bFadeAudio != 0) {
      (**(code **)(this->_padding_ + 0x878))(this);
    }
  }
  cVar16 = (**(code **)(this->_padding_ + 0x870))(this);
  if (cVar16 != '\0') {
    cVar16 = (**(code **)(this->_padding_ + 0x860))(this,&local_948);
    if ((ZPULL(*(undefined4 *)&this->field_0x2810,0xb,1) != 0) || (cVar16 != '\0')) {
      uVar23 = 0x800;
    }
    *(uint *)&this->field_0x2810 = *(undefined4 *)&this->field_0x2810 & 0xfffff7ff | uVar23;
  }
  fVar2 = (this->CameraCachePrivate).TimeStamp;
  pUVar18 = AActor::GetWorld((AActor *)this);
  dVar10 = pUVar18->TimeSeconds;
  if (fVar2 != (float)dVar10) {
    lVar21 = this->_padding_;
    uVar19 = (**(code **)(lVar21 + 0x798))(this);
    (**(code **)(lVar21 + 0x790))(this,uVar19);
    (this->LastFrameCameraCachePrivate).TimeStamp = fVar2;
  }
  (**(code **)(this->_padding_ + 0x788))(this,&local_948);
  (this->CameraCachePrivate).TimeStamp = (float)dVar10;
  if (local_948.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_948.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data);
  }
  return;
}

// EndPlay @ 148378390

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall APlayerCameraManager::EndPlay(APlayerCameraManager *this,Type param_1)

{
  int *piVar1;
  
  piVar1 = &(this->ModifierList).ArrayMax;
  (this->ModifierList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ModifierList).AllocatorInstance,0,piVar1);
  }
  (**(code **)(this->_padding_ + 0x7e8))(this,param_1 == Destroyed);
  AActor::EndPlay((AActor *)this,param_1);
  return;
}

// FillCameraCache @ 14837a790

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
APlayerCameraManager::FillCameraCache(APlayerCameraManager *this,FMinimalViewInfo *param_1)

{
  float fVar1;
  double dVar2;
  longlong lVar3;
  UWorld *pUVar4;
  undefined8 uVar5;
  
  fVar1 = (this->CameraCachePrivate).TimeStamp;
  pUVar4 = AActor::GetWorld((AActor *)this);
  dVar2 = pUVar4->TimeSeconds;
  if (fVar1 != (float)dVar2) {
    lVar3 = this->_padding_;
    uVar5 = (**(code **)(lVar3 + 0x798))(this);
    (**(code **)(lVar3 + 0x790))(this,uVar5);
    (this->LastFrameCameraCachePrivate).TimeStamp = fVar1;
  }
  (**(code **)(this->_padding_ + 0x788))(this,param_1);
  (this->CameraCachePrivate).TimeStamp = (float)dVar2;
  return;
}

// FindCameraModifierByClass @ 14837bfc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UCameraModifier * __thiscall
APlayerCameraManager::FindCameraModifierByClass
          (APlayerCameraManager *this,TSubclassOf<UCameraModifier> param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  UCameraModifier *pUVar4;
  bool bVar5;
  UClass *pUVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  pFVar8 = (this->ModifierList).AllocatorInstance.Data;
  iVar2 = (this->ModifierList).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  do {
    if ((this->ModifierList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UCameraModifier>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar1) {
      return (UCameraModifier *)0x0;
    }
    lVar7 = *(longlong *)param_1.Class.field0_0x0;
    pUVar4 = *(UCameraModifier **)pFVar8;
    if ((lVar7 == 0) ||
       (pUVar6 = Z_Construct_UClass_UCameraModifier_NoRegister(), pUVar6 == (UClass *)0x0)) {
LAB_14837c046:
      lVar7 = 0;
    }
    else {
      iVar3 = (int)pUVar6->_padding_;
      if ((*(int *)(lVar7 + 0x38) < iVar3) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar3 * 8) !=
          &pUVar6->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) goto LAB_14837c046;
      lVar7 = *(longlong *)param_1.Class.field0_0x0;
    }
    if (pUVar4->_padding_ == lVar7) {
      return pUVar4;
    }
    pFVar8 = pFVar8 + 8;
  } while( true );
}

// FindGenericCameraLensEffect @ 14837c080

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TScriptInterface<ICameraLensEffectInterface> * __thiscall
APlayerCameraManager::FindGenericCameraLensEffect
          (APlayerCameraManager *this,
          TScriptInterface<ICameraLensEffectInterface> *__return_storage_ptr__,
          TSubclassOf<AActor> param_1)

{
  int iVar1;
  UObject *pUVar2;
  longlong *plVar3;
  UObject *pUVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  TScriptInterface<ICameraLensEffectInterface> *pTVar9;
  UClass *pUVar10;
  UClass *pUVar11;
  longlong *plVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  longlong local_res8;
  UObject *local_res20;
  UObject *local_48 [2];
  
  uVar15 = 0;
  if (0 < (this->CameraLensEffects).ArrayNum) {
    local_res8 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar15 < (this->CameraLensEffects).ArrayNum) {
        uVar8 = ~uVar15 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TScriptInterface<ICameraLensEffectInterface> *)(*pcVar5)();
        return pTVar9;
      }
      pFVar14 = (this->CameraLensEffects).AllocatorInstance.Data + local_res8;
      pUVar2 = *(UObject **)pFVar14;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      plVar3 = *(longlong **)(pFVar14 + 8);
      lVar13 = *(longlong *)param_1.Class.field0_0x0;
      if ((lVar13 == 0) ||
         (pUVar10 = Z_Construct_UClass_AActor_NoRegister(), pUVar10 == (UClass *)0x0)) {
LAB_14837c16d:
        pUVar10 = (UClass *)0x0;
      }
      else {
        iVar1 = (int)pUVar10->_padding_;
        if ((*(int *)(lVar13 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar10->_padding_)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_14837c16d;
        pUVar10 = *(UClass **)param_1.Class.field0_0x0;
      }
      if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar10);
      }
      pUVar4 = (pUVar10->ClassDefaultObject).field0_0x0.DebugPtr;
      pUVar11 = Z_Construct_UClass_AActor_NoRegister();
      lVar13 = *(longlong *)&pUVar4->field_0x10;
      iVar1 = (int)pUVar11->_padding_;
      if (((*(int *)(lVar13 + 0x38) < iVar1) ||
          ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar1 * 8) !=
           &pUVar11->_padding_)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Class->GetDefaultObject()->IsA(T::StaticClass())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0x1469,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TScriptInterface<ICameraLensEffectInterface> *)(*pcVar5)();
        return pTVar9;
      }
      if ((pUVar10->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar10);
      }
      pUVar4 = (pUVar10->ClassDefaultObject).field0_0x0.DebugPtr;
      if (pUVar4 == (UObject *)0x0) {
        plVar12 = (longlong *)0x0;
      }
      else {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(pUVar4);
        }
        pUVar10 = Z_Construct_UClass_UCameraLensEffectInterface_NoRegister();
        plVar12 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar4,pUVar10);
      }
      if ((pUVar2 != (UObject *)0x0) && ((*(uint *)&pUVar2->field_0x8 >> 0x1e & 1) == 0)) {
        lVar13 = *(longlong *)param_1.Class.field0_0x0;
        if ((lVar13 == 0) ||
           (pUVar10 = Z_Construct_UClass_AActor_NoRegister(), pUVar10 == (UClass *)0x0)) {
LAB_14837c269:
          lVar13 = 0;
        }
        else {
          iVar1 = (int)pUVar10->_padding_;
          if ((*(int *)(lVar13 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar10->_padding_)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
          }
          if (!bVar6) goto LAB_14837c269;
          lVar13 = *(longlong *)param_1.Class.field0_0x0;
        }
        if (*(longlong *)&pUVar2->field_0x10 == lVar13) {
LAB_14837c33e:
          *(UObject **)__return_storage_ptr__ = pUVar2;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable(pUVar2);
          }
          *(longlong **)&__return_storage_ptr__->field_0x8 = plVar3;
          return __return_storage_ptr__;
        }
        local_res20 = *(UObject **)param_1.Class.field0_0x0;
        pcVar5 = *(code **)(*plVar3 + 0x48);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0))
        {
          UE::GC::MarkAsReachable(local_res20);
        }
        cVar7 = (*pcVar5)(plVar3,&local_res20);
        if (cVar7 != '\0') goto LAB_14837c33e;
        if ((pUVar4 != (UObject *)0x0) && (plVar12 != (longlong *)0x0)) {
          local_48[0] = *(UObject **)&pUVar2->field_0x10;
          pcVar5 = *(code **)(*plVar12 + 0x48);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_48[0] != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(local_48[0]);
          }
          cVar7 = (*pcVar5)(plVar12,local_48);
          if (cVar7 != '\0') goto LAB_14837c33e;
        }
      }
      uVar15 = uVar15 + 1;
      local_res8 = local_res8 + 0x10;
    } while ((int)uVar15 < (this->CameraLensEffects).ArrayNum);
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// ForEachCameraModifier @ 14837c770

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
APlayerCameraManager::ForEachCameraModifier
          (APlayerCameraManager *this,TFunctionRef<bool___cdecl(UCameraModifier_*)> *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 local_res8;
  ForAnyElementType local_18;
  int local_10;
  int local_c;
  
  iVar1 = (this->ModifierList).ArrayNum;
  pFVar2 = (this->ModifierList).AllocatorInstance.Data;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = iVar1;
  if (iVar1 == 0) {
    local_c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar1,0,&local_18,iVar1,&local_c);
    ConstructItems<TObjectPtr<UCameraModifier>,TObjectPtr<UCameraModifier>,int>
              (local_18.Data,(TObjectPtr<UCameraModifier> *)pFVar2,iVar1);
  }
  uVar7 = 0;
  if (0 < local_10) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < local_10) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_res8 = *(undefined8 *)(local_18.Data + lVar8);
      cVar5 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,&local_res8);
      if (cVar5 == '\0') break;
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < local_10);
  }
  if (local_18.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data);
  }
  return;
}

// GetCachedPostProcessBlends @ 14837f330

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
APlayerCameraManager::GetCachedPostProcessBlends
          (APlayerCameraManager *this,
          TArray<FPostProcessSettings,TSizedDefaultAllocator<32>_> **param_1,
          TArray<float,TSizedDefaultAllocator<32>_> **param_2)

{
  *param_1 = &this->PostProcessBlendCache;
  *param_2 = &this->PostProcessBlendCacheWeights;
  return;
}

// GetCachedPostProcessBlends @ 14837f350

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
APlayerCameraManager::GetCachedPostProcessBlends
          (APlayerCameraManager *this,
          TArray<FPostProcessSettings,TSizedDefaultAllocator<32>_> **param_1,
          TArray<float,TSizedDefaultAllocator<32>_> **param_2,
          TArray<EViewTargetBlendOrder,TSizedDefaultAllocator<32>_> **param_3)

{
  *param_1 = &this->PostProcessBlendCache;
  *param_2 = &this->PostProcessBlendCacheWeights;
  *param_3 = &this->PostProcessBlendCacheOrders;
  return;
}

// GetCameraCacheView @ 14837f380

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FMinimalViewInfo * __thiscall APlayerCameraManager::GetCameraCacheView(APlayerCameraManager *this)

{
  return &(this->CameraCachePrivate).POV;
}

// GetCameraLocation @ 14837f390

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TVector<double> * __thiscall
APlayerCameraManager::GetCameraLocation
          (APlayerCameraManager *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  
  pdVar3 = (double *)(**(code **)(this->_padding_ + 0x798))();
  dVar2 = pdVar3[1];
  dVar1 = pdVar3[2];
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetCameraRotation @ 14837f3d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

TRotator<double> * __thiscall
APlayerCameraManager::GetCameraRotation
          (APlayerCameraManager *this,TRotator<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  
  lVar3 = (**(code **)(this->_padding_ + 0x798))();
  dVar2 = *(double *)(lVar3 + 0x20);
  dVar1 = *(double *)(lVar3 + 0x28);
  __return_storage_ptr__->Pitch = *(double *)(lVar3 + 0x18);
  __return_storage_ptr__->Yaw = dVar2;
  __return_storage_ptr__->Roll = dVar1;
  return __return_storage_ptr__;
}

// GetCameraViewPoint @ 14837f410

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
APlayerCameraManager::GetCameraViewPoint
          (APlayerCameraManager *this,TVector<double> *param_1,TRotator<double> *param_2)

{
  double dVar1;
  double *pdVar2;
  
  pdVar2 = (double *)(**(code **)(this->_padding_ + 0x798))();
  dVar1 = pdVar2[1];
  (param_1->field0_0x0)._s_0.X = *pdVar2;
  (param_1->field0_0x0)._s_0.Y = dVar1;
  (param_1->field0_0x0)._s_0.Z = pdVar2[2];
  dVar1 = pdVar2[4];
  param_2->Pitch = pdVar2[3];
  param_2->Yaw = dVar1;
  param_2->Roll = pdVar2[5];
  return;
}

// GetFOVAngle @ 148381040

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

float __thiscall APlayerCameraManager::GetFOVAngle(APlayerCameraManager *this)

{
  longlong lVar1;
  float fVar2;
  
  fVar2 = this->LockedFOV;
  if (fVar2 <= 0.0) {
    lVar1 = (**(code **)(this->_padding_ + 0x798))();
    fVar2 = *(float *)(lVar1 + 0x30);
  }
  return fVar2;
}

// GetLastFrameCameraCacheView @ 1483838a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FMinimalViewInfo * __thiscall
APlayerCameraManager::GetLastFrameCameraCacheView(APlayerCameraManager *this)

{
  return &(this->LastFrameCameraCachePrivate).POV;
}

// GetOrthoWidth @ 1483856d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

float __thiscall APlayerCameraManager::GetOrthoWidth(APlayerCameraManager *this)

{
  float fVar1;
  
  fVar1 = this->LockedOrthoWidth;
  if (fVar1 <= 0.0) {
    fVar1 = this->DefaultOrthoWidth;
  }
  return fVar1;
}

// GetOwningPlayerController @ 1483857d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

APlayerController * __thiscall
APlayerCameraManager::GetOwningPlayerController(APlayerCameraManager *this)

{
  return (this->PCOwner).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 148386bd0

UClass * __cdecl APlayerCameraManager::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_APlayerCameraManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"PlayerCameraManager",
               &Z_Registration_Info_UClass_APlayerCameraManager.InnerSingleton,
               StaticRegisterNativesAPlayerCameraManager,0x2840,0x10,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<APlayerCameraManager>,
               InternalVTableHelperCtorCaller<APlayerCameraManager>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_APlayerCameraManager.InnerSingleton;
}

// GetViewTarget @ 14838b240

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

AActor * __thiscall APlayerCameraManager::GetViewTarget(APlayerCameraManager *this)

{
  AActor *pAVar1;
  
  if ((this->PendingViewTarget).Target.field0_0x0.DebugPtr != (AActor *)0x0) {
    FTViewTarget::CheckViewTarget(&this->PendingViewTarget,(this->PCOwner).field0_0x0.DebugPtr);
    pAVar1 = (this->PendingViewTarget).Target.field0_0x0.DebugPtr;
    if (pAVar1 != (AActor *)0x0) {
      return pAVar1;
    }
  }
  FTViewTarget::CheckViewTarget(&this->ViewTarget,(this->PCOwner).field0_0x0.DebugPtr);
  return (this->ViewTarget).Target.field0_0x0.DebugPtr;
}

// GetViewTargetPawn @ 14838b340

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

APawn * __thiscall APlayerCameraManager::GetViewTargetPawn(APlayerCameraManager *this)

{
  APawn *pAVar1;
  FTViewTarget *this_00;
  
  if ((this->PendingViewTarget).Target.field0_0x0.DebugPtr != (AActor *)0x0) {
    FTViewTarget::CheckViewTarget(&this->PendingViewTarget,(this->PCOwner).field0_0x0.DebugPtr);
    if ((this->PendingViewTarget).Target.field0_0x0.DebugPtr != (AActor *)0x0) {
      this_00 = &this->PendingViewTarget;
      goto LAB_14838b39c;
    }
  }
  FTViewTarget::CheckViewTarget(&this->ViewTarget,(this->PCOwner).field0_0x0.DebugPtr);
  this_00 = &this->ViewTarget;
LAB_14838b39c:
  pAVar1 = FTViewTarget::GetTargetPawn(this_00);
  return pAVar1;
}

// InitializeFor @ 14838eff0

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

void __thiscall
APlayerCameraManager::InitializeFor(APlayerCameraManager *this,APlayerController *param_1)

{
  code *pcVar1;
  FMinimalViewInfo *pFVar2;
  AWorldSettings *pAVar3;
  undefined1 auStack_928 [32];
  undefined4 local_908;
  undefined4 uStack_904;
  undefined4 uStack_900;
  uint uStack_8fc;
  double local_8f8;
  FMinimalViewInfo local_8e8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_928;
  pFVar2 = (FMinimalViewInfo *)(**(code **)(this->_padding_ + 0x798))();
  FMinimalViewInfo::FMinimalViewInfo(&local_8e8,pFVar2);
  local_8e8.FOV = this->DefaultFOV;
  (**(code **)(this->_padding_ + 0x788))(this,&local_8e8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (APlayerController *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  uStack_8fc = uStack_8fc & 0xfffffffe;
  uStack_904 = CONCAT31(uStack_904._1_3_,1);
  (this->PCOwner).field0_0x0.DebugPtr = param_1;
  local_908 = 0;
  uStack_900 = 0x40000000;
  (**(code **)(this->_padding_ + 0x898))(this,param_1,&local_908);
  pcVar1 = *(code **)(this->_padding_ + 0x850);
  pAVar3 = AActor::GetWorldSettings((AActor *)this);
  local_8f8 = (pAVar3->DefaultColorScale).field0_0x0._s_0.Z;
  local_908 = *(undefined4 *)&(pAVar3->DefaultColorScale).field0_0x0;
  uStack_904 = *(undefined4 *)((longlong)&(pAVar3->DefaultColorScale).field0_0x0 + 4);
  uStack_900 = *(undefined4 *)((longlong)&(pAVar3->DefaultColorScale).field0_0x0 + 8);
  uStack_8fc = *(undefined4 *)((longlong)&(pAVar3->DefaultColorScale).field0_0x0 + 0xc);
  (*pcVar1)(this,&local_908,__real_40a00000);
  (**(code **)(this->_padding_ + 0x7b8))(this,0);
  if (local_8e8.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_8e8.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data);
  }
  return;
}

// IsOrthographic @ 148392d00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall APlayerCameraManager::IsOrthographic(APlayerCameraManager *this)

{
  return this->bIsOrthographic;
}

// LimitViewPitch @ 148394640

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
APlayerCameraManager::LimitViewPitch
          (APlayerCameraManager *this,TRotator<double> *param_1,float param_2,float param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = FMath::ClampAngle<double,float,float>(param_1->Pitch,param_2,param_3);
  dVar2 = __real_4076800000000000;
  param_1->Pitch = dVar1;
  dVar2 = FGenericPlatformMath::Fmod(dVar1,dVar2);
  if (dVar2 < 0.0) {
    dVar2 = dVar2 + __real_4076800000000000;
  }
  param_1->Pitch = dVar2;
  return;
}

// LimitViewRoll @ 148394690

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
APlayerCameraManager::LimitViewRoll
          (APlayerCameraManager *this,TRotator<double> *param_1,float param_2,float param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = FMath::ClampAngle<double,float,float>(param_1->Roll,param_2,param_3);
  dVar2 = __real_4076800000000000;
  param_1->Roll = dVar1;
  dVar2 = FGenericPlatformMath::Fmod(dVar1,dVar2);
  if (dVar2 < 0.0) {
    dVar2 = dVar2 + __real_4076800000000000;
  }
  param_1->Roll = dVar2;
  return;
}

// LimitViewYaw @ 1483946e0

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
APlayerCameraManager::LimitViewYaw
          (APlayerCameraManager *this,TRotator<double> *param_1,float param_2,float param_3)

{
  double dVar1;
  double dVar2;
  
  dVar1 = FMath::ClampAngle<double,float,float>(param_1->Yaw,param_2,param_3);
  dVar2 = __real_4076800000000000;
  param_1->Yaw = dVar1;
  dVar2 = FGenericPlatformMath::Fmod(dVar1,dVar2);
  if (dVar2 < 0.0) {
    dVar2 = dVar2 + __real_4076800000000000;
  }
  param_1->Yaw = dVar2;
  return;
}

// OnPhotographyMultiPartCaptureEnd @ 148395bf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall APlayerCameraManager::OnPhotographyMultiPartCaptureEnd(APlayerCameraManager *this)

{
  UFunction *this_00;
  UClass *pUVar1;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_APlayerCameraManager_OnPhotographyMultiPartCaptureEnd);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
                    /* WARNING: Could not recover jumptable at 0x000148395c33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x260))(this,this_00,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148395c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x760))(this);
  return;
}

// OnPhotographyMultiPartCaptureEnd_Implementation @ 148395c60

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
APlayerCameraManager::OnPhotographyMultiPartCaptureEnd_Implementation(APlayerCameraManager *this)

{
  return;
}

// OnPhotographyMultiPartCaptureStart @ 148395c70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall APlayerCameraManager::OnPhotographyMultiPartCaptureStart(APlayerCameraManager *this)

{
  UFunction *this_00;
  UClass *pUVar1;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_APlayerCameraManager_OnPhotographyMultiPartCaptureStart)
  ;
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
                    /* WARNING: Could not recover jumptable at 0x000148395cb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x260))(this,this_00,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148395cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x768))(this);
  return;
}

// OnPhotographyMultiPartCaptureStart_Implementation @ 148395ce0

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
APlayerCameraManager::OnPhotographyMultiPartCaptureStart_Implementation(APlayerCameraManager *this)

{
  return;
}

// OnPhotographySessionEnd @ 148395cf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall APlayerCameraManager::OnPhotographySessionEnd(APlayerCameraManager *this)

{
  UFunction *this_00;
  UClass *pUVar1;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_APlayerCameraManager_OnPhotographySessionEnd);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
                    /* WARNING: Could not recover jumptable at 0x000148395d33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x260))(this,this_00,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148395d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x770))(this);
  return;
}

// OnPhotographySessionEnd_Implementation @ 148395d60

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
APlayerCameraManager::OnPhotographySessionEnd_Implementation(APlayerCameraManager *this)

{
  return;
}

// OnPhotographySessionStart @ 148395d70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall APlayerCameraManager::OnPhotographySessionStart(APlayerCameraManager *this)

{
  UFunction *this_00;
  UClass *pUVar1;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_APlayerCameraManager_OnPhotographySessionStart);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
                    /* WARNING: Could not recover jumptable at 0x000148395db3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x260))(this,this_00,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148395dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x778))(this);
  return;
}

// OnPhotographySessionStart_Implementation @ 148395de0

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
APlayerCameraManager::OnPhotographySessionStart_Implementation(APlayerCameraManager *this)

{
  return;
}

// PhotographyCameraModify @ 148399100

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
APlayerCameraManager::PhotographyCameraModify
          (APlayerCameraManager *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4)

{
  UFunction *this_00;
  UClass *pUVar1;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_a8;
  double dStack_a0;
  double local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double local_78;
  double local_68;
  double dStack_60;
  double local_58;
  double local_50;
  double dStack_48;
  double local_40;
  double local_38;
  double dStack_30;
  double local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  double local_10;
  
  this_00 = UObject::FindFunctionChecked
                      ((UObject *)this,NAME_APlayerCameraManager_PhotographyCameraModify);
  pUVar1 = UField::GetOwnerClass((UField *)this_00);
  if ((pUVar1->ClassFlags & CLASS_Native) == CLASS_None) {
    local_68 = (param_1->field0_0x0)._s_0.X;
    dStack_60 = (param_1->field0_0x0)._s_0.Y;
    local_58 = (param_1->field0_0x0)._s_0.Z;
    local_50 = (param_2->field0_0x0)._s_0.X;
    dStack_48 = (param_2->field0_0x0)._s_0.Y;
    local_40 = (param_2->field0_0x0)._s_0.Z;
    local_38 = (param_3->field0_0x0)._s_0.X;
    dStack_30 = (param_3->field0_0x0)._s_0.Y;
    local_28 = (param_3->field0_0x0)._s_0.Z;
    local_20 = *(undefined4 *)&param_4->field0_0x0;
    uStack_1c = *(undefined4 *)((longlong)&param_4->field0_0x0 + 4);
    uStack_18 = *(undefined4 *)((longlong)&param_4->field0_0x0 + 8);
    uStack_14 = *(undefined4 *)((longlong)&param_4->field0_0x0 + 0xc);
    local_10 = (param_4->field0_0x0)._s_0.Z;
    (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_68);
    (param_4->field0_0x0)._s_0.X = (double)CONCAT44(uStack_1c,local_20);
    (param_4->field0_0x0)._s_0.Y = (double)CONCAT44(uStack_14,uStack_18);
    (param_4->field0_0x0)._s_0.Z = local_10;
  }
  else {
    local_c8 = (param_3->field0_0x0)._s_0.X;
    dStack_c0 = (param_3->field0_0x0)._s_0.Y;
    local_b8 = (param_3->field0_0x0)._s_0.Z;
    local_a8 = (param_2->field0_0x0)._s_0.X;
    dStack_a0 = (param_2->field0_0x0)._s_0.Y;
    local_98 = (param_2->field0_0x0)._s_0.Z;
    local_88 = *(undefined4 *)&param_1->field0_0x0;
    uStack_84 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
    uStack_80 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
    uStack_7c = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
    local_78 = (param_1->field0_0x0)._s_0.Z;
    (**(code **)(this->_padding_ + 0x780))(this,&local_88,&local_a8,&local_c8,param_4);
  }
  return;
}

// PhotographyCameraModify_Implementation @ 148399280

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
APlayerCameraManager::PhotographyCameraModify_Implementation
          (APlayerCameraManager *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4)

{
  FCameraPhotographyManager *this_00;
  TVector<double>_u_0 local_68;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  this_00 = FCameraPhotographyManager::Get();
  local_68._s_0.X = (param_3->field0_0x0)._s_0.X;
  local_68._s_0.Y = (param_3->field0_0x0)._s_0.Y;
  local_68._s_0.Z = (param_3->field0_0x0)._s_0.Z;
  local_48._s_0.X = (param_2->field0_0x0)._s_0.X;
  local_48._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  local_48._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  local_28._s_0.X = (param_1->field0_0x0)._s_0.X;
  local_28._s_0.Y = (param_1->field0_0x0)._s_0.Y;
  local_28._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  FCameraPhotographyManager::DefaultConstrainCamera
            (this_00,(TVector<double> *)&local_28._s_0,(TVector<double> *)&local_48._s_0,
             (TVector<double> *)&local_68._s_0,param_4,this);
  return;
}

// PlayWorldCameraShake @ 148399a20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
APlayerCameraManager::PlayWorldCameraShake
          (UWorld *param_1,TSubclassOf<UCameraShakeBase> param_2,TVector<double> *param_3,
          float param_4,float param_5,float param_6,bool param_7)

{
  longlong *plVar1;
  UObject *pUVar2;
  code *pcVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar7;
  int iVar8;
  bool bVar9;
  uint uVar10;
  UObject *this;
  UFunction *pUVar11;
  UObject **ppUVar12;
  float fVar13;
  double dVar14;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_188;
  double local_178;
  double local_170;
  double local_168;
  UObject *local_160;
  float local_158;
  undefined1 local_154;
  double local_150;
  double dStack_148;
  double local_140;
  UObject *local_138;
  float local_130;
  undefined1 local_12c;
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  TVector<double>_u_0 local_f8 [2];
  double local_c8;
  TRotator<double> local_b8 [6];
  
  UWorld::GetPlayerControllerIterator(param_1,&local_188);
  fVar5 = __real_3f800000;
  do {
    iVar8 = local_188.Index;
    pTVar7 = local_188.Container;
    if ((local_188.Index < 0) || ((local_188.Container)->ArrayNum <= local_188.Index)) {
      return;
    }
    uVar10 = 0;
    if (local_188.Index < (local_188.Container)->ArrayNum) {
      uVar10 = (uint)~local_188.Index >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this = FWeakObjectPtr::Get((FWeakObjectPtr *)
                               ((pTVar7->AllocatorInstance).Data + (longlong)iVar8 * 8));
    if ((this != (UObject *)0x0) &&
       (plVar1 = *(longlong **)&this[0x16].field_0x20, plVar1 != (longlong *)0x0)) {
      local_c8 = (param_3->field0_0x0)._s_0.Z;
      dVar14 = (param_3->field0_0x0)._s_0.X;
      dVar4 = (param_3->field0_0x0)._s_0.Y;
      (**(code **)(*plVar1 + 0x848))(plVar1,&local_178);
      dVar14 = dVar14 - local_178;
      dVar4 = dVar4 - local_170;
      dVar4 = dVar4 * dVar4 + dVar14 * dVar14 + (local_c8 - local_168) * (local_c8 - local_168);
      if (param_5 <= param_4) {
        fVar13 = fVar5;
        if ((double)(param_4 * param_4) <= dVar4) {
          fVar13 = 0.0;
        }
      }
      else {
        fVar13 = (float)((SQRT(dVar4) - (double)param_4) / (double)(param_5 - param_4));
        if (fVar5 <= fVar13) {
          fVar13 = fVar5;
        }
        if (fVar13 <= 0.0) {
          fVar13 = 0.0;
        }
        fVar13 = powf(fVar5 - fVar13,param_6);
      }
      if (param_7) {
        pUVar2 = *(UObject **)&this[0x13].field_0x18;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar2 == (UObject *)0x0) goto LAB_148399cfd;
          UE::GC::MarkAsReachable(pUVar2);
        }
        if (pUVar2 == (UObject *)0x0) goto LAB_148399cfd;
        (**(code **)(**(longlong **)&this[0x16].field_0x20 + 0x848))
                  (*(longlong **)&this[0x16].field_0x20,&local_110);
        local_f8[0]._0_8_ = (param_3->field0_0x0)._s_0.X - local_110;
        local_f8[0]._8_8_ = (param_3->field0_0x0)._s_0.Y - local_108;
        local_f8[0]._16_8_ = (param_3->field0_0x0)._s_0.Z - local_100;
        UE::Math::TVector<double>::ToOrientationRotator
                  ((TVector<double> *)&local_f8[0]._s_0,local_b8);
        dVar6 = local_b8[0].Roll;
        dVar14 = local_b8[0].Yaw;
        dVar4 = local_b8[0].Pitch;
        pUVar2 = *(UObject **)param_2.Class.field0_0x0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        local_160 = (UObject *)0x0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        local_154 = 2;
        local_150 = dVar4;
        dStack_148 = dVar14;
        local_140 = dVar6;
        local_160 = pUVar2;
        local_158 = fVar13;
        pUVar11 = UObject::FindFunctionChecked(this,NAME_APlayerController_ClientStartCameraShake);
        ppUVar12 = &local_160;
      }
      else {
LAB_148399cfd:
        dVar6 = UE::Math::TRotator<double>::ZeroRotator.Roll;
        dVar14 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
        dVar4 = UE::Math::TRotator<double>::ZeroRotator.Pitch;
        pUVar2 = *(UObject **)param_2.Class.field0_0x0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        local_138 = (UObject *)0x0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar2);
        }
        local_12c = 0;
        local_128 = dVar4;
        dStack_120 = dVar14;
        local_118 = dVar6;
        local_138 = pUVar2;
        local_130 = fVar13;
        pUVar11 = UObject::FindFunctionChecked(this,NAME_APlayerController_ClientStartCameraShake);
        ppUVar12 = &local_138;
      }
      (**(code **)(*(longlong *)this + 0x260))(this,pUVar11,ppUVar12);
    }
    local_188.Index = local_188.Index + 1;
  } while( true );
}

// PostInitializeComponents @ 14839a2e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall APlayerCameraManager::PostInitializeComponents(APlayerCameraManager *this)

{
  uint uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  UObject *pUVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  IModularFeatures *pIVar9;
  FName FVar10;
  longlong lVar11;
  UClass *pUVar12;
  UCameraModifier_CameraShake *pUVar13;
  ulonglong uVar14;
  ForAnyElementType FVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  UObject *local_res18 [2];
  ulonglong local_68;
  ForAnyElementType local_60;
  uint local_58;
  uint uStack_54;
  ForAnyElementType local_50;
  int local_48;
  int local_44 [3];
  
  AActor::PostInitializeComponents((AActor *)this);
  iVar8 = (this->DefaultModifiers).ArrayNum;
  pFVar3 = (this->DefaultModifiers).AllocatorInstance.Data;
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = iVar8;
  if (iVar8 == 0) {
    local_44[0] = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,iVar8,0,&local_50,iVar8,local_44);
    ConstructItems<TSubclassOf<UCameraModifier>,TSubclassOf<UCameraModifier>,int>
              (local_50.Data,(TSubclassOf<UCameraModifier> *)pFVar3,iVar8);
  }
  pIVar9 = IModularFeatures::Get();
  FVar10 = ICameraModularFeature::GetModularFeatureName();
  uVar4 = *(undefined8 *)FVar10;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  uStack_54 = 0;
  iVar8 = (**(code **)((longlong)*pIVar9 + 0x18))(pIVar9);
  uVar14 = 0;
  if (0 < iVar8) {
    do {
      lVar11 = (**(code **)((longlong)*pIVar9 + 0x20))(pIVar9,uVar4,uVar14);
      local_68 = lVar11 - 8;
      if (lVar11 == 0) {
        local_68 = 0;
      }
      if (((local_60.Data <= (FScriptContainerElement *)&local_68) &&
          ((FScriptContainerElement *)&local_68 < local_60.Data + (longlong)(int)uStack_54 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (local_58 == uStack_54) {
        local_58 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_60,(int *)&uStack_54);
      }
      uVar1 = local_58 + 1;
      uVar16 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar16;
      *(ulonglong *)(local_60.Data + (longlong)(int)local_58 * 8) = local_68;
      local_58 = uVar1;
    } while ((int)uVar16 < iVar8);
  }
  uVar1 = local_58;
  uVar14 = (ulonglong)(int)local_58;
  pFVar3 = local_60.Data + uVar14 * 8;
  FVar15.Data = local_60.Data;
  while( true ) {
    if ((uint)uVar14 != uVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<ICameraModularFeature_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    iVar8 = local_48;
    if (FVar15.Data == pFVar3) break;
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
    uVar14 = (ulonglong)local_58;
    FVar15.Data = FVar15.Data + 8;
  }
  if (0 < local_48) {
    pFVar3 = local_50.Data + (longlong)local_48 * 8;
    FVar15.Data = local_50.Data;
    while( true ) {
      if (local_48 != iVar8) {
        `TCheckedPointerIterator<TSubclassOf<UCameraModifier>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if (FVar15.Data == pFVar3) break;
      pUVar5 = *(UObject **)FVar15.Data;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar5 != (UObject *)0x0) goto LAB_14839a524;
      }
      else if (pUVar5 != (UObject *)0x0) {
        UE::GC::MarkAsReachable(pUVar5);
LAB_14839a524:
        pUVar12 = Z_Construct_UClass_UCameraModifier_NoRegister();
        if (pUVar12 != (UClass *)0x0) {
          iVar2 = (int)pUVar12->_padding_;
          if ((*(int *)&pUVar5[1].field_0x10 < iVar2) ||
             ((longlong *)*(undefined1 **)(*(longlong *)&pUVar5[1].field_0x8 + (longlong)iVar2 * 8)
              != &pUVar12->_padding_)) {
            bVar7 = false;
          }
          else {
            bVar7 = true;
          }
          if (bVar7) {
            pcVar6 = *(code **)(this->_padding_ + 0x7c8);
            local_res18[0] = pUVar5;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar5);
            }
            pUVar13 = (UCameraModifier_CameraShake *)(*pcVar6)(this,local_res18);
            if (pUVar13 != (UCameraModifier_CameraShake *)0x0) {
              pUVar12 = Z_Construct_UClass_UCameraModifier_CameraShake_NoRegister();
              iVar2 = (int)pUVar12->_padding_;
              if ((iVar2 <= *(int *)(pUVar13->_padding_ + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar13->_padding_ + 0x30) + (longlong)iVar2 * 8)
                  == &pUVar12->_padding_)) {
                if (UE::GC::GIsIncrementalReachabilityPending != false) {
                  UE::GC::MarkAsReachable((UObject *)pUVar13);
                }
                (this->CachedCameraShakeMod).field0_0x0.DebugPtr = pUVar13;
              }
            }
          }
        }
      }
      FVar15.Data = FVar15.Data + 8;
    }
  }
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  return;
}

// ProcessViewRotation @ 14839bfa0

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
APlayerCameraManager::ProcessViewRotation
          (APlayerCameraManager *this,float param_1,TRotator<double> *param_2,
          TRotator<double> *param_3)

{
  undefined1 auVar1 [16];
  longlong *plVar2;
  IXRTrackingSystem *pIVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  UEngine *pUVar14;
  bool bVar15;
  char cVar16;
  uint uVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_Camera_ProcessViewRotation> FVar19;
  UWorld *pUVar20;
  FNameEntryId FVar21;
  FName FVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar34;
  undefined1 auVar32 [16];
  double dVar35;
  undefined1 auVar33 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  FColor_u_0 local_res8 [2];
  FName local_res18;
  uint local_res20;
  uint uStackX_24;
  FName local_78;
  FName local_70;
  
  FVar19 = StatPtr_STAT_Camera_ProcessViewRotation;
  if (StatPtr_STAT_Camera_ProcessViewRotation ==
      (FThreadSafeStaticStat<FStat_STAT_Camera_ProcessViewRotation>)0x0) {
    pFVar18 = ::FName::FName(&local_78,"STAT_Camera_ProcessViewRotation");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_Camera_ProcessViewRotation>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Camera_ProcessViewRotation,
                        *pFVar18,L"Camera ProcessViewRotation","STATGROUP_Game","STATCAT_Advanced",
                        L"Game",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar19;
  bVar11 = false;
  bVar13 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  FVar21 = FVar22.ComparisonIndex.Value;
  uVar24 = FVar22.Number;
  if ((FVar21.Value == 0) && (uVar24 == 0)) {
LAB_14839c107:
    bVar12 = false;
    FVar22 = local_70;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar11 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar21.Value;
        local_res18.Number = uVar24;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PlayerCameraManager.cpp"
                   ,0x404);
        bVar11 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14839c107;
    local_res20 = FVar21.Value;
    uStackX_24 = uVar24;
    FThreadStats::AddMessage(FVar22,CycleScopeStart);
    bVar12 = true;
  }
  uVar24 = 0;
  if (0 < (this->ModifierList).ArrayNum) {
    lVar25 = 0;
    do {
      uVar23 = ~uVar24 >> 0x1f;
      uVar17 = 0;
      if ((int)uVar24 < (this->ModifierList).ArrayNum) {
        uVar17 = uVar23;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(longlong *)((this->ModifierList).AllocatorInstance.Data + lVar25) != 0) {
        uVar17 = 0;
        if ((int)uVar24 < (this->ModifierList).ArrayNum) {
          uVar17 = uVar23;
        }
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        cVar16 = (**(code **)(**(longlong **)((this->ModifierList).AllocatorInstance.Data + lVar25)
                             + 0x2d8))();
        if (cVar16 == '\0') {
          uVar17 = 0;
          if ((int)uVar24 < (this->ModifierList).ArrayNum) {
            uVar17 = uVar23;
          }
          if ((uVar17 == 0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar15)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          plVar2 = *(longlong **)((this->ModifierList).AllocatorInstance.Data + lVar25);
          cVar16 = (**(code **)(*plVar2 + 0x308))
                             (plVar2,(this->ViewTarget).Target.field0_0x0.DebugPtr);
          if (cVar16 != '\0') break;
        }
      }
      uVar24 = uVar24 + 1;
      lVar25 = lVar25 + 8;
    } while ((int)uVar24 < (this->ModifierList).ArrayNum);
  }
  param_2->Pitch = param_2->Pitch + param_3->Pitch;
  param_2->Yaw = param_3->Yaw + param_2->Yaw;
  param_2->Roll = param_3->Roll + param_2->Roll;
  auVar36 = (undefined1  [16])UE::Math::TRotator<double>::ZeroRotator._0_16_;
  dVar35 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  param_3->Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  param_3->Yaw = dVar35;
  param_3->Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  if ((GEngine->XRSystem).Object != (IXRTrackingSystem *)0x0) {
    pUVar20 = AActor::GetWorld((AActor *)this);
    pUVar14 = GEngine;
    if (pUVar20 == (UWorld *)0x0) {
      if (((GEngine->XRSystem).Object == (IXRTrackingSystem *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      cVar16 = (**(code **)((longlong)*(pUVar14->XRSystem).Object + 0x148))();
    }
    else {
      if (((GEngine->XRSystem).Object == (IXRTrackingSystem *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar15)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pIVar3 = (pUVar14->XRSystem).Object;
      pcVar4 = *(code **)((longlong)*pIVar3 + 0x150);
      pUVar20 = AActor::GetWorld((AActor *)this);
      cVar16 = (*pcVar4)(pIVar3,pUVar20);
    }
    if (cVar16 != '\0') {
      auVar1._0_8_ = param_2->Pitch;
      auVar1._8_8_ = param_2->Yaw;
      auVar30 = divpd(auVar1,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
      auVar36 = roundpd(auVar36,auVar30,3);
      dVar9 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
      auVar37._0_8_ = auVar36._0_8_ * dVar9;
      dVar10 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
      auVar37._8_8_ = auVar36._8_8_ * dVar10;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = param_2->Roll;
      auVar36 = divpd(auVar30,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
      dVar35 = (double)auVar1._0_8_ - auVar37._0_8_;
      dVar5 = (double)auVar1._8_8_ - auVar37._8_8_;
      auVar36 = roundpd(auVar37,auVar36,3);
      dVar6 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
      auVar31._8_4_ = SUB84(dVar5,0);
      auVar31._0_8_ = dVar35;
      auVar31._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      dVar34 = auVar31._8_8_ + dVar10;
      dVar7 = param_2->Roll - auVar36._0_8_ * dVar6;
      dVar8 = 0.0 - auVar36._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
      uVar26 = -(ulonglong)(0.0 <= dVar35);
      uVar28 = -(ulonglong)(0.0 <= dVar5);
      uVar27 = -(ulonglong)(0.0 <= dVar7);
      uVar29 = -(ulonglong)(0.0 <= dVar8);
      auVar38._0_8_ = uVar26 & (ulonglong)dVar35;
      auVar38._8_4_ = (undefined4)(uVar28 & (ulonglong)dVar5);
      auVar38._12_4_ = (undefined4)((uVar28 & (ulonglong)dVar5) >> 0x20);
      auVar41._0_4_ = ~(uint)uVar26 & SUB84(dVar35 + dVar9,0);
      auVar41._4_4_ = ~(uint)(uVar26 >> 0x20) & (uint)((ulonglong)(dVar35 + dVar9) >> 0x20);
      auVar41._8_4_ = ~(uint)uVar28 & SUB84(dVar34,0);
      auVar41._12_4_ = ~(uint)(uVar28 >> 0x20) & (uint)((ulonglong)dVar34 >> 0x20);
      auVar41 = auVar41 | auVar38;
      auVar32._8_4_ = SUB84(dVar8,0);
      auVar32._0_8_ = dVar7;
      auVar32._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      dVar35 = auVar32._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
      auVar40._0_8_ = (ulonglong)dVar7 & uVar27;
      auVar40._8_4_ = (undefined4)(uVar29 & (ulonglong)dVar8);
      auVar40._12_4_ = (undefined4)((uVar29 & (ulonglong)dVar8) >> 0x20);
      auVar39._0_4_ = ~(uint)uVar27 & SUB84(dVar7 + dVar6,0);
      auVar39._4_4_ = ~(uint)(uVar27 >> 0x20) & (uint)((ulonglong)(dVar7 + dVar6) >> 0x20);
      auVar39._8_4_ = ~(uint)uVar29 & SUB84(dVar35,0);
      auVar39._12_4_ = ~(uint)(uVar29 >> 0x20) & (uint)((ulonglong)dVar35 >> 0x20);
      auVar39 = auVar39 | auVar40;
      uVar27 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar39._0_8_);
      uVar28 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar41._0_8_);
      uVar29 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar41._8_8_);
      auVar33._0_8_ = uVar28 & (ulonglong)(auVar41._0_8_ - dVar9);
      uVar26 = uVar29 & (ulonglong)(auVar41._8_8_ - dVar10);
      auVar33._8_4_ = (undefined4)uVar26;
      auVar33._12_4_ = (undefined4)(uVar26 >> 0x20);
      auVar36._4_4_ = ~(uint)(uVar28 >> 0x20) & auVar41._4_4_;
      auVar36._0_4_ = ~(uint)uVar28 & auVar41._0_4_;
      auVar36._8_4_ = ~(uint)uVar29 & auVar41._8_4_;
      auVar36._12_4_ = ~(uint)(uVar29 >> 0x20) & auVar41._12_4_;
      param_2->Pitch = (double)SUB168(auVar33 | auVar36,0);
      param_2->Yaw = (double)SUB168(auVar33 | auVar36,8);
      param_2->Roll =
           (double)(uVar27 & (ulonglong)(auVar39._0_8_ - dVar6) |
                   CONCAT44(~(uint)(uVar27 >> 0x20) & auVar39._4_4_,~(uint)uVar27 & auVar39._0_4_));
      goto LAB_14839c4cb;
    }
  }
  (**(code **)(this->_padding_ + 0x928))(this,param_2);
  (**(code **)(this->_padding_ + 0x938))(this,param_2);
  (**(code **)(this->_padding_ + 0x930))(this,param_2);
LAB_14839c4cb:
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar12) {
    FThreadStats::AddMessage(FVar22,CycleScopeEnd);
  }
  return;
}

// RemoveCameraModifier @ 14839f1c0

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
APlayerCameraManager::RemoveCameraModifier(APlayerCameraManager *this,UCameraModifier *param_1)

{
  int *piVar1;
  TArray<TObjectPtr<UCameraModifier>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *_Dst;
  UCameraModifier *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  
  if ((param_1 != (UCameraModifier *)0x0) && (uVar9 = 0, 0 < (this->ModifierList).ArrayNum)) {
    pTVar2 = &this->ModifierList;
    lVar10 = 0;
    do {
      uVar11 = ~uVar9 >> 0x1f;
      uVar7 = 0;
      if ((int)uVar9 < (this->ModifierList).ArrayNum) {
        uVar7 = uVar11;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pUVar3 = *(UCameraModifier **)((pTVar2->AllocatorInstance).Data + lVar10);
      if ((pUVar3 != (UCameraModifier *)0x0) && (pUVar3 == param_1)) {
        uVar7 = 0;
        if ((int)(uVar9 + 1) <= (this->ModifierList).ArrayNum) {
          uVar7 = uVar11;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        _Dst = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar9 * 8;
        iVar8 = (this->ModifierList).ArrayNum + ~uVar9;
        if (iVar8 != 0) {
          memmove(_Dst,_Dst + 8,(longlong)iVar8 << 3);
        }
        piVar1 = &(this->ModifierList).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar2->AllocatorInstance,(this->ModifierList).ArrayNum,
                   &(this->ModifierList).ArrayMax);
        return true;
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 8;
    } while ((int)uVar9 < (this->ModifierList).ArrayNum);
  }
  return false;
}

// RemoveGenericCameraLensEffect @ 1483a0ba0

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
APlayerCameraManager::RemoveGenericCameraLensEffect
          (APlayerCameraManager *this,TScriptInterface<ICameraLensEffectInterface> *param_1)

{
  TScriptInterface<ICameraLensEffectInterface> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TScriptInterface<ICameraLensEffectInterface> *local_res8;
  
  pTVar1 = (TScriptInterface<ICameraLensEffectInterface> *)
           (this->CameraLensEffects).AllocatorInstance.Data;
  if ((pTVar1 <= param_1) && (param_1 < pTVar1 + (this->CameraLensEffects).ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_res8 = param_1;
  TArray<TScriptInterface<ICameraLensEffectInterface>,TSizedDefaultAllocator<32>_>::
  RemoveAll<_TArray<TScriptInterface<ICameraLensEffectInterface>,TSizedDefaultAllocator<32>_>::Remove_::__l2::<lambda_1>_>
            (&this->CameraLensEffects,(<lambda_1> *)&local_res8);
  return;
}

// SetCameraCachePOV @ 1483a7b70

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
APlayerCameraManager::SetCameraCachePOV(APlayerCameraManager *this,FMinimalViewInfo *param_1)

{
  FMinimalViewInfo::operator=(&(this->CameraCachePrivate).POV,param_1);
  return;
}

// SetDesiredColorScale @ 1483a8a70

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
APlayerCameraManager::SetDesiredColorScale
          (APlayerCameraManager *this,TVector<double> *param_1,float param_2)

{
  TVector<double> *pTVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  UWorld *pUVar5;
  
  pTVar1 = &this->ColorScale;
  if (ZPULL(*(undefined4 *)&this->field_0x2810,5,1) == 0) {
    *(uint *)&this->field_0x2810 = *(undefined4 *)&this->field_0x2810 | 0x20;
    (pTVar1->field0_0x0)._s_0.X = 1.0;
    (this->ColorScale).field0_0x0._s_0.Y = 1.0;
    (this->ColorScale).field0_0x0._s_0.Z = 1.0;
  }
  if ((((pTVar1->field0_0x0)._s_0.X != (param_1->field0_0x0)._s_0.X) ||
      ((this->ColorScale).field0_0x0._s_0.Y != (param_1->field0_0x0)._s_0.Y)) ||
     ((this->ColorScale).field0_0x0._s_0.Z != (param_1->field0_0x0)._s_0.Z)) {
    dVar3 = (this->ColorScale).field0_0x0._s_0.Y;
    dVar2 = (this->ColorScale).field0_0x0._s_0.Z;
    (this->OriginalColorScale).field0_0x0._s_0.X = (pTVar1->field0_0x0)._s_0.X;
    (this->OriginalColorScale).field0_0x0._s_0.Y = dVar3;
    dVar3 = (param_1->field0_0x0)._s_0.X;
    dVar4 = (param_1->field0_0x0)._s_0.Y;
    (this->OriginalColorScale).field0_0x0._s_0.Z = dVar2;
    dVar2 = (param_1->field0_0x0)._s_0.Z;
    (this->DesiredColorScale).field0_0x0._s_0.X = dVar3;
    (this->DesiredColorScale).field0_0x0._s_0.Y = dVar4;
    (this->DesiredColorScale).field0_0x0._s_0.Z = dVar2;
    pUVar5 = AActor::GetWorld((AActor *)this);
    dVar2 = pUVar5->TimeSeconds;
    this->bEnableColorScaleInterp = 1;
    this->ColorScaleInterpDuration = param_2;
    this->ColorScaleInterpStartTime = (float)dVar2;
  }
  return;
}

// SetFOV @ 1483a8c20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall APlayerCameraManager::SetFOV(APlayerCameraManager *this,float param_1)

{
  this->LockedFOV = param_1;
  return;
}

// SetGameCameraCutThisFrame @ 1483a8d70

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall APlayerCameraManager::SetGameCameraCutThisFrame(APlayerCameraManager *this)

{
  this->bGameCameraCutThisFrame = 1;
  return;
}

// SetLastFrameCameraCachePOV @ 1483a9240

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
APlayerCameraManager::SetLastFrameCameraCachePOV
          (APlayerCameraManager *this,FMinimalViewInfo *param_1)

{
  FMinimalViewInfo::operator=(&(this->LastFrameCameraCachePrivate).POV,param_1);
  return;
}

// SetManualCameraFade @ 1483a9430

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
APlayerCameraManager::SetManualCameraFade
          (APlayerCameraManager *this,float param_1,FLinearColor *param_2,bool param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = (param_2->field0_0x0)._s_0.R;
  fVar3 = (param_2->field0_0x0)._s_0.G;
  fVar4 = (param_2->field0_0x0)._s_0.B;
  fVar5 = (param_2->field0_0x0)._s_0.A;
  this->FadeAmount = param_1;
  lVar1 = this->_padding_;
  *(uint *)&this->field_0x2810 = (uint)param_3 << 4 | *(uint *)&this->field_0x2810 & 0xffffdfef | 8;
  (this->FadeColor).field0_0x0._s_0.R = fVar2;
  (this->FadeColor).field0_0x0._s_0.G = fVar3;
  (this->FadeColor).field0_0x0._s_0.B = fVar4;
  (this->FadeColor).field0_0x0._s_0.A = fVar5;
  (**(code **)(lVar1 + 0x880))();
  this->FadeTimeRemaining = 0.0;
  return;
}

// SetOrthoWidth @ 1483a9b50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall APlayerCameraManager::SetOrthoWidth(APlayerCameraManager *this,float param_1)

{
  this->LockedOrthoWidth = param_1;
  return;
}

// SetViewTarget @ 1483ab780

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
APlayerCameraManager::SetViewTarget
          (APlayerCameraManager *this,AActor *param_1,FViewTargetTransitionParams *param_2)

{
  float fVar1;
  APlayerController *pAVar2;
  TEnumAsByte<EViewTargetBlendFunction> TVar3;
  undefined3 uVar4;
  undefined4 uVar5;
  char cVar6;
  ENetMode EVar7;
  UWorld *pUVar8;
  FTimerManager *pFVar9;
  FTimerData *pFVar10;
  UFunction *pUVar11;
  FMinimalViewInfo *pFVar12;
  FTViewTarget *this_00;
  bool bVar13;
  TObjectPtr<APlayerController>_u_0 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_1 == (AActor *)0x0) {
    param_1 = (AActor *)(this->PCOwner).field0_0x0.DebugPtr;
  }
  FTViewTarget::CheckViewTarget(&this->ViewTarget,(this->PCOwner).field0_0x0.DebugPtr);
  if ((this->PendingViewTarget).Target.field0_0x0.DebugPtr != (AActor *)0x0) {
    FTViewTarget::CheckViewTarget(&this->PendingViewTarget,(this->PCOwner).field0_0x0.DebugPtr);
  }
  pAVar2 = (APlayerController *)(this->PendingViewTarget).Target.field0_0x0.DebugPtr;
  if ((pAVar2 != (APlayerController *)0x0) && (pAVar2 == (APlayerController *)param_1)) {
    return;
  }
  pUVar8 = AActor::GetWorld((AActor *)this);
  if (pUVar8 != (UWorld *)0x0) {
    pFVar9 = UWorld::GetTimerManager(pUVar8);
    pFVar10 = FTimerManager::FindTimer
                        (pFVar9,&this->
                                 SwapPendingViewTargetWhenUsingClientSideCameraUpdatesTimerHandle);
    if (pFVar10 != (FTimerData *)0x0) {
      FTimerManager::InternalClearTimer
                (pFVar9,(FTimerHandle)
                        (this->SwapPendingViewTargetWhenUsingClientSideCameraUpdatesTimerHandle).
                        Handle);
    }
    (this->SwapPendingViewTargetWhenUsingClientSideCameraUpdatesTimerHandle).Handle = 0;
  }
  pAVar2 = (APlayerController *)(this->ViewTarget).Target.field0_0x0.DebugPtr;
  if (pAVar2 == (APlayerController *)0x0) {
    bVar13 = (APlayerController *)param_1 == (APlayerController *)0x0;
  }
  else {
    bVar13 = pAVar2 == (APlayerController *)param_1;
  }
  if (bVar13) {
    if ((this->PendingViewTarget).Target.field0_0x0.DebugPtr != (AActor *)0x0) {
      if ((this->BlendParams).bLockOutgoing != 0) goto LAB_1483ab91f;
      pAVar2 = (this->PCOwner).field0_0x0.DebugPtr;
      if (((((pAVar2->_padding_ & 0x20000000000) == 0) &&
           (((uint)pAVar2->_padding_ >> 0x1e & 1) == 0)) &&
          ((pAVar2 = (this->PCOwner).field0_0x0.DebugPtr, (pAVar2->_padding_ & 2) == 0 ||
           (cVar6 = (**(code **)(pAVar2->_padding_ + 0x7f0))(), cVar6 == '\0')))) &&
         (EVar7 = AActor::InternalGetNetMode((AActor *)this), EVar7 != NM_Client)) {
        uStack_40._0_4_ = param_2->BlendTime;
        uStack_40._4_1_ = param_2->BlendFunction;
        uStack_40._5_3_ = *(undefined3 *)&param_2->field_0x5;
        uStack_38 = *(undefined8 *)&param_2->BlendExp;
        pAVar2 = (this->PCOwner).field0_0x0.DebugPtr;
        local_48 = (TObjectPtr<APlayerController>_u_0)param_1;
        pUVar11 = UObject::FindFunctionChecked
                            ((UObject *)pAVar2,NAME_APlayerController_ClientSetViewTarget);
        (**(code **)(pAVar2->_padding_ + 0x260))(pAVar2,pUVar11,&local_48);
      }
    }
    (this->PendingViewTarget).Target.field0_0x0.DebugPtr = (AActor *)0x0;
  }
  else {
LAB_1483ab91f:
    this_00 = &this->ViewTarget;
    fVar1 = param_2->BlendTime;
    if (fVar1 <= 0.0) {
      local_48._0_5_ = 0x100000000;
      uStack_40 = CONCAT44(uStack_40._4_4_,0x40000000) & 0xfffffffeffffffff;
      (**(code **)(this->_padding_ + 0x7b0))(this,param_1,this_00,&local_48);
      FTViewTarget::CheckViewTarget(this_00,(this->PCOwner).field0_0x0.DebugPtr);
      (this->PendingViewTarget).Target.field0_0x0.DebugPtr = (AActor *)0x0;
    }
    else {
      if ((this->PendingViewTarget).Target.field0_0x0.DebugPtr == (AActor *)0x0) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pAVar2 != (APlayerController *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pAVar2);
        }
        (this->PendingViewTarget).Target.field0_0x0 = (this_00->Target).field0_0x0;
      }
      pFVar12 = (FMinimalViewInfo *)(**(code **)(this->_padding_ + 0x7a0))(this);
      FMinimalViewInfo::operator=(&(this->ViewTarget).POV,pFVar12);
      local_48.ObjectPtr.field0_0x0 = *(FObjectPtr *)param_2;
      uStack_40 = *(ulonglong *)&param_2->BlendExp;
      this->BlendTimeToGo = fVar1;
      (**(code **)(this->_padding_ + 0x7b0))(this,param_1,&this->PendingViewTarget,&local_48);
      FTViewTarget::CheckViewTarget(&this->PendingViewTarget,(this->PCOwner).field0_0x0.DebugPtr);
      EVar7 = AActor::InternalGetNetMode((AActor *)this);
      if ((((this->bUseClientSideCameraUpdates != 0) && (EVar7 != NM_Client)) &&
          (EVar7 != NM_Standalone)) &&
         (pUVar8 = AActor::GetWorld((AActor *)this), pUVar8 != (UWorld *)0x0)) {
        pFVar9 = UWorld::GetTimerManager(pUVar8);
        FTimerManager::SetTimer<APlayerCameraManager>
                  (pFVar9,&this->SwapPendingViewTargetWhenUsingClientSideCameraUpdatesTimerHandle,
                   this,(pmf_404311bc)0x1483afb00,fVar1,false,__real_bf800000);
      }
    }
  }
  TVar3.Value = (param_2->BlendFunction).Value;
  uVar4 = *(undefined3 *)&param_2->field_0x5;
  fVar1 = param_2->BlendExp;
  uVar5 = *(undefined4 *)&param_2->field_0xc;
  (this->BlendParams).BlendTime = param_2->BlendTime;
  (this->BlendParams).BlendFunction = (TEnumAsByte<EViewTargetBlendFunction>)TVar3.Value;
  *(undefined3 *)&(this->BlendParams).field_0x5 = uVar4;
  (this->BlendParams).BlendExp = fVar1;
  *(undefined4 *)&(this->BlendParams).field_0xc = uVar5;
  return;
}

// ShouldTickIfViewportsOnly @ 1483ac5b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall APlayerCameraManager::ShouldTickIfViewportsOnly(APlayerCameraManager *this)

{
  return (this->PCOwner).field0_0x0.DebugPtr != (APlayerController *)0x0;
}

// StartCameraFade @ 1483ae3e0

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
APlayerCameraManager::StartCameraFade
          (APlayerCameraManager *this,float param_1,float param_2,float param_3,
          FLinearColor *param_4,bool param_5,bool param_6)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  FReadAccessScope local_48 [2];
  
  uVar1 = *(uint *)&this->field_0x2810;
  uVar3 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
  *(undefined8 *)&(this->FadeColor).field0_0x0 = *(undefined8 *)&param_4->field0_0x0;
  *(undefined8 *)((longlong)&(this->FadeColor).field0_0x0 + 8) = uVar3;
  (this->FadeAlpha).field0_0x0._s_0.X = (double)param_1;
  (this->FadeAlpha).field0_0x0._s_0.Y = (double)param_2;
  this->FadeTime = param_3;
  this->FadeTimeRemaining = param_3;
  *(uint *)&this->field_0x2810 = (uint)param_5 << 4 | uVar1 & 0xffffffef | 8;
  if (param_5) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &this->OnAudioFadeChangeEvent,local_48);
    iVar2 = *(int *)&(this->OnAudioFadeChangeEvent).field_0x10;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (local_48);
    if (0 < iVar2) {
      if ((param_1 < param_2) ||
         ((float)((uint)(param_2 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
          __real_322bcc77)) {
        uVar4 = 1;
      }
      else {
        uVar4 = 0;
      }
      param_4._0_4_ = CONCAT31(param_4._1_3_,uVar4);
      param_4._4_4_ = this->FadeTime;
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
                 &this->OnAudioFadeChangeEvent,&param_4);
    }
  }
  *(uint *)&this->field_0x2810 = (param_6 | 2) << 0xc | *(uint *)&this->field_0x2810 & 0xffffefff;
  return;
}

// StartCameraShake @ 1483ae530

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UCameraShakeBase * __thiscall
APlayerCameraManager::StartCameraShake
          (APlayerCameraManager *this,TSubclassOf<UCameraShakeBase> param_1,
          FAddCameraShakeParams *param_2)

{
  int iVar1;
  longlong lVar2;
  UCameraModifier_CameraShake *pUVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  UCameraShakeBase *pUVar7;
  UObject *local_res10;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if ((lVar2 != 0) &&
     (pUVar6 = Z_Construct_UClass_UCameraShakeBase_NoRegister(), pUVar6 != (UClass *)0x0)) {
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(lVar2 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar6->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (((bVar5) &&
        (local_res10 = *(UObject **)param_1.Class.field0_0x0, local_res10 != (UObject *)0x0)) &&
       (pUVar3 = (this->CachedCameraShakeMod).field0_0x0.DebugPtr,
       pUVar3 != (UCameraModifier_CameraShake *)0x0)) {
      pcVar4 = *(code **)(pUVar3->_padding_ + 800);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(local_res10);
      }
      pUVar7 = (UCameraShakeBase *)(*pcVar4)(pUVar3,&local_res10,param_2);
      return pUVar7;
    }
  }
  return (UCameraShakeBase *)0x0;
}

// StartCameraShake @ 1483ae5e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UCameraShakeBase * __thiscall
APlayerCameraManager::StartCameraShake
          (APlayerCameraManager *this,TSubclassOf<UCameraShakeBase> param_1,float param_2,
          ECameraShakePlaySpace param_3,TRotator<double> *param_4)

{
  code *pcVar1;
  UCameraShakeBase *pUVar2;
  FDestructionSentinel local_68;
  float local_50;
  ECameraShakePlaySpace local_4c;
  double local_48;
  double dStack_40;
  double local_38;
  undefined8 local_30;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> TStack_28;
  ForAnyElementType local_20;
  int local_18;
  undefined1 local_c;
  
  local_20.Data = (FScriptContainerElement *)0x0;
  local_48 = param_4->Pitch;
  dStack_40 = param_4->Yaw;
  local_18 = 0;
  local_38 = param_4->Roll;
  param_4 = *(TRotator<double> **)param_1.Class.field0_0x0;
  local_c = 0;
  pcVar1 = *(code **)(this->_padding_ + 0x8c8);
  local_30 = 0;
  TStack_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_50 = param_2;
  local_4c = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending) && ((UObject *)param_4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_4);
  }
  pUVar2 = (UCameraShakeBase *)(*pcVar1)(this,&param_4,&local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&TStack_28,(FWriteAccessScope *)&local_68);
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
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&TStack_28.AccessDetector);
  return pUVar2;
}

// StartCameraShakeFromSource @ 1483ae700

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UCameraShakeBase * __thiscall
APlayerCameraManager::StartCameraShakeFromSource
          (APlayerCameraManager *this,TSubclassOf<UCameraShakeBase> param_1,
          UCameraShakeSourceComponent *param_2,float param_3,ECameraShakePlaySpace param_4,
          TRotator<double> *param_5)

{
  code *pcVar1;
  UCameraShakeBase *pUVar2;
  FDestructionSentinel local_68;
  float local_50;
  ECameraShakePlaySpace local_4c;
  double local_48;
  double dStack_40;
  double local_38;
  UCameraShakeSourceComponent *local_30;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  int local_18;
  undefined1 local_c;
  
  local_4c = param_4;
  local_18 = 0;
  local_48 = param_5->Pitch;
  dStack_40 = param_5->Yaw;
  local_c = 0;
  local_38 = param_5->Roll;
  param_5 = *(TRotator<double> **)param_1.Class.field0_0x0;
  pcVar1 = *(code **)(this->_padding_ + 0x8c8);
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  local_50 = param_3;
  local_30 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending) && ((UObject *)param_5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_5);
  }
  pUVar2 = (UCameraShakeBase *)(*pcVar1)(this,&param_5,&local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_68);
  if ((local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  return pUVar2;
}

// StaticRegisterNativesAPlayerCameraManager @ 1483af5f0

void __cdecl APlayerCameraManager::StaticRegisterNativesAPlayerCameraManager(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x1b;
  local_18.DataPtr = Z_Construct_UClass_APlayerCameraManager_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopAllCameraShakes @ 1483af7e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall APlayerCameraManager::StopAllCameraShakes(APlayerCameraManager *this,bool param_1)

{
  UCameraModifier_CameraShake *pUVar1;
  
  pUVar1 = (this->CachedCameraShakeMod).field0_0x0.DebugPtr;
  if (pUVar1 != (UCameraModifier_CameraShake *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001483af7ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x350))();
    return;
  }
  return;
}

// StopAllCameraShakesFromSource @ 1483af800

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
APlayerCameraManager::StopAllCameraShakesFromSource
          (APlayerCameraManager *this,UCameraShakeSourceComponent *param_1,bool param_2)

{
  UCameraModifier_CameraShake *pUVar1;
  
  if ((param_1 != (UCameraShakeSourceComponent *)0x0) &&
     (pUVar1 = (this->CachedCameraShakeMod).field0_0x0.DebugPtr,
     pUVar1 != (UCameraModifier_CameraShake *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001483af814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x340))();
    return;
  }
  return;
}

// StopAllInstancesOfCameraShake @ 1483af830

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
APlayerCameraManager::StopAllInstancesOfCameraShake
          (APlayerCameraManager *this,TSubclassOf<UCameraShakeBase> param_1,bool param_2)

{
  int iVar1;
  longlong lVar2;
  UCameraModifier_CameraShake *pUVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  UObject *local_res10;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar6 = Z_Construct_UClass_UCameraShakeBase_NoRegister();
    if (pUVar6 != (UClass *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (((bVar5) &&
          (local_res10 = *(UObject **)param_1.Class.field0_0x0, local_res10 != (UObject *)0x0)) &&
         (pUVar3 = (this->CachedCameraShakeMod).field0_0x0.DebugPtr,
         pUVar3 != (UCameraModifier_CameraShake *)0x0)) {
        pcVar4 = *(code **)(pUVar3->_padding_ + 0x338);
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(local_res10);
        }
        (*pcVar4)(pUVar3,&local_res10,param_2);
      }
    }
  }
  return;
}

// StopAllInstancesOfCameraShakeFromSource @ 1483af8e0

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
APlayerCameraManager::StopAllInstancesOfCameraShakeFromSource
          (APlayerCameraManager *this,TSubclassOf<UCameraShakeBase> param_1,
          UCameraShakeSourceComponent *param_2,bool param_3)

{
  int iVar1;
  longlong lVar2;
  UCameraModifier_CameraShake *pUVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  UObject *local_res10;
  
  lVar2 = *(longlong *)param_1.Class.field0_0x0;
  if (lVar2 != 0) {
    pUVar6 = Z_Construct_UClass_UCameraShakeBase_NoRegister();
    if (pUVar6 != (UClass *)0x0) {
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(lVar2 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((((bVar5) &&
           (local_res10 = *(UObject **)param_1.Class.field0_0x0, local_res10 != (UObject *)0x0)) &&
          (param_2 != (UCameraShakeSourceComponent *)0x0)) &&
         (pUVar3 = (this->CachedCameraShakeMod).field0_0x0.DebugPtr,
         pUVar3 != (UCameraModifier_CameraShake *)0x0)) {
        pcVar4 = *(code **)(pUVar3->_padding_ + 0x348);
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(local_res10);
        }
        (*pcVar4)(pUVar3,&local_res10,param_2,param_3);
      }
    }
  }
  return;
}

// StopAudioFade @ 1483af9a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall APlayerCameraManager::StopAudioFade(APlayerCameraManager *this)

{
  int iVar1;
  UWorld *this_00;
  FAudioDevice *this_01;
  undefined1 local_res8 [4];
  undefined4 local_resc;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->OnAudioFadeChangeEvent
             ,&local_28);
  iVar1 = *(int *)&(this->OnAudioFadeChangeEvent).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (0 < iVar1) {
    local_res8[0] = 0;
    local_resc = 0;
    TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->OnAudioFadeChangeEvent
               ,local_res8);
    return;
  }
  if (GEngine != (UEngine *)0x0) {
    this_00 = AActor::GetWorld((AActor *)this);
    if (this_00 != (UWorld *)0x0) {
      this_01 = UWorld::GetAudioDeviceRaw(this_00);
      if (this_01 != (FAudioDevice *)0x0) {
        FAudioDevice::SetTransientPrimaryVolume(this_01,__real_3f800000);
      }
    }
  }
  return;
}

// StopCameraFade @ 1483afa50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall APlayerCameraManager::StopCameraFade(APlayerCameraManager *this)

{
  double dVar1;
  
  if (ZPULL(*(undefined4 *)&this->field_0x2810,3,1) != 0) {
    dVar1 = (this->FadeAlpha).field0_0x0._s_0.Y;
    *(uint *)&this->field_0x2810 = *(undefined4 *)&this->field_0x2810 & 0xfffffff7;
    this->FadeAmount = (float)dVar1;
                    /* WARNING: Could not recover jumptable at 0x0001483afa7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x880))();
    return;
  }
  return;
}

// StopCameraShake @ 1483afa90

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
APlayerCameraManager::StopCameraShake
          (APlayerCameraManager *this,UCameraShakeBase *param_1,bool param_2)

{
  UCameraModifier_CameraShake *pUVar1;
  
  if ((param_1 != (UCameraShakeBase *)0x0) &&
     (pUVar1 = (this->CachedCameraShakeMod).field0_0x0.DebugPtr,
     pUVar1 != (UCameraModifier_CameraShake *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001483afaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x330))();
    return;
  }
  return;
}

// SwapPendingViewTargetWhenUsingClientSideCameraUpdates @ 1483afb00

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
APlayerCameraManager::SwapPendingViewTargetWhenUsingClientSideCameraUpdates
          (APlayerCameraManager *this)

{
  AActor *pAVar1;
  undefined4 local_18;
  undefined1 uStack_14;
  undefined3 uStack_13;
  undefined4 uStack_10;
  uint uStack_c;
  
  pAVar1 = (this->PendingViewTarget).Target.field0_0x0.DebugPtr;
  if (pAVar1 != (AActor *)0x0) {
    uStack_c = uStack_c & 0xfffffffe;
    _uStack_14 = CONCAT31(uStack_13,1);
    local_18 = 0;
    uStack_10 = 0x40000000;
    (**(code **)(this->_padding_ + 0x7b0))(0,pAVar1,&this->ViewTarget,&local_18);
    FTViewTarget::CheckViewTarget(&this->ViewTarget,(this->PCOwner).field0_0x0.DebugPtr);
    (this->PendingViewTarget).Target.field0_0x0.DebugPtr = (AActor *)0x0;
  }
  return;
}

// UnlockFOV @ 1483b2b40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall APlayerCameraManager::UnlockFOV(APlayerCameraManager *this)

{
  this->LockedFOV = 0.0;
  return;
}

// UnlockOrthoWidth @ 1483b2b60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall APlayerCameraManager::UnlockOrthoWidth(APlayerCameraManager *this)

{
  this->LockedOrthoWidth = 0.0;
  return;
}

// UpdateCamera @ 1483b4550

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall APlayerCameraManager::UpdateCamera(APlayerCameraManager *this,float param_1)

{
  int *piVar1;
  float fVar2;
  APlayerController *pAVar3;
  UObject *pUVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  ENetMode EVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_ServerUpdateCamera> FVar13;
  UClass *this_00;
  TVector<double> *pTVar14;
  TVector<double> *pTVar15;
  UFunction *pUVar16;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FColor_u_0 FVar17;
  FName FVar18;
  uint uVar19;
  FColor_u_0 FVar20;
  float fVar21;
  undefined4 in_XMM1_Db;
  double dVar22;
  double dVar23;
  uint uVar24;
  uint uVar25;
  FColor_u_0 local_res8;
  uint uStackX_c;
  undefined1 local_res18 [8];
  FColor_u_0 local_res20;
  uint local_res24;
  LARGE_INTEGER local_108;
  FStatMessage local_100;
  TVector<double>_u_0 local_f0;
  TVector<double>_u_0 local_d8;
  double local_c0;
  double local_b8;
  double local_b0;
  uint local_a8;
  FName local_a0 [13];
  
  if (((this->PCOwner).field0_0x0.DebugPtr == (APlayerController *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("PCOwner != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PlayerCameraManager.cpp"
                         ,0x312,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pAVar3 = (this->PCOwner).field0_0x0.DebugPtr;
  if (((((pAVar3->Player).field0_0x0.DebugPtr == (UPlayer *)0x0) || ((pAVar3->_padding_ & 2) == 0))
      || (cVar10 = (**(code **)(pAVar3->_padding_ + 0x7f0))(), cVar10 == '\0')) &&
     (this->bUseClientSideCameraUpdates == 1 && this->bDebugClientSideCamera == 0)) {
    return;
  }
  (**(code **)(this->_padding_ + 0x858))(this,CONCAT44(in_XMM1_Db,param_1));
  fVar21 = AActor::GetActorTimeDilation((AActor *)this);
  if (fVar21 <= __real_38d1b717) {
    fVar21 = __real_38d1b717;
  }
  this->TimeSinceLastServerUpdateCamera = param_1 / fVar21 + this->TimeSinceLastServerUpdateCamera;
  if (this->bShouldSendClientSideCameraUpdate == 0) {
    return;
  }
  if (this->_padding_ != 0) {
    FNameEntryId::FromValidEName((EName)local_res18);
  }
  EVar11 = AActor::InternalGetNetMode((AActor *)this);
  if (EVar11 != NM_Client) {
    return;
  }
  FVar20.Bits = 0;
  FVar13 = StatPtr_STAT_ServerUpdateCamera;
  if (StatPtr_STAT_ServerUpdateCamera == (FThreadSafeStaticStat<FStat_STAT_ServerUpdateCamera>)0x0)
  {
    pFVar12 = ::FName::FName(local_a0,"STAT_ServerUpdateCamera");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_ServerUpdateCamera>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ServerUpdateCamera,*pFVar12,
                        L"ServerUpdateCamera","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar13;
  bVar9 = false;
  bVar8 = false;
  FVar17.Bits = (uint)FVar18.ComparisonIndex.Value;
  uVar19 = FVar18.Number;
  if ((FVar17.Bits != 0) || (uVar19 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar9 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.Bits = FVar17.Bits;
        local_res24 = uVar19;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res20._s_0,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PlayerCameraManager.cpp"
                   ,0x31e);
        bVar9 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.Bits = FVar17.Bits;
      uStackX_c = uVar19;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar7 = true;
      FVar20.Bits = FVar17.Bits;
      goto LAB_1483b47eb;
    }
  }
  bVar7 = false;
  FVar18.ComparisonIndex.Value = 0;
  FVar18.Number = 0;
LAB_1483b47eb:
  this_00 = Z_Construct_UClass_AGameNetworkManager_NoRegister();
  if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_00);
  }
  pUVar4 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
  fVar21 = *(float *)&pUVar4[0x14].field_0x20;
  fVar2 = *(float *)&pUVar4[0x14].field_0x24;
  pTVar14 = (TVector<double> *)(**(code **)(this->_padding_ + 0x798))(this);
  pTVar15 = (TVector<double> *)(**(code **)(this->_padding_ + 0x7a0))(this);
  FRepMovement::RebaseOntoZeroOrigin((TVector<double> *)&local_f0._s_0,pTVar14,(AActor *)this);
  FRepMovement::RebaseOntoZeroOrigin((TVector<double> *)&local_d8._s_0,pTVar15,(AActor *)this);
  dVar6 = local_f0._s_0.X - local_d8._s_0.X;
  dVar23 = local_f0._s_0.Y - local_d8._s_0.Y;
  dVar22 = local_f0._s_0.Z - local_d8._s_0.Z;
  if ((((double)(fVar2 * fVar2) < dVar23 * dVar23 + dVar6 * dVar6 + dVar22 * dVar22) ||
      (fVar21 < this->TimeSinceLastServerUpdateCamera)) &&
     ((uVar19 = (int)((longlong)
                      ROUND(pTVar14[1].field0_0x0._s_0.Y * __real_4076c16c16c16c17 +
                            __real_3fe0000000000000) >> 1) << 0x10 |
                (uint)((longlong)
                       ROUND(pTVar14[1].field0_0x0._s_0.X * __real_4076c16c16c16c17 +
                             __real_3fe0000000000000) >> 1) & 0xffff,
      uVar19 != ((int)((longlong)
                       ROUND(pTVar15[1].field0_0x0._s_0.Y * __real_4076c16c16c16c17 +
                             __real_3fe0000000000000) >> 1) << 0x10 |
                (uint)((longlong)
                       ROUND(pTVar15[1].field0_0x0._s_0.X * __real_4076c16c16c16c17 +
                             __real_3fe0000000000000) >> 1) & 0xffff) ||
      ((((uVar24 = SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar25 = (uint)((ulonglong)dVar6 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar25,uVar24) &&
         (double)CONCAT44(uVar25,uVar24) != __real_3f1a36e2e0000000 ||
         (__real_3f1a36e2e0000000 <
          (double)CONCAT44((uint)((ulonglong)dVar23 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar23,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
        (__real_3f1a36e2e0000000 <
         (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(dVar22,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
       (this->ServerUpdateCameraTimeout < this->TimeSinceLastServerUpdateCamera)))))) {
    pAVar3 = (this->PCOwner).field0_0x0.DebugPtr;
    local_c0 = local_f0._s_0.X;
    local_b8 = local_f0._s_0.Y;
    local_b0 = local_f0._s_0.Z;
    local_a8 = uVar19;
    pUVar16 = UObject::FindFunctionChecked
                        ((UObject *)pAVar3,NAME_APlayerController_ServerUpdateCamera);
    (**(code **)(pAVar3->_padding_ + 0x260))(pAVar3,pUVar16);
    this->TimeSinceLastServerUpdateCamera = 0.0;
  }
  this->bShouldSendClientSideCameraUpdate = 0;
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar7) && (FVar18 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_100.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      local_100.NameAndInfo.Index.Value = FVar20.Bits;
      QueryPerformanceCounter(&local_108);
      local_100.StatData.Pad[4] = '\0';
      local_100.StatData.Pad[5] = '\0';
      local_100.StatData.Pad[6] = '\0';
      local_100.StatData.Pad[7] = '\0';
      local_100.StatData.Pad[0] = local_108.s.LowPart._0_1_;
      local_100.StatData.Pad[1] = local_108.s.LowPart._1_1_;
      local_100.StatData.Pad[2] = local_108.s.LowPart._2_1_;
      local_100.StatData.Pad[3] = local_108.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_100);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
  return;
}

// UpdateCameraLensEffects @ 1483b4b20

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
APlayerCameraManager::UpdateCameraLensEffects(APlayerCameraManager *this,FTViewTarget *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (0 < (this->CameraLensEffects).ArrayNum) {
    lVar6 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->CameraLensEffects).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->CameraLensEffects).AllocatorInstance.Data;
      if ((*(longlong *)(pFVar1 + lVar6) != 0) && (*(longlong *)(pFVar1 + lVar6 + 8) != 0)) {
        uVar4 = 0;
        if ((int)uVar7 < (this->CameraLensEffects).ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar1 = (this->CameraLensEffects).AllocatorInstance.Data;
        if (*(longlong *)(pFVar1 + lVar6) == 0) {
          plVar5 = (longlong *)0x0;
        }
        else {
          plVar5 = *(longlong **)(pFVar1 + lVar6 + 8);
        }
        (**(code **)(*plVar5 + 0x70))
                  (plVar5,&param_1->POV,&(param_1->POV).Rotation,(param_1->POV).FOV);
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while ((int)uVar7 < (this->CameraLensEffects).ArrayNum);
  }
  return;
}

// UpdateCameraPhotographyOnly @ 1483b4c90

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

void __thiscall APlayerCameraManager::UpdateCameraPhotographyOnly(APlayerCameraManager *this)

{
  float fVar1;
  double dVar2;
  longlong lVar3;
  byte bVar4;
  UWorld *pUVar5;
  undefined8 uVar6;
  undefined1 auStack_928 [32];
  FMinimalViewInfo local_908;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_928;
  FMinimalViewInfo::FMinimalViewInfo(&local_908,&(this->ViewTarget).POV);
  bVar4 = (**(code **)(this->_padding_ + 0x860))(this,&local_908);
  fVar1 = (this->CameraCachePrivate).TimeStamp;
  *(uint *)&this->field_0x2810 =
       ((uint)bVar4 << 0xb ^ *(uint *)&this->field_0x2810) & 0x800 ^ *(uint *)&this->field_0x2810;
  pUVar5 = AActor::GetWorld((AActor *)this);
  dVar2 = pUVar5->TimeSeconds;
  if (fVar1 != (float)dVar2) {
    lVar3 = this->_padding_;
    uVar6 = (**(code **)(lVar3 + 0x798))(this);
    (**(code **)(lVar3 + 0x790))(this,uVar6);
    (this->LastFrameCameraCachePrivate).TimeStamp = fVar1;
  }
  (**(code **)(this->_padding_ + 0x788))(this,&local_908);
  (this->CameraCachePrivate).TimeStamp = (float)dVar2;
  if (local_908.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_908.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data);
  }
  return;
}

// UpdatePhotographyCamera @ 1483b6960

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
APlayerCameraManager::UpdatePhotographyCamera(APlayerCameraManager *this,FMinimalViewInfo *param_1)

{
  bool bVar1;
  FCameraPhotographyManager *this_00;
  
  this_00 = FCameraPhotographyManager::Get();
  bVar1 = FCameraPhotographyManager::UpdateCamera(this_00,param_1,this);
  return bVar1;
}

// UpdatePhotographyPostProcessing @ 1483b69a0

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
APlayerCameraManager::UpdatePhotographyPostProcessing
          (APlayerCameraManager *this,FPostProcessSettings *param_1)

{
  FCameraPhotographyManager *this_00;
  
  this_00 = FCameraPhotographyManager::Get();
  FCameraPhotographyManager::UpdatePostProcessing(this_00,param_1);
  return;
}

// UpdateViewTarget @ 1483b8680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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
APlayerCameraManager::UpdateViewTarget
          (APlayerCameraManager *this,FTViewTarget *param_1,float param_2)

{
  undefined1 *puVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 uVar5;
  longlong lVar6;
  AActor *pAVar7;
  longlong *plVar8;
  FName FVar9;
  APlayerController *pAVar10;
  USceneComponent *pUVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  UClass *pUVar19;
  TVector<double>_u_0 *pTVar20;
  undefined4 *puVar21;
  double *pdVar22;
  TVector<double> *pTVar23;
  FName *pFVar24;
  UWorld *this_00;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 in_XMM2_Db;
  double dVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 auStackY_c68 [32];
  TVector<double>_u_0 local_c08;
  undefined1 local_be8 [24];
  undefined4 uStack_bd0;
  undefined1 uStack_bcc;
  undefined2 uStack_bcb;
  undefined1 uStack_bc9;
  TVector<double>_u_0 local_bc8;
  TVector<double>_u_0 local_ba8;
  TStatId local_b90;
  double local_b88;
  double dStack_b80;
  double local_b78;
  double local_b68;
  double dStack_b60;
  double local_b58;
  double local_b48;
  double dStack_b40;
  double local_b38;
  double local_b28;
  double dStack_b20;
  double local_b18;
  FHitResult local_b08;
  FCollisionQueryParams local_a08;
  FMinimalViewInfo local_978;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_c68;
  if (((((this->PendingViewTarget).Target.field0_0x0.DebugPtr != (AActor *)0x0) &&
       ((this->BlendParams).bLockOutgoing != 0)) &&
      ((param_1->Target).field0_0x0.DebugPtr == (this->ViewTarget).Target.field0_0x0.DebugPtr)) &&
     (((param_1->PlayerState).field0_0x0.DebugPtr ==
       (this->ViewTarget).PlayerState.field0_0x0.DebugPtr &&
      (bVar18 = FMinimalViewInfo::Equals(&param_1->POV,&(this->ViewTarget).POV), bVar18)))) {
    return;
  }
  FMinimalViewInfo::FMinimalViewInfo(&local_978,&param_1->POV);
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar6 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FMinimalViewInfo::FMinimalViewInfo(&DefaultViewInfo);
    atexit(`APlayerCameraManager::UpdateViewTarget'::__l2::
           _dynamic_atexit_destructor_for__DefaultViewInfo__);
    _Init_thread_footer(&::_TSS0);
  }
  FMinimalViewInfo::operator=(&param_1->POV,&DefaultViewInfo);
  (param_1->POV).FOV = this->DefaultFOV;
  (param_1->POV).OrthoWidth = this->DefaultOrthoWidth;
  (param_1->POV).AspectRatio = this->DefaultAspectRatio;
  puVar1 = &(param_1->POV).field_0x68;
  *(uint *)puVar1 =
       *(uint *)puVar1 ^
       (this->bDefaultConstrainAspectRatio ^ (param_1->POV).bConstrainAspectRatio) & 1;
  (param_1->POV).PostProcessBlendWeight = 1.0;
  (param_1->POV).ProjectionMode.Value = this->bIsOrthographic;
  (param_1->POV).bAutoCalculateOrthoPlanes = this->bAutoCalculateOrthoPlanes;
  (param_1->POV).AutoPlaneShift = this->AutoPlaneShift;
  (param_1->POV).bUpdateOrthoPlanes = this->bUpdateOrthoPlanes;
  (param_1->POV).bUseCameraHeightAsViewTarget = this->bUseCameraHeightAsViewTarget;
  if ((param_1->Target).field0_0x0.DebugPtr == (AActor *)0x0) {
LAB_1483b884f:
    if ((*(int *)(lVar6 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&NAME_Fixed,L"Fixed");
      _Init_thread_footer(&::_TSS1);
    }
    if ((*(int *)(lVar6 + 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
      ::FName::FName(&NAME_ThirdPerson,L"ThirdPerson");
      _Init_thread_footer(&::_TSS2);
    }
    if ((*(int *)(lVar6 + 0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
      ::FName::FName(&NAME_FreeCam,L"FreeCam");
      _Init_thread_footer(&::_TSS3);
    }
    if ((*(int *)(lVar6 + 0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
      ::FName::FName(&NAME_FreeCam_Default,L"FreeCam_Default");
      _Init_thread_footer(&::_TSS4);
    }
    if ((*(int *)(lVar6 + 0x9d4c) < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
      ::FName::FName(&NAME_FirstPerson,L"FirstPerson");
      _Init_thread_footer(&::_TSS5);
    }
    FVar9 = this->CameraStyle;
    if (FVar9 == NAME_Fixed) {
      FMinimalViewInfo::operator=(&param_1->POV,&local_978);
    }
    else if (((FVar9 == NAME_ThirdPerson) || (FVar9 == NAME_FreeCam)) ||
            (FVar9 == NAME_FreeCam_Default)) {
      pAVar7 = (param_1->Target).field0_0x0.DebugPtr;
      pUVar11 = (pAVar7->RootComponent).field0_0x0.DebugPtr;
      local_ba8._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      local_ba8._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      local_ba8._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      local_ba8._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      local_ba8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (pUVar11 != (USceneComponent *)0x0) {
        local_ba8._0_4_ = *(undefined4 *)(pUVar11->ComponentToWorld).Translation.XY.m128d_f64;
        local_ba8._4_4_ = *(undefined4 *)((longlong)&(pUVar11->ComponentToWorld).Translation.XY + 4)
        ;
        local_ba8._8_4_ = *(undefined4 *)((longlong)&(pUVar11->ComponentToWorld).Translation.XY + 8)
        ;
        local_ba8._12_4_ =
             *(undefined4 *)((longlong)&(pUVar11->ComponentToWorld).Translation.XY + 0xc);
        local_ba8._s_0.Z = (pUVar11->ComponentToWorld).Translation.ZW.m128d_f64[0];
      }
      pUVar11 = (pAVar7->RootComponent).field0_0x0.DebugPtr;
      if (pUVar11 == (USceneComponent *)0x0) {
        pTVar20 = &local_c08;
        local_c08._s_0.X = UE::Math::TRotator<double>::ZeroRotator.Pitch;
        local_c08._s_0.Y = UE::Math::TRotator<double>::ZeroRotator.Yaw;
        local_c08._s_0.Z = UE::Math::TRotator<double>::ZeroRotator.Roll;
      }
      else {
        pTVar20 = (TVector<double>_u_0 *)
                  USceneComponent::GetComponentRotation(pUVar11,(TRotator<double> *)local_be8);
      }
      pAVar10 = (this->PCOwner).field0_0x0.DebugPtr;
      local_bc8._s_0.X = (pTVar20->_s_0).X;
      local_bc8._s_0.Y = (pTVar20->_s_0).Y;
      local_bc8._s_0.Z = (pTVar20->_s_0).Z;
      if ((APlayerController *)(param_1->Target).field0_0x0.DebugPtr == pAVar10) {
        puVar21 = (undefined4 *)(**(code **)(pAVar10->_padding_ + 0xf20))(pAVar10,local_be8);
        local_ba8._0_4_ = *puVar21;
        local_ba8._4_4_ = puVar21[1];
        local_ba8._8_4_ = puVar21[2];
        local_ba8._12_4_ = puVar21[3];
        local_ba8._s_0.Z = (double)*(undefined8 *)(puVar21 + 4);
      }
      if ((this->CameraStyle == NAME_FreeCam) || (this->CameraStyle == NAME_FreeCam_Default)) {
        pAVar10 = (this->PCOwner).field0_0x0.DebugPtr;
        pdVar22 = (double *)(**(code **)(pAVar10->_padding_ + 0x7a8))(pAVar10,local_be8);
        local_bc8._s_0.X = *pdVar22;
        local_bc8._s_0.Y = pdVar22[1];
        local_bc8._s_0.Z = pdVar22[2];
      }
      dVar17 = (double)CONCAT44(local_ba8._12_4_,local_ba8._8_4_);
      dVar16 = (double)CONCAT44(local_ba8._4_4_,local_ba8._0_4_);
      dVar13 = local_ba8._s_0.Z + (this->ViewTargetOffset).field0_0x0._s_0.Z;
      dVar27 = (this->ViewTargetOffset).field0_0x0._s_0.Y;
      dVar2 = (this->ViewTargetOffset).field0_0x0._s_0.X;
      UE::Math::TRotationTranslationMatrix<double>::TRotationTranslationMatrix<double>
                ((TRotationTranslationMatrix<double> *)&local_b88,
                 (TRotator<double> *)&local_bc8._s_0,&UE::Math::TVector<double>::ZeroVector);
      dVar14 = (this->FreeCamOffset).field0_0x0._s_0.X;
      dVar15 = (this->FreeCamOffset).field0_0x0._s_0.Y;
      dVar3 = (this->FreeCamOffset).field0_0x0._s_0.Z;
      pTVar23 = UE::Math::TRotator<double>::Vector
                          ((TRotator<double> *)&local_bc8._s_0,(TVector<double> *)local_be8);
      dVar12 = (double)this->FreeCamDistance;
      local_c08._s_0.Z =
           (local_b58 * dVar15 + local_b78 * dVar14 + local_b38 * dVar3 + local_b18 * 0.0 + dVar13)
           - dVar12 * (pTVar23->field0_0x0)._s_0.Z;
      local_c08._s_0.Y =
           (dStack_b60 * dVar15 + dStack_b80 * dVar14 + dStack_b40 * dVar3 + dStack_b20 * 0.0 +
           dVar17 + dVar27) - dVar12 * (pTVar23->field0_0x0)._s_0.Y;
      local_c08._s_0.X =
           (local_b68 * dVar15 + local_b88 * dVar14 + local_b48 * dVar3 + local_b28 * 0.0 +
           dVar16 + dVar2) - dVar12 * (pTVar23->field0_0x0)._s_0.X;
      if ((*(int *)(lVar6 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        StatPtr_FreeCam =
             (FThreadSafeStaticStat<_public:___cdecl__protected:_virtual_void___cdecl_APlayerCameraManager::UpdateViewTarget(FTViewTarget_&,float)_::_17_::<lambda_2>::operator()(void)const_::_2_::FStat_FreeCam>
              )0x0;
        pFVar24 = ::FName::FName((FName *)local_be8,"FreeCam");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_FreeCam,*pFVar24,L"FreeCam",
                   "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,
                   true,false,MCR_Invalid);
        _Init_thread_footer(&::_TSS0);
      }
      local_b90.StatIdPtr = (TStatIdData *)StatPtr_FreeCam;
      if (StatPtr_FreeCam ==
          (FThreadSafeStaticStat<_public:___cdecl__protected:_virtual_void___cdecl_APlayerCameraManager::UpdateViewTarget(FTViewTarget_&,float)_::_17_::<lambda_2>::operator()(void)const_::_2_::FStat_FreeCam>
           )0x0) {
        pFVar24 = ::FName::FName((FName *)local_be8,"FreeCam");
        local_b90.StatIdPtr =
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_FreeCam,*pFVar24,L"FreeCam",
                        "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,
                        ST_int64,true,false,MCR_Invalid);
      }
      if ((*(int *)(lVar6 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        ::FName::FName(&::StaticName,"FreeCam");
        _Init_thread_footer(&::_TSS0);
      }
      FCollisionQueryParams::FCollisionQueryParams
                (&local_a08,::StaticName,&local_b90,false,(AActor *)this);
      FCollisionQueryParams::AddIgnoredActor(&local_a08,(param_1->Target).field0_0x0.DebugPtr);
      memset(&local_b08,0,0x100);
      uStack_bcb = 0;
      local_b08.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
      local_b08.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
      local_b08.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
      local_b08.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
      uStack_bc9 = 0;
      local_be8._16_8_ = 0.0;
      uStack_bd0 = 0xffffffff;
      uStack_bcc = 0;
      local_b08.HitObjectHandle.InstanceIndex = -1;
      local_b08.HitObjectHandle.ResolutionStatus = Invalid;
      local_b08.HitObjectHandle._29_3_ = 0;
      local_b08.Time = 1.0;
      local_b08.MyItem = -1;
      local_b08.HitObjectHandle.ManagerInterface.InterfaceInstance =
           (IActorInstanceManagerInterface *)0x0;
      this_00 = AActor::GetWorld((AActor *)this);
      local_be8._0_4_ = 1;
      local_be8._4_4_ = 12.0;
      local_be8._8_4_ = 12.0;
      local_be8._12_4_ = 12.0;
      UWorld::SweepSingleByChannel
                (this_00,&local_b08,(TVector<double> *)&local_ba8._s_0,
                 (TVector<double> *)&local_c08._s_0,&UE::Math::TQuat<double>::Identity,ECC_Camera,
                 (FCollisionShape *)local_be8,&local_a08,
                 &FCollisionResponseParams::DefaultResponseParam);
      pTVar20 = &local_c08;
      if (local_b08.bBlockingHit != 0) {
        pTVar20 = (TVector<double>_u_0 *)&local_b08.Location;
      }
      dVar27 = pTVar20->XYZ[2];
      dVar2 = pTVar20->XYZ[1];
      (param_1->POV).Location.field0_0x0._s_0.X = (pTVar20->_s_0).X;
      (param_1->POV).Location.field0_0x0._s_0.Y = dVar2;
      (param_1->POV).Location.field0_0x0._s_0.Z = dVar27;
      (param_1->POV).Rotation.Pitch = local_bc8._s_0.X;
      (param_1->POV).Rotation.Yaw = local_bc8._s_0.Y;
      (param_1->POV).Rotation.Roll = local_bc8._s_0.Z;
      if (local_a08.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_a08.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
      }
      if (local_a08.IgnoreComponents.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_a08.IgnoreComponents.AllocatorInstance.SecondaryData);
      }
    }
    else {
      if (FVar9 != NAME_FirstPerson) {
        (**(code **)(this->_padding_ + 0x940))(this,param_1,CONCAT44(in_XMM2_Db,param_2));
        goto LAB_1483b8f22;
      }
      pAVar7 = (param_1->Target).field0_0x0.DebugPtr;
      (**(code **)(pAVar7->_padding_ + 0x720))(pAVar7,&param_1->POV,&(param_1->POV).Rotation);
    }
    if (this->bAlwaysApplyModifiers == 0) goto LAB_1483b8f36;
  }
  else {
    pUVar19 = Z_Construct_UClass_ACameraActor_NoRegister();
    bVar18 = FObjectPtr::IsA((FObjectPtr *)param_1,pUVar19);
    if ((!bVar18) || (pAVar7 = (param_1->Target).field0_0x0.DebugPtr, pAVar7 == (AActor *)0x0))
    goto LAB_1483b884f;
    plVar8 = (longlong *)pAVar7[1]._padding_;
    (**(code **)(*plVar8 + 0x660))(plVar8,param_2,&param_1->POV);
  }
LAB_1483b8f22:
  (**(code **)(this->_padding_ + 0x7f0))(this,param_2,&param_1->POV);
LAB_1483b8f36:
  local_c08._s_0.X = (param_1->POV).Rotation.Pitch;
  local_c08._s_0.Y = (param_1->POV).Rotation.Yaw;
  local_c08._s_0.Z = (param_1->POV).Rotation.Roll;
  local_bc8._s_0.X = (param_1->POV).Location.field0_0x0._s_0.X;
  local_bc8._s_0.Y = (param_1->POV).Location.field0_0x0._s_0.Y;
  local_bc8._s_0.Z = (param_1->POV).Location.field0_0x0._s_0.Z;
  AActor::SetActorLocationAndRotation
            ((AActor *)this,(TVector<double> *)&local_bc8._s_0,(TRotator<double> *)&local_c08._s_0,
             false,(FHitResult *)0x0,None);
  if ((this->bAutoCalculateOrthoPlanes != 0) &&
     (pAVar7 = (param_1->Target).field0_0x0.DebugPtr, pAVar7 != (AActor *)0x0)) {
    pUVar11 = (pAVar7->RootComponent).field0_0x0.DebugPtr;
    if (pUVar11 == (USceneComponent *)0x0) {
      dVar27 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
      uVar25 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar26 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      uVar28 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar29 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    }
    else {
      auVar4 = *(undefined1 (*) [16])(pUVar11->ComponentToWorld).Translation.XY.m128d_f64;
      dVar27 = auVar4._0_8_;
      uVar25 = *(undefined4 *)(pUVar11->ComponentToWorld).Translation.ZW.m128d_f64;
      uVar26 = *(undefined4 *)((longlong)&(pUVar11->ComponentToWorld).Translation.ZW + 4);
      uVar28 = auVar4._8_4_;
      uVar29 = auVar4._12_4_;
    }
    local_c08._s_0.Z = (double)CONCAT44(uVar26,uVar25);
    dVar2 = (param_1->POV).Location.field0_0x0._s_0.Z;
    dVar3 = (param_1->POV).Location.field0_0x0._s_0.Y;
    (param_1->POV).CameraToViewTarget.field0_0x0._s_0.X =
         dVar27 - (param_1->POV).Location.field0_0x0._s_0.X;
    (param_1->POV).CameraToViewTarget.field0_0x0._s_0.Y = (double)CONCAT44(uVar29,uVar28) - dVar3;
    (param_1->POV).CameraToViewTarget.field0_0x0._s_0.Z = local_c08._s_0.Z - dVar2;
  }
  (**(code **)(this->_padding_ + 0x890))(this,param_1);
  if (local_978.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_978.PostProcessSettings.WeightedBlendables.Array.AllocatorInstance.Data);
  }
  return;
}

// UpdateViewTargetInternal @ 1483b9060

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
APlayerCameraManager::UpdateViewTargetInternal
          (APlayerCameraManager *this,FTViewTarget *param_1,float param_2)

{
  AActor *pAVar1;
  UFunction *pUVar2;
  undefined4 in_XMM2_Db;
  float local_res10;
  double local_78;
  double dStack_70;
  double local_68;
  TObjectPtr<AActor>_u_0 local_58;
  double local_50;
  double dStack_48;
  double local_40;
  double local_38;
  double dStack_30;
  double local_28;
  float local_20;
  char local_1c;
  
  local_58 = (TObjectPtr<AActor>_u_0)(param_1->Target).field0_0x0.DebugPtr;
  if (local_58.DebugPtr != (AActor *)0x0) {
    local_50 = local_78;
    dStack_48 = dStack_70;
    local_1c = '\0';
    local_40 = local_68;
    local_38 = local_78;
    dStack_30 = dStack_70;
    local_20 = local_res10;
    local_28 = local_68;
    pUVar2 = UObject::FindFunctionChecked
                       ((UObject *)this,NAME_APlayerCameraManager_BlueprintUpdateCamera);
    (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&local_58);
    if (local_1c == '\0') {
      pAVar1 = (param_1->Target).field0_0x0.DebugPtr;
      (**(code **)(pAVar1->_padding_ + 0x6d8))(pAVar1,CONCAT44(in_XMM2_Db,param_2));
    }
    else {
      (param_1->POV).Location.field0_0x0._s_0.X = local_50;
      (param_1->POV).Location.field0_0x0._s_0.Y = dStack_48;
      (param_1->POV).Rotation.Pitch = local_38;
      (param_1->POV).Rotation.Yaw = dStack_30;
      (param_1->POV).Location.field0_0x0._s_0.Z = local_40;
      (param_1->POV).FOV = local_20;
      (param_1->POV).Rotation.Roll = local_28;
    }
  }
  return;
}

// __VTableCtorCaller @ 1483bb0d0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UObject * __cdecl APlayerCameraManager::__VTableCtorCaller(FVTableHelper *param_1)

{
  int *piVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  AActor *this;
  
  pUVar2 = GetTransientPackageAsObject();
  pUVar3 = GetPrivateStaticClass();
  this = (AActor *)
         StaticAllocateObject
                   (pUVar3,pUVar2,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (AActor *)0x0) {
    AActor::AActor(this,param_1);
    this->_padding_ = (longlong)&___7APlayerCameraManager__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined8 *)&this[1].AttachmentReplication.RelativeScale3D = 0;
    FMinimalViewInfo::FMinimalViewInfo
              ((FMinimalViewInfo *)&this[1].AttachmentReplication.RelativeScale3D.field_0x10);
    this[4].ReplicatedMovement.Acceleration.field0_0x0._s_0.X = 0.0;
    this[4].ReplicatedMovement.Acceleration.field0_0x0._s_0.Z = 0.0;
    FMinimalViewInfo::FMinimalViewInfo
              ((FMinimalViewInfo *)&this[4].ReplicatedMovement.ServerPhysicsHandle);
    this[7].ParentComponent.WeakPtr = (FWeakObjectPtr)0x0;
    piVar1 = &this[7].Tags.ArrayNum;
    *piVar1 = *piVar1 & 0xfffffffe;
    this[7].ActorLabel.Data.ArrayMax = 0;
    *(undefined1 *)&this[7].Tags.AllocatorInstance.Data = 1;
    *(undefined4 *)((longlong)&this[7].Tags.AllocatorInstance.Data + 4) = 0x40000000;
    this[7].OnTakeAnyDamage = (FTakeAnyDamageSignature)0x0;
    this[7].OnTakePointDamage = (FTakePointDamageSignature)0x0;
    this[7].OnTakeRadialDamage = (FTakeRadialDamageSignature)0x0;
    this[7].OnActorBeginOverlap = (FActorBeginOverlapSignature)0x0;
    this[7].OnActorEndOverlap = (FActorEndOverlapSignature)0x0;
    this[7].OnBeginCursorOver = (FActorBeginCursorOverSignature)0x0;
    this[7].OnEndCursorOver = (FActorEndCursorOverSignature)0x0;
    this[7].OnClicked = (FActorOnClickedSignature)0x0;
    this[7].OnReleased = (FActorOnReleasedSignature)0x0;
    this[7].OnInputTouchBegin = (FActorOnInputTouchBeginSignature)0x0;
    this[7].OnInputTouchEnd = (FActorOnInputTouchEndSignature)0x0;
    this[7].OnInputTouchEnter = (FActorBeginTouchOverSignature)0x0;
    this[7].OnInputTouchLeave = (FActorEndTouchOverSignature)0x0;
    this[7].OnActorHit = (FActorHitSignature)0x0;
    this[7].OnDestroyed = (FActorDestroyedSignature)0x0;
    this[7].OnEndPlay = (FActorEndPlaySignature)0x0;
    this[7].ReplicatedSubObjects.Registry.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[7].ReplicatedSubObjects.Registry.ArrayNum = 2;
    this[7].ReplicatedSubObjects.Registry.ArrayMax = 0;
    this[7].ReplicatedComponentsInfo.ArrayNum = 0;
    FMinimalViewInfo::FMinimalViewInfo((FMinimalViewInfo *)&this[7].ReplicatedComponents.ArrayNum);
    *(undefined4 *)&this[0xb]._padding_ = 0;
    FMinimalViewInfo::FMinimalViewInfo((FMinimalViewInfo *)&this[0xb]._padding_);
    this[0xe].AttachmentReplication.RotationOffset.Yaw = 0.0;
    this[0xe].AttachmentReplication.RotationOffset.Roll = 0.0;
    this[0xe].AttachmentReplication.AttachSocket.ComparisonIndex = 0;
    this[0xe].AttachmentReplication.AttachSocket.Number = 0;
    this[0xe].AttachmentReplication.AttachComponent.field0_0x0.DebugPtr = (USceneComponent *)0x0;
    this[0xe].ReplicatedMovement.Location.field0_0x0._s_0.Y = 0.0;
    this[0xe].ReplicatedMovement.Location.field0_0x0._s_0.Z = 0.0;
    this[0xe].ReplicatedMovement.Rotation.Pitch = 0.0;
    this[0xe].ReplicatedMovement.Acceleration.field0_0x0._s_0.Y = 0.0;
    this[0xe].ReplicatedMovement.Acceleration.field0_0x0._s_0.Z = 0.0;
    *(undefined8 *)&this[0xe].ReplicatedMovement.field_0x78 = 0;
    this[0xe].ReplicatedMovement.ServerPhysicsHandle = 0;
    this[0xe].ReplicatedMovement.LocationQuantizationLevel = RoundWholeNumber;
    this[0xe].ReplicatedMovement.VelocityQuantizationLevel = RoundWholeNumber;
    this[0xe].ReplicatedMovement.RotationQuantizationLevel = ByteComponents;
    this[0xe].ReplicatedMovement.field_0x87 = 0;
    this[0xe].Owner.field0_0x0.DebugPtr = (AActor *)0x0;
    this[0xe].NetDriverName.ComparisonIndex = 0;
    this[0xe].NetDriverName.Number = 0;
    this[0xe].Role = '\0';
    this[0xe].NetDormancy = '\0';
    this[0xe].SpawnCollisionHandlingMethod = Undefined;
    this[0xe].AutoReceiveInput = '\0';
    this[0xe].InputPriority = 0;
    *(undefined8 *)&this[0xe].CreationTime = 0;
    this[0xe].InputComponent.field0_0x0.DebugPtr = (UInputComponent *)0x0;
    this[0xe].NetTag = 0;
    this[0xe].NetCullDistanceSquared = 0.0;
    this[0xe].RootComponent.field0_0x0.DebugPtr = (USceneComponent *)0x0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// execAddGenericCameraLensEffect @ 1483bb350

void __cdecl
APlayerCameraManager::execAddGenericCameraLensEffect(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined8 *puVar3;
  UObject *local_res8;
  UObject *local_res10;
  undefined1 local_28 [16];
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x8b0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  puVar3 = (undefined8 *)(*pcVar2)(param_1,local_28,&local_res10);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && ((UObject *)*puVar3 != (UObject *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)*puVar3);
  }
  *(undefined8 *)param_3 = *puVar3;
  *(undefined8 *)((longlong)param_3 + 8) = puVar3[1];
  return;
}

// execAddNewCameraModifier @ 1483bb430

void __cdecl
APlayerCameraManager::execAddNewCameraModifier(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  UObject *local_res8;
  UObject *local_res10;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x7c8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  uVar3 = (*pcVar2)(param_1,&local_res10);
  *(undefined8 *)param_3 = uVar3;
  return;
}

// execClearCameraLensEffects @ 1483bbc60

void __cdecl
APlayerCameraManager::execClearCameraLensEffects(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001483bbc78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x8c0))();
  return;
}

// execFindCameraModifierByClass @ 1483bf650

void __cdecl
APlayerCameraManager::execFindCameraModifierByClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  UObject *local_res8;
  UObject *local_res10;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  local_res10 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pcVar2 = *(code **)(*(longlong *)param_1 + 2000);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  uVar3 = (*pcVar2)(param_1,&local_res10);
  *(undefined8 *)param_3 = uVar3;
  return;
}

// execGetCameraLocation @ 1483bf870

void __cdecl
APlayerCameraManager::execGetCameraLocation(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_28 [32];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x848))(param_1,local_28);
  uVar1 = puVar2[1];
  *(undefined8 *)param_3 = *puVar2;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar2[2];
  return;
}

// execGetCameraRotation @ 1483bf8c0

void __cdecl
APlayerCameraManager::execGetCameraRotation(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_28 [32];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x840))(param_1,local_28);
  uVar1 = puVar2[1];
  *(undefined8 *)param_3 = *puVar2;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar2[2];
  return;
}

// execGetFOVAngle @ 1483bfbc0

void __cdecl APlayerCameraManager::execGetFOVAngle(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x800))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetOwningPlayerController @ 1483c1880

void __cdecl
APlayerCameraManager::execGetOwningPlayerController(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x7a8))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execOnPhotographyMultiPartCaptureEnd @ 1483c3520

void __cdecl
APlayerCameraManager::execOnPhotographyMultiPartCaptureEnd
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001483c3538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x760))();
  return;
}

// execOnPhotographyMultiPartCaptureStart @ 1483c3550

void __cdecl
APlayerCameraManager::execOnPhotographyMultiPartCaptureStart
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001483c3568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x768))();
  return;
}

// execOnPhotographySessionEnd @ 1483c3580

void __cdecl
APlayerCameraManager::execOnPhotographySessionEnd(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001483c3598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x770))();
  return;
}

// execOnPhotographySessionStart @ 1483c35b0

void __cdecl
APlayerCameraManager::execOnPhotographySessionStart(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001483c35c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x778))();
  return;
}

// execPhotographyCameraModify @ 1483c37a0

void __cdecl
APlayerCameraManager::execPhotographyCameraModify(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  uchar local_80 [24];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_b0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_b0);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_c8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_c8);
  }
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_80,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_80);
  }
  puVar2 = local_80;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  local_68 = local_c8;
  uStack_60 = uStack_c0;
  local_58 = local_b8;
  local_48 = local_b0;
  uStack_40 = uStack_a8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38 = local_a0;
  local_28 = local_98;
  uStack_24 = uStack_94;
  uStack_20 = uStack_90;
  uStack_1c = uStack_8c;
  local_18 = local_88;
  (**(code **)(*(longlong *)param_1 + 0x780))(param_1,&local_28,&local_48,&local_68,puVar2);
  return;
}

// execRemoveCameraModifier @ 1483c4040

void __cdecl
APlayerCameraManager::execRemoveCameraModifier(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined8 local_res8;
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x7d8))(param_1,local_res8);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execRemoveGenericCameraLensEffect @ 1483c40f0

void __cdecl
APlayerCameraManager::execRemoveGenericCameraLensEffect
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  UObject *local_28;
  undefined8 uStack_20;
  UObject *local_18;
  undefined8 local_10;
  
  local_28 = (UObject *)0x0;
  uStack_20 = 0;
  FInterfaceProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_18 = local_28;
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x8b8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_28 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_28);
  }
  local_10 = uStack_20;
  (*pcVar2)(param_1,&local_18);
  return;
}

// execSetGameCameraCutThisFrame @ 1483c7000

void __cdecl
APlayerCameraManager::execSetGameCameraCutThisFrame(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001483c7018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x920))();
  return;
}

// execSetManualCameraFade @ 1483c7150

void __cdecl
APlayerCameraManager::execSetManualCameraFade(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
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
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
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
  local_18 = local_28;
  uStack_14 = uStack_24;
  uStack_10 = uStack_20;
  uStack_c = uStack_1c;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x918))(param_1,local_res10[0],&local_18,local_res8[0] != 0);
  return;
}

// execStartCameraFade @ 1483c7830

void __cdecl
APlayerCameraManager::execStartCameraFade(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  int local_res8 [2];
  int local_res10 [4];
  undefined4 local_res20 [2];
  undefined4 local_58;
  undefined4 local_54 [3];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_54[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_54,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_54);
  }
  local_58 = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res20[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res20);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
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
  bVar2 = local_res8[0] != 0;
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_38 = local_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  (**(code **)(*(longlong *)param_1 + 0x908))
            (param_1,local_54[0],local_58,local_res20[0],&local_38,bVar2,local_res10[0] != 0);
  return;
}

// execStartCameraShake @ 1483c7a20

void __cdecl
APlayerCameraManager::execStartCameraShake(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  UObject *local_res18;
  UObject *local_res20;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  local_res18 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
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
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  uVar4 = local_res10[0];
  uVar3 = local_res8[0];
  local_res20 = local_res18;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x8d0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res18);
  }
  local_78 = local_98;
  uStack_70 = uStack_90;
  local_68 = local_88;
  uVar5 = (*pcVar2)(param_1,&local_res20,uVar4,uVar3,&local_78);
  *(undefined8 *)param_3 = uVar5;
  return;
}

// execStartCameraShakeFromSource @ 1483c7c10

void __cdecl
APlayerCameraManager::execStartCameraShakeFromSource(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  undefined8 local_res18;
  UObject *local_res20;
  UObject *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
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
    FFrame::StepExplicitProperty(param_2,&local_a0,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_a0);
  }
  uVar5 = local_res18;
  uVar4 = local_res10[0];
  uVar3 = local_res8[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_a8 = local_res20;
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x8d8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  local_88 = local_a0;
  uStack_80 = uStack_98;
  local_78 = local_90;
  uVar5 = (*pcVar2)(param_1,&local_a8,uVar5,uVar4,uVar3,&local_88);
  *(undefined8 *)param_3 = uVar5;
  return;
}

// execStopAllCameraShakes @ 1483c7ea0

void __cdecl
APlayerCameraManager::execStopAllCameraShakes(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x8f0))(param_1,local_res8[0] != 0);
  return;
}

// execStopAllCameraShakesFromSource @ 1483c7f40

void __cdecl
APlayerCameraManager::execStopAllCameraShakesFromSource
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  undefined8 local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x900))(param_1,local_res10,local_res8[0] != 0);
  return;
}

// execStopAllInstancesOfCameraShake @ 1483c8020

void __cdecl
APlayerCameraManager::execStopAllInstancesOfCameraShake
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  int local_res8 [2];
  UObject *local_res10;
  UObject *local_res20;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
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
  bVar3 = local_res8[0] != 0;
  local_res20 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x8e8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res10);
  }
  (*pcVar2)(param_1,&local_res20,bVar3);
  return;
}

// execStopAllInstancesOfCameraShakeFromSource @ 1483c8120

void __cdecl
APlayerCameraManager::execStopAllInstancesOfCameraShakeFromSource
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  int local_res8 [2];
  undefined8 local_res10;
  UObject *local_res20;
  UObject *local_28 [2];
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
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
  uVar3 = local_res10;
  bVar4 = local_res8[0] != 0;
  local_28[0] = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x8f8);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  (*pcVar2)(param_1,local_28,uVar3,bVar4);
  return;
}

// execStopCameraFade @ 1483c8260

void __cdecl
APlayerCameraManager::execStopCameraFade(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0001483c8278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x910))();
  return;
}

// execStopCameraShake @ 1483c8290

void __cdecl
APlayerCameraManager::execStopCameraShake(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  undefined8 local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x8e0))(param_1,local_res10,local_res8[0] != 0);
  return;
}

// execSwapPendingViewTargetWhenUsingClientSideCameraUpdates @ 1483c8480

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
APlayerCameraManager::execSwapPendingViewTargetWhenUsingClientSideCameraUpdates
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  SwapPendingViewTargetWhenUsingClientSideCameraUpdates((APlayerCameraManager *)param_1);
  return;
}

