// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 40

// TEntityTaskBase<UE::MovieScene::FEvaluateBoolChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<bool>_> @ 14675e8b0

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityTaskBase<UE::MovieScene::FEvaluateBoolChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<bool>_>
* __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::FEvaluateBoolChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<bool>_>
::
TEntityTaskBase<UE::MovieScene::FEvaluateBoolChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<bool>_>
          (TEntityTaskBase<UE::MovieScene::FEvaluateBoolChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<bool>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<bool>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->FilteredTask).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x18 = uVar1;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  FEntityComponentFilter::FEntityComponentFilter(&(this->FilteredTask).Filter,&param_2->Filter);
  (this->FilteredTask).DynamicReadMask.Bits.NumBits = 0;
  (this->FilteredTask).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->FilteredTask).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->FilteredTask).DynamicWriteMask.Bits.NumBits = 0;
  (this->FilteredTask).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->FilteredTask).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityTaskBase<UE::MovieScene::FEvaluateConstraintChannels,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_> @ 14675e960

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityTaskBase<UE::MovieScene::FEvaluateConstraintChannels,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
* __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::FEvaluateConstraintChannels,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
::
TEntityTaskBase<UE::MovieScene::FEvaluateConstraintChannels,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
          (TEntityTaskBase<UE::MovieScene::FEvaluateConstraintChannels,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
           *this,FEntityManager *param_1,
          TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&param_2->field_0x8;
  *(undefined8 *)&(this->FilteredTask).Components = *(undefined8 *)param_2;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&param_2->field_0x18;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x10 = *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x18 = uVar1;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x20 = *(undefined8 *)&param_2->field_0x20;
  (this->FilteredTask).Filter.AllMask.Bits.NumBits = 0;
  (this->FilteredTask).Filter.AllMask.Bits.MaxBits = 0x180;
  (this->FilteredTask).Filter.NoneMask.Bits.NumBits = 0;
  (this->FilteredTask).Filter.NoneMask.Bits.MaxBits = 0x180;
  (this->FilteredTask).Filter.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilteredTask).Filter.ComplexMasks.ArrayNum = 0;
  (this->FilteredTask).Filter.ComplexMasks.ArrayMax = 0;
  (this->FilteredTask).DynamicReadMask.Bits.NumBits = 0;
  (this->FilteredTask).DynamicReadMask.Bits.MaxBits = 0x180;
  (this->FilteredTask).DynamicWriteMask.Bits.NumBits = 0;
  (this->FilteredTask).DynamicWriteMask.Bits.MaxBits = 0x180;
  AddAccessorToFilter((FComponentAccess *)this,&(this->FilteredTask).Filter);
  AddAccessorToFilter((FComponentAccess *)&(this->FilteredTask).Components.field_0x2,
                      &(this->FilteredTask).Filter);
  AddAccessorToFilter((FComponentAccess *)&(this->FilteredTask).Components.field_0x4,
                      &(this->FilteredTask).Filter);
  AddAccessorToFilter((FComponentAccess *)&(this->FilteredTask).Components.field_0x6,
                      &(this->FilteredTask).Filter);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityTaskBase<UE::MovieScene::FEvaluateDoubleChannels_Cached,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_> @ 14675ea40

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityTaskBase<UE::MovieScene::FEvaluateDoubleChannels_Cached,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::FEvaluateDoubleChannels_Cached,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
::
TEntityTaskBase<UE::MovieScene::FEvaluateDoubleChannels_Cached,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
          (TEntityTaskBase<UE::MovieScene::FEvaluateDoubleChannels_Cached,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->FilteredTask).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x18 = uVar1;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  FEntityComponentFilter::FEntityComponentFilter(&(this->FilteredTask).Filter,&param_2->Filter);
  (this->FilteredTask).DynamicReadMask.Bits.NumBits = 0;
  (this->FilteredTask).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->FilteredTask).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->FilteredTask).DynamicWriteMask.Bits.NumBits = 0;
  (this->FilteredTask).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->FilteredTask).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityTaskBase<UE::MovieScene::FEvaluateFloatChannels_Cached,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_> @ 14675eaf0

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityTaskBase<UE::MovieScene::FEvaluateFloatChannels_Cached,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::FEvaluateFloatChannels_Cached,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
::
TEntityTaskBase<UE::MovieScene::FEvaluateFloatChannels_Cached,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
          (TEntityTaskBase<UE::MovieScene::FEvaluateFloatChannels_Cached,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->FilteredTask).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x18 = uVar1;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  FEntityComponentFilter::FEntityComponentFilter(&(this->FilteredTask).Filter,&param_2->Filter);
  (this->FilteredTask).DynamicReadMask.Bits.NumBits = 0;
  (this->FilteredTask).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->FilteredTask).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->FilteredTask).DynamicWriteMask.Bits.NumBits = 0;
  (this->FilteredTask).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->FilteredTask).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// Run @ 1467bec90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::FEvaluateBaseDoubleValues,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<double>_>
::Run(TEntityTaskBase<UE::MovieScene::FEvaluateBaseDoubleValues,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<double>_>
      *this,FEvaluateBaseDoubleValues *param_1)

{
  TComponentTypeID<double> TVar1;
  ushort uVar2;
  EComponentHeaderLockMode EVar3;
  FEntityManager *pFVar4;
  FEntityAllocationWriteContext FVar5;
  uchar *puVar6;
  code *pcVar7;
  EEntityThreadingModel EVar8;
  bool bVar9;
  FEntityAllocation *pFVar10;
  ulonglong uVar11;
  FComponentHeader *pFVar12;
  FComponentHeader *pFVar13;
  longlong lVar14;
  FEntityAllocation *pFVar15;
  FComponentHeader *pFVar16;
  FComponentHeader *pFVar17;
  longlong lVar18;
  double *pdVar19;
  FString local_f8;
  EComponentHeaderLockMode local_e8;
  FComponentHeader *local_e0;
  FEntityAllocation *local_d8;
  FEntityAllocationProxy local_c8;
  uchar *local_b8;
  FEntityAllocationIteratorProxy local_b0;
  FEntityAllocationIterator local_a0;
  FEntityAllocationProxy local_88;
  FEntityAllocationIterator local_78;
  undefined1 local_60 [40];
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar4 = this->EntityManager;
    local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Data.ArrayNum = 0;
    local_f8.Data.ArrayMax = 0;
    AccessorToString((FReadAccess *)this,pFVar4,&local_f8);
    AccessorToString((FReadAccess *)&(this->FilteredTask).Components.field_0x2,pFVar4,&local_f8);
    AccessorToString((FWriteAccess *)&(this->FilteredTask).Components.field_0x4,pFVar4,&local_f8);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityTaskBase<UE::MovieScene::FEvaluateBaseDoubleValues,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<double>_>::Run(UE::MovieScene::FEvaluateBaseDoubleValues&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  EVar8 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_b0,&(this->FilteredTask).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_a0,local_b0.Manager,local_b0.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_78,local_b0.Manager);
  bVar9 = FEntityAllocationIterator::operator!=(&local_a0,&local_78);
  if (bVar9) {
    do {
      pFVar17 = (FComponentHeader *)0x0;
      FEntityAllocationIterator::operator*(&local_a0,&local_88);
      local_d8 = FEntityAllocationProxy::GetAllocation(&local_88);
      if (EVar8 == NoThreading) {
        local_d8->LockMode = LockFree;
      }
      else {
        local_d8 = (FEntityAllocation *)0x0;
      }
      pFVar15 = local_d8;
      FVar5.SystemSerial = (this->WriteContext).SystemSerial;
      TVar1 = *(TComponentTypeID<double> *)&(this->FilteredTask).Components.field_0x4;
      local_c8.Manager = local_88.Manager;
      local_c8.AllocationIndex = local_88.AllocationIndex;
      local_c8._12_4_ = local_88._12_4_;
      pFVar10 = FEntityAllocationProxy::GetAllocation(&local_c8);
      FEntityAllocation::WriteComponents<double>
                (pFVar10,(TComponentLock<UE::MovieScene::TWrite<double>_> *)local_60,TVar1,FVar5);
      uVar2 = *(ushort *)&(this->FilteredTask).Components.field_0x2;
      pFVar10 = FEntityAllocationProxy::GetAllocation(&local_c8);
      local_e0 = pFVar10->ComponentHeaders;
      pFVar16 = local_e0 + pFVar10->NumComponents;
      for (; local_e0 != pFVar16; local_e0 = local_e0 + 1) {
        pFVar13 = local_e0;
        if ((local_e0->ComponentType).Value == uVar2) goto LAB_1467bee72;
      }
      local_e0 = (FComponentHeader *)0x0;
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Header",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                         ,0x2cd,L"");
      pFVar13 = pFVar17;
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
LAB_1467bee72:
      local_e8 = pFVar10->LockMode;
      if (local_e8 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar13->ReadWriteLock);
      }
      LOCK();
      pFVar13->ScheduledAccessCount = (atomic<int>)((int)pFVar13->ScheduledAccessCount + 1);
      UNLOCK();
      local_b8 = pFVar13->Components;
      uVar2 = *(ushort *)&(this->FilteredTask).Components;
      pFVar10 = FEntityAllocationProxy::GetAllocation(&local_c8);
      pFVar16 = pFVar10->ComponentHeaders;
      pFVar12 = pFVar16 + pFVar10->NumComponents;
      for (; pFVar16 != pFVar12; pFVar16 = pFVar16 + 1) {
        if ((pFVar16->ComponentType).Value == uVar2) goto LAB_1467beef9;
      }
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Header",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                         ,0x2cd,L"");
      pFVar16 = pFVar17;
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
LAB_1467beef9:
      EVar3 = pFVar10->LockMode;
      if (EVar3 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar16->ReadWriteLock);
      }
      LOCK();
      pFVar16->ScheduledAccessCount = (atomic<int>)((int)pFVar16->ScheduledAccessCount + 1);
      UNLOCK();
      puVar6 = pFVar16->Components;
      pFVar10 = FEntityAllocationProxy::GetAllocation(&local_c8);
      uVar2 = pFVar10->Size;
      if ((ulonglong)uVar2 != 0) {
        lVar14 = (longlong)local_b8 - local_60._24_8_;
        lVar18 = (longlong)puVar6 - local_60._24_8_;
        pdVar19 = (double *)local_60._24_8_;
        do {
          bVar9 = FMovieSceneDoubleChannel::Evaluate
                            (*(FMovieSceneDoubleChannel **)((longlong)pdVar19 + lVar18),
                             *(FFrameTime *)(lVar14 + (longlong)pdVar19),pdVar19);
          if (!bVar9) {
            *pdVar19 = 2.2250738585072014e-308;
          }
          pFVar17 = (FComponentHeader *)((longlong)&pFVar17->_padding_ + 1);
          pdVar19 = pdVar19 + 1;
          pFVar13 = local_e0;
          pFVar15 = local_d8;
        } while ((longlong)pFVar17 < (longlong)(ulonglong)uVar2);
      }
      if (local_60._0_8_ != 0) {
        uVar11 = local_60._8_8_;
        if ((ulonglong)local_60._8_8_ < *(ulonglong *)(local_60._0_8_ + 0x28)) {
          uVar11 = *(ulonglong *)(local_60._0_8_ + 0x28);
        }
        *(ulonglong *)(local_60._0_8_ + 0x28) = uVar11;
        LOCK();
        *(int *)(local_60._0_8_ + 0x30) = *(int *)(local_60._0_8_ + 0x30) + -1;
        UNLOCK();
        if (local_60._16_4_ == 1) {
          ReleaseSRWLockExclusive((PSRWLOCK)(local_60._0_8_ + 0x20));
        }
      }
      LOCK();
      pFVar13->ScheduledAccessCount = (atomic<int>)((int)pFVar13->ScheduledAccessCount + -1);
      UNLOCK();
      if (local_e8 == Mutex) {
        ReleaseSRWLockShared((PSRWLOCK)&pFVar13->ReadWriteLock);
      }
      LOCK();
      pFVar16->ScheduledAccessCount = (atomic<int>)((int)pFVar16->ScheduledAccessCount + -1);
      UNLOCK();
      if (EVar3 == Mutex) {
        ReleaseSRWLockShared((PSRWLOCK)&pFVar16->ReadWriteLock);
      }
      if (pFVar15 != (FEntityAllocation *)0x0) {
        pFVar15->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_a0);
      bVar9 = FEntityAllocationIterator::operator!=(&local_a0,&local_78);
    } while (bVar9);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_78);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_a0);
  return;
}

