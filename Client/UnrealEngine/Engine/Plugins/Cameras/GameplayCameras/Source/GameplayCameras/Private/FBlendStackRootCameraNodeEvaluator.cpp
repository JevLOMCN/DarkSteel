// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 24

// FBlendStackRootCameraNodeEvaluator @ 14d5428b0

FBlendStackRootCameraNodeEvaluator * __thiscall
UE::Cameras::FBlendStackRootCameraNodeEvaluator::FBlendStackRootCameraNodeEvaluator
          (FBlendStackRootCameraNodeEvaluator *this)

{
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FBlendStackRootCameraNodeEvaluator_Cameras_UE__6B_;
  this->BlendEvaluator = (FBlendCameraNodeEvaluator *)0x0;
  this->RootEvaluator = (FCameraNodeEvaluator *)0x0;
  (this->BlendablePrefabCameraRig).field0_0x0.DebugPtr = (UCameraRigAsset *)0x0;
  (this->BlendedParameterOverridesStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlendedParameterOverridesStack).ArrayNum = 0;
  (this->BlendedParameterOverridesStack).ArrayMax = 0;
  (this->CameraRigAssetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CameraRigAssetName).Data.ArrayNum = 0;
  (this->CameraRigAssetName).Data.ArrayMax = 0;
  *(undefined4 *)&this->_padding_ = 1;
  return this;
}

// BuildNestedEvaluatorTrail @ 14d54ece0

FCameraNodeEvaluator * __cdecl
UE::Cameras::FBlendStackRootCameraNodeEvaluator::BuildNestedEvaluatorTrail
          (FCameraNodeEvaluator *param_1,
          TArray<UE::Cameras::FCameraRigCameraNodeEvaluator_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  FCameraNodeEvaluator *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  FCameraNodeEvaluator *local_18 [2];
  
  cVar3 = (**(code **)(param_1->_padding_ + 8))
                    (param_1,&FCameraRigCameraNodeEvaluator::PrivateTypeID);
  local_18[0] = (FCameraNodeEvaluator *)0x0;
  if (cVar3 != '\0') {
    local_18[0] = param_1;
  }
  if (local_18[0] != (FCameraNodeEvaluator *)0x0) {
    pFVar7 = (param_2->AllocatorInstance).Data;
    pFVar1 = pFVar7 + (longlong)param_2->ArrayNum * 8;
    for (; pFVar7 != pFVar1; pFVar7 = pFVar7 + 8) {
      if (*(FCameraNodeEvaluator **)pFVar7 == local_18[0]) {
        local_res8[0] = 0;
        bVar4 = `UE::Cameras::FBlendStackRootCameraNodeEvaluator::BuildNestedEvaluatorTrail'::__l6::
                <lambda_1>::operator()(local_res8);
        if (!bVar4) {
          return param_1;
        }
        break;
      }
    }
    pFVar1 = (param_2->AllocatorInstance).Data;
    if (((pFVar1 <= (FScriptContainerElement *)local_18) &&
        ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_2->ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FCameraNodeEvaluator *)(*pcVar2)();
      return pFVar6;
    }
    iVar5 = param_2->ArrayNum;
    if (iVar5 == param_2->ArrayMax) {
      iVar5 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
      param_2->ArrayNum = iVar5;
    }
    param_2->ArrayNum = iVar5 + 1;
    *(FCameraNodeEvaluator **)((param_2->AllocatorInstance).Data + (longlong)iVar5 * 8) =
         local_18[0];
    if ((FCameraNodeEvaluator *)local_18[0][1]._padding_ != (FCameraNodeEvaluator *)0x0) {
      pFVar6 = BuildNestedEvaluatorTrail((FCameraNodeEvaluator *)local_18[0][1]._padding_,param_2);
      return pFVar6;
    }
  }
  return param_1;
}

// BuildNestedPrefabTrail @ 14d54ee30

UCameraRigAsset * __cdecl
UE::Cameras::FBlendStackRootCameraNodeEvaluator::BuildNestedPrefabTrail
          (UCameraRigAsset *param_1,
          TArray<TObjectPtr<UCameraRigCameraNode_const_>,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  TObjectPtr<UCameraNode>_u_0 TVar2;
  TObjectPtr<UCameraNode>_u_0 *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UClass *pUVar7;
  FScriptContainerElement *pFVar8;
  UCameraRigAsset *pUVar9;
  int *piVar10;
  undefined1 local_res8 [8];
  TObjectPtr<UCameraNode>_u_0 local_28 [2];
  
  do {
    pUVar9 = param_1;
    if ((pUVar9->RootNode).field0_0x0.DebugPtr == (UCameraNode *)0x0) {
      return pUVar9;
    }
    pUVar7 = Z_Construct_UClass_UCameraRigCameraNode_NoRegister();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&pUVar9->RootNode,pUVar7);
    if (!bVar5) {
      return pUVar9;
    }
    TVar2 = (TObjectPtr<UCameraNode>_u_0)(pUVar9->RootNode).field0_0x0.DebugPtr;
    if (TVar2.DebugPtr == (UCameraNode *)0x0) {
      return pUVar9;
    }
    pFVar8 = (param_2->AllocatorInstance).Data;
    pFVar1 = pFVar8 + (longlong)param_2->ArrayNum * 8;
    for (; pFVar8 != pFVar1; pFVar8 = pFVar8 + 8) {
      if (*(UCameraNode **)pFVar8 == (UCameraNode *)0x0) {
        bVar5 = TVar2.DebugPtr == (UCameraNode *)0x0;
      }
      else {
        bVar5 = *(UCameraNode **)pFVar8 == TVar2.DebugPtr;
      }
      if (bVar5) {
        local_res8[0] = 0;
        bVar5 = `UE::Cameras::FBlendStackRootCameraNodeEvaluator::BuildNestedPrefabTrail'::__l6::
                <lambda_1>::operator()(local_res8);
        if (!bVar5) {
          return pUVar9;
        }
        break;
      }
    }
    piVar10 = &param_2->ArrayNum;
    local_28[0] = TVar2;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
    }
    pTVar3 = (TObjectPtr<UCameraNode>_u_0 *)(param_2->AllocatorInstance).Data;
    if (((pTVar3 <= local_28) && (local_28 < pTVar3 + param_2->ArrayMax)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      pUVar9 = (UCameraRigAsset *)(*pcVar4)();
      return pUVar9;
    }
    iVar6 = *piVar10;
    if (iVar6 == param_2->ArrayMax) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
      *piVar10 = iVar6;
    }
    *piVar10 = iVar6 + 1;
    ((TObjectPtr<UCameraNode>_u_0 *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8))->
    DebugPtr = (UCameraNode *)local_28[0];
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (local_28[0].DebugPtr != (UCameraNode *)0x0)) {
      GC::MarkAsReachable((UObject *)local_28[0].DebugPtr);
    }
    param_1 = (UCameraRigAsset *)TVar2.DebugPtr[2]._padding_;
    if ((UCameraRigAsset *)TVar2.DebugPtr[2]._padding_ == (UCameraRigAsset *)0x0) {
      return pUVar9;
    }
  } while( true );
}

