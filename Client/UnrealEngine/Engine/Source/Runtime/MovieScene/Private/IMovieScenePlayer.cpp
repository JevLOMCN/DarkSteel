// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 46

// IMovieScenePlayer @ 1461fd210

IMovieScenePlayer * __thiscall IMovieScenePlayer::IMovieScenePlayer(IMovieScenePlayer *this)

{
  uint *puVar1;
  ushort uVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  IMovieScenePlayer *pIVar6;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  int iVar8;
  FSparseArrayAllocationInfo local_18;
  
  this->_padding_ = (longlong)&___7IMovieScenePlayer__6B_;
  FMovieSceneEvaluationState::FMovieSceneEvaluationState(&this->State);
  (this->PreAnimatedState).InstanceHandle = (FRootInstanceHandle)0xffff;
  (this->PreAnimatedState).WeakLinker.WeakPtr = (FWeakObjectPtr)0x0;
  this->BindingOverrides = &(this->StaticBindingOverrides).BindingOverrides;
  *(undefined8 *)&(this->NullRegister).field_0x8 = 0;
  *(undefined8 *)&(this->NullRegister).field_0x10 = 0;
  *(undefined8 *)&(this->NullRegister).field_0x18 = 0;
  *(undefined8 *)&(this->NullRegister).field_0x20 = 0;
  *(undefined8 *)&(this->NullRegister).field_0x38 = 0;
  *(undefined4 *)&(this->NullRegister).field_0x40 = 0;
  *(undefined4 *)&(this->NullRegister).field_0x44 = 0x80;
  *(undefined4 *)&(this->NullRegister).field_0x4c = 0;
  *(undefined4 *)&(this->NullRegister).field_0x48 = 0xffffffff;
  *(undefined8 *)&(this->NullRegister).field_0x58 = 0;
  *(undefined4 *)&(this->NullRegister).field_0x60 = 0;
  *(undefined ***)&this->NullRegister = &___7FNullMovieSceneSpawnRegister__6B_;
  (this->NullRegister).field_0x68 = 0;
  *(undefined8 *)&(this->StaticBindingOverrides).BindingOverrides = 0;
  *(undefined8 *)&(this->StaticBindingOverrides).BindingOverrides.field_0x8 = 0;
  *(undefined8 *)&(this->StaticBindingOverrides).BindingOverrides.field_0x20 = 0;
  (this->StaticBindingOverrides)._padding_ =
       (longlong)&___7FStaticBindingOverrides_MovieScene_UE__6B_;
  *(undefined4 *)&(this->StaticBindingOverrides).BindingOverrides.field_0x28 = 0;
  *(undefined4 *)&(this->StaticBindingOverrides).BindingOverrides.field_0x2c = 0x80;
  *(undefined4 *)&(this->StaticBindingOverrides).BindingOverrides.field_0x34 = 0;
  *(undefined4 *)&(this->StaticBindingOverrides).BindingOverrides.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StaticBindingOverrides).BindingOverrides.field_0x40 = 0;
  *(undefined4 *)&(this->StaticBindingOverrides).BindingOverrides.field_0x48 = 0;
  AcquireSRWLockExclusive((PSRWLOCK)&UE::MovieScene::GGlobalPlayerRegistryLock);
  TSparseArrayBase<8,8,FDefaultSparseArrayAllocator>::Shrink
            ((TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *)
             &UE::MovieScene::GGlobalPlayerRegistry);
  iVar5 = UE::MovieScene::GGlobalPlayerRegistry._48_4_;
  if (UE::MovieScene::GGlobalPlayerRegistry._52_4_ == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,1,(ForAnyElementType *)&UE::MovieScene::GGlobalPlayerRegistry,
                       (int *)&UE::MovieScene::GGlobalPlayerRegistry.field_0x8,
                       (int *)&UE::MovieScene::GGlobalPlayerRegistry.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &UE::MovieScene::GGlobalPlayerRegistry.field_0x10,false);
  }
  else {
    UE::MovieScene::GGlobalPlayerRegistry._52_4_ = UE::MovieScene::GGlobalPlayerRegistry._52_4_ + -1
    ;
    UE::MovieScene::GGlobalPlayerRegistry._48_4_ =
         *(int *)(UE::MovieScene::GGlobalPlayerRegistry._0_8_ + 4 +
                 (longlong)(int)UE::MovieScene::GGlobalPlayerRegistry._48_4_ * 8);
    if (UE::MovieScene::GGlobalPlayerRegistry._52_4_ != 0) {
      *(undefined4 *)
       (UE::MovieScene::GGlobalPlayerRegistry._0_8_ +
       (longlong)(int)UE::MovieScene::GGlobalPlayerRegistry._48_4_ * 8) = 0xffffffff;
    }
  }
  TSparseArrayBase<8,8,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *)
             &UE::MovieScene::GGlobalPlayerRegistry,&local_18,iVar5);
  if (local_18.Pointer != (undefined8 *)0x0) {
    *(IMovieScenePlayer **)local_18.Pointer = this;
  }
  pTVar7 = &UE::MovieScene::GGlobalPlayerUpdateFlags;
  this->UniqueIndex = (ushort)local_18.Index;
  iVar5 = UE::MovieScene::GGlobalPlayerUpdateFlags.NumBits;
  iVar8 = ((local_18.Index & 0xffffU) - iVar5) + 1;
  if (0 < iVar8) {
    iVar5 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                      (&UE::MovieScene::GGlobalPlayerUpdateFlags,iVar8);
    TBitArray<FDefaultBitArrayAllocator>::SetRange
              (&UE::MovieScene::GGlobalPlayerUpdateFlags,iVar5,iVar8,false);
    iVar5 = UE::MovieScene::GGlobalPlayerUpdateFlags.NumBits;
  }
  uVar2 = this->UniqueIndex;
  if (iVar5 <= (int)(uint)uVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pIVar6 = (IMovieScenePlayer *)(*pcVar3)();
      return pIVar6;
    }
  }
  if (UE::MovieScene::GGlobalPlayerUpdateFlags.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    pTVar7 = (TBitArray<FDefaultBitArrayAllocator> *)
             UE::MovieScene::GGlobalPlayerUpdateFlags.AllocatorInstance.SecondaryData;
  }
  puVar1 = (uint *)((longlong)pTVar7 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << ((byte)uVar2 & 0x1f));
  ReleaseSRWLockExclusive((PSRWLOCK)&UE::MovieScene::GGlobalPlayerRegistryLock);
  return this;
}

// ~IMovieScenePlayer @ 1461ff840

void __thiscall IMovieScenePlayer::~IMovieScenePlayer(IMovieScenePlayer *this)

