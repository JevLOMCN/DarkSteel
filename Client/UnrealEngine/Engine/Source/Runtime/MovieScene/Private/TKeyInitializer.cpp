// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 11

// operator<int,FMovieSceneEvaluationTemplate>_TTuple<int,FMovieSceneEvaluationTemplate> @ 1460699d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<int,FMovieSceneEvaluationTemplate> * __thiscall
TKeyInitializer<int_const_&>::
operator<int,FMovieSceneEvaluationTemplate>_TTuple<int,FMovieSceneEvaluationTemplate>
          (TKeyInitializer<int_const_&> *this,
          TTuple<int,FMovieSceneEvaluationTemplate> *__return_storage_ptr__)

{
  FMovieSceneEvaluationTemplate *pFVar1;
  undefined1 auStack_198 [32];
  FMovieSceneEvaluationTemplate local_178;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_198;
  memset(&local_178,0,0x160);
  pFVar1 = FMovieSceneEvaluationTemplate::FMovieSceneEvaluationTemplate(&local_178);
  *(int *)__return_storage_ptr__ = *this->Key;
  FMovieSceneEvaluationTemplate::FMovieSceneEvaluationTemplate
            ((FMovieSceneEvaluationTemplate *)&__return_storage_ptr__->field_0x8,pFVar1);
  FMovieSceneEvaluationTemplate::~FMovieSceneEvaluationTemplate(&local_178);
  return __return_storage_ptr__;
}

// operator<int,FMovieSceneSequenceHierarchy>_TTuple<int,FMovieSceneSequenceHierarchy> @ 146069a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<int,FMovieSceneSequenceHierarchy> * __thiscall
TKeyInitializer<int_const_&>::
operator<int,FMovieSceneSequenceHierarchy>_TTuple<int,FMovieSceneSequenceHierarchy>
          (TKeyInitializer<int_const_&> *this,
          TTuple<int,FMovieSceneSequenceHierarchy> *__return_storage_ptr__)

{
  FMovieSceneSequenceHierarchy *pFVar1;
  undefined1 auStack_178 [32];
  FMovieSceneSequenceHierarchy local_158;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_178;
  pFVar1 = FMovieSceneSequenceHierarchy::FMovieSceneSequenceHierarchy(&local_158);
  *(int *)__return_storage_ptr__ = *this->Key;
  FMovieSceneSequenceHierarchy::FMovieSceneSequenceHierarchy
            ((FMovieSceneSequenceHierarchy *)&__return_storage_ptr__->field_0x8,pFVar1);
  FMovieSceneSequenceHierarchy::~FMovieSceneSequenceHierarchy(&local_158);
  return __return_storage_ptr__;
}

// operator<UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::FObjectFactoryBatch>_TTuple<UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::FObjectFactoryBatch> @ 146069ae0

/* WARNING: Enum "Type": Some values do not have unique names */

TTuple<UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::FObjectFactoryBatch> * __thiscall
TKeyInitializer<UE::MovieScene::FEntityAllocationProxy_&>::
operator<UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::FObjectFactoryBatch>_TTuple<UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::FObjectFactoryBatch>
          (TKeyInitializer<UE::MovieScene::FEntityAllocationProxy_&> *this,
          TTuple<UE::MovieScene::FEntityAllocationProxy,UE::MovieScene::FObjectFactoryBatch>
          *__return_storage_ptr__)

{
  FEntityAllocationProxy *pFVar1;
  int iVar2;
  undefined4 uVar3;
  FObjectFactoryBatch local_58;
  
  local_58._padding_ = (longlong)&___7FObjectFactoryBatch_MovieScene_UE__6B_;
  pFVar1 = this->Key;
  local_58._padding_ = 0;
  local_58.StaleEntitiesToPreserve =
       (TMap<TTuple<UObject_*,UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<UObject_*,UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::FMovieSceneEntityID,0>_>
        *)0x0;
  local_58._padding_ = 0;
  iVar2 = pFVar1->AllocationIndex;
  uVar3 = *(undefined4 *)&pFVar1->field_0xc;
  local_58._padding_ = 0;
  local_58._padding_ = 0;
  local_58.PreservedEntities.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.PreservedEntities.Pairs.ArrayNum = 0;
  local_58.PreservedEntities.Pairs.ArrayMax = 0;
  local_58.ObjectsToAssign.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ObjectsToAssign.ArrayNum = 0;
  local_58.ObjectsToAssign.ArrayMax = 0;
  *(FEntityManager **)__return_storage_ptr__ = pFVar1->Manager;
  *(int *)&__return_storage_ptr__->field_0x8 = iVar2;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar3;
  UE::MovieScene::FObjectFactoryBatch::FObjectFactoryBatch
            ((FObjectFactoryBatch *)&__return_storage_ptr__->field_0x10,&local_58);
  if (local_58.ObjectsToAssign.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.ObjectsToAssign.AllocatorInstance.Data);
  }
  if (local_58.PreservedEntities.Pairs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.PreservedEntities.Pairs.AllocatorInstance.Data);
  }
  if ((void *)local_58._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_58._padding_);
  }
  return __return_storage_ptr__;
}