// CompareCameraRigForMerging @ 14d5514b0

ECameraRigMergingEligibility __thiscall
UE::Cameras::FBlendStackRootCameraNodeEvaluator::CompareCameraRigForMerging
          (FBlendStackRootCameraNodeEvaluator *this,UCameraRigAsset *param_1)

{
  int iVar1;
  UCameraRigAsset *pUVar2;
  code *pcVar3;
  uint uVar4;
  ECameraRigMergingEligibility EVar5;
  UCameraRigAsset *pUVar6;
  bool bVar7;
  TArray<TObjectPtr<UCameraRigCameraNode_const_>,TSizedDefaultAllocator<32>_> local_18;
  
  if (param_1 == (UCameraRigAsset *)0x0) {
    pUVar6 = (UCameraRigAsset *)0x0;
  }
  else {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    pUVar6 = BuildNestedPrefabTrail(param_1,&local_18);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  pUVar2 = (this->BlendablePrefabCameraRig).field0_0x0.DebugPtr;
  if (pUVar2 == (UCameraRigAsset *)0x0) {
    bVar7 = pUVar6 == (UCameraRigAsset *)0x0;
  }
  else {
    bVar7 = pUVar2 == pUVar6;
  }
  if (!bVar7) {
    return Different;
  }
  iVar1 = (this->BlendedParameterOverridesStack).ArrayNum;
  if (iVar1 == 0) {
    return EligibleForMerge;
  }
  uVar4 = 0;
  if ((int)(iVar1 - 1U) < iVar1) {
    uVar4 = ~(iVar1 - 1U) >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
  }
  pUVar6 = *(UCameraRigAsset **)
            ((this->BlendedParameterOverridesStack).AllocatorInstance.Data +
            (longlong)(this->BlendedParameterOverridesStack).ArrayNum * 0xa30 + -0xa30);
  if (pUVar6 == (UCameraRigAsset *)0x0) {
    return (param_1 == (UCameraRigAsset *)0x0) + EligibleForMerge;
  }
  return (pUVar6 == param_1) + EligibleForMerge;
}

// FindInnermostCameraRigEvaluator @ 14d554260

FCameraNodeEvaluator * __cdecl
UE::Cameras::FBlendStackRootCameraNodeEvaluator::FindInnermostCameraRigEvaluator
          (FCameraNodeEvaluator *param_1)

{
  FCameraNodeEvaluator *pFVar1;
  TArray<UE::Cameras::FCameraRigCameraNodeEvaluator_*,TSizedDefaultAllocator<32>_> local_18;
  
  pFVar1 = (FCameraNodeEvaluator *)0x0;
  if (param_1 != (FCameraNodeEvaluator *)0x0) {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    pFVar1 = BuildNestedEvaluatorTrail(param_1,&local_18);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return pFVar1;
}

// FindInnermostCameraRigPrefab @ 14d5542b0

UCameraRigAsset * __cdecl
UE::Cameras::FBlendStackRootCameraNodeEvaluator::FindInnermostCameraRigPrefab
          (UCameraRigAsset *param_1)

{
  UCameraRigAsset *pUVar1;
  TArray<TObjectPtr<UCameraRigCameraNode_const_>,TSizedDefaultAllocator<32>_> local_18;
  
  pUVar1 = (UCameraRigAsset *)0x0;
  if (param_1 != (UCameraRigAsset *)0x0) {
    local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = 0;
    local_18.ArrayMax = 0;
    pUVar1 = BuildNestedPrefabTrail(param_1,&local_18);
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return pUVar1;
}

// GetTypeID @ 14d558ce0

FCameraObjectTypeID * __thiscall
UE::Cameras::FBlendStackRootCameraNodeEvaluator::GetTypeID(FBlendStackRootCameraNodeEvaluator *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// InitializeBlendedParameterOverridesStack @ 14d5598a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBlendStackRootCameraNodeEvaluator::InitializeBlendedParameterOverridesStack
          (FBlendStackRootCameraNodeEvaluator *this)

{
  int *piVar1;
  UObjectBaseUtility *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FCameraNodeEvaluator *pFVar5;
  UClass *pUVar6;
  UCameraRigAsset *pUVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_aa8 [32];
  UCameraRigAsset **local_a88;
  FScriptContainerElement *local_a80;
  longlong local_a78;
  longlong local_a70;
  undefined8 local_a68;
  TArray<UE::Cameras::FCameraRigCameraNodeEvaluator_*,TSizedDefaultAllocator<32>_> local_a58;
  UCameraRigAsset *local_a48;
  UObject *pUStack_a40;
  TArray<TObjectPtr<UCameraRigCameraNode_const_>,TSizedDefaultAllocator<32>_> local_a38;
  undefined8 local_a28;
  FCameraNodeEvaluationResult local_a18;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_aa8;
  if ((this->BlendedParameterOverridesStack).ArrayNum == 0) {
    lVar8 = 0;
    if (this->RootEvaluator == (FCameraNodeEvaluator *)0x0) {
      pFVar5 = (FCameraNodeEvaluator *)0x0;
    }
    else {
      local_a58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a58.ArrayNum = 0;
      local_a58.ArrayMax = 0;
      pFVar5 = BuildNestedEvaluatorTrail(this->RootEvaluator,&local_a58);
      if (local_a58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a58.AllocatorInstance.Data);
      }
    }
    this->RootEvaluator = pFVar5;
    if (this->_padding_ != 0) {
      pUVar6 = UBlendStackRootCameraNode::StaticClass();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar6);
      if (bVar3) {
        lVar8 = this->_padding_;
      }
    }
    this_00 = *(UObjectBaseUtility **)(lVar8 + 0x40);
    pUVar6 = Z_Construct_UClass_UCameraRigAsset_NoRegister();
    pUVar7 = (UCameraRigAsset *)UObjectBaseUtility::GetTypedOuter(this_00,pUVar6);
    local_a38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a48 = (UCameraRigAsset *)0x0;
    pUStack_a40 = (UObject *)0x0;
    local_a38.ArrayNum = 0;
    local_a38.ArrayMax = 0;
    local_a28 = 0;
    FCameraNodeEvaluationResult::FCameraNodeEvaluationResult(&local_a18);
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UCameraRigAsset *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar7);
    }
    local_a48 = pUVar7;
    BuildNestedPrefabTrail(pUVar7,&local_a38);
    FCameraVariableTable::Initialize
              (&local_a18.VariableTable,
               (FCameraVariableTableAllocationInfo *)
               &((this->BlendablePrefabCameraRig).field0_0x0.DebugPtr)->_padding_);
    pFVar9 = (this->BlendedParameterOverridesStack).AllocatorInstance.Data;
    if ((pFVar9 <= (FScriptContainerElement *)&local_a48) &&
       (lVar8 = (longlong)(this->BlendedParameterOverridesStack).ArrayMax,
       (FScriptContainerElement *)&local_a48 < pFVar9 + lVar8 * 0xa30)) {
      local_a70 = (longlong)(this->BlendedParameterOverridesStack).ArrayNum;
      local_a68 = 0xa30;
      local_a88 = &local_a48;
      local_a80 = pFVar9;
      local_a78 = lVar8;
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
    iVar4 = (this->BlendedParameterOverridesStack).ArrayNum;
    piVar1 = &(this->BlendedParameterOverridesStack).ArrayMax;
    if (iVar4 == *piVar1) {
      iVar4 = Core::Private::
              ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0xa30,0x10,&(this->BlendedParameterOverridesStack).AllocatorInstance,piVar1
                        );
    }
    pFVar9 = (this->BlendedParameterOverridesStack).AllocatorInstance.Data + (longlong)iVar4 * 0xa30
    ;
    (this->BlendedParameterOverridesStack).ArrayNum = iVar4 + 1;
    *(UCameraRigAsset **)pFVar9 = local_a48;
    if ((GC::GIsIncrementalReachabilityPending != false) && (local_a48 != (UCameraRigAsset *)0x0)) {
      GC::MarkAsReachable((UObject *)local_a48);
    }
    *(UObject **)(pFVar9 + 8) = pUStack_a40;
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUStack_a40 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUStack_a40);
    }
    *(undefined8 *)(pFVar9 + 0x10) = 0;
    *(FScriptContainerElement **)(pFVar9 + 0x10) = local_a38.AllocatorInstance.Data;
    local_a38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar9 + 0x18) = local_a38.ArrayNum;
    *(int *)(pFVar9 + 0x1c) = local_a38.ArrayMax;
    local_a38.ArrayNum = 0;
    local_a38.ArrayMax = 0;
    *(undefined8 *)(pFVar9 + 0x20) = local_a28;
    FCameraNodeEvaluationResult::FCameraNodeEvaluationResult
              ((FCameraNodeEvaluationResult *)(pFVar9 + 0x30),&local_a18);
    FCameraNodeEvaluationResult::~FCameraNodeEvaluationResult(&local_a18);
    if (local_a38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a38.AllocatorInstance.Data);
    }
  }
  return;
}

