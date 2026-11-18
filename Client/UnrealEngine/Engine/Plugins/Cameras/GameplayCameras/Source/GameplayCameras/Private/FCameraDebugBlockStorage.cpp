// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 45

// BuildDebugBlock<UE::Cameras::FBlendStackCameraDebugBlock> @ 14d538ae0

FBlendStackCameraDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::BuildDebugBlock<UE::Cameras::FBlendStackCameraDebugBlock>
          (FCameraDebugBlockStorage *this)

{
  FBlendStackCameraDebugBlock *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0x48,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildDebugBlock<UE::Cameras::FBlendStackEntryCameraDebugBlock> @ 14d538b50

FBlendStackEntryCameraDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::
BuildDebugBlock<UE::Cameras::FBlendStackEntryCameraDebugBlock>(FCameraDebugBlockStorage *this)

{
  FBlendStackEntryCameraDebugBlock *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0x58,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildDebugBlock<UE::Cameras::FBlendStackRootCameraDebugBlock> @ 14d538bd0

FBlendStackRootCameraDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::BuildDebugBlock<UE::Cameras::FBlendStackRootCameraDebugBlock>
          (FCameraDebugBlockStorage *this)

{
  FBlendStackRootCameraDebugBlock *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0x48,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildDebugBlock<UE::Cameras::FBlendStackSummaryCameraDebugBlock,UE::Cameras::FBlendStackCameraNodeEvaluator_&> @ 14d538c40

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FBlendStackSummaryCameraDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::
BuildDebugBlock<UE::Cameras::FBlendStackSummaryCameraDebugBlock,UE::Cameras::FBlendStackCameraNodeEvaluator_&>
          (FCameraDebugBlockStorage *this,FBlendStackCameraNodeEvaluator *param_1)

{
  bool bVar1;
  FBlendStackSummaryCameraDebugBlock *pFVar2;
  UClass *pUVar3;
  longlong lVar4;
  
  pFVar2 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0x38,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)pFVar2);
  return pFVar2;
}

// BuildDebugBlock<UE::Cameras::FCameraDebugBlock> @ 14d538cf0

FCameraDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::BuildDebugBlock<UE::Cameras::FCameraDebugBlock>
          (FCameraDebugBlockStorage *this)

{
  FCameraDebugBlock *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0x28,8);
  pFVar1->_padding_ = (longlong)&___7FCameraDebugBlock_Cameras_UE__6B_;
  (pFVar1->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->Attachments).ArrayNum = 0;
  (pFVar1->Attachments).ArrayMax = 0;
  (pFVar1->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->Children).ArrayNum = 0;
  (pFVar1->Children).ArrayMax = 0;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,pFVar1);
  return pFVar1;
}

// BuildDebugBlock<UE::Cameras::FCameraNodeEvaluationResultDebugBlock> @ 14d538d50

FCameraNodeEvaluationResultDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::
BuildDebugBlock<UE::Cameras::FCameraNodeEvaluationResultDebugBlock>(FCameraDebugBlockStorage *this)

{
  FCameraNodeEvaluationResultDebugBlock *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0x30,8);
  pFVar1 = FCameraNodeEvaluationResultDebugBlock::FCameraNodeEvaluationResultDebugBlock(pFVar1);
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildDebugBlock<UE::Cameras::FCameraNodeEvaluatorDebugBlock,TObjectPtr<UCameraNode_const_>_&> @ 14d538da0

FCameraNodeEvaluatorDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::
BuildDebugBlock<UE::Cameras::FCameraNodeEvaluatorDebugBlock,TObjectPtr<UCameraNode_const_>_&>
          (FCameraDebugBlockStorage *this,TObjectPtr<UCameraNode_const_> *param_1)

