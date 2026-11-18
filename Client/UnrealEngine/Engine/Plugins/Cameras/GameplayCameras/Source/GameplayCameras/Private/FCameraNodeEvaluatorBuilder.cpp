// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 55

// BuildEvaluator<UE::Cameras::FBlendStackRootCameraNodeEvaluator> @ 14d538e70

FBlendStackRootCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FBlendStackRootCameraNodeEvaluator>(FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FBlendStackRootCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     (this_00,0x58,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FPersistentBlendStackCameraNodeEvaluator> @ 14d538f70

FPersistentBlendStackCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FPersistentBlendStackCameraNodeEvaluator>
          (FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FPersistentBlendStackCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     (this_00,0x70,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FTransientBlendStackCameraNodeEvaluator> @ 14d5390b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FTransientBlendStackCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FTransientBlendStackCameraNodeEvaluator>
          (FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FTransientBlendStackCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     (this_00,0xf0,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FCalcCameraActorCameraNodeEvaluator> @ 14d57c520

FCalcCameraActorCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FCalcCameraActorCameraNodeEvaluator>(FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     (this_00,0x20,8);
  pFVar1->_padding_ = 0;
  *(undefined8 *)&pFVar1->bAutoCameraPoseMovementTrail = 0;
  (pFVar1->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  *(undefined8 *)&pFVar1->PrivateFlags = 0;
  pFVar1->bAutoCameraPoseMovementTrail = true;
  pFVar1->PrivateFlags = Default;
  pFVar1->_padding_ = (longlong)&___7FCalcCameraActorCameraNodeEvaluator_Cameras_UE__6B_;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject(this_00,pFVar1)
  ;
  return (FCalcCameraActorCameraNodeEvaluator *)pFVar1;
}

// BuildEvaluator<UE::Cameras::FCameraComponentCameraNodeEvaluator> @ 14d57c5f0

FCameraComponentCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FCameraComponentCameraNodeEvaluator>(FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     (this_00,0x20,8);
  pFVar1->_padding_ = 0;
  *(undefined8 *)&pFVar1->bAutoCameraPoseMovementTrail = 0;
  (pFVar1->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  *(undefined8 *)&pFVar1->PrivateFlags = 0;
  pFVar1->bAutoCameraPoseMovementTrail = true;
  pFVar1->PrivateFlags = Default;
  pFVar1->_padding_ = (longlong)&___7FCameraComponentCameraNodeEvaluator_Cameras_UE__6B_;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject(this_00,pFVar1)
  ;
  return (FCameraComponentCameraNodeEvaluator *)pFVar1;
}

// BuildEvaluator<UE::Cameras::FCombinedCameraRigsCameraNodeEvaluator> @ 14d57c6c0

FCombinedCameraRigsCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FCombinedCameraRigsCameraNodeEvaluator>
          (FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCombinedCameraRigsCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     (this_00,0x30,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FDefaultRootCameraNodeEvaluator> @ 14d57c7a0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FDefaultRootCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FDefaultRootCameraNodeEvaluator>(FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FDefaultRootCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     (this_00,0xa80,0x10);
  memset(pFVar1,0,0xa80);
  pFVar1 = FDefaultRootCameraNodeEvaluator::FDefaultRootCameraNodeEvaluator(pFVar1);
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FArrayCameraNodeEvaluator> @ 14d5e9bb0

FArrayCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::BuildEvaluator<UE::Cameras::FArrayCameraNodeEvaluator>
          (FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FArrayCameraNodeEvaluator *this_01;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  this_01 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                      (this_00,0x30,8);
  (((TObjectPtr<UCameraNode_const_> *)&this_01->_padding_)->field0_0x0).DebugPtr =
       (UCameraNode *)0x0;
  *(bool *)&this_01->_padding_ = true;
  *(ECameraNodeEvaluatorFlags *)&this_01->_padding_ = Default;
  (this_01->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_01->Children).ArrayNum = 0;
  (this_01->Children).ArrayMax = 0;
  this_01->_padding_ = (longlong)&___7FArrayCameraNodeEvaluator_Cameras_UE__6B_;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this_01,None);
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)this_01);
  return this_01;
}

// BuildEvaluator<UE::Cameras::FAttachToActorCameraNodeEvaluator> @ 14d5e9c90

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
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FAttachToActorCameraNodeEvaluator>(FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FAttachToActorCameraNodeEvaluator *_Dst;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  _Dst = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                   (this_00,0x120,0x10);
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
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)_Dst);
  return _Dst;
}

// BuildEvaluator<UE::Cameras::FAttachToActorGroupCameraNodeEvaluator> @ 14d5e9e30

FAttachToActorGroupCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FAttachToActorGroupCameraNodeEvaluator>
          (FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FAttachToActorGroupCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     (this_00,0x38,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FAttachToPlayerPawnCameraNodeEvaluator> @ 14d5e9f30

FAttachToPlayerPawnCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FAttachToPlayerPawnCameraNodeEvaluator>
          (FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FAttachToPlayerPawnCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     (this_00,0x58,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FAutoFocusCameraNodeEvaluator> @ 14d5ea070

FAutoFocusCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::BuildEvaluator<UE::Cameras::FAutoFocusCameraNodeEvaluator>
          (FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FAutoFocusCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     (this_00,0x60,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FBodyParametersCameraNodeEvaluator> @ 14d5ea190

FBodyParametersCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FBodyParametersCameraNodeEvaluator>(FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FBodyParametersCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     (this_00,0x40,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FBoomArmCameraNodeEvaluator> @ 14d5ea2b0

FBoomArmCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::BuildEvaluator<UE::Cameras::FBoomArmCameraNodeEvaluator>
          (FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FBoomArmCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     (this_00,0x98,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FCameraRigCameraNodeEvaluator> @ 14d5ea430

FCameraRigCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::BuildEvaluator<UE::Cameras::FCameraRigCameraNodeEvaluator>
          (FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraRigCameraNodeEvaluator *this_01;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  this_01 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                      (this_00,0x28,8);
  (((TObjectPtr<UCameraNode_const_> *)&this_01->_padding_)->field0_0x0).DebugPtr =
       (UCameraNode *)0x0;
  *(bool *)&this_01->_padding_ = true;
  *(ECameraNodeEvaluatorFlags *)&this_01->_padding_ = Default;
  this_01->CameraRigRootEvaluator = (FCameraNodeEvaluator *)0x0;
  this_01->_padding_ = (longlong)&___7FCameraRigCameraNodeEvaluator_Cameras_UE__6B_;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this_01,NeedsParameterUpdate);
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)this_01);
  return this_01;
}

// BuildEvaluator<UE::Cameras::FClippingPlanesCameraNodeEvaluator> @ 14d5ea510

FClippingPlanesCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FClippingPlanesCameraNodeEvaluator>(FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FClippingPlanesCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     (this_00,0x40,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FCollisionPushCameraNodeEvaluator> @ 14d5ea630

FCollisionPushCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FCollisionPushCameraNodeEvaluator>(FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCollisionPushCameraNodeEvaluator *_Dst;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  _Dst = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                   (this_00,0xc0,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)_Dst);
  return _Dst;
}

// BuildEvaluator<UE::Cameras::FDampenPositionCameraNodeEvaluator> @ 14d5ea7b0

FDampenPositionCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FDampenPositionCameraNodeEvaluator>(FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FDampenPositionCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     (this_00,0xf0,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FDampenRotationCameraNodeEvaluator> @ 14d5ea9a0

FDampenRotationCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FDampenRotationCameraNodeEvaluator>(FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FDampenRotationCameraNodeEvaluator *_Dst;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  _Dst = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                   (this_00,0xc0,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)_Dst);
  return _Dst;
}

// BuildEvaluator<UE::Cameras::FFieldOfViewCameraNodeEvaluator> @ 14d5eab00

FFieldOfViewCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FFieldOfViewCameraNodeEvaluator>(FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FFieldOfViewCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     (this_00,0x30,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FFilmbackCameraNodeEvaluator> @ 14d5eac00

FFilmbackCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::BuildEvaluator<UE::Cameras::FFilmbackCameraNodeEvaluator>
          (FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FFilmbackCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     (this_00,0x90,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FLensParametersCameraNodeEvaluator> @ 14d5eadc0

FLensParametersCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FLensParametersCameraNodeEvaluator>(FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FLensParametersCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     (this_00,0x60,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FLinearBlendCameraNodeEvaluator> @ 14d5eaf00

FLinearBlendCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FLinearBlendCameraNodeEvaluator>(FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FSimpleFixedTimeBlendCameraNodeEvaluator *this_01;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  this_01 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                      (this_00,0x40,8);
  this_01->_padding_ = 0;
  this_01->_padding_ = 0;
  this_01->_padding_ = 0;
  this_01->_padding_ = 0;
  this_01->_padding_ = 0;
  this_01->_padding_ = 0;
  this_01->_padding_ = 0;
  this_01->TotalTime = 0.0;
  this_01->CurrentTime = 0.0;
  FSimpleFixedTimeBlendCameraNodeEvaluator::FSimpleFixedTimeBlendCameraNodeEvaluator(this_01);
  this_01->_padding_ = (longlong)&___7FLinearBlendCameraNodeEvaluator_Cameras_UE__6B_;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)this_01);
  return (FLinearBlendCameraNodeEvaluator *)this_01;
}

// BuildEvaluator<UE::Cameras::FLocationRotationBlendCameraNodeEvaluator> @ 14d5eafe0

FLocationRotationBlendCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FLocationRotationBlendCameraNodeEvaluator>
          (FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FLocationRotationBlendCameraNodeEvaluator *this_01;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  this_01 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                      (this_00,0x38,8);
  (((TObjectPtr<UCameraNode_const_> *)&this_01->_padding_)->field0_0x0).DebugPtr =
       (UCameraNode *)0x0;
  *(bool *)&this_01->_padding_ = true;
  *(ECameraNodeEvaluatorFlags *)&this_01->_padding_ = Default;
  this_01->LocationBlendEvaluator = (FSimpleBlendCameraNodeEvaluator *)0x0;
  this_01->RotationBlendEvaluator = (FSimpleBlendCameraNodeEvaluator *)0x0;
  this_01->OtherBlendEvaluator = (FSimpleBlendCameraNodeEvaluator *)0x0;
  this_01->_padding_ = (longlong)&___7FLocationRotationBlendCameraNodeEvaluator_Cameras_UE__6B_;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this_01,None);
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)this_01);
  return this_01;
}

// BuildEvaluator<UE::Cameras::FOcclusionMaterialCameraNodeEvaluator> @ 14d5eb0d0

FOcclusionMaterialCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FOcclusionMaterialCameraNodeEvaluator>
          (FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FOcclusionMaterialCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     (this_00,0xf0,8);
  memset(pFVar1,0,0xf0);
  pFVar1 = FOcclusionMaterialCameraNodeEvaluator::FOcclusionMaterialCameraNodeEvaluator(pFVar1);
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FOffsetCameraNodeEvaluator> @ 14d5eb190

FOffsetCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::BuildEvaluator<UE::Cameras::FOffsetCameraNodeEvaluator>
          (FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FOffsetCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     (this_00,0x40,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FOrbitBlendCameraNodeEvaluator> @ 14d5eb2b0

FOrbitBlendCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FOrbitBlendCameraNodeEvaluator>(FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FOrbitBlendCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     (this_00,0x60,8);
  pFVar1 = FOrbitBlendCameraNodeEvaluator::FOrbitBlendCameraNodeEvaluator(pFVar1);
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FOrthographicCameraNodeEvaluator> @ 14d5eb350

FOrthographicCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FOrthographicCameraNodeEvaluator>(FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FOrthographicCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     (this_00,0x40,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FPopBlendCameraNodeEvaluator> @ 14d5eb470

FPopBlendCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::BuildEvaluator<UE::Cameras::FPopBlendCameraNodeEvaluator>
          (FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraNodeEvaluator *this_01;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  this_01 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                      (this_00,0x20,8);
  this_01->bAutoCameraPoseMovementTrail = true;
  (this_01->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  this_01->PrivateFlags = Default;
  this_01->_padding_ = (longlong)&___7FPopBlendCameraNodeEvaluator_Cameras_UE__6B_;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags(this_01,None);
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,this_01);
  return (FPopBlendCameraNodeEvaluator *)this_01;
}

// BuildEvaluator<UE::Cameras::FPostProcessCameraNodeEvaluator> @ 14d5eb550

FPostProcessCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FPostProcessCameraNodeEvaluator>(FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraNodeEvaluator *this_01;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  this_01 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                      (this_00,0x20,8);
  this_01->bAutoCameraPoseMovementTrail = true;
  (this_01->PrivateCameraNode).field0_0x0.DebugPtr = (UCameraNode *)0x0;
  this_01->PrivateFlags = Default;
  this_01->_padding_ = (longlong)&___7FPostProcessCameraNodeEvaluator_Cameras_UE__6B_;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags(this_01,None);
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,this_01);
  return (FPostProcessCameraNodeEvaluator *)this_01;
}

// BuildEvaluator<UE::Cameras::FSetLocationCameraNodeEvaluator> @ 14d5eb630

FSetLocationCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FSetLocationCameraNodeEvaluator>(FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FSetLocationCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     (this_00,0x30,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FSetRotationCameraNodeEvaluator> @ 14d5eb730

FSetRotationCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FSetRotationCameraNodeEvaluator>(FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FSetRotationCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     (this_00,0x30,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FSmoothBlendCameraNodeEvaluator> @ 14d5eb830

FSmoothBlendCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FSmoothBlendCameraNodeEvaluator>(FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FSimpleFixedTimeBlendCameraNodeEvaluator *this_01;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  this_01 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                      (this_00,0x40,8);
  this_01->_padding_ = 0;
  this_01->_padding_ = 0;
  this_01->_padding_ = 0;
  this_01->_padding_ = 0;
  this_01->_padding_ = 0;
  this_01->_padding_ = 0;
  this_01->_padding_ = 0;
  this_01->TotalTime = 0.0;
  this_01->CurrentTime = 0.0;
  FSimpleFixedTimeBlendCameraNodeEvaluator::FSimpleFixedTimeBlendCameraNodeEvaluator(this_01);
  this_01->_padding_ = (longlong)&___7FSmoothBlendCameraNodeEvaluator_Cameras_UE__6B_;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)this_01);
  return (FSmoothBlendCameraNodeEvaluator *)this_01;
}

// BuildEvaluator<UE::Cameras::FSplineFieldOfViewCameraNodeEvaluator> @ 14d5eb910

FSplineFieldOfViewCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FSplineFieldOfViewCameraNodeEvaluator>
          (FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FSplineFieldOfViewCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     (this_00,0x50,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FSplineOffsetCameraNodeEvaluator> @ 14d5eba40

FSplineOffsetCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FSplineOffsetCameraNodeEvaluator>(FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FSplineOffsetCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     (this_00,200,8);
  memset(pFVar1,0,200);
  pFVar1 = FSplineOffsetCameraNodeEvaluator::FSplineOffsetCameraNodeEvaluator(pFVar1);
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FSplineOrbitCameraNodeEvaluator> @ 14d5ebb00

FSplineOrbitCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FSplineOrbitCameraNodeEvaluator>(FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FSplineOrbitCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     (this_00,0x1e0,0x10);
  memset(pFVar1,0,0x1e0);
  pFVar1 = FSplineOrbitCameraNodeEvaluator::FSplineOrbitCameraNodeEvaluator(pFVar1);
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FTargetRayCastCameraNodeEvaluator> @ 14d5ebbc0

FTargetRayCastCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FTargetRayCastCameraNodeEvaluator>(FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FTargetRayCastCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     (this_00,0x68,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FViewTargetTransitionParamsBlendCameraNodeEvaluator> @ 14d5ebd00

FViewTargetTransitionParamsBlendCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FViewTargetTransitionParamsBlendCameraNodeEvaluator>
          (FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FViewTargetTransitionParamsBlendCameraNodeEvaluator *this_01;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  this_01 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                      (this_00,0x40,8);
  *(undefined4 *)((longlong)&this_01->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&this_01->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&this_01->_padding_ + 7) = 0;
  this_01->_padding_ = 7;
  *(undefined4 *)((longlong)&this_01->_padding_ + 4) = 0;
  *(undefined8 *)((longlong)&this_01->_padding_ + 6) = 0;
  *(undefined2 *)&this_01->field_0x3e = 0;
  (((TObjectPtr<UCameraNode_const_> *)&this_01->_padding_)->field0_0x0).DebugPtr =
       (UCameraNode *)0x0;
  *(bool *)&this_01->_padding_ = true;
  this_01->_padding_ = (longlong)&___7FSimpleBlendCameraNodeEvaluator_Cameras_UE__6B_;
  this_01->_padding_ = 0;
  *(undefined4 *)&this_01->_padding_ = 0xffffffff;
  *(undefined4 *)&this_01->_padding_ = 0;
  *(undefined2 *)((longlong)&this_01->_padding_ + 4) = 0;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this_01,NeedsSerialize);
  this_01->CurrentTime = 0.0;
  this_01->_padding_ =
       (longlong)&___7FViewTargetTransitionParamsBlendCameraNodeEvaluator_Cameras_UE__6B_;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)this_01);
  return this_01;
}

// BuildEvaluator<UE::Cameras::FAutoRotateInput2DCameraNodeEvaluator> @ 14d64c500

FAutoRotateInput2DCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FAutoRotateInput2DCameraNodeEvaluator>
          (FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FAutoRotateInput2DCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     (this_00,0x108,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FBlueprintCameraNodeEvaluator> @ 14d64c6b0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FBlueprintCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::BuildEvaluator<UE::Cameras::FBlueprintCameraNodeEvaluator>
          (FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FBlueprintCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     (this_00,0x28,8);
  *(undefined4 *)((longlong)&pFVar1->_padding_ + 1) = 0;
  *(undefined2 *)((longlong)&pFVar1->_padding_ + 5) = 0;
  *(undefined1 *)((longlong)&pFVar1->_padding_ + 7) = 0;
  (((TObjectPtr<UCameraNode_const_> *)&pFVar1->_padding_)->field0_0x0).DebugPtr = (UCameraNode *)0x0
  ;
  pFVar1->_padding_ = 7;
  *(bool *)&pFVar1->_padding_ = true;
  (pFVar1->EvaluatorBlueprint).field0_0x0.DebugPtr = (UBlueprintCameraNodeEvaluator *)0x0;
  pFVar1->_padding_ = (longlong)&___7FBlueprintCameraNodeEvaluator_Cameras_UE__6B_;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FCameraRigInput1DSlotEvaluator> @ 14d64c790

FCameraRigInput1DSlotEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FCameraRigInput1DSlotEvaluator>(FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraRigInput1DSlotEvaluator *this_01;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  this_01 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                      (this_00,0x58,8);
  (((TObjectPtr<UCameraNode_const_> *)&this_01->_padding_)->field0_0x0).DebugPtr =
       (UCameraNode *)0x0;
  *(bool *)&this_01->_padding_ = true;
  *(ECameraNodeEvaluatorFlags *)&this_01->_padding_ = Default;
  (this_01->RevertAxisReader).DefaultValuePtr = (bool *)0x0;
  (this_01->SpeedReader).DefaultValuePtr = (double *)0x0;
  this_01->DeltaInputValue = 0.0;
  this_01->_padding_ = (longlong)&___7FCameraRigInput1DSlotEvaluator_Cameras_UE__6B_;
  (this_01->RevertAxisReader).VariableID.Value = 0xffffffff;
  (this_01->SpeedReader).VariableID.Value = 0xffffffff;
  this_01->bIsAccumulated = true;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this_01,Default);
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)this_01);
  return this_01;
}

// BuildEvaluator<UE::Cameras::FCameraRigInput2DSlotEvaluator> @ 14d64c8b0

FCameraRigInput2DSlotEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FCameraRigInput2DSlotEvaluator>(FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraRigInput2DSlotEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     (this_00,0x78,8);
  pFVar1 = FCameraRigInput2DSlotEvaluator::FCameraRigInput2DSlotEvaluator(pFVar1);
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FCameraShakeCameraNodeEvaluator> @ 14d64c950

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraShakeCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FCameraShakeCameraNodeEvaluator>(FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraShakeCameraNodeEvaluator *this_01;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  this_01 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                      (this_00,0x40,8);
  (((TObjectPtr<UCameraNode_const_> *)&this_01->_padding_)->field0_0x0).DebugPtr =
       (UCameraNode *)0x0;
  *(bool *)&this_01->_padding_ = true;
  *(ECameraNodeEvaluatorFlags *)&this_01->_padding_ = Default;
  this_01->CameraShakeRootEvaluator = (FShakeCameraNodeEvaluator *)0x0;
  (this_01->CameraShakeService).Object = (FCameraShakeService *)0x0;
  (this_01->CameraShakeService).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this_01->_padding_ = (longlong)&___7FCameraShakeCameraNodeEvaluator_Cameras_UE__6B_;
  this_01->EvaluationMode = VisualLayer;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this_01,NeedsParameterUpdate);
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)this_01);
  return this_01;
}

// BuildEvaluator<UE::Cameras::FCameraShakeServiceCameraNodeEvaluator> @ 14d64ca50

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

FCameraShakeServiceCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FCameraShakeServiceCameraNodeEvaluator>
          (FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCameraShakeServiceCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     (this_00,0x58,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FCompositeShakeCameraNodeEvaluator> @ 14d64cb70

FCompositeShakeCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FCompositeShakeCameraNodeEvaluator>(FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FCompositeShakeCameraNodeEvaluator *this_01;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  this_01 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                      (this_00,0x30,8);
  (((TObjectPtr<UCameraNode_const_> *)&this_01->_padding_)->field0_0x0).DebugPtr =
       (UCameraNode *)0x0;
  *(bool *)&this_01->_padding_ = true;
  *(ECameraNodeEvaluatorFlags *)&this_01->_padding_ = Default;
  (this_01->ShakeEvaluators).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_01->ShakeEvaluators).ArrayNum = 0;
  (this_01->ShakeEvaluators).ArrayMax = 0;
  this_01->_padding_ = (longlong)&___7FCompositeShakeCameraNodeEvaluator_Cameras_UE__6B_;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags((FCameraNodeEvaluator *)this_01,None);
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)this_01);
  return this_01;
}

// BuildEvaluator<UE::Cameras::FDollyFramingCameraNodeEvaluator> @ 14d64cc50

FDollyFramingCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FDollyFramingCameraNodeEvaluator>(FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FDollyFramingCameraNodeEvaluator *this_01;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  this_01 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                      (this_00,0x6b0,0x10);
  memset(this_01,0,0x6b0);
  FBaseFramingCameraNodeEvaluator::FBaseFramingCameraNodeEvaluator
            ((FBaseFramingCameraNodeEvaluator *)this_01);
  *(undefined ***)this_01 = &___7FDollyFramingCameraNodeEvaluator_Cameras_UE__6B_;
  (this_01->CanMoveLaterallyReader).VariableID.Value = 0xffffffff;
  (this_01->CanMoveLaterallyReader).DefaultValuePtr = (bool *)0x0;
  (this_01->CanMoveVerticallyReader).DefaultValuePtr = (bool *)0x0;
  (this_01->CanMoveVerticallyReader).VariableID.Value = 0xffffffff;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)this_01);
  return this_01;
}

// BuildEvaluator<UE::Cameras::FDrivenControlRotationCameraNodeEvaluator> @ 14d64cd70

FDrivenControlRotationCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FDrivenControlRotationCameraNodeEvaluator>
          (FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  double dVar1;
  FDrivenControlRotationCameraNodeEvaluator *this_01;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  this_01 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                      (this_00,0x78,8);
  (((TObjectPtr<UCameraNode_const_> *)&this_01->_padding_)->field0_0x0).DebugPtr =
       (UCameraNode *)0x0;
  (this_01->HelperService).Object = (FDrivenControlRotationHelperService *)0x0;
  (this_01->HelperService).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(bool *)&this_01->_padding_ = true;
  *(ECameraNodeEvaluatorFlags *)&this_01->_padding_ = Default;
  this_01->_padding_ = (longlong)&___7FDrivenControlRotationCameraNodeEvaluator_Cameras_UE__6B_;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this_01->LastControlRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this_01->LastControlRotation).Yaw = dVar1;
  dVar1 = UE::Math::TRotator<double>::ZeroRotator.Roll;
  this_01->bLastWasActiveCameraRig = false;
  (this_01->LastControlRotation).Roll = dVar1;
  FCameraNodeEvaluator::SetNodeEvaluatorFlags
            ((FCameraNodeEvaluator *)this_01,SupportsOperations|NeedsSerialize);
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)this_01);
  return this_01;
}

// BuildEvaluator<UE::Cameras::FEnvelopeShakeCameraNodeEvaluator> @ 14d64ce90

FEnvelopeShakeCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FEnvelopeShakeCameraNodeEvaluator>(FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FEnvelopeShakeCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     (this_00,0x38,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FInputAccumulator2DCameraNodeEvaluator> @ 14d64d170

FInputAccumulator2DCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FInputAccumulator2DCameraNodeEvaluator>
          (FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FInputAccumulator2DCameraNodeEvaluator *this_01;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  this_01 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                      (this_00,0x80,8);
  FCameraRigInput2DSlotEvaluator::FCameraRigInput2DSlotEvaluator
            ((FCameraRigInput2DSlotEvaluator *)this_01);
  this_01->InputSlotEvaluator = (FInput2DCameraNodeEvaluator *)0x0;
  this_01->_padding_ = (longlong)&___7FInputAccumulator2DCameraNodeEvaluator_Cameras_UE__6B_;
  *(bool *)&this_01->_padding_ = true;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)this_01);
  return this_01;
}

// BuildEvaluator<UE::Cameras::FInputAxisBinding2DCameraNodeEvaluator> @ 14d64d230

FInputAxisBinding2DCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FInputAxisBinding2DCameraNodeEvaluator>
          (FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FInputAxisBinding2DCameraNodeEvaluator *this_01;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  this_01 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                      (this_00,0xa0,8);
  memset(this_01,0,0xa0);
  FCameraRigInput2DSlotEvaluator::FCameraRigInput2DSlotEvaluator
            ((FCameraRigInput2DSlotEvaluator *)this_01);
  this_01->_padding_ = (longlong)&___7FInputAxisBinding2DCameraNodeEvaluator_Cameras_UE__6B_;
  (this_01->MultiplierReader).VariableID.Value = 0xffffffff;
  (this_01->MultiplierReader).DefaultValuePtr = (TVector2<double> *)0x0;
  (this_01->InputComponent).field0_0x0.DebugPtr = (UEnhancedInputComponent *)0x0;
  (this_01->AxisValueBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this_01->AxisValueBindings).ArrayNum = 0;
  (this_01->AxisValueBindings).ArrayMax = 0;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)this_01);
  return this_01;
}

// BuildEvaluator<UE::Cameras::FPanningFramingCameraNodeEvaluator> @ 14d64d350

FPanningFramingCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FPanningFramingCameraNodeEvaluator>(FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FPanningFramingCameraNodeEvaluator *this_01;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  this_01 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                      (this_00,0x6a0,0x10);
  memset(this_01,0,0x6a0);
  FBaseFramingCameraNodeEvaluator::FBaseFramingCameraNodeEvaluator
            ((FBaseFramingCameraNodeEvaluator *)this_01);
  this_01->_padding_ = (longlong)&___7FPanningFramingCameraNodeEvaluator_Cameras_UE__6B_;
  (this_01->CanPanLaterallyReader).VariableID.Value = 0xffffffff;
  (this_01->CanPanLaterallyReader).DefaultValuePtr = (bool *)0x0;
  (this_01->CanPanVerticallyReader).DefaultValuePtr = (bool *)0x0;
  (this_01->CanPanVerticallyReader).VariableID.Value = 0xffffffff;
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)this_01);
  return this_01;
}

// BuildEvaluator<UE::Cameras::FPerlinNoiseLocationShakeCameraNodeEvaluator> @ 14d64d470

FPerlinNoiseLocationShakeCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FPerlinNoiseLocationShakeCameraNodeEvaluator>
          (FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FPerlinNoiseLocationShakeCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     (this_00,0x170,8);
  memset(pFVar1,0,0x170);
  pFVar1 = FPerlinNoiseLocationShakeCameraNodeEvaluator::
           FPerlinNoiseLocationShakeCameraNodeEvaluator(pFVar1);
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FPerlinNoiseRotationShakeCameraNodeEvaluator> @ 14d64d530

FPerlinNoiseRotationShakeCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FPerlinNoiseRotationShakeCameraNodeEvaluator>
          (FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FPerlinNoiseRotationShakeCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     (this_00,0x170,8);
  memset(pFVar1,0,0x170);
  pFVar1 = FPerlinNoiseRotationShakeCameraNodeEvaluator::
           FPerlinNoiseRotationShakeCameraNodeEvaluator(pFVar1);
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::FRawInputAxisBinding2DCameraNodeEvaluator> @ 14d64d5f0

FRawInputAxisBinding2DCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::FRawInputAxisBinding2DCameraNodeEvaluator>
          (FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FRawInputAxisBinding2DCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     (this_00,0x58,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

// BuildEvaluator<UE::Cameras::Test::FUpdateTrackerCameraNodeEvaluator> @ 14d64d710

FUpdateTrackerCameraNodeEvaluator * __thiscall
UE::Cameras::FCameraNodeEvaluatorBuilder::
BuildEvaluator<UE::Cameras::Test::FUpdateTrackerCameraNodeEvaluator>
          (FCameraNodeEvaluatorBuilder *this)

{
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *this_00;
  FUpdateTrackerCameraNodeEvaluator *pFVar1;
  
  this_00 = (TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator> *)this->Storage;
  pFVar1 = TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::BuildObjectUninitialized
                     (this_00,0x30,8);
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
  TCameraObjectStorage<UE::Cameras::FCameraNodeEvaluator>::RegisterInitializedObject
            (this_00,(FCameraNodeEvaluator *)pFVar1);
  return pFVar1;
}

