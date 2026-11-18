// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 116

// BuildObject<UE::Cameras::FBlendStackCameraDebugBlock> @ 14d539380

FBlendStackCameraDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FBlendStackCameraDebugBlock>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this)

{
  FBlendStackCameraDebugBlock *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x48,8);
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = (longlong)&___7FBlendStackCameraDebugBlock_Cameras_UE__6B_;
  *(undefined8 *)&(pFVar1->StartEndColors).field_0x0 = 0;
  *(undefined8 *)&(pFVar1->StartEndColors).field_0x8 = 0;
  *(undefined8 *)&(pFVar1->StartEndColors).field_0x10 = 0;
  *(undefined8 *)&(pFVar1->StartEndColors).field_0x18 = 0;
  RegisterInitializedObject(this,(FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FBlendStackEntryCameraDebugBlock> @ 14d5393f0

FBlendStackEntryCameraDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FBlendStackEntryCameraDebugBlock>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this)

{
  FBlendStackEntryCameraDebugBlock *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x58,8);
  *(undefined8 *)&pFVar1->EntryIndex = 0;
  *(undefined8 *)((longlong)&(pFVar1->EntryColor).field0_0x0 + 4) = 0;
  (pFVar1->EntryColor).field0_0x0._s_0.A = 0.0;
  *(undefined8 *)&pFVar1->bIsFrozen = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (pFVar1->CameraRigName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->CameraRigName).Data.ArrayNum = 0;
  (pFVar1->CameraRigName).Data.ArrayMax = 0;
  pFVar1->_padding_ = (longlong)&___7FBlendStackEntryCameraDebugBlock_Cameras_UE__6B_;
  (pFVar1->EntryID).Value = 0xffffffff;
  RegisterInitializedObject(this,(FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FBlendStackRootCameraDebugBlock> @ 14d539470

FBlendStackRootCameraDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FBlendStackRootCameraDebugBlock>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this)

{
  FBlendStackRootCameraDebugBlock *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x48,8);
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (pFVar1->CameraRigAssetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->CameraRigAssetName).Data.ArrayNum = 0;
  (pFVar1->CameraRigAssetName).Data.ArrayMax = 0;
  (pFVar1->BlendedParameterOverridesEntries).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (pFVar1->BlendedParameterOverridesEntries).ArrayNum = 0;
  (pFVar1->BlendedParameterOverridesEntries).ArrayMax = 0;
  pFVar1->_padding_ = (longlong)&___7FBlendStackRootCameraDebugBlock_Cameras_UE__6B_;
  RegisterInitializedObject(this,(FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FBlendStackRootCameraNodeEvaluator> @ 14d5394e0

FBlendStackRootCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FBlendStackRootCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FBlendStackRootCameraNodeEvaluator *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x58,8);
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  *(bool *)&pFVar1->_padding_ = true;
  pFVar1->BlendEvaluator = (FBlendCameraNodeEvaluator *)0x0;
  pFVar1->RootEvaluator = (FCameraNodeEvaluator *)0x0;
  (pFVar1->BlendablePrefabCameraRig).field0_0x0.DebugPtr = (UCameraRigAsset *)0x0;
  (pFVar1->BlendedParameterOverridesStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->BlendedParameterOverridesStack).ArrayNum = 0;
  (pFVar1->BlendedParameterOverridesStack).ArrayMax = 0;
  (pFVar1->CameraRigAssetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->CameraRigAssetName).Data.ArrayNum = 0;
  (pFVar1->CameraRigAssetName).Data.ArrayMax = 0;
  pFVar1->_padding_ = (longlong)&___7FBlendStackRootCameraNodeEvaluator_Cameras_UE__6B_;
  *(ECameraNodeEvaluatorFlags *)&pFVar1->_padding_ = NeedsParameterUpdate;
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FBlendStackSummaryCameraDebugBlock,UE::Cameras::FBlendStackCameraNodeEvaluator_&> @ 14d539560

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FBlendStackSummaryCameraDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FBlendStackSummaryCameraDebugBlock,UE::Cameras::FBlendStackCameraNodeEvaluator_&>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this,
          FBlendStackCameraNodeEvaluator *param_1)

{
  bool bVar1;
  FBlendStackSummaryCameraDebugBlock *pFVar2;
  UClass *pUVar3;
  longlong lVar4;
  
  pFVar2 = BuildObjectUninitialized(this,0x38,8);
  lVar4 = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar2->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar2->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar2->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar2->_padding_ = 0;
  pFVar2->_padding_ = (longlong)&___7FBlendStackSummaryCameraDebugBlock_Cameras_UE__6B_;
  if (param_1->_padding_ != 0) {
    pUVar3 = UBlendStackCameraNode::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)&param_1->_padding_,pUVar3);
    if (bVar1) {
      lVar4 = param_1->_padding_;
    }
  }
  pFVar2->NumEntries = (param_1->Entries).ArrayNum;
  pFVar2->BlendStackType = *(ECameraBlendStackType *)(lVar4 + 0x38);
  pFVar2->BlendStackLayer = *(ECameraRigLayer *)(lVar4 + 0x3c);
  RegisterInitializedObject(this,(FCameraDebugBlock *)pFVar2);
  return pFVar2;
}

// BuildObject<UE::Cameras::FCameraDebugBlock> @ 14d539610

FCameraDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FCameraDebugBlock>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this)

{
  FCameraDebugBlock *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x28,8);
  pFVar1->_padding_ = (longlong)&___7FCameraDebugBlock_Cameras_UE__6B_;
  (pFVar1->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->Attachments).ArrayNum = 0;
  (pFVar1->Attachments).ArrayMax = 0;
  (pFVar1->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->Children).ArrayNum = 0;
  (pFVar1->Children).ArrayMax = 0;
  RegisterInitializedObject(this,pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FCameraNodeEvaluationResultDebugBlock> @ 14d539670

FCameraNodeEvaluationResultDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FCameraNodeEvaluationResultDebugBlock>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this)

{
  FCameraNodeEvaluationResultDebugBlock *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x30,8);
  pFVar1 = FCameraNodeEvaluationResultDebugBlock::FCameraNodeEvaluationResultDebugBlock(pFVar1);
  RegisterInitializedObject(this,(FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FCameraNodeEvaluatorDebugBlock,TObjectPtr<UCameraNode_const_>_&> @ 14d5396c0

FCameraNodeEvaluatorDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FCameraNodeEvaluatorDebugBlock,TObjectPtr<UCameraNode_const_>_&>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this,
          TObjectPtr<UCameraNode_const_> *param_1)

{
  FCameraNodeEvaluatorDebugBlock *pFVar1;
  UCameraNode *local_res10;
  
  pFVar1 = BuildObjectUninitialized(this,0x38,8);
  local_res10 = (param_1->field0_0x0).DebugPtr;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UCameraNode *)0x0)) {
    GC::MarkAsReachable((UObject *)local_res10);
  }
  pFVar1 = FCameraNodeEvaluatorDebugBlock::FCameraNodeEvaluatorDebugBlock
                     (pFVar1,(TObjectPtr<UCameraNode_const_>)&local_res10);
  RegisterInitializedObject(this,(FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FCameraPoseLocationTrailDebugBlock,UE::Cameras::FCameraNodeEvaluationResult_const_&> @ 14d539740

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraPoseLocationTrailDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FCameraPoseLocationTrailDebugBlock,UE::Cameras::FCameraNodeEvaluationResult_const_&>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this,
          FCameraNodeEvaluationResult *param_1)

{
  FCameraPoseLocationTrailDebugBlock *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x38,8);
  pFVar1 = FCameraPoseLocationTrailDebugBlock::FCameraPoseLocationTrailDebugBlock(pFVar1,param_1);
  RegisterInitializedObject(this,(FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FPersistentBlendStackCameraNodeEvaluator> @ 14d539790

FPersistentBlendStackCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FPersistentBlendStackCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FPersistentBlendStackCameraNodeEvaluator *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x70,8);
  *(undefined4 *)((longlong)&pFVar1->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&pFVar1->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 7) = 0;
  pFVar1->_padding_ = 2;
  *(undefined2 *)((longlong)&pFVar1->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 7) = 0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 4) = 0;
  *(bool *)&pFVar1->_padding_ = false;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  *(undefined4 *)&pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  (pFVar1->EntryExtraInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->EntryExtraInfos).ArrayNum = 0;
  (pFVar1->EntryExtraInfos).ArrayMax = 0;
  pFVar1->_padding_ = (longlong)&___7FPersistentBlendStackCameraNodeEvaluator_Cameras_UE__6B_;
  pFVar1->_padding_ = 2;
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FTransientBlendStackCameraNodeEvaluator> @ 14d539830

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FTransientBlendStackCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FTransientBlendStackCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FTransientBlendStackCameraNodeEvaluator *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0xf0,8);
  *(undefined4 *)((longlong)&pFVar1->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&pFVar1->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 7) = 0;
  pFVar1->_padding_ = 2;
  *(undefined2 *)((longlong)&pFVar1->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 7) = 0;
  (pFVar1->PreBlendVariableTable).Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->PreBlendVariableTable).Entries.ArrayNum = 0;
  (pFVar1->PreBlendVariableTable).Entries.ArrayMax = 0;
  *(undefined8 *)&(pFVar1->PreBlendVariableTable).EntryLookup.field_0x0 = 0;
  *(undefined8 *)&(pFVar1->PreBlendVariableTable).EntryLookup.field_0x8 = 0;
  *(undefined8 *)&(pFVar1->PreBlendVariableTable).EntryLookup.field_0x10 = 0;
  *(undefined8 *)&(pFVar1->PreBlendVariableTable).EntryLookup.field_0x18 = 0;
  *(undefined8 *)&(pFVar1->PreBlendVariableTable).EntryLookup.field_0x20 = 0;
  *(undefined8 *)&(pFVar1->PreBlendVariableTable).EntryLookup.field_0x28 = 0;
  *(undefined8 *)&(pFVar1->PreBlendVariableTable).EntryLookup.field_0x30 = 0;
  *(undefined8 *)&(pFVar1->PreBlendVariableTable).EntryLookup.field_0x38 = 0;
  *(undefined8 *)&(pFVar1->PreBlendVariableTable).EntryLookup.field_0x40 = 0;
  *(undefined8 *)&(pFVar1->PreBlendVariableTable).EntryLookup.field_0x48 = 0;
  (pFVar1->PreBlendVariableTable).Memory = (uchar *)0x0;
  (pFVar1->PreBlendVariableTable).Capacity = 0;
  (pFVar1->PreBlendVariableTable).Used = 0;
  (pFVar1->ParameterSetterService).Object = (FCameraParameterSetterService *)0x0;
  (pFVar1->ParameterSetterService).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 4) = 0;
  *(bool *)&pFVar1->_padding_ = false;
  pFVar1->_padding_ = (longlong)&___7FTransientBlendStackCameraNodeEvaluator_Cameras_UE__6B_;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  *(undefined4 *)&pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 2;
  (pFVar1->EntryExtraInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->EntryExtraInfos).ArrayNum = 0;
  (pFVar1->EntryExtraInfos).ArrayMax = 0;
  FCameraVariableTable::FCameraVariableTable(&pFVar1->PreBlendVariableTable);
  (pFVar1->ParameterSetterService).Object = (FCameraParameterSetterService *)0x0;
  (pFVar1->ParameterSetterService).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> @ 14d5426e0

TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  (this->Allocations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Allocations).ArrayNum = 0;
  (this->Allocations).ArrayMax = 0;
  (this->ObjectInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectInfos).ArrayNum = 0;
  (this->ObjectInfos).ArrayMax = 0;
  return this;
}

// ~TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> @ 14d543d80