{
  FCameraNodeEvaluatorDebugBlock *pFVar1;
  UCameraNode *local_res10;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0x38,8);
  local_res10 = (param_1->field0_0x0).DebugPtr;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UCameraNode *)0x0)) {
    GC::MarkAsReachable((UObject *)local_res10);
  }
  pFVar1 = FCameraNodeEvaluatorDebugBlock::FCameraNodeEvaluatorDebugBlock
                     (pFVar1,(TObjectPtr<UCameraNode_const_>)&local_res10);
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildDebugBlock<UE::Cameras::FCameraPoseLocationTrailDebugBlock,UE::Cameras::FCameraNodeEvaluationResult_const_&> @ 14d538e20

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraPoseLocationTrailDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::
BuildDebugBlock<UE::Cameras::FCameraPoseLocationTrailDebugBlock,UE::Cameras::FCameraNodeEvaluationResult_const_&>
          (FCameraDebugBlockStorage *this,FCameraNodeEvaluationResult *param_1)

{
  FCameraPoseLocationTrailDebugBlock *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0x38,8);
  pFVar1 = FCameraPoseLocationTrailDebugBlock::FCameraPoseLocationTrailDebugBlock(pFVar1,param_1);
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildDebugBlock<UE::Cameras::FBlendStacksCameraDebugBlock> @ 14d57b820

FBlendStacksCameraDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::BuildDebugBlock<UE::Cameras::FBlendStacksCameraDebugBlock>
          (FCameraDebugBlockStorage *this)

{
  FBlendStacksCameraDebugBlock *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0x38,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildDebugBlock<UE::Cameras::FCameraDirectorDebugBlock> @ 14d57b890

FCameraDirectorDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::BuildDebugBlock<UE::Cameras::FCameraDirectorDebugBlock>
          (FCameraDebugBlockStorage *this)

{
  __m128d _Var1;
  FCameraDirectorDebugBlock *pFVar2;
  
  pFVar2 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0xd0,0x10);
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
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)pFVar2);
  return pFVar2;
}

// BuildDebugBlock<UE::Cameras::FCameraDirectorTreeDebugBlock> @ 14d57b990

FCameraDirectorTreeDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::BuildDebugBlock<UE::Cameras::FCameraDirectorTreeDebugBlock>
          (FCameraDebugBlockStorage *this)

{
  FCameraDebugBlock *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0x28,8);
  (pFVar1->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->Attachments).ArrayNum = 0;
  (pFVar1->Attachments).ArrayMax = 0;
  (pFVar1->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->Children).ArrayNum = 0;
  (pFVar1->Children).ArrayMax = 0;
  pFVar1->_padding_ = (longlong)&___7FCameraDirectorTreeDebugBlock_Cameras_UE__6B_;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,pFVar1);
  return (FCameraDirectorTreeDebugBlock *)pFVar1;
}

// BuildDebugBlock<UE::Cameras::FCameraEvaluationServiceDebugBlock,TSharedPtr<UE::Cameras::FCameraEvaluationService,1>_&> @ 14d57b9f0

FCameraEvaluationServiceDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::
BuildDebugBlock<UE::Cameras::FCameraEvaluationServiceDebugBlock,TSharedPtr<UE::Cameras::FCameraEvaluationService,1>_&>
          (FCameraDebugBlockStorage *this,
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
  FString FStack_48;
  FString FStack_38;
  
  pFVar8 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0x38,8);
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
    pFVar10 = ::FString::FString(&FStack_48,L"<no type info>");
  }
  else {
    pFVar10 = ::FName::ToString(&this_01->TypeName,&FStack_38);
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
    if (FStack_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_48.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar7) && (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)pFVar8);
  return pFVar8;
}

// BuildDebugBlock<UE::Cameras::FCameraPoseDebugBlock,FCameraPose_const_&> @ 14d57bb40

FCameraPoseDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::
BuildDebugBlock<UE::Cameras::FCameraPoseDebugBlock,FCameraPose_const_&>
          (FCameraDebugBlockStorage *this,FCameraPose *param_1)

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
  
  pFVar10 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                      ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,200,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)pFVar10);
  return pFVar10;
}

// BuildDebugBlock<UE::Cameras::FCameraRigJointsDebugBlock,UE::Cameras::FCameraRigJoints_const_&,UE::Cameras::FCameraVariableTable_const_&> @ 14d57bc20

FCameraRigJointsDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::
BuildDebugBlock<UE::Cameras::FCameraRigJointsDebugBlock,UE::Cameras::FCameraRigJoints_const_&,UE::Cameras::FCameraVariableTable_const_&>
          (FCameraDebugBlockStorage *this,FCameraRigJoints *param_1,FCameraVariableTable *param_2)

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
  
  pFVar4 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,200,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)pFVar4);
  return pFVar4;
}

// BuildDebugBlock<UE::Cameras::FCategoryTitleDebugBlock> @ 14d57bdc0

FCategoryTitleDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::BuildDebugBlock<UE::Cameras::FCategoryTitleDebugBlock>
          (FCameraDebugBlockStorage *this)

{
  FCategoryTitleDebugBlock *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0x50,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildDebugBlock<UE::Cameras::FCombinedCameraRigCameraDebugBlock> @ 14d57be40

FCombinedCameraRigCameraDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::
BuildDebugBlock<UE::Cameras::FCombinedCameraRigCameraDebugBlock>(FCameraDebugBlockStorage *this)

{
  FCombinedCameraRigCameraDebugBlock *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0x40,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildDebugBlock<UE::Cameras::FContextDataTableDebugBlock,UE::Cameras::FCameraContextDataTable_const_&> @ 14d57bf40

FContextDataTableDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::
BuildDebugBlock<UE::Cameras::FContextDataTableDebugBlock,UE::Cameras::FCameraContextDataTable_const_&>
          (FCameraDebugBlockStorage *this,FCameraContextDataTable *param_1)

{
  FContextDataTableDebugBlock *this_00;
  
  this_00 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                      ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0x48,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)this_00);
  return this_00;
}

// BuildDebugBlock<UE::Cameras::FPlayerControllersDebugBlock> @ 14d57bfd0

FPlayerControllersDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::BuildDebugBlock<UE::Cameras::FPlayerControllersDebugBlock>
          (FCameraDebugBlockStorage *this)

{
  FPlayerControllersDebugBlock *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0x40,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildDebugBlock<UE::Cameras::FPostProcessSettingsDebugBlock,UE::Cameras::FPostProcessSettingsCollection_const_&> @ 14d57c0c0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FPostProcessSettingsDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::
BuildDebugBlock<UE::Cameras::FPostProcessSettingsDebugBlock,UE::Cameras::FPostProcessSettingsCollection_const_&>
          (FCameraDebugBlockStorage *this,FPostProcessSettingsCollection *param_1)

{
  FPostProcessSettingsDebugBlock *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0x7a0,0x10);
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = (longlong)&___7FPostProcessSettingsDebugBlock_Cameras_UE__6B_;
  FPostProcessSettings::FPostProcessSettings
            (&(pFVar1->PostProcessSettings).PostProcessSettings,&param_1->PostProcessSettings);
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildDebugBlock<UE::Cameras::FRootCameraDebugBlock> @ 14d57c140

FRootCameraDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::BuildDebugBlock<UE::Cameras::FRootCameraDebugBlock>
          (FCameraDebugBlockStorage *this)

{
  FRootCameraDebugBlock *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0x30,8);
  *(undefined4 *)&pFVar1->field_0x2c = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = (longlong)&___7FRootCameraDebugBlock_Cameras_UE__6B_;
  (pFVar1->DebugID).Value = -1;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildDebugBlock<UE::Cameras::FVariableTableDebugBlock,UE::Cameras::FCameraVariableTable_const_&> @ 14d57c240

FVariableTableDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::
BuildDebugBlock<UE::Cameras::FVariableTableDebugBlock,UE::Cameras::FCameraVariableTable_const_&>
          (FCameraDebugBlockStorage *this,FCameraVariableTable *param_1)

{
  FVariableTableDebugBlock *this_00;
  
  this_00 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                      ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0x48,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)this_00);
  return this_00;
}

// BuildDebugBlock<UE::Cameras::FViewfinderDebugBlock> @ 14d57c2d0

FViewfinderDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::BuildDebugBlock<UE::Cameras::FViewfinderDebugBlock>
          (FCameraDebugBlockStorage *this)

