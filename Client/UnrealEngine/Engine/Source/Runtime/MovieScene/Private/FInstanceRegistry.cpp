// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 12

// FInstanceRegistry @ 1461190b0

/* WARNING: Enum "Type": Some values do not have unique names */

FInstanceRegistry * __thiscall
UE::MovieScene::FInstanceRegistry::FInstanceRegistry
          (FInstanceRegistry *this,UMovieSceneEntitySystemLinker *param_1)

{
  this->Linker = param_1;
  *(undefined8 *)&this->Instances = 0;
  *(undefined8 *)&(this->Instances).field_0x8 = 0;
  *(undefined8 *)&(this->Instances).field_0x20 = 0;
  *(undefined4 *)&(this->Instances).field_0x28 = 0;
  *(undefined4 *)&(this->Instances).field_0x2c = 0x80;
  *(undefined4 *)&(this->Instances).field_0x34 = 0;
  *(undefined4 *)&(this->Instances).field_0x30 = 0xffffffff;
  this->InstanceSerialNumber = 0;
  *(undefined8 *)&(this->InvalidatedObjectBindings).Elements = 0;
  *(undefined8 *)&(this->InvalidatedObjectBindings).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->InvalidatedObjectBindings).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->InvalidatedObjectBindings).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->InvalidatedObjectBindings).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->InvalidatedObjectBindings).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->InvalidatedObjectBindings).Elements.field_0x30 = 0xffffffff;
  (this->InvalidatedObjectBindings).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->InvalidatedObjectBindings).HashSize = 0;
  return this;
}

// ~FInstanceRegistry @ 14611dad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::MovieScene::FInstanceRegistry::~FInstanceRegistry(FInstanceRegistry *this)

{
  TSparseArray<UE::MovieScene::FSequenceInstance,FDefaultSparseArrayAllocator> *this_00;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ForElementType<FSetElementId> FVar6;
  longlong lVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_30;
  
  uStack_54 = 1;
  this_00 = &this->Instances;
  local_58 = 0;
  iVar2 = *(int *)&(this->Instances).field_0x28;
  local_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Instances).field_0x10;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar8 = *(uint **)&(this->Instances).field_0x20;
    if (puVar8 == (uint *)0x0) {
      puVar8 = (uint *)local_30.Array;
    }
    uVar3 = *puVar8;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      iStack_40 = iStack_40 + 0x20;
      lVar7 = (longlong)local_58;
      local_58 = local_58 + 1;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < local_58) goto LAB_14611db8a;
      uVar3 = puVar8[lVar7 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_54 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iStack_44 = (int)lVar7 + -1 + iStack_40;
    if (iVar2 < iStack_44) {
LAB_14611db8a:
      iStack_44 = iVar2;
    }
  }
  local_30._padding_ = CONCAT44(uStack_54,local_58);
  local_30.UnvisitedBitMask = 0xffffffff;
  local_30.CurrentBitIndex = iStack_44;
  local_30._28_4_ = uStack_3c;
  local_30.BaseBitIndex = iStack_40;
  if (iStack_44 < *(int *)&(this->Instances).field_0x28) {
    do {
      uVar4 = *(undefined4 *)
               ((longlong)local_30.CurrentBitIndex * 0x140 + 0x132 + *(longlong *)this_00);
      uVar5 = *(undefined4 *)
               ((longlong)local_30.CurrentBitIndex * 0x140 + 0x13a + *(longlong *)this_00);
      if (((short)uVar5 != (short)uVar4) ||
         ((short)((uint)uVar5 >> 0x10) != (short)((uint)uVar4 >> 0x10))) {
        TSparseArray<UE::MovieScene::FSequenceInstance,FDefaultSparseArrayAllocator>::RemoveAt
                  (this_00,local_30.CurrentBitIndex,1);
      }
      local_30.UnvisitedBitMask = local_30.UnvisitedBitMask & ~local_30._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (local_30.CurrentBitIndex < (local_30.Array)->NumBits);
  }
  (this->InvalidatedObjectBindings).HashSize = 0;
  FVar6 = (this->InvalidatedObjectBindings).Hash.SecondaryData;
  if (FVar6 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,UE::MovieScene::FInstanceHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,UE::MovieScene::FInstanceHandle>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->InvalidatedObjectBindings).Elements);
  TSparseArray<UE::MovieScene::FSequenceInstance,FDefaultSparseArrayAllocator>::
  ~TSparseArray<UE::MovieScene::FSequenceInstance,FDefaultSparseArrayAllocator>(this_00);
  return;
}