void __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
~TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->ObjectInfos).AllocatorInstance.Data;
  iVar1 = (this->ObjectInfos).ArrayNum;
  pFVar2 = pFVar3 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->ObjectInfos).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::FObjectInfo,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    (**(code **)(**(longlong **)pFVar3 + 0x10))(*(longlong **)pFVar3,0);
    pFVar3 = pFVar3 + 8;
  }
  (this->ObjectInfos).ArrayNum = 0;
  if ((this->ObjectInfos).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ObjectInfos).AllocatorInstance,0,&(this->ObjectInfos).ArrayMax);
  }
  iVar1 = (this->Allocations).ArrayNum;
  pFVar3 = (this->Allocations).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x18;
  while( true ) {
    if ((this->Allocations).ArrayNum != iVar1) {
      `TCheckedPointerIterator<UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::FAllocation,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    FMemory::Free(*(void **)pFVar3);
    pFVar3 = pFVar3 + 0x18;
  }
  (this->Allocations).ArrayNum = 0;
  if ((this->Allocations).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,&(this->Allocations).ArrayMax);
  }
  pFVar2 = (this->ObjectInfos).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->Allocations).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// BuildObjectUninitialized @ 14d54eff0

void * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this,uint param_1,uint param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  void *pvVar8;
  undefined1 local_res8 [8];
  
  iVar5 = (this->Allocations).ArrayNum;
  pFVar7 = (this->Allocations).AllocatorInstance.Data;
  pFVar2 = pFVar7 + (longlong)iVar5 * 0x18;
  while( true ) {
    if ((this->Allocations).ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::FAllocation,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar2) goto LAB_14d54f079;
    pvVar8 = (void *)(((ulonglong)param_2 - 1) +
                      (ulonglong)*(uint *)(pFVar7 + 0x10) + *(longlong *)pFVar7 &
                     -(ulonglong)param_2);
    uVar6 = ((int)pvVar8 - (int)*(longlong *)pFVar7) + param_1;
    if (uVar6 <= *(uint *)(pFVar7 + 0xc)) break;
    pFVar7 = pFVar7 + 0x18;
  }
  *(uint *)(pFVar7 + 0x10) = uVar6;
  if (pvVar8 != (void *)0x0) {
    return pvVar8;
  }
LAB_14d54f079:
  piVar1 = &(this->Allocations).ArrayMax;
  uVar6 = param_1;
  if (param_1 < 0x80) {
    uVar6 = 0x80;
  }
  if (param_2 < 0x20) {
    param_2 = 0x20;
  }
  iVar5 = (this->Allocations).ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)this,piVar1);
  }
  (this->Allocations).ArrayNum = iVar5 + 1;
  pFVar2 = (this->Allocations).AllocatorInstance.Data + (longlong)iVar5 * 0x18;
  *(undefined8 *)(pFVar2 + 0x10) = 0;
  *(undefined8 *)pFVar2 = 0;
  *(undefined8 *)(pFVar2 + 8) = 0;
  pvVar8 = FMemory::Malloc((ulonglong)uVar6,param_2);
  *(void **)pFVar2 = pvVar8;
  *(uint *)(pFVar2 + 8) = param_2;
  *(uint *)(pFVar2 + 0xc) = uVar6;
  *(uint *)(pFVar2 + 0x10) = param_1;
  if (((pvVar8 == (void *)0x0) || (pFVar2 == (FScriptContainerElement *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TargetPtr && TargetAllocation",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraObjectStorage.h"
                         ,0xc9,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pvVar8 = (void *)(*pcVar3)();
    return pvVar8;
  }
  return pvVar8;
}

// BuildObjectUninitialized @ 14d54f140

void * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this,uint param_1,uint param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  void *pvVar8;
  undefined1 local_res8 [8];
  
  iVar5 = (this->Allocations).ArrayNum;
  pFVar7 = (this->Allocations).AllocatorInstance.Data;
  pFVar2 = pFVar7 + (longlong)iVar5 * 0x18;
  while( true ) {
    if ((this->Allocations).ArrayNum != iVar5) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::FAllocation,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar2) goto LAB_14d54f1c9;
    pvVar8 = (void *)(((ulonglong)param_2 - 1) +
                      (ulonglong)*(uint *)(pFVar7 + 0x10) + *(longlong *)pFVar7 &
                     -(ulonglong)param_2);
    uVar6 = ((int)pvVar8 - (int)*(longlong *)pFVar7) + param_1;
    if (uVar6 <= *(uint *)(pFVar7 + 0xc)) break;
    pFVar7 = pFVar7 + 0x18;
  }
  *(uint *)(pFVar7 + 0x10) = uVar6;
  if (pvVar8 != (void *)0x0) {
    return pvVar8;
  }
LAB_14d54f1c9:
  piVar1 = &(this->Allocations).ArrayMax;
  uVar6 = param_1;
  if (param_1 < 0x80) {
    uVar6 = 0x80;
  }
  if (param_2 < 0x20) {
    param_2 = 0x20;
  }
  iVar5 = (this->Allocations).ArrayNum;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)this,piVar1);
  }
  (this->Allocations).ArrayNum = iVar5 + 1;
  pFVar2 = (this->Allocations).AllocatorInstance.Data + (longlong)iVar5 * 0x18;
  *(undefined8 *)(pFVar2 + 0x10) = 0;
  *(undefined8 *)pFVar2 = 0;
  *(undefined8 *)(pFVar2 + 8) = 0;
  pvVar8 = FMemory::Malloc((ulonglong)uVar6,param_2);
  *(void **)pFVar2 = pvVar8;
  *(uint *)(pFVar2 + 8) = param_2;
  *(uint *)(pFVar2 + 0xc) = uVar6;
  *(uint *)(pFVar2 + 0x10) = param_1;
  if (((pvVar8 == (void *)0x0) || (pFVar2 == (FScriptContainerElement *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TargetPtr && TargetAllocation",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraObjectStorage.h"
                         ,0xc9,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pvVar8 = (void *)(*pcVar3)();
    return pvVar8;
  }
  return pvVar8;
}

// DestroyObjects @ 14d552730

void __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::DestroyObjects
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  
  pFVar3 = (this->ObjectInfos).AllocatorInstance.Data;
  iVar2 = (this->ObjectInfos).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ObjectInfos).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::FObjectInfo,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0x10))(*(longlong **)pFVar3,0);
    pFVar3 = pFVar3 + 8;
  }
  (this->ObjectInfos).ArrayNum = 0;
  if ((this->ObjectInfos).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ObjectInfos).AllocatorInstance,0,&(this->ObjectInfos).ArrayMax);
  }
  iVar2 = (this->Allocations).ArrayNum;
  pFVar3 = (this->Allocations).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x18;
  if (param_1) {
    while( true ) {
      if ((this->Allocations).ArrayNum != iVar2) {
        `TCheckedPointerIterator<UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::FAllocation,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar3 == pFVar1) break;
      FMemory::Free(*(void **)pFVar3);
      pFVar3 = pFVar3 + 0x18;
    }
    (this->Allocations).ArrayNum = 0;
    if ((this->Allocations).ArrayMax < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this,0,&(this->Allocations).ArrayMax);
    }
  }
  else {
    while( true ) {
      if ((this->Allocations).ArrayNum != iVar2) {
        `TCheckedPointerIterator<UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::FAllocation,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar3 == pFVar1) break;
      *(undefined4 *)(pFVar3 + 0x10) = 0;
      pFVar3 = pFVar3 + 0x18;
    }
  }
  return;
}

// RegisterInitializedObject @ 14d55f180

void __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this,FCameraDebugBlock *param_1)

{
  TArray<UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::FObjectInfo,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FCameraDebugBlock *local_18 [2];
  
  pTVar1 = &this->ObjectInfos;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  local_18[0] = param_1;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->ObjectInfos).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->ObjectInfos).ArrayNum;
  piVar2 = &(this->ObjectInfos).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->ObjectInfos).ArrayNum = iVar6 + 1;
  *(FCameraDebugBlock **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  return;
}

// RegisterInitializedObject @ 14d55f230

void __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this,
          FCameraNodeEvaluator *param_1)

{
  TArray<UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::FObjectInfo,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FCameraNodeEvaluator *local_18 [2];
  
  pTVar1 = &this->ObjectInfos;
  pFVar3 = (pTVar1->AllocatorInstance).Data;
  local_18[0] = param_1;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)(this->ObjectInfos).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->ObjectInfos).ArrayNum;
  piVar2 = &(this->ObjectInfos).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (this->ObjectInfos).ArrayNum = iVar6 + 1;
  *(FCameraNodeEvaluator **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  return;
}

// BuildObject<UE::Cameras::FBlendStacksCameraDebugBlock> @ 14d57d190

FBlendStacksCameraDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FBlendStacksCameraDebugBlock>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this)

{
  FBlendStacksCameraDebugBlock *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x38,8);
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (pFVar1->BlendStackNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->BlendStackNames).ArrayNum = 0;
  (pFVar1->BlendStackNames).ArrayMax = 0;
  pFVar1->_padding_ = (longlong)&___7FBlendStacksCameraDebugBlock_Cameras_UE__6B_;
  RegisterInitializedObject(this,(FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FCalcCameraActorCameraNodeEvaluator> @ 14d57d200

FCalcCameraActorCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FCalcCameraActorCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FCameraNodeEvaluator *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x20,8);
  pFVar1->_padding_ = 0;
  *(undefined8 *)&pFVar1->bAutoCameraPoseMovementTrail = 0;
  (pFVar1->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  *(undefined8 *)&pFVar1->PrivateFlags = 0;
  pFVar1->bAutoCameraPoseMovementTrail = true;
  pFVar1->PrivateFlags = Default;
  pFVar1->_padding_ = (longlong)&___7FCalcCameraActorCameraNodeEvaluator_Cameras_UE__6B_;
  RegisterInitializedObject(this,pFVar1);
  return (FCalcCameraActorCameraNodeEvaluator *)pFVar1;
}

// BuildObject<UE::Cameras::FCameraComponentCameraNodeEvaluator> @ 14d57d260

FCameraComponentCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FCameraComponentCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FCameraNodeEvaluator *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x20,8);
  pFVar1->_padding_ = 0;
  *(undefined8 *)&pFVar1->bAutoCameraPoseMovementTrail = 0;
  (pFVar1->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  *(undefined8 *)&pFVar1->PrivateFlags = 0;
  pFVar1->bAutoCameraPoseMovementTrail = true;
  pFVar1->PrivateFlags = Default;
  pFVar1->_padding_ = (longlong)&___7FCameraComponentCameraNodeEvaluator_Cameras_UE__6B_;
  RegisterInitializedObject(this,pFVar1);
  return (FCameraComponentCameraNodeEvaluator *)pFVar1;
}

// BuildObject<UE::Cameras::FCameraDirectorDebugBlock> @ 14d57d2c0

FCameraDirectorDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FCameraDirectorDebugBlock>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this)

{
  __m128d _Var1;
  FCameraDirectorDebugBlock *pFVar2;
  
  pFVar2 = BuildObjectUninitialized(this,0xd0,0x10);
  (pFVar2->InitialContextTransform).Rotation.XY.m128d_f64[0] = 0.0;
  (pFVar2->InitialContextTransform).Rotation.XY.m128d_f64[1] = 0.0;
  (pFVar2->InitialContextTransform).Rotation.ZW.m128d_f64[0] = 0.0;
  (pFVar2->InitialContextTransform).Rotation.ZW.m128d_f64[1] = 0.0;
  (pFVar2->InitialContextTransform).Translation.XY.m128d_f64[0] = 0.0;
  (pFVar2->InitialContextTransform).Translation.XY.m128d_f64[1] = 0.0;
  (pFVar2->InitialContextTransform).Translation.ZW.m128d_f64[0] = 0.0;
  (pFVar2->InitialContextTransform).Translation.ZW.m128d_f64[1] = 0.0;
  (pFVar2->InitialContextTransform).Scale3D.XY.m128d_f64[0] = 0.0;
  (pFVar2->InitialContextTransform).Scale3D.XY.m128d_f64[1] = 0.0;
  (pFVar2->InitialContextTransform).Scale3D.ZW.m128d_f64[0] = 0.0;
  (pFVar2->InitialContextTransform).Scale3D.ZW.m128d_f64[1] = 0.0;
  *(undefined8 *)&pFVar2->bIsValid = 0;
  *(undefined8 *)&pFVar2->field_0xc8 = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar2->field_0x8)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&pFVar2->field_0x10 = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar2->field_0x18)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&pFVar2->field_0x20 = 0;
  (pFVar2->ContextClassName).ComparisonIndex = 0;
  (pFVar2->ContextClassName).Number = 0;
  (pFVar2->OwnerClassName).ComparisonIndex = 0;
  (pFVar2->OwnerClassName).Number = 0;
  (pFVar2->OwnerName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar2->OwnerName).Data.ArrayNum = 0;
  (pFVar2->OwnerName).Data.ArrayMax = 0;
  (pFVar2->CameraAssetName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar2->CameraAssetName).Data.ArrayNum = 0;
  (pFVar2->CameraAssetName).Data.ArrayMax = 0;
  (pFVar2->CameraDirectorClassName).ComparisonIndex = 0;
  (pFVar2->CameraDirectorClassName).Number = 0;
  *(undefined ***)pFVar2 = &___7FCameraDirectorDebugBlock_Cameras_UE__6B_;
  *&(pFVar2->InitialContextTransform).Rotation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(pFVar2->InitialContextTransform).Rotation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(pFVar2->InitialContextTransform).Translation.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(pFVar2->InitialContextTransform).Translation.ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(pFVar2->InitialContextTransform).Scale3D.XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  _Var1 = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
  pFVar2->bIsValid = false;
  *&(pFVar2->InitialContextTransform).Scale3D.ZW.m128d_f64 = _Var1.m128d_f64;
  RegisterInitializedObject(this,(FCameraDebugBlock *)pFVar2);
  return pFVar2;
}

// BuildObject<UE::Cameras::FCameraDirectorTreeDebugBlock> @ 14d57d3c0

FCameraDirectorTreeDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FCameraDirectorTreeDebugBlock>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this)

{
  FCameraDebugBlock *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x28,8);
  (pFVar1->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->Attachments).ArrayNum = 0;
  (pFVar1->Attachments).ArrayMax = 0;
  (pFVar1->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->Children).ArrayNum = 0;
  (pFVar1->Children).ArrayMax = 0;
  pFVar1->_padding_ = (longlong)&___7FCameraDirectorTreeDebugBlock_Cameras_UE__6B_;
  RegisterInitializedObject(this,pFVar1);
  return (FCameraDirectorTreeDebugBlock *)pFVar1;
}

// BuildObject<UE::Cameras::FCameraEvaluationServiceDebugBlock,TSharedPtr<UE::Cameras::FCameraEvaluationService,1>_&> @ 14d57d420

FCameraEvaluationServiceDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FCameraEvaluationServiceDebugBlock,TSharedPtr<UE::Cameras::FCameraEvaluationService,1>_&>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this,
          TSharedPtr<UE::Cameras::FCameraEvaluationService,1> *param_1)

{
  FString *pFVar1;
  FCameraObjectTypeID FVar2;
  TReferenceControllerBase<1> *pTVar3;
  FCameraEvaluationService *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  FCameraEvaluationServiceDebugBlock *pFVar8;
  uint *puVar9;
  FCameraObjectTypeRegistry *this_00;
  FCameraObjectTypeInfo *this_01;
  FString *pFVar10;
  FString local_48;
  FString local_38;
  
  pFVar8 = BuildObjectUninitialized(this,0x38,8);
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar4 = param_1->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar8->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1 = &pFVar8->ServiceClassName;
  pFVar8->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar8->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar8->_padding_ = 0;
  pFVar8->_padding_ = (longlong)&___7FCameraEvaluationServiceDebugBlock_Cameras_UE__6B_;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar8->ServiceClassName).Data.ArrayNum = 0;
  (pFVar8->ServiceClassName).Data.ArrayMax = 0;
  if (pFVar4 == (FCameraEvaluationService *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar8 = (FCameraEvaluationServiceDebugBlock *)(*pcVar6)();
      return pFVar8;
    }
  }
  puVar9 = (uint *)(**(code **)pFVar4->_padding_)(pFVar4);
  FVar2.ID = *puVar9;
  this_00 = FCameraObjectTypeRegistry::Get();
  this_01 = FCameraObjectTypeRegistry::GetTypeInfo(this_00,FVar2);
  bVar7 = this_01 == (FCameraObjectTypeInfo *)0x0;
  if (bVar7) {
    pFVar10 = ::FString::FString(&local_48,L"<no type info>");
  }
  else {
    pFVar10 = ::FName::ToString(&this_01->TypeName,&local_38);
  }
  if (pFVar1 != pFVar10) {
    pFVar5 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar8->ServiceClassName).Data.ArrayNum = (pFVar10->Data).ArrayNum;
    (pFVar8->ServiceClassName).Data.ArrayMax = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
  }
  if (bVar7) {
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar7) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  RegisterInitializedObject(this,(FCameraDebugBlock *)pFVar8);
  return pFVar8;
}

// BuildObject<UE::Cameras::FCameraPoseDebugBlock,FCameraPose_const_&> @ 14d57d5a0

FCameraPoseDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FCameraPoseDebugBlock,FCameraPose_const_&>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this,FCameraPose *param_1)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  TEnumAsByte<EAspectRatioAxisConstraint> TVar9;
  FCameraPoseDebugBlock *pFVar10;
  
  pFVar10 = BuildObjectUninitialized(this,200,8);
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar10->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar10->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar10->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar10->_padding_ = 0;
  pFVar10->_padding_ = (longlong)&___7FCameraPoseDebugBlock_Cameras_UE__6B_;
  dVar1 = (param_1->Location).field0_0x0._s_0.Y;
  (pFVar10->CameraPose).Location.field0_0x0._s_0.X = (param_1->Location).field0_0x0._s_0.X;
  (pFVar10->CameraPose).Location.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Rotation).Pitch;
  (pFVar10->CameraPose).Location.field0_0x0._s_0.Z = (param_1->Location).field0_0x0._s_0.Z;
  (pFVar10->CameraPose).Rotation.Pitch = dVar1;
  dVar1 = (param_1->Rotation).Roll;
  (pFVar10->CameraPose).Rotation.Yaw = (param_1->Rotation).Yaw;
  (pFVar10->CameraPose).Rotation.Roll = dVar1;
  fVar2 = param_1->FieldOfView;
  fVar3 = param_1->FocalLength;
  (pFVar10->CameraPose).TargetDistance = param_1->TargetDistance;
  (pFVar10->CameraPose).FieldOfView = fVar2;
  (pFVar10->CameraPose).FocalLength = fVar3;
  fVar2 = param_1->Aperture;
  fVar3 = param_1->ShutterSpeed;
  fVar4 = param_1->FocusDistance;
  (pFVar10->CameraPose).OrthographicWidth = param_1->OrthographicWidth;
  (pFVar10->CameraPose).Aperture = fVar2;
  (pFVar10->CameraPose).ShutterSpeed = fVar3;
  (pFVar10->CameraPose).FocusDistance = fVar4;
  fVar2 = param_1->SensorHeight;
  fVar3 = param_1->SensorHorizontalOffset;
  fVar4 = param_1->SensorVerticalOffset;
  (pFVar10->CameraPose).SensorWidth = param_1->SensorWidth;
  (pFVar10->CameraPose).SensorHeight = fVar2;
  (pFVar10->CameraPose).SensorHorizontalOffset = fVar3;
  (pFVar10->CameraPose).SensorVerticalOffset = fVar4;
  fVar2 = param_1->SqueezeFactor;
  fVar3 = param_1->Overscan;
  iVar5 = param_1->DiaphragmBladeCount;
  (pFVar10->CameraPose).ISO = param_1->ISO;
  (pFVar10->CameraPose).SqueezeFactor = fVar2;
  (pFVar10->CameraPose).Overscan = fVar3;
  (pFVar10->CameraPose).DiaphragmBladeCount = iVar5;
  fVar2 = param_1->FarClippingPlane;
  fVar3 = param_1->PhysicalCameraBlendWeight;
  bVar6 = param_1->EnablePhysicalCamera;
  bVar7 = param_1->ConstrainAspectRatio;
  bVar8 = param_1->OverrideAspectRatioAxisConstraint;
  TVar9.Value = (param_1->AspectRatioAxisConstraint).Value;
  (pFVar10->CameraPose).NearClippingPlane = param_1->NearClippingPlane;
  (pFVar10->CameraPose).FarClippingPlane = fVar2;
  (pFVar10->CameraPose).PhysicalCameraBlendWeight = fVar3;
  (pFVar10->CameraPose).EnablePhysicalCamera = bVar6;
  (pFVar10->CameraPose).ConstrainAspectRatio = bVar7;
  (pFVar10->CameraPose).OverrideAspectRatioAxisConstraint = bVar8;
  (pFVar10->CameraPose).AspectRatioAxisConstraint =
       (TEnumAsByte<EAspectRatioAxisConstraint>)TVar9.Value;
  *(undefined8 *)&(pFVar10->CameraPose).ProjectionMode.Value =
       *(undefined8 *)&param_1->ProjectionMode;
  (pFVar10->ShowUnchangedCVarName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar10->ShowUnchangedCVarName).Data.ArrayNum = 0;
  (pFVar10->ShowUnchangedCVarName).Data.ArrayMax = 0;
  pFVar10->bDrawText = true;
  pFVar10->bDrawInExternalRendering = true;
  RegisterInitializedObject(this,(FCameraDebugBlock *)pFVar10);
  return pFVar10;
}

// BuildObject<UE::Cameras::FCameraRigJointsDebugBlock,UE::Cameras::FCameraRigJoints_const_&,UE::Cameras::FCameraVariableTable_const_&> @ 14d57d680

FCameraRigJointsDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FCameraRigJointsDebugBlock,UE::Cameras::FCameraRigJoints_const_&,UE::Cameras::FCameraVariableTable_const_&>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this,FCameraRigJoints *param_1,
          FCameraVariableTable *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FCameraRigJointsDebugBlock *pFVar4;
  ForElementType<UE::Cameras::FCameraRigJoint> FVar5;
  FString local_80;
  TRotator<double> local_68;
  TQuat<double> local_48;
  undefined8 local_18;
  
  pFVar4 = BuildObjectUninitialized(this,200,8);
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar4->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar4->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar4->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar4->_padding_ = 0;
  pFVar4->_padding_ = (longlong)&___7FCameraRigJointsDebugBlock_Cameras_UE__6B_;
  *(undefined8 *)&(pFVar4->Entries).AllocatorInstance.SecondaryData.field_0x0 = 0;
  (pFVar4->Entries).ArrayNum = 0;
  (pFVar4->Entries).ArrayMax = 2;
  FVar5 = (param_1->Joints).AllocatorInstance.SecondaryData;
  iVar1 = (param_1->Joints).ArrayNum;
  if (FVar5 != (ForElementType<UE::Cameras::FCameraRigJoint>)0x0) {
    param_1 = (FCameraRigJoints *)FVar5;
  }
  if ((iVar1 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FCameraRigJointsDebugBlock *)(*pcVar2)();
    return pFVar4;
  }
  FVar5 = (ForElementType<UE::Cameras::FCameraRigJoint>)((longlong)iVar1 * 0x70 + (longlong)param_1)
  ;
  for (; (ForElementType<UE::Cameras::FCameraRigJoint>)param_1 != FVar5;
      param_1 = (FCameraRigJoints *)((longlong)param_1 + 0x70)) {
    local_18 = *(undefined8 *)((longlong)param_1 + 0x40);
    local_48.Z = *(double *)((longlong)param_1 + 0x20);
    local_48.W = *(double *)((longlong)param_1 + 0x28);
    local_48.X = *(double *)((longlong)param_1 + 0x10);
    local_48.Y = *(double *)((longlong)param_1 + 0x18);
    local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80.Data.ArrayNum = 0;
    local_80.Data.ArrayMax = 0;
    UE::Math::TQuat<double>::Rotator(&local_48,&local_68);
    ::FString::operator=(&local_80,L"<Unknown>");
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  RegisterInitializedObject(this,(FCameraDebugBlock *)pFVar4);
  return pFVar4;
}

// BuildObject<UE::Cameras::FCategoryTitleDebugBlock> @ 14d57d820

FCategoryTitleDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FCategoryTitleDebugBlock>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this)

{
  FCategoryTitleDebugBlock *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x50,8);
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (pFVar1->Category).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->Category).Data.ArrayNum = 0;
  (pFVar1->Category).Data.ArrayMax = 0;
  (pFVar1->Title).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->Title).Data.ArrayNum = 0;
  (pFVar1->Title).Data.ArrayMax = 0;
  pFVar1->_padding_ = (longlong)&___7FCategoryTitleDebugBlock_Cameras_UE__6B_;
  pFVar1->bSkipAttachedBlocksIfInactive = true;
  pFVar1->bSkipChildrenBlocksIfInactive = true;
  RegisterInitializedObject(this,(FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FCombinedCameraRigCameraDebugBlock> @ 14d57d8a0

FCombinedCameraRigCameraDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FCombinedCameraRigCameraDebugBlock>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this)

{
  FCombinedCameraRigCameraDebugBlock *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x40,8);
  *(undefined8 *)&pFVar1->CameraRigIndex = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (pFVar1->CameraRigName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->CameraRigName).Data.ArrayNum = 0;
  (pFVar1->CameraRigName).Data.ArrayMax = 0;
  pFVar1->_padding_ = (longlong)&___7FCombinedCameraRigCameraDebugBlock_Cameras_UE__6B_;
  RegisterInitializedObject(this,(FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FCombinedCameraRigsCameraNodeEvaluator> @ 14d57d910

FCombinedCameraRigsCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FCombinedCameraRigsCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FCombinedCameraRigsCameraNodeEvaluator *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x30,8);
  *(undefined4 *)((longlong)&pFVar1->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&pFVar1->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 7) = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  pFVar1->_padding_ = 7;
  *(bool *)&pFVar1->_padding_ = true;
  (pFVar1->CameraRigRootEvaluators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->CameraRigRootEvaluators).ArrayNum = 0;
  (pFVar1->CameraRigRootEvaluators).ArrayMax = 0;
  pFVar1->_padding_ = (longlong)&___7FCombinedCameraRigsCameraNodeEvaluator_Cameras_UE__6B_;
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FContextDataTableDebugBlock,UE::Cameras::FCameraContextDataTable_const_&> @ 14d57d980

FContextDataTableDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FContextDataTableDebugBlock,UE::Cameras::FCameraContextDataTable_const_&>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this,
          FCameraContextDataTable *param_1)

{
  FContextDataTableDebugBlock *this_00;
  
  this_00 = BuildObjectUninitialized(this,0x48,8);
  this_00->_padding_ = 0;
  this_00->_padding_ = 0;
  this_00->_padding_ = 0;
  this_00->_padding_ = 0;
  (this_00->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Entries).ArrayNum = 0;
  (this_00->Entries).ArrayMax = 0;
  (this_00->ShowDataIDsCVarName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->ShowDataIDsCVarName).Data.ArrayNum = 0;
  (this_00->ShowDataIDsCVarName).Data.ArrayMax = 0;
  this_00->_padding_ = (longlong)&___7FContextDataTableDebugBlock_Cameras_UE__6B_;
  FContextDataTableDebugBlock::Initialize(this_00,param_1);
  RegisterInitializedObject(this,(FCameraDebugBlock *)this_00);
  return this_00;
}

// BuildObject<UE::Cameras::FDefaultRootCameraNodeEvaluator> @ 14d57da10

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FDefaultRootCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FDefaultRootCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FDefaultRootCameraNodeEvaluator *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0xa80,0x10);
  memset(pFVar1,0,0xa80);
  pFVar1 = FDefaultRootCameraNodeEvaluator::FDefaultRootCameraNodeEvaluator(pFVar1);
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FInterruptedBlendCameraNodeEvaluator,UE::Cameras::FBlendCameraNodeEvaluator_*_&,UE::Cameras::FBlendCameraNodeEvaluator_*_&> @ 14d57da70

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FInterruptedBlendCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FInterruptedBlendCameraNodeEvaluator,UE::Cameras::FBlendCameraNodeEvaluator_*_&,UE::Cameras::FBlendCameraNodeEvaluator_*_&>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this,
          FBlendCameraNodeEvaluator **param_1,FBlendCameraNodeEvaluator **param_2)

{
  FInterruptedBlendCameraNodeEvaluator *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0xa30,0x10);
  pFVar1 = FInterruptedBlendCameraNodeEvaluator::FInterruptedBlendCameraNodeEvaluator
                     (pFVar1,*param_1,*param_2);
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FPlayerControllersDebugBlock> @ 14d57dad0

FPlayerControllersDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FPlayerControllersDebugBlock>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this)

{
  FPlayerControllersDebugBlock *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x40,8);
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (pFVar1->PlayerControllers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->PlayerControllers).ArrayNum = 0;
  (pFVar1->PlayerControllers).ArrayMax = 0;
  pFVar1->bHadValidWorld = false;
  pFVar1->_padding_ = (longlong)&___7FPlayerControllersDebugBlock_Cameras_UE__6B_;
  RegisterInitializedObject(this,(FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FPostProcessSettingsDebugBlock,UE::Cameras::FPostProcessSettingsCollection_const_&> @ 14d57db40

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FPostProcessSettingsDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FPostProcessSettingsDebugBlock,UE::Cameras::FPostProcessSettingsCollection_const_&>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this,
          FPostProcessSettingsCollection *param_1)

{
  FPostProcessSettingsDebugBlock *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x7a0,0x10);
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = (longlong)&___7FPostProcessSettingsDebugBlock_Cameras_UE__6B_;
  FPostProcessSettings::FPostProcessSettings
            (&(pFVar1->PostProcessSettings).PostProcessSettings,&param_1->PostProcessSettings);
  RegisterInitializedObject(this,(FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FReverseBlendCameraNodeEvaluator,UE::Cameras::FBlendCameraNodeEvaluator_*_&> @ 14d57dbc0

FReverseBlendCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FReverseBlendCameraNodeEvaluator,UE::Cameras::FBlendCameraNodeEvaluator_*_&>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this,
          FBlendCameraNodeEvaluator **param_1)

{
  FReverseBlendCameraNodeEvaluator *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x28,8);
  pFVar1 = FReverseBlendCameraNodeEvaluator::FReverseBlendCameraNodeEvaluator(pFVar1,*param_1);
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FRootCameraDebugBlock> @ 14d57dc10

FRootCameraDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FRootCameraDebugBlock>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this)

{
  FRootCameraDebugBlock *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x30,8);
  *(undefined4 *)&pFVar1->field_0x2c = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = (longlong)&___7FRootCameraDebugBlock_Cameras_UE__6B_;
  (pFVar1->DebugID).Value = -1;
  RegisterInitializedObject(this,(FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FVariableTableDebugBlock,UE::Cameras::FCameraVariableTable_const_&> @ 14d57dc80

FVariableTableDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FVariableTableDebugBlock,UE::Cameras::FCameraVariableTable_const_&>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this,FCameraVariableTable *param_1)

{
  FVariableTableDebugBlock *this_00;
  
  this_00 = BuildObjectUninitialized(this,0x48,8);
  this_00->_padding_ = 0;
  this_00->_padding_ = 0;
  this_00->_padding_ = 0;
  this_00->_padding_ = 0;
  (this_00->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Entries).ArrayNum = 0;
  (this_00->Entries).ArrayMax = 0;
  (this_00->ShowVariableIDsCVarName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->ShowVariableIDsCVarName).Data.ArrayNum = 0;
  (this_00->ShowVariableIDsCVarName).Data.ArrayMax = 0;
  this_00->_padding_ = (longlong)&___7FVariableTableDebugBlock_Cameras_UE__6B_;
  FVariableTableDebugBlock::Initialize(this_00,param_1);
  RegisterInitializedObject(this,(FCameraDebugBlock *)this_00);
  return this_00;
}

// BuildObject<UE::Cameras::FViewfinderDebugBlock> @ 14d57dd10

FViewfinderDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FViewfinderDebugBlock>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this)

{
  FCameraDebugBlock *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x28,8);
  (pFVar1->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->Attachments).ArrayNum = 0;
  (pFVar1->Attachments).ArrayMax = 0;
  (pFVar1->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->Children).ArrayNum = 0;
  (pFVar1->Children).ArrayMax = 0;
  pFVar1->_padding_ = (longlong)&___7FViewfinderDebugBlock_Cameras_UE__6B_;
  RegisterInitializedObject(this,pFVar1);
  return (FViewfinderDebugBlock *)pFVar1;
}

// TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> @ 14d58bcf0

TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this)

{
  (this->Allocations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Allocations).ArrayNum = 0;
  (this->Allocations).ArrayMax = 0;
  (this->ObjectInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ObjectInfos).ArrayNum = 0;
  (this->ObjectInfos).ArrayMax = 0;
  return this;
}

// TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> @ 14d58bd10

TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this,
          TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *param_1)

{
  TArray<UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::FObjectInfo,TSizedDefaultAllocator<32>_>
  *pTVar1;
  TArray<UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::FObjectInfo,TSizedDefaultAllocator<32>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  
  pTVar1 = &this->ObjectInfos;
  (this->Allocations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Allocations).ArrayNum = 0;
  (this->Allocations).ArrayMax = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->ObjectInfos).ArrayNum = 0;
  (this->ObjectInfos).ArrayMax = 0;
  if (this != param_1) {
    (this->Allocations).AllocatorInstance.Data = (param_1->Allocations).AllocatorInstance.Data;
    (param_1->Allocations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Allocations).ArrayNum = (param_1->Allocations).ArrayNum;
    (this->Allocations).ArrayMax = (param_1->Allocations).ArrayMax;
    (param_1->Allocations).ArrayNum = 0;
    (param_1->Allocations).ArrayMax = 0;
  }
  pTVar2 = &param_1->ObjectInfos;
  if (pTVar1 != pTVar2) {
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ObjectInfos).ArrayNum = (param_1->ObjectInfos).ArrayNum;
    (this->ObjectInfos).ArrayMax = (param_1->ObjectInfos).ArrayMax;
    (param_1->ObjectInfos).ArrayNum = 0;
    (param_1->ObjectInfos).ArrayMax = 0;
  }
  return this;
}

// ~TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> @ 14d5909b0

void __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
~TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestroyObjects(this,true);
  pFVar1 = (this->ObjectInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Allocations).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// AllocatePage @ 14d5990e0

void __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::AllocatePage
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this,uint param_1,uint param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  void *pvVar7;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCapacity > 0 && InAlignment > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraObjectStorage.h"
                       ,0x12a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Allocations).ArrayNum;
  piVar1 = &(this->Allocations).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)this,piVar1);
  }
  (this->Allocations).ArrayNum = iVar5 + 1;
  lVar6 = (longlong)iVar5;
  pFVar2 = (this->Allocations).AllocatorInstance.Data;
  *(undefined8 *)(pFVar2 + lVar6 * 0x18 + 0x10) = 0;
  *(undefined8 *)(pFVar2 + lVar6 * 0x18) = 0;
  *(undefined8 *)(pFVar2 + lVar6 * 0x18 + 8) = 0;
  pFVar2 = pFVar2 + lVar6 * 0x18;
  pvVar7 = FMemory::Malloc((ulonglong)param_1,param_2);
  *(uint *)(pFVar2 + 0xc) = param_1;
  *(undefined4 *)(pFVar2 + 0x10) = 0;
  *(void **)pFVar2 = pvVar7;
  *(uint *)(pFVar2 + 8) = param_2;
  return;
}

// DestroyObject @ 14d59dc60

void __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::DestroyObject
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this,
          FCameraNodeEvaluator *param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *pTVar8;
  uint uVar9;
  uint uVar10;
  FCameraNodeEvaluator *pFVar12;
  uint uVar13;
  ulonglong uVar14;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *local_res8;
  byte local_res10;
  uint local_res18;
  int local_res20;
  ulonglong uVar11;
  
  local_res20 = (this->ObjectInfos).ArrayNum;
  lVar5 = (longlong)local_res20;
  uVar7 = 0;
  iVar4 = 0;
  local_res8 = this;
  local_res18 = param_2;
  if (local_res20 != 0) {
    pFVar1 = (this->ObjectInfos).AllocatorInstance.Data;
    local_res10 = *(FCameraNodeEvaluator **)pFVar1 != param_1;
    uVar11 = uVar7;
    uVar14 = uVar7;
    do {
      uVar9 = (uint)uVar11;
      uVar10 = uVar9;
      do {
        uVar7 = uVar7 + 1;
        uVar10 = uVar10 + 1;
        uVar11 = (ulonglong)uVar10;
        if (lVar5 <= (longlong)uVar7) break;
      } while ((bool)local_res10 == (*(FCameraNodeEvaluator **)(pFVar1 + uVar7 * 8) != param_1));
      if (local_res10 != 0) {
        uVar13 = (uint)uVar14;
        if (uVar13 != uVar9) {
          memmove(pFVar1 + (longlong)(int)uVar13 * 8,pFVar1 + (longlong)(int)uVar9 * 8,
                  (longlong)(int)(uVar10 - uVar9) << 3);
        }
        uVar14 = (ulonglong)(uVar13 + (uVar10 - uVar9));
      }
      local_res10 = local_res10 ^ 1;
    } while ((longlong)uVar7 < lVar5);
    iVar4 = local_res20 - (int)uVar14;
    (local_res8->ObjectInfos).ArrayNum = (int)uVar14;
    pTVar8 = local_res8;
    if (iVar4 == 1) goto LAB_14d59dd84;
  }
  pTVar8 = local_res8;
  local_res8 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)
               ((ulonglong)local_res8 & 0xffffffffffffff00);
  `UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::DestroyObject'::__l2::
  <lambda_2>::operator()(&local_res8);
LAB_14d59dd84:
  if (0 < iVar4) {
    (**(code **)(param_1->_padding_ + 0x10))(param_1,0);
    if (local_res18 != 0) {
      pFVar6 = (pTVar8->Allocations).AllocatorInstance.Data;
      pFVar1 = pFVar6 + (longlong)(pTVar8->Allocations).ArrayNum * 0x18;
      for (; pFVar6 != pFVar1; pFVar6 = pFVar6 + 0x18) {
        if ((*(FCameraNodeEvaluator **)pFVar6 <= param_1) &&
           (pFVar12 = (FCameraNodeEvaluator *)
                      ((longlong)&(*(FCameraNodeEvaluator **)pFVar6)->_padding_ +
                      (ulonglong)*(uint *)(pFVar6 + 0x10)), param_1 < pFVar12)) {
          if ((FCameraNodeEvaluator *)((longlong)&param_1->_padding_ + (ulonglong)local_res18) <=
              pFVar12) {
            memset(param_1,0,(ulonglong)local_res18);
            return;
          }
          break;
        }
      }
      bVar3 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_320692829896572691>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Public\\Core\\CameraObjectStorage.h"
                         ,0xed,
                         "FoundAllocation && (uint8*)BaseObjectPtr + MemoryResetSize <= FoundAllocation->Memory + FoundAllocation->Used"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// DestroyObjects @ 14d59e0c0

void __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::DestroyObjects
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res10 [8];
  
  pFVar3 = (this->ObjectInfos).AllocatorInstance.Data;
  iVar2 = (this->ObjectInfos).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ObjectInfos).ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::FObjectInfo,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar3 + 0x10))(*(longlong **)pFVar3,0);
    pFVar3 = pFVar3 + 8;
  }
  (this->ObjectInfos).ArrayNum = 0;
  if ((this->ObjectInfos).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ObjectInfos).AllocatorInstance,0,&(this->ObjectInfos).ArrayMax);
  }
  iVar2 = (this->Allocations).ArrayNum;
  pFVar3 = (this->Allocations).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x18;
  if (param_1) {
    while( true ) {
      if ((this->Allocations).ArrayNum != iVar2) {
        `TCheckedPointerIterator<UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::FAllocation,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar3 == pFVar1) break;
      FMemory::Free(*(void **)pFVar3);
      pFVar3 = pFVar3 + 0x18;
    }
    (this->Allocations).ArrayNum = 0;
    if ((this->Allocations).ArrayMax < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this,0,&(this->Allocations).ArrayMax);
    }
  }
  else {
    while( true ) {
      if ((this->Allocations).ArrayNum != iVar2) {
        `TCheckedPointerIterator<UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::FAllocation,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar3 == pFVar1) break;
      *(undefined4 *)(pFVar3 + 0x10) = 0;
      pFVar3 = pFVar3 + 0x18;
    }
  }
  return;
}

