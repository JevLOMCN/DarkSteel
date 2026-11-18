// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 5

// TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_> @ 1468fd7f0

/* WARNING: Enum "Type": Some values do not have unique names */

TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
* __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::
TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
          (TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
           *this,FEntityManager *param_1,
          TFilteredEntityTask<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
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
  *(undefined8 *)&(this->ComponentFilter).Components.field_0x30 =
       *(undefined8 *)&(param_2->Components).field_0x30;
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

// Run @ 14693f3e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
      *this,TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
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
    AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)&(this->ComponentFilter).Components.field_0x2,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0xe,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x10,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x12,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x14,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>::Run(UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>&___ptr64)___ptr64'
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
      ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
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

// Run @ 14693f5b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
      *this,TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>
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
    AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)&(this->ComponentFilter).Components.field_0x2,pFVar1,(FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0xe,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x10,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x12,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x14,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x16,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x18,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FReadAccess *)&(this->ComponentFilter).Components.field_0x1a,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>::Run(UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>&___ptr64)___ptr64'
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
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>_>::
      ForEachAllocationImpl<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
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

// Run @ 14693f7b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
      *this,TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
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
    AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)&(this->ComponentFilter).Components.field_0x2,pFVar1,(FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0xe,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x12,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x16,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x1a,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>::Run(UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>&___ptr64)___ptr64'
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
      ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FMargin,UE::MovieScene::FIntermediateMargin,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
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

// Run @ 14693f980

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
::Run(TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
      *this,TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>
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
    AccessorToString<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
              ((TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>
                *)&(this->ComponentFilter).Components.field_0x2,pFVar1,(FString *)&local_78);
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
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x22,pFVar1,
                     (FString *)&local_78);
    AccessorToString((FOptionalReadAccess *)&(this->ComponentFilter).Components.field_0x26,pFVar1,
                     (FString *)&local_78);
    Logging::Private::BasicLog<7>
              (&`public:_void___cdecl_UE::MovieScene::TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject*___ptr64>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>::Run(UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>&___ptr64)___ptr64'
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
      TEntityTaskCaller_AutoExpansion<TIntegerSequence<int,0,1,2,3,4,5,6,7,8>_>::
      ForEachAllocationImpl<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FWidgetTransform,UE::MovieScene::FIntermediateWidgetTransform,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3,4,5,6>,double,double,double,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
                (param_1,&local_58,(FEntityAllocationWriteContext)(this->WriteContext).SystemSerial,
                 (TEntityTaskComponents<UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
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