// Run @ 1467bf060

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::FEvaluateBoolChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<bool>_>
::Run(TEntityTaskBase<UE::MovieScene::FEvaluateBoolChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<bool>_>
      *this,FEvaluateBoolChannels *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->FilteredTask).Components.field_0x2,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FWriteAccess *)&(this->FilteredTask).Components.field_0x4,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityTaskBase<UE::MovieScene::FEvaluateBoolChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<bool>_>::Run(UE::MovieScene::FEvaluateBoolChannels&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->FilteredTask).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
      ForEachEntityImpl<UE::MovieScene::FEvaluateBoolChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<bool>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceBoolChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<bool>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1467bf200

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::FEvaluateByteChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<unsigned_char>_>
::Run(TEntityTaskBase<UE::MovieScene::FEvaluateByteChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<unsigned_char>_>
      *this,FEvaluateByteChannels *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->FilteredTask).Components.field_0x2,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FWriteAccess *)&(this->FilteredTask).Components.field_0x4,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityTaskBase<UE::MovieScene::FEvaluateByteChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<unsigned_char>_>::Run(UE::MovieScene::FEvaluateByteChannels&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->FilteredTask).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
      ForEachEntityImpl<UE::MovieScene::FEvaluateByteChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<unsigned_char>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceByteChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<unsigned_char>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1467bf3a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::FEvaluateConstraintChannels,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
::Run(TEntityTaskBase<UE::MovieScene::FEvaluateConstraintChannels,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
      *this,FEvaluateConstraintChannels *param_1)

{
  FEntityManager *pFVar1;
  UMovieSceneConstraintSystem *pUVar2;
  EEntityThreadingModel EVar3;
  bool bVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocation *pFVar6;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->FilteredTask).Components.field_0x2,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->FilteredTask).Components.field_0x4,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->FilteredTask).Components.field_0x6,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityTaskBase<UE::MovieScene::FEvaluateConstraintChannels,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>::Run(UE::MovieScene::FEvaluateConstraintChannels&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  pUVar2 = param_1->System;
  (pUVar2->DynamicOffsets).ArrayNum = 0;
  if ((pUVar2->DynamicOffsets).ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(pUVar2->DynamicOffsets).AllocatorInstance,0,
               &(pUVar2->DynamicOffsets).ArrayMax);
  }
  EVar3 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->FilteredTask).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar4 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar4) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar5 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar6 = (FEntityAllocation *)0x0;
      if (EVar3 == NoThreading) {
        pFVar5->LockMode = LockFree;
        pFVar6 = pFVar5;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3>_>::
      ForEachEntityImpl<UE::MovieScene::FEvaluateConstraintChannels,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadAccess<UE::MovieScene::FInstanceHandle>,UE::MovieScene::TReadAccess<FConstraintComponentData>,UE::MovieScene::TReadAccess<FFrameTime>_>
                  *)this);
      if (pFVar6 != (FEntityAllocation *)0x0) {
        pFVar6->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar4 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar4);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1467bf590

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::FEvaluateDoubleChannels_Cached,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
::Run(TEntityTaskBase<UE::MovieScene::FEvaluateDoubleChannels_Cached,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
      *this,FEvaluateDoubleChannels_Cached *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->FilteredTask).Components.field_0x2,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FWriteAccess *)&(this->FilteredTask).Components.field_0x4,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FWriteAccess *)&(this->FilteredTask).Components.field_0x6,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityTaskBase<UE::MovieScene::FEvaluateDoubleChannels_Cached,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>::Run(UE::MovieScene::FEvaluateDoubleChannels_Cached&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->FilteredTask).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3>_>::
      ForEachEntityImpl<UE::MovieScene::FEvaluateDoubleChannels_Cached,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1467bf740

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::FEvaluateDoublePerlinNoiseChannels,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>
::Run(TEntityTaskBase<UE::MovieScene::FEvaluateDoublePerlinNoiseChannels,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>
      *this,FEvaluateDoublePerlinNoiseChannels *param_1)