{
  uint *puVar1;
  ushort uVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  TBitArray<FDefaultBitArrayAllocator> *pTVar6;
  
  this->_padding_ = (longlong)&___7IMovieScenePlayer__6B_;
  AcquireSRWLockExclusive((PSRWLOCK)&UE::MovieScene::GGlobalPlayerRegistryLock);
  uVar2 = this->UniqueIndex;
  if (UE::MovieScene::GGlobalPlayerUpdateFlags.NumBits <= (int)(uint)uVar2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar6 = &UE::MovieScene::GGlobalPlayerUpdateFlags;
  if (UE::MovieScene::GGlobalPlayerUpdateFlags.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    pTVar6 = (TBitArray<FDefaultBitArrayAllocator> *)
             UE::MovieScene::GGlobalPlayerUpdateFlags.AllocatorInstance.SecondaryData;
  }
  puVar1 = (uint *)((longlong)pTVar6 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 & ~(1 << ((byte)uVar2 & 0x1f));
  TSparseArrayBase<8,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
            ((TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *)
             &UE::MovieScene::GGlobalPlayerRegistry,(uint)this->UniqueIndex,1);
  ReleaseSRWLockExclusive((PSRWLOCK)&UE::MovieScene::GGlobalPlayerRegistryLock);
  *(undefined4 *)&(this->StaticBindingOverrides).BindingOverrides.field_0x48 = 0;
  pvVar3 = *(void **)&(this->StaticBindingOverrides).BindingOverrides.field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationOperand,FMovieSceneEvaluationOperand>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationOperand,FMovieSceneEvaluationOperand>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMovieSceneEvaluationOperand,FMovieSceneEvaluationOperand>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->StaticBindingOverrides).BindingOverrides);
  (this->StaticBindingOverrides)._padding_ =
       (longlong)&___7IStaticBindingOverridesPlaybackCapability_MovieScene_UE__6B_;
  FMovieSceneSpawnRegister::~FMovieSceneSpawnRegister
            ((FMovieSceneSpawnRegister *)&this->NullRegister);
  FMovieSceneEvaluationState::~FMovieSceneEvaluationState(&this->State);
  return;
}

// AddBindingOverride @ 146204c40

void __thiscall
IMovieScenePlayer::AddBindingOverride
          (IMovieScenePlayer *this,FMovieSceneEvaluationOperand *param_1,
          FMovieSceneEvaluationOperand *param_2)

{
  IStaticBindingOverridesPlaybackCapability *pIVar1;
  
  pIVar1 = GetStaticBindingOverrides(this);
  if (pIVar1 != (IStaticBindingOverridesPlaybackCapability *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1,param_1,param_2);
  }
  return;
}

// AsUObject @ 1462083e0

UObject * __thiscall IMovieScenePlayer::AsUObject(IMovieScenePlayer *this)

{
  return (UObject *)0x0;
}

// CanUpdateCameraCut @ 14620aba0

bool __thiscall IMovieScenePlayer::CanUpdateCameraCut(IMovieScenePlayer *this)

{
  return true;
}

// ConstructEntitySystemLinker @ 14620be50

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneEntitySystemLinker * __thiscall
IMovieScenePlayer::ConstructEntitySystemLinker(IMovieScenePlayer *this)

{
  return (UMovieSceneEntitySystemLinker *)0x0;
}

// CreateBinding @ 14620cbd0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FGuid * __thiscall
IMovieScenePlayer::CreateBinding
          (IMovieScenePlayer *this,FGuid *__return_storage_ptr__,UMovieSceneSequence *param_1,
          UObject *param_2)