// AllocateRootInstance @ 146124a40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FRootInstanceHandle __thiscall
UE::MovieScene::FInstanceRegistry::AllocateRootInstance
          (FInstanceRegistry *this,UMovieSceneSequence *param_1,UObject *param_2,
          UMovieSceneCompiledDataManager *param_3)

{
  int *piVar1;
  FString *pFVar2;
  int iVar3;
  ushort uVar4;
  TObjectPtr<UMovieSceneEntitySystemLinker>_u_0 TVar5;
  longlong *plVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  FRootInstanceHandle FVar10;
  TReferenceControllerBase<1> *pTVar11;
  UObject *this_00;
  FString *pFVar12;
  TReferenceControllerBase<1> *pTVar13;
  TReferenceControllerBase<1> *pTVar14;
  UMovieSceneCompiledDataManager *in_stack_00000028;
  FSparseArrayAllocationInfo local_68;
  FString local_58;
  FSharedPlaybackStateCreateParams local_48;
  
  if (0xfffe < *(int *)&(this->Instances).field_0x8 - *(int *)&(this->Instances).field_0x34) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instances.Num() < 65535",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneInstanceRegistry.cpp"
                       ,0x4a,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      FVar10 = (FRootInstanceHandle)(*pcVar8)();
      return FVar10;
    }
  }
  uVar4 = this->InstanceSerialNumber;
  this->InstanceSerialNumber = uVar4 + 1;
  TSparseArrayBase<320,8,FDefaultSparseArrayAllocator>::AddUninitialized
            ((TSparseArrayBase<320,8,FDefaultSparseArrayAllocator> *)&this->Instances,&local_68);
  *(undefined2 *)&param_1->_padding_ = (undefined2)local_68.Index;
  *(ushort *)((longlong)&param_1->_padding_ + 2) = uVar4;
  if (in_stack_00000028 == (UMovieSceneCompiledDataManager *)0x0) {
    in_stack_00000028 = UMovieSceneCompiledDataManager::GetPrecompiledData();
  }
  local_48.RootInstanceHandle = *(FRootInstanceHandle *)&param_1->_padding_;
  TVar5.ObjectPtr.field0_0x0 = (FObjectPtr)this->Linker;
  local_48.PlaybackContext = (UObject *)param_3;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (TVar5.DebugPtr != (UMovieSceneEntitySystemLinker *)0x0)) {
    GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
  }
  local_48.Linker.field0_0x0 =
       (TObjectPtr<UMovieSceneEntitySystemLinker>_u_0)
       (TObjectPtr<UMovieSceneEntitySystemLinker>_u_0)TVar5.ObjectPtr.field0_0x0;
  local_48.CompiledDataManager = in_stack_00000028;
  pTVar11 = ::operator_new(0x88);
  pTVar14 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    pTVar13 = (TReferenceControllerBase<1> *)&DAT_00000010;
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFSharedPlaybackState_MovieScene_UE___00_SharedPointerInternals__6B_
    ;
    FSharedPlaybackState::FSharedPlaybackState
              ((FSharedPlaybackState *)(pTVar11 + 1),(UMovieSceneSequence *)param_2,&local_48);
    pTVar13 = pTVar11 + 1;
    pTVar14 = pTVar11;
    if (pTVar13 == (TReferenceControllerBase<1> *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        FVar10 = (FRootInstanceHandle)(*pcVar8)();
        return FVar10;
      }
      goto LAB_146124beb;
    }
  }
  if (((pTVar13->_padding_ == 0) || (*(longlong *)&pTVar13->SharedReferenceCount == 0)) ||
     (*(int *)(*(longlong *)&pTVar13->SharedReferenceCount + 8) < 1)) {
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar13->_padding_ = (longlong)pTVar13;
    if (pTVar14 != *(TReferenceControllerBase<1> **)&pTVar13->SharedReferenceCount) {
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar14->WeakReferenceCount = (atomic<int>)((int)pTVar14->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar6 = *(longlong **)&pTVar13->SharedReferenceCount;
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
      *(TReferenceControllerBase<1> **)&pTVar13->SharedReferenceCount = pTVar14;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  }
LAB_146124beb:
  if (local_68.Pointer != (undefined8 *)0x0) {
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(undefined8 *)local_68.Pointer = 0;
    *(undefined8 *)((longlong)local_68.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_68.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_68.Pointer + 0x18) = 0;
    *(undefined8 *)((longlong)local_68.Pointer + 0x30) = 0;
    *(undefined4 *)((longlong)local_68.Pointer + 0x38) = 0;
    *(undefined4 *)((longlong)local_68.Pointer + 0x3c) = 0x80;
    *(undefined4 *)((longlong)local_68.Pointer + 0x40) = 0xffffffff;
    *(undefined4 *)((longlong)local_68.Pointer + 0x44) = 0;
    *(undefined8 *)((longlong)local_68.Pointer + 0x50) = 0;
    *(undefined4 *)((longlong)local_68.Pointer + 0x58) = 0;
    FMovieSceneContext::FMovieSceneContext
              ((FMovieSceneContext *)((longlong)local_68.Pointer + 0x68));
    *(undefined8 *)((longlong)local_68.Pointer + 0xf8) = 0;
    pFVar2 = (FString *)((longlong)local_68.Pointer + 0xe8);
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(undefined8 *)((longlong)local_68.Pointer + 0xf0) = 0;
    *(undefined8 *)((longlong)local_68.Pointer + 0x100) = 0;
    *(undefined8 *)((longlong)local_68.Pointer + 0x108) = 0;
    *(undefined8 *)((longlong)local_68.Pointer + 0x110) = 0;
    *(TReferenceControllerBase<1> **)((longlong)local_68.Pointer + 0x118) = pTVar13;
    *(TReferenceControllerBase<1> **)((longlong)local_68.Pointer + 0x120) = pTVar14;
    if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(undefined8 *)((longlong)local_68.Pointer + 0x128) = 0;
    *(int *)((longlong)local_68.Pointer + 0x132) = (int)pTVar13[3]._padding_;
    *(undefined4 *)((longlong)local_68.Pointer + 0x136) = 0xffff;
    *(int *)((longlong)local_68.Pointer + 0x13a) = (int)pTVar13[3]._padding_;
    *(undefined1 *)((longlong)local_68.Pointer + 0x130) = 0;
    *(byte *)((longlong)local_68.Pointer + 0x13e) =
         *(byte *)((longlong)local_68.Pointer + 0x13e) & 0xfa | 2;
    this_00 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pTVar13 + 1));
    pFVar12 = UObjectBaseUtility::GetPathName
                        ((UObjectBaseUtility *)this_00,&local_58,(UObject *)0x0);
    if (pFVar2 != pFVar12) {
      pFVar7 = (pFVar2->Data).AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (pFVar2->Data).AllocatorInstance.Data = (pFVar12->Data).AllocatorInstance.Data;
      (pFVar12->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)((longlong)local_68.Pointer + 0xf0) = (pFVar12->Data).ArrayNum;
      *(int *)((longlong)local_68.Pointer + 0xf4) = (pFVar12->Data).ArrayMax;
      (pFVar12->Data).ArrayNum = 0;
      (pFVar12->Data).ArrayMax = 0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  return SUB84(param_1,0);
}

// AllocateSubInstance @ 146124d50

/* WARNING: Enum "Type": Some values do not have unique names */

FInstanceHandle __thiscall
UE::MovieScene::FInstanceRegistry::AllocateSubInstance
          (FInstanceRegistry *this,FMovieSceneSequenceID param_1,FRootInstanceHandle param_2,
          FInstanceHandle param_3)

{
  ushort uVar1;
  FRootInstanceHandle FVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSharedPlaybackState *pFVar4;
  code *pcVar5;
  bool bVar6;
  FInstanceHandle FVar7;
  longlong lVar8;
  undefined4 in_register_00000014;
  FInstanceHandle *pFVar9;
  atomic<int> *paVar10;
  undefined1 local_res20 [8];
  undefined4 in_stack_00000028;
  FSparseArrayAllocationInfo local_58;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_48;
  
  pFVar9 = (FInstanceHandle *)CONCAT44(in_register_00000014,param_1.Value);
  if (((0xfffe < *(int *)&(this->Instances).field_0x8 - *(int *)&(this->Instances).field_0x34) ||
      (param_2 == (FRootInstanceHandle)0x0)) || ((short)in_stack_00000028 == -1)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instances.Num() < 65535 && SequenceID != MovieSceneSequenceID::Root && ParentInstanceHandle.IsValid()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneInstanceRegistry.cpp"
                       ,0x65,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      FVar7 = (FInstanceHandle)(*pcVar5)();
      return FVar7;
    }
  }
  uVar1 = this->InstanceSerialNumber;
  this->InstanceSerialNumber = uVar1 + 1;
  TSparseArrayBase<320,8,FDefaultSparseArrayAllocator>::AddUninitialized
            ((TSparseArrayBase<320,8,FDefaultSparseArrayAllocator> *)&this->Instances,&local_58);
  pFVar9->InstanceID = (ushort)local_58.Index;
  pFVar9->InstanceSerial = uVar1;
  lVar8 = ((ulonglong)(uint)param_3 & 0xffff) * 0x140;
  pTVar3 = *(TReferenceControllerBase<1> **)(lVar8 + 0x120 + *(longlong *)&this->Instances);
  pFVar4 = *(FSharedPlaybackState **)(lVar8 + 0x118 + *(longlong *)&this->Instances);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    paVar10 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar10 = &pTVar3->SharedReferenceCount;
    LOCK();
    *paVar10 = (atomic<int>)((int)*paVar10 + 1);
    UNLOCK();
  }
  if (local_58.Pointer != (undefined8 *)0x0) {
    FVar7 = *pFVar9;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar10 = (atomic<int>)((int)*paVar10 + 1);
      UNLOCK();
    }
    *(undefined8 *)local_58.Pointer = 0;
    *(undefined8 *)((longlong)local_58.Pointer + 8) = 0;
    *(undefined8 *)((longlong)local_58.Pointer + 0x10) = 0;
    *(undefined8 *)((longlong)local_58.Pointer + 0x18) = 0;
    *(undefined8 *)((longlong)local_58.Pointer + 0x30) = 0;
    *(undefined4 *)((longlong)local_58.Pointer + 0x38) = 0;
    *(undefined4 *)((longlong)local_58.Pointer + 0x3c) = 0x80;
    *(undefined4 *)((longlong)local_58.Pointer + 0x40) = 0xffffffff;
    *(undefined4 *)((longlong)local_58.Pointer + 0x44) = 0;
    *(undefined8 *)((longlong)local_58.Pointer + 0x50) = 0;
    *(undefined4 *)((longlong)local_58.Pointer + 0x58) = 0;
    FMovieSceneContext::FMovieSceneContext
              ((FMovieSceneContext *)((longlong)local_58.Pointer + 0x68));
    *(undefined8 *)((longlong)local_58.Pointer + 0xe8) = 0;
    *(undefined8 *)((longlong)local_58.Pointer + 0xf0) = 0;
    *(undefined8 *)((longlong)local_58.Pointer + 0xf8) = 0;
    *(undefined8 *)((longlong)local_58.Pointer + 0x100) = 0;
    *(undefined8 *)((longlong)local_58.Pointer + 0x108) = 0;
    *(undefined8 *)((longlong)local_58.Pointer + 0x110) = 0;
    *(FSharedPlaybackState **)((longlong)local_58.Pointer + 0x118) = pFVar4;
    *(TReferenceControllerBase<1> **)((longlong)local_58.Pointer + 0x120) = pTVar3;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar10 = (atomic<int>)((int)*paVar10 + 1);
      UNLOCK();
    }
    *(FInstanceHandle *)((longlong)local_58.Pointer + 0x132) = FVar7;
    *(FRootInstanceHandle *)((longlong)local_58.Pointer + 0x128) = param_2;
    *(undefined4 *)((longlong)local_58.Pointer + 300) = 0xffffffff;
    *(undefined4 *)((longlong)local_58.Pointer + 0x136) = in_stack_00000028;
    FVar2 = pFVar4->RootInstanceHandle;
    *(byte *)((longlong)local_58.Pointer + 0x13e) =
         *(byte *)((longlong)local_58.Pointer + 0x13e) & 0xf8;
    *(FRootInstanceHandle *)((longlong)local_58.Pointer + 0x13a) = FVar2;
    *(undefined1 *)((longlong)local_58.Pointer + 0x130) = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  bVar6 = IsInGameThread();
  if (!bVar6) {
    `UE::MovieScene::FSharedPlaybackState::GetCapabilities'::__l2::<lambda_1>::operator()
              (local_res20);
  }
  FVar7 = *pFVar9;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48.Object = pFVar4;
  local_48.SharedReferenceCount.ReferenceController = pTVar3;
  FPlaybackCapabilities::OnSubInstanceCreated(&pFVar4->Capabilities,&local_48,FVar7);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return (FInstanceHandle)param_1.Value;
}

// CleanupLinkerEntities @ 146126fe0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FInstanceRegistry::CleanupLinkerEntities
          (FInstanceRegistry *this,
          TSet<UE::MovieScene::FMovieSceneEntityID,DefaultKeyFuncs<UE::MovieScene::FMovieSceneEntityID,0>,FDefaultSetAllocator>
          *param_1)

{
  TSparseArray<UE::MovieScene::FSequenceInstance,FDefaultSparseArrayAllocator> *pTVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  TSparseArray<UE::MovieScene::FSequenceInstance,FDefaultSparseArrayAllocator> *pTVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res10 [8];
  int local_res18;
  TSparseArray<UE::MovieScene::FSequenceInstance,FDefaultSparseArrayAllocator> *local_res20;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  if (*(int *)&(param_1->Elements).field_0x8 != *(int *)&(param_1->Elements).field_0x34) {
    pTVar1 = &this->Instances;
    puVar2 = &(this->Instances).field_0x10;
    iVar4 = *(int *)&(this->Instances).field_0x28;
    local_88 = 0;
    uStack_84 = 1;
    iStack_74 = 0;
    iStack_70 = 0;
    if (iVar4 != 0) {
      puVar13 = *(uint **)&(this->Instances).field_0x20;
      if (puVar13 == (uint *)0x0) {
        puVar13 = (uint *)puVar2;
      }
      uVar11 = *puVar13;
      iStack_70 = 0;
      local_88 = 0;
      while (uVar11 == 0) {
        iStack_70 = iStack_70 + 0x20;
        lVar9 = (longlong)local_88;
        local_88 = local_88 + 1;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_1461270b7;
        uVar11 = puVar13[lVar9 + 1];
      }
      uStack_84 = -uVar11 & uVar11;
      uVar3 = (ulonglong)uStack_84 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      local_res18 = (int)lVar9;
      iStack_74 = local_res18 + -1 + iStack_70;
      if (iVar4 < iStack_74) {
LAB_1461270b7:
        iStack_74 = iVar4;
      }
    }
    uVar11 = *(uint *)&(this->Instances).field_0x28;
    local_40 = *(int *)&(this->Instances).field_0x8 - *(int *)&(this->Instances).field_0x34;
    local_60._padding_ = CONCAT44(uStack_84,local_88);
    iVar10 = (int)uVar11 >> 5;
    local_60.CurrentBitIndex = iStack_74;
    local_60.UnvisitedBitMask = 0xffffffff;
    local_60._28_4_ = uStack_6c;
    local_60.BaseBitIndex = iStack_70;
    uVar14 = uVar11 & 0xffffffe0;
    local_res20 = pTVar1;
    local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
    if ((((int)uVar11 < 0) || (iVar4 < (int)uVar11)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar7 = local_res20;
    uVar5 = *(uint *)&(this->Instances).field_0x28;
    if (uVar11 != uVar5) {
      puVar12 = *(undefined1 **)&(this->Instances).field_0x20;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = puVar2;
      }
      uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar10 * 4);
      while (uVar11 == 0) {
        lVar9 = (longlong)iVar10;
        uVar14 = uVar14 + 0x20;
        iVar10 = iVar10 + 1;
        uVar11 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10)
        goto LAB_1461271b0;
        uVar11 = *(uint *)(puVar12 + lVar9 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar9 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar11 = (int)lVar9 + -1 + uVar14;
      if ((int)uVar5 < (int)uVar11) {
        uVar11 = uVar5;
      }
    }
LAB_1461271b0:
    while( true ) {
      if (*(int *)&(this->Instances).field_0x8 - *(int *)&(this->Instances).field_0x34 != local_40)
      {
        `TSparseArray<UE::MovieScene::FSequenceInstance,FDefaultSparseArrayAllocator>::
        TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (((local_60.CurrentBitIndex == uVar11) &&
          (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) && (pTVar1 == pTVar7))
      break;
      FEntityLedger::CleanupLinkerEntities
                ((FEntityLedger *)((longlong)local_60.CurrentBitIndex * 0x140 + *(longlong *)pTVar1)
                 ,param_1);
      local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
    }
  }
  return;
}