// IsKindOf @ 14d55a450

bool __thiscall
UE::Cameras::FBlendStackRootCameraNodeEvaluator::IsKindOf
          (FBlendStackRootCameraNodeEvaluator *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FBlendStackRootCameraNodeEvaluator>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraNodeEvaluator>)param_1->ID !=
      FCameraNodeEvaluator::PrivateTypeID)) {
    return false;
  }
  return true;
}

// MergeCameraRig @ 14d55a760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBlendStackRootCameraNodeEvaluator::MergeCameraRig
          (FBlendStackRootCameraNodeEvaluator *this,FCameraNodeEvaluatorBuildParams *param_1,
          FCameraNodeEvaluatorInitializeParams *param_2,FCameraNodeEvaluationResult *param_3,
          UCameraRigAsset *param_4,UBlendCameraNode *param_5)

{
  int *piVar1;
  FString *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  undefined1 auStack_af8 [32];
  UCameraRigAsset **local_ad8;
  FScriptContainerElement *local_ad0;
  longlong local_ac8;
  longlong local_ac0;
  undefined8 local_ab8;
  undefined1 local_aa8;
  undefined1 local_aa7 [7];
  FString local_aa0;
  FName local_a90;
  UCameraRigAsset *local_a88;
  UBlendCameraNode *pUStack_a80;
  TArray<TObjectPtr<UCameraRigCameraNode_const_>,TSizedDefaultAllocator<32>_> local_a78;
  FCameraNodeEvaluator *local_a68;
  FCameraNodeEvaluationResult local_a58;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_af8;
  if (param_4 == (UCameraRigAsset *)0x0) {
    local_aa8 = 0;
    bVar4 = `UE::Cameras::FBlendStackRootCameraNodeEvaluator::MergeCameraRig'::__l3::<lambda_1>::
            operator()(&local_aa8);
    if (!bVar4) {
      return;
    }
  }
  if ((this->BlendablePrefabCameraRig).field0_0x0.DebugPtr == (UCameraRigAsset *)0x0) {
    local_aa7[0] = 0;
    bVar4 = `UE::Cameras::FBlendStackRootCameraNodeEvaluator::MergeCameraRig'::__l6::<lambda_2>::
            operator()(local_aa7);
    if (!bVar4) {
      return;
    }
  }
  InitializeBlendedParameterOverridesStack(this);
  local_a78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a88 = (UCameraRigAsset *)0x0;
  pUStack_a80 = (UBlendCameraNode *)0x0;
  local_a78.ArrayNum = 0;
  local_a78.ArrayMax = 0;
  local_a68 = (FCameraNodeEvaluator *)0x0;
  FCameraNodeEvaluationResult::FCameraNodeEvaluationResult(&local_a58);
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_4 != (UCameraRigAsset *)0x0)) {
    GC::MarkAsReachable((UObject *)param_4);
  }
  local_a88 = param_4;
  if ((GC::GIsIncrementalReachabilityPending != false) && (param_5 != (UBlendCameraNode *)0x0)) {
    GC::MarkAsReachable((UObject *)param_5);
  }
  pUStack_a80 = param_5;
  BuildNestedPrefabTrail(param_4,&local_a78);
  FCameraVariableTable::Initialize
            (&local_a58.VariableTable,
             (FCameraVariableTableAllocationInfo *)
             &((this->BlendablePrefabCameraRig).field0_0x0.DebugPtr)->_padding_);
  if (param_5 != (UBlendCameraNode *)0x0) {
    local_a68 = (FCameraNodeEvaluator *)
                FCameraNodeEvaluatorBuildParams::
                BuildEvaluatorAs<UE::Cameras::FBlendCameraNodeEvaluator>
                          (param_1,(UCameraNode *)param_5);
  }
  if (local_a68 != (FCameraNodeEvaluator *)0x0) {
    FCameraNodeEvaluator::Initialize(local_a68,param_2,param_3);
  }
  pFVar7 = (this->BlendedParameterOverridesStack).AllocatorInstance.Data;
  if ((pFVar7 <= (FScriptContainerElement *)&local_a88) &&
     (lVar6 = (longlong)(this->BlendedParameterOverridesStack).ArrayMax,
     (FScriptContainerElement *)&local_a88 < pFVar7 + lVar6 * 0xa30)) {
    local_ac0 = (longlong)(this->BlendedParameterOverridesStack).ArrayNum;
    local_ab8 = 0xa30;
    local_ad8 = &local_a88;
    local_ad0 = pFVar7;
    local_ac8 = lVar6;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->BlendedParameterOverridesStack).ArrayNum;
  piVar1 = &(this->BlendedParameterOverridesStack).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xa30,0x10,&(this->BlendedParameterOverridesStack).AllocatorInstance,piVar1);
  }
  pFVar7 = (this->BlendedParameterOverridesStack).AllocatorInstance.Data;
  (this->BlendedParameterOverridesStack).ArrayNum = iVar5 + 1;
  pFVar7 = pFVar7 + (longlong)iVar5 * 0xa30;
  *(UCameraRigAsset **)pFVar7 = local_a88;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_a88 != (UCameraRigAsset *)0x0)) {
    GC::MarkAsReachable((UObject *)local_a88);
  }
  *(UBlendCameraNode **)(pFVar7 + 8) = pUStack_a80;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUStack_a80 != (UBlendCameraNode *)0x0))
  {
    GC::MarkAsReachable((UObject *)pUStack_a80);
  }
  *(undefined8 *)(pFVar7 + 0x10) = 0;
  *(FScriptContainerElement **)(pFVar7 + 0x10) = local_a78.AllocatorInstance.Data;
  local_a78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)(pFVar7 + 0x18) = local_a78.ArrayNum;
  *(int *)(pFVar7 + 0x1c) = local_a78.ArrayMax;
  local_a78.ArrayNum = 0;
  local_a78.ArrayMax = 0;
  *(FCameraNodeEvaluator **)(pFVar7 + 0x20) = local_a68;
  FCameraNodeEvaluationResult::FCameraNodeEvaluationResult
            ((FCameraNodeEvaluationResult *)(pFVar7 + 0x30),&local_a58);
  if (param_4 == (UCameraRigAsset *)0x0) {
    ::FString::FString(&local_aa0,L"None");
  }
  else {
    local_a90 = (FName)param_4->_padding_;
    ::FName::ToString(&local_a90,&local_aa0);
  }
  pFVar2 = &this->CameraRigAssetName;
  if (pFVar2 != &local_aa0) {
    pFVar7 = (pFVar2->Data).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pFVar2->Data).AllocatorInstance.Data = local_aa0.Data.AllocatorInstance.Data;
    (this->CameraRigAssetName).Data.ArrayNum = local_aa0.Data.ArrayNum;
    (this->CameraRigAssetName).Data.ArrayMax = local_aa0.Data.ArrayMax;
    local_aa0.Data.ArrayNum = 0;
    local_aa0.Data.ArrayMax = 0;
    local_aa0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_aa0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_aa0.Data.AllocatorInstance.Data);
  }
  FCameraNodeEvaluationResult::~FCameraNodeEvaluationResult(&local_a58);
  if (local_a78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a78.AllocatorInstance.Data);
  }
  return;
}