{
  TComponentTypeID<double> TVar1;
  ushort uVar2;
  EComponentHeaderLockMode EVar3;
  FEntityManager *pFVar4;
  FEntityAllocationWriteContext FVar5;
  uchar *puVar6;
  code *pcVar7;
  double dVar8;
  uchar *puVar9;
  EEntityThreadingModel EVar10;
  bool bVar11;
  FEntityAllocation *pFVar12;
  ulonglong uVar13;
  FComponentHeader *pFVar14;
  FEntityAllocation *pFVar15;
  FComponentHeader *pFVar16;
  FComponentHeader *pFVar17;
  longlong lVar18;
  double *pdVar19;
  FComponentHeader *pFVar20;
  FString local_108;
  EComponentHeaderLockMode local_f8;
  FComponentHeader *local_f0;
  FEntityAllocation *local_e8;
  FEntityAllocationProxy local_d8;
  uchar *local_c0;
  FEntityAllocationIteratorProxy local_b8;
  FEntityAllocationIterator local_a8;
  FEntityAllocationProxy local_88;
  FEntityAllocationIterator local_78;
  undefined1 local_60 [40];
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar4 = this->EntityManager;
    local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.Data.ArrayNum = 0;
    local_108.Data.ArrayMax = 0;
    AccessorToString((FReadAccess *)this,pFVar4,&local_108);
    AccessorToString((FReadAccess *)&(this->FilteredTask).Components.field_0x2,pFVar4,&local_108);
    AccessorToString((FWriteAccess *)&(this->FilteredTask).Components.field_0x4,pFVar4,&local_108);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityTaskBase<UE::MovieScene::FEvaluateDoublePerlinNoiseChannels,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>::Run(UE::MovieScene::FEvaluateDoublePerlinNoiseChannels&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
  }
  EVar10 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_b8,&(this->FilteredTask).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_a8,local_b8.Manager,local_b8.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_78,local_b8.Manager);
  bVar11 = FEntityAllocationIterator::operator!=(&local_a8,&local_78);
  if (bVar11) {
    do {
      pFVar17 = (FComponentHeader *)0x0;
      FEntityAllocationIterator::operator*(&local_a8,&local_88);
      local_e8 = FEntityAllocationProxy::GetAllocation(&local_88);
      if (EVar10 == NoThreading) {
        local_e8->LockMode = LockFree;
      }
      else {
        local_e8 = (FEntityAllocation *)0x0;
      }
      pFVar15 = local_e8;
      FVar5.SystemSerial = (this->WriteContext).SystemSerial;
      TVar1 = *(TComponentTypeID<double> *)&(this->FilteredTask).Components.field_0x4;
      local_d8.Manager = local_88.Manager;
      local_d8.AllocationIndex = local_88.AllocationIndex;
      local_d8._12_4_ = local_88._12_4_;
      pFVar12 = FEntityAllocationProxy::GetAllocation(&local_d8);
      FEntityAllocation::WriteComponents<double>
                (pFVar12,(TComponentLock<UE::MovieScene::TWrite<double>_> *)local_60,TVar1,FVar5);
      uVar2 = *(ushort *)&(this->FilteredTask).Components.field_0x2;
      pFVar12 = FEntityAllocationProxy::GetAllocation(&local_d8);
      local_f0 = pFVar12->ComponentHeaders;
      pFVar16 = local_f0 + pFVar12->NumComponents;
      for (; local_f0 != pFVar16; local_f0 = local_f0 + 1) {
        pFVar14 = local_f0;
        if ((local_f0->ComponentType).Value == uVar2) goto LAB_1467bf932;
      }
      local_f0 = (FComponentHeader *)0x0;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Header",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x2cd,L"");
      pFVar14 = pFVar17;
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
LAB_1467bf932:
      local_f8 = pFVar12->LockMode;
      if (local_f8 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar14->ReadWriteLock);
      }
      LOCK();
      pFVar14->ScheduledAccessCount = (atomic<int>)((int)pFVar14->ScheduledAccessCount + 1);
      UNLOCK();
      local_c0 = pFVar14->Components;
      uVar2 = *(ushort *)&(this->FilteredTask).Components;
      pFVar12 = FEntityAllocationProxy::GetAllocation(&local_d8);
      pFVar16 = pFVar12->ComponentHeaders;
      pFVar20 = pFVar16 + pFVar12->NumComponents;
      for (; pFVar16 != pFVar20; pFVar16 = pFVar16 + 1) {
        if ((pFVar16->ComponentType).Value == uVar2) goto LAB_1467bf9b9;
      }
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Header",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x2cd,L"");
      pFVar16 = pFVar17;
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
LAB_1467bf9b9:
      EVar3 = pFVar12->LockMode;
      if (EVar3 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar16->ReadWriteLock);
      }
      LOCK();
      pFVar16->ScheduledAccessCount = (atomic<int>)((int)pFVar16->ScheduledAccessCount + 1);
      UNLOCK();
      puVar6 = pFVar16->Components;
      pFVar12 = FEntityAllocationProxy::GetAllocation(&local_d8);
      puVar9 = local_c0;
      uVar2 = pFVar12->Size;
      if (uVar2 != 0) {
        lVar18 = (longlong)puVar6 - local_60._24_8_;
        pdVar19 = (double *)local_60._24_8_;
        pFVar20 = pFVar17;
        do {
          dVar8 = FMovieSceneDoublePerlinNoiseChannel::Evaluate
                            ((FPerlinNoiseParams *)(puVar9 + (longlong)(int)pFVar20 * 0x18),
                             *(double *)((longlong)pdVar19 + lVar18));
          pFVar20 = (FComponentHeader *)(ulonglong)((int)pFVar20 + 1);
          *pdVar19 = dVar8;
          pFVar17 = (FComponentHeader *)((longlong)&pFVar17->_padding_ + 1);
          pdVar19 = pdVar19 + 1;
          pFVar14 = local_f0;
          pFVar15 = local_e8;
        } while ((longlong)pFVar17 < (longlong)(ulonglong)uVar2);
      }
      if (local_60._0_8_ != 0) {
        uVar13 = local_60._8_8_;
        if ((ulonglong)local_60._8_8_ < *(ulonglong *)(local_60._0_8_ + 0x28)) {
          uVar13 = *(ulonglong *)(local_60._0_8_ + 0x28);
        }
        *(ulonglong *)(local_60._0_8_ + 0x28) = uVar13;
        LOCK();
        *(int *)(local_60._0_8_ + 0x30) = *(int *)(local_60._0_8_ + 0x30) + -1;
        UNLOCK();
        if (local_60._16_4_ == 1) {
          ReleaseSRWLockExclusive((PSRWLOCK)(local_60._0_8_ + 0x20));
        }
      }
      LOCK();
      pFVar14->ScheduledAccessCount = (atomic<int>)((int)pFVar14->ScheduledAccessCount + -1);
      UNLOCK();
      if (local_f8 == Mutex) {
        ReleaseSRWLockShared((PSRWLOCK)&pFVar14->ReadWriteLock);
      }
      LOCK();
      pFVar16->ScheduledAccessCount = (atomic<int>)((int)pFVar16->ScheduledAccessCount + -1);
      UNLOCK();
      if (EVar3 == Mutex) {
        ReleaseSRWLockShared((PSRWLOCK)&pFVar16->ReadWriteLock);
      }
      if (pFVar15 != (FEntityAllocation *)0x0) {
        pFVar15->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_a8);
      bVar11 = FEntityAllocationIterator::operator!=(&local_a8,&local_78);
    } while (bVar11);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_78);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_a8);
  return;
}

// Run @ 1467bfb10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::FEvaluateFloatChannels_Cached,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
::Run(TEntityTaskBase<UE::MovieScene::FEvaluateFloatChannels_Cached,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
      *this,FEvaluateFloatChannels_Cached *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->FilteredTask).Components.field_0x2,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FWriteAccess *)&(this->FilteredTask).Components.field_0x4,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FWriteAccess *)&(this->FilteredTask).Components.field_0x6,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityTaskBase<UE::MovieScene::FEvaluateFloatChannels_Cached,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>::Run(UE::MovieScene::FEvaluateFloatChannels_Cached&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->FilteredTask).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3>_>::
      ForEachEntityImpl<UE::MovieScene::FEvaluateFloatChannels_Cached,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceFloatChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::Interpolation::FCachedInterpolation>,UE::MovieScene::TWriteAccess<double>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1467bfcc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::FEvaluateFloatPerlinNoiseChannels,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>
::Run(TEntityTaskBase<UE::MovieScene::FEvaluateFloatPerlinNoiseChannels,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>
      *this,FEvaluateFloatPerlinNoiseChannels *param_1)

{
  TComponentTypeID<double> TVar1;
  ushort uVar2;
  EComponentHeaderLockMode EVar3;
  FEntityManager *pFVar4;
  FEntityAllocationWriteContext FVar5;
  uchar *puVar6;
  code *pcVar7;
  uchar *puVar8;
  EEntityThreadingModel EVar9;
  bool bVar10;
  FEntityAllocation *pFVar11;
  ulonglong uVar12;
  FComponentHeader *pFVar13;
  FEntityAllocation *pFVar14;
  FComponentHeader *pFVar15;
  FComponentHeader *pFVar16;
  longlong lVar17;
  double *pdVar18;
  FComponentHeader *pFVar19;
  float fVar20;
  FString local_108;
  EComponentHeaderLockMode local_f8;
  FComponentHeader *local_f0;
  FEntityAllocation *local_e8;
  FEntityAllocationProxy local_d8;
  uchar *local_c0;
  FEntityAllocationIteratorProxy local_b8;
  FEntityAllocationIterator local_a8;
  FEntityAllocationProxy local_88;
  FEntityAllocationIterator local_78;
  undefined1 local_60 [40];
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar4 = this->EntityManager;
    local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.Data.ArrayNum = 0;
    local_108.Data.ArrayMax = 0;
    AccessorToString((FReadAccess *)this,pFVar4,&local_108);
    AccessorToString((FReadAccess *)&(this->FilteredTask).Components.field_0x2,pFVar4,&local_108);
    AccessorToString((FWriteAccess *)&(this->FilteredTask).Components.field_0x4,pFVar4,&local_108);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityTaskBase<UE::MovieScene::FEvaluateFloatPerlinNoiseChannels,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<FPerlinNoiseParams>,UE::MovieScene::TWriteAccess<double>_>::Run(UE::MovieScene::FEvaluateFloatPerlinNoiseChannels&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
  }
  EVar9 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_b8,&(this->FilteredTask).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_a8,local_b8.Manager,local_b8.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_78,local_b8.Manager);
  bVar10 = FEntityAllocationIterator::operator!=(&local_a8,&local_78);
  if (bVar10) {
    do {
      pFVar16 = (FComponentHeader *)0x0;
      FEntityAllocationIterator::operator*(&local_a8,&local_88);
      local_e8 = FEntityAllocationProxy::GetAllocation(&local_88);
      if (EVar9 == NoThreading) {
        local_e8->LockMode = LockFree;
      }
      else {
        local_e8 = (FEntityAllocation *)0x0;
      }
      pFVar14 = local_e8;
      FVar5.SystemSerial = (this->WriteContext).SystemSerial;
      TVar1 = *(TComponentTypeID<double> *)&(this->FilteredTask).Components.field_0x4;
      local_d8.Manager = local_88.Manager;
      local_d8.AllocationIndex = local_88.AllocationIndex;
      local_d8._12_4_ = local_88._12_4_;
      pFVar11 = FEntityAllocationProxy::GetAllocation(&local_d8);
      FEntityAllocation::WriteComponents<double>
                (pFVar11,(TComponentLock<UE::MovieScene::TWrite<double>_> *)local_60,TVar1,FVar5);
      uVar2 = *(ushort *)&(this->FilteredTask).Components.field_0x2;
      pFVar11 = FEntityAllocationProxy::GetAllocation(&local_d8);
      local_f0 = pFVar11->ComponentHeaders;
      pFVar15 = local_f0 + pFVar11->NumComponents;
      for (; local_f0 != pFVar15; local_f0 = local_f0 + 1) {
        pFVar13 = local_f0;
        if ((local_f0->ComponentType).Value == uVar2) goto LAB_1467bfeb2;
      }
      local_f0 = (FComponentHeader *)0x0;
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Header",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x2cd,L"");
      pFVar13 = pFVar16;
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
LAB_1467bfeb2:
      local_f8 = pFVar11->LockMode;
      if (local_f8 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar13->ReadWriteLock);
      }
      LOCK();
      pFVar13->ScheduledAccessCount = (atomic<int>)((int)pFVar13->ScheduledAccessCount + 1);
      UNLOCK();
      local_c0 = pFVar13->Components;
      uVar2 = *(ushort *)&(this->FilteredTask).Components;
      pFVar11 = FEntityAllocationProxy::GetAllocation(&local_d8);
      pFVar15 = pFVar11->ComponentHeaders;
      pFVar19 = pFVar15 + pFVar11->NumComponents;
      for (; pFVar15 != pFVar19; pFVar15 = pFVar15 + 1) {
        if ((pFVar15->ComponentType).Value == uVar2) goto LAB_1467bff39;
      }
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Header",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x2cd,L"");
      pFVar15 = pFVar16;
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
LAB_1467bff39:
      EVar3 = pFVar11->LockMode;
      if (EVar3 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar15->ReadWriteLock);
      }
      LOCK();
      pFVar15->ScheduledAccessCount = (atomic<int>)((int)pFVar15->ScheduledAccessCount + 1);
      UNLOCK();
      puVar6 = pFVar15->Components;
      pFVar11 = FEntityAllocationProxy::GetAllocation(&local_d8);
      puVar8 = local_c0;
      uVar2 = pFVar11->Size;
      if (uVar2 != 0) {
        lVar17 = (longlong)puVar6 - local_60._24_8_;
        pdVar18 = (double *)local_60._24_8_;
        pFVar19 = pFVar16;
        do {
          fVar20 = FMovieSceneFloatPerlinNoiseChannel::Evaluate
                             ((FPerlinNoiseParams *)(puVar8 + (longlong)(int)pFVar19 * 0x18),
                              *(double *)((longlong)pdVar18 + lVar17));
          pFVar19 = (FComponentHeader *)(ulonglong)((int)pFVar19 + 1);
          pFVar16 = (FComponentHeader *)((longlong)&pFVar16->_padding_ + 1);
          *pdVar18 = (double)fVar20;
          pFVar13 = local_f0;
          pFVar14 = local_e8;
          pdVar18 = pdVar18 + 1;
        } while ((longlong)pFVar16 < (longlong)(ulonglong)uVar2);
      }
      if (local_60._0_8_ != 0) {
        uVar12 = local_60._8_8_;
        if ((ulonglong)local_60._8_8_ < *(ulonglong *)(local_60._0_8_ + 0x28)) {
          uVar12 = *(ulonglong *)(local_60._0_8_ + 0x28);
        }
        *(ulonglong *)(local_60._0_8_ + 0x28) = uVar12;
        LOCK();
        *(int *)(local_60._0_8_ + 0x30) = *(int *)(local_60._0_8_ + 0x30) + -1;
        UNLOCK();
        if (local_60._16_4_ == 1) {
          ReleaseSRWLockExclusive((PSRWLOCK)(local_60._0_8_ + 0x20));
        }
      }
      LOCK();
      pFVar13->ScheduledAccessCount = (atomic<int>)((int)pFVar13->ScheduledAccessCount + -1);
      UNLOCK();
      if (local_f8 == Mutex) {
        ReleaseSRWLockShared((PSRWLOCK)&pFVar13->ReadWriteLock);
      }
      LOCK();
      pFVar15->ScheduledAccessCount = (atomic<int>)((int)pFVar15->ScheduledAccessCount + -1);
      UNLOCK();
      if (EVar3 == Mutex) {
        ReleaseSRWLockShared((PSRWLOCK)&pFVar15->ReadWriteLock);
      }
      if (pFVar14 != (FEntityAllocation *)0x0) {
        pFVar14->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_a8);
      bVar10 = FEntityAllocationIterator::operator!=(&local_a8,&local_78);
    } while (bVar10);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_78);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_a8);
  return;
}