{
  if ((param_1 != (UMovieSceneSequence *)0x0) && (param_2 != (UObject *)0x0)) {
    (**(code **)(param_1->_padding_ + 0x348))(param_1,__return_storage_ptr__,param_2);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  return __return_storage_ptr__;
}

// DiscardPreAnimatedState @ 14620f240

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall IMovieScenePlayer::DiscardPreAnimatedState(IMovieScenePlayer *this)

{
  FSharedPlaybackState *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FMovieSceneRootEvaluationTemplateInstance *this_00;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *pTVar5;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_28;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_18;
  
  FMovieScenePreAnimatedState::DiscardPreAnimatedState(&this->PreAnimatedState);
  this_00 = (FMovieSceneRootEvaluationTemplateInstance *)(**(code **)(this->_padding_ + 0x18))(this)
  ;
  pTVar5 = FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState(this_00,&local_18);
  if (pTVar5->Object == (FSharedPlaybackState *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = pTVar5->Object;
  pTVar2 = (pTVar5->SharedReferenceCount).ReferenceController;
  (pTVar5->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar5->Object = (FSharedPlaybackState *)0x0;
  if (pFVar1 == (FSharedPlaybackState *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Object = pFVar1;
  local_28.SharedReferenceCount.ReferenceController = pTVar2;
  FMovieSceneEvaluationState::ClearObjectCaches(&this->State,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// FindBoundObjects @ 1462114d0

/* WARNING: Enum "Type": Some values do not have unique names */

TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> * __thiscall
IMovieScenePlayer::FindBoundObjects
          (IMovieScenePlayer *this,
          TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> *__return_storage_ptr__,
          FGuid *param_1,FMovieSceneSequenceID *param_2)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneRootEvaluationTemplateInstance *pFVar3;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> *pTVar4;
  FMovieSceneEvaluationState *this_00;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_48;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_38;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_28;
  
  pFVar3 = (FMovieSceneRootEvaluationTemplateInstance *)(**(code **)(this->_padding_ + 0x18))();
  FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState(pFVar3,&local_38);
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if (local_38.Object == (FSharedPlaybackState *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    __return_storage_ptr__->DataPtr = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    pFVar3 = (FMovieSceneRootEvaluationTemplateInstance *)
             (**(code **)(this->_padding_ + 0x18))(this);
    FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState(pFVar3,&local_48);
    if (local_48.Object == (FSharedPlaybackState *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
      this_00 = (FMovieSceneEvaluationState *)0x0;
    }
    else {
      if ((local_48.Object == (FSharedPlaybackState *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> *)(*pcVar1)();
        return pTVar4;
      }
      this_00 = UE::MovieScene::FSharedPlaybackState::FindCapability<FMovieSceneEvaluationState>
                          (local_48.Object);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.SharedReferenceCount.ReferenceController);
    }
    local_28.Object = local_38.Object;
    local_28.SharedReferenceCount.ReferenceController =
         local_38.SharedReferenceCount.ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FMovieSceneEvaluationState::FindBoundObjects
              (this_00,__return_storage_ptr__,param_1,param_2,&local_28);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
  }
  return __return_storage_ptr__;
}

// FindSharedPlaybackState @ 146212df0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> * __thiscall
IMovieScenePlayer::FindSharedPlaybackState
          (IMovieScenePlayer *this,
          TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *__return_storage_ptr__)

{
  FMovieSceneRootEvaluationTemplateInstance *this_00;
  
  this_00 = (FMovieSceneRootEvaluationTemplateInstance *)(**(code **)(this->_padding_ + 0x18))();
  FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState(this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// FindSharedPlaybackState @ 146212e20

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::FSharedPlaybackState_const_,1> * __thiscall
IMovieScenePlayer::FindSharedPlaybackState
          (IMovieScenePlayer *this,
          TSharedPtr<UE::MovieScene::FSharedPlaybackState_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FMovieSceneRootEvaluationTemplateInstance *this_00;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *pTVar2;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_18;
  
  this_00 = (FMovieSceneRootEvaluationTemplateInstance *)(**(code **)(this->_padding_ + 0x18))();
  pTVar2 = FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState(this_00,&local_18);
  __return_storage_ptr__->Object = pTVar2->Object;
  pTVar1 = (pTVar2->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Get @ 146215a90

IMovieScenePlayer * __cdecl IMovieScenePlayer::Get(ushort param_1)

{
  code *pcVar1;
  bool bVar2;
  IMovieScenePlayer *pIVar3;
  longlong lVar4;
  
  AcquireSRWLockShared((PSRWLOCK)&UE::MovieScene::GGlobalPlayerRegistryLock);
  if ((int)(uint)param_1 < (int)UE::MovieScene::GGlobalPlayerRegistry._40_4_) {
    lVar4 = 0x154bf1650;
    if (UE::MovieScene::GGlobalPlayerRegistry._32_8_ != 0) {
      lVar4 = UE::MovieScene::GGlobalPlayerRegistry._32_8_;
    }
    if ((*(uint *)(lVar4 + (ulonglong)(param_1 >> 5) * 4) >> (param_1 & 0x1f) & 1) != 0)
    goto LAB_146215afc;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("UE::MovieScene::GGlobalPlayerRegistry.IsValidIndex(InUniqueIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieScenePlayer.cpp"
                     ,0x52,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pIVar3 = (IMovieScenePlayer *)(*pcVar1)();
    return pIVar3;
  }
LAB_146215afc:
  pIVar3 = *(IMovieScenePlayer **)
            (UE::MovieScene::GGlobalPlayerRegistry._0_8_ + (ulonglong)param_1 * 8);
  ReleaseSRWLockShared((PSRWLOCK)&UE::MovieScene::GGlobalPlayerRegistryLock);
  return pIVar3;
}

// Get @ 146215b30

void __cdecl
IMovieScenePlayer::Get
          (TArray<IMovieScenePlayer_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint *puVar12;
  uint local_68;
  uint uStack_64;
  uint uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_40;
  
  AcquireSRWLockShared((PSRWLOCK)&UE::MovieScene::GGlobalPlayerRegistryLock);
  uVar9 = 0;
  uStack_64 = 1;
  local_68 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uVar11 = UE::MovieScene::GGlobalPlayerRegistry._40_4_;
  if (uVar11 != 0) {
    puVar12 = (uint *)&UE::MovieScene::GGlobalPlayerRegistry.field_0x10;
    if (UE::MovieScene::GGlobalPlayerRegistry._32_8_ != 0) {
      puVar12 = (uint *)UE::MovieScene::GGlobalPlayerRegistry._32_8_;
    }
    uVar2 = *puVar12;
    uVar10 = uVar9;
    while (uVar2 == 0) {
      uStack_50 = (int)uVar10 + 0x20;
      uVar10 = (ulonglong)uStack_50;
      iVar8 = (int)uVar9;
      local_68 = iVar8 + 1;
      uVar9 = (ulonglong)local_68;
      if ((int)((uVar11 - 1) + ((int)(uVar11 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_68)
      goto LAB_146215c04;
      uVar2 = puVar12[(longlong)iVar8 + 1];
    }
    uStack_64 = -uVar2 & uVar2;
    uVar9 = (ulonglong)uStack_64 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uStack_54 = (int)lVar5 + -1 + uStack_50;
    uVar9 = (ulonglong)uStack_54;
    if ((int)uVar11 < (int)uStack_54) {
LAB_146215c04:
      uVar9 = UE::MovieScene::GGlobalPlayerRegistry._40_8_ & 0xffffffff;
      uStack_54 = uVar11;
    }
  }
  local_40.UnvisitedBitMask = 0xffffffff;
  local_40.CurrentBitIndex = uStack_54;
  local_40._28_4_ = uStack_4c;
  local_40.BaseBitIndex = uStack_50;
  local_40._padding_._0_4_ = local_68;
  local_40._padding_._4_4_ = uStack_64;
  local_40.Array._0_4_ = 0x54bf1650;
  local_40.Array._4_4_ = 1;
  if ((int)uVar9 < (int)uVar11) {
    do {
      plVar3 = *(longlong **)
                (UE::MovieScene::GGlobalPlayerRegistry._0_8_ + (longlong)(int)uVar9 * 8);
      if ((plVar3 != (longlong *)0x0) &&
         ((!param_2 || (iVar8 = (**(code **)(*plVar3 + 0x40))(), iVar8 != 0)))) {
        pFVar4 = (param_1->AllocatorInstance).Data;
        pFVar1 = (FScriptContainerElement *)
                 (UE::MovieScene::GGlobalPlayerRegistry._0_8_ + (longlong)(int)uVar9 * 8);
        if ((pFVar4 <= pFVar1) &&
           ((pFVar1 < pFVar4 + (longlong)param_1->ArrayMax * 8 &&
            (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar7)))) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar8 = param_1->ArrayNum;
        if (iVar8 == param_1->ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar8 + 1;
        *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar8 * 8) =
             *(undefined8 *)pFVar1;
      }
      local_40.UnvisitedBitMask = local_40.UnvisitedBitMask & ~local_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      uVar9 = (ulonglong)(uint)local_40.CurrentBitIndex;
    } while (local_40.CurrentBitIndex <
             *(int *)(CONCAT44(local_40.Array._4_4_,local_40.Array._0_4_) + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x000146215d45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&UE::MovieScene::GGlobalPlayerRegistryLock);
  return;
}

// GetBindingOverride @ 146216730

FMovieSceneEvaluationOperand * __thiscall
IMovieScenePlayer::GetBindingOverride(IMovieScenePlayer *this,FMovieSceneEvaluationOperand *param_1)

{
  IStaticBindingOverridesPlaybackCapability *pIVar1;
  FMovieSceneEvaluationOperand *pFVar2;
  
  pIVar1 = GetStaticBindingOverrides(this);
  if (pIVar1 != (IStaticBindingOverridesPlaybackCapability *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146216755. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar2 = (FMovieSceneEvaluationOperand *)
             (**(code **)((longlong)*pIVar1 + 8))(pIVar1,param_1,*(code **)((longlong)*pIVar1 + 8));
    return pFVar2;
  }
  return (FMovieSceneEvaluationOperand *)0x0;
}

// GetEvaluationState @ 1462186e0

/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneEvaluationState * __thiscall
IMovieScenePlayer::GetEvaluationState(IMovieScenePlayer *this)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneRootEvaluationTemplateInstance *this_00;
  FMovieSceneEvaluationState *pFVar3;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_18;
  
  this_00 = (FMovieSceneRootEvaluationTemplateInstance *)(**(code **)(this->_padding_ + 0x18))();
  FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState(this_00,&local_18);
  if (local_18.Object == (FSharedPlaybackState *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
    return (FMovieSceneEvaluationState *)0x0;
  }
  if ((local_18.Object == (FSharedPlaybackState *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMovieSceneEvaluationState *)(*pcVar1)();
    return pFVar3;
  }
  pFVar3 = UE::MovieScene::FSharedPlaybackState::FindCapability<FMovieSceneEvaluationState>
                     (local_18.Object);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return pFVar3;
}

// GetEventContexts @ 1462187a0

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<UObject_*,TSizedDefaultAllocator<32>_> * __thiscall
IMovieScenePlayer::GetEventContexts
          (IMovieScenePlayer *this,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneRootEvaluationTemplateInstance *this_00;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar3;
  undefined1 local_res8 [8];
  byte local_res18;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_28;
  FPlaybackCapabilityPtr local_18;
  
  this_00 = (FMovieSceneRootEvaluationTemplateInstance *)(**(code **)(this->_padding_ + 0x18))();
  FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState(this_00,&local_28);
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (local_28.Object != (FSharedPlaybackState *)0x0) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      local_res8[0] = bVar2;
      `UE::MovieScene::FSharedPlaybackState::
      FindCapability<UE::MovieScene::IEventContextsPlaybackCapability>'::__l2::<lambda_1>::
      operator()(local_res8);
    }
    UE::MovieScene::IEventContextsPlaybackCapability::GetPlaybackCapabilityID();
    UE::MovieScene::FPlaybackCapabilitiesImpl::FindCapability
              ((FPlaybackCapabilitiesImpl *)&(local_28.Object)->Capabilities,&local_18,
               1 << (local_res18 & 0x1f));
    if (local_18.Ptr != (longlong *)0x0) {
      if (local_18.StorageMode != Inline) {
        if ((local_18.StorageMode != RawPointer) && (local_18.StorageMode != SharedPointer)) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                             ,0x30,L"Unexpected playback capability storage mode");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            pTVar3 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
            return pTVar3;
          }
          goto LAB_146218869;
        }
        local_18.Ptr = *(void **)local_18.Ptr;
      }
      if (local_18.Ptr != (longlong *)0x0) {
        (**(code **)(*(longlong *)local_18.Ptr + 8))(local_18.Ptr,__return_storage_ptr__);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_28.SharedReferenceCount.ReferenceController);
        return __return_storage_ptr__;
      }
    }
  }
LAB_146218869:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetObserver @ 146219ef0

TScriptInterface<IMovieSceneSequencePlayerObserver> * __thiscall
IMovieScenePlayer::GetObserver
          (IMovieScenePlayer *this,
          TScriptInterface<IMovieSceneSequencePlayerObserver> *__return_storage_ptr__)

{
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  return __return_storage_ptr__;
}

// GetOrCreateDirectorInstance @ 14621a0f0

UObject * __thiscall
IMovieScenePlayer::GetOrCreateDirectorInstance
          (IMovieScenePlayer *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1,
          FMovieSceneSequenceID *param_2)

{
  FSequenceDirectorPlaybackCapability *this_00;
  UObject *pUVar1;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_18;
  
  this_00 = UE::MovieScene::FSharedPlaybackState::
            FindCapability<UE::MovieScene::FSequenceDirectorPlaybackCapability>(param_1->Object);
  if (this_00 != (FSequenceDirectorPlaybackCapability *)0x0) {
    local_18.Object = param_1->Object;
    local_18.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pUVar1 = UE::MovieScene::FSequenceDirectorPlaybackCapability::GetOrCreateDirectorInstance
                       (this_00,&local_18,param_2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return pUVar1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return (UObject *)0x0;
}

// GetPlaybackClient @ 14621ab10

IMovieScenePlaybackClient * __thiscall IMovieScenePlayer::GetPlaybackClient(IMovieScenePlayer *this)

{
  return (IMovieScenePlaybackClient *)0x0;
}

// GetPlaybackContext @ 14621ab70

UObject * __thiscall IMovieScenePlayer::GetPlaybackContext(IMovieScenePlayer *this)

{
  return (UObject *)0x0;
}

// GetSharedPlaybackState @ 14621cfc0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<UE::MovieScene::FSharedPlaybackState,1> * __thiscall
IMovieScenePlayer::GetSharedPlaybackState
          (IMovieScenePlayer *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *__return_storage_ptr__)

{
  FMovieSceneRootEvaluationTemplateInstance *this_00;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *this_01;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_18;
  
  this_00 = (FMovieSceneRootEvaluationTemplateInstance *)(**(code **)(this->_padding_ + 0x18))();
  this_01 = FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState(this_00,&local_18);
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1>::ToSharedRef(this_01,__return_storage_ptr__);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetSharedPlaybackState @ 14621d000

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> * __thiscall
IMovieScenePlayer::GetSharedPlaybackState
          (IMovieScenePlayer *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *__return_storage_ptr__)

{
  FSharedPlaybackState *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FMovieSceneRootEvaluationTemplateInstance *this_00;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *pTVar5;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *pTVar6;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_18;
  
  this_00 = (FMovieSceneRootEvaluationTemplateInstance *)(**(code **)(this->_padding_ + 0x18))();
  pTVar5 = FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState(this_00,&local_18);
  if (pTVar5->Object == (FSharedPlaybackState *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  pFVar1 = pTVar5->Object;
  pTVar2 = (pTVar5->SharedReferenceCount).ReferenceController;
  (pTVar5->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar5->Object = (FSharedPlaybackState *)0x0;
  if (pFVar1 == (FSharedPlaybackState *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  __return_storage_ptr__->Object = pFVar1;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetSpawnRegister @ 14621d520

FMovieSceneSpawnRegister * __thiscall IMovieScenePlayer::GetSpawnRegister(IMovieScenePlayer *this)

{
  return (FMovieSceneSpawnRegister *)&this->NullRegister;
}

// GetStaticBindingOverrides @ 14621d550

/* WARNING: Enum "Type": Some values do not have unique names */

IStaticBindingOverridesPlaybackCapability * __thiscall
IMovieScenePlayer::GetStaticBindingOverrides(IMovieScenePlayer *this)

{
  IStaticBindingOverridesPlaybackCapability IVar1;
  code *pcVar2;
  bool bVar3;
  FMovieSceneRootEvaluationTemplateInstance *this_00;
  IStaticBindingOverridesPlaybackCapability *pIVar4;
  FSharedPlaybackState *pFVar5;
  undefined1 local_res8 [8];
  byte local_res10;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_28;
  FPlaybackCapabilityPtr local_18;
  
  this_00 = (FMovieSceneRootEvaluationTemplateInstance *)(**(code **)(this->_padding_ + 0x18))();
  FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState(this_00,&local_28);
  if (local_28.Object == (FSharedPlaybackState *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_28.SharedReferenceCount.ReferenceController);
    return (IStaticBindingOverridesPlaybackCapability *)0x0;
  }
  pFVar5 = local_28.Object;
  if ((local_28.Object == (FSharedPlaybackState *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), pFVar5 = local_28.Object, bVar3)) {
    pcVar2 = (code *)swi(3);
    pIVar4 = (IStaticBindingOverridesPlaybackCapability *)(*pcVar2)();
    return pIVar4;
  }
  bVar3 = IsInGameThread();
  if (!bVar3) {
    local_res8[0] = bVar3;
    `UE::MovieScene::FSharedPlaybackState::
    FindCapability<UE::MovieScene::IStaticBindingOverridesPlaybackCapability>'::__l2::<lambda_1>::
    operator()(local_res8);
  }
  UE::MovieScene::IStaticBindingOverridesPlaybackCapability::GetPlaybackCapabilityID();
  UE::MovieScene::FPlaybackCapabilitiesImpl::FindCapability
            ((FPlaybackCapabilitiesImpl *)&pFVar5->Capabilities,&local_18,1 << (local_res10 & 0x1f))
  ;
  if (local_18.Ptr != (IStaticBindingOverridesPlaybackCapability *)0x0) {
    pIVar4 = local_18.Ptr;
    if (local_18.StorageMode == Inline) goto LAB_14621d62d;
    if ((local_18.StorageMode == RawPointer) || (local_18.StorageMode == SharedPointer)) {
      IVar1 = *(IStaticBindingOverridesPlaybackCapability *)local_18.Ptr;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      return (IStaticBindingOverridesPlaybackCapability *)IVar1;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                       ,0x30,L"Unexpected playback capability storage mode");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pIVar4 = (IStaticBindingOverridesPlaybackCapability *)(*pcVar2)();
      return pIVar4;
    }
  }
  pIVar4 = (IStaticBindingOverridesPlaybackCapability *)0x0;
LAB_14621d62d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return pIVar4;
}

// GetViewportSettings @ 14621dd00

void __thiscall
IMovieScenePlayer::GetViewportSettings
          (IMovieScenePlayer *this,
          TMap<FViewportClient_*,EMovieSceneViewportParams,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FViewportClient_*,EMovieSceneViewportParams,0>_>
          *param_1)

{
  return;
}

// HasDynamicWeighting @ 14621dfa0

bool __thiscall IMovieScenePlayer::HasDynamicWeighting(IMovieScenePlayer *this)

{
  return false;
}

// InitializeRootInstance @ 146220e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
IMovieScenePlayer::InitializeRootInstance
          (IMovieScenePlayer *this,TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *param_1)

{
  FSharedPlaybackState *pFVar1;
  code *pcVar2;
  bool bVar3;
  FMovieSceneSpawnRegister *pFVar4;
  IMovieScenePlaybackClient *pIVar5;
  UObject *pUVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_d8;
  undefined1 local_d7 [3];
  byte local_d4;
  byte local_d0;
  byte local_cc;
  FPlaybackCapabilityPtr local_c8;
  FMovieSceneEvaluationState *local_b8;
  FMovieSceneSpawnRegister *local_b0;
  IMovieScenePlayer *local_a8;
  IStaticBindingOverridesPlaybackCapability *local_a0;
  IMovieScenePlaybackClient *local_98;
  FPlaybackCapabilityPtr local_90;
  FPlaybackCapabilityPtr local_80;
  FPlaybackCapabilityPtr local_70;
  FPlaybackCapabilityPtr local_60;
  FPlaybackCapabilityPtr local_50;
  
  pFVar1 = param_1->Object;
  bVar3 = IsInGameThread();
  if (!bVar3) {
    local_res8[0] = bVar3;
    `UE::MovieScene::FSharedPlaybackState::
    AddCapability<UE::MovieScene::FPlayerIndexPlaybackCapability,unsigned_short_&>'::__l2::
    <lambda_1>::operator()(local_res8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::StaticID = (TPlaybackCapabilityID<UE::MovieScene::FPlayerIndexPlaybackCapability>)
                 UE::MovieScene::FPlaybackCapabilityID::Register(L"FPlayerIndexPlaybackCapability");
    _Init_thread_footer(&::_TSS0);
  }
  UE::MovieScene::FPlaybackCapabilitiesImpl::
  AddCapability<UE::MovieScene::FPlayerIndexPlaybackCapability,UE::MovieScene::FPlayerIndexPlaybackCapability,unsigned_short_&>
            ((FPlaybackCapabilitiesImpl *)&pFVar1->Capabilities,&local_90,
             1 << (::StaticID._0_1_ & 0x1f),&this->UniqueIndex);
  if ((local_90.Ptr == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x3a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((((local_90.StorageMode != Inline) && (local_90.StorageMode != RawPointer)) &&
      (local_90.StorageMode != SharedPointer)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x44,L"Unexpected playback capability storage mode"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = param_1->Object;
  bVar3 = IsInGameThread();
  if (!bVar3) {
    local_res10[0] = bVar3;
    `UE::MovieScene::FSharedPlaybackState::AddCapabilityRaw<FMovieSceneEvaluationState>'::__l2::
    <lambda_1>::operator()(local_res10);
  }
  local_b8 = &this->State;
  FMovieSceneEvaluationState::GetPlaybackCapabilityID();
  UE::MovieScene::FPlaybackCapabilitiesImpl::
  AddCapability<FMovieSceneEvaluationState_*,FMovieSceneEvaluationState,FMovieSceneEvaluationState_*>
            ((FPlaybackCapabilitiesImpl *)&pFVar1->Capabilities,&local_c8,1 << (local_d4 & 0x1f),
             &local_b8);
  if ((local_c8.Ptr == (FMovieSceneEvaluationState *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x3a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_c8.StorageMode != Inline) {
    if ((local_c8.StorageMode == RawPointer) || (local_c8.StorageMode == SharedPointer)) {
      local_c8.Ptr = *(void **)local_c8.Ptr;
    }
    else {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x44,L"Unexpected playback capability storage mode");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  UE::MovieScene::FSharedPlaybackState::MaybeInitialize<FMovieSceneEvaluationState>
            (pFVar1,local_c8.Ptr);
  pFVar4 = (FMovieSceneSpawnRegister *)(**(code **)(this->_padding_ + 0x68))(this);
  if (pFVar4 != (FMovieSceneSpawnRegister *)&this->NullRegister) {
    pFVar1 = param_1->Object;
    bVar3 = IsInGameThread();
    if (!bVar3) {
      local_res18[0] = bVar3;
      `UE::MovieScene::FSharedPlaybackState::AddCapabilityRaw<FMovieSceneSpawnRegister>'::__l2::
      <lambda_1>::operator()(local_res18);
    }
    local_b0 = pFVar4;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::StaticID = (TPlaybackCapabilityID<FMovieSceneSpawnRegister>)
                   UE::MovieScene::FPlaybackCapabilityID::Register(L"FMovieSceneSpawnRegister");
      _Init_thread_footer(&::_TSS0);
    }
    UE::MovieScene::FPlaybackCapabilitiesImpl::
    AddCapability<FMovieSceneSpawnRegister_*,FMovieSceneSpawnRegister,FMovieSceneSpawnRegister_*>
              ((FPlaybackCapabilitiesImpl *)&pFVar1->Capabilities,&local_80,
               1 << (::StaticID._0_1_ & 0x1f),&local_b0);
    if ((local_80.Ptr == (void *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                           ,0x3a,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((((local_80.StorageMode != Inline) && (local_80.StorageMode != RawPointer)) &&
        (local_80.StorageMode != SharedPointer)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                           ,0x44,L"Unexpected playback capability storage mode"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = param_1->Object;
  bVar3 = IsInGameThread();
  if (!bVar3) {
    local_res20[0] = bVar3;
    `UE::MovieScene::FSharedPlaybackState::
    AddCapabilityRaw<UE::MovieScene::IObjectBindingNotifyPlaybackCapability>'::__l2::<lambda_1>::
    operator()(local_res20);
  }
  local_a8 = this;
  UE::MovieScene::IObjectBindingNotifyPlaybackCapability::GetPlaybackCapabilityID();
  UE::MovieScene::FPlaybackCapabilitiesImpl::
  AddCapability<UE::MovieScene::IObjectBindingNotifyPlaybackCapability_*,UE::MovieScene::IObjectBindingNotifyPlaybackCapability,UE::MovieScene::IObjectBindingNotifyPlaybackCapability_*>
            ((FPlaybackCapabilitiesImpl *)&pFVar1->Capabilities,&local_70,1 << (local_d0 & 0x1f),
             (IObjectBindingNotifyPlaybackCapability **)&local_a8);
  if ((local_70.Ptr == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x3a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((local_70.StorageMode != Inline) && (local_70.StorageMode != RawPointer)) &&
     ((local_70.StorageMode != SharedPointer &&
      (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                          ,0x44,L"Unexpected playback capability storage mode"), bVar3)))) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = param_1->Object;
  bVar3 = IsInGameThread();
  if (!bVar3) {
    local_d8 = bVar3;
    `UE::MovieScene::FSharedPlaybackState::
    AddCapabilityRaw<UE::MovieScene::FStaticBindingOverrides>'::__l2::<lambda_1>::operator()
              (&local_d8);
  }
  local_a0 = (IStaticBindingOverridesPlaybackCapability *)&this->StaticBindingOverrides;
  UE::MovieScene::IStaticBindingOverridesPlaybackCapability::GetPlaybackCapabilityID();
  UE::MovieScene::FPlaybackCapabilitiesImpl::
  AddCapability<UE::MovieScene::IStaticBindingOverridesPlaybackCapability_*,UE::MovieScene::IStaticBindingOverridesPlaybackCapability,UE::MovieScene::IStaticBindingOverridesPlaybackCapability_*>
            ((FPlaybackCapabilitiesImpl *)&pFVar1->Capabilities,&local_60,1 << (local_cc & 0x1f),
             &local_a0);
  if ((local_60.Ptr == (void *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x3a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((((local_60.StorageMode != Inline) && (local_60.StorageMode != RawPointer)) &&
      (local_60.StorageMode != SharedPointer)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                         ,0x44,L"Unexpected playback capability storage mode"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pIVar5 = (IMovieScenePlaybackClient *)(**(code **)(this->_padding_ + 0x60))(this);
  if (pIVar5 != (IMovieScenePlaybackClient *)0x0) {
    pFVar1 = param_1->Object;
    bVar3 = IsInGameThread();
    if (!bVar3) {
      local_d7[0] = bVar3;
      `UE::MovieScene::FSharedPlaybackState::AddCapabilityRaw<IMovieScenePlaybackClient>'::__l2::
      <lambda_1>::operator()(local_d7);
    }
    local_98 = pIVar5;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::StaticID = (TPlaybackCapabilityID<IMovieScenePlaybackClient>)
                   UE::MovieScene::FPlaybackCapabilityID::Register(L"IMovieScenePlaybackClient");
      _Init_thread_footer(&::_TSS0);
    }
    UE::MovieScene::FPlaybackCapabilitiesImpl::
    AddCapability<IMovieScenePlaybackClient_*,IMovieScenePlaybackClient,IMovieScenePlaybackClient_*>
              ((FPlaybackCapabilitiesImpl *)&pFVar1->Capabilities,&local_50,
               1 << (::StaticID._0_1_ & 0x1f),&local_98);
    if ((local_50.Ptr == (void *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                           ,0x3a,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((((local_50.StorageMode != Inline) && (local_50.StorageMode != RawPointer)) &&
        (local_50.StorageMode != SharedPointer)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                           ,0x44,L"Unexpected playback capability storage mode"), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar6 = FWeakObjectPtr::Get(&(param_1->Object->WeakLinker).WeakPtr);
  if (pUVar6 == (UObject *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1057178033514872474>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieScenePlayer.cpp"
                       ,0x166,"Linker");
    if (bVar3) {
code_r0x0001462213f8:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if ((*(longlong *)&pUVar6[0x23].field_0x8 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InstanceRegistry.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemLinker.h"
                           ,0x96,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(longlong *)&pUVar6[0x23].field_0x8 == 0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1057178033514872470>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieScenePlayer.cpp"
                         ,0x16a,"InstanceRegistry");
      if (bVar3) goto code_r0x0001462213f8;
    }
    else {
      UE::MovieScene::FSequenceInstance::Initialize
                ((FSequenceInstance *)
                 ((ulonglong)*(ushort *)&param_1->Object->RootInstanceHandle * 0x140 +
                 *(longlong *)(*(longlong *)&pUVar6[0x23].field_0x8 + 8)));
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// InvalidateCachedData @ 146221950

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall IMovieScenePlayer::InvalidateCachedData(IMovieScenePlayer *this)

{
  FMovieSceneRootEvaluationTemplateInstance *this_00;
  FSequenceInstance *this_01;
  
  this_00 = (FMovieSceneRootEvaluationTemplateInstance *)(**(code **)(this->_padding_ + 0x18))();
  this_01 = FMovieSceneRootEvaluationTemplateInstance::FindInstance
                      (this_00,MovieSceneSequenceID::Root);
  if (this_01 != (FSequenceInstance *)0x0) {
    UE::MovieScene::FSequenceInstance::InvalidateCachedData(this_01,All);
    return;
  }
  return;
}

// IsDisablingEventTriggers @ 1462224c0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
IMovieScenePlayer::IsDisablingEventTriggers(IMovieScenePlayer *this,FFrameTime *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FMovieSceneRootEvaluationTemplateInstance *this_00;
  undefined1 local_res8 [8];
  byte local_res18;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_28;
  FPlaybackCapabilityPtr local_18;
  
  this_00 = (FMovieSceneRootEvaluationTemplateInstance *)(**(code **)(this->_padding_ + 0x18))();
  FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState(this_00,&local_28);
  if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (local_28.Object != (FSharedPlaybackState *)0x0) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      local_res8[0] = bVar2;
      `UE::MovieScene::FSharedPlaybackState::
      FindCapability<UE::MovieScene::FEventTriggerControlPlaybackCapability>'::__l2::<lambda_1>::
      operator()(local_res8);
    }
    UE::MovieScene::FEventTriggerControlPlaybackCapability::GetPlaybackCapabilityID();
    UE::MovieScene::FPlaybackCapabilitiesImpl::FindCapability
              ((FPlaybackCapabilitiesImpl *)&(local_28.Object)->Capabilities,&local_18,
               1 << (local_res18 & 0x1f));
    if (local_18.Ptr != (FEventTriggerControlPlaybackCapability *)0x0) {
      if (local_18.StorageMode != Inline) {
        if ((local_18.StorageMode != RawPointer) && (local_18.StorageMode != SharedPointer)) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                             ,0x30,L"Unexpected playback capability storage mode");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          goto LAB_146222589;
        }
        local_18.Ptr = *(void **)&(local_18.Ptr)->TypedValue;
      }
      if (local_18.Ptr != (FEventTriggerControlPlaybackCapability *)0x0) {
        bVar2 = UE::MovieScene::FEventTriggerControlPlaybackCapability::IsDisablingEventTriggers
                          (local_18.Ptr,param_1);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_28.SharedReferenceCount.ReferenceController);
        return bVar2;
      }
    }
  }
LAB_146222589:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return false;
}

// IsEvaluating @ 146222640

bool __thiscall IMovieScenePlayer::IsEvaluating(IMovieScenePlayer *this)

{
  ushort uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TBitArray<FDefaultBitArrayAllocator> *pTVar5;
  
  uVar1 = this->UniqueIndex;
  if (UE::MovieScene::GGlobalPlayerUpdateFlags.NumBits <= (int)(uint)uVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pTVar5 = &UE::MovieScene::GGlobalPlayerUpdateFlags;
  if (UE::MovieScene::GGlobalPlayerUpdateFlags.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    pTVar5 = (TBitArray<FDefaultBitArrayAllocator> *)
             UE::MovieScene::GGlobalPlayerUpdateFlags.AllocatorInstance.SecondaryData;
  }
  return (*(uint *)((longlong)pTVar5 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
}

// IsPreview @ 146222720

bool __thiscall IMovieScenePlayer::IsPreview(IMovieScenePlayer *this)

{
  return false;
}

// NotifyBindingUpdate @ 1462256f0

void __thiscall
IMovieScenePlayer::NotifyBindingUpdate
          (IMovieScenePlayer *this,FGuid *param_1,FMovieSceneSequenceID *param_2,
          TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001462256f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)this->_padding_)();
  return;
}

// NotifyBindingsChanged @ 146225710

void __thiscall IMovieScenePlayer::NotifyBindingsChanged(IMovieScenePlayer *this)

{
  return;
}

// OnObjectSpawned @ 146225c60

void __thiscall
IMovieScenePlayer::OnObjectSpawned
          (IMovieScenePlayer *this,UObject *param_1,FMovieSceneEvaluationOperand *param_2)

{
  return;
}

// PopulateUpdateFlags @ 146228230

void __thiscall
IMovieScenePlayer::PopulateUpdateFlags
          (IMovieScenePlayer *this,ESequenceInstanceUpdateFlags *param_1)

{
  *param_1 = *param_1 | (NeedsPostEvaluation|NeedsPreEvaluation);
  return;
}

// PostEvaluation @ 146228390

void __thiscall
IMovieScenePlayer::PostEvaluation(IMovieScenePlayer *this,FMovieSceneContext *param_1)

{
  return;
}

// PreEvaluation @ 146229a90

void __thiscall
IMovieScenePlayer::PreEvaluation(IMovieScenePlayer *this,FMovieSceneContext *param_1)

{
  return;
}

// RemoveBindingOverride @ 14622f5a0

void __thiscall
IMovieScenePlayer::RemoveBindingOverride
          (IMovieScenePlayer *this,FMovieSceneEvaluationOperand *param_1)

{
  IStaticBindingOverridesPlaybackCapability *pIVar1;
  
  pIVar1 = GetStaticBindingOverrides(this);
  if (pIVar1 != (IStaticBindingOverridesPlaybackCapability *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014622f5c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*pIVar1 + 0x18))(pIVar1,param_1,*(code **)((longlong)*pIVar1 + 0x18));
    return;
  }
  return;
}

// ResetDirectorInstances @ 1462307e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall IMovieScenePlayer::ResetDirectorInstances(IMovieScenePlayer *this)

{
  FMovieSceneRootEvaluationTemplateInstance *this_00;
  FSequenceDirectorPlaybackCapability *this_01;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_18;
  
  this_00 = (FMovieSceneRootEvaluationTemplateInstance *)(**(code **)(this->_padding_ + 0x18))();
  FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState(this_00,&local_18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (local_18.Object != (FSharedPlaybackState *)0x0) {
    this_01 = UE::MovieScene::FSharedPlaybackState::
              FindCapability<UE::MovieScene::FSequenceDirectorPlaybackCapability>(local_18.Object);
    if (this_01 != (FSequenceDirectorPlaybackCapability *)0x0) {
      UE::MovieScene::FSequenceDirectorPlaybackCapability::ResetDirectorInstances(this_01);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return;
}

// ResolveBoundObjects @ 146231840

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
IMovieScenePlayer::ResolveBoundObjects
          (IMovieScenePlayer *this,FResolveParams *param_1,FGuid *param_2,
          FMovieSceneSequenceID param_3,UMovieSceneSequence *param_4,
          TArray<UObject_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_5)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSharedPlaybackState *pFVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  FMovieSceneBindingReferences *this_00;
  FMovieSceneRootEvaluationTemplateInstance *pFVar10;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *pTVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  TLess<void> local_res8;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState_const_,1> local_90;
  FSharedPlaybackState *local_80;
  TReferenceControllerBase<1> *local_78;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_70;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_60;
  TObjectPtr<UMovieSceneSequence>_u_0 local_50;
  FGuid local_48;
  uint local_38;
  UObject *local_30;
  
  plVar9 = (longlong *)(**(code **)(this->_padding_ + 0x60))();
  if ((plVar9 == (longlong *)0x0) ||
     (cVar5 = (**(code **)(*plVar9 + 0x10))(plVar9,param_2,param_3.Value), cVar5 != '\0')) {
    this_00 = (FMovieSceneBindingReferences *)(**(code **)(param_4->_padding_ + 0x2b8))(param_4);
    if (this_00 == (FMovieSceneBindingReferences *)0x0) {
      pcVar4 = *(code **)(param_4->_padding_ + 0x2d0);
      pFVar10 = (FMovieSceneRootEvaluationTemplateInstance *)
                (**(code **)(this->_padding_ + 0x18))(this);
      pTVar11 = FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState(pFVar10,&local_60)
      ;
      local_80 = pTVar11->Object;
      local_78 = (pTVar11->SharedReferenceCount).ReferenceController;
      if (local_78 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_78->SharedReferenceCount = (atomic<int>)((int)local_78->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_60.SharedReferenceCount.ReferenceController);
      (*pcVar4)(param_4,param_2,param_1,&local_80,param_5);
    }
    else {
      local_50.DebugPtr = param_4;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_4);
      }
      local_30 = param_1->Context;
      local_48.A = param_2->A;
      local_48.B = param_2->B;
      local_48.C = param_2->C;
      local_48.D = param_2->D;
      local_38 = param_3.Value;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_30 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_30);
      }
      pFVar10 = (FMovieSceneRootEvaluationTemplateInstance *)
                (**(code **)(this->_padding_ + 0x18))(this);
      pTVar11 = FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState(pFVar10,&local_70)
      ;
      pTVar2 = (pTVar11->SharedReferenceCount).ReferenceController;
      pFVar3 = pTVar11->Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_70.SharedReferenceCount.ReferenceController);
      local_res8 = SUB81(pFVar3,0);
      iVar1 = (this_00->SortedReferences).ArrayNum;
      uVar7 = AlgoImpl::
              LowerBoundInternal<FMovieSceneBindingReference_const_,int,FGuid,FGuid_FMovieSceneBindingReference::*,TLess<void>_>
                        ((FMovieSceneBindingReference *)
                         (this_00->SortedReferences).AllocatorInstance.Data,iVar1,&local_48,
                         (pdm_2fa4d329)0x0,local_res8);
      lVar13 = (longlong)(int)uVar7;
      if ((int)uVar7 < iVar1) {
        lVar14 = lVar13 * 0x30;
        uVar15 = uVar7;
        do {
          uVar8 = 0;
          if ((int)uVar15 < (this_00->SortedReferences).ArrayNum) {
            uVar8 = ~uVar15 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar12 = (this_00->SortedReferences).AllocatorInstance.Data + lVar14;
          if (((local_48.D != *(uint *)(pFVar12 + 0xc) || local_48.C != *(uint *)(pFVar12 + 8)) ||
              local_48.B != *(uint *)(pFVar12 + 4)) || local_48.A != *(uint *)pFVar12) break;
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_90.Object = pFVar3;
          local_90.SharedReferenceCount.ReferenceController = pTVar2;
          FMovieSceneBindingReferences::ResolveBindingInternal
                    (this_00,(FMovieSceneBindingResolveParams *)&local_50.ObjectPtr,param_1,
                     uVar15 - uVar7,uVar15,&local_90,param_5);
          uVar15 = uVar15 + 1;
          lVar13 = lVar13 + 1;
          lVar14 = lVar14 + 0x30;
        } while (lVar13 < iVar1);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
  }
  return;
}

// ResolveBoundObjects @ 146231b10

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
IMovieScenePlayer::ResolveBoundObjects
          (IMovieScenePlayer *this,FGuid *param_1,FMovieSceneSequenceID param_2,
          UMovieSceneSequence *param_3,UObject *param_4,
          TArray<UObject_*,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *param_5)

{
  TWeakObjectPtr<UObject,FWeakObjectPtr> *pTVar1;
  ForElementType<UObject_*> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FMovieSceneRootEvaluationTemplateInstance *pFVar6;
  FMovieSceneEvaluationState *this_00;
  ForElementType<UObject_*> FVar7;
  FWeakObjectPtr *pFVar8;
  FWeakObjectPtr local_res8;
  FMovieSceneSequenceID local_res18 [4];
  UObject *local_78;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_70;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_60;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_50;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_40;
  
  local_res18[0].Value = param_2.Value;
  pFVar6 = (FMovieSceneRootEvaluationTemplateInstance *)(**(code **)(this->_padding_ + 0x18))();
  FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState(pFVar6,&local_50);
  if (local_50.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_50.SharedReferenceCount.ReferenceController);
  if (local_50.Object == (FSharedPlaybackState *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.SharedReferenceCount.ReferenceController);
    local_60.DataPtr = (TWeakObjectPtr<UObject,FWeakObjectPtr> *)0x0;
    local_60.ArrayNum = 0;
  }
  else {
    pFVar6 = (FMovieSceneRootEvaluationTemplateInstance *)
             (**(code **)(this->_padding_ + 0x18))(this);
    FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState(pFVar6,&local_70);
    if (local_70.Object == (FSharedPlaybackState *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_70.SharedReferenceCount.ReferenceController);
      this_00 = (FMovieSceneEvaluationState *)0x0;
    }
    else {
      if ((local_70.Object == (FSharedPlaybackState *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = UE::MovieScene::FSharedPlaybackState::FindCapability<FMovieSceneEvaluationState>
                          (local_70.Object);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_70.SharedReferenceCount.ReferenceController);
    }
    local_40.Object = local_50.Object;
    local_40.SharedReferenceCount.ReferenceController =
         local_50.SharedReferenceCount.ReferenceController;
    if (local_50.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_50.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FMovieSceneEvaluationState::FindBoundObjects(this_00,&local_60,param_1,local_res18,&local_40);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.SharedReferenceCount.ReferenceController);
  }
  pTVar1 = local_60.DataPtr + local_60.ArrayNum;
  pFVar8 = &(local_60.DataPtr)->WeakPtr;
  do {
    if (pFVar8 == &pTVar1->WeakPtr) {
      return;
    }
    local_res8 = *pFVar8;
    local_78 = FWeakObjectPtr::Get(&local_res8);
    if (local_78 != (UObject *)0x0) {
      FVar2 = (param_5->AllocatorInstance).SecondaryData;
      FVar7 = (ForElementType<UObject_*>)param_5;
      if (FVar2 != (ForElementType<UObject_*>)0x0) {
        FVar7 = FVar2;
      }
      if ((ulonglong)FVar7 <= &local_78) {
        FVar7 = (ForElementType<UObject_*>)param_5;
        if (FVar2 != (ForElementType<UObject_*>)0x0) {
          FVar7 = FVar2;
        }
        if ((&local_78 < (UObject **)((longlong)FVar7 + (longlong)param_5->ArrayMax * 8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = param_5->ArrayNum;
      if (iVar5 == param_5->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                          (0x808,&param_5->AllocatorInstance,&param_5->ArrayMax);
      }
      param_5->ArrayNum = iVar5 + 1;
      FVar2 = (param_5->AllocatorInstance).SecondaryData;
      FVar7 = (ForElementType<UObject_*>)param_5;
      if (FVar2 != (ForElementType<UObject_*>)0x0) {
        FVar7 = FVar2;
      }
      *(UObject **)((longlong)FVar7 + (longlong)iVar5 * 8) = local_78;
    }
    pFVar8 = pFVar8 + 1;
  } while( true );
}

// RestorePreAnimatedState @ 146232f60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall IMovieScenePlayer::RestorePreAnimatedState(IMovieScenePlayer *this)

{
  FSharedPlaybackState *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FMovieSceneRootEvaluationTemplateInstance *this_00;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *pTVar5;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_28;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_18;
  
  FMovieScenePreAnimatedState::RestorePreAnimatedState(&this->PreAnimatedState);
  this_00 = (FMovieSceneRootEvaluationTemplateInstance *)(**(code **)(this->_padding_ + 0x18))(this)
  ;
  pTVar5 = FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState(this_00,&local_18);
  if (pTVar5->Object == (FSharedPlaybackState *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = pTVar5->Object;
  pTVar2 = (pTVar5->SharedReferenceCount).ReferenceController;
  (pTVar5->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar5->Object = (FSharedPlaybackState *)0x0;
  if (pFVar1 == (FSharedPlaybackState *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Object = pFVar1;
  local_28.SharedReferenceCount.ReferenceController = pTVar2;
  FMovieSceneEvaluationState::ClearObjectCaches(&this->State,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// SetIsEvaluatingFlag @ 146234e80

void __cdecl IMovieScenePlayer::SetIsEvaluatingFlag(ushort param_1,bool param_2)

{
  uint *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TBitArray<FDefaultBitArrayAllocator> *pTVar5;
  
  if (UE::MovieScene::GGlobalPlayerUpdateFlags.NumBits <= (int)(uint)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("UE::MovieScene::GGlobalPlayerUpdateFlags.IsValidIndex(InUniqueIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieScenePlayer.cpp"
                       ,0x67,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (UE::MovieScene::GGlobalPlayerUpdateFlags.NumBits <= (int)(uint)param_1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  pTVar5 = &UE::MovieScene::GGlobalPlayerUpdateFlags;
  if (UE::MovieScene::GGlobalPlayerUpdateFlags.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    pTVar5 = (TBitArray<FDefaultBitArrayAllocator> *)
             UE::MovieScene::GGlobalPlayerUpdateFlags.AllocatorInstance.SecondaryData;
  }
  puVar1 = (uint *)((longlong)pTVar5 + (ulonglong)(param_1 >> 5) * 4);
  uVar4 = 1 << ((byte)param_1 & 0x1f);
  if (param_2) {
    *puVar1 = *puVar1 | uVar4;
    return;
  }
  *puVar1 = ~uVar4 & *puVar1;
  return;
}

// SetViewportSettings @ 146236360

void __thiscall
IMovieScenePlayer::SetViewportSettings
          (IMovieScenePlayer *this,
          TMap<FViewportClient_*,EMovieSceneViewportParams,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FViewportClient_*,EMovieSceneViewportParams,0>_>
          *param_1)

{
  return;
}

// UpdateCameraCut @ 14623b990

void __thiscall
IMovieScenePlayer::UpdateCameraCut
          (IMovieScenePlayer *this,UObject *param_1,UObject *param_2,bool param_3)

{
  UObject *local_38;
  undefined1 local_30;
  undefined4 local_2c;
  undefined1 local_27;
  undefined8 local_20;
  undefined4 local_18;
  undefined2 local_14;
  
  local_2c = 0xbf800000;
  local_27 = 0;
  local_20 = 0;
  local_18 = 0xbf800000;
  local_14 = 0;
  local_38 = param_2;
  local_30 = param_3;
  (**(code **)(this->_padding_ + 0xd8))(this,param_1,&local_38);
  return;
}

// UpdateCameraCut @ 14623b9e0

void __thiscall
IMovieScenePlayer::UpdateCameraCut
          (IMovieScenePlayer *this,UObject *param_1,FMovieSceneCameraCutParams *param_2)

{
  return;
}

