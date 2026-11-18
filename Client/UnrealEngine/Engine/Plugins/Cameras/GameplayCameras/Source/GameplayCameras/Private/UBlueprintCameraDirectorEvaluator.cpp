// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 45

// StaticClass @ 14d56ae80

UClass * __cdecl UBlueprintCameraDirectorEvaluator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintCameraDirectorEvaluator.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BlueprintCameraDirectorEvaluator",
               &Z_Registration_Info_UClass_UBlueprintCameraDirectorEvaluator.InnerSingleton,
               StaticRegisterNativesUBlueprintCameraDirectorEvaluator,0x148,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlueprintCameraDirectorEvaluator>,
               InternalVTableHelperCtorCaller<UBlueprintCameraDirectorEvaluator>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintCameraDirectorEvaluator.InnerSingleton;
}

// UBlueprintCameraDirectorEvaluator @ 14d58ed80

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UBlueprintCameraDirectorEvaluator * __thiscall
UBlueprintCameraDirectorEvaluator::UBlueprintCameraDirectorEvaluator
          (UBlueprintCameraDirectorEvaluator *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UBlueprintCameraDirectorEvaluator__6B_;
  this->OwningDirectorEvaluator = (FCameraDirectorEvaluator *)0x0;
  (this->EvaluationResult).Requests.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0;
  (this->EvaluationResult).Requests.ArrayNum = 0;
  (this->EvaluationResult).Requests.ArrayMax = 4;
  (this->EvaluationContext).Object = (FCameraEvaluationContext *)0x0;
  (this->EvaluationContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ChildrenContextSlotNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildrenContextSlotNames).ArrayNum = 0;
  (this->ChildrenContextSlotNames).ArrayMax = 0;
  (this->WeakCachedWorld).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// UBlueprintCameraDirectorEvaluator @ 14d58edf0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UBlueprintCameraDirectorEvaluator * __thiscall
UBlueprintCameraDirectorEvaluator::UBlueprintCameraDirectorEvaluator
          (UBlueprintCameraDirectorEvaluator *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UBlueprintCameraDirectorEvaluator__6B_;
  this->OwningDirectorEvaluator = (FCameraDirectorEvaluator *)0x0;
  (this->EvaluationResult).Requests.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0;
  (this->EvaluationResult).Requests.ArrayNum = 0;
  (this->EvaluationResult).Requests.ArrayMax = 4;
  (this->EvaluationContext).Object = (FCameraEvaluationContext *)0x0;
  (this->EvaluationContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ChildrenContextSlotNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildrenContextSlotNames).ArrayNum = 0;
  (this->ChildrenContextSlotNames).ArrayMax = 0;
  (this->WeakCachedWorld).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UBlueprintCameraDirectorEvaluator @ 14d5918c0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UBlueprintCameraDirectorEvaluator::~UBlueprintCameraDirectorEvaluator
          (UBlueprintCameraDirectorEvaluator *this)

{
  FScriptContainerElement *pFVar1;
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> FVar2;
  
  this->_padding_ = (longlong)&___7UBlueprintCameraDirectorEvaluator__6B_;
  pFVar1 = (this->ChildrenContextSlotNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EvaluationContext).SharedReferenceCount.ReferenceController);
  FVar2 = (this->EvaluationResult).Requests.AllocatorInstance.SecondaryData;
  if (FVar2 == (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
    FVar2 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)
            &this->EvaluationResult;
  }
  DestructItems<UE::Cameras::FCameraRigActivationDeactivationRequest,int>
            ((FCameraRigActivationDeactivationRequest *)FVar2,
             (this->EvaluationResult).Requests.ArrayNum);
  FVar2 = (this->EvaluationResult).Requests.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// ActivateCameraDirector @ 14d596580

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UBlueprintCameraDirectorEvaluator::ActivateCameraDirector
          (UBlueprintCameraDirectorEvaluator *this,UObject *param_1,
          FBlueprintCameraDirectorActivateParams *param_2)

{
  UObject *pUVar1;
  UFunction *pUVar2;
  UObject *local_18;
  TObjectPtr<UObject>_u_0 local_10;
  
  local_18 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_2->EvaluationContextOwner).field0_0x0.DebugPtr, pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  local_10.ObjectPtr.field0_0x0 = *(FObjectPtr *)&(param_2->EvaluationContextOwner).field0_0x0;
  pUVar2 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UBlueprintCameraDirectorEvaluator_ActivateCameraDirector)
  ;
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&local_18);
  return;
}

// ActivateCameraRig @ 14d596610

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UBlueprintCameraDirectorEvaluator::ActivateCameraRig
          (UBlueprintCameraDirectorEvaluator *this,UCameraRigAsset *param_1,bool param_2)

{
  FCameraDirectorEvaluationResult *pFVar1;
  int *piVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> FVar7;
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> FVar8;
  undefined8 *puVar9;
  FCameraEvaluationContext *local_48;
  TReferenceControllerBase<1> *local_40;
  UCameraRigAsset *local_38;
  UObject *local_30;
  undefined4 local_28;
  undefined1 local_24;
  UObject *local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UCameraRigAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pTVar3 = (this->EvaluationContext).SharedReferenceCount.ReferenceController;
  local_48 = (this->EvaluationContext).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_40 = pTVar3;
  local_38 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UCameraRigAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_30 = (UObject *)0x0;
  local_20 = (UObject *)0x0;
  local_18 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FVar8 = (this->EvaluationResult).Requests.AllocatorInstance.SecondaryData;
  local_28 = 0;
  pFVar1 = &this->EvaluationResult;
  local_24 = 2;
  FVar7 = FVar8;
  if (FVar8 == (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
    FVar7 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)pFVar1;
  }
  local_14 = param_2;
  if ((ulonglong)FVar7 <= &local_48) {
    if (FVar8 == (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
      FVar8 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)pFVar1;
    }
    if ((&local_48 <
         (FCameraEvaluationContext **)
         ((longlong)FVar8 + (longlong)(this->EvaluationResult).Requests.ArrayMax * 0x38)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->EvaluationResult).Requests.ArrayNum;
  piVar2 = &(this->EvaluationResult).Requests.ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>_>
                      (0x838,(ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> *
                             )pFVar1,piVar2);
  }
  (this->EvaluationResult).Requests.ArrayNum = iVar6 + 1;
  FVar8 = (this->EvaluationResult).Requests.AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
    FVar8 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)pFVar1;
  }
  puVar9 = (undefined8 *)((longlong)iVar6 * 0x38 + (longlong)FVar8);
  *puVar9 = local_48;
  puVar9[1] = local_40;
  if (local_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  puVar9[2] = local_38;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UCameraRigAsset *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_38);
  }
  puVar9[3] = local_30;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_30 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_30);
  }
  *(undefined4 *)(puVar9 + 4) = local_28;
  *(undefined1 *)((longlong)puVar9 + 0x24) = local_24;
  puVar9[5] = local_20;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_20);
  }
  *(undefined4 *)(puVar9 + 6) = local_18;
  *(undefined1 *)((longlong)puVar9 + 0x34) = local_14;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  return;
}

// ActivateCameraRigViaProxy @ 14d596b30

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UBlueprintCameraDirectorEvaluator::ActivateCameraRigViaProxy
          (UBlueprintCameraDirectorEvaluator *this,UCameraRigProxyAsset *param_1,bool param_2)