{
  FCameraDebugBlock *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0x28,8);
  (pFVar1->Attachments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->Attachments).ArrayNum = 0;
  (pFVar1->Attachments).ArrayMax = 0;
  (pFVar1->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (pFVar1->Children).ArrayNum = 0;
  (pFVar1->Children).ArrayMax = 0;
  pFVar1->_padding_ = (longlong)&___7FViewfinderDebugBlock_Cameras_UE__6B_;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,pFVar1);
  return (FViewfinderDebugBlock *)pFVar1;
}

// DestroyDebugBlocks @ 14d59d280

void __thiscall
UE::Cameras::FCameraDebugBlockStorage::DestroyDebugBlocks
          (FCameraDebugBlockStorage *this,bool param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStackX_10 [8];
  
  puVar3 = *(undefined8 **)&this->field_0x10;
  iVar2 = *(int *)&this->field_0x18;
  puVar1 = puVar3 + iVar2;
  while( true ) {
    if (*(int *)&this->field_0x18 != iVar2) {
      `TCheckedPointerIterator<UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::FObjectInfo,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(auStackX_10);
    }
    if (puVar3 == puVar1) break;
    (**(code **)(*(longlong *)*puVar3 + 0x10))((longlong *)*puVar3,0);
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)&this->field_0x18 = 0;
  if (*(int *)&this->field_0x1c < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&this->field_0x10,0,(int *)&this->field_0x1c);
  }
  iVar2 = *(int *)&this->field_0x8;
  puVar3 = *(undefined8 **)this;
  puVar1 = puVar3 + (longlong)iVar2 * 3;
  if (param_1) {
    while( true ) {
      if (*(int *)&this->field_0x8 != iVar2) {
        `TCheckedPointerIterator<UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::FAllocation,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(auStackX_10);
      }
      if (puVar3 == puVar1) break;
      FMemory::Free((void *)*puVar3);
      puVar3 = puVar3 + 3;
    }
    *(undefined4 *)&this->field_0x8 = 0;
    if (*(int *)&this->field_0xc < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this,0,(int *)&this->field_0xc);
    }
  }
  else {
    while( true ) {
      if (*(int *)&this->field_0x8 != iVar2) {
        `TCheckedPointerIterator<UE::Cameras::TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::FAllocation,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(auStackX_10);
      }
      if (puVar3 == puVar1) break;
      *(undefined4 *)(puVar3 + 2) = 0;
      puVar3 = puVar3 + 3;
    }
  }
  return;
}

// BuildDebugBlock<UE::Cameras::FAttachToActorCameraDebugBlock> @ 14d5e9590

FAttachToActorCameraDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::BuildDebugBlock<UE::Cameras::FAttachToActorCameraDebugBlock>
          (FCameraDebugBlockStorage *this)

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
  
  pFVar9 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0xa0,0x10);
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
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)pFVar9);
  return pFVar9;
}

// BuildDebugBlock<UE::Cameras::FAutoFocusCameraDebugBlock> @ 14d5e9670

FAutoFocusCameraDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::BuildDebugBlock<UE::Cameras::FAutoFocusCameraDebugBlock>
          (FCameraDebugBlockStorage *this)

{
  FAutoFocusCameraDebugBlock *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0x40,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildDebugBlock<UE::Cameras::FBaseFramingCameraDebugBlock> @ 14d5e96e0

FBaseFramingCameraDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::BuildDebugBlock<UE::Cameras::FBaseFramingCameraDebugBlock>
          (FCameraDebugBlockStorage *this)

{
  FBaseFramingCameraDebugBlock *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0x490,0x10);
  memset(pFVar1,0,0x490);
  pFVar1 = FBaseFramingCameraDebugBlock::FBaseFramingCameraDebugBlock(pFVar1);
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildDebugBlock<UE::Cameras::FBoomArmCameraDebugBlock> @ 14d5e9740

FBoomArmCameraDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::BuildDebugBlock<UE::Cameras::FBoomArmCameraDebugBlock>
          (FCameraDebugBlockStorage *this)

{
  FBoomArmCameraDebugBlock *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0x48,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildDebugBlock<UE::Cameras::FCollisionPushCameraDebugBlock> @ 14d5e97b0

FCollisionPushCameraDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::BuildDebugBlock<UE::Cameras::FCollisionPushCameraDebugBlock>
          (FCameraDebugBlockStorage *this)

{
  FCollisionPushCameraDebugBlock *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0x68,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildDebugBlock<UE::Cameras::FDampenPositionCameraDebugBlock> @ 14d5e9820

FDampenPositionCameraDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::BuildDebugBlock<UE::Cameras::FDampenPositionCameraDebugBlock>
          (FCameraDebugBlockStorage *this)

{
  FDampenPositionCameraDebugBlock *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0x88,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildDebugBlock<UE::Cameras::FDampenRotationCameraDebugBlock> @ 14d5e98a0

FDampenRotationCameraDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::BuildDebugBlock<UE::Cameras::FDampenRotationCameraDebugBlock>
          (FCameraDebugBlockStorage *this)

{
  FDampenRotationCameraDebugBlock *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0x70,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildDebugBlock<UE::Cameras::FLocationRotationBlendCameraDebugBlock> @ 14d5e9920

FLocationRotationBlendCameraDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::
BuildDebugBlock<UE::Cameras::FLocationRotationBlendCameraDebugBlock>(FCameraDebugBlockStorage *this)

{
  FLocationRotationBlendCameraDebugBlock *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0x38,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildDebugBlock<UE::Cameras::FOrbitBlendCameraDebugBlock> @ 14d5e9990

FOrbitBlendCameraDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::BuildDebugBlock<UE::Cameras::FOrbitBlendCameraDebugBlock>
          (FCameraDebugBlockStorage *this)

{
  FOrbitBlendCameraDebugBlock *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0x60,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildDebugBlock<UE::Cameras::FSimpleBlendCameraDebugBlock> @ 14d5e9a00

FSimpleBlendCameraDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::BuildDebugBlock<UE::Cameras::FSimpleBlendCameraDebugBlock>
          (FCameraDebugBlockStorage *this)

{
  FSimpleBlendCameraDebugBlock *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0x30,8);
  *(undefined8 *)&pFVar1->BlendFactor = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  (((TArray<UE::Cameras::FCameraDebugBlock_*,TSizedDefaultAllocator<32>_> *)&pFVar1->_padding_)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  pFVar1->_padding_ = 0;
  pFVar1->_padding_ = (longlong)&___7FSimpleBlendCameraDebugBlock_Cameras_UE__6B_;
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildDebugBlock<UE::Cameras::FSplineOrbitCameraDebugBlock> @ 14d5e9a60

FSplineOrbitCameraDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::BuildDebugBlock<UE::Cameras::FSplineOrbitCameraDebugBlock>
          (FCameraDebugBlockStorage *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  FSplineOrbitCameraDebugBlock *pFVar4;
  
  pFVar4 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0xf0,0x10);
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
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)pFVar4);
  return pFVar4;
}

// BuildDebugBlock<UE::Cameras::FTargetRayCastCameraDebugBlock> @ 14d5e9b30

FTargetRayCastCameraDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::BuildDebugBlock<UE::Cameras::FTargetRayCastCameraDebugBlock>
          (FCameraDebugBlockStorage *this)

{
  FTargetRayCastCameraDebugBlock *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0x60,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildDebugBlock<UE::Cameras::FAutoRotateInput2DCameraDebugBlock> @ 14d64bfb0

FAutoRotateInput2DCameraDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::
BuildDebugBlock<UE::Cameras::FAutoRotateInput2DCameraDebugBlock>(FCameraDebugBlockStorage *this)

{
  FAutoRotateInput2DCameraDebugBlock *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0x48,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildDebugBlock<UE::Cameras::FBlueprintCameraDebugBlock> @ 14d64c020

FBlueprintCameraDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::BuildDebugBlock<UE::Cameras::FBlueprintCameraDebugBlock>
          (FCameraDebugBlockStorage *this)

{
  FBlueprintCameraDebugBlock *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0x38,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildDebugBlock<UE::Cameras::FDollyFramingCameraDebugBlock> @ 14d64c090

FDollyFramingCameraDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::BuildDebugBlock<UE::Cameras::FDollyFramingCameraDebugBlock>
          (FCameraDebugBlockStorage *this)

{
  FDollyFramingCameraDebugBlock *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0x78,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildDebugBlock<UE::Cameras::FDrivenControlRotationDebugBlock> @ 14d64c110

FDrivenControlRotationDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::
BuildDebugBlock<UE::Cameras::FDrivenControlRotationDebugBlock>(FCameraDebugBlockStorage *this)

{
  FDrivenControlRotationDebugBlock *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0x58,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildDebugBlock<UE::Cameras::FDrivenControlRotationHelperDebugBlock> @ 14d64c180

FDrivenControlRotationHelperDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::
BuildDebugBlock<UE::Cameras::FDrivenControlRotationHelperDebugBlock>(FCameraDebugBlockStorage *this)

{
  FDrivenControlRotationHelperDebugBlock *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0x58,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildDebugBlock<UE::Cameras::FOrientationInitializationDebugBlock,UE::Cameras::FOrientationInitializationService_&> @ 14d64c200

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FOrientationInitializationDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::
BuildDebugBlock<UE::Cameras::FOrientationInitializationDebugBlock,UE::Cameras::FOrientationInitializationService_&>
          (FCameraDebugBlockStorage *this,FOrientationInitializationService *param_1)

{
  int *piVar1;
  int iVar2;
  double dVar3;
  undefined8 uVar4;
  FOrientationInitializationDebugBlock *pFVar5;
  ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo> _Dst;
  ForElementType<UE::Cameras::FCameraIKAimIterationDebugInfo> _Src;
  
  pFVar5 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0x230,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)pFVar5);
  return pFVar5;
}

// BuildDebugBlock<UE::Cameras::FPanningFramingCameraDebugBlock> @ 14d64c370

FPanningFramingCameraDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::BuildDebugBlock<UE::Cameras::FPanningFramingCameraDebugBlock>
          (FCameraDebugBlockStorage *this)

{
  FPanningFramingCameraDebugBlock *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0x58,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildDebugBlock<UE::Cameras::FPerlinNoiseLocationShakeDebugBlock> @ 14d64c3e0

FPerlinNoiseLocationShakeDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::
BuildDebugBlock<UE::Cameras::FPerlinNoiseLocationShakeDebugBlock>(FCameraDebugBlockStorage *this)

{
  FPerlinNoiseLocationShakeDebugBlock *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0x40,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildDebugBlock<UE::Cameras::FPerlinNoiseRotationShakeDebugBlock> @ 14d64c440

FPerlinNoiseRotationShakeDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::
BuildDebugBlock<UE::Cameras::FPerlinNoiseRotationShakeDebugBlock>(FCameraDebugBlockStorage *this)

{
  FPerlinNoiseRotationShakeDebugBlock *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0x40,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

// BuildDebugBlock<UE::Cameras::FPlayerControlRotationDebugBlock> @ 14d64c4a0

FPlayerControlRotationDebugBlock * __thiscall
UE::Cameras::FCameraDebugBlockStorage::
BuildDebugBlock<UE::Cameras::FPlayerControlRotationDebugBlock>(FCameraDebugBlockStorage *this)

{
  FPlayerControlRotationDebugBlock *pFVar1;
  
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::BuildObjectUninitialized
                     ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,0x110,0x10);
  memset(pFVar1,0,0x110);
  pFVar1 = FPlayerControlRotationDebugBlock::FPlayerControlRotationDebugBlock(pFVar1);
  TCameraObjectStorage<UE::Cameras::FCameraDebugBlock>::RegisterInitializedObject
            ((TCameraObjectStorage<UE::Cameras::FCameraDebugBlock> *)this,
             (FCameraDebugBlock *)pFVar1);
  return pFVar1;
}