// Run @ 1467c00a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::FEvaluateIntegerChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<__int64>_>
::Run(TEntityTaskBase<UE::MovieScene::FEvaluateIntegerChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<__int64>_>
      *this,FEvaluateIntegerChannels *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->FilteredTask).Components.field_0x2,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FWriteAccess *)&(this->FilteredTask).Components.field_0x4,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityTaskBase<UE::MovieScene::FEvaluateIntegerChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<__int64>_>::Run(UE::MovieScene::FEvaluateIntegerChannels&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->FilteredTask).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
      ForEachEntityImpl<UE::MovieScene::FEvaluateIntegerChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<__int64>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceIntegerChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<__int64>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// TEntityTaskBase<UE::MovieScene::TSimpleBlenderCombineResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<bool>_> @ 146806d50

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityTaskBase<UE::MovieScene::TSimpleBlenderCombineResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<bool>_>
* __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::TSimpleBlenderCombineResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<bool>_>
::
TEntityTaskBase<UE::MovieScene::TSimpleBlenderCombineResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<bool>_>
          (TEntityTaskBase<UE::MovieScene::TSimpleBlenderCombineResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<bool>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<bool>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->FilteredTask).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x18 = uVar1;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  FEntityComponentFilter::FEntityComponentFilter(&(this->FilteredTask).Filter,&param_2->Filter);
  (this->FilteredTask).DynamicReadMask.Bits.NumBits = 0;
  (this->FilteredTask).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->FilteredTask).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->FilteredTask).DynamicWriteMask.Bits.NumBits = 0;
  (this->FilteredTask).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->FilteredTask).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityTaskBase<UE::MovieScene::TSimpleBlenderGatherResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<bool>_> @ 146806e00

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityTaskBase<UE::MovieScene::TSimpleBlenderGatherResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<bool>_>
* __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::TSimpleBlenderGatherResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<bool>_>
::
TEntityTaskBase<UE::MovieScene::TSimpleBlenderGatherResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<bool>_>
          (TEntityTaskBase<UE::MovieScene::TSimpleBlenderGatherResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<bool>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<bool>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->FilteredTask).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x18 = uVar1;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  FEntityComponentFilter::FEntityComponentFilter(&(this->FilteredTask).Filter,&param_2->Filter);
  (this->FilteredTask).DynamicReadMask.Bits.NumBits = 0;
  (this->FilteredTask).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->FilteredTask).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->FilteredTask).DynamicWriteMask.Bits.NumBits = 0;
  (this->FilteredTask).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->FilteredTask).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityTaskBase<UE::MovieScene::FAccumulateAbsoluteWeights,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>_> @ 146806eb0

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityTaskBase<UE::MovieScene::FAccumulateAbsoluteWeights,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::FAccumulateAbsoluteWeights,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>_>
::
TEntityTaskBase<UE::MovieScene::FAccumulateAbsoluteWeights,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>_>
          (TEntityTaskBase<UE::MovieScene::FAccumulateAbsoluteWeights,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->FilteredTask).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x18 = uVar1;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  FEntityComponentFilter::FEntityComponentFilter(&(this->FilteredTask).Filter,&param_2->Filter);
  (this->FilteredTask).DynamicReadMask.Bits.NumBits = 0;
  (this->FilteredTask).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->FilteredTask).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->FilteredTask).DynamicWriteMask.Bits.NumBits = 0;
  (this->FilteredTask).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->FilteredTask).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityTaskBase<UE::MovieScene::FCombineTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_> @ 146806f60

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityTaskBase<UE::MovieScene::FCombineTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>
* __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::FCombineTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>
::
TEntityTaskBase<UE::MovieScene::FCombineTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>
          (TEntityTaskBase<UE::MovieScene::FCombineTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->FilteredTask).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x28;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x28 = uVar1;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x30 =
       *(undefined8 *)&(param_2->Components).field_0x30;
  FEntityComponentFilter::FEntityComponentFilter(&(this->FilteredTask).Filter,&param_2->Filter);
  (this->FilteredTask).DynamicReadMask.Bits.NumBits = 0;
  (this->FilteredTask).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->FilteredTask).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->FilteredTask).DynamicWriteMask.Bits.NumBits = 0;
  (this->FilteredTask).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->FilteredTask).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// Run @ 146866310

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::TSimpleBlenderCombineResults<unsigned_char,UE::MovieScene::TSimpleBlendResultTraits<unsigned_char>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<unsigned_char>_>
::Run(TEntityTaskBase<UE::MovieScene::TSimpleBlenderCombineResults<unsigned_char,UE::MovieScene::TSimpleBlendResultTraits<unsigned_char>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<unsigned_char>_>
      *this,TSimpleBlenderCombineResults<unsigned_char,UE::MovieScene::TSimpleBlendResultTraits<unsigned_char>_>
            *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString((FWriteAccess *)&(this->FilteredTask).Components.field_0x2,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityTaskBase<UE::MovieScene::TSimpleBlenderCombineResults<unsigned_char,UE::MovieScene::TSimpleBlendResultTraits<unsigned_char>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<unsigned_char>_>::Run(UE::MovieScene::TSimpleBlenderCombineResults<unsigned_char,UE::MovieScene::TSimpleBlendResultTraits<unsigned_char>_>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->FilteredTask).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1>_>::
      ForEachEntityImpl<UE::MovieScene::TSimpleBlenderCombineResults<unsigned_char,UE::MovieScene::TSimpleBlendResultTraits<unsigned_char>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<unsigned_char>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<unsigned_char>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1468664a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::TSimpleBlenderCombineResults<unsigned_char,UE::MovieScene::FSimpleBlenderEnumResultTraits>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<unsigned_char>_>
::Run(TEntityTaskBase<UE::MovieScene::TSimpleBlenderCombineResults<unsigned_char,UE::MovieScene::FSimpleBlenderEnumResultTraits>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<unsigned_char>_>
      *this,TSimpleBlenderCombineResults<unsigned_char,UE::MovieScene::FSimpleBlenderEnumResultTraits>
            *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString((FWriteAccess *)&(this->FilteredTask).Components.field_0x2,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityTaskBase<UE::MovieScene::TSimpleBlenderCombineResults<unsigned_char,UE::MovieScene::FSimpleBlenderEnumResultTraits>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<unsigned_char>_>::Run(UE::MovieScene::TSimpleBlenderCombineResults<unsigned_char,UE::MovieScene::FSimpleBlenderEnumResultTraits>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->FilteredTask).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1>_>::
      ForEachEntityImpl<UE::MovieScene::TSimpleBlenderCombineResults<unsigned_char,UE::MovieScene::FSimpleBlenderEnumResultTraits>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<unsigned_char>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<unsigned_char>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 146866630

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::TSimpleBlenderCombineResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<bool>_>
::Run(TEntityTaskBase<UE::MovieScene::TSimpleBlenderCombineResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<bool>_>
      *this,TSimpleBlenderCombineResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>
            *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString((FWriteAccess *)&(this->FilteredTask).Components.field_0x2,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityTaskBase<UE::MovieScene::TSimpleBlenderCombineResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<bool>_>::Run(UE::MovieScene::TSimpleBlenderCombineResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->FilteredTask).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1>_>::
      ForEachEntityImpl<UE::MovieScene::TSimpleBlenderCombineResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<bool>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<bool>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1468667c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::TSimpleBlenderGatherResults<unsigned_char,UE::MovieScene::TSimpleBlendResultTraits<unsigned_char>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<unsigned_char>_>
::Run(TEntityTaskBase<UE::MovieScene::TSimpleBlenderGatherResults<unsigned_char,UE::MovieScene::TSimpleBlendResultTraits<unsigned_char>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<unsigned_char>_>
      *this,TSimpleBlenderGatherResults<unsigned_char,UE::MovieScene::TSimpleBlendResultTraits<unsigned_char>_>
            *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->FilteredTask).Components.field_0x2,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityTaskBase<UE::MovieScene::TSimpleBlenderGatherResults<unsigned_char,UE::MovieScene::TSimpleBlendResultTraits<unsigned_char>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<unsigned_char>_>::Run(UE::MovieScene::TSimpleBlenderGatherResults<unsigned_char,UE::MovieScene::TSimpleBlendResultTraits<unsigned_char>_>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->FilteredTask).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1>_>::
      ForEachEntityImpl<UE::MovieScene::TSimpleBlenderGatherResults<unsigned_char,UE::MovieScene::TSimpleBlendResultTraits<unsigned_char>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<unsigned_char>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<unsigned_char>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 146866950

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::TSimpleBlenderGatherResults<unsigned_char,UE::MovieScene::FSimpleBlenderEnumResultTraits>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<unsigned_char>_>
::Run(TEntityTaskBase<UE::MovieScene::TSimpleBlenderGatherResults<unsigned_char,UE::MovieScene::FSimpleBlenderEnumResultTraits>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<unsigned_char>_>
      *this,TSimpleBlenderGatherResults<unsigned_char,UE::MovieScene::FSimpleBlenderEnumResultTraits>
            *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->FilteredTask).Components.field_0x2,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityTaskBase<UE::MovieScene::TSimpleBlenderGatherResults<unsigned_char,UE::MovieScene::FSimpleBlenderEnumResultTraits>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<unsigned_char>_>::Run(UE::MovieScene::TSimpleBlenderGatherResults<unsigned_char,UE::MovieScene::FSimpleBlenderEnumResultTraits>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->FilteredTask).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1>_>::
      ForEachEntityImpl<UE::MovieScene::TSimpleBlenderGatherResults<unsigned_char,UE::MovieScene::FSimpleBlenderEnumResultTraits>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<unsigned_char>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<unsigned_char>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 146866ae0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::TSimpleBlenderGatherResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<bool>_>
::Run(TEntityTaskBase<UE::MovieScene::TSimpleBlenderGatherResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<bool>_>
      *this,TSimpleBlenderGatherResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>
            *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->FilteredTask).Components.field_0x2,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityTaskBase<UE::MovieScene::TSimpleBlenderGatherResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<bool>_>::Run(UE::MovieScene::TSimpleBlenderGatherResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->FilteredTask).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1>_>::
      ForEachEntityImpl<UE::MovieScene::TSimpleBlenderGatherResults<bool,UE::MovieScene::TSimpleBlendResultTraits<bool>_>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<bool>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<bool>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 146866c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::FAbsoluteAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::Run(TEntityTaskBase<UE::MovieScene::FAbsoluteAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
      *this,FAbsoluteAccumulationTask *param_1)

{
  EEntityThreadingModel EVar1;
  bool bVar2;
  FEntityAllocation *pFVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocationIteratorProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationProxy local_48;
  FEntityAllocationIterator local_38;
  FEntityAllocationIterator local_20;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
    ::ToString((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                *)this,(FString *)&local_58,this->EntityManager);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityTaskBase<UE::MovieScene::FAbsoluteAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>::Run(UE::MovieScene::FAbsoluteAccumulationTask&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_58.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_58.Manager);
    }
  }
  EVar1 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_68,&(this->FilteredTask).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_38,local_68.Manager,local_68.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_20,local_68.Manager);
  bVar2 = FEntityAllocationIterator::operator!=(&local_38,&local_20);
  if (bVar2) {
    do {
      FEntityAllocationIterator::operator*(&local_38,&local_58);
      pFVar3 = FEntityAllocationProxy::GetAllocation(&local_58);
      pFVar4 = (FEntityAllocation *)0x0;
      if (EVar1 == NoThreading) {
        pFVar3->LockMode = LockFree;
        pFVar4 = pFVar3;
      }
      local_48.Manager = local_58.Manager;
      local_48.AllocationIndex = local_58.AllocationIndex;
      local_48._12_4_ = local_58._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>_>::
      ForEachEntityImpl<UE::MovieScene::FAbsoluteAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                (param_1,&local_48,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                  *)this);
      if (pFVar4 != (FEntityAllocation *)0x0) {
        pFVar4->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_38);
      bVar2 = FEntityAllocationIterator::operator!=(&local_38,&local_20);
    } while (bVar2);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_20);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_38);
  return;
}

// Run @ 146866e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::FAccumulateAbsoluteWeights,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>_>
::Run(TEntityTaskBase<UE::MovieScene::FAccumulateAbsoluteWeights,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>_>
      *this,FAccumulateAbsoluteWeights *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->FilteredTask).Components.field_0x2,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityTaskBase<UE::MovieScene::FAccumulateAbsoluteWeights,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>_>::Run(UE::MovieScene::FAccumulateAbsoluteWeights&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->FilteredTask).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1>_>::
      ForEachEntityImpl<UE::MovieScene::FAccumulateAbsoluteWeights,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 146866fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::FAdditiveAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::Run(TEntityTaskBase<UE::MovieScene::FAdditiveAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
      *this,FAdditiveAccumulationTask *param_1)

{
  EEntityThreadingModel EVar1;
  bool bVar2;
  FEntityAllocation *pFVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocationIteratorProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationProxy local_48;
  FEntityAllocationIterator local_38;
  FEntityAllocationIterator local_20;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
    ::ToString((TEntityTaskComponentsImpl<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                *)this,(FString *)&local_58,this->EntityManager);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityTaskBase<UE::MovieScene::FAdditiveAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>::Run(UE::MovieScene::FAdditiveAccumulationTask&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_58.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_58.Manager);
    }
  }
  EVar1 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_68,&(this->FilteredTask).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_38,local_68.Manager,local_68.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_20,local_68.Manager);
  bVar2 = FEntityAllocationIterator::operator!=(&local_38,&local_20);
  if (bVar2) {
    do {
      FEntityAllocationIterator::operator*(&local_38,&local_58);
      pFVar3 = FEntityAllocationProxy::GetAllocation(&local_58);
      pFVar4 = (FEntityAllocation *)0x0;
      if (EVar1 == NoThreading) {
        pFVar3->LockMode = LockFree;
        pFVar4 = pFVar3;
      }
      local_48.Manager = local_58.Manager;
      local_48.AllocationIndex = local_58.AllocationIndex;
      local_48._12_4_ = local_58._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>_>::
      ForEachEntityImpl<UE::MovieScene::FAdditiveAccumulationTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                (param_1,&local_48,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                  *)this);
      if (pFVar4 != (FEntityAllocation *)0x0) {
        pFVar4->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_38);
      bVar2 = FEntityAllocationIterator::operator!=(&local_38,&local_20);
    } while (bVar2);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_20);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_38);
  return;
}