{
  FCameraDirectorEvaluationResult *pFVar1;
  int *piVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> FVar7;
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> FVar8;
  undefined8 *puVar9;
  FCameraEvaluationContext *local_58;
  TReferenceControllerBase<1> *local_50;
  UObject *local_48;
  UCameraRigProxyAsset *local_40;
  undefined4 local_38;
  undefined1 local_34;
  UObject *local_30;
  undefined4 local_28;
  undefined1 local_24;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UCameraRigProxyAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pTVar3 = (this->EvaluationContext).SharedReferenceCount.ReferenceController;
  local_58 = (this->EvaluationContext).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48 = (UObject *)0x0;
  local_50 = pTVar3;
  local_40 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UCameraRigProxyAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_30 = (UObject *)0x0;
  local_28 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FVar8 = (this->EvaluationResult).Requests.AllocatorInstance.SecondaryData;
  pFVar1 = &this->EvaluationResult;
  local_38 = 0;
  local_34 = 2;
  FVar7 = FVar8;
  if (FVar8 == (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
    FVar7 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)pFVar1;
  }
  local_24 = param_2;
  if ((ulonglong)FVar7 <= &local_58) {
    if (FVar8 == (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
      FVar8 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)pFVar1;
    }
    if ((&local_58 <
         (FCameraEvaluationContext **)
         ((longlong)FVar8 + (longlong)(this->EvaluationResult).Requests.ArrayMax * 0x38)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->EvaluationResult).Requests.ArrayNum;
  piVar2 = &(this->EvaluationResult).Requests.ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>_>
                      (0x838,(ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> *
                             )pFVar1,piVar2);
  }
  (this->EvaluationResult).Requests.ArrayNum = iVar6 + 1;
  FVar8 = (this->EvaluationResult).Requests.AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
    FVar8 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)pFVar1;
  }
  puVar9 = (undefined8 *)((longlong)iVar6 * 0x38 + (longlong)FVar8);
  *puVar9 = local_58;
  puVar9[1] = local_50;
  if (local_50 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
    UNLOCK();
  }
  puVar9[2] = local_48;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_48);
  }
  puVar9[3] = local_40;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_40 != (UCameraRigProxyAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_40);
  }
  *(undefined4 *)(puVar9 + 4) = local_38;
  *(undefined1 *)((longlong)puVar9 + 0x24) = local_34;
  puVar9[5] = local_30;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_30 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_30);
  }
  *(undefined4 *)(puVar9 + 6) = local_28;
  *(undefined1 *)((longlong)puVar9 + 0x34) = local_24;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_50);
  return;
}

// ActivatePersistentBaseCameraRig @ 14d596d80

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UBlueprintCameraDirectorEvaluator::ActivatePersistentBaseCameraRig
          (UBlueprintCameraDirectorEvaluator *this,UCameraRigAsset *param_1)

{
  FCameraDirectorEvaluationResult *pFVar1;
  int *piVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> FVar7;
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> FVar8;
  undefined8 *puVar9;
  FCameraEvaluationContext *local_48;
  TReferenceControllerBase<1> *local_40;
  UCameraRigAsset *local_38;
  UObject *local_30;
  undefined4 local_28;
  undefined1 local_24;
  UObject *local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UCameraRigAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pTVar3 = (this->EvaluationContext).SharedReferenceCount.ReferenceController;
  local_48 = (this->EvaluationContext).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_40 = pTVar3;
  local_38 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UCameraRigAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_30 = (UObject *)0x0;
  local_20 = (UObject *)0x0;
  local_18 = 0;
  local_14 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FVar8 = (this->EvaluationResult).Requests.AllocatorInstance.SecondaryData;
  local_28 = 0;
  pFVar1 = &this->EvaluationResult;
  local_24 = 1;
  FVar7 = FVar8;
  if (FVar8 == (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
    FVar7 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)pFVar1;
  }
  if ((ulonglong)FVar7 <= &local_48) {
    if (FVar8 == (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
      FVar8 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)pFVar1;
    }
    if ((&local_48 <
         (FCameraEvaluationContext **)
         ((longlong)FVar8 + (longlong)(this->EvaluationResult).Requests.ArrayMax * 0x38)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->EvaluationResult).Requests.ArrayNum;
  piVar2 = &(this->EvaluationResult).Requests.ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>_>
                      (0x838,(ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> *
                             )pFVar1,piVar2);
  }
  (this->EvaluationResult).Requests.ArrayNum = iVar6 + 1;
  FVar8 = (this->EvaluationResult).Requests.AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
    FVar8 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)pFVar1;
  }
  puVar9 = (undefined8 *)((longlong)iVar6 * 0x38 + (longlong)FVar8);
  *puVar9 = local_48;
  puVar9[1] = local_40;
  if (local_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  puVar9[2] = local_38;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UCameraRigAsset *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_38);
  }
  puVar9[3] = local_30;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_30 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_30);
  }
  *(undefined4 *)(puVar9 + 4) = local_28;
  *(undefined1 *)((longlong)puVar9 + 0x24) = local_24;
  puVar9[5] = local_20;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_20);
  }
  *(undefined4 *)(puVar9 + 6) = local_18;
  *(undefined1 *)((longlong)puVar9 + 0x34) = local_14;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  return;
}

// ActivatePersistentGlobalCameraRig @ 14d596fc0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UBlueprintCameraDirectorEvaluator::ActivatePersistentGlobalCameraRig
          (UBlueprintCameraDirectorEvaluator *this,UCameraRigAsset *param_1)

{
  FCameraDirectorEvaluationResult *pFVar1;
  int *piVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> FVar7;
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> FVar8;
  undefined8 *puVar9;
  FCameraEvaluationContext *local_48;
  TReferenceControllerBase<1> *local_40;
  UCameraRigAsset *local_38;
  UObject *local_30;
  undefined4 local_28;
  undefined1 local_24;
  UObject *local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UCameraRigAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pTVar3 = (this->EvaluationContext).SharedReferenceCount.ReferenceController;
  local_48 = (this->EvaluationContext).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_40 = pTVar3;
  local_38 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UCameraRigAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_30 = (UObject *)0x0;
  local_20 = (UObject *)0x0;
  local_18 = 0;
  local_14 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FVar8 = (this->EvaluationResult).Requests.AllocatorInstance.SecondaryData;
  local_28 = 0;
  pFVar1 = &this->EvaluationResult;
  local_24 = 3;
  FVar7 = FVar8;
  if (FVar8 == (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
    FVar7 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)pFVar1;
  }
  if ((ulonglong)FVar7 <= &local_48) {
    if (FVar8 == (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
      FVar8 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)pFVar1;
    }
    if ((&local_48 <
         (FCameraEvaluationContext **)
         ((longlong)FVar8 + (longlong)(this->EvaluationResult).Requests.ArrayMax * 0x38)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->EvaluationResult).Requests.ArrayNum;
  piVar2 = &(this->EvaluationResult).Requests.ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>_>
                      (0x838,(ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> *
                             )pFVar1,piVar2);
  }
  (this->EvaluationResult).Requests.ArrayNum = iVar6 + 1;
  FVar8 = (this->EvaluationResult).Requests.AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
    FVar8 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)pFVar1;
  }
  puVar9 = (undefined8 *)((longlong)iVar6 * 0x38 + (longlong)FVar8);
  *puVar9 = local_48;
  puVar9[1] = local_40;
  if (local_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  puVar9[2] = local_38;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UCameraRigAsset *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_38);
  }
  puVar9[3] = local_30;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_30 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_30);
  }
  *(undefined4 *)(puVar9 + 4) = local_28;
  *(undefined1 *)((longlong)puVar9 + 0x24) = local_24;
  puVar9[5] = local_20;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_20);
  }
  *(undefined4 *)(puVar9 + 6) = local_18;
  *(undefined1 *)((longlong)puVar9 + 0x34) = local_14;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  return;
}

// ActivatePersistentVisualCameraRig @ 14d597200

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UBlueprintCameraDirectorEvaluator::ActivatePersistentVisualCameraRig
          (UBlueprintCameraDirectorEvaluator *this,UCameraRigAsset *param_1)

