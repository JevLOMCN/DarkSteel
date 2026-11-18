// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 3

// TEntityAllocationTaskBase<UE::MovieScene::FScaleFloatProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_> @ 14ac6f6e0

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::FScaleFloatProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FScaleFloatProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>
::
TEntityAllocationTaskBase<UE::MovieScene::FScaleFloatProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>
          (TEntityAllocationTaskBase<UE::MovieScene::FScaleFloatProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>
          *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x8;
  *(undefined8 *)&(this->ComponentFilter).Components = *(undefined8 *)&param_2->Components;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x18;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x10 =
       *(undefined8 *)&(param_2->Components).field_0x10;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&(param_2->Components).field_0x28;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x20 =
       *(undefined8 *)&(param_2->Components).field_0x20;
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x28 = uVar1;
  FEntityComponentFilter::FEntityComponentFilter(&(this->ComponentFilter).Filter,&param_2->Filter);
  (this->ComponentFilter).DynamicReadMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicReadMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicReadMask.Bits,&(param_2->DynamicReadMask).Bits);
  (this->ComponentFilter).DynamicWriteMask.Bits.NumBits = 0;
  (this->ComponentFilter).DynamicWriteMask.Bits.MaxBits = 0;
  TBitArray<TFixedAllocator<12>_>::Assign<TFixedAllocator<12>_>
            (&(this->ComponentFilter).DynamicWriteMask.Bits,&(param_2->DynamicWriteMask).Bits);
  this->EntityManager = param_1;
  FEntityAllocationWriteContext::FEntityAllocationWriteContext(&this->WriteContext,param_1);
  return this;
}

// Run @ 14ac7f610

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FScaleFloatProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::FScaleFloatProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>
      *this,FScaleFloatProperties *param_1)

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
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x2,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x6,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x8,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0xa,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FWriteAccess *)&(this->ComponentFilter).Components.field_0xe,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::FScaleFloatProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>::Run(UE::MovieScene::FScaleFloatProperties&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
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
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5>_>::
      ForEachAllocationImpl<UE::MovieScene::FScaleFloatProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TWriteAccess<double>_>
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

// Run @ 14ac7f7e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::FScaleTransformProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::FScaleTransformProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
      *this,FScaleTransformProperties *param_1)

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
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x2,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x6,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x8,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0xa,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0xe,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x12,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x16,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x1a,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x1e,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalWriteAccess *)&(this->ComponentFilter).Components.field_0x22,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalWriteAccess *)&(this->ComponentFilter).Components.field_0x26,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalWriteAccess *)&(this->ComponentFilter).Components.field_0x2a,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalWriteAccess *)&(this->ComponentFilter).Components.field_0x2e,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalWriteAccess *)&(this->ComponentFilter).Components.field_0x32,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalWriteAccess *)&(this->ComponentFilter).Components.field_0x36,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::FScaleTransformProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>::Run(UE::MovieScene::FScaleTransformProperties&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
    if (local_78.Manager != (FEntityManager *)0x0) {
      FMemory::Free(local_78.Manager);
    }
  }
  EVar2 = FEntityManager::GetThreadingModel(this->EntityManager);
  FEntityManager::Iterate(this->EntityManager,&local_78,&(this->ComponentFilter).Filter);
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
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15>_>
      ::
      ForEachAllocationImpl<UE::MovieScene::FScaleTransformProperties,UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UE::MovieScene::FRootInstanceHandle>,UE::MovieScene::TOptionalReadAccess<FMovieSceneSequenceID>,UE::MovieScene::TReadAccess<FMovieScenePropertyBinding>,UE::MovieScene::TReadAccess<FGuid>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>,UE::MovieScene::TOptionalWriteAccess<double>_>
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