// Run @ 146867140

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::FCallNotificationsTask,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TWriteAccess<UE::MovieScene::FPropertyNotifyComponentData>_>
::Run(TEntityTaskBase<UE::MovieScene::FCallNotificationsTask,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TWriteAccess<UE::MovieScene::FPropertyNotifyComponentData>_>
      *this,FCallNotificationsTask *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  ushort uVar3;
  EComponentHeaderLockMode EVar4;
  EComponentHeaderLockMode EVar5;
  FEntityManager *pFVar6;
  uchar *puVar7;
  code *pcVar8;
  uchar *puVar9;
  EEntityThreadingModel EVar10;
  bool bVar11;
  FEntityAllocation *pFVar12;
  ulong64 uVar13;
  FEntityAllocation *pFVar14;
  FComponentHeader *pFVar15;
  FComponentHeader *pFVar16;
  FComponentHeader *pFVar17;
  FComponentHeader *local_f0;
  FString local_e8;
  FEntityAllocation *local_d8;
  uchar *local_d0;
  ulong64 local_c8;
  FEntityAllocationIteratorProxy local_c0;
  FEntityAllocationProxy local_a8;
  FEntityAllocationIterator local_98;
  FEntityAllocationProxy local_78;
  FEntityAllocationIterator local_68;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar6 = this->EntityManager;
    local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.Data.ArrayNum = 0;
    local_e8.Data.ArrayMax = 0;
    AccessorToString((FReadAccess *)this,pFVar6,&local_e8);
    AccessorToString((FWriteAccess *)&(this->FilteredTask).Components.field_0x2,pFVar6,&local_e8);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityTaskBase<UE::MovieScene::FCallNotificationsTask,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TWriteAccess<UE::MovieScene::FPropertyNotifyComponentData>_>::Run(UE::MovieScene::FCallNotificationsTask&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
  EVar10 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_c0,&(this->FilteredTask).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_98,local_c0.Manager,local_c0.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_68,local_c0.Manager);
  bVar11 = FEntityAllocationIterator::operator!=(&local_98,&local_68);
  if (bVar11) {
    do {
      pFVar16 = (FComponentHeader *)0x0;
      FEntityAllocationIterator::operator*(&local_98,&local_78);
      local_d8 = FEntityAllocationProxy::GetAllocation(&local_78);
      if (EVar10 == NoThreading) {
        local_d8->LockMode = LockFree;
      }
      else {
        local_d8 = (FEntityAllocation *)0x0;
      }
      pFVar14 = local_d8;
      local_c8 = (this->WriteContext).SystemSerial;
      uVar3 = *(ushort *)&(this->FilteredTask).Components.field_0x2;
      local_a8.Manager = local_78.Manager;
      local_a8.AllocationIndex = local_78.AllocationIndex;
      local_a8._12_4_ = local_78._12_4_;
      pFVar12 = FEntityAllocationProxy::GetAllocation(&local_a8);
      local_f0 = pFVar12->ComponentHeaders;
      pFVar15 = local_f0 + pFVar12->NumComponents;
      for (; local_f0 != pFVar15; local_f0 = local_f0 + 1) {
        if ((local_f0->ComponentType).Value == uVar3) goto LAB_1468672f2;
      }
      local_f0 = (FComponentHeader *)0x0;
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Header",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x2cd,L"");
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
LAB_1468672f2:
      EVar4 = pFVar12->LockMode;
      if (EVar4 == Mutex) {
        AcquireSRWLockExclusive((PSRWLOCK)&local_f0->ReadWriteLock);
      }
      LOCK();
      paVar1 = &local_f0->ScheduledAccessCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
      if ((aVar2 != (atomic<int>)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("PreviousAccessCount == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                              ,0x487,
                              L"Component header is still in use when it is being opened for write!"
                             ), bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_d0 = local_f0->Components;
      uVar3 = *(ushort *)&(this->FilteredTask).Components;
      pFVar12 = FEntityAllocationProxy::GetAllocation(&local_a8);
      pFVar15 = pFVar12->ComponentHeaders;
      pFVar17 = pFVar15 + pFVar12->NumComponents;
      for (; pFVar15 != pFVar17; pFVar15 = pFVar15 + 1) {
        if ((pFVar15->ComponentType).Value == uVar3) goto LAB_1468673a1;
      }
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Header",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x2cd,L"");
      pFVar15 = pFVar16;
      if (bVar11) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
LAB_1468673a1:
      EVar5 = pFVar12->LockMode;
      if (EVar5 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar15->ReadWriteLock);
      }
      LOCK();
      pFVar15->ScheduledAccessCount = (atomic<int>)((int)pFVar15->ScheduledAccessCount + 1);
      UNLOCK();
      puVar7 = pFVar15->Components;
      pFVar12 = FEntityAllocationProxy::GetAllocation(&local_a8);
      puVar9 = local_d0;
      uVar3 = pFVar12->Size;
      pFVar17 = pFVar16;
      if ((ulonglong)uVar3 != 0) {
        do {
          FCallNotificationsTask::ForEachEntity
                    (param_1,*(UObject **)(puVar7 + (longlong)pFVar16 * 8),
                     (FPropertyNotifyComponentData *)(puVar9 + (longlong)(int)pFVar17 * 0x14));
          pFVar16 = (FComponentHeader *)((longlong)&pFVar16->_padding_ + 1);
          pFVar14 = local_d8;
          pFVar17 = (FComponentHeader *)(ulonglong)((int)pFVar17 + 1);
        } while ((longlong)pFVar16 < (longlong)(ulonglong)uVar3);
      }
      uVar13 = local_c8;
      if (local_c8 < local_f0->SerialNumber) {
        uVar13 = local_f0->SerialNumber;
      }
      local_f0->SerialNumber = uVar13;
      LOCK();
      local_f0->ScheduledAccessCount = (atomic<int>)((int)local_f0->ScheduledAccessCount + -1);
      UNLOCK();
      if (EVar4 == Mutex) {
        ReleaseSRWLockExclusive((PSRWLOCK)&local_f0->ReadWriteLock);
      }
      LOCK();
      pFVar15->ScheduledAccessCount = (atomic<int>)((int)pFVar15->ScheduledAccessCount + -1);
      UNLOCK();
      if (EVar5 == Mutex) {
        ReleaseSRWLockShared((PSRWLOCK)&pFVar15->ReadWriteLock);
      }
      if (pFVar14 != (FEntityAllocation *)0x0) {
        pFVar14->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_98);
      bVar11 = FEntityAllocationIterator::operator!=(&local_98,&local_68);
    } while (bVar11);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_68);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_98);
  return;
}