{
  FCameraDirectorEvaluationResult *pFVar1;
  int *piVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> FVar7;
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> FVar8;
  undefined8 *puVar9;
  FCameraEvaluationContext *local_48;
  TReferenceControllerBase<1> *local_40;
  UCameraRigAsset *local_38;
  UObject *local_30;
  undefined4 local_28;
  undefined1 local_24;
  UObject *local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UCameraRigAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pTVar3 = (this->EvaluationContext).SharedReferenceCount.ReferenceController;
  local_48 = (this->EvaluationContext).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_40 = pTVar3;
  local_38 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UCameraRigAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_30 = (UObject *)0x0;
  local_20 = (UObject *)0x0;
  local_18 = 0;
  local_14 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FVar8 = (this->EvaluationResult).Requests.AllocatorInstance.SecondaryData;
  local_28 = 0;
  pFVar1 = &this->EvaluationResult;
  local_24 = 4;
  FVar7 = FVar8;
  if (FVar8 == (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
    FVar7 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)pFVar1;
  }
  if ((ulonglong)FVar7 <= &local_48) {
    if (FVar8 == (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
      FVar8 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)pFVar1;
    }
    if ((&local_48 <
         (FCameraEvaluationContext **)
         ((longlong)FVar8 + (longlong)(this->EvaluationResult).Requests.ArrayMax * 0x38)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->EvaluationResult).Requests.ArrayNum;
  piVar2 = &(this->EvaluationResult).Requests.ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>_>
                      (0x838,(ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> *
                             )pFVar1,piVar2);
  }
  (this->EvaluationResult).Requests.ArrayNum = iVar6 + 1;
  FVar8 = (this->EvaluationResult).Requests.AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
    FVar8 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)pFVar1;
  }
  puVar9 = (undefined8 *)((longlong)iVar6 * 0x38 + (longlong)FVar8);
  *puVar9 = local_48;
  puVar9[1] = local_40;
  if (local_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  puVar9[2] = local_38;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UCameraRigAsset *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_38);
  }
  puVar9[3] = local_30;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_30 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_30);
  }
  *(undefined4 *)(puVar9 + 4) = local_28;
  *(undefined1 *)((longlong)puVar9 + 0x24) = local_24;
  puVar9[5] = local_20;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_20);
  }
  *(undefined4 *)(puVar9 + 6) = local_18;
  *(undefined1 *)((longlong)puVar9 + 0x34) = local_14;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  return;
}

// AddChildEvaluationContext @ 14d597e50

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FName __thiscall
UBlueprintCameraDirectorEvaluator::AddChildEvaluationContext
          (UBlueprintCameraDirectorEvaluator *this,UObject *param_1)

{
  UFunction *pUVar1;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = 0;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UBlueprintCameraDirectorEvaluator_AddChildEvaluationContext);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,local_18);
  *(undefined8 *)param_1 = local_10;
  return (FName)param_1;
}

// DeactivateCameraDirector @ 14d59c820

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UBlueprintCameraDirectorEvaluator::DeactivateCameraDirector
          (UBlueprintCameraDirectorEvaluator *this,UObject *param_1,
          FBlueprintCameraDirectorDeactivateParams *param_2)

{
  UObject *pUVar1;
  UFunction *pUVar2;
  UObject *local_18;
  TObjectPtr<UObject>_u_0 local_10;
  
  local_18 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_2->EvaluationContextOwner).field0_0x0.DebugPtr, pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  local_10.ObjectPtr.field0_0x0 = *(FObjectPtr *)&(param_2->EvaluationContextOwner).field0_0x0;
  pUVar2 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UBlueprintCameraDirectorEvaluator_DeactivateCameraDirector);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,&local_18);
  return;
}

// DeactivatePersistentBaseCameraRig @ 14d59c8a0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UBlueprintCameraDirectorEvaluator::DeactivatePersistentBaseCameraRig
          (UBlueprintCameraDirectorEvaluator *this,UCameraRigAsset *param_1)

{
  FCameraDirectorEvaluationResult *pFVar1;
  int *piVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> FVar7;
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> FVar8;
  undefined8 *puVar9;
  FCameraEvaluationContext *local_48;
  TReferenceControllerBase<1> *local_40;
  UCameraRigAsset *local_38;
  UObject *local_30;
  undefined4 local_28;
  undefined1 local_24;
  UObject *local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UCameraRigAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pTVar3 = (this->EvaluationContext).SharedReferenceCount.ReferenceController;
  local_48 = (this->EvaluationContext).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_40 = pTVar3;
  local_38 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UCameraRigAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_30 = (UObject *)0x0;
  local_20 = (UObject *)0x0;
  local_18 = 0;
  local_14 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FVar8 = (this->EvaluationResult).Requests.AllocatorInstance.SecondaryData;
  pFVar1 = &this->EvaluationResult;
  local_28 = 1;
  local_24 = 1;
  FVar7 = FVar8;
  if (FVar8 == (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
    FVar7 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)pFVar1;
  }
  if ((ulonglong)FVar7 <= &local_48) {
    if (FVar8 == (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
      FVar8 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)pFVar1;
    }
    if ((&local_48 <
         (FCameraEvaluationContext **)
         ((longlong)FVar8 + (longlong)(this->EvaluationResult).Requests.ArrayMax * 0x38)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->EvaluationResult).Requests.ArrayNum;
  piVar2 = &(this->EvaluationResult).Requests.ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>_>
                      (0x838,(ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> *
                             )pFVar1,piVar2);
  }
  (this->EvaluationResult).Requests.ArrayNum = iVar6 + 1;
  FVar8 = (this->EvaluationResult).Requests.AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
    FVar8 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)pFVar1;
  }
  puVar9 = (undefined8 *)((longlong)iVar6 * 0x38 + (longlong)FVar8);
  *puVar9 = local_48;
  puVar9[1] = local_40;
  if (local_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  puVar9[2] = local_38;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UCameraRigAsset *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_38);
  }
  puVar9[3] = local_30;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_30 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_30);
  }
  *(undefined4 *)(puVar9 + 4) = local_28;
  *(undefined1 *)((longlong)puVar9 + 0x24) = local_24;
  puVar9[5] = local_20;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_20);
  }
  *(undefined4 *)(puVar9 + 6) = local_18;
  *(undefined1 *)((longlong)puVar9 + 0x34) = local_14;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  return;
}

// DeactivatePersistentGlobalCameraRig @ 14d59cad0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UBlueprintCameraDirectorEvaluator::DeactivatePersistentGlobalCameraRig
          (UBlueprintCameraDirectorEvaluator *this,UCameraRigAsset *param_1)

{
  FCameraDirectorEvaluationResult *pFVar1;
  int *piVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> FVar7;
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> FVar8;
  undefined8 *puVar9;
  FCameraEvaluationContext *local_48;
  TReferenceControllerBase<1> *local_40;
  UCameraRigAsset *local_38;
  UObject *local_30;
  undefined4 local_28;
  undefined1 local_24;
  UObject *local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UCameraRigAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pTVar3 = (this->EvaluationContext).SharedReferenceCount.ReferenceController;
  local_48 = (this->EvaluationContext).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_40 = pTVar3;
  local_38 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UCameraRigAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_30 = (UObject *)0x0;
  local_20 = (UObject *)0x0;
  local_18 = 0;
  local_14 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FVar8 = (this->EvaluationResult).Requests.AllocatorInstance.SecondaryData;
  pFVar1 = &this->EvaluationResult;
  local_28 = 1;
  local_24 = 3;
  FVar7 = FVar8;
  if (FVar8 == (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
    FVar7 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)pFVar1;
  }
  if ((ulonglong)FVar7 <= &local_48) {
    if (FVar8 == (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
      FVar8 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)pFVar1;
    }
    if ((&local_48 <
         (FCameraEvaluationContext **)
         ((longlong)FVar8 + (longlong)(this->EvaluationResult).Requests.ArrayMax * 0x38)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->EvaluationResult).Requests.ArrayNum;
  piVar2 = &(this->EvaluationResult).Requests.ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>_>
                      (0x838,(ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> *
                             )pFVar1,piVar2);
  }
  (this->EvaluationResult).Requests.ArrayNum = iVar6 + 1;
  FVar8 = (this->EvaluationResult).Requests.AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
    FVar8 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)pFVar1;
  }
  puVar9 = (undefined8 *)((longlong)iVar6 * 0x38 + (longlong)FVar8);
  *puVar9 = local_48;
  puVar9[1] = local_40;
  if (local_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  puVar9[2] = local_38;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UCameraRigAsset *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_38);
  }
  puVar9[3] = local_30;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_30 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_30);
  }
  *(undefined4 *)(puVar9 + 4) = local_28;
  *(undefined1 *)((longlong)puVar9 + 0x24) = local_24;
  puVar9[5] = local_20;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_20);
  }
  *(undefined4 *)(puVar9 + 6) = local_18;
  *(undefined1 *)((longlong)puVar9 + 0x34) = local_14;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  return;
}