// operator<FGuid,FMovieSceneAnchorsScalingGroup>_TTuple<FGuid,FMovieSceneAnchorsScalingGroup> @ 146069b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FGuid,FMovieSceneAnchorsScalingGroup> * __thiscall
TKeyInitializer<FGuid_const_&>::
operator<FGuid,FMovieSceneAnchorsScalingGroup>_TTuple<FGuid,FMovieSceneAnchorsScalingGroup>
          (TKeyInitializer<FGuid_const_&> *this,
          TTuple<FGuid,FMovieSceneAnchorsScalingGroup> *__return_storage_ptr__)

{
  FGuid *pFVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  pFVar1 = this->Key;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  uVar3 = pFVar1->B;
  uVar4 = pFVar1->C;
  uVar5 = pFVar1->D;
  *(uint *)&__return_storage_ptr__->field_0x0 = pFVar1->A;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar3;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar4;
  *(uint *)&__return_storage_ptr__->field_0xc = uVar5;
  FMovieSceneAnchorsScalingGroup::FMovieSceneAnchorsScalingGroup
            ((FMovieSceneAnchorsScalingGroup *)&__return_storage_ptr__->field_0x10,
             (FMovieSceneAnchorsScalingGroup *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  iVar2 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>_>_TTuple<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>_> @ 146102050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>_>
* __thiscall
TKeyInitializer<FMovieSceneSequenceID_const_&>::
operator<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>_>_TTuple<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>_>
          (TKeyInitializer<FMovieSceneSequenceID_const_&> *this,
          TTuple<FMovieSceneSequenceID,TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>_>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(uint *)__return_storage_ptr__ = this->Key->Value;
  TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
  ::
  TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
            ((TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<FMovieSceneEvaluationFieldEntityQuery,FMovieSceneEvaluationFieldEntityKeyFuncs,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FGuid,FMovieSceneObjectCache::FBoundObjects>_TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects> @ 146168ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects> * __thiscall
TKeyInitializer<FGuid_const_&>::
operator<FGuid,FMovieSceneObjectCache::FBoundObjects>_TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects>
          (TKeyInitializer<FGuid_const_&> *this,
          TTuple<FGuid,FMovieSceneObjectCache::FBoundObjects> *__return_storage_ptr__)

{
  FGuid *pFVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_58 [32];
  FBoundObjects local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  pFVar1 = this->Key;
  local_38.Objects.ArrayMax = 1;
  local_38.Objects.AllocatorInstance.InlineData[0] = '\0';
  local_38.Objects.AllocatorInstance.InlineData[1] = '\0';
  local_38.Objects.AllocatorInstance.InlineData[2] = '\0';
  local_38.Objects.AllocatorInstance.InlineData[3] = '\0';
  local_38.Objects.AllocatorInstance.InlineData[4] = '\0';
  local_38.Objects.AllocatorInstance.InlineData[5] = '\0';
  local_38.Objects.AllocatorInstance.InlineData[6] = '\0';
  local_38.Objects.AllocatorInstance.InlineData[7] = '\0';
  local_38.Objects.AllocatorInstance.SecondaryData =
       (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0;
  local_38.bUpToDate = false;
  local_38._1_3_ = 0;
  local_38._padding_ = 0;
  uVar2 = pFVar1->B;
  uVar3 = pFVar1->C;
  uVar4 = pFVar1->D;
  local_38.Objects.ArrayNum = 0;
  *(uint *)&__return_storage_ptr__->field_0x0 = pFVar1->A;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar2;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar3;
  *(uint *)&__return_storage_ptr__->field_0xc = uVar4;
  FMovieSceneObjectCache::FBoundObjects::FBoundObjects
            ((FBoundObjects *)&__return_storage_ptr__->field_0x10,&local_38);
  if (local_38.Objects.AllocatorInstance.SecondaryData !=
      (ForElementType<TWeakObjectPtr<UObject,FWeakObjectPtr>_>)0x0) {
    FMemory::Free((void *)local_38.Objects.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// operator<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_TTuple<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_> @ 146168d20

TTuple<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_> * __thiscall
TKeyInitializer<FGuid_const_&>::
operator<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_TTuple<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
          (TKeyInitializer<FGuid_const_&> *this,
          TTuple<FGuid,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
          *__return_storage_ptr__)

{
  FGuid *pFVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  pFVar1 = this->Key;
  uVar2 = pFVar1->B;
  uVar3 = pFVar1->C;
  uVar4 = pFVar1->D;
  *(uint *)&__return_storage_ptr__->field_0x0 = pFVar1->A;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar2;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar3;
  *(uint *)&__return_storage_ptr__->field_0xc = uVar4;
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = local_58;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = uStack_50;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = local_48;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = uStack_40;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = local_38;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = uStack_30;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = local_28;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = uStack_20;
  if (*(void **)&__return_storage_ptr__->field_0x50 != (void *)0x0) {
    FMemory::Free(*(void **)&__return_storage_ptr__->field_0x50);
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x58 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x5c = 4;
  return __return_storage_ptr__;
}

// operator<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_TTuple<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_> @ 146168da0

TTuple<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
* __thiscall
TKeyInitializer<FMovieSceneObjectBindingID_const_&>::
operator<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>_TTuple<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
          (TKeyInitializer<FMovieSceneObjectBindingID_const_&> *this,
          TTuple<FMovieSceneObjectBindingID,TArray<FGuid,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>_>
          *__return_storage_ptr__)

{
  FMovieSceneObjectBindingID *pFVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  pFVar1 = this->Key;
  uVar2 = (pFVar1->Guid).B;
  uVar3 = (pFVar1->Guid).C;
  uVar4 = (pFVar1->Guid).D;
  *(uint *)&__return_storage_ptr__->field_0x0 = (pFVar1->Guid).A;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar2;
  *(uint *)&__return_storage_ptr__->field_0x8 = uVar3;
  *(uint *)&__return_storage_ptr__->field_0xc = uVar4;
  iVar5 = pFVar1->ResolveParentIndex;
  *(int *)&__return_storage_ptr__->field_0x10 = pFVar1->SequenceID;
  *(int *)&__return_storage_ptr__->field_0x14 = iVar5;
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = local_58;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = uStack_50;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = local_48;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = uStack_40;
  *(undefined8 *)&__return_storage_ptr__->field_0x38 = local_38;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = uStack_30;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = local_28;
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = uStack_20;
  if (*(void **)&__return_storage_ptr__->field_0x58 != (void *)0x0) {
    FMemory::Free(*(void **)&__return_storage_ptr__->field_0x58);
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x58 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x60 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x64 = 4;
  return __return_storage_ptr__;
}

// operator<FMovieSceneTrackInstanceInput,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_TTuple<FMovieSceneTrackInstanceInput,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_> @ 146168e20

TTuple<FMovieSceneTrackInstanceInput,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
* __thiscall
TKeyInitializer<FMovieSceneTrackInstanceInput_const_&>::
operator<FMovieSceneTrackInstanceInput,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_TTuple<FMovieSceneTrackInstanceInput,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
          (TKeyInitializer<FMovieSceneTrackInstanceInput_const_&> *this,
          TTuple<FMovieSceneTrackInstanceInput,TArray<UE::MovieScene::FPreAnimatedStateMetaData,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>
          *__return_storage_ptr__)

{
  FMovieSceneTrackInstanceInput *pFVar1;
  UMovieSceneSection *pUVar2;
  ushort uVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  pFVar1 = this->Key;
  pUVar2 = (pFVar1->Section).field0_0x0.DebugPtr;
  *(UMovieSceneSection **)__return_storage_ptr__ = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UMovieSceneSection *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  uVar3 = (pFVar1->InstanceHandle).InstanceSerial;
  *(ushort *)&__return_storage_ptr__->field_0x8 = (pFVar1->InstanceHandle).InstanceID;
  *(ushort *)&__return_storage_ptr__->field_0xa = uVar3;
  __return_storage_ptr__->field_0xc = pFVar1->bInputHasBeenProcessed;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = local_38;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = uStack_30;
  *(undefined4 *)&__return_storage_ptr__->field_0x20 = local_28;
  if (*(void **)&__return_storage_ptr__->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&__return_storage_ptr__->field_0x28);
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 1;
  return __return_storage_ptr__;
}

// operator<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_TTuple<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair> @ 1461ea460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>
* __thiscall
TKeyInitializer<UE::MovieScene::FComplexInclusivityFilter_const_&>::
operator<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_TTuple<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>
          (TKeyInitializer<UE::MovieScene::FComplexInclusivityFilter_const_&> *this,
          TTuple<UE::MovieScene::FComplexInclusivityFilter,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>
          *__return_storage_ptr__)

{
  FComplexInclusivityFilter *pFVar1;
  ForAnyElementType FVar2;
  undefined1 auStack_88 [32];
  FIncludePair local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  pFVar1 = this->Key;
  local_68.MandatoryIncludes.Includes.AllocatorInstance.InlineData[0] = '\0';
  local_68.MandatoryIncludes.Includes.AllocatorInstance.InlineData[1] = '\0';
  local_68.MandatoryIncludes.Includes.AllocatorInstance._2_2_ = 0;
  local_68.MandatoryIncludes.Includes.AllocatorInstance._padding_ = 0;
  local_68.OptionalIncludes.Includes.AllocatorInstance.InlineData[0] = '\0';
  local_68.OptionalIncludes.Includes.AllocatorInstance.InlineData[1] = '\0';
  local_68.OptionalIncludes.Includes.AllocatorInstance._2_2_ = 0;
  local_68.OptionalIncludes.Includes.AllocatorInstance._padding_ = 0;
  local_68.MandatoryIncludes.Includes.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::FComponentTypeID>)0x0;
  local_68.MandatoryIncludes.Includes.ArrayNum = 0;
  local_68.MandatoryIncludes.Includes.ArrayMax = 1;
  local_68.MandatoryIncludes.Initializers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.MandatoryIncludes.Initializers.ArrayNum = 0;
  local_68.MandatoryIncludes.Initializers.ArrayMax = 0;
  local_68.OptionalIncludes.Includes.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::FComponentTypeID>)0x0;
  local_68.OptionalIncludes.Includes.ArrayNum = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  local_68.OptionalIncludes.Includes.ArrayMax = 1;
  local_68.OptionalIncludes.Initializers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.OptionalIncludes.Initializers.ArrayNum = 0;
  local_68.OptionalIncludes.Initializers.ArrayMax = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            ((TBitArray<TFixedAllocator<12>_> *)__return_storage_ptr__,
             (TBitArray<TFixedAllocator<12>_> *)pFVar1);
  *(EComplexInclusivityFilterMode *)&__return_storage_ptr__->field_0x38 = pFVar1->Mode;
  UE::MovieScene::FMutualInclusivityGraph::FIncludePair::FIncludePair
            ((FIncludePair *)&__return_storage_ptr__->field_0x40,&local_68);
  FVar2.Data = local_68.OptionalIncludes.Initializers.AllocatorInstance.Data;
  DestructItems<TUniquePtr<UE::MovieScene::IMutualComponentInitializer,TDefaultDelete<UE::MovieScene::IMutualComponentInitializer>_>,int>
            ((TUniquePtr<UE::MovieScene::IMutualComponentInitializer,TDefaultDelete<UE::MovieScene::IMutualComponentInitializer>_>
              *)local_68.OptionalIncludes.Initializers.AllocatorInstance.Data,
             local_68.OptionalIncludes.Initializers.ArrayNum);
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  if (local_68.OptionalIncludes.Includes.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::MovieScene::FComponentTypeID>)0x0) {
    FMemory::Free((void *)local_68.OptionalIncludes.Includes.AllocatorInstance.SecondaryData);
  }
  FVar2.Data = local_68.MandatoryIncludes.Initializers.AllocatorInstance.Data;
  DestructItems<TUniquePtr<UE::MovieScene::IMutualComponentInitializer,TDefaultDelete<UE::MovieScene::IMutualComponentInitializer>_>,int>
            ((TUniquePtr<UE::MovieScene::IMutualComponentInitializer,TDefaultDelete<UE::MovieScene::IMutualComponentInitializer>_>
              *)local_68.MandatoryIncludes.Initializers.AllocatorInstance.Data,
             local_68.MandatoryIncludes.Initializers.ArrayNum);
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  if (local_68.MandatoryIncludes.Includes.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::MovieScene::FComponentTypeID>)0x0) {
    FMemory::Free((void *)local_68.MandatoryIncludes.Includes.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

// operator<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair> @ 1461ea570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair> *
__thiscall
TKeyInitializer<UE::MovieScene::FComponentTypeID_const_&>::
operator<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>_TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>
          (TKeyInitializer<UE::MovieScene::FComponentTypeID_const_&> *this,
          TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FMutualInclusivityGraph::FIncludePair>
          *__return_storage_ptr__)

{
  ForAnyElementType FVar1;
  undefined1 auStack_88 [32];
  FIncludePair local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68.MandatoryIncludes.Includes.AllocatorInstance.InlineData[0] = '\0';
  local_68.MandatoryIncludes.Includes.AllocatorInstance.InlineData[1] = '\0';
  local_68.MandatoryIncludes.Includes.AllocatorInstance._2_2_ = 0;
  local_68.MandatoryIncludes.Includes.AllocatorInstance._padding_ = 0;
  local_68.OptionalIncludes.Includes.AllocatorInstance.InlineData[0] = '\0';
  local_68.OptionalIncludes.Includes.AllocatorInstance.InlineData[1] = '\0';
  local_68.OptionalIncludes.Includes.AllocatorInstance._2_2_ = 0;
  local_68.OptionalIncludes.Includes.AllocatorInstance._padding_ = 0;
  local_68.MandatoryIncludes.Includes.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::FComponentTypeID>)0x0;
  local_68.MandatoryIncludes.Includes.ArrayNum = 0;
  local_68.MandatoryIncludes.Includes.ArrayMax = 1;
  local_68.MandatoryIncludes.Initializers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.MandatoryIncludes.Initializers.ArrayNum = 0;
  local_68.MandatoryIncludes.Initializers.ArrayMax = 0;
  local_68.OptionalIncludes.Includes.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::FComponentTypeID>)0x0;
  local_68.OptionalIncludes.Includes.ArrayNum = 0;
  local_68.OptionalIncludes.Includes.ArrayMax = 1;
  local_68.OptionalIncludes.Initializers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.OptionalIncludes.Initializers.ArrayNum = 0;
  local_68.OptionalIncludes.Initializers.ArrayMax = 0;
  *(ushort *)__return_storage_ptr__ = this->Key->Value;
  UE::MovieScene::FMutualInclusivityGraph::FIncludePair::FIncludePair
            ((FIncludePair *)&__return_storage_ptr__->field_0x8,&local_68);
  FVar1.Data = local_68.OptionalIncludes.Initializers.AllocatorInstance.Data;
  DestructItems<TUniquePtr<UE::MovieScene::IMutualComponentInitializer,TDefaultDelete<UE::MovieScene::IMutualComponentInitializer>_>,int>
            ((TUniquePtr<UE::MovieScene::IMutualComponentInitializer,TDefaultDelete<UE::MovieScene::IMutualComponentInitializer>_>
              *)local_68.OptionalIncludes.Initializers.AllocatorInstance.Data,
             local_68.OptionalIncludes.Initializers.ArrayNum);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  if (local_68.OptionalIncludes.Includes.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::MovieScene::FComponentTypeID>)0x0) {
    FMemory::Free((void *)local_68.OptionalIncludes.Includes.AllocatorInstance.SecondaryData);
  }
  FVar1.Data = local_68.MandatoryIncludes.Initializers.AllocatorInstance.Data;
  DestructItems<TUniquePtr<UE::MovieScene::IMutualComponentInitializer,TDefaultDelete<UE::MovieScene::IMutualComponentInitializer>_>,int>
            ((TUniquePtr<UE::MovieScene::IMutualComponentInitializer,TDefaultDelete<UE::MovieScene::IMutualComponentInitializer>_>
              *)local_68.MandatoryIncludes.Initializers.AllocatorInstance.Data,
             local_68.MandatoryIncludes.Initializers.ArrayNum);
  if (FVar1.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar1.Data);
  }
  if (local_68.MandatoryIncludes.Includes.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::MovieScene::FComponentTypeID>)0x0) {
    FMemory::Free((void *)local_68.MandatoryIncludes.Includes.AllocatorInstance.SecondaryData);
  }
  return __return_storage_ptr__;
}