// OnAddReferencedObjects @ 14d55ac80

void __thiscall
UE::Cameras::FBlendStackRootCameraNodeEvaluator::OnAddReferencedObjects
          (FBlendStackRootCameraNodeEvaluator *this,FReferenceCollector *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->BlendablePrefabCameraRig,0,0);
  iVar1 = (this->BlendedParameterOverridesStack).ArrayNum;
  pFVar2 = (this->BlendedParameterOverridesStack).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0xa30;
  while( true ) {
    if ((this->BlendedParameterOverridesStack).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Cameras::FBlendStackRootCameraNodeEvaluator::FBlendedParameterOverrides,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    (**(code **)(param_1->_padding_ + 0x88))(param_1,pFVar2,0,0);
    (**(code **)(param_1->_padding_ + 0x88))(param_1,pFVar2 + 8,0);
    (**(code **)(param_1->_padding_ + 0x90))
              (param_1,*(undefined8 *)(pFVar2 + 0x10),*(undefined4 *)(pFVar2 + 0x18),0,0);
    FCameraContextDataTable::AddReferencedObjects
              ((FCameraContextDataTable *)(pFVar2 + 0x128),param_1);
    pFVar2 = pFVar2 + 0xa30;
  }
  return;
}

// OnBuild @ 14d55ada0

void __thiscall
UE::Cameras::FBlendStackRootCameraNodeEvaluator::OnBuild
          (FBlendStackRootCameraNodeEvaluator *this,FCameraNodeEvaluatorBuildParams *param_1)

{
  UCameraNode *pUVar1;
  bool bVar2;
  UClass *pUVar3;
  FBlendCameraNodeEvaluator *pFVar4;
  FCameraNodeEvaluator *pFVar5;
  longlong lVar6;
  
  if (this->_padding_ != 0) {
    pUVar3 = UBlendStackRootCameraNode::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar3);
    if (bVar2) {
      lVar6 = this->_padding_;
      goto LAB_14d55adda;
    }
  }
  lVar6 = 0;
LAB_14d55adda:
  pFVar4 = FCameraNodeEvaluatorBuildParams::BuildEvaluatorAs<UE::Cameras::FBlendCameraNodeEvaluator>
                     (param_1,*(UCameraNode **)(lVar6 + 0x38));
  this->BlendEvaluator = pFVar4;
  pUVar1 = *(UCameraNode **)(lVar6 + 0x40);
  if (pUVar1 != (UCameraNode *)0x0) {
    pFVar5 = (FCameraNodeEvaluator *)
             (**(code **)(pUVar1->_padding_ + 0x2c8))(pUVar1,param_1->Builder);
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)pUVar1);
      if (GC::GIsIncrementalReachabilityPending != false) {
        GC::MarkAsReachable((UObject *)pUVar1);
      }
    }
    (pFVar5->PrivateCameraNode).field0_0x0.DebugPtr = pUVar1;
    (**(code **)(pFVar5->_padding_ + 0x18))(pFVar5,param_1);
    this->RootEvaluator = pFVar5;
    return;
  }
  this->RootEvaluator = (FCameraNodeEvaluator *)0x0;
  return;
}

// OnBuildDebugBlocks @ 14d55afe0

/* WARNING: Removing unreachable block (ram,0x00014d55b1b7) */

void __thiscall
UE::Cameras::FBlendStackRootCameraNodeEvaluator::OnBuildDebugBlocks
          (FBlendStackRootCameraNodeEvaluator *this,FCameraDebugBlockBuildParams *param_1,
          FCameraDebugBlockBuilder *param_2)