// DeactivatePersistentVisualCameraRig @ 14d59cd00

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UBlueprintCameraDirectorEvaluator::DeactivatePersistentVisualCameraRig
          (UBlueprintCameraDirectorEvaluator *this,UCameraRigAsset *param_1)

{
  FCameraDirectorEvaluationResult *pFVar1;
  int *piVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> FVar7;
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> FVar8;
  undefined8 *puVar9;
  FCameraEvaluationContext *local_48;
  TReferenceControllerBase<1> *local_40;
  UCameraRigAsset *local_38;
  UObject *local_30;
  undefined4 local_28;
  undefined1 local_24;
  UObject *local_20;
  undefined4 local_18;
  undefined1 local_14;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UCameraRigAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pTVar3 = (this->EvaluationContext).SharedReferenceCount.ReferenceController;
  local_48 = (this->EvaluationContext).Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_40 = pTVar3;
  local_38 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UCameraRigAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_30 = (UObject *)0x0;
  local_20 = (UObject *)0x0;
  local_18 = 0;
  local_14 = 0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  FVar8 = (this->EvaluationResult).Requests.AllocatorInstance.SecondaryData;
  pFVar1 = &this->EvaluationResult;
  local_28 = 1;
  local_24 = 4;
  FVar7 = FVar8;
  if (FVar8 == (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
    FVar7 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)pFVar1;
  }
  if ((ulonglong)FVar7 <= &local_48) {
    if (FVar8 == (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
      FVar8 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)pFVar1;
    }
    if ((&local_48 <
         (FCameraEvaluationContext **)
         ((longlong)FVar8 + (longlong)(this->EvaluationResult).Requests.ArrayMax * 0x38)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->EvaluationResult).Requests.ArrayNum;
  piVar2 = &(this->EvaluationResult).Requests.ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>_>
                      (0x838,(ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> *
                             )pFVar1,piVar2);
  }
  (this->EvaluationResult).Requests.ArrayNum = iVar6 + 1;
  FVar8 = (this->EvaluationResult).Requests.AllocatorInstance.SecondaryData;
  if (FVar8 == (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
    FVar8 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)pFVar1;
  }
  puVar9 = (undefined8 *)((longlong)iVar6 * 0x38 + (longlong)FVar8);
  *puVar9 = local_48;
  puVar9[1] = local_40;
  if (local_40 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
    UNLOCK();
  }
  puVar9[2] = local_38;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38 != (UCameraRigAsset *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_38);
  }
  puVar9[3] = local_30;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_30 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_30);
  }
  *(undefined4 *)(puVar9 + 4) = local_28;
  *(undefined1 *)((longlong)puVar9 + 0x24) = local_24;
  puVar9[5] = local_20;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_20);
  }
  *(undefined4 *)(puVar9 + 6) = local_18;
  *(undefined1 *)((longlong)puVar9 + 0x34) = local_14;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  return;
}

// FindEvaluationContextOwnerActor @ 14d5a4360

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AActor * __thiscall
UBlueprintCameraDirectorEvaluator::FindEvaluationContextOwnerActor
          (UBlueprintCameraDirectorEvaluator *this,TSubclassOf<AActor> param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  AActor *pAVar6;
  
  if ((this->EvaluationContext).Object == (FCameraEvaluationContext *)0x0) {
    FFrame::KismetExecutionMessage
              (L"Can\'t access evaluation context outside of RunCameraDirector",Error,(FName)0x0);
    return (AActor *)0x0;
  }
  pUVar4 = FWeakObjectPtr::Get(&(((this->EvaluationContext).Object)->WeakOwner).WeakPtr);
  if (pUVar4 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UActorComponent_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) {
      return *(AActor **)&pUVar4[4].field_0x8;
    }
  }
  if ((this->EvaluationContext).Object == (FCameraEvaluationContext *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pAVar6 = (AActor *)(*pcVar2)();
      return pAVar6;
    }
  }
  pAVar6 = (AActor *)FWeakObjectPtr::Get(&(((this->EvaluationContext).Object)->WeakOwner).WeakPtr);
  if (pAVar6 != (AActor *)0x0) {
    pUVar5 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(pAVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pAVar6->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      return pAVar6;
    }
  }
  return (AActor *)0x0;
}

// GetConditionalContextResult @ 14d5a7210

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FBlueprintCameraEvaluationDataRef * __thiscall
UBlueprintCameraDirectorEvaluator::GetConditionalContextResult
          (UBlueprintCameraDirectorEvaluator *this,
          FBlueprintCameraEvaluationDataRef *__return_storage_ptr__,
          ECameraEvaluationDataCondition param_1)

{
  FCameraEvaluationContext *this_00;
  FCameraNodeEvaluationResult *pFVar1;
  
  this_00 = (this->EvaluationContext).Object;
  if (this_00 != (FCameraEvaluationContext *)0x0) {
    pFVar1 = UE::Cameras::FCameraEvaluationContext::GetOrAddConditionalResult(this_00,param_1);
    (__return_storage_ptr__->SharedResult).Object = (FCameraNodeEvaluationResult *)0x0;
    (__return_storage_ptr__->SharedResult).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Result = pFVar1;
    return __return_storage_ptr__;
  }
  FFrame::KismetExecutionMessage
            (L"Can\'t access evaluation context\'s initial result outside of RunCameraDirector",
             Error,(FName)0x0);
  __return_storage_ptr__->Result = (FCameraNodeEvaluationResult *)0x0;
  (__return_storage_ptr__->SharedResult).Object = (FCameraNodeEvaluationResult *)0x0;
  (__return_storage_ptr__->SharedResult).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetInitialContextResult @ 14d5a8650

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FBlueprintCameraEvaluationDataRef * __thiscall
UBlueprintCameraDirectorEvaluator::GetInitialContextResult
          (UBlueprintCameraDirectorEvaluator *this,
          FBlueprintCameraEvaluationDataRef *__return_storage_ptr__)

{
  FCameraEvaluationContext *pFVar1;
  
  pFVar1 = (this->EvaluationContext).Object;
  if (pFVar1 != (FCameraEvaluationContext *)0x0) {
    (__return_storage_ptr__->SharedResult).Object = (FCameraNodeEvaluationResult *)0x0;
    (__return_storage_ptr__->SharedResult).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    __return_storage_ptr__->Result = &pFVar1->InitialResult;
    return __return_storage_ptr__;
  }
  FFrame::KismetExecutionMessage
            (L"Can\'t access evaluation context\'s initial result outside of RunCameraDirector",
             Error,(FName)0x0);
  __return_storage_ptr__->Result = (FCameraNodeEvaluationResult *)0x0;
  (__return_storage_ptr__->SharedResult).Object = (FCameraNodeEvaluationResult *)0x0;
  (__return_storage_ptr__->SharedResult).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14d5a8de0

UClass * __cdecl UBlueprintCameraDirectorEvaluator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBlueprintCameraDirectorEvaluator.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GameplayCameras",L"BlueprintCameraDirectorEvaluator",
               &Z_Registration_Info_UClass_UBlueprintCameraDirectorEvaluator.InnerSingleton,
               StaticRegisterNativesUBlueprintCameraDirectorEvaluator,0x148,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UBlueprintCameraDirectorEvaluator>,
               InternalVTableHelperCtorCaller<UBlueprintCameraDirectorEvaluator>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBlueprintCameraDirectorEvaluator.InnerSingleton;
}

// GetWorld @ 14d5acf90

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall
UBlueprintCameraDirectorEvaluator::GetWorld(UBlueprintCameraDirectorEvaluator *this)

{
  longlong *plVar1;
  UWorld *pUVar2;
  UWorld *local_res8;
  
  pUVar2 = (UWorld *)FWeakObjectPtr::Get(&(this->WeakCachedWorld).WeakPtr);
  if (pUVar2 == (UWorld *)0x0) {
    if ((this->_padding_ & 0x10) == 0) {
      for (plVar1 = (longlong *)this->_padding_; plVar1 != (longlong *)0x0;
          plVar1 = (longlong *)plVar1[4]) {
        pUVar2 = (UWorld *)(**(code **)(*plVar1 + 0x180))(plVar1);
        if (pUVar2 != (UWorld *)0x0) {
          local_res8 = pUVar2;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar2);
          }
          FWeakObjectPtr::operator=(&(this->WeakCachedWorld).WeakPtr,(FObjectPtr)&local_res8);
          return pUVar2;
        }
      }
    }
    pUVar2 = (UWorld *)0x0;
  }
  return pUVar2;
}

