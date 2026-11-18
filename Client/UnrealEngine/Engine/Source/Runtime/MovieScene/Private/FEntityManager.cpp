// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 75

// FEntityManager @ 1461185a0

/* WARNING: Enum "Type": Some values do not have unique names */

FEntityManager * __thiscall UE::MovieScene::FEntityManager::FEntityManager(FEntityManager *this)

{
  *(undefined8 *)&this->EntityAllocationMasks = 0;
  *(undefined8 *)&(this->EntityAllocationMasks).field_0x8 = 0;
  *(undefined8 *)&(this->EntityAllocationMasks).field_0x20 = 0;
  this->_padding_ = (longlong)&___7FEntityManager_MovieScene_UE__6B_;
  *(undefined4 *)&(this->EntityAllocationMasks).field_0x28 = 0;
  *(undefined4 *)&(this->EntityAllocationMasks).field_0x2c = 0x80;
  *(undefined4 *)&(this->EntityAllocationMasks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EntityAllocationMasks).field_0x34 = 0;
  (this->AllocationsWithCapacity).AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->AllocationsWithCapacity).NumBits = 0;
  (this->AllocationsWithCapacity).MaxBits = 0x80;
  *(undefined8 *)&this->EntityAllocations = 0;
  *(undefined8 *)&(this->EntityAllocations).field_0x8 = 0;
  *(undefined8 *)&(this->EntityAllocations).field_0x20 = 0;
  *(undefined4 *)&(this->EntityAllocations).field_0x28 = 0;
  *(undefined4 *)&(this->EntityAllocations).field_0x2c = 0x80;
  *(undefined4 *)&(this->EntityAllocations).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EntityAllocations).field_0x34 = 0;
  *(undefined8 *)&this->EntityLocations = 0;
  *(undefined8 *)&(this->EntityLocations).field_0x8 = 0;
  *(undefined8 *)&(this->EntityLocations).field_0x20 = 0;
  *(undefined4 *)&(this->EntityLocations).field_0x28 = 0;
  *(undefined4 *)&(this->EntityLocations).field_0x2c = 0x80;
  *(undefined4 *)&(this->EntityLocations).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EntityLocations).field_0x34 = 0;
  *(undefined8 *)&this->ParentToChild = 0;
  *(undefined8 *)&(this->ParentToChild).field_0x8 = 0;
  *(undefined8 *)&(this->ParentToChild).field_0x20 = 0;
  *(undefined4 *)&(this->ParentToChild).field_0x28 = 0;
  *(undefined4 *)&(this->ParentToChild).field_0x2c = 0x80;
  *(undefined4 *)&(this->ParentToChild).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ParentToChild).field_0x34 = 0;
  *(undefined8 *)&(this->ParentToChild).field_0x40 = 0;
  *(undefined4 *)&(this->ParentToChild).field_0x48 = 0;
  *(undefined8 *)&this->InstancedChildInitializers = 0;
  *(undefined8 *)&(this->InstancedChildInitializers).field_0x8 = 0;
  *(undefined8 *)&(this->InstancedChildInitializers).field_0x20 = 0;
  *(undefined4 *)&(this->InstancedChildInitializers).field_0x28 = 0;
  *(undefined4 *)&(this->InstancedChildInitializers).field_0x2c = 0x80;
  *(undefined4 *)&(this->InstancedChildInitializers).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InstancedChildInitializers).field_0x34 = 0;
  *(undefined8 *)&this->EntityGenerationMap = 0;
  *(undefined8 *)&(this->EntityGenerationMap).field_0x8 = 0;
  *(undefined8 *)&(this->EntityGenerationMap).field_0x20 = 0;
  *(undefined4 *)&(this->EntityGenerationMap).field_0x28 = 0;
  *(undefined4 *)&(this->EntityGenerationMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->EntityGenerationMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EntityGenerationMap).field_0x34 = 0;
  *(undefined8 *)&(this->EntityGenerationMap).field_0x40 = 0;
  *(undefined4 *)&(this->EntityGenerationMap).field_0x48 = 0;
  (this->AccumulatedMask).Bits.NumBits = 0;
  (this->AccumulatedMask).Bits.MaxBits = 0x180;
  (this->GlobalIterationFilter).AllMask.Bits.NumBits = 0;
  (this->GlobalIterationFilter).AllMask.Bits.MaxBits = 0x180;
  (this->GlobalIterationFilter).NoneMask.Bits.NumBits = 0;
  (this->GlobalIterationFilter).NoneMask.Bits.MaxBits = 0x180;
  (this->GlobalIterationFilter).ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->GlobalIterationFilter).ComplexMasks.ArrayNum = 0;
  (this->GlobalIterationFilter).ComplexMasks.ArrayMax = 0;
  (this->IterationCount).Payload = 0;
  (this->ManagerDebugName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ManagerDebugName).Data.ArrayNum = 0;
  (this->ManagerDebugName).Data.ArrayMax = 0;
  this->NextAllocationID = 0;
  this->CurrentHandleGeneration = 0;
  this->bHandleGenerationStale = false;
  this->GatherThread = AnyNormalThreadNormalTask;
  this->DispatchThread = AnyNormalThreadNormalTask;
  ::FString::operator=(&this->ManagerDebugName,L"UE::MovieScene::FEntityManager");
  this->LockdownState = Unlocked;
  this->SystemSerialNumber = 1;
  this->StructureMutationSystemSerialNumber = 0;
  this->ThreadingModel = NoThreading;
  if (GRichComponentDebuggingInitialized == false) {
    GRichComponentDebugging = FWindowsPlatformMisc::IsDebuggerPresent();
    GRichComponentDebuggingInitialized = true;
  }
  this->RichComponentDebuggingPtr = &GRichComponentDebugging;
  return this;
}

// ~FEntityManager @ 14611d510

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::MovieScene::FEntityManager::~FEntityManager(FEntityManager *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  void *pvVar6;
  ForElementType<unsigned_int> FVar7;
  code *pcVar8;
  bool bVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  int local_res10;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  uStack_84 = 1;
  this->_padding_ = (longlong)&___7FEntityManager_MovieScene_UE__6B_;
  puVar1 = &(this->EntityAllocations).field_0x10;
  local_88 = 0;
  iVar3 = *(int *)&(this->EntityAllocations).field_0x28;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->EntityAllocations).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar11 = *puVar13;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar11 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar10 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14611d5c7;
      uVar11 = puVar13[lVar10 + 1];
    }
    uStack_84 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14611d5c7:
      iStack_74 = iVar3;
    }
  }
  uVar11 = *(uint *)&(this->EntityAllocations).field_0x28;
  local_40 = *(int *)&(this->EntityAllocations).field_0x8 -
             *(int *)&(this->EntityAllocations).field_0x34;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  iVar14 = (int)uVar11 >> 5;
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  uVar15 = uVar11 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar4 = *(uint *)&(this->EntityAllocations).field_0x28;
  if (uVar11 != uVar4) {
    puVar12 = *(undefined1 **)&(this->EntityAllocations).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar14 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar14;
      uVar15 = uVar15 + 0x20;
      iVar14 = iVar14 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14611d6ad;
      uVar11 = *(uint *)(puVar12 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar11 = (int)lVar10 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_14611d6ad:
  while( true ) {
    if (*(int *)&(this->EntityAllocations).field_0x8 - *(int *)&(this->EntityAllocations).field_0x34
        != local_40) {
      `TSparseArray<UE::MovieScene::FEntityAllocation_*,FDefaultSparseArrayAllocator>::
      TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar11) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    DestroyAllocation(this,*(FEntityAllocation **)
                            (*(longlong *)&this->EntityAllocations +
                            (longlong)local_60.CurrentBitIndex * 8),true);
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  pFVar5 = (this->ManagerDebugName).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->GlobalIterationFilter).ComplexMasks.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  *(undefined4 *)&(this->EntityGenerationMap).field_0x48 = 0;
  pvVar6 = *(void **)&(this->EntityGenerationMap).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->EntityGenerationMap);
  TSparseArray<TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>,FDefaultSparseArrayAllocator>
  ::
  ~TSparseArray<TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>,FDefaultSparseArrayAllocator>
            (&this->InstancedChildInitializers);
  *(undefined4 *)&(this->ParentToChild).field_0x48 = 0;
  pvVar6 = *(void **)&(this->ParentToChild).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ParentToChild);
  TSparseArray<UE::MovieScene::FEntityManager::FEntityLocation,FDefaultSparseArrayAllocator>::
  ~TSparseArray<UE::MovieScene::FEntityManager::FEntityLocation,FDefaultSparseArrayAllocator>
            (&this->EntityLocations);
  TSparseArray<UE::MovieScene::FEntityAllocation_*,FDefaultSparseArrayAllocator>::
  ~TSparseArray<UE::MovieScene::FEntityAllocation_*,FDefaultSparseArrayAllocator>
            (&this->EntityAllocations);
  FVar7 = (this->AllocationsWithCapacity).AllocatorInstance.SecondaryData;
  if (FVar7 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar7);
  }
  TSparseArray<UE::MovieScene::FComponentMask,FDefaultSparseArrayAllocator>::
  ~TSparseArray<UE::MovieScene::FComponentMask,FDefaultSparseArrayAllocator>
            (&this->EntityAllocationMasks);
  this->_padding_ = (longlong)&___7FUObjectDeleteListener_FUObjectArray__6B_;
  return;
}

// AccumulateMask @ 146122360

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::AccumulateMask
          (FEntityManager *this,FEntityComponentFilter *param_1,FComponentMask *param_2)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  FEntityComponentFilter *this_00;
  TBitArray<TFixedAllocator<12>_> *pTVar6;
  bool bVar7;
  longlong lVar8;
  TBitArray<TFixedAllocator<12>_> *pTVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  FEntityComponentFilter *local_res10;
  TBitArray<TFixedAllocator<12>_> *local_res18;
  <lambda_1> local_res20 [8];
  int local_a0;
  uint uStack_9c;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_78;
  int local_58;
  
  uStack_9c = 1;
  iVar3 = *(int *)&(this->EntityAllocationMasks).field_0x28;
  puVar2 = &(this->EntityAllocationMasks).field_0x10;
  local_a0 = 0;
  iStack_8c = 0;
  iStack_88 = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->EntityAllocationMasks).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar2;
    }
    uVar11 = *puVar13;
    iStack_88 = 0;
    local_a0 = 0;
    while (uVar11 == 0) {
      iStack_88 = iStack_88 + 0x20;
      lVar8 = (longlong)local_a0;
      local_a0 = local_a0 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_a0) goto LAB_146122427;
      uVar11 = puVar13[lVar8 + 1];
    }
    uStack_9c = -uVar11 & uVar11;
    uVar1 = (ulonglong)uStack_9c * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStack_8c = (int)lVar8 + -1 + iStack_88;
    if (iVar3 < iStack_8c) {
LAB_146122427:
      iStack_8c = iVar3;
    }
  }
  uVar11 = *(uint *)&(this->EntityAllocationMasks).field_0x28;
  local_58 = *(int *)&(this->EntityAllocationMasks).field_0x8 -
             *(int *)&(this->EntityAllocationMasks).field_0x34;
  local_78._padding_ = CONCAT44(uStack_9c,local_a0);
  iVar10 = (int)uVar11 >> 5;
  local_78.CurrentBitIndex = iStack_8c;
  local_78.UnvisitedBitMask = 0xffffffff;
  local_78._28_4_ = uStack_84;
  local_78.BaseBitIndex = iStack_88;
  uVar14 = uVar11 & 0xffffffe0;
  local_res10 = param_1;
  local_res18 = &param_2->Bits;
  local_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar6 = local_res18;
  this_00 = local_res10;
  uVar4 = *(uint *)&(this->EntityAllocationMasks).field_0x28;
  if (uVar11 != uVar4) {
    puVar12 = *(undefined1 **)&(this->EntityAllocationMasks).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar2;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar10 * 4);
    while (uVar11 == 0) {
      lVar8 = (longlong)iVar10;
      uVar14 = uVar14 + 0x20;
      iVar10 = iVar10 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_146122513;
      uVar11 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + uVar14;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_146122513:
  while( true ) {
    if (*(int *)&(this->EntityAllocationMasks).field_0x8 -
        *(int *)&(this->EntityAllocationMasks).field_0x34 != local_58) {
      `TSparseArray<UE::MovieScene::FComponentMask,FDefaultSparseArrayAllocator>::
      TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_78.CurrentBitIndex == uVar11) &&
       (local_78.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    pTVar9 = (TBitArray<TFixedAllocator<12>_> *)
             (*(longlong *)&this->EntityAllocationMasks + (longlong)local_78.CurrentBitIndex * 0x38)
    ;
    bVar7 = FEntityComponentFilter::Match(this_00,(FComponentMask *)pTVar9);
    if (bVar7) {
      Core::Private::
      BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
                (pTVar9,pTVar6,MaxSize,local_res20);
    }
    local_78.UnvisitedBitMask = local_78.UnvisitedBitMask & ~local_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_78);
  }
  return;
}

// AddChild @ 146122660

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::AddChild
          (FEntityManager *this,FMovieSceneEntityID param_1,FMovieSceneEntityID param_2)

{
  short sVar1;
  longlong lVar2;
  TPairInitializer<UE::MovieScene::FMovieSceneEntityID_const_&,UE::MovieScene::FMovieSceneEntityID_const_&>
  local_res8;
  FMovieSceneEntityID local_res18 [4];
  FMovieSceneEntityID **local_18;
  FMovieSceneEntityID *local_10;
  
  lVar2 = *(longlong *)&this->EntityLocations;
  sVar1 = *(short *)(lVar2 + 4 + (ulonglong)param_2.Value * 8);
  local_res8.Value._0_2_ = param_1.Value;
  local_res18[0].Value = param_2.Value;
  if (sVar1 != -1) {
    local_res8.Key._0_2_ = sVar1;
    TMultiMap<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>_>
    ::Remove(&this->ParentToChild,(FMovieSceneEntityID *)&local_res8,local_res18);
  }
  local_18 = &local_res8.Value;
  local_10 = local_res18;
  TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UE::MovieScene::FMovieSceneEntityID_const_&,UE::MovieScene::FMovieSceneEntityID_const_&>_>
            ((TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
              *)&this->ParentToChild,&local_res8,(bool *)&local_18);
  *(ushort *)(lVar2 + (ulonglong)param_2.Value * 8 + 4) = local_res8.Value._0_2_;
  return;
}

// AddComponent @ 146122700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::AddComponent
          (FEntityManager *this,FMovieSceneEntityID param_1,FComponentTypeID param_2)

{
  FEntityLocation *this_00;
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  ushort uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined1 auStack_88 [32];
  <lambda_1> local_68 [4];
  TBitArray<TFixedAllocator<12>_> local_64;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  if ((int)(uint)param_1.Value < *(int *)&(this->EntityLocations).field_0x28) {
    if ((*(int *)&(this->EntityLocations).field_0x28 <= (int)(uint)param_1.Value) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar3 = *(undefined1 **)&(this->EntityLocations).field_0x20;
    puVar11 = &(this->EntityLocations).field_0x10;
    if (puVar3 != (undefined1 *)0x0) {
      puVar11 = puVar3;
    }
    if ((*(uint *)(puVar11 + (ulonglong)(param_1.Value >> 5) * 4) >> (param_1.Value & 0x1f) & 1) !=
        0) goto LAB_1461227b2;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("EntityLocations.IsValidIndex(EntityID.AsIndex())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                     ,0x486,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_1461227b2:
  CheckCanChangeStructure(this);
  uVar5 = (uint)param_2.Value;
  local_64.NumBits = 0;
  local_64.MaxBits = 0x180;
  TBitArray<TFixedAllocator<12>_>::Add(&local_64,false,uVar5 + 1);
  if ((local_64.NumBits <= (int)uVar5) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar10 = 1 << ((byte)param_2.Value & 0x1f);
  pTVar1 = local_64.AllocatorInstance.InlineData + (param_2.Value >> 5);
  *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | uVar10;
  this_00 = (FEntityLocation *)(*(longlong *)&this->EntityLocations + (ulonglong)param_1.Value * 8);
  uVar2 = *(ushort *)(*(longlong *)&this->EntityLocations + (ulonglong)param_1.Value * 8);
  if (uVar2 != 0xffff) {
    lVar9 = (ulonglong)uVar2 * 0x38 + *(longlong *)&this->EntityAllocationMasks;
    if (((param_2.Value != 0xffff) && ((int)uVar5 < *(int *)(lVar9 + 0x30))) &&
       ((*(uint *)((ulonglong)(param_2.Value >> 5) * 4 + lVar9) & uVar10) != 0)) {
      return;
    }
    Core::Private::
    BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
              ((TBitArray<TFixedAllocator<12>_> *)
               ((ulonglong)this_00->AllocationIndex * 0x38 +
               *(longlong *)&this->EntityAllocationMasks),&local_64,MaxSize,local_68);
  }
  iVar7 = GetOrCreateAllocationWithSlack(this,(FComponentMask *)&local_64,(int *)0x0);
  if (this_00->AllocationIndex == 0xffff) {
    iVar8 = AddEntityToAllocation(this,iVar7,param_1,DefaultConstructed);
  }
  else {
    iVar8 = MigrateEntity(this,iVar7,(uint)this_00->AllocationIndex,
                          (uint)this_00->EntryIndexWithinAllocation);
  }
  FEntityLocation::Set(this_00,iVar7,iVar8);
  this->StructureMutationSystemSerialNumber = this->SystemSerialNumber;
  this->bAccumulatedMaskStale = true;
  return;
}

// AddComponent @ 146122910

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::AddComponent
          (FEntityManager *this,FMovieSceneEntityID param_1,FComponentTypeID param_2,
          EEntityRecursion param_3)

{
  <lambda_1> local_18;
  
  if ((param_3 & This) != 0) {
    AddComponent(this,param_1,param_2);
  }
  if ((param_3 & Children) != 0) {
    local_18.__this = this;
    local_18.ComponentTypeID.Value = param_2.Value;
    IterateChildren_ParentFirst<_UE::MovieScene::FEntityManager::AddComponent_::__l8::<lambda_1>_>
              (this,param_1,&local_18);
  }
  return;
}

// AddComponents @ 146122980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::AddComponents
          (FEntityManager *this,FMovieSceneEntityID param_1,FComponentMask *param_2)

{
  FEntityLocation *this_00;
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  TTypeCompatibleBytes<unsigned_int> *pTVar5;
  uint uVar6;
  uint uVar7;
  TBitArray<TFixedAllocator<12>_> *pTVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  <lambda_1> local_68 [4];
  TBitArray<TFixedAllocator<12>_> local_64;
  ulonglong local_28;
  ulonglong uVar8;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  uVar8 = 0;
  iVar3 = (param_2->Bits).NumBits;
  uVar6 = iVar3 + 0x1f;
  pTVar5 = (TTypeCompatibleBytes<unsigned_int> *)param_2;
  if (uVar6 >> 5 != 0) {
    do {
      if (*(int *)(((TBitArray<TFixedAllocator<12>_> *)pTVar5->Pad)->AllocatorInstance).InlineData
                  [0].Pad != 0) {
        pTVar5 = (param_2->Bits).AllocatorInstance.InlineData + uVar8;
        iVar4 = 0;
        bVar10 = *(int *)pTVar5->Pad != 0;
        if (bVar10) {
          for (; (*(uint *)pTVar5->Pad >> iVar4 & 1) == 0; iVar4 = iVar4 + 1) {
          }
        }
        iVar2 = 0x20;
        if (bVar10) {
          iVar2 = iVar4;
        }
        iVar2 = iVar2 + (int)uVar8 * 0x20;
        if (iVar3 <= iVar2) {
          return;
        }
        if (iVar2 == -1) {
          return;
        }
        CheckCanChangeStructure(this);
        local_64.NumBits = 0;
        local_64.MaxBits = 0;
        TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(&local_64,&param_2->Bits);
        this_00 = (FEntityLocation *)
                  (*(longlong *)&this->EntityLocations + (ulonglong)param_1.Value * 8);
        uVar1 = *(ushort *)(*(longlong *)&this->EntityLocations + (ulonglong)param_1.Value * 8);
        if (uVar1 != 0xffff) {
          pTVar9 = (TBitArray<TFixedAllocator<12>_> *)
                   ((ulonglong)uVar1 * 0x38 + *(longlong *)&this->EntityAllocationMasks);
          Core::Private::
          BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
                    (pTVar9,&local_64,MaxSize,local_68);
          bVar10 = TBitArray<TFixedAllocator<12>_>::CompareSetBits<TFixedAllocator<12>_>
                             (&local_64,pTVar9,false);
          if (bVar10) {
            return;
          }
        }
        iVar3 = GetOrCreateAllocationWithSlack(this,(FComponentMask *)&local_64,(int *)0x0);
        if (this_00->AllocationIndex == 0xffff) {
          iVar4 = AddEntityToAllocation(this,iVar3,param_1,DefaultConstructed);
        }
        else {
          iVar4 = MigrateEntity(this,iVar3,(uint)this_00->AllocationIndex,
                                (uint)this_00->EntryIndexWithinAllocation);
        }
        FEntityLocation::Set(this_00,iVar3,iVar4);
        this->StructureMutationSystemSerialNumber = this->SystemSerialNumber;
        this->bAccumulatedMaskStale = true;
        return;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
      pTVar5 = pTVar5 + 1;
    } while ((int)uVar7 < (int)(uVar6 >> 5));
  }
  return;
}

// AddComponents @ 146122b00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::AddComponents
          (FEntityManager *this,FMovieSceneEntityID param_1,FComponentMask *param_2,
          EEntityRecursion param_3)

{
  <lambda_1> local_18;
  
  if ((param_3 & This) != 0) {
    AddComponents(this,param_1,param_2);
  }
  if ((param_3 & Children) != 0) {
    local_18.__this = this;
    local_18.EntityComponentMask = param_2;
    IterateChildren_ParentFirst<_UE::MovieScene::FEntityManager::AddComponents_::__l8::<lambda_1>_>
              (this,param_1,&local_18);
  }
  return;
}

// AddEntityToAllocation @ 146122b70

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UE::MovieScene::FEntityManager::AddEntityToAllocation
          (FEntityManager *this,int param_1,FMovieSceneEntityID param_2,EMemoryType param_3)

{
  uint *puVar1;
  ushort uVar2;
  ulonglong uVar3;
  IComplexComponentOps *pIVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FEntityAllocation *pFVar8;
  FComponentHeader *pFVar9;
  ulonglong uVar10;
  FComponentTypeInfo *pFVar11;
  FComponentHeader *pFVar12;
  ForElementType<unsigned_int> FVar13;
  
  CheckCanChangeStructure(this);
  pFVar8 = *(FEntityAllocation **)(*(longlong *)&this->EntityAllocations + (longlong)param_1 * 8);
  if ((pFVar8->MaxCapacity <= pFVar8->Size) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Allocation->Num() < Allocation->GetMaxCapacity()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                         ,0x966,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    iVar7 = (*pcVar5)();
    return iVar7;
  }
  if (pFVar8->Size == pFVar8->Capacity) {
    pFVar8 = GrowAllocation(this,param_1,1);
    uVar2 = pFVar8->Size;
  }
  else {
    uVar2 = pFVar8->Size;
  }
  pFVar8->EntityIDs[uVar2].Value = param_2.Value;
  pFVar8->Size = pFVar8->Size + 1;
  uVar3 = this->SystemSerialNumber;
  pFVar12 = pFVar8->ComponentHeaders;
  uVar10 = uVar3;
  if (uVar3 < pFVar8->SerialNumber) {
    uVar10 = pFVar8->SerialNumber;
  }
  pFVar8->SerialNumber = uVar10;
  pFVar9 = pFVar12 + pFVar8->NumComponents;
  do {
    if (pFVar12 == pFVar9) {
      if (pFVar8->Size == pFVar8->MaxCapacity) {
        if (((param_1 < 0) || ((this->AllocationsWithCapacity).NumBits <= param_1)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          iVar7 = (*pcVar5)();
          return iVar7;
        }
        FVar13 = (this->AllocationsWithCapacity).AllocatorInstance.SecondaryData;
        if (FVar13 == (ForElementType<unsigned_int>)0x0) {
          FVar13 = (ForElementType<unsigned_int>)&this->AllocationsWithCapacity;
        }
        puVar1 = (uint *)((longlong)FVar13 +
                         (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)param_1 & 0x1f));
      }
      this->StructureMutationSystemSerialNumber = this->SystemSerialNumber;
      this->bAccumulatedMaskStale = true;
      return (uint)uVar2;
    }
    uVar10 = uVar3;
    if (uVar3 < pFVar12->SerialNumber) {
      uVar10 = pFVar12->SerialNumber;
    }
    pFVar12->SerialNumber = uVar10;
    if ((pFVar12->Sizeof != '\0') && (param_3 == DefaultConstructed)) {
      pFVar11 = FComponentRegistry::GetComponentTypeChecked
                          (this->ComponentRegistry,(FComponentTypeID)(pFVar12->ComponentType).Value)
      ;
      if (((pFVar12->Sizeof == '\0') || (pFVar12->Components == (uchar *)0x0)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!IsTag() && Components != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                             ,0x221,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar7 = (*pcVar5)();
        return iVar7;
      }
      if (pFVar11->bIsZeroConstructType == 0) {
        pIVar4 = (pFVar11->ComplexComponentOps).Ptr;
        (**(code **)((longlong)*pIVar4 + 8))
                  (pIVar4,pFVar12->Components + (uint)pFVar12->Sizeof * (uint)uVar2,1);
      }
      else {
        memset(pFVar12->Components + (uint)pFVar12->Sizeof * (uint)uVar2,0,
               (ulonglong)pFVar11->Sizeof);
      }
    }
    pFVar12 = pFVar12 + 1;
  } while( true );
}

// AddMutualComponents @ 146123100

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::AddMutualComponents
          (FEntityManager *this,FEntityComponentFilter *param_1)

{
  IMovieSceneEntityMutation local_res18 [2];
  
  CheckCanChangeStructure(this);
  local_res18[0] =
       (IMovieSceneEntityMutation)
       &`UE::MovieScene::FEntityManager::AddMutualComponents'::`2'::FBenignMutation::_vftable_;
  MutateAll(this,param_1,local_res18,All);
  return;
}

// AddMutualComponents @ 146123150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::MovieScene::FEntityManager::AddMutualComponents(FEntityManager *this)

{
  undefined1 auStack_c8 [32];
  IMovieSceneEntityMutation local_a8 [2];
  FEntityComponentFilter local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[1].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
  local_98.AllMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[2].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[3].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[4].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[5].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[10].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[0xb].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[6].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[7].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[8].Pad[3] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[0] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[1] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[2] = '\0';
  local_98.NoneMask.Bits.AllocatorInstance.InlineData[9].Pad[3] = '\0';
  local_98.AllMask.Bits.NumBits = 0;
  local_98.AllMask.Bits.MaxBits = 0x180;
  local_98.NoneMask.Bits.NumBits = 0;
  local_98.NoneMask.Bits.MaxBits = 0x180;
  local_98.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.ComplexMasks.ArrayNum = 0;
  local_98.ComplexMasks.ArrayMax = 0;
  CheckCanChangeStructure(this);
  local_a8[0] = (IMovieSceneEntityMutation)
                &`UE::MovieScene::FEntityManager::AddMutualComponents'::`2'::FBenignMutation::
                 _vftable_;
  MutateAll(this,&local_98,local_a8,All);
  if (local_98.ComplexMasks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.ComplexMasks.AllocatorInstance.Data);
  }
  return;
}

// AddReferencedObjects @ 146123290

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::AddReferencedObjects
          (FEntityManager *this,FReferenceCollector *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  IComplexComponentOps *pIVar6;
  code *pcVar7;
  bool bVar8;
  FComponentTypeInfo *pFVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  uStack_84 = 1;
  puVar1 = &(this->EntityAllocations).field_0x10;
  local_88 = 0;
  iVar4 = *(int *)&(this->EntityAllocations).field_0x28;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar4 != 0) {
    puVar15 = *(uint **)&(this->EntityAllocations).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar13 = *puVar15;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar13 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar10 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14612334a;
      uVar13 = puVar15[lVar10 + 1];
    }
    uStack_84 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iStack_74 = (int)lVar10 + -1 + iStack_70;
    if (iVar4 < iStack_74) {
LAB_14612334a:
      iStack_74 = iVar4;
    }
  }
  uVar13 = *(uint *)&(this->EntityAllocations).field_0x28;
  local_40 = *(int *)&(this->EntityAllocations).field_0x8 -
             *(int *)&(this->EntityAllocations).field_0x34;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  iVar12 = (int)uVar13 >> 5;
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  uVar16 = uVar13 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar5 = *(uint *)&(this->EntityAllocations).field_0x28;
  if (uVar13 != uVar5) {
    puVar14 = *(undefined1 **)&(this->EntityAllocations).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar12 * 4);
    while (uVar13 == 0) {
      lVar10 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar13 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_146123431;
      uVar13 = *(uint *)(puVar14 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar13 = (int)lVar10 + -1 + uVar16;
    if ((int)uVar5 < (int)uVar13) {
      uVar13 = uVar5;
    }
  }
LAB_146123431:
  while( true ) {
    if (*(int *)&(this->EntityAllocations).field_0x8 - *(int *)&(this->EntityAllocations).field_0x34
        != local_40) {
      `TSparseArray<UE::MovieScene::FEntityAllocation_*,FDefaultSparseArrayAllocator>::
      TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar13) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar10 = *(longlong *)
              (*(longlong *)&this->EntityAllocations + (longlong)local_60.CurrentBitIndex * 8);
    lVar11 = *(longlong *)(lVar10 + 0x28);
    uVar3 = *(undefined2 *)(lVar10 + 0xe);
    lVar10 = (ulonglong)*(ushort *)(lVar10 + 0xc) * 0x38 + lVar11;
    for (; lVar11 != lVar10; lVar11 = lVar11 + 0x38) {
      pFVar9 = FComponentRegistry::GetComponentTypeChecked
                         (this->ComponentRegistry,(FComponentTypeID)*(ushort *)(lVar11 + 0x36));
      if (((*(char *)(lVar11 + 0x34) != '\0') && (pFVar9->bHasReferencedObjects != '\0')) &&
         (pIVar6 = (pFVar9->ComplexComponentOps).Ptr, pIVar6 != (IComplexComponentOps *)0x0)) {
        (**(code **)((longlong)*pIVar6 + 0x28))(pIVar6,param_1,*(undefined8 *)(lVar11 + 0x18),uVar3)
        ;
      }
    }
    local_60._padding_._4_4_ = (uint)((ulonglong)local_60._padding_ >> 0x20);
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// AllocateContiguousEntities @ 146123c00

/* WARNING: Enum "Type": Some values do not have unique names */

FEntityDataLocation * __thiscall
UE::MovieScene::FEntityManager::AllocateContiguousEntities
          (FEntityManager *this,FEntityDataLocation *__return_storage_ptr__,FComponentMask *param_1,
          int *param_2)

{
  TSparseArray<UE::MovieScene::FEntityManager::FEntityLocation,FDefaultSparseArrayAllocator>
  *this_00;
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  FEntityAllocation *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  FEntityDataLocation *pFVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  FEntityLocation local_res10;
  FSparseArrayAllocationInfo local_48;
  
  if ((param_2 == (int *)0x0) || (*param_2 < 1)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOutNum && *InOutNum >= 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                       ,0x206,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar12 = (FEntityDataLocation *)(*pcVar6)();
      return pFVar12;
    }
  }
  CheckCanChangeStructure(this);
  uVar8 = GetOrCreateAllocationWithSlack(this,param_1,param_2);
  iVar2 = *param_2;
  this_00 = &this->EntityLocations;
  local_res10.AllocationIndex = 0xffff;
  local_res10.EntryIndexWithinAllocation = 0;
  local_res10.ParentID.Value = 0xffff;
  iVar9 = TSparseArray<UE::MovieScene::FEntityManager::FEntityLocation,FDefaultSparseArrayAllocator>
          ::Add(this_00,&local_res10);
  if (((longlong)iVar9 & 0xffff0000U) != 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index & 0xFFFF0000) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityIDs.h"
                       ,0x153,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar12 = (FEntityDataLocation *)(*pcVar6)();
      return pFVar12;
    }
  }
  iVar10 = AddEntityToAllocation(this,uVar8,(FMovieSceneEntityID)(ushort)iVar9,DefaultConstructed);
  FEntityLocation::Set
            ((FEntityLocation *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar9 * 8),uVar8,
             iVar10);
  if (1 < iVar2) {
    uVar14 = (ulonglong)(iVar2 - 1);
    do {
      iVar2 = *(int *)&(this->EntityLocations).field_0x34;
      if (iVar2 == 0) {
        iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,4,1,(ForAnyElementType *)this_00,
                           (int *)&(this->EntityLocations).field_0x8,
                           (int *)&(this->EntityLocations).field_0xc);
        TBitArray<FDefaultBitArrayAllocator>::Add
                  ((TBitArray<FDefaultBitArrayAllocator> *)&(this->EntityLocations).field_0x10,false
                  );
      }
      else {
        iVar9 = *(int *)&(this->EntityLocations).field_0x30;
        iVar2 = iVar2 + -1;
        iVar3 = *(int *)(*(longlong *)&this_00->field_0x0 + 4 + (longlong)iVar9 * 8);
        *(int *)&(this->EntityLocations).field_0x30 = iVar3;
        *(int *)&(this->EntityLocations).field_0x34 = iVar2;
        if (iVar2 != 0) {
          *(undefined4 *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar3 * 8) = 0xffffffff;
        }
      }
      TSparseArrayBase<6,2,FDefaultSparseArrayAllocator>::AllocateIndex
                ((TSparseArrayBase<6,2,FDefaultSparseArrayAllocator> *)this_00,&local_48,iVar9);
      iVar2 = local_48.Index;
      if (local_48.Pointer != (undefined4 *)0x0) {
        *(undefined4 *)local_48.Pointer = 0xffff;
        *(undefined2 *)((longlong)local_48.Pointer + 4) = 0xffff;
      }
      uVar13 = (ulonglong)local_48.Index;
      if ((uVar13 & 0xffff0000) != 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index & 0xFFFF0000) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityIDs.h"
                           ,0x153,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          pFVar12 = (FEntityDataLocation *)(*pcVar6)();
          return pFVar12;
        }
      }
      uVar11 = AddEntityToAllocation
                         (this,uVar8,(FMovieSceneEntityID)(ushort)iVar2,DefaultConstructed);
      puVar1 = (undefined2 *)(*(longlong *)&this_00->field_0x0 + uVar13 * 8);
      if (((uVar11 | uVar8) & 0xffff0000) != 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(InAllocationIndex & 0xFFFF0000) == 0 && (InEntryIndexWithinAllocation & 0xFFFF0000) == 0"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                           ,0x3ad,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          pFVar12 = (FEntityDataLocation *)(*pcVar6)();
          return pFVar12;
        }
      }
      *puVar1 = (short)uVar8;
      puVar1[1] = (short)uVar11;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  lVar4 = *(longlong *)&this->EntityAllocations;
  __return_storage_ptr__->ComponentOffset = iVar10;
  pFVar5 = *(FEntityAllocation **)(lVar4 + (longlong)(int)uVar8 * 8);
  this->StructureMutationSystemSerialNumber = this->SystemSerialNumber;
  __return_storage_ptr__->Allocation = pFVar5;
  this->bAccumulatedMaskStale = true;
  return __return_storage_ptr__;
}

// AllocateEntity @ 146123e90

/* WARNING: Enum "Type": Some values do not have unique names */

FEntityInfo * __thiscall
UE::MovieScene::FEntityManager::AllocateEntity
          (FEntityManager *this,FEntityInfo *__return_storage_ptr__,FComponentMask *param_1)

{
  FEntityAllocation *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  TTypeCompatibleBytes<unsigned_int> *pTVar8;
  FEntityInfo *pFVar9;
  ulonglong uVar10;
  uint uVar11;
  FEntityLocation local_res20;
  FEntityLocation local_48 [3];
  undefined4 uStack_34;
  undefined6 uStack_2e;
  
  uVar10 = 0;
  iVar5 = (param_1->Bits).NumBits;
  uVar4 = iVar5 + 0x1f;
  pTVar8 = (TTypeCompatibleBytes<unsigned_int> *)param_1;
  if (uVar4 >> 5 != 0) {
    do {
      if (*(int *)(((TBitArray<TFixedAllocator<12>_> *)pTVar8->Pad)->AllocatorInstance).InlineData
                  [0].Pad != 0) {
        pTVar8 = (param_1->Bits).AllocatorInstance.InlineData + uVar10;
        iVar6 = 0;
        bVar3 = *(int *)pTVar8->Pad != 0;
        if (bVar3) {
          for (; (*(uint *)pTVar8->Pad >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
          }
        }
        iVar7 = 0x20;
        if (bVar3) {
          iVar7 = iVar6;
        }
        iVar7 = iVar7 + (int)uVar10 * 0x20;
        if ((iVar7 < iVar5) && (iVar7 != -1)) {
          if ((this->LockdownState != Unlocked) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("LockdownState == ELockdownState::Unlocked",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                                 ,0x1ee,
                                 L"Structural changes to the entity manager are not permitted while it is locked down"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            pFVar9 = (FEntityInfo *)(*pcVar2)();
            return pFVar9;
          }
          if (((this->IterationCount).Payload != 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IterationCount.Load(ThreadingModel) == 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                                 ,0x2fe,
                                 L"Mutation of entities is not permissible while entities are being iterated"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            pFVar9 = (FEntityInfo *)(*pcVar2)();
            return pFVar9;
          }
          if ((this->LockdownState != Unlocked) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("LockdownState == ELockdownState::Unlocked",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                                 ,0x2ff,
                                 L"Structural changes to the entity manager are not permitted while it is locked down"
                                ), bVar3)) {
            pcVar2 = (code *)swi(3);
            pFVar9 = (FEntityInfo *)(*pcVar2)();
            return pFVar9;
          }
          local_res20.AllocationIndex = 0xffff;
          local_res20.EntryIndexWithinAllocation = 0;
          local_res20.ParentID.Value = 0xffff;
          iVar5 = TSparseArray<UE::MovieScene::FEntityManager::FEntityLocation,FDefaultSparseArrayAllocator>
                  ::Add(&this->EntityLocations,&local_res20);
          if ((((longlong)iVar5 & 0xffff0000U) != 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index & 0xFFFF0000) == 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityIDs.h"
                                 ,0x153,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            pFVar9 = (FEntityInfo *)(*pcVar2)();
            return pFVar9;
          }
          iVar6 = GetOrCreateAllocationWithSlack(this,param_1,(int *)0x0);
          iVar7 = AddEntityToAllocation
                            (this,iVar6,(FMovieSceneEntityID)(ushort)iVar5,DefaultConstructed);
          FEntityLocation::Set
                    ((FEntityLocation *)(*(longlong *)&this->EntityLocations + (longlong)iVar5 * 8),
                     iVar6,iVar7);
          pFVar1 = *(FEntityAllocation **)
                    (*(longlong *)&this->EntityAllocations + (longlong)iVar6 * 8);
          this->StructureMutationSystemSerialNumber = this->SystemSerialNumber;
          this->bAccumulatedMaskStale = true;
          (__return_storage_ptr__->Data).Allocation = pFVar1;
          *(ulonglong *)&(__return_storage_ptr__->Data).ComponentOffset = CONCAT44(uStack_34,iVar7);
          *(ulonglong *)&__return_storage_ptr__->EntityID = CONCAT62(uStack_2e,(ushort)iVar5);
          return __return_storage_ptr__;
        }
        break;
      }
      uVar11 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar11;
      pTVar8 = pTVar8 + 1;
    } while ((int)uVar11 < (int)(uVar4 >> 5));
  }
  CheckCanChangeStructure(this);
  local_48[0].AllocationIndex = 0xffff;
  local_48[0].EntryIndexWithinAllocation = 0;
  local_48[0].ParentID.Value = 0xffff;
  uVar4 = TSparseArray<UE::MovieScene::FEntityManager::FEntityLocation,FDefaultSparseArrayAllocator>
          ::Add(&this->EntityLocations,local_48);
  if (((uVar4 & 0xffff0000) != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index & 0xFFFF0000) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityIDs.h"
                         ,0x153,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar9 = (FEntityInfo *)(*pcVar2)();
    return pFVar9;
  }
  (__return_storage_ptr__->Data).Allocation = (FEntityAllocation *)0x0;
  (__return_storage_ptr__->Data).ComponentOffset = -1;
  (__return_storage_ptr__->EntityID).Value = (ushort)uVar4;
  return __return_storage_ptr__;
}

// AllocateEntity @ 146124110

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall UE::MovieScene::FEntityManager::AllocateEntity(FEntityManager *this)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  uint uVar4;
  undefined2 *in_RDX;
  FEntityLocation local_res8;
  
  CheckCanChangeStructure(this);
  local_res8.AllocationIndex = 0xffff;
  local_res8.EntryIndexWithinAllocation = 0;
  local_res8.ParentID.Value = 0xffff;
  uVar4 = TSparseArray<UE::MovieScene::FEntityManager::FEntityLocation,FDefaultSparseArrayAllocator>
          ::Add(&this->EntityLocations,&local_res8);
  if ((uVar4 & 0xffff0000) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index & 0xFFFF0000) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityIDs.h"
                       ,0x153,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (FMovieSceneEntityID)uVar3;
    }
  }
  *in_RDX = (short)uVar4;
  return (FMovieSceneEntityID)(ushort)in_RDX;
}

// ChangeEntityType @ 146125ef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::ChangeEntityType
          (FEntityManager *this,FMovieSceneEntityID param_1,FComponentMask *param_2)

{
  FEntityLocation *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  TTypeCompatibleBytes<unsigned_int> *pTVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  CheckCanChangeStructure(this);
  iVar2 = (param_2->Bits).NumBits;
  uVar6 = 0;
  uVar5 = iVar2 + 0x1f;
  pTVar4 = (TTypeCompatibleBytes<unsigned_int> *)param_2;
  if (uVar5 >> 5 == 0) {
LAB_146125f5e:
    iVar7 = -1;
LAB_146125f63:
    this_00 = (FEntityLocation *)
              (*(longlong *)&this->EntityLocations + (ulonglong)param_1.Value * 8);
    if (*(short *)(*(longlong *)&this->EntityLocations + (ulonglong)param_1.Value * 8) == -1) {
      if (iVar7 == -1) {
        return;
      }
    }
    else {
      bVar1 = TBitArray<TFixedAllocator<12>_>::CompareSetBits<TFixedAllocator<12>_>
                        ((TBitArray<TFixedAllocator<12>_> *)
                         ((ulonglong)this_00->AllocationIndex * 0x38 +
                         *(longlong *)&this->EntityAllocationMasks),&param_2->Bits,false);
      if (bVar1) {
        return;
      }
      if (iVar7 == -1) {
        RemoveEntityFromAllocation
                  (this,(uint)this_00->AllocationIndex,(uint)this_00->EntryIndexWithinAllocation);
        this_00->AllocationIndex = 0xffff;
        this_00->EntryIndexWithinAllocation = 0;
        return;
      }
    }
    iVar2 = GetOrCreateAllocationWithSlack(this,param_2,(int *)0x0);
    if (this_00->AllocationIndex == 0xffff) {
      iVar3 = AddEntityToAllocation(this,iVar2,param_1,DefaultConstructed);
    }
    else {
      iVar3 = MigrateEntity(this,iVar2,(uint)this_00->AllocationIndex,
                            (uint)this_00->EntryIndexWithinAllocation);
    }
    FEntityLocation::Set(this_00,iVar2,iVar3);
    this->StructureMutationSystemSerialNumber = this->SystemSerialNumber;
    this->bAccumulatedMaskStale = true;
    return;
  }
LAB_146125f34:
  if (*(int *)(((TBitArray<TFixedAllocator<12>_> *)pTVar4->Pad)->AllocatorInstance).InlineData[0].
              Pad == 0) goto code_r0x000146125f39;
  pTVar4 = (param_2->Bits).AllocatorInstance.InlineData + uVar6;
  iVar3 = 0;
  bVar1 = *(int *)pTVar4->Pad != 0;
  if (bVar1) {
    for (; (*(uint *)pTVar4->Pad >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
    }
  }
  iVar7 = 0x20;
  if (bVar1) {
    iVar7 = iVar3;
  }
  iVar7 = iVar7 + uVar6 * 0x20;
  if (iVar7 < iVar2) goto LAB_146125f63;
  goto LAB_146125f5e;
code_r0x000146125f39:
  uVar6 = uVar6 + 1;
  pTVar4 = pTVar4 + 1;
  if ((int)(uVar5 >> 5) <= (int)uVar6) goto LAB_146125f5e;
  goto LAB_146125f34;
}

// CheckCanChangeStructure @ 146126040

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::MovieScene::FEntityManager::CheckCanChangeStructure(FEntityManager *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (((this->IterationCount).Payload != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IterationCount.Load(ThreadingModel) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                         ,0x2fe,
                         L"Mutation of entities is not permissible while entities are being iterated"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((this->LockdownState != Unlocked) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("LockdownState == ELockdownState::Unlocked",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                         ,0x2ff,
                         L"Structural changes to the entity manager are not permitted while it is locked down"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// CheckInvariants @ 1461260c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::MovieScene::FEntityManager::CheckInvariants(FEntityManager *this)

{
  return;
}

// CombineAllocations @ 1461272d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::CombineAllocations(FEntityManager *this,int param_1,int param_2)

{
  int *piVar1;
  undefined2 *puVar2;
  uint *puVar3;
  ushort uVar4;
  ushort uVar5;
  FEntityAllocation *pFVar6;
  FMovieSceneEntityID *pFVar7;
  code *pcVar8;
  bool bVar9;
  FEntityAllocation *pFVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  ForElementType<unsigned_int> FVar15;
  uint uVar16;
  ulonglong uVar17;
  
  CheckCanChangeStructure(this);
  pFVar10 = *(FEntityAllocation **)(*(longlong *)&this->EntityAllocations + (longlong)param_1 * 8);
  pFVar6 = *(FEntityAllocation **)(*(longlong *)&this->EntityAllocations + (longlong)param_2 * 8);
  if (((int)((uint)pFVar10->MaxCapacity - (uint)pFVar10->Size) < (int)(uint)pFVar6->Size) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("DstAllocation->GetMaxCapacity() - DstAllocation->Num() >= SrcAllocation->Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                         ,0x810,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((int)((uint)pFVar10->Capacity - (uint)pFVar10->Size) < (int)(uint)pFVar6->Size) {
    pFVar10 = GrowAllocation(this,param_1,(uint)pFVar6->Size);
  }
  uVar4 = pFVar10->Size;
  uVar13 = 0;
  pFVar7 = pFVar6->EntityIDs;
  uVar5 = pFVar6->Size;
  if (uVar5 != 0) {
    uVar17 = uVar13;
    do {
      iVar14 = (int)uVar13;
      if ((iVar14 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar16 = iVar14 + (uint)uVar4;
      puVar2 = (undefined2 *)
               (*(longlong *)&this->EntityLocations +
               (ulonglong)*(ushort *)((longlong)&pFVar7->Value + uVar17) * 8);
      if ((((uVar16 | param_1) & 0xffff0000) != 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(InAllocationIndex & 0xFFFF0000) == 0 && (InEntryIndexWithinAllocation & 0xFFFF0000) == 0"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                             ,0x3ad,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar13 = (ulonglong)(iVar14 + 1U);
      puVar2[1] = (short)uVar16;
      uVar17 = uVar17 + 2;
      *puVar2 = (short)param_1;
    } while ((int)(iVar14 + 1U) < (int)(uint)uVar5);
  }
  uVar17 = 0;
  FEntityInitializer::MigrateAllocation(pFVar10,pFVar6,this->ComponentRegistry);
  CheckCanChangeStructure(this);
  uVar13 = uVar17;
  if (pFVar6->NumComponents != 0) {
    do {
      (*(code *)**(undefined8 **)((longlong)&pFVar6->ComponentHeaders->_padding_ + uVar13))
                (pFVar6->ComponentHeaders + (int)uVar17,0);
      uVar16 = (int)uVar17 + 1;
      uVar17 = (ulonglong)uVar16;
      uVar13 = uVar13 + 0x38;
    } while ((int)uVar16 < (int)(uint)pFVar6->NumComponents);
  }
  if (pFVar6->ComponentData != (uchar *)0x0) {
    FMemory::Free(pFVar6->ComponentData);
  }
  FMemory::Free(pFVar6);
  TSparseArray<UE::MovieScene::FComponentMask,FDefaultSparseArrayAllocator>::RemoveAt
            (&this->EntityAllocationMasks,param_2,1);
  TSparseArrayBase<8,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
            ((TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *)&this->EntityAllocations,param_2,
             1);
  piVar1 = &(this->AllocationsWithCapacity).NumBits;
  if (((param_2 < 0) || (*piVar1 <= param_2)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar15 = (this->AllocationsWithCapacity).AllocatorInstance.SecondaryData;
  if (FVar15 == (ForElementType<unsigned_int>)0x0) {
    FVar15 = (ForElementType<unsigned_int>)&this->AllocationsWithCapacity;
  }
  puVar3 = (uint *)((longlong)FVar15 +
                   (longlong)((int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar3 = *puVar3 & ~(1 << ((byte)param_2 & 0x1f));
  uVar4 = pFVar10->Size;
  uVar5 = pFVar10->MaxCapacity;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar15 = (this->AllocationsWithCapacity).AllocatorInstance.SecondaryData;
  if (FVar15 == (ForElementType<unsigned_int>)0x0) {
    FVar15 = (ForElementType<unsigned_int>)&this->AllocationsWithCapacity;
  }
  lVar11 = (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5);
  uVar16 = *(uint *)((longlong)FVar15 + lVar11 * 4);
  uVar12 = 1 << ((byte)param_1 & 0x1f);
  if (uVar4 < uVar5) {
    uVar16 = uVar16 | uVar12;
  }
  else {
    uVar16 = uVar16 & ~uVar12;
  }
  *(uint *)(lVar11 * 4 + (longlong)FVar15) = uVar16;
  this->StructureMutationSystemSerialNumber = this->SystemSerialNumber;
  this->bAccumulatedMaskStale = true;
  return;
}

// CombineComponents @ 1461275f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::CombineComponents
          (FEntityManager *this,FMovieSceneEntityID param_1,FMovieSceneEntityID param_2,
          FComponentMask *param_3)

{
  longlong lVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStackY_c8 [32];
  <lambda_1> local_98 [4];
  uint local_94;
  uint local_8c;
  TBitArray<TFixedAllocator<12>_> local_84;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  CheckCanChangeStructure(this);
  lVar1 = (ulonglong)param_1.Value * 8;
  uVar2 = *(uint *)(*(longlong *)&this->EntityLocations + (ulonglong)param_2.Value * 8);
  local_8c = *(uint *)(*(longlong *)&this->EntityLocations + lVar1);
  if ((uVar2 & 0xffff) != 0xffff) {
    uVar8 = 0xffffffff;
    if ((local_8c & 0xffff) != 0xffff) {
      uVar8 = local_8c & 0xffff;
    }
    local_84.NumBits = 0;
    local_84.MaxBits = 0;
    local_94 = uVar2;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
              (&local_84,
               (TBitArray<TFixedAllocator<12>_> *)
               ((ulonglong)(ushort)uVar2 * 0x38 + *(longlong *)&this->EntityAllocationMasks));
    if (param_3 != (FComponentMask *)0x0) {
      Core::Private::
      BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseAND<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
                (&param_3->Bits,&local_84,MaxSize,local_98);
    }
    if (uVar8 == 0xffffffff) {
      iVar6 = GetOrCreateAllocationWithSlack(this,(FComponentMask *)&local_84,(int *)0x0);
      iVar7 = AddEntityToAllocation(this,iVar6,param_1,DefaultConstructed);
      CopyComponents(this,iVar6,iVar7,uVar2 & 0xffff,local_94 >> 0x10,(FComponentMask *)0x0);
      FEntityLocation::Set
                ((FEntityLocation *)(*(longlong *)&this->EntityLocations + lVar1),iVar6,iVar7);
    }
    else {
      Core::Private::
      BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
                ((TBitArray<TFixedAllocator<12>_> *)
                 (*(longlong *)&this->EntityAllocationMasks + (longlong)(int)uVar8 * 0x38),&local_84
                 ,MaxSize,(<lambda_1> *)local_98);
      uVar5 = local_8c >> 0x10;
      bVar3 = TBitArray<TFixedAllocator<12>_>::CompareSetBits<TFixedAllocator<12>_>
                        (&local_84,
                         (TBitArray<TFixedAllocator<12>_> *)
                         (*(longlong *)&this->EntityAllocationMasks + (longlong)(int)uVar8 * 0x38),
                         false);
      uVar4 = uVar8;
      if (!bVar3) {
        uVar4 = GetOrCreateAllocationWithSlack(this,(FComponentMask *)&local_84,(int *)0x0);
        uVar5 = MigrateEntity(this,uVar4,uVar8,uVar5);
        FEntityLocation::Set
                  ((FEntityLocation *)(*(longlong *)&this->EntityLocations + lVar1),uVar4,uVar5);
      }
      CopyComponents(this,uVar4,uVar5,uVar2 & 0xffff,local_94 >> 0x10,param_3);
    }
    this->StructureMutationSystemSerialNumber = this->SystemSerialNumber;
    this->bAccumulatedMaskStale = true;
  }
  return;
}

// Compact @ 146127b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::MovieScene::FEntityManager::Compact(FEntityManager *this)

{
  int *piVar1;
  TSparseArray<UE::MovieScene::FEntityManager::FEntityLocation,FDefaultSparseArrayAllocator> *pTVar2
  ;
  undefined2 *puVar3;
  ulonglong uVar4;
  ushort uVar5;
  undefined2 uVar6;
  int iVar7;
  FEntityAllocation *pFVar8;
  TBitArray<TFixedAllocator<12>_> *this_00;
  code *pcVar9;
  byte bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  bool bVar15;
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  FSparseArrayAllocationInfo *pFVar19;
  longlong lVar20;
  uint *puVar21;
  longlong lVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  ForElementType<unsigned_int> FVar25;
  ForElementType<unsigned_int> FVar26;
  ForElementType<FSetElementId> FVar27;
  uint *puVar28;
  int iVar29;
  undefined1 *puVar30;
  TSparseArray<UE::MovieScene::FEntityManager::FEntityLocation,FDefaultSparseArrayAllocator>
  *pTVar31;
  int iVar32;
  ForElementType<unsigned_int> FVar33;
  int iVar34;
  uint uVar35;
  uint uVar36;
  undefined1 auStack_198 [32];
  uint local_178;
  uint local_174;
  undefined1 local_170 [8];
  longlong local_168;
  uint local_160;
  FEntityManager *local_158;
  undefined1 *local_150;
  int local_148;
  uint uStack_144;
  undefined1 *puStack_140;
  undefined4 local_138;
  int iStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  TSparseArray<UE::MovieScene::FEntityManager::FEntityLocation,FDefaultSparseArrayAllocator>
  *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_120;
  int local_100;
  int local_f8;
  int local_f4;
  TPairInitializer<int_const_&,int_const_&> local_f0;
  ForElementType<unsigned_int> local_e0;
  uint *local_d8;
  uint *local_d0;
  FSparseArrayAllocationInfo local_c8;
  FSparseArrayAllocationInfo local_b8;
  TBitArray<FDefaultBitArrayAllocator> local_a8;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_198;
  iVar34 = *(int *)&(this->EntityAllocations).field_0x8;
  uVar35 = 0;
  local_158 = this;
  if (0 < iVar34) {
    puVar30 = &(this->EntityAllocations).field_0x10;
    local_168 = 0;
    local_150 = puVar30;
    do {
      iVar34 = 0;
      if ((((int)uVar35 < 0) || (*(int *)(puVar30 + 0x18) <= (int)uVar35)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5c6,L""), bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      puVar23 = puVar30;
      if (*(undefined1 **)(puVar30 + 0x10) != (undefined1 *)0x0) {
        puVar23 = *(undefined1 **)(puVar30 + 0x10);
      }
      uVar16 = uVar35;
      if ((int)uVar35 < 0) {
        uVar16 = uVar35 + 0x1f;
      }
      if ((*(uint *)(puVar23 + (longlong)((int)uVar16 >> 5) * 4) >> (uVar35 & 0x1f) & 1) != 0) {
        local_e0 = (ForElementType<unsigned_int>)&this->AllocationsWithCapacity;
        iVar7 = (this->AllocationsWithCapacity).NumBits;
        local_160 = (uint)*(ushort *)
                           (*(longlong *)(*(longlong *)&this->EntityAllocations + local_168) + 0xe);
        if (iVar7 != 0) {
          FVar26 = (this->AllocationsWithCapacity).AllocatorInstance.SecondaryData;
          FVar25 = local_e0;
          if (FVar26 != (ForElementType<unsigned_int>)0x0) {
            FVar25 = FVar26;
          }
          uVar16 = *(uint *)FVar25;
          iVar29 = iVar34;
          while (uVar16 == 0) {
            lVar22 = (longlong)iVar29;
            iVar34 = iVar34 + 0x20;
            iVar29 = iVar29 + 1;
            if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar29) goto LAB_146127de9;
            uVar16 = *(uint *)((uchar *)((longlong)FVar25 + 4) + lVar22 * 4);
          }
          uVar16 = -uVar16 & uVar16;
          uVar4 = (ulonglong)uVar16 * 2 + 1;
          lVar22 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          local_f8 = (int)lVar22;
          iVar32 = local_f8 + -1 + iVar34;
          if (iVar32 < iVar7) {
            uVar36 = 0xffffffff;
            while( true ) {
              if ((int)uVar35 <= iVar32) goto LAB_146127de9;
              bVar15 = TBitArray<TFixedAllocator<12>_>::CompareSetBits<TFixedAllocator<12>_>
                                 ((TBitArray<TFixedAllocator<12>_> *)
                                  ((longlong)iVar32 * 0x38 +
                                  *(longlong *)&this->EntityAllocationMasks),
                                  (TBitArray<TFixedAllocator<12>_> *)
                                  ((longlong)(int)uVar35 * 0x38 +
                                  *(longlong *)&this->EntityAllocationMasks),false);
              this = local_158;
              puVar30 = local_150;
              if ((bVar15) &&
                 (lVar22 = *(longlong *)
                            (*(longlong *)&local_158->EntityAllocations + (longlong)iVar32 * 8),
                 (int)local_160 <=
                 (int)((uint)*(ushort *)(lVar22 + 0x12) - (uint)*(ushort *)(lVar22 + 0xe)))) break;
              uVar36 = ~uVar16 & uVar36;
              iVar7 = *(int *)((longlong)local_e0 + 0x18);
              FVar26 = local_e0;
              if (*(ForElementType<unsigned_int> *)((longlong)local_e0 + 0x10) !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar26 = *(ForElementType<unsigned_int> *)((longlong)local_e0 + 0x10);
              }
              uVar16 = uVar36 & *(uint *)((longlong)FVar26 + (longlong)iVar29 * 4);
              while (uVar16 == 0) {
                lVar22 = (longlong)iVar29;
                iVar34 = iVar34 + 0x20;
                iVar29 = iVar29 + 1;
                if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar29)
                goto LAB_146127ded;
                uVar36 = 0xffffffff;
                uVar16 = *(uint *)((longlong)FVar26 + 4 + lVar22 * 4);
              }
              uVar16 = -uVar16 & uVar16;
              uVar4 = (ulonglong)uVar16 * 2 + 1;
              lVar22 = 0x3f;
              if (uVar4 != 0) {
                for (; uVar4 >> lVar22 == 0; lVar22 = lVar22 + -1) {
                }
              }
              local_f4 = (int)lVar22;
              iVar32 = iVar34 + -1 + local_f4;
              if ((iVar7 < iVar32) || (iVar7 <= iVar32)) goto LAB_146127ded;
            }
            if (iVar32 != -1) {
              CombineAllocations(local_158,iVar32,uVar35);
              goto LAB_146127de9;
            }
            goto LAB_146127ded;
          }
        }
LAB_146127de9:
        puVar30 = &(this->EntityAllocations).field_0x10;
      }
LAB_146127ded:
      iVar34 = *(int *)&(this->EntityAllocations).field_0x8;
      local_168 = local_168 + 8;
      uVar35 = uVar35 + 1;
    } while ((int)uVar35 < iVar34);
  }
  local_174 = 0;
  local_178 = 0;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  if (0 < iVar34) {
    do {
      uVar35 = local_178;
      if ((((int)local_178 < 0) || (*(int *)&(this->EntityAllocations).field_0x28 <= (int)local_178)
          ) && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5c6,L""), bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      puVar30 = *(undefined1 **)&(this->EntityAllocations).field_0x20;
      puVar23 = &(this->EntityAllocations).field_0x10;
      if (puVar30 != (undefined1 *)0x0) {
        puVar23 = puVar30;
      }
      uVar16 = uVar35 & 0x1f;
      if ((int)uVar35 < 0) {
        uVar35 = uVar35 + 0x1f;
      }
      if ((*(uint *)(puVar23 + (longlong)((int)uVar35 >> 5) * 4) >> uVar16 & 1) != 0) {
        pFVar8 = *(FEntityAllocation **)
                  (*(longlong *)&this->EntityAllocations + (longlong)(int)local_178 * 8);
        if (pFVar8->Size == 0) {
          DestroyAllocation(this,pFVar8,true);
          uVar35 = local_178;
          if ((((int)local_178 < 0) || ((this->AllocationsWithCapacity).NumBits <= (int)local_178))
             && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Index>=0 && Index<NumBits",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                     ,0x5be,L""), bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          FVar26 = (this->AllocationsWithCapacity).AllocatorInstance.SecondaryData;
          FVar25 = (ForElementType<unsigned_int>)&this->AllocationsWithCapacity;
          if (FVar26 != (ForElementType<unsigned_int>)0x0) {
            FVar25 = FVar26;
          }
          uVar16 = uVar35;
          if ((int)uVar35 < 0) {
            uVar16 = uVar35 + 0x1f;
          }
          puVar28 = (uint *)((longlong)FVar25 + (longlong)((int)uVar16 >> 5) * 4);
          *puVar28 = *puVar28 & ~(1 << ((byte)uVar35 & 0x1f));
        }
        else {
          if (local_178 != local_174) {
            pFVar19 = TSparseArrayBase<8,8,FDefaultSparseArrayAllocator>::InsertUninitialized
                                ((TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *)
                                 &this->EntityAllocations,&local_c8,local_174);
            if (pFVar19->Pointer != (undefined8 *)0x0) {
              *(FEntityAllocation **)pFVar19->Pointer = pFVar8;
            }
            TSparseArrayBase<8,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
                      ((TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *)
                       &this->EntityAllocations,local_178,1);
            lVar20 = (longlong)(int)local_178;
            lVar22 = *(longlong *)&this->EntityAllocationMasks;
            pFVar19 = TSparseArrayBase<56,4,FDefaultSparseArrayAllocator>::InsertUninitialized
                                ((TSparseArrayBase<56,4,FDefaultSparseArrayAllocator> *)
                                 &this->EntityAllocationMasks,&local_b8,local_174);
            this_00 = pFVar19->Pointer;
            if (this_00 != (TBitArray<TFixedAllocator<12>_> *)0x0) {
              this_00->NumBits = 0;
              this_00->MaxBits = 0;
              TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
                        (this_00,(TBitArray<TFixedAllocator<12>_> *)(lVar20 * 0x38 + lVar22));
            }
            uVar35 = local_178;
            lVar20 = (longlong)(int)local_178;
            puVar30 = &(this->EntityAllocationMasks).field_0x10;
            lVar22 = *(longlong *)&this->EntityAllocationMasks;
            bVar10 = (byte)local_178 & 0x1f;
            uVar16 = 1 << bVar10 | 1U >> 0x20 - bVar10;
            if ((((int)local_178 < 0) ||
                (*(int *)&(this->EntityAllocationMasks).field_0x28 <= (int)local_178)) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar15)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            puVar23 = *(undefined1 **)&(this->EntityAllocationMasks).field_0x20;
            puVar24 = puVar30;
            if (puVar23 != (undefined1 *)0x0) {
              puVar24 = puVar23;
            }
            uVar36 = uVar35;
            if ((int)uVar35 < 0) {
              uVar36 = uVar35 + 0x1f;
            }
            if (((*(uint *)(puVar24 + (longlong)((int)uVar36 >> 5) * 4) & uVar16) == 0) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("AllocationFlags[Index]",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                    ,0xc5,L""), bVar15)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if (*(int *)&(this->EntityAllocationMasks).field_0x34 != 0) {
              *(uint *)((longlong)*(int *)&(this->EntityAllocationMasks).field_0x30 * 0x38 + lVar22)
                   = uVar35;
            }
            *(undefined4 *)(lVar20 * 0x38 + lVar22) = 0xffffffff;
            if (*(int *)&(this->EntityAllocationMasks).field_0x34 < 1) {
              uVar17 = 0xffffffff;
            }
            else {
              uVar17 = *(undefined4 *)&(this->EntityAllocationMasks).field_0x30;
            }
            *(undefined4 *)(lVar20 * 0x38 + 4 + lVar22) = uVar17;
            puVar23 = &(this->EntityAllocationMasks).field_0x34;
            *(int *)puVar23 = *(int *)puVar23 + 1;
            *(uint *)&(this->EntityAllocationMasks).field_0x30 = uVar35;
            if ((((int)uVar35 < 0) ||
                (*(int *)&(this->EntityAllocationMasks).field_0x28 <= (int)uVar35)) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar15)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uVar36 = local_178;
            puVar23 = *(undefined1 **)&(this->EntityAllocationMasks).field_0x20;
            if (puVar23 != (undefined1 *)0x0) {
              puVar30 = puVar23;
            }
            if ((int)uVar35 < 0) {
              uVar35 = uVar35 + 0x1f;
            }
            *(uint *)(puVar30 + (longlong)((int)uVar35 >> 5) * 4) =
                 *(uint *)(puVar30 + (longlong)((int)uVar35 >> 5) * 4) & ~uVar16;
            piVar1 = &(this->AllocationsWithCapacity).NumBits;
            if ((((int)local_178 < 0) || (*piVar1 <= (int)local_178)) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar15)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uVar35 = local_174;
            FVar26 = (this->AllocationsWithCapacity).AllocatorInstance.SecondaryData;
            FVar25 = (ForElementType<unsigned_int>)&this->AllocationsWithCapacity;
            if (FVar26 != (ForElementType<unsigned_int>)0x0) {
              FVar25 = FVar26;
            }
            uVar16 = uVar36;
            if ((int)uVar36 < 0) {
              uVar16 = uVar36 + 0x1f;
            }
            if ((((int)local_174 < 0) || (*piVar1 <= (int)local_174)) &&
               (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5be,L""), bVar15)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uVar14 = local_178;
            FVar26 = (this->AllocationsWithCapacity).AllocatorInstance.SecondaryData;
            FVar33 = (ForElementType<unsigned_int>)&this->AllocationsWithCapacity;
            if (FVar26 != (ForElementType<unsigned_int>)0x0) {
              FVar33 = FVar26;
            }
            uVar18 = uVar35;
            if ((int)uVar35 < 0) {
              uVar18 = uVar35 + 0x1f;
            }
            lVar22 = (longlong)((int)uVar18 >> 5) * 4;
            uVar18 = 1 << ((byte)uVar35 & 0x1f);
            uVar35 = *(uint *)((longlong)FVar33 + lVar22);
            if ((*(uint *)((longlong)FVar25 + (longlong)((int)uVar16 >> 5) * 4) &
                1 << ((byte)uVar36 & 0x1f)) == 0) {
              uVar18 = ~uVar18 & uVar35;
            }
            else {
              uVar18 = uVar18 | uVar35;
            }
            *(uint *)(lVar22 + (longlong)FVar33) = uVar18;
            if ((((int)local_178 < 0) || ((this->AllocationsWithCapacity).NumBits <= (int)local_178)
                ) && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Index>=0 && Index<NumBits",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                          ,0x5be,L""), bVar15)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            FVar26 = (this->AllocationsWithCapacity).AllocatorInstance.SecondaryData;
            FVar25 = (ForElementType<unsigned_int>)&this->AllocationsWithCapacity;
            if (FVar26 != (ForElementType<unsigned_int>)0x0) {
              FVar25 = FVar26;
            }
            uVar35 = uVar14;
            if ((int)uVar14 < 0) {
              uVar35 = uVar14 + 0x1f;
            }
            puVar28 = (uint *)((longlong)FVar25 + (longlong)((int)uVar35 >> 5) * 4);
            *puVar28 = *puVar28 & ~(1 << ((byte)uVar14 & 0x1f));
            local_d8 = &local_178;
            local_d0 = &local_174;
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
            Emplace<TPairInitializer<int_const_&,int_const_&>_>
                      (&local_88,&local_f0,(bool *)&local_d8);
          }
          local_174 = local_174 + 1;
        }
      }
      local_178 = local_178 + 1;
    } while ((int)local_178 < *(int *)&(this->EntityAllocations).field_0x8);
  }
  if (0 < (int)(local_88.Elements._8_4_ - local_88.Elements._52_4_)) {
    pTVar2 = &this->EntityLocations;
    uStack_144 = 1;
    iVar34 = *(int *)&(this->EntityLocations).field_0x28;
    puStack_140 = &(this->EntityLocations).field_0x10;
    local_148 = 0;
    iStack_134 = 0;
    iStack_130 = 0;
    if (iVar34 != 0) {
      puVar28 = *(uint **)&(this->EntityLocations).field_0x20;
      if (puVar28 == (uint *)0x0) {
        puVar28 = (uint *)puStack_140;
      }
      uVar35 = *puVar28;
      iStack_130 = 0;
      local_148 = 0;
      while (uVar35 == 0) {
        iStack_130 = iStack_130 + 0x20;
        lVar22 = (longlong)local_148;
        local_148 = local_148 + 1;
        if ((int)(iVar34 + -1 + (iVar34 + -1 >> 0x1f & 0x1fU)) >> 5 < local_148) goto LAB_14612832c;
        uVar35 = puVar28[lVar22 + 1];
      }
      uStack_144 = -uVar35 & uVar35;
      uVar4 = (ulonglong)uStack_144 * 2 + 1;
      lVar22 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      local_f0.Key._4_4_ = (int)lVar22;
      iStack_134 = iStack_130 + -1 + local_f0.Key._4_4_;
      if (iVar34 < iStack_134) {
LAB_14612832c:
        iStack_134 = iVar34;
      }
    }
    local_138 = 0xffffffff;
    uVar35 = *(uint *)&(this->EntityLocations).field_0x28;
    puVar30 = &(this->EntityLocations).field_0x10;
    local_100 = *(int *)&(this->EntityLocations).field_0x8 -
                *(int *)&(this->EntityLocations).field_0x34;
    local_120._padding_ = CONCAT44(uStack_144,local_148);
    local_120.CurrentBitIndex = iStack_134;
    local_120.UnvisitedBitMask = 0xffffffff;
    local_120._28_4_ = uStack_12c;
    local_120.BaseBitIndex = iStack_130;
    local_160 = -1 << ((byte)uVar35 & 0x1f);
    uVar16 = uVar35 & 0xffffffe0;
    iVar34 = (int)uVar35 >> 5;
    local_128 = pTVar2;
    local_120.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_140;
    if (((int)uVar35 < 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar36 = *(uint *)&(this->EntityLocations).field_0x28;
    if (uVar35 != uVar36) {
      puVar23 = *(undefined1 **)&(this->EntityLocations).field_0x20;
      puVar24 = puVar30;
      if (puVar23 != (undefined1 *)0x0) {
        puVar24 = puVar23;
      }
      uVar35 = local_160 & *(uint *)(puVar24 + (longlong)iVar34 * 4);
      while (uVar35 == 0) {
        lVar22 = (longlong)iVar34;
        uVar16 = uVar16 + 0x20;
        iVar34 = iVar34 + 1;
        uVar35 = uVar36;
        if ((int)((uVar36 - 1) + ((int)(uVar36 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar34)
        goto LAB_146128423;
        uVar35 = *(uint *)(puVar24 + lVar22 * 4 + 4);
      }
      uVar4 = (ulonglong)(-uVar35 & uVar35) * 2 + 1;
      lVar22 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      local_f0.Value._0_4_ = (int)lVar22;
      uVar35 = (uVar16 - 1) + (int)local_f0.Value;
      if ((int)uVar36 < (int)uVar35) {
        uVar35 = uVar36;
      }
    }
LAB_146128423:
    pTVar31 = pTVar2;
    while( true ) {
      if (*(int *)&pTVar31->field_0x8 - *(int *)&pTVar31->field_0x34 != local_100) {
        local_170[0] = 0;
        `TSparseArray<UE::MovieScene::FEntityManager::FEntityLocation,FDefaultSparseArrayAllocator>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_170);
      }
      if (((local_120.CurrentBitIndex == uVar35) &&
          (local_120.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar30)) &&
         (this = local_158, pTVar31 == pTVar2)) break;
      uVar5 = *(ushort *)(*(longlong *)pTVar31 + (longlong)local_120.CurrentBitIndex * 8);
      puVar3 = (undefined2 *)(*(longlong *)pTVar31 + (longlong)local_120.CurrentBitIndex * 8);
      if ((uVar5 != 0xffff) && (local_88.Elements._8_4_ != local_88.Elements._52_4_)) {
        FVar27 = (ForElementType<FSetElementId>)&local_88.Hash;
        if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar27 = local_88.Hash.SecondaryData;
        }
        uVar16 = *(uint *)((longlong)FVar27 +
                          ((ulonglong)(local_88.HashSize - 1) & (ulonglong)uVar5) * 4);
        while (uVar16 != 0xffffffff) {
          puVar28 = (uint *)((longlong)(int)uVar16 * 0x10 + local_88.Elements._0_8_);
          if (*puVar28 == (uint)uVar5) {
            puVar21 = puVar28 + 1;
            if (puVar28 == (uint *)0x0) {
              puVar21 = (uint *)0x0;
            }
            if (puVar21 != (uint *)0x0) {
              uVar16 = *puVar21;
              uVar6 = puVar3[1];
              if (((uVar16 & 0xffff0000) != 0) &&
                 (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(InAllocationIndex & 0xFFFF0000) == 0 && (InEntryIndexWithinAllocation & 0xFFFF0000) == 0"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                                      ,0x3ad,L""), bVar15)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              *puVar3 = (short)uVar16;
              puVar3[1] = uVar6;
            }
            break;
          }
          uVar16 = puVar28[2];
        }
      }
      local_120.UnvisitedBitMask = local_120.UnvisitedBitMask & ~local_120._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_120);
      pTVar31 = local_128;
    }
  }
  if (local_174 != local_178) {
    TSparseArrayBase<8,8,FDefaultSparseArrayAllocator>::Shrink
              ((TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *)&this->EntityAllocations);
    TSparseArrayBase<56,4,FDefaultSparseArrayAllocator>::Shrink
              ((TSparseArrayBase<56,4,FDefaultSparseArrayAllocator> *)&this->EntityAllocationMasks);
    TBitArray<FDefaultBitArrayAllocator>::RemoveAt
              (&this->AllocationsWithCapacity,local_174,
               ((this->AllocationsWithCapacity).NumBits - local_174) + -1);
    local_a8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_a8.NumBits = 0;
    local_a8.MaxBits = 0;
    uVar35 = (this->AllocationsWithCapacity).NumBits + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar35) {
      uVar16 = 0x80;
      if (0x80 < (int)uVar35) {
        uVar16 = uVar35;
      }
      local_a8._24_8_ = (ulonglong)uVar16 << 0x20;
      TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_a8,0);
    }
    iVar34 = (this->AllocationsWithCapacity).NumBits;
    local_a8.NumBits = iVar34;
    if (iVar34 != 0) {
      FVar26 = (this->AllocationsWithCapacity).AllocatorInstance.SecondaryData;
      FVar25 = (ForElementType<unsigned_int>)&this->AllocationsWithCapacity;
      if (FVar26 != (ForElementType<unsigned_int>)0x0) {
        FVar25 = FVar26;
      }
      FVar26 = (ForElementType<unsigned_int>)&local_a8;
      if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar26 = local_a8.AllocatorInstance.SecondaryData;
      }
      memcpy((void *)FVar26,(void *)FVar25,(ulonglong)(iVar34 + 0x1fU >> 5) << 2);
    }
    FVar26 = (this->AllocationsWithCapacity).AllocatorInstance.SecondaryData;
    uVar11._0_4_ = (this->AllocationsWithCapacity).NumBits;
    uVar11._4_4_ = (this->AllocationsWithCapacity).MaxBits;
    uVar12 = *(undefined8 *)(this->AllocationsWithCapacity).AllocatorInstance.InlineData;
    uVar13 = *(undefined8 *)((this->AllocationsWithCapacity).AllocatorInstance.InlineData + 8);
    *(undefined8 *)(this->AllocationsWithCapacity).AllocatorInstance.InlineData =
         local_a8.AllocatorInstance.InlineData._0_8_;
    *(undefined8 *)((this->AllocationsWithCapacity).AllocatorInstance.InlineData + 8) =
         local_a8.AllocatorInstance.InlineData._8_8_;
    (this->AllocationsWithCapacity).AllocatorInstance.SecondaryData =
         local_a8.AllocatorInstance.SecondaryData;
    (this->AllocationsWithCapacity).NumBits = local_a8.NumBits;
    (this->AllocationsWithCapacity).MaxBits = local_a8.MaxBits;
    local_a8.AllocatorInstance.InlineData._0_8_ = uVar12;
    local_a8.AllocatorInstance.InlineData._8_8_ = uVar13;
    local_a8.AllocatorInstance.SecondaryData = FVar26;
    local_a8._24_8_ = uVar11;
    if (FVar26 != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)FVar26);
    }
  }
  TSparseArrayBase<6,2,FDefaultSparseArrayAllocator>::Shrink
            ((TSparseArrayBase<6,2,FDefaultSparseArrayAllocator> *)&this->EntityLocations);
  this->StructureMutationSystemSerialNumber = this->SystemSerialNumber;
  this->bAccumulatedMaskStale = true;
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  return;
}

// ComputeThreadingModel @ 146128b30

/* WARNING: Enum "Type": Some values do not have unique names */

EEntityThreadingModel __thiscall
UE::MovieScene::FEntityManager::ComputeThreadingModel(FEntityManager *this)

{
  bool bVar1;
  
  bVar1 = FGenericPlatformProcess::SupportsMultithreading();
  if ((bVar1) &&
     ((GThreadedEvaluationAllocationThreshold <=
       *(int *)&(this->EntityAllocations).field_0x8 - *(int *)&(this->EntityAllocations).field_0x34
      || (GThreadedEvaluationEntityThreshold <=
          *(int *)&(this->EntityLocations).field_0x8 - *(int *)&(this->EntityLocations).field_0x34))
     )) {
    return TaskGraph;
  }
  return NoThreading;
}

// Contains @ 1461293b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::FEntityManager::Contains(FEntityManager *this,FEntityComponentFilter *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FEntityAllocationIterator local_38;
  FEntityAllocationIterator local_20;
  
  if (param_1 == (FEntityComponentFilter *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InFilter",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                       ,0x405,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  FEntityAllocationIterator::FEntityAllocationIterator(&local_20,this,param_1);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_38,this);
  bVar2 = FEntityAllocationIterator::operator!=(&local_20,&local_38);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_38);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_20);
  return bVar2;
}

// CopyComponent @ 146129450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::FEntityManager::CopyComponent
          (FEntityManager *this,FMovieSceneEntityID param_1,FMovieSceneEntityID param_2,
          FComponentTypeID param_3)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  IComplexComponentOps *pIVar7;
  code *pcVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  uint uVar12;
  FComponentHeader *this_00;
  FComponentHeader *this_01;
  FComponentTypeInfo *pFVar13;
  void *_Dst;
  void *_Src;
  longlong lVar14;
  TBitArray<TFixedAllocator<12>_> *pTVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 auStack_a8 [32];
  uint local_88;
  undefined2 local_80;
  uint local_7c;
  undefined2 local_78;
  undefined2 local_70;
  TBitArray<TFixedAllocator<12>_> local_6c;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_a8;
  uVar16 = (ulonglong)param_2.Value;
  CheckCanChangeStructure(this);
  uVar4 = *(uint *)(*(longlong *)&this->EntityLocations + (ulonglong)param_1.Value * 8);
  local_78 = *(undefined2 *)(*(longlong *)&this->EntityLocations + 4 + (ulonglong)param_1.Value * 8)
  ;
  if ((((short)uVar4 != -1) &&
      (lVar14 = (ulonglong)(uVar4 & 0xffff) * 0x38 + *(longlong *)&this->EntityAllocationMasks,
      param_3.Value != 0xffff)) &&
     (uVar12 = (uint)param_3.Value, (int)uVar12 < *(int *)(lVar14 + 0x30))) {
    uVar17 = 1 << ((byte)param_3.Value & 0x1f);
    lVar3 = (ulonglong)(param_3.Value >> 5) * 4;
    if ((*(uint *)(lVar3 + lVar14) & uVar17) != 0) {
      lVar14 = *(longlong *)&this->EntityLocations;
      bVar9 = false;
      local_80 = *(undefined2 *)(lVar14 + 4 + uVar16 * 8);
      uVar5 = *(uint *)(lVar14 + uVar16 * 8);
      uVar6 = *(uint *)(lVar14 + uVar16 * 8);
      local_70 = *(undefined2 *)(lVar14 + 4 + uVar16 * 8);
      local_88 = uVar5;
      local_7c = uVar4;
      if ((((short)uVar6 == -1) ||
          (lVar14 = (ulonglong)(uVar6 & 0xffff) * 0x38 + *(longlong *)&this->EntityAllocationMasks,
          *(int *)(lVar14 + 0x30) <= (int)uVar12)) || ((*(uint *)(lVar3 + lVar14) & uVar17) == 0)) {
        local_6c.MaxBits = 0x180;
        local_6c.NumBits = 0;
        if (((short)uVar5 != -1) &&
           (pTVar15 = (TBitArray<TFixedAllocator<12>_> *)
                      ((ulonglong)(uVar5 & 0xffff) * 0x38 +
                      *(longlong *)&this->EntityAllocationMasks), &local_6c != pTVar15)) {
          TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(&local_6c,pTVar15);
        }
        iVar11 = (uVar12 - local_6c.NumBits) + 1;
        if (0 < iVar11) {
          TBitArray<TFixedAllocator<12>_>::Add(&local_6c,false,iVar11);
        }
        if ((local_6c.NumBits <= (int)uVar12) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          uVar10 = (*pcVar8)();
          return (bool)uVar10;
        }
        pTVar1 = local_6c.AllocatorInstance.InlineData + (param_3.Value >> 5);
        *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)param_3.Value & 0x1f);
        uVar12 = GetOrCreateAllocationWithSlack(this,(FComponentMask *)&local_6c,(int *)0x0);
        if ((uVar5 & 0xffff) == 0xffff) {
          uVar17 = AddEntityToAllocation(this,uVar12,param_2,DefaultConstructed);
        }
        else {
          uVar17 = MigrateEntity(this,uVar12,uVar5 & 0xffff,local_88 >> 0x10);
        }
        if ((((uVar17 | uVar12) & 0xffff0000) != 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(InAllocationIndex & 0xFFFF0000) == 0 && (InEntryIndexWithinAllocation & 0xFFFF0000) == 0"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                               ,0x3ad,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          uVar10 = (*pcVar8)();
          return (bool)uVar10;
        }
        bVar9 = true;
        local_88 = CONCAT22((short)uVar17,(short)uVar12);
        puVar2 = (uint *)(*(longlong *)&this->EntityLocations + uVar16 * 8);
        *puVar2 = local_88;
        *(undefined2 *)(puVar2 + 1) = local_80;
      }
      else {
        uVar17 = uVar5 >> 0x10;
        uVar12 = uVar5 & 0xffff;
      }
      this_00 = FEntityAllocation::GetComponentHeaderChecked
                          (*(FEntityAllocation **)
                            (*(longlong *)&this->EntityAllocations + (ulonglong)(uVar4 & 0xffff) * 8
                            ),param_3);
      this_01 = FEntityAllocation::GetComponentHeaderChecked
                          (*(FEntityAllocation **)
                            (*(longlong *)&this->EntityAllocations +
                            (ulonglong)(uVar12 & 0xffff) * 8),param_3);
      pFVar13 = FComponentRegistry::GetComponentTypeChecked(this->ComponentRegistry,param_3);
      _Dst = FComponentHeader::GetValuePtr(this_01,uVar17 & 0xffff);
      _Src = FComponentHeader::GetValuePtr(this_00,local_7c >> 0x10);
      uVar16 = this->SystemSerialNumber;
      if (pFVar13->bIsTriviallyCopyAssignable == '\0') {
        pIVar7 = (pFVar13->ComplexComponentOps).Ptr;
        (**(code **)((longlong)*pIVar7 + 0x18))(pIVar7,_Dst,_Src,1);
      }
      else {
        memcpy(_Dst,_Src,(ulonglong)pFVar13->Sizeof);
      }
      if (uVar16 < this_01->SerialNumber) {
        uVar16 = this_01->SerialNumber;
      }
      this_01->SerialNumber = uVar16;
      if (bVar9) {
        this->StructureMutationSystemSerialNumber = this->SystemSerialNumber;
        this->bAccumulatedMaskStale = true;
      }
      return true;
    }
  }
  return false;
}

// CopyComponents @ 1461297a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::CopyComponents
          (FEntityManager *this,int param_1,int param_2,int param_3,int param_4,
          FComponentMask *param_5)

{
  ushort uVar1;
  FComponentTypeID FVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  IComplexComponentOps *pIVar6;
  code *pcVar7;
  bool bVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  FComponentTypeInfo *pFVar11;
  void *_Dst;
  void *_Src;
  FComponentHeader *pFVar12;
  FComponentHeader *this_00;
  FComponentHeader *this_01;
  ulonglong uVar13;
  uint uVar14;
  
  CheckCanChangeStructure(this);
  lVar3 = *(longlong *)(*(longlong *)&this->EntityAllocations + (longlong)param_3 * 8);
  puVar4 = *(ulonglong **)(*(longlong *)&this->EntityAllocations + (longlong)param_1 * 8);
  this_01 = *(FComponentHeader **)(lVar3 + 0x28);
  pFVar12 = this_01 + ((ulonglong)*(ushort *)(lVar3 + 0xc) - 1);
  if ((((int)(uint)*(ushort *)(lVar3 + 0xe) <= param_4) ||
      ((int)(uint)*(ushort *)((longlong)puVar4 + 0xe) <= param_2)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SrcOffset < Src->Num() && DstOffset < Dst->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                         ,0x8f9,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar5 = this->SystemSerialNumber;
  uVar9 = uVar5;
  if (uVar5 < *puVar4) {
    uVar9 = *puVar4;
  }
  uVar13 = 0;
  *puVar4 = uVar9;
  uVar9 = uVar13;
  if (*(short *)((longlong)puVar4 + 0xc) != 0) {
    do {
      this_00 = (FComponentHeader *)(puVar4[5] + uVar13);
      if (param_5 == (FComponentMask *)0x0) {
LAB_14612989d:
        uVar10 = uVar5;
        if (uVar5 < this_00->SerialNumber) {
          uVar10 = this_00->SerialNumber;
        }
        this_00->SerialNumber = uVar10;
        if (this_01 != pFVar12) {
          do {
            if ((this_00->ComponentType).Value <= (this_01->ComponentType).Value) break;
            this_01 = this_01 + 1;
          } while (this_01 != pFVar12);
        }
        FVar2.Value = (this_01->ComponentType).Value;
        if (((this_00->ComponentType).Value == FVar2.Value) && (this_01->Sizeof != '\0')) {
          pFVar11 = FComponentRegistry::GetComponentTypeChecked(this->ComponentRegistry,FVar2);
          _Dst = FComponentHeader::GetValuePtr(this_00,param_2);
          _Src = FComponentHeader::GetValuePtr(this_01,param_4);
          if (pFVar11->bIsTriviallyCopyAssignable == '\0') {
            pIVar6 = (pFVar11->ComplexComponentOps).Ptr;
            (**(code **)((longlong)*pIVar6 + 0x18))(pIVar6,_Dst,_Src,1);
          }
          else {
            memcpy(_Dst,_Src,(ulonglong)pFVar11->Sizeof);
          }
        }
      }
      else {
        uVar1 = (this_00->ComponentType).Value;
        if (((uVar1 != 0xffff) && ((int)(uint)uVar1 < (param_5->Bits).NumBits)) &&
           ((*(uint *)(param_5->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f)
            & 1) != 0)) goto LAB_14612989d;
      }
      uVar14 = (int)uVar9 + 1;
      uVar13 = uVar13 + 0x38;
      uVar9 = (ulonglong)uVar14;
    } while ((int)uVar14 < (int)(uint)*(ushort *)((longlong)puVar4 + 0xc));
  }
  this->StructureMutationSystemSerialNumber = this->SystemSerialNumber;
  this->bAccumulatedMaskStale = true;
  return;
}

// CopyComponents @ 146129990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::CopyComponents
          (FEntityManager *this,FMovieSceneEntityID param_1,FMovieSceneEntityID param_2,
          FComponentMask *param_3)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  TBitArray<TFixedAllocator<12>_> *pTVar11;
  uint *puVar12;
  uint uVar13;
  bool bVar15;
  undefined1 auStackY_1b8 [32];
  FEntityLocation local_188;
  <lambda_1> local_180;
  <lambda_1> local_17f [3];
  uint local_17c;
  undefined2 local_178;
  longlong local_170;
  int local_168;
  TBitArray<TFixedAllocator<12>_> local_164;
  TBitArray<TFixedAllocator<12>_> local_12c;
  TBitArray<TFixedAllocator<12>_> local_f4;
  TBitArray<TFixedAllocator<12>_> local_bc;
  TBitArray<TFixedAllocator<12>_> local_84;
  ulonglong local_48;
  ulonglong uVar14;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  uVar14 = (ulonglong)param_2.Value;
  CheckCanChangeStructure(this);
  lVar4 = *(longlong *)&this->EntityLocations;
  local_178 = *(undefined2 *)(lVar4 + 4 + (ulonglong)param_1.Value * 8);
  uVar7 = *(uint *)(lVar4 + uVar14 * 8);
  uVar2 = *(ushort *)(lVar4 + 4 + uVar14 * 8);
  uVar3 = *(uint *)(lVar4 + (ulonglong)param_1.Value * 8);
  local_170 = uVar14 * 8;
  if ((short)uVar3 != -1) {
    local_164.NumBits = 0;
    local_12c.NumBits = 0;
    local_12c.MaxBits = 0x180;
    bVar6 = false;
    local_188._0_4_ = uVar7;
    local_188.ParentID.Value = uVar2;
    local_17c = uVar3;
    Core::Private::
    BitwiseBinaryOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::BitwiseAND<TFixedAllocator<12>,TFixedAllocator<12>_>_::__l2::<lambda_1>_>
              (&param_3->Bits,
               (TBitArray<TFixedAllocator<12>_> *)
               ((ulonglong)(uVar3 & 0xffff) * 0x38 + *(longlong *)&this->EntityAllocationMasks),
               &local_12c,MinSize,&local_180);
    iVar9 = local_12c.NumBits;
    uVar14 = 0;
    uVar8 = local_12c.NumBits + 0x1f;
    local_164.NumBits = local_12c.NumBits;
    local_164.AllocatorInstance.InlineData[0].Pad[0] =
         local_12c.AllocatorInstance.InlineData[0].Pad[0];
    local_164.AllocatorInstance.InlineData[0].Pad[1] =
         local_12c.AllocatorInstance.InlineData[0].Pad[1];
    local_164.AllocatorInstance.InlineData[0].Pad[2] =
         local_12c.AllocatorInstance.InlineData[0].Pad[2];
    local_164.AllocatorInstance.InlineData[0].Pad[3] =
         local_12c.AllocatorInstance.InlineData[0].Pad[3];
    local_164.AllocatorInstance.InlineData[1].Pad[0] =
         local_12c.AllocatorInstance.InlineData[1].Pad[0];
    local_164.AllocatorInstance.InlineData[1].Pad[1] =
         local_12c.AllocatorInstance.InlineData[1].Pad[1];
    local_164.AllocatorInstance.InlineData[1].Pad[2] =
         local_12c.AllocatorInstance.InlineData[1].Pad[2];
    local_164.AllocatorInstance.InlineData[1].Pad[3] =
         local_12c.AllocatorInstance.InlineData[1].Pad[3];
    local_164.AllocatorInstance.InlineData[2].Pad[0] =
         local_12c.AllocatorInstance.InlineData[2].Pad[0];
    local_164.AllocatorInstance.InlineData[2].Pad[1] =
         local_12c.AllocatorInstance.InlineData[2].Pad[1];
    local_164.AllocatorInstance.InlineData[2].Pad[2] =
         local_12c.AllocatorInstance.InlineData[2].Pad[2];
    local_164.AllocatorInstance.InlineData[2].Pad[3] =
         local_12c.AllocatorInstance.InlineData[2].Pad[3];
    local_164.AllocatorInstance.InlineData[3].Pad[0] =
         local_12c.AllocatorInstance.InlineData[3].Pad[0];
    local_164.AllocatorInstance.InlineData[3].Pad[1] =
         local_12c.AllocatorInstance.InlineData[3].Pad[1];
    local_164.AllocatorInstance.InlineData[3].Pad[2] =
         local_12c.AllocatorInstance.InlineData[3].Pad[2];
    local_164.AllocatorInstance.InlineData[3].Pad[3] =
         local_12c.AllocatorInstance.InlineData[3].Pad[3];
    local_164.MaxBits = local_12c.MaxBits;
    local_12c.NumBits = 0;
    local_12c.MaxBits = 0;
    local_164.AllocatorInstance.InlineData[4].Pad[0] =
         local_12c.AllocatorInstance.InlineData[4].Pad[0];
    local_164.AllocatorInstance.InlineData[4].Pad[1] =
         local_12c.AllocatorInstance.InlineData[4].Pad[1];
    local_164.AllocatorInstance.InlineData[4].Pad[2] =
         local_12c.AllocatorInstance.InlineData[4].Pad[2];
    local_164.AllocatorInstance.InlineData[4].Pad[3] =
         local_12c.AllocatorInstance.InlineData[4].Pad[3];
    local_164.AllocatorInstance.InlineData[5].Pad[0] =
         local_12c.AllocatorInstance.InlineData[5].Pad[0];
    local_164.AllocatorInstance.InlineData[5].Pad[1] =
         local_12c.AllocatorInstance.InlineData[5].Pad[1];
    local_164.AllocatorInstance.InlineData[5].Pad[2] =
         local_12c.AllocatorInstance.InlineData[5].Pad[2];
    local_164.AllocatorInstance.InlineData[5].Pad[3] =
         local_12c.AllocatorInstance.InlineData[5].Pad[3];
    local_164.AllocatorInstance.InlineData[6].Pad[0] =
         local_12c.AllocatorInstance.InlineData[6].Pad[0];
    local_164.AllocatorInstance.InlineData[6].Pad[1] =
         local_12c.AllocatorInstance.InlineData[6].Pad[1];
    local_164.AllocatorInstance.InlineData[6].Pad[2] =
         local_12c.AllocatorInstance.InlineData[6].Pad[2];
    local_164.AllocatorInstance.InlineData[6].Pad[3] =
         local_12c.AllocatorInstance.InlineData[6].Pad[3];
    local_164.AllocatorInstance.InlineData[7].Pad[0] =
         local_12c.AllocatorInstance.InlineData[7].Pad[0];
    local_164.AllocatorInstance.InlineData[7].Pad[1] =
         local_12c.AllocatorInstance.InlineData[7].Pad[1];
    local_164.AllocatorInstance.InlineData[7].Pad[2] =
         local_12c.AllocatorInstance.InlineData[7].Pad[2];
    local_164.AllocatorInstance.InlineData[7].Pad[3] =
         local_12c.AllocatorInstance.InlineData[7].Pad[3];
    local_164.AllocatorInstance.InlineData[8].Pad[0] =
         local_12c.AllocatorInstance.InlineData[8].Pad[0];
    local_164.AllocatorInstance.InlineData[8].Pad[1] =
         local_12c.AllocatorInstance.InlineData[8].Pad[1];
    local_164.AllocatorInstance.InlineData[8].Pad[2] =
         local_12c.AllocatorInstance.InlineData[8].Pad[2];
    local_164.AllocatorInstance.InlineData[8].Pad[3] =
         local_12c.AllocatorInstance.InlineData[8].Pad[3];
    local_164.AllocatorInstance.InlineData[9].Pad[0] =
         local_12c.AllocatorInstance.InlineData[9].Pad[0];
    local_164.AllocatorInstance.InlineData[9].Pad[1] =
         local_12c.AllocatorInstance.InlineData[9].Pad[1];
    local_164.AllocatorInstance.InlineData[9].Pad[2] =
         local_12c.AllocatorInstance.InlineData[9].Pad[2];
    local_164.AllocatorInstance.InlineData[9].Pad[3] =
         local_12c.AllocatorInstance.InlineData[9].Pad[3];
    local_164.AllocatorInstance.InlineData[10].Pad[0] =
         local_12c.AllocatorInstance.InlineData[10].Pad[0];
    local_164.AllocatorInstance.InlineData[10].Pad[1] =
         local_12c.AllocatorInstance.InlineData[10].Pad[1];
    local_164.AllocatorInstance.InlineData[10].Pad[2] =
         local_12c.AllocatorInstance.InlineData[10].Pad[2];
    local_164.AllocatorInstance.InlineData[10].Pad[3] =
         local_12c.AllocatorInstance.InlineData[10].Pad[3];
    local_164.AllocatorInstance.InlineData[0xb].Pad[0] =
         local_12c.AllocatorInstance.InlineData[0xb].Pad[0];
    local_164.AllocatorInstance.InlineData[0xb].Pad[1] =
         local_12c.AllocatorInstance.InlineData[0xb].Pad[1];
    local_164.AllocatorInstance.InlineData[0xb].Pad[2] =
         local_12c.AllocatorInstance.InlineData[0xb].Pad[2];
    local_164.AllocatorInstance.InlineData[0xb].Pad[3] =
         local_12c.AllocatorInstance.InlineData[0xb].Pad[3];
    if (uVar8 >> 5 != 0) {
      pTVar11 = &local_164;
      do {
        if (*(int *)(pTVar11->AllocatorInstance).InlineData[0].Pad != 0) {
          pTVar1 = local_164.AllocatorInstance.InlineData + uVar14;
          local_168 = 0;
          bVar15 = *(int *)pTVar1->Pad != 0;
          if (bVar15) {
            for (; (*(uint *)pTVar1->Pad >> local_168 & 1) == 0; local_168 = local_168 + 1) {
            }
          }
          iVar10 = 0x20;
          if (bVar15) {
            iVar10 = local_168;
          }
          iVar10 = iVar10 + (int)uVar14 * 0x20;
          if (iVar9 <= iVar10) {
            return;
          }
          if (iVar10 == -1) {
            return;
          }
          if ((short)uVar7 == -1) {
            uVar7 = GetOrCreateAllocationWithSlack(this,(FComponentMask *)&local_164,(int *)0x0);
            uVar8 = AddEntityToAllocation(this,uVar7,param_2,DefaultConstructed);
            if ((((uVar8 | uVar7) & 0xffff0000) != 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(InAllocationIndex & 0xFFFF0000) == 0 && (InEntryIndexWithinAllocation & 0xFFFF0000) == 0"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                                   ,0x3ad,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            puVar12 = (uint *)(local_170 + *(longlong *)&this->EntityLocations);
            local_188._0_4_ = CONCAT22((short)uVar8,(short)uVar7);
            *puVar12 = local_188._0_4_;
            *(ushort *)(puVar12 + 1) = uVar2;
          }
          else {
            local_84.NumBits = 0;
            local_84.MaxBits = 0;
            TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
                      (&local_84,
                       (TBitArray<TFixedAllocator<12>_> *)
                       ((ulonglong)(uVar7 & 0xffff) * 0x38 +
                       *(longlong *)&this->EntityAllocationMasks));
            local_f4.NumBits = 0;
            local_f4.MaxBits = 0x180;
            Core::Private::
            BitwiseBinaryOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::BitwiseOR<TFixedAllocator<12>,TFixedAllocator<12>_>_::__l2::<lambda_1>_>
                      (&local_84,&local_164,&local_f4,MaxSize,local_17f);
            local_bc.NumBits = local_f4.NumBits;
            local_bc.AllocatorInstance.InlineData[0].Pad[0] =
                 local_f4.AllocatorInstance.InlineData[0].Pad[0];
            local_bc.AllocatorInstance.InlineData[0].Pad[1] =
                 local_f4.AllocatorInstance.InlineData[0].Pad[1];
            local_bc.AllocatorInstance.InlineData[0].Pad[2] =
                 local_f4.AllocatorInstance.InlineData[0].Pad[2];
            local_bc.AllocatorInstance.InlineData[0].Pad[3] =
                 local_f4.AllocatorInstance.InlineData[0].Pad[3];
            local_bc.AllocatorInstance.InlineData[1].Pad[0] =
                 local_f4.AllocatorInstance.InlineData[1].Pad[0];
            local_bc.AllocatorInstance.InlineData[1].Pad[1] =
                 local_f4.AllocatorInstance.InlineData[1].Pad[1];
            local_bc.AllocatorInstance.InlineData[1].Pad[2] =
                 local_f4.AllocatorInstance.InlineData[1].Pad[2];
            local_bc.AllocatorInstance.InlineData[1].Pad[3] =
                 local_f4.AllocatorInstance.InlineData[1].Pad[3];
            local_bc.AllocatorInstance.InlineData[2].Pad[0] =
                 local_f4.AllocatorInstance.InlineData[2].Pad[0];
            local_bc.AllocatorInstance.InlineData[2].Pad[1] =
                 local_f4.AllocatorInstance.InlineData[2].Pad[1];
            local_bc.AllocatorInstance.InlineData[2].Pad[2] =
                 local_f4.AllocatorInstance.InlineData[2].Pad[2];
            local_bc.AllocatorInstance.InlineData[2].Pad[3] =
                 local_f4.AllocatorInstance.InlineData[2].Pad[3];
            local_bc.AllocatorInstance.InlineData[3].Pad[0] =
                 local_f4.AllocatorInstance.InlineData[3].Pad[0];
            local_bc.AllocatorInstance.InlineData[3].Pad[1] =
                 local_f4.AllocatorInstance.InlineData[3].Pad[1];
            local_bc.AllocatorInstance.InlineData[3].Pad[2] =
                 local_f4.AllocatorInstance.InlineData[3].Pad[2];
            local_bc.AllocatorInstance.InlineData[3].Pad[3] =
                 local_f4.AllocatorInstance.InlineData[3].Pad[3];
            local_bc.MaxBits = local_f4.MaxBits;
            local_bc.AllocatorInstance.InlineData[4].Pad[0] =
                 local_f4.AllocatorInstance.InlineData[4].Pad[0];
            local_bc.AllocatorInstance.InlineData[4].Pad[1] =
                 local_f4.AllocatorInstance.InlineData[4].Pad[1];
            local_bc.AllocatorInstance.InlineData[4].Pad[2] =
                 local_f4.AllocatorInstance.InlineData[4].Pad[2];
            local_bc.AllocatorInstance.InlineData[4].Pad[3] =
                 local_f4.AllocatorInstance.InlineData[4].Pad[3];
            local_bc.AllocatorInstance.InlineData[5].Pad[0] =
                 local_f4.AllocatorInstance.InlineData[5].Pad[0];
            local_bc.AllocatorInstance.InlineData[5].Pad[1] =
                 local_f4.AllocatorInstance.InlineData[5].Pad[1];
            local_bc.AllocatorInstance.InlineData[5].Pad[2] =
                 local_f4.AllocatorInstance.InlineData[5].Pad[2];
            local_bc.AllocatorInstance.InlineData[5].Pad[3] =
                 local_f4.AllocatorInstance.InlineData[5].Pad[3];
            local_bc.AllocatorInstance.InlineData[6].Pad[0] =
                 local_f4.AllocatorInstance.InlineData[6].Pad[0];
            local_bc.AllocatorInstance.InlineData[6].Pad[1] =
                 local_f4.AllocatorInstance.InlineData[6].Pad[1];
            local_bc.AllocatorInstance.InlineData[6].Pad[2] =
                 local_f4.AllocatorInstance.InlineData[6].Pad[2];
            local_bc.AllocatorInstance.InlineData[6].Pad[3] =
                 local_f4.AllocatorInstance.InlineData[6].Pad[3];
            local_bc.AllocatorInstance.InlineData[7].Pad[0] =
                 local_f4.AllocatorInstance.InlineData[7].Pad[0];
            local_bc.AllocatorInstance.InlineData[7].Pad[1] =
                 local_f4.AllocatorInstance.InlineData[7].Pad[1];
            local_bc.AllocatorInstance.InlineData[7].Pad[2] =
                 local_f4.AllocatorInstance.InlineData[7].Pad[2];
            local_bc.AllocatorInstance.InlineData[7].Pad[3] =
                 local_f4.AllocatorInstance.InlineData[7].Pad[3];
            local_bc.AllocatorInstance.InlineData[8].Pad[0] =
                 local_f4.AllocatorInstance.InlineData[8].Pad[0];
            local_bc.AllocatorInstance.InlineData[8].Pad[1] =
                 local_f4.AllocatorInstance.InlineData[8].Pad[1];
            local_bc.AllocatorInstance.InlineData[8].Pad[2] =
                 local_f4.AllocatorInstance.InlineData[8].Pad[2];
            local_bc.AllocatorInstance.InlineData[8].Pad[3] =
                 local_f4.AllocatorInstance.InlineData[8].Pad[3];
            local_bc.AllocatorInstance.InlineData[9].Pad[0] =
                 local_f4.AllocatorInstance.InlineData[9].Pad[0];
            local_bc.AllocatorInstance.InlineData[9].Pad[1] =
                 local_f4.AllocatorInstance.InlineData[9].Pad[1];
            local_bc.AllocatorInstance.InlineData[9].Pad[2] =
                 local_f4.AllocatorInstance.InlineData[9].Pad[2];
            local_bc.AllocatorInstance.InlineData[9].Pad[3] =
                 local_f4.AllocatorInstance.InlineData[9].Pad[3];
            local_bc.AllocatorInstance.InlineData[10].Pad[0] =
                 local_f4.AllocatorInstance.InlineData[10].Pad[0];
            local_bc.AllocatorInstance.InlineData[10].Pad[1] =
                 local_f4.AllocatorInstance.InlineData[10].Pad[1];
            local_bc.AllocatorInstance.InlineData[10].Pad[2] =
                 local_f4.AllocatorInstance.InlineData[10].Pad[2];
            local_bc.AllocatorInstance.InlineData[10].Pad[3] =
                 local_f4.AllocatorInstance.InlineData[10].Pad[3];
            local_bc.AllocatorInstance.InlineData[0xb].Pad[0] =
                 local_f4.AllocatorInstance.InlineData[0xb].Pad[0];
            local_bc.AllocatorInstance.InlineData[0xb].Pad[1] =
                 local_f4.AllocatorInstance.InlineData[0xb].Pad[1];
            local_bc.AllocatorInstance.InlineData[0xb].Pad[2] =
                 local_f4.AllocatorInstance.InlineData[0xb].Pad[2];
            local_bc.AllocatorInstance.InlineData[0xb].Pad[3] =
                 local_f4.AllocatorInstance.InlineData[0xb].Pad[3];
            bVar15 = TBitArray<TFixedAllocator<12>_>::CompareSetBits<TFixedAllocator<12>_>
                               (&local_bc,&local_84,false);
            if (bVar15) goto LAB_146129c41;
            iVar9 = GetOrCreateAllocationWithSlack(this,(FComponentMask *)&local_bc,(int *)0x0);
            iVar10 = MigrateEntity(this,iVar9,uVar7 & 0xffff,(uint)local_188._0_4_ >> 0x10);
            FEntityLocation::Set(&local_188,iVar9,iVar10);
            uVar7 = local_188._0_4_ & 0xffff;
            puVar12 = (uint *)(local_170 + *(longlong *)&this->EntityLocations);
            *puVar12 = local_188._0_4_;
            *(ushort *)(puVar12 + 1) = local_188.ParentID.Value;
          }
          bVar6 = true;
LAB_146129c41:
          CopyComponents(this,uVar7 & 0xffff,(uint)local_188._0_4_ >> 0x10,uVar3 & 0xffff,
                         local_17c >> 0x10,(FComponentMask *)&local_164);
          if (!bVar6) {
            return;
          }
          this->StructureMutationSystemSerialNumber = this->SystemSerialNumber;
          this->bAccumulatedMaskStale = true;
          return;
        }
        uVar13 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
        pTVar11 = (TBitArray<TFixedAllocator<12>_> *)((pTVar11->AllocatorInstance).InlineData + 1);
      } while ((int)uVar13 < (int)(uVar8 >> 5));
    }
  }
  return;
}

// CreateAllocationWithSlack @ 146129cb0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UE::MovieScene::FEntityManager::CreateAllocationWithSlack
          (FEntityManager *this,FComponentMask *param_1,int *param_2)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = 4;
  if (param_2 != (int *)0x0) {
    uVar1 = 0x40;
    if ((ushort)*param_2 < 0x40) {
      uVar1 = (ushort)*param_2;
    }
    *param_2 = (uint)uVar1;
  }
  iVar2 = CreateEntityAllocationEntry(this,param_1,uVar1,0x40);
  return iVar2;
}

// CreateEntityAllocation @ 14612a0f0

/* WARNING: Enum "Type": Some values do not have unique names */

FEntityAllocation * __thiscall
UE::MovieScene::FEntityManager::CreateEntityAllocation
          (FEntityManager *this,FComponentMask *param_1,ushort param_2,ushort param_3,
          FEntityAllocation *param_4)

{
  ulonglong uVar1;
  ushort uVar2;
  uint uVar3;
  FComponentRegistry *this_00;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  FBuiltInComponentTypes *pFVar9;
  FEntityAllocation *pFVar10;
  FComponentTypeInfo *pFVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  ulong64 uVar15;
  TConstSetBitIterator<TFixedAllocator<12>_> local_b8;
  int local_98;
  ulong64 local_90;
  int local_88;
  ulong64 local_80;
  FEntityAllocationInitializationInfo local_78;
  
  CheckCanChangeStructure(this);
  pFVar9 = FBuiltInComponentTypes::Get();
  uVar2 = (pFVar9->Tags).NeedsLink.Value;
  if (uVar2 != 0xffff) {
    if (((int)(uint)uVar2 < (param_1->Bits).NumBits) &&
       ((*(uint *)(param_1->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >> (uVar2 & 0x1f) & 1
        ) != 0)) {
      pFVar9 = FBuiltInComponentTypes::Get();
      uVar2 = (pFVar9->Tags).NeedsUnlink.Value;
      if ((uVar2 != 0xffff) &&
         ((((int)(uint)uVar2 < (param_1->Bits).NumBits &&
           ((*(uint *)(param_1->Bits).AllocatorInstance.InlineData[uVar2 >> 5].Pad >> (uVar2 & 0x1f)
            & 1) != 0)) &&
          (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("!(EntityComponentMask.Contains(FBuiltInComponentTypes::Get()->Tags.NeedsLink) && EntityComponentMask.Contains(FBuiltInComponentTypes::Get()->Tags.NeedsUnlink))"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                              ,0x429,L""), bVar7)))) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FEntityAllocation *)(*pcVar5)();
        return pFVar10;
      }
    }
  }
  if (((param_3 < param_2) || (param_3 == 0xffff)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InitialCapacity <= MaxCapacity && MaxCapacity < ((uint16) 0xffff)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                         ,0x42a,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FEntityAllocation *)(*pcVar5)();
    return pFVar10;
  }
  iVar8 = FComponentMask::NumComponents(param_1);
  local_98 = iVar8;
  if ((0xfffe < (param_1->Bits).NumBits) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("EntityComponentMask.Num() < TNumericLimits<uint16>::Max()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                         ,0x42e,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FEntityAllocation *)(*pcVar5)();
    return pFVar10;
  }
  if ((0xfffd < iVar8 - 1U) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumComponents > 0 && NumComponents < TNumericLimits<uint16>::Max()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                         ,0x42f,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FEntityAllocation *)(*pcVar5)();
    return pFVar10;
  }
  local_80 = (longlong)iVar8 * 0x38;
  local_90 = 0x40;
  FComponentMask::Iterate(param_1,&local_b8);
  uVar15 = 0x40;
  iVar8 = local_b8.BaseBitIndex;
  iVar14 = (int)local_b8._padding_;
  if (local_b8.CurrentBitIndex < (local_b8.Array)->NumBits) {
    do {
      iVar6 = local_b8.CurrentBitIndex;
      uVar13 = local_b8.UnvisitedBitMask;
      this_00 = this->ComponentRegistry;
      if (((local_b8.CurrentBitIndex & 0xffff0000U) != 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(BitIndex & 0xFFFF0000) == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityIDs.h"
                             ,0xba,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FEntityAllocation *)(*pcVar5)();
        return pFVar10;
      }
      pFVar11 = FComponentRegistry::GetComponentTypeChecked(this_00,(FComponentTypeID)(ushort)iVar6)
      ;
      if (pFVar11->Sizeof != 0) {
        bVar12 = pFVar11->Alignment;
        if (pFVar11->Alignment < 0x40) {
          bVar12 = 0x40;
        }
        local_90 = local_90 + ((uint)bVar12 + (uint)pFVar11->Sizeof * (uint)param_2);
      }
      uVar3 = (local_b8.Array)->NumBits;
      local_b8.UnvisitedBitMask = uVar13 & ~local_b8._padding_._4_4_;
      uVar13 = local_b8.UnvisitedBitMask &
               *(uint *)((local_b8.Array)->AllocatorInstance).InlineData[iVar14].Pad;
      while (uVar13 == 0) {
        iVar14 = iVar14 + 1;
        iVar8 = iVar8 + 0x20;
        local_b8.CurrentBitIndex = uVar3;
        local_b8._padding_._0_4_ = iVar14;
        local_b8.BaseBitIndex = iVar8;
        if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar14)
        goto LAB_14612a3a1;
        local_b8.UnvisitedBitMask = 0xffffffff;
        uVar13 = *(uint *)((local_b8.Array)->AllocatorInstance).InlineData[iVar14].Pad;
      }
      local_b8._padding_._4_4_ = -uVar13 & uVar13;
      uVar1 = (ulonglong)local_b8._padding_._4_4_ * 2 + 1;
      lVar4 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_88 = (int)lVar4;
      local_b8.CurrentBitIndex = local_88 + -1 + iVar8;
      if ((int)uVar3 < local_b8.CurrentBitIndex) {
        local_b8.CurrentBitIndex = uVar3;
      }
LAB_14612a3a1:
      uVar15 = local_90;
    } while (local_b8.CurrentBitIndex < (int)uVar3);
  }
  local_78.AllocationID = this->NextAllocationID;
  local_78.NumComponents = local_98;
  local_78.SizeofComponentHeaders = local_80;
  local_78.SizeofEntityIDs = (ulonglong)param_2 * 2;
  local_78.MigrateComponentDataFrom = param_4;
  local_78.SizeofComponentData = 0;
  if (param_4 == (FEntityAllocation *)0x0) {
    local_78.SizeofComponentData = uVar15;
  }
  local_78.InitialCapacity = param_2;
  local_78.MaxCapacity = param_3;
  pFVar10 = FEntityInitializer::Initialize(this,param_1,&local_78);
  this->NextAllocationID = this->NextAllocationID + 1;
  return pFVar10;
}

// CreateEntityAllocationEntry @ 14612a430

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UE::MovieScene::FEntityManager::CreateEntityAllocationEntry
          (FEntityManager *this,FComponentMask *param_1,ushort param_2,ushort param_3)

{
  TBitArray<FDefaultBitArrayAllocator> *this_00;
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FEntityAllocation *pFVar8;
  ForElementType<unsigned_int> FVar9;
  FSparseArrayAllocationInfo local_48;
  FSparseArrayAllocationInfo local_38;
  
  CheckCanChangeStructure(this);
  if (0xfffe < *(int *)&(this->EntityAllocations).field_0x8 -
               *(int *)&(this->EntityAllocations).field_0x34) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EntityAllocations.Num() < TNumericLimits<uint16>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                       ,0x454,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  if (0xfffe < *(int *)&(this->EntityAllocationMasks).field_0x8 -
               *(int *)&(this->EntityAllocationMasks).field_0x34) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("EntityAllocationMasks.Num() < TNumericLimits<uint16>::Max()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                       ,0x455,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  pFVar8 = CreateEntityAllocation(this,param_1,param_2,param_3,(FEntityAllocation *)0x0);
  iVar6 = *(int *)&(this->EntityAllocationMasks).field_0x34;
  if (iVar6 == 0) {
    iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x38,4,1,(ForAnyElementType *)&this->EntityAllocationMasks,
                       (int *)&(this->EntityAllocationMasks).field_0x8,
                       (int *)&(this->EntityAllocationMasks).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->EntityAllocationMasks).field_0x10,
               false);
  }
  else {
    iVar7 = *(int *)&(this->EntityAllocationMasks).field_0x30;
    lVar3 = *(longlong *)&this->EntityAllocationMasks;
    iVar6 = iVar6 + -1;
    iVar2 = *(int *)((longlong)iVar7 * 0x38 + 4 + lVar3);
    *(int *)&(this->EntityAllocationMasks).field_0x30 = iVar2;
    *(int *)&(this->EntityAllocationMasks).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x38 + lVar3) = 0xffffffff;
    }
  }
  TSparseArrayBase<56,4,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<56,4,FDefaultSparseArrayAllocator> *)&this->EntityAllocationMasks,
             &local_48,iVar7);
  if (local_48.Pointer != (TBitArray<TFixedAllocator<12>_> *)0x0) {
    *(undefined8 *)((longlong)local_48.Pointer + 0x30) = 0;
    TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(local_48.Pointer,&param_1->Bits);
  }
  iVar6 = *(int *)&(this->EntityAllocations).field_0x34;
  if (iVar6 == 0) {
    iVar7 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,1,(ForAnyElementType *)&this->EntityAllocations,
                       (int *)&(this->EntityAllocations).field_0x8,
                       (int *)&(this->EntityAllocations).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->EntityAllocations).field_0x10,false);
  }
  else {
    iVar7 = *(int *)&(this->EntityAllocations).field_0x30;
    iVar6 = iVar6 + -1;
    lVar3 = *(longlong *)&this->EntityAllocations;
    iVar2 = *(int *)(lVar3 + 4 + (longlong)iVar7 * 8);
    *(int *)&(this->EntityAllocations).field_0x30 = iVar2;
    *(int *)&(this->EntityAllocations).field_0x34 = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(lVar3 + (longlong)iVar2 * 8) = 0xffffffff;
    }
  }
  TSparseArrayBase<8,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *)&this->EntityAllocations,
             &local_38,iVar7);
  if (local_38.Pointer != (undefined8 *)0x0) {
    *(FEntityAllocation **)local_38.Pointer = pFVar8;
  }
  if (local_48.Index != local_38.Index) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaskIndex == AllocationIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                       ,0x45c,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  this_00 = &this->AllocationsWithCapacity;
  iVar6 = (local_48.Index - (this->AllocationsWithCapacity).NumBits) + 1;
  if (0 < iVar6) {
    iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized(this_00,iVar6);
    TBitArray<FDefaultBitArrayAllocator>::SetRange(this_00,iVar7,iVar6,false);
  }
  if ((local_48.Index < 0) || ((this->AllocationsWithCapacity).NumBits <= local_48.Index)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  FVar9 = (this->AllocationsWithCapacity).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<unsigned_int>)0x0) {
    FVar9 = (ForElementType<unsigned_int>)this_00;
  }
  puVar1 = (uint *)((longlong)FVar9 +
                   (longlong)((int)(local_48.Index + (local_48.Index >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)local_48.Index & 0x1f);
  return local_38.Index;
}

// Destroy @ 14612aea0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::MovieScene::FEntityManager::Destroy(FEntityManager *this)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  undefined1 local_res8 [8];
  int local_res10;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  CheckCanChangeStructure(this);
  this->bHandleGenerationStale = true;
  TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_int,0>,FDefaultSetAllocator>
           *)&this->EntityGenerationMap);
  uStack_84 = 1;
  local_88 = 0;
  iVar2 = *(int *)&(this->EntityAllocations).field_0x28;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->EntityAllocations).field_0x10;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar2 != 0) {
    puVar9 = *(uint **)&(this->EntityAllocations).field_0x20;
    if (puVar9 == (uint *)0x0) {
      puVar9 = (uint *)local_60.Array;
    }
    uVar7 = *puVar9;
    local_88 = 0;
    while (uVar7 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar6 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14612af77;
      uVar7 = puVar9[lVar6 + 1];
    }
    uStack_84 = -uVar7 & uVar7;
    uVar1 = (ulonglong)uStack_84 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_res10 = (int)lVar6;
    iStack_74 = local_res10 + -1 + iStack_70;
    if (iVar2 < iStack_74) {
LAB_14612af77:
      iStack_74 = iVar2;
    }
  }
  uVar7 = *(uint *)&(this->EntityAllocations).field_0x28;
  local_40 = *(int *)&(this->EntityAllocations).field_0x8 -
             *(int *)&(this->EntityAllocations).field_0x34;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  iVar11 = (int)uVar7 >> 5;
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  uVar10 = uVar7 & 0xffffffe0;
  if ((((int)uVar7 < 0) || (iVar2 < (int)uVar7)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar3 = *(uint *)&(this->EntityAllocations).field_0x28;
  if (uVar7 != uVar3) {
    puVar8 = *(undefined1 **)&(this->EntityAllocations).field_0x20;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->EntityAllocations).field_0x10;
    }
    uVar7 = -1 << ((byte)uVar7 & 0x1f) & *(uint *)(puVar8 + (longlong)iVar11 * 4);
    while (uVar7 == 0) {
      lVar6 = (longlong)iVar11;
      uVar10 = uVar10 + 0x20;
      iVar11 = iVar11 + 1;
      uVar7 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14612b060;
      uVar7 = *(uint *)(puVar8 + lVar6 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar7 & uVar7) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar7 = (int)lVar6 + -1 + uVar10;
    if ((int)uVar3 < (int)uVar7) {
      uVar7 = uVar3;
    }
  }
LAB_14612b060:
  while( true ) {
    if (*(int *)&(this->EntityAllocations).field_0x8 - *(int *)&(this->EntityAllocations).field_0x34
        != local_40) {
      `TSparseArray<UE::MovieScene::FEntityAllocation_*,FDefaultSparseArrayAllocator>::
      TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar7) &&
       (local_60.Array ==
        (TBitArray<FDefaultBitArrayAllocator> *)&(this->EntityAllocations).field_0x10)) break;
    DestroyAllocation(this,*(FEntityAllocation **)
                            (*(longlong *)&this->EntityAllocations +
                            (longlong)local_60.CurrentBitIndex * 8),true);
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  *(undefined4 *)&(this->EntityLocations).field_0x8 = 0;
  if (*(int *)&(this->EntityLocations).field_0xc < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)&this->EntityLocations,0,
               (int *)&(this->EntityLocations).field_0xc);
  }
  *(undefined4 *)&(this->EntityLocations).field_0x30 = 0xffffffff;
  puVar8 = &(this->EntityAllocationMasks).field_0xc;
  *(undefined4 *)&(this->EntityLocations).field_0x34 = 0;
  *(undefined4 *)&(this->EntityLocations).field_0x28 = 0;
  (this->AllocationsWithCapacity).NumBits = 0;
  *(undefined4 *)&(this->EntityAllocationMasks).field_0x8 = 0;
  if (*(int *)puVar8 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,4,0,(ForAnyElementType *)&this->EntityAllocationMasks,0,(int *)puVar8);
  }
  *(undefined4 *)&(this->EntityAllocationMasks).field_0x30 = 0xffffffff;
  puVar8 = &(this->EntityAllocations).field_0xc;
  *(undefined4 *)&(this->EntityAllocationMasks).field_0x34 = 0;
  *(undefined4 *)&(this->EntityAllocationMasks).field_0x28 = 0;
  *(undefined4 *)&(this->EntityAllocations).field_0x8 = 0;
  if (*(int *)puVar8 < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)&this->EntityAllocations,0,(int *)puVar8);
  }
  *(undefined4 *)&(this->EntityAllocations).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->EntityAllocations).field_0x34 = 0;
  *(undefined4 *)&(this->EntityAllocations).field_0x28 = 0;
  TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
           *)&this->ParentToChild);
  this->StructureMutationSystemSerialNumber = this->SystemSerialNumber;
  this->bAccumulatedMaskStale = true;
  return;
}

// DestroyAllocation @ 14612b320

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::DestroyAllocation
          (FEntityManager *this,FEntityAllocation *param_1,bool param_2)

{
  IComplexComponentOps *pIVar1;
  FComponentTypeInfo *pFVar2;
  int iVar3;
  FComponentHeader *pFVar4;
  FComponentHeader *pFVar5;
  longlong lVar6;
  
  CheckCanChangeStructure(this);
  if ((param_1->Size != 0) && (param_2)) {
    pFVar4 = param_1->ComponentHeaders;
    pFVar5 = pFVar4 + param_1->NumComponents;
    for (; pFVar4 != pFVar5; pFVar4 = pFVar4 + 1) {
      if ((pFVar4->Components != (uchar *)0x0) &&
         (pFVar2 = FComponentRegistry::GetComponentTypeChecked
                             (this->ComponentRegistry,
                              (FComponentTypeID)(pFVar4->ComponentType).Value),
         pFVar2->bIsTriviallyDestructable == '\0')) {
        pIVar1 = (pFVar2->ComplexComponentOps).Ptr;
        (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,pFVar4->Components,param_1->Size);
      }
    }
  }
  iVar3 = 0;
  if (param_1->NumComponents != 0) {
    lVar6 = 0;
    do {
      (*(code *)**(undefined8 **)((longlong)&param_1->ComponentHeaders->_padding_ + lVar6))
                (param_1->ComponentHeaders + iVar3,0);
      lVar6 = lVar6 + 0x38;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)param_1->NumComponents);
  }
  if (param_1->ComponentData != (uchar *)0x0) {
    FMemory::Free(param_1->ComponentData);
  }
  FMemory::Free(param_1);
  return;
}

// DuplicateEntity @ 14612f2a0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEntityID __thiscall
UE::MovieScene::FEntityManager::DuplicateEntity(FEntityManager *this,FMovieSceneEntityID param_1)

{
  code *pcVar1;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined6 in_register_00000012;
  undefined1 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong in_R8;
  FEntityLocation local_res20;
  
  uVar9 = in_R8 & 0xffff;
  uVar8 = (uint)uVar9;
  if (uVar8 == 0xffff) {
    *(ushort *)CONCAT62(in_register_00000012,param_1.Value) = 0xffff;
    return (FMovieSceneEntityID)param_1.Value;
  }
  if ((int)uVar8 < *(int *)&(this->EntityLocations).field_0x28) {
    if (*(int *)&(this->EntityLocations).field_0x28 <= (int)uVar8) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (FMovieSceneEntityID)uVar3;
      }
    }
    puVar7 = *(undefined1 **)&(this->EntityLocations).field_0x20;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->EntityLocations).field_0x10;
    }
    if ((*(uint *)(puVar7 + (uVar9 >> 5) * 4) >> (uVar8 & 0x1f) & 1) != 0) goto LAB_14612f365;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("EntityLocations.IsValidIndex(InOther.AsIndex())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                     ,0x3d8,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (FMovieSceneEntityID)uVar3;
  }
LAB_14612f365:
  uVar8 = *(uint *)(*(longlong *)&this->EntityLocations + uVar9 * 8);
  if ((uVar8 & 0xffff) == 0xffff) {
    AllocateEntity(this);
  }
  else {
    local_res20.AllocationIndex = 0xffff;
    local_res20.EntryIndexWithinAllocation = 0;
    local_res20.ParentID.Value = 0xffff;
    iVar4 = TSparseArray<UE::MovieScene::FEntityManager::FEntityLocation,FDefaultSparseArrayAllocator>
            ::Add(&this->EntityLocations,&local_res20);
    if (((longlong)iVar4 & 0xffff0000U) != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index & 0xFFFF0000) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityIDs.h"
                         ,0x153,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (FMovieSceneEntityID)uVar3;
      }
    }
    iVar5 = GetOrCreateAllocationWithSlack
                      (this,(FComponentMask *)
                            ((ulonglong)(uVar8 & 0xffff) * 0x38 +
                            *(longlong *)&this->EntityAllocationMasks),(int *)0x0);
    iVar6 = AddEntityToAllocation(this,iVar5,(FMovieSceneEntityID)(ushort)iVar4,DefaultConstructed);
    FEntityLocation::Set
              ((FEntityLocation *)(*(longlong *)&this->EntityLocations + (longlong)iVar4 * 8),iVar5,
               iVar6);
    CopyComponents(this,iVar5,iVar6,uVar8 & 0xffff,uVar8 >> 0x10,(FComponentMask *)0x0);
    this->StructureMutationSystemSerialNumber = this->SystemSerialNumber;
    this->bAccumulatedMaskStale = true;
    *(ushort *)CONCAT62(in_register_00000012,param_1.Value) = (ushort)iVar4;
  }
  return (FMovieSceneEntityID)param_1.Value;
}

// EnterIteration @ 14612f8b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::MovieScene::FEntityManager::EnterIteration(FEntityManager *this)

{
  if (this->ThreadingModel == NoThreading) {
    (this->IterationCount).Payload = (this->IterationCount).Payload + 1;
    return;
  }
  LOCK();
  (this->IterationCount).Payload = (this->IterationCount).Payload + 1;
  UNLOCK();
  return;
}

// ExitIteration @ 146130830

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::MovieScene::FEntityManager::ExitIteration(FEntityManager *this)

{
  if (this->ThreadingModel == NoThreading) {
    (this->IterationCount).Payload = (this->IterationCount).Payload + -1;
    return;
  }
  LOCK();
  (this->IterationCount).Payload = (this->IterationCount).Payload + -1;
  UNLOCK();
  return;
}

// FilterComponents @ 146130b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::FilterComponents
          (FEntityManager *this,FMovieSceneEntityID param_1,FComponentMask *param_2)

{
  FEntityLocation *this_00;
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  TBitArray<TFixedAllocator<12>_> *pTVar8;
  uint uVar9;
  undefined1 auStackY_e8 [32];
  <lambda_1> local_b8 [4];
  uint local_b4;
  TBitArray<TFixedAllocator<12>_> local_ac;
  TBitArray<TFixedAllocator<12>_> local_74;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  CheckCanChangeStructure(this);
  this_00 = (FEntityLocation *)(*(longlong *)&this->EntityLocations + (ulonglong)param_1.Value * 8);
  uVar2 = *(ushort *)(*(longlong *)&this->EntityLocations + (ulonglong)param_1.Value * 8);
  if (uVar2 != 0xffff) {
    local_74.MaxBits = 0x180;
    local_74.NumBits = 0;
    Core::Private::
    BitwiseBinaryOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::BitwiseAND<TFixedAllocator<12>,TFixedAllocator<12>_>_::__l2::<lambda_1>_>
              ((TBitArray<TFixedAllocator<12>_> *)
               ((ulonglong)uVar2 * 0x38 + *(longlong *)&this->EntityAllocationMasks),&param_2->Bits,
               &local_74,MaxSize,local_b8);
    iVar5 = local_74.NumBits;
    local_ac.AllocatorInstance.InlineData[0].Pad[0] =
         local_74.AllocatorInstance.InlineData[0].Pad[0];
    local_ac.AllocatorInstance.InlineData[0].Pad[1] =
         local_74.AllocatorInstance.InlineData[0].Pad[1];
    local_ac.AllocatorInstance.InlineData[0].Pad[2] =
         local_74.AllocatorInstance.InlineData[0].Pad[2];
    local_ac.AllocatorInstance.InlineData[0].Pad[3] =
         local_74.AllocatorInstance.InlineData[0].Pad[3];
    local_ac.AllocatorInstance.InlineData[1].Pad[0] =
         local_74.AllocatorInstance.InlineData[1].Pad[0];
    local_ac.AllocatorInstance.InlineData[1].Pad[1] =
         local_74.AllocatorInstance.InlineData[1].Pad[1];
    local_ac.AllocatorInstance.InlineData[1].Pad[2] =
         local_74.AllocatorInstance.InlineData[1].Pad[2];
    local_ac.AllocatorInstance.InlineData[1].Pad[3] =
         local_74.AllocatorInstance.InlineData[1].Pad[3];
    local_ac.AllocatorInstance.InlineData[2].Pad[0] =
         local_74.AllocatorInstance.InlineData[2].Pad[0];
    local_ac.AllocatorInstance.InlineData[2].Pad[1] =
         local_74.AllocatorInstance.InlineData[2].Pad[1];
    local_ac.AllocatorInstance.InlineData[2].Pad[2] =
         local_74.AllocatorInstance.InlineData[2].Pad[2];
    local_ac.AllocatorInstance.InlineData[2].Pad[3] =
         local_74.AllocatorInstance.InlineData[2].Pad[3];
    local_ac.AllocatorInstance.InlineData[3].Pad[0] =
         local_74.AllocatorInstance.InlineData[3].Pad[0];
    local_ac.AllocatorInstance.InlineData[3].Pad[1] =
         local_74.AllocatorInstance.InlineData[3].Pad[1];
    local_ac.AllocatorInstance.InlineData[3].Pad[2] =
         local_74.AllocatorInstance.InlineData[3].Pad[2];
    local_ac.AllocatorInstance.InlineData[3].Pad[3] =
         local_74.AllocatorInstance.InlineData[3].Pad[3];
    local_ac.NumBits = local_74.NumBits;
    local_ac.MaxBits = local_74.MaxBits;
    local_ac.AllocatorInstance.InlineData[4].Pad[0] =
         local_74.AllocatorInstance.InlineData[4].Pad[0];
    local_ac.AllocatorInstance.InlineData[4].Pad[1] =
         local_74.AllocatorInstance.InlineData[4].Pad[1];
    local_ac.AllocatorInstance.InlineData[4].Pad[2] =
         local_74.AllocatorInstance.InlineData[4].Pad[2];
    local_ac.AllocatorInstance.InlineData[4].Pad[3] =
         local_74.AllocatorInstance.InlineData[4].Pad[3];
    local_ac.AllocatorInstance.InlineData[5].Pad[0] =
         local_74.AllocatorInstance.InlineData[5].Pad[0];
    local_ac.AllocatorInstance.InlineData[5].Pad[1] =
         local_74.AllocatorInstance.InlineData[5].Pad[1];
    local_ac.AllocatorInstance.InlineData[5].Pad[2] =
         local_74.AllocatorInstance.InlineData[5].Pad[2];
    local_ac.AllocatorInstance.InlineData[5].Pad[3] =
         local_74.AllocatorInstance.InlineData[5].Pad[3];
    local_ac.AllocatorInstance.InlineData[6].Pad[0] =
         local_74.AllocatorInstance.InlineData[6].Pad[0];
    local_ac.AllocatorInstance.InlineData[6].Pad[1] =
         local_74.AllocatorInstance.InlineData[6].Pad[1];
    local_ac.AllocatorInstance.InlineData[6].Pad[2] =
         local_74.AllocatorInstance.InlineData[6].Pad[2];
    local_ac.AllocatorInstance.InlineData[6].Pad[3] =
         local_74.AllocatorInstance.InlineData[6].Pad[3];
    local_ac.AllocatorInstance.InlineData[7].Pad[0] =
         local_74.AllocatorInstance.InlineData[7].Pad[0];
    local_ac.AllocatorInstance.InlineData[7].Pad[1] =
         local_74.AllocatorInstance.InlineData[7].Pad[1];
    local_ac.AllocatorInstance.InlineData[7].Pad[2] =
         local_74.AllocatorInstance.InlineData[7].Pad[2];
    local_ac.AllocatorInstance.InlineData[7].Pad[3] =
         local_74.AllocatorInstance.InlineData[7].Pad[3];
    local_ac.AllocatorInstance.InlineData[8].Pad[0] =
         local_74.AllocatorInstance.InlineData[8].Pad[0];
    local_ac.AllocatorInstance.InlineData[8].Pad[1] =
         local_74.AllocatorInstance.InlineData[8].Pad[1];
    local_ac.AllocatorInstance.InlineData[8].Pad[2] =
         local_74.AllocatorInstance.InlineData[8].Pad[2];
    local_ac.AllocatorInstance.InlineData[8].Pad[3] =
         local_74.AllocatorInstance.InlineData[8].Pad[3];
    local_ac.AllocatorInstance.InlineData[9].Pad[0] =
         local_74.AllocatorInstance.InlineData[9].Pad[0];
    local_ac.AllocatorInstance.InlineData[9].Pad[1] =
         local_74.AllocatorInstance.InlineData[9].Pad[1];
    local_ac.AllocatorInstance.InlineData[9].Pad[2] =
         local_74.AllocatorInstance.InlineData[9].Pad[2];
    local_ac.AllocatorInstance.InlineData[9].Pad[3] =
         local_74.AllocatorInstance.InlineData[9].Pad[3];
    local_ac.AllocatorInstance.InlineData[10].Pad[0] =
         local_74.AllocatorInstance.InlineData[10].Pad[0];
    local_ac.AllocatorInstance.InlineData[10].Pad[1] =
         local_74.AllocatorInstance.InlineData[10].Pad[1];
    local_ac.AllocatorInstance.InlineData[10].Pad[2] =
         local_74.AllocatorInstance.InlineData[10].Pad[2];
    local_ac.AllocatorInstance.InlineData[10].Pad[3] =
         local_74.AllocatorInstance.InlineData[10].Pad[3];
    local_ac.AllocatorInstance.InlineData[0xb].Pad[0] =
         local_74.AllocatorInstance.InlineData[0xb].Pad[0];
    local_ac.AllocatorInstance.InlineData[0xb].Pad[1] =
         local_74.AllocatorInstance.InlineData[0xb].Pad[1];
    local_ac.AllocatorInstance.InlineData[0xb].Pad[2] =
         local_74.AllocatorInstance.InlineData[0xb].Pad[2];
    local_ac.AllocatorInstance.InlineData[0xb].Pad[3] =
         local_74.AllocatorInstance.InlineData[0xb].Pad[3];
    bVar3 = TBitArray<TFixedAllocator<12>_>::CompareSetBits<TFixedAllocator<12>_>
                      ((TBitArray<TFixedAllocator<12>_> *)
                       ((ulonglong)this_00->AllocationIndex * 0x38 +
                       *(longlong *)&this->EntityAllocationMasks),&local_ac,false);
    if (!bVar3) {
      uVar9 = iVar5 + 0x1f;
      uVar4 = 0;
      if (uVar9 >> 5 != 0) {
        pTVar8 = &local_ac;
LAB_146130c50:
        if (*(int *)(pTVar8->AllocatorInstance).InlineData[0].Pad == 0) goto code_r0x000146130c55;
        pTVar1 = local_ac.AllocatorInstance.InlineData + uVar4;
        iVar6 = 0;
        bVar3 = *(int *)pTVar1->Pad != 0;
        if (bVar3) {
          for (; (*(uint *)pTVar1->Pad >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
          }
        }
        iVar7 = 0x20;
        if (bVar3) {
          iVar7 = iVar6;
        }
        iVar7 = iVar7 + uVar4 * 0x20;
        if (iVar5 <= iVar7) goto LAB_146130c5f;
        uVar9._0_2_ = this_00->AllocationIndex;
        uVar9._2_2_ = this_00->EntryIndexWithinAllocation;
        if (iVar7 == -1) goto LAB_146130c66;
        local_b4 = uVar9;
        iVar5 = GetOrCreateAllocationWithSlack(this,(FComponentMask *)&local_ac,(int *)0x0);
        iVar6 = MigrateEntity(this,iVar5,uVar9 & 0xffff,local_b4 >> 0x10);
        FEntityLocation::Set(this_00,iVar5,iVar6);
        goto LAB_146130c7a;
      }
LAB_146130c5f:
      uVar9._0_2_ = this_00->AllocationIndex;
      uVar9._2_2_ = this_00->EntryIndexWithinAllocation;
LAB_146130c66:
      this_00->AllocationIndex = 0xffff;
      this_00->EntryIndexWithinAllocation = 0;
      local_b4 = uVar9;
      RemoveEntityFromAllocation(this,uVar9 & 0xffff,uVar9 >> 0x10);
LAB_146130c7a:
      this->StructureMutationSystemSerialNumber = this->SystemSerialNumber;
      this->bAccumulatedMaskStale = true;
    }
  }
  return;
code_r0x000146130c55:
  uVar4 = uVar4 + 1;
  pTVar8 = (TBitArray<TFixedAllocator<12>_> *)((pTVar8->AllocatorInstance).InlineData + 1);
  if ((int)(uVar9 >> 5) <= (int)uVar4) goto LAB_146130c5f;
  goto LAB_146130c50;
}

// FreeEntities @ 146133f00

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UE::MovieScene::FEntityManager::FreeEntities
          (FEntityManager *this,FEntityComponentFilter *param_1,
          TSet<UE::MovieScene::FMovieSceneEntityID,DefaultKeyFuncs<UE::MovieScene::FMovieSceneEntityID,0>,FDefaultSetAllocator>
          *param_2)

{
  TSparseArray<UE::MovieScene::FComponentMask,FDefaultSparseArrayAllocator> *pTVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  int local_a8 [2];
  FFreeEntityOperation local_a0;
  int local_78;
  uint uStack_74;
  undefined1 *puStack_70;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  TSparseArray<UE::MovieScene::FComponentMask,FDefaultSparseArrayAllocator> *local_58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_50;
  
  CheckCanChangeStructure(this);
  bVar5 = FEntityComponentFilter::IsValid(param_1);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Filter.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                         ,0x28c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  pTVar1 = &this->EntityAllocationMasks;
  local_a0.AllocationsToDestroy.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  puStack_70 = &(this->EntityAllocationMasks).field_0x10;
  local_a0.AllocationsToDestroy.ArrayNum = 0;
  local_a0.AllocationsToDestroy.ArrayMax = 0;
  local_a0.LooseEntitiesToDestroy.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.LooseEntitiesToDestroy.ArrayNum = 0;
  local_a0.LooseEntitiesToDestroy.ArrayMax = 0;
  iVar6 = *(int *)&(this->EntityAllocationMasks).field_0x28;
  local_78 = 0;
  uStack_74 = 1;
  iStack_64 = 0;
  iStack_60 = 0;
  if (iVar6 != 0) {
    puVar8 = *(uint **)&(this->EntityAllocationMasks).field_0x20;
    if (puVar8 == (uint *)0x0) {
      puVar8 = (uint *)puStack_70;
    }
    uVar3 = *puVar8;
    iStack_60 = 0;
    local_78 = 0;
    while (uVar3 == 0) {
      lVar7 = (longlong)local_78;
      iStack_60 = iStack_60 + 0x20;
      local_78 = local_78 + 1;
      if ((int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 < local_78) goto LAB_14613401f;
      uVar3 = puVar8[lVar7 + 1];
    }
    uStack_74 = -uVar3 & uVar3;
    uVar2 = (ulonglong)uStack_74 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iStack_64 = (int)lVar7 + -1 + iStack_60;
    if (iVar6 < iStack_64) {
LAB_14613401f:
      iStack_64 = iVar6;
    }
  }
  local_68 = 0xffffffff;
  local_50._padding_ = CONCAT44(uStack_74,local_78);
  local_50.UnvisitedBitMask = 0xffffffff;
  local_50.CurrentBitIndex = iStack_64;
  local_50._28_4_ = uStack_5c;
  local_50.BaseBitIndex = iStack_60;
  local_a0.EntityManager = this;
  local_58 = pTVar1;
  local_50.Array = (TBitArray<FDefaultBitArrayAllocator> *)puStack_70;
  if (iStack_64 < iVar6) {
    do {
      iVar6 = local_50.CurrentBitIndex;
      bVar5 = FEntityComponentFilter::Match
                        (param_1,(FComponentMask *)
                                 ((longlong)local_50.CurrentBitIndex * 0x38 + *(longlong *)pTVar1));
      if (bVar5) {
        local_a8[0] = iVar6;
        if (((local_a0.AllocationsToDestroy.AllocatorInstance.Data <=
              (FScriptContainerElement *)local_a8) &&
            ((FScriptContainerElement *)local_a8 <
             local_a0.AllocationsToDestroy.AllocatorInstance.Data +
             (longlong)local_a0.AllocationsToDestroy.ArrayMax * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        iVar6 = local_a0.AllocationsToDestroy.ArrayNum;
        if (local_a0.AllocationsToDestroy.ArrayNum == local_a0.AllocationsToDestroy.ArrayMax) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,(ForAnyElementType *)&local_a0,
                             &local_a0.AllocationsToDestroy.ArrayMax);
        }
        local_a0.AllocationsToDestroy.ArrayNum = iVar6 + 1;
        *(int *)(local_a0.AllocationsToDestroy.AllocatorInstance.Data + (longlong)iVar6 * 4) =
             local_a8[0];
      }
      local_50.UnvisitedBitMask = local_50.UnvisitedBitMask & ~local_50._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    } while (local_50.CurrentBitIndex < (local_50.Array)->NumBits);
  }
  iVar6 = FreeEntities(this,&local_a0,param_2);
  if (local_a0.LooseEntitiesToDestroy.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.LooseEntitiesToDestroy.AllocatorInstance.Data);
  }
  if (local_a0.AllocationsToDestroy.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.AllocationsToDestroy.AllocatorInstance.Data);
  }
  return iVar6;
}

// FreeEntities @ 146134190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UE::MovieScene::FEntityManager::FreeEntities
          (FEntityManager *this,FFreeEntityOperation *param_1,
          TSet<UE::MovieScene::FMovieSceneEntityID,DefaultKeyFuncs<UE::MovieScene::FMovieSceneEntityID,0>,FDefaultSetAllocator>
          *param_2)

{
  uchar **ppuVar1;
  TMap<UE::MovieScene::FMovieSceneEntityID,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_int,0>_>
  *this_00;
  FScriptContainerElement *pFVar2;
  FMovieSceneEntityID *pFVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ushort uVar6;
  ushort uVar7;
  IComplexComponentOps *pIVar8;
  code *pcVar9;
  uint uVar10;
  int iVar11;
  TSet<UE::MovieScene::FMovieSceneEntityID,DefaultKeyFuncs<UE::MovieScene::FMovieSceneEntityID,0>,FDefaultSetAllocator>
  *this_01;
  TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
  *this_02;
  longlong *plVar12;
  bool bVar13;
  undefined4 uVar14;
  FComponentTypeInfo *pFVar15;
  byte bVar16;
  longlong lVar17;
  undefined1 *puVar18;
  ForElementType<unsigned_int> FVar19;
  longlong lVar20;
  ulonglong uVar21;
  FComponentHeader *pFVar22;
  ulonglong uVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  undefined1 *puVar27;
  ForElementType<unsigned_int> FVar28;
  FEntityManager *pFVar29;
  uint uVar30;
  ForAnyElementType FVar31;
  TSparseArray<UE::MovieScene::FEntityManager::FEntityLocation,FDefaultSparseArrayAllocator>
  *pTVar32;
  ulong64 uVar33;
  uint *puVar34;
  undefined1 *puVar35;
  uint *puVar36;
  uint uVar37;
  int iVar38;
  FComponentHeader *pFVar39;
  TMultiMap<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>_>
  *this_03;
  FMovieSceneEntityID *pFVar40;
  uint uVar41;
  int iVar42;
  TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
  *pTVar43;
  FComponentHeader *pFVar44;
  uchar *_Dst;
  undefined1 auStack_2c8 [32];
  longlong local_2a8;
  ulonglong local_2a0;
  FMovieSceneEntityID local_298 [4];
  uint local_290;
  FMovieSceneEntityID local_288 [4];
  FMovieSceneEntityID local_280 [4];
  undefined1 local_278;
  undefined1 local_277;
  undefined1 local_276 [2];
  FMovieSceneEntityID local_274 [2];
  FEntityManager *local_270;
  uint local_268;
  uint local_264;
  FEntityAllocation *local_260;
  longlong local_258;
  FMovieSceneEntityID local_250;
  ushort local_24e;
  FMovieSceneEntityID local_24c;
  ushort local_24a;
  ushort local_248;
  uint local_244;
  int local_240;
  int local_23c;
  FComponentHeader *local_238;
  ulong64 local_230;
  uint local_228;
  int local_220;
  FMovieSceneEntityID *local_218;
  TSet<UE::MovieScene::FMovieSceneEntityID,DefaultKeyFuncs<UE::MovieScene::FMovieSceneEntityID,0>,FDefaultSetAllocator>
  *local_210;
  TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
  *local_208;
  int local_200;
  uint uStack_1fc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1f8;
  uint local_1f0;
  uint uStack_1ec;
  uint uStack_1e8;
  undefined4 uStack_1e4;
  int local_1e0;
  TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
  *local_1d8;
  ulonglong local_1d0;
  int local_1c8;
  longlong *local_1c0;
  int iStack_1b8;
  uint uStack_1b4;
  TBitArray<FDefaultBitArrayAllocator> *local_1b0;
  undefined4 uStack_1a8;
  uint uStack_1a4;
  int local_1a0;
  uint uStack_19c;
  int iStack_198;
  undefined4 uStack_194;
  FMovieSceneEntityID local_190 [2];
  int local_18c;
  int local_188;
  FMovieSceneEntityID local_184 [2];
  FMovieSceneEntityID local_180 [2];
  int local_17c;
  int local_178;
  int local_174;
  FBuiltInComponentTypes *local_170;
  TSparseArray<UE::MovieScene::FEntityManager::FEntityLocation,FDefaultSparseArrayAllocator>
  *local_168;
  longlong *local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_158;
  undefined8 uStack_138;
  longlong *local_130;
  undefined8 uStack_128;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  int local_108;
  undefined4 uStack_104;
  longlong *local_100;
  undefined8 uStack_f8;
  TBitArray<FDefaultBitArrayAllocator> *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ForElementType<unsigned_int> local_d0;
  uint local_b8;
  int local_b4;
  undefined1 local_a8 [32];
  uint *local_88;
  uint local_80;
  int local_74;
  void *local_68;
  undefined4 local_60;
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2c8;
  local_270 = this;
  local_210 = param_2;
  CheckCanChangeStructure(this);
  if (((param_1->LooseEntitiesToDestroy).ArrayNum == 0) &&
     ((param_1->AllocationsToDestroy).ArrayNum == 0)) {
    local_264 = 0;
  }
  else {
    local_230 = this->SystemSerialNumber;
    local_170 = FBuiltInComponentTypes::Get();
    FFreeEntityOperation::Commit(param_1,(FCommitData *)local_a8);
    uVar21 = (ulonglong)(int)local_50;
    local_1e0 = *(int *)&(this->EntityGenerationMap).field_0x8 -
                *(int *)&(this->EntityGenerationMap).field_0x34;
    local_264 = local_50;
    pFVar2 = local_58.Data + uVar21 * 2;
    uVar23 = uVar21;
    FVar31.Data = local_58.Data;
    while( true ) {
      if ((int)uVar23 != (int)uVar21) {
        local_276[0] = 0;
        `TCheckedPointerIterator<UE::MovieScene::FMovieSceneEntityID,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_276);
      }
      uVar25 = local_80;
      uVar33 = local_230;
      this_03 = &this->ParentToChild;
      if (FVar31.Data == pFVar2) break;
      uVar6 = *(ushort *)FVar31.Data;
      local_1c8 = *(int *)(*(longlong *)&this->EntityLocations + (ulonglong)uVar6 * 8);
      uVar7 = *(ushort *)(*(longlong *)&this->EntityLocations + (ulonglong)uVar6 * 8 + 4);
      local_288[0].Value = uVar6;
      if (uVar7 != 0xffff) {
        local_250.Value = uVar7;
        TMultiMap<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>_>
        ::Remove(this_03,&local_250,local_288);
      }
      if (*(int *)&(this->ParentToChild).field_0x8 != *(int *)&(this->ParentToChild).field_0x34) {
        TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
        ::RemoveImpl<UE::MovieScene::FMovieSceneEntityID>
                  ((TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
                    *)this_03,(uint)uVar6,local_288);
      }
      TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_int,0>,FDefaultSetAllocator>
      ::Remove((TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_int,0>,FDefaultSetAllocator>
                *)&this->EntityGenerationMap,local_288);
      TSparseArray<UE::MovieScene::FEntityManager::FEntityLocation,FDefaultSparseArrayAllocator>::
      RemoveAt(&this->EntityLocations,(uint)uVar6,1);
      if (local_210 !=
          (TSet<UE::MovieScene::FMovieSceneEntityID,DefaultKeyFuncs<UE::MovieScene::FMovieSceneEntityID,0>,FDefaultSetAllocator>
           *)0x0) {
        TSet<UE::MovieScene::FMovieSceneEntityID,DefaultKeyFuncs<UE::MovieScene::FMovieSceneEntityID,0>,FDefaultSetAllocator>
        ::Emplace<UE::MovieScene::FMovieSceneEntityID_const_&>
                  (local_210,local_190,(bool *)local_288);
      }
      uVar23 = (ulonglong)local_50;
      FVar31.Data = FVar31.Data + 2;
      uVar21 = (ulonglong)local_264;
    }
    uStack_1b4 = 1;
    local_1a0 = 0;
    local_d0.SecondaryData = (ForElementType<unsigned_int>)0x0;
    iStack_1b8 = 0;
    local_b8 = 0;
    local_b4 = 0x80;
    uStack_1a4 = 0;
    if (local_80 != 0) {
      puVar34 = (uint *)(local_a8 + 0x10);
      if (local_88 != (uint *)0x0) {
        puVar34 = local_88;
      }
      uVar41 = *puVar34;
      iStack_1b8 = 0;
      while (uVar41 == 0) {
        lVar17 = (longlong)iStack_1b8;
        local_1a0 = local_1a0 + 0x20;
        iStack_1b8 = iStack_1b8 + 1;
        uStack_1a4 = local_80;
        if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_1b8)
        goto LAB_1461343e0;
        uVar41 = puVar34[lVar17 + 1];
      }
      uStack_1b4 = -uVar41 & uVar41;
      uVar23 = (ulonglong)uStack_1b4 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_174 = (int)lVar17;
      uStack_1a4 = local_174 + -1 + local_1a0;
      if ((int)local_80 < (int)uStack_1a4) {
        uStack_1a4 = local_80;
      }
    }
LAB_1461343e0:
    local_1c0 = (longlong *)local_a8;
    iStack_198 = local_a8._8_4_ - local_74;
    uVar30 = local_80 & 0xffffffe0;
    local_1b0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
    bVar16 = (byte)local_80 & 0x1f;
    TStack_158._padding_ = CONCAT44(uStack_1b4,iStack_1b8);
    uStack_1fc = 1 << bVar16;
    iVar24 = (int)local_80 >> 5;
    uVar41 = -1 << bVar16;
    uStack_1a8 = 0xffffffff;
    pTStack_1f8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_a8 + 0x10);
    uStack_1ec = local_80;
    TStack_158.CurrentBitIndex = uStack_1a4;
    TStack_158.UnvisitedBitMask = 0xffffffff;
    TStack_158._28_4_ = uStack_1a4;
    TStack_158.BaseBitIndex = local_1a0;
    uStack_138 = CONCAT44(uStack_194,iStack_198);
    local_200 = iVar24;
    local_1f0 = uVar41;
    uStack_1e8 = uVar30;
    local_1d8 = (TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
                 *)this_03;
    uStack_19c = uStack_1a4;
    local_160 = local_1c0;
    TStack_158.Array = local_1b0;
    if (((int)local_80 < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar13)) {
      pcVar9 = (code *)swi(3);
      iVar24 = (*pcVar9)();
      return iVar24;
    }
    if (uVar25 != local_80) {
      puVar34 = (uint *)(local_a8 + 0x10);
      if (local_88 != (uint *)0x0) {
        puVar34 = local_88;
      }
      uVar41 = uVar41 & puVar34[iVar24];
      while (uVar41 == 0) {
        uStack_1e8 = uVar30 + 0x20;
        local_200 = iVar24 + 1;
        uStack_1ec = local_80;
        if ((int)((local_80 - 1) + ((int)(local_80 - 1) >> 0x1f & 0x1fU)) >> 5 < local_200)
        goto LAB_14613453e;
        uVar41 = puVar34[(longlong)iVar24 + 1];
        local_1f0 = 0xffffffff;
        uVar30 = uStack_1e8;
        iVar24 = local_200;
      }
      uStack_1fc = -uVar41 & uVar41;
      uVar23 = (ulonglong)uStack_1fc * 2 + 1;
      lVar17 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_17c = (int)lVar17;
      uStack_1ec = local_17c + -1 + uVar30;
      if ((int)local_80 < (int)uStack_1ec) {
        uStack_1ec = local_80;
      }
    }
LAB_14613453e:
    uStack_128 = CONCAT44(uStack_1fc,local_200);
    local_130 = (longlong *)local_a8;
    uStack_118 = CONCAT44(uStack_1ec,local_1f0);
    uStack_110 = CONCAT44(uStack_1e4,uStack_1e8);
    local_108 = local_a8._8_4_ - local_74;
    pTStack_120 = pTStack_1f8;
    uStack_d8 = CONCAT44(uStack_104,local_108);
    local_f0 = pTStack_1f8;
    local_100 = local_130;
    uStack_f8 = uStack_128;
    uStack_e8 = uStack_118;
    local_e0 = uStack_110;
    while( true ) {
      plVar12 = local_160;
      if ((int)local_160[1] - *(int *)((longlong)local_160 + 0x34) != (int)uStack_138) {
        local_278 = 0;
        `TSparseArray<TSparseSetElement<TTuple<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_278);
      }
      pFVar29 = local_270;
      if (((TStack_158.CurrentBitIndex == uStack_e8._4_4_) && (TStack_158.Array == local_f0)) &&
         (plVar12 == local_100)) break;
      local_238 = (FComponentHeader *)&local_270->EntityAllocations;
      pTVar43 = (TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
                 *)((longlong)TStack_158.CurrentBitIndex * 0x38 + *plVar12);
      local_290 = *(uint *)&pTVar43->Elements;
      lVar17 = (longlong)(int)local_290;
      local_260 = *(FEntityAllocation **)
                   (*(longlong *)
                     &((TSparseArray<UE::MovieScene::FEntityAllocation_*,FDefaultSparseArrayAllocator>
                        *)local_238)->field_0x0 + lVar17 * 8);
      uVar25 = (uint)local_260->Size;
      pFVar40 = local_260->EntityIDs;
      local_244 = (uint)local_260->Size;
      if ((pTVar43->Elements).field_0x28 == '\0') {
        puVar27 = *(undefined1 **)&(pTVar43->Elements).field_0x18;
        uVar41 = *(uint *)&(pTVar43->Elements).field_0x20;
        uVar25 = 0;
        puVar35 = &(pTVar43->Elements).field_0x8;
        if (puVar27 != (undefined1 *)0x0) {
          puVar35 = puVar27;
        }
        uVar23 = 0;
        iVar24 = uVar41 + 0x1f;
        iVar24 = (int)((iVar24 >> 0x1f & 0x1fU) + iVar24) >> 5;
        uVar41 = uVar41 & 0x8000001f;
        if ((int)uVar41 < 0) {
          uVar41 = (uVar41 - 1 | 0xffffffe0) + 1;
        }
        uVar30 = 0xffffffff >> ((byte)(0x20 - uVar41) & 0x1f);
        if (0x1f < (int)(0x20 - uVar41)) {
          uVar30 = 0xffffffff;
        }
        uVar41 = 0xffffffff;
        if (iVar24 == 1) {
          uVar41 = uVar30;
        }
        if (0 < iVar24) {
          do {
            uVar10 = uVar41 & *(uint *)(puVar35 + uVar23 * 4);
            if (uVar41 == 0xffffffff) {
              uVar10 = *(uint *)(puVar35 + uVar23 * 4);
            }
            uVar37 = (int)uVar23 + 1;
            uVar23 = (ulonglong)uVar37;
            uVar21 = (ulonglong)uVar10 - ((ulonglong)(uVar10 >> 1) & 0x5555555555555555);
            uVar21 = (uVar21 >> 2 & 0x3333333333333333) + (uVar21 & 0x3333333333333333);
            uVar25 = uVar25 + (byte)(((uVar21 >> 4) + uVar21 & 0xf0f0f0f0f0f0f0f) *
                                     0x101010101010101 >> 0x38);
            uVar41 = 0xffffffff;
            if (uVar37 == iVar24 - 1U) {
              uVar41 = uVar30;
            }
            uVar33 = local_230;
          } while ((int)uVar37 < iVar24);
        }
      }
      pFVar39 = (FComponentHeader *)&local_270->EntityAllocations;
      pFVar44 = local_260->ComponentHeaders;
      pFVar22 = pFVar44 + local_260->NumComponents;
      for (; local_258 = lVar17, local_218 = pFVar40, local_208 = pTVar43, pFVar44 != pFVar22;
          pFVar44 = pFVar44 + 1) {
        if ((pFVar44->ComponentType).Value == (local_170->Tags).NeedsUnlink.Value)
        goto LAB_146134787;
      }
      local_277 = 0;
      `UE::MovieScene::FEntityManager::FreeEntities'::__l13::<lambda_2>::operator()(&local_277);
LAB_146134787:
      this_02 = local_1d8;
      this_01 = local_210;
      local_264 = local_264 + uVar25;
      if (uVar25 == local_244) {
        pFVar3 = pFVar40 + (int)local_244;
        if (pFVar40 != pFVar3) {
          pTVar32 = &local_270->EntityLocations;
          this_00 = &local_270->EntityGenerationMap;
          pFVar40 = local_218;
          if (local_210 ==
              (TSet<UE::MovieScene::FMovieSceneEntityID,DefaultKeyFuncs<UE::MovieScene::FMovieSceneEntityID,0>,FDefaultSetAllocator>
               *)0x0) {
            do {
              uVar6 = pFVar40->Value;
              local_220 = *(int *)(*(longlong *)pTVar32 + (ulonglong)uVar6 * 8);
              uVar7 = *(ushort *)(*(longlong *)pTVar32 + (ulonglong)uVar6 * 8 + 4);
              local_298[0].Value = uVar6;
              if (uVar7 != 0xffff) {
                local_274[0].Value = uVar7;
                TMultiMap<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>_>
                ::Remove((TMultiMap<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>_>
                          *)this_02,local_274,local_298);
              }
              if (*(int *)&(this_02->Elements).field_0x8 != *(int *)&(this_02->Elements).field_0x34)
              {
                TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
                ::RemoveImpl<UE::MovieScene::FMovieSceneEntityID>(this_02,(uint)uVar6,local_298);
              }
              TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_int,0>,FDefaultSetAllocator>
              ::Remove((TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_int,0>,FDefaultSetAllocator>
                        *)this_00,local_298);
              TSparseArray<UE::MovieScene::FEntityManager::FEntityLocation,FDefaultSparseArrayAllocator>
              ::RemoveAt(pTVar32,(uint)uVar6,1);
              pFVar40 = pFVar40 + 1;
              uVar33 = local_230;
              pFVar39 = local_238;
              lVar17 = local_258;
              pFVar29 = local_270;
            } while (pFVar40 != pFVar3);
          }
          else {
            do {
              uVar6 = pFVar40->Value;
              local_220 = *(int *)(*(longlong *)pTVar32 + (ulonglong)uVar6 * 8);
              uVar7 = *(ushort *)(*(longlong *)pTVar32 + (ulonglong)uVar6 * 8 + 4);
              local_298[0].Value = uVar6;
              if (uVar7 != 0xffff) {
                local_274[0].Value = uVar7;
                TMultiMap<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>_>
                ::Remove((TMultiMap<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>_>
                          *)this_02,local_274,local_298);
              }
              if (*(int *)&(this_02->Elements).field_0x8 != *(int *)&(this_02->Elements).field_0x34)
              {
                TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
                ::RemoveImpl<UE::MovieScene::FMovieSceneEntityID>(this_02,(uint)uVar6,local_298);
              }
              TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_int,0>,FDefaultSetAllocator>
              ::Remove((TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_int,0>,FDefaultSetAllocator>
                        *)this_00,local_298);
              TSparseArray<UE::MovieScene::FEntityManager::FEntityLocation,FDefaultSparseArrayAllocator>
              ::RemoveAt(pTVar32,(uint)uVar6,1);
              TSet<UE::MovieScene::FMovieSceneEntityID,DefaultKeyFuncs<UE::MovieScene::FMovieSceneEntityID,0>,FDefaultSetAllocator>
              ::Emplace<UE::MovieScene::FMovieSceneEntityID_const_&>
                        (this_01,local_180,(bool *)local_298);
              pFVar40 = pFVar40 + 1;
              uVar33 = local_230;
              pFVar39 = local_238;
              lVar17 = local_258;
              pFVar29 = local_270;
            } while (pFVar40 != pFVar3);
          }
        }
        DestroyAllocation(pFVar29,local_260,true);
        TSparseArrayBase<8,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
                  ((TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *)pFVar39,local_290,1);
        pFVar29 = local_270;
        bVar16 = (byte)local_290 & 0x1f;
        uVar25 = 1 << bVar16 | 1U >> 0x20 - bVar16;
        lVar20 = *(longlong *)&local_270->EntityAllocationMasks;
        puVar27 = &(local_270->EntityAllocationMasks).field_0x10;
        if ((((int)local_290 < 0) ||
            (*(int *)&(local_270->EntityAllocationMasks).field_0x28 <= (int)local_290)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar13)) {
          pcVar9 = (code *)swi(3);
          iVar24 = (*pcVar9)();
          return iVar24;
        }
        puVar35 = *(undefined1 **)&(pFVar29->EntityAllocationMasks).field_0x20;
        puVar18 = puVar27;
        if (puVar35 != (undefined1 *)0x0) {
          puVar18 = puVar35;
        }
        uVar41 = local_290;
        if ((int)local_290 < 0) {
          uVar41 = local_290 + 0x1f;
        }
        lVar5 = (longlong)((int)uVar41 >> 5) * 4;
        if (((*(uint *)(puVar18 + (longlong)((int)uVar41 >> 5) * 4) & uVar25) == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("AllocationFlags[Index]",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                                ,0xc5,L""), bVar13)) {
          pcVar9 = (code *)swi(3);
          iVar24 = (*pcVar9)();
          return iVar24;
        }
        if (*(int *)&(pFVar29->EntityAllocationMasks).field_0x34 != 0) {
          *(uint *)((longlong)*(int *)&(pFVar29->EntityAllocationMasks).field_0x30 * 0x38 + lVar20)
               = local_290;
        }
        *(undefined4 *)(lVar17 * 0x38 + lVar20) = 0xffffffff;
        if (*(int *)&(pFVar29->EntityAllocationMasks).field_0x34 < 1) {
          uVar14 = 0xffffffff;
        }
        else {
          uVar14 = *(undefined4 *)&(pFVar29->EntityAllocationMasks).field_0x30;
        }
        *(undefined4 *)(lVar17 * 0x38 + 4 + lVar20) = uVar14;
        puVar35 = &(pFVar29->EntityAllocationMasks).field_0x34;
        *(int *)puVar35 = *(int *)puVar35 + 1;
        *(uint *)&(pFVar29->EntityAllocationMasks).field_0x30 = local_290;
        if ((((int)local_290 < 0) ||
            (*(int *)&(pFVar29->EntityAllocationMasks).field_0x28 <= (int)local_290)) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar13)) {
          pcVar9 = (code *)swi(3);
          iVar24 = (*pcVar9)();
          return iVar24;
        }
        puVar35 = *(undefined1 **)&(pFVar29->EntityAllocationMasks).field_0x20;
        if (puVar35 != (undefined1 *)0x0) {
          puVar27 = puVar35;
        }
        *(uint *)(puVar27 + lVar5) = *(uint *)(puVar27 + lVar5) & ~uVar25;
        if ((((int)local_290 < 0) || ((pFVar29->AllocationsWithCapacity).NumBits <= (int)local_290))
           && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0 && Index<NumBits",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                   ,0x5be,L""), bVar13)) {
          pcVar9 = (code *)swi(3);
          iVar24 = (*pcVar9)();
          return iVar24;
        }
        FVar19 = (pFVar29->AllocationsWithCapacity).AllocatorInstance.SecondaryData;
        FVar28 = (ForElementType<unsigned_int>)&pFVar29->AllocationsWithCapacity;
        if (FVar19 != (ForElementType<unsigned_int>)0x0) {
          FVar28 = FVar19;
        }
        puVar34 = (uint *)(lVar5 + (longlong)FVar28);
        *puVar34 = *puVar34 & ~(1 << ((byte)local_290 & 0x1f));
      }
      else {
        local_248 = local_260->MaxCapacity;
        local_228 = local_244 - 1;
        pFVar44 = local_260->ComponentHeaders;
        uVar23 = uVar33;
        if (uVar33 < local_260->SerialNumber) {
          uVar23 = local_260->SerialNumber;
        }
        local_260->SerialNumber = uVar23;
        local_24a = local_260->Size;
        pFVar39 = pFVar44 + local_260->NumComponents;
        for (; pFVar44 != pFVar39; pFVar44 = pFVar44 + 1) {
          uVar23 = uVar33;
          if (uVar33 < pFVar44->SerialNumber) {
            uVar23 = pFVar44->SerialNumber;
          }
          pFVar44->SerialNumber = uVar23;
        }
        local_220 = *(int *)&(pTVar43->Elements).field_0x20;
        uVar25 = local_220 + 0x20U >> 5;
        local_b8 = local_220 + 1;
        if (local_220 + 0x20U >> 5 != 0) {
          if (local_b4 + 0x1fU >> 5 < uVar25) {
            TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>::
            ResizeAllocation(&local_d0,0,uVar25,4);
            local_b4 = uVar25 << 5;
          }
          FVar19 = (ForElementType<unsigned_int>)&local_d0;
          if (local_d0.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar19 = local_d0.SecondaryData;
          }
          memset((void *)FVar19,0,(ulonglong)uVar25 << 2);
          uVar25 = local_b8 & 0x8000001f;
          if ((int)uVar25 < 0) {
            uVar25 = (uVar25 - 1 | 0xffffffe0) + 1;
          }
          if (uVar25 != 0) {
            FVar19 = (ForElementType<unsigned_int>)&local_d0;
            if (local_d0.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FVar19 = local_d0.SecondaryData;
            }
            puVar34 = (uint *)((longlong)FVar19 +
                              (longlong)((int)(local_b8 + ((int)local_b8 >> 0x1f & 0x1fU)) >> 5) * 4
                              );
            *puVar34 = *puVar34 & 0xffffffffU >> (0x20U - (char)uVar25 & 0x1f);
          }
        }
        iVar11 = local_220;
        iVar24 = *(int *)&(pTVar43->Elements).field_0x20;
        puVar27 = &(pTVar43->Elements).field_0x8;
        iVar42 = 0;
        iVar26 = 0;
        if (iVar24 != 0) {
          puVar34 = *(uint **)&(pTVar43->Elements).field_0x18;
          puVar36 = (uint *)puVar27;
          if (puVar34 != (uint *)0x0) {
            puVar36 = puVar34;
          }
          uVar25 = *puVar36;
          while (uVar25 == 0) {
            lVar17 = (longlong)iVar26;
            iVar42 = iVar42 + 0x20;
            iVar26 = iVar26 + 1;
            if ((int)(iVar24 + -1 + (iVar24 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar26)
            goto LAB_146134d68;
            uVar25 = puVar36[lVar17 + 1];
          }
          uVar25 = -uVar25 & uVar25;
          uVar23 = (ulonglong)uVar25 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar23 != 0) {
            for (; uVar23 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          local_178 = (int)lVar17;
          iVar38 = local_178 + -1 + iVar42;
          if (iVar38 < iVar24) {
            uVar41 = 0xffffffff;
            do {
              iVar38 = iVar11 - iVar38;
              if (((iVar38 < 0) || ((int)local_b8 <= iVar38)) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5be,L""), bVar13)) {
                pcVar9 = (code *)swi(3);
                iVar24 = (*pcVar9)();
                return iVar24;
              }
              FVar19 = (ForElementType<unsigned_int>)&local_d0;
              if (local_d0.SecondaryData != (ForElementType<unsigned_int>)0x0) {
                FVar19 = local_d0.SecondaryData;
              }
              iVar24 = iVar38;
              if (iVar38 < 0) {
                iVar24 = iVar38 + 0x1f;
              }
              puVar34 = (uint *)((longlong)FVar19 + (longlong)(iVar24 >> 5) * 4);
              *puVar34 = *puVar34 | 1 << ((byte)iVar38 & 0x1f);
              iVar24 = *(int *)&(pTVar43->Elements).field_0x20;
              uVar41 = uVar41 & ~uVar25;
              puVar35 = *(undefined1 **)&(pTVar43->Elements).field_0x18;
              puVar18 = puVar27;
              if (puVar35 != (undefined1 *)0x0) {
                puVar18 = puVar35;
              }
              uVar30 = uVar41 & *(uint *)(puVar18 + (longlong)iVar26 * 4);
              while (uVar30 == 0) {
                lVar17 = (longlong)iVar26;
                iVar42 = iVar42 + 0x20;
                iVar26 = iVar26 + 1;
                iVar38 = iVar24;
                if ((int)(iVar24 + -1 + (iVar24 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar26)
                goto LAB_146134d53;
                uVar41 = 0xffffffff;
                uVar30 = *(uint *)(puVar18 + (lVar17 + 1) * 4);
              }
              uVar25 = -uVar30 & uVar30;
              uVar23 = (ulonglong)uVar25 * 2 + 1;
              lVar17 = 0x3f;
              if (uVar23 != 0) {
                for (; uVar23 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                }
              }
              local_18c = (int)lVar17;
              iVar38 = iVar42 + -1 + local_18c;
              if (iVar24 < iVar38) {
                iVar38 = iVar24;
              }
LAB_146134d53:
              uVar33 = local_230;
            } while (iVar38 < *(int *)&(pTVar43->Elements).field_0x20);
          }
        }
LAB_146134d68:
        local_1d0 = CONCAT44(local_1d0._4_4_,1);
        local_240 = 0;
        local_23c = 0;
        uVar25 = 0;
        if (local_b8 != 0) {
          FVar19 = (ForElementType<unsigned_int>)&local_d0;
          if (local_d0.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar19 = local_d0.SecondaryData;
          }
          uVar25 = *(uint *)FVar19;
          local_240 = 0;
          local_23c = 0;
          while (uVar25 == 0) {
            local_23c = local_23c + 0x20;
            lVar17 = (longlong)local_240;
            local_240 = local_240 + 1;
            uVar25 = local_b8;
            if ((int)((local_b8 - 1) + ((int)(local_b8 - 1) >> 0x1f & 0x1fU)) >> 5 < local_240)
            goto LAB_146134e0c;
            uVar25 = *(uint *)((uchar *)((longlong)FVar19 + 4) + lVar17 * 4);
          }
          local_1d0 = (ulonglong)(-uVar25 & uVar25);
          uVar23 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
          lVar17 = 0x3f;
          if (uVar23 != 0) {
            for (; uVar23 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          local_188 = (int)lVar17;
          uVar25 = local_188 + -1 + local_23c;
          if ((int)local_b8 < (int)uVar25) {
            uVar25 = local_b8;
          }
        }
LAB_146134e0c:
        local_268 = 0xffffffff;
        pFVar29 = local_270;
        if ((int)uVar25 < (int)local_b8) {
          uVar23 = (ulonglong)(int)local_244;
          pTVar32 = &local_270->EntityLocations;
          local_208 = (TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
                       *)&local_270->ParentToChild;
          lVar17 = uVar23 * 2 + -2;
          iVar24 = local_240;
          iVar26 = local_23c;
          local_168 = pTVar32;
          do {
            uVar25 = local_220 - uVar25;
            uVar41 = 0;
            if ((int)uVar25 < (int)uVar23) {
              uVar41 = ~uVar25 >> 0x1f;
            }
            local_258 = lVar17;
            if (uVar41 == 0) {
              local_2a0 = (ulonglong)(int)uVar23;
              local_2a8 = (longlong)(int)uVar25;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld");
              if (bVar13) {
                pcVar9 = (code *)swi(3);
                iVar24 = (*pcVar9)();
                return iVar24;
              }
            }
            uVar41 = local_228;
            pFVar29 = local_270;
            pFVar44 = local_260->ComponentHeaders;
            local_24e = local_218[(int)uVar25].Value;
            pFVar39 = pFVar44 + local_260->NumComponents;
            local_238 = pFVar39;
            if (pFVar44 != pFVar39) {
              do {
                if ((char)*(int *)&pFVar44->Sizeof != '\0') {
                  pFVar15 = FComponentRegistry::GetComponentTypeChecked
                                      (pFVar29->ComponentRegistry,
                                       (FComponentTypeID)(pFVar44->ComponentType).Value);
                  ppuVar1 = &pFVar44->Components;
                  if ((((char)*(int *)&pFVar44->Sizeof == '\0') || (*ppuVar1 == (uchar *)0x0)) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("!IsTag() && Components != nullptr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                                          ,0x221,L""), bVar13)) {
                    pcVar9 = (code *)swi(3);
                    iVar24 = (*pcVar9)();
                    return iVar24;
                  }
                  _Dst = *ppuVar1 + (int)((byte)*(int *)&pFVar44->Sizeof * uVar25);
                  if (pFVar15->bIsTriviallyDestructable == '\0') {
                    pIVar8 = (pFVar15->ComplexComponentOps).Ptr;
                    (**(code **)((longlong)*pIVar8 + 0x10))(pIVar8,_Dst,1);
                  }
                  pFVar39 = local_238;
                  if (uVar41 != uVar25) {
                    if ((((char)*(int *)&pFVar44->Sizeof == '\0') || (*ppuVar1 == (uchar *)0x0)) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("!IsTag() && Components != nullptr",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                                            ,0x221,L""), bVar13)) {
                      pcVar9 = (code *)swi(3);
                      iVar24 = (*pcVar9)();
                      return iVar24;
                    }
                    if (pFVar15->bIsTriviallyDestructable == '\x01' &&
                        pFVar15->bIsTriviallyCopyAssignable == '\x01') {
                      memmove(_Dst,pFVar44->Components +
                                   (int)((byte)*(int *)&pFVar44->Sizeof * uVar41),
                              (ulonglong)pFVar15->Sizeof);
                      pFVar39 = local_238;
                    }
                    else {
                      pIVar8 = (pFVar15->ComplexComponentOps).Ptr;
                      (**(code **)((longlong)*pIVar8 + 0x20))
                                (pIVar8,_Dst,
                                 pFVar44->Components +
                                 (int)((byte)*(int *)&pFVar44->Sizeof * uVar41),1);
                      pFVar39 = local_238;
                    }
                  }
                }
                pFVar44 = pFVar44 + 1;
                lVar17 = local_258;
                pTVar32 = local_168;
                iVar24 = local_240;
                iVar26 = local_23c;
              } while (pFVar44 != pFVar39);
            }
            uVar41 = local_228;
            uVar6 = local_24e;
            if (local_228 != uVar25) {
              if (((((local_228 & 0xffff0000) != 0) || ((uVar25 & 0xffff0000) != 0)) ||
                  ((int)(uint)local_260->Size <= (int)uVar25)) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValidUint16(InCurrentOffset) && IsValidUint16(InNewOffset) && InNewOffset < Allocation->Size"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                                      ,0x58,L""), bVar13)) {
                pcVar9 = (code *)swi(3);
                iVar24 = (*pcVar9)();
                return iVar24;
              }
              local_260->EntityIDs[(int)uVar25].Value =
                   *(ushort *)((longlong)&local_260->EntityIDs->Value + lVar17);
              pFVar40 = local_260->EntityIDs;
              uVar30 = 0;
              if ((int)uVar25 < (int)(uint)local_260->Size) {
                uVar30 = ~uVar25 >> 0x1f;
              }
              if (uVar30 == 0) {
                local_2a8 = (longlong)(int)uVar25;
                local_2a0 = (ulonglong)local_260->Size;
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld");
                if (bVar13) {
                  pcVar9 = (code *)swi(3);
                  iVar24 = (*pcVar9)();
                  return iVar24;
                }
              }
              puVar4 = (undefined2 *)
                       (*(longlong *)pTVar32 + (ulonglong)pFVar40[(int)uVar25].Value * 8);
              if ((((uVar25 | local_290) & 0xffff0000) != 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(InAllocationIndex & 0xFFFF0000) == 0 && (InEntryIndexWithinAllocation & 0xFFFF0000) == 0"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                                      ,0x3ad,L""), bVar13)) {
                pcVar9 = (code *)swi(3);
                iVar24 = (*pcVar9)();
                return iVar24;
              }
              *puVar4 = (short)local_290;
              puVar4[1] = (short)uVar25;
            }
            if (((uVar41 & 0xffff0000) != 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValidUint16(EntityIndex)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                                    ,0x8e,L""), bVar13)) {
              pcVar9 = (code *)swi(3);
              iVar24 = (*pcVar9)();
              return iVar24;
            }
            pTVar43 = local_208;
            *(undefined2 *)((longlong)&local_260->EntityIDs->Value + local_258) = 0xffff;
            local_260->Size = local_260->Size - 1;
            local_228 = *(undefined4 *)(*(longlong *)pTVar32 + (ulonglong)uVar6 * 8);
            uVar7 = *(ushort *)(*(longlong *)pTVar32 + (ulonglong)uVar6 * 8 + 4);
            local_280[0].Value = uVar6;
            if (uVar7 != 0xffff) {
              local_24c.Value = uVar7;
              TMultiMap<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>_>
              ::Remove((TMultiMap<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>_>
                        *)local_208,&local_24c,local_280);
            }
            if (*(int *)&(pTVar43->Elements).field_0x8 != *(int *)&(pTVar43->Elements).field_0x34) {
              TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>,FDefaultSetAllocator>
              ::RemoveImpl<UE::MovieScene::FMovieSceneEntityID>(pTVar43,(uint)uVar6,local_280);
            }
            pFVar29 = local_270;
            TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_int,0>,FDefaultSetAllocator>
            ::Remove((TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_int,0>,FDefaultSetAllocator>
                      *)&local_270->EntityGenerationMap,local_280);
            TSparseArray<UE::MovieScene::FEntityManager::FEntityLocation,FDefaultSparseArrayAllocator>
            ::RemoveAt(pTVar32,(uint)uVar6,1);
            if (local_210 !=
                (TSet<UE::MovieScene::FMovieSceneEntityID,DefaultKeyFuncs<UE::MovieScene::FMovieSceneEntityID,0>,FDefaultSetAllocator>
                 *)0x0) {
              TSet<UE::MovieScene::FMovieSceneEntityID,DefaultKeyFuncs<UE::MovieScene::FMovieSceneEntityID,0>,FDefaultSetAllocator>
              ::Emplace<UE::MovieScene::FMovieSceneEntityID_const_&>
                        (local_210,local_184,(bool *)local_280);
            }
            local_228 = uVar41 - 1;
            lVar17 = local_258 + -2;
            local_268 = ~(uint)local_1d0 & local_268;
            FVar19 = (ForElementType<unsigned_int>)&local_d0;
            if (local_d0.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FVar19 = local_d0.SecondaryData;
            }
            uVar25 = local_268 & *(uint *)((longlong)FVar19 + (longlong)iVar24 * 4);
            while (uVar25 == 0) {
              iVar26 = iVar26 + 0x20;
              lVar20 = (longlong)iVar24;
              iVar24 = iVar24 + 1;
              local_240 = iVar24;
              local_23c = iVar26;
              uVar25 = local_b8;
              if ((int)(((int)(local_b8 - 1) >> 0x1f & 0x1fU) + (local_b8 - 1)) >> 5 < iVar24)
              goto LAB_1461352a1;
              uVar25 = *(uint *)((uchar *)((longlong)FVar19 + 4) + lVar20 * 4);
              local_268 = 0xffffffff;
            }
            local_1d0 = CONCAT44(local_1d0._4_4_,-uVar25 & uVar25);
            uVar23 = (ulonglong)(-uVar25 & uVar25) * 2 + 1;
            lVar20 = 0x3f;
            if (uVar23 != 0) {
              for (; uVar23 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            local_1c8 = (int)lVar20;
            uVar25 = local_1c8 + -1 + iVar26;
            if ((int)local_b8 < (int)uVar25) {
              uVar25 = local_b8;
            }
LAB_1461352a1:
            uVar23 = (ulonglong)local_244;
            uVar33 = local_230;
            local_258 = lVar17;
          } while ((int)uVar25 < (int)local_b8);
        }
        uVar25 = local_290;
        if (local_24a == local_248) {
          if ((((int)local_290 < 0) ||
              ((pFVar29->AllocationsWithCapacity).NumBits <= (int)local_290)) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index>=0 && Index<NumBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x5be,L""), bVar13)) {
            pcVar9 = (code *)swi(3);
            iVar24 = (*pcVar9)();
            return iVar24;
          }
          FVar19 = (pFVar29->AllocationsWithCapacity).AllocatorInstance.SecondaryData;
          FVar28 = (ForElementType<unsigned_int>)&pFVar29->AllocationsWithCapacity;
          if (FVar19 != (ForElementType<unsigned_int>)0x0) {
            FVar28 = FVar19;
          }
          uVar41 = uVar25;
          if ((int)uVar25 < 0) {
            uVar41 = uVar25 + 0x1f;
          }
          puVar34 = (uint *)((longlong)FVar28 + (longlong)((int)uVar41 >> 5) * 4);
          *puVar34 = *puVar34 | 1 << ((byte)uVar25 & 0x1f);
        }
      }
      TStack_158.UnvisitedBitMask = TStack_158.UnvisitedBitMask & ~TStack_158._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_158);
    }
    if (local_1e0 !=
        *(int *)&(local_270->EntityGenerationMap).field_0x8 -
        *(int *)&(local_270->EntityGenerationMap).field_0x34) {
      local_270->bHandleGenerationStale = true;
    }
    local_270->StructureMutationSystemSerialNumber = local_270->SystemSerialNumber;
    local_270->bAccumulatedMaskStale = true;
    if (local_d0.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_d0.SecondaryData);
    }
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
    local_60 = 0;
    if (local_68 != (void *)0x0) {
      FMemory::Free(local_68);
    }
    TSparseArray<TSparseSetElement<TTuple<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,UE::MovieScene::FFreeEntityOperation::FAllocationMask>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_a8);
  }
  return local_264;
}

// FreeEntity @ 146135410

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::FreeEntity(FEntityManager *this,FMovieSceneEntityID param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  FFreeEntityOperation local_38;
  
  uVar5 = (uint)param_1.Value;
  if ((int)uVar5 < *(int *)&(this->EntityLocations).field_0x28) {
    if (*(int *)&(this->EntityLocations).field_0x28 <= (int)uVar5) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    puVar4 = *(undefined1 **)&(this->EntityLocations).field_0x20;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->EntityLocations).field_0x10;
    }
    if ((*(uint *)(puVar4 + (ulonglong)(param_1.Value >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0)
    goto LAB_1461354b2;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("EntityLocations.IsValidIndex(EntityID.AsIndex())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                     ,0x27e,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_1461354b2:
  CheckCanChangeStructure(this);
  local_38.AllocationsToDestroy.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.AllocationsToDestroy.ArrayNum = 0;
  local_38.AllocationsToDestroy.ArrayMax = 0;
  local_38.LooseEntitiesToDestroy.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.LooseEntitiesToDestroy.ArrayNum = 0;
  local_38.LooseEntitiesToDestroy.ArrayMax = 0;
  local_38.EntityManager = this;
  iVar3 = Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x202,&local_38.LooseEntitiesToDestroy.AllocatorInstance,
                     &local_38.LooseEntitiesToDestroy.ArrayMax);
  local_38.LooseEntitiesToDestroy.ArrayNum = iVar3 + 1;
  *(ushort *)(local_38.LooseEntitiesToDestroy.AllocatorInstance.Data + (longlong)iVar3 * 2) =
       param_1.Value;
  FreeEntities(this,&local_38,
               (TSet<UE::MovieScene::FMovieSceneEntityID,DefaultKeyFuncs<UE::MovieScene::FMovieSceneEntityID,0>,FDefaultSetAllocator>
                *)0x0);
  if (local_38.LooseEntitiesToDestroy.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.LooseEntitiesToDestroy.AllocatorInstance.Data);
  }
  if (local_38.AllocationsToDestroy.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocationsToDestroy.AllocatorInstance.Data);
  }
  return;
}

// GetAccumulatedMask @ 146139f70

/* WARNING: Enum "Type": Some values do not have unique names */

FComponentMask * __thiscall UE::MovieScene::FEntityManager::GetAccumulatedMask(FEntityManager *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  FComponentMask *pFVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  <lambda_1> local_res10 [8];
  int local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  if (this->bAccumulatedMaskStale != true) {
    return &this->AccumulatedMask;
  }
  puVar1 = &(this->EntityAllocationMasks).field_0x10;
  (this->AccumulatedMask).Bits.NumBits = 0;
  iVar3 = *(int *)&(this->EntityAllocationMasks).field_0x28;
  local_88 = 0;
  uStack_84 = 1;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)&(this->EntityAllocationMasks).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)puVar1;
    }
    uVar10 = *puVar12;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar10 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar8 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_14613a04a;
      uVar10 = puVar12[lVar8 + 1];
    }
    uStack_84 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_res18 = (int)lVar8;
    iStack_74 = local_res18 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_14613a04a:
      iStack_74 = iVar3;
    }
  }
  uVar10 = *(uint *)&(this->EntityAllocationMasks).field_0x28;
  local_40 = *(int *)&(this->EntityAllocationMasks).field_0x8 -
             *(int *)&(this->EntityAllocationMasks).field_0x34;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  iVar9 = (int)uVar10 >> 5;
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  uVar13 = uVar10 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar7 = (FComponentMask *)(*pcVar5)();
    return pFVar7;
  }
  uVar4 = *(uint *)&(this->EntityAllocationMasks).field_0x28;
  if (uVar10 != uVar4) {
    puVar11 = *(undefined1 **)&(this->EntityAllocationMasks).field_0x20;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar11 + (longlong)iVar9 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar9;
      uVar13 = uVar13 + 0x20;
      iVar9 = iVar9 + 1;
      uVar10 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14613a140;
      uVar10 = *(uint *)(puVar11 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar13;
    if ((int)uVar4 < (int)uVar10) {
      uVar10 = uVar4;
    }
  }
LAB_14613a140:
  while( true ) {
    if (*(int *)&(this->EntityAllocationMasks).field_0x8 -
        *(int *)&(this->EntityAllocationMasks).field_0x34 != local_40) {
      `TSparseArray<UE::MovieScene::FComponentMask,FDefaultSparseArrayAllocator>::
      TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_60.CurrentBitIndex == uVar10) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    Core::Private::
    BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
              ((TBitArray<TFixedAllocator<12>_> *)
               ((longlong)local_60.CurrentBitIndex * 0x38 +
               *(longlong *)&this->EntityAllocationMasks),&(this->AccumulatedMask).Bits,MaxSize,
               local_res10);
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  this->bAccumulatedMaskStale = false;
  return &this->AccumulatedMask;
}

// GetAllocatedSize @ 14613a1f0

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall UE::MovieScene::FEntityManager::GetAllocatedSize(FEntityManager *this)

{
  return 0;
}

// GetChildren_ParentFirst @ 14613a320

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::GetChildren_ParentFirst
          (FEntityManager *this,FMovieSceneEntityID param_1,
          TArray<UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TMultiMap<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  undefined1 *puVar8;
  int local_68;
  int iStack_64;
  int iStack_4c;
  
  pTVar2 = &this->ParentToChild;
  iVar6 = *(int *)&(this->ParentToChild).field_0x48;
  local_68 = -1;
  if (iVar6 == 0) {
    iStack_64 = -1;
  }
  else {
    puVar8 = *(undefined1 **)&(this->ParentToChild).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->ParentToChild).field_0x38;
    }
    iStack_64 = *(int *)(puVar8 + ((longlong)iVar6 - 1U & (ulonglong)param_1.Value) * 4);
    local_68 = iStack_64;
    if (iStack_64 != -1) {
      do {
        iStack_64 = *(int *)(*(longlong *)pTVar2 + 4 + (longlong)local_68 * 0xc);
        if (*(ushort *)(*(longlong *)pTVar2 + (longlong)local_68 * 0xc) == param_1.Value) break;
        local_68 = iStack_64;
      } while (iStack_64 != -1);
    }
  }
  if (local_68 != -1) {
    piVar1 = &param_2->ArrayMax;
    do {
      pFVar3 = (param_2->AllocatorInstance).Data;
      pFVar7 = (FScriptContainerElement *)((longlong)local_68 * 0xc + 2 + *(longlong *)pTVar2);
      if (((pFVar3 <= pFVar7) && (pFVar7 < pFVar3 + (longlong)*piVar1 * 2)) &&
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
      iVar6 = param_2->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x202,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar6 + 1;
      *(undefined2 *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 2) =
           *(undefined2 *)pFVar7;
      GetChildren_ParentFirst
                (this,(FMovieSceneEntityID)
                      *(ushort *)(*(longlong *)pTVar2 + 2 + (longlong)local_68 * 0xc),param_2);
      if (iStack_64 == -1) {
        return;
      }
      iStack_4c = iStack_64;
      do {
        iStack_64 = *(int *)(*(longlong *)pTVar2 + 4 + (longlong)iStack_4c * 0xc);
        local_68 = iStack_4c;
        if (*(ushort *)(*(longlong *)pTVar2 + (longlong)iStack_4c * 0xc) == param_1.Value) break;
        local_68 = iStack_64;
        iStack_4c = iStack_64;
      } while (iStack_64 != -1);
    } while (local_68 != -1);
  }
  return;
}

// GetEntity @ 14613a8b0

/* WARNING: Enum "Type": Some values do not have unique names */

FEntityInfo * __thiscall
UE::MovieScene::FEntityManager::GetEntity
          (FEntityManager *this,FEntityInfo *__return_storage_ptr__,FMovieSceneEntityID param_1)

{
  FEntityAllocation *pFVar1;
  code *pcVar2;
  bool bVar3;
  FEntityInfo *pFVar4;
  uint uVar5;
  undefined1 *puVar6;
  
  uVar5 = (uint)param_1.Value;
  if ((int)uVar5 < *(int *)&(this->EntityLocations).field_0x28) {
    if (*(int *)&(this->EntityLocations).field_0x28 <= (int)uVar5) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FEntityInfo *)(*pcVar2)();
        return pFVar4;
      }
    }
    puVar6 = *(undefined1 **)&(this->EntityLocations).field_0x20;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->EntityLocations).field_0x10;
    }
    if ((*(uint *)(puVar6 + (ulonglong)(param_1.Value >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0)
    goto LAB_14613a956;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("EntityLocations.IsValidIndex(Index)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                     ,0x22b,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FEntityInfo *)(*pcVar2)();
    return pFVar4;
  }
LAB_14613a956:
  uVar5 = *(uint *)(*(longlong *)&this->EntityLocations + (ulonglong)param_1.Value * 8);
  (__return_storage_ptr__->EntityID).Value = param_1.Value;
  if ((short)uVar5 != -1) {
    pFVar1 = *(FEntityAllocation **)
              (*(longlong *)&this->EntityAllocations + (ulonglong)(uVar5 & 0xffff) * 8);
    (__return_storage_ptr__->Data).ComponentOffset = uVar5 >> 0x10;
    (__return_storage_ptr__->Data).Allocation = pFVar1;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).Allocation = (FEntityAllocation *)0x0;
  (__return_storage_ptr__->Data).ComponentOffset = -1;
  return __return_storage_ptr__;
}

// GetEntityHandle @ 14613a9c0

/* WARNING: Enum "Type": Some values do not have unique names */

FEntityHandle __thiscall
UE::MovieScene::FEntityManager::GetEntityHandle(FEntityManager *this,FMovieSceneEntityID param_1)

{
  int iVar1;
  ushort *puVar2;
  ushort *puVar3;
  undefined6 in_register_00000012;
  FEntityHandle FVar4;
  undefined1 *puVar5;
  ushort in_R8W;
  ushort local_res18 [4];
  uint local_res20 [2];
  TPairInitializer<UE::MovieScene::FMovieSceneEntityID_const_&,unsigned_int_const_&> local_28;
  uint *local_18;
  
  FVar4._2_6_ = in_register_00000012;
  FVar4.HandleGeneration._0_2_ = param_1.Value;
  if (in_R8W == 0xffff) {
    *(undefined4 *)FVar4 = 0;
    *(undefined2 *)((longlong)FVar4 + 4) = 0xffff;
    return FVar4;
  }
  if (*(int *)&(this->EntityGenerationMap).field_0x8 !=
      *(int *)&(this->EntityGenerationMap).field_0x34) {
    puVar5 = *(undefined1 **)&(this->EntityGenerationMap).field_0x40;
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &(this->EntityGenerationMap).field_0x38;
    }
    iVar1 = *(int *)(puVar5 + ((ulonglong)(*(int *)&(this->EntityGenerationMap).field_0x48 - 1) &
                              (ulonglong)in_R8W) * 4);
    if (iVar1 != -1) {
      do {
        puVar3 = (ushort *)((longlong)iVar1 * 0x10 + *(longlong *)&this->EntityGenerationMap);
        if (*puVar3 == in_R8W) {
          puVar2 = puVar3 + 2;
          if (puVar3 == (ushort *)0x0) {
            puVar2 = (ushort *)0x0;
          }
          if (puVar2 != (ushort *)0x0) {
            *(undefined4 *)FVar4 = *(undefined4 *)puVar2;
            *(ushort *)((longlong)FVar4 + 4) = in_R8W;
            return FVar4;
          }
          break;
        }
        iVar1 = *(int *)(puVar3 + 4);
      } while (iVar1 != -1);
    }
  }
  if (this->bHandleGenerationStale != false) {
    this->CurrentHandleGeneration = this->CurrentHandleGeneration + 1;
  }
  local_res20[0] = this->CurrentHandleGeneration;
  local_28.Value = (uint *)local_res18;
  this->bHandleGenerationStale = false;
  local_18 = local_res20;
  local_res18[0] = in_R8W;
  TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UE::MovieScene::FMovieSceneEntityID_const_&,unsigned_int_const_&>_>
            ((TSet<TTuple<UE::MovieScene::FMovieSceneEntityID,unsigned_int>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,unsigned_int,0>,FDefaultSetAllocator>
              *)&this->EntityGenerationMap,&local_28,(bool *)&local_28.Value);
  *(uint *)FVar4 = local_res20[0];
  *(ushort *)((longlong)FVar4 + 4) = local_res18[0];
  return FVar4;
}

// GetEntityType @ 14613ab10

/* WARNING: Enum "Type": Some values do not have unique names */

FComponentMask * __thiscall
UE::MovieScene::FEntityManager::GetEntityType(FEntityManager *this,FMovieSceneEntityID param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(longlong *)&this->EntityLocations + (ulonglong)param_1.Value * 8);
  if ((short)uVar1 != -1) {
    return (FComponentMask *)
           ((ulonglong)(uVar1 & 0xffff) * 0x38 + *(longlong *)&this->EntityAllocationMasks);
  }
  return &GEntityManagerEmptyMask;
}

// GetImmediateChildren @ 14613b670

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::GetImmediateChildren
          (FEntityManager *this,FMovieSceneEntityID param_1,
          TArray<UE::MovieScene::FMovieSceneEntityID,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  TMultiMap<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::MovieScene::FMovieSceneEntityID,UE::MovieScene::FMovieSceneEntityID,1>_>
  *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  undefined1 *puVar8;
  int local_58;
  int iStack_54;
  int iStack_3c;
  
  pTVar2 = &this->ParentToChild;
  iVar6 = *(int *)&(this->ParentToChild).field_0x48;
  local_58 = -1;
  if (iVar6 == 0) {
    iStack_54 = -1;
  }
  else {
    puVar8 = *(undefined1 **)&(this->ParentToChild).field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->ParentToChild).field_0x38;
    }
    iStack_54 = *(int *)(puVar8 + ((longlong)iVar6 - 1U & (ulonglong)param_1.Value) * 4);
    local_58 = iStack_54;
    if (iStack_54 != -1) {
      do {
        iStack_54 = *(int *)(*(longlong *)pTVar2 + 4 + (longlong)local_58 * 0xc);
        if (*(ushort *)(*(longlong *)pTVar2 + (longlong)local_58 * 0xc) == param_1.Value) break;
        local_58 = iStack_54;
      } while (iStack_54 != -1);
    }
  }
  if (local_58 != -1) {
    piVar1 = &param_2->ArrayMax;
    do {
      pFVar3 = (param_2->AllocatorInstance).Data;
      pFVar7 = (FScriptContainerElement *)((longlong)local_58 * 0xc + 2 + *(longlong *)pTVar2);
      if (((pFVar3 <= pFVar7) && (pFVar7 < pFVar3 + (longlong)*piVar1 * 2)) &&
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
      iVar6 = param_2->ArrayNum;
      if (iVar6 == *piVar1) {
        iVar6 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x202,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar6 + 1;
      *(undefined2 *)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 2) =
           *(undefined2 *)pFVar7;
      if (iStack_54 == -1) {
        return;
      }
      iStack_3c = iStack_54;
      do {
        iStack_54 = *(int *)(*(longlong *)pTVar2 + 4 + (longlong)iStack_3c * 0xc);
        local_58 = iStack_3c;
        if (*(ushort *)(*(longlong *)pTVar2 + (longlong)iStack_3c * 0xc) == param_1.Value) break;
        local_58 = iStack_54;
        iStack_3c = iStack_54;
      } while (iStack_54 != -1);
    } while (local_58 != -1);
  }
  return;
}

// GetOrCreateAllocationWithSlack @ 14613ba20

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UE::MovieScene::FEntityManager::GetOrCreateAllocationWithSlack
          (FEntityManager *this,FComponentMask *param_1,int *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ForElementType<unsigned_int> FVar12;
  ForElementType<unsigned_int> FVar13;
  uint uVar14;
  
  if (((param_2 != (int *)0x0) && ((*param_2 & 0xffff0000U) != 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InOutDesiredSlack || IsValidUint16(*InOutDesiredSlack)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                         ,0x466,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar5 = (*pcVar2)();
    return iVar5;
  }
  iVar5 = (this->AllocationsWithCapacity).NumBits;
  iVar9 = 0;
  iVar11 = 0;
  if (iVar5 != 0) {
    FVar12 = (this->AllocationsWithCapacity).AllocatorInstance.SecondaryData;
    if (FVar12 == (ForElementType<unsigned_int>)0x0) {
      FVar12 = (ForElementType<unsigned_int>)&this->AllocationsWithCapacity;
    }
    uVar6 = *(uint *)FVar12;
    while (uVar6 == 0) {
      lVar7 = (longlong)iVar9;
      iVar11 = iVar11 + 0x20;
      iVar9 = iVar9 + 1;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14613bc23;
      uVar6 = *(uint *)((uchar *)((longlong)FVar12 + 4) + lVar7 * 4);
    }
    uVar6 = -uVar6 & uVar6;
    uVar1 = (ulonglong)uVar6 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar10 = (int)lVar7 + -1 + iVar11;
    if (iVar10 < iVar5) {
      lVar7 = *(longlong *)&this->EntityAllocationMasks;
      uVar14 = 0xffffffff;
      do {
        bVar3 = TBitArray<TFixedAllocator<12>_>::CompareSetBits<TFixedAllocator<12>_>
                          ((TBitArray<TFixedAllocator<12>_> *)((longlong)iVar10 * 0x38 + lVar7),
                           &param_1->Bits,false);
        if (bVar3) {
          if (param_2 == (int *)0x0) {
            return iVar10;
          }
          iVar5 = *param_2;
          CheckCanChangeStructure(this);
          lVar7 = *(longlong *)(*(longlong *)&this->EntityAllocations + (longlong)iVar10 * 8);
          iVar9 = (uint)*(ushort *)(lVar7 + 0x12) - (uint)*(ushort *)(lVar7 + 0xe);
          if (iVar9 < iVar5) {
            iVar5 = iVar9;
          }
          if ((int)(uint)*(ushort *)(lVar7 + 0x10) < (int)(iVar5 + (uint)*(ushort *)(lVar7 + 0xe)))
          {
            GrowAllocation(this,iVar10,iVar5);
          }
          *param_2 = iVar5;
          return iVar10;
        }
        uVar14 = ~uVar6 & uVar14;
        FVar12 = (this->AllocationsWithCapacity).AllocatorInstance.SecondaryData;
        FVar13 = (ForElementType<unsigned_int>)&this->AllocationsWithCapacity;
        if (FVar12 != (ForElementType<unsigned_int>)0x0) {
          FVar13 = FVar12;
        }
        uVar6 = uVar14 & *(uint *)((longlong)FVar13 + (longlong)iVar9 * 4);
        while (uVar6 == 0) {
          lVar8 = (longlong)iVar9;
          iVar11 = iVar11 + 0x20;
          iVar9 = iVar9 + 1;
          if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14613bc23;
          uVar14 = 0xffffffff;
          uVar6 = *(uint *)((uchar *)((longlong)FVar13 + 4) + lVar8 * 4);
        }
        uVar6 = -uVar6 & uVar6;
        uVar1 = (ulonglong)uVar6 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        iVar10 = (int)lVar8 + -1 + iVar11;
      } while (iVar10 < iVar5);
    }
  }
LAB_14613bc23:
  uVar4 = 4;
  if (param_2 != (int *)0x0) {
    uVar4 = 0x40;
    if ((ushort)*param_2 < 0x40) {
      uVar4 = (ushort)*param_2;
    }
    *param_2 = (uint)uVar4;
  }
  iVar5 = CreateEntityAllocationEntry(this,param_1,uVar4,0x40);
  return iVar5;
}

// GetReferencerName @ 14613c930

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
UE::MovieScene::FEntityManager::GetReferencerName
          (FEntityManager *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  iVar2 = (this->ManagerDebugName).Data.ArrayNum;
  _Src = (this->ManagerDebugName).Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return __return_storage_ptr__;
  }
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,iVar2,0,(ForAnyElementType *)__return_storage_ptr__,iVar2,piVar1);
  memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,_Src,(longlong)iVar2 * 2);
  return __return_storage_ptr__;
}

// GetThreadingModel @ 14613d020

/* WARNING: Enum "Type": Some values do not have unique names */

EEntityThreadingModel __thiscall
UE::MovieScene::FEntityManager::GetThreadingModel(FEntityManager *this)

{
  return this->ThreadingModel;
}

// GrowAllocation @ 14613d0f0

/* WARNING: Enum "Type": Some values do not have unique names */

FEntityAllocation * __thiscall
UE::MovieScene::FEntityManager::GrowAllocation(FEntityManager *this,int param_1,int param_2)

{
  ushort *puVar1;
  ushort uVar2;
  void *pvVar3;
  FComponentHeader *pFVar4;
  void *_Src;
  void *_Dst;
  IComplexComponentOps *pIVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FEntityAllocation *pFVar9;
  ulong64 uVar10;
  FComponentTypeInfo *pFVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ushort uVar15;
  uint uVar16;
  int iVar17;
  
  CheckCanChangeStructure(this);
  pvVar3 = *(void **)(*(longlong *)&this->EntityAllocations + (longlong)param_1 * 8);
  puVar1 = (ushort *)((longlong)pvVar3 + 0xe);
  if (((param_2 < 1) ||
      ((int)(uint)*(ushort *)((longlong)pvVar3 + 0x12) < (int)((uint)*puVar1 + param_2))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("MinNumToGrowBy > 0 && Allocation->Num() + MinNumToGrowBy <= Allocation->GetMaxCapacity()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                         ,0x936,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FEntityAllocation *)(*pcVar6)();
    return pFVar9;
  }
  iVar17 = param_2 + (uint)*puVar1;
  uVar12 = (ulonglong)iVar17;
  if (*(short *)((longlong)pvVar3 + 0x10) == 0) {
    uVar10 = 4;
    if (4 < uVar12) {
      uVar10 = uVar12;
    }
  }
  else {
    uVar10 = (uVar12 * 3 >> 3) + 0x10 + uVar12;
  }
  uVar10 = FMemory::QuantizeSize(uVar10,0);
  uVar2 = *(ushort *)((longlong)pvVar3 + 0x12);
  iVar8 = (int)uVar10;
  if (iVar8 < iVar17) {
    iVar8 = 0x7fffffff;
  }
  if (iVar8 < iVar17) {
    iVar8 = iVar17;
  }
  uVar15 = uVar2;
  if (iVar8 < (int)(uint)uVar2) {
    uVar15 = (ushort)iVar8;
  }
  uVar12 = 0;
  pFVar9 = CreateEntityAllocation
                     (this,(FComponentMask *)
                           ((longlong)param_1 * 0x38 + *(longlong *)&this->EntityAllocationMasks),
                      uVar15,uVar2,(FEntityAllocation *)0x0);
  pFVar9->Size = *puVar1;
  memcpy(pFVar9->EntityIDs,*(void **)((longlong)pvVar3 + 0x18),(ulonglong)*puVar1 * 2);
  if ((*(ushort *)((longlong)pvVar3 + 0xc) != pFVar9->NumComponents) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Allocation->GetNumComponentTypes() == NewAllocation->GetNumComponentTypes()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                         ,0x945,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar9 = (FEntityAllocation *)(*pcVar6)();
    return pFVar9;
  }
  uVar13 = uVar12;
  if (*(short *)((longlong)pvVar3 + 0xc) != 0) {
    do {
      pFVar4 = pFVar9->ComponentHeaders;
      lVar14 = *(longlong *)((longlong)pvVar3 + 0x28) + uVar13;
      if ((*(short *)(lVar14 + 0x36) !=
           *(short *)((longlong)&(pFVar4->ComponentType).Value + uVar13)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("SrcHeader->ComponentType == DstHeader->ComponentType",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                             ,0x94c,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        pFVar9 = (FEntityAllocation *)(*pcVar6)();
        return pFVar9;
      }
      if (*(char *)(lVar14 + 0x34) != '\0') {
        pFVar11 = FComponentRegistry::GetComponentTypeChecked
                            (this->ComponentRegistry,(FComponentTypeID)*(ushort *)(lVar14 + 0x36));
        if (((*(char *)(lVar14 + 0x34) == '\0') || (*(longlong *)(lVar14 + 0x18) == 0)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("!IsTag() && Components != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                               ,0x221,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar9 = (FEntityAllocation *)(*pcVar6)();
          return pFVar9;
        }
        _Src = *(void **)(lVar14 + 0x18);
        if ((((&pFVar4->Sizeof)[uVar13] == '\0') ||
            (*(longlong *)((longlong)&pFVar4->Components + uVar13) == 0)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("!IsTag() && Components != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                               ,0x221,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar9 = (FEntityAllocation *)(*pcVar6)();
          return pFVar9;
        }
        _Dst = *(void **)((longlong)&pFVar4->Components + uVar13);
        if (pFVar11->bIsTriviallyDestructable == '\x01' &&
            pFVar11->bIsTriviallyCopyAssignable == '\x01') {
          memmove(_Dst,_Src,
                  (ulonglong)((uint)pFVar11->Sizeof * (uint)*(ushort *)((longlong)pvVar3 + 0xe)));
        }
        else {
          pIVar5 = (pFVar11->ComplexComponentOps).Ptr;
          (**(code **)((longlong)*pIVar5 + 0x20))(pIVar5,_Dst,_Src);
        }
      }
      uVar16 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar16;
      uVar13 = uVar13 + 0x38;
    } while ((int)uVar16 < (int)(uint)*(ushort *)((longlong)pvVar3 + 0xc));
  }
  uVar13 = 0;
  CheckCanChangeStructure(this);
  uVar12 = uVar13;
  if (*(short *)((longlong)pvVar3 + 0xc) != 0) {
    do {
      (*(code *)**(undefined8 **)(*(longlong *)((longlong)pvVar3 + 0x28) + uVar12))
                ((longlong)(int)uVar13 * 0x38 + *(longlong *)((longlong)pvVar3 + 0x28),0);
      uVar16 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar16;
      uVar12 = uVar12 + 0x38;
    } while ((int)uVar16 < (int)(uint)*(ushort *)((longlong)pvVar3 + 0xc));
  }
  if (*(void **)((longlong)pvVar3 + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)pvVar3 + 0x20));
  }
  FMemory::Free(pvVar3);
  *(FEntityAllocation **)(*(longlong *)&this->EntityAllocations + (longlong)param_1 * 8) = pFVar9;
  return pFVar9;
}

// HasComponent @ 14613da90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::FEntityManager::HasComponent
          (FEntityManager *this,FMovieSceneEntityID param_1,FComponentTypeID param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)(*(longlong *)&this->EntityLocations + (ulonglong)param_1.Value * 8);
  if (((((short)uVar1 != -1) &&
       (lVar2 = (ulonglong)(uVar1 & 0xffff) * 0x38 + *(longlong *)&this->EntityAllocationMasks,
       param_2.Value != 0xffff)) && ((int)(uint)param_2.Value < *(int *)(lVar2 + 0x30))) &&
     ((*(uint *)(lVar2 + (ulonglong)(param_2.Value >> 5) * 4) >> (param_2.Value & 0x1f) & 1) != 0))
  {
    return true;
  }
  return false;
}

// InitializeChildAllocation @ 14613eca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::InitializeChildAllocation
          (FEntityManager *this,FComponentMask *param_1,FComponentMask *param_2,
          FEntityAllocation *param_3,TArrayView<int_const_,int> *param_4,FEntityRange *param_5)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  FComponentMask *pFVar6;
  FComponentMask *pFVar7;
  FEntityAllocation *pFVar8;
  bool bVar9;
  char cVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  uint uVar15;
  undefined1 *puVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  FComponentMask *local_res10;
  FComponentMask *local_res18;
  FEntityAllocation *local_res20;
  int local_c8;
  uint uStack_c4;
  int iStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a0;
  int local_80;
  int local_78;
  int local_74;
  TArrayView<int_const_,int> local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  
  local_68.DataPtr = param_4->DataPtr;
  local_68.ArrayNum = param_4->ArrayNum;
  local_68._12_4_ = *(undefined4 *)&param_4->field_0xc;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  FEntityFactories::RunInitializers
            (&this->ComponentRegistry->Factories,param_1,param_2,param_3,&local_68,param_5);
  uStack_c4 = 1;
  local_c8 = 0;
  iVar3 = *(int *)&(this->InstancedChildInitializers).field_0x28;
  puVar2 = &(this->InstancedChildInitializers).field_0x10;
  iStack_b4 = 0;
  iStack_b0 = 0;
  if (iVar3 != 0) {
    puVar17 = *(uint **)&(this->InstancedChildInitializers).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar2;
    }
    uVar15 = *puVar17;
    iStack_b0 = 0;
    local_c8 = 0;
    while (uVar15 == 0) {
      iStack_b0 = iStack_b0 + 0x20;
      lVar12 = (longlong)local_c8;
      local_c8 = local_c8 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_c8) goto LAB_14613ed97;
      uVar15 = puVar17[lVar12 + 1];
    }
    uStack_c4 = -uVar15 & uVar15;
    uVar1 = (ulonglong)uStack_c4 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_78 = (int)lVar12;
    iStack_b4 = local_78 + -1 + iStack_b0;
    if (iVar3 < iStack_b4) {
LAB_14613ed97:
      iStack_b4 = iVar3;
    }
  }
  uVar15 = *(uint *)&(this->InstancedChildInitializers).field_0x28;
  local_80 = *(int *)&(this->InstancedChildInitializers).field_0x8 -
             *(int *)&(this->InstancedChildInitializers).field_0x34;
  local_a0._padding_ = CONCAT44(uStack_c4,local_c8);
  iVar14 = (int)uVar15 >> 5;
  local_a0.CurrentBitIndex = iStack_b4;
  local_a0.UnvisitedBitMask = 0xffffffff;
  local_a0._28_4_ = uStack_ac;
  local_a0.BaseBitIndex = iStack_b0;
  uVar18 = uVar15 & 0xffffffe0;
  local_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar15 < 0) || (iVar3 < (int)uVar15)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar8 = local_res20;
  pFVar7 = local_res18;
  pFVar6 = local_res10;
  uVar4 = *(uint *)&(this->InstancedChildInitializers).field_0x28;
  if (uVar15 != uVar4) {
    puVar16 = *(undefined1 **)&(this->InstancedChildInitializers).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar2;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar14 * 4);
    while (uVar15 == 0) {
      lVar12 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar15 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14613ee90;
      uVar15 = *(uint *)(puVar16 + lVar12 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_74 = (int)lVar12;
    uVar15 = local_74 + -1 + uVar18;
    if ((int)uVar4 < (int)uVar15) {
      uVar15 = uVar4;
    }
  }
LAB_14613ee90:
  while( true ) {
    if (*(int *)&(this->InstancedChildInitializers).field_0x8 -
        *(int *)&(this->InstancedChildInitializers).field_0x34 != local_80) {
      local_res8[0] = 0;
      `TSparseArray<TInlineValue<UE::MovieScene::FChildEntityInitializer,64,8>,FDefaultSparseArrayAllocator>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((local_a0.CurrentBitIndex == uVar15) &&
       (local_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    plVar13 = (longlong *)
              (*(longlong *)&this->InstancedChildInitializers +
              (longlong)local_a0.CurrentBitIndex * 0x48);
    if (((*(byte *)(*(longlong *)&this->InstancedChildInitializers + 0x40 +
                   (longlong)local_a0.CurrentBitIndex * 0x48) & 1) == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("bIsValid",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                           ,0x97,
                           L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                          ), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    plVar11 = plVar13;
    if ((*(byte *)(plVar13 + 8) & 2) == 0) {
      plVar11 = (longlong *)*plVar13;
    }
    cVar10 = (**(code **)(*plVar11 + 8))(plVar11,pFVar6,pFVar7);
    if (cVar10 != '\0') {
      if (((*(byte *)(plVar13 + 8) & 1) == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("bIsValid",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                             ,0x97,
                             L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                            ), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((*(byte *)(plVar13 + 8) & 2) == 0) {
        plVar13 = (longlong *)*plVar13;
      }
      local_58 = *(undefined4 *)&param_4->DataPtr;
      uStack_54 = *(undefined4 *)((longlong)&param_4->DataPtr + 4);
      iStack_50 = param_4->ArrayNum;
      uStack_4c = *(undefined4 *)&param_4->field_0xc;
      (**(code **)(*plVar13 + 0x10))(plVar13,param_5,pFVar8,&local_58);
    }
    local_a0.UnvisitedBitMask = local_a0.UnvisitedBitMask & ~local_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a0);
  }
  return;
}

// IsHandleValid @ 146141110

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::FEntityManager::IsHandleValid(FEntityManager *this,FEntityHandle param_1)

{
  int iVar1;
  uint *puVar2;
  ushort *puVar3;
  undefined1 *puVar4;
  
  if ((param_1.ID.Value.Value != 0xffff) &&
     (*(int *)&(this->EntityGenerationMap).field_0x8 !=
      *(int *)&(this->EntityGenerationMap).field_0x34)) {
    puVar4 = *(undefined1 **)&(this->EntityGenerationMap).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->EntityGenerationMap).field_0x38;
    }
    iVar1 = *(int *)(puVar4 + ((ulonglong)(*(int *)&(this->EntityGenerationMap).field_0x48 - 1) &
                              (ulonglong)param_1 >> 0x20 & 0xffff) * 4);
    if (iVar1 != -1) {
      do {
        puVar3 = (ushort *)((longlong)iVar1 * 0x10 + *(longlong *)&this->EntityGenerationMap);
        if (*puVar3 == param_1.ID.Value.Value) {
          puVar2 = (uint *)(puVar3 + 2);
          if (puVar3 == (ushort *)0x0) {
            puVar2 = (uint *)0x0;
          }
          if (puVar2 == (uint *)0x0) {
            return false;
          }
          if (*puVar2 != param_1.HandleGeneration) {
            return false;
          }
          return true;
        }
        iVar1 = *(int *)(puVar3 + 4);
      } while (iVar1 != -1);
    }
  }
  return false;
}

// Iterate @ 146141950

/* WARNING: Enum "Type": Some values do not have unique names */

FEntityAllocationIteratorProxy * __thiscall
UE::MovieScene::FEntityManager::Iterate
          (FEntityManager *this,FEntityAllocationIteratorProxy *__return_storage_ptr__,
          FEntityComponentFilter *param_1)

{
  code *pcVar1;
  bool bVar2;
  FEntityAllocationIteratorProxy *pFVar3;
  
  if (param_1 == (FEntityComponentFilter *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InFilter",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                       ,0x405,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FEntityAllocationIteratorProxy *)(*pcVar1)();
      return pFVar3;
    }
  }
  __return_storage_ptr__->Manager = this;
  __return_storage_ptr__->Filter = param_1;
  return __return_storage_ptr__;
}

// MigrateAllocation @ 1461432f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FEntityAllocation * __thiscall
UE::MovieScene::FEntityManager::MigrateAllocation
          (FEntityManager *this,int param_1,FComponentMask *param_2)

{
  FComponentTypeID FVar1;
  undefined1 *puVar2;
  IComplexComponentOps *pIVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FEntityAllocation *pFVar9;
  TTypeCompatibleBytes<unsigned_int> *pTVar10;
  FEntityAllocation *pFVar11;
  FComponentTypeInfo *pFVar12;
  void *_Dst;
  void *_Src;
  uint uVar13;
  undefined1 *puVar14;
  FComponentHeader *this_00;
  FComponentHeader *this_01;
  FComponentHeader *pFVar15;
  FEntityAllocation *pFVar16;
  uint uVar17;
  undefined1 auStackY_1a8 [32];
  <lambda_1> local_178;
  <lambda_1> local_177 [3];
  int local_174;
  FEntityAllocation *local_170;
  FEntityManager *local_168;
  TBitArray<TFixedAllocator<12>_> local_160;
  TBitArray<TFixedAllocator<12>_> local_128;
  TTypeCompatibleBytes<unsigned_int> local_f0 [4];
  TTypeCompatibleBytes<unsigned_int> local_e0 [2];
  TTypeCompatibleBytes<unsigned_int> aTStack_d8 [2];
  TTypeCompatibleBytes<unsigned_int> local_d0 [2];
  TTypeCompatibleBytes<unsigned_int> aTStack_c8 [2];
  int local_c0;
  int local_bc;
  TBitArray<TFixedAllocator<12>_> local_b8;
  TBitArray<TFixedAllocator<12>_> local_80;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_168 = this;
  CheckCanChangeStructure(this);
  if ((-1 < param_1) && (param_1 < *(int *)&(this->EntityAllocations).field_0x28)) {
    puVar2 = *(undefined1 **)&(this->EntityAllocations).field_0x20;
    puVar14 = &(this->EntityAllocations).field_0x10;
    if (puVar2 != (undefined1 *)0x0) {
      puVar14 = puVar2;
    }
    if ((*(uint *)(puVar14 + (ulonglong)((uint)param_1 >> 5) * 4) >> (param_1 & 0x1fU) & 1) != 0)
    goto LAB_146143379;
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("EntityAllocations.IsValidIndex(AllocationIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                     ,0x7c6,L"");
  if (bVar6) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FEntityAllocation *)(*pcVar4)();
    return pFVar9;
  }
LAB_146143379:
  pFVar9 = *(FEntityAllocation **)(*(longlong *)&this->EntityAllocations + (longlong)param_1 * 8);
  pFVar16 = (FEntityAllocation *)0x0;
  local_80.NumBits = 0;
  local_80.MaxBits = 0;
  local_170 = pFVar9;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&local_80,
             (TBitArray<TFixedAllocator<12>_> *)
             ((longlong)param_1 * 0x38 + *(longlong *)&this->EntityAllocationMasks));
  local_160.NumBits = 0;
  local_160.MaxBits = 0x180;
  Core::Private::
  BitwiseBinaryOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::BitwiseXOR<TFixedAllocator<12>,TFixedAllocator<12>_>_::__l2::<lambda_1>_>
            (&local_80,&param_2->Bits,&local_160,MaxSize,&local_178);
  local_b8.NumBits = local_160.NumBits;
  local_b8.AllocatorInstance.InlineData[0].Pad[0] = local_160.AllocatorInstance.InlineData[0].Pad[0]
  ;
  local_b8.AllocatorInstance.InlineData[0].Pad[1] = local_160.AllocatorInstance.InlineData[0].Pad[1]
  ;
  local_b8.AllocatorInstance.InlineData[0].Pad[2] = local_160.AllocatorInstance.InlineData[0].Pad[2]
  ;
  local_b8.AllocatorInstance.InlineData[0].Pad[3] = local_160.AllocatorInstance.InlineData[0].Pad[3]
  ;
  local_b8.AllocatorInstance.InlineData[1].Pad[0] = local_160.AllocatorInstance.InlineData[1].Pad[0]
  ;
  local_b8.AllocatorInstance.InlineData[1].Pad[1] = local_160.AllocatorInstance.InlineData[1].Pad[1]
  ;
  local_b8.AllocatorInstance.InlineData[1].Pad[2] = local_160.AllocatorInstance.InlineData[1].Pad[2]
  ;
  local_b8.AllocatorInstance.InlineData[1].Pad[3] = local_160.AllocatorInstance.InlineData[1].Pad[3]
  ;
  local_b8.AllocatorInstance.InlineData[2].Pad[0] = local_160.AllocatorInstance.InlineData[2].Pad[0]
  ;
  local_b8.AllocatorInstance.InlineData[2].Pad[1] = local_160.AllocatorInstance.InlineData[2].Pad[1]
  ;
  local_b8.AllocatorInstance.InlineData[2].Pad[2] = local_160.AllocatorInstance.InlineData[2].Pad[2]
  ;
  local_b8.AllocatorInstance.InlineData[2].Pad[3] = local_160.AllocatorInstance.InlineData[2].Pad[3]
  ;
  local_b8.AllocatorInstance.InlineData[3].Pad[0] = local_160.AllocatorInstance.InlineData[3].Pad[0]
  ;
  local_b8.AllocatorInstance.InlineData[3].Pad[1] = local_160.AllocatorInstance.InlineData[3].Pad[1]
  ;
  local_b8.AllocatorInstance.InlineData[3].Pad[2] = local_160.AllocatorInstance.InlineData[3].Pad[2]
  ;
  local_b8.AllocatorInstance.InlineData[3].Pad[3] = local_160.AllocatorInstance.InlineData[3].Pad[3]
  ;
  local_b8.MaxBits = local_160.MaxBits;
  local_160.NumBits = 0;
  local_160.MaxBits = 0;
  local_b8.AllocatorInstance.InlineData[4].Pad[0] = local_160.AllocatorInstance.InlineData[4].Pad[0]
  ;
  local_b8.AllocatorInstance.InlineData[4].Pad[1] = local_160.AllocatorInstance.InlineData[4].Pad[1]
  ;
  local_b8.AllocatorInstance.InlineData[4].Pad[2] = local_160.AllocatorInstance.InlineData[4].Pad[2]
  ;
  local_b8.AllocatorInstance.InlineData[4].Pad[3] = local_160.AllocatorInstance.InlineData[4].Pad[3]
  ;
  local_b8.AllocatorInstance.InlineData[5].Pad[0] = local_160.AllocatorInstance.InlineData[5].Pad[0]
  ;
  local_b8.AllocatorInstance.InlineData[5].Pad[1] = local_160.AllocatorInstance.InlineData[5].Pad[1]
  ;
  local_b8.AllocatorInstance.InlineData[5].Pad[2] = local_160.AllocatorInstance.InlineData[5].Pad[2]
  ;
  local_b8.AllocatorInstance.InlineData[5].Pad[3] = local_160.AllocatorInstance.InlineData[5].Pad[3]
  ;
  local_b8.AllocatorInstance.InlineData[6].Pad[0] = local_160.AllocatorInstance.InlineData[6].Pad[0]
  ;
  local_b8.AllocatorInstance.InlineData[6].Pad[1] = local_160.AllocatorInstance.InlineData[6].Pad[1]
  ;
  local_b8.AllocatorInstance.InlineData[6].Pad[2] = local_160.AllocatorInstance.InlineData[6].Pad[2]
  ;
  local_b8.AllocatorInstance.InlineData[6].Pad[3] = local_160.AllocatorInstance.InlineData[6].Pad[3]
  ;
  local_b8.AllocatorInstance.InlineData[7].Pad[0] = local_160.AllocatorInstance.InlineData[7].Pad[0]
  ;
  local_b8.AllocatorInstance.InlineData[7].Pad[1] = local_160.AllocatorInstance.InlineData[7].Pad[1]
  ;
  local_b8.AllocatorInstance.InlineData[7].Pad[2] = local_160.AllocatorInstance.InlineData[7].Pad[2]
  ;
  local_b8.AllocatorInstance.InlineData[7].Pad[3] = local_160.AllocatorInstance.InlineData[7].Pad[3]
  ;
  local_b8.AllocatorInstance.InlineData[8].Pad[0] = local_160.AllocatorInstance.InlineData[8].Pad[0]
  ;
  local_b8.AllocatorInstance.InlineData[8].Pad[1] = local_160.AllocatorInstance.InlineData[8].Pad[1]
  ;
  local_b8.AllocatorInstance.InlineData[8].Pad[2] = local_160.AllocatorInstance.InlineData[8].Pad[2]
  ;
  local_b8.AllocatorInstance.InlineData[8].Pad[3] = local_160.AllocatorInstance.InlineData[8].Pad[3]
  ;
  local_b8.AllocatorInstance.InlineData[9].Pad[0] = local_160.AllocatorInstance.InlineData[9].Pad[0]
  ;
  local_b8.AllocatorInstance.InlineData[9].Pad[1] = local_160.AllocatorInstance.InlineData[9].Pad[1]
  ;
  local_b8.AllocatorInstance.InlineData[9].Pad[2] = local_160.AllocatorInstance.InlineData[9].Pad[2]
  ;
  local_b8.AllocatorInstance.InlineData[9].Pad[3] = local_160.AllocatorInstance.InlineData[9].Pad[3]
  ;
  local_b8.AllocatorInstance.InlineData[10].Pad[0] =
       local_160.AllocatorInstance.InlineData[10].Pad[0];
  local_b8.AllocatorInstance.InlineData[10].Pad[1] =
       local_160.AllocatorInstance.InlineData[10].Pad[1];
  local_b8.AllocatorInstance.InlineData[10].Pad[2] =
       local_160.AllocatorInstance.InlineData[10].Pad[2];
  local_b8.AllocatorInstance.InlineData[10].Pad[3] =
       local_160.AllocatorInstance.InlineData[10].Pad[3];
  local_b8.AllocatorInstance.InlineData[0xb].Pad[0] =
       local_160.AllocatorInstance.InlineData[0xb].Pad[0];
  local_b8.AllocatorInstance.InlineData[0xb].Pad[1] =
       local_160.AllocatorInstance.InlineData[0xb].Pad[1];
  local_b8.AllocatorInstance.InlineData[0xb].Pad[2] =
       local_160.AllocatorInstance.InlineData[0xb].Pad[2];
  local_b8.AllocatorInstance.InlineData[0xb].Pad[3] =
       local_160.AllocatorInstance.InlineData[0xb].Pad[3];
  local_128.NumBits = 0;
  local_128.MaxBits = 0x180;
  Core::Private::
  BitwiseBinaryOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::BitwiseAND<TFixedAllocator<12>,TFixedAllocator<12>_>_::__l2::<lambda_1>_>
            (&(this->ComponentRegistry->NonTagComponentMask).Bits,&local_b8,&local_128,MaxSize,
             local_177);
  iVar5 = local_128.NumBits;
  uVar17 = local_128.NumBits + 0x1f;
  local_c0 = local_128.NumBits;
  local_f0[0].Pad[0] = local_128.AllocatorInstance.InlineData[0].Pad[0];
  local_f0[0].Pad[1] = local_128.AllocatorInstance.InlineData[0].Pad[1];
  local_f0[0].Pad[2] = local_128.AllocatorInstance.InlineData[0].Pad[2];
  local_f0[0].Pad[3] = local_128.AllocatorInstance.InlineData[0].Pad[3];
  local_f0[1].Pad[0] = local_128.AllocatorInstance.InlineData[1].Pad[0];
  local_f0[1].Pad[1] = local_128.AllocatorInstance.InlineData[1].Pad[1];
  local_f0[1].Pad[2] = local_128.AllocatorInstance.InlineData[1].Pad[2];
  local_f0[1].Pad[3] = local_128.AllocatorInstance.InlineData[1].Pad[3];
  local_f0[2].Pad[0] = local_128.AllocatorInstance.InlineData[2].Pad[0];
  local_f0[2].Pad[1] = local_128.AllocatorInstance.InlineData[2].Pad[1];
  local_f0[2].Pad[2] = local_128.AllocatorInstance.InlineData[2].Pad[2];
  local_f0[2].Pad[3] = local_128.AllocatorInstance.InlineData[2].Pad[3];
  local_f0[3].Pad[0] = local_128.AllocatorInstance.InlineData[3].Pad[0];
  local_f0[3].Pad[1] = local_128.AllocatorInstance.InlineData[3].Pad[1];
  local_f0[3].Pad[2] = local_128.AllocatorInstance.InlineData[3].Pad[2];
  local_f0[3].Pad[3] = local_128.AllocatorInstance.InlineData[3].Pad[3];
  local_bc = local_128.MaxBits;
  local_128.NumBits = 0;
  local_128.MaxBits = 0;
  local_e0[0].Pad[0] = local_128.AllocatorInstance.InlineData[4].Pad[0];
  local_e0[0].Pad[1] = local_128.AllocatorInstance.InlineData[4].Pad[1];
  local_e0[0].Pad[2] = local_128.AllocatorInstance.InlineData[4].Pad[2];
  local_e0[0].Pad[3] = local_128.AllocatorInstance.InlineData[4].Pad[3];
  local_e0[1].Pad[0] = local_128.AllocatorInstance.InlineData[5].Pad[0];
  local_e0[1].Pad[1] = local_128.AllocatorInstance.InlineData[5].Pad[1];
  local_e0[1].Pad[2] = local_128.AllocatorInstance.InlineData[5].Pad[2];
  local_e0[1].Pad[3] = local_128.AllocatorInstance.InlineData[5].Pad[3];
  aTStack_d8[0].Pad[0] = local_128.AllocatorInstance.InlineData[6].Pad[0];
  aTStack_d8[0].Pad[1] = local_128.AllocatorInstance.InlineData[6].Pad[1];
  aTStack_d8[0].Pad[2] = local_128.AllocatorInstance.InlineData[6].Pad[2];
  aTStack_d8[0].Pad[3] = local_128.AllocatorInstance.InlineData[6].Pad[3];
  aTStack_d8[1].Pad[0] = local_128.AllocatorInstance.InlineData[7].Pad[0];
  aTStack_d8[1].Pad[1] = local_128.AllocatorInstance.InlineData[7].Pad[1];
  aTStack_d8[1].Pad[2] = local_128.AllocatorInstance.InlineData[7].Pad[2];
  aTStack_d8[1].Pad[3] = local_128.AllocatorInstance.InlineData[7].Pad[3];
  local_d0[0].Pad[0] = local_128.AllocatorInstance.InlineData[8].Pad[0];
  local_d0[0].Pad[1] = local_128.AllocatorInstance.InlineData[8].Pad[1];
  local_d0[0].Pad[2] = local_128.AllocatorInstance.InlineData[8].Pad[2];
  local_d0[0].Pad[3] = local_128.AllocatorInstance.InlineData[8].Pad[3];
  local_d0[1].Pad[0] = local_128.AllocatorInstance.InlineData[9].Pad[0];
  local_d0[1].Pad[1] = local_128.AllocatorInstance.InlineData[9].Pad[1];
  local_d0[1].Pad[2] = local_128.AllocatorInstance.InlineData[9].Pad[2];
  local_d0[1].Pad[3] = local_128.AllocatorInstance.InlineData[9].Pad[3];
  aTStack_c8[0].Pad[0] = local_128.AllocatorInstance.InlineData[10].Pad[0];
  aTStack_c8[0].Pad[1] = local_128.AllocatorInstance.InlineData[10].Pad[1];
  aTStack_c8[0].Pad[2] = local_128.AllocatorInstance.InlineData[10].Pad[2];
  aTStack_c8[0].Pad[3] = local_128.AllocatorInstance.InlineData[10].Pad[3];
  aTStack_c8[1].Pad[0] = local_128.AllocatorInstance.InlineData[0xb].Pad[0];
  aTStack_c8[1].Pad[1] = local_128.AllocatorInstance.InlineData[0xb].Pad[1];
  aTStack_c8[1].Pad[2] = local_128.AllocatorInstance.InlineData[0xb].Pad[2];
  aTStack_c8[1].Pad[3] = local_128.AllocatorInstance.InlineData[0xb].Pad[3];
  if (uVar17 >> 5 == 0) {
LAB_146143483:
    bVar6 = true;
LAB_14614348d:
    pFVar11 = pFVar9;
LAB_146143490:
    pFVar11 = CreateEntityAllocation(this,param_2,pFVar9->Capacity,pFVar9->MaxCapacity,pFVar11);
    if ((pFVar11 == (FEntityAllocation *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Dest != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                           ,0x7db,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FEntityAllocation *)(*pcVar4)();
      return pFVar9;
    }
    pFVar11->Size = pFVar9->Size;
    memcpy(pFVar11->EntityIDs,pFVar9->EntityIDs,(ulonglong)pFVar9->Size * 2);
    if (!bVar6) {
      this_00 = pFVar9->ComponentHeaders;
      pFVar15 = this_00 + ((ulonglong)pFVar9->NumComponents - 1);
      pFVar9 = pFVar16;
      if (pFVar11->NumComponents != 0) {
        do {
          this_01 = (FComponentHeader *)
                    ((longlong)&pFVar16->SerialNumber +
                    (longlong)&pFVar11->ComponentHeaders->_padding_);
          if (this_00 != pFVar15) {
            do {
              if ((this_01->ComponentType).Value <= (this_00->ComponentType).Value) break;
              this_00 = this_00 + 1;
            } while (this_00 != pFVar15);
          }
          FVar1.Value = (this_00->ComponentType).Value;
          if (((this_01->ComponentType).Value == FVar1.Value) && (this_00->Sizeof != '\0')) {
            pFVar12 = FComponentRegistry::GetComponentTypeChecked(this->ComponentRegistry,FVar1);
            _Dst = FComponentHeader::GetValuePtr(this_01,0);
            _Src = FComponentHeader::GetValuePtr(this_00,0);
            if (pFVar12->bIsTriviallyDestructable == '\x01' &&
                pFVar12->bIsTriviallyCopyAssignable == '\x01') {
              memmove(_Dst,_Src,(ulonglong)((uint)pFVar12->Sizeof * (uint)local_170->Size));
            }
            else {
              pIVar3 = (pFVar12->ComplexComponentOps).Ptr;
              (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,_Dst,_Src);
            }
            this_00->Components = (uchar *)0x0;
            this = local_168;
          }
          uVar17 = (int)pFVar9 + 1;
          pFVar16 = (FEntityAllocation *)&pFVar16[1].UniqueID;
          pFVar9 = (FEntityAllocation *)(ulonglong)uVar17;
        } while ((int)uVar17 < (int)(uint)pFVar11->NumComponents);
      }
    }
    this->StructureMutationSystemSerialNumber = this->SystemSerialNumber;
    this->bAccumulatedMaskStale = true;
    return pFVar11;
  }
  pTVar10 = local_f0;
  pFVar11 = pFVar16;
LAB_146143470:
  if (*(int *)pTVar10->Pad == 0) goto code_r0x000146143479;
  local_174 = 0;
  bVar6 = *(int *)local_f0[(longlong)pFVar11].Pad != 0;
  if (bVar6) {
    for (; (*(uint *)local_f0[(longlong)pFVar11].Pad >> local_174 & 1) == 0;
        local_174 = local_174 + 1) {
    }
  }
  iVar8 = 0x20;
  if (bVar6) {
    iVar8 = local_174;
  }
  iVar8 = iVar8 + (int)pFVar11 * 0x20;
  if (iVar5 <= iVar8) goto LAB_146143483;
  bVar6 = iVar8 == -1;
  pFVar11 = pFVar16;
  if (!bVar6) goto LAB_146143490;
  goto LAB_14614348d;
code_r0x000146143479:
  uVar13 = (int)pFVar11 + 1;
  pFVar11 = (FEntityAllocation *)(ulonglong)uVar13;
  pTVar10 = pTVar10 + 1;
  if ((int)(uVar17 >> 5) <= (int)uVar13) goto LAB_146143483;
  goto LAB_146143470;
}

// MigrateEntity @ 146143680

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UE::MovieScene::FEntityManager::MigrateEntity
          (FEntityManager *this,int param_1,int param_2,int param_3)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  uint *puVar2;
  ushort uVar3;
  FEntityAllocation *pFVar4;
  ulonglong uVar5;
  IComplexComponentOps *pIVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FEntityAllocation *pFVar10;
  FMovieSceneEntityID *pFVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  FComponentTypeInfo *pFVar14;
  void *pvVar15;
  void *_Src;
  int iVar16;
  uchar *puVar17;
  uint uVar18;
  uint uVar19;
  FComponentHeader *this_00;
  ulonglong uVar20;
  FComponentHeader *pFVar21;
  ForElementType<unsigned_int> FVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  uint local_a8;
  ulonglong local_98;
  longlong local_70;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> local_68;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> local_58;
  
  if ((param_1 == param_2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("DestAllocationIndex != SourceAllocationIndex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                         ,0x856,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    iVar9 = (*pcVar7)();
    return iVar9;
  }
  CheckCanChangeStructure(this);
  pFVar4 = *(FEntityAllocation **)(*(longlong *)&this->EntityAllocations + (longlong)param_2 * 8);
  pFVar10 = *(FEntityAllocation **)(*(longlong *)&this->EntityAllocations + (longlong)param_1 * 8);
  if (((int)(uint)pFVar4->Size <= param_3) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourceEntityIndex < Src->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                         ,0x85d,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    iVar9 = (*pcVar7)();
    return iVar9;
  }
  if (pFVar10->Capacity == pFVar10->Size) {
    pFVar10 = GrowAllocation(this,param_1,1);
  }
  local_68.DataPtr = pFVar4->EntityIDs;
  local_68.ArrayNum = (int)pFVar4->Size;
  pFVar11 = TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int>::operator[]
                      (&local_68,param_3);
  iVar9 = AddEntityToAllocation(this,param_1,(FMovieSceneEntityID)pFVar11->Value,DefaultConstructed)
  ;
  uVar3 = pFVar4->Size;
  uVar18 = uVar3 - 1;
  if ((((int)(uint)uVar3 <= param_3) || ((int)(uint)pFVar10->Size <= iVar9)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SrcOffset < Src->Num() && DstOffset < Dst->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                         ,0x86f,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    iVar9 = (*pcVar7)();
    return iVar9;
  }
  uVar5 = this->SystemSerialNumber;
  uVar12 = uVar5;
  if (uVar5 < pFVar4->SerialNumber) {
    uVar12 = pFVar4->SerialNumber;
  }
  pFVar4->SerialNumber = uVar12;
  uVar12 = uVar5;
  if (uVar5 < pFVar10->SerialNumber) {
    uVar12 = pFVar10->SerialNumber;
  }
  uVar13 = 0;
  pFVar10->SerialNumber = uVar12;
  uVar12 = (ulonglong)pFVar4->NumComponents;
  local_98 = 0;
  iVar16 = 0;
  local_a8 = 0;
  if (pFVar10->NumComponents != 0) {
    local_70 = 0;
    uVar20 = uVar13;
    uVar25 = uVar13;
    do {
      pFVar21 = pFVar10->ComponentHeaders;
      uVar19 = (uint)uVar20;
      if ((&pFVar21->Sizeof)[local_70] != '\0') {
        if ((longlong)uVar25 < (longlong)uVar12) {
          lVar23 = uVar25 * 0x38;
          do {
            this_00 = (FComponentHeader *)((longlong)&pFVar4->ComponentHeaders->_padding_ + lVar23);
            if (*(ushort *)((longlong)&(pFVar21->ComponentType).Value + local_70) <=
                (this_00->ComponentType).Value) break;
            uVar13 = uVar5;
            if (uVar5 < this_00->SerialNumber) {
              uVar13 = this_00->SerialNumber;
            }
            this_00->SerialNumber = uVar13;
            if (this_00->Sizeof != '\0') {
              pFVar14 = FComponentRegistry::GetComponentTypeChecked
                                  (this->ComponentRegistry,
                                   (FComponentTypeID)(this_00->ComponentType).Value);
              if (((this_00->Sizeof == '\0') || (this_00->Components == (uchar *)0x0)) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("!IsTag() && Components != nullptr",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                                     ,0x221,L""), bVar8)) {
                pcVar7 = (code *)swi(3);
                iVar9 = (*pcVar7)();
                return iVar9;
              }
              puVar17 = this_00->Components + (int)((uint)this_00->Sizeof * param_3);
              if (pFVar14->bIsTriviallyDestructable == '\0') {
                pIVar6 = (pFVar14->ComplexComponentOps).Ptr;
                (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6,puVar17,1);
              }
              if (param_3 != uVar18) {
                pvVar15 = FComponentHeader::GetValuePtr(this_00,uVar18);
                if (pFVar14->bIsTriviallyDestructable == '\x01' &&
                    pFVar14->bIsTriviallyCopyAssignable == '\x01') {
                  memmove(puVar17,pvVar15,(ulonglong)pFVar14->Sizeof);
                }
                else {
                  pIVar6 = (pFVar14->ComplexComponentOps).Ptr;
                  (**(code **)((longlong)*pIVar6 + 0x20))(pIVar6,puVar17,pvVar15,1);
                }
              }
            }
            uVar25 = uVar25 + 1;
            local_98 = (ulonglong)((int)local_98 + 1);
            lVar23 = lVar23 + 0x38;
          } while ((longlong)uVar25 < (longlong)uVar12);
        }
        pFVar14 = FComponentRegistry::GetComponentTypeChecked
                            (this->ComponentRegistry,
                             (FComponentTypeID)
                             *(ushort *)((longlong)&(pFVar21->ComponentType).Value + local_70));
        if ((((&pFVar21->Sizeof)[local_70] == '\0') ||
            (*(longlong *)((longlong)&pFVar21->Components + local_70) == 0)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("!IsTag() && Components != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                               ,0x221,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          iVar9 = (*pcVar7)();
          return iVar9;
        }
        pvVar15 = (void *)((longlong)(int)((uint)(&pFVar21->Sizeof)[local_70] * iVar9) +
                          *(longlong *)((longlong)&pFVar21->Components + local_70));
        uVar19 = local_a8;
        if (((longlong)uVar25 < (longlong)uVar12) &&
           (pFVar4->ComponentHeaders[uVar25].ComponentType.Value ==
            *(ushort *)((longlong)&(pFVar21->ComponentType).Value + local_70))) {
          _Src = FComponentHeader::GetValuePtr(pFVar4->ComponentHeaders + (int)local_98,param_3);
          if (pFVar14->bIsTriviallyDestructable == '\x01' &&
              pFVar14->bIsTriviallyCopyAssignable == '\x01') {
            memmove(pvVar15,_Src,(ulonglong)pFVar14->Sizeof);
          }
          else {
            pIVar6 = (pFVar14->ComplexComponentOps).Ptr;
            (**(code **)((longlong)*pIVar6 + 0x20))(pIVar6,pvVar15,_Src,1);
          }
          if (uVar18 != param_3) {
            pvVar15 = FComponentHeader::GetValuePtr(pFVar4->ComponentHeaders + (int)local_98,uVar18)
            ;
            if (pFVar14->bIsTriviallyDestructable == '\x01' &&
                pFVar14->bIsTriviallyCopyAssignable == '\x01') {
              memmove(_Src,pvVar15,(ulonglong)pFVar14->Sizeof);
            }
            else {
              pIVar6 = (pFVar14->ComplexComponentOps).Ptr;
              (**(code **)((longlong)*pIVar6 + 0x20))(pIVar6,_Src,pvVar15,1);
            }
          }
          local_98 = (ulonglong)((int)local_98 + 1);
          uVar25 = uVar25 + 1;
          uVar13 = local_98;
        }
        else {
          uVar13 = local_98;
          if (pFVar14->bIsZeroConstructType == 0) {
            pIVar6 = (pFVar14->ComplexComponentOps).Ptr;
            (**(code **)((longlong)*pIVar6 + 8))(pIVar6,pvVar15,1);
          }
          else {
            memset(pvVar15,0,(ulonglong)pFVar14->Sizeof);
          }
        }
      }
      iVar16 = (int)uVar13;
      local_a8 = uVar19 + 1;
      uVar20 = (ulonglong)local_a8;
      local_70 = local_70 + 0x38;
    } while ((int)local_a8 < (int)(uint)pFVar10->NumComponents);
  }
  lVar23 = (longlong)iVar16;
  if (lVar23 < (longlong)uVar12) {
    lVar24 = lVar23 * 0x38;
    do {
      pFVar21 = (FComponentHeader *)((longlong)&pFVar4->ComponentHeaders->_padding_ + lVar24);
      uVar13 = uVar5;
      if (uVar5 < pFVar21->SerialNumber) {
        uVar13 = pFVar21->SerialNumber;
      }
      pFVar21->SerialNumber = uVar13;
      if (pFVar21->Sizeof != '\0') {
        pFVar14 = FComponentRegistry::GetComponentTypeChecked
                            (this->ComponentRegistry,
                             (FComponentTypeID)(pFVar21->ComponentType).Value);
        if (((pFVar21->Sizeof == '\0') || (pFVar21->Components == (uchar *)0x0)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("!IsTag() && Components != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                               ,0x221,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          iVar9 = (*pcVar7)();
          return iVar9;
        }
        puVar17 = pFVar21->Components + (int)((uint)pFVar21->Sizeof * param_3);
        if (pFVar14->bIsTriviallyDestructable == '\0') {
          pIVar6 = (pFVar14->ComplexComponentOps).Ptr;
          (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6,puVar17,1);
        }
        if (param_3 != uVar18) {
          pvVar15 = FComponentHeader::GetValuePtr(pFVar21,uVar18);
          if (pFVar14->bIsTriviallyDestructable == '\x01' &&
              pFVar14->bIsTriviallyCopyAssignable == '\x01') {
            memmove(puVar17,pvVar15,(ulonglong)pFVar14->Sizeof);
          }
          else {
            pIVar6 = (pFVar14->ComplexComponentOps).Ptr;
            (**(code **)((longlong)*pIVar6 + 0x20))(pIVar6,puVar17,pvVar15,1);
          }
        }
      }
      lVar23 = lVar23 + 1;
      lVar24 = lVar24 + 0x38;
    } while (lVar23 < (longlong)uVar12);
  }
  if (uVar18 != param_3) {
    FEntityInitializer::MoveEntryIndex(pFVar4,uVar18,param_3);
    local_58.DataPtr = pFVar4->EntityIDs;
    local_58.ArrayNum = (int)pFVar4->Size;
    pFVar11 = TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int>::operator[]
                        (&local_58,param_3);
    FEntityLocation::Set
              ((FEntityLocation *)
               (*(longlong *)&this->EntityLocations + (ulonglong)pFVar11->Value * 8),param_2,param_3
              );
  }
  if (((uVar18 & 0xffff0000) != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidUint16(EntityIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                         ,0x8e,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    iVar9 = (*pcVar7)();
    return iVar9;
  }
  pTVar1 = &this->AllocationsWithCapacity;
  pFVar4->EntityIDs[(longlong)(int)(uint)uVar3 + -1].Value = 0xffff;
  pFVar4->Size = pFVar4->Size - 1;
  if (pFVar10->Size == pFVar10->MaxCapacity) {
    if (((param_1 < 0) || ((this->AllocationsWithCapacity).NumBits <= param_1)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      iVar9 = (*pcVar7)();
      return iVar9;
    }
    FVar22 = (this->AllocationsWithCapacity).AllocatorInstance.SecondaryData;
    if (FVar22 == (ForElementType<unsigned_int>)0x0) {
      FVar22 = (ForElementType<unsigned_int>)pTVar1;
    }
    puVar2 = (uint *)((longlong)FVar22 +
                     (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar2 = *puVar2 & ~(1 << ((byte)param_1 & 0x1f));
  }
  if (pFVar4->Size == 0) {
    DestroyAllocation(this,pFVar4,true);
    TSparseArray<UE::MovieScene::FComponentMask,FDefaultSparseArrayAllocator>::RemoveAt
              (&this->EntityAllocationMasks,param_2,1);
    TSparseArrayBase<8,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
              ((TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *)&this->EntityAllocations,
               param_2,1);
    if (((param_2 < 0) || ((this->AllocationsWithCapacity).NumBits <= param_2)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      iVar9 = (*pcVar7)();
      return iVar9;
    }
    FVar22 = (this->AllocationsWithCapacity).AllocatorInstance.SecondaryData;
    if (FVar22 == (ForElementType<unsigned_int>)0x0) {
      FVar22 = (ForElementType<unsigned_int>)pTVar1;
    }
    puVar2 = (uint *)((longlong)FVar22 +
                     (longlong)((int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar2 = *puVar2 & ~(1 << ((byte)param_2 & 0x1f));
  }
  else if ((uint)pFVar4->Size == pFVar4->MaxCapacity - 1) {
    if (((param_2 < 0) || ((this->AllocationsWithCapacity).NumBits <= param_2)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5be,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      iVar9 = (*pcVar7)();
      return iVar9;
    }
    FVar22 = (this->AllocationsWithCapacity).AllocatorInstance.SecondaryData;
    if (FVar22 == (ForElementType<unsigned_int>)0x0) {
      FVar22 = (ForElementType<unsigned_int>)pTVar1;
    }
    puVar2 = (uint *)((longlong)FVar22 +
                     (longlong)((int)(param_2 + (param_2 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar2 = *puVar2 | 1 << ((byte)param_2 & 0x1f);
  }
  this->StructureMutationSystemSerialNumber = this->SystemSerialNumber;
  this->bAccumulatedMaskStale = true;
  return iVar9;
}

// MutateAll @ 146144540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UE::MovieScene::FEntityManager::MutateAll
          (FEntityManager *this,FEntityComponentFilter *param_1,IMovieSceneEntityMutation *param_2,
          EMutuallyInclusiveComponentType param_3)

{
  ulonglong uVar1;
  TTypeCompatibleBytes<unsigned_int> TVar2;
  IComplexComponentOps *pIVar3;
  code *pcVar4;
  FEntityManager *pFVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  FEntityAllocation *pFVar9;
  FComponentTypeInfo *pFVar10;
  void *pvVar11;
  undefined1 *puVar12;
  TBitArray<TFixedAllocator<12>_> *this_00;
  FComponentHeader *pFVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  FComponentHeader *pFVar17;
  undefined1 *puVar18;
  FComponentTypeID FVar19;
  FComponentHeader *pFVar20;
  uint uVar21;
  FComponentHeader *pFVar22;
  FComponentHeader *pFVar23;
  undefined1 auStack_168 [32];
  EMutuallyInclusiveComponentType local_148;
  int local_144;
  uint local_140;
  uint local_13c;
  longlong local_138;
  ulonglong local_130;
  FEntityAllocation *local_128;
  FEntityManager *local_120;
  int local_118;
  int local_114;
  FEntityComponentFilter *local_110;
  void *local_108;
  FEntityAllocationWriteContext local_100;
  IMovieSceneEntityMutation *local_f8;
  FEntityRange local_f0;
  TBitArray<TFixedAllocator<12>_> local_e0;
  FMutualComponentInitializers local_a8;
  TBitArray<TFixedAllocator<12>_> local_88;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_168;
  local_148 = param_3;
  local_120 = this;
  local_110 = param_1;
  local_f8 = param_2;
  CheckCanChangeStructure(this);
  local_100.SystemSerial = this->SystemSerialNumber;
  pFVar23 = (FComponentHeader *)0x0;
  local_a8.Initializers.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0;
  local_144 = 0;
  local_a8.Initializers.ArrayNum = 0;
  local_a8.Initializers.ArrayMax = 2;
  local_140 = 0;
  if (0 < *(int *)&(this->EntityAllocationMasks).field_0x8) {
    puVar18 = &(this->EntityAllocationMasks).field_0x10;
    local_13c = 1;
    local_138 = 0;
    pFVar17 = pFVar23;
    do {
      lVar16 = local_138;
      uVar21 = local_13c;
      uVar14 = (uint)pFVar17;
      if ((((int)uVar14 < 0) || (*(int *)(puVar18 + 0x18) <= (int)uVar14)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      puVar12 = puVar18;
      if (*(undefined1 **)(puVar18 + 0x10) != (undefined1 *)0x0) {
        puVar12 = *(undefined1 **)(puVar18 + 0x10);
      }
      uVar8 = uVar14;
      if ((int)uVar14 < 0) {
        uVar8 = uVar14 + 0x1f;
      }
      if ((*(uint *)(puVar12 + (longlong)((int)uVar8 >> 5) * 4) & uVar21) != 0) {
        lVar15 = (longlong)(int)uVar14 * 0x38;
        bVar6 = FEntityComponentFilter::Match
                          (local_110,
                           (FComponentMask *)(*(longlong *)&this->EntityAllocationMasks + lVar15));
        if (bVar6) {
          local_e0.NumBits = 0;
          local_e0.MaxBits = 0;
          TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
                    (&local_e0,
                     (TBitArray<TFixedAllocator<12>_> *)
                     (*(longlong *)&this->EntityAllocationMasks + lVar15));
          (**(code **)((longlong)*param_2 + 8))(param_2,this,&local_e0);
          FMutualComponentInitializers::Reset(&local_a8);
          FEntityFactories::ComputeMutuallyInclusiveComponents
                    (&this->ComponentRegistry->Factories,local_148,(FComponentMask *)&local_e0,
                     &local_a8);
          pvVar11 = *(void **)(*(longlong *)&this->EntityAllocations + lVar16);
          local_108 = pvVar11;
          bVar6 = TBitArray<TFixedAllocator<12>_>::CompareSetBits<TFixedAllocator<12>_>
                            (&local_e0,
                             (TBitArray<TFixedAllocator<12>_> *)
                             (*(longlong *)&this->EntityAllocationMasks + lVar15),false);
          if (bVar6) {
            (**(code **)((longlong)*param_2 + 0x18))(param_2,pvVar11);
          }
          else {
            pFVar9 = MigrateAllocation(this,uVar14,(FComponentMask *)&local_e0);
            local_88.NumBits = 0;
            local_88.MaxBits = 0;
            local_144 = local_144 + (uint)pFVar9->Size;
            local_128 = pFVar9;
            TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
                      (&local_88,
                       (TBitArray<TFixedAllocator<12>_> *)
                       (*(longlong *)&this->EntityAllocationMasks + lVar15));
            this_00 = (TBitArray<TFixedAllocator<12>_> *)
                      (*(longlong *)&this->EntityAllocationMasks + lVar15);
            if (this_00 != &local_e0) {
              TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(this_00,&local_e0);
            }
            pFVar5 = local_120;
            local_130 = CONCAT44(local_130._4_4_,1);
            *(FEntityAllocation **)(local_138 + *(longlong *)&this->EntityAllocations) = pFVar9;
            pFVar9->LockMode = LockFree;
            pFVar20 = pFVar23;
            pFVar17 = pFVar23;
            pFVar22 = pFVar23;
            if (local_e0.NumBits != 0) {
              TVar2.Pad = local_e0.AllocatorInstance.InlineData[0].Pad;
              while (TVar2.Pad == (uchar  [4])0x0) {
                iVar7 = (int)pFVar17;
                pFVar22 = (FComponentHeader *)(ulonglong)((int)pFVar22 + 0x20);
                uVar21 = iVar7 + 1;
                pFVar17 = (FComponentHeader *)(ulonglong)uVar21;
                if ((int)(local_e0.NumBits + -1 + (local_e0.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 <
                    (int)uVar21) {
                  pFVar20 = (FComponentHeader *)(local_e0._48_8_ & 0xffffffff);
                  goto LAB_1461447a3;
                }
                TVar2.Pad = *&local_e0.AllocatorInstance.InlineData[(longlong)iVar7 + 1].Pad;
              }
              local_130 = (ulonglong)(-(int)TVar2.Pad & (uint)TVar2.Pad);
              uVar1 = (ulonglong)(-(int)TVar2.Pad & (uint)TVar2.Pad) * 2 + 1;
              lVar16 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                }
              }
              local_118 = (int)lVar16;
              uVar21 = local_118 + -1 + (int)pFVar22;
              pFVar20 = (FComponentHeader *)(ulonglong)uVar21;
              if (local_e0.NumBits < (int)uVar21) {
                pFVar20 = (FComponentHeader *)(local_e0._48_8_ & 0xffffffff);
              }
            }
LAB_1461447a3:
            if ((int)pFVar20 < local_e0.NumBits) {
              uVar21 = 0xffffffff;
              do {
                if ((((ulonglong)pFVar20 & 0xffff0000) != 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(BitIndex & 0xFFFF0000) == 0",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityIDs.h"
                                       ,0xba,L""), bVar6)) {
                  pcVar4 = (code *)swi(3);
                  iVar7 = (*pcVar4)();
                  return iVar7;
                }
                FVar19.Value = (ushort)pFVar20;
                if (FVar19.Value == 0xffff) {
LAB_14614480e:
                  pFVar20 = local_128->ComponentHeaders;
                  pFVar13 = pFVar20 + local_128->NumComponents;
                  for (; pFVar20 != pFVar13; pFVar20 = pFVar20 + 1) {
                    if ((pFVar20->ComponentType).Value == FVar19.Value) goto LAB_14614485f;
                  }
                  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Header",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                                     ,0x2db,L"");
                  pFVar20 = pFVar23;
                  if (bVar6) {
                    pcVar4 = (code *)swi(3);
                    iVar7 = (*pcVar4)();
                    return iVar7;
                  }
LAB_14614485f:
                  if (pFVar20->Sizeof != '\0') {
                    pFVar10 = FComponentRegistry::GetComponentTypeChecked
                                        (pFVar5->ComponentRegistry,FVar19);
                    pvVar11 = FComponentHeader::GetValuePtr(pFVar20,0);
                    if (pFVar10->bIsZeroConstructType == 0) {
                      pIVar3 = (pFVar10->ComplexComponentOps).Ptr;
                      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,pvVar11);
                    }
                    else {
                      memset(pvVar11,0,(ulonglong)((uint)local_128->Size * (uint)pFVar10->Sizeof));
                    }
                  }
                }
                else if ((local_88.NumBits <= (int)((uint)pFVar20 & 0xffff)) ||
                        ((*(uint *)local_88.AllocatorInstance.InlineData
                                   [((ulonglong)pFVar20 & 0xffff) >> 5].Pad >>
                          ((uint)pFVar20 & 0x1f) & 1) == 0)) goto LAB_14614480e;
                uVar21 = uVar21 & ~(uint)local_130;
                uVar14 = uVar21 & *(uint *)local_e0.AllocatorInstance.InlineData[(int)pFVar17].Pad;
                while (uVar14 == 0) {
                  iVar7 = (int)pFVar17;
                  pFVar22 = (FComponentHeader *)(ulonglong)((int)pFVar22 + 0x20);
                  uVar14 = iVar7 + 1;
                  pFVar17 = (FComponentHeader *)(ulonglong)uVar14;
                  if ((int)(local_e0.NumBits + -1 + (local_e0.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 <
                      (int)uVar14) {
                    pFVar20 = (FComponentHeader *)(local_e0._48_8_ & 0xffffffff);
                    goto LAB_146144926;
                  }
                  uVar21 = 0xffffffff;
                  uVar14 = *(uint *)local_e0.AllocatorInstance.InlineData[(longlong)iVar7 + 1].Pad;
                }
                local_130 = CONCAT44(local_130._4_4_,-uVar14 & uVar14);
                uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
                lVar16 = 0x3f;
                if (uVar1 != 0) {
                  for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                  }
                }
                local_114 = (int)lVar16;
                uVar14 = local_114 + -1 + (int)pFVar22;
                pFVar20 = (FComponentHeader *)(ulonglong)uVar14;
                if (local_e0.NumBits < (int)uVar14) {
                  pFVar20 = (FComponentHeader *)(local_e0._48_8_ & 0xffffffff);
                }
LAB_146144926:
                pvVar11 = local_108;
                this = local_120;
              } while ((int)pFVar20 < local_e0.NumBits);
            }
            pFVar9 = local_128;
            local_f0.Allocation = local_128;
            local_f0.ComponentStartOffset = 0;
            local_f0.Num = (int)local_128->Size;
            FMutualComponentInitializers::Execute(&local_a8,&local_f0,&local_100);
            param_2 = local_f8;
            (**(code **)((longlong)*local_f8 + 0x10))(local_f8,pFVar9,&local_e0);
            CheckCanChangeStructure(this);
            if (*(short *)((longlong)pvVar11 + 0xe) != 0) {
              lVar16 = *(longlong *)((longlong)pvVar11 + 0x28);
              lVar15 = (ulonglong)*(ushort *)((longlong)pvVar11 + 0xc) * 0x38 + lVar16;
              for (; lVar16 != lVar15; lVar16 = lVar16 + 0x38) {
                if ((*(longlong *)(lVar16 + 0x18) != 0) &&
                   (pFVar10 = FComponentRegistry::GetComponentTypeChecked
                                        (this->ComponentRegistry,
                                         (FComponentTypeID)*(ushort *)(lVar16 + 0x36)),
                   pFVar10->bIsTriviallyDestructable == '\0')) {
                  pIVar3 = (pFVar10->ComplexComponentOps).Ptr;
                  (**(code **)((longlong)*pIVar3 + 0x10))
                            (pIVar3,*(undefined8 *)(lVar16 + 0x18),
                             *(undefined2 *)((longlong)pvVar11 + 0xe));
                }
              }
            }
            pFVar17 = pFVar23;
            pFVar22 = pFVar23;
            if (*(short *)((longlong)pvVar11 + 0xc) != 0) {
              do {
                (*(code *)**(undefined8 **)
                            ((longlong)&pFVar22->_padding_ + *(longlong *)((longlong)pvVar11 + 0x28)
                            ))((longlong)(int)pFVar17 * 0x38 +
                               *(longlong *)((longlong)pvVar11 + 0x28),0);
                uVar21 = (int)pFVar17 + 1;
                pFVar17 = (FComponentHeader *)(ulonglong)uVar21;
                pFVar22 = pFVar22 + 1;
              } while ((int)uVar21 < (int)(uint)*(ushort *)((longlong)pvVar11 + 0xc));
            }
            if (*(void **)((longlong)pvVar11 + 0x20) != (void *)0x0) {
              FMemory::Free(*(void **)((longlong)pvVar11 + 0x20));
            }
            FMemory::Free(pvVar11);
            pFVar9->LockMode = Mutex;
            uVar21 = local_13c;
            uVar14 = local_140;
          }
        }
        puVar18 = &(this->EntityAllocationMasks).field_0x10;
      }
      local_138 = local_138 + 8;
      local_140 = uVar14 + 1;
      pFVar17 = (FComponentHeader *)(ulonglong)local_140;
      local_13c = uVar21 << 1 | (uint)((int)uVar21 < 0);
    } while ((int)local_140 < *(int *)&(this->EntityAllocationMasks).field_0x8);
    if (local_144 != 0) {
      this->StructureMutationSystemSerialNumber = this->SystemSerialNumber;
      this->bAccumulatedMaskStale = true;
    }
  }
  iVar7 = local_144;
  if (local_a8.Initializers.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0) {
    FMemory::Free((void *)local_a8.Initializers.AllocatorInstance.SecondaryData);
  }
  return iVar7;
}

// MutateConditional @ 146144ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UE::MovieScene::FEntityManager::MutateConditional
          (FEntityManager *this,FEntityComponentFilter *param_1,
          IMovieSceneConditionalEntityMutation *param_2,EMutuallyInclusiveComponentType param_3)

{
  uint *puVar1;
  ushort *puVar2;
  undefined1 *puVar3;
  uchar *_Dst;
  IComplexComponentOps *pIVar4;
  code *pcVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  FEntityAllocation *pFVar15;
  FComponentTypeInfo *pFVar16;
  byte bVar17;
  undefined1 *puVar18;
  undefined8 *puVar19;
  longlong lVar20;
  ulonglong uVar21;
  FComponentHeader *pFVar22;
  TBitArray<TFixedAllocator<12>_> *this_00;
  int *piVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  ForElementType<unsigned_int> FVar29;
  FComponentHeader *pFVar30;
  FComponentTypeID FVar31;
  uint uVar32;
  FEntityAllocation *pFVar33;
  int iVar34;
  ushort uVar35;
  uint uVar36;
  ulonglong uVar37;
  int *piVar38;
  TBitArray<TFixedAllocator<12>_> *pTVar39;
  FMovieSceneEntityID *pFVar40;
  undefined1 auStack_318 [32];
  uint local_2f8;
  int local_2f0;
  undefined1 local_2e8 [4];
  uint local_2e4;
  FEntityAllocation *local_2e0;
  uint local_2d8;
  int local_2d4;
  FEntityManager *local_2d0;
  FEntityAllocation *local_2c8;
  int *local_2c0;
  TBitArray<TFixedAllocator<12>_> *local_2b8;
  int local_2b0;
  uint uStack_2ac;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_2a8;
  uint local_2a0;
  uint uStack_29c;
  uint uStack_298;
  undefined4 uStack_294;
  uint local_290;
  int *local_288;
  FEntityRange local_280;
  FEntityAllocationWriteContext local_270;
  IMovieSceneConditionalEntityMutation *local_268;
  TBitArray<FDefaultBitArrayAllocator> *local_260;
  longlong *local_258;
  undefined8 uStack_250;
  TBitArray<FDefaultBitArrayAllocator> *local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  int iStack_230;
  undefined4 uStack_22c;
  FEntityRange local_228;
  TPairInitializer<int_const_&,_public:_int___cdecl_UE::MovieScene::FEntityManager::MutateConditional(UE::MovieScene::FEntityComponentFilter_const_&,UE::MovieScene::IMovieSceneConditionalEntityMutation_const_&,UE::MovieScene::EMutuallyInclusiveComponentType)_::_2_::FConditionalMutationState_&&>
  local_218;
  int local_208;
  longlong *local_200;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1f8;
  undefined8 uStack_1d8;
  uint *local_1d0;
  TTypeCompatibleBytes<unsigned_int> *local_1c8;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 *local_190;
  undefined8 local_188;
  FMutualComponentInitializers local_180;
  longlong local_158;
  undefined8 local_150;
  TBitArray<FDefaultBitArrayAllocator> local_148;
  undefined4 local_128;
  int local_124;
  void *local_118;
  undefined4 local_110;
  TBitArray<TFixedAllocator<12>_> local_108;
  TTypeCompatibleBytes<unsigned_int> local_d0 [2];
  TTypeCompatibleBytes<unsigned_int> aTStack_c8 [2];
  TTypeCompatibleBytes<unsigned_int> local_c0 [2];
  TTypeCompatibleBytes<unsigned_int> aTStack_b8 [2];
  TTypeCompatibleBytes<unsigned_int> local_b0 [2];
  TTypeCompatibleBytes<unsigned_int> aTStack_a8 [2];
  int local_a0;
  int local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  uchar local_78 [8];
  uchar auStack_70 [8];
  ForElementType<UE::MovieScene::IMutualComponentInitializer_*> local_68;
  int local_60;
  int local_5c;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_318;
  local_2d0 = this;
  local_268 = param_2;
  CheckCanChangeStructure(this);
  iVar14 = 0;
  uVar32 = 0;
  local_148.MaxBits = 0x80;
  local_150._0_4_ = 0;
  local_158 = 0;
  uVar36 = 0;
  local_124 = 0;
  local_150 = 0;
  local_148.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_148.NumBits = 0;
  local_128 = 0xffffffff;
  local_118 = (void *)0x0;
  local_110 = 0;
  local_180.Initializers.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0;
  local_180.Initializers.ArrayNum = 0;
  local_180.Initializers.ArrayMax = 2;
  local_2e4 = 0;
  if (0 < *(int *)&(this->EntityAllocationMasks).field_0x8) {
    do {
      uVar27 = local_2e4;
      if ((((int)local_2e4 < 0) ||
          (*(int *)&(this->EntityAllocationMasks).field_0x28 <= (int)local_2e4)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5c6,L""), bVar13)) {
        pcVar5 = (code *)swi(3);
        iVar14 = (*pcVar5)();
        return iVar14;
      }
      puVar3 = *(undefined1 **)&(this->EntityAllocationMasks).field_0x20;
      puVar18 = &(this->EntityAllocationMasks).field_0x10;
      if (puVar3 != (undefined1 *)0x0) {
        puVar18 = puVar3;
      }
      uVar24 = uVar27 & 0x1f;
      if ((int)uVar27 < 0) {
        uVar27 = uVar27 + 0x1f;
      }
      if (((*(uint *)(puVar18 + (longlong)((int)uVar27 >> 5) * 4) >> uVar24 & 1) != 0) &&
         (bVar13 = FEntityComponentFilter::Match
                             (param_1,(FComponentMask *)
                                      ((longlong)(int)local_2e4 * 0x38 +
                                      *(longlong *)&this->EntityAllocationMasks)), bVar13)) {
        lVar20 = *(longlong *)(*(longlong *)&this->EntityAllocations + (longlong)(int)local_2e4 * 8)
        ;
        local_190 = (undefined8 *)0x0;
        local_188 = 0x8000000000;
        (**(code **)((longlong)*param_2 + 0x18))(param_2,lVar20,&local_1a0);
        if ((uint)local_188 != 0) {
          iVar25 = (uint)local_188 - *(ushort *)(lVar20 + 0xe);
          if (1 < iVar25) {
            uVar27 = (uint)local_188 - iVar25;
            local_188 = CONCAT44(local_188._4_4_,uVar27);
            uVar26 = (int)uVar27 >> 0x1f & 0x1f;
            uVar24 = uVar27 + uVar26;
            iVar25 = (uVar24 & 0x1f) - uVar26;
            if (iVar25 != 0) {
              puVar19 = &local_1a0;
              if (local_190 != (undefined8 *)0x0) {
                puVar19 = local_190;
              }
              puVar1 = (uint *)((longlong)puVar19 + (longlong)((int)uVar24 >> 5) * 4);
              *puVar1 = *puVar1 & 0xffffffffU >> (0x20U - (char)iVar25 & 0x1f);
              uVar27 = (uint)local_188;
            }
            if (local_188._4_4_ < (int)uVar27) {
              local_2f0 = local_188._4_4_;
              local_2f8 = uVar27;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("NumBits <= MaxBits",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x238,
                                  L"TBitArray::NumBits (%d) should never be greater than MaxBits (%d)"
                                 );
              if (bVar13) {
                pcVar5 = (code *)swi(3);
                iVar14 = (*pcVar5)();
                return iVar14;
              }
              uVar27 = (uint)local_188;
            }
            if (((int)uVar27 < 0) || (local_188._4_4_ < 0)) {
              local_2f8 = uVar27;
              local_2f0 = local_188._4_4_;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("NumBits >= 0 && MaxBits >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                  ,0x239,L"NumBits (%d) and MaxBits (%d) should always be >= 0");
              if (bVar13) {
                pcVar5 = (code *)swi(3);
                iVar14 = (*pcVar5)();
                return iVar14;
              }
              uVar27 = (uint)local_188;
            }
            uVar24 = uVar27 & 0x8000001f;
            if ((int)uVar24 < 0) {
              uVar24 = (uVar24 - 1 | 0xffffffe0) + 1;
            }
            if (uVar24 != 0) {
              puVar19 = &local_1a0;
              if (local_190 != (undefined8 *)0x0) {
                puVar19 = local_190;
              }
              if (((*(uint *)((longlong)puVar19 +
                             (longlong)((int)(uVar27 + ((int)uVar27 >> 0x1f & 0x1fU)) >> 5) * 4) &
                   -1 << ((byte)uVar24 & 0x1f)) != 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(LastWord & SlackMask) == 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x243,
                                      L"TBitArray slack bits are non-zero, this will result in undefined behavior."
                                     ), bVar13)) {
                pcVar5 = (code *)swi(3);
                iVar14 = (*pcVar5)();
                return iVar14;
              }
            }
          }
          local_108.NumBits = 0;
          local_108.MaxBits = 0;
          TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
                    (&local_108,
                     (TBitArray<TFixedAllocator<12>_> *)
                     ((longlong)(int)local_2e4 * 0x38 + *(longlong *)&this->EntityAllocationMasks));
          (**(code **)((longlong)*param_2 + 8))(param_2,this,&local_108);
          FMutualComponentInitializers::Reset(&local_180);
          FEntityFactories::ComputeMutuallyInclusiveComponents
                    (&this->ComponentRegistry->Factories,param_3,(FComponentMask *)&local_108,
                     &local_180);
          bVar13 = TBitArray<TFixedAllocator<12>_>::CompareSetBits<TFixedAllocator<12>_>
                             (&local_108,
                              (TBitArray<TFixedAllocator<12>_> *)
                              ((longlong)(int)local_2e4 * 0x38 +
                              *(longlong *)&this->EntityAllocationMasks),false);
          uVar12 = local_108.AllocatorInstance.InlineData._40_8_;
          uVar11 = local_108.AllocatorInstance.InlineData._32_8_;
          uVar10 = local_108.AllocatorInstance.InlineData._24_8_;
          uVar9 = local_108.AllocatorInstance.InlineData._16_8_;
          uVar8 = local_108.AllocatorInstance.InlineData._8_8_;
          uVar7 = local_108.AllocatorInstance.InlineData._0_8_;
          if (!bVar13) {
            local_a0 = local_108.NumBits;
            local_9c = local_108.MaxBits;
            local_108.NumBits = 0;
            local_108.MaxBits = 0;
            local_d0[0].Pad[0] = local_108.AllocatorInstance.InlineData[0].Pad[0];
            local_d0[0].Pad[1] = local_108.AllocatorInstance.InlineData[0].Pad[1];
            local_d0[0].Pad[2] = local_108.AllocatorInstance.InlineData[0].Pad[2];
            local_d0[0].Pad[3] = local_108.AllocatorInstance.InlineData[0].Pad[3];
            local_d0[1].Pad[0] = local_108.AllocatorInstance.InlineData[1].Pad[0];
            local_d0[1].Pad[1] = local_108.AllocatorInstance.InlineData[1].Pad[1];
            local_d0[1].Pad[2] = local_108.AllocatorInstance.InlineData[1].Pad[2];
            local_d0[1].Pad[3] = local_108.AllocatorInstance.InlineData[1].Pad[3];
            aTStack_c8[0].Pad[0] = local_108.AllocatorInstance.InlineData[2].Pad[0];
            aTStack_c8[0].Pad[1] = local_108.AllocatorInstance.InlineData[2].Pad[1];
            aTStack_c8[0].Pad[2] = local_108.AllocatorInstance.InlineData[2].Pad[2];
            aTStack_c8[0].Pad[3] = local_108.AllocatorInstance.InlineData[2].Pad[3];
            aTStack_c8[1].Pad[0] = local_108.AllocatorInstance.InlineData[3].Pad[0];
            aTStack_c8[1].Pad[1] = local_108.AllocatorInstance.InlineData[3].Pad[1];
            aTStack_c8[1].Pad[2] = local_108.AllocatorInstance.InlineData[3].Pad[2];
            aTStack_c8[1].Pad[3] = local_108.AllocatorInstance.InlineData[3].Pad[3];
            local_c0[0].Pad[0] = local_108.AllocatorInstance.InlineData[4].Pad[0];
            local_c0[0].Pad[1] = local_108.AllocatorInstance.InlineData[4].Pad[1];
            local_c0[0].Pad[2] = local_108.AllocatorInstance.InlineData[4].Pad[2];
            local_c0[0].Pad[3] = local_108.AllocatorInstance.InlineData[4].Pad[3];
            local_c0[1].Pad[0] = local_108.AllocatorInstance.InlineData[5].Pad[0];
            local_c0[1].Pad[1] = local_108.AllocatorInstance.InlineData[5].Pad[1];
            local_c0[1].Pad[2] = local_108.AllocatorInstance.InlineData[5].Pad[2];
            local_c0[1].Pad[3] = local_108.AllocatorInstance.InlineData[5].Pad[3];
            aTStack_b8[0].Pad[0] = local_108.AllocatorInstance.InlineData[6].Pad[0];
            aTStack_b8[0].Pad[1] = local_108.AllocatorInstance.InlineData[6].Pad[1];
            aTStack_b8[0].Pad[2] = local_108.AllocatorInstance.InlineData[6].Pad[2];
            aTStack_b8[0].Pad[3] = local_108.AllocatorInstance.InlineData[6].Pad[3];
            aTStack_b8[1].Pad[0] = local_108.AllocatorInstance.InlineData[7].Pad[0];
            aTStack_b8[1].Pad[1] = local_108.AllocatorInstance.InlineData[7].Pad[1];
            aTStack_b8[1].Pad[2] = local_108.AllocatorInstance.InlineData[7].Pad[2];
            aTStack_b8[1].Pad[3] = local_108.AllocatorInstance.InlineData[7].Pad[3];
            local_b0[0].Pad[0] = local_108.AllocatorInstance.InlineData[8].Pad[0];
            local_b0[0].Pad[1] = local_108.AllocatorInstance.InlineData[8].Pad[1];
            local_b0[0].Pad[2] = local_108.AllocatorInstance.InlineData[8].Pad[2];
            local_b0[0].Pad[3] = local_108.AllocatorInstance.InlineData[8].Pad[3];
            local_b0[1].Pad[0] = local_108.AllocatorInstance.InlineData[9].Pad[0];
            local_b0[1].Pad[1] = local_108.AllocatorInstance.InlineData[9].Pad[1];
            local_b0[1].Pad[2] = local_108.AllocatorInstance.InlineData[9].Pad[2];
            local_b0[1].Pad[3] = local_108.AllocatorInstance.InlineData[9].Pad[3];
            aTStack_a8[0].Pad[0] = local_108.AllocatorInstance.InlineData[10].Pad[0];
            aTStack_a8[0].Pad[1] = local_108.AllocatorInstance.InlineData[10].Pad[1];
            aTStack_a8[0].Pad[2] = local_108.AllocatorInstance.InlineData[10].Pad[2];
            aTStack_a8[0].Pad[3] = local_108.AllocatorInstance.InlineData[10].Pad[3];
            aTStack_a8[1].Pad[0] = local_108.AllocatorInstance.InlineData[0xb].Pad[0];
            aTStack_a8[1].Pad[1] = local_108.AllocatorInstance.InlineData[0xb].Pad[1];
            aTStack_a8[1].Pad[2] = local_108.AllocatorInstance.InlineData[0xb].Pad[2];
            aTStack_a8[1].Pad[3] = local_108.AllocatorInstance.InlineData[0xb].Pad[3];
            if (local_190 == (undefined8 *)0x0) {
              local_98 = local_1a0;
              uStack_90 = uStack_198;
            }
            local_88 = local_190;
            local_80 = (uint)local_188;
            local_7c = local_188._4_4_;
            local_190 = (undefined8 *)0x0;
            local_188 = 0;
            if (local_180.Initializers.AllocatorInstance.SecondaryData ==
                (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0) {
              local_78[0] = local_180.Initializers.AllocatorInstance.InlineData[0];
              local_78[1] = local_180.Initializers.AllocatorInstance.InlineData[1];
              local_78[2] = local_180.Initializers.AllocatorInstance.InlineData[2];
              local_78[3] = local_180.Initializers.AllocatorInstance.InlineData[3];
              local_78[4] = local_180.Initializers.AllocatorInstance.InlineData[4];
              local_78[5] = local_180.Initializers.AllocatorInstance.InlineData[5];
              local_78[6] = local_180.Initializers.AllocatorInstance.InlineData[6];
              local_78[7] = local_180.Initializers.AllocatorInstance.InlineData[7];
              auStack_70[0] = local_180.Initializers.AllocatorInstance.InlineData[8];
              auStack_70[1] = local_180.Initializers.AllocatorInstance.InlineData[9];
              auStack_70[2] = local_180.Initializers.AllocatorInstance.InlineData[10];
              auStack_70[3] = local_180.Initializers.AllocatorInstance.InlineData[0xb];
              auStack_70[4] = local_180.Initializers.AllocatorInstance.InlineData[0xc];
              auStack_70[5] = local_180.Initializers.AllocatorInstance.InlineData[0xd];
              auStack_70[6] = local_180.Initializers.AllocatorInstance.InlineData[0xe];
              auStack_70[7] = local_180.Initializers.AllocatorInstance.InlineData[0xf];
            }
            local_68 = local_180.Initializers.AllocatorInstance.SecondaryData;
            local_60 = local_180.Initializers.ArrayNum;
            local_5c = local_180.Initializers.ArrayMax;
            local_1d0 = &local_2e4;
            local_1c8 = local_d0;
            local_180.Initializers.AllocatorInstance.SecondaryData =
                 (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0;
            local_180.Initializers.ArrayNum = 0;
            local_180.Initializers.ArrayMax = 2;
            local_108.AllocatorInstance.InlineData._0_8_ = uVar7;
            local_108.AllocatorInstance.InlineData._8_8_ = uVar8;
            local_108.AllocatorInstance.InlineData._16_8_ = uVar9;
            local_108.AllocatorInstance.InlineData._24_8_ = uVar10;
            local_108.AllocatorInstance.InlineData._32_8_ = uVar11;
            local_108.AllocatorInstance.InlineData._40_8_ = uVar12;
            TSet<TTuple<int,`UE::MovieScene::FEntityManager::MutateConditional'::__l2::FConditionalMutationState>,TDefaultMapHashableKeyFuncs<int,`UE::MovieScene::FEntityManager::MutateConditional'::__l2::FConditionalMutationState,0>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<int_const_&,_UE::MovieScene::FEntityManager::MutateConditional_::__l2::FConditionalMutationState_&&>_>
                      (&local_158,&local_218,(bool *)&local_1d0);
            if (local_68 != (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0) {
              FMemory::Free((void *)local_68);
            }
            if (local_88 != (undefined8 *)0x0) {
              FMemory::Free(local_88);
            }
          }
        }
        if (local_190 != (undefined8 *)0x0) {
          FMemory::Free(local_190);
        }
      }
      local_2e4 = local_2e4 + 1;
    } while ((int)local_2e4 < *(int *)&(this->EntityAllocationMasks).field_0x8);
  }
  iVar25 = local_148.NumBits;
  iVar34 = (int)local_150 - local_124;
  if (iVar34 != 0) {
    local_270.SystemSerial = this->SystemSerialNumber;
    local_2d8 = 0;
    uVar27 = 1;
    uStack_240._4_4_ = uVar36;
    if (local_148.NumBits != 0) {
      FVar29 = (ForElementType<unsigned_int>)&local_148;
      if (local_148.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar29 = local_148.AllocatorInstance.SecondaryData;
      }
      uVar24 = *(uint *)FVar29;
      uVar36 = uVar32;
      iVar14 = 0;
      while (uVar24 == 0) {
        lVar20 = (longlong)(int)uVar36;
        iVar14 = iVar14 + 0x20;
        uVar36 = uVar36 + 1;
        uStack_240._4_4_ = local_148.NumBits;
        if ((int)((local_148.NumBits - 1U) + ((int)(local_148.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
            (int)uVar36) goto LAB_14614502f;
        uVar24 = *(uint *)((longlong)FVar29 + (lVar20 + 1) * 4);
      }
      uVar27 = -uVar24 & uVar24;
      uVar37 = (ulonglong)uVar27 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar37 != 0) {
        for (; uVar37 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_218.Key._4_4_ = (int)lVar20;
      uStack_240._4_4_ = iVar14 + -1 + local_218.Key._4_4_;
      if (local_148.NumBits < (int)uStack_240._4_4_) {
        uStack_240._4_4_ = local_148.NumBits;
      }
    }
LAB_14614502f:
    local_258 = &local_158;
    local_248 = &local_148;
    bVar17 = (byte)local_148.NumBits & 0x1f;
    uStack_2ac = 1 << bVar17;
    iVar28 = local_148.NumBits >> 5;
    uVar32 = -1 << bVar17;
    uVar24 = local_148.NumBits & 0xffffffe0;
    uStack_250 = CONCAT44(uVar27,uVar36);
    uStack_240._0_4_ = 0xffffffff;
    local_238._4_4_ = local_1a4;
    local_238._0_4_ = iVar14;
    pTStack_2a8 = &local_148;
    TStack_1f8._padding_ = uStack_250;
    uStack_1d8 = CONCAT44(uStack_22c,iVar34);
    TStack_1f8.UnvisitedBitMask = 0xffffffff;
    TStack_1f8.CurrentBitIndex = uStack_240._4_4_;
    TStack_1f8.BaseBitIndex = iVar14;
    TStack_1f8._28_4_ = local_1a4;
    local_2b0 = iVar28;
    local_2a0 = uVar32;
    uStack_29c = local_148.NumBits;
    uStack_298 = uVar24;
    iStack_230 = iVar34;
    local_200 = local_258;
    TStack_1f8.Array = local_248;
    if ((local_148.NumBits < 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar13)) {
      pcVar5 = (code *)swi(3);
      iVar14 = (*pcVar5)();
      return iVar14;
    }
    if (iVar25 != local_148.NumBits) {
      FVar29 = (ForElementType<unsigned_int>)&local_148;
      if (local_148.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar29 = local_148.AllocatorInstance.SecondaryData;
      }
      uVar32 = uVar32 & *(uint *)((longlong)FVar29 + (longlong)iVar28 * 4);
      while (uVar32 == 0) {
        uStack_298 = uVar24 + 0x20;
        local_2b0 = iVar28 + 1;
        uStack_29c = local_148.NumBits;
        if ((int)((local_148.NumBits - 1U) + ((int)(local_148.NumBits - 1U) >> 0x1f & 0x1fU)) >> 5 <
            local_2b0) goto LAB_14614517f;
        uVar32 = *(uint *)((longlong)FVar29 + ((longlong)iVar28 + 1) * 4);
        local_2a0 = 0xffffffff;
        iVar28 = local_2b0;
        uVar24 = uStack_298;
      }
      uStack_2ac = -uVar32 & uVar32;
      uVar37 = (ulonglong)uStack_2ac * 2 + 1;
      lVar20 = 0x3f;
      if (uVar37 != 0) {
        for (; uVar37 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      local_218.Value._0_4_ = (int)lVar20;
      uStack_29c = (uVar24 - 1) + (int)local_218.Value;
      if (local_148.NumBits < (int)uStack_29c) {
        uStack_29c = local_148.NumBits;
      }
    }
LAB_14614517f:
    uStack_250 = CONCAT44(uStack_2ac,local_2b0);
    uStack_240 = CONCAT44(uStack_29c,local_2a0);
    local_238 = CONCAT44(uStack_294,uStack_298);
    local_248 = pTStack_2a8;
    local_260 = pTStack_2a8;
    local_290 = uStack_29c;
    while( true ) {
      plVar6 = local_200;
      uVar36 = local_290;
      if ((int)local_200[1] - *(int *)((longlong)local_200 + 0x34) != (int)uStack_1d8) {
        local_2e8[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<int,`UE::MovieScene::FEntityManager::MutateConditional'::__l2::FConditionalMutationState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_2e8);
      }
      if (((TStack_1f8.CurrentBitIndex == uVar36) && (TStack_1f8.Array == local_260)) &&
         (plVar6 == &local_158)) break;
      uVar36 = 0;
      piVar38 = (int *)((longlong)TStack_1f8.CurrentBitIndex * 0x88 + *plVar6);
      iVar14 = *piVar38;
      pFVar33 = *(FEntityAllocation **)
                 (*(longlong *)&this->EntityAllocations + (longlong)iVar14 * 8);
      piVar23 = piVar38 + 0x10;
      if (*(int **)(piVar38 + 0x14) != (int *)0x0) {
        piVar23 = *(int **)(piVar38 + 0x14);
      }
      iVar25 = piVar38[0x16] + 0x1f;
      uVar37 = 0;
      iVar25 = (int)((iVar25 >> 0x1f & 0x1fU) + iVar25) >> 5;
      uVar32 = piVar38[0x16] & 0x8000001f;
      if ((int)uVar32 < 0) {
        uVar32 = (uVar32 - 1 | 0xffffffe0) + 1;
      }
      uVar27 = 0xffffffff >> ((byte)(0x20 - uVar32) & 0x1f);
      if (0x1f < (int)(0x20 - uVar32)) {
        uVar27 = 0xffffffff;
      }
      uVar32 = 0xffffffff;
      if (iVar25 == 1) {
        uVar32 = uVar27;
      }
      if (0 < iVar25) {
        do {
          uVar24 = piVar23[uVar37] & uVar32;
          if (uVar32 == 0xffffffff) {
            uVar24 = piVar23[uVar37];
          }
          uVar26 = (int)uVar37 + 1;
          uVar37 = (ulonglong)uVar26;
          uVar21 = (ulonglong)uVar24 - ((ulonglong)(uVar24 >> 1) & 0x5555555555555555);
          uVar21 = (uVar21 >> 2 & 0x3333333333333333) + (uVar21 & 0x3333333333333333);
          uVar36 = uVar36 + (byte)(((uVar21 >> 4) + uVar21 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                  >> 0x38);
          uVar32 = 0xffffffff;
          if (uVar26 == iVar25 - 1U) {
            uVar32 = uVar27;
          }
          this = local_2d0;
        } while ((int)uVar26 < iVar25);
      }
      local_2d8 = local_2d8 + uVar36;
      pTVar39 = (TBitArray<TFixedAllocator<12>_> *)(piVar38 + 2);
      local_2d4 = iVar14;
      local_2c8 = pFVar33;
      local_2c0 = piVar38;
      local_2b8 = pTVar39;
      if (uVar36 == pFVar33->Size) {
        pFVar15 = MigrateAllocation(this,iVar14,(FComponentMask *)pTVar39);
        iVar25 = piVar38[0xe];
        iVar34 = 0;
        iVar28 = 0;
        local_2e0 = pFVar15;
        if (iVar25 != 0) {
          uVar36 = *(uint *)(pTVar39->AllocatorInstance).InlineData[0].Pad;
          while (uVar36 == 0) {
            lVar20 = (longlong)iVar34;
            iVar28 = iVar28 + 0x20;
            iVar34 = iVar34 + 1;
            if ((int)(iVar25 + -1 + (iVar25 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar34)
            goto LAB_1461455b6;
            uVar36 = piVar38[lVar20 + 3];
          }
          local_2b8 = (TBitArray<TFixedAllocator<12>_> *)(ulonglong)(-uVar36 & uVar36);
          uVar37 = (ulonglong)(-uVar36 & uVar36) * 2 + 1;
          lVar20 = 0x3f;
          if (uVar37 != 0) {
            for (; uVar37 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          local_218.Value._4_4_ = (int)lVar20;
          uVar36 = iVar28 + -1 + local_218.Value._4_4_;
          pFVar33 = local_2c8;
          if ((int)uVar36 < iVar25) {
            local_288 = (int *)((longlong)iVar14 * 0x38);
            uVar32 = 0xffffffff;
            do {
              piVar23 = local_288;
              if (((uVar36 & 0xffff0000) != 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(BitIndex & 0xFFFF0000) == 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityIDs.h"
                                      ,0xba,L""), bVar13)) {
                pcVar5 = (code *)swi(3);
                iVar14 = (*pcVar5)();
                return iVar14;
              }
              FVar31.Value = (ushort)uVar36;
              if (((FVar31.Value == 0xffff) ||
                  (*(int *)((longlong)piVar23 +
                           *(longlong *)&local_2d0->EntityAllocationMasks + 0x30) <=
                   (int)(uVar36 & 0xffff))) ||
                 (pFVar15 = local_2e0,
                 (*(uint *)((longlong)piVar23 +
                           (ulonglong)((uVar36 & 0xffff) >> 5) * 4 +
                           *(longlong *)&local_2d0->EntityAllocationMasks) >> (uVar36 & 0x1f) & 1)
                 == 0)) {
                pFVar30 = local_2e0->ComponentHeaders;
                pFVar22 = pFVar30 + local_2e0->NumComponents;
                for (; pFVar30 != pFVar22; pFVar30 = pFVar30 + 1) {
                  if ((pFVar30->ComponentType).Value == FVar31.Value) goto LAB_146145493;
                }
                pFVar30 = (FComponentHeader *)0x0;
                bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Header",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                                    ,0x2db,L"");
                if (bVar13) {
                  pcVar5 = (code *)swi(3);
                  iVar14 = (*pcVar5)();
                  return iVar14;
                }
LAB_146145493:
                pFVar15 = local_2e0;
                if (pFVar30->Sizeof != '\0') {
                  pFVar16 = FComponentRegistry::GetComponentTypeChecked
                                      (local_2d0->ComponentRegistry,FVar31);
                  if (((pFVar30->Sizeof == '\0') || (pFVar30->Components == (uchar *)0x0)) &&
                     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("!IsTag() && Components != nullptr",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                                          ,0x221,L""), bVar13)) {
                    pcVar5 = (code *)swi(3);
                    iVar14 = (*pcVar5)();
                    return iVar14;
                  }
                  pFVar15 = local_2e0;
                  _Dst = pFVar30->Components;
                  if (pFVar16->bIsZeroConstructType == 0) {
                    pIVar4 = (pFVar16->ComplexComponentOps).Ptr;
                    (**(code **)((longlong)*pIVar4 + 8))(pIVar4,_Dst);
                  }
                  else {
                    memset(_Dst,0,(ulonglong)((uint)local_2e0->Size * (uint)pFVar16->Sizeof));
                  }
                }
              }
              uVar27 = piVar38[0xe];
              uVar32 = uVar32 & ~(uint)local_2b8;
              uVar36 = uVar32 & *(uint *)(pTVar39->AllocatorInstance).InlineData[iVar34].Pad;
              while (uVar36 == 0) {
                lVar20 = (longlong)iVar34;
                iVar28 = iVar28 + 0x20;
                iVar34 = iVar34 + 1;
                uVar36 = uVar27;
                if ((int)((uVar27 - 1) + ((int)(uVar27 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar34)
                goto LAB_146145592;
                uVar32 = 0xffffffff;
                uVar36 = piVar38[lVar20 + 3];
              }
              local_2b8 = (TBitArray<TFixedAllocator<12>_> *)
                          CONCAT44(local_2b8._4_4_,-uVar36 & uVar36);
              uVar37 = (ulonglong)(-uVar36 & uVar36) * 2 + 1;
              lVar20 = 0x3f;
              if (uVar37 != 0) {
                for (; uVar37 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              local_208 = (int)lVar20;
              uVar36 = local_208 + -1 + iVar28;
              if ((int)uVar27 < (int)uVar36) {
                uVar36 = uVar27;
              }
LAB_146145592:
              pFVar33 = local_2c8;
              iVar14 = local_2d4;
            } while ((int)uVar36 < piVar38[0xe]);
          }
        }
LAB_1461455b6:
        this = local_2d0;
        this_00 = (TBitArray<TFixedAllocator<12>_> *)
                  ((longlong)iVar14 * 0x38 + *(longlong *)&local_2d0->EntityAllocationMasks);
        if (this_00 != pTVar39) {
          TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>(this_00,pTVar39);
        }
        *(FEntityAllocation **)(*(longlong *)&this->EntityAllocations + (longlong)iVar14 * 8) =
             pFVar15;
        local_228.ComponentStartOffset = 0;
        local_228.Num = (int)pFVar15->Size;
        local_228.Allocation = pFVar15;
        FMutualComponentInitializers::Execute
                  ((FMutualComponentInitializers *)(local_2c0 + 0x18),&local_228,&local_270);
        (**(code **)((longlong)*local_268 + 0x10))(local_268,&local_228,pTVar39);
        DestroyAllocation(this,pFVar33,true);
      }
      else {
        uVar35 = 0x40;
        if ((ushort)uVar36 < 0x40) {
          uVar35 = (ushort)uVar36;
        }
        uVar32 = CreateEntityAllocationEntry(this,(FComponentMask *)pTVar39,uVar35,0x40);
        iVar14 = local_2c0[0x16] + -1;
        local_280.Allocation =
             *(FEntityAllocation **)
              (*(longlong *)&this->EntityAllocations + (longlong)(int)uVar32 * 8);
        iVar25 = iVar14 >> 5;
        uVar27 = 1 << ((byte)iVar14 & 0x1f);
        local_288 = local_2c0 + 0x10;
        local_280.ComponentStartOffset = (int)(local_280.Allocation)->Size;
        local_280.Num = uVar36;
        if (-1 < iVar14) {
          pFVar40 = pFVar33->EntityIDs + iVar14;
          do {
            piVar23 = local_288;
            if (*(int **)(local_288 + 4) != (int *)0x0) {
              piVar23 = *(int **)(local_288 + 4);
            }
            if ((piVar23[iVar25] & uVar27) != 0) {
              puVar2 = (ushort *)
                       (*(longlong *)&local_2d0->EntityLocations + (ulonglong)pFVar40->Value * 8);
              uVar36 = MigrateEntity(local_2d0,uVar32,(uint)*puVar2,
                                     (uint)*(ushort *)
                                            (*(longlong *)&local_2d0->EntityLocations + 2 +
                                            (ulonglong)pFVar40->Value * 8));
              if ((((uVar36 | uVar32) & 0xffff0000) != 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(InAllocationIndex & 0xFFFF0000) == 0 && (InEntryIndexWithinAllocation & 0xFFFF0000) == 0"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                                      ,0x3ad,L""), bVar13)) {
                pcVar5 = (code *)swi(3);
                iVar14 = (*pcVar5)();
                return iVar14;
              }
              *puVar2 = (ushort)uVar32;
              puVar2[1] = (ushort)uVar36;
            }
            iVar14 = iVar14 + -1;
            pFVar40 = pFVar40 + -1;
            uVar27 = uVar27 >> 1;
            if (uVar27 == 0) {
              uVar27 = 0x80000000;
              iVar25 = iVar25 + -1;
            }
            pTVar39 = local_2b8;
            this = local_2d0;
          } while (-1 < iVar14);
        }
        if ((local_280.Num + local_280.ComponentStartOffset != (uint)(local_280.Allocation)->Size)
           && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Range.ComponentStartOffset + Range.Num == Range.Allocation->Num()"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                                   ,0x761,L""), bVar13)) {
          pcVar5 = (code *)swi(3);
          iVar14 = (*pcVar5)();
          return iVar14;
        }
        FMutualComponentInitializers::Execute
                  ((FMutualComponentInitializers *)(local_2c0 + 0x18),&local_280,&local_270);
        (**(code **)((longlong)*local_268 + 0x10))(local_268,&local_280,pTVar39);
      }
      TStack_1f8.UnvisitedBitMask = TStack_1f8.UnvisitedBitMask & ~TStack_1f8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1f8);
    }
    this->StructureMutationSystemSerialNumber = this->SystemSerialNumber;
    this->bAccumulatedMaskStale = true;
    uVar32 = local_2d8;
  }
  if (local_180.Initializers.AllocatorInstance.SecondaryData !=
      (ForElementType<UE::MovieScene::IMutualComponentInitializer_*>)0x0) {
    FMemory::Free((void *)local_180.Initializers.AllocatorInstance.SecondaryData);
  }
  local_110 = 0;
  if (local_118 != (void *)0x0) {
    FMemory::Free(local_118);
  }
  TSparseArray<TSparseSetElement<TTuple<int,`UE::MovieScene::FEntityManager::MutateConditional'::__l2::FConditionalMutationState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,_UE::MovieScene::FEntityManager::MutateConditional_::__l2::FConditionalMutationState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_158);
  return uVar32;
}

// NotifyUObjectDeleted @ 146145840

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::NotifyUObjectDeleted
          (FEntityManager *this,UObjectBase *param_1,int param_2)

{
  return;
}

// OnStructureChanged @ 146148ca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::MovieScene::FEntityManager::OnStructureChanged(FEntityManager *this)

{
  this->StructureMutationSystemSerialNumber = this->SystemSerialNumber;
  this->bAccumulatedMaskStale = true;
  return;
}

// OnUObjectArrayShutdown @ 146148cc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::MovieScene::FEntityManager::OnUObjectArrayShutdown(FEntityManager *this)

{
  return;
}

// OverwriteEntityWithDuplicate @ 1461490e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::OverwriteEntityWithDuplicate
          (FEntityManager *this,FMovieSceneEntityID *param_1,FMovieSceneEntityID param_2)

{
  FMovieSceneEntityID FVar1;
  undefined6 extraout_var;
  undefined1 local_res18 [16];
  
  FVar1.Value = 0xffff;
  if (param_2.Value != 0xffff) {
    FVar1 = DuplicateEntity(this,(ushort)local_res18);
    FVar1.Value = *(ushort *)CONCAT62(extraout_var,FVar1.Value);
  }
  ReplaceEntityID(this,param_1,FVar1);
  this->StructureMutationSystemSerialNumber = this->SystemSerialNumber;
  this->bAccumulatedMaskStale = true;
  return;
}

// RemoveComponent @ 14614edb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::RemoveComponent
          (FEntityManager *this,FMovieSceneEntityID param_1,FComponentTypeID param_2)

{
  FEntityLocation *this_00;
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  ushort uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_98 [32];
  uint local_78;
  TBitArray<TFixedAllocator<12>_> local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  CheckCanChangeStructure(this);
  this_00 = (FEntityLocation *)(*(longlong *)&this->EntityLocations + (ulonglong)param_1.Value * 8);
  uVar2 = *(ushort *)(*(longlong *)&this->EntityLocations + (ulonglong)param_1.Value * 8);
  if ((((uVar2 != 0xffff) &&
       (lVar6 = (ulonglong)uVar2 * 0x38 + *(longlong *)&this->EntityAllocationMasks,
       param_2.Value != 0xffff)) &&
      (uVar7 = (uint)param_2.Value, (int)uVar7 < *(int *)(lVar6 + 0x30))) &&
     ((*(uint *)(lVar6 + (ulonglong)(param_2.Value >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0)) {
    bVar4 = false;
    local_70.MaxBits = 0x180;
    local_70.NumBits = 0;
    iVar5 = 0;
    lVar6 = *(longlong *)
             (*(longlong *)&this->EntityAllocations + (ulonglong)this_00->AllocationIndex * 8);
    lVar8 = *(longlong *)(lVar6 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar6 + 0xc) * 0x38 + lVar8;
    for (; lVar8 != lVar6; lVar8 = lVar8 + 0x38) {
      uVar2 = *(ushort *)(lVar8 + 0x36);
      if (uVar2 != uVar7) {
        iVar9 = ((uint)uVar2 - iVar5) + 1;
        if (0 < iVar9) {
          TBitArray<TFixedAllocator<12>_>::Add(&local_70,false,iVar9);
          iVar5 = local_70.NumBits;
        }
        if ((iVar5 <= (int)(uint)uVar2) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar4 = true;
        pTVar1 = local_70.AllocatorInstance.InlineData + (uVar2 >> 5);
        *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad | 1 << ((byte)uVar2 & 0x1f);
        iVar5 = local_70.NumBits;
      }
    }
    uVar7._0_2_ = this_00->AllocationIndex;
    uVar7._2_2_ = this_00->EntryIndexWithinAllocation;
    local_78 = uVar7;
    if (bVar4) {
      iVar5 = GetOrCreateAllocationWithSlack(this,(FComponentMask *)&local_70,(int *)0x0);
      iVar9 = MigrateEntity(this,iVar5,uVar7 & 0xffff,local_78 >> 0x10);
      FEntityLocation::Set(this_00,iVar5,iVar9);
    }
    else {
      this_00->AllocationIndex = 0xffff;
      this_00->EntryIndexWithinAllocation = 0;
      RemoveEntityFromAllocation(this,uVar7 & 0xffff,uVar7 >> 0x10);
    }
    this->StructureMutationSystemSerialNumber = this->SystemSerialNumber;
    this->bAccumulatedMaskStale = true;
  }
  return;
}

// RemoveComponent @ 14614efb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::RemoveComponent
          (FEntityManager *this,FMovieSceneEntityID param_1,FComponentTypeID param_2,
          EEntityRecursion param_3)

{
  <lambda_1> local_18;
  
  if ((param_3 & This) != 0) {
    RemoveComponent(this,param_1,param_2);
  }
  if ((param_3 & Children) != 0) {
    local_18.__this = this;
    local_18.ComponentTypeID.Value = param_2.Value;
    IterateChildren_ParentFirst<_UE::MovieScene::FEntityManager::RemoveComponent_::__l8::<lambda_1>_>
              (this,param_1,&local_18);
  }
  return;
}

// RemoveComponents @ 14614f080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::RemoveComponents
          (FEntityManager *this,FMovieSceneEntityID param_1,FComponentMask *param_2)

{
  FEntityLocation *this_00;
  ushort uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  TTypeCompatibleBytes<unsigned_int> *pTVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  size_t _Size;
  TBitArray<TFixedAllocator<12>_> *pTVar9;
  bool bVar10;
  undefined1 auStack_a8 [32];
  uint local_88;
  <lambda_1> local_80;
  <lambda_1> local_7f [3];
  TBitArray<TFixedAllocator<12>_> local_7c;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_a8;
  CheckCanChangeStructure(this);
  iVar3 = (param_2->Bits).NumBits;
  uVar6 = 0;
  uVar8 = iVar3 + 0x1f;
  pTVar5 = (TTypeCompatibleBytes<unsigned_int> *)param_2;
  if (uVar8 >> 5 != 0) {
    do {
      if (*(int *)(((TBitArray<TFixedAllocator<12>_> *)pTVar5->Pad)->AllocatorInstance).InlineData
                  [0].Pad != 0) {
        pTVar5 = (param_2->Bits).AllocatorInstance.InlineData + uVar6;
        local_88 = 0;
        bVar10 = *(int *)pTVar5->Pad != 0;
        if (bVar10) {
          for (; (*(uint *)pTVar5->Pad >> local_88 & 1) == 0; local_88 = local_88 + 1) {
          }
        }
        iVar4 = 0x20;
        if (bVar10) {
          iVar4 = local_88;
        }
        iVar4 = iVar4 + uVar6 * 0x20;
        if (iVar3 <= iVar4) {
          return;
        }
        if (iVar4 == -1) {
          return;
        }
        this_00 = (FEntityLocation *)
                  (*(longlong *)&this->EntityLocations + (ulonglong)param_1.Value * 8);
        uVar1 = *(ushort *)(*(longlong *)&this->EntityLocations + (ulonglong)param_1.Value * 8);
        if (uVar1 == 0xffff) {
          return;
        }
        pTVar9 = (TBitArray<TFixedAllocator<12>_> *)
                 ((ulonglong)uVar1 * 0x38 + *(longlong *)&this->EntityAllocationMasks);
        local_7c.NumBits = pTVar9->NumBits;
        local_7c.MaxBits = 0x180;
        uVar8 = local_7c.NumBits + 0x1fU >> 5;
        if (local_7c.NumBits + 0x1fU >> 5 != 0) {
          if (uVar8 < 0xd) {
            if (uVar8 < 9) {
              iVar3 = -1;
              _Size = (ulonglong)uVar8 << 2;
            }
            else {
              iVar3 = 0xff;
              _Size = (ulonglong)uVar8 << 2;
            }
          }
          else {
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("NewMax >= 0 && NewMax <= NumInlineElements",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ContainerAllocationPolicies.h"
                                ,0x524,L"");
            if (bVar10) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            local_7c.MaxBits = uVar8 << 5;
            iVar3 = 0xff;
            _Size = (ulonglong)uVar8 << 2;
          }
          memset(&local_7c,iVar3,_Size);
          uVar8 = local_7c.NumBits & 0x8000001f;
          if ((int)uVar8 < 0) {
            uVar8 = (uVar8 - 1 | 0xffffffe0) + 1;
          }
          if (uVar8 != 0) {
            pTVar5 = local_7c.AllocatorInstance.InlineData +
                     ((int)(local_7c.NumBits + (local_7c.NumBits >> 0x1f & 0x1fU)) >> 5);
            *(uint *)pTVar5->Pad = *(uint *)pTVar5->Pad & 0xffffffffU >> (-(char)uVar8 & 0x1fU);
          }
        }
        Core::Private::
        BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseXOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
                  (&param_2->Bits,&local_7c,MaintainSize,&local_80);
        Core::Private::
        BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseAND<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
                  (pTVar9,&local_7c,MaintainSize,local_7f);
        bVar10 = TBitArray<TFixedAllocator<12>_>::CompareSetBits<TFixedAllocator<12>_>
                           ((TBitArray<TFixedAllocator<12>_> *)
                            ((ulonglong)this_00->AllocationIndex * 0x38 +
                            *(longlong *)&this->EntityAllocationMasks),&local_7c,false);
        if (bVar10) {
          return;
        }
        uVar7 = 0;
        if (local_7c.NumBits + 0x1fU >> 5 == 0) {
LAB_14614f28f:
          uVar8._0_2_ = this_00->AllocationIndex;
          uVar8._2_2_ = this_00->EntryIndexWithinAllocation;
        }
        else {
          pTVar9 = &local_7c;
          while (*(int *)(pTVar9->AllocatorInstance).InlineData[0].Pad == 0) {
            uVar8 = (int)uVar7 + 1;
            uVar7 = (ulonglong)uVar8;
            pTVar9 = (TBitArray<TFixedAllocator<12>_> *)((pTVar9->AllocatorInstance).InlineData + 1)
            ;
            if ((int)(local_7c.NumBits + 0x1fU >> 5) <= (int)uVar8) goto LAB_14614f28f;
          }
          pTVar5 = local_7c.AllocatorInstance.InlineData + uVar7;
          iVar3 = 0;
          bVar10 = *(int *)pTVar5->Pad != 0;
          if (bVar10) {
            for (; (*(uint *)pTVar5->Pad >> iVar3 & 1) == 0; iVar3 = iVar3 + 1) {
            }
          }
          iVar4 = 0x20;
          if (bVar10) {
            iVar4 = iVar3;
          }
          iVar4 = iVar4 + (int)uVar7 * 0x20;
          if (local_7c.NumBits <= iVar4) goto LAB_14614f28f;
          uVar8._0_2_ = this_00->AllocationIndex;
          uVar8._2_2_ = this_00->EntryIndexWithinAllocation;
          if (iVar4 != -1) {
            local_88 = uVar8;
            iVar3 = GetOrCreateAllocationWithSlack(this,(FComponentMask *)&local_7c,(int *)0x0);
            iVar4 = MigrateEntity(this,iVar3,uVar8 & 0xffff,local_88 >> 0x10);
            FEntityLocation::Set(this_00,iVar3,iVar4);
            goto LAB_14614f2ac;
          }
        }
        this_00->AllocationIndex = 0xffff;
        this_00->EntryIndexWithinAllocation = 0;
        local_88 = uVar8;
        RemoveEntityFromAllocation(this,uVar8 & 0xffff,uVar8 >> 0x10);
LAB_14614f2ac:
        this->StructureMutationSystemSerialNumber = this->SystemSerialNumber;
        this->bAccumulatedMaskStale = true;
        return;
      }
      uVar6 = uVar6 + 1;
      pTVar5 = pTVar5 + 1;
    } while ((int)uVar6 < (int)(uVar8 >> 5));
  }
  return;
}

// RemoveComponents @ 14614f360

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::RemoveComponents
          (FEntityManager *this,FMovieSceneEntityID param_1,FComponentMask *param_2,
          EEntityRecursion param_3)

{
  <lambda_1> local_18;
  
  if ((param_3 & This) != 0) {
    RemoveComponents(this,param_1,param_2);
  }
  if ((param_3 & Children) != 0) {
    local_18.__this = this;
    local_18.EntitiesToRemove = param_2;
    IterateChildren_ParentFirst<_UE::MovieScene::FEntityManager::RemoveComponents_::__l8::<lambda_1>_>
              (this,param_1,&local_18);
  }
  return;
}

// RemoveEntityFromAllocation @ 14614f4c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::RemoveEntityFromAllocation
          (FEntityManager *this,int param_1,int param_2)

{
  uchar **ppuVar1;
  ushort *puVar2;
  uint *puVar3;
  ushort uVar4;
  ushort uVar5;
  ulonglong uVar6;
  FEntityAllocation *pFVar7;
  IComplexComponentOps *pIVar8;
  code *pcVar9;
  bool bVar10;
  FComponentHeader *pFVar11;
  ulonglong uVar12;
  FComponentTypeInfo *pFVar13;
  FMovieSceneEntityID *pFVar14;
  uint uVar15;
  FComponentHeader *pFVar16;
  ForElementType<unsigned_int> FVar17;
  uchar *_Dst;
  TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int> local_60 [2];
  
  CheckCanChangeStructure(this);
  uVar6 = this->SystemSerialNumber;
  pFVar7 = *(FEntityAllocation **)(*(longlong *)&this->EntityAllocations + (longlong)param_1 * 8);
  uVar4 = pFVar7->Size;
  pFVar16 = pFVar7->ComponentHeaders;
  uVar15 = uVar4 - 1;
  uVar5 = pFVar7->MaxCapacity;
  uVar12 = uVar6;
  if (uVar6 < pFVar7->SerialNumber) {
    uVar12 = pFVar7->SerialNumber;
  }
  pFVar7->SerialNumber = uVar12;
  pFVar11 = pFVar16 + pFVar7->NumComponents;
  for (; pFVar16 != pFVar11; pFVar16 = pFVar16 + 1) {
    uVar12 = uVar6;
    if (uVar6 < pFVar16->SerialNumber) {
      uVar12 = pFVar16->SerialNumber;
    }
    pFVar16->SerialNumber = uVar12;
    if (pFVar16->Sizeof != '\0') {
      pFVar13 = FComponentRegistry::GetComponentTypeChecked
                          (this->ComponentRegistry,(FComponentTypeID)(pFVar16->ComponentType).Value)
      ;
      ppuVar1 = &pFVar16->Components;
      if (((pFVar16->Sizeof == '\0') || (*ppuVar1 == (uchar *)0x0)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!IsTag() && Components != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                              ,0x221,L""), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      _Dst = *ppuVar1 + (int)((uint)pFVar16->Sizeof * param_2);
      if (pFVar13->bIsTriviallyDestructable == '\0') {
        pIVar8 = (pFVar13->ComplexComponentOps).Ptr;
        (**(code **)((longlong)*pIVar8 + 0x10))(pIVar8,_Dst,1);
      }
      if (uVar15 != param_2) {
        if (((pFVar16->Sizeof == '\0') || (*ppuVar1 == (uchar *)0x0)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("!IsTag() && Components != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                                ,0x221,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (pFVar13->bIsTriviallyDestructable == '\x01' &&
            pFVar13->bIsTriviallyCopyAssignable == '\x01') {
          memmove(_Dst,pFVar16->Components + (int)(pFVar16->Sizeof * uVar15),
                  (ulonglong)pFVar13->Sizeof);
        }
        else {
          pIVar8 = (pFVar13->ComplexComponentOps).Ptr;
          (**(code **)((longlong)*pIVar8 + 0x20))
                    (pIVar8,_Dst,pFVar16->Components + (int)(pFVar16->Sizeof * uVar15),1);
        }
      }
    }
  }
  if (uVar15 != param_2) {
    FEntityInitializer::MoveEntryIndex(pFVar7,uVar15,param_2);
    local_60[0].DataPtr = pFVar7->EntityIDs;
    local_60[0].ArrayNum = (int)pFVar7->Size;
    pFVar14 = TArrayView<UE::MovieScene::FMovieSceneEntityID_const_,int>::operator[]
                        (local_60,param_2);
    FEntityLocation::Set
              ((FEntityLocation *)
               (*(longlong *)&this->EntityLocations + (ulonglong)pFVar14->Value * 8),param_1,param_2
              );
  }
  if (((uVar15 & 0xffff0000) != 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidUint16(EntityIndex)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                          ,0x8e,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar7->EntityIDs[(longlong)(int)(uint)uVar4 + -1].Value = 0xffff;
  puVar2 = &pFVar7->Size;
  *puVar2 = *puVar2 - 1;
  if (*puVar2 == 0) {
    DestroyAllocation(this,pFVar7,true);
    TSparseArray<UE::MovieScene::FComponentMask,FDefaultSparseArrayAllocator>::RemoveAt
              (&this->EntityAllocationMasks,param_1,1);
    TSparseArrayBase<8,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
              ((TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *)&this->EntityAllocations,
               param_1,1);
    if (((param_1 < 0) || ((this->AllocationsWithCapacity).NumBits <= param_1)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FVar17 = (this->AllocationsWithCapacity).AllocatorInstance.SecondaryData;
    if (FVar17 == (ForElementType<unsigned_int>)0x0) {
      FVar17 = (ForElementType<unsigned_int>)&this->AllocationsWithCapacity;
    }
    puVar3 = (uint *)((longlong)FVar17 +
                     (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar3 = *puVar3 & ~(1 << ((byte)param_1 & 0x1f));
  }
  else if (uVar4 == uVar5) {
    if (((param_1 < 0) || ((this->AllocationsWithCapacity).NumBits <= param_1)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FVar17 = (this->AllocationsWithCapacity).AllocatorInstance.SecondaryData;
    if (FVar17 == (ForElementType<unsigned_int>)0x0) {
      FVar17 = (ForElementType<unsigned_int>)&this->AllocationsWithCapacity;
    }
    puVar3 = (uint *)((longlong)FVar17 +
                     (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar3 = *puVar3 | 1 << ((byte)param_1 & 0x1f);
  }
  this->StructureMutationSystemSerialNumber = this->SystemSerialNumber;
  this->bAccumulatedMaskStale = true;
  return;
}

// ReplaceEntityID @ 1461508a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::ReplaceEntityID
          (FEntityManager *this,FMovieSceneEntityID *param_1,FMovieSceneEntityID param_2)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  int iVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FComponentMask *pFVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint uVar14;
  FComponentMask *pFVar15;
  ushort uStack_66;
  FFreeEntityOperation local_60;
  
  uVar2 = param_1->Value;
  uVar14 = (uint)uVar2;
  if (param_2.Value == 0xffff) {
    if (uVar2 == 0xffff) goto LAB_146150b99;
    if ((int)uVar14 < *(int *)&(this->EntityLocations).field_0x28) {
      if ((*(int *)&(this->EntityLocations).field_0x28 <= (int)uVar14) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      puVar4 = *(undefined1 **)&(this->EntityLocations).field_0x20;
      puVar13 = &(this->EntityLocations).field_0x10;
      if (puVar4 != (undefined1 *)0x0) {
        puVar13 = puVar4;
      }
      if ((*(uint *)(puVar13 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
      goto LAB_14615092d;
    }
    else {
LAB_14615092d:
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("EntityLocations.IsValidIndex(EntityID.AsIndex())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                         ,0x27e,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    CheckCanChangeStructure(this);
    local_60.AllocationsToDestroy.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.AllocationsToDestroy.ArrayNum = 0;
    local_60.AllocationsToDestroy.ArrayMax = 0;
    local_60.LooseEntitiesToDestroy.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_60.LooseEntitiesToDestroy.ArrayNum = 0;
    local_60.LooseEntitiesToDestroy.ArrayMax = 0;
    local_60.EntityManager = this;
    iVar9 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x202,&local_60.LooseEntitiesToDestroy.AllocatorInstance,
                       &local_60.LooseEntitiesToDestroy.ArrayMax);
    local_60.LooseEntitiesToDestroy.ArrayNum = iVar9 + 1;
    *(ushort *)(local_60.LooseEntitiesToDestroy.AllocatorInstance.Data + (longlong)iVar9 * 2) =
         uVar2;
    FreeEntities(this,&local_60,
                 (TSet<UE::MovieScene::FMovieSceneEntityID,DefaultKeyFuncs<UE::MovieScene::FMovieSceneEntityID,0>,FDefaultSetAllocator>
                  *)0x0);
    if (local_60.LooseEntitiesToDestroy.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.LooseEntitiesToDestroy.AllocatorInstance.Data);
    }
    if (local_60.AllocationsToDestroy.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60.AllocationsToDestroy.AllocatorInstance.Data);
    }
    param_1->Value = 0xffff;
    goto LAB_146150b99;
  }
  if (uVar2 == 0xffff) {
    param_1->Value = (ushort)param_2;
    goto LAB_146150b99;
  }
  if ((int)uVar14 < *(int *)&(this->EntityLocations).field_0x28) {
    puVar4 = *(undefined1 **)&(this->EntityLocations).field_0x20;
    puVar13 = &(this->EntityLocations).field_0x10;
    if (puVar4 != (undefined1 *)0x0) {
      puVar13 = puVar4;
    }
    if ((*(uint *)(puVar13 + (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0)
    goto LAB_146150a1b;
  }
  else {
LAB_146150a1b:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("EntityLocations.IsValidIndex(InOutEntity.AsIndex())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                       ,0x3ae,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uVar12 = 0;
  pFVar15 = &this->ComponentRegistry->PreservationMask;
  iVar9 = (this->ComponentRegistry->PreservationMask).Bits.NumBits;
  uVar14 = iVar9 + 0x1f;
  pFVar11 = pFVar15;
  if (uVar14 >> 5 != 0) {
LAB_146150a63:
    if (*(int *)(pFVar11->Bits).AllocatorInstance.InlineData[0].Pad == 0) goto code_r0x000146150a68;
    pTVar1 = (pFVar15->Bits).AllocatorInstance.InlineData + uVar12;
    iVar6 = 0;
    bVar8 = *(int *)pTVar1->Pad != 0;
    if (bVar8) {
      for (; (*(uint *)pTVar1->Pad >> iVar6 & 1) == 0; iVar6 = iVar6 + 1) {
      }
    }
    iVar10 = 0x20;
    if (bVar8) {
      iVar10 = iVar6;
    }
    iVar10 = iVar10 + uVar12 * 0x20;
    if ((iVar10 < iVar9) && (iVar10 != -1)) {
      CombineComponents(this,param_2,(FMovieSceneEntityID)param_1->Value,pFVar15);
    }
  }
LAB_146150aa9:
  lVar5 = *(longlong *)&this->EntityLocations;
  uVar2 = param_1->Value;
  uVar14 = *(uint *)(lVar5 + (ulonglong)param_2.Value * 8);
  uVar3 = *(undefined2 *)(lVar5 + 4 + (ulonglong)param_2.Value * 8);
  uVar12 = *(uint *)(lVar5 + (ulonglong)uVar2 * 8);
  if ((short)uVar14 != -1) {
    uStack_66 = (ushort)(uVar14 >> 0x10);
    lVar5 = *(longlong *)(*(longlong *)&this->EntityAllocations + (ulonglong)(uVar14 & 0xffff) * 8);
    if (((*(ushort *)(lVar5 + 0xe) <= uStack_66) || (uVar2 == 0xffff)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidUint16(InEntityOffset) && InEntityOffset < Allocation->Size && EntityID"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                           ,0x87,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(ushort *)(*(longlong *)(lVar5 + 0x18) + (ulonglong)uStack_66 * 2) = uVar2;
  }
  uVar2 = param_1->Value;
  lVar5 = *(longlong *)&this->EntityLocations;
  *(uint *)(lVar5 + (ulonglong)uVar2 * 8) = uVar14;
  *(undefined2 *)(lVar5 + 4 + (ulonglong)uVar2 * 8) = uVar3;
  if ((short)uVar12 != -1) {
    RemoveEntityFromAllocation(this,uVar12 & 0xffff,uVar12 >> 0x10);
  }
  TSparseArray<UE::MovieScene::FEntityManager::FEntityLocation,FDefaultSparseArrayAllocator>::
  RemoveAt(&this->EntityLocations,(uint)param_2.Value,1);
LAB_146150b99:
  this->StructureMutationSystemSerialNumber = this->SystemSerialNumber;
  this->bAccumulatedMaskStale = true;
  return;
code_r0x000146150a68:
  uVar12 = uVar12 + 1;
  pFVar11 = (FComponentMask *)((pFVar11->Bits).AllocatorInstance.InlineData + 1);
  if ((int)(uVar14 >> 5) <= (int)uVar12) goto LAB_146150aa9;
  goto LAB_146150a63;
}

// ReserveAllocation @ 1461510a0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UE::MovieScene::FEntityManager::ReserveAllocation(FEntityManager *this,int param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  
  CheckCanChangeStructure(this);
  lVar1 = *(longlong *)(*(longlong *)&this->EntityAllocations + (longlong)param_1 * 8);
  iVar2 = (uint)*(ushort *)(lVar1 + 0x12) - (uint)*(ushort *)(lVar1 + 0xe);
  if (iVar2 < param_2) {
    param_2 = iVar2;
  }
  if ((int)(uint)*(ushort *)(lVar1 + 0x10) < (int)(param_2 + (uint)*(ushort *)(lVar1 + 0xe))) {
    GrowAllocation(this,param_1,param_2);
  }
  return param_2;
}

// TouchEntity @ 146158860

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FEntityManager::TouchEntity(FEntityManager *this,FMovieSceneEntityID param_1)

{
  uint uVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar1 = *(uint *)(*(longlong *)&this->EntityLocations + (ulonglong)param_1.Value * 8);
  if ((short)uVar1 != -1) {
    lVar7 = *(longlong *)(*(longlong *)&this->EntityAllocations + (ulonglong)(uVar1 & 0xffff) * 8);
    if ((lVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Allocation",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneEntityManager.cpp"
                           ,0x777,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar5 = *(longlong *)(lVar7 + 0x28);
    uVar2 = this->SystemSerialNumber;
    lVar7 = (ulonglong)*(ushort *)(lVar7 + 0xc) * 0x38 + lVar5;
    for (; lVar5 != lVar7; lVar5 = lVar5 + 0x38) {
      if (*(char *)(lVar5 + 0x34) != '\0') {
        uVar6 = uVar2;
        if (uVar2 < *(ulonglong *)(lVar5 + 0x28)) {
          uVar6 = *(ulonglong *)(lVar5 + 0x28);
        }
        *(ulonglong *)(lVar5 + 0x28) = uVar6;
      }
    }
  }
  return;
}

// UpdateThreadingModel @ 146160d30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::MovieScene::FEntityManager::UpdateThreadingModel(FEntityManager *this)

{
  bool bVar1;
  
  bVar1 = FGenericPlatformProcess::SupportsMultithreading();
  if ((bVar1) &&
     ((GThreadedEvaluationAllocationThreshold <=
       *(int *)&(this->EntityAllocations).field_0x8 - *(int *)&(this->EntityAllocations).field_0x34
      || (GThreadedEvaluationEntityThreshold <=
          *(int *)&(this->EntityLocations).field_0x8 - *(int *)&(this->EntityLocations).field_0x34))
     )) {
    this->ThreadingModel = TaskGraph;
    return;
  }
  this->ThreadingModel = NoThreading;
  return;
}

// WriteComponent<double> @ 14617dbd0

/* WARNING: Enum "Type": Some values do not have unique names */

TComponentLock<UE::MovieScene::TWriteOptional<double>_> * __thiscall
UE::MovieScene::FEntityManager::WriteComponent<double>
          (FEntityManager *this,
          TComponentLock<UE::MovieScene::TWriteOptional<double>_> *__return_storage_ptr__,
          FMovieSceneEntityID param_1,TComponentTypeID<double> param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  ulong64 uVar4;
  code *pcVar5;
  bool bVar6;
  EEntityThreadingModel EVar7;
  TComponentLock<UE::MovieScene::TWriteOptional<double>_> *pTVar8;
  FEntityAllocationWriteContext *pFVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  FEntityAllocationWriteContext local_30;
  
  if ((param_1.Value == 0xffff) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                         ,0x1e4,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar8 = (TComponentLock<UE::MovieScene::TWriteOptional<double>_> *)(*pcVar5)();
    return pTVar8;
  }
  if ((param_2 != (TComponentTypeID<double>)0xffff) &&
     (uVar3 = *(uint *)(*(longlong *)&this->EntityLocations + (ulonglong)param_1.Value * 8),
     (short)uVar3 != -1)) {
    lVar11 = (ulonglong)(uVar3 & 0xffff) * 0x38 + *(longlong *)&this->EntityAllocationMasks;
    if (((int)(uint)(ushort)param_2 < *(int *)(lVar11 + 0x30)) &&
       ((*(uint *)(lVar11 + (ulonglong)((ushort)param_2 >> 5) * 4) >> ((ushort)param_2 & 0x1f) & 1)
        != 0)) {
      lVar11 = *(longlong *)
                (*(longlong *)&this->EntityAllocations + (ulonglong)(uVar3 & 0xffff) * 8);
      EVar7 = GetThreadingModel(this);
      lVar12 = *(longlong *)(lVar11 + 0x28);
      lVar11 = (ulonglong)*(ushort *)(lVar11 + 0xc) * 0x38 + lVar12;
      while( true ) {
        if (lVar12 == lVar11) {
          *(undefined8 *)&__return_storage_ptr__->field_0x10 = 1;
          *(undefined8 *)__return_storage_ptr__ = 0;
          *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
          *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
          return __return_storage_ptr__;
        }
        if (*(TComponentTypeID<double> *)(lVar12 + 0x36) == param_2) break;
        lVar12 = lVar12 + 0x38;
      }
      pFVar9 = FEntityAllocationWriteContext::FEntityAllocationWriteContext(&local_30,this);
      uVar4 = pFVar9->SystemSerial;
      *(undefined8 *)__return_storage_ptr__ = 0;
      *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
      *(undefined4 *)&__return_storage_ptr__->field_0x10 = 1;
      *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
      if (EVar7 != NoThreading) {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar12 + 0x20));
      }
      LOCK();
      piVar1 = (int *)(lVar12 + 0x30);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if ((iVar2 != 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("PreviousAccessCount == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                             ,0x487,
                             L"Component header is still in use when it is being opened for write!")
         , bVar6)) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TComponentLock<UE::MovieScene::TWriteOptional<double>_> *)(*pcVar5)();
        return pTVar8;
      }
      lVar11 = *(longlong *)__return_storage_ptr__;
      if (lVar11 != 0) {
        uVar10 = *(ulonglong *)&__return_storage_ptr__->field_0x8;
        if (*(ulonglong *)&__return_storage_ptr__->field_0x8 < *(ulonglong *)(lVar11 + 0x28)) {
          uVar10 = *(ulonglong *)(lVar11 + 0x28);
        }
        *(ulonglong *)(lVar11 + 0x28) = uVar10;
        LOCK();
        *(int *)(*(longlong *)__return_storage_ptr__ + 0x30) =
             *(int *)(*(longlong *)__return_storage_ptr__ + 0x30) + -1;
        UNLOCK();
        if (*(int *)&__return_storage_ptr__->field_0x10 == 1) {
          ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)__return_storage_ptr__ + 0x20));
        }
      }
      *(longlong *)__return_storage_ptr__ = lVar12;
      *(ulong64 *)&__return_storage_ptr__->field_0x8 = uVar4;
      plVar13 = (longlong *)&__return_storage_ptr__->field_0x18;
      if (__return_storage_ptr__ == (TComponentLock<UE::MovieScene::TWriteOptional<double>_> *)0x0)
      {
        plVar13 = (longlong *)0x0;
      }
      *(uint *)&__return_storage_ptr__->field_0x10 = (uint)(EVar7 != NoThreading);
      *plVar13 = *(longlong *)(lVar12 + 0x18) + (longlong)(int)(uVar3 >> 0x10) * 8;
      return __return_storage_ptr__;
    }
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 1;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  return __return_storage_ptr__;
}

// ReadComponent<float> @ 146286f80

/* WARNING: Enum "Type": Some values do not have unique names */

TComponentLock<UE::MovieScene::TReadOptional<float>_> * __thiscall
UE::MovieScene::FEntityManager::ReadComponent<float>
          (FEntityManager *this,
          TComponentLock<UE::MovieScene::TReadOptional<float>_> *__return_storage_ptr__,
          FMovieSceneEntityID param_1,TComponentTypeID<float> param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  EEntityThreadingModel EVar5;
  TComponentLock<UE::MovieScene::TReadOptional<float>_> *pTVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uStack_26;
  
  if ((param_1.Value == 0xffff) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                         ,0x1a8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TReadOptional<float>_> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_2 != (TComponentTypeID<float>)0xffff) &&
     (uVar2 = *(uint *)(*(longlong *)&this->EntityLocations + (ulonglong)param_1.Value * 8),
     (short)uVar2 != -1)) {
    lVar9 = (ulonglong)(uVar2 & 0xffff) * 0x38 + *(longlong *)&this->EntityAllocationMasks;
    if (((int)(uint)(ushort)param_2 < *(int *)(lVar9 + 0x30)) &&
       ((*(uint *)(lVar9 + (ulonglong)((ushort)param_2 >> 5) * 4) >> ((ushort)param_2 & 0x1f) & 1)
        != 0)) {
      uStack_26 = (ushort)(uVar2 >> 0x10);
      lVar9 = *(longlong *)(*(longlong *)&this->EntityAllocations + (ulonglong)(uVar2 & 0xffff) * 8)
      ;
      EVar5 = GetThreadingModel(this);
      lVar8 = *(longlong *)(lVar9 + 0x28);
      lVar9 = (ulonglong)*(ushort *)(lVar9 + 0xc) * 0x38 + lVar8;
      while( true ) {
        if (lVar8 == lVar9) {
          *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
          *(undefined8 *)__return_storage_ptr__ = 0;
          *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
          return __return_storage_ptr__;
        }
        if (*(TComponentTypeID<float> *)(lVar8 + 0x36) == param_2) break;
        lVar8 = lVar8 + 0x38;
      }
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      *(undefined8 *)__return_storage_ptr__ = 0;
      if (EVar5 != NoThreading) {
        AcquireSRWLockShared((PSRWLOCK)(lVar8 + 0x20));
      }
      LOCK();
      *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + 1;
      UNLOCK();
      if (*(longlong *)__return_storage_ptr__ != 0) {
        LOCK();
        piVar1 = (int *)(*(longlong *)__return_storage_ptr__ + 0x30);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        if (*(int *)&__return_storage_ptr__->field_0x8 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)__return_storage_ptr__ + 0x20));
        }
      }
      *(longlong *)__return_storage_ptr__ = lVar8;
      *(uint *)&__return_storage_ptr__->field_0x8 = (uint)(EVar5 != NoThreading);
      plVar7 = (longlong *)&__return_storage_ptr__->field_0x10;
      if (__return_storage_ptr__ == (TComponentLock<UE::MovieScene::TReadOptional<float>_> *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      *plVar7 = *(longlong *)(lVar8 + 0x18) + (ulonglong)uStack_26 * 4;
      return __return_storage_ptr__;
    }
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  return __return_storage_ptr__;
}

// ReadComponent<double> @ 146287100

/* WARNING: Enum "Type": Some values do not have unique names */

TComponentLock<UE::MovieScene::TReadOptional<double>_> * __thiscall
UE::MovieScene::FEntityManager::ReadComponent<double>
          (FEntityManager *this,
          TComponentLock<UE::MovieScene::TReadOptional<double>_> *__return_storage_ptr__,
          FMovieSceneEntityID param_1,TComponentTypeID<double> param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  EEntityThreadingModel EVar5;
  TComponentLock<UE::MovieScene::TReadOptional<double>_> *pTVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uStack_26;
  
  if ((param_1.Value == 0xffff) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                         ,0x1a8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TReadOptional<double>_> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_2 != (TComponentTypeID<double>)0xffff) &&
     (uVar2 = *(uint *)(*(longlong *)&this->EntityLocations + (ulonglong)param_1.Value * 8),
     (short)uVar2 != -1)) {
    lVar9 = (ulonglong)(uVar2 & 0xffff) * 0x38 + *(longlong *)&this->EntityAllocationMasks;
    if (((int)(uint)(ushort)param_2 < *(int *)(lVar9 + 0x30)) &&
       ((*(uint *)(lVar9 + (ulonglong)((ushort)param_2 >> 5) * 4) >> ((ushort)param_2 & 0x1f) & 1)
        != 0)) {
      uStack_26 = (ushort)(uVar2 >> 0x10);
      lVar9 = *(longlong *)(*(longlong *)&this->EntityAllocations + (ulonglong)(uVar2 & 0xffff) * 8)
      ;
      EVar5 = GetThreadingModel(this);
      lVar8 = *(longlong *)(lVar9 + 0x28);
      lVar9 = (ulonglong)*(ushort *)(lVar9 + 0xc) * 0x38 + lVar8;
      while( true ) {
        if (lVar8 == lVar9) {
          *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
          *(undefined8 *)__return_storage_ptr__ = 0;
          *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
          return __return_storage_ptr__;
        }
        if (*(TComponentTypeID<double> *)(lVar8 + 0x36) == param_2) break;
        lVar8 = lVar8 + 0x38;
      }
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      *(undefined8 *)__return_storage_ptr__ = 0;
      if (EVar5 != NoThreading) {
        AcquireSRWLockShared((PSRWLOCK)(lVar8 + 0x20));
      }
      LOCK();
      *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + 1;
      UNLOCK();
      if (*(longlong *)__return_storage_ptr__ != 0) {
        LOCK();
        piVar1 = (int *)(*(longlong *)__return_storage_ptr__ + 0x30);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        if (*(int *)&__return_storage_ptr__->field_0x8 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)__return_storage_ptr__ + 0x20));
        }
      }
      *(longlong *)__return_storage_ptr__ = lVar8;
      *(uint *)&__return_storage_ptr__->field_0x8 = (uint)(EVar5 != NoThreading);
      plVar7 = (longlong *)&__return_storage_ptr__->field_0x10;
      if (__return_storage_ptr__ == (TComponentLock<UE::MovieScene::TReadOptional<double>_> *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      *plVar7 = *(longlong *)(lVar8 + 0x18) + (ulonglong)uStack_26 * 8;
      return __return_storage_ptr__;
    }
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  return __return_storage_ptr__;
}

// ReadComponent<FString> @ 146287280

/* WARNING: Enum "Type": Some values do not have unique names */

TComponentLock<UE::MovieScene::TReadOptional<FString>_> * __thiscall
UE::MovieScene::FEntityManager::ReadComponent<FString>
          (FEntityManager *this,
          TComponentLock<UE::MovieScene::TReadOptional<FString>_> *__return_storage_ptr__,
          FMovieSceneEntityID param_1,TComponentTypeID<FString> param_2)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  EEntityThreadingModel EVar5;
  TComponentLock<UE::MovieScene::TReadOptional<FString>_> *pTVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  ushort uStack_26;
  
  if ((param_1.Value == 0xffff) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Entity",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntityManager.h"
                         ,0x1a8,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TComponentLock<UE::MovieScene::TReadOptional<FString>_> *)(*pcVar3)();
    return pTVar6;
  }
  if ((param_2 != (TComponentTypeID<FString>)0xffff) &&
     (uVar2 = *(uint *)(*(longlong *)&this->EntityLocations + (ulonglong)param_1.Value * 8),
     (short)uVar2 != -1)) {
    lVar9 = (ulonglong)(uVar2 & 0xffff) * 0x38 + *(longlong *)&this->EntityAllocationMasks;
    if (((int)(uint)(ushort)param_2 < *(int *)(lVar9 + 0x30)) &&
       ((*(uint *)(lVar9 + (ulonglong)((ushort)param_2 >> 5) * 4) >> ((ushort)param_2 & 0x1f) & 1)
        != 0)) {
      uStack_26 = (ushort)(uVar2 >> 0x10);
      lVar9 = *(longlong *)(*(longlong *)&this->EntityAllocations + (ulonglong)(uVar2 & 0xffff) * 8)
      ;
      EVar5 = GetThreadingModel(this);
      lVar8 = *(longlong *)(lVar9 + 0x28);
      lVar9 = (ulonglong)*(ushort *)(lVar9 + 0xc) * 0x38 + lVar8;
      while( true ) {
        if (lVar8 == lVar9) {
          *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
          *(undefined8 *)__return_storage_ptr__ = 0;
          *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
          return __return_storage_ptr__;
        }
        if (*(TComponentTypeID<FString> *)(lVar8 + 0x36) == param_2) break;
        lVar8 = lVar8 + 0x38;
      }
      *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
      *(undefined8 *)__return_storage_ptr__ = 0;
      if (EVar5 != NoThreading) {
        AcquireSRWLockShared((PSRWLOCK)(lVar8 + 0x20));
      }
      LOCK();
      *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + 1;
      UNLOCK();
      if (*(longlong *)__return_storage_ptr__ != 0) {
        LOCK();
        piVar1 = (int *)(*(longlong *)__return_storage_ptr__ + 0x30);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        if (*(int *)&__return_storage_ptr__->field_0x8 == 1) {
          ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)__return_storage_ptr__ + 0x20));
        }
      }
      *(longlong *)__return_storage_ptr__ = lVar8;
      *(uint *)&__return_storage_ptr__->field_0x8 = (uint)(EVar5 != NoThreading);
      plVar7 = (longlong *)&__return_storage_ptr__->field_0x10;
      if (__return_storage_ptr__ == (TComponentLock<UE::MovieScene::TReadOptional<FString>_> *)0x0)
      {
        plVar7 = (longlong *)0x0;
      }
      *plVar7 = (ulonglong)uStack_26 * 0x10 + *(longlong *)(lVar8 + 0x18);
      return __return_storage_ptr__;
    }
  }
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  return __return_storage_ptr__;
}

// operator() @ 1504e4ac0

bool __thiscall
`UE::MovieScene::FEntityManager::FreeEntities'::__l13::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<9070122617276465876>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<9070122617276465876>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