{
  int *piVar1;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *pTVar2;
  code *pcVar3;
  FCameraDebugBlockBuildParams *pFVar4;
  bool bVar5;
  int iVar6;
  FCameraDebugBlock *pFVar7;
  undefined8 *puVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  FCameraDebugBlockBuildParams *local_res10;
  undefined1 local_res18 [8];
  FName local_res20;
  FString local_58;
  
  pTVar2 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)param_2->Storage;
  local_res10 = param_1;
  pFVar7 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     (pTVar2,0x48,8);
  piVar1 = &pFVar7[1].Attachments.ArrayNum;
  pFVar7[1].Attachments.ArrayNum = 0;
  pFVar7[1].Attachments.ArrayMax = 0;
  (pFVar7->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar7->Attachments).ArrayNum = 0;
  (pFVar7->Attachments).ArrayMax = 0;
  (pFVar7->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar7->Children).ArrayNum = 0;
  (pFVar7->Children).ArrayMax = 0;
  pFVar7[1].Children.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar7[1]._padding_ = 0;
  pFVar7[1].Attachments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar7->_padding_ = (longlong)&___7FBlendStackRootCameraDebugBlock_Cameras_UE__6B_;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject(pTVar2,pFVar7);
  FCameraDebugBlockBuilder::OnStartChildDebugBlock(param_2,pFVar7);
  iVar6 = (this->CameraRigAssetName).Data.ArrayNum;
  iVar10 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar10 = 0;
  }
  ::FString::AssignRange
            ((FString *)(pFVar7 + 1),
             (wchar_t *)(this->CameraRigAssetName).Data.AllocatorInstance.Data,iVar10);
  iVar10 = (this->BlendedParameterOverridesStack).ArrayNum;
  pFVar9 = (this->BlendedParameterOverridesStack).AllocatorInstance.Data;
  pFVar11 = pFVar9 + (longlong)iVar10 * 0xa30;
  while( true ) {
    if ((this->BlendedParameterOverridesStack).ArrayNum != iVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Cameras::FBlendStackRootCameraNodeEvaluator::FBlendedParameterOverrides_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    pFVar4 = local_res10;
    if (pFVar9 == pFVar11) {
      if ((FCameraNodeEvaluator *)this->BlendEvaluator == (FCameraNodeEvaluator *)0x0) {
        FCameraDebugBlockBuilder::StartChildDebugBlock<UE::Cameras::FCameraDebugBlock>(param_2);
        FCameraDebugBlockBuilder::EndChildDebugBlock(param_2);
      }
      else {
        FCameraNodeEvaluator::BuildDebugBlocks
                  ((FCameraNodeEvaluator *)this->BlendEvaluator,local_res10,param_2);
      }
      FCameraDebugBlockBuilder::StartChildDebugBlock<UE::Cameras::FCameraDebugBlock>(param_2);
      iVar10 = (this->BlendedParameterOverridesStack).ArrayNum;
      pFVar9 = (this->BlendedParameterOverridesStack).AllocatorInstance.Data;
      pFVar11 = pFVar9 + (longlong)iVar10 * 0xa30;
      while( true ) {
        if ((this->BlendedParameterOverridesStack).ArrayNum != iVar10) {
          `TCheckedPointerIterator<UE::Cameras::FBlendStackRootCameraNodeEvaluator::FBlendedParameterOverrides,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (pFVar9 == pFVar11) break;
        if (*(FCameraNodeEvaluator **)(pFVar9 + 0x20) == (FCameraNodeEvaluator *)0x0) {
          pTVar2 = (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)param_2->Storage;
          pFVar7 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                             (pTVar2,0x28,8);
          pFVar7->_padding_ = (longlong)&___7FCameraDebugBlock_Cameras_UE__6B_;
          (pFVar7->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar7->Attachments).ArrayNum = 0;
          (pFVar7->Attachments).ArrayMax = 0;
          (pFVar7->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar7->Children).ArrayNum = 0;
          (pFVar7->Children).ArrayMax = 0;
          TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
                    (pTVar2,pFVar7);
          FCameraDebugBlockBuilder::OnStartChildDebugBlock(param_2,pFVar7);
          FCameraDebugBlockBuilder::EndChildDebugBlock(param_2);
          pFVar9 = pFVar9 + 0xa30;
        }
        else {
          FCameraNodeEvaluator::BuildDebugBlocks
                    (*(FCameraNodeEvaluator **)(pFVar9 + 0x20),pFVar4,param_2);
          pFVar9 = pFVar9 + 0xa30;
        }
      }
      FCameraDebugBlockBuilder::EndChildDebugBlock(param_2);
      if (this->RootEvaluator == (FCameraNodeEvaluator *)0x0) {
        FCameraDebugBlockBuilder::StartChildDebugBlock<UE::Cameras::FCameraDebugBlock>(param_2);
        FCameraDebugBlockBuilder::EndChildDebugBlock(param_2);
      }
      else {
        FCameraNodeEvaluator::BuildDebugBlocks(this->RootEvaluator,pFVar4,param_2);
      }
      FCameraDebugBlockBuilder::EndChildDebugBlock(param_2);
      FCameraDebugBlockBuilder::SkipChildren(param_2);
      return;
    }
    if (*(longlong *)pFVar9 == 0) {
      ::FString::FString(&local_58,L"None");
    }
    else {
      local_res20 = *(FName *)(*(longlong *)pFVar9 + 0x18);
      ::FName::ToString(&local_res20,&local_58);
    }
    if (((*(FString **)piVar1 <= &local_58) &&
        (&local_58 <
         *(FString **)piVar1 + *(int *)((longlong)&pFVar7[1].Children.AllocatorInstance.Data + 4)))
       && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar5)) break;
    iVar6 = *(int *)&pFVar7[1].Children.AllocatorInstance.Data;
    if (iVar6 == *(int *)((longlong)&pFVar7[1].Children.AllocatorInstance.Data + 4)) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)piVar1,
                         (int *)((longlong)&pFVar7[1].Children.AllocatorInstance.Data + 4));
    }
    *(int *)&pFVar7[1].Children.AllocatorInstance.Data = iVar6 + 1;
    puVar8 = (undefined8 *)(*(longlong *)piVar1 + (longlong)iVar6 * 0x10);
    *puVar8 = 0;
    *puVar8 = local_58.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar8 + 1) = local_58.Data.ArrayNum;
    *(int *)((longlong)puVar8 + 0xc) = local_58.Data.ArrayMax;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    pFVar9 = pFVar9 + 0xa30;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// OnGetChildren @ 14d55c800

TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> * __thiscall
UE::Cameras::FBlendStackRootCameraNodeEvaluator::OnGetChildren
          (FBlendStackRootCameraNodeEvaluator *this,
          TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *__return_storage_ptr__)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *pTVar7;
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *pTVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_78 [8];
  TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> local_70;
  
  (__return_storage_ptr__->Storage)._padding_ = 0;
  *(undefined4 *)&(__return_storage_ptr__->Storage)._padding_ = 0;
  (__return_storage_ptr__->Storage).TypeIndex = '\0';
  if ((FCameraNodeEvaluator *)this->BlendEvaluator != (FCameraNodeEvaluator *)0x0) {
    TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*>::Add
              (__return_storage_ptr__,(FCameraNodeEvaluator *)this->BlendEvaluator);
  }
  iVar3 = (this->BlendedParameterOverridesStack).ArrayNum;
  pFVar9 = (this->BlendedParameterOverridesStack).AllocatorInstance.Data;
  pFVar11 = pFVar9 + (longlong)iVar3 * 0xa30;
  do {
    if ((this->BlendedParameterOverridesStack).ArrayNum != iVar3) {
      local_78[0] = 0;
      `TCheckedPointerIterator<UE::Cameras::FBlendStackRootCameraNodeEvaluator::FBlendedParameterOverrides,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_78);
    }
    if (pFVar9 == pFVar11) {
      if (this->RootEvaluator != (FCameraNodeEvaluator *)0x0) {
        TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*>::Add
                  (__return_storage_ptr__,this->RootEvaluator);
      }
      return __return_storage_ptr__;
    }
    bVar2 = (__return_storage_ptr__->Storage).TypeIndex;
    uVar10 = (ulonglong)bVar2;
    local_70.Storage._padding_ = *(longlong *)(pFVar9 + 0x20);
    if (uVar10 == 1) {
      if ((bVar2 != 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == TypeIndex",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                             ,0x97,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)(*pcVar4)();
        return pTVar7;
      }
    }
    else {
      if ((1 < uVar10) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)(*pcVar4)();
        return pTVar7;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArrayView<UE::Cameras::FCameraNodeEvaluator*___ptr64,int>,TArray<UE::Cameras::FCameraNodeEvaluator*___ptr64,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar10] !=
          Core::Private::TDestructorCaller<TArrayView<UE::Cameras::FCameraNodeEvaluator_*,int>_>::
          Destruct) {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TArrayView<UE::Cameras::FCameraNodeEvaluator*___ptr64,int>,TArray<UE::Cameras::FCameraNodeEvaluator*___ptr64,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar10])(__return_storage_ptr__);
      }
      (__return_storage_ptr__->Storage)._padding_ = 0;
      (__return_storage_ptr__->Storage)._padding_ = local_70.Storage._padding_;
      (__return_storage_ptr__->Storage)._padding_ = local_70.Storage._padding_;
      (__return_storage_ptr__->Storage)._padding_ = local_70.Storage._padding_;
      (__return_storage_ptr__->Storage)._padding_ = local_70.Storage._padding_;
      (__return_storage_ptr__->Storage)._padding_ = 0;
      *(undefined4 *)&(__return_storage_ptr__->Storage)._padding_ = 0;
      *(undefined4 *)((longlong)&(__return_storage_ptr__->Storage)._padding_ + 4) = 4;
      (__return_storage_ptr__->Storage).TypeIndex = '\x01';
    }
    pTVar7 = (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)
             (__return_storage_ptr__->Storage)._padding_;
    pTVar8 = __return_storage_ptr__;
    if (pTVar7 != (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)0x0) {
      pTVar8 = pTVar7;
    }
    if (pTVar8 <= &local_70) {
      pTVar8 = __return_storage_ptr__;
      if (pTVar7 != (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)0x0) {
        pTVar8 = pTVar7;
      }
      if ((&local_70 <
           &(pTVar8->Storage)._padding_ +
           *(int *)((longlong)&(__return_storage_ptr__->Storage)._padding_ + 4)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)(*pcVar4)();
        return pTVar7;
      }
    }
    iVar6 = (int)(__return_storage_ptr__->Storage)._padding_;
    piVar1 = (int *)((longlong)&(__return_storage_ptr__->Storage)._padding_ + 4);
    if (iVar6 == *piVar1) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraNodeEvaluator_*>_>
                        (0x808,(ForElementType<UE::Cameras::FCameraNodeEvaluator_*> *)
                               __return_storage_ptr__,piVar1);
    }
    *(int *)&(__return_storage_ptr__->Storage)._padding_ = iVar6 + 1;
    pTVar7 = (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)
             (__return_storage_ptr__->Storage)._padding_;
    pTVar8 = __return_storage_ptr__;
    if (pTVar7 != (TObjectChildrenView<UE::Cameras::FCameraNodeEvaluator_*> *)0x0) {
      pTVar8 = pTVar7;
    }
    pFVar9 = pFVar9 + 0xa30;
    (&(pTVar8->Storage)._padding_)[iVar6] = local_70.Storage._padding_;
  } while( true );
}