// NativeAbandonCameraDirector @ 14d5b63c0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UBlueprintCameraDirectorEvaluator::NativeAbandonCameraDirector
          (UBlueprintCameraDirectorEvaluator *this)

{
  this->OwningDirectorEvaluator = (FCameraDirectorEvaluator *)0x0;
  return;
}

// NativeActivateCameraDirector @ 14d5b63d0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UBlueprintCameraDirectorEvaluator::NativeActivateCameraDirector
          (UBlueprintCameraDirectorEvaluator *this,FCameraDirectorActivateParams *param_1)

{
  FCameraEvaluationContext *pFVar1;
  UObject *pUVar2;
  UFunction *pUVar3;
  UObject *local_18;
  UObject *local_10;
  
  UE::Cameras::FCameraDirectorEvaluationResult::Reset(&this->EvaluationResult);
  pFVar1 = (this->EvaluationContext).Object;
  pUVar2 = (UObject *)0x0;
  if (pFVar1 != (FCameraEvaluationContext *)0x0) {
    pUVar2 = FWeakObjectPtr::Get(&(pFVar1->WeakOwner).WeakPtr);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  local_18 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  local_10 = pUVar2;
  pUVar3 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UBlueprintCameraDirectorEvaluator_ActivateCameraDirector)
  ;
  (**(code **)(this->_padding_ + 0x260))(this,pUVar3,&local_18);
  return;
}

// NativeAddChildEvaluationContext @ 14d5b6480

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UBlueprintCameraDirectorEvaluator::NativeAddChildEvaluationContext
          (UBlueprintCameraDirectorEvaluator *this,UObject *param_1)