// GetAllocationInfo @ 14d5a6250

void __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::GetAllocationInfo
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this,uint *param_1,uint *param_2
          )

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  *param_1 = 0;
  *param_2 = 0;
  iVar2 = (this->Allocations).ArrayNum;
  if (iVar2 != 0) {
    if ((iVar2 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *param_2 = *(uint *)((this->Allocations).AllocatorInstance.Data + 8);
    iVar2 = (this->Allocations).ArrayNum;
    pFVar6 = (this->Allocations).AllocatorInstance.Data;
    pFVar1 = pFVar6 + (longlong)iVar2 * 0x18;
    while( true ) {
      if ((this->Allocations).ArrayNum != iVar2) {
        `TCheckedPointerIterator<UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::FAllocation_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar6 == pFVar1) break;
      uVar5 = 0;
      if (*param_1 != 0) {
        uVar5 = (*param_1 - 1) + *(int *)(pFVar6 + 8) & -*(int *)(pFVar6 + 8);
        *param_1 = uVar5;
      }
      *param_1 = *(int *)(pFVar6 + 0x10) + uVar5;
      pFVar6 = pFVar6 + 0x18;
    }
  }
  return;
}

// BuildObject<UE::Cameras::FArrayCameraNodeEvaluator> @ 14d5ebf40

FArrayCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FArrayCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FArrayCameraNodeEvaluator *this_00;
  
  this_00 = BuildObjectUninitialized(this,0x30,8);
  (((TObjectPtr<UCameraNode_const_> *)&this_00->_padding_)->field0_0x0).DebugPtr =
       (UCameraNode *)0x0;
  *(bool *)&this_00->_padding_ = true;
  *(ECameraNodeEvaluatorFlags *)&this_00->_padding_ = Default;
  (this_00->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->Children).ArrayNum = 0;
  (this_00->Children).ArrayMax = 0;
  this_00->_padding_ = (longlong)&___7FArrayCameraNodeEvaluator_Cameras_UE__6B_;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this_00,None);
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)this_00);
  return this_00;
}

// BuildObject<UE::Cameras::FAttachToActorCameraDebugBlock> @ 14d5ebfb0

FAttachToActorCameraDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FAttachToActorCameraDebugBlock>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  FAttachToActorCameraDebugBlock *pFVar9;
  
  pFVar9 = BuildObjectUninitialized(this,0xa0,0x10);
  pFVar9->_padding_ = 0;
  (pFVar9->AttachTransform).Rotation.XY.m128d_f64[0] = 0.0;
  (pFVar9->AttachTransform).Rotation.XY.m128d_f64[1] = 0.0;
  (pFVar9->AttachTransform).Rotation.ZW.m128d_f64[0] = 0.0;
  (pFVar9->AttachTransform).Rotation.ZW.m128d_f64[1] = 0.0;
  (pFVar9->AttachTransform).Translation.XY.m128d_f64[0] = 0.0;
  (pFVar9->AttachTransform).Translation.XY.m128d_f64[1] = 0.0;
  (pFVar9->AttachTransform).Translation.ZW.m128d_f64[0] = 0.0;
  (pFVar9->AttachTransform).Translation.ZW.m128d_f64[1] = 0.0;
  (pFVar9->AttachTransform).Scale3D.XY.m128d_f64[0] = 0.0;
  (pFVar9->AttachTransform).Scale3D.XY.m128d_f64[1] = 0.0;
  (pFVar9->AttachTransform).Scale3D.ZW.m128d_f64[0] = 0.0;
  (pFVar9->AttachTransform).Scale3D.ZW.m128d_f64[1] = 0.0;
  (pFVar9->AttachInfo).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar9->AttachInfo).Data.ArrayNum = 0;
  (pFVar9->AttachInfo).Data.ArrayMax = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar9->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar9->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar9->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar9->_padding_ = 0;
  pFVar9->_padding_ = (longlong)&___7FAttachToActorCameraDebugBlock_Cameras_UE__6B_;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar3._8_4_ = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar3._0_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  auVar3._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(pFVar9->AttachTransform).Rotation.XY.m128d_f64 = auVar3;
  auVar4._8_4_ = SUB84((double)fVar2,0);
  auVar4._0_8_ = (double)fVar1;
  auVar4._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(pFVar9->AttachTransform).Rotation.ZW.m128d_f64 = auVar4;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[3];
  auVar5._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  auVar5._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  auVar5._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(pFVar9->AttachTransform).Translation.XY.m128d_f64 = auVar5;
  auVar6._8_4_ = SUB84((double)fVar2,0);
  auVar6._0_8_ = (double)fVar1;
  auVar6._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(pFVar9->AttachTransform).Translation.ZW.m128d_f64 = auVar6;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[3];
  auVar7._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  auVar7._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  auVar7._12_4_ = (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  *(undefined1 (*) [16])(pFVar9->AttachTransform).Scale3D.XY.m128d_f64 = auVar7;
  auVar8._8_4_ = SUB84((double)fVar2,0);
  auVar8._0_8_ = (double)fVar1;
  auVar8._12_4_ = (int)((ulonglong)(double)fVar2 >> 0x20);
  *(undefined1 (*) [16])(pFVar9->AttachTransform).Scale3D.ZW.m128d_f64 = auVar8;
  (pFVar9->AttachInfo).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar9->AttachInfo).Data.ArrayNum = 0;
  (pFVar9->AttachInfo).Data.ArrayMax = 0;
  RegisterInitializedObject(this,(FCameraDebugBlock *)pFVar9);
  return pFVar9;
}

// BuildObject<UE::Cameras::FAttachToActorCameraNodeEvaluator> @ 14d5ec090

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FAttachToActorCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FAttachToActorCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FAttachToActorCameraNodeEvaluator *_Dst;
  
  _Dst = BuildObjectUninitialized(this,0x120,0x10);
  memset(_Dst,0,0x120);
  _Dst->field_0x8 = true;
  *(undefined ***)_Dst = &___7FAttachToActorCameraNodeEvaluator_Cameras_UE__6B_;
  *(ECameraNodeEvaluatorFlags *)&_Dst->field_0x18 = Default;
  (_Dst->AttachmentReader).DefaultAttachmentInfo.Actor.field0_0x0.DebugPtr = (AActor *)0x0;
  (_Dst->AttachmentReader).DefaultAttachmentInfo.SocketName.ComparisonIndex = 0;
  (_Dst->AttachmentReader).DefaultAttachmentInfo.SocketName.Number = 0;
  (_Dst->AttachmentReader).DefaultAttachmentInfo.BoneName.ComparisonIndex = 0;
  (_Dst->AttachmentReader).DefaultAttachmentInfo.BoneName.Number = 0;
  (_Dst->AttachmentReader).CachedAttachmentInfo.Actor.field0_0x0.DebugPtr = (AActor *)0x0;
  (_Dst->AttachmentReader).CachedAttachmentInfo.SocketName.ComparisonIndex = 0;
  (_Dst->AttachmentReader).CachedAttachmentInfo.SocketName.Number = 0;
  (_Dst->AttachmentReader).CachedAttachmentInfo.BoneName.ComparisonIndex = 0;
  (_Dst->AttachmentReader).CachedAttachmentInfo.BoneName.Number = 0;
  (_Dst->AttachmentReader).CachedSkeletalMeshComponent = (USkeletalMeshComponent *)0x0;
  (_Dst->AttachmentReader).CachedBoneName.ComparisonIndex = 0;
  (_Dst->AttachmentReader).CachedBoneName.Number = 0;
  (_Dst->AttachToLocationReader).DefaultValuePtr = (bool *)0x0;
  (_Dst->AttachToRotationReader).DefaultValuePtr = (bool *)0x0;
  (_Dst->LastAttachTransform).bIsSet = false;
  (_Dst->AttachmentReader).DefaultAttachmentInfo.Weight = 1.0;
  (_Dst->AttachmentReader).DataID.Value = 0xffffffff;
  (_Dst->AttachmentReader).CachedAttachmentInfo.Weight = 1.0;
  (_Dst->AttachToLocationReader).VariableID.Value = 0xffffffff;
  (_Dst->AttachToRotationReader).VariableID.Value = 0xffffffff;
  _Dst->bIsAttachValid = true;
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)_Dst);
  return _Dst;
}

// BuildObject<UE::Cameras::FAttachToActorGroupCameraNodeEvaluator> @ 14d5ec160

FAttachToActorGroupCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FAttachToActorGroupCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FAttachToActorGroupCameraNodeEvaluator *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x38,8);
  *(undefined4 *)((longlong)&pFVar1->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&pFVar1->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 7) = 0;
  pFVar1->_padding_ = 7;
  *(undefined4 *)&(pFVar1->AttachmentsReader).field_0x14 = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  *(bool *)&pFVar1->_padding_ = true;
  (pFVar1->AttachmentsReader).Readers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->AttachmentsReader).Readers.ArrayNum = 0;
  (pFVar1->AttachmentsReader).Readers.ArrayMax = 0;
  pFVar1->_padding_ = (longlong)&___7FAttachToActorGroupCameraNodeEvaluator_Cameras_UE__6B_;
  (pFVar1->AttachmentsReader).DataID.Value = 0xffffffff;
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FAttachToPlayerPawnCameraNodeEvaluator> @ 14d5ec1e0

FAttachToPlayerPawnCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FAttachToPlayerPawnCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FAttachToPlayerPawnCameraNodeEvaluator *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x58,8);
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  pFVar1->_padding_ = 0;
  pFVar1->CachedSkeletalMeshComponent = (USkeletalMeshComponent *)0x0;
  (pFVar1->CachedBoneName).ComparisonIndex = 0;
  (pFVar1->CachedBoneName).Number = 0;
  (pFVar1->AttachToLocationReader).DefaultValuePtr = (bool *)0x0;
  *(undefined8 *)&(pFVar1->AttachToLocationReader).VariableID = 0;
  (pFVar1->AttachToRotationReader).DefaultValuePtr = (bool *)0x0;
  *(undefined8 *)&(pFVar1->AttachToRotationReader).VariableID = 0;
  *(undefined8 *)&pFVar1->bHasValidPlayerController = 0;
  pFVar1->_padding_ = (longlong)&___7FAttachToPlayerPawnCameraNodeEvaluator_Cameras_UE__6B_;
  pFVar1->CachedSkeletalMeshComponent = (USkeletalMeshComponent *)0x0;
  (pFVar1->CachedBoneName).ComparisonIndex = 0;
  (pFVar1->CachedBoneName).Number = 0;
  (pFVar1->AttachToLocationReader).DefaultValuePtr = (bool *)0x0;
  (pFVar1->AttachToRotationReader).DefaultValuePtr = (bool *)0x0;
  *(bool *)&pFVar1->_padding_ = true;
  *(ECameraNodeEvaluatorFlags *)&pFVar1->_padding_ = Default;
  (pFVar1->AttachToLocationReader).VariableID.Value = 0xffffffff;
  (pFVar1->AttachToRotationReader).VariableID.Value = 0xffffffff;
  pFVar1->bHasValidPlayerController = true;
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FAutoFocusCameraDebugBlock> @ 14d5ec280

FAutoFocusCameraDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FAutoFocusCameraDebugBlock>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this)

{
  FAutoFocusCameraDebugBlock *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x40,8);
  pFVar1->UndampedFocusDistance = 0.0;
  pFVar1->DampedFocusDistance = 0.0;
  pFVar1->AutoFocusDampingFactor = 0.0;
  pFVar1->bEnableAutoFocus = false;
  *(undefined3 *)&pFVar1->field_0x3d = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = (longlong)&___7FAutoFocusCameraDebugBlock_Cameras_UE__6B_;
  RegisterInitializedObject(this,(FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FAutoFocusCameraNodeEvaluator> @ 14d5ec2f0

FAutoFocusCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FAutoFocusCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FAutoFocusCameraNodeEvaluator *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x60,8);
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  pFVar1->_padding_ = 0;
  (pFVar1->EnableAutoFocusReader).DefaultValue = false;
  *(undefined3 *)&(pFVar1->EnableAutoFocusReader).field_0x1 = 0;
  (pFVar1->EnableAutoFocusReader).VariableID = 0;
  (pFVar1->AutoFocusDampingFactorReader).DefaultValuePtr = (float *)0x0;
  *(undefined8 *)&(pFVar1->AutoFocusDampingFactorReader).VariableID = 0;
  (pFVar1->AutoFocusDamper).W0 = 0.0;
  (pFVar1->AutoFocusDamper).X0 = 0.0;
  *(undefined8 *)&(pFVar1->AutoFocusDamper).X0Derivative = 0;
  pFVar1->LastUndampedFocusDistance = 0.0;
  pFVar1->LastDampedFocusDistance = 0.0;
  *(undefined8 *)&pFVar1->bLastEnableAutoFocus = 0;
  *(bool *)&pFVar1->_padding_ = true;
  *(ECameraNodeEvaluatorFlags *)&pFVar1->_padding_ = Default;
  pFVar1->_padding_ = (longlong)&___7FAutoFocusCameraNodeEvaluator_Cameras_UE__6B_;
  (pFVar1->AutoFocusDampingFactorReader).DefaultValuePtr = (float *)0x0;
  (pFVar1->AutoFocusDamper).X0 = 0.0;
  (pFVar1->AutoFocusDamper).X0Derivative = 0.0;
  (pFVar1->EnableAutoFocusReader).VariableID.Value = 0xffffffff;
  (pFVar1->AutoFocusDampingFactorReader).VariableID.Value = 0xffffffff;
  (pFVar1->AutoFocusDamper).W0 = -1.0;
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FBaseFramingCameraDebugBlock> @ 14d5ec380

FBaseFramingCameraDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FBaseFramingCameraDebugBlock>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this)

{
  FBaseFramingCameraDebugBlock *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x490,0x10);
  memset(pFVar1,0,0x490);
  pFVar1 = FBaseFramingCameraDebugBlock::FBaseFramingCameraDebugBlock(pFVar1);
  RegisterInitializedObject(this,(FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FBodyParametersCameraNodeEvaluator> @ 14d5ec3e0

FBodyParametersCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FBodyParametersCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FBodyParametersCameraNodeEvaluator *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x40,8);
  *(undefined4 *)((longlong)&pFVar1->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&pFVar1->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 7) = 0;
  pFVar1->_padding_ = 7;
  *(undefined4 *)&(pFVar1->ShutterSpeedReader).field_0xc = 0;
  *(undefined4 *)&(pFVar1->ISOReader).field_0xc = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  *(bool *)&pFVar1->_padding_ = true;
  (pFVar1->ShutterSpeedReader).DefaultValuePtr = (float *)0x0;
  (pFVar1->ISOReader).DefaultValuePtr = (float *)0x0;
  pFVar1->_padding_ = (longlong)&___7FBodyParametersCameraNodeEvaluator_Cameras_UE__6B_;
  (pFVar1->ShutterSpeedReader).VariableID.Value = 0xffffffff;
  (pFVar1->ISOReader).VariableID.Value = 0xffffffff;
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FBoomArmCameraDebugBlock> @ 14d5ec470

FBoomArmCameraDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FBoomArmCameraDebugBlock>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this)

{
  FBoomArmCameraDebugBlock *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x48,8);
  (pFVar1->BoomYawPitch).field0_0x0._s_0.X = 0.0;
  (pFVar1->BoomYawPitch).field0_0x0._s_0.Y = 0.0;
  pFVar1->CumulativePull = 0.0;
  pFVar1->bDidClampPull = false;
  pFVar1->bHasBoomLengthInterpolator = false;
  *(undefined6 *)&pFVar1->field_0x42 = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = (longlong)&___7FBoomArmCameraDebugBlock_Cameras_UE__6B_;
  RegisterInitializedObject(this,(FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FBoomArmCameraNodeEvaluator> @ 14d5ec4e0

FBoomArmCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FBoomArmCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FBoomArmCameraNodeEvaluator *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x98,8);
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  pFVar1->_padding_ = 0;
  (pFVar1->BoomOffsetReader).DefaultValuePtr = (TVector<double> *)0x0;
  *(undefined8 *)&(pFVar1->BoomOffsetReader).VariableID = 0;
  pFVar1->InputSlotEvaluator = (FInput2DCameraNodeEvaluator *)0x0;
  (pFVar1->BoomLengthInterpolator).Ptr = (TCameraValueInterpolator<double> *)0x0;
  (pFVar1->MaxForwardInterpolationFactorReader).DefaultValuePtr = (double *)0x0;
  *(undefined8 *)&(pFVar1->MaxForwardInterpolationFactorReader).VariableID = 0;
  (pFVar1->MaxBackwardInterpolationFactorReader).DefaultValuePtr = (double *)0x0;
  *(undefined8 *)&(pFVar1->MaxBackwardInterpolationFactorReader).VariableID = 0;
  (pFVar1->LastPivotLocation).field0_0x0._s_0.X = 0.0;
  (pFVar1->LastPivotLocation).field0_0x0._s_0.Y = 0.0;
  (pFVar1->LastPivotLocation).field0_0x0._s_0.Z = 0.0;
  pFVar1->CumulativePull = 0.0;
  (pFVar1->DebugYawPitch).field0_0x0._s_0.X = 0.0;
  (pFVar1->DebugYawPitch).field0_0x0._s_0.Y = 0.0;
  *(undefined8 *)&pFVar1->bDebugDidClampPull = 0;
  pFVar1->_padding_ = (longlong)&___7FBoomArmCameraNodeEvaluator_Cameras_UE__6B_;
  (pFVar1->BoomOffsetReader).DefaultValuePtr = (TVector<double> *)0x0;
  pFVar1->InputSlotEvaluator = (FInput2DCameraNodeEvaluator *)0x0;
  (pFVar1->BoomLengthInterpolator).Ptr = (TCameraValueInterpolator<double> *)0x0;
  (pFVar1->MaxForwardInterpolationFactorReader).DefaultValuePtr = (double *)0x0;
  (pFVar1->MaxBackwardInterpolationFactorReader).DefaultValuePtr = (double *)0x0;
  *(bool *)&pFVar1->_padding_ = true;
  *(ECameraNodeEvaluatorFlags *)&pFVar1->_padding_ = Default;
  (pFVar1->BoomOffsetReader).VariableID.Value = 0xffffffff;
  (pFVar1->MaxForwardInterpolationFactorReader).VariableID.Value = 0xffffffff;
  (pFVar1->MaxBackwardInterpolationFactorReader).VariableID.Value = 0xffffffff;
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FCameraRigCameraNodeEvaluator> @ 14d5ec5a0

FCameraRigCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FCameraRigCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FCameraRigCameraNodeEvaluator *this_00;
  
  this_00 = BuildObjectUninitialized(this,0x28,8);
  (((TObjectPtr<UCameraNode_const_> *)&this_00->_padding_)->field0_0x0).DebugPtr =
       (UCameraNode *)0x0;
  *(bool *)&this_00->_padding_ = true;
  *(ECameraNodeEvaluatorFlags *)&this_00->_padding_ = Default;
  this_00->CameraRigRootEvaluator = (FCameraNodeEvaluator *)0x0;
  this_00->_padding_ = (longlong)&___7FCameraRigCameraNodeEvaluator_Cameras_UE__6B_;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this_00,NeedsParameterUpdate);
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)this_00);
  return this_00;
}

// BuildObject<UE::Cameras::FClippingPlanesCameraNodeEvaluator> @ 14d5ec610

FClippingPlanesCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FClippingPlanesCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FClippingPlanesCameraNodeEvaluator *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x40,8);
  *(undefined4 *)((longlong)&pFVar1->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&pFVar1->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 7) = 0;
  pFVar1->_padding_ = 7;
  *(undefined4 *)&(pFVar1->NearPlaneReader).field_0xc = 0;
  *(undefined4 *)&(pFVar1->FarPlaneReader).field_0xc = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  *(bool *)&pFVar1->_padding_ = true;
  (pFVar1->NearPlaneReader).DefaultValuePtr = (double *)0x0;
  (pFVar1->FarPlaneReader).DefaultValuePtr = (double *)0x0;
  pFVar1->_padding_ = (longlong)&___7FClippingPlanesCameraNodeEvaluator_Cameras_UE__6B_;
  (pFVar1->NearPlaneReader).VariableID.Value = 0xffffffff;
  (pFVar1->FarPlaneReader).VariableID.Value = 0xffffffff;
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FCollisionPushCameraDebugBlock> @ 14d5ec6a0

FCollisionPushCameraDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FCollisionPushCameraDebugBlock>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this)

{
  FCollisionPushCameraDebugBlock *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x68,8);
  pFVar1->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  pFVar1->bCollisionEnabled = false;
  pFVar1->bGotSafePosition = false;
  pFVar1->bGotSafePositionOffset = false;
  pFVar1->SafePositionType = ActiveContext;
  pFVar1->SafePositionOffsetSpace = ActiveContext;
  *(undefined3 *)&pFVar1->field_0x2d = 0;
  pFVar1->PushFactor = 0.0;
  pFVar1->DampedPushFactor = 0.0;
  pFVar1->bIsPulling = false;
  pFVar1->bFoundHit = false;
  *(undefined6 *)&pFVar1->field_0x3a = 0;
  (pFVar1->HitObjectName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->HitObjectName).Data.ArrayNum = 0;
  (pFVar1->HitObjectName).Data.ArrayMax = 0;
  (pFVar1->SafePosition).field0_0x0._s_0.X = 0.0;
  (pFVar1->SafePosition).field0_0x0._s_0.Y = 0.0;
  (pFVar1->SafePosition).field0_0x0._s_0.Z = 0.0;
  pFVar1->_padding_ = (longlong)&___7FCollisionPushCameraDebugBlock_Cameras_UE__6B_;
  RegisterInitializedObject(this,(FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FCollisionPushCameraNodeEvaluator> @ 14d5ec710

FCollisionPushCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FCollisionPushCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FCollisionPushCameraNodeEvaluator *_Dst;
  
  _Dst = BuildObjectUninitialized(this,0xc0,8);
  memset(_Dst,0,0xc0);
  *(bool *)&_Dst->_padding_ = true;
  _Dst->_padding_ = (longlong)&___7FCollisionPushCameraNodeEvaluator_Cameras_UE__6B_;
  *(ECameraNodeEvaluatorFlags *)&_Dst->_padding_ = Default;
  (_Dst->CollisionSphereRadiusReader).DefaultValuePtr = (float *)0x0;
  (_Dst->SafePositionOffsetReader).DefaultValuePtr = (TVector<double> *)0x0;
  (_Dst->PushInterpolator).Ptr = (TCameraValueInterpolator<double> *)0x0;
  (_Dst->PullInterpolator).Ptr = (TCameraValueInterpolator<double> *)0x0;
  (_Dst->CollisionTraceHandle).field0_0x0._Handle = 0;
  (_Dst->CollisionTraceHandle).bTransactional = false;
  _Dst->LastPushFactor = 0.0;
  _Dst->LastDampedPushFactor = 0.0;
  _Dst->LastDirection = Pushing;
  _Dst->bDebugCollisionEnabled = false;
  _Dst->bDebugFoundHit = false;
  _Dst->bDebugGotSafePosition = false;
  _Dst->bDebugGotSafePositionOffset = false;
  (_Dst->DebugHitObjectName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (_Dst->DebugHitObjectName).Data.ArrayNum = 0;
  (_Dst->DebugHitObjectName).Data.ArrayMax = 0;
  (_Dst->EnableCollisionReader).VariableID.Value = 0xffffffff;
  (_Dst->CustomSafePositionReader).VariableID.Value = 0xffffffff;
  (_Dst->CollisionSphereRadiusReader).VariableID.Value = 0xffffffff;
  (_Dst->SafePositionOffsetReader).VariableID.Value = 0xffffffff;
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)_Dst);
  return _Dst;
}

// BuildObject<UE::Cameras::FDampenPositionCameraDebugBlock> @ 14d5ec7d0

FDampenPositionCameraDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FDampenPositionCameraDebugBlock>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this)

{
  FDampenPositionCameraDebugBlock *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x88,8);
  pFVar1->ForwardX0 = 0.0;
  pFVar1->LateralX0 = 0.0;
  pFVar1->VerticalX0 = 0.0;
  pFVar1->ForwardDampingFactor = 0.0;
  pFVar1->LateralDampingFactor = 0.0;
  pFVar1->VerticalDampingFactor = 0.0;
  (pFVar1->UndampedPosition).field0_0x0._s_0.X = 0.0;
  (pFVar1->UndampedPosition).field0_0x0._s_0.Y = 0.0;
  (pFVar1->UndampedPosition).field0_0x0._s_0.Z = 0.0;
  (pFVar1->DampedPosition).field0_0x0._s_0.X = 0.0;
  (pFVar1->DampedPosition).field0_0x0._s_0.Y = 0.0;
  (pFVar1->DampedPosition).field0_0x0._s_0.Z = 0.0;
  (pFVar1->DampingRotation).Pitch = 0.0;
  (pFVar1->DampingRotation).Yaw = 0.0;
  (pFVar1->DampingRotation).Roll = 0.0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = (longlong)&___7FDampenPositionCameraDebugBlock_Cameras_UE__6B_;
  RegisterInitializedObject(this,(FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FDampenPositionCameraNodeEvaluator> @ 14d5ec850

FDampenPositionCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FDampenPositionCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FDampenPositionCameraNodeEvaluator *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0xf0,8);
  *(undefined4 *)((longlong)&pFVar1->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&pFVar1->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 7) = 0;
  pFVar1->_padding_ = 7;
  *(undefined4 *)&(pFVar1->ForwardDampingFactorReader).field_0xc = 0;
  *(undefined4 *)&(pFVar1->LateralDampingFactorReader).field_0xc = 0;
  *(undefined4 *)&(pFVar1->VerticalDampingFactorReader).field_0xc = 0;
  *(undefined8 *)&pFVar1->field_0x74 = 0;
  *(undefined8 *)((longlong)&(pFVar1->PreviousLocation).field0_0x0._s_0.X + 4) = 0;
  *(undefined8 *)((longlong)&(pFVar1->PreviousLocation).field0_0x0._s_0.Y + 4) = 0;
  *(undefined8 *)((longlong)&(pFVar1->PreviousLocation).field0_0x0._s_0.Z + 4) = 0;
  *(undefined8 *)((longlong)&(pFVar1->PreviousLagVector).field0_0x0._s_0.X + 4) = 0;
  *(undefined8 *)((longlong)&(pFVar1->PreviousLagVector).field0_0x0._s_0.Y + 4) = 0;
  *(undefined8 *)((longlong)&(pFVar1->PreviousLagVector).field0_0x0._s_0.Z + 4) = 0;
  *(undefined8 *)((longlong)&(pFVar1->DebugLastUndampedPosition).field0_0x0._s_0.X + 4) = 0;
  *(undefined8 *)((longlong)&(pFVar1->DebugLastUndampedPosition).field0_0x0._s_0.Y + 4) = 0;
  *(undefined8 *)((longlong)&(pFVar1->DebugLastUndampedPosition).field0_0x0._s_0.Z + 4) = 0;
  *(undefined8 *)((longlong)&(pFVar1->DebugLastDampedPosition).field0_0x0._s_0.X + 4) = 0;
  *(undefined8 *)((longlong)&(pFVar1->DebugLastDampedPosition).field0_0x0._s_0.Y + 4) = 0;
  *(undefined8 *)((longlong)&(pFVar1->DebugLastDampedPosition).field0_0x0._s_0.Z + 4) = 0;
  *(undefined8 *)((longlong)&(pFVar1->DebugLastDampingRotation).Pitch + 4) = 0;
  *(undefined8 *)((longlong)&(pFVar1->DebugLastDampingRotation).Yaw + 4) = 0;
  *(undefined4 *)((longlong)&(pFVar1->DebugLastDampingRotation).Roll + 4) = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  (pFVar1->ForwardDampingFactorReader).DefaultValuePtr = (float *)0x0;
  (pFVar1->LateralDampingFactorReader).DefaultValuePtr = (float *)0x0;
  (pFVar1->VerticalDampingFactorReader).DefaultValuePtr = (float *)0x0;
  (pFVar1->ForwardDamper).X0 = 0.0;
  (pFVar1->ForwardDamper).X0Derivative = 0.0;
  (pFVar1->LateralDamper).X0 = 0.0;
  (pFVar1->LateralDamper).X0Derivative = 0.0;
  (pFVar1->VerticalDamper).X0 = 0.0;
  (pFVar1->VerticalDamper).X0Derivative = 0.0;
  pFVar1->_padding_ = (longlong)&___7FDampenPositionCameraNodeEvaluator_Cameras_UE__6B_;
  *(bool *)&pFVar1->_padding_ = true;
  (pFVar1->ForwardDampingFactorReader).VariableID.Value = 0xffffffff;
  (pFVar1->LateralDampingFactorReader).VariableID.Value = 0xffffffff;
  (pFVar1->VerticalDampingFactorReader).VariableID.Value = 0xffffffff;
  (pFVar1->ForwardDamper).W0 = -1.0;
  (pFVar1->LateralDamper).W0 = -1.0;
  (pFVar1->VerticalDamper).W0 = -1.0;
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FDampenRotationCameraDebugBlock> @ 14d5ec940

FDampenRotationCameraDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FDampenRotationCameraDebugBlock>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this)

{
  FDampenRotationCameraDebugBlock *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x70,8);
  pFVar1->YawX0 = 0.0;
  pFVar1->PitchX0 = 0.0;
  pFVar1->RollX0 = 0.0;
  pFVar1->YawDampingFactor = 0.0;
  pFVar1->PitchDampingFactor = 0.0;
  pFVar1->RollDampingFactor = 0.0;
  (pFVar1->UndampedRotation).Pitch = 0.0;
  (pFVar1->UndampedRotation).Yaw = 0.0;
  (pFVar1->UndampedRotation).Roll = 0.0;
  (pFVar1->DampedRotation).Pitch = 0.0;
  (pFVar1->DampedRotation).Yaw = 0.0;
  (pFVar1->DampedRotation).Roll = 0.0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = (longlong)&___7FDampenRotationCameraDebugBlock_Cameras_UE__6B_;
  RegisterInitializedObject(this,(FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FDampenRotationCameraNodeEvaluator> @ 14d5ec9c0

FDampenRotationCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FDampenRotationCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FDampenRotationCameraNodeEvaluator *_Dst;
  
  _Dst = BuildObjectUninitialized(this,0xc0,8);
  memset(_Dst,0,0xc0);
  *(bool *)&_Dst->_padding_ = true;
  _Dst->_padding_ = (longlong)&___7FDampenRotationCameraNodeEvaluator_Cameras_UE__6B_;
  *(ECameraNodeEvaluatorFlags *)&_Dst->_padding_ = Default;
  (_Dst->YawDampingFactorReader).DefaultValuePtr = (float *)0x0;
  (_Dst->PitchDampingFactorReader).DefaultValuePtr = (float *)0x0;
  (_Dst->RollDampingFactorReader).DefaultValuePtr = (float *)0x0;
  (_Dst->YawDamper).X0 = 0.0;
  (_Dst->YawDamper).X0Derivative = 0.0;
  (_Dst->PitchDamper).X0 = 0.0;
  (_Dst->PitchDamper).X0Derivative = 0.0;
  (_Dst->RollDamper).X0 = 0.0;
  (_Dst->RollDamper).X0Derivative = 0.0;
  (_Dst->YawDampingFactorReader).VariableID.Value = 0xffffffff;
  (_Dst->PitchDampingFactorReader).VariableID.Value = 0xffffffff;
  (_Dst->RollDampingFactorReader).VariableID.Value = 0xffffffff;
  (_Dst->YawDamper).W0 = -1.0;
  (_Dst->PitchDamper).W0 = -1.0;
  (_Dst->RollDamper).W0 = -1.0;
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)_Dst);
  return _Dst;
}

// BuildObject<UE::Cameras::FFieldOfViewCameraNodeEvaluator> @ 14d5eca70

FFieldOfViewCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FFieldOfViewCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FFieldOfViewCameraNodeEvaluator *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x30,8);
  *(undefined4 *)((longlong)&pFVar1->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&pFVar1->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 7) = 0;
  pFVar1->_padding_ = 7;
  *(undefined4 *)&(pFVar1->FieldOfViewReader).field_0xc = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  *(bool *)&pFVar1->_padding_ = true;
  (pFVar1->FieldOfViewReader).DefaultValuePtr = (float *)0x0;
  pFVar1->_padding_ = (longlong)&___7FFieldOfViewCameraNodeEvaluator_Cameras_UE__6B_;
  (pFVar1->FieldOfViewReader).VariableID.Value = 0xffffffff;
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FFilmbackCameraNodeEvaluator> @ 14d5ecaf0

FFilmbackCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FFilmbackCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FFilmbackCameraNodeEvaluator *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x90,8);
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  pFVar1->_padding_ = 0;
  (pFVar1->SensorWidthReader).DefaultValuePtr = (float *)0x0;
  *(undefined8 *)&(pFVar1->SensorWidthReader).VariableID = 0;
  (pFVar1->SensorHeightReader).DefaultValuePtr = (float *)0x0;
  *(undefined8 *)&(pFVar1->SensorHeightReader).VariableID = 0;
  (pFVar1->SensorHorizontalOffsetReader).DefaultValuePtr = (float *)0x0;
  *(undefined8 *)&(pFVar1->SensorHorizontalOffsetReader).VariableID = 0;
  (pFVar1->SensorVerticalOffsetReader).DefaultValuePtr = (float *)0x0;
  *(undefined8 *)&(pFVar1->SensorVerticalOffsetReader).VariableID = 0;
  (pFVar1->OverscanReader).DefaultValuePtr = (float *)0x0;
  *(undefined8 *)&(pFVar1->OverscanReader).VariableID = 0;
  (pFVar1->ConstrainAspectRatioReader).DefaultValuePtr = (bool *)0x0;
  *(undefined8 *)&(pFVar1->ConstrainAspectRatioReader).VariableID = 0;
  (pFVar1->OverrideAspectRatioAxisConstraintReader).DefaultValuePtr = (bool *)0x0;
  *(undefined8 *)&(pFVar1->OverrideAspectRatioAxisConstraintReader).VariableID = 0;
  *(bool *)&pFVar1->_padding_ = true;
  *(ECameraNodeEvaluatorFlags *)&pFVar1->_padding_ = Default;
  pFVar1->_padding_ = (longlong)&___7FFilmbackCameraNodeEvaluator_Cameras_UE__6B_;
  (pFVar1->SensorWidthReader).DefaultValuePtr = (float *)0x0;
  (pFVar1->SensorHeightReader).DefaultValuePtr = (float *)0x0;
  (pFVar1->SensorHorizontalOffsetReader).DefaultValuePtr = (float *)0x0;
  (pFVar1->SensorVerticalOffsetReader).DefaultValuePtr = (float *)0x0;
  (pFVar1->OverscanReader).DefaultValuePtr = (float *)0x0;
  (pFVar1->ConstrainAspectRatioReader).DefaultValuePtr = (bool *)0x0;
  (pFVar1->OverrideAspectRatioAxisConstraintReader).DefaultValuePtr = (bool *)0x0;
  (pFVar1->SensorWidthReader).VariableID.Value = 0xffffffff;
  (pFVar1->SensorHeightReader).VariableID.Value = 0xffffffff;
  (pFVar1->SensorHorizontalOffsetReader).VariableID.Value = 0xffffffff;
  (pFVar1->SensorVerticalOffsetReader).VariableID.Value = 0xffffffff;
  (pFVar1->OverscanReader).VariableID.Value = 0xffffffff;
  (pFVar1->ConstrainAspectRatioReader).VariableID.Value = 0xffffffff;
  (pFVar1->OverrideAspectRatioAxisConstraintReader).VariableID.Value = 0xffffffff;
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FLensParametersCameraNodeEvaluator> @ 14d5ecbd0

FLensParametersCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FLensParametersCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FLensParametersCameraNodeEvaluator *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x60,8);
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  pFVar1->_padding_ = 0;
  (pFVar1->FocalLengthReader).DefaultValuePtr = (float *)0x0;
  *(undefined8 *)&(pFVar1->FocalLengthReader).VariableID = 0;
  (pFVar1->FocusDistanceReader).DefaultValuePtr = (float *)0x0;
  *(undefined8 *)&(pFVar1->FocusDistanceReader).VariableID = 0;
  (pFVar1->ApertureReader).DefaultValuePtr = (float *)0x0;
  *(undefined8 *)&(pFVar1->ApertureReader).VariableID = 0;
  (pFVar1->EnablePhysicalCameraReader).DefaultValuePtr = (bool *)0x0;
  *(undefined8 *)&(pFVar1->EnablePhysicalCameraReader).VariableID = 0;
  *(bool *)&pFVar1->_padding_ = true;
  *(ECameraNodeEvaluatorFlags *)&pFVar1->_padding_ = Default;
  pFVar1->_padding_ = (longlong)&___7FLensParametersCameraNodeEvaluator_Cameras_UE__6B_;
  (pFVar1->FocalLengthReader).DefaultValuePtr = (float *)0x0;
  (pFVar1->FocusDistanceReader).DefaultValuePtr = (float *)0x0;
  (pFVar1->ApertureReader).DefaultValuePtr = (float *)0x0;
  (pFVar1->EnablePhysicalCameraReader).DefaultValuePtr = (bool *)0x0;
  (pFVar1->FocalLengthReader).VariableID.Value = 0xffffffff;
  (pFVar1->FocusDistanceReader).VariableID.Value = 0xffffffff;
  (pFVar1->ApertureReader).VariableID.Value = 0xffffffff;
  (pFVar1->EnablePhysicalCameraReader).VariableID.Value = 0xffffffff;
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FLinearBlendCameraNodeEvaluator> @ 14d5ecc70

FLinearBlendCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FLinearBlendCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FSimpleFixedTimeBlendCameraNodeEvaluator *this_00;
  
  this_00 = BuildObjectUninitialized(this,0x40,8);
  this_00->_padding_ = 0;
  this_00->_padding_ = 0;
  this_00->_padding_ = 0;
  this_00->_padding_ = 0;
  this_00->_padding_ = 0;
  this_00->_padding_ = 0;
  this_00->_padding_ = 0;
  this_00->TotalTime = 0.0;
  this_00->CurrentTime = 0.0;
  FSimpleFixedTimeBlendCameraNodeEvaluator::FSimpleFixedTimeBlendCameraNodeEvaluator(this_00);
  this_00->_padding_ = (longlong)&___7FLinearBlendCameraNodeEvaluator_Cameras_UE__6B_;
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)this_00);
  return (FLinearBlendCameraNodeEvaluator *)this_00;
}

// BuildObject<UE::Cameras::FLocationRotationBlendCameraDebugBlock> @ 14d5ecce0

FLocationRotationBlendCameraDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FLocationRotationBlendCameraDebugBlock>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this)

{
  FLocationRotationBlendCameraDebugBlock *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x38,8);
  pFVar1->LocationBlendFactor = 0.0;
  pFVar1->RotationBlendFactor = 0.0;
  *(undefined8 *)&pFVar1->OtherBlendFactor = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = (longlong)&___7FLocationRotationBlendCameraDebugBlock_Cameras_UE__6B_;
  RegisterInitializedObject(this,(FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FLocationRotationBlendCameraNodeEvaluator> @ 14d5ecd50

FLocationRotationBlendCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FLocationRotationBlendCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FLocationRotationBlendCameraNodeEvaluator *this_00;
  
  this_00 = BuildObjectUninitialized(this,0x38,8);
  (((TObjectPtr<UCameraNode_const_> *)&this_00->_padding_)->field0_0x0).DebugPtr =
       (UCameraNode *)0x0;
  *(bool *)&this_00->_padding_ = true;
  *(ECameraNodeEvaluatorFlags *)&this_00->_padding_ = Default;
  this_00->LocationBlendEvaluator = (FSimpleBlendCameraNodeEvaluator *)0x0;
  this_00->RotationBlendEvaluator = (FSimpleBlendCameraNodeEvaluator *)0x0;
  this_00->OtherBlendEvaluator = (FSimpleBlendCameraNodeEvaluator *)0x0;
  this_00->_padding_ = (longlong)&___7FLocationRotationBlendCameraNodeEvaluator_Cameras_UE__6B_;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this_00,None);
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)this_00);
  return this_00;
}

// BuildObject<UE::Cameras::FOcclusionMaterialCameraNodeEvaluator> @ 14d5ecdc0

FOcclusionMaterialCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FOcclusionMaterialCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FOcclusionMaterialCameraNodeEvaluator *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0xf0,8);
  memset(pFVar1,0,0xf0);
  pFVar1 = FOcclusionMaterialCameraNodeEvaluator::FOcclusionMaterialCameraNodeEvaluator(pFVar1);
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FOffsetCameraNodeEvaluator> @ 14d5ece20

FOffsetCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FOffsetCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FOffsetCameraNodeEvaluator *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x40,8);
  *(undefined4 *)((longlong)&pFVar1->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&pFVar1->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 7) = 0;
  pFVar1->_padding_ = 7;
  *(undefined4 *)&(pFVar1->TranslationReader).field_0xc = 0;
  *(undefined4 *)&(pFVar1->RotationReader).field_0xc = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  *(bool *)&pFVar1->_padding_ = true;
  (pFVar1->TranslationReader).DefaultValuePtr = (TVector<double> *)0x0;
  (pFVar1->RotationReader).DefaultValuePtr = (TRotator<double> *)0x0;
  pFVar1->_padding_ = (longlong)&___7FOffsetCameraNodeEvaluator_Cameras_UE__6B_;
  (pFVar1->TranslationReader).VariableID.Value = 0xffffffff;
  (pFVar1->RotationReader).VariableID.Value = 0xffffffff;
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FOrbitBlendCameraDebugBlock> @ 14d5eceb0

FOrbitBlendCameraDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FOrbitBlendCameraDebugBlock>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this)

{
  FOrbitBlendCameraDebugBlock *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x60,8);
  (pFVar1->DeltaLocation).field0_0x0._s_0.X = 0.0;
  (pFVar1->DeltaLocation).field0_0x0._s_0.Y = 0.0;
  (pFVar1->DeltaLocation).field0_0x0._s_0.Z = 0.0;
  (pFVar1->DeltaRotation).Pitch = 0.0;
  (pFVar1->DeltaRotation).Yaw = 0.0;
  (pFVar1->DeltaRotation).Roll = 0.0;
  pFVar1->SmoothingTimeLeft = 0.0;
  pFVar1->bIsActive = false;
  *(undefined3 *)&pFVar1->field_0x5d = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = (longlong)&___7FOrbitBlendCameraDebugBlock_Cameras_UE__6B_;
  RegisterInitializedObject(this,(FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FOrbitBlendCameraNodeEvaluator> @ 14d5ecf20

FOrbitBlendCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FOrbitBlendCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FOrbitBlendCameraNodeEvaluator *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x60,8);
  pFVar1 = FOrbitBlendCameraNodeEvaluator::FOrbitBlendCameraNodeEvaluator(pFVar1);
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FOrthographicCameraNodeEvaluator> @ 14d5ecf70

FOrthographicCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FOrthographicCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FOrthographicCameraNodeEvaluator *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x40,8);
  *(undefined4 *)((longlong)&pFVar1->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&pFVar1->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 7) = 0;
  pFVar1->_padding_ = 7;
  *(undefined4 *)&(pFVar1->EnableOrthographicModeReader).field_0xc = 0;
  *(undefined4 *)&(pFVar1->OrthographicWidthReader).field_0xc = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  *(bool *)&pFVar1->_padding_ = true;
  (pFVar1->EnableOrthographicModeReader).DefaultValuePtr = (bool *)0x0;
  (pFVar1->OrthographicWidthReader).DefaultValuePtr = (float *)0x0;
  pFVar1->_padding_ = (longlong)&___7FOrthographicCameraNodeEvaluator_Cameras_UE__6B_;
  (pFVar1->EnableOrthographicModeReader).VariableID.Value = 0xffffffff;
  (pFVar1->OrthographicWidthReader).VariableID.Value = 0xffffffff;
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FPopBlendCameraNodeEvaluator> @ 14d5ed000

FPopBlendCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FPopBlendCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FCameraNodeEvaluator *this_00;
  
  this_00 = BuildObjectUninitialized(this,0x20,8);
  this_00->bAutoCameraPoseMovementTrail = true;
  (this_00->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  this_00->PrivateFlags = Default;
  this_00->_padding_ = (longlong)&___7FPopBlendCameraNodeEvaluator_Cameras_UE__6B_;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags(this_00,None);
  RegisterInitializedObject(this,this_00);
  return (FPopBlendCameraNodeEvaluator *)this_00;
}

// BuildObject<UE::Cameras::FPostProcessCameraNodeEvaluator> @ 14d5ed070

FPostProcessCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FPostProcessCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FCameraNodeEvaluator *this_00;
  
  this_00 = BuildObjectUninitialized(this,0x20,8);
  this_00->bAutoCameraPoseMovementTrail = true;
  (this_00->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  this_00->PrivateFlags = Default;
  this_00->_padding_ = (longlong)&___7FPostProcessCameraNodeEvaluator_Cameras_UE__6B_;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags(this_00,None);
  RegisterInitializedObject(this,this_00);
  return (FPostProcessCameraNodeEvaluator *)this_00;
}

// BuildObject<UE::Cameras::FSetLocationCameraNodeEvaluator> @ 14d5ed0e0

FSetLocationCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FSetLocationCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FSetLocationCameraNodeEvaluator *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x30,8);
  *(undefined4 *)((longlong)&pFVar1->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&pFVar1->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 7) = 0;
  pFVar1->_padding_ = 7;
  *(undefined4 *)&(pFVar1->LocationReader).field_0xc = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  *(bool *)&pFVar1->_padding_ = true;
  (pFVar1->LocationReader).DefaultValuePtr = (TVector<double> *)0x0;
  pFVar1->_padding_ = (longlong)&___7FSetLocationCameraNodeEvaluator_Cameras_UE__6B_;
  (pFVar1->LocationReader).VariableID.Value = 0xffffffff;
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FSetRotationCameraNodeEvaluator> @ 14d5ed160

FSetRotationCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FSetRotationCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FSetRotationCameraNodeEvaluator *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x30,8);
  *(undefined4 *)((longlong)&pFVar1->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&pFVar1->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 7) = 0;
  pFVar1->_padding_ = 7;
  *(undefined4 *)&(pFVar1->RotationReader).field_0xc = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  *(bool *)&pFVar1->_padding_ = true;
  (pFVar1->RotationReader).DefaultValuePtr = (TRotator<double> *)0x0;
  pFVar1->_padding_ = (longlong)&___7FSetRotationCameraNodeEvaluator_Cameras_UE__6B_;
  (pFVar1->RotationReader).VariableID.Value = 0xffffffff;
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FSimpleBlendCameraDebugBlock> @ 14d5ed1e0

FSimpleBlendCameraDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FSimpleBlendCameraDebugBlock>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this)

{
  FSimpleBlendCameraDebugBlock *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x30,8);
  *(undefined8 *)&pFVar1->BlendFactor = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = (longlong)&___7FSimpleBlendCameraDebugBlock_Cameras_UE__6B_;
  RegisterInitializedObject(this,(FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FSmoothBlendCameraNodeEvaluator> @ 14d5ed240

FSmoothBlendCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FSmoothBlendCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FSimpleFixedTimeBlendCameraNodeEvaluator *this_00;
  
  this_00 = BuildObjectUninitialized(this,0x40,8);
  this_00->_padding_ = 0;
  this_00->_padding_ = 0;
  this_00->_padding_ = 0;
  this_00->_padding_ = 0;
  this_00->_padding_ = 0;
  this_00->_padding_ = 0;
  this_00->_padding_ = 0;
  this_00->TotalTime = 0.0;
  this_00->CurrentTime = 0.0;
  FSimpleFixedTimeBlendCameraNodeEvaluator::FSimpleFixedTimeBlendCameraNodeEvaluator(this_00);
  this_00->_padding_ = (longlong)&___7FSmoothBlendCameraNodeEvaluator_Cameras_UE__6B_;
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)this_00);
  return (FSmoothBlendCameraNodeEvaluator *)this_00;
}

// BuildObject<UE::Cameras::FSplineFieldOfViewCameraNodeEvaluator> @ 14d5ed2b0

FSplineFieldOfViewCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FSplineFieldOfViewCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FSplineFieldOfViewCameraNodeEvaluator *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x50,8);
  *(undefined4 *)((longlong)&pFVar1->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&pFVar1->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 7) = 0;
  pFVar1->_padding_ = 7;
  *(undefined4 *)&(pFVar1->SplineInputReader).field_0xc = 0;
  *(undefined4 *)&pFVar1->field_0x49 = 0;
  *(undefined2 *)&pFVar1->field_0x4d = 0;
  pFVar1->field_0x4f = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  *(bool *)&pFVar1->_padding_ = true;
  (pFVar1->SplineInputReader).DefaultValuePtr = (float *)0x0;
  (pFVar1->FieldOfViewSpline).CompressedKeys.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (pFVar1->FieldOfViewSpline).CompressedKeys.ArrayNum = 0;
  (pFVar1->FieldOfViewSpline).CompressedKeys.ArrayMax = 0;
  pFVar1->bHasAnyValues = false;
  pFVar1->_padding_ = (longlong)&___7FSplineFieldOfViewCameraNodeEvaluator_Cameras_UE__6B_;
  (pFVar1->SplineInputReader).VariableID.Value = 0xffffffff;
  (pFVar1->FieldOfViewSpline).CompressionFormat = '\0';
  (pFVar1->FieldOfViewSpline).KeyTimeCompressionFormat = '\x01';
  (pFVar1->FieldOfViewSpline).PreInfinityExtrap = '\x05';
  (pFVar1->FieldOfViewSpline).PostInfinityExtrap = '\x05';
  (pFVar1->FieldOfViewSpline).ConstantValueNumKeys = (TConstantValueNumKeys)0x0;
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FSplineOffsetCameraNodeEvaluator> @ 14d5ed340

FSplineOffsetCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FSplineOffsetCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FSplineOffsetCameraNodeEvaluator *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,200,8);
  memset(pFVar1,0,200);
  pFVar1 = FSplineOffsetCameraNodeEvaluator::FSplineOffsetCameraNodeEvaluator(pFVar1);
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FSplineOrbitCameraDebugBlock> @ 14d5ed3a0

FSplineOrbitCameraDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FSplineOrbitCameraDebugBlock>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FSplineOrbitCameraDebugBlock *pFVar4;
  
  pFVar4 = BuildObjectUninitialized(this,0xf0,0x10);
  memset(&pFVar4->OrbitYawPitch,0,200);
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar4->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar4->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar4->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar4->_padding_ = 0;
  pFVar4->_padding_ = (longlong)&___7FSplineOrbitCameraDebugBlock_Cameras_UE__6B_;
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[3];
  (pFVar4->PivotTransform).Rotation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float0001.m128_f32[0];
  (pFVar4->PivotTransform).Rotation.XY.m128d_f64[1] = (double)fVar1;
  (pFVar4->PivotTransform).Rotation.ZW.m128d_f64[0] = (double)fVar2;
  (pFVar4->PivotTransform).Rotation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::FloatZero.m128_f32[1];
  fVar2 = GlobalVectorConstants::FloatZero.m128_f32[2];
  fVar3 = GlobalVectorConstants::FloatZero.m128_f32[3];
  (pFVar4->PivotTransform).Translation.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  (pFVar4->PivotTransform).Translation.XY.m128d_f64[1] = (double)fVar1;
  (pFVar4->PivotTransform).Translation.ZW.m128d_f64[0] = (double)fVar2;
  (pFVar4->PivotTransform).Translation.ZW.m128d_f64[1] = (double)fVar3;
  fVar1 = GlobalVectorConstants::Float1110.m128_f32[1];
  fVar2 = GlobalVectorConstants::Float1110.m128_f32[2];
  fVar3 = GlobalVectorConstants::Float1110.m128_f32[3];
  (pFVar4->PivotTransform).Scale3D.XY.m128d_f64[0] =
       (double)GlobalVectorConstants::Float1110.m128_f32[0];
  (pFVar4->PivotTransform).Scale3D.XY.m128d_f64[1] = (double)fVar1;
  (pFVar4->PivotTransform).Scale3D.ZW.m128d_f64[0] = (double)fVar2;
  (pFVar4->PivotTransform).Scale3D.ZW.m128d_f64[1] = (double)fVar3;
  (pFVar4->WeakSplineOrbitNode).WeakPtr = (FWeakObjectPtr)0x0;
  RegisterInitializedObject(this,(FCameraDebugBlock *)pFVar4);
  return pFVar4;
}

// BuildObject<UE::Cameras::FSplineOrbitCameraNodeEvaluator> @ 14d5ed470

FSplineOrbitCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FSplineOrbitCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FSplineOrbitCameraNodeEvaluator *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x1e0,0x10);
  memset(pFVar1,0,0x1e0);
  pFVar1 = FSplineOrbitCameraNodeEvaluator::FSplineOrbitCameraNodeEvaluator(pFVar1);
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FTargetRayCastCameraDebugBlock> @ 14d5ed4d0

FTargetRayCastCameraDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FTargetRayCastCameraDebugBlock>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this)

{
  FTargetRayCastCameraDebugBlock *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x60,8);
  (pFVar1->HitResultLocation).field0_0x0._s_0.X = 0.0;
  (pFVar1->HitResultLocation).field0_0x0._s_0.Y = 0.0;
  (pFVar1->HitResultLocation).field0_0x0._s_0.Z = 0.0;
  pFVar1->HitResultDistance = 0.0;
  *(undefined8 *)&pFVar1->bGotHitResult = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (pFVar1->HitResultName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->HitResultName).Data.ArrayNum = 0;
  (pFVar1->HitResultName).Data.ArrayMax = 0;
  pFVar1->_padding_ = (longlong)&___7FTargetRayCastCameraDebugBlock_Cameras_UE__6B_;
  RegisterInitializedObject(this,(FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FTargetRayCastCameraNodeEvaluator> @ 14d5ed550

FTargetRayCastCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FTargetRayCastCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FTargetRayCastCameraNodeEvaluator *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x68,8);
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  pFVar1->_padding_ = 0;
  (pFVar1->AutoFocusReader).DefaultValuePtr = (bool *)0x0;
  *(undefined8 *)&(pFVar1->AutoFocusReader).VariableID = 0;
  pFVar1->LastHitResultDistance = 0.0;
  (pFVar1->LastHitResultLocation).field0_0x0._s_0.X = 0.0;
  (pFVar1->LastHitResultLocation).field0_0x0._s_0.Y = 0.0;
  (pFVar1->LastHitResultLocation).field0_0x0._s_0.Z = 0.0;
  (pFVar1->LastHitResultName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->LastHitResultName).Data.ArrayNum = 0;
  (pFVar1->LastHitResultName).Data.ArrayMax = 0;
  *(undefined8 *)&pFVar1->bGotLastHitResult = 0;
  pFVar1->_padding_ = (longlong)&___7FTargetRayCastCameraNodeEvaluator_Cameras_UE__6B_;
  (pFVar1->AutoFocusReader).DefaultValuePtr = (bool *)0x0;
  (pFVar1->LastHitResultName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->LastHitResultName).Data.ArrayNum = 0;
  (pFVar1->LastHitResultName).Data.ArrayMax = 0;
  pFVar1->LastHitResultDistance = 1000.0;
  *(bool *)&pFVar1->_padding_ = true;
  *(ECameraNodeEvaluatorFlags *)&pFVar1->_padding_ = Default;
  (pFVar1->AutoFocusReader).VariableID.Value = 0xffffffff;
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FViewTargetTransitionParamsBlendCameraNodeEvaluator> @ 14d5ed5f0

FViewTargetTransitionParamsBlendCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FViewTargetTransitionParamsBlendCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FViewTargetTransitionParamsBlendCameraNodeEvaluator *this_00;
  
  this_00 = BuildObjectUninitialized(this,0x40,8);
  *(undefined4 *)((longlong)&this_00->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&this_00->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&this_00->_padding_ + 7) = 0;
  this_00->_padding_ = 7;
  *(undefined4 *)((longlong)&this_00->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this_00->_padding_ + 6) = 0;
  *(undefined2 *)&this_00->field_0x3e = 0;
  (((TObjectPtr<UCameraNode_const_> *)&this_00->_padding_)->field0_0x0).DebugPtr =
       (UCameraNode *)0x0;
  *(bool *)&this_00->_padding_ = true;
  this_00->_padding_ = (longlong)&___7FSimpleBlendCameraNodeEvaluator_Cameras_UE__6B_;
  this_00->_padding_ = 0;
  *(undefined4 *)&this_00->_padding_ = 0xffffffff;
  *(undefined4 *)&this_00->_padding_ = 0;
  *(undefined2 *)((longlong)&this_00->_padding_ + 4) = 0;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this_00,NeedsSerialize);
  this_00->CurrentTime = 0.0;
  this_00->_padding_ =
       (longlong)&___7FViewTargetTransitionParamsBlendCameraNodeEvaluator_Cameras_UE__6B_;
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)this_00);
  return this_00;
}

// BuildObject<UE::Cameras::FAutoRotateInput2DCameraDebugBlock> @ 14d64d860

FAutoRotateInput2DCameraDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FAutoRotateInput2DCameraDebugBlock>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this)

{
  FAutoRotateInput2DCameraDebugBlock *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x48,8);
  pFVar1->RemainingWaitTime = 0.0;
  pFVar1->InterpolationFactor = 0.0;
  pFVar1->InterpolationTarget = 0.0;
  *(undefined8 *)&pFVar1->bIsAutoRotating = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = (longlong)&___7FAutoRotateInput2DCameraDebugBlock_Cameras_UE__6B_;
  RegisterInitializedObject(this,(FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FAutoRotateInput2DCameraNodeEvaluator> @ 14d64d8d0

FAutoRotateInput2DCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FAutoRotateInput2DCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FAutoRotateInput2DCameraNodeEvaluator *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x108,8);
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  *(bool *)&pFVar1->_padding_ = true;
  *(ECameraNodeEvaluatorFlags *)&pFVar1->_padding_ = Default;
  (pFVar1->WaitTimeReader).DefaultValuePtr = (float *)0x0;
  (pFVar1->DeactivationThresholdReader).DefaultValuePtr = (float *)0x0;
  (pFVar1->FreezeControlRotationReader).DefaultValuePtr = (bool *)0x0;
  (pFVar1->EnableAutoRotateReader).DefaultValuePtr = (bool *)0x0;
  (pFVar1->AutoRotateYawReader).DefaultValuePtr = (bool *)0x0;
  (pFVar1->AutoRotatePitchReader).DefaultValuePtr = (bool *)0x0;
  (pFVar1->Interpolator).Ptr = (TCameraValueInterpolator<double> *)0x0;
  pFVar1->InputNodeEvaluator = (FInput2DCameraNodeEvaluator *)0x0;
  pFVar1->RemainingWaitTime = 0.0;
  pFVar1->bIsAutoRotating = false;
  pFVar1->_padding_ = (longlong)&___7FAutoRotateInput2DCameraNodeEvaluator_Cameras_UE__6B_;
  (pFVar1->DirectionVectorReader).VariableID.Value = 0xffffffff;
  (pFVar1->WaitTimeReader).VariableID.Value = 0xffffffff;
  (pFVar1->DeactivationThresholdReader).VariableID.Value = 0xffffffff;
  (pFVar1->FreezeControlRotationReader).VariableID.Value = 0xffffffff;
  (pFVar1->EnableAutoRotateReader).VariableID.Value = 0xffffffff;
  (pFVar1->AutoRotateYawReader).VariableID.Value = 0xffffffff;
  (pFVar1->AutoRotatePitchReader).VariableID.Value = 0xffffffff;
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FBlueprintCameraDebugBlock> @ 14d64d9a0

FBlueprintCameraDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FBlueprintCameraDebugBlock>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this)

{
  FBlueprintCameraDebugBlock *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x38,8);
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (pFVar1->BlueprintEvaluatorName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->BlueprintEvaluatorName).Data.ArrayNum = 0;
  (pFVar1->BlueprintEvaluatorName).Data.ArrayMax = 0;
  pFVar1->_padding_ = (longlong)&___7FBlueprintCameraDebugBlock_Cameras_UE__6B_;
  RegisterInitializedObject(this,(FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FBlueprintCameraNodeEvaluator> @ 14d64da10

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FBlueprintCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FBlueprintCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FBlueprintCameraNodeEvaluator *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x28,8);
  *(undefined4 *)((longlong)&pFVar1->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&pFVar1->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 7) = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  pFVar1->_padding_ = 7;
  *(bool *)&pFVar1->_padding_ = true;
  (pFVar1->EvaluatorBlueprint).field0_0x0.DebugPtr = (UBlueprintCameraNodeEvaluator *)0x0;
  pFVar1->_padding_ = (longlong)&___7FBlueprintCameraNodeEvaluator_Cameras_UE__6B_;
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FCameraRigInput1DSlotEvaluator> @ 14d64da80

FCameraRigInput1DSlotEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FCameraRigInput1DSlotEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FCameraRigInput1DSlotEvaluator *this_00;
  
  this_00 = BuildObjectUninitialized(this,0x58,8);
  (((TObjectPtr<UCameraNode_const_> *)&this_00->_padding_)->field0_0x0).DebugPtr =
       (UCameraNode *)0x0;
  *(bool *)&this_00->_padding_ = true;
  *(ECameraNodeEvaluatorFlags *)&this_00->_padding_ = Default;
  (this_00->RevertAxisReader).DefaultValuePtr = (bool *)0x0;
  (this_00->SpeedReader).DefaultValuePtr = (double *)0x0;
  this_00->DeltaInputValue = 0.0;
  this_00->_padding_ = (longlong)&___7FCameraRigInput1DSlotEvaluator_Cameras_UE__6B_;
  (this_00->RevertAxisReader).VariableID.Value = 0xffffffff;
  (this_00->SpeedReader).VariableID.Value = 0xffffffff;
  this_00->bIsAccumulated = true;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this_00,Default);
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)this_00);
  return this_00;
}

// BuildObject<UE::Cameras::FCameraRigInput2DSlotEvaluator> @ 14d64db10

FCameraRigInput2DSlotEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FCameraRigInput2DSlotEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FCameraRigInput2DSlotEvaluator *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x78,8);
  pFVar1 = FCameraRigInput2DSlotEvaluator::FCameraRigInput2DSlotEvaluator(pFVar1);
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FCameraShakeCameraNodeEvaluator> @ 14d64db60

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraShakeCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FCameraShakeCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FCameraShakeCameraNodeEvaluator *this_00;
  
  this_00 = BuildObjectUninitialized(this,0x40,8);
  (((TObjectPtr<UCameraNode_const_> *)&this_00->_padding_)->field0_0x0).DebugPtr =
       (UCameraNode *)0x0;
  *(bool *)&this_00->_padding_ = true;
  *(ECameraNodeEvaluatorFlags *)&this_00->_padding_ = Default;
  this_00->CameraShakeRootEvaluator = (FShakeCameraNodeEvaluator *)0x0;
  (this_00->CameraShakeService).Object = (FCameraShakeService *)0x0;
  (this_00->CameraShakeService).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this_00->_padding_ = (longlong)&___7FCameraShakeCameraNodeEvaluator_Cameras_UE__6B_;
  this_00->EvaluationMode = VisualLayer;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this_00,NeedsParameterUpdate);
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)this_00);
  return this_00;
}

// BuildObject<UE::Cameras::FCameraShakeServiceCameraNodeEvaluator> @ 14d64dbe0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraShakeServiceCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FCameraShakeServiceCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FCameraShakeServiceCameraNodeEvaluator *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x58,8);
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  pFVar1->_padding_ = 0;
  pFVar1->OwningEvaluator = (FCameraSystemEvaluator *)0x0;
  (pFVar1->ShakeContext).Object = (FCameraEvaluationContext *)0x0;
  (pFVar1->ShakeContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar1->BlendedParameters = (FCameraVariableTable *)0x0;
  (pFVar1->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->Entries).ArrayNum = 0;
  (pFVar1->Entries).ArrayMax = 0;
  *(undefined8 *)&pFVar1->NextEntryID = 0;
  pFVar1->_padding_ = (longlong)&___7FCameraShakeServiceCameraNodeEvaluator_Cameras_UE__6B_;
  pFVar1->OwningEvaluator = (FCameraSystemEvaluator *)0x0;
  (pFVar1->ShakeContext).Object = (FCameraEvaluationContext *)0x0;
  (pFVar1->ShakeContext).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pFVar1->BlendedParameters = (FCameraVariableTable *)0x0;
  (pFVar1->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->Entries).ArrayNum = 0;
  (pFVar1->Entries).ArrayMax = 0;
  pFVar1->NextEntryID = 0;
  *(bool *)&pFVar1->_padding_ = true;
  *(ECameraNodeEvaluatorFlags *)&pFVar1->_padding_ = Default;
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FCompositeShakeCameraNodeEvaluator> @ 14d64dc70

FCompositeShakeCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FCompositeShakeCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FCompositeShakeCameraNodeEvaluator *this_00;
  
  this_00 = BuildObjectUninitialized(this,0x30,8);
  (((TObjectPtr<UCameraNode_const_> *)&this_00->_padding_)->field0_0x0).DebugPtr =
       (UCameraNode *)0x0;
  *(bool *)&this_00->_padding_ = true;
  *(ECameraNodeEvaluatorFlags *)&this_00->_padding_ = Default;
  (this_00->ShakeEvaluators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->ShakeEvaluators).ArrayNum = 0;
  (this_00->ShakeEvaluators).ArrayMax = 0;
  this_00->_padding_ = (longlong)&___7FCompositeShakeCameraNodeEvaluator_Cameras_UE__6B_;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this_00,None);
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)this_00);
  return this_00;
}

// BuildObject<UE::Cameras::FDollyFramingCameraDebugBlock> @ 14d64dce0

FDollyFramingCameraDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FDollyFramingCameraDebugBlock>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this)

{
  FDollyFramingCameraDebugBlock *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x78,8);
  (pFVar1->DollyPosition).field0_0x0._s_0.X = 0.0;
  (pFVar1->DollyPosition).field0_0x0._s_0.Y = 0.0;
  (pFVar1->DollyCorrection).field0_0x0._s_0.X = 0.0;
  (pFVar1->DollyCorrection).field0_0x0._s_0.Y = 0.0;
  (pFVar1->WorldTarget).field0_0x0._s_0.X = 0.0;
  (pFVar1->WorldTarget).field0_0x0._s_0.Y = 0.0;
  (pFVar1->WorldTarget).field0_0x0._s_0.Z = 0.0;
  (pFVar1->NextWorldTarget).field0_0x0._s_0.X = 0.0;
  (pFVar1->NextWorldTarget).field0_0x0._s_0.Y = 0.0;
  (pFVar1->NextWorldTarget).field0_0x0._s_0.Z = 0.0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = (longlong)&___7FDollyFramingCameraDebugBlock_Cameras_UE__6B_;
  RegisterInitializedObject(this,(FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FDollyFramingCameraNodeEvaluator> @ 14d64dd60

FDollyFramingCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FDollyFramingCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FDollyFramingCameraNodeEvaluator *this_00;
  
  this_00 = BuildObjectUninitialized(this,0x6b0,0x10);
  memset(this_00,0,0x6b0);
  FBaseFramingCameraNodeEvaluator::FBaseFramingCameraNodeEvaluator
            ((FBaseFramingCameraNodeEvaluator *)this_00);
  *(undefined ***)this_00 = &___7FDollyFramingCameraNodeEvaluator_Cameras_UE__6B_;
  (this_00->CanMoveLaterallyReader).VariableID.Value = 0xffffffff;
  (this_00->CanMoveLaterallyReader).DefaultValuePtr = (bool *)0x0;
  (this_00->CanMoveVerticallyReader).DefaultValuePtr = (bool *)0x0;
  (this_00->CanMoveVerticallyReader).VariableID.Value = 0xffffffff;
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)this_00);
  return this_00;
}

// BuildObject<UE::Cameras::FDrivenControlRotationCameraNodeEvaluator> @ 14d64ddf0

FDrivenControlRotationCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FDrivenControlRotationCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  double dVar1;
  FDrivenControlRotationCameraNodeEvaluator *this_00;
  
  this_00 = BuildObjectUninitialized(this,0x78,8);
  (((TObjectPtr<UCameraNode_const_> *)&this_00->_padding_)->field0_0x0).DebugPtr =
       (UCameraNode *)0x0;
  (this_00->HelperService).Object = (FDrivenControlRotationHelperService *)0x0;
  (this_00->HelperService).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(bool *)&this_00->_padding_ = true;
  *(ECameraNodeEvaluatorFlags *)&this_00->_padding_ = Default;
  this_00->_padding_ = (longlong)&___7FDrivenControlRotationCameraNodeEvaluator_Cameras_UE__6B_;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this_00->LastControlRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this_00->LastControlRotation).Yaw = dVar1;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this_00->bLastWasActiveCameraRig = false;
  (this_00->LastControlRotation).Roll = dVar1;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags
            ((FCameraNodeEvaluator *)this_00,SupportsOperations|NeedsSerialize);
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)this_00);
  return this_00;
}

// BuildObject<UE::Cameras::FDrivenControlRotationDebugBlock> @ 14d64de80

FDrivenControlRotationDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FDrivenControlRotationDebugBlock>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this)

{
  FDrivenControlRotationDebugBlock *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x58,8);
  (pFVar1->InputValue).field0_0x0._s_0.X = 0.0;
  (pFVar1->InputValue).field0_0x0._s_0.Y = 0.0;
  (pFVar1->LastDeltaControlRotation).Pitch = 0.0;
  (pFVar1->LastDeltaControlRotation).Yaw = 0.0;
  (pFVar1->LastDeltaControlRotation).Roll = 0.0;
  *(undefined8 *)&pFVar1->bLastWasActiveCameraRig = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = (longlong)&___7FDrivenControlRotationDebugBlock_Cameras_UE__6B_;
  RegisterInitializedObject(this,(FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FDrivenControlRotationHelperDebugBlock> @ 14d64def0

FDrivenControlRotationHelperDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FDrivenControlRotationHelperDebugBlock>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this)

{
  FDrivenControlRotationHelperDebugBlock *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x58,8);
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (pFVar1->ContextNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->ContextNames).ArrayNum = 0;
  (pFVar1->ContextNames).ArrayMax = 0;
  (pFVar1->CachedControlRotations).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->CachedControlRotations).ArrayNum = 0;
  (pFVar1->CachedControlRotations).ArrayMax = 0;
  (pFVar1->MonitoringRequests).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->MonitoringRequests).ArrayNum = 0;
  (pFVar1->MonitoringRequests).ArrayMax = 0;
  pFVar1->_padding_ = (longlong)&___7FDrivenControlRotationHelperDebugBlock_Cameras_UE__6B_;
  RegisterInitializedObject(this,(FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FEnvelopeShakeCameraNodeEvaluator> @ 14d64df70

FEnvelopeShakeCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FEnvelopeShakeCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FEnvelopeShakeCameraNodeEvaluator *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x38,8);
  *(undefined4 *)((longlong)&pFVar1->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&pFVar1->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 7) = 0;
  pFVar1->_padding_ = 7;
  pFVar1->EaseInTime = 0.0;
  pFVar1->EaseOutTime = 0.0;
  pFVar1->TotalTime = 0.0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  *(bool *)&pFVar1->_padding_ = true;
  pFVar1->ShakeEvaluator = (FShakeCameraNodeEvaluator *)0x0;
  pFVar1->CurrentTime = 0.0;
  pFVar1->_padding_ = (longlong)&___7FEnvelopeShakeCameraNodeEvaluator_Cameras_UE__6B_;
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FInputAccumulator2DCameraNodeEvaluator> @ 14d64dff0

FInputAccumulator2DCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FInputAccumulator2DCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FInputAccumulator2DCameraNodeEvaluator *this_00;
  
  this_00 = BuildObjectUninitialized(this,0x80,8);
  FCameraRigInput2DSlotEvaluator::FCameraRigInput2DSlotEvaluator
            ((FCameraRigInput2DSlotEvaluator *)this_00);
  this_00->InputSlotEvaluator = (FInput2DCameraNodeEvaluator *)0x0;
  this_00->_padding_ = (longlong)&___7FInputAccumulator2DCameraNodeEvaluator_Cameras_UE__6B_;
  *(bool *)&this_00->_padding_ = true;
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)this_00);
  return this_00;
}

// BuildObject<UE::Cameras::FInputAxisBinding2DCameraNodeEvaluator> @ 14d64e050

FInputAxisBinding2DCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FInputAxisBinding2DCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FInputAxisBinding2DCameraNodeEvaluator *this_00;
  
  this_00 = BuildObjectUninitialized(this,0xa0,8);
  memset(this_00,0,0xa0);
  FCameraRigInput2DSlotEvaluator::FCameraRigInput2DSlotEvaluator
            ((FCameraRigInput2DSlotEvaluator *)this_00);
  this_00->_padding_ = (longlong)&___7FInputAxisBinding2DCameraNodeEvaluator_Cameras_UE__6B_;
  (this_00->MultiplierReader).VariableID.Value = 0xffffffff;
  (this_00->MultiplierReader).DefaultValuePtr = (TVector2<double> *)0x0;
  (this_00->InputComponent).field0_0x0.DebugPtr = (UEnhancedInputComponent *)0x0;
  (this_00->AxisValueBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_00->AxisValueBindings).ArrayNum = 0;
  (this_00->AxisValueBindings).ArrayMax = 0;
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)this_00);
  return this_00;
}

// BuildObject<UE::Cameras::FOrientationInitializationDebugBlock,UE::Cameras::FOrientationInitializationService_&> @ 14d64e0e0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FOrientationInitializationDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FOrientationInitializationDebugBlock,UE::Cameras::FOrientationInitializationService_&>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this,
          FOrientationInitializationService *param_1)

{
  int *piVar1;
  int iVar2;
  double dVar3;
  undefined8 uVar4;
  FOrientationInitializationDebugBlock *pFVar5;
  ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo> _Dst;
  ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo> _Src;
  
  pFVar5 = BuildObjectUninitialized(this,0x230,8);
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar5->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar5->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar5->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar5->_padding_ = 0;
  (pFVar5->AimDebugInfo).Iterations.AllocatorInstance.SecondaryData =
       (ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>)0x0;
  pFVar5->_padding_ = (longlong)&___7FOrientationInitializationDebugBlock_Cameras_UE__6B_;
  (pFVar5->AimDebugInfo).Iterations.ArrayNum = 0;
  piVar1 = &(pFVar5->AimDebugInfo).Iterations.ArrayMax;
  *piVar1 = 4;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (pFVar5->AimDebugInfo).DesiredTarget.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (pFVar5->AimDebugInfo).DesiredTarget.field0_0x0._s_0.Y = (double)uVar4;
  (pFVar5->AimDebugInfo).DesiredTarget.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (pFVar5->AimDebugInfo).bSucceeded = false;
  dVar3 = (param_1->DebugLastEvaluatedTarget).field0_0x0._s_0.Y;
  (pFVar5->LastEvaluatedTarget).field0_0x0._s_0.X =
       (param_1->DebugLastEvaluatedTarget).field0_0x0._s_0.X;
  (pFVar5->LastEvaluatedTarget).field0_0x0._s_0.Y = dVar3;
  (pFVar5->LastEvaluatedTarget).field0_0x0._s_0.Z =
       (param_1->DebugLastEvaluatedTarget).field0_0x0._s_0.Z;
  if (pFVar5 != (FOrientationInitializationDebugBlock *)
                &(param_1->YawPitchPreservationOverride).bIsSet) {
    iVar2 = (param_1->LastAimDebugInfo).Iterations.ArrayNum;
    _Src = (param_1->LastAimDebugInfo).Iterations.AllocatorInstance.SecondaryData;
    (pFVar5->AimDebugInfo).Iterations.ArrayNum = iVar2;
    if (_Src == (ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>)0x0) {
      _Src = (ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>)&param_1->LastAimDebugInfo
      ;
    }
    Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>_>
              (0x70,8,iVar2,4,
               (ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo> *)&pFVar5->AimDebugInfo,
               iVar2,piVar1);
    _Dst = (pFVar5->AimDebugInfo).Iterations.AllocatorInstance.SecondaryData;
    if (iVar2 != 0) {
      if (_Dst == (ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>)0x0) {
        _Dst = (ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo>)&pFVar5->AimDebugInfo;
      }
      memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 * 0x70);
    }
  }
  dVar3 = (param_1->LastAimDebugInfo).DesiredTarget.field0_0x0._s_0.Y;
  (pFVar5->AimDebugInfo).DesiredTarget.field0_0x0._s_0.X =
       (param_1->LastAimDebugInfo).DesiredTarget.field0_0x0._s_0.X;
  (pFVar5->AimDebugInfo).DesiredTarget.field0_0x0._s_0.Y = dVar3;
  (pFVar5->AimDebugInfo).DesiredTarget.field0_0x0._s_0.Z =
       (param_1->LastAimDebugInfo).DesiredTarget.field0_0x0._s_0.Z;
  (pFVar5->AimDebugInfo).bSucceeded = (param_1->LastAimDebugInfo).bSucceeded;
  RegisterInitializedObject(this,(FCameraDebugBlock *)pFVar5);
  return pFVar5;
}

// BuildObject<UE::Cameras::FPanningFramingCameraDebugBlock> @ 14d64e250

FPanningFramingCameraDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FPanningFramingCameraDebugBlock>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this)

{
  FPanningFramingCameraDebugBlock *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x58,8);
  (pFVar1->PanningRotation).Pitch = 0.0;
  (pFVar1->PanningRotation).Yaw = 0.0;
  (pFVar1->PanningRotation).Roll = 0.0;
  (pFVar1->PanningCorrection).Pitch = 0.0;
  (pFVar1->PanningCorrection).Yaw = 0.0;
  (pFVar1->PanningCorrection).Roll = 0.0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = (longlong)&___7FPanningFramingCameraDebugBlock_Cameras_UE__6B_;
  RegisterInitializedObject(this,(FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FPanningFramingCameraNodeEvaluator> @ 14d64e2c0

FPanningFramingCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FPanningFramingCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FPanningFramingCameraNodeEvaluator *this_00;
  
  this_00 = BuildObjectUninitialized(this,0x6a0,0x10);
  memset(this_00,0,0x6a0);
  FBaseFramingCameraNodeEvaluator::FBaseFramingCameraNodeEvaluator
            ((FBaseFramingCameraNodeEvaluator *)this_00);
  this_00->_padding_ = (longlong)&___7FPanningFramingCameraNodeEvaluator_Cameras_UE__6B_;
  (this_00->CanPanLaterallyReader).VariableID.Value = 0xffffffff;
  (this_00->CanPanLaterallyReader).DefaultValuePtr = (bool *)0x0;
  (this_00->CanPanVerticallyReader).DefaultValuePtr = (bool *)0x0;
  (this_00->CanPanVerticallyReader).VariableID.Value = 0xffffffff;
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)this_00);
  return this_00;
}

// BuildObject<UE::Cameras::FPerlinNoiseLocationShakeCameraNodeEvaluator> @ 14d64e350

FPerlinNoiseLocationShakeCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FPerlinNoiseLocationShakeCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FPerlinNoiseLocationShakeCameraNodeEvaluator *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x170,8);
  memset(pFVar1,0,0x170);
  pFVar1 = FPerlinNoiseLocationShakeCameraNodeEvaluator::
           FPerlinNoiseLocationShakeCameraNodeEvaluator(pFVar1);
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FPerlinNoiseLocationShakeDebugBlock> @ 14d64e3b0

FPerlinNoiseLocationShakeDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FPerlinNoiseLocationShakeDebugBlock>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this)

{
  FPerlinNoiseLocationShakeDebugBlock *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x40,8);
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  (pFVar1->NoiseValues).CurrentMinValue = 0.0;
  (pFVar1->NoiseValues).CurrentMaxValue = 0.0;
  (pFVar1->NoiseValues).Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->NoiseValues).Entries.ArrayNum = 0;
  (pFVar1->NoiseValues).Entries.ArrayMax = 0;
  pFVar1 = FPerlinNoiseLocationShakeDebugBlock::FPerlinNoiseLocationShakeDebugBlock(pFVar1);
  RegisterInitializedObject(this,(FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FPerlinNoiseRotationShakeCameraNodeEvaluator> @ 14d64e410

FPerlinNoiseRotationShakeCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FPerlinNoiseRotationShakeCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FPerlinNoiseRotationShakeCameraNodeEvaluator *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x170,8);
  memset(pFVar1,0,0x170);
  pFVar1 = FPerlinNoiseRotationShakeCameraNodeEvaluator::
           FPerlinNoiseRotationShakeCameraNodeEvaluator(pFVar1);
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FPerlinNoiseRotationShakeDebugBlock> @ 14d64e470

FPerlinNoiseRotationShakeDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FPerlinNoiseRotationShakeDebugBlock>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this)

{
  FPerlinNoiseRotationShakeDebugBlock *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x40,8);
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  (pFVar1->NoiseValues).CurrentMinValue = 0.0;
  (pFVar1->NoiseValues).CurrentMaxValue = 0.0;
  (pFVar1->NoiseValues).Entries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->NoiseValues).Entries.ArrayNum = 0;
  (pFVar1->NoiseValues).Entries.ArrayMax = 0;
  pFVar1 = FPerlinNoiseRotationShakeDebugBlock::FPerlinNoiseRotationShakeDebugBlock(pFVar1);
  RegisterInitializedObject(this,(FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FPlayerControlRotationDebugBlock> @ 14d64e4d0

FPlayerControlRotationDebugBlock * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::
BuildObject<UE::Cameras::FPlayerControlRotationDebugBlock>
          (TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *this)

{
  FPlayerControlRotationDebugBlock *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x110,0x10);
  memset(pFVar1,0,0x110);
  pFVar1 = FPlayerControlRotationDebugBlock::FPlayerControlRotationDebugBlock(pFVar1);
  RegisterInitializedObject(this,(FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::FRawInputAxisBinding2DCameraNodeEvaluator> @ 14d64e530

FRawInputAxisBinding2DCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::FRawInputAxisBinding2DCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FRawInputAxisBinding2DCameraNodeEvaluator *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x58,8);
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = 0;
  (pFVar1->MultiplierReader).DefaultValuePtr = (TVector2<double> *)0x0;
  *(undefined8 *)&(pFVar1->MultiplierReader).VariableID = 0;
  (pFVar1->InputComponent).field0_0x0.DebugPtr = (UEnhancedInputComponent *)0x0;
  (pFVar1->AxisValueBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(bool *)&pFVar1->_padding_ = true;
  *(ECameraNodeEvaluatorFlags *)&pFVar1->_padding_ = Default;
  pFVar1->_padding_ = (longlong)&___7FRawInputAxisBinding2DCameraNodeEvaluator_Cameras_UE__6B_;
  (pFVar1->MultiplierReader).DefaultValuePtr = (TVector2<double> *)0x0;
  (pFVar1->InputComponent).field0_0x0.DebugPtr = (UEnhancedInputComponent *)0x0;
  (pFVar1->AxisValueBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->AxisValueBindings).ArrayNum = 0;
  (pFVar1->AxisValueBindings).ArrayMax = 0;
  (pFVar1->MultiplierReader).VariableID.Value = 0xffffffff;
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildObject<UE::Cameras::Test::FUpdateTrackerCameraNodeEvaluator> @ 14d64e5c0

FUpdateTrackerCameraNodeEvaluator * __thiscall
UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::
BuildObject<UE::Cameras::Test::FUpdateTrackerCameraNodeEvaluator>
          (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this)

{
  FUpdateTrackerCameraNodeEvaluator *pFVar1;
  
  pFVar1 = BuildObjectUninitialized(this,0x30,8);
  *(undefined4 *)((longlong)&pFVar1->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&pFVar1->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 7) = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  pFVar1->_padding_ = 7;
  *(bool *)&pFVar1->_padding_ = true;
  (pFVar1->ReceivedUpdates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->ReceivedUpdates).ArrayNum = 0;
  (pFVar1->ReceivedUpdates).ArrayMax = 0;
  pFVar1->_padding_ = (longlong)&___7FUpdateTrackerCameraNodeEvaluator_Test_Cameras_UE__6B_;
  RegisterInitializedObject(this,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// operator() @ 1505837b0

bool __thiscall
`UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::DestroyObject'::__l2::
<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_320692829896572708>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_320692829896572708>,
                       &`public:___cdecl_`protected:_void___cdecl_UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::DestroyObject(UE::Cameras::FCameraNodeEvaluator*___ptr64,unsigned_int)___ptr64'::`2'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