// OnInitialize @ 14d55cb60

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBlendStackRootCameraNodeEvaluator::OnInitialize
          (FBlendStackRootCameraNodeEvaluator *this,FCameraNodeEvaluatorInitializeParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  FString *pFVar1;
  UObjectBaseUtility *this_00;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  UClass *pUVar4;
  longlong lVar5;
  UCameraRigAsset *pUVar6;
  UCameraRigAsset *pUVar7;
  FName local_res8;
  FString local_28;
  TArray<TObjectPtr<UCameraRigCameraNode_const_>,TSizedDefaultAllocator<32>_> local_18;
  
  lVar5 = 0;
  if (this->_padding_ != 0) {
    pUVar4 = UBlendStackRootCameraNode::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar4);
    if (bVar3) {
      lVar5 = this->_padding_;
    }
  }
  this_00 = *(UObjectBaseUtility **)(lVar5 + 0x40);
  if (this_00 != (UObjectBaseUtility *)0x0) {
    pUVar4 = Z_Construct_UClass_UCameraRigAsset_NoRegister();
    pUVar6 = (UCameraRigAsset *)UObjectBaseUtility::GetTypedOuter(this_00,pUVar4);
    if (pUVar6 == (UCameraRigAsset *)0x0) {
      pUVar7 = (UCameraRigAsset *)0x0;
    }
    else {
      local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_18.ArrayNum = 0;
      local_18.ArrayMax = 0;
      pUVar7 = BuildNestedPrefabTrail(pUVar6,&local_18);
      if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.AllocatorInstance.Data);
      }
    }
    if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UCameraRigAsset *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->BlendablePrefabCameraRig).field0_0x0.DebugPtr = pUVar7;
    if (pUVar6 == (UCameraRigAsset *)0x0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      local_res8 = (FName)pUVar6->_padding_;
      ::FName::ToString(&local_res8,&local_28);
    }
    pFVar1 = &this->CameraRigAssetName;
    if (pFVar1 != &local_28) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      (this->CameraRigAssetName).Data.ArrayNum = local_28.Data.ArrayNum;
      (this->CameraRigAssetName).Data.ArrayMax = local_28.Data.ArrayMax;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// OnRun @ 14d55cd30

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBlendStackRootCameraNodeEvaluator::OnRun
          (FBlendStackRootCameraNodeEvaluator *this,FCameraNodeEvaluationParams *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  FBlendCameraNodeEvaluator *pFVar1;
  FCameraNodeEvaluator *pFVar2;
  UCameraNode *pUVar3;
  TVector<double>_u_0 local_28;
  
  pFVar1 = this->BlendEvaluator;
  if ((pFVar1 != (FBlendCameraNodeEvaluator *)0x0) &&
     ((*(longlong *)&pFVar1->field_0x10 == 0 ||
      (*(char *)(*(longlong *)&pFVar1->field_0x10 + 0x30) != '\0')))) {
    (**(code **)(*(longlong *)pFVar1 + 0x48))(pFVar1);
    if (pFVar1->field_0x8 != '\0') {
      local_28._s_0.X = (param_2->CameraPose).Location.field0_0x0._s_0.X;
      local_28._s_0.Y = (param_2->CameraPose).Location.field0_0x0._s_0.Y;
      local_28._s_0.Z = (param_2->CameraPose).Location.field0_0x0._s_0.Z;
      FCameraNodeEvaluationResult::AddCameraPoseTrailPointIfNeeded
                (param_2,(TVector<double> *)&local_28._s_0);
    }
  }
  pFVar2 = this->RootEvaluator;
  if ((pFVar2 != (FCameraNodeEvaluator *)0x0) &&
     ((pUVar3 = (pFVar2->PrivateCameraNode).field0_0x0.DebugPtr, pUVar3 == (UCameraNode *)0x0 ||
      (pUVar3->bIsEnabled != false)))) {
    (**(code **)(pFVar2->_padding_ + 0x48))(pFVar2,param_1,param_2);
    if (pFVar2->bAutoCameraPoseMovementTrail != false) {
      local_28._s_0.X = (param_2->CameraPose).Location.field0_0x0._s_0.X;
      local_28._s_0.Y = (param_2->CameraPose).Location.field0_0x0._s_0.Y;
      local_28._s_0.Z = (param_2->CameraPose).Location.field0_0x0._s_0.Z;
      FCameraNodeEvaluationResult::AddCameraPoseTrailPointIfNeeded
                (param_2,(TVector<double> *)&local_28._s_0);
    }
  }
  return;
}