// Run @ 1468674d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::FCombineTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>
::Run(TEntityTaskBase<UE::MovieScene::FCombineTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>
      *this,FCombineTask *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString((FWriteAccess *)&(this->FilteredTask).Components.field_0x2,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FWriteAccess *)&(this->FilteredTask).Components.field_0x4,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FWriteAccess *)&(this->FilteredTask).Components.field_0x6,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FWriteAccess *)&(this->FilteredTask).Components.field_0x8,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FWriteAccess *)&(this->FilteredTask).Components.field_0xa,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FWriteAccess *)&(this->FilteredTask).Components.field_0xc,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FWriteAccess *)&(this->FilteredTask).Components.field_0xe,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FWriteAccess *)&(this->FilteredTask).Components.field_0x10,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FWriteAccess *)&(this->FilteredTask).Components.field_0x12,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->FilteredTask).Components.field_0x14,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityTaskBase<UE::MovieScene::FCombineTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>::Run(UE::MovieScene::FCombineTask&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->FilteredTask).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10>_>::
      ForEachEntityImpl<UE::MovieScene::FCombineTask,UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<FMovieSceneBlendChannelID>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TWriteAccess<double>,UE::MovieScene::TOptionalReadAccess<UE::MovieScene::FIntermediate3DTransform>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// TEntityTaskBase<UE::MovieScene::FEvaluateEasings,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_> @ 14689b9a0

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityTaskBase<UE::MovieScene::FEvaluateEasings,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::FEvaluateEasings,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
::
TEntityTaskBase<UE::MovieScene::FEvaluateEasings,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
          (TEntityTaskBase<UE::MovieScene::FEvaluateEasings,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
           *this,FEntityManager *param_1,
          TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&param_2->field_0x8;
  *(undefined8 *)&(this->FilteredTask).Components = *(undefined8 *)param_2;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&param_2->field_0x18;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x10 = *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x18 = uVar1;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x20 = *(undefined8 *)&param_2->field_0x20;
  (this->FilteredTask).Filter.AllMask.Bits.NumBits = 0;
  (this->FilteredTask).Filter.AllMask.Bits.MaxBits = 0x180;
  (this->FilteredTask).Filter.NoneMask.Bits.NumBits = 0;
  (this->FilteredTask).Filter.NoneMask.Bits.MaxBits = 0x180;
  (this->FilteredTask).Filter.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilteredTask).Filter.ComplexMasks.ArrayNum = 0;
  (this->FilteredTask).Filter.ComplexMasks.ArrayMax = 0;
  (this->FilteredTask).DynamicReadMask.Bits.NumBits = 0;
  (this->FilteredTask).DynamicReadMask.Bits.MaxBits = 0x180;
  (this->FilteredTask).DynamicWriteMask.Bits.NumBits = 0;
  (this->FilteredTask).DynamicWriteMask.Bits.MaxBits = 0x180;
  AddAccessorToFilter((FComponentAccess *)this,&(this->FilteredTask).Filter);
  AddAccessorToFilter((FComponentAccess *)&(this->FilteredTask).Components.field_0x2,
                      &(this->FilteredTask).Filter);
  AddAccessorToFilter((FComponentAccess *)&(this->FilteredTask).Components.field_0x4,
                      &(this->FilteredTask).Filter);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityTaskBase<UE::MovieScene::FEvaluateObjectPathChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_> @ 14689ba70

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityTaskBase<UE::MovieScene::FEvaluateObjectPathChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>
* __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::FEvaluateObjectPathChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>
::
TEntityTaskBase<UE::MovieScene::FEvaluateObjectPathChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>
          (TEntityTaskBase<UE::MovieScene::FEvaluateObjectPathChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->FilteredTask).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x18 = uVar1;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  FEntityComponentFilter::FEntityComponentFilter(&(this->FilteredTask).Filter,&param_2->Filter);
  (this->FilteredTask).DynamicReadMask.Bits.NumBits = 0;
  (this->FilteredTask).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->FilteredTask).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->FilteredTask).DynamicWriteMask.Bits.NumBits = 0;
  (this->FilteredTask).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->FilteredTask).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityTaskBase<UE::MovieScene::FEvaluateStringChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FString>_> @ 14689bb20

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityTaskBase<UE::MovieScene::FEvaluateStringChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FString>_>
* __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::FEvaluateStringChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FString>_>
::
TEntityTaskBase<UE::MovieScene::FEvaluateStringChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FString>_>
          (TEntityTaskBase<UE::MovieScene::FEvaluateStringChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FString>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FString>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->FilteredTask).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x18 = uVar1;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  FEntityComponentFilter::FEntityComponentFilter(&(this->FilteredTask).Filter,&param_2->Filter);
  (this->FilteredTask).DynamicReadMask.Bits.NumBits = 0;
  (this->FilteredTask).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->FilteredTask).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->FilteredTask).DynamicWriteMask.Bits.NumBits = 0;
  (this->FilteredTask).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->FilteredTask).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityTaskBase<UE::MovieScene::Private::FEvaluateTextChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FText>_> @ 14689bbd0

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityTaskBase<UE::MovieScene::Private::FEvaluateTextChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FText>_>
* __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::Private::FEvaluateTextChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FText>_>
::
TEntityTaskBase<UE::MovieScene::Private::FEvaluateTextChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FText>_>
          (TEntityTaskBase<UE::MovieScene::Private::FEvaluateTextChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FText>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FText>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->FilteredTask).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x18 = uVar1;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  FEntityComponentFilter::FEntityComponentFilter(&(this->FilteredTask).Filter,&param_2->Filter);
  (this->FilteredTask).DynamicReadMask.Bits.NumBits = 0;
  (this->FilteredTask).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->FilteredTask).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->FilteredTask).DynamicWriteMask.Bits.NumBits = 0;
  (this->FilteredTask).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->FilteredTask).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityTaskBase<UE::MovieScene::FHarvestHierarchicalEasings,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<unsigned_short>_> @ 14689bc80

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityTaskBase<UE::MovieScene::FHarvestHierarchicalEasings,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<unsigned_short>_>
* __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::FHarvestHierarchicalEasings,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<unsigned_short>_>
::
TEntityTaskBase<UE::MovieScene::FHarvestHierarchicalEasings,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<unsigned_short>_>
          (TEntityTaskBase<UE::MovieScene::FHarvestHierarchicalEasings,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<unsigned_short>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<unsigned_short>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->FilteredTask).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x18 = uVar1;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  FEntityComponentFilter::FEntityComponentFilter(&(this->FilteredTask).Filter,&param_2->Filter);
  (this->FilteredTask).DynamicReadMask.Bits.NumBits = 0;
  (this->FilteredTask).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->FilteredTask).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->FilteredTask).DynamicWriteMask.Bits.NumBits = 0;
  (this->FilteredTask).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->FilteredTask).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// TEntityTaskBase<UE::MovieScene::FResetFinalWeightResults,UE::MovieScene::TWriteAccess<double>_> @ 14689bd30

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityTaskBase<UE::MovieScene::FResetFinalWeightResults,UE::MovieScene::TWriteAccess<double>_> *
__thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::FResetFinalWeightResults,UE::MovieScene::TWriteAccess<double>_>::
TEntityTaskBase<UE::MovieScene::FResetFinalWeightResults,UE::MovieScene::TWriteAccess<double>_>
          (TEntityTaskBase<UE::MovieScene::FResetFinalWeightResults,UE::MovieScene::TWriteAccess<double>_>
           *this,FEntityManager *param_1,
          TEntityTaskComponents<UE::MovieScene::TWriteAccess<double>_> *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&param_2->field_0x8;
  *(undefined8 *)&(this->FilteredTask).Components = *(undefined8 *)param_2;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&param_2->field_0x18;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x10 = *(undefined8 *)&param_2->field_0x10;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x18 = uVar1;
  *(undefined8 *)&(this->FilteredTask).Components.field_0x20 = *(undefined8 *)&param_2->field_0x20;
  (this->FilteredTask).Filter.AllMask.Bits.NumBits = 0;
  (this->FilteredTask).Filter.AllMask.Bits.MaxBits = 0x180;
  (this->FilteredTask).Filter.NoneMask.Bits.NumBits = 0;
  (this->FilteredTask).Filter.NoneMask.Bits.MaxBits = 0x180;
  (this->FilteredTask).Filter.ComplexMasks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilteredTask).Filter.ComplexMasks.ArrayNum = 0;
  (this->FilteredTask).Filter.ComplexMasks.ArrayMax = 0;
  (this->FilteredTask).DynamicReadMask.Bits.NumBits = 0;
  (this->FilteredTask).DynamicReadMask.Bits.MaxBits = 0x180;
  (this->FilteredTask).DynamicWriteMask.Bits.NumBits = 0;
  (this->FilteredTask).DynamicWriteMask.Bits.MaxBits = 0x180;
  AddAccessorToFilter((FComponentAccess *)this,&(this->FilteredTask).Filter);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// Run @ 1468cc800

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::FEvaluateEasings,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
::Run(TEntityTaskBase<UE::MovieScene::FEvaluateEasings,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
      *this,FEvaluateEasings *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->FilteredTask).Components.field_0x2,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FWriteAccess *)&(this->FilteredTask).Components.field_0x4,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityTaskBase<UE::MovieScene::FEvaluateEasings,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>::Run(UE::MovieScene::FEvaluateEasings&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->FilteredTask).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
      ForEachEntityImpl<UE::MovieScene::FEvaluateEasings,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TReadAccess<FEasingComponentData>,UE::MovieScene::TWriteAccess<double>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1468cc9a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::FEvaluateObjectPathChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>