// DestroyInstance @ 14612c200

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FInstanceRegistry::DestroyInstance(FInstanceRegistry *this,FInstanceHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 *puVar3;
  FSequenceInstance *this_00;
  undefined1 local_res8 [8];
  FInstanceHandle local_res10;
  
  local_res10 = param_1;
  if ((int)((uint)param_1 & 0xffff) < *(int *)&(this->Instances).field_0x28) {
    if ((*(int *)&(this->Instances).field_0x28 <= (int)((uint)param_1 & 0xffff)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    puVar3 = *(undefined1 **)&(this->Instances).field_0x20;
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &(this->Instances).field_0x10;
    }
    if (((*(uint *)(puVar3 + (ulonglong)(ushort)(param_1.InstanceID >> 5) * 4) >>
          ((uint)param_1 & 0x1f) & 1) != 0) &&
       (*(ushort *)
         ((ulonglong)((uint)param_1 & 0xffff) * 0x140 + 0x134 + *(longlong *)&this->Instances) ==
        local_res10.InstanceSerial)) goto LAB_14612c2a4;
  }
  bVar2 = `UE::MovieScene::FInstanceRegistry::DestroyInstance'::__l3::<lambda_1>::operator()
                    (local_res8);
  if (!bVar2) {
    return;
  }
LAB_14612c2a4:
  this_00 = (FSequenceInstance *)
            ((ulonglong)((uint)param_1 & 0xffff) * 0x140 + *(longlong *)&this->Instances);
  if (((GExitPurge == false) && (!this_00->bFinished)) && (5 < (byte)LogMovieSceneECS._0_1_)) {
    Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
  }
  FSequenceInstance::DestroyImmediately(this_00);
  TSparseArray<UE::MovieScene::FSequenceInstance,FDefaultSparseArrayAllocator>::RemoveAt
            (&this->Instances,(uint)param_1 & 0xffff,1);
  return;
}

// FindRelatedInstanceHandle @ 146131e80

/* WARNING: Enum "Type": Some values do not have unique names */

FInstanceHandle __thiscall
UE::MovieScene::FInstanceRegistry::FindRelatedInstanceHandle
          (FInstanceRegistry *this,FInstanceHandle param_1,FMovieSceneSequenceID param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined4 in_register_00000014;
  undefined4 *puVar4;
  longlong lVar5;
  int in_R9D;
  undefined1 local_res18 [16];
  
  puVar4 = (undefined4 *)CONCAT44(in_register_00000014,param_1);
  lVar5 = ((ulonglong)param_2.Value & 0xffff) * 0x140 + *(longlong *)&this->Instances;
  if (in_R9D == 0) {
    *puVar4 = *(undefined4 *)(lVar5 + 0x13a);
    return param_1;
  }
  uVar1 = *(uint *)(lVar5 + 0x13a);
  if (((short)uVar1 != (short)*(undefined4 *)(lVar5 + 0x132)) ||
     ((short)(uVar1 >> 0x10) != (short)((uint)*(undefined4 *)(lVar5 + 0x132) >> 0x10))) {
    lVar5 = (ulonglong)(uVar1 & 0xffff) * 0x140 + *(longlong *)&this->Instances;
  }
  plVar2 = *(longlong **)(lVar5 + 0x108);
  if (plVar2 != (longlong *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*plVar2 + 0x58))(plVar2,local_res18,in_R9D);
    *puVar4 = *puVar3;
    return param_1;
  }
  *puVar4 = 0xffff;
  return param_1;
}

// IsBindingInvalidated @ 146140b80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::FInstanceRegistry::IsBindingInvalidated
          (FInstanceRegistry *this,FGuid *param_1,FInstanceHandle param_2)

{
  int iVar1;
  ulong64 uVar2;
  undefined1 local_38 [20];
  undefined1 local_24 [28];
  
  local_24._0_4_ = param_1->A;
  local_24._4_4_ = param_1->B;
  local_24._8_4_ = param_1->C;
  local_24._12_4_ = param_1->D;
  local_24._16_4_ = param_2;
  uVar2 = CityHash64(local_24,0x10);
  iVar1 = TSet<TTuple<FGuid,UE::MovieScene::FInstanceHandle>,DefaultKeyFuncs<TTuple<FGuid,UE::MovieScene::FInstanceHandle>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TTuple<FGuid,UE::MovieScene::FInstanceHandle>_>
                    (&this->InvalidatedObjectBindings,
                     (uint)uVar2 * 0x40 + ((uint)(uVar2 >> 2) & 0x3fffffff) +
                     (local_24._16_4_ & 0xffff) + 0x9e3779b9 ^ (uint)uVar2,
                     (TTuple<FGuid,UE::MovieScene::FInstanceHandle> *)local_24);
  if (iVar1 == -1) {
    local_38._0_8_ = 0;
    local_38._8_8_ = 0;
    local_38._16_4_ = param_2;
    uVar2 = CityHash64(local_38,0x10);
    iVar1 = TSet<TTuple<FGuid,UE::MovieScene::FInstanceHandle>,DefaultKeyFuncs<TTuple<FGuid,UE::MovieScene::FInstanceHandle>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<TTuple<FGuid,UE::MovieScene::FInstanceHandle>_>
                      (&this->InvalidatedObjectBindings,
                       (local_38._16_4_ & 0xffff) + 0x9e3779b9 +
                       (uint)uVar2 * 0x40 + ((uint)(uVar2 >> 2) & 0x3fffffff) ^ (uint)uVar2,
                       (TTuple<FGuid,UE::MovieScene::FInstanceHandle> *)local_38);
    if (iVar1 == -1) {
      return false;
    }
  }
  return true;
}

// IsHandleValid @ 1461411b0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::MovieScene::FInstanceRegistry::IsHandleValid(FInstanceRegistry *this,FInstanceHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  ushort uStackX_12;
  
  if ((int)((uint)param_1 & 0xffff) < *(int *)&(this->Instances).field_0x28) {
    if (*(int *)&(this->Instances).field_0x28 <= (int)((uint)param_1 & 0xffff)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    puVar4 = *(undefined1 **)&(this->Instances).field_0x20;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->Instances).field_0x10;
    }
    if (((*(uint *)(puVar4 + (ulonglong)(ushort)(param_1.InstanceID >> 5) * 4) >>
          ((uint)param_1 & 0x1f) & 1) != 0) &&
       (uStackX_12 = param_1.InstanceSerial,
       *(ushort *)
        ((ulonglong)((uint)param_1 & 0xffff) * 0x140 + 0x134 + *(longlong *)&this->Instances) ==
       uStackX_12)) {
      return true;
    }
  }
  return false;
}

// PostInstantation @ 146149ad0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::MovieScene::FInstanceRegistry::PostInstantation(FInstanceRegistry *this)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  
  bVar3 = 1 < (this->InvalidatedObjectBindings).HashSize;
  if (!bVar3) {
    TSet<TTuple<FGuid,UE::MovieScene::FInstanceHandle>,DefaultKeyFuncs<TTuple<FGuid,UE::MovieScene::FInstanceHandle>,0>,FDefaultSetAllocator>
    ::UnhashElements(&this->InvalidatedObjectBindings);
  }
  puVar1 = &(this->InvalidatedObjectBindings).Elements.field_0xc;
  *(undefined4 *)&(this->InvalidatedObjectBindings).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x1c,4,0,(ForAnyElementType *)&this->InvalidatedObjectBindings,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->InvalidatedObjectBindings).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->InvalidatedObjectBindings).Elements.field_0x34 = 0;
  iVar2 = *(int *)&(this->InvalidatedObjectBindings).Elements.field_0x2c;
  *(undefined4 *)&(this->InvalidatedObjectBindings).Elements.field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->InvalidatedObjectBindings).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->InvalidatedObjectBindings).Elements.field_0x10,0);
  }
  if (bVar3) {
    (this->InvalidatedObjectBindings).HashSize = 1;
    TSet<TTuple<FGuid,UE::MovieScene::FInstanceHandle>,DefaultKeyFuncs<TTuple<FGuid,UE::MovieScene::FInstanceHandle>,0>,FDefaultSetAllocator>
    ::Rehash(&this->InvalidatedObjectBindings);
  }
  TSparseArrayBase<320,8,FDefaultSparseArrayAllocator>::Shrink
            ((TSparseArrayBase<320,8,FDefaultSparseArrayAllocator> *)&this->Instances);
  return;
}

// TagGarbage @ 146155e20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::MovieScene::FInstanceRegistry::TagGarbage(FInstanceRegistry *this)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint *puVar11;
  uint uVar12;
  undefined1 local_res10 [8];
  int local_res18;
  int local_88;
  uint uStack_84;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_60;
  int local_40;
  
  uStack_84 = 1;
  local_88 = 0;
  iVar3 = *(int *)&(this->Instances).field_0x28;
  puVar2 = &(this->Instances).field_0x10;
  iStack_74 = 0;
  iStack_70 = 0;
  if (iVar3 != 0) {
    puVar11 = *(uint **)&(this->Instances).field_0x20;
    if (puVar11 == (uint *)0x0) {
      puVar11 = (uint *)puVar2;
    }
    uVar9 = *puVar11;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar9 == 0) {
      iStack_70 = iStack_70 + 0x20;
      lVar7 = (longlong)local_88;
      local_88 = local_88 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < local_88) goto LAB_146155eda;
      uVar9 = puVar11[lVar7 + 1];
    }
    uStack_84 = -uVar9 & uVar9;
    uVar1 = (ulonglong)uStack_84 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res18 = (int)lVar7;
    iStack_74 = local_res18 + -1 + iStack_70;
    if (iVar3 < iStack_74) {
LAB_146155eda:
      iStack_74 = iVar3;
    }
  }
  uVar9 = *(uint *)&(this->Instances).field_0x28;
  local_40 = *(int *)&(this->Instances).field_0x8 - *(int *)&(this->Instances).field_0x34;
  local_60._padding_ = CONCAT44(uStack_84,local_88);
  iVar8 = (int)uVar9 >> 5;
  local_60.CurrentBitIndex = iStack_74;
  local_60.UnvisitedBitMask = 0xffffffff;
  local_60._28_4_ = uStack_6c;
  local_60.BaseBitIndex = iStack_70;
  uVar12 = uVar9 & 0xffffffe0;
  local_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
  if ((((int)uVar9 < 0) || (iVar3 < (int)uVar9)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(this->Instances).field_0x28;
  if (uVar9 != uVar4) {
    puVar10 = *(undefined1 **)&(this->Instances).field_0x20;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = puVar2;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar10 + (longlong)iVar8 * 4);
    while (uVar9 == 0) {
      lVar7 = (longlong)iVar8;
      uVar12 = uVar12 + 0x20;
      iVar8 = iVar8 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar8) goto LAB_146155fc0;
      uVar9 = *(uint *)(puVar10 + lVar7 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar9 = (int)lVar7 + -1 + uVar12;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_146155fc0:
  while( true ) {
    if (*(int *)&(this->Instances).field_0x8 - *(int *)&(this->Instances).field_0x34 != local_40) {
      `TSparseArray<UE::MovieScene::FSequenceInstance,FDefaultSparseArrayAllocator>::
      TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((local_60.CurrentBitIndex == uVar9) &&
       (local_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
    FEntityLedger::TagGarbage
              ((FEntityLedger *)
               ((longlong)local_60.CurrentBitIndex * 0x140 + *(longlong *)&this->Instances),
               this->Linker);
    local_60.UnvisitedBitMask = local_60.UnvisitedBitMask & ~local_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_60);
  }
  return;
}

// operator() @ 1504e3f70

bool __thiscall
`UE::MovieScene::FInstanceRegistry::DestroyInstance'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7613121396662599562>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7613121396662599562>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