// OnUpdateParameters @ 14d55d4c0

/* WARNING: Removing unreachable block (ram,0x00014d56251b) */
/* WARNING: Removing unreachable block (ram,0x00014d562522) */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBlendStackRootCameraNodeEvaluator::OnUpdateParameters
          (FBlendStackRootCameraNodeEvaluator *this,FCameraBlendedParameterUpdateParams *param_1,
          FCameraBlendedParameterUpdateResult *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uStackX_8;
  longlong lStackX_20;
  TVector<double>_u_0 TStack_88;
  FCameraNodeEvaluationParams *pFStack_70;
  FCameraPose *pFStack_68;
  FScriptContainerElement *pFStack_60;
  undefined4 uStack_58;
  
  iVar1 = (this->BlendedParameterOverridesStack).ArrayNum;
  if (iVar1 != 0) {
    uVar8 = 0;
    uStackX_8 = 0xffffffff;
    if (0 < iVar1) {
      lStackX_20 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar8 < (this->BlendedParameterOverridesStack).ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (this->BlendedParameterOverridesStack).AllocatorInstance.Data;
        FCameraObjectInterfaceParameterOverrideHelper::ApplyDefaultBlendableParameters
                  ((UBaseCameraObject *)(this->BlendablePrefabCameraRig).field0_0x0.DebugPtr,
                   (FCameraVariableTable *)(pFVar2 + lStackX_20 + 0xb8));
        uVar7 = *(int *)(pFVar2 + lStackX_20 + 0x18) - 1;
        if (-1 < (int)uVar7) {
          lVar9 = (longlong)(int)uVar7 * 8;
          do {
            uVar6 = 0;
            if ((int)uVar7 < *(int *)(pFVar2 + lStackX_20 + 0x18)) {
              uVar6 = ~uVar7 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            FCameraRigAssetReference::ApplyParameterOverrides
                      ((FCameraRigAssetReference *)
                       (*(longlong *)(*(longlong *)(pFVar2 + lStackX_20 + 0x10) + lVar9) + 0x48),
                       (FCameraVariableTable *)(pFVar2 + lStackX_20 + 0xb8),false);
            lVar9 = lVar9 + -8;
            uVar7 = uVar7 - 1;
          } while (-1 < (int)uVar7);
        }
        plVar3 = *(longlong **)(pFVar2 + lStackX_20 + 0x20);
        if (plVar3 == (longlong *)0x0) {
          FCameraVariableTable::Override
                    (param_2->VariableTable,(FCameraVariableTable *)(pFVar2 + lStackX_20 + 0xb8),
                     InputOnly);
          uStackX_8 = uVar8;
        }
        else {
          if (((plVar3[2] == 0) || (*(char *)(plVar3[2] + 0x30) != '\0')) &&
             ((**(code **)(*plVar3 + 0x48))
                        (plVar3,param_1->EvaluationParams,pFVar2 + lStackX_20 + 0x30),
             (char)plVar3[1] != '\0')) {
            TStack_88._s_0.X = (double)*(undefined8 *)(pFVar2 + lStackX_20 + 0x30);
            TStack_88._s_0.Y = (double)*(undefined8 *)(pFVar2 + lStackX_20 + 0x38);
            TStack_88._s_0.Z = (double)*(undefined8 *)(pFVar2 + lStackX_20 + 0x40);
            FCameraNodeEvaluationResult::AddCameraPoseTrailPointIfNeeded
                      ((FCameraNodeEvaluationResult *)(pFVar2 + lStackX_20 + 0x30),
                       (TVector<double> *)&TStack_88._s_0);
          }
          pFStack_70 = param_1->EvaluationParams;
          pFStack_68 = param_1->LastCameraPose;
          pFStack_60 = pFVar2 + lStackX_20 + 0xb8;
          uStack_58 = 2;
          (**(code **)(**(longlong **)(pFVar2 + lStackX_20 + 0x20) + 0x68))();
        }
        lStackX_20 = lStackX_20 + 0xa30;
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (this->BlendedParameterOverridesStack).ArrayNum);
      if (0 < (int)uStackX_8) {
        uVar8 = 0;
        if ((int)uStackX_8 <= (this->BlendedParameterOverridesStack).ArrayNum) {
          uVar8 = ~uStackX_8 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        TArray<UE::Cameras::FBlendStackRootCameraNodeEvaluator::FBlendedParameterOverrides,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl(&this->BlendedParameterOverridesStack,0,uStackX_8);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xa30,0x10,&(this->BlendedParameterOverridesStack).AllocatorInstance,
                   (this->BlendedParameterOverridesStack).ArrayNum,
                   &(this->BlendedParameterOverridesStack).ArrayMax);
      }
    }
  }
  return;
}