::Run(TEntityTaskBase<UE::MovieScene::FEvaluateObjectPathChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>
      *this,FEvaluateObjectPathChannels *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->FilteredTask).Components.field_0x2,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FWriteAccess *)&(this->FilteredTask).Components.field_0x4,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityTaskBase<UE::MovieScene::FEvaluateObjectPathChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>::Run(UE::MovieScene::FEvaluateObjectPathChannels&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->FilteredTask).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
      ForEachEntityImpl<UE::MovieScene::FEvaluateObjectPathChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceObjectPathChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<UE::MovieScene::FObjectComponent>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1468ccb40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::FEvaluateStringChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FString>_>
::Run(TEntityTaskBase<UE::MovieScene::FEvaluateStringChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FString>_>
      *this,FEvaluateStringChannels *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->FilteredTask).Components.field_0x2,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FWriteAccess *)&(this->FilteredTask).Components.field_0x4,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityTaskBase<UE::MovieScene::FEvaluateStringChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FString>_>::Run(UE::MovieScene::FEvaluateStringChannels&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->FilteredTask).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
      ForEachEntityImpl<UE::MovieScene::FEvaluateStringChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FString>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceStringChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FString>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1468ccce0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::Private::FEvaluateTextChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FText>_>
::Run(TEntityTaskBase<UE::MovieScene::Private::FEvaluateTextChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FText>_>
      *this,FEvaluateTextChannels *param_1)

{
  FEntityManager *pFVar1;
  EEntityThreadingModel EVar2;
  bool bVar3;
  FEntityAllocation *pFVar4;
  FEntityAllocation *pFVar5;
  FEntityAllocationIteratorProxy local_78;
  FEntityAllocationProxy local_68;
  FEntityAllocationProxy local_58;
  FEntityAllocationIterator local_48;
  FEntityAllocationIterator local_30;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar1 = this->EntityManager;
    local_78.Manager = (FEntityManager *)0x0;
    local_78.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FReadAccess *)this,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->FilteredTask).Components.field_0x2,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FWriteAccess *)&(this->FilteredTask).Components.field_0x4,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityTaskBase<UE::MovieScene::Private::FEvaluateTextChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FText>_>::Run(UE::MovieScene::Private::FEvaluateTextChannels&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->FilteredTask).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_78.Manager,local_78.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_30,local_78.Manager);
  bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
  if (bVar3) {
    do {
      FEntityAllocationIterator::operator*(&local_48,&local_68);
      pFVar4 = FEntityAllocationProxy::GetAllocation(&local_68);
      pFVar5 = (FEntityAllocation *)0x0;
      if (EVar2 == NoThreading) {
        pFVar4->LockMode = LockFree;
        pFVar5 = pFVar4;
      }
      local_58.Manager = local_68.Manager;
      local_58.AllocationIndex = local_68.AllocationIndex;
      local_58._12_4_ = local_68._12_4_;
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2>_>::
      ForEachEntityImpl<UE::MovieScene::Private::FEvaluateTextChannels,UE::MovieScene::TReadAccess<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FText>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FSourceTextChannel>,UE::MovieScene::TReadAccess<FFrameTime>,UE::MovieScene::TWriteAccess<FText>_>
                  *)this);
      if (pFVar5 != (FEntityAllocation *)0x0) {
        pFVar5->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_48);
      bVar3 = FEntityAllocationIterator::operator!=(&local_48,&local_30);
    } while (bVar3);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_30);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  return;
}

// Run @ 1468cce80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::FHarvestHierarchicalEasings,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<unsigned_short>_>
::Run(TEntityTaskBase<UE::MovieScene::FHarvestHierarchicalEasings,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<unsigned_short>_>
      *this,FHarvestHierarchicalEasings *param_1)