{
  FScriptContainerElement *_Dst;
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  UFunction *pUVar8;
  uint uVar9;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar10;
  uint uVar11;
  int *piVar12;
  UObject *local_28;
  longlong local_20;
  
  local_20 = 0;
  local_28 = param_1;
  pUVar8 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UBlueprintCameraDirectorEvaluator_AddChildEvaluationContext);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar8,&local_28);
  lVar3 = local_20;
  if (local_20 == 0) {
    return false;
  }
  if (((this->EvaluationContext).Object == (FCameraEvaluationContext *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  uVar1 = (((this->EvaluationContext).Object)->ChildrenContexts).ArrayNum;
  if ((int)uVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  else if ((int)uVar1 < (this->ChildrenContextSlotNames).ArrayNum) {
    uVar9 = 0;
    if ((int)uVar1 < (this->ChildrenContextSlotNames).ArrayNum) {
      uVar9 = ~uVar1 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    if ((*(longlong *)
          ((this->ChildrenContextSlotNames).AllocatorInstance.Data + (longlong)(int)uVar1 * 8) != 0)
       && (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<5449172154014761413>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Directors\\BlueprintCameraDirector.cpp"
                              ,0x1c5,
                              "!ChildrenContextSlotNames.IsValidIndex(NewChildIndex) || ChildrenContextSlotNames[NewChildIndex].IsNone()"
                             ), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  pTVar10 = &this->ChildrenContextSlotNames;
  piVar12 = &(this->ChildrenContextSlotNames).ArrayNum;
  iVar7 = *piVar12;
  if (iVar7 <= (int)uVar1) {
    uVar9 = uVar1 + 1;
    if (iVar7 < (int)uVar9) {
      iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,4,uVar9 - iVar7,&pTVar10->AllocatorInstance,piVar12,
                         &(this->ChildrenContextSlotNames).ArrayMax);
      memset((pTVar10->AllocatorInstance).Data + (longlong)iVar6 * 8,0,
             (longlong)(int)(uVar9 - iVar7) << 3);
    }
    else {
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
      }
      if ((int)uVar9 < iVar7) {
        uVar11 = iVar7 - uVar9;
        if (((int)(uVar11 | uVar9) < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        if (uVar11 != 0) {
          _Dst = (pTVar10->AllocatorInstance).Data + (longlong)(int)uVar9 * 8;
          iVar7 = ((this->ChildrenContextSlotNames).ArrayNum - uVar11) - uVar9;
          if (iVar7 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar11 * 8,(longlong)iVar7 << 3);
          }
          piVar12 = &(this->ChildrenContextSlotNames).ArrayNum;
          *piVar12 = *piVar12 - uVar11;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,&pTVar10->AllocatorInstance,(this->ChildrenContextSlotNames).ArrayNum,
                     &(this->ChildrenContextSlotNames).ArrayMax);
        }
      }
    }
  }
  uVar9 = 0;
  if ((int)uVar1 < (this->ChildrenContextSlotNames).ArrayNum) {
    uVar9 = ~uVar1 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    uVar5 = (*pcVar2)();
    return (bool)uVar5;
  }
  *(longlong *)((this->ChildrenContextSlotNames).AllocatorInstance.Data + (longlong)(int)uVar1 * 8)
       = lVar3;
  return true;
}

// NativeDeactivateCameraDirector @ 14d5b67b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UBlueprintCameraDirectorEvaluator::NativeDeactivateCameraDirector
          (UBlueprintCameraDirectorEvaluator *this,FCameraDirectorDeactivateParams *param_1)

{
  FCameraEvaluationContext *pFVar1;
  UObject *pUVar2;
  UFunction *pUVar3;
  UObject *local_18;
  UObject *local_10;
  
  UE::Cameras::FCameraDirectorEvaluationResult::Reset(&this->EvaluationResult);
  pFVar1 = (this->EvaluationContext).Object;
  pUVar2 = (UObject *)0x0;
  if (pFVar1 != (FCameraEvaluationContext *)0x0) {
    pUVar2 = FWeakObjectPtr::Get(&(pFVar1->WeakOwner).WeakPtr);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  local_18 = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  local_10 = pUVar2;
  pUVar3 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UBlueprintCameraDirectorEvaluator_DeactivateCameraDirector);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar3,&local_18);
  return;
}

// NativeInitializeCameraDirector @ 14d5b6860

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UBlueprintCameraDirectorEvaluator::NativeInitializeCameraDirector
          (UBlueprintCameraDirectorEvaluator *this,FCameraDirectorEvaluator *param_1,
          FCameraDirectorInitializeParams *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FCameraEvaluationContext *pFVar2;
  code *pcVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  if ((this->OwningDirectorEvaluator != (FCameraDirectorEvaluator *)0x0) ||
     (param_1 == (FCameraDirectorEvaluator *)0x0)) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5449172154014761338>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Directors\\BlueprintCameraDirector.cpp"
                       ,0x17a,
                       "OwningDirectorEvaluator == nullptr && InOwningDirectorEvaluator != nullptr")
    ;
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->OwningDirectorEvaluator = param_1;
  pTVar1 = (param_2->OwnerContext).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_2->OwnerContext).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar4 = (this->EvaluationContext).SharedReferenceCount.ReferenceController;
  (this->EvaluationContext).Object = pFVar2;
  (this->EvaluationContext).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// NativeRemoveChildEvaluationContext @ 14d5b6900

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UBlueprintCameraDirectorEvaluator::NativeRemoveChildEvaluationContext
          (UBlueprintCameraDirectorEvaluator *this,UObject *param_1)

{
  int iVar1;
  FCameraEvaluationContext *pFVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  UObject *pUVar9;
  UFunction *pUVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  UObject *local_38;
  undefined8 local_30;
  char local_28;
  
  if (((this->EvaluationContext).Object == (FCameraEvaluationContext *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  pFVar2 = (this->EvaluationContext).Object;
  iVar1 = (pFVar2->ChildrenContexts).ArrayNum;
  pFVar3 = (pFVar2->ChildrenContexts).AllocatorInstance.Data;
  if ((iVar1 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  pFVar14 = pFVar3;
  while( true ) {
    if (pFVar14 == pFVar3 + (longlong)iVar1 * 0x10) {
      return false;
    }
    pTVar4 = *(TReferenceControllerBase<1> **)(pFVar14 + 8);
    lVar12 = *(longlong *)pFVar14;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((lVar12 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar12 + 0x20));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    if (pUVar9 == param_1) break;
    pFVar14 = pFVar14 + 0x10;
  }
  uVar13 = (uint)((longlong)pFVar14 - (longlong)pFVar3 >> 4);
  if ((int)uVar13 < 0) {
    return false;
  }
  if ((int)uVar13 < (this->ChildrenContextSlotNames).ArrayNum) {
    uVar11 = ~uVar13 >> 0x1f;
    uVar8 = 0;
    if ((int)uVar13 < (this->ChildrenContextSlotNames).ArrayNum) {
      uVar8 = uVar11;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    lVar12 = (longlong)(int)uVar13;
    if (*(longlong *)((this->ChildrenContextSlotNames).AllocatorInstance.Data + lVar12 * 8) != 0) {
      uVar8 = 0;
      if ((int)uVar13 < (this->ChildrenContextSlotNames).ArrayNum) {
        uVar8 = uVar11;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      local_28 = '\0';
      local_30 = *(undefined8 *)
                  ((this->ChildrenContextSlotNames).AllocatorInstance.Data + lVar12 * 8);
      local_38 = param_1;
      pUVar10 = UObject::FindFunctionChecked
                          ((UObject *)this,
                           NAME_UBlueprintCameraDirectorEvaluator_RemoveChildEvaluationContext);
      (**(code **)(this->_padding_ + 0x260))(this,pUVar10,&local_38);
      if (local_28 == '\0') {
        return false;
      }
      uVar8 = 0;
      if ((int)uVar13 < (this->ChildrenContextSlotNames).ArrayNum) {
        uVar8 = uVar11;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      *(undefined8 *)((this->ChildrenContextSlotNames).AllocatorInstance.Data + lVar12 * 8) = 0;
      return true;
    }
  }
  bVar6 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5449172154014761439>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Directors\\BlueprintCameraDirector.cpp"
                     ,0x1df,
                     "ChildrenContextSlotNames.IsValidIndex(ChildIndex) && !ChildrenContextSlotNames[ChildIndex].IsNone()"
                    );
  if (!bVar6) {
    return false;
  }
  pcVar5 = (code *)swi(3);
  uVar7 = (*pcVar5)();
  return (bool)uVar7;
}

// NativeRunCameraDirector @ 14d5b6bd0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UBlueprintCameraDirectorEvaluator::NativeRunCameraDirector
          (UBlueprintCameraDirectorEvaluator *this,FCameraDirectorEvaluationParams *param_1)

{
  float fVar1;
  FCameraEvaluationContext *pFVar2;
  UObject *pUVar3;
  UFunction *pUVar4;
  float local_38 [2];
  UObject *local_30;
  float local_28;
  UObject *local_20;
  
  UE::Cameras::FCameraDirectorEvaluationResult::Reset(&this->EvaluationResult);
  pFVar2 = (this->EvaluationContext).Object;
  pUVar3 = (UObject *)0x0;
  if (pFVar2 != (FCameraEvaluationContext *)0x0) {
    pUVar3 = FWeakObjectPtr::Get(&(pFVar2->WeakOwner).WeakPtr);
  }
  fVar1 = param_1->DeltaTime;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_38[0] = param_1->DeltaTime;
  local_30 = pUVar3;
  local_28 = fVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  local_20 = pUVar3;
  pUVar4 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UBlueprintCameraDirectorEvaluator_RunCameraDirector);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar4,local_38);
  return;
}

// RemoveChildEvaluationContext @ 14d5cb4a0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UBlueprintCameraDirectorEvaluator::RemoveChildEvaluationContext
          (UBlueprintCameraDirectorEvaluator *this,UObject *param_1,FName param_2)

{
  UFunction *pUVar1;
  UObject *local_28;
  FName local_20;
  char local_18;
  
  local_18 = '\0';
  local_28 = param_1;
  local_20 = param_2;
  pUVar1 = UObject::FindFunctionChecked
                     ((UObject *)this,
                      NAME_UBlueprintCameraDirectorEvaluator_RemoveChildEvaluationContext);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar1,&local_28);
  return local_18 != '\0';
}

// ResolveCameraRigProxy @ 14d5cc4f0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

UCameraRigAsset * __thiscall
UBlueprintCameraDirectorEvaluator::ResolveCameraRigProxy
          (UBlueprintCameraDirectorEvaluator *this,UCameraRigProxyAsset *param_1)

{
  int iVar1;
  FCameraDirectorEvaluator *pFVar2;
  UCameraDirector *pUVar3;
  code *pcVar4;
  bool bVar5;
  UClass *pUVar6;
  UCameraRigAsset *pUVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  pFVar2 = this->OwningDirectorEvaluator;
  if (pFVar2 == (FCameraDirectorEvaluator *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5449172154014761235>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Directors\\BlueprintCameraDirector.cpp"
                       ,0x113,"OwningDirectorEvaluator");
    if (!bVar5) {
      return (UCameraRigAsset *)0x0;
    }
  }
  else {
    if ((pFVar2->PrivateCameraDirector).field0_0x0.DebugPtr != (UCameraDirector *)0x0) {
      pUVar6 = UBlueprintCameraDirector::StaticClass();
      bVar5 = FObjectPtr::IsA((FObjectPtr *)&pFVar2->PrivateCameraDirector,pUVar6);
      if ((bVar5) &&
         (pUVar3 = (pFVar2->PrivateCameraDirector).field0_0x0.DebugPtr,
         pUVar3 != (UCameraDirector *)0x0)) {
        if (param_1 == (UCameraRigProxyAsset *)0x0) {
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_8310036886194225143>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraRigProxyRedirectTable.cpp"
                             ,9,"InParams.CameraRigProxy");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pUVar7 = (UCameraRigAsset *)(*pcVar4)();
            return pUVar7;
          }
        }
        iVar1 = (pUVar3->CameraRigProxyRedirectTable).Entries.ArrayNum;
        pFVar8 = (pUVar3->CameraRigProxyRedirectTable).Entries.AllocatorInstance.Data;
        pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
        while( true ) {
          if ((pUVar3->CameraRigProxyRedirectTable).Entries.ArrayNum != iVar1) {
            `TCheckedPointerIterator<FCameraRigProxyRedirectTableEntry_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_res8);
          }
          if (pFVar8 == pFVar9) {
            return (UCameraRigAsset *)0x0;
          }
          if (*(UCameraRigProxyAsset **)pFVar8 == (UCameraRigProxyAsset *)0x0) {
            bVar5 = param_1 == (UCameraRigProxyAsset *)0x0;
          }
          else {
            bVar5 = *(UCameraRigProxyAsset **)pFVar8 == param_1;
          }
          if (bVar5) break;
          pFVar8 = pFVar8 + 0x10;
        }
        return *(UCameraRigAsset **)(pFVar8 + 8);
      }
    }
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5449172154014761238>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Directors\\BlueprintCameraDirector.cpp"
                       ,0x116,"BlueprintCameraDirector");
    if (!bVar5) {
      return (UCameraRigAsset *)0x0;
    }
  }
  pcVar4 = (code *)swi(3);
  pUVar7 = (UCameraRigAsset *)(*pcVar4)();
  return pUVar7;
}

// RunCameraDirector @ 14d5cc9b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UBlueprintCameraDirectorEvaluator::RunCameraDirector
          (UBlueprintCameraDirectorEvaluator *this,float param_1,UObject *param_2,
          FBlueprintCameraDirectorEvaluationParams *param_3)

{
  UObject *pUVar1;
  UFunction *pUVar2;
  float local_28 [2];
  UObject *local_20;
  float local_18;
  TObjectPtr<UObject>_u_0 local_10;
  
  local_18 = param_3->DeltaTime;
  local_28[0] = param_1;
  local_20 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_3->EvaluationContextOwner).field0_0x0.DebugPtr, pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  local_10 = (param_3->EvaluationContextOwner).field0_0x0;
  pUVar2 = UObject::FindFunctionChecked
                     ((UObject *)this,NAME_UBlueprintCameraDirectorEvaluator_RunCameraDirector);
  (**(code **)(this->_padding_ + 0x260))(this,pUVar2,local_28);
  return;
}

// RunChildCameraDirector @ 14d5cca30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

bool __thiscall
UBlueprintCameraDirectorEvaluator::RunChildCameraDirector
          (UBlueprintCameraDirectorEvaluator *this,float param_1,FName param_2)

{
  int iVar1;
  FName *pFVar2;
  FCameraEvaluationContext *pFVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  longlong lVar6;
  FCameraDirectorEvaluator *this_00;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest> FVar10;
  int iVar11;
  FName *pFVar12;
  undefined1 auStackY_158 [32];
  FCameraDirectorEvaluationParams local_128 [2];
  FCameraDirectorEvaluationResult local_120;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_158;
  pFVar2 = (FName *)(this->ChildrenContextSlotNames).AllocatorInstance.Data;
  pFVar12 = pFVar2;
  do {
    if (pFVar12 == pFVar2 + (this->ChildrenContextSlotNames).ArrayNum) {
      iVar11 = -1;
LAB_14d5cca97:
      if (((this->EvaluationContext).Object == (FCameraEvaluationContext *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      pFVar3 = (this->EvaluationContext).Object;
      iVar1 = (pFVar3->ChildrenContexts).ArrayNum;
      pFVar4 = (pFVar3->ChildrenContexts).AllocatorInstance.Data;
      if ((iVar1 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        uVar9 = (*pcVar7)();
        return (bool)uVar9;
      }
      if (-1 < iVar11) {
        if (iVar11 < iVar1) {
          if ((iVar11 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            uVar9 = (*pcVar7)();
            return (bool)uVar9;
          }
          pTVar5 = *(TReferenceControllerBase<1> **)(pFVar4 + (longlong)iVar11 * 0x10 + 8);
          lVar6 = *(longlong *)(pFVar4 + (longlong)iVar11 * 0x10);
          if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((lVar6 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar8)) {
            pcVar7 = (code *)swi(3);
            uVar9 = (*pcVar7)();
            return (bool)uVar9;
          }
          this_00 = *(FCameraDirectorEvaluator **)(lVar6 + 0xa60);
          if (this_00 != (FCameraDirectorEvaluator *)0x0) {
            local_120.Requests.AllocatorInstance.SecondaryData =
                 (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0;
            local_120.Requests.ArrayNum = 0;
            local_120.Requests.ArrayMax = 4;
            local_128[0].DeltaTime = param_1;
            UE::Cameras::FCameraDirectorEvaluator::Run(this_00,local_128,&local_120);
            if (local_120.Requests.ArrayNum != 0) {
              UE::Cameras::FCameraDirectorEvaluationResult::operator=
                        (&this->EvaluationResult,&local_120);
              FVar10 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)
                       &local_120;
              if (local_120.Requests.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
                FVar10 = local_120.Requests.AllocatorInstance.SecondaryData;
              }
              DestructItems<UE::Cameras::FCameraRigActivationDeactivationRequest,int>
                        ((FCameraRigActivationDeactivationRequest *)FVar10,
                         local_120.Requests.ArrayNum);
              if (local_120.Requests.AllocatorInstance.SecondaryData !=
                  (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
                FMemory::Free((void *)local_120.Requests.AllocatorInstance.SecondaryData);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar5);
              return true;
            }
            FVar10 = (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)
                     &local_120;
            if (local_120.Requests.AllocatorInstance.SecondaryData !=
                (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
              FVar10 = local_120.Requests.AllocatorInstance.SecondaryData;
            }
            DestructItems<UE::Cameras::FCameraRigActivationDeactivationRequest,int>
                      ((FCameraRigActivationDeactivationRequest *)FVar10,0);
            if (local_120.Requests.AllocatorInstance.SecondaryData !=
                (ForElementType<UE::Cameras::FCameraRigActivationDeactivationRequest>)0x0) {
              FMemory::Free((void *)local_120.Requests.AllocatorInstance.SecondaryData);
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar5);
        }
        else {
          bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<5449172154014761135>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Directors\\BlueprintCameraDirector.cpp"
                             ,0xaf,"ChildrenContexts.IsValidIndex(ChildIndex)");
          if (bVar8) {
            pcVar7 = (code *)swi(3);
            uVar9 = (*pcVar7)();
            return (bool)uVar9;
          }
        }
      }
      return false;
    }
    if (*pFVar12 == param_2) {
      iVar11 = (int)((longlong)pFVar12 - (longlong)pFVar2 >> 3);
      goto LAB_14d5cca97;
    }
    pFVar12 = pFVar12 + 1;
  } while( true );
}

// StaticRegisterNativesUBlueprintCameraDirectorEvaluator @ 14d5d0bc0

void __cdecl
UBlueprintCameraDirectorEvaluator::StaticRegisterNativesUBlueprintCameraDirectorEvaluator(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xd;
  local_18.DataPtr = Z_Construct_UClass_UBlueprintCameraDirectorEvaluator_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execActivateCameraRig @ 14d5d75b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UBlueprintCameraDirectorEvaluator::execActivateCameraRig
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  UCameraRigAsset *local_res20;
  
  local_res20 = (UCameraRigAsset *)0x0;
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
  ActivateCameraRig((UBlueprintCameraDirectorEvaluator *)param_1,local_res20,local_res10[0] != 0);
  return;
}

// execActivateCameraRigViaProxy @ 14d5d7690

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UBlueprintCameraDirectorEvaluator::execActivateCameraRigViaProxy
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  UCameraRigProxyAsset *local_res20;
  
  local_res20 = (UCameraRigProxyAsset *)0x0;
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
  ActivateCameraRigViaProxy
            ((UBlueprintCameraDirectorEvaluator *)param_1,local_res20,local_res10[0] != 0);
  return;
}

// execActivatePersistentBaseCameraRig @ 14d5d7ad0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UBlueprintCameraDirectorEvaluator::execActivatePersistentBaseCameraRig
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UCameraRigAsset *local_res10;
  
  local_res10 = (UCameraRigAsset *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ActivatePersistentBaseCameraRig((UBlueprintCameraDirectorEvaluator *)param_1,local_res10);
  return;
}

// execActivatePersistentGlobalCameraRig @ 14d5d7ec0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UBlueprintCameraDirectorEvaluator::execActivatePersistentGlobalCameraRig
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UCameraRigAsset *local_res10;
  
  local_res10 = (UCameraRigAsset *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ActivatePersistentGlobalCameraRig((UBlueprintCameraDirectorEvaluator *)param_1,local_res10);
  return;
}

// execActivatePersistentVisualCameraRig @ 14d5d82b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UBlueprintCameraDirectorEvaluator::execActivatePersistentVisualCameraRig
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UCameraRigAsset *local_res10;
  
  local_res10 = (UCameraRigAsset *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ActivatePersistentVisualCameraRig((UBlueprintCameraDirectorEvaluator *)param_1,local_res10);
  return;
}

// execDeactivatePersistentBaseCameraRig @ 14d5d84b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UBlueprintCameraDirectorEvaluator::execDeactivatePersistentBaseCameraRig
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UCameraRigAsset *local_res10;
  
  local_res10 = (UCameraRigAsset *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  DeactivatePersistentBaseCameraRig((UBlueprintCameraDirectorEvaluator *)param_1,local_res10);
  return;
}

// execDeactivatePersistentGlobalCameraRig @ 14d5d8540

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UBlueprintCameraDirectorEvaluator::execDeactivatePersistentGlobalCameraRig
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UCameraRigAsset *local_res10;
  
  local_res10 = (UCameraRigAsset *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  DeactivatePersistentGlobalCameraRig((UBlueprintCameraDirectorEvaluator *)param_1,local_res10);
  return;
}

// execDeactivatePersistentVisualCameraRig @ 14d5d85d0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UBlueprintCameraDirectorEvaluator::execDeactivatePersistentVisualCameraRig
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UCameraRigAsset *local_res10;
  
  local_res10 = (UCameraRigAsset *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  DeactivatePersistentVisualCameraRig((UBlueprintCameraDirectorEvaluator *)param_1,local_res10);
  return;
}

// execFindEvaluationContextOwnerActor @ 14d5d8660

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraDirectorEvaluator::execFindEvaluationContextOwnerActor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UObject *local_res8;
  undefined8 local_res10;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  if (*(longlong *)&param_1[7].field_0x8 == 0) {
    local_res10 = 0;
    FFrame::KismetExecutionMessage
              (L"Can\'t access evaluation context outside of RunCameraDirector",Error,(FName)0x0);
  }
  else {
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)&param_1[7].field_0x8 + 0x20));
    if (pUVar5 != (UObject *)0x0) {
      pUVar6 = Z_Construct_UClass_UActorComponent_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar6->_padding_)) {
        *(undefined8 *)param_3 = *(undefined8 *)&pUVar5[4].field_0x8;
        return;
      }
    }
    if (*(longlong *)&param_1[7].field_0x8 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)&param_1[7].field_0x8 + 0x20));
    if (pUVar5 != (UObject *)0x0) {
      pUVar6 = Z_Construct_UClass_AActor_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar6->_padding_)) {
        *(UObject **)param_3 = pUVar5;
        return;
      }
    }
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execGetConditionalContextResult @ 14d5d9820

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraDirectorEvaluator::execGetConditionalContextResult
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FCameraNodeEvaluationResult *pFVar2;
  FSharedReferencer<1> FVar3;
  ECameraEvaluationDataCondition local_res8 [8];
  undefined8 local_res10;
  undefined8 uStack_30;
  FSharedReferencer<1> aFStack_28 [4];
  
  local_res8[0] = ActiveCameraRig;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(FCameraEvaluationContext **)&param_1[7].field_0x8 == (FCameraEvaluationContext *)0x0) {
    local_res10 = 0;
    FFrame::KismetExecutionMessage
              (L"Can\'t access evaluation context\'s initial result outside of RunCameraDirector",
               Error,(FName)0x0);
    uStack_30 = 0;
    aFStack_28[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar2 = (FCameraNodeEvaluationResult *)0x0;
  }
  else {
    uStack_30 = 0;
    aFStack_28[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pFVar2 = UE::Cameras::FCameraEvaluationContext::GetOrAddConditionalResult
                       (*(FCameraEvaluationContext **)&param_1[7].field_0x8,local_res8[0]);
  }
  *(FCameraNodeEvaluationResult **)param_3 = pFVar2;
  FVar3.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((undefined8 *)((longlong)param_3 + 8) != &uStack_30) {
    *(undefined8 *)((longlong)param_3 + 8) = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 0x10),aFStack_28);
    FVar3.ReferenceController = aFStack_28[0].ReferenceController;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar3.ReferenceController);
  return;
}

// execGetInitialContextResult @ 14d5da1e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UBlueprintCameraDirectorEvaluator::execGetInitialContextResult
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong lVar1;
  undefined8 uStack_20;
  FSharedReferencer<1> aFStack_18 [2];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[7].field_0x8 == 0) {
    FFrame::KismetExecutionMessage
              (L"Can\'t access evaluation context\'s initial result outside of RunCameraDirector",
               Error,(FName)0x0);
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)&param_1[7].field_0x8 + 0x40;
  }
  aFStack_18[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  uStack_20 = 0;
  *(longlong *)param_3 = lVar1;
  if ((undefined8 *)((longlong)param_3 + 8) != &uStack_20) {
    *(undefined8 *)((longlong)param_3 + 8) = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_3 + 0x10),aFStack_18);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_18[0].ReferenceController);
  return;
}

// execResolveCameraRigProxy @ 14d5dc400

void __cdecl
UBlueprintCameraDirectorEvaluator::execResolveCameraRigProxy
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong lVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  UClass *pUVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  longlong local_res10;
  
  lVar10 = 0;
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  lVar5 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = *(longlong *)(param_1 + 1);
  if (lVar3 == 0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5449172154014761235>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Directors\\BlueprintCameraDirector.cpp"
                       ,0x113,"OwningDirectorEvaluator");
    if (!bVar6) {
      *(undefined8 *)param_3 = 0;
      return;
    }
  }
  else {
    if (*(longlong *)(lVar3 + 0x20) != 0) {
      pUVar7 = UBlueprintCameraDirector::StaticClass();
      bVar6 = FObjectPtr::IsA((FObjectPtr *)(lVar3 + 0x20),pUVar7);
      if ((bVar6) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0)) {
        if (lVar5 == 0) {
          bVar6 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_8310036886194225143>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Core\\CameraRigProxyRedirectTable.cpp"
                             ,9,"InParams.CameraRigProxy");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar1 = *(int *)(lVar3 + 0x30);
        plVar8 = *(longlong **)(lVar3 + 0x28);
        plVar9 = plVar8 + (longlong)iVar1 * 2;
        while( true ) {
          if (*(int *)(lVar3 + 0x30) != iVar1) {
            `TCheckedPointerIterator<FCameraRigProxyRedirectTableEntry_const_,int,0>::operator!='::
            __l2::<lambda_1>::operator()(local_res8);
          }
          if (plVar8 == plVar9) goto LAB_14d5dc56c;
          if (*plVar8 == 0) {
            bVar6 = lVar5 == 0;
          }
          else {
            bVar6 = *plVar8 == lVar5;
          }
          if (bVar6) break;
          plVar8 = plVar8 + 2;
        }
        lVar10 = plVar8[1];
LAB_14d5dc56c:
        *(longlong *)param_3 = lVar10;
        return;
      }
    }
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5449172154014761238>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Directors\\BlueprintCameraDirector.cpp"
                       ,0x116,"BlueprintCameraDirector");
    if (!bVar6) {
      *(undefined8 *)param_3 = 0;
      return;
    }
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// execRunChildCameraDirector @ 14d5dc5d0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __cdecl
UBlueprintCameraDirectorEvaluator::execRunChildCameraDirector
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  float local_res10 [2];
  FName local_res18 [2];
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res18);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = RunChildCameraDirector
                    ((UBlueprintCameraDirectorEvaluator *)param_1,local_res10[0],local_res18[0]);
  *(bool *)param_3 = bVar2;
  return;
}