// RunBlendedParameterOverridesStack @ 14d562310

/* WARNING: Removing unreachable block (ram,0x00014d56251b) */
/* WARNING: Removing unreachable block (ram,0x00014d562522) */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
UE::Cameras::FBlendStackRootCameraNodeEvaluator::RunBlendedParameterOverridesStack
          (FBlendStackRootCameraNodeEvaluator *this,FCameraBlendedParameterUpdateParams *param_1,
          FCameraBlendedParameterUpdateResult *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint local_res8;
  longlong local_res20;
  TVector<double>_u_0 local_88;
  FCameraNodeEvaluationParams *local_70;
  FCameraPose *local_68;
  FScriptContainerElement *local_60;
  undefined4 local_58;
  
  iVar1 = (this->BlendedParameterOverridesStack).ArrayNum;
  if (iVar1 != 0) {
    uVar8 = 0;
    local_res8 = 0xffffffff;
    if (0 < iVar1) {
      local_res20 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar8 < (this->BlendedParameterOverridesStack).ArrayNum) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (this->BlendedParameterOverridesStack).AllocatorInstance.Data;
        FCameraObjectInterfaceParameterOverrideHelper::ApplyDefaultBlendableParameters
                  ((UBaseCameraObject *)(this->BlendablePrefabCameraRig).field0_0x0.DebugPtr,
                   (FCameraVariableTable *)(pFVar2 + local_res20 + 0xb8));
        uVar7 = *(int *)(pFVar2 + local_res20 + 0x18) - 1;
        if (-1 < (int)uVar7) {
          lVar9 = (longlong)(int)uVar7 * 8;
          do {
            uVar6 = 0;
            if ((int)uVar7 < *(int *)(pFVar2 + local_res20 + 0x18)) {
              uVar6 = ~uVar7 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            FCameraRigAssetReference::ApplyParameterOverrides
                      ((FCameraRigAssetReference *)
                       (*(longlong *)(*(longlong *)(pFVar2 + local_res20 + 0x10) + lVar9) + 0x48),
                       (FCameraVariableTable *)(pFVar2 + local_res20 + 0xb8),false);
            lVar9 = lVar9 + -8;
            uVar7 = uVar7 - 1;
          } while (-1 < (int)uVar7);
        }
        plVar3 = *(longlong **)(pFVar2 + local_res20 + 0x20);
        if (plVar3 == (longlong *)0x0) {
          FCameraVariableTable::Override
                    (param_2->VariableTable,(FCameraVariableTable *)(pFVar2 + local_res20 + 0xb8),
                     InputOnly);
          local_res8 = uVar8;
        }
        else {
          if (((plVar3[2] == 0) || (*(char *)(plVar3[2] + 0x30) != '\0')) &&
             ((**(code **)(*plVar3 + 0x48))
                        (plVar3,param_1->EvaluationParams,pFVar2 + local_res20 + 0x30),
             (char)plVar3[1] != '\0')) {
            local_88._s_0.X = (double)*(undefined8 *)(pFVar2 + local_res20 + 0x30);
            local_88._s_0.Y = (double)*(undefined8 *)(pFVar2 + local_res20 + 0x38);
            local_88._s_0.Z = (double)*(undefined8 *)(pFVar2 + local_res20 + 0x40);
            FCameraNodeEvaluationResult::AddCameraPoseTrailPointIfNeeded
                      ((FCameraNodeEvaluationResult *)(pFVar2 + local_res20 + 0x30),
                       (TVector<double> *)&local_88._s_0);
          }
          local_70 = param_1->EvaluationParams;
          local_68 = param_1->LastCameraPose;
          local_60 = pFVar2 + local_res20 + 0xb8;
          local_58 = 2;
          (**(code **)(**(longlong **)(pFVar2 + local_res20 + 0x20) + 0x68))();
        }
        local_res20 = local_res20 + 0xa30;
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (this->BlendedParameterOverridesStack).ArrayNum);
      if (0 < (int)local_res8) {
        uVar8 = 0;
        if ((int)local_res8 <= (this->BlendedParameterOverridesStack).ArrayNum) {
          uVar8 = ~local_res8 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        TArray<UE::Cameras::FBlendStackRootCameraNodeEvaluator::FBlendedParameterOverrides,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl(&this->BlendedParameterOverridesStack,0,local_res8);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xa30,0x10,&(this->BlendedParameterOverridesStack).AllocatorInstance,
                   (this->BlendedParameterOverridesStack).ArrayNum,
                   &(this->BlendedParameterOverridesStack).ArrayMax);
      }
    }
  }
  return;
}

// SetBlendEvaluator @ 14d562d20

void __thiscall
UE::Cameras::FBlendStackRootCameraNodeEvaluator::SetBlendEvaluator
          (FBlendStackRootCameraNodeEvaluator *this,FBlendCameraNodeEvaluator *param_1)

{
  this->BlendEvaluator = param_1;
  return;
}

// SetRootEvaluator @ 14d564ec0

void __thiscall
UE::Cameras::FBlendStackRootCameraNodeEvaluator::SetRootEvaluator
          (FBlendStackRootCameraNodeEvaluator *this,FCameraNodeEvaluator *param_1)

{
  this->RootEvaluator = param_1;
  return;
}

// operator() @ 150580d90

bool __thiscall
`UE::Cameras::FBlendStackRootCameraNodeEvaluator::MergeCameraRig'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_138871196216196979>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_138871196216196979>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150580ed0

bool __thiscall
`UE::Cameras::FBlendStackRootCameraNodeEvaluator::BuildNestedEvaluatorTrail'::__l6::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_138871196216196872>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_138871196216196872>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150580f10

bool __thiscall
`UE::Cameras::FBlendStackRootCameraNodeEvaluator::BuildNestedPrefabTrail'::__l6::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_138871196216196889>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_138871196216196889>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505810b0

bool __thiscall
`UE::Cameras::FBlendStackRootCameraNodeEvaluator::MergeCameraRig'::__l6::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_138871196216196973>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_138871196216196973>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