{
  double dVar1;
  ushort uVar2;
  ushort uVar3;
  EComponentHeaderLockMode EVar4;
  EComponentHeaderLockMode EVar5;
  FEntityManager *pFVar6;
  code *pcVar7;
  uchar *puVar8;
  EEntityThreadingModel EVar9;
  bool bVar10;
  FEntityAllocation *pFVar11;
  FHierarchicalEasingChannelData *pFVar12;
  FHierarchicalEasingChannelData *pFVar13;
  FComponentHeader *pFVar14;
  ushort *puVar15;
  FEntityAllocation *pFVar16;
  FComponentHeader *pFVar17;
  FComponentHeader *pFVar18;
  FComponentHeader *local_100;
  FString local_f8;
  FEntityAllocation *local_e8;
  uchar *local_e0;
  ushort *local_d8;
  FEntityAllocationIteratorProxy local_d0;
  FEntityAllocationProxy local_b8;
  FEntityAllocationIterator local_a8;
  FEntityAllocationProxy local_88;
  FEntityAllocationIterator local_78 [2];
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    pFVar6 = this->EntityManager;
    local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Data.ArrayNum = 0;
    local_f8.Data.ArrayMax = 0;
    AccessorToString((FReadAccess *)this,pFVar6,&local_f8);
    AccessorToString((FReadAccess *)&(this->FilteredTask).Components.field_0x2,pFVar6,&local_f8);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityTaskBase<UE::MovieScene::FHarvestHierarchicalEasings,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<unsigned_short>_>::Run(UE::MovieScene::FHarvestHierarchicalEasings&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  pFVar13 = (param_1->ComputationData).DataPtr;
  pFVar12 = pFVar13 + (param_1->ComputationData).ArrayNum;
  for (; pFVar13 != pFVar12; pFVar13 = pFVar13 + 1) {
    pFVar13->FinalResult = 1.0;
    pFVar13->UnaccumulatedResult = 1.0;
  }
  EVar9 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_d0,&(this->FilteredTask).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_a8,local_d0.Manager,local_d0.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(local_78,local_d0.Manager);
  bVar10 = FEntityAllocationIterator::operator!=(&local_a8,local_78);
  if (bVar10) {
    do {
      pFVar17 = (FComponentHeader *)0x0;
      FEntityAllocationIterator::operator*(&local_a8,&local_88);
      local_e8 = FEntityAllocationProxy::GetAllocation(&local_88);
      if (EVar9 == NoThreading) {
        local_e8->LockMode = LockFree;
      }
      else {
        local_e8 = (FEntityAllocation *)0x0;
      }
      pFVar16 = local_e8;
      uVar2 = *(ushort *)&(this->FilteredTask).Components.field_0x2;
      local_b8.Manager = local_88.Manager;
      local_b8.AllocationIndex = local_88.AllocationIndex;
      local_b8._12_4_ = local_88._12_4_;
      pFVar11 = FEntityAllocationProxy::GetAllocation(&local_b8);
      local_100 = pFVar11->ComponentHeaders;
      pFVar18 = local_100 + pFVar11->NumComponents;
      for (; local_100 != pFVar18; local_100 = local_100 + 1) {
        if ((local_100->ComponentType).Value == uVar2) goto LAB_1468cd067;
      }
      local_100 = (FComponentHeader *)0x0;
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Header",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x2cd,L"");
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
LAB_1468cd067:
      EVar4 = pFVar11->LockMode;
      if (EVar4 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&local_100->ReadWriteLock);
      }
      LOCK();
      local_100->ScheduledAccessCount = (atomic<int>)((int)local_100->ScheduledAccessCount + 1);
      UNLOCK();
      local_d8 = (ushort *)local_100->Components;
      uVar2 = *(ushort *)&(this->FilteredTask).Components;
      pFVar11 = FEntityAllocationProxy::GetAllocation(&local_b8);
      pFVar18 = pFVar11->ComponentHeaders;
      pFVar14 = pFVar18 + pFVar11->NumComponents;
      for (; pFVar18 != pFVar14; pFVar18 = pFVar18 + 1) {
        if ((pFVar18->ComponentType).Value == uVar2) goto LAB_1468cd0e9;
      }
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Header",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                          ,0x2cd,L"");
      pFVar18 = pFVar17;
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
LAB_1468cd0e9:
      EVar5 = pFVar11->LockMode;
      if (EVar5 == Mutex) {
        AcquireSRWLockShared((PSRWLOCK)&pFVar18->ReadWriteLock);
      }
      LOCK();
      pFVar18->ScheduledAccessCount = (atomic<int>)((int)pFVar18->ScheduledAccessCount + 1);
      UNLOCK();
      local_e0 = pFVar18->Components;
      pFVar11 = FEntityAllocationProxy::GetAllocation(&local_b8);
      puVar8 = local_e0;
      uVar2 = pFVar11->Size;
      puVar15 = local_d8;
      if ((ulonglong)uVar2 != 0) {
        do {
          uVar3 = *puVar15;
          dVar1 = *(double *)(puVar8 + (longlong)pFVar17 * 8);
          pFVar12 = TArrayView<UE::MovieScene::FHierarchicalEasingChannelData,int>::operator[]
                              (&param_1->ComputationData,(uint)uVar3);
          pFVar12->FinalResult = dVar1 * pFVar12->FinalResult;
          pFVar12 = TArrayView<UE::MovieScene::FHierarchicalEasingChannelData,int>::operator[]
                              (&param_1->ComputationData,(uint)uVar3);
          pFVar17 = (FComponentHeader *)((longlong)&pFVar17->_padding_ + 1);
          pFVar12->UnaccumulatedResult = dVar1 * pFVar12->UnaccumulatedResult;
          pFVar16 = local_e8;
          puVar15 = puVar15 + 1;
        } while ((longlong)pFVar17 < (longlong)(ulonglong)uVar2);
      }
      LOCK();
      local_100->ScheduledAccessCount = (atomic<int>)((int)local_100->ScheduledAccessCount + -1);
      UNLOCK();
      if (EVar4 == Mutex) {
        ReleaseSRWLockShared((PSRWLOCK)&local_100->ReadWriteLock);
      }
      LOCK();
      pFVar18->ScheduledAccessCount = (atomic<int>)((int)pFVar18->ScheduledAccessCount + -1);
      UNLOCK();
      if (EVar5 == Mutex) {
        ReleaseSRWLockShared((PSRWLOCK)&pFVar18->ReadWriteLock);
      }
      if (pFVar16 != (FEntityAllocation *)0x0) {
        pFVar16->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_a8);
      bVar10 = FEntityAllocationIterator::operator!=(&local_a8,local_78);
    } while (bVar10);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(local_78);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_a8);
  FHarvestHierarchicalEasings::PostTask(param_1);
  return;
}

// Run @ 1468cd240

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityTaskBase<UE::MovieScene::FResetFinalWeightResults,UE::MovieScene::TWriteAccess<double>_>::Run
          (TEntityTaskBase<UE::MovieScene::FResetFinalWeightResults,UE::MovieScene::TWriteAccess<double>_>
           *this,FResetFinalWeightResults *param_1)

{
  ushort uVar1;
  int iVar2;
  FEntityAllocationWriteContext FVar3;
  longlong lVar4;
  longlong lVar5;
  EEntityThreadingModel EVar6;
  bool bVar7;
  FEntityAllocation *pFVar8;
  TComponentLock<UE::MovieScene::TWrite<double>_> *pTVar9;
  ulonglong uVar10;
  longlong lVar11;
  FEntityAllocation *pFVar12;
  ulonglong uVar13;
  TWriteAccess<double> local_res8 [4];
  FEntityAllocationIteratorProxy local_b8;
  FEntityAllocationIterator local_a8;
  FEntityAllocationProxy local_88;
  FEntityAllocationProxy local_78;
  TComponentLock<UE::MovieScene::TWrite<double>_> local_68;
  FEntityAllocationIterator local_48;
  
  if (6 < (byte)LogMovieSceneECS._0_1_) {
    local_b8.Manager = (FEntityManager *)0x0;
    local_b8.Filter = (FEntityComponentFilter *)0x0;
    AccessorToString((FWriteAccess *)this,this->EntityManager,(FString *)&local_b8);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityTaskBase<UE::MovieScene::FResetFinalWeightResults,UE::MovieScene::TWriteAccess<double>_>::Run(UE::MovieScene::FResetFinalWeightResults&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_b8.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_b8.Manager);
    }
  }
  EVar6 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_b8,&(this->FilteredTask).Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_a8,local_b8.Manager,local_b8.Filter);
  FEntityAllocationIterator::FEntityAllocationIterator(&local_48,local_b8.Manager);
  bVar7 = FEntityAllocationIterator::operator!=(&local_a8,&local_48);
  if (bVar7) {
    do {
      pFVar12 = (FEntityAllocation *)0x0;
      FEntityAllocationIterator::operator*(&local_a8,&local_88);
      pFVar8 = FEntityAllocationProxy::GetAllocation(&local_88);
      if (EVar6 == NoThreading) {
        pFVar8->LockMode = LockFree;
        pFVar12 = pFVar8;
      }
      local_res8[0] = *(TWriteAccess<double> *)&(this->FilteredTask).Components;
      FVar3.SystemSerial = (this->WriteContext).SystemSerial;
      local_78.Manager = local_88.Manager;
      local_78.AllocationIndex = local_88.AllocationIndex;
      local_78._12_4_ = local_88._12_4_;
      pFVar8 = FEntityAllocationProxy::GetAllocation(&local_78);
      pTVar9 = TWriteAccess<double>::LockComponentData(local_res8,&local_68,pFVar8,FVar3);
      lVar4 = *(longlong *)pTVar9;
      uVar13 = *(ulonglong *)&pTVar9->field_0x8;
      iVar2 = *(int *)&pTVar9->field_0x10;
      *(undefined8 *)pTVar9 = 0;
      lVar5 = *(longlong *)&pTVar9->field_0x18;
      *(undefined8 *)&pTVar9->field_0x18 = 0;
      if (local_68._0_8_ != 0) {
        uVar10 = local_68._8_8_;
        if ((ulonglong)local_68._8_8_ < *(ulonglong *)(local_68._0_8_ + 0x28)) {
          uVar10 = *(ulonglong *)(local_68._0_8_ + 0x28);
        }
        *(ulonglong *)(local_68._0_8_ + 0x28) = uVar10;
        LOCK();
        *(int *)(local_68._0_8_ + 0x30) = *(int *)(local_68._0_8_ + 0x30) + -1;
        UNLOCK();
        if (local_68._16_4_ == 1) {
          ReleaseSRWLockExclusive((PSRWLOCK)(local_68._0_8_ + 0x20));
        }
      }
      pFVar8 = FEntityAllocationProxy::GetAllocation(&local_78);
      lVar11 = 0;
      uVar1 = pFVar8->Size;
      if ((ulonglong)uVar1 != 0) {
        do {
          *(undefined8 *)(lVar5 + lVar11 * 8) = 0x3ff0000000000000;
          lVar11 = lVar11 + 1;
        } while (lVar11 < (longlong)(ulonglong)uVar1);
      }
      if (lVar4 != 0) {
        if (uVar13 < *(ulonglong *)(lVar4 + 0x28)) {
          uVar13 = *(ulonglong *)(lVar4 + 0x28);
        }
        *(ulonglong *)(lVar4 + 0x28) = uVar13;
        LOCK();
        *(int *)(lVar4 + 0x30) = *(int *)(lVar4 + 0x30) + -1;
        UNLOCK();
        if (iVar2 == 1) {
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x20));
        }
      }
      if (pFVar12 != (FEntityAllocation *)0x0) {
        pFVar12->LockMode = Mutex;
      }
      FEntityAllocationIterator::operator++(&local_a8);
      bVar7 = FEntityAllocationIterator::operator!=(&local_a8,&local_48);
    } while (bVar7);
  }
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_48);
  FEntityAllocationIterator::~FEntityAllocationIterator(&local_a8);
  return;
}

