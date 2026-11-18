// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 150

// FMassEntityManager @ 1471d76b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassEntityManager * __thiscall
FMassEntityManager::FMassEntityManager(FMassEntityManager *this,UObject *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FTypeManager *pFVar3;
  FTypeManager *pFVar4;
  FString *pFVar5;
  bool bVar6;
  FName local_res8;
  FString local_48;
  FString local_38;
  FString local_28;
  
  pFVar4 = (FTypeManager *)0x0;
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  *(undefined2 *)&this->_padding_ = 0;
  FGCObject::RegisterGCObject((FGCObject *)this);
  this->DebugEntityStoragePtr = (IEntityStorageInterface *)0x0;
  this->_padding_ = (longlong)&___7FMassEntityManager__6B_;
  (this->EntityStorage).TypeIndex = '\0';
  this->ProcessingScopeCount = (atomic<int>)0x0;
  this->ArchetypeDataVersion = 0;
  *(undefined8 *)&this->FragmentHashToArchetypeMap = 0;
  *(undefined8 *)&(this->FragmentHashToArchetypeMap).field_0x8 = 0;
  *(undefined8 *)&(this->FragmentHashToArchetypeMap).field_0x20 = 0;
  *(undefined4 *)&(this->FragmentHashToArchetypeMap).field_0x28 = 0;
  *(undefined4 *)&(this->FragmentHashToArchetypeMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->FragmentHashToArchetypeMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FragmentHashToArchetypeMap).field_0x34 = 0;
  *(undefined8 *)&(this->FragmentHashToArchetypeMap).field_0x40 = 0;
  *(undefined4 *)&(this->FragmentHashToArchetypeMap).field_0x48 = 0;
  *(undefined8 *)&this->FragmentTypeToArchetypeMap = 0;
  *(undefined8 *)&(this->FragmentTypeToArchetypeMap).field_0x8 = 0;
  *(undefined8 *)&(this->FragmentTypeToArchetypeMap).field_0x20 = 0;
  *(undefined4 *)&(this->FragmentTypeToArchetypeMap).field_0x28 = 0;
  *(undefined4 *)&(this->FragmentTypeToArchetypeMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->FragmentTypeToArchetypeMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FragmentTypeToArchetypeMap).field_0x34 = 0;
  *(undefined8 *)&(this->FragmentTypeToArchetypeMap).field_0x40 = 0;
  *(undefined4 *)&(this->FragmentTypeToArchetypeMap).field_0x48 = 0;
  (this->AllArchetypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllArchetypes).ArrayNum = 0;
  (this->AllArchetypes).ArrayMax = 0;
  (this->ConstSharedFragmentsContainer).Instances.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ConstSharedFragmentsContainer).Instances.ArrayNum = 0;
  (this->ConstSharedFragmentsContainer).Instances.ArrayMax = 0;
  *(undefined8 *)&(this->ConstSharedFragmentsContainer).HashToInstanceIndexMap = 0;
  *(undefined8 *)&(this->ConstSharedFragmentsContainer).HashToInstanceIndexMap.field_0x8 = 0;
  *(undefined8 *)&(this->ConstSharedFragmentsContainer).HashToInstanceIndexMap.field_0x20 = 0;
  *(undefined4 *)&(this->ConstSharedFragmentsContainer).HashToInstanceIndexMap.field_0x28 = 0;
  *(undefined4 *)&(this->ConstSharedFragmentsContainer).HashToInstanceIndexMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->ConstSharedFragmentsContainer).HashToInstanceIndexMap.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->ConstSharedFragmentsContainer).HashToInstanceIndexMap.field_0x34 = 0;
  *(undefined8 *)&(this->ConstSharedFragmentsContainer).HashToInstanceIndexMap.field_0x40 = 0;
  *(undefined4 *)&(this->ConstSharedFragmentsContainer).HashToInstanceIndexMap.field_0x48 = 0;
  *(undefined8 *)&(this->ConstSharedFragmentsContainer).TypeToInstanceMap = 0;
  *(undefined8 *)&(this->ConstSharedFragmentsContainer).TypeToInstanceMap.field_0x8 = 0;
  *(undefined8 *)&(this->ConstSharedFragmentsContainer).TypeToInstanceMap.field_0x20 = 0;
  *(undefined4 *)&(this->ConstSharedFragmentsContainer).TypeToInstanceMap.field_0x28 = 0;
  *(undefined4 *)&(this->ConstSharedFragmentsContainer).TypeToInstanceMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->ConstSharedFragmentsContainer).TypeToInstanceMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ConstSharedFragmentsContainer).TypeToInstanceMap.field_0x34 = 0;
  *(undefined8 *)&(this->ConstSharedFragmentsContainer).TypeToInstanceMap.field_0x40 = 0;
  *(undefined4 *)&(this->ConstSharedFragmentsContainer).TypeToInstanceMap.field_0x48 = 0;
  (this->SharedFragmentsContainer).Instances.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->SharedFragmentsContainer).Instances.ArrayNum = 0;
  (this->SharedFragmentsContainer).Instances.ArrayMax = 0;
  *(undefined8 *)&(this->SharedFragmentsContainer).HashToInstanceIndexMap = 0;
  *(undefined8 *)&(this->SharedFragmentsContainer).HashToInstanceIndexMap.field_0x8 = 0;
  *(undefined8 *)&(this->SharedFragmentsContainer).HashToInstanceIndexMap.field_0x20 = 0;
  *(undefined4 *)&(this->SharedFragmentsContainer).HashToInstanceIndexMap.field_0x28 = 0;
  *(undefined4 *)&(this->SharedFragmentsContainer).HashToInstanceIndexMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->SharedFragmentsContainer).HashToInstanceIndexMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SharedFragmentsContainer).HashToInstanceIndexMap.field_0x34 = 0;
  *(undefined8 *)&(this->SharedFragmentsContainer).HashToInstanceIndexMap.field_0x40 = 0;
  *(undefined4 *)&(this->SharedFragmentsContainer).HashToInstanceIndexMap.field_0x48 = 0;
  *(undefined8 *)&(this->SharedFragmentsContainer).TypeToInstanceMap = 0;
  *(undefined8 *)&(this->SharedFragmentsContainer).TypeToInstanceMap.field_0x8 = 0;
  *(undefined8 *)&(this->SharedFragmentsContainer).TypeToInstanceMap.field_0x20 = 0;
  *(undefined4 *)&(this->SharedFragmentsContainer).TypeToInstanceMap.field_0x28 = 0;
  *(undefined4 *)&(this->SharedFragmentsContainer).TypeToInstanceMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->SharedFragmentsContainer).TypeToInstanceMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SharedFragmentsContainer).TypeToInstanceMap.field_0x34 = 0;
  *(undefined8 *)&(this->SharedFragmentsContainer).TypeToInstanceMap.field_0x40 = 0;
  *(undefined4 *)&(this->SharedFragmentsContainer).TypeToInstanceMap.field_0x48 = 0;
  FMassObserverManager::FMassObserverManager(&this->ObserverManager,this);
  pFVar3 = ::operator_new(0xc0);
  if (pFVar3 != (FTypeManager *)0x0) {
    pFVar3->_padding_ = 0;
    pFVar3->_padding_ = 0;
    *(undefined8 *)&pFVar3->TypeDataMap = 0;
    *(undefined8 *)&(pFVar3->TypeDataMap).field_0x8 = 0;
    *(undefined8 *)&(pFVar3->TypeDataMap).field_0x20 = 0;
    pFVar3->OuterEntityManager = this;
    *(undefined4 *)&(pFVar3->TypeDataMap).field_0x28 = 0;
    *(undefined4 *)&(pFVar3->TypeDataMap).field_0x2c = 0x80;
    *(undefined4 *)&(pFVar3->TypeDataMap).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar3->TypeDataMap).field_0x34 = 0;
    *(undefined8 *)&(pFVar3->TypeDataMap).field_0x40 = 0;
    *(undefined4 *)&(pFVar3->TypeDataMap).field_0x48 = 0;
    *(undefined8 *)&(pFVar3->SubsystemTypes).Elements = 0;
    *(undefined8 *)&(pFVar3->SubsystemTypes).Elements.field_0x8 = 0;
    *(undefined8 *)&(pFVar3->SubsystemTypes).Elements.field_0x20 = 0;
    *(undefined4 *)&(pFVar3->SubsystemTypes).Elements.field_0x28 = 0;
    *(undefined4 *)&(pFVar3->SubsystemTypes).Elements.field_0x2c = 0x80;
    *(undefined4 *)&(pFVar3->SubsystemTypes).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(pFVar3->SubsystemTypes).Elements.field_0x34 = 0;
    (pFVar3->SubsystemTypes).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    (pFVar3->SubsystemTypes).HashSize = 0;
    pFVar3->bBuiltInTypesRegistered = false;
    pFVar4 = pFVar3;
  }
  TSharedRef<UE::Mass::FTypeManager,1>::TSharedRef<UE::Mass::FTypeManager,1><UE::Mass::FTypeManager>
            (&this->TypeManager,pFVar4);
  pFVar1 = &this->DebugName;
  (this->RelationManager).TypeManager = (this->TypeManager).Object;
  (this->RelationManager).EntityManager = this;
  *(undefined8 *)&(this->RelationManager).RelationsDataMap = 0;
  *(undefined8 *)&(this->RelationManager).RelationsDataMap.field_0x8 = 0;
  *(undefined8 *)&(this->RelationManager).RelationsDataMap.field_0x20 = 0;
  *(undefined4 *)&(this->RelationManager).RelationsDataMap.field_0x28 = 0;
  *(undefined4 *)&(this->RelationManager).RelationsDataMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->RelationManager).RelationsDataMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RelationManager).RelationsDataMap.field_0x34 = 0;
  *(undefined8 *)&(this->RelationManager).RelationsDataMap.field_0x40 = 0;
  *(undefined4 *)&(this->RelationManager).RelationsDataMap.field_0x48 = 0;
  *(undefined8 *)&this->GroupNameToTypeIndex = 0;
  *(undefined8 *)&(this->GroupNameToTypeIndex).field_0x8 = 0;
  *(undefined8 *)&(this->GroupNameToTypeIndex).field_0x20 = 0;
  *(undefined4 *)&(this->GroupNameToTypeIndex).field_0x28 = 0;
  *(undefined4 *)&(this->GroupNameToTypeIndex).field_0x2c = 0x80;
  *(undefined4 *)&(this->GroupNameToTypeIndex).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GroupNameToTypeIndex).field_0x34 = 0;
  *(undefined8 *)&(this->GroupNameToTypeIndex).field_0x40 = 0;
  *(undefined4 *)&(this->GroupNameToTypeIndex).field_0x48 = 0;
  (this->GroupTypes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GroupTypes).ArrayNum = 0;
  (this->GroupTypes).ArrayMax = 0;
  *(undefined8 *)&(this->RequirementAccessDetector).Detectors = 0;
  *(undefined8 *)&(this->RequirementAccessDetector).Detectors.field_0x8 = 0;
  *(undefined8 *)&(this->RequirementAccessDetector).Detectors.field_0x20 = 0;
  *(undefined4 *)&(this->RequirementAccessDetector).Detectors.field_0x28 = 0;
  *(undefined4 *)&(this->RequirementAccessDetector).Detectors.field_0x2c = 0x80;
  *(undefined4 *)&(this->RequirementAccessDetector).Detectors.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RequirementAccessDetector).Detectors.field_0x34 = 0;
  *(undefined8 *)&(this->RequirementAccessDetector).Detectors.field_0x40 = 0;
  *(undefined4 *)&(this->RequirementAccessDetector).Detectors.field_0x48 = 0;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugName).Data.ArrayNum = 0;
  (this->DebugName).Data.ArrayMax = 0;
  this->EnabledDebugFeatures = All;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  (this->Owner).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = (FName)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&(this->Owner).WeakPtr,(FObjectPtr)&local_res8);
  *(undefined8 *)&this->OnNewArchetypeEvent = 0;
  *(undefined8 *)&(this->OnNewArchetypeEvent).field_0x8 = 0;
  *(undefined8 *)&(this->OnNewArchetypeEvent).field_0x10 = 0;
  *(undefined8 *)&(this->OnNewArchetypeEvent).field_0x18 = 2;
  (this->OnPostForkHandle).ID = 0;
  (this->DeferredCommandBuffers).Elements[0].Object = (FMassCommandBuffer *)0x0;
  (this->DeferredCommandBuffers).Elements[0].SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->DeferredCommandBuffers).Elements[1].Object = (FMassCommandBuffer *)0x0;
  (this->DeferredCommandBuffers).Elements[1].SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->OpenedCommandBufferIndex = '\0';
  this->bCommandBufferFlushingInProgress = (atomic<bool>)0x0;
  this->bFirstCommandFlush = true;
  this->InitializationState = Uninitialized;
  bVar6 = param_1 == (UObject *)0x0;
  if (bVar6) {
    pFVar5 = ::FString::FString(&local_28,L"Unset");
  }
  else {
    local_res8.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
    local_res8.Number = *(uint *)&param_1->field_0x1c;
    ::FName::ToString(&local_res8,&local_38);
    ::FString::ConcatFC(&local_48,&local_38,L"_EntityManager");
    pFVar5 = &local_48;
  }
  if (pFVar1 != pFVar5) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
    (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DebugName).Data.ArrayNum = (pFVar5->Data).ArrayNum;
    (this->DebugName).Data.ArrayMax = (pFVar5->Data).ArrayMax;
    (pFVar5->Data).ArrayNum = 0;
    (pFVar5->Data).ArrayMax = 0;
  }
  if ((bVar6) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((!bVar6) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((!bVar6) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FMassEntityManager @ 1471dfe50

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall FMassEntityManager::~FMassEntityManager(FMassEntityManager *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  ulonglong uVar8;
  
  this->_padding_ = (longlong)&___7FMassEntityManager__6B_;
  if (this->InitializationState == Initialized) {
    Deinitialize(this);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DeferredCommandBuffers).Elements[1].SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DeferredCommandBuffers).Elements[0].SharedReferenceCount.ReferenceController);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnNewArchetypeEvent).field_0x8,*(int *)&(this->OnNewArchetypeEvent).field_0x10
            );
  pvVar3 = *(void **)&(this->OnNewArchetypeEvent).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnNewArchetypeEvent);
  pFVar4 = (this->DebugName).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined4 *)&(this->RequirementAccessDetector).Detectors.field_0x48 = 0;
  pvVar3 = *(void **)&(this->RequirementAccessDetector).Detectors.field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UStruct_const_*,TSharedRef<FRWAccessDetector,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UStruct_const_*,TSharedRef<FRWAccessDetector,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UStruct_const_*,TSharedRef<FRWAccessDetector,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RequirementAccessDetector);
  pFVar4 = (this->GroupTypes).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined4 *)&(this->GroupNameToTypeIndex).field_0x48 = 0;
  pvVar3 = *(void **)&(this->GroupNameToTypeIndex).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FName_const_,int_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName_const_,int_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName_const_,int_const_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GroupNameToTypeIndex);
  *(undefined4 *)&(this->RelationManager).RelationsDataMap.field_0x48 = 0;
  pvVar3 = *(void **)&(this->RelationManager).RelationsDataMap.field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Mass::FTypeHandle,UE::Mass::FRelationData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->RelationManager).RelationsDataMap);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->TypeManager).SharedReferenceCount.ReferenceController);
  FMassObserverManager::~FMassObserverManager(&this->ObserverManager);
  TSharedFragmentsContainer<FSharedStruct>::~TSharedFragmentsContainer<FSharedStruct>
            (&this->SharedFragmentsContainer);
  TSharedFragmentsContainer<FConstSharedStruct>::~TSharedFragmentsContainer<FConstSharedStruct>
            (&this->ConstSharedFragmentsContainer);
  DestructItems<TSharedPtr<FMassArchetypeData,1>,int>
            ((TSharedPtr<FMassArchetypeData,1> *)(this->AllArchetypes).AllocatorInstance.Data,
             (this->AllArchetypes).ArrayNum);
  pFVar4 = (this->AllArchetypes).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined4 *)&(this->FragmentTypeToArchetypeMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->FragmentTypeToArchetypeMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<UScriptStruct_const_*,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UScriptStruct_const_*,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UScriptStruct_const_*,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FragmentTypeToArchetypeMap);
  *(undefined4 *)&(this->FragmentHashToArchetypeMap).field_0x48 = 0;
  pvVar3 = *(void **)&(this->FragmentHashToArchetypeMap).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FragmentHashToArchetypeMap);
  uVar8 = (ulonglong)(this->EntityStorage).TypeIndex;
  if (2 < uVar8) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar8])(&this->EntityStorage);
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5,1);
    }
  }
  return;
}

// AddCompositionToEntity_GetDelta @ 1471ebd20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassEntityManager::AddCompositionToEntity_GetDelta
          (FMassEntityManager *this,FMassEntityHandle param_1,
          FMassArchetypeCompositionDescriptor *param_2,FMassArchetypeSharedFragmentValues *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  IEntityStorageInterface *pIVar4;
  FMassArchetypeData *this_00;
  int *piVar5;
  uint uVar6;
  FMassArchetypeData *pFVar7;
  undefined1 auStackY_1c8 [32];
  StorageSelector local_198;
  undefined1 local_197;
  undefined1 local_196;
  StorageSelector local_195;
  FIdentityFunctor local_194;
  FIdentityFunctor local_193 [3];
  FMassArchetypeHandle local_190;
  FMassArchetypeCreationParams local_180;
  undefined1 local_168 [56];
  void *local_130;
  ForAnyElementType local_120;
  int local_118;
  ForAnyElementType local_110;
  int local_108;
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if (UE::AITestSuite::TestsInProgress < 1) {
    if ((0 < (int)this->ProcessingScopeCount) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsProcessing() == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                           ,0x421,
                           L"Synchronous API function %hs called during mass processing. Use asynchronous API instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (0 < (int)this->ProcessingScopeCount) {
    if ((byte)LogTestableEnsures._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
    return;
  }
  bVar2 = IsEntityBuilt(this,param_1);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsEntityBuilt(EntityHandle)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntityManager.h"
                         ,0x232,L"Entity not yet created(ID: %d, SN:%d)"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_198 = (StorageSelector)0x0;
  pIVar4 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(&local_198,&this->EntityStorage);
  this_00 = (FMassArchetypeData *)
            (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4,(ulonglong)param_1 & 0xffffffff);
  if ((this_00 == (FMassArchetypeData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("OldArchetype",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x426,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FStructTypeBitSet::FBitSetContainer::operator-=
            ((FBitSetContainer *)param_2,(TBitArray<FDefaultBitArrayAllocator> *)this_00);
  FStructTypeBitSet::FBitSetContainer::operator-=
            ((FBitSetContainer *)&param_2->Tags,
             (TBitArray<FDefaultBitArrayAllocator> *)&(this_00->CompositionDescriptor).Tags);
  FStructTypeBitSet::FBitSetContainer::operator-=
            ((FBitSetContainer *)&param_2->ChunkFragments,
             (TBitArray<FDefaultBitArrayAllocator> *)
             &(this_00->CompositionDescriptor).ChunkFragments);
  FStructTypeBitSet::FBitSetContainer::operator-=
            ((FBitSetContainer *)&param_2->SharedFragments,
             (TBitArray<FDefaultBitArrayAllocator> *)
             &(this_00->CompositionDescriptor).SharedFragments);
  FStructTypeBitSet::FBitSetContainer::operator-=
            ((FBitSetContainer *)&param_2->ConstSharedFragments,
             (TBitArray<FDefaultBitArrayAllocator> *)
             &(this_00->CompositionDescriptor).ConstSharedFragments);
  bVar2 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                    ((FConstBitSetContainer *)&param_2->ChunkFragments);
  if (!bVar2) {
    local_197 = bVar2;
    `FMassEntityManager::AddCompositionToEntity_GetDelta'::__l2::<lambda_1>::operator()(&local_197);
  }
  bVar2 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                    ((FConstBitSetContainer *)&param_2->SharedFragments);
  if ((!bVar2) &&
     (((param_3 == (FMassArchetypeSharedFragmentValues *)0x0 ||
       (bVar2 = TBitArray<FDefaultBitArrayAllocator>::CompareSetBits<FDefaultBitArrayAllocator>
                          ((TBitArray<FDefaultBitArrayAllocator> *)&param_3->SharedFragmentBitSet,
                           (TBitArray<FDefaultBitArrayAllocator> *)&param_2->SharedFragments,false),
       !bVar2)) ||
      (bVar2 = TBitArray<FDefaultBitArrayAllocator>::CompareSetBits<FDefaultBitArrayAllocator>
                         ((TBitArray<FDefaultBitArrayAllocator> *)
                          &param_3->ConstSharedFragmentBitSet,
                          (TBitArray<FDefaultBitArrayAllocator> *)&param_2->ConstSharedFragments,
                          false), !bVar2)))) {
    local_196 = 0;
    `FMassEntityManager::AddCompositionToEntity_GetDelta'::__l2::<lambda_2>::operator()(&local_196);
  }
  bVar2 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty((FConstBitSetContainer *)param_2);
  if (((!bVar2) ||
      (bVar2 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                         ((FConstBitSetContainer *)&param_2->Tags), !bVar2)) ||
     ((bVar2 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                         ((FConstBitSetContainer *)&param_2->ChunkFragments), !bVar2 ||
      ((bVar2 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                          ((FConstBitSetContainer *)&param_2->SharedFragments), !bVar2 ||
       (bVar2 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                          ((FConstBitSetContainer *)&param_2->ConstSharedFragments), !bVar2)))))) {
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_f8,(FBitSetContainer *)this_00);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_d8,
               (FBitSetContainer *)&(this_00->CompositionDescriptor).Tags);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_b8,
               (FBitSetContainer *)&(this_00->CompositionDescriptor).ChunkFragments);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_98,
               (FBitSetContainer *)&(this_00->CompositionDescriptor).SharedFragments);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_78,
               (FBitSetContainer *)&(this_00->CompositionDescriptor).ConstSharedFragments);
    FMassArchetypeCompositionDescriptor::Append
              ((FMassArchetypeCompositionDescriptor *)local_f8,param_2);
    local_180.ChunkMemorySize = this_00->ChunkMemorySize;
    local_180.DebugName.ComparisonIndex.Value = 0;
    local_180.DebugName.Number = 0;
    local_180.DebugColor.field0_0x0.Bits = (FColor_u_0)0x0;
    CreateArchetype(this,&local_190,(FMassArchetypeCompositionDescriptor *)local_f8,&local_180);
    if (local_190.DataPtr.Object == this_00) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5136943605146975178>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x436,"NewArchetypeHandle.DataPtr.Get() != OldArchetype");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      pFVar7 = local_190.DataPtr.Object;
      if ((local_190.DataPtr.Object == (FMassArchetypeData *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArchetypeHandle.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                             ,0x1ff,L""), pFVar7 = local_190.DataPtr.Object, bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      TArray<FName,TSizedDefaultAllocator<32>_>::operator=(&pFVar7->DebugNames,&this_00->DebugNames)
      ;
      if (param_3 == (FMassArchetypeSharedFragmentValues *)0x0) {
        FMassArchetypeData::MoveEntityToAnotherArchetype
                  (this_00,param_1,pFVar7,(FMassArchetypeSharedFragmentValues *)0x0);
      }
      else {
        piVar5 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
                 FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                              *)&this_00->EntityMap,param_1.Index);
        uVar3 = *piVar5 / this_00->NumEntitiesPerChunk;
        uVar6 = 0;
        if ((int)uVar3 < (this_00->Chunks).ArrayNum) {
          uVar6 = ~uVar3 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues
                  ((FMassArchetypeSharedFragmentValues *)local_168,
                   (FMassArchetypeSharedFragmentValues *)
                   ((this_00->Chunks).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x90 + 0x28));
        FMassArchetypeSharedFragmentValues::Append
                  ((FMassArchetypeSharedFragmentValues *)local_168,param_3);
        if (local_168[4] == false) {
          AlgoImpl::
          IntroSortInternal<FConstSharedStruct,int,FIdentityFunctor,TDereferenceWrapper<FConstSharedStruct,FStructTypeSortOperator>_>
                    ((FConstSharedStruct *)local_120.Data,local_118,local_194,
                     (FStructTypeSortOperator *)&local_194);
          AlgoImpl::
          IntroSortInternal<FSharedStruct,int,FIdentityFunctor,TDereferenceWrapper<FSharedStruct,FStructTypeSortOperator>_>
                    ((FSharedStruct *)local_110.Data,local_108,local_193[0],
                     (FStructTypeSortOperator *)local_193);
          local_168[4] = true;
        }
        FMassArchetypeData::MoveEntityToAnotherArchetype
                  (this_00,param_1,pFVar7,(FMassArchetypeSharedFragmentValues *)local_168);
        DestructItems<FSharedStruct,int>((FSharedStruct *)local_110.Data,local_108);
        if (local_110.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_110.Data);
        }
        DestructItems<FConstSharedStruct,int>((FConstSharedStruct *)local_120.Data,local_118);
        if (local_120.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_120.Data);
        }
        if (local_130 != (void *)0x0) {
          FMemory::Free(local_130);
        }
        if ((void *)local_168._24_8_ != (void *)0x0) {
          FMemory::Free((void *)local_168._24_8_);
        }
      }
      local_195 = (StorageSelector)0x0;
      pIVar4 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
                 ::__l2::Invokers[(this->EntityStorage).TypeIndex])(&local_195,&this->EntityStorage)
      ;
      (**(code **)((longlong)*pIVar4 + 0x28))(pIVar4,(ulonglong)param_1 & 0xffffffff,&local_190);
      FMassObserverManager::OnCompositionChanged
                (&this->ObserverManager,param_1,param_2,AddElement,(FProcessingContext *)0x0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_190.DataPtr.SharedReferenceCount.ReferenceController);
    if ((void *)local_78._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_78._16_8_);
    }
    if ((void *)local_98._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_98._16_8_);
    }
    if ((void *)local_b8._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_b8._16_8_);
    }
    if ((void *)local_d8._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_d8._16_8_);
    }
    if ((void *)local_f8._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_f8._16_8_);
    }
  }
  return;
}

// AddConstSharedFragmentToEntity @ 1471ec2a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMassEntityManager::AddConstSharedFragmentToEntity
          (FMassEntityManager *this,FMassEntityHandle param_1,FConstSharedStruct *param_2)

{
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar1;
  FMassArchetypeData *this_00;
  FObjectPtr_u_0 *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  IEntityStorageInterface *pIVar8;
  undefined8 *puVar9;
  int *piVar10;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar11;
  uint uVar12;
  longlong lVar13;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar14;
  int iVar15;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar16;
  int iStackX_14;
  undefined1 auStack_1d8 [32];
  char *local_1b8;
  longlong local_1b0;
  undefined1 local_1a8;
  StorageSelector local_1a7;
  StorageSelector local_1a6;
  FIdentityFunctor local_1a5;
  FIdentityFunctor local_1a4 [4];
  uint local_1a0;
  FMassArchetypeCreationParams local_198;
  FMassArchetypeHandle local_188;
  FConstSharedStruct local_178;
  FConstSharedStruct local_168;
  undefined1 local_158 [56];
  void *local_120;
  ForAnyElementType local_110;
  int local_108;
  ForAnyElementType local_100;
  int local_f8;
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  if (UE::AITestSuite::TestsInProgress < 1) {
    if (0 < (int)this->ProcessingScopeCount) {
      local_1b8 = "FMassEntityManager::AddConstSharedFragmentToEntity";
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsProcessing() == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x58b,
                         L"Synchronous API function %hs called during mass processing. Use asynchronous API instead."
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
  }
  else if (0 < (int)this->ProcessingScopeCount) {
    if ((byte)LogTestableEnsures._0_1_ < 2) {
      return false;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
    return false;
  }
  pTVar1 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(param_2->StructMemoryPtr).Object;
  if (((pTVar1 == (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) ||
      (lVar13 = (longlong)*(short *)((longlong)pTVar1->DebugPtr + 0x5c),
      (-lVar13 & (longlong)pTVar1 + lVar13 + 7) == 0)) ||
     ((TObjectPtr<UScriptStruct_const_>_u_0)pTVar1->DebugPtr ==
      (TObjectPtr<UScriptStruct_const_>_u_0)0x0)) {
    local_1a8 = 0;
    bVar5 = `FMassEntityManager::AddConstSharedFragmentToEntity'::__l38::<lambda_1>::operator()
                      (&local_1a8);
    if (!bVar5) {
      return false;
    }
  }
  bVar5 = IsEntityBuilt(this,param_1);
  iVar15 = param_1.Index;
  if (!bVar5) {
    iStackX_14 = param_1.SerialNumber;
    local_1b0 = CONCAT44(local_1b0._4_4_,iStackX_14);
    local_1b8 = (char *)CONCAT44(local_1b8._4_4_,iVar15);
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsEntityBuilt(EntityHandle)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntityManager.h"
                       ,0x232,L"Entity not yet created(ID: %d, SN:%d)");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  local_1a7 = (StorageSelector)0x0;
  pIVar8 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(&local_1a7,&this->EntityStorage);
  puVar9 = (undefined8 *)
           (**(code **)((longlong)*pIVar8 + 0x20))(pIVar8,(ulonglong)param_1 & 0xffffffff);
  this_00 = (FMassArchetypeData *)*puVar9;
  if ((this_00 == (FMassArchetypeData *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentArchetype",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x595,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  pTVar1 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(param_2->StructMemoryPtr).Object;
  TVar16.DebugPtr = (UScriptStruct *)0x0;
  TVar14.DebugPtr = TVar16.DebugPtr;
  if (pTVar1 != (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) {
    TVar14.DebugPtr = pTVar1->DebugPtr;
  }
  bVar5 = TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
          ::Contains((TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                      *)&(this_00->CompositionDescriptor).ConstSharedFragments,TVar14.DebugPtr);
  if (!bVar5) {
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_e8,(FBitSetContainer *)this_00);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_c8,
               (FBitSetContainer *)&(this_00->CompositionDescriptor).Tags);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_a8,
               (FBitSetContainer *)&(this_00->CompositionDescriptor).ChunkFragments);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_88,
               (FBitSetContainer *)&(this_00->CompositionDescriptor).SharedFragments);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_68,
               (FBitSetContainer *)&(this_00->CompositionDescriptor).ConstSharedFragments);
    TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
    ::Add((TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           *)local_68,TVar14.DebugPtr);
    local_198.ChunkMemorySize = this_00->ChunkMemorySize;
    local_198.DebugName.ComparisonIndex.Value = 0;
    local_198.DebugName.Number = 0;
    local_198.DebugColor.field0_0x0.Bits = (FColor_u_0)0x0;
    CreateArchetype(this,&local_188,(FMassArchetypeCompositionDescriptor *)local_e8,&local_198);
    if ((local_188.DataPtr.Object == (FMassArchetypeData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewArchetypeHandle.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                           ,0x5a9,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    if ((local_188.DataPtr.Object == (FMassArchetypeData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewArchetype",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                           ,0x5ab,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    piVar10 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
              FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                           *)&this_00->EntityMap,iVar15);
    local_1a0 = *piVar10 / this_00->NumEntitiesPerChunk;
    iVar15 = (this_00->Chunks).ArrayNum;
    uVar12 = 0;
    if ((int)local_1a0 < iVar15) {
      uVar12 = ~local_1a0 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (local_1b8 = (char *)(longlong)(int)local_1a0, local_1b0 = (longlong)iVar15,
       bVar5 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    uVar12 = local_1a0;
    pFVar3 = (this_00->Chunks).AllocatorInstance.Data;
    bVar5 = FMassArchetypeSharedFragmentValues::ContainsType
                      ((FMassArchetypeSharedFragmentValues *)
                       (pFVar3 + (longlong)(int)local_1a0 * 0x90 + 0x28),TVar14.DebugPtr);
    if ((bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!OldSharedFragmentValues.ContainsType(StructType)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                           ,0x5ae,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues
              ((FMassArchetypeSharedFragmentValues *)local_158,
               (FMassArchetypeSharedFragmentValues *)(pFVar3 + (longlong)(int)uVar12 * 0x90 + 0x28))
    ;
    FMassArchetypeSharedFragmentValues::Add_GetRef
              ((FMassArchetypeSharedFragmentValues *)local_158,&local_168,param_2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_168.StructMemoryPtr.SharedReferenceCount.ReferenceController);
    if (local_158[4] == false) {
      AlgoImpl::
      IntroSortInternal<FConstSharedStruct,int,FIdentityFunctor,TDereferenceWrapper<FConstSharedStruct,FStructTypeSortOperator>_>
                ((FConstSharedStruct *)local_110.Data,local_108,local_1a5,
                 (FStructTypeSortOperator *)&local_1a5);
      AlgoImpl::
      IntroSortInternal<FSharedStruct,int,FIdentityFunctor,TDereferenceWrapper<FSharedStruct,FStructTypeSortOperator>_>
                ((FSharedStruct *)local_100.Data,local_f8,local_1a4[0],
                 (FStructTypeSortOperator *)local_1a4);
      local_158[4] = true;
    }
    FMassArchetypeData::MoveEntityToAnotherArchetype
              (this_00,param_1,local_188.DataPtr.Object,
               (FMassArchetypeSharedFragmentValues *)local_158);
    local_1a6 = (StorageSelector)0x0;
    pIVar8 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
               ::__l2::Invokers[(this->EntityStorage).TypeIndex])(&local_1a6,&this->EntityStorage);
    (**(code **)((longlong)*pIVar8 + 0x28))(pIVar8,(ulonglong)param_1 & 0xffffffff,&local_188);
    DestructItems<FSharedStruct,int>((FSharedStruct *)local_100.Data,local_f8);
    if (local_100.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data);
    }
    DestructItems<FConstSharedStruct,int>((FConstSharedStruct *)local_110.Data,local_108);
    if (local_110.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data);
    }
    if (local_120 != (void *)0x0) {
      FMemory::Free(local_120);
    }
    if ((void *)local_158._24_8_ != (void *)0x0) {
      FMemory::Free((void *)local_158._24_8_);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_188.DataPtr.SharedReferenceCount.ReferenceController);
    if ((void *)local_68._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_68._16_8_);
    }
    if ((void *)local_88._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_88._16_8_);
    }
    if ((void *)local_a8._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_a8._16_8_);
    }
    if ((void *)local_c8._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_c8._16_8_);
    }
    if ((void *)local_e8._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_e8._16_8_);
    }
    return true;
  }
  piVar10 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
            FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                         *)&this_00->EntityMap,iVar15);
  uVar7 = *piVar10 / this_00->NumEntitiesPerChunk;
  iVar15 = (this_00->Chunks).ArrayNum;
  uVar12 = 0;
  if ((int)uVar7 < iVar15) {
    uVar12 = ~uVar7 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (local_1b8 = (char *)(longlong)(int)uVar7, local_1b0 = (longlong)iVar15,
     bVar5 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar5
     )) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  FMassArchetypeSharedFragmentValues::GetConstSharedFragmentStruct
            ((FMassArchetypeSharedFragmentValues *)
             ((this_00->Chunks).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x90 + 0x28),
             &local_178,TVar14.DebugPtr);
  TVar14.DebugPtr = TVar16.DebugPtr;
  if (local_178.StructMemoryPtr.Object != (FStructSharedMemory *)0x0) {
    TVar14.DebugPtr = ((local_178.StructMemoryPtr.Object)->ScriptStruct).field0_0x0.DebugPtr;
  }
  pFVar2 = (FObjectPtr_u_0 *)(param_2->StructMemoryPtr).Object;
  TVar11.DebugPtr = TVar16.DebugPtr;
  if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
    TVar11.ObjectPtr.field0_0x0 = (FObjectPtr)(FObjectPtr_u_0)*(FObjectPtr *)pFVar2;
  }
  if (TVar14.DebugPtr == TVar11.DebugPtr) {
    TVar14.DebugPtr = TVar16.DebugPtr;
    if (local_178.StructMemoryPtr.Object != (FStructSharedMemory *)0x0) {
      lVar13 = (longlong)
               *(short *)((longlong)
                          &(((local_178.StructMemoryPtr.Object)->ScriptStruct).field0_0x0.DebugPtr)
                           ->_padding_ + 4);
      TVar14.DebugPtr =
           (UScriptStruct *)
           ((longlong)&((local_178.StructMemoryPtr.Object)->ScriptStruct).field0_0x0 + lVar13 + 7 &
           -lVar13);
    }
    if (pFVar2 != (FObjectPtr_u_0 *)0x0) {
      TVar16.DebugPtr =
           (UScriptStruct *)
           ((longlong)pFVar2 + (longlong)*(short *)((longlong)pFVar2->Handle + 0x5c) + 7 &
           -(longlong)*(short *)((longlong)pFVar2->Handle + 0x5c));
    }
    if (TVar14.DebugPtr == TVar16.DebugPtr) goto LAB_1471ec5a8;
  }
  bVar5 = FConstSharedStruct::CompareStructValues<FConstSharedStruct>(&local_178,param_2,0);
  if (!bVar5) {
    if (2 < (byte)LogMass._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_178.StructMemoryPtr.SharedReferenceCount.ReferenceController);
    return false;
  }
LAB_1471ec5a8:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.StructMemoryPtr.SharedReferenceCount.ReferenceController);
  return true;
}

// AddElementToEntities @ 1471ed0d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityManager::AddElementToEntities
          (FMassEntityManager *this,TArrayView<FMassEntityHandle_const_,int> *param_1,
          TNotNull<UScriptStruct_const_*> param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UPackage *pUVar4;
  UStruct *pUVar5;
  void *pvVar6;
  undefined1 auStack_168 [32];
  char *local_148;
  FScriptContainerElement *local_140;
  TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> local_138;
  FName local_128;
  UScriptStruct *local_120;
  UScriptStruct *local_118;
  FString local_110;
  FMassArchetypeEntityCollection *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FMassArchetypeEntityCollection *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  TArrayView<FMassEntityHandle_const_,int> local_d8;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_c8;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_b8;
  undefined1 local_a8 [16];
  void *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88 [16];
  void *pvStack_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68 [16];
  void *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [16];
  void *pvStack_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  bVar2 = UE::Mass::Private::IsElement(param_2);
  if (!bVar2) {
    local_128 = (FName)(param_2.Val)->_padding_;
    ::FName::ToString(&local_128,&local_110);
    local_140 = (FScriptContainerElement *)L"";
    if (local_110.Data.ArrayNum != 0) {
      local_140 = local_110.Data.AllocatorInstance.Data;
    }
    local_148 = "FMassEntityManager::AddElementToEntities";
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UE::Mass::Private::IsElement(ElementType)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                       ,0x54d,
                       L"%hs: Only tags and fragments are considered \'elements\', type provided: %s"
                      );
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_d8.DataPtr = param_1->DataPtr;
  local_d8.ArrayNum = param_1->ArrayNum;
  local_d8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  UE::Mass::Utils::CreateEntityCollections(this,&local_d8,FoldDuplicates,&local_138);
  if (param_2.Val != (UScriptStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassTag,(UObject *)pUVar4,L"MassTag");
      if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_1471ed304;
    }
    iVar3 = (int)(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_;
    if (((int)(param_2.Val)->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)((param_2.Val)->_padding_ + (longlong)iVar3 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      local_88._0_8_ = 0;
      local_88._8_8_ = 0;
      pvStack_78 = (void *)0x0;
      local_70 = 0;
      local_6c = 0x80;
      local_98 = (void *)0x0;
      local_90 = 0;
      local_8c = 0x80;
      pUVar5 = TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
               ::GetBaseUStruct();
      if (pUVar5 == (UStruct *)0x0) {
LAB_1471ed266:
        local_120 = param_2.Val;
        bVar2 = `TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                ::Add'::__l6::<lambda_1>::operator()(&local_120);
        if (bVar2) goto LAB_1471ed279;
      }
      else {
        iVar3 = (int)pUVar5->_padding_;
        if (((int)(param_2.Val)->_padding_ < iVar3) ||
           ((longlong *)*(undefined1 **)((param_2.Val)->_padding_ + (longlong)iVar3 * 8) !=
            &pUVar5->_padding_)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_1471ed266;
LAB_1471ed279:
        iVar3 = FStructTracker::FindOrAddStructTypeIndex
                          (&FMassTagBitSetStructTrackerWrapper::StructTracker,(UStruct *)param_2.Val
                          );
        FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)local_a8,iVar3);
      }
      iVar3 = local_138.ArrayNum;
      local_f8 = (FMassArchetypeEntityCollection *)local_138.AllocatorInstance.Data;
      if ((local_138.ArrayNum < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iStack_f0 = iVar3;
      local_c8._12_4_ = uStack_ec;
      local_c8.ArrayNum = iVar3;
      local_c8.DataPtr = local_f8;
      BatchChangeTagsForEntities
                (this,&local_c8,
                 (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)
                 local_a8,(TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>
                           *)local_88);
      pvVar6 = pvStack_78;
      if (local_98 != (void *)0x0) {
        FMemory::Free(local_98);
        pvVar6 = pvStack_78;
      }
      goto LAB_1471ed3ec;
    }
  }
LAB_1471ed304:
  local_48._0_8_ = 0;
  local_48._8_8_ = 0;
  pvStack_38 = (void *)0x0;
  local_30 = 0;
  local_2c = 0x80;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_4c = 0x80;
  pUVar5 = TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           ::GetBaseUStruct();
  if (pUVar5 == (UStruct *)0x0) {
LAB_1471ed356:
    local_118 = param_2.Val;
    bVar2 = `TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
            ::Add'::__l6::<lambda_1>::operator()(&local_118);
    if (bVar2) goto LAB_1471ed369;
  }
  else {
    iVar3 = (int)pUVar5->_padding_;
    if (((int)(param_2.Val)->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)((param_2.Val)->_padding_ + (longlong)iVar3 * 8) !=
        &pUVar5->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1471ed356;
LAB_1471ed369:
    iVar3 = FStructTracker::FindOrAddStructTypeIndex
                      (&FMassFragmentBitSetStructTrackerWrapper::StructTracker,
                       (UStruct *)param_2.Val);
    FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)local_68,iVar3);
  }
  iVar3 = local_138.ArrayNum;
  local_e8 = (FMassArchetypeEntityCollection *)local_138.AllocatorInstance.Data;
  if ((local_138.ArrayNum < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iStack_e0 = iVar3;
  local_b8._12_4_ = uStack_dc;
  local_b8.ArrayNum = iVar3;
  local_b8.DataPtr = local_e8;
  BatchChangeFragmentCompositionForEntities
            (this,&local_b8,
             (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
              *)local_68,
             (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
              *)local_48);
  pvVar6 = pvStack_38;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
    pvVar6 = pvStack_38;
  }
LAB_1471ed3ec:
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  DestructItems<FMassArchetypeEntityCollection,int>
            ((FMassArchetypeEntityCollection *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
  if ((FMassArchetypeEntityCollection *)local_138.AllocatorInstance.Data !=
      (FMassArchetypeEntityCollection *)0x0) {
    FMemory::Free(local_138.AllocatorInstance.Data);
  }
  return;
}

// AddElementToEntity @ 1471ed440

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityManager::AddElementToEntity
          (FMassEntityManager *this,FMassEntityHandle param_1,
          TNotNull<UScriptStruct_const_*> param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UPackage *pUVar4;
  FName local_res18;
  FString local_18;
  
  bVar3 = UE::Mass::Private::IsElement(param_2);
  if (!bVar3) {
    local_res18 = (FName)(param_2.Val)->_padding_;
    ::FName::ToString(&local_res18,&local_18);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("UE::Mass::Private::IsElement(ElementType)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                       ,0x55e,
                       L"%hs: Only tags and fragments are considered \'elements\', type provided: %s"
                      );
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_2.Val != (UScriptStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassTag,(UObject *)pUVar4,L"MassTag");
      if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_1471ed55b;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_;
    if (((int)(param_2.Val)->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)((param_2.Val)->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      AddTagToEntity(this,param_1,param_2.Val);
      return;
    }
  }
LAB_1471ed55b:
  AddFragmentToEntity(this,param_1,param_2.Val);
  return;
}

// AddFragmentInstanceListToEntity @ 1471ed7d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassEntityManager::AddFragmentInstanceListToEntity
          (FMassEntityManager *this,FMassEntityHandle param_1,
          TArrayView<FInstancedStruct_const_,int> *param_2)

{
  TObjectPtr<UScriptStruct_const_>_u_0 TVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UStruct *pUVar5;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *pTVar6;
  IEntityStorageInterface *pIVar7;
  FMassArchetypeData *this_00;
  FInstancedStruct *pFVar8;
  FInstancedStruct *pFVar9;
  undefined1 auStackY_188 [32];
  StorageSelector local_158 [8];
  TObjectPtr<UScriptStruct_const_>_u_0 local_150;
  TArrayView<FInstancedStruct_const_,int> local_148;
  FInstancedStruct *local_138;
  undefined8 uStack_130;
  undefined1 local_128 [16];
  void *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 local_108 [48];
  void *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  void *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  void *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  void *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (UE::AITestSuite::TestsInProgress < 1) {
    if ((0 < (int)this->ProcessingScopeCount) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsProcessing() == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                           ,0x4b9,
                           L"Synchronous API function %hs called during mass processing. Use asynchronous API instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (0 < (int)this->ProcessingScopeCount) {
    if ((byte)LogTestableEnsures._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
    return;
  }
  bVar3 = IsEntityBuilt(this,param_1);
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsEntityBuilt(EntityHandle)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntityManager.h"
                         ,0x232,L"Entity not yet created(ID: %d, SN:%d)"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_2->ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FragmentInstanceList.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x4bc,
                         L"Need to specify at least one fragment instances for this operation"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar8 = param_2->DataPtr;
  uStack_130 = *(undefined8 *)&param_2->ArrayNum;
  pFVar9 = pFVar8 + (int)*(undefined8 *)&param_2->ArrayNum;
  local_118 = (void *)0x0;
  local_110 = 0;
  local_10c = 0x80;
  local_138 = pFVar8;
  do {
    if (pFVar8 == pFVar9) {
      pTVar6 = InternalAddFragmentListToEntityChecked
                         (this,(TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                                *)local_68,param_1,
                          (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                           *)local_128);
      FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                ((FBitSetContainer *)local_108,(FBitSetContainer *)pTVar6);
      local_d8 = (void *)0x0;
      local_d0 = 0;
      local_cc = 0x80;
      local_b8 = (void *)0x0;
      local_b0 = 0;
      local_ac = 0x80;
      local_98 = (void *)0x0;
      local_90 = 0;
      local_8c = 0x80;
      local_78 = (void *)0x0;
      local_70 = 0;
      local_6c = 0x80;
      if ((void *)local_68._16_8_ != (void *)0x0) {
        FMemory::Free((void *)local_68._16_8_);
      }
      if (local_118 != (void *)0x0) {
        FMemory::Free(local_118);
      }
      local_158[0] = (StorageSelector)0x0;
      pIVar7 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
                 ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_158,&this->EntityStorage);
      this_00 = (FMassArchetypeData *)
                (**(code **)((longlong)*pIVar7 + 0x10))(pIVar7,(ulonglong)param_1 & 0xffffffff);
      if ((this_00 == (FMassArchetypeData *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentArchetype",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                             ,0x4c1,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_148.DataPtr = param_2->DataPtr;
      local_148.ArrayNum = param_2->ArrayNum;
      local_148._12_4_ = *(undefined4 *)&param_2->field_0xc;
      FMassArchetypeData::SetFragmentsData(this_00,param_1,&local_148);
      FMassObserverManager::OnCompositionChanged
                (&this->ObserverManager,param_1,(FMassArchetypeCompositionDescriptor *)local_108,
                 AddElement,(FProcessingContext *)0x0);
      if (local_78 != (void *)0x0) {
        FMemory::Free(local_78);
      }
      if (local_98 != (void *)0x0) {
        FMemory::Free(local_98);
      }
      if (local_b8 != (void *)0x0) {
        FMemory::Free(local_b8);
      }
      if (local_d8 != (void *)0x0) {
        FMemory::Free(local_d8);
      }
      if ((void *)local_108._16_8_ != (void *)0x0) {
        FMemory::Free((void *)local_108._16_8_);
      }
      return;
    }
    TVar1 = (TObjectPtr<UScriptStruct_const_>_u_0)(pFVar8->ScriptStruct).field0_0x0.DebugPtr;
    if (TVar1.DebugPtr != (UScriptStruct *)0x0) {
      pUVar5 = TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
               ::GetBaseUStruct();
      if (pUVar5 == (UStruct *)0x0) {
LAB_1471ed976:
        local_150 = TVar1;
        bVar3 = `TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                ::Add'::__l6::<lambda_1>::operator()(&local_150);
        if (!bVar3) goto LAB_1471ed9a4;
      }
      else {
        iVar4 = (int)pUVar5->_padding_;
        if (((int)(TVar1.DebugPtr)->_padding_ < iVar4) ||
           ((longlong *)*(undefined1 **)((TVar1.DebugPtr)->_padding_ + (longlong)iVar4 * 8) !=
            &pUVar5->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_1471ed976;
      }
      iVar4 = FStructTracker::FindOrAddStructTypeIndex
                        (&FMassFragmentBitSetStructTrackerWrapper::StructTracker,
                         (UStruct *)TVar1.DebugPtr);
      FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)local_128,iVar4);
    }
LAB_1471ed9a4:
    pFVar8 = pFVar8 + 1;
  } while( true );
}

// AddFragmentListToEntity @ 1471edb40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassEntityManager::AddFragmentListToEntity
          (FMassEntityManager *this,FMassEntityHandle param_1,
          TArrayView<UScriptStruct_const_*_const,int> *param_2)

{
  UScriptStruct **ppUVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UStruct *pUVar6;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *pTVar7;
  UScriptStruct **ppUVar8;
  undefined1 auStackY_168 [32];
  UScriptStruct *local_138;
  undefined1 local_130 [16];
  void *local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined1 local_108 [48];
  void *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  void *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  void *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  void *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if (UE::AITestSuite::TestsInProgress < 1) {
    if ((0 < (int)this->ProcessingScopeCount) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsProcessing() == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                           ,0x416,
                           L"Synchronous API function %hs called during mass processing. Use asynchronous API instead."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (0 < (int)this->ProcessingScopeCount) {
    if ((byte)LogTestableEnsures._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
    return;
  }
  bVar4 = IsEntityBuilt(this,param_1);
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsEntityBuilt(EntityHandle)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntityManager.h"
                         ,0x232,L"Entity not yet created(ID: %d, SN:%d)"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ppUVar8 = param_2->DataPtr;
  local_120 = (void *)0x0;
  local_118 = 0;
  local_114 = 0x80;
  ppUVar1 = ppUVar8 + (int)*(undefined8 *)&param_2->ArrayNum;
  do {
    if (ppUVar8 == ppUVar1) {
      pTVar7 = InternalAddFragmentListToEntityChecked
                         (this,(TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                                *)local_68,param_1,
                          (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                           *)local_130);
      FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                ((FBitSetContainer *)local_108,(FBitSetContainer *)pTVar7);
      local_d8 = (void *)0x0;
      local_d0 = 0;
      local_cc = 0x80;
      local_b8 = (void *)0x0;
      local_b0 = 0;
      local_ac = 0x80;
      local_98 = (void *)0x0;
      local_90 = 0;
      local_8c = 0x80;
      local_78 = (void *)0x0;
      local_70 = 0;
      local_6c = 0x80;
      if ((void *)local_68._16_8_ != (void *)0x0) {
        FMemory::Free((void *)local_68._16_8_);
      }
      if (local_120 != (void *)0x0) {
        FMemory::Free(local_120);
      }
      FMassObserverManager::OnCompositionChanged
                (&this->ObserverManager,param_1,(FMassArchetypeCompositionDescriptor *)local_108,
                 AddElement,(FProcessingContext *)0x0);
      if (local_78 != (void *)0x0) {
        FMemory::Free(local_78);
      }
      if (local_98 != (void *)0x0) {
        FMemory::Free(local_98);
      }
      if (local_b8 != (void *)0x0) {
        FMemory::Free(local_b8);
      }
      if (local_d8 != (void *)0x0) {
        FMemory::Free(local_d8);
      }
      if ((void *)local_108._16_8_ != (void *)0x0) {
        FMemory::Free((void *)local_108._16_8_);
      }
      return;
    }
    pUVar2 = *ppUVar8;
    if (pUVar2 != (UScriptStruct *)0x0) {
      pUVar6 = TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
               ::GetBaseUStruct();
      if (pUVar6 == (UStruct *)0x0) {
LAB_1471edc96:
        local_138 = pUVar2;
        bVar4 = `TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                ::Add'::__l6::<lambda_1>::operator()(&local_138);
        if (!bVar4) goto LAB_1471edcc4;
      }
      else {
        iVar5 = (int)pUVar6->_padding_;
        if (((int)pUVar2->_padding_ < iVar5) ||
           ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar5 * 8) !=
            &pUVar6->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_1471edc96;
      }
      iVar5 = FStructTracker::FindOrAddStructTypeIndex
                        (&FMassFragmentBitSetStructTrackerWrapper::StructTracker,(UStruct *)pUVar2);
      FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)local_130,iVar5);
    }
LAB_1471edcc4:
    ppUVar8 = ppUVar8 + 1;
  } while( true );
}

// AddFragmentToEntity @ 1471eddf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassEntityManager::AddFragmentToEntity
          (FMassEntityManager *this,FMassEntityHandle param_1,UScriptStruct *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UStruct *pUVar4;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *pTVar5;
  undefined1 auStackY_158 [32];
  UScriptStruct *local_128;
  undefined1 local_120 [16];
  void *local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_f8 [48];
  void *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  void *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  void *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  void *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (UE::AITestSuite::TestsInProgress < 1) {
    if ((0 < (int)this->ProcessingScopeCount) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsProcessing() == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                           ,0x3f8,
                           L"Synchronous API function %hs called during mass processing. Use asynchronous API instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (0 < (int)this->ProcessingScopeCount) {
    if ((byte)LogTestableEnsures._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
    return;
  }
  if ((param_2 == (UScriptStruct *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FragmentType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x3f9,L"Null fragment type passed in to %hs"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = IsEntityBuilt(this,param_1);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsEntityBuilt(EntityHandle)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntityManager.h"
                         ,0x232,L"Entity not yet created(ID: %d, SN:%d)"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_104 = 0x80;
  local_110 = (void *)0x0;
  local_108 = 0;
  pUVar4 = TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           ::GetBaseUStruct();
  if (pUVar4 == (UStruct *)0x0) {
LAB_1471edf40:
    local_128 = param_2;
    bVar2 = `TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
            ::Add'::__l6::<lambda_1>::operator()(&local_128);
    if (!bVar2) goto LAB_1471edf6e;
  }
  else {
    iVar3 = (int)pUVar4->_padding_;
    if (((int)param_2->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(param_2->_padding_ + (longlong)iVar3 * 8) != &pUVar4->_padding_
       )) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1471edf40;
  }
  iVar3 = FStructTracker::FindOrAddStructTypeIndex
                    (&FMassFragmentBitSetStructTrackerWrapper::StructTracker,(UStruct *)param_2);
  FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)local_120,iVar3);
LAB_1471edf6e:
  pTVar5 = InternalAddFragmentListToEntityChecked
                     (this,(TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                            *)local_58,param_1,
                      (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                       *)local_120);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_f8,(FBitSetContainer *)pTVar5);
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_9c = 0x80;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  if ((void *)local_58._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_58._16_8_);
  }
  if (local_110 != (void *)0x0) {
    FMemory::Free(local_110);
  }
  FMassObserverManager::OnCompositionChanged
            (&this->ObserverManager,param_1,(FMassArchetypeCompositionDescriptor *)local_f8,
             AddElement,(FProcessingContext *)0x0);
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  if ((void *)local_f8._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_f8._16_8_);
  }
  return;
}

// AddFragmentToEntity @ 1471ee070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassEntityManager::AddFragmentToEntity
          (FMassEntityManager *this,FMassEntityHandle param_1,UScriptStruct *param_2,
          TFunctionRef<void___cdecl(void_*,UScriptStruct_const_&)> *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UStruct *pUVar4;
  IEntityStorageInterface *pIVar5;
  FMassArchetypeData *this_00;
  undefined1 auStackY_178 [32];
  StorageSelector local_148 [8];
  UScriptStruct *local_140;
  void *local_138;
  undefined1 local_130 [16];
  void *local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined1 local_108 [48];
  void *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  void *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  void *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  void *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (UE::AITestSuite::TestsInProgress < 1) {
    if ((0 < (int)this->ProcessingScopeCount) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsProcessing() == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                           ,0x404,
                           L"Synchronous API function %hs called during mass processing. Use asynchronous API instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (0 < (int)this->ProcessingScopeCount) {
    if ((byte)LogTestableEnsures._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
    return;
  }
  if ((param_2 == (UScriptStruct *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FragmentType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x405,L"Null fragment type passed in to %hs"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = IsEntityBuilt(this,param_1);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsEntityBuilt(EntityHandle)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntityManager.h"
                         ,0x232,L"Entity not yet created(ID: %d, SN:%d)"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_114 = 0x80;
  local_120 = (void *)0x0;
  local_118 = 0;
  pUVar4 = TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           ::GetBaseUStruct();
  if (pUVar4 == (UStruct *)0x0) {
LAB_1471ee1d0:
    local_140 = param_2;
    bVar2 = `TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
            ::Add'::__l6::<lambda_1>::operator()(&local_140);
    if (!bVar2) goto LAB_1471ee1fe;
  }
  else {
    iVar3 = (int)pUVar4->_padding_;
    if (((int)param_2->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)(param_2->_padding_ + (longlong)iVar3 * 8) != &pUVar4->_padding_
       )) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_1471ee1d0;
  }
  iVar3 = FStructTracker::FindOrAddStructTypeIndex
                    (&FMassFragmentBitSetStructTrackerWrapper::StructTracker,(UStruct *)param_2);
  FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)local_130,iVar3);
LAB_1471ee1fe:
  InternalAddFragmentListToEntityChecked
            (this,(TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                   *)local_68,param_1,
             (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
              *)local_130);
  if (local_120 != (void *)0x0) {
    FMemory::Free(local_120);
  }
  local_148[0] = (StorageSelector)0x0;
  pIVar5 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_148,&this->EntityStorage);
  this_00 = (FMassArchetypeData *)
            (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5,(ulonglong)param_1 & 0xffffffff);
  if ((this_00 == (FMassArchetypeData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentArchetype",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x40b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_138 = FMassArchetypeData::GetFragmentDataForEntity(this_00,param_2,param_1.Index);
  (**(code **)param_3)(*(undefined8 *)&param_3->field_0x8,&local_138,param_2);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_108,(FBitSetContainer *)local_68);
  local_d8 = (void *)0x0;
  local_d0 = 0;
  local_cc = 0x80;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_ac = 0x80;
  local_98 = (void *)0x0;
  local_90 = 0;
  local_8c = 0x80;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  FMassObserverManager::OnCompositionChanged
            (&this->ObserverManager,param_1,(FMassArchetypeCompositionDescriptor *)local_108,
             AddElement,(FProcessingContext *)0x0);
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  if ((void *)local_108._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_108._16_8_);
  }
  if ((void *)local_68._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._16_8_);
  }
  return;
}

// AddReferencedObjects @ 1471eef20

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassEntityManager::AddReferencedObjects(FMassEntityManager *this,FReferenceCollector *param_1)

{
  int iVar1;
  code *pcVar2;
  UScriptStruct *pUVar3;
  bool bVar4;
  UObject *pUVar5;
  UPackage *pUVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FWeakObjectPtr local_res8;
  UScriptStruct *local_res18 [2];
  
  if (this->InitializationState == Uninitialized) {
    if (FVisualLogger::bIsRecording != 0) {
      pUVar5 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
      FVisualLogger::CategorizedLogfImpl
                (pUVar5,(FName *)&LogMass.field_0x4,Log,
                 L"AddReferencedObjects called before Initialize call");
    }
    if (4 < (byte)LogMass._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
      return;
    }
  }
  else if (this->InitializationState != Deinitialized) {
    pFVar7 = (this->ConstSharedFragmentsContainer).Instances.AllocatorInstance.Data;
    iVar1 = (this->ConstSharedFragmentsContainer).Instances.ArrayNum;
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
    for (; pFVar7 != pFVar8; pFVar7 = pFVar7 + 0x10) {
      FConstSharedStruct::AddStructReferencedObjects((FConstSharedStruct *)pFVar7,param_1);
    }
    iVar1 = (this->SharedFragmentsContainer).Instances.ArrayNum;
    pFVar7 = (this->SharedFragmentsContainer).Instances.AllocatorInstance.Data;
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar8 = pFVar7 + (longlong)iVar1 * 0x10;
    for (; pFVar7 != pFVar8; pFVar7 = pFVar7 + 0x10) {
      FSharedStruct::AddStructReferencedObjects((FSharedStruct *)pFVar7,param_1);
    }
    if (Z_Registration_Info_UScriptStruct_FMassObserverManager.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassObserverManager.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassObserverManager,(UObject *)pUVar6,
                           L"MassObserverManager");
    }
    pUVar3 = Z_Registration_Info_UScriptStruct_FMassObserverManager.OuterSingleton;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (Z_Registration_Info_UScriptStruct_FMassObserverManager.OuterSingleton !=
        (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable
                ((UObject *)Z_Registration_Info_UScriptStruct_FMassObserverManager.OuterSingleton);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18[0] = pUVar3;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
    FReferenceCollector::AddReferencedObjects
              (param_1,(TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr> *)&local_res8,
               &this->ObserverManager,(UObject *)0x0,(FProperty *)0x0);
  }
  return;
}

// AddSharedFragmentToEntity @ 1471ef510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMassEntityManager::AddSharedFragmentToEntity
          (FMassEntityManager *this,FMassEntityHandle param_1,FSharedStruct *param_2)

{
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar1;
  FMassArchetypeData *this_00;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  FStructSharedMemory *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  IEntityStorageInterface *pIVar9;
  undefined8 *puVar10;
  int *piVar11;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar12;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar13;
  longlong lVar14;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar15;
  int iVar16;
  uint uVar17;
  char *pcVar18;
  longlong *plVar19;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar20;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar21;
  int iStackX_14;
  undefined1 auStack_1d8 [32];
  char *local_1b8;
  longlong local_1b0;
  undefined1 local_1a8;
  StorageSelector local_1a7;
  StorageSelector local_1a6;
  FIdentityFunctor local_1a5;
  FIdentityFunctor local_1a4 [4];
  FMassArchetypeCreationParams local_1a0;
  FMassArchetypeHandle local_190;
  FSharedStruct *local_178;
  FSharedStruct local_170;
  undefined1 local_158 [56];
  void *local_120;
  ForAnyElementType local_110;
  int local_108;
  ForAnyElementType local_100;
  int local_f8;
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  TVar21.DebugPtr = (UScriptStruct *)0x0;
  local_178 = param_2;
  if (UE::AITestSuite::TestsInProgress < 1) {
    if (0 < (int)this->ProcessingScopeCount) {
      local_1b8 = "FMassEntityManager::AddSharedFragmentToEntity";
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsProcessing() == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x5e8,
                         L"Synchronous API function %hs called during mass processing. Use asynchronous API instead."
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
  }
  else if (0 < (int)this->ProcessingScopeCount) {
    if ((byte)LogTestableEnsures._0_1_ < 2) {
      return false;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
    return false;
  }
  pTVar1 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(param_2->StructMemoryPtr).Object;
  if (((pTVar1 == (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) ||
      (lVar14 = (longlong)*(short *)((longlong)pTVar1->DebugPtr + 0x5c),
      (-lVar14 & (longlong)pTVar1 + lVar14 + 7) == 0)) ||
     ((TObjectPtr<UScriptStruct_const_>_u_0)pTVar1->DebugPtr ==
      (TObjectPtr<UScriptStruct_const_>_u_0)0x0)) {
    local_1a8 = 0;
    bVar6 = `FMassEntityManager::AddSharedFragmentToEntity'::__l38::<lambda_1>::operator()
                      (&local_1a8);
    if (!bVar6) {
      return false;
    }
  }
  bVar6 = IsEntityBuilt(this,param_1);
  iVar16 = param_1.Index;
  if (!bVar6) {
    iStackX_14 = param_1.SerialNumber;
    local_1b0 = CONCAT44(local_1b0._4_4_,iStackX_14);
    local_1b8 = (char *)CONCAT44(local_1b8._4_4_,iVar16);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsEntityBuilt(EntityHandle)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntityManager.h"
                       ,0x232,L"Entity not yet created(ID: %d, SN:%d)");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  local_1a7 = (StorageSelector)0x0;
  pIVar9 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(&local_1a7,&this->EntityStorage);
  puVar10 = (undefined8 *)
            (**(code **)((longlong)*pIVar9 + 0x20))(pIVar9,(ulonglong)param_1 & 0xffffffff);
  this_00 = (FMassArchetypeData *)*puVar10;
  if ((this_00 == (FMassArchetypeData *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentArchetype",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x5f2,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  pTVar1 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(param_2->StructMemoryPtr).Object;
  TVar20.DebugPtr = TVar21.DebugPtr;
  if (pTVar1 != (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) {
    TVar20.DebugPtr = pTVar1->DebugPtr;
  }
  bVar6 = TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
          ::Contains((TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                      *)&(this_00->CompositionDescriptor).SharedFragments,TVar20.DebugPtr);
  if (!bVar6) {
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_e8,(FBitSetContainer *)this_00);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_c8,
               (FBitSetContainer *)&(this_00->CompositionDescriptor).Tags);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_a8,
               (FBitSetContainer *)&(this_00->CompositionDescriptor).ChunkFragments);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_88,
               (FBitSetContainer *)&(this_00->CompositionDescriptor).SharedFragments);
    FStructTypeBitSet::FBitSetContainer::FBitSetContainer
              ((FBitSetContainer *)local_68,
               (FBitSetContainer *)&(this_00->CompositionDescriptor).ConstSharedFragments);
    TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
    ::Add((TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           *)local_88,TVar20.DebugPtr);
    local_1a0.ChunkMemorySize = this_00->ChunkMemorySize;
    local_1a0.DebugName.ComparisonIndex.Value = 0;
    local_1a0.DebugName.Number = 0;
    local_1a0.DebugColor.field0_0x0.Bits = (FColor_u_0)0x0;
    CreateArchetype(this,&local_190,(FMassArchetypeCompositionDescriptor *)local_e8,&local_1a0);
    if ((local_190.DataPtr.Object == (FMassArchetypeData *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewArchetypeHandle.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                           ,0x606,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    if ((local_190.DataPtr.Object == (FMassArchetypeData *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewArchetype",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                           ,0x608,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    piVar11 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
              FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                           *)&this_00->EntityMap,iVar16);
    uVar8 = *piVar11 / this_00->NumEntitiesPerChunk;
    pcVar18 = (char *)(longlong)(int)uVar8;
    iVar16 = (this_00->Chunks).ArrayNum;
    uVar17 = 0;
    if ((int)uVar8 < iVar16) {
      uVar17 = ~uVar8 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (local_1b8 = pcVar18, local_1b0 = (longlong)iVar16,
       bVar6 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    pFVar2 = (this_00->Chunks).AllocatorInstance.Data;
    bVar6 = FMassArchetypeSharedFragmentValues::ContainsType
                      ((FMassArchetypeSharedFragmentValues *)
                       (pFVar2 + (longlong)pcVar18 * 0x90 + 0x28),TVar20.DebugPtr);
    if ((bVar6) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!OldSharedFragmentValues.ContainsType(StructType)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                           ,0x60b,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues
              ((FMassArchetypeSharedFragmentValues *)local_158,
               (FMassArchetypeSharedFragmentValues *)(pFVar2 + (longlong)pcVar18 * 0x90 + 0x28));
    FMassArchetypeSharedFragmentValues::Add_GetRef
              ((FMassArchetypeSharedFragmentValues *)local_158,&local_170,local_178);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_170.StructMemoryPtr.SharedReferenceCount.ReferenceController);
    if (local_158[4] == false) {
      AlgoImpl::
      IntroSortInternal<FConstSharedStruct,int,FIdentityFunctor,TDereferenceWrapper<FConstSharedStruct,FStructTypeSortOperator>_>
                ((FConstSharedStruct *)local_110.Data,local_108,local_1a5,
                 (FStructTypeSortOperator *)&local_1a5);
      AlgoImpl::
      IntroSortInternal<FSharedStruct,int,FIdentityFunctor,TDereferenceWrapper<FSharedStruct,FStructTypeSortOperator>_>
                ((FSharedStruct *)local_100.Data,local_f8,local_1a4[0],
                 (FStructTypeSortOperator *)local_1a4);
      local_158[4] = true;
    }
    FMassArchetypeData::MoveEntityToAnotherArchetype
              (this_00,param_1,local_190.DataPtr.Object,
               (FMassArchetypeSharedFragmentValues *)local_158);
    local_1a6 = (StorageSelector)0x0;
    pIVar9 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
               ::__l2::Invokers[(this->EntityStorage).TypeIndex])(&local_1a6,&this->EntityStorage);
    (**(code **)((longlong)*pIVar9 + 0x28))(pIVar9,(ulonglong)param_1 & 0xffffffff,&local_190);
    DestructItems<FSharedStruct,int>((FSharedStruct *)local_100.Data,local_f8);
    if (local_100.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data);
    }
    DestructItems<FConstSharedStruct,int>((FConstSharedStruct *)local_110.Data,local_108);
    if (local_110.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data);
    }
    if (local_120 != (void *)0x0) {
      FMemory::Free(local_120);
    }
    if ((void *)local_158._24_8_ != (void *)0x0) {
      FMemory::Free((void *)local_158._24_8_);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_190.DataPtr.SharedReferenceCount.ReferenceController);
    if ((void *)local_68._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_68._16_8_);
    }
    if ((void *)local_88._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_88._16_8_);
    }
    if ((void *)local_a8._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_a8._16_8_);
    }
    if ((void *)local_c8._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_c8._16_8_);
    }
    if ((void *)local_e8._16_8_ != (void *)0x0) {
      FMemory::Free((void *)local_e8._16_8_);
    }
    return true;
  }
  piVar11 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
            FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                         *)&this_00->EntityMap,iVar16);
  uVar8 = *piVar11 / this_00->NumEntitiesPerChunk;
  pcVar18 = (char *)(longlong)(int)uVar8;
  iVar16 = (this_00->Chunks).ArrayNum;
  uVar17 = 0;
  if ((int)uVar8 < iVar16) {
    uVar17 = ~uVar8 >> 0x1f;
  }
  if ((uVar17 == 0) &&
     (local_1b8 = pcVar18, local_1b0 = (longlong)iVar16,
     bVar6 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar6
     )) {
    pcVar5 = (code *)swi(3);
    uVar7 = (*pcVar5)();
    return (bool)uVar7;
  }
  pFVar2 = (this_00->Chunks).AllocatorInstance.Data;
  plVar3 = *(longlong **)(pFVar2 + (longlong)pcVar18 * 0x90 + 0x80);
  for (plVar19 = plVar3; TVar15.DebugPtr = TVar21.DebugPtr,
      plVar19 != plVar3 + (longlong)*(int *)(pFVar2 + (longlong)pcVar18 * 0x90 + 0x88) * 2;
      plVar19 = plVar19 + 2) {
    TVar12.DebugPtr = TVar21.DebugPtr;
    if ((TObjectPtr<UScriptStruct_const_>_u_0 *)*plVar19 !=
        (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) {
      TVar12.DebugPtr = ((TObjectPtr<UScriptStruct_const_>_u_0 *)*plVar19)->DebugPtr;
    }
    if (TVar12.DebugPtr == TVar20.DebugPtr) {
      uVar17 = (uint)((longlong)plVar19 - (longlong)plVar3 >> 4);
      if (uVar17 != 0xffffffff) {
        uVar8 = 0;
        if ((int)uVar17 < *(int *)(pFVar2 + (longlong)pcVar18 * 0x90 + 0x88)) {
          uVar8 = ~uVar17 >> 0x1f;
        }
        if (uVar8 == 0) {
          local_1b8 = (char *)(longlong)(int)uVar17;
          local_1b0 = (longlong)*(int *)(pFVar2 + (longlong)pcVar18 * 0x90 + 0x88);
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            uVar7 = (*pcVar5)();
            return (bool)uVar7;
          }
        }
        TVar20 = (TObjectPtr<UScriptStruct_const_>_u_0)
                 ((TObjectPtr<UScriptStruct_const_>_u_0 *)
                 (*(longlong *)(pFVar2 + (longlong)pcVar18 * 0x90 + 0x80) + 8 +
                 (longlong)(int)uVar17 * 0x10))->DebugPtr;
        TVar12 = (TObjectPtr<UScriptStruct_const_>_u_0)
                 ((TObjectPtr<UScriptStruct_const_>_u_0 *)
                 (*(longlong *)(pFVar2 + (longlong)pcVar18 * 0x90 + 0x80) +
                 (longlong)(int)uVar17 * 0x10))->DebugPtr;
        if (TVar20.DebugPtr != (UScriptStruct *)0x0) {
          LOCK();
          *(atomic<int> *)&(TVar20.DebugPtr)->_padding_ =
               (atomic<int>)((int)*(atomic<int> *)&(TVar20.DebugPtr)->_padding_ + 1);
          UNLOCK();
          if (TVar20.DebugPtr != (UScriptStruct *)0x0) {
            LOCK();
            *(atomic<int> *)&(TVar20.DebugPtr)->_padding_ =
                 (atomic<int>)((int)*(atomic<int> *)&(TVar20.DebugPtr)->_padding_ + 1);
            UNLOCK();
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)TVar20.DebugPtr);
        if (TVar12.DebugPtr != (UScriptStruct *)0x0) {
          TVar15 = (TObjectPtr<UScriptStruct_const_>_u_0)(TVar12.DebugPtr)->_padding_;
        }
        goto LAB_1471ef79f;
      }
      break;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TVar12.DebugPtr = TVar21.DebugPtr;
  TVar20.DebugPtr = TVar21.DebugPtr;
LAB_1471ef79f:
  pFVar4 = (param_2->StructMemoryPtr).Object;
  TVar13.DebugPtr = TVar21.DebugPtr;
  if (pFVar4 != (FStructSharedMemory *)0x0) {
    TVar13.DebugPtr = (pFVar4->ScriptStruct).field0_0x0.DebugPtr;
  }
  if (TVar15.DebugPtr == TVar13.DebugPtr) {
    TVar15.DebugPtr = TVar21.DebugPtr;
    if (TVar12.DebugPtr != (UScriptStruct *)0x0) {
      lVar14 = (longlong)*(short *)((TVar12.DebugPtr)->_padding_ + 0x5c);
      TVar15.DebugPtr =
           (UScriptStruct *)((longlong)&(TVar12.DebugPtr)->_padding_ + lVar14 + 7 & -lVar14);
    }
    TVar13.DebugPtr = TVar21.DebugPtr;
    if (pFVar4 != (FStructSharedMemory *)0x0) {
      lVar14 = (longlong)
               *(short *)((longlong)&((pFVar4->ScriptStruct).field0_0x0.DebugPtr)->_padding_ + 4);
      TVar13.DebugPtr =
           (UScriptStruct *)((longlong)&(pFVar4->ScriptStruct).field0_0x0 + lVar14 + 7 & -lVar14);
    }
    if (TVar15.DebugPtr == TVar13.DebugPtr) goto LAB_1471ef90c;
  }
  TVar15.DebugPtr = TVar21.DebugPtr;
  if (TVar12.DebugPtr != (UScriptStruct *)0x0) {
    TVar15 = (TObjectPtr<UScriptStruct_const_>_u_0)(TVar12.DebugPtr)->_padding_;
  }
  TVar13.DebugPtr = TVar21.DebugPtr;
  if (pFVar4 != (FStructSharedMemory *)0x0) {
    TVar13.DebugPtr = (pFVar4->ScriptStruct).field0_0x0.DebugPtr;
  }
  if (TVar15.DebugPtr != TVar13.DebugPtr) {
LAB_1471ef91e:
    if (2 < (byte)LogMass._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)TVar20.DebugPtr);
    return false;
  }
  if (TVar15.DebugPtr != (UScriptStruct *)0x0) {
    TVar13.DebugPtr = TVar21.DebugPtr;
    if (pFVar4 != (FStructSharedMemory *)0x0) {
      lVar14 = (longlong)
               *(short *)((longlong)&((pFVar4->ScriptStruct).field0_0x0.DebugPtr)->_padding_ + 4);
      TVar13.DebugPtr =
           (UScriptStruct *)((longlong)&(pFVar4->ScriptStruct).field0_0x0 + lVar14 + 7 & -lVar14);
    }
    if (TVar12.DebugPtr != (UScriptStruct *)0x0) {
      lVar14 = (longlong)*(short *)((TVar12.DebugPtr)->_padding_ + 0x5c);
      TVar21.DebugPtr =
           (UScriptStruct *)((longlong)&(TVar12.DebugPtr)->_padding_ + lVar14 + 7 & -lVar14);
    }
    bVar6 = UScriptStruct::CompareScriptStruct(TVar15.DebugPtr,TVar21.DebugPtr,TVar13.DebugPtr,0);
    if (!bVar6) goto LAB_1471ef91e;
  }
LAB_1471ef90c:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)TVar20.DebugPtr);
  return true;
}

// AddTagToEntity @ 1471efd50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassEntityManager::AddTagToEntity
          (FMassEntityManager *this,FMassEntityHandle param_1,UScriptStruct *param_2)

{
  FMassArchetypeData *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UPackage *pUVar5;
  IEntityStorageInterface *pIVar6;
  TSharedPtr<FMassArchetypeData,1> *pTVar7;
  UStruct *pUVar8;
  undefined1 auStackY_198 [32];
  StorageSelector local_168;
  StorageSelector local_167 [7];
  FString local_160;
  UScriptStruct *local_150;
  UScriptStruct *local_148;
  FMassArchetypeHandle local_140;
  undefined1 local_130 [16];
  void *local_120;
  undefined4 local_118;
  undefined4 local_114;
  undefined1 local_110 [40];
  undefined1 local_e8 [16];
  void *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 local_c8 [48];
  void *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  void *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  void *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (UE::AITestSuite::TestsInProgress < 1) {
    if ((0 < (int)this->ProcessingScopeCount) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsProcessing() == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                           ,0x50c,
                           L"Synchronous API function %hs called during mass processing. Use asynchronous API instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (0 < (int)this->ProcessingScopeCount) {
    if ((byte)LogTestableEnsures._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
    return;
  }
  if (param_2 == (UScriptStruct *)0x0) {
    ::FString::FString(&local_160,L"None");
LAB_1471efe7c:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("UE::Mass::IsA<FMassTag>(TagType)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                       ,0x50d,L"%hs works only with tags while \'%s\' is not one.");
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassTag,(UObject *)pUVar5,L"MassTag");
      if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton != (UScriptStruct *)0x0)
      goto LAB_1471efe35;
LAB_1471efe59:
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2,&local_160,(UObject *)0x0);
      goto LAB_1471efe7c;
    }
LAB_1471efe35:
    iVar4 = (int)(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_;
    if (((int)param_2->_padding_ < iVar4) ||
       ((longlong *)*(undefined1 **)(param_2->_padding_ + (longlong)iVar4 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_1471efe59;
  }
  bVar3 = IsEntityBuilt(this,param_1);
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsEntityBuilt(EntityHandle)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntityManager.h"
                         ,0x232,L"Entity not yet created(ID: %d, SN:%d)"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_168 = (StorageSelector)0x0;
  pIVar6 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(&local_168,&this->EntityStorage);
  pTVar7 = (TSharedPtr<FMassArchetypeData,1> *)
           (**(code **)((longlong)*pIVar6 + 0x20))(pIVar6,(ulonglong)param_1 & 0xffffffff);
  if (pTVar7->Object == (FMassArchetypeData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentArchetype",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                       ,0x512,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((pTVar7->Object == (FMassArchetypeData *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = pTVar7->Object;
  if ((param_2 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FragmentType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                         ,0x102,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
          ::Contains((TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                      *)&(pFVar1->CompositionDescriptor).Tags,param_2);
  if (bVar3) {
    return;
  }
  if ((pTVar7->Object == (FMassArchetypeData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_110,
             (FBitSetContainer *)&(pTVar7->Object->CompositionDescriptor).Tags);
  pUVar8 = TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           ::GetBaseUStruct();
  if (pUVar8 == (UStruct *)0x0) {
LAB_1471f0059:
    local_150 = param_2;
    bVar3 = `TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
            ::Add'::__l6::<lambda_1>::operator()(&local_150);
    if (bVar3) goto LAB_1471f006f;
  }
  else {
    iVar4 = (int)pUVar8->_padding_;
    if (((int)param_2->_padding_ < iVar4) ||
       ((longlong *)*(undefined1 **)(param_2->_padding_ + (longlong)iVar4 * 8) != &pUVar8->_padding_
       )) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_1471f0059;
LAB_1471f006f:
    iVar4 = FStructTracker::FindOrAddStructTypeIndex
                      (&FMassTagBitSetStructTrackerWrapper::StructTracker,(UStruct *)param_2);
    FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)local_110,iVar4);
  }
  InternalCreateSimilarArchetype
            (this,&local_140,pTVar7,
             (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)
             local_110);
  if ((pTVar7->Object == (FMassArchetypeData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FMassArchetypeData::MoveEntityToAnotherArchetype
            (pTVar7->Object,param_1,local_140.DataPtr.Object,
             (FMassArchetypeSharedFragmentValues *)0x0);
  local_167[0] = (StorageSelector)0x0;
  pIVar6 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_167,&this->EntityStorage);
  (**(code **)((longlong)*pIVar6 + 0x28))(pIVar6,(ulonglong)param_1 & 0xffffffff,&local_140);
  local_114 = 0x80;
  local_120 = (void *)0x0;
  local_118 = 0;
  pUVar8 = TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           ::GetBaseUStruct();
  if (pUVar8 == (UStruct *)0x0) {
LAB_1471f015c:
    local_148 = param_2;
    bVar3 = `TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
            ::Add'::__l6::<lambda_1>::operator()(&local_148);
    if (!bVar3) goto LAB_1471f018a;
  }
  else {
    iVar4 = (int)pUVar8->_padding_;
    if (((int)param_2->_padding_ < iVar4) ||
       ((longlong *)*(undefined1 **)(param_2->_padding_ + (longlong)iVar4 * 8) != &pUVar8->_padding_
       )) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_1471f015c;
  }
  iVar4 = FStructTracker::FindOrAddStructTypeIndex
                    (&FMassTagBitSetStructTrackerWrapper::StructTracker,(UStruct *)param_2);
  FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)local_130,iVar4);
LAB_1471f018a:
  local_d8 = (void *)0x0;
  local_d0 = 0;
  local_cc = 0x80;
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_c8,(FBitSetContainer *)local_130);
  local_98 = (void *)0x0;
  local_90 = 0;
  local_8c = 0x80;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_4c = 0x80;
  FMassObserverManager::OnCompositionChanged
            (&this->ObserverManager,param_1,(FMassArchetypeCompositionDescriptor *)local_e8,
             AddElement,(FProcessingContext *)0x0);
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  if ((void *)local_c8._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c8._16_8_);
  }
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  if (local_120 != (void *)0x0) {
    FMemory::Free(local_120);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_140.DataPtr.SharedReferenceCount.ReferenceController);
  if ((void *)local_110._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_110._16_8_);
  }
  return;
}

// AppendCommands @ 1471f2670

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityManager::AppendCommands
          (FMassEntityManager *this,TSharedPtr<FMassCommandBuffer,1> *param_1)

{
  bool bVar1;
  TStaticArray<TSharedPtr<FMassCommandBuffer,1>,2,4294967295> *pTVar2;
  FLLMScope local_res8 [2];
  FMemScope local_res18 [2];
  
  pTVar2 = &this->DeferredCommandBuffers;
  if (pTVar2 != (TStaticArray<TSharedPtr<FMassCommandBuffer,1>,2,4294967295> *)
                &this->OpenedCommandBufferIndex) {
    do {
      if (pTVar2->Elements[0].Object == param_1->Object) {
        bVar1 = `FMassEntityManager::AppendCommands'::__l3::<lambda_1>::operator()(local_res8);
        if (!bVar1) {
          return;
        }
        break;
      }
      pTVar2 = (TStaticArray<TSharedPtr<FMassCommandBuffer,1>,2,4294967295> *)(pTVar2->Elements + 1)
      ;
    } while (pTVar2 != (TStaticArray<TSharedPtr<FMassCommandBuffer,1>,2,4294967295> *)
                       &this->OpenedCommandBufferIndex);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name2077,L"Mass/EntityManager");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name2077,false,None,Default,true);
  FMemScope::FMemScope(local_res18,&LLMScope_Name2077,true);
  FMassCommandBuffer::MoveAppend
            ((this->DeferredCommandBuffers).Elements[this->OpenedCommandBufferIndex].Object,
             param_1->Object);
  FMemScope::~FMemScope(local_res18);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// BatchAddFragmentInstancesForEntities @ 1471f4c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassEntityManager::BatchAddFragmentInstancesForEntities
          (FMassEntityManager *this,
          TArrayView<FMassArchetypeEntityCollectionWithPayload_const_,int> *param_1,
          TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
          *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FMassArchetypeData *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FMassEntityManager *this_00;
  bool bVar5;
  char cVar6;
  int iVar7;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *pTVar8;
  IEntityStorageInterface *pIVar9;
  FMassArchetypeData *_Buf1;
  ulonglong uVar10;
  ForElementType<unsigned_int> FVar11;
  uint uVar12;
  ForAnyElementType FVar13;
  FMassArchetypeData *this_01;
  FSharedReferencer<1> FVar14;
  FMassArchetypeEntityCollectionWithPayload *pFVar15;
  bool bVar16;
  undefined1 auStackY_3c8 [32];
  undefined1 local_387;
  StorageSelector local_386;
  StorageSelector local_385;
  char local_384;
  TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_>
  local_380;
  uint local_370;
  FMassArchetypeEntityCollectionWithPayload *local_368;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_360;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *local_350;
  FMassArchetypeHandle local_348;
  FMassArchetypeCreationParams local_338;
  FMassEntityManager *local_328;
  FMassArchetypeEntityCollectionWithPayload *local_320;
  FMassArchetypeEntityCollection local_318;
  FArchetypeEntityRange *local_2e8;
  int iStack_2e0;
  undefined4 uStack_2dc;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> local_2d8;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_2c8;
  TBitArray<FDefaultBitArrayAllocator> local_2b8;
  undefined1 local_298 [24];
  void *pvStack_280;
  undefined8 local_278;
  undefined1 auStack_270 [16];
  void *pvStack_260;
  undefined8 local_258;
  ForAnyElementType FStack_250;
  undefined8 local_248;
  ForAnyElementType FStack_240;
  undefined8 local_238;
  undefined1 local_228 [16];
  ForElementType<unsigned_int> local_218;
  undefined8 local_210;
  TBitArray<FDefaultBitArrayAllocator> local_208;
  undefined1 local_1e8 [32];
  undefined1 local_1c8 [48];
  void *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  void *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  void *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  void *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [48];
  void *local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3c8;
  uVar12 = 0;
  local_370 = 0;
  local_350 = param_2;
  local_328 = this;
  if (UE::AITestSuite::TestsInProgress < 1) {
    if ((0 < (int)this->ProcessingScopeCount) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsProcessing() == false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                            ,0x6b1,
                            L"Synchronous API function %hs called during mass processing. Use asynchronous API instead."
                           ), bVar16)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (0 < (int)this->ProcessingScopeCount) {
    if ((byte)LogTestableEnsures._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
    return;
  }
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1715,"Mass_BatchAddFragmentInstancesForEntities",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
               ,0x6b3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1715);
  }
  this_00 = local_328;
  pFVar15 = param_1->DataPtr;
  local_320 = pFVar15 + param_1->ArrayNum;
  local_368 = pFVar15;
  if (pFVar15 != local_320) {
    do {
      pTVar1 = (pFVar15->Entities).Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.
               ReferenceController;
      this_01 = (pFVar15->Entities).Archetype.ArchetypeHandle.DataPtr.Object;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      FVar14.ReferenceController = pTVar1;
      local_368 = pFVar15;
      if (this_01 == (FMassArchetypeData *)0x0) {
        local_338.ChunkMemorySize = 0;
        local_338.DebugName.ComparisonIndex.Value = 0;
        local_338.DebugName.Number = 0;
        local_338.DebugColor.field0_0x0 = (FColor_u_0)0x0;
        local_238._0_4_ = 0;
        local_238._4_4_ = 0;
        local_248._0_4_ = 0;
        local_248._4_4_ = 0;
        local_298._8_8_ = 0;
        auStack_270._0_8_ = 0;
        local_298._16_8_ = 0;
        auStack_270._8_8_ = 0;
        local_298._0_4_ = 0xffffffff;
        local_298[4] = true;
        local_298[5] = 0;
        local_298._6_2_ = 0;
        pvStack_280 = (void *)0x0;
        local_278 = 0x8000000000;
        pvStack_260 = (void *)0x0;
        local_258 = 0x8000000000;
        FStack_250.Data = (FScriptContainerElement *)0x0;
        FStack_240.Data = (FScriptContainerElement *)0x0;
        BatchBuildEntities(this_00,&local_2c8,pFVar15,param_2,
                           (FMassArchetypeSharedFragmentValues *)local_298,&local_338);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_2c8.SharedReferenceCount.ReferenceController);
        DestructItems<FSharedStruct,int>((FSharedStruct *)FStack_240.Data,(int)local_238);
        if (FStack_240.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_240.Data);
        }
        DestructItems<FConstSharedStruct,int>((FConstSharedStruct *)FStack_250.Data,(int)local_248);
        if (FStack_250.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_250.Data);
        }
        if (pvStack_260 != (void *)0x0) {
          FMemory::Free(pvStack_260);
        }
        if (pvStack_280 != (void *)0x0) {
          FMemory::Free(pvStack_280);
        }
      }
      else {
        local_380.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_380.ArrayNum = 0;
        local_380.ArrayMax = 0;
        cVar6 = '\0';
        pTVar8 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                 ::operator+((TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                              *)this_01,
                             (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                              *)local_88,param_2);
        FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                  ((FBitSetContainer *)&local_208,(FBitSetContainer *)pTVar8);
        if (((uVar12 & 2) != 0) && (uVar12 = uVar12 & 0xfffffffd, local_58 != (void *)0x0)) {
          FMemory::Free(local_58);
        }
        local_370 = uVar12 & 0xfffffffe;
        if ((void *)local_88._16_8_ != (void *)0x0) {
          FMemory::Free((void *)local_88._16_8_);
        }
        local_2b8.MaxBits = 0x80;
        local_2b8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        local_2b8.NumBits = 0;
        bVar5 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty((FConstBitSetContainer *)this_01);
        if ((bVar5) &&
           (bVar5 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                              ((FConstBitSetContainer *)&local_208), bVar5)) {
LAB_1471f4e3a:
          iVar7 = (pFVar15->Entities).Ranges.ArrayNum;
          pFVar3 = (pFVar15->Entities).Ranges.AllocatorInstance.Data;
          if ((iVar7 < 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_380.ArrayNum = iVar7;
          if ((iVar7 == 0) && (local_380.ArrayMax == 0)) {
            local_380.ArrayNum = 0;
            local_380.ArrayMax = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xc,4,iVar7,local_380.ArrayMax,&local_380.AllocatorInstance,iVar7,
                       &local_380.ArrayMax);
            if (iVar7 != 0) {
              memcpy(local_380.AllocatorInstance.Data,pFVar3,(longlong)iVar7 * 0xc);
            }
          }
        }
        else {
          iVar7 = *(int *)&(this_01->CompositionDescriptor).Fragments.field_0x18;
          if (iVar7 == local_208.NumBits) {
            FVar11 = (ForElementType<unsigned_int>)&local_208;
            if (local_208.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FVar11 = local_208.AllocatorInstance.SecondaryData;
            }
            pFVar2 = *(FMassArchetypeData **)&(this_01->CompositionDescriptor).Fragments.field_0x10;
            _Buf1 = this_01;
            if (pFVar2 != (FMassArchetypeData *)0x0) {
              _Buf1 = pFVar2;
            }
            iVar7 = memcmp(_Buf1,(void *)FVar11,(ulonglong)(iVar7 + 0x1fU >> 5) << 2);
            if (iVar7 == 0) goto LAB_1471f4e3a;
          }
          FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                    ((FBitSetContainer *)local_1e8,(FBitSetContainer *)param_2);
          FStructTypeBitSet::FBitSetContainer::operator-=
                    ((FBitSetContainer *)local_1e8,(TBitArray<FDefaultBitArrayAllocator> *)this_01);
          FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                    ((FBitSetContainer *)local_228,(FBitSetContainer *)local_1e8);
          if ((void *)local_1e8._16_8_ != (void *)0x0) {
            FMemory::Free((void *)local_1e8._16_8_);
          }
          FVar11 = local_218;
          if (local_218 == (ForElementType<unsigned_int>)0x0) {
            local_2b8.AllocatorInstance.InlineData[0] = local_228[0];
            local_2b8.AllocatorInstance.InlineData[1] = local_228[1];
            local_2b8.AllocatorInstance.InlineData[2] = local_228[2];
            local_2b8.AllocatorInstance.InlineData[3] = local_228[3];
            local_2b8.AllocatorInstance.InlineData[4] = local_228[4];
            local_2b8.AllocatorInstance.InlineData[5] = local_228[5];
            local_2b8.AllocatorInstance.InlineData[6] = local_228[6];
            local_2b8.AllocatorInstance.InlineData[7] = local_228[7];
            local_2b8.AllocatorInstance.InlineData[8] = local_228[8];
            local_2b8.AllocatorInstance.InlineData[9] = local_228[9];
            local_2b8.AllocatorInstance.InlineData[10] = local_228[10];
            local_2b8.AllocatorInstance.InlineData[0xb] = local_228[0xb];
            local_2b8.AllocatorInstance.InlineData[0xc] = local_228[0xc];
            local_2b8.AllocatorInstance.InlineData[0xd] = local_228[0xd];
            local_2b8.AllocatorInstance.InlineData[0xe] = local_228[0xe];
            local_2b8.AllocatorInstance.InlineData[0xf] = local_228[0xf];
          }
          if (local_2b8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_2b8.AllocatorInstance.SecondaryData);
          }
          local_2b8.AllocatorInstance.SecondaryData = FVar11;
          local_2b8.NumBits = (int)local_210;
          local_218 = (ForElementType<unsigned_int>)0x0;
          local_2b8.MaxBits = local_210._4_4_;
          local_210 = 0;
          local_384 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                                ((FConstBitSetContainer *)
                                 (this_00->ObserverManager).ObservedFragments,&local_2b8);
          FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                    ((FBitSetContainer *)local_128,(FBitSetContainer *)this_01);
          FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                    ((FBitSetContainer *)local_108,
                     (FBitSetContainer *)&(this_01->CompositionDescriptor).Tags);
          FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                    ((FBitSetContainer *)local_e8,
                     (FBitSetContainer *)&(this_01->CompositionDescriptor).ChunkFragments);
          FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                    ((FBitSetContainer *)local_c8,
                     (FBitSetContainer *)&(this_01->CompositionDescriptor).SharedFragments);
          FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                    ((FBitSetContainer *)local_a8,
                     (FBitSetContainer *)&(this_01->CompositionDescriptor).ConstSharedFragments);
          TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                    ((TBitArray<FDefaultBitArrayAllocator> *)local_128,&local_208);
          InternalCreateSimilarArchetype
                    (this_00,&local_348,this_01,(FMassArchetypeCompositionDescriptor *)local_128,
                     &this_01->Groups);
          if ((void *)local_a8._16_8_ != (void *)0x0) {
            FMemory::Free((void *)local_a8._16_8_);
          }
          if ((void *)local_c8._16_8_ != (void *)0x0) {
            FMemory::Free((void *)local_c8._16_8_);
          }
          if ((void *)local_e8._16_8_ != (void *)0x0) {
            FMemory::Free((void *)local_e8._16_8_);
          }
          if ((void *)local_108._16_8_ != (void *)0x0) {
            FMemory::Free((void *)local_108._16_8_);
          }
          if ((ForElementType<unsigned_int>)local_128._16_8_ != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_128._16_8_);
          }
          local_360.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_360.ArrayNum = 0;
          local_360.ArrayMax = 0;
          FMassArchetypeData::BatchMoveEntitiesToAnotherArchetype
                    (this_01,&local_368->Entities,local_348.DataPtr.Object,&local_360,&local_380,
                     (FMassArchetypeSharedFragmentValues *)0x0,
                     (TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                      *)0x0,(TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                             *)0x0);
          iVar7 = local_360.ArrayNum;
          uVar10 = (ulonglong)local_360.ArrayNum;
          pFVar3 = local_360.AllocatorInstance.Data + uVar10 * 8;
          FVar13.Data = local_360.AllocatorInstance.Data;
          while( true ) {
            if ((int)uVar10 != iVar7) {
              local_387 = 0;
              `TCheckedPointerIterator<FMassEntityHandle,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_387);
            }
            FVar14.ReferenceController = local_348.DataPtr.SharedReferenceCount.ReferenceController;
            this_01 = local_348.DataPtr.Object;
            cVar6 = local_384;
            if (FVar13.Data == pFVar3) break;
            local_386 = (StorageSelector)0x0;
            pIVar9 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
                       ::__l2::Invokers[(this_00->EntityStorage).TypeIndex])
                               (&local_386,&this_00->EntityStorage);
            cVar6 = (**(code **)((longlong)*pIVar9 + 0x48))(pIVar9,*(undefined4 *)FVar13.Data);
            if ((cVar6 == '\0') &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("GetEntityStorageInterface().IsValidIndex(Entity.Index)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                                   ,0x6dd,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            local_385 = (StorageSelector)0x0;
            pIVar9 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
                       ::__l2::Invokers[(this_00->EntityStorage).TypeIndex])
                               (&local_385,&this_00->EntityStorage);
            (**(code **)((longlong)*pIVar9 + 0x30))(pIVar9,*(undefined4 *)FVar13.Data,&local_348);
            uVar10 = local_360._8_8_ & 0xffffffff;
            FVar13.Data = FVar13.Data + 8;
          }
          if (local_348.DataPtr.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_348.DataPtr.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_348.DataPtr.SharedReferenceCount.ReferenceController)->
                       SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar1);
          if (local_360.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_360.AllocatorInstance.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_348.DataPtr.SharedReferenceCount.ReferenceController);
          pFVar15 = local_368;
          if ((this_01 == (FMassArchetypeData *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), pFVar15 = local_368, bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar7 = local_380.ArrayNum;
        local_2e8 = (FArchetypeEntityRange *)local_380.AllocatorInstance.Data;
        if ((local_380.ArrayNum < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iStack_2e0 = iVar7;
        local_2d8._12_4_ = uStack_2dc;
        local_2d8.ArrayNum = iVar7;
        local_2d8.DataPtr = local_2e8;
        FMassArchetypeData::BatchSetFragmentValues(this_01,&local_2d8,&pFVar15->PayloadSlice);
        if (cVar6 != '\0') {
          local_318.Ranges.AllocatorInstance.Data = local_380.AllocatorInstance.Data;
          local_318.Ranges.ArrayNum = local_380.ArrayNum;
          local_318.Ranges.ArrayMax = local_380.ArrayMax;
          local_380.ArrayNum = 0;
          local_380.ArrayMax = 0;
          local_380.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          if (FVar14.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (FVar14.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(FVar14.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_318.Archetype.HandleVersion = 0;
          if (this_01 != (FMassArchetypeData *)0x0) {
            local_318.Archetype.HandleVersion = this_01->EntityOrderVersion;
          }
          local_318.Archetype.ArchetypeHandle.DataPtr.Object = this_01;
          local_318.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController =
               FVar14.ReferenceController;
          FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                    ((FBitSetContainer *)local_1c8,(FBitSetContainer *)&local_2b8);
          local_198 = (void *)0x0;
          local_190 = 0;
          local_18c = 0x80;
          local_178 = (void *)0x0;
          local_170 = 0;
          local_16c = 0x80;
          local_158 = (void *)0x0;
          local_150 = 0;
          local_14c = 0x80;
          local_138 = (void *)0x0;
          local_130 = 0;
          local_12c = 0x80;
          FMassObserverManager::OnCompositionChanged
                    (&this_00->ObserverManager,&local_318,
                     (FMassArchetypeCompositionDescriptor *)local_1c8,AddElement,
                     (FProcessingContext *)0x0);
          if (local_138 != (void *)0x0) {
            FMemory::Free(local_138);
          }
          if (local_158 != (void *)0x0) {
            FMemory::Free(local_158);
          }
          if (local_178 != (void *)0x0) {
            FMemory::Free(local_178);
          }
          if (local_198 != (void *)0x0) {
            FMemory::Free(local_198);
          }
          if ((void *)local_1c8._16_8_ != (void *)0x0) {
            FMemory::Free((void *)local_1c8._16_8_);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_318.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.
                     ReferenceController);
          if (local_318.Ranges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_318.Ranges.AllocatorInstance.Data);
          }
        }
        if (local_2b8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_2b8.AllocatorInstance.SecondaryData);
        }
        if (local_208.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_208.AllocatorInstance.SecondaryData);
        }
        param_2 = local_350;
        uVar12 = local_370;
        if (local_380.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_380.AllocatorInstance.Data);
          param_2 = local_350;
          uVar12 = local_370;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar14.ReferenceController);
      pFVar15 = pFVar15 + 1;
      local_368 = pFVar15;
    } while (pFVar15 != local_320);
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// BatchAddSharedFragmentsForEntities @ 1471f5540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassEntityManager::BatchAddSharedFragmentsForEntities
          (FMassEntityManager *this,TArrayView<FMassArchetypeEntityCollection_const_,int> *param_1,
          FMassArchetypeSharedFragmentValues *param_2)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FMassArchetypeData *this_00;
  code *pcVar3;
  int iVar4;
  FMassArchetypeData *pFVar5;
  bool bVar6;
  char cVar7;
  IEntityStorageInterface *pIVar8;
  uint uVar9;
  ForElementType<unsigned_int> FVar10;
  ulonglong uVar11;
  ForElementType<unsigned_int> FVar12;
  FMassArchetypeSharedFragmentValues *pFVar13;
  ForAnyElementType FVar14;
  FMassArchetypeEntityCollection *pFVar15;
  bool bVar16;
  undefined1 auStackY_1b8 [32];
  undefined1 local_177;
  undefined1 local_176;
  StorageSelector local_175;
  StorageSelector local_174;
  <lambda_1> local_173;
  <lambda_1> local_172 [2];
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_170;
  FMassArchetypeSharedFragmentValues *local_160;
  FMassArchetypeHandle local_158;
  FMassArchetypeCreationParams local_148;
  FMassArchetypeEntityCollection *local_138;
  TBitArray<FDefaultBitArrayAllocator> local_128;
  TBitArray<FDefaultBitArrayAllocator> local_108;
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  TBitArray<FDefaultBitArrayAllocator> local_88;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_160 = param_2;
  if (UE::AITestSuite::TestsInProgress < 1) {
    if ((0 < (int)this->ProcessingScopeCount) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsProcessing() == false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                            ,0x700,
                            L"Synchronous API function %hs called during mass processing. Use asynchronous API instead."
                           ), bVar16)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (0 < (int)this->ProcessingScopeCount) {
    if ((byte)LogTestableEnsures._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
    return;
  }
  bVar16 = -1 < CpuChannel->Enabled;
  if (bVar16) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1794,"Mass_BatchAddConstSharedFragmentForEntities",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
               ,0x702);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1794);
  }
  pFVar15 = param_1->DataPtr;
  local_138 = pFVar15 + param_1->ArrayNum;
  pFVar13 = local_160;
  if (pFVar15 != local_138) {
    do {
      pTVar2 = (pFVar15->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController
      ;
      this_00 = (pFVar15->Archetype).ArchetypeHandle.DataPtr.Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      if (this_00 == (FMassArchetypeData *)0x0) {
        if (UE::AITestSuite::TestsInProgress < 1) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentArchetype",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                             ,0x707,
                             L"Adding shared fragments to archetype-less entities is not supported")
          ;
          if (bVar6) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          goto LAB_1471f56f0;
        }
        if (1 < (byte)LogTestableEnsures._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
        }
      }
      else {
LAB_1471f56f0:
        FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                  ((FBitSetContainer *)local_e8,(FBitSetContainer *)this_00);
        FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                  ((FBitSetContainer *)local_c8,
                   (FBitSetContainer *)&(this_00->CompositionDescriptor).Tags);
        FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                  ((FBitSetContainer *)local_a8,
                   (FBitSetContainer *)&(this_00->CompositionDescriptor).ChunkFragments);
        FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                  ((FBitSetContainer *)&local_88,
                   (FBitSetContainer *)&(this_00->CompositionDescriptor).SharedFragments);
        FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                  ((FBitSetContainer *)&local_68,
                   (FBitSetContainer *)&(this_00->CompositionDescriptor).ConstSharedFragments);
        if ((&local_88 == (TBitArray<FDefaultBitArrayAllocator> *)&pFVar13->SharedFragmentBitSet) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("&A != &B",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x52d,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_128.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        local_128.NumBits = 0;
        local_128.MaxBits = 0x80;
        UE::Core::Private::
        BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
                  (&local_88,(TBitArray<FDefaultBitArrayAllocator> *)&pFVar13->SharedFragmentBitSet,
                   &local_128,MaxSize,&local_173);
        local_88.NumBits = 0;
        uVar9 = local_128.NumBits + 0x1fU & 0xffffffe0;
        if ((local_88.MaxBits < (int)uVar9) || (0x80 < local_88.MaxBits)) {
          local_88.MaxBits = 0x80;
          if (0x80 < (int)uVar9) {
            local_88.MaxBits = uVar9;
          }
          TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_88,0);
        }
        local_88.NumBits = local_128.NumBits;
        if (local_128.NumBits != 0) {
          FVar12 = (ForElementType<unsigned_int>)&local_128;
          if (local_128.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar12 = local_128.AllocatorInstance.SecondaryData;
          }
          FVar10 = (ForElementType<unsigned_int>)&local_88;
          if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar10 = local_88.AllocatorInstance.SecondaryData;
          }
          memcpy((void *)FVar10,(void *)FVar12,(ulonglong)(local_128.NumBits + 0x1fU >> 5) << 2);
        }
        if (local_128.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_128.AllocatorInstance.SecondaryData);
        }
        if ((&local_68 ==
             (TBitArray<FDefaultBitArrayAllocator> *)&pFVar13->ConstSharedFragmentBitSet) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("&A != &B",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x52d,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_108.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        local_108.NumBits = 0;
        local_108.MaxBits = 0x80;
        UE::Core::Private::
        BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
                  (&local_68,
                   (TBitArray<FDefaultBitArrayAllocator> *)&pFVar13->ConstSharedFragmentBitSet,
                   &local_108,MaxSize,local_172);
        local_68.NumBits = 0;
        uVar9 = local_108.NumBits + 0x1fU & 0xffffffe0;
        if ((local_68.MaxBits < (int)uVar9) || (0x80 < local_68.MaxBits)) {
          local_68.MaxBits = 0x80;
          if (0x80 < (int)uVar9) {
            local_68.MaxBits = uVar9;
          }
          TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_68,0);
        }
        local_68.NumBits = local_108.NumBits;
        if (local_108.NumBits != 0) {
          FVar12 = (ForElementType<unsigned_int>)&local_108;
          if (local_108.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar12 = local_108.AllocatorInstance.SecondaryData;
          }
          FVar10 = (ForElementType<unsigned_int>)&local_68;
          if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar10 = local_68.AllocatorInstance.SecondaryData;
          }
          memcpy((void *)FVar10,(void *)FVar12,(ulonglong)(local_108.NumBits + 0x1fU >> 5) << 2);
        }
        if (local_108.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_108.AllocatorInstance.SecondaryData);
        }
        local_148.ChunkMemorySize = this_00->ChunkMemorySize;
        local_148.DebugName.ComparisonIndex.Value = 0;
        local_148.DebugName.Number = 0;
        local_148.DebugColor.field0_0x0.Bits = (FColor_u_0)0x0;
        CreateArchetype(this,&local_158,(FMassArchetypeCompositionDescriptor *)local_e8,&local_148);
        if ((local_158.DataPtr.Object == (FMassArchetypeData *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("NewArchetypeHandle.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                               ,0x70e,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar5 = local_158.DataPtr.Object;
        if ((local_158.DataPtr.Object == (FMassArchetypeData *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("NewArchetype",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                               ,0x710,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (this_00 == pFVar5) {
          if (UE::AITestSuite::TestsInProgress < 1) {
            local_177 = 0;
            ``FMassEntityManager::BatchAddSharedFragmentsForEntities'::__l91::<lambda_1>::
            operator()'::__l16::<lambda_1>::operator()(&local_177);
          }
          else if (2 < (byte)LogTestableEnsures._0_1_) {
            UE::Logging::Private::BasicLog<3>
                      ((FStaticBasicLogRecord *)&PTR_u_Setting_shared__151574958,
                       (FLogCategoryBase *)&LogTestableEnsures);
          }
          if (2 < (byte)LogMass._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_158.DataPtr.SharedReferenceCount.ReferenceController);
          if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
          }
          if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
          }
          if ((void *)local_a8._16_8_ != (void *)0x0) {
            FMemory::Free((void *)local_a8._16_8_);
          }
          if ((void *)local_c8._16_8_ != (void *)0x0) {
            FMemory::Free((void *)local_c8._16_8_);
          }
          if ((void *)local_e8._16_8_ != (void *)0x0) {
            FMemory::Free((void *)local_e8._16_8_);
          }
        }
        else {
          local_170.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_170.ArrayNum = 0;
          local_170.ArrayMax = 0;
          FMassArchetypeData::BatchMoveEntitiesToAnotherArchetype
                    (this_00,pFVar15,pFVar5,&local_170,
                     (TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_>
                      *)0x0,pFVar13,
                     (TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                      *)0x0,(TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                             *)0x0);
          iVar4 = local_170.ArrayNum;
          uVar11 = (ulonglong)local_170.ArrayNum;
          pFVar1 = local_170.AllocatorInstance.Data + uVar11 * 8;
          FVar14.Data = local_170.AllocatorInstance.Data;
          while( true ) {
            if ((int)uVar11 != iVar4) {
              local_176 = 0;
              `TCheckedPointerIterator<FMassEntityHandle,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_176);
            }
            pFVar13 = local_160;
            if (FVar14.Data == pFVar1) break;
            local_175 = (StorageSelector)0x0;
            pIVar8 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
                       ::__l2::Invokers[(this->EntityStorage).TypeIndex])
                               (&local_175,&this->EntityStorage);
            cVar7 = (**(code **)((longlong)*pIVar8 + 0x48))(pIVar8,*(undefined4 *)FVar14.Data);
            if ((cVar7 == '\0') &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("GetEntityStorageInterface().IsValidIndex(Entity.Index)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                                   ,0x71c,L""), bVar6)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            local_174 = (StorageSelector)0x0;
            pIVar8 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
                       ::__l2::Invokers[(this->EntityStorage).TypeIndex])
                               (&local_174,&this->EntityStorage);
            (**(code **)((longlong)*pIVar8 + 0x28))(pIVar8,*(undefined4 *)FVar14.Data,&local_158);
            uVar11 = local_170._8_8_ & 0xffffffff;
            FVar14.Data = FVar14.Data + 8;
          }
          if (local_170.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_170.AllocatorInstance.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_158.DataPtr.SharedReferenceCount.ReferenceController);
          if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
          }
          if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
          }
          if ((void *)local_a8._16_8_ != (void *)0x0) {
            FMemory::Free((void *)local_a8._16_8_);
          }
          if ((void *)local_c8._16_8_ != (void *)0x0) {
            FMemory::Free((void *)local_c8._16_8_);
          }
          if ((void *)local_e8._16_8_ != (void *)0x0) {
            FMemory::Free((void *)local_e8._16_8_);
          }
        }
      }
      pFVar15 = pFVar15 + 1;
    } while (pFVar15 != local_138);
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// BatchBuildEntities @ 1471f5c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> * __thiscall
FMassEntityManager::BatchBuildEntities
          (FMassEntityManager *this,
          TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *__return_storage_ptr__,
          FMassArchetypeEntityCollectionWithPayload *param_1,
          TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
          *param_2,FMassArchetypeSharedFragmentValues *param_3,FMassArchetypeCreationParams *param_4
          )

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FCreationContext *this_00;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *pTVar5;
  UStruct *pUVar6;
  UStruct *pUVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStackY_1e8 [32];
  undefined1 local_1b8;
  undefined1 local_1b7 [7];
  TRawPtrProxy<UE::Mass::ObserverManager::FCreationContext> local_1b0;
  UStruct *local_1a8;
  UStruct *local_1a0;
  FMassArchetypeCreationParams *local_198;
  FMassArchetypeEntityCollectionWithPayload *local_190;
  FMassEntityManager *local_188;
  undefined1 local_180 [16];
  void *pvStack_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined1 local_160 [16];
  void *pvStack_150;
  undefined4 local_148;
  undefined4 local_144;
  undefined1 local_140 [16];
  void *pvStack_130;
  undefined4 local_128;
  undefined4 local_124;
  undefined1 local_120 [16];
  void *pvStack_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_198 = param_4;
  local_190 = param_1;
  local_188 = this;
  if (UE::AITestSuite::TestsInProgress < 1) {
    if ((0 < (int)this->ProcessingScopeCount) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsProcessing() == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                           ,0x2b3,
                           L"Synchronous API function %hs called during mass processing. Use asynchronous API instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *)(*pcVar2)();
      return pTVar5;
    }
  }
  else if (0 < (int)this->ProcessingScopeCount) {
    if (1 < (byte)LogTestableEnsures._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
    }
    this_00 = ::operator_new(0x18);
    if (this_00 == (FCreationContext *)0x0) {
      local_1b0.Object = (FCreationContext *)0x0;
    }
    else {
      local_1b0.Object = UE::Mass::ObserverManager::FCreationContext::FCreationContext(this_00);
    }
    TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
    TSharedRef<UE::Mass::ObserverManager::FCreationContext,1><UE::Mass::ObserverManager::FCreationContext>
              (__return_storage_ptr__,&local_1b0);
    return __return_storage_ptr__;
  }
  if ((param_3->bSorted == false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedFragmentValues.IsSorted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x2b4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *)(*pcVar2)();
    return pTVar5;
  }
  local_104 = 0x80;
  local_120._0_8_ = 0;
  local_108 = 0;
  local_140._0_8_ = 0;
  local_120._8_8_ = 0;
  pvStack_110 = (void *)0x0;
  local_128 = 0;
  local_140._8_8_ = 0;
  pvStack_130 = (void *)0x0;
  local_160._0_8_ = 0;
  local_160._8_8_ = 0;
  pvStack_150 = (void *)0x0;
  local_148 = 0;
  local_180._0_8_ = 0;
  local_180._8_8_ = 0;
  pvStack_170 = (void *)0x0;
  local_168 = 0;
  local_124 = 0x80;
  local_144 = 0x80;
  local_164 = 0x80;
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_f8,(FBitSetContainer *)param_2);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_d8,(FBitSetContainer *)local_180);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_b8,(FBitSetContainer *)local_160);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_98,(FBitSetContainer *)local_140);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_78,(FBitSetContainer *)local_120);
  if (pvStack_170 != (void *)0x0) {
    FMemory::Free(pvStack_170);
  }
  if (pvStack_150 != (void *)0x0) {
    FMemory::Free(pvStack_150);
  }
  if (pvStack_130 != (void *)0x0) {
    FMemory::Free(pvStack_130);
  }
  if (pvStack_110 != (void *)0x0) {
    FMemory::Free(pvStack_110);
  }
  iVar1 = (param_3->ConstSharedFragments).ArrayNum;
  pFVar8 = (param_3->ConstSharedFragments).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((param_3->ConstSharedFragments).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FConstSharedStruct_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1b8);
    }
    if (pFVar8 == pFVar9) break;
    pUVar7 = (UStruct *)0x0;
    if (*(undefined8 **)pFVar8 != (undefined8 *)0x0) {
      pUVar7 = (UStruct *)**(undefined8 **)pFVar8;
    }
    pUVar6 = TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
             ::GetBaseUStruct();
    if (pUVar6 == (UStruct *)0x0) {
LAB_1471f5e68:
      local_1a8 = pUVar7;
      bVar3 = `TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
              ::Add'::__l6::<lambda_1>::operator()(&local_1a8);
      if (bVar3) goto LAB_1471f5e7b;
    }
    else {
      iVar4 = (int)pUVar6->_padding_;
      if (((int)pUVar7->_padding_ < iVar4) ||
         ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar4 * 8) !=
          &pUVar6->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_1471f5e68;
LAB_1471f5e7b:
      iVar4 = FStructTracker::FindOrAddStructTypeIndex
                        (&FMassConstSharedFragmentBitSetStructTrackerWrapper::StructTracker,pUVar7);
      FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)local_78,iVar4);
    }
    pFVar8 = pFVar8 + 0x10;
  }
  iVar1 = (param_3->SharedFragments).ArrayNum;
  pFVar8 = (param_3->SharedFragments).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x10;
  do {
    if ((param_3->SharedFragments).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSharedStruct_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_1b7);
    }
    if (pFVar8 == pFVar9) {
      BatchBuildEntities(local_188,__return_storage_ptr__,local_190,
                         (FMassArchetypeCompositionDescriptor *)local_f8,param_3,local_198);
      if ((void *)local_78._16_8_ != (void *)0x0) {
        FMemory::Free((void *)local_78._16_8_);
      }
      if ((void *)local_98._16_8_ != (void *)0x0) {
        FMemory::Free((void *)local_98._16_8_);
      }
      if ((void *)local_b8._16_8_ != (void *)0x0) {
        FMemory::Free((void *)local_b8._16_8_);
      }
      if ((void *)local_d8._16_8_ != (void *)0x0) {
        FMemory::Free((void *)local_d8._16_8_);
      }
      if ((void *)local_f8._16_8_ != (void *)0x0) {
        FMemory::Free((void *)local_f8._16_8_);
      }
      return __return_storage_ptr__;
    }
    pUVar7 = (UStruct *)0x0;
    if (*(undefined8 **)pFVar8 != (undefined8 *)0x0) {
      pUVar7 = (UStruct *)**(undefined8 **)pFVar8;
    }
    pUVar6 = TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
             ::GetBaseUStruct();
    if (pUVar6 == (UStruct *)0x0) {
LAB_1471f5f03:
      local_1a0 = pUVar7;
      bVar3 = `TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
              ::Add'::__l6::<lambda_1>::operator()(&local_1a0);
      if (bVar3) goto LAB_1471f5f16;
    }
    else {
      iVar4 = (int)pUVar6->_padding_;
      if (((int)pUVar7->_padding_ < iVar4) ||
         ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar4 * 8) !=
          &pUVar6->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_1471f5f03;
LAB_1471f5f16:
      iVar4 = FStructTracker::FindOrAddStructTypeIndex
                        (&FMassSharedFragmentBitSetStructTrackerWrapper::StructTracker,pUVar7);
      FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)local_98,iVar4);
    }
    pFVar8 = pFVar8 + 0x10;
  } while( true );
}

// BatchBuildEntities @ 1471f5ff0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> * __thiscall
FMassEntityManager::BatchBuildEntities
          (FMassEntityManager *this,
          TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *__return_storage_ptr__,
          FMassArchetypeEntityCollectionWithPayload *param_1,
          FMassArchetypeCompositionDescriptor *param_2,FMassArchetypeSharedFragmentValues *param_3,
          FMassArchetypeCreationParams *param_4)

{
  FMassEntityHandle *pFVar1;
  int iVar2;
  code *pcVar3;
  FMassArchetypeData *pFVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  FCreationContext *this_00;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *pTVar8;
  IEntityStorageInterface *pIVar9;
  ForAnyElementType FVar10;
  bool bVar11;
  undefined1 local_128;
  StorageSelector local_127;
  StorageSelector local_126;
  StorageSelector local_125;
  StorageSelector local_124;
  undefined1 local_123 [3];
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_120;
  TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_>
  local_110;
  FMassArchetypeHandle local_100;
  TRawPtrProxy<UE::Mass::ObserverManager::FCreationContext> local_f0;
  FMassArchetypeEntityCollection local_e8;
  FArchetypeEntityRange *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  FMassEntityHandle *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  FArchetypeEntityRange *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  FMassEntityHandle *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> local_78;
  TArrayView<FMassEntityHandle_const_,int> local_68;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> local_58;
  TArrayView<FMassEntityHandle_const_,int> local_48;
  
  if (UE::AITestSuite::TestsInProgress < 1) {
    if ((0 < (int)this->ProcessingScopeCount) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsProcessing() == false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                            ,0x2c7,
                            L"Synchronous API function %hs called during mass processing. Use asynchronous API instead."
                           ), bVar11)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *)(*pcVar3)();
      return pTVar8;
    }
  }
  else if (0 < (int)this->ProcessingScopeCount) {
    if (1 < (byte)LogTestableEnsures._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
    }
    this_00 = ::operator_new(0x18);
    if (this_00 == (FCreationContext *)0x0) {
      local_f0.Object = (FCreationContext *)0x0;
    }
    else {
      local_f0.Object = UE::Mass::ObserverManager::FCreationContext::FCreationContext(this_00);
    }
    TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
    TSharedRef<UE::Mass::ObserverManager::FCreationContext,1><UE::Mass::ObserverManager::FCreationContext>
              (__return_storage_ptr__,&local_f0);
    return __return_storage_ptr__;
  }
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId713,"Mass_BatchBuildEntities",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
               ,0x2c9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId713);
  }
  local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.ArrayNum = 0;
  local_110.ArrayMax = 0;
  CreateArchetype(this,&local_100,param_2,param_4);
  if ((local_100.DataPtr.Object == (FMassArchetypeData *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TargetArchetypeHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x2cf,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *)(*pcVar3)();
    return pTVar8;
  }
  local_b8 = (FArchetypeEntityRange *)(param_1->Entities).Ranges.AllocatorInstance.Data;
  iVar2 = (param_1->Entities).Ranges.ArrayNum;
  local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.ArrayNum = 0;
  local_120.ArrayMax = 0;
  if ((iVar2 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *)(*pcVar3)();
    return pTVar8;
  }
  local_78._12_4_ = uStack_ac;
  local_78.ArrayNum = iVar2;
  local_78.DataPtr = local_b8;
  iStack_b0 = iVar2;
  UE::Mass::Private::ConvertArchetypelessSubchunksIntoEntityHandles(&local_78,&local_120);
  iVar2 = local_120.ArrayNum;
  pFVar1 = (FMassEntityHandle *)
           (local_120.AllocatorInstance.Data + (longlong)local_120.ArrayNum * 8);
  FVar10.Data = local_120.AllocatorInstance.Data;
  while( true ) {
    if (local_120.ArrayNum != iVar2) {
      local_128 = 0;
      `TCheckedPointerIterator<FMassEntityHandle,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_128);
    }
    if ((FMassEntityHandle *)FVar10.Data == pFVar1) break;
    local_127 = (StorageSelector)0x0;
    pIVar9 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
               ::__l2::Invokers[(this->EntityStorage).TypeIndex])(&local_127,&this->EntityStorage);
    cVar6 = (**(code **)((longlong)*pIVar9 + 0x48))
                      (pIVar9,((FMassEntityHandle *)FVar10.Data)->Index);
    if ((cVar6 == '\0') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("GetEntityStorageInterface().IsValidIndex(Entity.Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                           ,0x2dc,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *)(*pcVar3)();
      return pTVar8;
    }
    local_126 = (StorageSelector)0x0;
    pIVar9 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
               ::__l2::Invokers[(this->EntityStorage).TypeIndex])(&local_126,&this->EntityStorage);
    iVar7 = (**(code **)((longlong)*pIVar9 + 0x38))
                      (pIVar9,((FMassEntityHandle *)FVar10.Data)->Index);
    if ((iVar7 != 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("EntityState == UE::Mass::IEntityStorageInterface::EEntityState::Reserved"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                           ,0x2df,
                           L"Trying to build entities that are not reserved. Check all handles are reserved or consider using BatchCreateEntities"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *)(*pcVar3)();
      return pTVar8;
    }
    local_125 = (StorageSelector)0x0;
    pIVar9 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
               ::__l2::Invokers[(this->EntityStorage).TypeIndex])(&local_125,&this->EntityStorage);
    iVar7 = (**(code **)((longlong)*pIVar9 + 0x40))
                      (pIVar9,((FMassEntityHandle *)FVar10.Data)->Index);
    ((FMassEntityHandle *)FVar10.Data)->SerialNumber = iVar7;
    local_124 = (StorageSelector)0x0;
    pIVar9 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
               ::__l2::Invokers[(this->EntityStorage).TypeIndex])(&local_124,&this->EntityStorage);
    (**(code **)((longlong)*pIVar9 + 0x30))
              (pIVar9,((FMassEntityHandle *)FVar10.Data)->Index,&local_100);
    FVar10.Data = FVar10.Data + 8;
  }
  if ((local_100.DataPtr.Object == (FMassArchetypeData *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *)(*pcVar3)();
    return pTVar8;
  }
  pFVar4 = local_100.DataPtr.Object;
  iVar2 = local_120.ArrayNum;
  local_a8 = (FMassEntityHandle *)local_120.AllocatorInstance.Data;
  if ((local_120.ArrayNum < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *)(*pcVar3)();
    return pTVar8;
  }
  iStack_a0 = iVar2;
  local_68._12_4_ = uStack_9c;
  local_68.ArrayNum = iVar2;
  local_68.DataPtr = local_a8;
  FMassArchetypeData::BatchAddEntities(pFVar4,&local_68,param_3,&local_110);
  iVar2 = local_120.ArrayNum;
  pFVar1 = (FMassEntityHandle *)
           (local_120.AllocatorInstance.Data + (longlong)local_120.ArrayNum * 8);
  FVar10.Data = local_120.AllocatorInstance.Data;
  while( true ) {
    if (local_120.ArrayNum != iVar2) {
      local_123[0] = 0;
      `TCheckedPointerIterator<FMassEntityHandle,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_123);
    }
    if ((FMassEntityHandle *)FVar10.Data == pFVar1) break;
    FMassTrace::EntityCreated(*(FMassEntityHandle *)FVar10.Data,local_100.DataPtr.Object);
    FVar10.Data = FVar10.Data + 8;
  }
  if ((0 < (param_1->PayloadSlice).Source.Content.ArrayNum) && (0 < (param_1->PayloadSlice).Count))
  {
    if ((local_100.DataPtr.Object == (FMassArchetypeData *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *)(*pcVar3)();
      return pTVar8;
    }
    pFVar4 = local_100.DataPtr.Object;
    iVar2 = local_110.ArrayNum;
    local_98 = (FArchetypeEntityRange *)local_110.AllocatorInstance.Data;
    if ((local_110.ArrayNum < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *)(*pcVar3)();
      return pTVar8;
    }
    iStack_90 = iVar2;
    local_58._12_4_ = uStack_8c;
    local_58.ArrayNum = iVar2;
    local_58.DataPtr = local_98;
    FMassArchetypeData::BatchSetFragmentValues(pFVar4,&local_58,&param_1->PayloadSlice);
  }
  local_e8.Ranges.AllocatorInstance.Data = local_110.AllocatorInstance.Data;
  local_e8.Ranges.ArrayNum = local_110.ArrayNum;
  local_e8.Ranges.ArrayMax = local_110.ArrayMax;
  local_e8.Archetype.ArchetypeHandle.DataPtr.Object = local_100.DataPtr.Object;
  local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.ArrayNum = 0;
  local_110.ArrayMax = 0;
  local_e8.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController =
       local_100.DataPtr.SharedReferenceCount.ReferenceController;
  if (local_100.DataPtr.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_100.DataPtr.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_100.DataPtr.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
         1);
    UNLOCK();
  }
  local_e8.Archetype.HandleVersion = 0;
  if (local_100.DataPtr.Object != (FMassArchetypeData *)0x0) {
    local_e8.Archetype.HandleVersion = (local_100.DataPtr.Object)->EntityOrderVersion;
  }
  iVar2 = local_120.ArrayNum;
  local_88 = (FMassEntityHandle *)local_120.AllocatorInstance.Data;
  if ((local_120.ArrayNum < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *)(*pcVar3)();
    return pTVar8;
  }
  iStack_80 = iVar2;
  local_48._12_4_ = uStack_7c;
  local_48.ArrayNum = iVar2;
  local_48.DataPtr = local_88;
  FMassObserverManager::GetOrMakeCreationContext
            (&this->ObserverManager,__return_storage_ptr__,&local_48,&local_e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController);
  if ((FArchetypeEntityRange *)local_e8.Ranges.AllocatorInstance.Data !=
      (FArchetypeEntityRange *)0x0) {
    FMemory::Free(local_e8.Ranges.AllocatorInstance.Data);
  }
  if ((FMassEntityHandle *)local_120.AllocatorInstance.Data != (FMassEntityHandle *)0x0) {
    FMemory::Free(local_120.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_100.DataPtr.SharedReferenceCount.ReferenceController);
  if (local_110.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.AllocatorInstance.Data);
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// BatchChangeFragmentCompositionForEntities @ 1471f65a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassEntityManager::BatchChangeFragmentCompositionForEntities
          (FMassEntityManager *this,TArrayView<FMassArchetypeEntityCollection_const_,int> *param_1,
          TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
          *param_2,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                   *param_3)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FMassArchetypeData *this_00;
  FMassArchetypeData *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  FMassEntityManager *pFVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_> *pTVar14
  ;
  IEntityStorageInterface *pIVar15;
  uint uVar16;
  FMassArchetypeData *_Buf1;
  ForElementType<unsigned_int> FVar17;
  ulonglong uVar18;
  ForElementType<unsigned_int> FVar19;
  FBitSetContainer *pFVar20;
  undefined1 *_Buf2;
  FMassArchetypeEntityCollection *pFVar21;
  ForAnyElementType FVar22;
  undefined1 *puVar23;
  bool bVar24;
  undefined1 auStackY_428 [32];
  undefined1 local_3e7;
  StorageSelector local_3e6;
  StorageSelector local_3e5;
  char local_3e4;
  <lambda_1> local_3e3;
  <lambda_1> local_3e2 [2];
  TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_>
  local_3e0;
  FMassArchetypeEntityCollection *local_3d0;
  FMassEntityManager *local_3c8;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_3c0;
  TBitArray<FDefaultBitArrayAllocator> *local_3b0;
  FMassArchetypeHandle local_3a8;
  FMassArchetypeCreationParams local_398;
  FMassArchetypeEntityCollection *local_388;
  FMassArchetypeData *local_380;
  TSharedPtr<FMassArchetypeData,1> local_378;
  FMassArchetypeEntityCollection local_368;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_340;
  FMassArchetypeEntityCollectionWithPayload local_330;
  TBitArray<FDefaultBitArrayAllocator> local_2f0;
  TBitArray<FDefaultBitArrayAllocator> local_2d0;
  undefined1 local_2b0 [24];
  int local_298;
  undefined1 local_288 [24];
  ForElementType<unsigned_int> FStack_270;
  undefined8 local_268;
  undefined1 auStack_260 [16];
  void *pvStack_250;
  undefined8 local_248;
  ForAnyElementType FStack_240;
  undefined8 local_238;
  ForAnyElementType FStack_230;
  undefined8 local_228;
  TBitArray<FDefaultBitArrayAllocator> local_218;
  TBitArray<FDefaultBitArrayAllocator> local_1f8;
  undefined1 local_1d8 [24];
  int local_1c0;
  int local_1bc;
  undefined1 local_1b8 [32];
  undefined1 local_198 [32];
  undefined1 local_178 [32];
  TBitArray<FDefaultBitArrayAllocator> local_158;
  undefined1 local_138 [48];
  void *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  void *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  void *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  void *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_428;
  local_3d0 = (FMassArchetypeEntityCollection *)((ulonglong)local_3d0 & 0xffffffff00000000);
  bVar6 = false;
  bVar8 = false;
  bVar5 = false;
  local_3c8 = this;
  local_3b0 = (TBitArray<FDefaultBitArrayAllocator> *)param_3;
  local_380 = (FMassArchetypeData *)param_2;
  if (UE::AITestSuite::TestsInProgress < 1) {
    if ((0 < (int)this->ProcessingScopeCount) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsProcessing() == false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                            ,0x677,
                            L"Synchronous API function %hs called during mass processing. Use asynchronous API instead."
                           ), bVar24)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (0 < (int)this->ProcessingScopeCount) {
    if ((byte)LogTestableEnsures._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
    return;
  }
  bVar24 = -1 < CpuChannel->Enabled;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1657,"Mass_BatchChangeFragmentCompositionForEntities",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
               ,0x679);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1657);
  }
  pFVar21 = param_1->DataPtr;
  local_388 = pFVar21 + param_1->ArrayNum;
  local_3d0 = pFVar21;
  if (pFVar21 != local_388) {
    do {
      pTVar2 = (pFVar21->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController
      ;
      this_00 = (pFVar21->Archetype).ArchetypeHandle.DataPtr.Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_3d0 = pFVar21;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      if (this_00 == (FMassArchetypeData *)0x0) {
        bVar5 = true;
        FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                  ((FBitSetContainer *)local_198,(FBitSetContainer *)param_2);
        FStructTypeBitSet::FBitSetContainer::operator-=
                  ((FBitSetContainer *)local_198,(TBitArray<FDefaultBitArrayAllocator> *)param_3);
        FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                  ((FBitSetContainer *)local_98,(FBitSetContainer *)local_198);
        if ((void *)local_198._16_8_ != (void *)0x0) {
          FMemory::Free((void *)local_198._16_8_);
        }
        pFVar20 = (FBitSetContainer *)local_98;
      }
      else {
        local_2f0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        local_2f0.NumBits = 0;
        local_2f0.MaxBits = 0x80;
        if ((this_00 == (FMassArchetypeData *)param_2) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("&A != &B",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x52d,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_218.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        local_218.NumBits = 0;
        local_218.MaxBits = 0x80;
        UE::Core::Private::
        BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
                  ((TBitArray<FDefaultBitArrayAllocator> *)this_00,
                   (TBitArray<FDefaultBitArrayAllocator> *)param_2,&local_218,MaxSize,&local_3e3);
        iVar13 = local_2f0.MaxBits;
        local_2f0._24_8_ = (ulonglong)(uint)local_2f0.MaxBits << 0x20;
        uVar16 = local_218.NumBits + 0x1fU & 0xffffffe0;
        if ((iVar13 < (int)uVar16) || (0x80 < iVar13)) {
          uVar12 = 0x80;
          if (0x80 < (int)uVar16) {
            uVar12 = uVar16;
          }
          local_2f0._24_8_ = (ulonglong)uVar12 << 0x20;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_2f0,0);
        }
        local_2f0.NumBits = local_218.NumBits;
        if (local_218.NumBits != 0) {
          FVar19 = (ForElementType<unsigned_int>)&local_218;
          if (local_218.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar19 = local_218.AllocatorInstance.SecondaryData;
          }
          FVar17 = (ForElementType<unsigned_int>)&local_2f0;
          if (local_2f0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar17 = local_2f0.AllocatorInstance.SecondaryData;
          }
          memcpy((void *)FVar17,(void *)FVar19,(ulonglong)(local_218.NumBits + 0x1fU >> 5) << 2);
        }
        if (local_218.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_218.AllocatorInstance.SecondaryData);
        }
        if (local_2f0.AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0) {
          local_1d8[0] = local_2f0.AllocatorInstance.InlineData[0];
          local_1d8[1] = local_2f0.AllocatorInstance.InlineData[1];
          local_1d8[2] = local_2f0.AllocatorInstance.InlineData[2];
          local_1d8[3] = local_2f0.AllocatorInstance.InlineData[3];
          local_1d8[4] = local_2f0.AllocatorInstance.InlineData[4];
          local_1d8[5] = local_2f0.AllocatorInstance.InlineData[5];
          local_1d8[6] = local_2f0.AllocatorInstance.InlineData[6];
          local_1d8[7] = local_2f0.AllocatorInstance.InlineData[7];
          local_1d8[8] = local_2f0.AllocatorInstance.InlineData[8];
          local_1d8[9] = local_2f0.AllocatorInstance.InlineData[9];
          local_1d8[10] = local_2f0.AllocatorInstance.InlineData[10];
          local_1d8[0xb] = local_2f0.AllocatorInstance.InlineData[0xb];
          local_1d8[0xc] = local_2f0.AllocatorInstance.InlineData[0xc];
          local_1d8[0xd] = local_2f0.AllocatorInstance.InlineData[0xd];
          local_1d8[0xe] = local_2f0.AllocatorInstance.InlineData[0xe];
          local_1d8[0xf] = local_2f0.AllocatorInstance.InlineData[0xf];
        }
        local_1d8._16_8_ = local_2f0.AllocatorInstance.SecondaryData;
        local_1c0 = local_2f0.NumBits;
        bVar6 = true;
        bVar8 = true;
        local_1bc = local_2f0.MaxBits;
        local_2f0.NumBits = 0;
        local_2f0.MaxBits = 0;
        local_2f0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                  ((FBitSetContainer *)local_1b8,(FBitSetContainer *)local_1d8);
        FStructTypeBitSet::FBitSetContainer::operator-=
                  ((FBitSetContainer *)local_1b8,(TBitArray<FDefaultBitArrayAllocator> *)param_3);
        FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                  ((FBitSetContainer *)local_78,(FBitSetContainer *)local_1b8);
        if ((void *)local_1b8._16_8_ != (void *)0x0) {
          FMemory::Free((void *)local_1b8._16_8_);
        }
        pFVar20 = (FBitSetContainer *)local_78;
      }
      FStructTypeBitSet::FBitSetContainer::FBitSetContainer((FBitSetContainer *)local_2b0,pFVar20);
      if ((bVar5) && (bVar5 = false, (void *)local_98._16_8_ != (void *)0x0)) {
        FMemory::Free((void *)local_98._16_8_);
      }
      if ((bVar8) && (bVar8 = false, (void *)local_78._16_8_ != (void *)0x0)) {
        FMemory::Free((void *)local_78._16_8_);
      }
      if ((bVar6) &&
         (bVar6 = false,
         (ForElementType<unsigned_int>)local_1d8._16_8_ != (ForElementType<unsigned_int>)0x0)) {
        FMemory::Free((void *)local_1d8._16_8_);
      }
      if (this_00 == (FMassArchetypeData *)0x0) {
        local_398.ChunkMemorySize = 0;
        local_398.DebugName.ComparisonIndex.Value = 0;
        local_288._8_8_ = 0;
        auStack_260._0_8_ = 0;
        local_288._0_4_ = 0xffffffff;
        local_288[4] = true;
        local_288[5] = 0;
        local_288._6_2_ = 0;
        local_288._16_8_ = 0;
        FStack_270 = (ForElementType<unsigned_int>)0x0;
        auStack_260._8_8_ = 0;
        local_268 = 0x8000000000;
        pvStack_250 = (void *)0x0;
        local_248 = 0x8000000000;
        FStack_240.Data = (FScriptContainerElement *)0x0;
        local_238._0_4_ = 0;
        local_238._4_4_ = 0;
        FStack_230.Data = (FScriptContainerElement *)0x0;
        local_398.DebugName.Number = 0;
        local_398.DebugColor.field0_0x0 = (FColor_u_0)0x0;
        local_228._0_4_ = 0;
        local_228._4_4_ = 0;
        FMassArchetypeEntityCollection::FMassArchetypeEntityCollection(&local_330.Entities,pFVar21);
        local_330.PayloadSlice.Source.Content.DataPtr = (FStructArrayView *)0x0;
        local_330.PayloadSlice.Source.Content.ArrayNum = 0;
        local_330.PayloadSlice.StartIndex = 0;
        local_330.PayloadSlice.Count = 0;
        BatchBuildEntities(this,&local_340,&local_330,
                           (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                            *)local_2b0,(FMassArchetypeSharedFragmentValues *)local_288,&local_398);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_340.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_330.Entities.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.
                   ReferenceController);
        if (local_330.Entities.Ranges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_330.Entities.Ranges.AllocatorInstance.Data);
        }
        DestructItems<FSharedStruct,int>((FSharedStruct *)FStack_230.Data,(int)local_228);
        if (FStack_230.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_230.Data);
        }
        DestructItems<FConstSharedStruct,int>((FConstSharedStruct *)FStack_240.Data,(int)local_238);
        if (FStack_240.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_240.Data);
        }
        FVar19 = FStack_270;
        if (pvStack_250 != (void *)0x0) {
          FMemory::Free(pvStack_250);
          FVar19 = FStack_270;
        }
LAB_1471f6f30:
        puVar23 = (undefined1 *)local_2b0._16_8_;
        if (FVar19 != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)FVar19);
          puVar23 = (undefined1 *)local_2b0._16_8_;
        }
      }
      else {
        bVar9 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty((FConstBitSetContainer *)this_00);
        if ((!bVar9) ||
           (bVar9 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                              ((FConstBitSetContainer *)local_2b0),
           puVar23 = (undefined1 *)local_2b0._16_8_, !bVar9)) {
          puVar23 = (undefined1 *)local_2b0._16_8_;
          iVar13 = *(int *)&(this_00->CompositionDescriptor).Fragments.field_0x18;
          if (iVar13 == local_298) {
            pFVar3 = *(FMassArchetypeData **)&(this_00->CompositionDescriptor).Fragments.field_0x10;
            _Buf2 = local_2b0;
            if ((undefined1 *)local_2b0._16_8_ != (undefined1 *)0x0) {
              _Buf2 = (undefined1 *)local_2b0._16_8_;
            }
            _Buf1 = this_00;
            if (pFVar3 != (FMassArchetypeData *)0x0) {
              _Buf1 = pFVar3;
            }
            iVar13 = memcmp(_Buf1,_Buf2,(ulonglong)(iVar13 + 0x1fU >> 5) << 2);
            if (iVar13 == 0) goto LAB_1471f6f41;
          }
          FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                    ((FBitSetContainer *)local_178,(FBitSetContainer *)param_2);
          FStructTypeBitSet::FBitSetContainer::operator-=
                    ((FBitSetContainer *)local_178,(TBitArray<FDefaultBitArrayAllocator> *)this_00);
          FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                    ((FBitSetContainer *)&local_158,(FBitSetContainer *)local_178);
          if ((void *)local_178._16_8_ != (void *)0x0) {
            FMemory::Free((void *)local_178._16_8_);
          }
          bVar9 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                            ((FConstBitSetContainer *)(this->ObserverManager).ObservedFragments,
                             &local_158);
          local_1f8.MaxBits = 0x80;
          local_1f8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
          local_1f8.NumBits = 0;
          local_3e4 = bVar9;
          UE::Core::Private::
          BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseAND<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
                    (local_3b0,(TBitArray<FDefaultBitArrayAllocator> *)this_00,&local_1f8,MinSize,
                     local_3e2);
          local_2d0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
          local_2d0.MaxBits = 0x80;
          local_2d0.NumBits = 0;
          uVar16 = local_1f8.NumBits + 0x1fU & 0xffffffe0;
          if (0x80 < (int)uVar16) {
            local_2d0.MaxBits = uVar16;
            TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_2d0,0);
          }
          local_2d0.NumBits = local_1f8.NumBits;
          if (local_1f8.NumBits != 0) {
            FVar19 = (ForElementType<unsigned_int>)&local_1f8;
            if (local_1f8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FVar19 = local_1f8.AllocatorInstance.SecondaryData;
            }
            FVar17 = (ForElementType<unsigned_int>)&local_2d0;
            if (local_2d0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FVar17 = local_2d0.AllocatorInstance.SecondaryData;
            }
            memcpy((void *)FVar17,(void *)FVar19,(ulonglong)(local_1f8.NumBits + 0x1fU >> 5) << 2);
          }
          if (local_1f8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_1f8.AllocatorInstance.SecondaryData);
          }
          bVar10 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                             ((FConstBitSetContainer *)&local_2d0);
          if (!bVar10) {
            FMassObserverManager::
            OnCompositionChanged<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>_>
                      (&this->ObserverManager,pFVar21,
                       (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                        *)&local_2d0,RemoveElement,(FProcessingContext *)0x0);
          }
          local_378.Object = (pFVar21->Archetype).ArchetypeHandle.DataPtr.Object;
          local_378.SharedReferenceCount.ReferenceController =
               (pFVar21->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController
          ;
          if (local_378.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_378.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_378.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          InternalCreateSimilarArchetype
                    (this,&local_3a8,&local_378,
                     (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                      *)local_2b0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_378.SharedReferenceCount.ReferenceController);
          pTVar14 = &local_3e0;
          if (!bVar9) {
            pTVar14 = (TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_>
                       *)0x0;
          }
          local_3e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_3e0.ArrayNum = 0;
          local_3e0.ArrayMax = 0;
          local_3c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_3c0.ArrayNum = 0;
          local_3c0.ArrayMax = 0;
          FMassArchetypeData::BatchMoveEntitiesToAnotherArchetype
                    (this_00,pFVar21,local_3a8.DataPtr.Object,&local_3c0,pTVar14,
                     (FMassArchetypeSharedFragmentValues *)0x0,
                     (TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                      *)0x0,(TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                             *)0x0);
          pFVar7 = local_3c8;
          iVar13 = local_3c0.ArrayNum;
          uVar18 = (ulonglong)local_3c0.ArrayNum;
          pFVar1 = local_3c0.AllocatorInstance.Data + uVar18 * 8;
          FVar22.Data = local_3c0.AllocatorInstance.Data;
          while( true ) {
            if ((int)uVar18 != iVar13) {
              local_3e7 = 0;
              `TCheckedPointerIterator<FMassEntityHandle,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_3e7);
            }
            pFVar21 = local_3d0;
            if (FVar22.Data == pFVar1) break;
            local_3e6 = (StorageSelector)0x0;
            pIVar15 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
                        ::__l2::Invokers[(pFVar7->EntityStorage).TypeIndex])
                                (&local_3e6,&pFVar7->EntityStorage);
            cVar11 = (**(code **)((longlong)*pIVar15 + 0x48))(pIVar15,*(undefined4 *)FVar22.Data);
            if ((cVar11 == '\0') &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("GetEntityStorageInterface().IsValidIndex(Entity.Index)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                                   ,0x69a,L""), bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            local_3e5 = (StorageSelector)0x0;
            pIVar15 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
                        ::__l2::Invokers[(pFVar7->EntityStorage).TypeIndex])
                                (&local_3e5,&pFVar7->EntityStorage);
            (**(code **)((longlong)*pIVar15 + 0x30))(pIVar15,*(undefined4 *)FVar22.Data,&local_3a8);
            uVar18 = local_3c0._8_8_ & 0xffffffff;
            FVar22.Data = FVar22.Data + 8;
          }
          this = local_3c8;
          if (local_3e4 != '\0') {
            local_368.Ranges.AllocatorInstance.Data = local_3e0.AllocatorInstance.Data;
            local_368.Ranges.ArrayNum = local_3e0.ArrayNum;
            local_368.Ranges.ArrayMax = local_3e0.ArrayMax;
            local_368.Archetype.ArchetypeHandle.DataPtr.Object = local_3a8.DataPtr.Object;
            local_3e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_3e0.ArrayNum = 0;
            local_3e0.ArrayMax = 0;
            local_368.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController =
                 local_3a8.DataPtr.SharedReferenceCount.ReferenceController;
            if (local_3a8.DataPtr.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_3a8.DataPtr.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_3a8.DataPtr.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
              UNLOCK();
            }
            local_368.Archetype.HandleVersion = 0;
            if (local_3a8.DataPtr.Object != (FMassArchetypeData *)0x0) {
              local_368.Archetype.HandleVersion = (local_3a8.DataPtr.Object)->EntityOrderVersion;
            }
            FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                      ((FBitSetContainer *)local_138,(FBitSetContainer *)&local_158);
            this = local_3c8;
            local_108 = (void *)0x0;
            local_100 = 0;
            local_fc = 0x80;
            local_e8 = (void *)0x0;
            local_e0 = 0;
            local_dc = 0x80;
            local_c8 = (void *)0x0;
            local_c0 = 0;
            local_bc = 0x80;
            local_a8 = (void *)0x0;
            local_a0 = 0;
            local_9c = 0x80;
            FMassObserverManager::OnCompositionChanged
                      (&local_3c8->ObserverManager,&local_368,
                       (FMassArchetypeCompositionDescriptor *)local_138,AddElement,
                       (FProcessingContext *)0x0);
            if (local_a8 != (void *)0x0) {
              FMemory::Free(local_a8);
            }
            if (local_c8 != (void *)0x0) {
              FMemory::Free(local_c8);
            }
            if (local_e8 != (void *)0x0) {
              FMemory::Free(local_e8);
            }
            if (local_108 != (void *)0x0) {
              FMemory::Free(local_108);
            }
            if ((void *)local_138._16_8_ != (void *)0x0) {
              FMemory::Free((void *)local_138._16_8_);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_368.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.
                       ReferenceController);
            if (local_368.Ranges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_368.Ranges.AllocatorInstance.Data);
            }
          }
          if (local_3c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3c0.AllocatorInstance.Data);
          }
          if (local_3e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3e0.AllocatorInstance.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_3a8.DataPtr.SharedReferenceCount.ReferenceController);
          FVar19 = local_158.AllocatorInstance.SecondaryData;
          if (local_2d0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_2d0.AllocatorInstance.SecondaryData);
            FVar19 = local_158.AllocatorInstance.SecondaryData;
          }
          goto LAB_1471f6f30;
        }
      }
LAB_1471f6f41:
      if (puVar23 != (undefined1 *)0x0) {
        FMemory::Free(puVar23);
      }
      pFVar21 = pFVar21 + 1;
      param_3 = (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                 *)local_3b0;
      param_2 = (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                 *)local_380;
      local_3d0 = pFVar21;
    } while (pFVar21 != local_388);
  }
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// BatchChangeTagsForEntities @ 1471f6fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassEntityManager::BatchChangeTagsForEntities
          (FMassEntityManager *this,TArrayView<FMassArchetypeEntityCollection_const_,int> *param_1,
          TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *param_2,
          TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *param_3)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FMassArchetypeData *this_00;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  FMassEntityManager *pFVar7;
  FMassObserverManager *this_01;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_> *pTVar13
  ;
  IEntityStorageInterface *pIVar14;
  uint uVar15;
  uint uVar16;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *_Buf1;
  ForElementType<unsigned_int> FVar17;
  ulonglong uVar18;
  FBitSetContainer *pFVar19;
  undefined1 *_Buf2;
  ForElementType<unsigned_int> FVar20;
  FMassArchetypeEntityCollection *pFVar21;
  ForAnyElementType FVar22;
  undefined1 *puVar23;
  bool bVar24;
  undefined1 auStackY_358 [32];
  undefined1 local_317;
  StorageSelector local_316;
  StorageSelector local_315;
  <lambda_1> local_314;
  <lambda_1> local_313 [3];
  TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_>
  local_310;
  FMassArchetypeEntityCollection *local_300;
  FMassEntityManager *local_2f8;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_2f0;
  TBitArray<FDefaultBitArrayAllocator> *local_2e0;
  FMassArchetypeHandle local_2d8;
  FMassObserverManager *local_2c8;
  FMassArchetypeEntityCollection *local_2c0;
  TBitArray<FDefaultBitArrayAllocator> *local_2b8;
  TSharedPtr<FMassArchetypeData,1> local_2b0;
  FMassArchetypeEntityCollection local_2a0;
  TBitArray<FDefaultBitArrayAllocator> local_278;
  undefined1 local_258 [16];
  ForElementType<unsigned_int> local_248;
  int local_240;
  uint local_23c;
  TBitArray<FDefaultBitArrayAllocator> local_238;
  TBitArray<FDefaultBitArrayAllocator> local_218;
  undefined1 local_1f8 [24];
  int local_1e0;
  undefined1 local_1d8 [24];
  int local_1c0;
  int local_1bc;
  TBitArray<FDefaultBitArrayAllocator> local_1b8;
  undefined1 local_198 [32];
  undefined1 local_178 [32];
  undefined1 local_158 [32];
  undefined1 local_138 [16];
  void *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined1 local_118 [48];
  void *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  void *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  void *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_358;
  bVar6 = false;
  bVar8 = false;
  bVar5 = false;
  local_300 = (FMassArchetypeEntityCollection *)((ulonglong)local_300 & 0xffffffff00000000);
  local_2f8 = this;
  local_2e0 = (TBitArray<FDefaultBitArrayAllocator> *)param_3;
  local_2b8 = (TBitArray<FDefaultBitArrayAllocator> *)param_2;
  if (UE::AITestSuite::TestsInProgress < 1) {
    if ((0 < (int)this->ProcessingScopeCount) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsProcessing() == false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                            ,0x645,
                            L"Synchronous API function %hs called during mass processing. Use asynchronous API instead."
                           ), bVar24)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (0 < (int)this->ProcessingScopeCount) {
    if ((byte)LogTestableEnsures._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
    return;
  }
  bVar24 = -1 < CpuChannel->Enabled;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1607,"Mass_BatchChangeTagsForEntities",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
               ,0x647);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1607);
  }
  pFVar21 = param_1->DataPtr;
  local_2c0 = pFVar21 + param_1->ArrayNum;
  local_300 = pFVar21;
  if (pFVar21 != local_2c0) {
    do {
      pTVar2 = (pFVar21->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController
      ;
      this_00 = (pFVar21->Archetype).ArchetypeHandle.DataPtr.Object;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_300 = pFVar21;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      if (this_00 == (FMassArchetypeData *)0x0) {
        bVar5 = true;
        FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                  ((FBitSetContainer *)local_178,(FBitSetContainer *)param_2);
        FStructTypeBitSet::FBitSetContainer::operator-=
                  ((FBitSetContainer *)local_178,(TBitArray<FDefaultBitArrayAllocator> *)param_3);
        FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                  ((FBitSetContainer *)local_98,(FBitSetContainer *)local_178);
        if ((void *)local_178._16_8_ != (void *)0x0) {
          FMemory::Free((void *)local_178._16_8_);
        }
        pFVar19 = (FBitSetContainer *)local_98;
      }
      else {
        pTVar3 = &(this_00->CompositionDescriptor).Tags;
        local_278.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        local_278.NumBits = 0;
        local_278.MaxBits = 0x80;
        if ((pTVar3 == param_2) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("&A != &B",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x52d,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_238.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        local_238.NumBits = 0;
        local_238.MaxBits = 0x80;
        UE::Core::Private::
        BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseOR<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
                  ((TBitArray<FDefaultBitArrayAllocator> *)pTVar3,
                   (TBitArray<FDefaultBitArrayAllocator> *)param_2,&local_238,MaxSize,&local_314);
        iVar12 = local_278.MaxBits;
        local_278._24_8_ = (ulonglong)(uint)local_278.MaxBits << 0x20;
        uVar15 = local_238.NumBits + 0x1fU & 0xffffffe0;
        if ((iVar12 < (int)uVar15) || (0x80 < iVar12)) {
          uVar16 = 0x80;
          if (0x80 < (int)uVar15) {
            uVar16 = uVar15;
          }
          local_278._24_8_ = (ulonglong)uVar16 << 0x20;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_278,0);
        }
        local_278.NumBits = local_238.NumBits;
        if (local_238.NumBits != 0) {
          FVar20 = (ForElementType<unsigned_int>)&local_238;
          if (local_238.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar20 = local_238.AllocatorInstance.SecondaryData;
          }
          FVar17 = (ForElementType<unsigned_int>)&local_278;
          if (local_278.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar17 = local_278.AllocatorInstance.SecondaryData;
          }
          memcpy((void *)FVar17,(void *)FVar20,(ulonglong)(local_238.NumBits + 0x1fU >> 5) << 2);
        }
        if (local_238.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_238.AllocatorInstance.SecondaryData);
        }
        if (local_278.AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0) {
          local_1d8[0] = local_278.AllocatorInstance.InlineData[0];
          local_1d8[1] = local_278.AllocatorInstance.InlineData[1];
          local_1d8[2] = local_278.AllocatorInstance.InlineData[2];
          local_1d8[3] = local_278.AllocatorInstance.InlineData[3];
          local_1d8[4] = local_278.AllocatorInstance.InlineData[4];
          local_1d8[5] = local_278.AllocatorInstance.InlineData[5];
          local_1d8[6] = local_278.AllocatorInstance.InlineData[6];
          local_1d8[7] = local_278.AllocatorInstance.InlineData[7];
          local_1d8[8] = local_278.AllocatorInstance.InlineData[8];
          local_1d8[9] = local_278.AllocatorInstance.InlineData[9];
          local_1d8[10] = local_278.AllocatorInstance.InlineData[10];
          local_1d8[0xb] = local_278.AllocatorInstance.InlineData[0xb];
          local_1d8[0xc] = local_278.AllocatorInstance.InlineData[0xc];
          local_1d8[0xd] = local_278.AllocatorInstance.InlineData[0xd];
          local_1d8[0xe] = local_278.AllocatorInstance.InlineData[0xe];
          local_1d8[0xf] = local_278.AllocatorInstance.InlineData[0xf];
        }
        local_1d8._16_8_ = local_278.AllocatorInstance.SecondaryData;
        local_1c0 = local_278.NumBits;
        bVar6 = true;
        bVar8 = true;
        local_1bc = local_278.MaxBits;
        local_278.NumBits = 0;
        local_278.MaxBits = 0;
        local_278.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                  ((FBitSetContainer *)local_198,(FBitSetContainer *)local_1d8);
        FStructTypeBitSet::FBitSetContainer::operator-=
                  ((FBitSetContainer *)local_198,(TBitArray<FDefaultBitArrayAllocator> *)param_3);
        FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                  ((FBitSetContainer *)local_78,(FBitSetContainer *)local_198);
        if ((void *)local_198._16_8_ != (void *)0x0) {
          FMemory::Free((void *)local_198._16_8_);
        }
        pFVar19 = (FBitSetContainer *)local_78;
      }
      FStructTypeBitSet::FBitSetContainer::FBitSetContainer((FBitSetContainer *)local_1f8,pFVar19);
      if ((bVar5) && (bVar5 = false, (void *)local_98._16_8_ != (void *)0x0)) {
        FMemory::Free((void *)local_98._16_8_);
      }
      if ((bVar8) && (bVar8 = false, (void *)local_78._16_8_ != (void *)0x0)) {
        FMemory::Free((void *)local_78._16_8_);
      }
      if ((bVar6) &&
         (bVar6 = false,
         (ForElementType<unsigned_int>)local_1d8._16_8_ != (ForElementType<unsigned_int>)0x0)) {
        FMemory::Free((void *)local_1d8._16_8_);
      }
      if (this_00 == (FMassArchetypeData *)0x0) {
        bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5136943605146974640>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                           ,0x650,"CurrentArchetype");
        puVar23 = (undefined1 *)local_1f8._16_8_;
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        bVar9 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                          ((FConstBitSetContainer *)&(this_00->CompositionDescriptor).Tags);
        if ((!bVar9) ||
           (bVar9 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                              ((FConstBitSetContainer *)local_1f8),
           puVar23 = (undefined1 *)local_1f8._16_8_, !bVar9)) {
          puVar23 = (undefined1 *)local_1f8._16_8_;
          iVar12 = *(int *)&(this_00->CompositionDescriptor).Tags.field_0x18;
          if (iVar12 == local_1e0) {
            pTVar3 = *(TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>
                       **)&(this_00->CompositionDescriptor).Tags.field_0x10;
            _Buf2 = local_1f8;
            if ((undefined1 *)local_1f8._16_8_ != (undefined1 *)0x0) {
              _Buf2 = (undefined1 *)local_1f8._16_8_;
            }
            _Buf1 = &(this_00->CompositionDescriptor).Tags;
            if (pTVar3 != (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>
                           *)0x0) {
              _Buf1 = pTVar3;
            }
            iVar12 = memcmp(_Buf1,_Buf2,(ulonglong)(iVar12 + 0x1fU >> 5) << 2);
            if (iVar12 == 0) goto LAB_1471f77ff;
          }
          FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                    ((FBitSetContainer *)local_158,(FBitSetContainer *)param_2);
          FStructTypeBitSet::FBitSetContainer::operator-=
                    ((FBitSetContainer *)local_158,
                     (TBitArray<FDefaultBitArrayAllocator> *)&(this_00->CompositionDescriptor).Tags)
          ;
          FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                    ((FBitSetContainer *)&local_1b8,(FBitSetContainer *)local_158);
          if ((void *)local_158._16_8_ != (void *)0x0) {
            FMemory::Free((void *)local_158._16_8_);
          }
          local_2c8 = &this->ObserverManager;
          bVar9 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                            ((FConstBitSetContainer *)(this->ObserverManager).ObservedTags,
                             &local_1b8);
          local_218.MaxBits = 0x80;
          local_218.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
          local_218.NumBits = 0;
          UE::Core::Private::
          BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseAND<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
                    (local_2e0,
                     (TBitArray<FDefaultBitArrayAllocator> *)&(this_00->CompositionDescriptor).Tags,
                     &local_218,MinSize,local_313);
          uVar15 = 0;
          local_248 = (ForElementType<unsigned_int>)0x0;
          local_23c = 0x80;
          local_240 = 0;
          uVar16 = local_218.NumBits + 0x1fU & 0xffffffe0;
          if (0x80 < (int)uVar16) {
            local_23c = uVar16;
            TBitArray<FDefaultBitArrayAllocator>::Realloc
                      ((TBitArray<FDefaultBitArrayAllocator> *)local_258,0);
          }
          local_240 = local_218.NumBits;
          if (local_218.NumBits != 0) {
            FVar20 = (ForElementType<unsigned_int>)&local_218;
            if (local_218.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
              FVar20 = local_218.AllocatorInstance.SecondaryData;
            }
            FVar17 = (ForElementType<unsigned_int>)local_258;
            if (local_248 != (ForElementType<unsigned_int>)0x0) {
              FVar17 = local_248;
            }
            memcpy((void *)FVar17,(void *)FVar20,(ulonglong)(local_218.NumBits + 0x1fU >> 5) << 2);
          }
          if (local_218.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_218.AllocatorInstance.SecondaryData);
          }
          bVar10 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                             ((FConstBitSetContainer *)local_258);
          if (!bVar10) {
            FMassObserverManager::
            OnCompositionChanged<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>_>
                      (&this->ObserverManager,pFVar21,
                       (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>
                        *)local_258,RemoveElement,(FProcessingContext *)0x0);
          }
          local_2b0.Object = (pFVar21->Archetype).ArchetypeHandle.DataPtr.Object;
          local_2b0.SharedReferenceCount.ReferenceController =
               (pFVar21->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController
          ;
          if (local_2b0.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_2b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_2b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          InternalCreateSimilarArchetype
                    (this,&local_2d8,&local_2b0,
                     (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *
                     )local_1f8);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2b0.SharedReferenceCount.ReferenceController);
          pTVar13 = &local_310;
          if (!bVar9) {
            pTVar13 = (TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_>
                       *)0x0;
          }
          local_310.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_310.ArrayNum = 0;
          local_310.ArrayMax = 0;
          local_2f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_2f0.ArrayNum = 0;
          local_2f0.ArrayMax = 0;
          FMassArchetypeData::BatchMoveEntitiesToAnotherArchetype
                    (this_00,pFVar21,local_2d8.DataPtr.Object,&local_2f0,pTVar13,
                     (FMassArchetypeSharedFragmentValues *)0x0,
                     (TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                      *)0x0,(TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                             *)0x0);
          pFVar7 = local_2f8;
          iVar12 = local_2f0.ArrayNum;
          uVar18 = (ulonglong)local_2f0.ArrayNum;
          pFVar1 = local_2f0.AllocatorInstance.Data + uVar18 * 8;
          FVar22.Data = local_2f0.AllocatorInstance.Data;
          while( true ) {
            if ((int)uVar18 != iVar12) {
              local_317 = 0;
              `TCheckedPointerIterator<FMassEntityHandle,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_317);
            }
            if (FVar22.Data == pFVar1) break;
            local_316 = (StorageSelector)0x0;
            pIVar14 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
                        ::__l2::Invokers[(pFVar7->EntityStorage).TypeIndex])
                                (&local_316,&pFVar7->EntityStorage);
            cVar11 = (**(code **)((longlong)*pIVar14 + 0x48))(pIVar14,*(undefined4 *)FVar22.Data);
            if ((cVar11 == '\0') &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("GetEntityStorageInterface().IsValidIndex(Entity.Index)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                                   ,0x665,L""), bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            local_315 = (StorageSelector)0x0;
            pIVar14 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
                        ::__l2::Invokers[(pFVar7->EntityStorage).TypeIndex])
                                (&local_315,&pFVar7->EntityStorage);
            (**(code **)((longlong)*pIVar14 + 0x30))(pIVar14,*(undefined4 *)FVar22.Data,&local_2d8);
            uVar18 = local_2f0._8_8_ & 0xffffffff;
            FVar22.Data = FVar22.Data + 8;
          }
          bVar9 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                            ((FConstBitSetContainer *)&local_1b8);
          this_01 = local_2c8;
          pFVar21 = local_300;
          if (!bVar9) {
            local_2a0.Ranges.AllocatorInstance.Data = local_310.AllocatorInstance.Data;
            local_2a0.Ranges.ArrayNum = local_310.ArrayNum;
            local_2a0.Ranges.ArrayMax = local_310.ArrayMax;
            local_2a0.Archetype.ArchetypeHandle.DataPtr.Object = local_2d8.DataPtr.Object;
            local_310.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_310.ArrayNum = 0;
            local_310.ArrayMax = 0;
            local_2a0.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController =
                 local_2d8.DataPtr.SharedReferenceCount.ReferenceController;
            if (local_2d8.DataPtr.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_2d8.DataPtr.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_2d8.DataPtr.SharedReferenceCount.ReferenceController)->
                         SharedReferenceCount + 1);
              UNLOCK();
            }
            if (local_2d8.DataPtr.Object != (FMassArchetypeData *)0x0) {
              uVar15 = (local_2d8.DataPtr.Object)->EntityOrderVersion;
            }
            local_128 = (void *)0x0;
            local_120 = 0;
            local_11c = 0x80;
            local_2a0.Archetype.HandleVersion = uVar15;
            FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                      ((FBitSetContainer *)local_118,(FBitSetContainer *)&local_1b8);
            local_e8 = (void *)0x0;
            local_e0 = 0;
            local_dc = 0x80;
            local_c8 = (void *)0x0;
            local_c0 = 0;
            local_bc = 0x80;
            local_a8 = (void *)0x0;
            local_a0 = 0;
            local_9c = 0x80;
            FMassObserverManager::OnCompositionChanged
                      (this_01,&local_2a0,(FMassArchetypeCompositionDescriptor *)local_138,
                       AddElement,(FProcessingContext *)0x0);
            if (local_a8 != (void *)0x0) {
              FMemory::Free(local_a8);
            }
            if (local_c8 != (void *)0x0) {
              FMemory::Free(local_c8);
            }
            if (local_e8 != (void *)0x0) {
              FMemory::Free(local_e8);
            }
            if ((void *)local_118._16_8_ != (void *)0x0) {
              FMemory::Free((void *)local_118._16_8_);
            }
            if (local_128 != (void *)0x0) {
              FMemory::Free(local_128);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_2a0.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.
                       ReferenceController);
            if (local_2a0.Ranges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2a0.Ranges.AllocatorInstance.Data);
            }
          }
          if (local_2f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_2f0.AllocatorInstance.Data);
          }
          if (local_310.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_310.AllocatorInstance.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2d8.DataPtr.SharedReferenceCount.ReferenceController);
          if (local_248 != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_248);
          }
          puVar23 = (undefined1 *)local_1f8._16_8_;
          this = local_2f8;
          if (local_1b8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_1b8.AllocatorInstance.SecondaryData);
            puVar23 = (undefined1 *)local_1f8._16_8_;
            this = local_2f8;
          }
        }
      }
LAB_1471f77ff:
      if (puVar23 != (undefined1 *)0x0) {
        FMemory::Free(puVar23);
      }
      pFVar21 = pFVar21 + 1;
      param_3 = (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)
                local_2e0;
      param_2 = (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)
                local_2b8;
      local_300 = pFVar21;
    } while (pFVar21 != local_2c0);
  }
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// BatchCreateEntities @ 1471f7880

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> * __thiscall
FMassEntityManager::BatchCreateEntities
          (FMassEntityManager *this,
          TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *__return_storage_ptr__,
          FMassArchetypeHandle *param_1,FMassArchetypeSharedFragmentValues *param_2,int param_3,
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  FCreationContext *pFVar7;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *pTVar8;
  IEntityStorageInterface *this_00;
  FMassArchetypeHandle *pFVar9;
  StorageSelector local_98 [8];
  FMassEntityHandle local_90;
  int local_88 [4];
  FMassEntityHandle *local_78;
  int *piStack_70;
  FMassArchetypeCreationParams local_68;
  TRawPtrProxy<UE::Mass::ObserverManager::FCreationContext> local_58;
  TRawPtrProxy<UE::Mass::ObserverManager::FCreationContext> local_50;
  TArrayView<FMassEntityHandle_const_,int> local_48;
  FMassArchetypeHandle local_38;
  
  if (UE::AITestSuite::TestsInProgress < 1) {
    if ((0 < (int)this->ProcessingScopeCount) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsProcessing() == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                           ,0x30c,
                           L"Synchronous API function %hs called during mass processing. Use asynchronous API instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *)(*pcVar3)();
      return pTVar8;
    }
  }
  else if (0 < (int)this->ProcessingScopeCount) {
    if (1 < (byte)LogTestableEnsures._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
    }
    pFVar7 = ::operator_new(0x18);
    local_58.Object = (FCreationContext *)0x0;
    if (pFVar7 != (FCreationContext *)0x0) {
      local_58.Object = UE::Mass::ObserverManager::FCreationContext::FCreationContext(pFVar7);
    }
    TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
    TSharedRef<UE::Mass::ObserverManager::FCreationContext,1><UE::Mass::ObserverManager::FCreationContext>
              (__return_storage_ptr__,&local_58);
    return __return_storage_ptr__;
  }
  if ((param_1->DataPtr).Object == (FMassArchetypeData *)0x0) {
    if (0 < UE::AITestSuite::TestsInProgress) {
      if (1 < (byte)LogTestableEnsures._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
      }
      pFVar7 = ::operator_new(0x18);
      local_50.Object = (FCreationContext *)0x0;
      if (pFVar7 != (FCreationContext *)0x0) {
        local_50.Object = UE::Mass::ObserverManager::FCreationContext::FCreationContext(pFVar7);
      }
      TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
      TSharedRef<UE::Mass::ObserverManager::FCreationContext,1><UE::Mass::ObserverManager::FCreationContext>
                (__return_storage_ptr__,&local_50);
      return __return_storage_ptr__;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArchetypeHandle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                       ,0x30e,L"%hs expecting a valid ArchetypeHandle");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *)(*pcVar3)();
      return pTVar8;
    }
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId784,"Mass_BatchCreateEntities",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
               ,0x310);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId784);
  }
  bVar6 = UE::Mass::Debug::FBreakpoint::CheckCreateEntityBreakpoints(param_1);
  if (bVar6) {
    UE::Mass::Debug::FBreakpoint::DebugBreak();
  }
  local_90.Index = param_3;
  local_98[0] = (StorageSelector)0x0;
  iVar1 = param_4->ArrayNum;
  this_00 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
              ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_98,&this->EntityStorage);
  local_88[0] = UE::Mass::IEntityStorageInterface::Acquire(this_00,local_90.Index,param_4);
  if (local_88[0] != local_90.Index) {
    local_78 = &local_90;
    piStack_70 = local_88;
    `FMassEntityManager::BatchReserveEntities'::__l2::<lambda_1>::operator()(&local_78);
  }
  iVar4 = local_88[0];
  pFVar2 = (param_4->AllocatorInstance).Data;
  if ((local_88[0] < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *)(*pcVar3)();
    return pTVar8;
  }
  piStack_70 = (int *)CONCAT44(piStack_70._4_4_,iVar4);
  local_68.ChunkMemorySize = 0;
  local_68.DebugName.ComparisonIndex.Value = 0;
  local_68.DebugName.Number = 0;
  local_68.DebugColor.field0_0x0 = (FColor_u_0)0x0;
  local_78 = (FMassEntityHandle *)(pFVar2 + (longlong)iVar1 * 8);
  pFVar9 = GetOrCreateSuitableArchetype
                     (this,&local_38,param_1,&param_2->SharedFragmentBitSet,
                      &param_2->ConstSharedFragmentBitSet,&local_68);
  local_48.DataPtr = local_78;
  local_48._8_8_ = piStack_70;
  InternalBatchCreateReservedEntities(this,__return_storage_ptr__,pFVar9,param_2,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.DataPtr.SharedReferenceCount.ReferenceController);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// BatchCreateRelations @ 1471f7b60

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityManager::BatchCreateRelations
          (FMassEntityManager *this,FTypeHandle param_1,TArrayView<FMassEntityHandle,int> *param_2,
          TArrayView<FMassEntityHandle,int> *param_3)

{
  int iVar1;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *pTVar2;
  TArrayView<FMassEntityHandle,int> local_38;
  TArrayView<FMassEntityHandle,int> local_28;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_18;
  
  local_38.DataPtr = param_3->DataPtr;
  local_38.ArrayNum = param_3->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_3->field_0xc;
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  pTVar2 = UE::Mass::FRelationManager::CreateRelationInstances
                     (&this->RelationManager,&local_18,param_1,&local_28,&local_38);
  iVar1 = pTVar2->ArrayNum;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return 0 < iVar1;
}

// BatchCreateReservedEntities @ 1471f7bc0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> * __thiscall
FMassEntityManager::BatchCreateReservedEntities
          (FMassEntityManager *this,
          TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *__return_storage_ptr__,
          FMassArchetypeHandle *param_1,FMassArchetypeSharedFragmentValues *param_2,
          TArrayView<FMassEntityHandle_const_,int> *param_3)

{
  code *pcVar1;
  bool bVar2;
  FCreationContext *this_00;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *pTVar3;
  FMassArchetypeHandle *pFVar4;
  TRawPtrProxy<UE::Mass::ObserverManager::FCreationContext> local_58;
  FMassArchetypeCreationParams local_50;
  TArrayView<FMassEntityHandle_const_,int> local_38;
  FMassArchetypeHandle local_28;
  
  if (UE::AITestSuite::TestsInProgress < 1) {
    if ((0 < (int)this->ProcessingScopeCount) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsProcessing() == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                           ,0x2ff,
                           L"Synchronous API function %hs called during mass processing. Use asynchronous API instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  else if (0 < (int)this->ProcessingScopeCount) {
    if (1 < (byte)LogTestableEnsures._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
    }
    this_00 = ::operator_new(0x18);
    local_58.Object = (FCreationContext *)0x0;
    if (this_00 != (FCreationContext *)0x0) {
      local_58.Object = UE::Mass::ObserverManager::FCreationContext::FCreationContext(this_00);
    }
    TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
    TSharedRef<UE::Mass::ObserverManager::FCreationContext,1><UE::Mass::ObserverManager::FCreationContext>
              (__return_storage_ptr__,&local_58);
    return __return_storage_ptr__;
  }
  if ((param_3->ArrayNum == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ReservedEntities.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x300,L"No reserved entities given to batch create."), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *)(*pcVar1)();
    return pTVar3;
  }
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId770,"Mass_BatchCreateReservedEntities",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
               ,0x302);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId770);
  }
  local_50.ChunkMemorySize = 0;
  local_50.DebugName.ComparisonIndex.Value = 0;
  local_50.DebugName.Number = 0;
  local_50.DebugColor.field0_0x0 = (FColor_u_0)0x0;
  pFVar4 = GetOrCreateSuitableArchetype
                     (this,&local_28,param_1,&param_2->SharedFragmentBitSet,
                      &param_2->ConstSharedFragmentBitSet,&local_50);
  local_38.DataPtr = param_3->DataPtr;
  local_38.ArrayNum = param_3->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_3->field_0xc;
  InternalBatchCreateReservedEntities(this,__return_storage_ptr__,pFVar4,param_2,&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.DataPtr.SharedReferenceCount.ReferenceController);
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return __return_storage_ptr__;
}

// BatchDestroyEntities @ 1471f7da0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassEntityManager::BatchDestroyEntities
          (FMassEntityManager *this,TArrayView<FMassEntityHandle_const_,int> *param_1)

{
  TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>
  *pTVar1;
  FMassEntityHandle *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FMassEntityHandle FVar4;
  code *pcVar5;
  FMassObserverManager *this_00;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  IEntityStorageInterface *pIVar10;
  FMassArchetypeData *this_01;
  FMassEntityHandle *pFVar11;
  FMassEntityHandle *pFVar12;
  StorageSelector local_res18 [8];
  StorageSelector local_res20 [8];
  StorageSelector local_78;
  StorageSelector local_77 [7];
  FMassObserverManager *local_70;
  TArrayView<FMassEntityHandle_const_,int> local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  
  if (UE::AITestSuite::TestsInProgress < 1) {
    if ((0 < (int)this->ProcessingScopeCount) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsProcessing() == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                           ,0x34c,
                           L"Synchronous API function %hs called during mass processing. Use asynchronous API instead."
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (0 < (int)this->ProcessingScopeCount) {
    if ((byte)LogTestableEnsures._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
    return;
  }
  local_70 = &this->ObserverManager;
  if (((((local_70->ActiveObserverLock).Object != (FObserverLock *)0x0) &&
       (pTVar3 = (this->ObserverManager).ActiveObserverLock.WeakReferenceCount.ReferenceController,
       pTVar3 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar3->SharedReferenceCount)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ObserverManager.IsLocked() == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x34d,
                         L"%hs: Trying to destroy entities while observers are locked - remove-observers won\'t get triggered in time to read fragments being removed."
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId847,"Mass_BatchDestroyEntities",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
               ,0x34f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId847);
  }
  local_68.DataPtr = param_1->DataPtr;
  local_68.ArrayNum = param_1->ArrayNum;
  local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
  bVar7 = UE::Mass::Debug::FBreakpoint::CheckDestroyEntityBreakpoints(&local_68);
  if (bVar7) {
    UE::Mass::Debug::FBreakpoint::DebugBreak();
  }
  this_00 = local_70;
  pFVar12 = param_1->DataPtr;
  pFVar2 = pFVar12 + param_1->ArrayNum;
  local_68.DataPtr = pFVar12;
  if (pFVar12 != pFVar2) {
    pTVar1 = &this->EntityStorage;
    do {
      FVar4 = *pFVar12;
      local_res18[0] = (StorageSelector)0x0;
      pIVar10 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
                  ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res18,pTVar1);
      cVar8 = (**(code **)((longlong)*pIVar10 + 0x48))(pIVar10,(ulonglong)FVar4 & 0xffffffff);
      if (cVar8 != '\0') {
        local_res20[0] = (StorageSelector)0x0;
        pIVar10 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
                    ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res20,pTVar1);
        iVar9 = (**(code **)((longlong)*pIVar10 + 0x40))(pIVar10,(ulonglong)FVar4 & 0xffffffff);
        if (iVar9 == FVar4.SerialNumber) {
          local_78 = (StorageSelector)0x0;
          pIVar10 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
                      ::__l2::Invokers[(this->EntityStorage).TypeIndex])(&local_78,pTVar1);
          this_01 = (FMassArchetypeData *)
                    (**(code **)((longlong)*pIVar10 + 0x10))(pIVar10,(ulonglong)FVar4 & 0xffffffff);
          if (this_01 != (FMassArchetypeData *)0x0) {
            FMassObserverManager::OnPreEntityDestroyed
                      (this_00,(FMassArchetypeCompositionDescriptor *)this_01,FVar4);
            FMassArchetypeData::RemoveEntity(this_01,FVar4);
          }
        }
      }
      pFVar12 = pFVar12 + 1;
      pFVar11 = local_68.DataPtr;
    } while (pFVar12 != pFVar2);
    do {
      FMassTrace::EntityDestroyed(*pFVar11);
      pFVar11 = pFVar11 + 1;
    } while (pFVar11 != pFVar2);
  }
  local_77[0] = (StorageSelector)0x0;
  pIVar10 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
              ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_77,&this->EntityStorage);
  local_58 = *(undefined4 *)&param_1->DataPtr;
  uStack_54 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_50 = param_1->ArrayNum;
  uStack_4c = *(undefined4 *)&param_1->field_0xc;
  (**(code **)((longlong)*pIVar10 + 0x80))(pIVar10,&local_58);
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// BatchDestroyEntityChunks @ 1471f8770

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityManager::BatchDestroyEntityChunks
          (FMassEntityManager *this,FMassArchetypeEntityCollection *param_1)

{
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_18;
  
  local_18.ArrayNum = 1;
  local_18.DataPtr = param_1;
  BatchDestroyEntityChunks(this,&local_18);
  return;
}

// BatchDestroyEntityChunks @ 1471f87b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassEntityManager::BatchDestroyEntityChunks
          (FMassEntityManager *this,TArrayView<FMassArchetypeEntityCollection_const_,int> *param_1)

{
  FMassArchetypeEntityCollection *pFVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FMassArchetypeData *pFVar4;
  undefined8 uVar5;
  TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>
  *pTVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  TSharedRef<FMassEntityManager,1> *pTVar10;
  IEntityStorageInterface *pIVar11;
  undefined4 *puVar12;
  FMassArchetypeEntityCollection *pFVar13;
  code *pcVar14;
  undefined1 auStackY_708 [32];
  undefined1 local_6d7;
  StorageSelector local_6d6;
  StorageSelector local_6d5 [5];
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_6d0;
  TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>
  *local_6c0;
  FArchetypeEntityRange *local_6b8;
  int iStack_6b0;
  undefined4 uStack_6ac;
  undefined8 local_6a8;
  int iStack_6a0;
  undefined4 uStack_69c;
  FArchetypeEntityRange *local_698;
  int iStack_690;
  undefined4 uStack_68c;
  undefined8 local_688;
  int iStack_680;
  undefined4 uStack_67c;
  TSharedRef<FMassEntityManager,1> local_678;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> local_668;
  undefined4 local_658;
  undefined4 uStack_654;
  int iStack_650;
  undefined4 uStack_64c;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> local_648;
  undefined4 local_638;
  undefined4 uStack_634;
  int iStack_630;
  undefined4 uStack_62c;
  FProcessingContext local_628;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_708;
  local_6c0 = (TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>
               *)((ulonglong)local_6c0 & 0xffffffff00000000);
  if (UE::AITestSuite::TestsInProgress < 1) {
    if ((0 < (int)this->ProcessingScopeCount) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsProcessing() == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                           ,0x374,
                           L"Synchronous API function %hs called during mass processing. Use asynchronous API instead."
                          ), bVar7)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  else if (0 < (int)this->ProcessingScopeCount) {
    if ((byte)LogTestableEnsures._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
    return;
  }
  if (((((this->ObserverManager).ActiveObserverLock.Object != (FObserverLock *)0x0) &&
       (pTVar3 = (this->ObserverManager).ActiveObserverLock.WeakReferenceCount.ReferenceController,
       pTVar3 != (TReferenceControllerBase<1> *)0x0)) && (0 < (int)pTVar3->SharedReferenceCount)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ObserverManager.IsLocked() == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x375,
                         L"%hs: Trying to destroy entities while observers are locked - remove-observers won\'t get triggered in time to read fragments being removed."
                        ), bVar7)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId887,"Mass_BatchDestroyEntityChunks",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
               ,0x377);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId887);
  }
  local_6d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6d0.ArrayNum = 0;
  local_6d0.ArrayMax = 0;
  pTVar10 = TSharedFromThis<FMassEntityManager,1>::AsShared
                      ((TSharedFromThis<FMassEntityManager,1> *)&this->_padding_,&local_678);
  local_628.EntityManager.Object = pTVar10->Object;
  local_628.EntityManager.SharedReferenceCount.ReferenceController =
       (pTVar10->SharedReferenceCount).ReferenceController;
  if (local_628.EntityManager.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_628.EntityManager.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_628.EntityManager.SharedReferenceCount.ReferenceController)->
               SharedReferenceCount + 1);
    UNLOCK();
  }
  local_628.DeltaSeconds = 0.0;
  FInstancedStruct::FInstancedStruct(&local_628.AuxData);
  local_628.CommandBuffer.Object = (FMassCommandBuffer *)0x0;
  local_628.CommandBuffer.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_628.bFlushCommandBuffer = true;
  local_628.ExecutionContextPtr = (FMassExecutionContext *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_678.SharedReferenceCount.ReferenceController);
  pFVar13 = param_1->DataPtr;
  pFVar1 = pFVar13 + param_1->ArrayNum;
  if (pFVar13 != pFVar1) {
    local_6c0 = &this->EntityStorage;
    do {
      pTVar6 = local_6c0;
      uVar5 = local_6d0._8_8_;
      iVar2 = local_6d0.ArrayMax;
      local_6d0._8_8_ = (ulonglong)(uint)local_6d0.ArrayMax << 0x20;
      if (((longlong)uVar5 < 0) && (iVar2 != 0)) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&local_6d0.AllocatorInstance,0,&local_6d0.ArrayMax);
      }
      pTVar3 = (pFVar13->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController
      ;
      pFVar4 = (pFVar13->Archetype).ArchetypeHandle.DataPtr.Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((pFVar4 == (FMassArchetypeData *)0x0) ||
         ((((pFVar13->Ranges).ArrayNum != 0 ||
           ((pFVar13->Archetype).ArchetypeHandle.DataPtr.Object != (FMassArchetypeData *)0x0)) &&
          ((pFVar4 = (pFVar13->Archetype).ArchetypeHandle.DataPtr.Object,
           pFVar4 == (FMassArchetypeData *)0x0 ||
           (pFVar4->EntityOrderVersion != (pFVar13->Archetype).HandleVersion)))))) {
        local_6d7 = 0;
        bVar8 = `FMassEntityManager::BatchDestroyEntityChunks'::__l51::<lambda_1>::operator()
                          (&local_6d7);
        if (bVar8) goto LAB_1471f8ae8;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        local_6b8 = (FArchetypeEntityRange *)(pFVar13->Ranges).AllocatorInstance.Data;
        iVar2 = (pFVar13->Ranges).ArrayNum;
        if ((iVar2 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        local_668._12_4_ = uStack_6ac;
        local_668.ArrayNum = iVar2;
        local_668.DataPtr = local_6b8;
        iStack_6b0 = iVar2;
        UE::Mass::Private::ConvertArchetypelessSubchunksIntoEntityHandles(&local_668,&local_6d0);
        local_6d6 = (StorageSelector)0x0;
        pIVar11 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
                    ::__l2::Invokers[pTVar6->TypeIndex])(&local_6d6,pTVar6);
        iVar2 = local_6d0.ArrayNum;
        pcVar14 = *(code **)((longlong)*pIVar11 + 0x90);
        local_6a8 = local_6d0.AllocatorInstance.Data;
        if ((local_6d0.ArrayNum < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        iStack_6a0 = iVar2;
        puVar12 = &local_658;
        local_658 = (undefined4)local_6a8;
        uStack_654 = local_6a8._4_4_;
        iStack_650 = iVar2;
        uStack_64c = uStack_69c;
      }
      else {
LAB_1471f8ae8:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        bVar8 = -1 < CpuChannel->Enabled;
        if (bVar8) {
          FCpuProfilerTrace::GetOrCreateSpecId
                    (&::__CpuProfilerEventSpecId409,"OnPreEntitiesDestroyed",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassObserverManager.cpp"
                     ,0x199);
          FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId409);
        }
        pTVar3 = (pFVar13->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.
                 ReferenceController;
        pFVar4 = (pFVar13->Archetype).ArchetypeHandle.DataPtr.Object;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((pFVar4 == (FMassArchetypeData *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArchetypeHandle.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                               ,0x1ff,L""), bVar9)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        FMassObserverManager::OnCompositionChanged
                  (&this->ObserverManager,pFVar13,&pFVar4->CompositionDescriptor,DestroyEntity,
                   &local_628);
        if (bVar8) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        if (((((pFVar13->Ranges).ArrayNum != 0) ||
             ((pFVar13->Archetype).ArchetypeHandle.DataPtr.Object != (FMassArchetypeData *)0x0)) &&
            ((pFVar4 = (pFVar13->Archetype).ArchetypeHandle.DataPtr.Object,
             pFVar4 == (FMassArchetypeData *)0x0 ||
             (pFVar4->EntityOrderVersion != (pFVar13->Archetype).HandleVersion)))) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("EntityCollection.IsUpToDate()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                               ,899,
                               L"Remove-type observers resulted in additional mutating of entity composition. This is not allowed."
                              ), bVar8)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pTVar3 = (pFVar13->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.
                 ReferenceController;
        pFVar4 = (pFVar13->Archetype).ArchetypeHandle.DataPtr.Object;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        if ((pFVar4 == (FMassArchetypeData *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArchetypeHandle.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                               ,0x1ff,L""), bVar8)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        local_698 = (FArchetypeEntityRange *)(pFVar13->Ranges).AllocatorInstance.Data;
        iVar2 = (pFVar13->Ranges).ArrayNum;
        if ((iVar2 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        local_648._12_4_ = uStack_68c;
        local_648.ArrayNum = iVar2;
        local_648.DataPtr = local_698;
        iStack_690 = iVar2;
        FMassArchetypeData::BatchDestroyEntityChunks(pFVar4,&local_648,&local_6d0);
        local_6d5[0] = (StorageSelector)0x0;
        pIVar11 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
                    ::__l2::Invokers[local_6c0->TypeIndex])(local_6d5,local_6c0);
        iVar2 = local_6d0.ArrayNum;
        pcVar14 = *(code **)((longlong)*pIVar11 + 0x80);
        local_688 = local_6d0.AllocatorInstance.Data;
        if ((local_6d0.ArrayNum < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        iStack_680 = iVar2;
        puVar12 = &local_638;
        local_638 = (undefined4)local_688;
        uStack_634 = local_688._4_4_;
        iStack_630 = iVar2;
        uStack_62c = uStack_67c;
      }
      (*pcVar14)(pIVar11,puVar12);
      pFVar13 = pFVar13 + 1;
    } while (pFVar13 != pFVar1);
  }
  UE::Mass::FProcessingContext::~FProcessingContext(&local_628);
  if (local_6d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6d0.AllocatorInstance.Data);
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// BatchGroupEntities @ 1471f8d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassEntityManager::BatchGroupEntities
          (FMassEntityManager *this,FArchetypeGroupHandle param_1,
          TArrayView<FMassArchetypeEntityCollection_const_,int> *param_2)

{
  uint uVar1;
  TReferenceControllerBase<1> *pTVar2;
  FMassArchetypeData *pFVar3;
  undefined1 *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  FMassEntityManager *pFVar11;
  bool bVar12;
  char cVar13;
  FArchetypeGroupType FVar14;
  FSparseArrayAllocationInfo *pFVar15;
  IEntityStorageInterface *pIVar16;
  ForElementType<unsigned_int> FVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  FArchetypeGroupType FVar20;
  undefined1 *puVar21;
  ForAnyElementType FVar22;
  FMassArchetypeEntityCollection *pFVar23;
  FArchetypeGroupID FStackX_14;
  undefined1 auStackY_138 [32];
  undefined1 local_f8;
  StorageSelector local_f7;
  StorageSelector local_f6 [2];
  uint local_f4;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_f0;
  FMassEntityManager *local_e0;
  FMassArchetypeEntityCollection *local_d8;
  TSharedPtr<FMassArchetypeData,1> local_d0;
  FMassArchetypeHandle local_c0;
  undefined8 local_b0;
  FScriptContainerElement *pFStack_a8;
  FSparseArrayAllocationInfo local_a0;
  TSparseArrayBase<4,4,FDefaultSparseArrayAllocator> local_90;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_e0 = this;
  if (UE::AITestSuite::TestsInProgress < 1) {
    if ((0 < (int)this->ProcessingScopeCount) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsProcessing() == false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                            ,0x394,
                            L"Synchronous API function %hs called during mass processing. Use asynchronous API instead."
                           ), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (0 < (int)this->ProcessingScopeCount) {
    if ((byte)LogTestableEnsures._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
    return;
  }
  uVar8 = _UNK_150631d98;
  uVar6 = ___xmm_00000000ffffffff0000008000000000;
  FVar20 = param_1.GroupType.Identifier;
  if ((FVar20.Identifier == 0xffffffff) ||
     (FStackX_14 = param_1.GroupID.ID, FStackX_14.ID == 0xffffffff)) {
    if (2 < (byte)LogMass._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
    }
  }
  else {
    pFVar23 = param_2->DataPtr;
    local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f0.ArrayNum = 0;
    local_f0.ArrayMax = 0;
    local_d8 = pFVar23 + param_2->ArrayNum;
    if (pFVar23 != local_d8) {
      local_f4 = FVar20.Identifier & 0x1f;
      do {
        pTVar2 = (pFVar23->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.
                 ReferenceController;
        pFVar3 = (pFVar23->Archetype).ArchetypeHandle.DataPtr.Object;
        if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        if (pFVar3 != (FMassArchetypeData *)0x0) {
          pTVar2 = (pFVar23->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.
                   ReferenceController;
          pFVar3 = (pFVar23->Archetype).ArchetypeHandle.DataPtr.Object;
          if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
            UNLOCK();
          }
          if ((pFVar3 == (FMassArchetypeData *)0x0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArchetypeHandle.IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                                  ,0x1ff,L""), bVar12)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
          if (FStackX_14.ID != 0xffffffff) {
            if (((int)FVar20.Identifier < 0) ||
               (*(int *)&(pFVar3->Groups).IDContainer.field_0x28 <= (int)FVar20.Identifier)) {
LAB_1471f8f7a:
              bVar12 = false;
            }
            else {
              if ((*(int *)&(pFVar3->Groups).IDContainer.field_0x28 <= (int)FVar20.Identifier) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Index>=0 && Index<NumBits",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                      ,0x5c6,L""), bVar12)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              puVar4 = *(undefined1 **)&(pFVar3->Groups).IDContainer.field_0x20;
              puVar21 = &(pFVar3->Groups).IDContainer.field_0x10;
              if (puVar4 != (undefined1 *)0x0) {
                puVar21 = puVar4;
              }
              FVar14.Identifier = FVar20.Identifier;
              if ((int)FVar20.Identifier < 0) {
                FVar14.Identifier = FVar20.Identifier + 0x1f;
              }
              if ((((*(uint *)(puVar21 + (longlong)((int)FVar14.Identifier >> 5) * 4) >>
                     (local_f4 & 0x1f) & 1) == 0) ||
                  (uVar1 = *(uint *)(*(longlong *)&(pFVar3->Groups).IDContainer +
                                    (longlong)(int)FVar20.Identifier * 8), uVar1 == 0xffffffff)) ||
                 (uVar1 != FStackX_14.ID)) goto LAB_1471f8f7a;
              bVar12 = true;
            }
            if (bVar12) goto LAB_1471f91c6;
          }
          uVar9 = _UNK_150631d98;
          uVar7 = ___xmm_00000000ffffffff0000008000000000;
          local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_90.Data.ArrayNum = 0;
          local_90.Data.ArrayMax = 0;
          local_90.AllocationFlags.AllocatorInstance.SecondaryData =
               (ForElementType<unsigned_int>)0x0;
          ___xmm_00000000ffffffff0000008000000000 = (int)uVar6;
          _UNK_150631d94 = SUB84(uVar6,4);
          local_90.AllocationFlags.NumBits = ___xmm_00000000ffffffff0000008000000000;
          local_90.AllocationFlags.MaxBits = _UNK_150631d94;
          _UNK_150631d98 = (int)uVar8;
          _UNK_150631d9c = SUB84(uVar8,4);
          local_90.FirstFreeIndex = _UNK_150631d98;
          local_90.NumFreeIndices = _UNK_150631d9c;
          ___xmm_00000000ffffffff0000008000000000 = uVar7;
          _UNK_150631d98 = uVar9;
          TSparseArray<UE::Mass::FArchetypeGroupID,FDefaultSparseArrayAllocator>::operator=
                    ((TSparseArray<UE::Mass::FArchetypeGroupID,FDefaultSparseArrayAllocator> *)
                     &local_90,&(pFVar3->Groups).IDContainer);
          if (((int)FVar20.Identifier < 0) ||
             (local_90.AllocationFlags.NumBits <= (int)FVar20.Identifier)) {
LAB_1471f8fec:
            if (((int)FVar20.Identifier < 0) ||
               (local_90.AllocationFlags.NumBits <= (int)FVar20.Identifier)) {
LAB_1471f9027:
              pFVar15 = TSparseArrayBase<4,4,FDefaultSparseArrayAllocator>::InsertUninitialized
                                  (&local_90,&local_a0,FVar20.Identifier);
              local_b0 = *(undefined8 *)pFVar15;
              pFStack_a8 = pFVar15->Pointer;
              pFVar19 = pFVar15->Pointer;
            }
            else {
              FVar17 = (ForElementType<unsigned_int>)&local_90.AllocationFlags;
              if (local_90.AllocationFlags.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar17 = local_90.AllocationFlags.AllocatorInstance.SecondaryData;
              }
              FVar14.Identifier = FVar20.Identifier;
              if ((int)FVar20.Identifier < 0) {
                FVar14.Identifier = FVar20.Identifier + 0x1f;
              }
              if ((*(uint *)((longlong)FVar17 + (longlong)((int)FVar14.Identifier >> 5) * 4) >>
                   (local_f4 & 0x1f) & 1) == 0) goto LAB_1471f9027;
              pFVar19 = local_90.Data.AllocatorInstance.Data + (longlong)(int)FVar20.Identifier * 8;
              pFStack_a8 = pFVar19;
            }
            if (pFVar19 != (FScriptContainerElement *)0x0) {
              *(uint *)pFVar19 = FStackX_14.ID;
            }
          }
          else {
            FVar17 = (ForElementType<unsigned_int>)&local_90.AllocationFlags;
            if (local_90.AllocationFlags.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_int>)0x0) {
              FVar17 = local_90.AllocationFlags.AllocatorInstance.SecondaryData;
            }
            FVar14.Identifier = FVar20.Identifier;
            if ((int)FVar20.Identifier < 0) {
              FVar14.Identifier = FVar20.Identifier + 0x1f;
            }
            if ((*(uint *)((longlong)FVar17 + (longlong)((int)FVar14.Identifier >> 5) * 4) >>
                 (local_f4 & 0x1f) & 1) == 0) goto LAB_1471f8fec;
            *(uint *)(local_90.Data.AllocatorInstance.Data + (longlong)(int)FVar20.Identifier * 8) =
                 FStackX_14.ID;
          }
          local_d0.Object = (pFVar23->Archetype).ArchetypeHandle.DataPtr.Object;
          local_d0.SharedReferenceCount.ReferenceController =
               (pFVar23->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController
          ;
          if (local_d0.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          InternalCreateSimilarArchetype(local_e0,&local_c0,&local_d0,(FArchetypeGroups *)&local_90)
          ;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_d0.SharedReferenceCount.ReferenceController);
          uVar7 = local_f0._8_8_;
          iVar10 = local_f0.ArrayMax;
          local_f0._8_8_ = (ulonglong)(uint)local_f0.ArrayMax << 0x20;
          if (((longlong)uVar7 < 0) && (iVar10 != 0)) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,0,&local_f0.AllocatorInstance,0,&local_f0.ArrayMax);
          }
          FMassArchetypeData::BatchMoveEntitiesToAnotherArchetype
                    (pFVar3,pFVar23,local_c0.DataPtr.Object,&local_f0,
                     (TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_>
                      *)0x0,(FMassArchetypeSharedFragmentValues *)0x0,
                     (TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                      *)0x0,(TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                             *)0x0);
          pFVar11 = local_e0;
          iVar10 = local_f0.ArrayNum;
          uVar18 = (ulonglong)local_f0.ArrayNum;
          pFVar19 = local_f0.AllocatorInstance.Data + uVar18 * 8;
          FVar22.Data = local_f0.AllocatorInstance.Data;
          while( true ) {
            if ((int)uVar18 != iVar10) {
              local_f8 = 0;
              `TCheckedPointerIterator<FMassEntityHandle,int,0>::operator!='::__l2::<lambda_1>::
              operator()(&local_f8);
            }
            if (FVar22.Data == pFVar19) break;
            local_f7 = (StorageSelector)0x0;
            pIVar16 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
                        ::__l2::Invokers[(pFVar11->EntityStorage).TypeIndex])
                                (&local_f7,&pFVar11->EntityStorage);
            cVar13 = (**(code **)((longlong)*pIVar16 + 0x48))(pIVar16,*(undefined4 *)FVar22.Data);
            if ((cVar13 == '\0') &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("GetEntityStorageInterface().IsValidIndex(Entity.Index)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                                    ,0x3b2,L""), bVar12)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_f6[0] = (StorageSelector)0x0;
            pIVar16 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
                        ::__l2::Invokers[(pFVar11->EntityStorage).TypeIndex])
                                (local_f6,&pFVar11->EntityStorage);
            (**(code **)((longlong)*pIVar16 + 0x28))(pIVar16,*(undefined4 *)FVar22.Data,&local_c0);
            uVar18 = local_f0._8_8_ & 0xffffffff;
            FVar22.Data = FVar22.Data + 8;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_c0.DataPtr.SharedReferenceCount.ReferenceController);
          TSparseArray<UE::Mass::FArchetypeGroupID,FDefaultSparseArrayAllocator>::
          ~TSparseArray<UE::Mass::FArchetypeGroupID,FDefaultSparseArrayAllocator>
                    ((TSparseArray<UE::Mass::FArchetypeGroupID,FDefaultSparseArrayAllocator> *)
                     &local_90);
        }
LAB_1471f91c6:
        pFVar23 = pFVar23 + 1;
      } while (pFVar23 != local_d8);
    }
    if (local_f0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.AllocatorInstance.Data);
    }
  }
  return;
}

// BatchGroupEntities @ 1471f9250

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityManager::BatchGroupEntities
          (FMassEntityManager *this,FArchetypeGroupHandle param_1,
          TArrayView<FMassEntityHandle_const_,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> local_48;
  FMassArchetypeEntityCollection *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TArrayView<FMassEntityHandle_const_,int> local_28;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_18;
  
  local_28.DataPtr = param_2->DataPtr;
  local_28.ArrayNum = param_2->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  UE::Mass::Utils::CreateEntityCollections(this,&local_28,FoldDuplicates,&local_48);
  iStack_30 = local_48.ArrayNum;
  local_38 = (FMassArchetypeEntityCollection *)local_48.AllocatorInstance.Data;
  if (local_48.ArrayNum < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18._12_4_ = uStack_2c;
  local_18.ArrayNum = iStack_30;
  local_18.DataPtr = local_38;
  BatchGroupEntities(this,param_1,&local_18);
  DestructItems<FMassArchetypeEntityCollection,int>
            ((FMassArchetypeEntityCollection *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
  if ((FMassArchetypeEntityCollection *)local_48.AllocatorInstance.Data !=
      (FMassArchetypeEntityCollection *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return;
}

// BatchReserveEntities @ 1471fa770

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TArrayView<FMassEntityHandle_const_,int> * __thiscall
FMassEntityManager::BatchReserveEntities
          (FMassEntityManager *this,TArrayView<FMassEntityHandle_const_,int> *__return_storage_ptr__
          ,int param_1,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  IEntityStorageInterface *this_00;
  TArrayView<FMassEntityHandle_const_,int> *pTVar6;
  StorageSelector local_res8 [8];
  int local_res10 [2];
  int local_res18 [2];
  int *local_28;
  int *local_20;
  
  iVar1 = param_2->ArrayNum;
  local_res8[0] = (StorageSelector)0x0;
  local_res18[0] = param_1;
  this_00 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
              ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res8,&this->EntityStorage);
  local_res10[0] = UE::Mass::IEntityStorageInterface::Acquire(this_00,local_res18[0],param_2);
  if (local_res10[0] != local_res18[0]) {
    local_28 = local_res18;
    local_20 = local_res10;
    `FMassEntityManager::BatchReserveEntities'::__l2::<lambda_1>::operator()(&local_28);
  }
  iVar4 = local_res10[0];
  pFVar2 = (param_2->AllocatorInstance).Data;
  if (local_res10[0] < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TArrayView<FMassEntityHandle_const_,int> *)(*pcVar3)();
      return pTVar6;
    }
  }
  __return_storage_ptr__->ArrayNum = iVar4;
  __return_storage_ptr__->DataPtr = (FMassEntityHandle *)(pFVar2 + (longlong)iVar1 * 8);
  return __return_storage_ptr__;
}

// BatchReserveEntities @ 1471fa840

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

int __thiscall
FMassEntityManager::BatchReserveEntities
          (FMassEntityManager *this,TArrayView<FMassEntityHandle,int> *param_1)

{
  int iVar1;
  IEntityStorageInterface *pIVar2;
  StorageSelector local_res8 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_res8[0] = (StorageSelector)0x0;
  pIVar2 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res8,&this->EntityStorage);
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->ArrayNum;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x78))(pIVar2,&local_18);
  return iVar1;
}

// BatchSetEntityFragmentValues @ 1471fa890

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityManager::BatchSetEntityFragmentValues
          (FMassEntityManager *this,FMassArchetypeEntityCollection *param_1,
          TArrayView<FInstancedStruct_const_,int> *param_2)

{
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_28;
  TArrayView<FInstancedStruct_const_,int> local_18;
  
  if (param_2->ArrayNum != 0) {
    local_18.DataPtr = param_2->DataPtr;
    local_18.ArrayNum = param_2->ArrayNum;
    local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
    local_28.ArrayNum = 1;
    local_28.DataPtr = param_1;
    BatchSetEntityFragmentValues(this,&local_28,&local_18);
  }
  return;
}

// BatchSetEntityFragmentValues @ 1471fa8e0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassEntityManager::BatchSetEntityFragmentValues
          (FMassEntityManager *this,TArrayView<FMassArchetypeEntityCollection_const_,int> *param_1,
          TArrayView<FInstancedStruct_const_,int> *param_2)

{
  FMassArchetypeEntityCollection *pFVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FMassArchetypeData *this_00;
  FArchetypeEntityRange *pFVar4;
  code *pcVar5;
  bool bVar6;
  FInstancedStruct *pFVar7;
  FMassArchetypeEntityCollection *pFVar8;
  FInstancedStruct *pFVar9;
  bool bVar10;
  undefined4 uStack_3c;
  TArrayView<FMassArchetypeEntityCollection::FArchetypeEntityRange_const_,int> local_38;
  
  if (UE::AITestSuite::TestsInProgress < 1) {
    if ((0 < (int)this->ProcessingScopeCount) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsProcessing() == false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                            ,0x74d,
                            L"Synchronous API function %hs called during mass processing. Use asynchronous API instead."
                           ), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (0 < (int)this->ProcessingScopeCount) {
    if ((byte)LogTestableEnsures._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
    return;
  }
  if (param_2->ArrayNum != 0) {
    pFVar8 = param_1->DataPtr;
    pFVar1 = pFVar8 + param_1->ArrayNum;
    for (; pFVar8 != pFVar1; pFVar8 = pFVar8 + 1) {
      bVar10 = -1 < CpuChannel->Enabled;
      if (bVar10) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1878,"Mass_BatchSetEntityFragmentValues",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                   ,0x756);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1878);
      }
      pTVar3 = (pFVar8->Archetype).ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController;
      this_00 = (pFVar8->Archetype).ArchetypeHandle.DataPtr.Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      if ((this_00 == (FMassArchetypeData *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Archetype",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                             ,0x759,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar7 = param_2->DataPtr;
      pFVar9 = pFVar7 + param_2->ArrayNum;
      for (; pFVar7 != pFVar9; pFVar7 = pFVar7 + 1) {
        pFVar4 = (FArchetypeEntityRange *)(pFVar8->Ranges).AllocatorInstance.Data;
        iVar2 = (pFVar8->Ranges).ArrayNum;
        if ((iVar2 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_38._12_4_ = uStack_3c;
        local_38.ArrayNum = iVar2;
        local_38.DataPtr = pFVar4;
        FMassArchetypeData::SetFragmentData(this_00,&local_38,pFVar7);
      }
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
  }
  return;
}

// BatchSetEntityFragmentsValues @ 1471fab00

void __cdecl
FMassEntityManager::BatchSetEntityFragmentsValues
          (FMassArchetypeEntityCollection *param_1,TArrayView<FInstancedStruct_const_,int> *param_2)

{
  undefined1 local_res18 [16];
  
  `FMassEntityManager::BatchSetEntityFragmentsValues'::__l2::<lambda_1>::operator()(local_res18);
  return;
}

// BatchSetEntityFragmentsValues @ 1471fab10

void __cdecl
FMassEntityManager::BatchSetEntityFragmentsValues
          (TArrayView<FMassArchetypeEntityCollection_const_,int> *param_1,
          TArrayView<FInstancedStruct_const_,int> *param_2)

{
  undefined1 local_res18 [16];
  
  `FMassEntityManager::BatchSetEntityFragmentsValues'::__l2::<lambda_1>::operator()(local_res18);
  return;
}

// BuildEntity @ 1471fd520

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassEntityManager::BuildEntity
          (FMassEntityManager *this,FMassEntityHandle param_1,FMassArchetypeHandle *param_2,
          FMassArchetypeSharedFragmentValues *param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (UE::AITestSuite::TestsInProgress < 1) {
    if ((0 < (int)this->ProcessingScopeCount) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsProcessing() == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                           ,0x27d,
                           L"Synchronous API function %hs called during mass processing. Use asynchronous API instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (0 < (int)this->ProcessingScopeCount) {
    if ((byte)LogTestableEnsures._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
    return;
  }
  bVar2 = IsEntityBuilt(this,param_1);
  if ((bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsEntityBuilt(Entity)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x27e,L"Expecting an entity that is not already built"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (((param_2->DataPtr).Object == (FMassArchetypeData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArchetypeHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x27f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  InternalBuildEntity(this,param_1,param_2,param_3);
  return;
}

// BuildEntity @ 1471fd640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassEntityManager::BuildEntity
          (FMassEntityManager *this,FMassEntityHandle param_1,
          TArrayView<FInstancedStruct_const_,int> *param_2,
          FMassArchetypeSharedFragmentValues *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UStruct *pUVar5;
  IEntityStorageInterface *pIVar6;
  FMassArchetypeData *this_00;
  FScriptContainerElement *pFVar7;
  UStruct *pUVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStackY_208 [32];
  undefined1 local_1d8;
  undefined1 local_1d7;
  StorageSelector local_1d6 [2];
  FMassArchetypeCreationParams local_1d4;
  UStruct *local_1c0;
  UStruct *local_1b8;
  TArrayView<FInstancedStruct_const_,int> *local_1b0;
  FMassArchetypeHandle local_1a8;
  TArrayView<FInstancedStruct_const_,int> local_198;
  TArrayView<FInstancedStruct_const_,int> local_188;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_178;
  undefined1 local_168 [16];
  void *pvStack_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined1 local_148 [16];
  void *pvStack_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 local_128 [16];
  void *pvStack_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 local_108 [16];
  void *pvStack_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 local_e8 [48];
  void *local_b8;
  void *local_98;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_1b0 = param_2;
  if (UE::AITestSuite::TestsInProgress < 1) {
    if ((0 < (int)this->ProcessingScopeCount) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsProcessing() == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                           ,0x286,
                           L"Synchronous API function %hs called during mass processing. Use asynchronous API instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (0 < (int)this->ProcessingScopeCount) {
    if ((byte)LogTestableEnsures._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
    return;
  }
  if ((param_2->ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FragmentInstanceList.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x287,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = IsEntityBuilt(this,param_1);
  if ((bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsEntityBuilt(Entity)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x288,L"Expecting an entity that is not already built"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((param_3->bSorted == false) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedFragmentValues.IsSorted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x28a,L"Expecting shared fragment values to be previously sorted"), bVar3)
     ) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_ec = 0x80;
  local_108._0_8_ = 0;
  local_f0 = 0;
  local_128._0_8_ = 0;
  local_110 = 0;
  local_148._0_8_ = 0;
  local_130 = 0;
  local_168._0_8_ = 0;
  local_150 = 0;
  local_108._8_8_ = 0;
  pvStack_f8 = (void *)0x0;
  local_128._8_8_ = 0;
  pvStack_118 = (void *)0x0;
  local_10c = 0x80;
  local_148._8_8_ = 0;
  pvStack_138 = (void *)0x0;
  local_12c = 0x80;
  local_168._8_8_ = 0;
  pvStack_158 = (void *)0x0;
  local_14c = 0x80;
  local_198.DataPtr = param_2->DataPtr;
  local_198.ArrayNum = param_2->ArrayNum;
  local_198._12_4_ = *(undefined4 *)&param_2->field_0xc;
  FMassArchetypeCompositionDescriptor::FMassArchetypeCompositionDescriptor
            ((FMassArchetypeCompositionDescriptor *)local_e8,&local_198,
             (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)
             local_168,
             (TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>
              *)local_148,
             (TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
              *)local_128,
             (TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
              *)local_108);
  if (pvStack_158 != (void *)0x0) {
    FMemory::Free(pvStack_158);
  }
  if (pvStack_138 != (void *)0x0) {
    FMemory::Free(pvStack_138);
  }
  if (pvStack_118 != (void *)0x0) {
    FMemory::Free(pvStack_118);
  }
  if (pvStack_f8 != (void *)0x0) {
    FMemory::Free(pvStack_f8);
  }
  iVar1 = (param_3->ConstSharedFragments).ArrayNum;
  pFVar7 = (param_3->ConstSharedFragments).AllocatorInstance.Data;
  pFVar9 = pFVar7 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((param_3->ConstSharedFragments).ArrayNum != iVar1) {
      local_1d8 = 0;
      `TCheckedPointerIterator<FConstSharedStruct_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1d8);
    }
    if (pFVar7 == pFVar9) break;
    pUVar8 = (UStruct *)0x0;
    if (*(undefined8 **)pFVar7 != (undefined8 *)0x0) {
      pUVar8 = (UStruct *)**(undefined8 **)pFVar7;
    }
    pUVar5 = TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
             ::GetBaseUStruct();
    if (pUVar5 == (UStruct *)0x0) {
LAB_1471fd8b3:
      local_1c0 = pUVar8;
      bVar3 = `TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
              ::Add'::__l6::<lambda_1>::operator()(&local_1c0);
      if (bVar3) goto LAB_1471fd8c6;
    }
    else {
      iVar4 = (int)pUVar5->_padding_;
      if (((int)pUVar8->_padding_ < iVar4) ||
         ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar4 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_1471fd8b3;
LAB_1471fd8c6:
      iVar4 = FStructTracker::FindOrAddStructTypeIndex
                        (&FMassConstSharedFragmentBitSetStructTrackerWrapper::StructTracker,pUVar8);
      FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)local_68,iVar4);
    }
    pFVar7 = pFVar7 + 0x10;
  }
  iVar1 = (param_3->SharedFragments).ArrayNum;
  pFVar7 = (param_3->SharedFragments).AllocatorInstance.Data;
  pFVar9 = pFVar7 + (longlong)iVar1 * 0x10;
  do {
    if ((param_3->SharedFragments).ArrayNum != iVar1) {
      local_1d7 = 0;
      `TCheckedPointerIterator<FSharedStruct_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_1d7);
    }
    if (pFVar7 == pFVar9) {
      local_1d4.ChunkMemorySize = 0;
      local_1d4.DebugName.ComparisonIndex.Value = 0;
      local_1d4.DebugName.Number = 0;
      local_1d4.DebugColor.field0_0x0 = (FColor_u_0)0x0;
      CreateArchetype(this,&local_1a8,(FMassArchetypeCompositionDescriptor *)local_e8,&local_1d4);
      if ((local_1a8.DataPtr.Object == (FMassArchetypeData *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArchetypeHandle.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                             ,0x296,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FMassObserverManager::GetOrMakeCreationContext(&this->ObserverManager,&local_178);
      InternalBuildEntity(this,param_1,&local_1a8,param_3);
      local_1d6[0] = (StorageSelector)0x0;
      pIVar6 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
                 ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_1d6,&this->EntityStorage);
      this_00 = (FMassArchetypeData *)
                (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6,(ulonglong)param_1 & 0xffffffff);
      if ((this_00 == (FMassArchetypeData *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentArchetype",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                             ,0x29e,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_188.DataPtr = local_1b0->DataPtr;
      local_188.ArrayNum = local_1b0->ArrayNum;
      local_188._12_4_ = *(undefined4 *)&local_1b0->field_0xc;
      FMassArchetypeData::SetFragmentsData(this_00,param_1,&local_188);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_178.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1a8.DataPtr.SharedReferenceCount.ReferenceController);
      if ((void *)local_68._16_8_ != (void *)0x0) {
        FMemory::Free((void *)local_68._16_8_);
      }
      if ((void *)local_88._16_8_ != (void *)0x0) {
        FMemory::Free((void *)local_88._16_8_);
      }
      if (local_98 != (void *)0x0) {
        FMemory::Free(local_98);
      }
      if (local_b8 != (void *)0x0) {
        FMemory::Free(local_b8);
      }
      if ((void *)local_e8._16_8_ != (void *)0x0) {
        FMemory::Free((void *)local_e8._16_8_);
      }
      return;
    }
    pUVar8 = (UStruct *)0x0;
    if (*(undefined8 **)pFVar7 != (undefined8 *)0x0) {
      pUVar8 = (UStruct *)**(undefined8 **)pFVar7;
    }
    pUVar5 = TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
             ::GetBaseUStruct();
    if (pUVar5 == (UStruct *)0x0) {
LAB_1471fd953:
      local_1b8 = pUVar8;
      bVar3 = `TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
              ::Add'::__l6::<lambda_1>::operator()(&local_1b8);
      if (bVar3) goto LAB_1471fd966;
    }
    else {
      iVar4 = (int)pUVar5->_padding_;
      if (((int)pUVar8->_padding_ < iVar4) ||
         ((longlong *)*(undefined1 **)(pUVar8->_padding_ + (longlong)iVar4 * 8) !=
          &pUVar5->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_1471fd953;
LAB_1471fd966:
      iVar4 = FStructTracker::FindOrAddStructTypeIndex
                        (&FMassSharedFragmentBitSetStructTrackerWrapper::StructTracker,pUVar8);
      FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)local_88,iVar4);
    }
    pFVar7 = pFVar7 + 0x10;
  } while( true );
}

// CreateArchetype @ 147207280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FMassArchetypeHandle * __thiscall
FMassEntityManager::CreateArchetype
          (FMassEntityManager *this,FMassArchetypeHandle *__return_storage_ptr__,
          FMassArchetypeCompositionDescriptor *param_1,FMassArchetypeCreationParams *param_2)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  FMassArchetypeHandle *pFVar11;
  FMassArchetypeData *pFVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_> *pTVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 *puVar18;
  uint uVar19;
  ForElementType<FMassArchetypeFragmentConfig> FVar20;
  FScriptContainerElement *pFVar21;
  ForElementType<FMassArchetypeFragmentConfig> FVar22;
  FScriptContainerElement *pFVar23;
  undefined1 auStackY_198 [32];
  undefined1 local_148 [16];
  FMassArchetypeData *local_138;
  TReferenceControllerBase<1> *pTStack_130;
  uint local_128;
  FLLMScope local_124;
  FMassArchetypeData *local_120;
  TReferenceControllerBase<1> *local_118;
  int local_110 [2];
  FMassArchetypeCompositionDescriptor *local_108;
  uint *local_100;
  FMassArchetypeHandle *local_f8;
  FMemScope local_f0;
  FMassArchetypeHandle local_e8;
  undefined1 local_d8 [24];
  undefined8 uStack_c0;
  void *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  FArchetypeGroups local_a0;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_108 = param_1;
  local_f8 = __return_storage_ptr__;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name377,L"Mass/EntityManager");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(&local_124,LLMScope_Name377,false,None,Default,true);
  FMemScope::FMemScope(&local_f0,&LLMScope_Name377,true);
  uVar5 = _UNK_150631d98;
  uVar4 = ___xmm_00000000ffffffff0000008000000000;
  local_d8._16_8_ = 0;
  uStack_c0 = 0;
  local_d8._0_8_ = (FScriptContainerElement *)0x0;
  local_d8._8_8_ = 0;
  local_b8 = (void *)0x0;
  local_b0 = ___xmm_00000000ffffffff0000008000000000;
  uStack_a8 = _UNK_150631d98;
  uVar8 = UE::Mass::GetTypeHash((FArchetypeGroups *)local_d8);
  uVar9 = FMassArchetypeCompositionDescriptor::CalculateHash
                    (&param_1->Fragments,&param_1->Tags,&param_1->ChunkFragments,
                     &param_1->SharedFragments,&param_1->ConstSharedFragments);
  iVar10 = SUB84(local_d8._8_8_,4);
  local_d8._8_8_ = local_d8._8_8_ & 0xffffffff00000000;
  uVar17 = uVar9 - uVar8 ^ uVar8 >> 0xd;
  uVar9 = (-0x61c88647 - uVar8) - uVar17 ^ uVar17 << 8;
  uVar19 = (uVar8 - uVar9) - uVar17 ^ uVar9 >> 0xd;
  uVar17 = (uVar17 - uVar19) - uVar9 ^ uVar19 >> 0xc;
  uVar8 = (uVar9 - uVar17) - uVar19 ^ uVar17 << 0x10;
  uVar19 = (uVar19 - uVar8) - uVar17 ^ uVar8 >> 5;
  uVar9 = (uVar17 - uVar19) - uVar8 ^ uVar19 >> 3;
  uVar8 = (uVar8 - uVar9) - uVar19 ^ uVar9 << 10;
  local_128 = (uVar19 - uVar8) - uVar9 ^ uVar8 >> 0xf;
  if (iVar10 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)local_d8,0,(int *)(local_d8 + 0xc));
  }
  uVar8 = local_b0._4_4_;
  uStack_a8 = 0xffffffff;
  local_b0 = (ulonglong)local_b0._4_4_ << 0x20;
  if (0x80 < uVar8) {
    local_b0 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10),0);
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  if ((FScriptContainerElement *)local_d8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_d8._0_8_);
  }
  if (*(int *)&(this->FragmentHashToArchetypeMap).field_0x8 !=
      *(int *)&(this->FragmentHashToArchetypeMap).field_0x34) {
    puVar18 = *(undefined1 **)&(this->FragmentHashToArchetypeMap).field_0x40;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = &(this->FragmentHashToArchetypeMap).field_0x38;
    }
    uVar8 = *(uint *)(puVar18 +
                     (ulonglong)
                     (*(int *)&(this->FragmentHashToArchetypeMap).field_0x48 - 1U & local_128) * 4);
    if (uVar8 != 0xffffffff) {
      do {
        puVar16 = (uint *)((longlong)(int)uVar8 * 0x20 +
                          *(longlong *)&this->FragmentHashToArchetypeMap);
        if (*puVar16 == local_128) {
          if (puVar16 != (uint *)0x0) goto LAB_1472074eb;
          break;
        }
        uVar8 = puVar16[6];
      } while (uVar8 != 0xffffffff);
    }
  }
  local_100 = &local_128;
  TSet<TTuple<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&this->FragmentHashToArchetypeMap,(uint)local_110,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)local_128,(bool *)&local_100);
  puVar16 = (uint *)((longlong)local_110[0] * 0x20 + *(longlong *)&this->FragmentHashToArchetypeMap)
  ;
LAB_1472074eb:
  pFVar1 = (ForAnyElementType *)(puVar16 + 2);
  local_138 = (FMassArchetypeData *)0x0;
  pTStack_130 = (TReferenceControllerBase<1> *)0x0;
  uVar8 = puVar16[4];
  pFVar21 = pFVar1->Data;
  pFVar23 = pFVar21 + (longlong)(int)uVar8 * 0x10;
  while( true ) {
    if (puVar16[4] != uVar8) {
      local_148[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FMassArchetypeData,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_148);
    }
    if (pFVar21 == pFVar23) goto LAB_1472076b1;
    if ((*(longlong *)pFVar21 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      pFVar11 = (FMassArchetypeHandle *)(*pcVar3)();
      return pFVar11;
    }
    local_a0.IDContainer._0_8_ = 0;
    local_a0.IDContainer._16_8_ = 0;
    local_a0.IDContainer._24_8_ = 0;
    local_a0.IDContainer._8_8_ = 0;
    local_a0.IDContainer._32_8_ = 0;
    local_a0.IDContainer._40_8_ = uVar4;
    local_a0.IDContainer._48_8_ = uVar5;
    bVar7 = FMassArchetypeData::IsEquivalent(*(FMassArchetypeData **)pFVar21,local_108,&local_a0);
    TSparseArray<UE::Mass::FArchetypeGroupID,FDefaultSparseArrayAllocator>::
    ~TSparseArray<UE::Mass::FArchetypeGroupID,FDefaultSparseArrayAllocator>(&local_a0.IDContainer);
    if (bVar7) break;
    pFVar21 = pFVar21 + 0x10;
  }
  if (param_2->DebugName != (FName)0x0) {
    if ((*(longlong *)pFVar21 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      pFVar11 = (FMassArchetypeHandle *)(*pcVar3)();
      return pFVar11;
    }
    TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)(*(longlong *)pFVar21 + 0x2c0),
               &param_2->DebugName);
  }
  if (0 < param_2->ChunkMemorySize) {
    if ((*(longlong *)pFVar21 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      pFVar11 = (FMassArchetypeHandle *)(*pcVar3)();
      return pFVar11;
    }
    if (((longlong)param_2->ChunkMemorySize != (ulonglong)*(uint *)(*(longlong *)pFVar21 + 700)) &&
       (2 < (byte)LogMass._0_1_)) {
      if ((*(longlong *)pFVar21 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FMassArchetypeHandle *)(*pcVar3)();
        return pFVar11;
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
    }
  }
  pTVar6 = pTStack_130;
  pTStack_130 = *(TReferenceControllerBase<1> **)(pFVar21 + 8);
  local_138 = *(FMassArchetypeData **)pFVar21;
  if (pTStack_130 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_130->SharedReferenceCount = (atomic<int>)((int)pTStack_130->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
LAB_1472076b1:
  if (local_138 == (FMassArchetypeData *)0x0) {
    this->ArchetypeDataVersion = this->ArchetypeDataVersion + 1;
    pFVar12 = ::operator_new(0x2d8);
    if (pFVar12 == (FMassArchetypeData *)0x0) {
      pFVar12 = (FMassArchetypeData *)0x0;
    }
    else {
      pFVar12 = FMassArchetypeData::FMassArchetypeData(pFVar12,param_2);
    }
    puVar14 = (undefined8 *)0x0;
    FMassArchetypeData::Initialize(pFVar12,this,local_108,this->ArchetypeDataVersion);
    local_120 = pFVar12;
    puVar13 = ::operator_new(0x18);
    if (puVar13 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar13 + 1) = 1;
      *puVar13 = &
                 ___7__TReferenceControllerWithDeleter_UFMassArchetypeData__U__DefaultDeleter_UFMassArchetypeData___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      *(undefined4 *)((longlong)puVar13 + 0xc) = 1;
      puVar13[2] = pFVar12;
      puVar14 = puVar13;
    }
    local_118 = (TReferenceControllerBase<1> *)puVar14;
    if (((pFVar1->Data <= (FScriptContainerElement *)&local_120) &&
        ((FScriptContainerElement *)&local_120 < pFVar1->Data + (longlong)(int)puVar16[5] * 0x10))
       && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar7)) {
      pcVar3 = (code *)swi(3);
      pFVar11 = (FMassArchetypeHandle *)(*pcVar3)();
      return pFVar11;
    }
    uVar8 = puVar16[4];
    if (uVar8 == puVar16[5]) {
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar1,(int *)(puVar16 + 5));
    }
    pTVar6 = pTStack_130;
    puVar16[4] = uVar8 + 1;
    pFVar21 = pFVar1->Data + (longlong)(int)uVar8 * 0x10;
    *(FMassArchetypeData **)pFVar21 = local_120;
    *(TReferenceControllerBase<1> **)(pFVar21 + 8) = local_118;
    local_118 = (TReferenceControllerBase<1> *)0x0;
    local_120 = (FMassArchetypeData *)0x0;
    pTStack_130 = *(TReferenceControllerBase<1> **)(pFVar21 + 8);
    local_138 = *(FMassArchetypeData **)pFVar21;
    if (pTStack_130 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_130->SharedReferenceCount = (atomic<int>)((int)pTStack_130->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_118);
    pTVar15 = &this->AllArchetypes;
    pFVar21 = (pTVar15->AllocatorInstance).Data;
    if (((pFVar21 <= (FScriptContainerElement *)&local_138) &&
        ((FScriptContainerElement *)&local_138 <
         pFVar21 + (longlong)(this->AllArchetypes).ArrayMax * 0x10)) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar7)) {
      pcVar3 = (code *)swi(3);
      pFVar11 = (FMassArchetypeHandle *)(*pcVar3)();
      return pFVar11;
    }
    iVar10 = (this->AllArchetypes).ArrayNum;
    piVar2 = &(this->AllArchetypes).ArrayMax;
    if (iVar10 == *piVar2) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar15->AllocatorInstance,piVar2);
    }
    (this->AllArchetypes).ArrayNum = iVar10 + 1;
    pFVar21 = (pTVar15->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
    *(FMassArchetypeData **)pFVar21 = local_138;
    *(TReferenceControllerBase<1> **)(pFVar21 + 8) = pTStack_130;
    if (pTStack_130 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_130->SharedReferenceCount = (atomic<int>)((int)pTStack_130->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((this->AllArchetypes).ArrayNum != this->ArchetypeDataVersion) &&
       (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5136943605146975842>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                           ,0x19e,"AllArchetypes.Num() == ArchetypeDataVersion"), bVar7)) {
      pcVar3 = (code *)swi(3);
      pFVar11 = (FMassArchetypeHandle *)(*pcVar3)();
      return pFVar11;
    }
    iVar10 = (pFVar12->FragmentConfigs).ArrayNum;
    FVar22 = (pFVar12->FragmentConfigs).AllocatorInstance.SecondaryData;
    if (FVar22 == (ForElementType<FMassArchetypeFragmentConfig>)0x0) {
      FVar22 = (ForElementType<FMassArchetypeFragmentConfig>)&pFVar12->FragmentConfigs;
    }
    if ((iVar10 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      pFVar11 = (FMassArchetypeHandle *)(*pcVar3)();
      return pFVar11;
    }
    FVar20 = (ForElementType<FMassArchetypeFragmentConfig>)
             ((longlong)iVar10 * 0x10 + (longlong)FVar22);
    for (; FVar22 != FVar20;
        FVar22 = (ForElementType<FMassArchetypeFragmentConfig>)((longlong)FVar22 + 0x10)) {
      uVar8 = ((uint)((ulonglong)*(UScriptStruct **)FVar22 >> 0x14) & 0xffff ^
              (uint)((ulonglong)*(UScriptStruct **)FVar22 >> 4)) * -0x7a143595;
      uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
      pTVar15 = TMapBase<UScriptStruct_const_*,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>_>
                ::FindOrAddImpl<UScriptStruct_const_*_const_&>
                          ((TMapBase<UScriptStruct_const_*,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>_>
                            *)&this->FragmentTypeToArchetypeMap,uVar8 >> 0x10 ^ uVar8,
                           (UScriptStruct **)FVar22);
      pFVar21 = (pTVar15->AllocatorInstance).Data;
      if (((pFVar21 <= (FScriptContainerElement *)&local_138) &&
          ((FScriptContainerElement *)&local_138 < pFVar21 + (longlong)pTVar15->ArrayMax * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        pFVar11 = (FMassArchetypeHandle *)(*pcVar3)();
        return pFVar11;
      }
      iVar10 = pTVar15->ArrayNum;
      if (iVar10 == pTVar15->ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar15->AllocatorInstance,&pTVar15->ArrayMax);
      }
      pTVar15->ArrayNum = iVar10 + 1;
      pFVar21 = (pTVar15->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
      *(FMassArchetypeData **)pFVar21 = local_138;
      *(TReferenceControllerBase<1> **)(pFVar21 + 8) = pTStack_130;
      if (pTStack_130 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_130->SharedReferenceCount =
             (atomic<int>)((int)pTStack_130->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    if (pTStack_130 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_130->SharedReferenceCount = (atomic<int>)((int)pTStack_130->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_e8.DataPtr.Object = local_138;
    local_e8.DataPtr.SharedReferenceCount.ReferenceController = pTStack_130;
    TMulticastDelegate<void___cdecl(FMassArchetypeHandle_const_&),FDefaultDelegateUserPolicy>::
    Broadcast(&this->OnNewArchetypeEvent,&local_e8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e8.DataPtr.SharedReferenceCount.ReferenceController);
    pTVar6 = pTStack_130;
    pFVar12 = local_138;
    if (pTStack_130 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_130->SharedReferenceCount = (atomic<int>)((int)pTStack_130->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (-1 < MassChannel->Enabled) {
      if (local_138 == (FMassArchetypeData *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArchetypeHandle.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                           ,0x1ff,L"");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          pFVar11 = (FMassArchetypeHandle *)(*pcVar3)();
          return pFVar11;
        }
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArchetypeHandle.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                           ,0x1ff,L"");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          pFVar11 = (FMassArchetypeHandle *)(*pcVar3)();
          return pFVar11;
        }
      }
      FMassTrace::OutputRegisterArchetype((ulong64)pFVar12,&pFVar12->CompositionDescriptor);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  pFVar11 = local_f8;
  (local_f8->DataPtr).Object = local_138;
  (local_f8->DataPtr).SharedReferenceCount.ReferenceController = pTStack_130;
  if (pTStack_130 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_130->SharedReferenceCount = (atomic<int>)((int)pTStack_130->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_130);
  FMemScope::~FMemScope(&local_f0);
  FLLMScope::~FLLMScope(&local_124);
  return pFVar11;
}

// CreateArchetype @ 147207bf0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassArchetypeHandle * __thiscall
FMassEntityManager::CreateArchetype
          (FMassEntityManager *this,FMassArchetypeHandle *__return_storage_ptr__,
          TSharedPtr<FMassArchetypeData,1> *param_1,
          TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  FMassArchetypeHandle *pFVar3;
  FMassArchetypeCreationParams local_18;
  
  if (param_1->Object == (FMassArchetypeData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FMassArchetypeHandle *)(*pcVar1)();
      return pFVar3;
    }
  }
  local_18.ChunkMemorySize = param_1->Object->ChunkMemorySize;
  local_18.DebugName.ComparisonIndex.Value = 0;
  local_18.DebugName.Number = 0;
  local_18.DebugColor.field0_0x0.Bits = (FColor_u_0)0x0;
  CreateArchetype(this,__return_storage_ptr__,param_1,param_2,&local_18);
  return __return_storage_ptr__;
}

// CreateArchetype @ 147207c90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassArchetypeHandle * __thiscall
FMassEntityManager::CreateArchetype
          (FMassEntityManager *this,FMassArchetypeHandle *__return_storage_ptr__,
          TSharedPtr<FMassArchetypeData,1> *param_1,
          TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
          *param_2,FMassArchetypeCreationParams *param_3)

{
  FMassArchetypeData *pFVar1;
  FMassArchetypeData *pFVar2;
  FMassArchetypeData *pFVar3;
  FMassArchetypeData *pFVar4;
  code *pcVar5;
  bool bVar6;
  FMassArchetypeHandle *pFVar7;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *pTVar8;
  undefined1 auStack_158 [32];
  char *local_138;
  FMassArchetypeCreationParams *local_128;
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_128 = param_3;
  if (param_1->Object == (FMassArchetypeData *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("SourceArchetype.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                       ,0x15b,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FMassArchetypeHandle *)(*pcVar5)();
      return pFVar7;
    }
  }
  bVar6 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty((FConstBitSetContainer *)param_2);
  if (bVar6) {
    local_138 = "FMassEntityManager::CreateArchetype";
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("AddedFragments.IsEmpty() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                       ,0x15c,L"%hs Adding an empty fragment list to an archetype is not supported."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FMassArchetypeHandle *)(*pcVar5)();
      return pFVar7;
    }
  }
  if (param_1->Object == (FMassArchetypeData *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FMassArchetypeHandle *)(*pcVar5)();
      return pFVar7;
    }
  }
  pFVar1 = param_1->Object;
  if (pFVar1 == (FMassArchetypeData *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FMassArchetypeHandle *)(*pcVar5)();
      return pFVar7;
    }
  }
  pFVar2 = param_1->Object;
  if (pFVar2 == (FMassArchetypeData *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FMassArchetypeHandle *)(*pcVar5)();
      return pFVar7;
    }
  }
  pFVar3 = param_1->Object;
  if (pFVar3 == (FMassArchetypeData *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FMassArchetypeHandle *)(*pcVar5)();
      return pFVar7;
    }
  }
  pFVar4 = param_1->Object;
  if (pFVar4 == (FMassArchetypeData *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FMassArchetypeHandle *)(*pcVar5)();
      return pFVar7;
    }
  }
  pTVar8 = TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>::
           operator+(param_2,(TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                              *)local_78,
                     (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                      *)param_1->Object);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_118,(FBitSetContainer *)pTVar8);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_f8,(FBitSetContainer *)&(pFVar4->CompositionDescriptor).Tags)
  ;
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_d8,
             (FBitSetContainer *)&(pFVar3->CompositionDescriptor).ChunkFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_b8,
             (FBitSetContainer *)&(pFVar2->CompositionDescriptor).SharedFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_98,
             (FBitSetContainer *)&(pFVar1->CompositionDescriptor).ConstSharedFragments);
  if ((void *)local_78._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_78._16_8_);
  }
  CreateArchetype(this,__return_storage_ptr__,(FMassArchetypeCompositionDescriptor *)local_118,
                  local_128);
  if ((void *)local_98._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_98._16_8_);
  }
  if ((void *)local_b8._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._16_8_);
  }
  if ((void *)local_d8._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._16_8_);
  }
  if ((void *)local_f8._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_f8._16_8_);
  }
  if ((void *)local_118._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_118._16_8_);
  }
  return __return_storage_ptr__;
}

// CreateArchetype @ 147207f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassArchetypeHandle * __thiscall
FMassEntityManager::CreateArchetype
          (FMassEntityManager *this,FMassArchetypeHandle *__return_storage_ptr__,
          FMassArchetypeHandle *param_1,TArrayView<UScriptStruct_const_*_const,int> *param_2)

{
  FMassArchetypeData *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  UScriptStruct **ppUVar4;
  undefined8 uVar5;
  bool bVar6;
  FMassArchetypeHandle *pFVar7;
  undefined1 auStack_138 [32];
  FMassArchetypeCreationParams local_118;
  TArrayView<UScriptStruct_const_*_const,int> local_108;
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_138;
  if ((param_1->DataPtr).Object == (FMassArchetypeData *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArchetypeHandle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                       ,0x1ff,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FMassArchetypeHandle *)(*pcVar3)();
      return pFVar7;
    }
  }
  pFVar1 = (param_1->DataPtr).Object;
  pTVar2 = (param_1->DataPtr).SharedReferenceCount.ReferenceController;
  local_118.ChunkMemorySize = pFVar1->ChunkMemorySize;
  local_118.DebugName.ComparisonIndex.Value = 0;
  local_118.DebugName.Number = 0;
  local_118.DebugColor.field0_0x0.Bits = (FColor_u_0)0x0;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  ppUVar4 = param_2->DataPtr;
  uVar5._0_4_ = param_2->ArrayNum;
  uVar5._4_4_ = *(undefined4 *)&param_2->field_0xc;
  if (pFVar1 == (FMassArchetypeData *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArchetypeHandle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                       ,0x1ff,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FMassArchetypeHandle *)(*pcVar3)();
      return pFVar7;
    }
  }
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_f8,(FBitSetContainer *)pFVar1);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_d8,(FBitSetContainer *)&(pFVar1->CompositionDescriptor).Tags)
  ;
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_b8,
             (FBitSetContainer *)&(pFVar1->CompositionDescriptor).ChunkFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_98,
             (FBitSetContainer *)&(pFVar1->CompositionDescriptor).SharedFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_78,
             (FBitSetContainer *)&(pFVar1->CompositionDescriptor).ConstSharedFragments);
  local_108.DataPtr = ppUVar4;
  local_108._8_8_ = uVar5;
  InternalAppendFragmentsAndTagsToArchetypeCompositionDescriptor
            (this,(FMassArchetypeCompositionDescriptor *)local_f8,&local_108);
  CreateArchetype(this,__return_storage_ptr__,(FMassArchetypeCompositionDescriptor *)local_f8,
                  &local_118);
  if ((void *)local_78._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_78._16_8_);
  }
  if ((void *)local_98._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_98._16_8_);
  }
  if ((void *)local_b8._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._16_8_);
  }
  if ((void *)local_d8._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._16_8_);
  }
  if ((void *)local_f8._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_f8._16_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->DataPtr).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// CreateArchetype @ 147208100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassArchetypeHandle * __thiscall
FMassEntityManager::CreateArchetype
          (FMassEntityManager *this,FMassArchetypeHandle *__return_storage_ptr__,
          FMassArchetypeHandle *param_1,TArrayView<UScriptStruct_const_*_const,int> *param_2,
          FMassArchetypeCreationParams *param_3)

{
  FMassArchetypeData *pFVar1;
  code *pcVar2;
  bool bVar3;
  FMassArchetypeHandle *pFVar4;
  undefined1 auStack_118 [32];
  TArrayView<UScriptStruct_const_*_const,int> local_f8;
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  if ((param_1->DataPtr).Object == (FMassArchetypeData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArchetypeHandle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                       ,0x1ff,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FMassArchetypeHandle *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar1 = (param_1->DataPtr).Object;
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_e8,(FBitSetContainer *)pFVar1);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_c8,(FBitSetContainer *)&(pFVar1->CompositionDescriptor).Tags)
  ;
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_a8,
             (FBitSetContainer *)&(pFVar1->CompositionDescriptor).ChunkFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_88,
             (FBitSetContainer *)&(pFVar1->CompositionDescriptor).SharedFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_68,
             (FBitSetContainer *)&(pFVar1->CompositionDescriptor).ConstSharedFragments);
  local_f8.DataPtr = param_2->DataPtr;
  local_f8.ArrayNum = param_2->ArrayNum;
  local_f8._12_4_ = *(undefined4 *)&param_2->field_0xc;
  InternalAppendFragmentsAndTagsToArchetypeCompositionDescriptor
            (this,(FMassArchetypeCompositionDescriptor *)local_e8,&local_f8);
  CreateArchetype(this,__return_storage_ptr__,(FMassArchetypeCompositionDescriptor *)local_e8,
                  param_3);
  if ((void *)local_68._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._16_8_);
  }
  if ((void *)local_88._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_88._16_8_);
  }
  if ((void *)local_a8._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_a8._16_8_);
  }
  if ((void *)local_c8._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c8._16_8_);
  }
  if ((void *)local_e8._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e8._16_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->DataPtr).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// CreateArchetype @ 147208270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassArchetypeHandle * __thiscall
FMassEntityManager::CreateArchetype
          (FMassEntityManager *this,FMassArchetypeHandle *__return_storage_ptr__,
          TArrayView<UScriptStruct_const_*_const,int> *param_1,FMassArchetypeCreationParams *param_2
          )

{
  undefined1 auStack_108 [32];
  TArrayView<UScriptStruct_const_*_const,int> local_e8;
  undefined1 local_d8 [16];
  void *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  void *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  void *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  void *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  void *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_e8.DataPtr = param_1->DataPtr;
  local_e8.ArrayNum = param_1->ArrayNum;
  local_e8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_bc = 0x80;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_9c = 0x80;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  InternalAppendFragmentsAndTagsToArchetypeCompositionDescriptor
            (this,(FMassArchetypeCompositionDescriptor *)local_d8,&local_e8);
  CreateArchetype(this,__return_storage_ptr__,(FMassArchetypeCompositionDescriptor *)local_d8,
                  param_2);
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  return __return_storage_ptr__;
}

// CreateEntity @ 147209250

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FMassEntityHandle __thiscall
FMassEntityManager::CreateEntity
          (FMassEntityManager *this,FMassArchetypeHandle *param_1,
          FMassArchetypeSharedFragmentValues *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FMassEntityHandle FVar4;
  IEntityStorageInterface *pIVar5;
  FMassArchetypeHandle *pFVar6;
  FMassArchetypeSharedFragmentValues *in_R9;
  StorageSelector local_38 [8];
  FMassEntityHandle local_30;
  FMassArchetypeCreationParams local_28;
  FMassArchetypeHandle local_18;
  
  if (UE::AITestSuite::TestsInProgress < 1) {
    if (0 < (int)this->ProcessingScopeCount) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsProcessing() == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x249,
                         L"Synchronous API function %hs called during mass processing. Use asynchronous API instead."
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        FVar4 = (FMassEntityHandle)(*pcVar2)();
        return FVar4;
      }
    }
  }
  else if (0 < (int)this->ProcessingScopeCount) {
    if (1 < (byte)LogTestableEnsures._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
    }
    local_30.Index = 0;
    local_30.SerialNumber = 0;
    goto LAB_1472093a5;
  }
  lVar1._0_4_ = param_2->HashCache;
  lVar1._4_1_ = param_2->bSorted;
  lVar1._5_1_ = param_2->field_0x5;
  lVar1._6_2_ = param_2->_padding_;
  if (lVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArchetypeHandle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                       ,0x24a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4 = (FMassEntityHandle)(*pcVar2)();
      return FVar4;
    }
  }
  bVar3 = UE::Mass::Debug::FBreakpoint::CheckCreateEntityBreakpoints
                    ((FMassArchetypeHandle *)param_2);
  if (bVar3) {
    UE::Mass::Debug::FBreakpoint::DebugBreak();
  }
  local_38[0] = (StorageSelector)0x0;
  pIVar5 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_38,&this->EntityStorage);
  (**(code **)((longlong)*pIVar5 + 0x70))(pIVar5,&local_30);
  local_28.ChunkMemorySize = 0;
  local_28.DebugName.ComparisonIndex.Value = 0;
  local_28.DebugName.Number = 0;
  local_28.DebugColor.field0_0x0 = (FColor_u_0)0x0;
  pFVar6 = GetOrCreateSuitableArchetype
                     (this,&local_18,(FMassArchetypeHandle *)param_2,&in_R9->SharedFragmentBitSet,
                      &in_R9->ConstSharedFragmentBitSet,&local_28);
  InternalBuildEntity(this,local_30,pFVar6,in_R9);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.DataPtr.SharedReferenceCount.ReferenceController);
LAB_1472093a5:
  (param_1->DataPtr).Object = (FMassArchetypeData *)local_30;
  return (FMassEntityHandle)param_1;
}

// CreateEntity @ 1472093d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FMassEntityHandle __thiscall
FMassEntityManager::CreateEntity
          (FMassEntityManager *this,TArrayView<FInstancedStruct_const_,int> *param_1,
          FMassArchetypeSharedFragmentValues *param_2,FMassArchetypeCreationParams *param_3)

{
  code *pcVar1;
  FMassEntityHandle FVar2;
  bool bVar3;
  FMassEntityHandle FVar4;
  FMassArchetypeCompositionDescriptor *pFVar5;
  IEntityStorageInterface *pIVar6;
  FMassArchetypeData *this_00;
  FMassArchetypeCreationParams *in_stack_00000028;
  undefined1 auStackY_1e8 [32];
  StorageSelector local_1b8;
  StorageSelector local_1b7 [7];
  int local_1b0;
  int iStack_1ac;
  FMassArchetypeHandle local_1a8;
  TArrayView<FInstancedStruct_const_,int> local_198;
  TArrayView<FInstancedStruct_const_,int> local_188;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_178;
  undefined1 local_168 [16];
  void *pvStack_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined1 local_148 [16];
  void *pvStack_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 local_128 [16];
  void *pvStack_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 local_108 [16];
  void *pvStack_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 local_e8 [48];
  void *local_b8;
  void *local_98;
  void *local_78;
  void *local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  if (UE::AITestSuite::TestsInProgress < 1) {
    if ((0 < (int)this->ProcessingScopeCount) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsProcessing() == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                           ,600,
                           L"Synchronous API function %hs called during mass processing. Use asynchronous API instead."
                          ), bVar3)) {
      pcVar1 = (code *)swi(3);
      FVar4 = (FMassEntityHandle)(*pcVar1)();
      return FVar4;
    }
  }
  else if (0 < (int)this->ProcessingScopeCount) {
    if (1 < (byte)LogTestableEnsures._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
    }
    param_1->DataPtr = (FInstancedStruct *)0x0;
    return (FMassEntityHandle)param_1;
  }
  if ((*(int *)&param_2->SharedFragmentBitSet < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FragmentInstanceList.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x259,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    FVar4 = (FMassEntityHandle)(*pcVar1)();
    return FVar4;
  }
  local_ec = 0x80;
  local_108._0_8_ = 0;
  local_108._8_8_ = 0;
  pvStack_f8 = (void *)0x0;
  local_f0 = 0;
  local_128._8_8_ = 0;
  pvStack_118 = (void *)0x0;
  local_128._0_8_ = 0;
  local_148._8_8_ = 0;
  pvStack_138 = (void *)0x0;
  local_110 = 0;
  local_168._8_8_ = 0;
  pvStack_158 = (void *)0x0;
  local_148._0_8_ = 0;
  local_198.DataPtr = *(FInstancedStruct **)param_2;
  local_198.ArrayNum = *(int *)&(param_2->SharedFragmentBitSet).field_0x0;
  local_198._12_4_ = *(undefined4 *)&(param_2->SharedFragmentBitSet).field_0x4;
  local_130 = 0;
  local_168._0_8_ = 0;
  local_150 = 0;
  local_10c = 0x80;
  local_12c = 0x80;
  local_14c = 0x80;
  pFVar5 = FMassArchetypeCompositionDescriptor::FMassArchetypeCompositionDescriptor
                     ((FMassArchetypeCompositionDescriptor *)local_e8,&local_198,
                      (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>
                       *)local_168,
                      (TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>
                       *)local_148,
                      (TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                       *)local_128,
                      (TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                       *)local_108);
  CreateArchetype(this,&local_1a8,pFVar5,in_stack_00000028);
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  if ((void *)local_e8._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e8._16_8_);
  }
  if (pvStack_158 != (void *)0x0) {
    FMemory::Free(pvStack_158);
  }
  if (pvStack_138 != (void *)0x0) {
    FMemory::Free(pvStack_138);
  }
  if (pvStack_118 != (void *)0x0) {
    FMemory::Free(pvStack_118);
  }
  if (pvStack_f8 != (void *)0x0) {
    FMemory::Free(pvStack_f8);
  }
  if ((local_1a8.DataPtr.Object == (FMassArchetypeData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArchetypeHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x25d,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    FVar4 = (FMassEntityHandle)(*pcVar1)();
    return FVar4;
  }
  local_1b8 = (StorageSelector)0x0;
  pIVar6 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(&local_1b8,&this->EntityStorage);
  (**(code **)((longlong)*pIVar6 + 0x70))(pIVar6,&local_1b0);
  FMassObserverManager::GetOrMakeCreationContext(&this->ObserverManager,&local_178);
  FVar4.SerialNumber = iStack_1ac;
  FVar4.Index = local_1b0;
  InternalBuildEntity(this,FVar4,&local_1a8,(FMassArchetypeSharedFragmentValues *)param_3);
  local_1b7[0] = (StorageSelector)0x0;
  pIVar6 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_1b7,&this->EntityStorage);
  this_00 = (FMassArchetypeData *)(**(code **)((longlong)*pIVar6 + 0x10))(pIVar6,local_1b0);
  if ((this_00 == (FMassArchetypeData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentArchetype",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x267,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    FVar4 = (FMassEntityHandle)(*pcVar1)();
    return FVar4;
  }
  local_188.DataPtr = *(FInstancedStruct **)param_2;
  local_188.ArrayNum = *(int *)&(param_2->SharedFragmentBitSet).field_0x0;
  local_188._12_4_ = *(undefined4 *)&(param_2->SharedFragmentBitSet).field_0x4;
  FVar2.SerialNumber = iStack_1ac;
  FVar2.Index = local_1b0;
  FMassArchetypeData::SetFragmentsData(this_00,FVar2,&local_188);
  param_1->DataPtr = (FInstancedStruct *)CONCAT44(iStack_1ac,local_1b0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a8.DataPtr.SharedReferenceCount.ReferenceController);
  return (FMassEntityHandle)param_1;
}

// CreateEntityIndexHandle @ 14720a0f0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassEntityHandle __thiscall
FMassEntityManager::CreateEntityIndexHandle(FMassEntityManager *this,int param_1)

{
  TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>
  *pTVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  IEntityStorageInterface *pIVar5;
  int in_register_00000014;
  FMassEntityHandle FVar6;
  undefined4 in_R8D;
  StorageSelector local_res8 [8];
  
  FVar6.SerialNumber = in_register_00000014;
  FVar6.Index = param_1;
  pTVar1 = &this->EntityStorage;
  local_res8[0] = (StorageSelector)0x0;
  pIVar5 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res8,pTVar1);
  cVar2 = (**(code **)((longlong)*pIVar5 + 0x48))(pIVar5,in_R8D);
  if (cVar2 != '\0') {
    local_res8[0] = (StorageSelector)0x0;
    pIVar5 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
               ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res8,pTVar1);
    iVar3 = (**(code **)((longlong)*pIVar5 + 0x38))(pIVar5,in_R8D);
    if (iVar3 == 2) {
      local_res8[0] = (StorageSelector)0x0;
      pIVar5 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
                 ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res8,pTVar1);
      uVar4 = (**(code **)((longlong)*pIVar5 + 0x40))(pIVar5,in_R8D);
      goto LAB_14720a19a;
    }
  }
  in_R8D = 0;
  uVar4 = in_R8D;
LAB_14720a19a:
  *(undefined4 *)FVar6 = in_R8D;
  *(undefined4 *)((longlong)FVar6 + 4) = uVar4;
  return FVar6;
}

// CreateExecutionContext @ 14720b160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassExecutionContext * __thiscall
FMassEntityManager::CreateExecutionContext
          (FMassEntityManager *this,FMassExecutionContext *__return_storage_ptr__,float param_1)

{
  FSharedReferencer<1> FVar1;
  undefined1 auStack_5c8 [32];
  FMassExecutionContext local_5a8;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_5c8;
  FMassExecutionContext::FMassExecutionContext(&local_5a8,this,param_1,true);
  FVar1.ReferenceController =
       local_5a8.DeferredCommandBuffer.SharedReferenceCount.ReferenceController;
  local_5a8.DeferredCommandBuffer.SharedReferenceCount.ReferenceController =
       (this->DeferredCommandBuffers).Elements[this->OpenedCommandBufferIndex].SharedReferenceCount.
       ReferenceController;
  local_5a8.DeferredCommandBuffer.Object =
       (this->DeferredCommandBuffers).Elements[this->OpenedCommandBufferIndex].Object;
  if (local_5a8.DeferredCommandBuffer.SharedReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_5a8.DeferredCommandBuffer.SharedReferenceCount.ReferenceController)->SharedReferenceCount
         = (atomic<int>)
           ((int)(local_5a8.DeferredCommandBuffer.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar1.ReferenceController);
  FMassExecutionContext::FMassExecutionContext(__return_storage_ptr__,&local_5a8);
  FMassExecutionContext::~FMassExecutionContext(&local_5a8);
  return __return_storage_ptr__;
}

// DebugDisableDebugFeature @ 14720dfd0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityManager::DebugDisableDebugFeature(FMassEntityManager *this,EDebugFeatures param_1)

{
  this->EnabledDebugFeatures = this->EnabledDebugFeatures & ~param_1;
  return;
}

// DebugDoCollectionsOverlapCreationContext @ 14720dfe0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityManager::DebugDoCollectionsOverlapCreationContext
          (FMassEntityManager *this,TArrayView<FMassArchetypeEntityCollection_const_,int> *param_1)

{
  uchar uVar1;
  int iVar2;
  FCreationContext *pFVar3;
  code *pcVar4;
  atomic<int> aVar5;
  undefined1 uVar6;
  atomic<int> aVar7;
  int iVar8;
  FBufferedNotification *pFVar9;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *pTVar10;
  FEntityCollection *this_00;
  TReferenceControllerBase<1> *pTVar11;
  bool bVar12;
  FMassEntityHandle local_res8;
  TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> local_48;
  TArrayView<FMassEntityHandle_const_,int> local_38;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_28;
  
  pTVar11 = (this->ObserverManager).ActiveCreationContext.WeakReferenceCount.ReferenceController;
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar11->SharedReferenceCount;
    do {
      if (aVar5 == (atomic<int>)0x0) {
        pTVar11 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14720e018;
      }
      LOCK();
      aVar7 = pTVar11->SharedReferenceCount;
      bVar12 = aVar5 == aVar7;
      if (bVar12) {
        pTVar11->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar12);
    pFVar3 = (this->ObserverManager).ActiveCreationContext.Object;
    if (pFVar3 != (FCreationContext *)0x0) {
      local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.ArrayNum = 0;
      local_48.ArrayMax = 0;
      if ((pFVar3->CreationHandle).OpIndex != -1) {
        pFVar9 = UE::Mass::ObserverManager::FObserverLock::GetCreationNotification
                           ((pFVar3->Lock).Object,pFVar3->CreationHandle);
        uVar1 = (pFVar9->AffectedEntities).TypeIndex;
        this_00 = (FEntityCollection *)&pFVar9->AffectedEntities;
        if (uVar1 != '\0') {
          this_00 = (FEntityCollection *)0x0;
        }
        if (this_00 == (FEntityCollection *)0x0) {
          if ((uVar1 != '\x01') &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index == TypeIndex",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                  ,0x97,L""), bVar12)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          local_res8 = (FMassEntityHandle)(pFVar9->AffectedEntities)._padding_;
          local_38.ArrayNum = 1;
          local_38.DataPtr = &local_res8;
          UE::Mass::Utils::CreateEntityCollections(this,&local_38,NoDuplicates,&local_48);
        }
        else {
          pTVar10 = UE::Mass::FEntityCollection::GetUpToDatePerArchetypeCollections
                              (this_00,&local_28,this);
          iVar2 = pTVar10->ArrayNum;
          if (iVar2 < 0) {
            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x9a9,L"Invalid range size: %lld");
            if (bVar12) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
          }
          else if (iVar2 == 0) goto LAB_14720e194;
          iVar8 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x28,8,iVar2,&local_48.AllocatorInstance,&local_48.ArrayNum,
                             &local_48.ArrayMax);
          ConstructItems<FMassArchetypeEntityCollection,FMassArchetypeEntityCollection,int>
                    (local_48.AllocatorInstance.Data + (longlong)iVar8 * 0x28,pTVar10->DataPtr,iVar2
                    );
        }
      }
LAB_14720e194:
      if ((param_1->DataPtr < local_48.AllocatorInstance.Data) ||
         ((FMassArchetypeEntityCollection *)
          (local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 0x28) < param_1->DataPtr)
         ) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      DestructItems<FMassArchetypeEntityCollection,int>
                ((FMassArchetypeEntityCollection *)local_48.AllocatorInstance.Data,local_48.ArrayNum
                );
      if ((FMassArchetypeEntityCollection *)local_48.AllocatorInstance.Data !=
          (FMassArchetypeEntityCollection *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
      return bVar12;
    }
  }
LAB_14720e018:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  return false;
}

// DebugEnableDebugFeature @ 14720e200

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityManager::DebugEnableDebugFeature(FMassEntityManager *this,EDebugFeatures param_1)

{
  this->EnabledDebugFeatures = this->EnabledDebugFeatures | param_1;
  return;
}

// DebugForceArchetypeDataVersionBump @ 14720e250

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall FMassEntityManager::DebugForceArchetypeDataVersionBump(FMassEntityManager *this)

{
  this->ArchetypeDataVersion = this->ArchetypeDataVersion + 1;
  return;
}

// DebugGetArchetypeEntitiesCount @ 14720e590

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

int __thiscall
FMassEntityManager::DebugGetArchetypeEntitiesCount
          (FMassEntityManager *this,FMassArchetypeHandle *param_1)

{
  FMassArchetypeData *pFVar1;
  
  pFVar1 = (param_1->DataPtr).Object;
  if (pFVar1 != (FMassArchetypeData *)0x0) {
    return *(int *)&(pFVar1->EntityMap).field_0x8 - *(int *)&(pFVar1->EntityMap).field_0x34;
  }
  return 0;
}

// DebugGetArchetypeEntitiesCountPerChunk @ 14720e5b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

int __thiscall
FMassEntityManager::DebugGetArchetypeEntitiesCountPerChunk
          (FMassEntityManager *this,FMassArchetypeHandle *param_1)

{
  FMassArchetypeData *pFVar1;
  
  pFVar1 = (param_1->DataPtr).Object;
  if (pFVar1 != (FMassArchetypeData *)0x0) {
    return pFVar1->NumEntitiesPerChunk;
  }
  return 0;
}

// DebugGetArchetypeFragmentTypes @ 14720e5d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityManager::DebugGetArchetypeFragmentTypes
          (FMassEntityManager *this,FMassArchetypeHandle *param_1,
          TArray<UScriptStruct_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FMassArchetypeData *this_00;
  
  this_00 = (param_1->DataPtr).Object;
  if (this_00 != (FMassArchetypeData *)0x0) {
    TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
    ::ExportTypes<UScriptStruct,TSizedDefaultAllocator<32>_>
              ((TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                *)this_00,param_2);
    return;
  }
  return;
}

// DebugGetArchetypeStrings @ 14720e5f0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityManager::DebugGetArchetypeStrings
          (FMassEntityManager *this,FMassArchetypeHandle *param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  FMassArchetypeData *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ForElementType<FMassArchetypeFragmentConfig> FVar9;
  ForElementType<FMassArchetypeFragmentConfig> FVar10;
  undefined8 local_28 [2];
  
  pFVar4 = (param_1->DataPtr).Object;
  if (pFVar4 != (FMassArchetypeData *)0x0) {
    uVar3 = (pFVar4->FragmentConfigs).ArrayNum;
    if ((int)uVar3 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    piVar1 = &param_2->ArrayNum;
    piVar2 = &param_2->ArrayMax;
    if (param_2->ArrayMax < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar3,&param_2->AllocatorInstance,*piVar1,piVar2);
    }
    FVar9 = (pFVar4->FragmentConfigs).AllocatorInstance.SecondaryData;
    if (FVar9 == (ForElementType<FMassArchetypeFragmentConfig>)0x0) {
      FVar9 = (ForElementType<FMassArchetypeFragmentConfig>)&pFVar4->FragmentConfigs;
    }
    iVar8 = (pFVar4->FragmentConfigs).ArrayNum;
    if ((iVar8 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FVar10 = (ForElementType<FMassArchetypeFragmentConfig>)
             ((longlong)FVar9 + (longlong)iVar8 * 0x10);
    for (; FVar9 != FVar10;
        FVar9 = (ForElementType<FMassArchetypeFragmentConfig>)((longlong)FVar9 + 0x10)) {
      local_28[0] = *(undefined8 *)(*(longlong *)FVar9 + 0x18);
      pFVar5 = (param_2->AllocatorInstance).Data;
      if (((pFVar5 <= (FScriptContainerElement *)local_28) &&
          ((FScriptContainerElement *)local_28 < pFVar5 + (longlong)*piVar2 * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar8 = *piVar1;
      if (iVar8 == *piVar2) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&param_2->AllocatorInstance,piVar2);
        *piVar1 = iVar8;
      }
      *piVar1 = iVar8 + 1;
      *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar8 * 8) = local_28[0];
    }
    TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
    ::DebugGetIndividualNames
              ((TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                *)&(pFVar4->CompositionDescriptor).Tags,param_3);
  }
  return;
}

// DebugGetArchetypesCount @ 14720e7e0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

int __thiscall FMassEntityManager::DebugGetArchetypesCount(FMassEntityManager *this)

{
  return (this->AllArchetypes).ArrayNum;
}

// DebugGetArchetypesStringDetails @ 14720e7f0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassEntityManager::DebugGetArchetypesStringDetails
          (FMassEntityManager *this,FOutputDevice *param_1,bool param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  FMassArchetypeData *this_00;
  code *pcVar5;
  TMap<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar6;
  bool bVar7;
  longlong lVar8;
  int iVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  TSharedPtr<FMassArchetypeData,1> *pTVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  TBitArray<FDefaultBitArrayAllocator> *pTVar16;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  ForAnyElementType local_c0;
  int local_b8;
  int local_b4;
  TMap<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  TMap<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_80;
  TBitArray<FDefaultBitArrayAllocator> *local_78;
  TMap<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  pTVar16 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->FragmentHashToArchetypeMap).field_0x10;
  param_1->bAutoEmitLineTerminator = true;
  iVar2 = *(int *)&(this->FragmentHashToArchetypeMap).field_0x28;
  local_b0 = &this->FragmentHashToArchetypeMap;
  local_90 = 0;
  iStack_a8 = 0;
  uStack_a4 = 1;
  iStack_94 = 0;
  if (iVar2 != 0) {
    puVar15 = *(uint **)&(this->FragmentHashToArchetypeMap).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)pTVar16;
    }
    uVar13 = *puVar15;
    while (uVar13 == 0) {
      lVar8 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_14720e8ae;
      uVar13 = puVar15[lVar8 + 1];
    }
    uStack_a4 = -uVar13 & uVar13;
    uVar1 = (ulonglong)uStack_a4 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStack_94 = local_90 + -1 + (int)lVar8;
    if (iVar2 < iStack_94) {
      iStack_94 = iVar2;
    }
  }
LAB_14720e8ae:
  iStack_88 = *(int *)&(this->FragmentHashToArchetypeMap).field_0x8 -
              *(int *)&(this->FragmentHashToArchetypeMap).field_0x34;
  uVar13 = *(uint *)&(this->FragmentHashToArchetypeMap).field_0x28;
  uStack_98 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_a4,iStack_a8);
  uVar11 = uVar13 & 0xffffffe0;
  TStack_68.CurrentBitIndex = iStack_94;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar9 = (int)uVar13 >> 5;
  TStack_68._28_4_ = iStack_94;
  TStack_68.BaseBitIndex = local_90;
  uStack_48 = CONCAT44(uStack_84,iStack_88);
  local_a0 = (undefined1 *)pTVar16;
  iStack_8c = iStack_94;
  local_80 = local_b0;
  local_78 = pTVar16;
  local_70 = local_b0;
  TStack_68.Array = pTVar16;
  if ((((int)uVar13 < 0) || (iVar2 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(uint *)&(this->FragmentHashToArchetypeMap).field_0x28;
  if (uVar13 != uVar3) {
    puVar14 = *(undefined1 **)&(this->FragmentHashToArchetypeMap).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = (undefined1 *)pTVar16;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar9 * 4);
    while (uVar13 == 0) {
      lVar8 = (longlong)iVar9;
      uVar11 = uVar11 + 0x20;
      iVar9 = iVar9 + 1;
      uVar13 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_14720e9b0;
      uVar13 = *(uint *)(puVar14 + lVar8 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar13 = (int)lVar8 + -1 + uVar11;
    if ((int)uVar3 < (int)uVar13) {
      uVar13 = uVar3;
    }
  }
LAB_14720e9b0:
  while( true ) {
    pTVar6 = local_70;
    if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_68.CurrentBitIndex == uVar13) && (TStack_68.Array == pTVar16)) &&
       (pTVar6 == local_80)) break;
    lVar8 = *(longlong *)pTVar6;
    local_c0.Data = (FScriptContainerElement *)0x0;
    iVar2 = *(int *)((longlong)TStack_68.CurrentBitIndex * 0x20 + 0x10 + lVar8);
    pTVar12 = *(TSharedPtr<FMassArchetypeData,1> **)
               ((longlong)TStack_68.CurrentBitIndex * 0x20 + 8 + lVar8);
    local_b8 = iVar2;
    if (iVar2 == 0) {
      local_b4 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar2,0,&local_c0,iVar2,&local_b4);
      ConstructItems<TSharedPtr<FMassArchetypeData,1>,TSharedPtr<FMassArchetypeData,1>,int>
                (local_c0.Data,pTVar12,iVar2);
    }
    FOutputDevice::LogfImpl(param_1,Log,L"\n-----------------------------------\nHash: %u");
    iVar2 = local_b8;
    pTVar12 = (TSharedPtr<FMassArchetypeData,1> *)(local_c0.Data + (longlong)local_b8 * 0x10);
    FVar10.Data = local_c0.Data;
    while( true ) {
      if (local_b8 != iVar2) {
        `TCheckedPointerIterator<TSharedPtr<FMassArchetypeData,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if ((TSharedPtr<FMassArchetypeData,1> *)FVar10.Data == pTVar12) break;
      pTVar4 = (((TSharedPtr<FMassArchetypeData,1> *)FVar10.Data)->SharedReferenceCount).
               ReferenceController;
      this_00 = ((TSharedPtr<FMassArchetypeData,1> *)FVar10.Data)->Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((this_00 != (FMassArchetypeData *)0x0) && ((param_2 || (0 < (this_00->Chunks).ArrayNum))))
      {
        FMassArchetypeData::DebugPrintArchetype(this_00,param_1);
        FOutputDevice::LogfImpl(param_1,Log,L"+++++++++++++++++++++++++\n");
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      FVar10.Data = FVar10.Data + 0x10;
    }
    DestructItems<TSharedPtr<FMassArchetypeData,1>,int>
              ((TSharedPtr<FMassArchetypeData,1> *)local_c0.Data,local_b8);
    if ((TSharedPtr<FMassArchetypeData,1> *)local_c0.Data != (TSharedPtr<FMassArchetypeData,1> *)0x0
       ) {
      FMemory::Free(local_c0.Data);
    }
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
    pTVar16 = local_78;
  }
  return;
}

// DebugGetEntityCount @ 14720ed80

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

int __thiscall FMassEntityManager::DebugGetEntityCount(FMassEntityManager *this)

{
  int iVar1;
  uint uVar2;
  IEntityStorageInterface *pIVar3;
  IEntityStorageInterface *pIVar4;
  StorageSelector local_res8 [8];
  StorageSelector local_res10 [8];
  
  local_res8[0] = (StorageSelector)0x0;
  pIVar3 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res8,&this->EntityStorage);
  local_res10[0] = (StorageSelector)0x0;
  pIVar4 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res10,&this->EntityStorage);
  iVar1 = (**(code **)((longlong)*pIVar3 + 0xa0))(pIVar3);
  uVar2 = (**(code **)((longlong)*pIVar4 + 0xa8))(pIVar4);
  return ~uVar2 + iVar1;
}

// DebugGetEntityIndexHandle @ 14720ee10

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassEntityHandle __thiscall
FMassEntityManager::DebugGetEntityIndexHandle(FMassEntityManager *this,int param_1)

{
  FMassEntityHandle FVar1;
  int in_register_00000014;
  
  FVar1.SerialNumber = in_register_00000014;
  FVar1.Index = param_1;
  CreateEntityIndexHandle(this,param_1);
  return FVar1;
}

// DebugGetEntityStorageInterface @ 14720eea0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

IEntityStorageInterface * __thiscall
FMassEntityManager::DebugGetEntityStorageInterface(FMassEntityManager *this)

{
  IEntityStorageInterface *pIVar1;
  StorageSelector local_res8 [32];
  
  local_res8[0] = (StorageSelector)0x0;
  pIVar1 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res8,&this->EntityStorage);
  return pIVar1;
}

// DebugGetEntityStorageInterface @ 14720eed0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

IEntityStorageInterface * __thiscall
FMassEntityManager::DebugGetEntityStorageInterface(FMassEntityManager *this)

{
  IEntityStorageInterface *pIVar1;
  StorageSelector local_res8 [32];
  
  local_res8[0] = (StorageSelector)0x0;
  pIVar1 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res8,&this->EntityStorage);
  return pIVar1;
}

// DebugGetName @ 14720f180

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FString * __thiscall FMassEntityManager::DebugGetName(FMassEntityManager *this)

{
  return &this->DebugName;
}

// DebugHasAllDebugFeatures @ 14720f930

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityManager::DebugHasAllDebugFeatures(FMassEntityManager *this,EDebugFeatures param_1)

{
  return (this->EnabledDebugFeatures & param_1) == param_1;
}

// DebugHasCommandsToFlush @ 14720f950

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall FMassEntityManager::DebugHasCommandsToFlush(FMassEntityManager *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->DeferredCommandBuffers).Elements[0].Object == (FMassCommandBuffer *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (((this->DeferredCommandBuffers).Elements[0].Object)->ActiveCommandsCounter < 1) {
    if ((this->DeferredCommandBuffers).Elements[1].Object == (FMassCommandBuffer *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (((this->DeferredCommandBuffers).Elements[1].Object)->ActiveCommandsCounter < 1) {
      return false;
    }
  }
  return true;
}

// DebugPrintArchetypes @ 147210350

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassEntityManager::DebugPrintArchetypes
          (FMassEntityManager *this,FOutputDevice *param_1,bool param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  FMassArchetypeData *this_00;
  code *pcVar5;
  TMap<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar6;
  bool bVar7;
  UObject *this_01;
  longlong lVar8;
  int iVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  uint *puVar15;
  int iVar16;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  uint local_d8;
  FString local_c0;
  TMap<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int local_80;
  TMap<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_78;
  TMap<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  this_01 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
  if (this_01 == (UObject *)0x0) {
    ::FString::FString(&local_c0,L"None");
  }
  else {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_01,&local_c0,(UObject *)0x0);
  }
  FOutputDevice::LogfImpl(param_1,Log,L"Listing archetypes contained in EntityManager owned by %s");
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  local_78 = &this->FragmentHashToArchetypeMap;
  iVar16 = 0;
  puVar1 = &(this->FragmentHashToArchetypeMap).field_0x10;
  iVar3 = *(int *)&(this->FragmentHashToArchetypeMap).field_0x28;
  iStack_a8 = 0;
  uStack_a4 = 1;
  local_90 = 0;
  iStack_94 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->FragmentHashToArchetypeMap).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    iStack_a8 = 0;
    while (uVar11 == 0) {
      lVar8 = (longlong)iStack_a8;
      local_90 = local_90 + 0x20;
      iStack_a8 = iStack_a8 + 1;
      iStack_94 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) goto LAB_147210485;
      uVar11 = puVar15[lVar8 + 1];
    }
    uStack_a4 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uStack_a4 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_80 = (int)lVar8;
    iStack_94 = local_90 + -1 + local_80;
    if (iVar3 < iStack_94) {
      iStack_94 = iVar3;
    }
  }
LAB_147210485:
  local_a0 = &(this->FragmentHashToArchetypeMap).field_0x10;
  local_d8 = *(uint *)&(this->FragmentHashToArchetypeMap).field_0x28;
  local_b0 = &this->FragmentHashToArchetypeMap;
  uVar11 = local_d8 & 0xffffffe0;
  iStack_88 = *(int *)&(this->FragmentHashToArchetypeMap).field_0x8 -
              *(int *)&(this->FragmentHashToArchetypeMap).field_0x34;
  uStack_98 = 0xffffffff;
  TStack_68.CurrentBitIndex = iStack_94;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_a4,iStack_a8);
  iVar9 = (int)local_d8 >> 5;
  TStack_68._28_4_ = iStack_94;
  TStack_68.BaseBitIndex = local_90;
  uStack_48 = CONCAT44(uStack_84,iStack_88);
  iStack_8c = iStack_94;
  local_70 = local_b0;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_a0;
  if ((((int)local_d8 < 0) || (iVar3 < (int)local_d8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)&(this->FragmentHashToArchetypeMap).field_0x28;
  if (local_d8 != uVar4) {
    puVar14 = *(undefined1 **)&(this->FragmentHashToArchetypeMap).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)local_d8 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar9 * 4);
    while (uVar12 == 0) {
      lVar8 = (longlong)iVar9;
      uVar11 = uVar11 + 0x20;
      iVar9 = iVar9 + 1;
      local_d8 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9) goto LAB_1472105a0;
      uVar12 = *(uint *)(puVar14 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_d8 = (int)lVar8 + -1 + uVar11;
    if ((int)uVar4 < (int)local_d8) {
      local_d8 = uVar4;
    }
  }
LAB_1472105a0:
  while( true ) {
    pTVar6 = local_70;
    if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_68.CurrentBitIndex == local_d8) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar6 == local_78)
       ) break;
    lVar8 = (longlong)TStack_68.CurrentBitIndex * 0x20 + *(longlong *)pTVar6;
    iVar3 = *(int *)(lVar8 + 0x10);
    puVar10 = *(undefined8 **)(lVar8 + 8);
    puVar13 = puVar10 + (longlong)iVar3 * 2;
    while( true ) {
      if (*(int *)(lVar8 + 0x10) != iVar3) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FMassArchetypeData,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (puVar10 == puVar13) break;
      this_00 = (FMassArchetypeData *)*puVar10;
      if ((this_00 != (FMassArchetypeData *)0x0) && ((param_2 || (0 < (this_00->Chunks).ArrayNum))))
      {
        FMassArchetypeData::DebugPrintArchetype(this_00,param_1);
      }
      puVar10 = puVar10 + 2;
    }
    iVar3 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) < iVar16) {
      iVar3 = iVar16;
    }
    iVar16 = iVar3;
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  FOutputDevice::LogfImpl
            (param_1,Log,
             L"FragmentHashToArchetypeMap: %d archetypes across %d buckets, longest bucket is %d");
  return;
}

// DebugRemoveAllEntities @ 147210840

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall FMassEntityManager::DebugRemoveAllEntities(FMassEntityManager *this)

{
  TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>
  *pTVar1;
  code *pcVar2;
  FMassEntityHandle FVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  IEntityStorageInterface *pIVar8;
  FMassArchetypeData *this_00;
  ulonglong uVar9;
  StorageSelector local_res8 [8];
  StorageSelector local_res10 [8];
  StorageSelector local_res18 [8];
  StorageSelector local_res20 [8];
  StorageSelector local_48 [8];
  int local_40;
  uint uStack_3c;
  
  pTVar1 = &this->EntityStorage;
  local_res8[0] = (StorageSelector)0x0;
  pIVar8 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res8,pTVar1);
  iVar6 = (**(code **)((longlong)*pIVar8 + 0xa0))(pIVar8);
  uVar9 = 1;
  if (1 < iVar6) {
    do {
      local_res10[0] = (StorageSelector)0x0;
      pIVar8 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
                 ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res10,pTVar1);
      cVar4 = (**(code **)((longlong)*pIVar8 + 0x68))(pIVar8,uVar9);
      if (cVar4 != '\0') {
        local_res18[0] = (StorageSelector)0x0;
        pIVar8 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
                   ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res18,pTVar1);
        this_00 = (FMassArchetypeData *)(**(code **)((longlong)*pIVar8 + 0x10))(pIVar8,uVar9);
        if ((this_00 == (FMassArchetypeData *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Archetype",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                               ,0x8af,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_res20[0] = (StorageSelector)0x0;
        local_40 = (int)uVar9;
        pIVar8 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
                   ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res20,pTVar1);
        uVar7 = (**(code **)((longlong)*pIVar8 + 0x40))(pIVar8,uVar9);
        FVar3.SerialNumber = uVar7;
        FVar3.Index = local_40;
        uStack_3c = uVar7;
        FMassArchetypeData::RemoveEntity(this_00,FVar3);
        local_48[0] = (StorageSelector)0x0;
        pIVar8 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
                   ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_48,pTVar1);
        (**(code **)((longlong)*pIVar8 + 0x98))(pIVar8,(ulonglong)uVar7 << 0x20 | uVar9);
      }
      uVar7 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar7;
    } while ((int)uVar7 < iVar6);
  }
  return;
}

// Deinitialize @ 1472109d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMassEntityManager::Deinitialize(FMassEntityManager *this)

{
  FDelegateHandle FVar1;
  FMassCommandBuffer *this_00;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  TStaticArray<TSharedPtr<FMassCommandBuffer,1>,2,4294967295> *pTVar5;
  ulonglong uVar6;
  FName local_res8;
  FName local_res10;
  FString local_38;
  FString local_28;
  
  if (this->InitializationState != Initialized) {
    if (FVisualLogger::bIsRecording != 0) {
      pUVar4 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
      if (pUVar4 == (UObject *)0x0) {
        ::FString::FString(&local_38,L"None");
      }
      else {
        local_res8.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
        local_res8.Number = *(uint *)&pUVar4->field_0x1c;
        ::FName::ToString(&local_res8,&local_38);
      }
      pUVar4 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
      FVisualLogger::CategorizedLogfImpl
                (pUVar4,(FName *)&LogMass.field_0x4,Log,
                 L"Calling %hs on already deinitialized entity manager owned by %s");
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    if (4 < (byte)LogMass._0_1_) {
      pUVar4 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
      if (pUVar4 == (UObject *)0x0) {
        ::FString::FString(&local_28,L"None");
      }
      else {
        local_res10.ComparisonIndex.Value = *(uint *)&pUVar4->field_0x18;
        local_res10.Number = *(uint *)&pUVar4->field_0x1c;
        ::FName::ToString(&local_res10,&local_28);
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    return;
  }
  FVar1.ID = (this->OnPostForkHandle).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnPostFork,
               FVar1);
  }
  for (pTVar5 = &this->DeferredCommandBuffers;
      pTVar5 != (TStaticArray<TSharedPtr<FMassCommandBuffer,1>,2,4294967295> *)
                &this->OpenedCommandBufferIndex;
      pTVar5 = (TStaticArray<TSharedPtr<FMassCommandBuffer,1>,2,4294967295> *)(pTVar5->Elements + 1)
      ) {
    this_00 = pTVar5->Elements[0].Object;
    if (this_00 != (FMassCommandBuffer *)0x0) {
      FMassCommandBuffer::CleanUp(this_00);
    }
  }
  FMassDebugger::UnregisterEntityManager(this);
  uVar6 = (ulonglong)(this->EntityStorage).TypeIndex;
  if ((2 < uVar6) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar6])(&this->EntityStorage);
  (this->EntityStorage).TypeIndex = '\0';
  FMassObserverManager::DeInitialize(&this->ObserverManager);
  this->InitializationState = Deinitialized;
  return;
}

// DestroyEntity @ 147212270

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassEntityManager::DestroyEntity(FMassEntityManager *this,FMassEntityHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  IEntityStorageInterface *pIVar3;
  FMassArchetypeData *this_00;
  FMassEntityHandle local_res10;
  StorageSelector local_res18 [8];
  StorageSelector local_res20 [8];
  
  local_res10 = param_1;
  if (UE::AITestSuite::TestsInProgress < 1) {
    if ((0 < (int)this->ProcessingScopeCount) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsProcessing() == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                           ,0x337,
                           L"Synchronous API function %hs called during mass processing. Use asynchronous API instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (0 < (int)this->ProcessingScopeCount) {
    if ((byte)LogTestableEnsures._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
    return;
  }
  bVar2 = IsEntityBuilt(this,param_1);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsEntityBuilt(EntityHandle)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntityManager.h"
                         ,0x232,L"Entity not yet created(ID: %d, SN:%d)"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res18[0] = (StorageSelector)0x0;
  pIVar3 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res18,&this->EntityStorage);
  this_00 = (FMassArchetypeData *)
            (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3,(ulonglong)param_1 & 0xffffffff);
  bVar2 = UE::Mass::Debug::FBreakpoint::CheckDestroyEntityBreakpoints(&local_res10);
  if (bVar2) {
    UE::Mass::Debug::FBreakpoint::DebugBreak();
  }
  if (this_00 != (FMassArchetypeData *)0x0) {
    FMassObserverManager::OnPreEntityDestroyed
              (&this->ObserverManager,(FMassArchetypeCompositionDescriptor *)this_00,param_1);
    FMassArchetypeData::RemoveEntity(this_00,param_1);
  }
  FMassTrace::EntityDestroyed(param_1);
  local_res20[0] = (StorageSelector)0x0;
  pIVar3 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res20,&this->EntityStorage);
  (**(code **)((longlong)*pIVar3 + 0x98))(pIVar3,param_1);
  return;
}

// DoEntityCompaction @ 147213930

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMassEntityManager::DoEntityCompaction(FMassEntityManager *this,double param_1)

{
  ulonglong uVar1;
  int iVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TMap<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  UObject *pUVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  longlong *plVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  undefined1 *puVar19;
  int iVar20;
  uint *puVar21;
  TMap<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar22;
  int iVar23;
  TBitArray<FDefaultBitArrayAllocator> *pTVar24;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_ec;
  LARGE_INTEGER local_e0;
  LARGE_INTEGER local_d8;
  TBitArray<FDefaultBitArrayAllocator> *local_d0;
  TMap<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_c8;
  TMap<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  
  iVar23 = 0;
  QueryPerformanceCounter(&local_e0);
  dVar6 = __real_4170000000000000;
  pTVar24 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->FragmentHashToArchetypeMap).field_0x10;
  iVar2 = *(int *)&(this->FragmentHashToArchetypeMap).field_0x28;
  pTVar22 = &this->FragmentHashToArchetypeMap;
  iVar18 = 0;
  uVar9 = 1;
  iVar20 = 0;
  dVar5 = (double)local_e0.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  iVar10 = 0;
  if (iVar2 != 0) {
    puVar21 = *(uint **)&(this->FragmentHashToArchetypeMap).field_0x20;
    if (puVar21 == (uint *)0x0) {
      puVar21 = (uint *)pTVar24;
    }
    uVar16 = *puVar21;
    iVar20 = 0;
    while (uVar16 == 0) {
      lVar12 = (longlong)iVar18;
      iVar20 = iVar20 + 0x20;
      iVar18 = iVar18 + 1;
      iVar10 = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_147213a2d;
      uVar16 = puVar21[lVar12 + 1];
    }
    uVar9 = -uVar16 & uVar16;
    uVar1 = (ulonglong)uVar9 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_res20 = (int)lVar12;
    iVar10 = iVar20 + -1 + local_res20;
    if (iVar2 < iVar10) {
      iVar10 = iVar2;
    }
  }
LAB_147213a2d:
  uVar16 = *(uint *)&(this->FragmentHashToArchetypeMap).field_0x28;
  uVar14 = uVar16 & 0xffffffe0;
  TStack_b8._padding_ = CONCAT44(uVar9,iVar18);
  TStack_b8.CurrentBitIndex = iVar10;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  iVar18 = (int)uVar16 >> 5;
  TStack_b8._28_4_ = iVar10;
  TStack_b8.BaseBitIndex = iVar20;
  uStack_98 = CONCAT44(uStack_ec,
                       *(int *)&(this->FragmentHashToArchetypeMap).field_0x8 -
                       *(int *)&(this->FragmentHashToArchetypeMap).field_0x34);
  local_d0 = pTVar24;
  local_c8 = pTVar22;
  local_c0 = pTVar22;
  TStack_b8.Array = pTVar24;
  if ((((int)uVar16 < 0) || (iVar2 < (int)uVar16)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar9 = *(uint *)&(this->FragmentHashToArchetypeMap).field_0x28;
  if (uVar16 != uVar9) {
    puVar19 = *(undefined1 **)&(this->FragmentHashToArchetypeMap).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = (undefined1 *)pTVar24;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar18 * 4);
    while (uVar16 == 0) {
      lVar12 = (longlong)iVar18;
      uVar14 = uVar14 + 0x20;
      iVar18 = iVar18 + 1;
      uVar16 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18) goto LAB_147213b41;
      uVar16 = *(uint *)(puVar19 + lVar12 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar16 = (int)lVar12 + -1 + uVar14;
    if ((int)uVar9 < (int)uVar16) {
      uVar16 = uVar9;
    }
  }
LAB_147213b41:
  while( true ) {
    pTVar7 = local_c0;
    if (*(int *)&local_c0->field_0x8 - *(int *)&local_c0->field_0x34 != (int)uStack_98) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_b8.CurrentBitIndex == uVar16) && (TStack_b8.Array == pTVar24)) &&
       (pTVar7 == pTVar22)) break;
    lVar12 = *(longlong *)pTVar7;
    lVar17 = (longlong)TStack_b8.CurrentBitIndex * 0x20;
    iVar2 = *(int *)(lVar17 + 0x10 + lVar12);
    plVar13 = *(longlong **)(lVar17 + 8 + lVar12);
    plVar15 = plVar13 + (longlong)iVar2 * 2;
    while( true ) {
      if (*(int *)(lVar17 + 0x10 + lVar12) != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FMassArchetypeData,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res18);
      }
      if (plVar13 == plVar15) break;
      QueryPerformanceCounter(&local_d8);
      dVar4 = (dVar5 + param_1) -
              ((double)local_d8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6);
      if (dVar4 <= 0.0) goto LAB_147213c3e;
      if ((*plVar13 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar18 = FMassArchetypeData::CompactEntities((FMassArchetypeData *)*plVar13,dVar4);
      iVar23 = iVar23 + iVar18;
      plVar13 = plVar13 + 2;
    }
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
    pTVar22 = local_c8;
    pTVar24 = local_d0;
  }
LAB_147213c3e:
  if (((FVisualLogger::bIsRecording != 0) && (iVar23 != 0)) && (FVisualLogger::bIsRecording != 0)) {
    pUVar11 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
    FVisualLogger::CategorizedLogfImpl
              (pUVar11,(FName *)&LogMass.field_0x4,Verbose,L"Entity Compaction: moved %d entities");
  }
  return;
}

// DoesEntityHaveElement @ 147214d10

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityManager::DoesEntityHaveElement
          (FMassEntityManager *this,FMassEntityHandle param_1,
          TNotNull<UScriptStruct_const_*> param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  IEntityStorageInterface *pIVar5;
  longlong *plVar6;
  UPackage *pUVar7;
  StorageSelector local_res8 [8];
  FMassEntityHandle local_res10;
  FName local_res18;
  FString local_28;
  
  local_res10 = param_1;
  bVar3 = UE::Mass::Private::IsElement(param_2);
  if (!bVar3) {
    local_res18 = (FName)(param_2.Val)->_padding_;
    ::FName::ToString(&local_res18,&local_28);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("UE::Mass::Private::IsElement(ElementType)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                       ,0x53e,
                       L"%hs: Only tags and fragments are considered \'elements\', type provided: %s"
                      );
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  bVar3 = IsEntityBuilt(this,param_1);
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsEntityBuilt(EntityHandle)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntityManager.h"
                         ,0x232,L"Entity not yet created(ID: %d, SN:%d)"), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  local_res8[0] = (StorageSelector)0x0;
  pIVar5 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res8,&this->EntityStorage);
  plVar6 = (longlong *)
           (**(code **)((longlong)*pIVar5 + 0x20))(pIVar5,(ulonglong)param_1 & 0xffffffff);
  if ((*plVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentArchetype",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x542,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (param_2.Val != (UScriptStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar7 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassTag,(UObject *)pUVar7,L"MassTag");
      if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_147214ef8;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_;
    if (((int)(param_2.Val)->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)((param_2.Val)->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      if ((*plVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      bVar3 = TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
              ::Contains((TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                          *)(*plVar6 + 0x20),param_2.Val);
      return bVar3;
    }
  }
LAB_147214ef8:
  if ((*plVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  bVar3 = TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
          ::Contains((TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                      *)*plVar6,param_2.Val);
  return bVar3;
}

// FindOrAddArchetypeGroupType @ 14721a7e0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FArchetypeGroupType __thiscall
FMassEntityManager::FindOrAddArchetypeGroupType(FMassEntityManager *this,FName param_1)

{
  TArray<FName_const_,TSizedDefaultAllocator<32>_> *pTVar1;
  longlong lVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  longlong in_R8;
  undefined1 *puVar10;
  FLLMScope local_res8 [2];
  longlong local_res18;
  int local_res20 [2];
  TPairInitializer<FName_const_&,int_const_&> local_38;
  longlong *local_28;
  int *local_20;
  
  local_res18 = in_R8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&LLMScope_Name991,L"Mass/EntityManager");
      _Init_thread_footer(&::_TSS0);
    }
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name991,false,None,Default,true);
  FMemScope::FMemScope((FMemScope *)&local_38.Value,&LLMScope_Name991,true);
  lVar3 = local_res18;
  uVar7 = ::GetTypeHash((FNameEntryId)(uint)local_res18);
  if (*(int *)&(this->GroupNameToTypeIndex).field_0x8 !=
      *(int *)&(this->GroupNameToTypeIndex).field_0x34) {
    puVar10 = *(undefined1 **)&(this->GroupNameToTypeIndex).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->GroupNameToTypeIndex).field_0x38;
    }
    iVar8 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(this->GroupNameToTypeIndex).field_0x48 - 1U &
                    uVar7 + (int)((ulonglong)lVar3 >> 0x20)) * 4);
    if (iVar8 != -1) {
      lVar3 = *(longlong *)&(this->GroupNameToTypeIndex).field_0x0;
      do {
        lVar2 = lVar3 + (longlong)iVar8 * 0x14;
        if (*(longlong *)(lVar3 + (longlong)iVar8 * 0x14) == local_res18) {
          piVar9 = (int *)(lVar2 + 8);
          if (lVar2 == 0) {
            piVar9 = (int *)0x0;
          }
          if (piVar9 != (int *)0x0) {
            iVar8 = *piVar9;
            goto LAB_14721a9ad;
          }
          break;
        }
        iVar8 = *(int *)(lVar2 + 0xc);
      } while (iVar8 != -1);
    }
  }
  pTVar1 = &this->GroupTypes;
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  if ((pFVar4 <= (FScriptContainerElement *)&local_res18) &&
     ((FScriptContainerElement *)&local_res18 < pFVar4 + (longlong)(this->GroupTypes).ArrayMax * 8))
  {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (FArchetypeGroupType)uVar7;
    }
  }
  local_res20[0] = (this->GroupTypes).ArrayNum;
  piVar9 = &(this->GroupTypes).ArrayMax;
  if (local_res20[0] == *piVar9) {
    local_res20[0] =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&pTVar1->AllocatorInstance,piVar9);
  }
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  (this->GroupTypes).ArrayNum = local_res20[0] + 1;
  *(longlong *)(pFVar4 + (longlong)local_res20[0] * 8) = local_res18;
  local_28 = &local_res18;
  local_20 = local_res20;
  TSet<TTuple<FName_const_,int_const_>,TDefaultMapHashableKeyFuncs<FName_const_,int_const_,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FName_const_&,int_const_&>_>
            ((TSet<TTuple<FName_const_,int_const_>,TDefaultMapHashableKeyFuncs<FName_const_,int_const_,0>,FDefaultSetAllocator>
              *)&this->GroupNameToTypeIndex,&local_38,(bool *)&local_28);
  iVar8 = local_res20[0];
LAB_14721a9ad:
  *(int *)param_1 = iVar8;
  FMemScope::~FMemScope((FMemScope *)&local_38.Value);
  FLLMScope::~FLLMScope(local_res8);
  return (uint)param_1.ComparisonIndex.Value;
}

// FlushCommands @ 14721b970

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassEntityManager::FlushCommands
          (FMassEntityManager *this,TSharedPtr<FMassCommandBuffer,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  FMassCommandBuffer *pFVar4;
  TStaticArray<TSharedPtr<FMassCommandBuffer,1>,2,4294967295> *pTVar5;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  bVar2 = IsInGameThread();
  if ((!bVar2) &&
     (local_res18[0] = bVar2,
     bVar2 = `FMassEntityManager::FlushCommands'::__l3::<lambda_1>::operator()(local_res18), !bVar2)
     ) {
    return;
  }
  if (0 < (int)this->ProcessingScopeCount) {
    local_res20[0] = 0;
    bVar2 = `FMassEntityManager::FlushCommands'::__l6::<lambda_2>::operator()(local_res20);
    if (!bVar2) {
      return;
    }
  }
  if (this->InitializationState != Initialized) {
    if (this->InitializationState == Uninitialized) {
      if (FVisualLogger::bIsRecording != 0) {
        pUVar3 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
        FVisualLogger::CategorizedLogfImpl
                  (pUVar3,(FName *)&LogMass.field_0x4,Warning,
                   L"FlushCommands called before Initialize call, which means this FMassEntityManager instance is not ready to process commands and will cancel them."
                  );
      }
      if (2 < (byte)LogMass._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
      }
    }
    if (this->InitializationState == Deinitialized) {
      if (FVisualLogger::bIsRecording != 0) {
        pUVar3 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
        FVisualLogger::CategorizedLogfImpl
                  (pUVar3,(FName *)&LogMass.field_0x4,Log,
                   L"FlushCommands called after Deinitialize call, which means this FMassEntityManager instance is going away, can\'t process commands and will cancel them."
                  );
      }
      if (4 < (byte)LogMass._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
      }
    }
    if ((param_1->Object == (FMassCommandBuffer *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    FMassCommandBuffer::CleanUp(param_1->Object);
    return;
  }
  if ((param_1->Object != (FMassCommandBuffer *)0x0) &&
     (pFVar4 = TSharedPtr<FMassCommandBuffer,1>::operator->(param_1),
     0 < pFVar4->ActiveCommandsCounter)) {
    pTVar5 = &this->DeferredCommandBuffers;
    if (pTVar5 != (TStaticArray<TSharedPtr<FMassCommandBuffer,1>,2,4294967295> *)
                  &this->OpenedCommandBufferIndex) {
      do {
        if (pTVar5->Elements[0].Object == param_1->Object) goto LAB_14721baf9;
        pTVar5 = (TStaticArray<TSharedPtr<FMassCommandBuffer,1>,2,4294967295> *)
                 (pTVar5->Elements + 1);
      } while (pTVar5 != (TStaticArray<TSharedPtr<FMassCommandBuffer,1>,2,4294967295> *)
                         &this->OpenedCommandBufferIndex);
    }
    AppendCommands(this,param_1);
  }
LAB_14721baf9:
  FlushCommands(this);
  return;
}

// FlushCommands @ 14721bb20

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMassEntityManager::FlushCommands(FMassEntityManager *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  byte bVar4;
  UObject *pUVar5;
  int iVar6;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (local_res10[0] = bVar3,
     bVar3 = `FMassEntityManager::FlushCommands'::__l3::<lambda_1>::operator()(local_res10), !bVar3)
     ) {
    return;
  }
  if (0 < (int)this->ProcessingScopeCount) {
    local_res18[0] = 0;
    bVar3 = `FMassEntityManager::FlushCommands'::__l6::<lambda_2>::operator()(local_res18);
    if (!bVar3) {
      return;
    }
  }
  if ((this->bCommandBufferFlushingInProgress == (atomic<bool>)0x0) &&
     ((int)this->ProcessingScopeCount < 1)) {
    LOCK();
    this->bCommandBufferFlushingInProgress = (atomic<bool>)0x1;
    UNLOCK();
    iVar6 = 0;
    do {
      bVar1 = this->OpenedCommandBufferIndex;
      bVar4 = bVar1 - 1 & 1;
      this->OpenedCommandBufferIndex = bVar4;
      if (((this->DeferredCommandBuffers).Elements[bVar4].Object == (FMassCommandBuffer *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (0 < ((this->DeferredCommandBuffers).Elements[bVar4].Object)->ActiveCommandsCounter) {
        local_res20[0] = 0;
        `FMassEntityManager::FlushCommands'::__l13::<lambda_4>::operator()(local_res20);
      }
      if (((this->DeferredCommandBuffers).Elements[bVar1].Object == (FMassCommandBuffer *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FMassCommandBuffer::Flush((this->DeferredCommandBuffers).Elements[bVar1].Object,this);
      bVar1 = this->OpenedCommandBufferIndex;
      if (((this->DeferredCommandBuffers).Elements[bVar1].Object == (FMassCommandBuffer *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (((this->DeferredCommandBuffers).Elements[bVar1].Object)->ActiveCommandsCounter < 1)
      goto LAB_14721bcec;
      iVar6 = iVar6 + 1;
    } while (iVar6 < 5);
    if (FVisualLogger::bIsRecording != 0) {
      pUVar5 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
      FVisualLogger::CategorizedLogfImpl
                (pUVar5,(FName *)&LogMass.field_0x4,Error,
                 L"Reached loop count limit while flushing commands. Limiting the number of commands pushed during commands flushing could help."
                );
    }
    if (1 < (byte)LogMass._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
    }
LAB_14721bcec:
    LOCK();
    this->bCommandBufferFlushingInProgress = (atomic<bool>)0x0;
    UNLOCK();
  }
  return;
}

// ForEachArchetypeFragmentType @ 14721c000

void __cdecl
FMassEntityManager::ForEachArchetypeFragmentType
          (FMassArchetypeHandle *param_1,TFunction<void___cdecl(UScriptStruct_const_*)> *param_2)

{
  int iVar1;
  FMassArchetypeData *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  ForElementType<FMassArchetypeFragmentConfig> FVar8;
  ForElementType<FMassArchetypeFragmentConfig> FVar9;
  undefined1 local_58 [8];
  undefined8 local_50;
  code *local_48;
  longlong local_38 [3];
  longlong *local_20;
  
  if ((param_1->DataPtr).Object == (FMassArchetypeData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArchetypeHandle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                       ,0x1ff,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_48 = *(code **)param_2;
  pFVar2 = (param_1->DataPtr).Object;
  local_20 = (longlong *)0x0;
  if (local_48 != (code *)0x0) {
    puVar6 = (undefined8 *)&param_2->field_0x10;
    if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
      puVar6 = *(undefined8 **)&param_2->field_0x28;
    }
    (**(code **)*puVar6)(puVar6,local_38);
  }
  iVar1 = (pFVar2->FragmentConfigs).ArrayNum;
  FVar9 = (pFVar2->FragmentConfigs).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<FMassArchetypeFragmentConfig>)0x0) {
    FVar9 = (ForElementType<FMassArchetypeFragmentConfig>)&pFVar2->FragmentConfigs;
  }
  FVar8 = (ForElementType<FMassArchetypeFragmentConfig>)((longlong)FVar9 + (longlong)iVar1 * 0x10);
  while( true ) {
    if ((pFVar2->FragmentConfigs).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMassArchetypeFragmentConfig_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_58);
    }
    if (FVar9 == FVar8) break;
    local_50 = *(undefined8 *)FVar9;
    UE::Core::Private::Function::CheckCallable(local_48);
    pcVar3 = local_48;
    plVar7 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar7 = local_20;
    }
    uVar5 = (**(code **)(*plVar7 + 8))();
    (*pcVar3)(uVar5,&local_50);
    FVar9 = (ForElementType<FMassArchetypeFragmentConfig>)((longlong)FVar9 + 0x10);
  }
  if (local_48 != (code *)0x0) {
    plVar7 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar7 = local_20;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if (*(longlong *)param_2 != 0) {
    plVar7 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar7 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return;
}

// GetArchetypeComposition @ 14721ea00

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassArchetypeCompositionDescriptor * __thiscall
FMassEntityManager::GetArchetypeComposition(FMassEntityManager *this,FMassArchetypeHandle *param_1)

{
  code *pcVar1;
  bool bVar2;
  FMassArchetypeCompositionDescriptor *pFVar3;
  
  if ((param_1->DataPtr).Object != (FMassArchetypeData *)0x0) {
    return &((param_1->DataPtr).Object)->CompositionDescriptor;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("ArchetypeHandle.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                     ,0x1ff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMassArchetypeCompositionDescriptor *)(*pcVar1)();
    return pFVar3;
  }
  return &((param_1->DataPtr).Object)->CompositionDescriptor;
}

// GetArchetypeForEntity @ 14721ebb0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassArchetypeHandle * __thiscall
FMassEntityManager::GetArchetypeForEntity
          (FMassEntityManager *this,FMassArchetypeHandle *__return_storage_ptr__,
          FMassEntityHandle param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  bool bVar2;
  IEntityStorageInterface *pIVar3;
  undefined8 *puVar4;
  StorageSelector local_res20 [8];
  
  bVar2 = IsEntityValid(this,param_1);
  if (bVar2) {
    local_res20[0] = (StorageSelector)0x0;
    pIVar3 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
               ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res20,&this->EntityStorage);
    puVar4 = (undefined8 *)
             (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,(ulonglong)param_1 & 0xffffffff);
    (__return_storage_ptr__->DataPtr).Object = (FMassArchetypeData *)*puVar4;
    pTVar1 = (TReferenceControllerBase<1> *)puVar4[1];
    (__return_storage_ptr__->DataPtr).SharedReferenceCount.ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  else {
    (__return_storage_ptr__->DataPtr).Object = (FMassArchetypeData *)0x0;
    (__return_storage_ptr__->DataPtr).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  return __return_storage_ptr__;
}

// GetArchetypeForEntityUnsafe @ 14721ec50

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassArchetypeHandle * __thiscall
FMassEntityManager::GetArchetypeForEntityUnsafe
          (FMassEntityManager *this,FMassArchetypeHandle *__return_storage_ptr__,
          FMassEntityHandle param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  IEntityStorageInterface *pIVar5;
  FMassArchetypeHandle *pFVar6;
  undefined8 *puVar7;
  StorageSelector local_res8 [8];
  StorageSelector local_res10 [8];
  
  local_res8[0] = (StorageSelector)0x0;
  pIVar5 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res8,&this->EntityStorage);
  cVar3 = (**(code **)((longlong)*pIVar5 + 0x48))(pIVar5,(ulonglong)param_1 & 0xffffffff);
  if (cVar3 == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetEntityStorageInterface().IsValidIndex(Entity.Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                       ,0x21d,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FMassArchetypeHandle *)(*pcVar2)();
      return pFVar6;
    }
  }
  local_res10[0] = (StorageSelector)0x0;
  pIVar5 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res10,&this->EntityStorage);
  puVar7 = (undefined8 *)
           (**(code **)((longlong)*pIVar5 + 0x20))(pIVar5,(ulonglong)param_1 & 0xffffffff);
  (__return_storage_ptr__->DataPtr).Object = (FMassArchetypeData *)*puVar7;
  pTVar1 = (TReferenceControllerBase<1> *)puVar7[1];
  (__return_storage_ptr__->DataPtr).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetConstSharedFragmentDataStruct @ 147220620

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FConstStructView * __thiscall
FMassEntityManager::GetConstSharedFragmentDataStruct
          (FMassEntityManager *this,FConstStructView *__return_storage_ptr__,
          FMassEntityHandle param_1,UScriptStruct *param_2)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UPackage *pUVar6;
  FConstStructView *pFVar7;
  IEntityStorageInterface *pIVar8;
  longlong lVar9;
  int *piVar10;
  UScriptStruct *pUVar11;
  uint uVar12;
  longlong *plVar13;
  UScriptStruct *pUVar14;
  UScriptStruct *pUVar15;
  longlong *plVar16;
  StorageSelector local_res8 [8];
  FString local_28;
  
  if (param_2 == (UScriptStruct *)0x0) {
    ::FString::FString(&local_28,L"None");
  }
  else {
    if (Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassConstSharedFragment,(UObject *)pUVar6,
                           L"MassConstSharedFragment");
      if (Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton !=
          (UScriptStruct *)0x0) goto LAB_147220676;
    }
    else {
LAB_147220676:
      iVar1 = (int)(Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton)->
                   _padding_;
      if (((int)param_2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_2->_padding_ + (longlong)iVar1 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton)->_padding_))
      {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) goto LAB_14722070d;
    }
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2,&local_28,(UObject *)0x0);
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("UE::Mass::IsA<FMassConstSharedFragment>(ConstSharedFragmentType)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntityManager.h"
                     ,0x262,
                     L"GetConstSharedFragmentDataStruct called with an invalid fragment type \'%s\'"
                    );
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FConstStructView *)(*pcVar3)();
    return pFVar7;
  }
LAB_14722070d:
  local_res8[0] = (StorageSelector)0x0;
  pIVar8 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res8,&this->EntityStorage);
  lVar9 = (**(code **)((longlong)*pIVar8 + 0x10))(pIVar8,(ulonglong)param_1 & 0xffffffff);
  if ((lVar9 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentArchetype",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x77a,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FConstStructView *)(*pcVar3)();
    return pFVar7;
  }
  piVar10 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
            FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                         *)(lVar9 + 0x1d0),param_1.Index);
  pUVar14 = (UScriptStruct *)0x0;
  uVar5 = *piVar10 / *(int *)(lVar9 + 0x2a8);
  uVar12 = 0;
  if ((int)uVar5 < *(int *)(lVar9 + 0x1c8)) {
    uVar12 = ~uVar5 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FConstStructView *)(*pcVar3)();
    return pFVar7;
  }
  plVar13 = *(longlong **)(*(longlong *)(lVar9 + 0x1c0) + 0x70 + (longlong)(int)uVar5 * 0x90);
  plVar16 = plVar13 + (longlong)
                      *(int *)(*(longlong *)(lVar9 + 0x1c0) + 0x78 + (longlong)(int)uVar5 * 0x90) *
                      2;
  do {
    pUVar15 = pUVar14;
    if (plVar13 == plVar16) {
LAB_147220821:
      __return_storage_ptr__->ScriptStruct = pUVar14;
      __return_storage_ptr__->StructMemory = (uchar *)pUVar15;
      return __return_storage_ptr__;
    }
    plVar2 = (longlong *)*plVar13;
    pUVar11 = pUVar14;
    if (plVar2 != (longlong *)0x0) {
      pUVar11 = (UScriptStruct *)*plVar2;
    }
    if (pUVar11 == param_2) {
      if (plVar2 != (longlong *)0x0) {
        pUVar14 = (UScriptStruct *)*plVar2;
        lVar9 = (longlong)*(short *)((longlong)&pUVar14->_padding_ + 4);
        pUVar15 = (UScriptStruct *)(lVar9 + 7 + (longlong)plVar2 & -lVar9);
      }
      goto LAB_147220821;
    }
    plVar13 = plVar13 + 2;
  } while( true );
}

// GetFragmentDataStruct @ 147221e40

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FStructView * __thiscall
FMassEntityManager::GetFragmentDataStruct
          (FMassEntityManager *this,FStructView *__return_storage_ptr__,FMassEntityHandle param_1,
          UScriptStruct *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UPackage *pUVar4;
  FStructView *pFVar5;
  IEntityStorageInterface *pIVar6;
  FMassArchetypeData *this_00;
  uchar *puVar7;
  StorageSelector local_res8 [8];
  FString local_28;
  
  if (param_2 == (UScriptStruct *)0x0) {
    ::FString::FString(&local_28,L"None");
  }
  else {
    if (Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassFragment,(UObject *)pUVar4,L"MassFragment"
                          );
      if (Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton != (UScriptStruct *)0x0)
      goto LAB_147221e96;
    }
    else {
LAB_147221e96:
      iVar1 = (int)(Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton)->_padding_;
      if (((int)param_2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_2->_padding_ + (longlong)iVar1 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton)->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) goto LAB_147221f2d;
    }
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2,&local_28,(UObject *)0x0);
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("UE::Mass::IsA<FMassFragment>(FragmentType)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntityManager.h"
                     ,0x24b,L"GetFragmentDataStruct called with an invalid fragment type \'%s\'");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FStructView *)(*pcVar2)();
    return pFVar5;
  }
LAB_147221f2d:
  local_res8[0] = (StorageSelector)0x0;
  pIVar6 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res8,&this->EntityStorage);
  this_00 = (FMassArchetypeData *)
            (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6,(ulonglong)param_1 & 0xffffffff);
  if ((this_00 == (FMassArchetypeData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentArchetype",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x771,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FStructView *)(*pcVar2)();
    return pFVar5;
  }
  puVar7 = FMassArchetypeData::GetFragmentDataForEntity(this_00,param_2,param_1.Index);
  __return_storage_ptr__->StructMemory = puVar7;
  __return_storage_ptr__->ScriptStruct = param_2;
  return __return_storage_ptr__;
}

// GetGroupForEntity @ 147222c10

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FArchetypeGroupHandle __thiscall
FMassEntityManager::GetGroupForEntity
          (FMassEntityManager *this,FMassEntityHandle param_1,FArchetypeGroupType param_2)

{
  undefined4 uVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  bool bVar4;
  IEntityStorageInterface *pIVar5;
  longlong *plVar6;
  int in_register_00000084;
  FMassEntityHandle FVar7;
  longlong lVar8;
  uint in_R9D;
  StorageSelector local_18 [16];
  
  FVar7.SerialNumber = in_register_00000084;
  FVar7.Index = param_2.Identifier;
  bVar4 = IsEntityValid(this,FVar7);
  if (bVar4) {
    local_18[0] = (StorageSelector)0x0;
    pIVar5 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
               ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_18,&this->EntityStorage);
    plVar6 = (longlong *)(**(code **)((longlong)*pIVar5 + 0x20))(pIVar5,param_2.Identifier);
    pTVar2 = (TReferenceControllerBase<1> *)plVar6[1];
    lVar3 = *plVar6;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if (lVar3 != 0) {
      if ((-1 < (int)in_R9D) && ((int)in_R9D < *(int *)(lVar3 + 0x298))) {
        lVar8 = *(longlong *)(lVar3 + 0x290);
        if (*(longlong *)(lVar3 + 0x290) == 0) {
          lVar8 = lVar3 + 0x280;
        }
        if ((*(uint *)(lVar8 + (ulonglong)(in_R9D >> 5) * 4) >> (in_R9D & 0x1f) & 1) != 0) {
          uVar1 = *(undefined4 *)(*(longlong *)(lVar3 + 0x270) + (longlong)(int)in_R9D * 8);
          *(uint *)param_1 = in_R9D;
          *(undefined4 *)((longlong)param_1 + 4) = uVar1;
          return (FArchetypeGroupHandle)param_1;
        }
      }
      *(uint *)param_1 = in_R9D;
      *(undefined4 *)((longlong)param_1 + 4) = 0xffffffff;
      return (FArchetypeGroupHandle)param_1;
    }
  }
  else {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  *(undefined8 *)param_1 = 0xffffffffffffffff;
  return (FArchetypeGroupHandle)param_1;
}

// GetGroupsForArchetype @ 147222d10

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FArchetypeGroups * __thiscall
FMassEntityManager::GetGroupsForArchetype(FMassEntityManager *this,FMassArchetypeHandle *param_1)

{
  FMassArchetypeData *pFVar1;
  
  pFVar1 = (param_1->DataPtr).Object;
  if (pFVar1 == (FMassArchetypeData *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        atexit(`FMassEntityManager::GetGroupsForArchetype'::__l5::
               _dynamic_atexit_destructor_for__DummyGroups__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    return &DummyGroups;
  }
  return &pFVar1->Groups;
}

// GetMatchingArchetypes @ 147222f50

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassEntityManager::GetMatchingArchetypes
          (FMassEntityManager *this,FMassFragmentRequirements *param_1,
          TArray<FMassArchetypeHandle,TSizedDefaultAllocator<32>_> *param_2,uint param_3)

{
  FMassArchetypeCompositionDescriptor *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UObject *pUVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 local_res20 [8];
  undefined8 local_58;
  longlong local_50;
  FString local_48;
  FString local_38;
  
  if ((int)param_3 < (this->AllArchetypes).ArrayNum) {
    lVar10 = (longlong)(int)param_3 << 4;
    uVar9 = param_3;
    do {
      uVar8 = ~uVar9 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar9 < (this->AllArchetypes).ArrayNum) {
        uVar4 = uVar8;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((*(longlong *)((this->AllArchetypes).AllocatorInstance.Data + lVar10) == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("AllArchetypes[ArchetypeIndex].IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                             ,0x7b3,
                             L"We never expect to get any invalid shared ptrs in AllArchetypes"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar4 = 0;
      if ((int)uVar9 < (this->AllArchetypes).ArrayNum) {
        uVar4 = uVar8;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = *(FMassArchetypeCompositionDescriptor **)
                ((this->AllArchetypes).AllocatorInstance.Data + lVar10);
      if (*(uint *)&pFVar1[4].Tags.field_0x14 <= param_3) {
        local_res20[0] = 0;
        `FMassEntityManager::GetMatchingArchetypes'::__l4::<lambda_1>::operator()(local_res20);
      }
      bVar3 = FMassFragmentRequirements::DoesArchetypeMatchRequirements(param_1,pFVar1);
      if (bVar3) {
        uVar4 = 0;
        if ((int)uVar9 < (this->AllArchetypes).ArrayNum) {
          uVar4 = uVar8;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar7 = (this->AllArchetypes).AllocatorInstance.Data;
        local_58 = *(undefined8 *)(pFVar7 + lVar10);
        local_50 = *(longlong *)(pFVar7 + lVar10 + 8);
        if (local_50 != 0) {
          LOCK();
          *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
          UNLOCK();
        }
        pFVar7 = (param_2->AllocatorInstance).Data;
        if (((pFVar7 <= (FScriptContainerElement *)&local_58) &&
            ((FScriptContainerElement *)&local_58 < pFVar7 + (longlong)param_2->ArrayMax * 0x10)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar5 = param_2->ArrayNum;
        if (iVar5 == param_2->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar5 + 1;
        pFVar7 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
        *(undefined8 *)pFVar7 = local_58;
        *(longlong *)(pFVar7 + 8) = local_50;
        local_50 = 0;
        local_58 = 0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      else {
        if (FVisualLogger::bIsRecording != 0) {
          FMassDebugger::GetArchetypeRequirementCompatibilityDescription(&local_48,param_1,pFVar1);
          pUVar6 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
          FVisualLogger::CategorizedLogfImpl(pUVar6,(FName *)&LogMass.field_0x4,All,L"%s");
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
        }
        if (6 < (byte)LogMass._0_1_) {
          FMassDebugger::GetArchetypeRequirementCompatibilityDescription(&local_38,param_1,pFVar1);
          UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
        }
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x10;
    } while ((int)uVar9 < (this->AllArchetypes).ArrayNum);
  }
  return;
}

// GetMatchingArchetypes @ 1472232e0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityManager::GetMatchingArchetypes
          (FMassEntityManager *this,FMassFragmentRequirements *param_1,
          TArray<FMassArchetypeHandle,TSizedDefaultAllocator<32>_> *param_2)

{
  GetMatchingArchetypes(this,param_1,param_2,0);
  return;
}

// GetOrCreateSuitableArchetype @ 147223c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassArchetypeHandle * __thiscall
FMassEntityManager::GetOrCreateSuitableArchetype
          (FMassEntityManager *this,FMassArchetypeHandle *__return_storage_ptr__,
          FMassArchetypeHandle *param_1,
          TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
          *param_2,TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
                   *param_3,FMassArchetypeCreationParams *param_4)

{
  FMassArchetypeData *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FMassArchetypeHandle *pFVar5;
  undefined1 auStack_128 [32];
  FMassArchetypeCreationParams *local_108;
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  TBitArray<FDefaultBitArrayAllocator> local_98;
  TBitArray<FDefaultBitArrayAllocator> local_78;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_128;
  local_108 = param_4;
  if (((param_1->DataPtr).Object == (FMassArchetypeData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArchetypeHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                         ,0x1ff,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FMassArchetypeHandle *)(*pcVar3)();
    return pFVar5;
  }
  pFVar1 = (param_1->DataPtr).Object;
  bVar4 = FStructTypeBitSet::FConstBitSetContainer::operator==
                    ((FConstBitSetContainer *)param_2,
                     (FConstBitSetContainer *)&(pFVar1->CompositionDescriptor).SharedFragments);
  if ((bVar4) &&
     (bVar4 = FStructTypeBitSet::FConstBitSetContainer::operator==
                        ((FConstBitSetContainer *)param_3,
                         (FConstBitSetContainer *)
                         &(pFVar1->CompositionDescriptor).ConstSharedFragments), bVar4)) {
    (__return_storage_ptr__->DataPtr).Object = pFVar1;
    pTVar2 = (param_1->DataPtr).SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->DataPtr).SharedReferenceCount.ReferenceController = pTVar2;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      return __return_storage_ptr__;
    }
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    return __return_storage_ptr__;
  }
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_f8,(FBitSetContainer *)pFVar1);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_d8,(FBitSetContainer *)&(pFVar1->CompositionDescriptor).Tags)
  ;
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_b8,
             (FBitSetContainer *)&(pFVar1->CompositionDescriptor).ChunkFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&local_98,
             (FBitSetContainer *)&(pFVar1->CompositionDescriptor).SharedFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&local_78,
             (FBitSetContainer *)&(pFVar1->CompositionDescriptor).ConstSharedFragments);
  if (&local_98 != (TBitArray<FDefaultBitArrayAllocator> *)param_2) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              (&local_98,(TBitArray<FDefaultBitArrayAllocator> *)param_2);
  }
  if (&local_78 != (TBitArray<FDefaultBitArrayAllocator> *)param_3) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              (&local_78,(TBitArray<FDefaultBitArrayAllocator> *)param_3);
  }
  CreateArchetype(this,__return_storage_ptr__,(FMassArchetypeCompositionDescriptor *)local_f8,
                  local_108);
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
  if (local_98.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_98.AllocatorInstance.SecondaryData);
  }
  if ((void *)local_b8._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._16_8_);
  }
  if ((void *)local_d8._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._16_8_);
  }
  if ((void *)local_f8._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_f8._16_8_);
  }
  return __return_storage_ptr__;
}

// GetOrMakeCreationContext @ 147223de0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> * __thiscall
FMassEntityManager::GetOrMakeCreationContext
          (FMassEntityManager *this,
          TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *__return_storage_ptr__)

{
  FMassObserverManager::GetOrMakeCreationContext(&this->ObserverManager,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetReferencerName @ 147225580

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FString * __thiscall
FMassEntityManager::GetReferencerName(FMassEntityManager *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FMassEntityManager");
  return __return_storage_ptr__;
}

// GetRequirementAccessDetector @ 1472259c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassRequirementAccessDetector * __thiscall
FMassEntityManager::GetRequirementAccessDetector(FMassEntityManager *this)

{
  return &this->RequirementAccessDetector;
}

// GetResourceSizeEx @ 1472267b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityManager::GetResourceSizeEx(FMassEntityManager *this,FResourceSizeEx *param_1)

{
  TMap<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar1;
  FScriptContainerElement *pFVar2;
  FMassCommandBuffer *pFVar3;
  code *pcVar4;
  FResourceSizeEx *this_00;
  TMap<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar5;
  bool bVar6;
  uint uVar7;
  IEntityStorageInterface *pIVar8;
  ulonglong uVar9;
  longlong lVar10;
  uchar *puVar11;
  ulong64 uVar12;
  ulonglong uVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  longlong *plVar16;
  uint uVar17;
  uint uVar18;
  longlong *plVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 *puVar22;
  uint *puVar23;
  TStaticArray<TSharedPtr<FMassCommandBuffer,1>,2,4294967295> *pTVar24;
  TBitArray<FDefaultBitArrayAllocator> *pTVar25;
  uint uVar26;
  FMassEntityManager *local_res8;
  FResourceSizeEx *local_res10;
  StorageSelector local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_c8;
  undefined1 local_c7 [7];
  ulong64 local_c0;
  uchar *local_b8;
  TMap<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_b0;
  uint uStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  uint uStack_94;
  uint local_90;
  uint uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  TBitArray<FDefaultBitArrayAllocator> *local_80;
  TMap<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  uVar21 = 0;
  uVar26 = 0;
  uVar9 = uVar21;
  local_res8 = this;
  local_res10 = param_1;
  if (this->InitializationState == Initialized) {
    local_res18[0] = (StorageSelector)0x0;
    pIVar8 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
               ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res18,&this->EntityStorage);
    uVar9 = (**(code **)((longlong)*pIVar8 + 0x60))(pIVar8);
  }
  uVar18 = *(uint *)&(this->FragmentHashToArchetypeMap).field_0x48;
  uVar13 = uVar21;
  if (1 < uVar18) {
    uVar13 = (longlong)(int)uVar18 << 2;
  }
  uVar18 = *(uint *)&(this->FragmentTypeToArchetypeMap).field_0x48;
  uVar20 = uVar21;
  if (1 < uVar18) {
    uVar20 = (longlong)(int)uVar18 << 2;
  }
  pTVar24 = &this->DeferredCommandBuffers;
  puVar11 = &this->OpenedCommandBufferIndex;
  local_c0 = (ulonglong)((*(int *)&(this->FragmentTypeToArchetypeMap).field_0x2c + 0x1fU >> 5) << 2)
             + ((longlong)*(int *)&(this->FragmentTypeToArchetypeMap).field_0xc +
               (longlong)*(int *)&(this->FragmentHashToArchetypeMap).field_0xc) * 0x20 + uVar20 +
             uVar13 + (ulonglong)
                      ((*(int *)&(this->FragmentHashToArchetypeMap).field_0x2c + 0x1fU >> 5) << 2) +
             uVar9;
  local_b8 = puVar11;
  if (pTVar24 != (TStaticArray<TSharedPtr<FMassCommandBuffer,1>,2,4294967295> *)puVar11) {
    do {
      pFVar3 = pTVar24->Elements[0].Object;
      uVar9 = uVar21;
      if (pFVar3 != (FMassCommandBuffer *)0x0) {
        pFVar15 = (pFVar3->CommandInstances).AllocatorInstance.Data;
        iVar14 = (pFVar3->CommandInstances).ArrayNum;
        pFVar2 = pFVar15 + (longlong)iVar14 * 8;
        while( true ) {
          if ((pFVar3->CommandInstances).ArrayNum != iVar14) {
            local_res20[0] = 0;
            `TCheckedPointerIterator<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res20);
          }
          if (pFVar15 == pFVar2) break;
          if (*(longlong **)pFVar15 == (longlong *)0x0) {
            pFVar15 = pFVar15 + 8;
          }
          else {
            lVar10 = (**(code **)(**(longlong **)pFVar15 + 0x20))();
            uVar9 = uVar9 + lVar10;
            pFVar15 = pFVar15 + 8;
          }
        }
        pFVar15 = (pFVar3->AppendedCommandInstances).AllocatorInstance.Data;
        iVar14 = (pFVar3->AppendedCommandInstances).ArrayNum;
        pFVar2 = pFVar15 + (longlong)iVar14 * 8;
        while( true ) {
          if ((pFVar3->AppendedCommandInstances).ArrayNum != iVar14) {
            local_c8 = 0;
            `TCheckedPointerIterator<TUniquePtr<FMassBatchedCommand,TDefaultDelete<FMassBatchedCommand>_>_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(&local_c8);
          }
          if (pFVar15 == pFVar2) break;
          if (*(longlong **)pFVar15 == (longlong *)0x0) {
            pFVar15 = pFVar15 + 8;
          }
          else {
            lVar10 = (**(code **)(**(longlong **)pFVar15 + 0x20))();
            uVar9 = uVar9 + lVar10;
            pFVar15 = pFVar15 + 8;
          }
        }
        puVar11 = local_b8;
        uVar9 = uVar9 + (longlong)(pFVar3->CommandInstances).ArrayMax * 8;
      }
      local_c0 = local_c0 + uVar9;
      pTVar24 = (TStaticArray<TSharedPtr<FMassCommandBuffer,1>,2,4294967295> *)
                (pTVar24->Elements + 1);
      this = local_res8;
    } while (pTVar24 != (TStaticArray<TSharedPtr<FMassCommandBuffer,1>,2,4294967295> *)puVar11);
  }
  FResourceSizeEx::AddDedicatedSystemMemoryBytes(local_res10,local_c0);
  pTVar25 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->FragmentHashToArchetypeMap).field_0x10;
  uStack_a4 = 1;
  uVar18 = *(uint *)&(this->FragmentHashToArchetypeMap).field_0x28;
  pTVar1 = &this->FragmentHashToArchetypeMap;
  local_90 = 0;
  uStack_94 = uVar26;
  if (uVar18 != 0) {
    puVar23 = *(uint **)&(this->FragmentHashToArchetypeMap).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)pTVar25;
    }
    uVar7 = *puVar23;
    uVar9 = uVar21;
    local_90 = 0;
    uVar26 = 0;
    while (uVar7 == 0) {
      iVar14 = (int)uVar9;
      local_90 = (int)uVar21 + 0x20;
      uVar21 = (ulonglong)local_90;
      uVar26 = iVar14 + 1;
      uVar9 = (ulonglong)uVar26;
      uStack_94 = uVar18;
      if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar26)
      goto LAB_147226a0f;
      uVar7 = puVar23[(longlong)iVar14 + 1];
    }
    uStack_a4 = -uVar7 & uVar7;
    uVar21 = (ulonglong)uStack_a4 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uStack_94 = (local_90 - 1) + (int)lVar10;
    local_b8 = (uchar *)CONCAT44(local_b8._4_4_,(int)lVar10);
    if ((int)uVar18 < (int)uStack_94) {
      uStack_94 = uVar18;
    }
  }
LAB_147226a0f:
  uVar7 = *(uint *)&(this->FragmentHashToArchetypeMap).field_0x28;
  iStack_88 = *(int *)&(this->FragmentHashToArchetypeMap).field_0x8 -
              *(int *)&(this->FragmentHashToArchetypeMap).field_0x34;
  uStack_98 = 0xffffffff;
  uVar17 = uVar7 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uStack_a4,uVar26);
  TStack_70.CurrentBitIndex = uStack_94;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar7 >> 5;
  TStack_70._28_4_ = uStack_94;
  TStack_70.BaseBitIndex = local_90;
  uStack_50 = CONCAT44(uStack_84,iStack_88);
  local_b0 = pTVar1;
  uStack_a8 = uVar26;
  local_a0 = (undefined1 *)pTVar25;
  uStack_8c = uStack_94;
  local_80 = pTVar25;
  local_78 = pTVar1;
  TStack_70.Array = pTVar25;
  if ((((int)uVar7 < 0) || ((int)uVar18 < (int)uVar7)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar26 = *(uint *)&(this->FragmentHashToArchetypeMap).field_0x28;
  if (uVar7 != uVar26) {
    puVar22 = *(undefined1 **)&(this->FragmentHashToArchetypeMap).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = (undefined1 *)pTVar25;
    }
    uVar18 = -1 << ((byte)uVar7 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar14 * 4);
    while (uVar18 == 0) {
      lVar10 = (longlong)iVar14;
      uVar17 = uVar17 + 0x20;
      iVar14 = iVar14 + 1;
      uVar7 = uVar26;
      if ((int)((uVar26 - 1) + ((int)(uVar26 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_147226b10;
      uVar18 = *(uint *)(puVar22 + lVar10 * 4 + 4);
    }
    uVar21 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_c0 = CONCAT44(local_c0._4_4_,(int)lVar10);
    uVar7 = (int)lVar10 + -1 + uVar17;
    if ((int)uVar26 < (int)uVar7) {
      uVar7 = uVar26;
    }
  }
LAB_147226b10:
  while( true ) {
    pTVar5 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      local_res8 = (FMassEntityManager *)((ulonglong)local_res8 & 0xffffffffffffff00);
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_res8);
    }
    this_00 = local_res10;
    if (((TStack_70.CurrentBitIndex == uVar7) && (TStack_70.Array == pTVar25)) && (pTVar5 == pTVar1)
       ) break;
    lVar10 = (longlong)TStack_70.CurrentBitIndex * 0x20 + *(longlong *)pTVar5;
    iVar14 = *(int *)(lVar10 + 0x10);
    plVar16 = *(longlong **)(lVar10 + 8);
    plVar19 = plVar16 + (longlong)iVar14 * 2;
    while( true ) {
      if (*(int *)(lVar10 + 0x10) != iVar14) {
        local_c7[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FMassArchetypeData,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_c7);
      }
      if (plVar16 == plVar19) break;
      if ((*plVar16 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar12 = FMassArchetypeData::GetAllocatedSize((FMassArchetypeData *)*plVar16);
      FResourceSizeEx::AddDedicatedSystemMemoryBytes(this_00,uVar12);
      plVar16 = plVar16 + 2;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    pTVar25 = local_80;
  }
  return;
}

// GetSharedFragmentDataStruct @ 147227240

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FConstStructView * __thiscall
FMassEntityManager::GetSharedFragmentDataStruct
          (FMassEntityManager *this,FConstStructView *__return_storage_ptr__,
          FMassEntityHandle param_1,UScriptStruct *param_2)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UPackage *pUVar6;
  FConstStructView *pFVar7;
  IEntityStorageInterface *pIVar8;
  longlong lVar9;
  int *piVar10;
  UScriptStruct *pUVar11;
  uint uVar12;
  longlong *plVar13;
  UScriptStruct *pUVar14;
  UScriptStruct *pUVar15;
  longlong *plVar16;
  StorageSelector local_res8 [8];
  FString local_28;
  
  if (param_2 == (UScriptStruct *)0x0) {
    ::FString::FString(&local_28,L"None");
  }
  else {
    if (Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton == (UScriptStruct *)0x0
       ) {
      pUVar6 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassSharedFragment,(UObject *)pUVar6,
                           L"MassSharedFragment");
      if (Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton !=
          (UScriptStruct *)0x0) goto LAB_147227296;
    }
    else {
LAB_147227296:
      iVar1 = (int)(Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton)->_padding_
      ;
      if (((int)param_2->_padding_ < iVar1) ||
         ((longlong *)*(undefined1 **)(param_2->_padding_ + (longlong)iVar1 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton)->_padding_)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) goto LAB_14722732d;
    }
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2,&local_28,(UObject *)0x0);
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("UE::Mass::IsA<FMassSharedFragment>(SharedFragmentType)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntityManager.h"
                     ,0x287,
                     L"GetSharedFragmentDataStruct called with an invalid fragment type \'%s\'");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FConstStructView *)(*pcVar3)();
    return pFVar7;
  }
LAB_14722732d:
  local_res8[0] = (StorageSelector)0x0;
  pIVar8 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res8,&this->EntityStorage);
  lVar9 = (**(code **)((longlong)*pIVar8 + 0x10))(pIVar8,(ulonglong)param_1 & 0xffffffff);
  if ((lVar9 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentArchetype",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x784,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FConstStructView *)(*pcVar3)();
    return pFVar7;
  }
  piVar10 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
            FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                         *)(lVar9 + 0x1d0),param_1.Index);
  pUVar14 = (UScriptStruct *)0x0;
  uVar5 = *piVar10 / *(int *)(lVar9 + 0x2a8);
  uVar12 = 0;
  if ((int)uVar5 < *(int *)(lVar9 + 0x1c8)) {
    uVar12 = ~uVar5 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FConstStructView *)(*pcVar3)();
    return pFVar7;
  }
  plVar13 = *(longlong **)(*(longlong *)(lVar9 + 0x1c0) + 0x80 + (longlong)(int)uVar5 * 0x90);
  plVar16 = plVar13 + (longlong)
                      *(int *)(*(longlong *)(lVar9 + 0x1c0) + 0x88 + (longlong)(int)uVar5 * 0x90) *
                      2;
  do {
    pUVar15 = pUVar14;
    if (plVar13 == plVar16) {
LAB_147227443:
      __return_storage_ptr__->ScriptStruct = pUVar14;
      __return_storage_ptr__->StructMemory = (uchar *)pUVar15;
      return __return_storage_ptr__;
    }
    plVar2 = (longlong *)*plVar13;
    pUVar11 = pUVar14;
    if (plVar2 != (longlong *)0x0) {
      pUVar11 = (UScriptStruct *)*plVar2;
    }
    if (pUVar11 == param_2) {
      if (plVar2 != (longlong *)0x0) {
        pUVar14 = (UScriptStruct *)*plVar2;
        lVar9 = (longlong)*(short *)((longlong)&pUVar14->_padding_ + 4);
        pUVar15 = (UScriptStruct *)(lVar9 + 7 + (longlong)plVar2 & -lVar9);
      }
      goto LAB_147227443;
    }
    plVar13 = plVar13 + 2;
  } while( true );
}

// GetWorld @ 1472290b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall FMassEntityManager::GetWorld(FMassEntityManager *this)

{
  bool bVar1;
  UObject *pUVar2;
  UWorld *pUVar3;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->Owner).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x0001472290e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar3 = (UWorld *)
             (**(code **)(*(longlong *)pUVar2 + 0x180))
                       (pUVar2,*(code **)(*(longlong *)pUVar2 + 0x180));
    return pUVar3;
  }
  return (UWorld *)0x0;
}

// Initialize @ 14722bc10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
FMassEntityManager::Initialize
          (FMassEntityManager *this,
          TVariant<FMassEntityManager_InitParams_SingleThreaded,FMassEntityManager_InitParams_Concurrent>
          *param_1)

{
  int iVar1;
  UScriptStruct *pUVar2;
  UStruct *pUVar3;
  code *pcVar4;
  bool bVar5;
  DWORD DVar6;
  EInternalObjectFlags EVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  UObject *pUVar11;
  IEntityStorageInterface *pIVar12;
  FMassCommandBuffer *lpCriticalSection;
  TSharedRef<FMassEntityManager,1> *pTVar13;
  FDelegateHandle FVar14;
  UClass *pUVar15;
  UPackage *pUVar16;
  UStruct *pUVar17;
  FMassCommandBuffer *pFVar18;
  longlong lVar19;
  TSharedPtr<FMassCommandBuffer,1> *this_00;
  undefined1 auStackY_1c8 [32];
  TObjectIterator<UScriptStruct> local_198;
  StorageSelector local_180 [4];
  FLLMScope local_17c;
  FString local_178;
  FString local_168;
  FName local_158;
  FName local_150;
  FEntityStorageInitializer local_148;
  TRawPtrProxy<FMassCommandBuffer> local_140;
  UStruct *local_138;
  UStruct *local_130;
  UStruct *local_128;
  UStruct *local_120;
  UStruct *local_118;
  FMemScope local_110;
  TSharedRef<FMassEntityManager,1> local_108;
  FScriptContainerElement *local_f8;
  undefined8 uStack_f0;
  TSharedRef<FMassEntityManager,1> local_e8;
  undefined1 local_d8 [16];
  void *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_b8 [16];
  void *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 local_98 [16];
  void *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [16];
  void *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58 [16];
  void *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if (this->InitializationState == Initialized) {
    if (FVisualLogger::bIsRecording != 0) {
      pUVar11 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
      if (pUVar11 == (UObject *)0x0) {
        ::FString::FString(&local_168,L"None");
      }
      else {
        local_158.ComparisonIndex.Value = *(uint *)&pUVar11->field_0x18;
        local_158.Number = *(uint *)&pUVar11->field_0x1c;
        ::FName::ToString(&local_158,&local_168);
      }
      pUVar11 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
      FVisualLogger::CategorizedLogfImpl
                (pUVar11,(FName *)&LogMass.field_0x4,Log,
                 L"Calling %hs on already initialized entity manager owned by %s");
      if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_168.Data.AllocatorInstance.Data);
      }
    }
    if (4 < (byte)LogMass._0_1_) {
      pUVar11 = FWeakObjectPtr::Get(&(this->Owner).WeakPtr);
      if (pUVar11 == (UObject *)0x0) {
        ::FString::FString(&local_178,L"None");
      }
      else {
        local_150.ComparisonIndex.Value = *(uint *)&pUVar11->field_0x18;
        local_150.Number = *(uint *)&pUVar11->field_0x1c;
        ::FName::ToString(&local_150,&local_178);
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
      if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_178.Data.AllocatorInstance.Data);
      }
    }
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name172,L"Mass/EntityManager");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(&local_17c,LLMScope_Name172,false,None,Default,true);
  FMemScope::FMemScope(&local_110,&LLMScope_Name172,true);
  local_148.EntityStorage = &this->EntityStorage;
  (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<UE::Mass::Private::FEntityStorageInitializer,0,1,0,TVariant<FMassEntityManager_InitParams_SingleThreaded,FMassEntityManager_InitParams_Concurrent>_const&___ptr64>(unsigned___int64,UE::Mass::Private::FEntityStorageInitializer&&___ptr64,TIntegerSequence<unsigned___int64,0,1>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FMassEntityManager_InitParams_SingleThreaded,FMassEntityManager_InitParams_Concurrent>_const&___ptr64)'
    ::__l2::Invokers[param_1->TypeIndex])(&local_148,param_1);
  local_180[0] = (StorageSelector)0x0;
  pIVar12 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
              ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_180,&this->EntityStorage);
  this->DebugEntityStoragePtr = pIVar12;
  for (this_00 = (this->DeferredCommandBuffers).Elements;
      this_00 != (TSharedPtr<FMassCommandBuffer,1> *)&this->OpenedCommandBufferIndex;
      this_00 = this_00 + 1) {
    lpCriticalSection = ::operator_new(0x60);
    pFVar18 = (FMassCommandBuffer *)0x0;
    if (lpCriticalSection != (FMassCommandBuffer *)0x0) {
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)lpCriticalSection,4000);
      *(undefined4 *)&(lpCriticalSection->PendingBatchCommandsDetector).field_0x0 = 0;
      (lpCriticalSection->CommandInstances).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (lpCriticalSection->CommandInstances).ArrayNum = 0;
      (lpCriticalSection->CommandInstances).ArrayMax = 0;
      (lpCriticalSection->AppendedCommandInstances).AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (lpCriticalSection->AppendedCommandInstances).ArrayNum = 0;
      (lpCriticalSection->AppendedCommandInstances).ArrayMax = 0;
      lpCriticalSection->ActiveCommandsCounter = 0;
      lpCriticalSection->bIsFlushing = false;
      DVar6 = GetCurrentThreadId();
      lpCriticalSection->OwnerThreadId = DVar6;
      pFVar18 = lpCriticalSection;
    }
    local_140.Object = pFVar18;
    TSharedPtr<FMassCommandBuffer,1>::operator=<FMassCommandBuffer>(this_00,&local_140);
  }
  bVar5 = FForkProcessHelper::IsForkRequested();
  if (bVar5) {
    local_178.Data.ArrayNum = 0;
    local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)OnPostFork;
    pTVar13 = TSharedFromThis<FMassEntityManager,1>::AsShared
                        ((TSharedFromThis<FMassEntityManager,1> *)&this->_padding_,&local_e8);
    uStack_f0 = CONCAT44(local_178.Data.ArrayMax,local_178.Data.ArrayNum);
    local_f8 = local_178.Data.AllocatorInstance.Data;
    FVar14 = TMulticastDelegateRegistration<void___cdecl(enum_EForkProcessRole),FDefaultDelegateUserPolicy>
             ::AddSP<FMassEntityManager,1>
                       (&FCoreDelegates::OnPostFork,&local_108,(pmf_d46394bb *)pTVar13);
                    /* WARNING: Load size is inaccurate */
    (this->OnPostForkHandle).ID = *FVar14.ID;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_e8.SharedReferenceCount.ReferenceController);
  }
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_5c = 0x80;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_7c = 0x80;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_9c = 0x80;
  local_c8 = (void *)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_198.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.ObjectArray.ArrayNum = 0;
  local_198.ObjectArray.ArrayMax = 0;
  local_198.Index = 0xffffffff;
  EVar7 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar15 = Z_Construct_UClass_UScriptStruct_NoRegister();
  GetObjectsOfClass(pUVar15,&local_198.ObjectArray,true,RF_ClassDefaultObject,
                    EVar7 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
LAB_14722bf80:
  do {
    TObjectIterator<UScriptStruct>::Advance(&local_198);
    lVar19 = (longlong)local_198.Index;
    if ((local_198.Index < 0) || (local_198.ObjectArray.ArrayNum <= local_198.Index)) {
      if (local_198.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.ObjectArray.AllocatorInstance.Data);
      }
      this->bFirstCommandFlush = true;
      this->InitializationState = Initialized;
      bVar5 = IsInGameThread();
      if ((!bVar5) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassRequirementAccessDetector.cpp"
                             ,0x13,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FMassRequirementAccessDetector::AddDetectors
                (&this->RequirementAccessDetector,
                 &FMassFragmentBitSetStructTrackerWrapper::StructTracker);
      FMassRequirementAccessDetector::AddDetectors
                (&this->RequirementAccessDetector,
                 &FMassChunkFragmentBitSetStructTrackerWrapper::StructTracker);
      FMassRequirementAccessDetector::AddDetectors
                (&this->RequirementAccessDetector,
                 &FMassSharedFragmentBitSetStructTrackerWrapper::StructTracker);
      FMassRequirementAccessDetector::AddDetectors
                (&this->RequirementAccessDetector,
                 &FMassConstSharedFragmentBitSetStructTrackerWrapper::StructTracker);
      FMassRequirementAccessDetector::AddDetectors
                (&this->RequirementAccessDetector,
                 &FMassExternalSubsystemBitSetStructTrackerWrapper::StructTracker);
      FMassDebugger::RegisterEntityManager(this);
      if (local_c8 != (void *)0x0) {
        FMemory::Free(local_c8);
      }
      if (local_a8 != (void *)0x0) {
        FMemory::Free(local_a8);
      }
      if (local_88 != (void *)0x0) {
        FMemory::Free(local_88);
      }
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      if (local_48 != (void *)0x0) {
        FMemory::Free(local_48);
      }
      FMemScope::~FMemScope(&local_110);
      FLLMScope::~FLLMScope(&local_17c);
      return;
    }
    uVar8 = 0;
    if (local_198.Index < local_198.ObjectArray.ArrayNum) {
      uVar8 = (uint)~local_198.Index >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar19 = *(longlong *)(local_198.ObjectArray.AllocatorInstance.Data + lVar19 * 8);
    uVar8 = 0;
    iVar10 = local_198.ObjectArray.ArrayNum;
    if (lVar19 != 0) {
      if (Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton == (UScriptStruct *)0x0) {
        pUVar16 = Z_Construct_UPackage__Script_MassEntity();
        Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FMassFragment,(UObject *)pUVar16,
                             L"MassFragment");
        iVar10 = local_198.ObjectArray.ArrayNum;
        if (Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton == (UScriptStruct *)0x0)
        goto LAB_14722c1af;
      }
      iVar1 = (int)(Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton)->_padding_;
      if ((*(int *)(lVar19 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar19 + 0x30) + (longlong)iVar1 * 8) !=
          &(Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton)->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        lVar19 = (longlong)local_198.Index;
        uVar9 = uVar8;
        if (local_198.Index < iVar10) {
          uVar9 = (uint)~local_198.Index >> 0x1f;
        }
        if (uVar9 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar10 = local_198.ObjectArray.ArrayNum;
        }
        pUVar2 = *(UScriptStruct **)(local_198.ObjectArray.AllocatorInstance.Data + lVar19 * 8);
        if (Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton == (UScriptStruct *)0x0)
        {
          pUVar16 = Z_Construct_UPackage__Script_MassEntity();
          Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FMassFragment,(UObject *)pUVar16,
                               L"MassFragment");
          iVar10 = local_198.ObjectArray.ArrayNum;
        }
        if (pUVar2 != Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton) {
          lVar19 = (longlong)local_198.Index;
          if (local_198.Index < iVar10) {
            uVar8 = (uint)~local_198.Index >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pUVar3 = *(UStruct **)(local_198.ObjectArray.AllocatorInstance.Data + lVar19 * 8);
          pUVar17 = TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                    ::GetBaseUStruct();
          if (pUVar17 == (UStruct *)0x0) {
LAB_14722c17b:
            local_138 = pUVar3;
            bVar5 = `TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                    ::Add'::__l6::<lambda_1>::operator()(&local_138);
            if (!bVar5) goto LAB_14722bf80;
          }
          else {
            iVar10 = (int)pUVar17->_padding_;
            if (((int)pUVar3->_padding_ < iVar10) ||
               ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar10 * 8) !=
                &pUVar17->_padding_)) {
              bVar5 = false;
            }
            else {
              bVar5 = true;
            }
            if (!bVar5) goto LAB_14722c17b;
          }
          iVar10 = FStructTracker::FindOrAddStructTypeIndex
                             (&FMassFragmentBitSetStructTrackerWrapper::StructTracker,pUVar3);
          FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)local_58,iVar10);
        }
        goto LAB_14722bf80;
      }
    }
LAB_14722c1af:
    lVar19 = (longlong)local_198.Index;
    uVar9 = uVar8;
    if (local_198.Index < iVar10) {
      uVar9 = (uint)~local_198.Index >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar10 = local_198.ObjectArray.ArrayNum;
    }
    lVar19 = *(longlong *)(local_198.ObjectArray.AllocatorInstance.Data + lVar19 * 8);
    if (lVar19 == 0) {
LAB_14722c38a:
      lVar19 = (longlong)local_198.Index;
      uVar9 = uVar8;
      if (local_198.Index < iVar10) {
        uVar9 = (uint)~local_198.Index >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar10 = local_198.ObjectArray.ArrayNum;
      }
      lVar19 = *(longlong *)(local_198.ObjectArray.AllocatorInstance.Data + lVar19 * 8);
      if (lVar19 != 0) {
        if (Z_Registration_Info_UScriptStruct_FMassChunkFragment.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar16 = Z_Construct_UPackage__Script_MassEntity();
          Z_Registration_Info_UScriptStruct_FMassChunkFragment.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FMassChunkFragment,(UObject *)pUVar16,
                               L"MassChunkFragment");
          iVar10 = local_198.ObjectArray.ArrayNum;
          if (Z_Registration_Info_UScriptStruct_FMassChunkFragment.OuterSingleton ==
              (UScriptStruct *)0x0) goto LAB_14722c565;
        }
        pUVar2 = Z_Registration_Info_UScriptStruct_FMassChunkFragment.OuterSingleton;
        iVar1 = (int)(Z_Registration_Info_UScriptStruct_FMassChunkFragment.OuterSingleton)->
                     _padding_;
        if ((*(int *)(lVar19 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar19 + 0x30) + (longlong)iVar1 * 8) !=
            &(Z_Registration_Info_UScriptStruct_FMassChunkFragment.OuterSingleton)->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          lVar19 = (longlong)local_198.Index;
          uVar9 = uVar8;
          if (local_198.Index < iVar10) {
            uVar9 = (uint)~local_198.Index >> 0x1f;
          }
          if (uVar9 == 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar10 = local_198.ObjectArray.ArrayNum;
          }
          if (*(UScriptStruct **)(local_198.ObjectArray.AllocatorInstance.Data + lVar19 * 8) !=
              pUVar2) {
            lVar19 = (longlong)local_198.Index;
            if (local_198.Index < iVar10) {
              uVar8 = (uint)~local_198.Index >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pUVar3 = *(UStruct **)(local_198.ObjectArray.AllocatorInstance.Data + lVar19 * 8);
            pUVar17 = TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                      ::GetBaseUStruct();
            if (pUVar17 == (UStruct *)0x0) {
LAB_14722c531:
              local_128 = pUVar3;
              bVar5 = `TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                      ::Add'::__l6::<lambda_1>::operator()(&local_128);
              if (!bVar5) goto LAB_14722bf80;
            }
            else {
              iVar10 = (int)pUVar17->_padding_;
              if (((int)pUVar3->_padding_ < iVar10) ||
                 ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar10 * 8) !=
                  &pUVar17->_padding_)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if (!bVar5) goto LAB_14722c531;
            }
            iVar10 = FStructTracker::FindOrAddStructTypeIndex
                               (&FMassChunkFragmentBitSetStructTrackerWrapper::StructTracker,pUVar3)
            ;
            FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)local_98,iVar10);
          }
          goto LAB_14722bf80;
        }
      }
LAB_14722c565:
      lVar19 = (longlong)local_198.Index;
      uVar9 = uVar8;
      if (local_198.Index < iVar10) {
        uVar9 = (uint)~local_198.Index >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar10 = local_198.ObjectArray.ArrayNum;
      }
      lVar19 = *(longlong *)(local_198.ObjectArray.AllocatorInstance.Data + lVar19 * 8);
      if (lVar19 != 0) {
        if (Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar16 = Z_Construct_UPackage__Script_MassEntity();
          Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FMassSharedFragment,(UObject *)pUVar16,
                               L"MassSharedFragment");
          iVar10 = local_198.ObjectArray.ArrayNum;
          if (Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton ==
              (UScriptStruct *)0x0) goto LAB_14722c778;
        }
        iVar1 = (int)(Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton)->
                     _padding_;
        if ((*(int *)(lVar19 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar19 + 0x30) + (longlong)iVar1 * 8) !=
            &(Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton)->_padding_)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          lVar19 = (longlong)local_198.Index;
          uVar9 = uVar8;
          if (local_198.Index < iVar10) {
            uVar9 = (uint)~local_198.Index >> 0x1f;
          }
          if (uVar9 == 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar10 = local_198.ObjectArray.ArrayNum;
          }
          pUVar2 = *(UScriptStruct **)(local_198.ObjectArray.AllocatorInstance.Data + lVar19 * 8);
          if (Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton ==
              (UScriptStruct *)0x0) {
            pUVar16 = Z_Construct_UPackage__Script_MassEntity();
            Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton =
                 GetStaticStruct(Z_Construct_UScriptStruct_FMassSharedFragment,(UObject *)pUVar16,
                                 L"MassSharedFragment");
            iVar10 = local_198.ObjectArray.ArrayNum;
          }
          if (pUVar2 != Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton) {
            lVar19 = (longlong)local_198.Index;
            if (local_198.Index < iVar10) {
              uVar8 = (uint)~local_198.Index >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pUVar3 = *(UStruct **)(local_198.ObjectArray.AllocatorInstance.Data + lVar19 * 8);
            pUVar17 = TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                      ::GetBaseUStruct();
            if (pUVar17 == (UStruct *)0x0) {
LAB_14722c744:
              local_120 = pUVar3;
              bVar5 = `TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                      ::Add'::__l6::<lambda_1>::operator()(&local_120);
              if (!bVar5) goto LAB_14722bf80;
            }
            else {
              iVar10 = (int)pUVar17->_padding_;
              if (((int)pUVar3->_padding_ < iVar10) ||
                 ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar10 * 8) !=
                  &pUVar17->_padding_)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if (!bVar5) goto LAB_14722c744;
            }
            iVar10 = FStructTracker::FindOrAddStructTypeIndex
                               (&FMassSharedFragmentBitSetStructTrackerWrapper::StructTracker,pUVar3
                               );
            FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)local_b8,iVar10);
          }
          goto LAB_14722bf80;
        }
      }
LAB_14722c778:
      lVar19 = (longlong)local_198.Index;
      uVar9 = uVar8;
      if (local_198.Index < iVar10) {
        uVar9 = (uint)~local_198.Index >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar10 = local_198.ObjectArray.ArrayNum;
      }
      lVar19 = *(longlong *)(local_198.ObjectArray.AllocatorInstance.Data + lVar19 * 8);
      if (lVar19 != 0) {
        if (Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar16 = Z_Construct_UPackage__Script_MassEntity();
          Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FMassConstSharedFragment,(UObject *)pUVar16
                               ,L"MassConstSharedFragment");
          iVar10 = local_198.ObjectArray.ArrayNum;
          if (Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton ==
              (UScriptStruct *)0x0) goto LAB_14722bf80;
        }
        iVar1 = (int)(Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton)->
                     _padding_;
        if ((*(int *)(lVar19 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar19 + 0x30) + (longlong)iVar1 * 8) !=
            &(Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton)->_padding_)
           ) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          lVar19 = (longlong)local_198.Index;
          uVar9 = uVar8;
          if (local_198.Index < iVar10) {
            uVar9 = (uint)~local_198.Index >> 0x1f;
          }
          if (uVar9 == 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar10 = local_198.ObjectArray.ArrayNum;
          }
          pUVar2 = *(UScriptStruct **)(local_198.ObjectArray.AllocatorInstance.Data + lVar19 * 8);
          if (Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton ==
              (UScriptStruct *)0x0) {
            pUVar16 = Z_Construct_UPackage__Script_MassEntity();
            Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton =
                 GetStaticStruct(Z_Construct_UScriptStruct_FMassConstSharedFragment,
                                 (UObject *)pUVar16,L"MassConstSharedFragment");
            iVar10 = local_198.ObjectArray.ArrayNum;
          }
          if (pUVar2 != Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton) {
            lVar19 = (longlong)local_198.Index;
            if (local_198.Index < iVar10) {
              uVar8 = (uint)~local_198.Index >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pUVar3 = *(UStruct **)(local_198.ObjectArray.AllocatorInstance.Data + lVar19 * 8);
            pUVar17 = TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                      ::GetBaseUStruct();
            if (pUVar17 == (UStruct *)0x0) {
LAB_14722c957:
              local_118 = pUVar3;
              bVar5 = `TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                      ::Add'::__l6::<lambda_1>::operator()(&local_118);
              if (!bVar5) goto LAB_14722bf80;
            }
            else {
              iVar10 = (int)pUVar17->_padding_;
              if (((int)pUVar3->_padding_ < iVar10) ||
                 ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar10 * 8) !=
                  &pUVar17->_padding_)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              if (!bVar5) goto LAB_14722c957;
            }
            iVar10 = FStructTracker::FindOrAddStructTypeIndex
                               (&FMassConstSharedFragmentBitSetStructTrackerWrapper::StructTracker,
                                pUVar3);
            FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)local_d8,iVar10);
          }
        }
      }
      goto LAB_14722bf80;
    }
    if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar16 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassTag,(UObject *)pUVar16,L"MassTag");
      iVar10 = local_198.ObjectArray.ArrayNum;
      if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_14722c38a;
    }
    pUVar2 = Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton;
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_;
    if ((*(int *)(lVar19 + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar19 + 0x30) + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14722c38a;
    lVar19 = (longlong)local_198.Index;
    uVar9 = uVar8;
    if (local_198.Index < iVar10) {
      uVar9 = (uint)~local_198.Index >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar10 = local_198.ObjectArray.ArrayNum;
    }
  } while (*(UScriptStruct **)(local_198.ObjectArray.AllocatorInstance.Data + lVar19 * 8) == pUVar2)
  ;
  lVar19 = (longlong)local_198.Index;
  if (local_198.Index < iVar10) {
    uVar8 = (uint)~local_198.Index >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pUVar3 = *(UStruct **)(local_198.ObjectArray.AllocatorInstance.Data + lVar19 * 8);
  pUVar17 = TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
            ::GetBaseUStruct();
  if (pUVar17 == (UStruct *)0x0) {
LAB_14722c356:
    local_130 = pUVar3;
    bVar5 = `TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
            ::Add'::__l6::<lambda_1>::operator()(&local_130);
    if (!bVar5) goto LAB_14722bf80;
  }
  else {
    iVar10 = (int)pUVar17->_padding_;
    if (((int)pUVar3->_padding_ < iVar10) ||
       ((longlong *)*(undefined1 **)(pUVar3->_padding_ + (longlong)iVar10 * 8) !=
        &pUVar17->_padding_)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_14722c356;
  }
  iVar10 = FStructTracker::FindOrAddStructTypeIndex
                     (&FMassTagBitSetStructTrackerWrapper::StructTracker,pUVar3);
  FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)local_78,iVar10);
  goto LAB_14722bf80;
}

// Initialize @ 14722cb00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall FMassEntityManager::Initialize(FMassEntityManager *this)

{
  undefined1 auStack_48 [32];
  TVariant<FMassEntityManager_InitParams_SingleThreaded,FMassEntityManager_InitParams_Concurrent>
  local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  local_28.TypeIndex = '\0';
  Initialize(this,&local_28);
  return;
}

// InternalAddFragmentListToEntity @ 14722ffe0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityManager::InternalAddFragmentListToEntity
          (FMassEntityManager *this,FMassEntityHandle param_1,
          TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  IEntityStorageInterface *pIVar4;
  TSharedPtr<FMassArchetypeData,1> *pTVar5;
  StorageSelector local_res8 [16];
  StorageSelector local_res18 [8];
  StorageSelector local_res20 [8];
  FMassArchetypeHandle local_58;
  FMassArchetypeCreationParams local_48;
  
  bVar2 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty((FConstBitSetContainer *)param_2);
  if (bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InFragments.IsEmpty() == false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                       ,0x4a6,
                       L"%hs is intended for internal calls with non empty NewFragments parameter");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8[0] = (StorageSelector)0x0;
  pIVar4 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res8,&this->EntityStorage);
  cVar3 = (**(code **)((longlong)*pIVar4 + 0x48))(pIVar4,(ulonglong)param_1 & 0xffffffff);
  if (cVar3 == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetEntityStorageInterface().IsValidIndex(Entity.Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                       ,0x4a7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res18[0] = (StorageSelector)0x0;
  pIVar4 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res18,&this->EntityStorage);
  pTVar5 = (TSharedPtr<FMassArchetypeData,1> *)
           (**(code **)((longlong)*pIVar4 + 0x20))(pIVar4,(ulonglong)param_1 & 0xffffffff);
  if (pTVar5->Object == (FMassArchetypeData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OldArchetype.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                       ,0x4a9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if (pTVar5->Object == (FMassArchetypeData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  local_48.ChunkMemorySize = pTVar5->Object->ChunkMemorySize;
  local_48.DebugName.ComparisonIndex.Value = 0;
  local_48.DebugName.Number = 0;
  local_48.DebugColor.field0_0x0.Bits = (FColor_u_0)0x0;
  CreateArchetype(this,&local_58,pTVar5,param_2,&local_48);
  if (local_58.DataPtr.Object == pTVar5->Object) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewArchetypeHandle.DataPtr != OldArchetype",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                       ,0x4ad,
                       L"%hs is intended for internal calls with non overlapping fragment list.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (local_58.DataPtr.Object == (FMassArchetypeData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArchetypeHandle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                       ,0x1ff,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (pTVar5->Object == (FMassArchetypeData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&(local_58.DataPtr.Object)->DebugNames,&pTVar5->Object->DebugNames);
  if (pTVar5->Object == (FMassArchetypeData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMassArchetypeData::MoveEntityToAnotherArchetype
            (pTVar5->Object,param_1,local_58.DataPtr.Object,
             (FMassArchetypeSharedFragmentValues *)0x0);
  local_res20[0] = (StorageSelector)0x0;
  pIVar4 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res20,&this->EntityStorage);
  (**(code **)((longlong)*pIVar4 + 0x28))(pIVar4,(ulonglong)param_1 & 0xffffffff,&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.DataPtr.SharedReferenceCount.ReferenceController);
  return;
}

// InternalAddFragmentListToEntityChecked @ 147230290

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> * __thiscall
FMassEntityManager::InternalAddFragmentListToEntityChecked
          (FMassEntityManager *this,
          TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
          *__return_storage_ptr__,FMassEntityHandle param_1,
          TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
          *param_2)

{
  FConstBitSetContainer *this_00;
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  IEntityStorageInterface *pIVar4;
  longlong *plVar5;
  TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *pTVar6;
  uint uVar7;
  ForElementType<unsigned_int> _Dst;
  ForElementType<unsigned_int> _Src_00;
  undefined1 auStackY_138 [32];
  StorageSelector local_f8;
  <lambda_1> local_f7 [7];
  ForAnyElementType local_f0;
  int local_e8;
  int local_e4;
  FOutputDevice local_e0;
  FString local_d0;
  TBitArray<FDefaultBitArrayAllocator> local_c0;
  TBitArray<FDefaultBitArrayAllocator> local_a0;
  undefined1 local_80 [32];
  undefined1 local_60 [32];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_138;
  local_f8 = (StorageSelector)0x0;
  pIVar4 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(&local_f8,&this->EntityStorage);
  plVar5 = (longlong *)
           (**(code **)((longlong)*pIVar4 + 0x20))(pIVar4,(ulonglong)param_1 & 0xffffffff);
  if ((*plVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("OldArchetype",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x496,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
              *)(*pcVar2)();
    return pTVar6;
  }
  if (4 < (byte)LogMass._0_1_) {
    if ((*plVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                *)(*pcVar2)();
      return pTVar6;
    }
    this_00 = (FConstBitSetContainer *)*plVar5;
    bVar3 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                      (this_00,(TBitArray<FDefaultBitArrayAllocator> *)param_2);
    if (bVar3) {
      if ((this_00 == (FConstBitSetContainer *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                  *)(*pcVar2)();
        return pTVar6;
      }
      local_a0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_a0.NumBits = 0;
      local_a0.MaxBits = 0x80;
      UE::Core::Private::
      BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseAND<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
                ((TBitArray<FDefaultBitArrayAllocator> *)param_2,
                 (TBitArray<FDefaultBitArrayAllocator> *)*plVar5,&local_a0,MinSize,local_f7);
      local_c0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_c0.MaxBits = 0x80;
      local_c0.NumBits = 0;
      uVar7 = local_a0.NumBits + 0x1fU & 0xffffffe0;
      if (0x80 < (int)uVar7) {
        local_c0.MaxBits = uVar7;
        TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_c0,0);
      }
      local_c0.NumBits = local_a0.NumBits;
      if (local_a0.NumBits != 0) {
        _Src_00 = (ForElementType<unsigned_int>)&local_a0;
        if (local_a0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          _Src_00 = local_a0.AllocatorInstance.SecondaryData;
        }
        _Dst = (ForElementType<unsigned_int>)&local_c0;
        if (local_c0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          _Dst = local_c0.AllocatorInstance.SecondaryData;
        }
        memcpy((void *)_Dst,(void *)_Src_00,(ulonglong)(local_a0.NumBits + 0x1fU >> 5) << 2);
      }
      if (local_a0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_a0.AllocatorInstance.SecondaryData);
      }
      ::FString::FString(&local_d0,L"");
      FOutputDevice::FOutputDevice(&local_e0);
      local_e0.bAutoEmitLineTerminator = false;
      local_e0._padding_ = (longlong)&___7FStringOutputDevice__6B_;
      TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
      ::DebugGetStringDesc
                ((TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                  *)&local_c0,&local_e0);
      _Src.Data = local_d0.Data.AllocatorInstance.Data;
      local_f0.Data = (FScriptContainerElement *)0x0;
      local_e8 = local_d0.Data.ArrayNum;
      if (local_d0.Data.ArrayNum == 0) {
        local_e4 = local_d0.Data.ArrayNum;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_d0.Data.ArrayNum,0,&local_f0,local_d0.Data.ArrayNum,&local_e4);
        memcpy(local_f0.Data,_Src.Data,(longlong)local_d0.Data.ArrayNum * 2);
      }
      FOutputDevice::~FOutputDevice(&local_e0);
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
      if (local_f0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data);
      }
      if (local_c0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_c0.AllocatorInstance.SecondaryData);
      }
    }
  }
  if ((*plVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
              *)(*pcVar2)();
    return pTVar6;
  }
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)*plVar5;
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_60,(FBitSetContainer *)param_2);
  FStructTypeBitSet::FBitSetContainer::operator-=((FBitSetContainer *)local_60,pTVar1);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_80,(FBitSetContainer *)local_60);
  if ((void *)local_60._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_60._16_8_);
  }
  bVar3 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty((FConstBitSetContainer *)local_80);
  if (!bVar3) {
    InternalAddFragmentListToEntity
              (this,param_1,
               (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
                *)local_80);
  }
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)__return_storage_ptr__,(FBitSetContainer *)local_80);
  if ((void *)local_80._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_80._16_8_);
  }
  return __return_storage_ptr__;
}

// InternalAppendFragmentsAndTagsToArchetypeCompositionDescriptor @ 147230630

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassEntityManager::InternalAppendFragmentsAndTagsToArchetypeCompositionDescriptor
          (FMassEntityManager *this,FMassArchetypeCompositionDescriptor *param_1,
          TArrayView<UScriptStruct_const_*_const,int> *param_2)

{
  FName *pFVar1;
  FName FVar2;
  bool bVar3;
  int iVar4;
  UPackage *pUVar5;
  UStruct *pUVar6;
  FName *pFVar7;
  FName local_res18 [2];
  FString local_28;
  
  pFVar7 = (FName *)param_2->DataPtr;
  pFVar1 = pFVar7 + param_2->ArrayNum;
  do {
    if (pFVar7 == pFVar1) {
      return;
    }
    FVar2 = *pFVar7;
    if (FVar2 == (FName)0x0) {
LAB_14723085d:
      if (2 < (byte)LogMass._0_1_) {
        if (FVar2 == (FName)0x0) {
          ::FString::FString(&local_28,L"None");
        }
        else {
          local_res18[0] = *(FName *)((longlong)FVar2 + 0x18);
          ::FName::ToString(local_res18,&local_28);
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMass);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
    }
    else {
      if (Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton == (UScriptStruct *)0x0) {
        pUVar5 = Z_Construct_UPackage__Script_MassEntity();
        Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FMassFragment,(UObject *)pUVar5,
                             L"MassFragment");
      }
      if (Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton == (UScriptStruct *)0x0) {
LAB_14723072f:
        if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0) {
          pUVar5 = Z_Construct_UPackage__Script_MassEntity();
          Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FMassTag,(UObject *)pUVar5,L"MassTag");
        }
        if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton != (UScriptStruct *)0x0) {
          iVar4 = (int)(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_;
          if ((*(int *)((longlong)FVar2 + 0x38) < iVar4) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)((longlong)FVar2 + 0x30) + (longlong)iVar4 * 8) !=
              &(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            pUVar6 = TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                     ::GetBaseUStruct();
            if (pUVar6 == (UStruct *)0x0) {
LAB_1472307bd:
              local_res18[0] = FVar2;
              bVar3 = `TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                      ::Add'::__l6::<lambda_1>::operator()(local_res18);
              if (!bVar3) goto LAB_1472308d1;
            }
            else {
              iVar4 = (int)pUVar6->_padding_;
              if ((*(int *)((longlong)FVar2 + 0x38) < iVar4) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)((longlong)FVar2 + 0x30) + (longlong)iVar4 * 8) !=
                  &pUVar6->_padding_)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (!bVar3) goto LAB_1472307bd;
            }
            iVar4 = FStructTracker::FindOrAddStructTypeIndex
                              (&FMassTagBitSetStructTrackerWrapper::StructTracker,(UStruct *)FVar2);
            FStructTypeBitSet::FBitSetContainer::AddAtIndex
                      ((FBitSetContainer *)&param_1->Tags,iVar4);
            goto LAB_1472308d1;
          }
        }
        if (Z_Registration_Info_UScriptStruct_FMassChunkFragment.OuterSingleton ==
            (UScriptStruct *)0x0) {
          pUVar5 = Z_Construct_UPackage__Script_MassEntity();
          Z_Registration_Info_UScriptStruct_FMassChunkFragment.OuterSingleton =
               GetStaticStruct(Z_Construct_UScriptStruct_FMassChunkFragment,(UObject *)pUVar5,
                               L"MassChunkFragment");
        }
        if (Z_Registration_Info_UScriptStruct_FMassChunkFragment.OuterSingleton !=
            (UScriptStruct *)0x0) {
          iVar4 = (int)(Z_Registration_Info_UScriptStruct_FMassChunkFragment.OuterSingleton)->
                       _padding_;
          if ((*(int *)((longlong)FVar2 + 0x38) < iVar4) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)((longlong)FVar2 + 0x30) + (longlong)iVar4 * 8) !=
              &(Z_Registration_Info_UScriptStruct_FMassChunkFragment.OuterSingleton)->_padding_)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
            ::Add((TTypeBitSetBase<TStructTypeBitSet<FMassChunkFragment,FMassChunkFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassChunkFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                   *)&param_1->ChunkFragments,(UScriptStruct *)FVar2);
            goto LAB_1472308d1;
          }
        }
        goto LAB_14723085d;
      }
      iVar4 = (int)(Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton)->_padding_;
      if ((*(int *)((longlong)FVar2 + 0x38) < iVar4) ||
         ((longlong *)*(undefined1 **)(*(longlong *)((longlong)FVar2 + 0x30) + (longlong)iVar4 * 8)
          != &(Z_Registration_Info_UScriptStruct_FMassFragment.OuterSingleton)->_padding_)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_14723072f;
      pUVar6 = TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
               ::GetBaseUStruct();
      if (pUVar6 == (UStruct *)0x0) {
LAB_1472306fa:
        local_res18[0] = FVar2;
        bVar3 = `TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                ::Add'::__l6::<lambda_1>::operator()(local_res18);
        if (bVar3) goto LAB_147230711;
      }
      else {
        iVar4 = (int)pUVar6->_padding_;
        if ((*(int *)((longlong)FVar2 + 0x38) < iVar4) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)((longlong)FVar2 + 0x30) + (longlong)iVar4 * 8) !=
            &pUVar6->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_1472306fa;
LAB_147230711:
        iVar4 = FStructTracker::FindOrAddStructTypeIndex
                          (&FMassFragmentBitSetStructTrackerWrapper::StructTracker,(UStruct *)FVar2)
        ;
        FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)param_1,iVar4);
      }
    }
LAB_1472308d1:
    pFVar7 = pFVar7 + 1;
  } while( true );
}

// InternalBatchCreateReservedEntities @ 147230900

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> * __thiscall
FMassEntityManager::InternalBatchCreateReservedEntities
          (FMassEntityManager *this,
          TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *__return_storage_ptr__,
          FMassArchetypeHandle *param_1,FMassArchetypeSharedFragmentValues *param_2,
          TArrayView<FMassEntityHandle_const_,int> *param_3)

{
  FMassEntityHandle *pFVar1;
  FMassArchetypeData *this_00;
  FMassEntityHandle FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *pTVar6;
  IEntityStorageInterface *pIVar7;
  uint uVar8;
  FMassEntityHandle *pFVar9;
  StorageSelector local_res8 [8];
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *local_res10;
  StorageSelector local_res18 [8];
  FMassArchetypeSharedFragmentValues *local_res20;
  TArray<FMassArchetypeEntityCollection::FArchetypeEntityRange,TSizedDefaultAllocator<32>_> local_a8
  ;
  TArrayView<FMassEntityHandle_const_,int> local_98;
  TArrayView<FMassEntityHandle_const_,int> local_88;
  FMassArchetypeEntityCollection local_78;
  
  this_00 = (param_1->DataPtr).Object;
  local_res10 = __return_storage_ptr__;
  local_res20 = param_2;
  if ((this_00 == (FMassArchetypeData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArchetypeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,800,
                         L"Functions calling into this one are required to verify that the archetype handle is valid"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *)(*pcVar3)();
    return pTVar6;
  }
  bVar4 = UE::Mass::Debug::FBreakpoint::CheckCreateEntityBreakpoints(param_1);
  if (bVar4) {
    UE::Mass::Debug::FBreakpoint::DebugBreak();
  }
  pFVar9 = param_3->DataPtr;
  pFVar1 = pFVar9 + param_3->ArrayNum;
  while( true ) {
    if (pFVar9 == pFVar1) {
      local_98.DataPtr = param_3->DataPtr;
      local_98.ArrayNum = param_3->ArrayNum;
      local_98._12_4_ = *(undefined4 *)&param_3->field_0xc;
      uVar8 = 0;
      local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.ArrayNum = 0;
      local_a8.ArrayMax = 0;
      FMassArchetypeData::BatchAddEntities(this_00,&local_98,local_res20,&local_a8);
      pFVar9 = param_3->DataPtr;
      pFVar1 = pFVar9 + param_3->ArrayNum;
      pTVar6 = local_res10;
      local_78.Ranges.AllocatorInstance.Data = local_a8.AllocatorInstance.Data;
      for (; local_res10 = pTVar6, pFVar9 != pFVar1; pFVar9 = pFVar9 + 1) {
        local_a8.AllocatorInstance.Data = local_78.Ranges.AllocatorInstance.Data;
        FMassTrace::EntityCreated(*pFVar9,this_00);
        pTVar6 = local_res10;
        local_78.Ranges.AllocatorInstance.Data = local_a8.AllocatorInstance.Data;
      }
      local_78.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController =
           (param_1->DataPtr).SharedReferenceCount.ReferenceController;
      local_78.Ranges.ArrayNum = local_a8.ArrayNum;
      local_78.Ranges.ArrayMax = local_a8.ArrayMax;
      local_78.Archetype.ArchetypeHandle.DataPtr.Object = (param_1->DataPtr).Object;
      local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.ArrayNum = 0;
      local_a8.ArrayMax = 0;
      if (local_78.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_78.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController)->
        SharedReferenceCount =
             (atomic<int>)
             ((int)(local_78.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.
                   ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (local_78.Archetype.ArchetypeHandle.DataPtr.Object != (FMassArchetypeData *)0x0) {
        uVar8 = (local_78.Archetype.ArchetypeHandle.DataPtr.Object)->EntityOrderVersion;
      }
      local_88.DataPtr = param_3->DataPtr;
      local_88.ArrayNum = param_3->ArrayNum;
      local_88._12_4_ = *(undefined4 *)&param_3->field_0xc;
      local_78.Archetype.HandleVersion = uVar8;
      FMassObserverManager::GetOrMakeCreationContext
                (&this->ObserverManager,pTVar6,&local_88,&local_78);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.Archetype.ArchetypeHandle.DataPtr.SharedReferenceCount.ReferenceController
                );
      if (local_78.Ranges.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Ranges.AllocatorInstance.Data);
      }
      if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.AllocatorInstance.Data);
      }
      return pTVar6;
    }
    FVar2 = *pFVar9;
    bVar4 = IsEntityValid(this,FVar2);
    if ((!bVar4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsEntityValid(Entity)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                           ,0x326,L""), bVar4)) break;
    local_res8[0] = (StorageSelector)0x0;
    pIVar7 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
               ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res8,&this->EntityStorage);
    iVar5 = (**(code **)((longlong)*pIVar7 + 0x38))(pIVar7,(ulonglong)FVar2 & 0xffffffff);
    if ((iVar5 != 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("EntityState == UE::Mass::IEntityStorageInterface::EEntityState::Reserved"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                           ,0x328,
                           L"Trying to build entities that are not reserved. Check all handles are reserved or consider using BatchCreateEntities"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *)(*pcVar3)();
      return pTVar6;
    }
    local_res18[0] = (StorageSelector)0x0;
    pIVar7 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
               ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res18,&this->EntityStorage);
    (**(code **)((longlong)*pIVar7 + 0x28))(pIVar7,(ulonglong)FVar2 & 0xffffffff,param_1);
    pFVar9 = pFVar9 + 1;
  }
  pcVar3 = (code *)swi(3);
  pTVar6 = (TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> *)(*pcVar3)();
  return pTVar6;
}

// InternalBuildEntity @ 147230b60

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityManager::InternalBuildEntity
          (FMassEntityManager *this,FMassEntityHandle param_1,FMassArchetypeHandle *param_2,
          FMassArchetypeSharedFragmentValues *param_3)

{
  int iVar1;
  int iVar2;
  FMassArchetypeData *this_00;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  IEntityStorageInterface *pIVar9;
  uint uVar10;
  ForElementType<FMassArchetypeFragmentConfig> FVar11;
  ForElementType<FMassArchetypeFragmentConfig> FVar12;
  StorageSelector local_res18 [16];
  undefined1 local_48 [16];
  
  local_res18[0] = (StorageSelector)0x0;
  pIVar9 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res18,&this->EntityStorage);
  (**(code **)((longlong)*pIVar9 + 0x28))(pIVar9,(ulonglong)param_1 & 0xffffffff,param_2);
  if ((param_2->DataPtr).Object == (FMassArchetypeData *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  this_00 = (param_2->DataPtr).Object;
  iVar7 = FMassArchetypeData::AddEntityInternal(this_00,param_1,param_3);
  iVar1 = this_00->NumEntitiesPerChunk;
  uVar8 = iVar7 / iVar1;
  uVar10 = 0;
  if ((int)uVar8 < (this_00->Chunks).ArrayNum) {
    uVar10 = ~uVar8 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar2 = (this_00->FragmentConfigs).ArrayNum;
  FVar12 = (this_00->FragmentConfigs).AllocatorInstance.SecondaryData;
  pFVar3 = (this_00->Chunks).AllocatorInstance.Data;
  if (FVar12 == (ForElementType<FMassArchetypeFragmentConfig>)0x0) {
    FVar12 = (ForElementType<FMassArchetypeFragmentConfig>)&this_00->FragmentConfigs;
  }
  FVar11 = (ForElementType<FMassArchetypeFragmentConfig>)((longlong)iVar2 * 0x10 + (longlong)FVar12)
  ;
  while( true ) {
    if ((this_00->FragmentConfigs).ArrayNum != iVar2) {
      local_48[0] = 0;
      `TCheckedPointerIterator<FMassArchetypeFragmentConfig,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_48);
    }
    if (FVar12 == FVar11) break;
    plVar4 = *(longlong **)FVar12;
    (**(code **)(*plVar4 + 0x2f8))
              (plVar4,(longlong)
                      (((int)plVar4[0xb] + -1 + (int)*(short *)((longlong)plVar4 + 0x5c) &
                       -(int)*(short *)((longlong)plVar4 + 0x5c)) * (iVar7 % iVar1)) +
                      (longlong)*(int *)((longlong)FVar12 + 8) +
                      *(longlong *)(pFVar3 + (longlong)(int)uVar8 * 0x90),1);
    FVar12 = (ForElementType<FMassArchetypeFragmentConfig>)((longlong)FVar12 + 0x10);
  }
  if ((param_2->DataPtr).Object == (FMassArchetypeData *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x44d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FMassTrace::EntityCreated(param_1,(param_2->DataPtr).Object);
  if ((param_2->DataPtr).Object == (FMassArchetypeData *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FMassObserverManager::OnPostEntityCreated
            (&this->ObserverManager,param_1,&((param_2->DataPtr).Object)->CompositionDescriptor);
  return;
}

// InternalCreateSimilarArchetype @ 147230d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassArchetypeHandle * __thiscall
FMassEntityManager::InternalCreateSimilarArchetype
          (FMassEntityManager *this,FMassArchetypeHandle *__return_storage_ptr__,
          FMassArchetypeData *param_1,FMassArchetypeCompositionDescriptor *param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 auStackY_88 [32];
  undefined1 local_58 [24];
  undefined8 uStack_40;
  void *local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_88;
  local_58._16_8_ = 0;
  uStack_40 = 0;
  local_58._0_8_ = (FScriptContainerElement *)0x0;
  local_30 = ___xmm_00000000ffffffff0000008000000000;
  uStack_28 = _UNK_150631d98;
  local_58._8_8_ = 0;
  local_38 = (void *)0x0;
  InternalCreateSimilarArchetype
            (this,__return_storage_ptr__,param_1,param_2,(FArchetypeGroups *)local_58);
  iVar1 = SUB84(local_58._8_8_,4);
  local_58._8_8_ = local_58._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)local_58,0,(int *)(local_58 + 0xc));
  }
  uVar2 = local_30._4_4_;
  uStack_28 = 0xffffffff;
  local_30 = (ulonglong)local_30._4_4_ << 0x20;
  if (0x80 < uVar2) {
    local_30 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_58 + 0x10),0);
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  if ((FScriptContainerElement *)local_58._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_58._0_8_);
  }
  return __return_storage_ptr__;
}

// InternalCreateSimilarArchetype @ 147230e70

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassArchetypeHandle * __thiscall
FMassEntityManager::InternalCreateSimilarArchetype
          (FMassEntityManager *this,FMassArchetypeHandle *__return_storage_ptr__,
          FMassArchetypeData *param_1,FMassArchetypeCompositionDescriptor *param_2,
          FArchetypeGroups *param_3)

{
  ForAnyElementType *pFVar1;
  int *piVar2;
  code *pcVar3;
  FArchetypeGroups *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FMassArchetypeHandle *pFVar9;
  FMassArchetypeData *this_00;
  FMassArchetypeData *this_01;
  FMassArchetypeData *pFVar10;
  FMassArchetypeData *pFVar11;
  TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_> *pTVar12;
  uint uVar13;
  uint *puVar14;
  undefined1 *puVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  ForElementType<FMassArchetypeFragmentConfig> FVar18;
  ForElementType<FMassArchetypeFragmentConfig> FVar19;
  uint uVar20;
  FScriptContainerElement *pFVar21;
  FLLMScope local_res8 [2];
  FMassArchetypeHandle *local_res10;
  FMassArchetypeData *local_res18;
  uint local_res20 [2];
  int local_a8 [2];
  uint *local_a0;
  FMemScope local_98 [2];
  FMassArchetypeData *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  FMassArchetypeData *local_78;
  FMassArchetypeData *local_70;
  FMassArchetypeCreationParams local_68;
  FMassArchetypeHandle local_58;
  
  pFVar4 = param_3;
  local_res10 = __return_storage_ptr__;
  local_res18 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name459,L"Mass/EntityManager");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res8,LLMScope_Name459,false,None,Default,true);
  FMemScope::FMemScope(local_98,&LLMScope_Name459,true);
  iVar8 = *(int *)&(pFVar4->IDContainer).field_0x8;
  if (iVar8 != 0) {
    uVar13 = iVar8 - 1;
    if ((-1 < (int)uVar13) && ((int)uVar13 < *(int *)&(pFVar4->IDContainer).field_0x28)) {
      puVar15 = *(undefined1 **)&(pFVar4->IDContainer).field_0x20;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = &(pFVar4->IDContainer).field_0x10;
      }
      if ((*(uint *)(puVar15 + (longlong)((int)(uVar13 + ((int)uVar13 >> 0x1f & 0x1fU)) >> 5) * 4)
           >> (uVar13 & 0x1f) & 1) != 0) goto LAB_147230f62;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Groups.IsShrunk()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                       ,0x1ce,
                       L"A group container with invalid trailing IDs has been passed to archetype creation - this is not expected and will cause issues. Make sure to Shrink your Groups before passing to %hs"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FMassArchetypeHandle *)(*pcVar3)();
      return pFVar9;
    }
  }
LAB_147230f62:
  uVar13 = UE::Mass::GetTypeHash(pFVar4);
  uVar7 = FMassArchetypeCompositionDescriptor::CalculateHash
                    (&param_2->Fragments,&param_2->Tags,&param_2->ChunkFragments,
                     &param_2->SharedFragments,&param_2->ConstSharedFragments);
  uVar20 = uVar7 - uVar13 ^ uVar13 >> 0xd;
  uVar7 = (-0x61c88647 - uVar13) - uVar20 ^ uVar20 << 8;
  uVar16 = (uVar13 - uVar7) - uVar20 ^ uVar7 >> 0xd;
  uVar20 = (uVar20 - uVar16) - uVar7 ^ uVar16 >> 0xc;
  uVar13 = (uVar7 - uVar20) - uVar16 ^ uVar20 << 0x10;
  uVar7 = (uVar16 - uVar13) - uVar20 ^ uVar13 >> 5;
  uVar16 = (uVar20 - uVar7) - uVar13 ^ uVar7 >> 3;
  uVar13 = (uVar13 - uVar16) - uVar7 ^ uVar16 << 10;
  local_res20[0] = (uVar7 - uVar13) - uVar16 ^ uVar13 >> 0xf;
  if (*(int *)&(this->FragmentHashToArchetypeMap).field_0x8 !=
      *(int *)&(this->FragmentHashToArchetypeMap).field_0x34) {
    puVar15 = *(undefined1 **)&(this->FragmentHashToArchetypeMap).field_0x40;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = &(this->FragmentHashToArchetypeMap).field_0x38;
    }
    uVar13 = *(uint *)(puVar15 +
                      (ulonglong)
                      (*(int *)&(this->FragmentHashToArchetypeMap).field_0x48 - 1U & local_res20[0])
                      * 4);
    if (uVar13 != 0xffffffff) {
      do {
        puVar14 = (uint *)((longlong)(int)uVar13 * 0x20 +
                          *(longlong *)&this->FragmentHashToArchetypeMap);
        if (*puVar14 == local_res20[0]) {
          if (puVar14 != (uint *)0x0) goto LAB_14723109e;
          break;
        }
        uVar13 = puVar14[6];
      } while (uVar13 != 0xffffffff);
    }
  }
  local_a0 = local_res20;
  TSet<TTuple<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&this->FragmentHashToArchetypeMap,(uint)local_a8,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)local_res20[0],(bool *)&local_a0);
  puVar14 = (uint *)((longlong)local_a8[0] * 0x20 + *(longlong *)&this->FragmentHashToArchetypeMap);
LAB_14723109e:
  pFVar1 = (ForAnyElementType *)(puVar14 + 2);
  local_88 = (FMassArchetypeData *)0x0;
  pTStack_80 = (TReferenceControllerBase<1> *)0x0;
  uVar13 = puVar14[4];
  pFVar17 = pFVar1->Data;
  pFVar21 = pFVar17 + (longlong)(int)uVar13 * 0x10;
  while( true ) {
    if (puVar14[4] != uVar13) {
      param_3._0_1_ = 0;
      `TCheckedPointerIterator<TSharedPtr<FMassArchetypeData,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&param_3);
    }
    if (pFVar17 == pFVar21) goto LAB_147231147;
    if ((*(longlong *)pFVar17 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FMassArchetypeHandle *)(*pcVar3)();
      return pFVar9;
    }
    bVar6 = FMassArchetypeData::IsEquivalent(*(FMassArchetypeData **)pFVar17,param_2,pFVar4);
    pTVar5 = pTStack_80;
    if (bVar6) break;
    pFVar17 = pFVar17 + 0x10;
  }
  pTStack_80 = *(TReferenceControllerBase<1> **)(pFVar17 + 8);
  local_88 = *(FMassArchetypeData **)pFVar17;
  if (pTStack_80 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_80->SharedReferenceCount = (atomic<int>)((int)pTStack_80->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
LAB_147231147:
  if (local_88 == (FMassArchetypeData *)0x0) {
    this->ArchetypeDataVersion = this->ArchetypeDataVersion + 1;
    this_00 = ::operator_new(0x2d8);
    pFVar10 = local_res18;
    pFVar11 = (FMassArchetypeData *)0x0;
    this_01 = pFVar11;
    if (this_00 != (FMassArchetypeData *)0x0) {
      local_68.ChunkMemorySize = local_res18->ChunkMemorySize;
      local_68.DebugName.ComparisonIndex.Value = 0;
      local_68.DebugName.Number = 0;
      local_68.DebugColor.field0_0x0.Bits = (FColor_u_0)0x0;
      this_01 = FMassArchetypeData::FMassArchetypeData(this_00,&local_68);
    }
    FMassArchetypeData::InitializeWithSimilar
              (this_01,this,pFVar10,param_2,pFVar4,this->ArchetypeDataVersion);
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=(&this_01->DebugNames,&pFVar10->DebugNames);
    local_78 = this_01;
    pFVar10 = ::operator_new(0x18);
    if (pFVar10 != (FMassArchetypeData *)0x0) {
      *(undefined4 *)&(pFVar10->CompositionDescriptor).Fragments.field_0x8 = 1;
      *(undefined ***)&(pFVar10->CompositionDescriptor).Fragments =
           &
           ___7__TReferenceControllerWithDeleter_UFMassArchetypeData__U__DefaultDeleter_UFMassArchetypeData___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      *(undefined4 *)&(pFVar10->CompositionDescriptor).Fragments.field_0xc = 1;
      *(FMassArchetypeData **)&(pFVar10->CompositionDescriptor).Fragments.field_0x10 = this_01;
      pFVar11 = pFVar10;
    }
    local_70 = pFVar11;
    if (((pFVar1->Data <= (FScriptContainerElement *)&local_78) &&
        ((FScriptContainerElement *)&local_78 < pFVar1->Data + (longlong)(int)puVar14[5] * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FMassArchetypeHandle *)(*pcVar3)();
      return pFVar9;
    }
    uVar13 = puVar14[4];
    if (uVar13 == puVar14[5]) {
      uVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,pFVar1,(int *)(puVar14 + 5));
    }
    pTVar5 = pTStack_80;
    puVar14[4] = uVar13 + 1;
    pFVar17 = pFVar1->Data + (longlong)(int)uVar13 * 0x10;
    *(FMassArchetypeData **)pFVar17 = local_78;
    *(FMassArchetypeData **)(pFVar17 + 8) = local_70;
    local_70 = (FMassArchetypeData *)0x0;
    local_78 = (FMassArchetypeData *)0x0;
    pTStack_80 = *(TReferenceControllerBase<1> **)(pFVar17 + 8);
    local_88 = *(FMassArchetypeData **)pFVar17;
    if (pTStack_80 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_80->SharedReferenceCount = (atomic<int>)((int)pTStack_80->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)local_70);
    pTVar12 = &this->AllArchetypes;
    pFVar17 = (pTVar12->AllocatorInstance).Data;
    if (((pFVar17 <= (FScriptContainerElement *)&local_88) &&
        ((FScriptContainerElement *)&local_88 <
         pFVar17 + (longlong)(this->AllArchetypes).ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FMassArchetypeHandle *)(*pcVar3)();
      return pFVar9;
    }
    iVar8 = (this->AllArchetypes).ArrayNum;
    piVar2 = &(this->AllArchetypes).ArrayMax;
    if (iVar8 == *piVar2) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar12->AllocatorInstance,piVar2);
    }
    pFVar17 = (pTVar12->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
    (this->AllArchetypes).ArrayNum = iVar8 + 1;
    *(FMassArchetypeData **)pFVar17 = local_88;
    *(TReferenceControllerBase<1> **)(pFVar17 + 8) = pTStack_80;
    if (pTStack_80 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_80->SharedReferenceCount = (atomic<int>)((int)pTStack_80->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((this->AllArchetypes).ArrayNum != this->ArchetypeDataVersion) &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5136943605146975766>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                           ,0x1ea,"AllArchetypes.Num() == ArchetypeDataVersion"), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FMassArchetypeHandle *)(*pcVar3)();
      return pFVar9;
    }
    FVar19 = (this_01->FragmentConfigs).AllocatorInstance.SecondaryData;
    iVar8 = (this_01->FragmentConfigs).ArrayNum;
    if (FVar19 == (ForElementType<FMassArchetypeFragmentConfig>)0x0) {
      FVar19 = (ForElementType<FMassArchetypeFragmentConfig>)&this_01->FragmentConfigs;
    }
    if ((iVar8 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar9 = (FMassArchetypeHandle *)(*pcVar3)();
      return pFVar9;
    }
    FVar18 = (ForElementType<FMassArchetypeFragmentConfig>)
             ((longlong)iVar8 * 0x10 + (longlong)FVar19);
    for (; FVar19 != FVar18;
        FVar19 = (ForElementType<FMassArchetypeFragmentConfig>)((longlong)FVar19 + 0x10)) {
      uVar13 = ((uint)((ulonglong)*(UScriptStruct **)FVar19 >> 0x14) & 0xffff ^
               (uint)((ulonglong)*(UScriptStruct **)FVar19 >> 4)) * -0x7a143595;
      uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
      pTVar12 = TMapBase<UScriptStruct_const_*,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>_>
                ::FindOrAddImpl<UScriptStruct_const_*_const_&>
                          ((TMapBase<UScriptStruct_const_*,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UScriptStruct_const_*,TArray<TSharedPtr<FMassArchetypeData,1>,TSizedDefaultAllocator<32>_>,0>_>
                            *)&this->FragmentTypeToArchetypeMap,uVar13 >> 0x10 ^ uVar13,
                           (UScriptStruct **)FVar19);
      pFVar17 = (pTVar12->AllocatorInstance).Data;
      if (((pFVar17 <= (FScriptContainerElement *)&local_88) &&
          ((FScriptContainerElement *)&local_88 < pFVar17 + (longlong)pTVar12->ArrayMax * 0x10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        pFVar9 = (FMassArchetypeHandle *)(*pcVar3)();
        return pFVar9;
      }
      iVar8 = pTVar12->ArrayNum;
      if (iVar8 == pTVar12->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar12->AllocatorInstance,&pTVar12->ArrayMax);
      }
      pTVar12->ArrayNum = iVar8 + 1;
      pFVar17 = (pTVar12->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
      *(FMassArchetypeData **)pFVar17 = local_88;
      *(TReferenceControllerBase<1> **)(pFVar17 + 8) = pTStack_80;
      if (pTStack_80 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_80->SharedReferenceCount = (atomic<int>)((int)pTStack_80->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    if (pTStack_80 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_80->SharedReferenceCount = (atomic<int>)((int)pTStack_80->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_58.DataPtr.Object = local_88;
    local_58.DataPtr.SharedReferenceCount.ReferenceController = pTStack_80;
    TMulticastDelegate<void___cdecl(FMassArchetypeHandle_const_&),FDefaultDelegateUserPolicy>::
    Broadcast(&this->OnNewArchetypeEvent,&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.DataPtr.SharedReferenceCount.ReferenceController);
    pTVar5 = pTStack_80;
    pFVar10 = local_88;
    if (pTStack_80 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_80->SharedReferenceCount = (atomic<int>)((int)pTStack_80->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (-1 < MassChannel->Enabled) {
      if (local_88 == (FMassArchetypeData *)0x0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArchetypeHandle.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                           ,0x1ff,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FMassArchetypeHandle *)(*pcVar3)();
          return pFVar9;
        }
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArchetypeHandle.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                           ,0x1ff,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          pFVar9 = (FMassArchetypeHandle *)(*pcVar3)();
          return pFVar9;
        }
      }
      FMassTrace::OutputRegisterArchetype((ulong64)pFVar10,&pFVar10->CompositionDescriptor);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  pFVar9 = local_res10;
  (local_res10->DataPtr).Object = local_88;
  (local_res10->DataPtr).SharedReferenceCount.ReferenceController = pTStack_80;
  if (pTStack_80 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTStack_80->SharedReferenceCount = (atomic<int>)((int)pTStack_80->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_80);
  FMemScope::~FMemScope(local_98);
  FLLMScope::~FLLMScope(local_res8);
  return pFVar9;
}

// InternalCreateSimilarArchetype @ 147231680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassArchetypeHandle * __thiscall
FMassEntityManager::InternalCreateSimilarArchetype
          (FMassEntityManager *this,FMassArchetypeHandle *__return_storage_ptr__,
          TSharedPtr<FMassArchetypeData,1> *param_1,
          TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
          *param_2)

{
  FMassArchetypeData *pFVar1;
  undefined1 auStackY_108 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pFVar1 = param_1->Object;
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_d8,(FBitSetContainer *)pFVar1);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_b8,(FBitSetContainer *)&(pFVar1->CompositionDescriptor).Tags)
  ;
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_98,
             (FBitSetContainer *)&(pFVar1->CompositionDescriptor).ChunkFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_78,
             (FBitSetContainer *)&(pFVar1->CompositionDescriptor).SharedFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_58,
             (FBitSetContainer *)&(pFVar1->CompositionDescriptor).ConstSharedFragments);
  if ((TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct> *)
      local_d8 != param_2) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              ((TBitArray<FDefaultBitArrayAllocator> *)local_d8,
               (TBitArray<FDefaultBitArrayAllocator> *)param_2);
  }
  InternalCreateSimilarArchetype
            (this,__return_storage_ptr__,pFVar1,(FMassArchetypeCompositionDescriptor *)local_d8,
             &pFVar1->Groups);
  if ((void *)local_58._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_58._16_8_);
  }
  if ((void *)local_78._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_78._16_8_);
  }
  if ((void *)local_98._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_98._16_8_);
  }
  if ((void *)local_b8._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._16_8_);
  }
  if ((ForElementType<unsigned_int>)local_d8._16_8_ != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_d8._16_8_);
  }
  return __return_storage_ptr__;
}

// InternalCreateSimilarArchetype @ 1472317b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassArchetypeHandle * __thiscall
FMassEntityManager::InternalCreateSimilarArchetype
          (FMassEntityManager *this,FMassArchetypeHandle *__return_storage_ptr__,
          TSharedPtr<FMassArchetypeData,1> *param_1,
          TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *param_2)

{
  FMassArchetypeData *pFVar1;
  undefined1 auStackY_108 [32];
  undefined1 local_d8 [32];
  TBitArray<FDefaultBitArrayAllocator> local_b8;
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pFVar1 = param_1->Object;
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_d8,(FBitSetContainer *)pFVar1);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&local_b8,(FBitSetContainer *)&(pFVar1->CompositionDescriptor).Tags
            );
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_98,
             (FBitSetContainer *)&(pFVar1->CompositionDescriptor).ChunkFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_78,
             (FBitSetContainer *)&(pFVar1->CompositionDescriptor).SharedFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_58,
             (FBitSetContainer *)&(pFVar1->CompositionDescriptor).ConstSharedFragments);
  if (&local_b8 != (TBitArray<FDefaultBitArrayAllocator> *)param_2) {
    TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
              (&local_b8,(TBitArray<FDefaultBitArrayAllocator> *)param_2);
  }
  InternalCreateSimilarArchetype
            (this,__return_storage_ptr__,pFVar1,(FMassArchetypeCompositionDescriptor *)local_d8,
             &pFVar1->Groups);
  if ((void *)local_58._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_58._16_8_);
  }
  if ((void *)local_78._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_78._16_8_);
  }
  if ((void *)local_98._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_98._16_8_);
  }
  if (local_b8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_b8.AllocatorInstance.SecondaryData);
  }
  if ((void *)local_d8._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._16_8_);
  }
  return __return_storage_ptr__;
}

// InternalCreateSimilarArchetype @ 1472318e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassArchetypeHandle * __thiscall
FMassEntityManager::InternalCreateSimilarArchetype
          (FMassEntityManager *this,FMassArchetypeHandle *__return_storage_ptr__,
          TSharedPtr<FMassArchetypeData,1> *param_1,FArchetypeGroups *param_2)

{
  FMassArchetypeData *pFVar1;
  FMassArchetypeData *pFVar2;
  code *pcVar3;
  bool bVar4;
  FMassArchetypeHandle *pFVar5;
  undefined1 auStackY_108 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pFVar1 = param_1->Object;
  if (pFVar1 == (FMassArchetypeData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FMassArchetypeHandle *)(*pcVar3)();
      return pFVar5;
    }
  }
  pFVar2 = param_1->Object;
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_d8,(FBitSetContainer *)pFVar2);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_b8,(FBitSetContainer *)&(pFVar2->CompositionDescriptor).Tags)
  ;
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_98,
             (FBitSetContainer *)&(pFVar2->CompositionDescriptor).ChunkFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_78,
             (FBitSetContainer *)&(pFVar2->CompositionDescriptor).SharedFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_58,
             (FBitSetContainer *)&(pFVar2->CompositionDescriptor).ConstSharedFragments);
  InternalCreateSimilarArchetype
            (this,__return_storage_ptr__,pFVar1,(FMassArchetypeCompositionDescriptor *)local_d8,
             param_2);
  if ((void *)local_58._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_58._16_8_);
  }
  if ((void *)local_78._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_78._16_8_);
  }
  if ((void *)local_98._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_98._16_8_);
  }
  if ((void *)local_b8._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_b8._16_8_);
  }
  if ((void *)local_d8._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_d8._16_8_);
  }
  return __return_storage_ptr__;
}

// InternalGetConstSharedFragmentPtr @ 147231a20

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FConstSharedStruct * __thiscall
FMassEntityManager::InternalGetConstSharedFragmentPtr
          (FMassEntityManager *this,FMassEntityHandle param_1,UScriptStruct *param_2)

{
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  IEntityStorageInterface *pIVar5;
  longlong lVar6;
  FConstSharedStruct *pFVar7;
  int *piVar8;
  uint uVar9;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar10;
  FConstSharedStruct *pFVar11;
  StorageSelector local_res8 [8];
  
  local_res8[0] = (StorageSelector)0x0;
  pIVar5 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res8,&this->EntityStorage);
  lVar6 = (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5,(ulonglong)param_1 & 0xffffffff);
  if ((lVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentArchetype",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x77a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FConstSharedStruct *)(*pcVar2)();
    return pFVar7;
  }
  piVar8 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
           FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                        *)(lVar6 + 0x1d0),param_1.Index);
  uVar4 = *piVar8 / *(int *)(lVar6 + 0x2a8);
  uVar9 = 0;
  if ((int)uVar4 < *(int *)(lVar6 + 0x1c8)) {
    uVar9 = ~uVar4 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FConstSharedStruct *)(*pcVar2)();
    return pFVar7;
  }
  lVar6 = (longlong)(int)uVar4 * 0x90 + *(longlong *)(lVar6 + 0x1c0);
  pFVar7 = *(FConstSharedStruct **)(lVar6 + 0x70);
  pFVar11 = pFVar7 + *(int *)(lVar6 + 0x78);
  while( true ) {
    if (pFVar7 == pFVar11) {
      return (FConstSharedStruct *)0x0;
    }
    pTVar1 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(pFVar7->StructMemoryPtr).Object;
    TVar10.DebugPtr = (UScriptStruct *)0x0;
    if (pTVar1 != (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) {
      TVar10 = (TObjectPtr<UScriptStruct_const_>_u_0)pTVar1->DebugPtr;
    }
    if (TVar10.DebugPtr == param_2) break;
    pFVar7 = pFVar7 + 1;
  }
  return pFVar7;
}

// InternalGetFragmentDataChecked @ 147231b50

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void * __thiscall
FMassEntityManager::InternalGetFragmentDataChecked
          (FMassEntityManager *this,FMassEntityHandle param_1,UScriptStruct *param_2)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  IEntityStorageInterface *pIVar4;
  FMassArchetypeData *this_00;
  StorageSelector local_res8 [8];
  FMassEntityHandle local_res10;
  
  local_res10 = param_1;
  bVar2 = IsEntityBuilt(this,param_1);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsEntityBuilt(EntityHandle)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntityManager.h"
                       ,0x232,L"Entity not yet created(ID: %d, SN:%d)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  local_res8[0] = (StorageSelector)0x0;
  pIVar4 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res8,&this->EntityStorage);
  this_00 = (FMassArchetypeData *)
            (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4,(ulonglong)param_1 & 0xffffffff);
  if (this_00 == (FMassArchetypeData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentArchetype",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                       ,0x768,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  pvVar3 = FMassArchetypeData::GetFragmentDataForEntityChecked(this_00,param_2,param_1.Index);
  return pvVar3;
}

// InternalGetFragmentDataPtr @ 147231c30

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void * __thiscall
FMassEntityManager::InternalGetFragmentDataPtr
          (FMassEntityManager *this,FMassEntityHandle param_1,UScriptStruct *param_2)

{
  code *pcVar1;
  bool bVar2;
  IEntityStorageInterface *pIVar3;
  FMassArchetypeData *this_00;
  void *pvVar4;
  StorageSelector local_res8 [8];
  
  local_res8[0] = (StorageSelector)0x0;
  pIVar3 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res8,&this->EntityStorage);
  this_00 = (FMassArchetypeData *)
            (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3,(ulonglong)param_1 & 0xffffffff);
  if (this_00 == (FMassArchetypeData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentArchetype",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                       ,0x771,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar1)();
      return pvVar4;
    }
  }
  pvVar4 = FMassArchetypeData::GetFragmentDataForEntity(this_00,param_2,param_1.Index);
  return pvVar4;
}

// InternalGetSharedFragmentPtr @ 147231cd0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FSharedStruct * __thiscall
FMassEntityManager::InternalGetSharedFragmentPtr
          (FMassEntityManager *this,FMassEntityHandle param_1,UScriptStruct *param_2)

{
  TObjectPtr<UScriptStruct_const_>_u_0 *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  IEntityStorageInterface *pIVar5;
  longlong lVar6;
  FSharedStruct *pFVar7;
  int *piVar8;
  uint uVar9;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar10;
  FSharedStruct *pFVar11;
  StorageSelector local_res8 [8];
  
  local_res8[0] = (StorageSelector)0x0;
  pIVar5 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res8,&this->EntityStorage);
  lVar6 = (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5,(ulonglong)param_1 & 0xffffffff);
  if ((lVar6 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentArchetype",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x784,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FSharedStruct *)(*pcVar2)();
    return pFVar7;
  }
  piVar8 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
           FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                        *)(lVar6 + 0x1d0),param_1.Index);
  uVar4 = *piVar8 / *(int *)(lVar6 + 0x2a8);
  uVar9 = 0;
  if ((int)uVar4 < *(int *)(lVar6 + 0x1c8)) {
    uVar9 = ~uVar4 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar7 = (FSharedStruct *)(*pcVar2)();
    return pFVar7;
  }
  lVar6 = (longlong)(int)uVar4 * 0x90 + *(longlong *)(lVar6 + 0x1c0);
  pFVar7 = *(FSharedStruct **)(lVar6 + 0x80);
  pFVar11 = pFVar7 + *(int *)(lVar6 + 0x88);
  while( true ) {
    if (pFVar7 == pFVar11) {
      return (FSharedStruct *)0x0;
    }
    pTVar1 = (TObjectPtr<UScriptStruct_const_>_u_0 *)(pFVar7->StructMemoryPtr).Object;
    TVar10.DebugPtr = (UScriptStruct *)0x0;
    if (pTVar1 != (TObjectPtr<UScriptStruct_const_>_u_0 *)0x0) {
      TVar10 = (TObjectPtr<UScriptStruct_const_>_u_0)pTVar1->DebugPtr;
    }
    if (TVar10.DebugPtr == param_2) break;
    pFVar7 = pFVar7 + 1;
  }
  return pFVar7;
}

// InternalReleaseEntity @ 147231e10

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityManager::InternalReleaseEntity(FMassEntityManager *this,FMassEntityHandle param_1)

{
  IEntityStorageInterface *pIVar1;
  StorageSelector local_res8 [32];
  
  local_res8[0] = (StorageSelector)0x0;
  pIVar1 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res8,&this->EntityStorage);
  (**(code **)((longlong)*pIVar1 + 0x98))(pIVar1,param_1);
  return;
}

// IsEntityActive @ 147232570

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityManager::IsEntityActive(FMassEntityManager *this,FMassEntityHandle param_1)

{
  undefined1 uVar1;
  IEntityStorageInterface *pIVar2;
  StorageSelector local_res10 [24];
  
  if (param_1.Index != 0) {
    local_res10[0] = (StorageSelector)0x0;
    pIVar2 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
               ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res10,&this->EntityStorage);
    uVar1 = (**(code **)((longlong)*pIVar2 + 0x58))(pIVar2,param_1);
    return (bool)uVar1;
  }
  return false;
}

// IsEntityBuilt @ 147232640

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityManager::IsEntityBuilt(FMassEntityManager *this,FMassEntityHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  IEntityStorageInterface *pIVar5;
  StorageSelector local_res8 [8];
  FMassEntityHandle local_res10;
  
  local_res10 = param_1;
  bVar2 = IsEntityValid(this,param_1);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsEntityValid(EntityHandle)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntityManager.h"
                         ,0x22c,L"Invalid entity (ID: %d, SN:%d, %s)"), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  local_res8[0] = (StorageSelector)0x0;
  pIVar5 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res8,&this->EntityStorage);
  iVar4 = (**(code **)((longlong)*pIVar5 + 0x38))(pIVar5,(ulonglong)param_1 & 0xffffffff);
  return iVar4 == 2;
}

// IsEntityReserved @ 147232710

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityManager::IsEntityReserved(FMassEntityManager *this,FMassEntityHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  IEntityStorageInterface *pIVar5;
  StorageSelector local_res8 [8];
  FMassEntityHandle local_res10;
  
  local_res10 = param_1;
  bVar2 = IsEntityValid(this,param_1);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsEntityValid(EntityHandle)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntityManager.h"
                         ,0x22c,L"Invalid entity (ID: %d, SN:%d, %s)"), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  local_res8[0] = (StorageSelector)0x0;
  pIVar5 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res8,&this->EntityStorage);
  iVar4 = (**(code **)((longlong)*pIVar5 + 0x38))(pIVar5,(ulonglong)param_1 & 0xffffffff);
  return iVar4 == 1;
}

// IsEntityValid @ 1472327c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityManager::IsEntityValid(FMassEntityManager *this,FMassEntityHandle param_1)

{
  char cVar1;
  int iVar2;
  IEntityStorageInterface *pIVar3;
  int iStackX_14;
  StorageSelector local_res18 [8];
  
  if (param_1.Index != 0) {
    local_res18[0] = (StorageSelector)0x0;
    pIVar3 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
               ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res18,&this->EntityStorage);
    cVar1 = (**(code **)((longlong)*pIVar3 + 0x48))(pIVar3,(ulonglong)param_1 & 0xffffffff);
    if (cVar1 != '\0') {
      local_res18[0] = (StorageSelector)0x0;
      pIVar3 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
                 ::__l2::Invokers[(this->EntityStorage).TypeIndex])
                         (local_res18,&this->EntityStorage);
      iVar2 = (**(code **)((longlong)*pIVar3 + 0x40))(pIVar3,(ulonglong)param_1 & 0xffffffff);
      iStackX_14 = param_1.SerialNumber;
      if (iVar2 == iStackX_14) {
        return true;
      }
    }
  }
  return false;
}

// MakeEntityBuilder @ 1472350a0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FEntityBuilder * __thiscall
FMassEntityManager::MakeEntityBuilder
          (FMassEntityManager *this,FEntityBuilder *__return_storage_ptr__)

{
  TSharedRef<FMassEntityManager,1> *pTVar1;
  TSharedRef<FMassEntityManager,1> local_18;
  
  pTVar1 = TSharedFromThis<FMassEntityManager,1>::AsShared
                     ((TSharedFromThis<FMassEntityManager,1> *)&this->_padding_,&local_18);
  UE::Mass::FEntityBuilder::FEntityBuilder(__return_storage_ptr__,pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// MoveEntityToAnotherArchetype @ 1472356a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassEntityManager::MoveEntityToAnotherArchetype
          (FMassEntityManager *this,FMassEntityHandle param_1,FMassArchetypeHandle *param_2,
          FMassArchetypeSharedFragmentValues *param_3)

{
  FMassArchetypeData *this_00;
  code *pcVar1;
  bool bVar2;
  IEntityStorageInterface *pIVar3;
  FMassArchetypeData *this_01;
  undefined1 auStackY_1c8 [32];
  StorageSelector local_198;
  StorageSelector local_197 [15];
  undefined1 local_188 [48];
  void *local_158;
  void *local_138;
  void *local_118;
  void *local_f8;
  undefined1 local_e8 [48];
  void *local_b8;
  void *local_98;
  void *local_78;
  void *local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if (UE::AITestSuite::TestsInProgress < 1) {
    if (0 < (int)this->ProcessingScopeCount) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsProcessing() == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x726,
                         L"Synchronous API function %hs called during mass processing. Use asynchronous API instead."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  else if (0 < (int)this->ProcessingScopeCount) {
    if (1 < (byte)LogTestableEnsures._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
    }
    goto LAB_147235999;
  }
  bVar2 = IsEntityBuilt(this,param_1);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsEntityBuilt(EntityHandle)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntityManager.h"
                       ,0x232,L"Entity not yet created(ID: %d, SN:%d)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2->DataPtr).Object == (FMassArchetypeData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArchetypeHandle.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                       ,0x1ff,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (param_2->DataPtr).Object;
  local_198 = (StorageSelector)0x0;
  pIVar3 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(&local_198,&this->EntityStorage);
  this_01 = (FMassArchetypeData *)
            (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3,(ulonglong)param_1 & 0xffffffff);
  if (this_01 == (FMassArchetypeData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentArchetype",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                       ,0x72e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMassArchetypeCompositionDescriptor::CalculateDifference
            ((FMassArchetypeCompositionDescriptor *)this_01,
             (FMassArchetypeCompositionDescriptor *)local_e8,&this_00->CompositionDescriptor);
  FMassObserverManager::OnCompositionChanged
            (&this->ObserverManager,param_1,(FMassArchetypeCompositionDescriptor *)local_e8,
             RemoveElement,(FProcessingContext *)0x0);
  FMassArchetypeData::MoveEntityToAnotherArchetype(this_01,param_1,this_00,param_3);
  local_197[0] = (StorageSelector)0x0;
  pIVar3 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_197,&this->EntityStorage);
  (**(code **)((longlong)*pIVar3 + 0x30))(pIVar3,(ulonglong)param_1 & 0xffffffff,param_2);
  FMassArchetypeCompositionDescriptor::CalculateDifference
            (&this_00->CompositionDescriptor,(FMassArchetypeCompositionDescriptor *)local_188,
             (FMassArchetypeCompositionDescriptor *)this_01);
  FMassObserverManager::OnCompositionChanged
            (&this->ObserverManager,param_1,(FMassArchetypeCompositionDescriptor *)local_188,
             AddElement,(FProcessingContext *)0x0);
  if (local_f8 != (void *)0x0) {
    FMemory::Free(local_f8);
  }
  if (local_118 != (void *)0x0) {
    FMemory::Free(local_118);
  }
  if (local_138 != (void *)0x0) {
    FMemory::Free(local_138);
  }
  if (local_158 != (void *)0x0) {
    FMemory::Free(local_158);
  }
  if ((void *)local_188._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_188._16_8_);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  if ((void *)local_e8._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e8._16_8_);
  }
LAB_147235999:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->DataPtr).SharedReferenceCount.ReferenceController);
  return;
}

// OnNewTypeRegistered @ 147237f70

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */

void __thiscall
FMassEntityManager::OnNewTypeRegistered(FMassEntityManager *this,FTypeHandle param_1)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  FTypeInfo *pFVar4;
  undefined8 uVar5;
  longlong *plVar6;
  FRelationTypeTraits *pFVar7;
  FObjectKey local_res8;
  
  local_res8 = (FObjectKey)param_1.TypeKey.ObjectKey;
  pFVar4 = TMapBase<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,0>_>
           ::Find((TMapBase<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,0>_>
                   *)&((this->TypeManager).Object)->TypeDataMap,(FTypeHandle *)&local_res8);
  if (pFVar4 == (FTypeInfo *)0x0) {
    if (UE::AITestSuite::TestsInProgress < 1) {
      ``FMassEntityManager::OnNewTypeRegistered'::__l3::<lambda_1>::operator()'::__l16::<lambda_1>::
      operator()(&local_res8);
      return;
    }
    if (2 < (byte)LogTestableEnsures._0_1_) {
      UE::Logging::Private::BasicLog<3>
                ((FStaticBasicLogRecord *)&PTR_u__hs_input_handl_1515756d8,
                 (FLogCategoryBase *)&LogTestableEnsures);
      return;
    }
  }
  else {
    pFVar7 = (FRelationTypeTraits *)&pFVar4->Traits;
    if ((pFVar4->Traits).TypeIndex != '\x03') {
      pFVar7 = (FRelationTypeTraits *)0x0;
    }
    if (pFVar7 != (FRelationTypeTraits *)0x0) {
      if (*(void **)&pFVar7->RegisterObserversDelegate != (void *)0x0) {
        UE::Core::Private::Function::CheckCallable(*(void **)&pFVar7->RegisterObserversDelegate);
        plVar1 = *(longlong **)&(pFVar7->RegisterObserversDelegate).field_0x28;
        pcVar2 = *(code **)&pFVar7->RegisterObserversDelegate;
        plVar6 = (longlong *)&(pFVar7->RegisterObserversDelegate).field_0x10;
        if (plVar1 != (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar5 = (**(code **)(*plVar6 + 8))();
        cVar3 = (*pcVar2)(uVar5,this);
        if (cVar3 != '\x01') {
          return;
        }
      }
      UE::Mass::FRelationManager::OnRelationTypeRegistered(&this->RelationManager,param_1,pFVar7);
    }
  }
  return;
}

// OnPostFork @ 1472395e0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall FMassEntityManager::OnPostFork(FMassEntityManager *this,EForkProcessRole param_1)

{
  DWORD DVar1;
  FMassCommandBuffer *lpCriticalSection;
  FMassCommandBuffer *pFVar2;
  TSharedPtr<FMassCommandBuffer,1> *this_00;
  FLLMScope local_res10 [2];
  TRawPtrProxy<FMassCommandBuffer> local_res18;
  FMemScope local_res20;
  
  if (param_1 == Child) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&::LLMScope_Name301,L"Mass/EntityManager");
      _Init_thread_footer(&::_TSS0);
    }
    FLLMScope::FLLMScope(local_res10,::LLMScope_Name301,false,None,Default,true);
    FMemScope::FMemScope(&local_res20,&::LLMScope_Name301,true);
    this_00 = (this->DeferredCommandBuffers).Elements;
    if (this_00 != (TSharedPtr<FMassCommandBuffer,1> *)&this->OpenedCommandBufferIndex) {
      do {
        pFVar2 = this_00->Object;
        if (pFVar2 == (FMassCommandBuffer *)0x0) {
          lpCriticalSection = ::operator_new(0x60);
          pFVar2 = (FMassCommandBuffer *)0x0;
          if (lpCriticalSection != (FMassCommandBuffer *)0x0) {
            InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)lpCriticalSection,4000);
            *(undefined4 *)&(lpCriticalSection->PendingBatchCommandsDetector).field_0x0 = 0;
            (lpCriticalSection->CommandInstances).AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            (lpCriticalSection->CommandInstances).ArrayNum = 0;
            (lpCriticalSection->CommandInstances).ArrayMax = 0;
            (lpCriticalSection->AppendedCommandInstances).AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            (lpCriticalSection->AppendedCommandInstances).ArrayNum = 0;
            (lpCriticalSection->AppendedCommandInstances).ArrayMax = 0;
            lpCriticalSection->ActiveCommandsCounter = 0;
            lpCriticalSection->bIsFlushing = false;
            DVar1 = GetCurrentThreadId();
            lpCriticalSection->OwnerThreadId = DVar1;
            pFVar2 = lpCriticalSection;
          }
          local_res18.Object = pFVar2;
          TSharedPtr<FMassCommandBuffer,1>::operator=<FMassCommandBuffer>(this_00,&local_res18);
        }
        else {
          DVar1 = GetCurrentThreadId();
          pFVar2->OwnerThreadId = DVar1;
        }
        this_00 = this_00 + 1;
      } while (this_00 != (TSharedPtr<FMassCommandBuffer,1> *)&this->OpenedCommandBufferIndex);
    }
    FMassObserverManager::OnPostFork(&this->ObserverManager,Child);
    FMemScope::~FMemScope(&local_res20);
    FLLMScope::~FLLMScope(local_res10);
  }
  return;
}

// OnRelationTypeRegistered @ 147239ae0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */

void __thiscall
FMassEntityManager::OnRelationTypeRegistered
          (FMassEntityManager *this,FTypeHandle param_1,FRelationTypeTraits *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  if (*(void **)&param_2->RegisterObserversDelegate != (void *)0x0) {
    UE::Core::Private::Function::CheckCallable(*(void **)&param_2->RegisterObserversDelegate);
    plVar1 = *(longlong **)&(param_2->RegisterObserversDelegate).field_0x28;
    pcVar2 = *(code **)&param_2->RegisterObserversDelegate;
    plVar5 = (longlong *)&(param_2->RegisterObserversDelegate).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar5 = plVar1;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,this);
    if (cVar3 != '\x01') {
      return;
    }
  }
  UE::Mass::FRelationManager::OnRelationTypeRegistered(&this->RelationManager,param_1,param_2);
  return;
}

// PostInitialize @ 14723cfd0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall FMassEntityManager::PostInitialize(FMassEntityManager *this)

{
  ulonglong uVar1;
  int iVar2;
  FTypeManager *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  uint *puVar12;
  undefined1 local_res8 [8];
  TMap<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,0>_>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  undefined4 uStack_84;
  TMap<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Mass::FTypeHandle,UE::Mass::FTypeInfo,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined4 local_34;
  
  if (this->InitializationState != Initialized) {
    local_res8[0] = 0;
    `FMassEntityManager::PostInitialize'::__l2::<lambda_1>::operator()(local_res8);
  }
  pFVar3 = (this->TypeManager).Object;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &UE::Mass::FTypeManager::OnRegisterBuiltInTypes,(FWriteAccessScope *)&local_a8);
  bVar5 = false;
  UE::Mass::FTypeManager::OnRegisterBuiltInTypes._28_4_ =
       UE::Mass::FTypeManager::OnRegisterBuiltInTypes._28_4_ + 1;
  iVar11 = 0;
  uVar9 = UE::Mass::FTypeManager::OnRegisterBuiltInTypes._16_4_ - 1;
  if (-1 < (int)uVar9) {
    lVar10 = (longlong)(int)uVar9 << 4;
    bVar5 = false;
    do {
      uVar8 = 0;
      if ((int)uVar9 < (int)UE::Mass::FTypeManager::OnRegisterBuiltInTypes._16_4_) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (((*(int *)(lVar10 + 8 + UE::Mass::FTypeManager::OnRegisterBuiltInTypes._8_8_) == 0) ||
          (*(longlong **)(lVar10 + UE::Mass::FTypeManager::OnRegisterBuiltInTypes._8_8_) ==
           (longlong *)0x0)) ||
         (cVar7 = (**(code **)(**(longlong **)
                                 (lVar10 + UE::Mass::FTypeManager::OnRegisterBuiltInTypes._8_8_) +
                              0x68))(), cVar7 == '\0')) {
        bVar5 = true;
      }
      lVar10 = lVar10 + -0x10;
      uVar9 = uVar9 - 1;
    } while (-1 < (int)uVar9);
  }
  UE::Mass::FTypeManager::OnRegisterBuiltInTypes._28_4_ =
       UE::Mass::FTypeManager::OnRegisterBuiltInTypes._28_4_ + -1;
  if (bVar5) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &UE::Mass::FTypeManager::OnRegisterBuiltInTypes,false);
  }
  if (local_98._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_9c,iStack_a0),
               (FDestructionSentinel *)&local_a8);
  }
  pFVar3->bBuiltInTypesRegistered = true;
  uStack_9c = 1;
  pFVar3 = (this->TypeManager).Object;
  local_a8 = &pFVar3->TypeDataMap;
  local_88 = 0;
  iVar2 = *(int *)&(pFVar3->TypeDataMap).field_0x28;
  local_98 = &(pFVar3->TypeDataMap).field_0x10;
  iStack_8c = 0;
  if (iVar2 != 0) {
    puVar12 = *(uint **)&(pFVar3->TypeDataMap).field_0x20;
    if (puVar12 == (uint *)0x0) {
      puVar12 = (uint *)local_98;
    }
    uVar9 = *puVar12;
    while (uVar9 == 0) {
      lVar10 = (longlong)iVar11;
      local_88 = local_88 + 0x20;
      iVar11 = iVar11 + 1;
      iStack_8c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14723d188;
      uVar9 = puVar12[lVar10 + 1];
    }
    uStack_9c = -uVar9 & uVar9;
    uVar1 = (ulonglong)uStack_9c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iStack_8c = local_88 + -1 + (int)lVar10;
    if (iVar2 < iStack_8c) {
      iStack_8c = iVar2;
    }
  }
LAB_14723d188:
  uStack_90 = 0xffffffff;
  uStack_84 = local_34;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._28_4_ = local_34;
  TStack_70.BaseBitIndex = local_88;
  iStack_a0 = iVar11;
  local_78 = local_a8;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_98;
  TStack_70._padding_._0_4_ = iVar11;
  TStack_70._padding_._4_4_ = uStack_9c;
  TStack_70.CurrentBitIndex = iStack_8c;
  if (iStack_8c < iVar2) {
    do {
      OnNewTypeRegistered(this,(FTypeHandle)
                               ((TObjectKey<UStruct_const_> *)
                               ((longlong)TStack_70.CurrentBitIndex * 0xf0 + *(longlong *)local_78))
                               ->ObjectKey);
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    } while (TStack_70.CurrentBitIndex < (TStack_70.Array)->NumBits);
  }
  FMassObserverManager::Initialize(&this->ObserverManager);
  return;
}

// ReleaseReservedEntity @ 147244130

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityManager::ReleaseReservedEntity(FMassEntityManager *this,FMassEntityHandle param_1)

{
  code *pcVar1;
  bool bVar2;
  IEntityStorageInterface *pIVar3;
  StorageSelector local_res8 [8];
  
  bVar2 = IsEntityBuilt(this,param_1);
  if (bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsEntityBuilt(Entity)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                       ,0x276,L"Entity is already built, use DestroyEntity() instead");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8[0] = (StorageSelector)0x0;
  pIVar3 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res8,&this->EntityStorage);
  (**(code **)((longlong)*pIVar3 + 0x98))(pIVar3,param_1);
  return;
}

// RemoveCompositionFromEntity @ 147245620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassEntityManager::RemoveCompositionFromEntity
          (FMassEntityManager *this,FMassEntityHandle param_1,
          FMassArchetypeCompositionDescriptor *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  IEntityStorageInterface *pIVar4;
  FMassArchetypeData *this_00;
  int *piVar5;
  FMassArchetypeData *pFVar6;
  uint uVar7;
  TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *pTVar8;
  undefined1 auStackY_1c8 [32];
  StorageSelector local_198;
  undefined1 local_197;
  StorageSelector local_196;
  FIdentityFunctor local_195;
  FIdentityFunctor local_194 [4];
  FMassArchetypeHandle local_190;
  FMassArchetypeCreationParams local_180;
  TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *local_170;
  TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
  *local_168;
  undefined1 local_158 [56];
  void *local_120;
  ForAnyElementType local_110;
  int local_108;
  ForAnyElementType local_100;
  int local_f8;
  undefined1 local_e8 [32];
  TBitArray<FDefaultBitArrayAllocator> local_c8;
  TBitArray<FDefaultBitArrayAllocator> local_a8;
  TBitArray<FDefaultBitArrayAllocator> local_88;
  TBitArray<FDefaultBitArrayAllocator> local_68;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  if (UE::AITestSuite::TestsInProgress < 1) {
    if ((0 < (int)this->ProcessingScopeCount) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsProcessing() == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                           ,0x451,
                           L"Synchronous API function %hs called during mass processing. Use asynchronous API instead."
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (0 < (int)this->ProcessingScopeCount) {
    if ((byte)LogTestableEnsures._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
    return;
  }
  bVar2 = IsEntityBuilt(this,param_1);
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsEntityBuilt(EntityHandle)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntityManager.h"
                         ,0x232,L"Entity not yet created(ID: %d, SN:%d)"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty((FConstBitSetContainer *)param_2);
  if ((((bVar2) &&
       (bVar2 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                          ((FConstBitSetContainer *)&param_2->Tags), bVar2)) &&
      (bVar2 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                         ((FConstBitSetContainer *)&param_2->ChunkFragments), bVar2)) &&
     ((bVar2 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                         ((FConstBitSetContainer *)&param_2->SharedFragments), bVar2 &&
      (bVar2 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                         ((FConstBitSetContainer *)&param_2->ConstSharedFragments), bVar2)))) {
    return;
  }
  local_198 = (StorageSelector)0x0;
  pIVar4 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(&local_198,&this->EntityStorage);
  this_00 = (FMassArchetypeData *)
            (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4,(ulonglong)param_1 & 0xffffffff);
  if ((this_00 == (FMassArchetypeData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("OldArchetype",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_e8,(FBitSetContainer *)this_00);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&local_c8,
             (FBitSetContainer *)&(this_00->CompositionDescriptor).Tags);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&local_a8,
             (FBitSetContainer *)&(this_00->CompositionDescriptor).ChunkFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&local_88,
             (FBitSetContainer *)&(this_00->CompositionDescriptor).SharedFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)&local_68,
             (FBitSetContainer *)&(this_00->CompositionDescriptor).ConstSharedFragments);
  FStructTypeBitSet::FBitSetContainer::operator-=
            ((FBitSetContainer *)local_e8,(TBitArray<FDefaultBitArrayAllocator> *)param_2);
  FStructTypeBitSet::FBitSetContainer::operator-=
            ((FBitSetContainer *)&local_c8,(TBitArray<FDefaultBitArrayAllocator> *)&param_2->Tags);
  FStructTypeBitSet::FBitSetContainer::operator-=
            ((FBitSetContainer *)&local_a8,
             (TBitArray<FDefaultBitArrayAllocator> *)&param_2->ChunkFragments);
  local_168 = &param_2->SharedFragments;
  FStructTypeBitSet::FBitSetContainer::operator-=
            ((FBitSetContainer *)&local_88,(TBitArray<FDefaultBitArrayAllocator> *)local_168);
  local_170 = &param_2->ConstSharedFragments;
  FStructTypeBitSet::FBitSetContainer::operator-=
            ((FBitSetContainer *)&local_68,(TBitArray<FDefaultBitArrayAllocator> *)local_170);
  bVar2 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                    ((FConstBitSetContainer *)&param_2->ChunkFragments);
  if (!bVar2) {
    local_197 = bVar2;
    `FMassEntityManager::RemoveCompositionFromEntity'::__l40::<lambda_1>::operator()(&local_197);
  }
  bVar2 = TBitArray<FDefaultBitArrayAllocator>::CompareSetBits<FDefaultBitArrayAllocator>
                    ((TBitArray<FDefaultBitArrayAllocator> *)local_e8,
                     (TBitArray<FDefaultBitArrayAllocator> *)this_00,false);
  if ((((bVar2) &&
       (bVar2 = TBitArray<FDefaultBitArrayAllocator>::CompareSetBits<FDefaultBitArrayAllocator>
                          (&local_c8,
                           (TBitArray<FDefaultBitArrayAllocator> *)
                           &(this_00->CompositionDescriptor).Tags,false), bVar2)) &&
      (bVar2 = TBitArray<FDefaultBitArrayAllocator>::CompareSetBits<FDefaultBitArrayAllocator>
                         (&local_a8,
                          (TBitArray<FDefaultBitArrayAllocator> *)
                          &(this_00->CompositionDescriptor).ChunkFragments,false), bVar2)) &&
     ((bVar2 = TBitArray<FDefaultBitArrayAllocator>::CompareSetBits<FDefaultBitArrayAllocator>
                         (&local_88,
                          (TBitArray<FDefaultBitArrayAllocator> *)
                          &(this_00->CompositionDescriptor).SharedFragments,false), bVar2 &&
      (bVar2 = TBitArray<FDefaultBitArrayAllocator>::CompareSetBits<FDefaultBitArrayAllocator>
                         (&local_68,
                          (TBitArray<FDefaultBitArrayAllocator> *)
                          &(this_00->CompositionDescriptor).ConstSharedFragments,false), bVar2))))
  goto LAB_147245b6e;
  FMassObserverManager::OnCompositionChanged
            (&this->ObserverManager,param_1,param_2,RemoveElement,(FProcessingContext *)0x0);
  local_180.ChunkMemorySize = this_00->ChunkMemorySize;
  local_180.DebugName.ComparisonIndex.Value = 0;
  local_180.DebugName.Number = 0;
  local_180.DebugColor.field0_0x0.Bits = (FColor_u_0)0x0;
  CreateArchetype(this,&local_190,(FMassArchetypeCompositionDescriptor *)local_e8,&local_180);
  if (local_190.DataPtr.Object == this_00) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5136943605146975131>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                       ,0x465,"NewArchetypeHandle.DataPtr.Get() != OldArchetype");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    pFVar6 = local_190.DataPtr.Object;
    if ((local_190.DataPtr.Object == (FMassArchetypeData *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArchetypeHandle.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                           ,0x1ff,L""), pFVar6 = local_190.DataPtr.Object, bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=(&pFVar6->DebugNames,&this_00->DebugNames);
    bVar2 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                      ((FConstBitSetContainer *)&param_2->SharedFragments);
    pTVar8 = local_170;
    if (bVar2) {
      bVar2 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                        ((FConstBitSetContainer *)&param_2->ConstSharedFragments);
      pTVar8 = &param_2->ConstSharedFragments;
      if (!bVar2) goto LAB_1472459f2;
      FMassArchetypeData::MoveEntityToAnotherArchetype
                (this_00,param_1,pFVar6,(FMassArchetypeSharedFragmentValues *)0x0);
    }
    else {
LAB_1472459f2:
      piVar5 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
               FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                            *)&this_00->EntityMap,param_1.Index);
      uVar3 = *piVar5 / this_00->NumEntitiesPerChunk;
      uVar7 = 0;
      if ((int)uVar3 < (this_00->Chunks).ArrayNum) {
        uVar7 = ~uVar3 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues
                ((FMassArchetypeSharedFragmentValues *)local_158,
                 (FMassArchetypeSharedFragmentValues *)
                 ((this_00->Chunks).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x90 + 0x28));
      FMassArchetypeSharedFragmentValues::Remove
                ((FMassArchetypeSharedFragmentValues *)local_158,local_168);
      FMassArchetypeSharedFragmentValues::Remove
                ((FMassArchetypeSharedFragmentValues *)local_158,pTVar8);
      if (local_158[4] == false) {
        AlgoImpl::
        IntroSortInternal<FConstSharedStruct,int,FIdentityFunctor,TDereferenceWrapper<FConstSharedStruct,FStructTypeSortOperator>_>
                  ((FConstSharedStruct *)local_110.Data,local_108,local_195,
                   (FStructTypeSortOperator *)&local_195);
        AlgoImpl::
        IntroSortInternal<FSharedStruct,int,FIdentityFunctor,TDereferenceWrapper<FSharedStruct,FStructTypeSortOperator>_>
                  ((FSharedStruct *)local_100.Data,local_f8,local_194[0],
                   (FStructTypeSortOperator *)local_194);
        local_158[4] = true;
      }
      FMassArchetypeData::MoveEntityToAnotherArchetype
                (this_00,param_1,pFVar6,(FMassArchetypeSharedFragmentValues *)local_158);
      DestructItems<FSharedStruct,int>((FSharedStruct *)local_100.Data,local_f8);
      if (local_100.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data);
      }
      DestructItems<FConstSharedStruct,int>((FConstSharedStruct *)local_110.Data,local_108);
      if (local_110.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_110.Data);
      }
      if (local_120 != (void *)0x0) {
        FMemory::Free(local_120);
      }
      if ((void *)local_158._24_8_ != (void *)0x0) {
        FMemory::Free((void *)local_158._24_8_);
      }
    }
    local_196 = (StorageSelector)0x0;
    pIVar4 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
               ::__l2::Invokers[(this->EntityStorage).TypeIndex])(&local_196,&this->EntityStorage);
    (**(code **)((longlong)*pIVar4 + 0x28))(pIVar4,(ulonglong)param_1 & 0xffffffff,&local_190);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_190.DataPtr.SharedReferenceCount.ReferenceController);
LAB_147245b6e:
  if (local_68.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
  }
  if (local_88.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
  }
  if (local_a8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_a8.AllocatorInstance.SecondaryData);
  }
  if (local_c8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_c8.AllocatorInstance.SecondaryData);
  }
  if ((ForElementType<unsigned_int>)local_e8._16_8_ != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_e8._16_8_);
  }
  return;
}

// RemoveConstSharedFragmentFromEntity @ 147245c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMassEntityManager::RemoveConstSharedFragmentFromEntity
          (FMassEntityManager *this,FMassEntityHandle param_1,UScriptStruct *param_2)

{
  FMassArchetypeData *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  UPackage *pUVar7;
  IEntityStorageInterface *pIVar8;
  undefined8 *puVar9;
  UStruct *pUVar10;
  int *piVar11;
  uint uVar12;
  char *pcVar13;
  int iStackX_14;
  undefined1 auStack_1e8 [32];
  char *local_1c8;
  longlong local_1c0;
  undefined1 local_1b8;
  StorageSelector local_1b7;
  StorageSelector local_1b6;
  FIdentityFunctor local_1b5;
  FIdentityFunctor local_1b4 [4];
  FMassArchetypeCreationParams local_1b0;
  FMassArchetypeHandle local_1a0;
  UScriptStruct *local_190;
  UScriptStruct *local_188;
  UScriptStruct *local_180;
  undefined1 local_178 [16];
  void *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined1 local_158 [56];
  void *local_120;
  ForAnyElementType local_110;
  int local_108;
  ForAnyElementType local_100;
  int local_f8;
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  if (UE::AITestSuite::TestsInProgress < 1) {
    if (0 < (int)this->ProcessingScopeCount) {
      local_1c8 = "FMassEntityManager::RemoveConstSharedFragmentFromEntity";
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsProcessing() == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x5bd,
                         L"Synchronous API function %hs called during mass processing. Use asynchronous API instead."
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
  }
  else if (0 < (int)this->ProcessingScopeCount) {
    if ((byte)LogTestableEnsures._0_1_ < 2) {
      return false;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
    return false;
  }
  if (param_2 == (UScriptStruct *)0x0) {
LAB_147245d1d:
    local_1b8 = 0;
    bVar3 = `FMassEntityManager::RemoveConstSharedFragmentFromEntity'::__l38::<lambda_1>::operator()
                      (&local_1b8);
    if (!bVar3) {
      return false;
    }
  }
  else {
    if (Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar7 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassConstSharedFragment,(UObject *)pUVar7,
                           L"MassConstSharedFragment");
      if (Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_147245d1d;
    }
    iVar5 = (int)(Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton)->
                 _padding_;
    if (((int)param_2->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(param_2->_padding_ + (longlong)iVar5 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassConstSharedFragment.OuterSingleton)->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_147245d1d;
  }
  bVar3 = IsEntityBuilt(this,param_1);
  if (!bVar3) {
    iStackX_14 = param_1.SerialNumber;
    local_1c0 = CONCAT44(local_1c0._4_4_,iStackX_14);
    local_1c8 = (char *)CONCAT44(local_1c8._4_4_,param_1.Index);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsEntityBuilt(EntityHandle)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntityManager.h"
                       ,0x232,L"Entity not yet created(ID: %d, SN:%d)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_1b7 = (StorageSelector)0x0;
  pIVar8 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(&local_1b7,&this->EntityStorage);
  puVar9 = (undefined8 *)
           (**(code **)((longlong)*pIVar8 + 0x20))(pIVar8,(ulonglong)param_1 & 0xffffffff);
  this_00 = (FMassArchetypeData *)*puVar9;
  if ((this_00 == (FMassArchetypeData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentArchetype",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x5c7,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pUVar10 = TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
            ::GetBaseUStruct();
  if (pUVar10 == (UStruct *)0x0) {
LAB_147245e03:
    local_190 = param_2;
    bVar3 = `TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
            ::Contains'::__l6::<lambda_1>::operator()(&local_190);
    if (!bVar3) {
      return false;
    }
  }
  else {
    iVar5 = (int)pUVar10->_padding_;
    if (((int)param_2->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(param_2->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar10->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_147245e03;
  }
  iVar5 = FStructTracker::FindStructTypeIndex
                    (&FMassConstSharedFragmentBitSetStructTrackerWrapper::StructTracker,
                     (UStruct *)param_2);
  if ((iVar5 == -1) ||
     (bVar3 = FStructTypeBitSet::FConstBitSetContainer::Contains
                        ((FConstBitSetContainer *)
                         &(this_00->CompositionDescriptor).ConstSharedFragments,iVar5), !bVar3)) {
    return false;
  }
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_e8,(FBitSetContainer *)this_00);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_c8,(FBitSetContainer *)&(this_00->CompositionDescriptor).Tags
            );
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_a8,
             (FBitSetContainer *)&(this_00->CompositionDescriptor).ChunkFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_88,
             (FBitSetContainer *)&(this_00->CompositionDescriptor).SharedFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_68,
             (FBitSetContainer *)&(this_00->CompositionDescriptor).ConstSharedFragments);
  pUVar10 = TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
            ::GetBaseUStruct();
  if (pUVar10 == (UStruct *)0x0) {
LAB_147245ecc:
    local_188 = param_2;
    bVar3 = `TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
            ::Remove'::__l6::<lambda_1>::operator()(&local_188);
    if (bVar3) goto LAB_147245edf;
  }
  else {
    iVar5 = (int)pUVar10->_padding_;
    if (((int)param_2->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(param_2->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar10->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_147245ecc;
LAB_147245edf:
    iVar5 = FStructTracker::FindOrAddStructTypeIndex
                      (&FMassConstSharedFragmentBitSetStructTrackerWrapper::StructTracker,
                       (UStruct *)param_2);
    FStructTypeBitSet::FBitSetContainer::RemoveAtIndex((FBitSetContainer *)local_68,iVar5);
  }
  local_1b0.ChunkMemorySize = 0;
  local_1b0.DebugName.ComparisonIndex.Value = 0;
  local_1b0.DebugName.Number = 0;
  local_1b0.DebugColor.field0_0x0 = (FColor_u_0)0x0;
  CreateArchetype(this,&local_1a0,(FMassArchetypeCompositionDescriptor *)local_e8,&local_1b0);
  if ((local_1a0.DataPtr.Object == (FMassArchetypeData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewArchetypeHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x5d2,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((local_1a0.DataPtr.Object == (FMassArchetypeData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewArchetype",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x5d4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  piVar11 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
            FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                         *)&this_00->EntityMap,param_1.Index);
  uVar6 = *piVar11 / this_00->NumEntitiesPerChunk;
  pcVar13 = (char *)(longlong)(int)uVar6;
  iVar5 = (this_00->Chunks).ArrayNum;
  uVar12 = 0;
  if ((int)uVar6 < iVar5) {
    uVar12 = ~uVar6 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (local_1c8 = pcVar13, local_1c0 = (longlong)iVar5,
     bVar3 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar3
     )) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar1 = (this_00->Chunks).AllocatorInstance.Data;
  bVar3 = FMassArchetypeSharedFragmentValues::ContainsType
                    ((FMassArchetypeSharedFragmentValues *)
                     (pFVar1 + (longlong)pcVar13 * 0x90 + 0x28),param_2);
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("OldSharedFragmentValues.ContainsType(&ConstSharedFragmentType)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x5d7,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues
            ((FMassArchetypeSharedFragmentValues *)local_158,
             (FMassArchetypeSharedFragmentValues *)(pFVar1 + (longlong)pcVar13 * 0x90 + 0x28));
  local_168 = (void *)0x0;
  local_160 = 0;
  local_15c = 0x80;
  pUVar10 = TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
            ::GetBaseUStruct();
  if (pUVar10 == (UStruct *)0x0) {
LAB_147246079:
    local_180 = param_2;
    bVar3 = `TTypeBitSetBase<TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassConstSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
            ::Add'::__l6::<lambda_1>::operator()(&local_180);
    if (!bVar3) goto LAB_1472460a7;
  }
  else {
    iVar5 = (int)pUVar10->_padding_;
    if (((int)param_2->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(param_2->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar10->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_147246079;
  }
  iVar5 = FStructTracker::FindOrAddStructTypeIndex
                    (&FMassConstSharedFragmentBitSetStructTrackerWrapper::StructTracker,
                     (UStruct *)param_2);
  FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)local_178,iVar5);
LAB_1472460a7:
  FMassArchetypeSharedFragmentValues::Remove
            ((FMassArchetypeSharedFragmentValues *)local_158,
             (TStructTypeBitSet<FMassConstSharedFragment,FMassConstSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
              *)local_178);
  if (local_158[4] == false) {
    AlgoImpl::
    IntroSortInternal<FConstSharedStruct,int,FIdentityFunctor,TDereferenceWrapper<FConstSharedStruct,FStructTypeSortOperator>_>
              ((FConstSharedStruct *)local_110.Data,local_108,local_1b5,
               (FStructTypeSortOperator *)&local_1b5);
    AlgoImpl::
    IntroSortInternal<FSharedStruct,int,FIdentityFunctor,TDereferenceWrapper<FSharedStruct,FStructTypeSortOperator>_>
              ((FSharedStruct *)local_100.Data,local_f8,local_1b4[0],
               (FStructTypeSortOperator *)local_1b4);
    local_158[4] = true;
  }
  FMassArchetypeData::MoveEntityToAnotherArchetype
            (this_00,param_1,local_1a0.DataPtr.Object,
             (FMassArchetypeSharedFragmentValues *)local_158);
  local_1b6 = (StorageSelector)0x0;
  pIVar8 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(&local_1b6,&this->EntityStorage);
  (**(code **)((longlong)*pIVar8 + 0x28))(pIVar8,(ulonglong)param_1 & 0xffffffff,&local_1a0);
  if (local_168 != (void *)0x0) {
    FMemory::Free(local_168);
  }
  DestructItems<FSharedStruct,int>((FSharedStruct *)local_100.Data,local_f8);
  if (local_100.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data);
  }
  DestructItems<FConstSharedStruct,int>((FConstSharedStruct *)local_110.Data,local_108);
  if (local_110.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data);
  }
  if (local_120 != (void *)0x0) {
    FMemory::Free(local_120);
  }
  if ((void *)local_158._24_8_ != (void *)0x0) {
    FMemory::Free((void *)local_158._24_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a0.DataPtr.SharedReferenceCount.ReferenceController);
  if ((void *)local_68._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._16_8_);
  }
  if ((void *)local_88._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_88._16_8_);
  }
  if ((void *)local_a8._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_a8._16_8_);
  }
  if ((void *)local_c8._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c8._16_8_);
  }
  if ((void *)local_e8._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e8._16_8_);
  }
  return true;
}

// RemoveElementFromEntities @ 147246200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityManager::RemoveElementFromEntities
          (FMassEntityManager *this,TArrayView<FMassEntityHandle_const_,int> *param_1,
          TNotNull<UScriptStruct_const_*> param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UPackage *pUVar4;
  UStruct *pUVar5;
  void *pvVar6;
  undefined1 auStack_168 [32];
  char *local_148;
  FScriptContainerElement *local_140;
  TArray<FMassArchetypeEntityCollection,TSizedDefaultAllocator<32>_> local_138;
  FName local_128;
  UScriptStruct *local_120;
  UScriptStruct *local_118;
  FString local_110;
  FMassArchetypeEntityCollection *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FMassArchetypeEntityCollection *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  TArrayView<FMassEntityHandle_const_,int> local_d8;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_c8;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_b8;
  undefined1 local_a8 [16];
  void *pvStack_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88 [16];
  void *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68 [16];
  void *pvStack_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [16];
  void *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_168;
  bVar2 = UE::Mass::Private::IsElement(param_2);
  if (!bVar2) {
    local_128 = (FName)(param_2.Val)->_padding_;
    ::FName::ToString(&local_128,&local_110);
    local_140 = (FScriptContainerElement *)L"";
    if (local_110.Data.ArrayNum != 0) {
      local_140 = local_110.Data.AllocatorInstance.Data;
    }
    local_148 = "FMassEntityManager::RemoveElementFromEntities";
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UE::Mass::Private::IsElement(ElementType)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                       ,0x56c,
                       L"%hs: Only tags and fragments are considered \'elements\', type provided: %s"
                      );
    if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_110.Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_d8.DataPtr = param_1->DataPtr;
  local_d8.ArrayNum = param_1->ArrayNum;
  local_d8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  UE::Mass::Utils::CreateEntityCollections(this,&local_d8,FoldDuplicates,&local_138);
  if (param_2.Val != (UScriptStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassTag,(UObject *)pUVar4,L"MassTag");
      if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_147246433;
    }
    iVar3 = (int)(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_;
    if (((int)(param_2.Val)->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)((param_2.Val)->_padding_ + (longlong)iVar3 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      local_78 = (void *)0x0;
      local_70 = 0;
      local_6c = 0x80;
      pUVar5 = TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
               ::GetBaseUStruct();
      if (pUVar5 == (UStruct *)0x0) {
LAB_14724637f:
        local_120 = param_2.Val;
        bVar2 = `TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                ::Add'::__l6::<lambda_1>::operator()(&local_120);
        if (bVar2) goto LAB_147246392;
      }
      else {
        iVar3 = (int)pUVar5->_padding_;
        if (((int)(param_2.Val)->_padding_ < iVar3) ||
           ((longlong *)*(undefined1 **)((param_2.Val)->_padding_ + (longlong)iVar3 * 8) !=
            &pUVar5->_padding_)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_14724637f;
LAB_147246392:
        iVar3 = FStructTracker::FindOrAddStructTypeIndex
                          (&FMassTagBitSetStructTrackerWrapper::StructTracker,(UStruct *)param_2.Val
                          );
        FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)local_88,iVar3);
      }
      iVar3 = local_138.ArrayNum;
      local_f8 = (FMassArchetypeEntityCollection *)local_138.AllocatorInstance.Data;
      local_a8._0_8_ = 0;
      local_90 = 0;
      local_8c = 0x80;
      local_a8._8_8_ = 0;
      pvStack_98 = (void *)0x0;
      if ((local_138.ArrayNum < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iStack_f0 = iVar3;
      local_c8._12_4_ = uStack_ec;
      local_c8.ArrayNum = iVar3;
      local_c8.DataPtr = local_f8;
      BatchChangeTagsForEntities
                (this,&local_c8,
                 (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)
                 local_a8,(TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>
                           *)local_88);
      pvVar6 = local_78;
      if (pvStack_98 != (void *)0x0) {
        FMemory::Free(pvStack_98);
        pvVar6 = local_78;
      }
      goto LAB_14724651b;
    }
  }
LAB_147246433:
  local_38 = (void *)0x0;
  local_30 = 0;
  local_2c = 0x80;
  pUVar5 = TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           ::GetBaseUStruct();
  if (pUVar5 == (UStruct *)0x0) {
LAB_14724646f:
    local_118 = param_2.Val;
    bVar2 = `TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
            ::Add'::__l6::<lambda_1>::operator()(&local_118);
    if (bVar2) goto LAB_147246482;
  }
  else {
    iVar3 = (int)pUVar5->_padding_;
    if (((int)(param_2.Val)->_padding_ < iVar3) ||
       ((longlong *)*(undefined1 **)((param_2.Val)->_padding_ + (longlong)iVar3 * 8) !=
        &pUVar5->_padding_)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_14724646f;
LAB_147246482:
    iVar3 = FStructTracker::FindOrAddStructTypeIndex
                      (&FMassFragmentBitSetStructTrackerWrapper::StructTracker,
                       (UStruct *)param_2.Val);
    FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)local_48,iVar3);
  }
  iVar3 = local_138.ArrayNum;
  local_e8 = (FMassArchetypeEntityCollection *)local_138.AllocatorInstance.Data;
  local_68._0_8_ = 0;
  local_50 = 0;
  local_4c = 0x80;
  local_68._8_8_ = 0;
  pvStack_58 = (void *)0x0;
  if ((local_138.ArrayNum < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iStack_e0 = iVar3;
  local_b8._12_4_ = uStack_dc;
  local_b8.ArrayNum = iVar3;
  local_b8.DataPtr = local_e8;
  BatchChangeFragmentCompositionForEntities
            (this,&local_b8,
             (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
              *)local_68,
             (TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>
              *)local_48);
  pvVar6 = local_38;
  if (pvStack_58 != (void *)0x0) {
    FMemory::Free(pvStack_58);
    pvVar6 = local_38;
  }
LAB_14724651b:
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  DestructItems<FMassArchetypeEntityCollection,int>
            ((FMassArchetypeEntityCollection *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
  if ((FMassArchetypeEntityCollection *)local_138.AllocatorInstance.Data !=
      (FMassArchetypeEntityCollection *)0x0) {
    FMemory::Free(local_138.AllocatorInstance.Data);
  }
  return;
}

// RemoveElementFromEntity @ 147246570

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityManager::RemoveElementFromEntity
          (FMassEntityManager *this,FMassEntityHandle param_1,
          TNotNull<UScriptStruct_const_*> param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UPackage *pUVar4;
  FName local_res18;
  UScriptStruct *local_res20;
  FString local_48;
  UScriptStruct **local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  TArrayView<UScriptStruct_const_*_const,int> local_28;
  
  bVar3 = UE::Mass::Private::IsElement(param_2);
  if (!bVar3) {
    local_res18 = (FName)(param_2.Val)->_padding_;
    ::FName::ToString(&local_res18,&local_48);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("UE::Mass::Private::IsElement(ElementType)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                       ,0x57d,
                       L"%hs: Only tags and fragments are considered \'elements\', type provided: %s"
                      );
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_2.Val != (UScriptStruct *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar4 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassTag,(UObject *)pUVar4,L"MassTag");
      if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0)
      goto LAB_14724668c;
    }
    iVar1 = (int)(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_;
    if (((int)(param_2.Val)->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)((param_2.Val)->_padding_ + (longlong)iVar1 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      RemoveTagFromEntity(this,param_1,param_2.Val);
      return;
    }
  }
LAB_14724668c:
  local_38 = &local_res20;
  uStack_30 = 1;
  local_28._12_4_ = uStack_2c;
  local_28.ArrayNum = 1;
  local_res20 = param_2.Val;
  local_28.DataPtr = local_38;
  RemoveFragmentListFromEntity(this,param_1,&local_28);
  return;
}

// RemoveEntityFromGroupType @ 147246820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassEntityManager::RemoveEntityFromGroupType
          (FMassEntityManager *this,FMassEntityHandle param_1,FArchetypeGroupType param_2)

{
  FMassArchetypeData *this_00;
  code *pcVar1;
  bool bVar2;
  IEntityStorageInterface *pIVar3;
  undefined8 *puVar4;
  FArchetypeGroups *pFVar5;
  FSharedReferencer<1> FVar6;
  undefined1 *puVar7;
  undefined1 auStack_c8 [32];
  char *local_a8;
  StorageSelector local_98;
  StorageSelector local_97 [7];
  TSharedPtr<FMassArchetypeData,1> local_90;
  FMassArchetypeHandle local_80;
  FArchetypeGroups local_70;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (UE::AITestSuite::TestsInProgress < 1) {
    if (0 < (int)this->ProcessingScopeCount) {
      local_a8 = "FMassEntityManager::RemoveEntityFromGroupType";
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsProcessing() == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x3c3,
                         L"Synchronous API function %hs called during mass processing. Use asynchronous API instead."
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  else if (0 < (int)this->ProcessingScopeCount) {
    if ((byte)LogTestableEnsures._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
    return;
  }
  bVar2 = IsEntityValid(this,param_1);
  if (bVar2) {
    local_98 = (StorageSelector)0x0;
    pIVar3 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
               ::__l2::Invokers[(this->EntityStorage).TypeIndex])(&local_98,&this->EntityStorage);
    puVar4 = (undefined8 *)
             (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3,(ulonglong)param_1 & 0xffffffff);
    FVar6.ReferenceController = (TReferenceControllerBase<1> *)puVar4[1];
    this_00 = (FMassArchetypeData *)*puVar4;
    if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar6.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_90.Object = this_00;
    local_90.SharedReferenceCount.ReferenceController = FVar6.ReferenceController;
    if (((this_00 != (FMassArchetypeData *)0x0) && (-1 < (int)param_2.Identifier)) &&
       ((int)param_2.Identifier < *(int *)&(this_00->Groups).IDContainer.field_0x28)) {
      if ((*(int *)&(this_00->Groups).IDContainer.field_0x28 <= (int)param_2.Identifier) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      puVar7 = *(undefined1 **)&(this_00->Groups).IDContainer.field_0x20;
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &(this_00->Groups).IDContainer.field_0x10;
      }
      if ((*(uint *)(puVar7 + (ulonglong)(param_2.Identifier >> 5) * 4) >>
           (param_2.Identifier & 0x1f) & 1) != 0) {
        pFVar5 = UE::Mass::FArchetypeGroups::Remove(&this_00->Groups,&local_70,param_2);
        InternalCreateSimilarArchetype(this,&local_80,&local_90,pFVar5);
        TSparseArray<UE::Mass::FArchetypeGroupID,FDefaultSparseArrayAllocator>::
        ~TSparseArray<UE::Mass::FArchetypeGroupID,FDefaultSparseArrayAllocator>
                  (&local_70.IDContainer);
        FMassArchetypeData::MoveEntityToAnotherArchetype
                  (this_00,param_1,local_80.DataPtr.Object,(FMassArchetypeSharedFragmentValues *)0x0
                  );
        local_97[0] = (StorageSelector)0x0;
        pIVar3 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
                   ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_97,&this->EntityStorage)
        ;
        (**(code **)((longlong)*pIVar3 + 0x28))(pIVar3,(ulonglong)param_1 & 0xffffffff,&local_80);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_80.DataPtr.SharedReferenceCount.ReferenceController);
        FVar6.ReferenceController = local_90.SharedReferenceCount.ReferenceController;
      }
    }
  }
  else {
    FVar6.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  return;
}

// RemoveFragmentFromEntity @ 147246dd0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityManager::RemoveFragmentFromEntity
          (FMassEntityManager *this,FMassEntityHandle param_1,UScriptStruct *param_2)

{
  UScriptStruct *local_res18 [2];
  TArrayView<UScriptStruct_const_*_const,int> local_18;
  
  local_18.ArrayNum = 1;
  local_18.DataPtr = local_res18;
  local_res18[0] = param_2;
  RemoveFragmentListFromEntity(this,param_1,&local_18);
  return;
}

// RemoveFragmentListFromEntity @ 147246e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassEntityManager::RemoveFragmentListFromEntity
          (FMassEntityManager *this,FMassEntityHandle param_1,
          TArrayView<UScriptStruct_const_*_const,int> *param_2)

{
  UScriptStruct **ppUVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  IEntityStorageInterface *pIVar6;
  FMassArchetypeData *this_00;
  UStruct *pUVar7;
  ForElementType<unsigned_int> _Dst;
  ForElementType<unsigned_int> _Src;
  UScriptStruct **ppUVar8;
  undefined1 auStackY_298 [32];
  StorageSelector local_268;
  StorageSelector local_267;
  <lambda_1> local_266 [2];
  FMassArchetypeCreationParams local_264;
  FMassArchetypeHandle local_250;
  UScriptStruct *local_240;
  UScriptStruct **local_238;
  undefined8 uStack_230;
  TBitArray<FDefaultBitArrayAllocator> local_228;
  TBitArray<FDefaultBitArrayAllocator> local_208;
  TBitArray<FDefaultBitArrayAllocator> local_1e8;
  undefined1 local_1c8 [24];
  int local_1b0;
  int local_1ac;
  void *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  void *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  void *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  void *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_298;
  if (UE::AITestSuite::TestsInProgress < 1) {
    if ((0 < (int)this->ProcessingScopeCount) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsProcessing() == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                           ,0x4ce,
                           L"Synchronous API function %hs called during mass processing. Use asynchronous API instead."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (0 < (int)this->ProcessingScopeCount) {
    if ((byte)LogTestableEnsures._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
    return;
  }
  bVar4 = IsEntityBuilt(this,param_1);
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsEntityBuilt(EntityHandle)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntityManager.h"
                         ,0x232,L"Entity not yet created(ID: %d, SN:%d)"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_268 = (StorageSelector)0x0;
  pIVar6 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(&local_268,&this->EntityStorage);
  this_00 = (FMassArchetypeData *)
            (**(code **)((longlong)*pIVar6 + 0x10))(pIVar6,(ulonglong)param_1 & 0xffffffff);
  if ((this_00 == (FMassArchetypeData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("OldArchetype",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x4d3,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ppUVar8 = param_2->DataPtr;
  uStack_230 = *(undefined8 *)&param_2->ArrayNum;
  local_1e8.MaxBits = 0x80;
  local_1e8.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_1e8.NumBits = 0;
  ppUVar1 = ppUVar8 + (int)*(undefined8 *)&param_2->ArrayNum;
  local_238 = ppUVar8;
  do {
    if (ppUVar8 == ppUVar1) {
      bVar4 = FStructTypeBitSet::FConstBitSetContainer::HasAny
                        ((FConstBitSetContainer *)this_00,&local_1e8);
      if (bVar4) {
        FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                  ((FBitSetContainer *)local_128,(FBitSetContainer *)this_00);
        FStructTypeBitSet::FBitSetContainer::operator-=((FBitSetContainer *)local_128,&local_1e8);
        FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                  ((FBitSetContainer *)local_108,(FBitSetContainer *)local_128);
        if ((void *)local_128._16_8_ != (void *)0x0) {
          FMemory::Free((void *)local_128._16_8_);
        }
        FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                  ((FBitSetContainer *)local_e8,(FBitSetContainer *)local_108);
        FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                  ((FBitSetContainer *)local_c8,
                   (FBitSetContainer *)&(this_00->CompositionDescriptor).Tags);
        FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                  ((FBitSetContainer *)local_a8,
                   (FBitSetContainer *)&(this_00->CompositionDescriptor).ChunkFragments);
        FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                  ((FBitSetContainer *)local_88,
                   (FBitSetContainer *)&(this_00->CompositionDescriptor).SharedFragments);
        FStructTypeBitSet::FBitSetContainer::FBitSetContainer
                  ((FBitSetContainer *)local_68,
                   (FBitSetContainer *)&(this_00->CompositionDescriptor).ConstSharedFragments);
        if ((void *)local_108._16_8_ != (void *)0x0) {
          FMemory::Free((void *)local_108._16_8_);
        }
        local_264.ChunkMemorySize = this_00->ChunkMemorySize;
        local_264.DebugName.ComparisonIndex.Value = 0;
        local_264.DebugName.Number = 0;
        local_264.DebugColor.field0_0x0.Bits = (FColor_u_0)0x0;
        CreateArchetype(this,&local_250,(FMassArchetypeCompositionDescriptor *)local_e8,&local_264);
        local_208.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        local_208.NumBits = 0;
        local_208.MaxBits = 0x80;
        UE::Core::Private::
        BitwiseBinaryOperatorImpl<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,FDefaultBitArrayAllocator,_TBitArray<FDefaultBitArrayAllocator>::BitwiseAND<FDefaultBitArrayAllocator,FDefaultBitArrayAllocator>_::__l2::<lambda_1>_>
                  ((TBitArray<FDefaultBitArrayAllocator> *)this_00,&local_1e8,&local_208,MinSize,
                   local_266);
        local_228.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        local_228.NumBits = 0;
        local_228.MaxBits = 0x80;
        if (0x80 < (int)(local_208.NumBits + 0x1fU & 0xffffffe0)) {
          local_228._24_8_ = ((ulonglong)(local_208.NumBits + 0x1fU) & 0xffffffe0) << 0x20;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_228,0);
        }
        local_228.NumBits = local_208.NumBits;
        if (local_208.NumBits != 0) {
          _Src = (ForElementType<unsigned_int>)&local_208;
          if (local_208.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            _Src = local_208.AllocatorInstance.SecondaryData;
          }
          _Dst = (ForElementType<unsigned_int>)&local_228;
          if (local_228.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            _Dst = local_228.AllocatorInstance.SecondaryData;
          }
          memcpy((void *)_Dst,(void *)_Src,(ulonglong)(local_208.NumBits + 0x1fU >> 5) << 2);
        }
        local_1c8._16_8_ = local_228.AllocatorInstance.SecondaryData;
        if (local_208.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_208.AllocatorInstance.SecondaryData);
          local_1c8._16_8_ = local_228.AllocatorInstance.SecondaryData;
        }
        if ((ForElementType<unsigned_int>)local_1c8._16_8_ == (ForElementType<unsigned_int>)0x0) {
          local_1c8[0] = local_228.AllocatorInstance.InlineData[0];
          local_1c8[1] = local_228.AllocatorInstance.InlineData[1];
          local_1c8[2] = local_228.AllocatorInstance.InlineData[2];
          local_1c8[3] = local_228.AllocatorInstance.InlineData[3];
          local_1c8[4] = local_228.AllocatorInstance.InlineData[4];
          local_1c8[5] = local_228.AllocatorInstance.InlineData[5];
          local_1c8[6] = local_228.AllocatorInstance.InlineData[6];
          local_1c8[7] = local_228.AllocatorInstance.InlineData[7];
          local_1c8[8] = local_228.AllocatorInstance.InlineData[8];
          local_1c8[9] = local_228.AllocatorInstance.InlineData[9];
          local_1c8[10] = local_228.AllocatorInstance.InlineData[10];
          local_1c8[0xb] = local_228.AllocatorInstance.InlineData[0xb];
          local_1c8[0xc] = local_228.AllocatorInstance.InlineData[0xc];
          local_1c8[0xd] = local_228.AllocatorInstance.InlineData[0xd];
          local_1c8[0xe] = local_228.AllocatorInstance.InlineData[0xe];
          local_1c8[0xf] = local_228.AllocatorInstance.InlineData[0xf];
        }
        local_1b0 = local_228.NumBits;
        local_1ac = local_228.MaxBits;
        local_228.NumBits = 0;
        local_228.MaxBits = 0;
        local_228.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        local_198 = (void *)0x0;
        local_190 = 0;
        local_18c = 0x80;
        local_178 = (void *)0x0;
        local_170 = 0;
        local_16c = 0x80;
        local_158 = (void *)0x0;
        local_150 = 0;
        local_14c = 0x80;
        local_138 = (void *)0x0;
        local_130 = 0;
        local_12c = 0x80;
        FMassObserverManager::OnCompositionChanged
                  (&this->ObserverManager,param_1,(FMassArchetypeCompositionDescriptor *)local_1c8,
                   RemoveElement,(FProcessingContext *)0x0);
        if ((local_250.DataPtr.Object == (FMassArchetypeData *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArchetypeHandle.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                               ,0x1ff,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        TArray<FName,TSizedDefaultAllocator<32>_>::operator=
                  (&(local_250.DataPtr.Object)->DebugNames,&this_00->DebugNames);
        FMassArchetypeData::MoveEntityToAnotherArchetype
                  (this_00,param_1,local_250.DataPtr.Object,
                   (FMassArchetypeSharedFragmentValues *)0x0);
        local_267 = (StorageSelector)0x0;
        pIVar6 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
                   ::__l2::Invokers[(this->EntityStorage).TypeIndex])
                           (&local_267,&this->EntityStorage);
        (**(code **)((longlong)*pIVar6 + 0x28))(pIVar6,(ulonglong)param_1 & 0xffffffff,&local_250);
        if (local_138 != (void *)0x0) {
          FMemory::Free(local_138);
        }
        if (local_158 != (void *)0x0) {
          FMemory::Free(local_158);
        }
        if (local_178 != (void *)0x0) {
          FMemory::Free(local_178);
        }
        if (local_198 != (void *)0x0) {
          FMemory::Free(local_198);
        }
        if ((ForElementType<unsigned_int>)local_1c8._16_8_ != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_1c8._16_8_);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_250.DataPtr.SharedReferenceCount.ReferenceController);
        if ((void *)local_68._16_8_ != (void *)0x0) {
          FMemory::Free((void *)local_68._16_8_);
        }
        if ((void *)local_88._16_8_ != (void *)0x0) {
          FMemory::Free((void *)local_88._16_8_);
        }
        if ((void *)local_a8._16_8_ != (void *)0x0) {
          FMemory::Free((void *)local_a8._16_8_);
        }
        if ((void *)local_c8._16_8_ != (void *)0x0) {
          FMemory::Free((void *)local_c8._16_8_);
        }
        if ((void *)local_e8._16_8_ != (void *)0x0) {
          FMemory::Free((void *)local_e8._16_8_);
        }
      }
      if (local_1e8.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_1e8.AllocatorInstance.SecondaryData);
      }
      return;
    }
    pUVar2 = *ppUVar8;
    if (pUVar2 != (UScriptStruct *)0x0) {
      pUVar7 = TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
               ::GetBaseUStruct();
      if (pUVar7 == (UStruct *)0x0) {
LAB_147246fd6:
        local_240 = pUVar2;
        bVar4 = `TTypeBitSetBase<TStructTypeBitSet<FMassFragment,FMassFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                ::Add'::__l6::<lambda_1>::operator()(&local_240);
        if (!bVar4) goto LAB_147247003;
      }
      else {
        iVar5 = (int)pUVar7->_padding_;
        if (((int)pUVar2->_padding_ < iVar5) ||
           ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar5 * 8) !=
            &pUVar7->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_147246fd6;
      }
      iVar5 = FStructTracker::FindOrAddStructTypeIndex
                        (&FMassFragmentBitSetStructTrackerWrapper::StructTracker,(UStruct *)pUVar2);
      FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)&local_1e8,iVar5);
    }
LAB_147247003:
    ppUVar8 = ppUVar8 + 1;
  } while( true );
}

// RemoveSharedFragmentFromEntity @ 1472479a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMassEntityManager::RemoveSharedFragmentFromEntity
          (FMassEntityManager *this,FMassEntityHandle param_1,UScriptStruct *param_2)

{
  FMassArchetypeData *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  UPackage *pUVar7;
  IEntityStorageInterface *pIVar8;
  undefined8 *puVar9;
  UStruct *pUVar10;
  int *piVar11;
  uint uVar12;
  char *pcVar13;
  int iStackX_14;
  undefined1 auStack_1e8 [32];
  char *local_1c8;
  longlong local_1c0;
  undefined1 local_1b8;
  StorageSelector local_1b7;
  StorageSelector local_1b6;
  FIdentityFunctor local_1b5;
  FIdentityFunctor local_1b4 [4];
  FMassArchetypeCreationParams local_1b0;
  FMassArchetypeHandle local_1a0;
  UScriptStruct *local_190;
  UScriptStruct *local_188;
  UScriptStruct *local_180;
  undefined1 local_178 [16];
  void *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined1 local_158 [56];
  void *local_120;
  ForAnyElementType local_110;
  int local_108;
  ForAnyElementType local_100;
  int local_f8;
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  if (UE::AITestSuite::TestsInProgress < 1) {
    if (0 < (int)this->ProcessingScopeCount) {
      local_1c8 = "FMassEntityManager::RemoveSharedFragmentFromEntity";
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsProcessing() == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x61a,
                         L"Synchronous API function %hs called during mass processing. Use asynchronous API instead."
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
  }
  else if (0 < (int)this->ProcessingScopeCount) {
    if ((byte)LogTestableEnsures._0_1_ < 2) {
      return false;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
    return false;
  }
  if (param_2 == (UScriptStruct *)0x0) {
LAB_147247abd:
    local_1b8 = 0;
    bVar3 = `FMassEntityManager::RemoveSharedFragmentFromEntity'::__l38::<lambda_1>::operator()
                      (&local_1b8);
    if (!bVar3) {
      return false;
    }
  }
  else {
    if (Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton == (UScriptStruct *)0x0
       ) {
      pUVar7 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassSharedFragment,(UObject *)pUVar7,
                           L"MassSharedFragment");
      if (Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton ==
          (UScriptStruct *)0x0) goto LAB_147247abd;
    }
    iVar5 = (int)(Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton)->_padding_;
    if (((int)param_2->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(param_2->_padding_ + (longlong)iVar5 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassSharedFragment.OuterSingleton)->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_147247abd;
  }
  bVar3 = IsEntityBuilt(this,param_1);
  if (!bVar3) {
    iStackX_14 = param_1.SerialNumber;
    local_1c0 = CONCAT44(local_1c0._4_4_,iStackX_14);
    local_1c8 = (char *)CONCAT44(local_1c8._4_4_,param_1.Index);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsEntityBuilt(EntityHandle)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntityManager.h"
                       ,0x232,L"Entity not yet created(ID: %d, SN:%d)");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  local_1b7 = (StorageSelector)0x0;
  pIVar8 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(&local_1b7,&this->EntityStorage);
  puVar9 = (undefined8 *)
           (**(code **)((longlong)*pIVar8 + 0x20))(pIVar8,(ulonglong)param_1 & 0xffffffff);
  this_00 = (FMassArchetypeData *)*puVar9;
  if ((this_00 == (FMassArchetypeData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentArchetype",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x624,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pUVar10 = TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
            ::GetBaseUStruct();
  if (pUVar10 == (UStruct *)0x0) {
LAB_147247ba3:
    local_190 = param_2;
    bVar3 = `TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
            ::Contains'::__l6::<lambda_1>::operator()(&local_190);
    if (!bVar3) {
      return false;
    }
  }
  else {
    iVar5 = (int)pUVar10->_padding_;
    if (((int)param_2->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(param_2->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar10->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_147247ba3;
  }
  iVar5 = FStructTracker::FindStructTypeIndex
                    (&FMassSharedFragmentBitSetStructTrackerWrapper::StructTracker,
                     (UStruct *)param_2);
  if ((iVar5 == -1) ||
     (bVar3 = FStructTypeBitSet::FConstBitSetContainer::Contains
                        ((FConstBitSetContainer *)&(this_00->CompositionDescriptor).SharedFragments,
                         iVar5), !bVar3)) {
    return false;
  }
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_e8,(FBitSetContainer *)this_00);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_c8,(FBitSetContainer *)&(this_00->CompositionDescriptor).Tags
            );
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_a8,
             (FBitSetContainer *)&(this_00->CompositionDescriptor).ChunkFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_88,
             (FBitSetContainer *)&(this_00->CompositionDescriptor).SharedFragments);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_68,
             (FBitSetContainer *)&(this_00->CompositionDescriptor).ConstSharedFragments);
  pUVar10 = TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
            ::GetBaseUStruct();
  if (pUVar10 == (UStruct *)0x0) {
LAB_147247c69:
    local_188 = param_2;
    bVar3 = `TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
            ::Remove'::__l6::<lambda_1>::operator()(&local_188);
    if (bVar3) goto LAB_147247c7c;
  }
  else {
    iVar5 = (int)pUVar10->_padding_;
    if (((int)param_2->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(param_2->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar10->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_147247c69;
LAB_147247c7c:
    iVar5 = FStructTracker::FindOrAddStructTypeIndex
                      (&FMassSharedFragmentBitSetStructTrackerWrapper::StructTracker,
                       (UStruct *)param_2);
    FStructTypeBitSet::FBitSetContainer::RemoveAtIndex((FBitSetContainer *)local_88,iVar5);
  }
  local_1b0.ChunkMemorySize = 0;
  local_1b0.DebugName.ComparisonIndex.Value = 0;
  local_1b0.DebugName.Number = 0;
  local_1b0.DebugColor.field0_0x0 = (FColor_u_0)0x0;
  CreateArchetype(this,&local_1a0,(FMassArchetypeCompositionDescriptor *)local_e8,&local_1b0);
  if ((local_1a0.DataPtr.Object == (FMassArchetypeData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewArchetypeHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x62f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if ((local_1a0.DataPtr.Object == (FMassArchetypeData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewArchetype",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x631,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  piVar11 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
            FindChecked((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                         *)&this_00->EntityMap,param_1.Index);
  uVar6 = *piVar11 / this_00->NumEntitiesPerChunk;
  pcVar13 = (char *)(longlong)(int)uVar6;
  iVar5 = (this_00->Chunks).ArrayNum;
  uVar12 = 0;
  if ((int)uVar6 < iVar5) {
    uVar12 = ~uVar6 >> 0x1f;
  }
  if ((uVar12 == 0) &&
     (local_1c8 = pcVar13, local_1c0 = (longlong)iVar5,
     bVar3 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld"), bVar3
     )) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pFVar1 = (this_00->Chunks).AllocatorInstance.Data;
  bVar3 = FMassArchetypeSharedFragmentValues::ContainsType
                    ((FMassArchetypeSharedFragmentValues *)
                     (pFVar1 + (longlong)pcVar13 * 0x90 + 0x28),param_2);
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("OldSharedFragmentValues.ContainsType(&SharedFragmentType)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x634,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues
            ((FMassArchetypeSharedFragmentValues *)local_158,
             (FMassArchetypeSharedFragmentValues *)(pFVar1 + (longlong)pcVar13 * 0x90 + 0x28));
  local_168 = (void *)0x0;
  local_160 = 0;
  local_15c = 0x80;
  pUVar10 = TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
            ::GetBaseUStruct();
  if (pUVar10 == (UStruct *)0x0) {
LAB_147247e13:
    local_180 = param_2;
    bVar3 = `TTypeBitSetBase<TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>,FMassSharedFragment,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
            ::Add'::__l6::<lambda_1>::operator()(&local_180);
    if (!bVar3) goto LAB_147247e41;
  }
  else {
    iVar5 = (int)pUVar10->_padding_;
    if (((int)param_2->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(param_2->_padding_ + (longlong)iVar5 * 8) !=
        &pUVar10->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_147247e13;
  }
  iVar5 = FStructTracker::FindOrAddStructTypeIndex
                    (&FMassSharedFragmentBitSetStructTrackerWrapper::StructTracker,
                     (UStruct *)param_2);
  FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)local_178,iVar5);
LAB_147247e41:
  FMassArchetypeSharedFragmentValues::Remove
            ((FMassArchetypeSharedFragmentValues *)local_158,
             (TStructTypeBitSet<FMassSharedFragment,FMassSharedFragmentBitSetStructTrackerWrapper,UScriptStruct>
              *)local_178);
  if (local_158[4] == false) {
    AlgoImpl::
    IntroSortInternal<FConstSharedStruct,int,FIdentityFunctor,TDereferenceWrapper<FConstSharedStruct,FStructTypeSortOperator>_>
              ((FConstSharedStruct *)local_110.Data,local_108,local_1b5,
               (FStructTypeSortOperator *)&local_1b5);
    AlgoImpl::
    IntroSortInternal<FSharedStruct,int,FIdentityFunctor,TDereferenceWrapper<FSharedStruct,FStructTypeSortOperator>_>
              ((FSharedStruct *)local_100.Data,local_f8,local_1b4[0],
               (FStructTypeSortOperator *)local_1b4);
    local_158[4] = true;
  }
  FMassArchetypeData::MoveEntityToAnotherArchetype
            (this_00,param_1,local_1a0.DataPtr.Object,
             (FMassArchetypeSharedFragmentValues *)local_158);
  local_1b6 = (StorageSelector)0x0;
  pIVar8 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(&local_1b6,&this->EntityStorage);
  (**(code **)((longlong)*pIVar8 + 0x28))(pIVar8,(ulonglong)param_1 & 0xffffffff,&local_1a0);
  if (local_168 != (void *)0x0) {
    FMemory::Free(local_168);
  }
  DestructItems<FSharedStruct,int>((FSharedStruct *)local_100.Data,local_f8);
  if (local_100.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_100.Data);
  }
  DestructItems<FConstSharedStruct,int>((FConstSharedStruct *)local_110.Data,local_108);
  if (local_110.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.Data);
  }
  if (local_120 != (void *)0x0) {
    FMemory::Free(local_120);
  }
  if ((void *)local_158._24_8_ != (void *)0x0) {
    FMemory::Free((void *)local_158._24_8_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a0.DataPtr.SharedReferenceCount.ReferenceController);
  if ((void *)local_68._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._16_8_);
  }
  if ((void *)local_88._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_88._16_8_);
  }
  if ((void *)local_a8._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_a8._16_8_);
  }
  if ((void *)local_c8._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_c8._16_8_);
  }
  if ((void *)local_e8._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_e8._16_8_);
  }
  return true;
}

// RemoveTagFromEntity @ 147247fa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassEntityManager::RemoveTagFromEntity
          (FMassEntityManager *this,FMassEntityHandle param_1,UScriptStruct *param_2)

{
  FMassArchetypeData *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UPackage *pUVar5;
  IEntityStorageInterface *pIVar6;
  TSharedPtr<FMassArchetypeData,1> *pTVar7;
  UStruct *pUVar8;
  undefined1 auStackY_1a8 [32];
  StorageSelector local_178;
  StorageSelector local_177 [7];
  FString local_170;
  UScriptStruct *local_160;
  FMassArchetypeHandle local_158;
  TBitArray<FDefaultBitArrayAllocator> local_148;
  undefined1 local_128 [16];
  void *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 local_108 [24];
  int local_f0;
  int local_ec;
  void *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  void *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  void *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (UE::AITestSuite::TestsInProgress < 1) {
    if ((0 < (int)this->ProcessingScopeCount) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsProcessing() == false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                           ,0x525,
                           L"Synchronous API function %hs called during mass processing. Use asynchronous API instead."
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (0 < (int)this->ProcessingScopeCount) {
    if ((byte)LogTestableEnsures._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
    return;
  }
  if (param_2 == (UScriptStruct *)0x0) {
    ::FString::FString(&local_170,L"None");
LAB_1472480d4:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("UE::Mass::IsA<FMassTag>(TagType)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                       ,0x526,L"%hs works only with tags while \'%s\' is not one.");
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar5 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassTag,(UObject *)pUVar5,L"MassTag");
      if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton != (UScriptStruct *)0x0)
      goto LAB_14724808d;
LAB_1472480b1:
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2,&local_170,(UObject *)0x0);
      goto LAB_1472480d4;
    }
LAB_14724808d:
    iVar4 = (int)(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_;
    if (((int)param_2->_padding_ < iVar4) ||
       ((longlong *)*(undefined1 **)(param_2->_padding_ + (longlong)iVar4 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_1472480b1;
  }
  bVar3 = IsEntityBuilt(this,param_1);
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsEntityBuilt(EntityHandle)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntityManager.h"
                         ,0x232,L"Entity not yet created(ID: %d, SN:%d)"), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_178 = (StorageSelector)0x0;
  pIVar6 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(&local_178,&this->EntityStorage);
  pTVar7 = (TSharedPtr<FMassArchetypeData,1> *)
           (**(code **)((longlong)*pIVar6 + 0x20))(pIVar6,(ulonglong)param_1 & 0xffffffff);
  if (pTVar7->Object == (FMassArchetypeData *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentArchetype",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                       ,0x52b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((pTVar7->Object == (FMassArchetypeData *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = pTVar7->Object;
  if ((param_2 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FragmentType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Internal\\MassArchetypeData.h"
                         ,0x102,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
          ::Contains((TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
                      *)&(pFVar1->CompositionDescriptor).Tags,param_2);
  if (!bVar3) {
    return;
  }
  local_148.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_148.NumBits = 0;
  local_148.MaxBits = 0x80;
  pUVar8 = TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           ::GetBaseUStruct();
  if (pUVar8 == (UStruct *)0x0) {
LAB_14724827d:
    local_160 = param_2;
    bVar3 = `TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
            ::Add'::__l6::<lambda_1>::operator()(&local_160);
    if (!bVar3) goto LAB_1472482ab;
  }
  else {
    iVar4 = (int)pUVar8->_padding_;
    if (((int)param_2->_padding_ < iVar4) ||
       ((longlong *)*(undefined1 **)(param_2->_padding_ + (longlong)iVar4 * 8) != &pUVar8->_padding_
       )) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14724827d;
  }
  iVar4 = FStructTracker::FindOrAddStructTypeIndex
                    (&FMassTagBitSetStructTrackerWrapper::StructTracker,(UStruct *)param_2);
  FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)&local_148,iVar4);
LAB_1472482ab:
  if ((pTVar7->Object == (FMassArchetypeData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_88,
             (FBitSetContainer *)&(pTVar7->Object->CompositionDescriptor).Tags);
  FStructTypeBitSet::FBitSetContainer::operator-=((FBitSetContainer *)local_88,&local_148);
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_68,(FBitSetContainer *)local_88);
  if ((void *)local_88._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_88._16_8_);
  }
  local_118 = (void *)0x0;
  local_110 = 0;
  local_10c = 0x80;
  if (local_148.AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0) {
    local_108[0] = local_148.AllocatorInstance.InlineData[0];
    local_108[1] = local_148.AllocatorInstance.InlineData[1];
    local_108[2] = local_148.AllocatorInstance.InlineData[2];
    local_108[3] = local_148.AllocatorInstance.InlineData[3];
    local_108[4] = local_148.AllocatorInstance.InlineData[4];
    local_108[5] = local_148.AllocatorInstance.InlineData[5];
    local_108[6] = local_148.AllocatorInstance.InlineData[6];
    local_108[7] = local_148.AllocatorInstance.InlineData[7];
    local_108[8] = local_148.AllocatorInstance.InlineData[8];
    local_108[9] = local_148.AllocatorInstance.InlineData[9];
    local_108[10] = local_148.AllocatorInstance.InlineData[10];
    local_108[0xb] = local_148.AllocatorInstance.InlineData[0xb];
    local_108[0xc] = local_148.AllocatorInstance.InlineData[0xc];
    local_108[0xd] = local_148.AllocatorInstance.InlineData[0xd];
    local_108[0xe] = local_148.AllocatorInstance.InlineData[0xe];
    local_108[0xf] = local_148.AllocatorInstance.InlineData[0xf];
  }
  local_108._16_8_ = local_148.AllocatorInstance.SecondaryData;
  local_f0 = local_148.NumBits;
  local_ec = local_148.MaxBits;
  local_148.NumBits = 0;
  local_148.MaxBits = 0;
  local_148.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_d8 = (void *)0x0;
  local_d0 = 0;
  local_cc = 0x80;
  local_b8 = (void *)0x0;
  local_b0 = 0;
  local_ac = 0x80;
  local_98 = (void *)0x0;
  local_90 = 0;
  local_8c = 0x80;
  FMassObserverManager::OnCompositionChanged
            (&this->ObserverManager,param_1,(FMassArchetypeCompositionDescriptor *)local_128,
             RemoveElement,(FProcessingContext *)0x0);
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  if (local_b8 != (void *)0x0) {
    FMemory::Free(local_b8);
  }
  if (local_d8 != (void *)0x0) {
    FMemory::Free(local_d8);
  }
  if ((ForElementType<unsigned_int>)local_108._16_8_ != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_108._16_8_);
  }
  if (local_118 != (void *)0x0) {
    FMemory::Free(local_118);
  }
  InternalCreateSimilarArchetype
            (this,&local_158,pTVar7,
             (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)
             local_68);
  if ((pTVar7->Object == (FMassArchetypeData *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FMassArchetypeData::MoveEntityToAnotherArchetype
            (pTVar7->Object,param_1,local_158.DataPtr.Object,
             (FMassArchetypeSharedFragmentValues *)0x0);
  local_177[0] = (StorageSelector)0x0;
  pIVar6 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_177,&this->EntityStorage);
  (**(code **)((longlong)*pIVar6 + 0x28))(pIVar6,(ulonglong)param_1 & 0xffffffff,&local_158);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_158.DataPtr.SharedReferenceCount.ReferenceController);
  if ((void *)local_68._16_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._16_8_);
  }
  if (local_148.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_148.AllocatorInstance.SecondaryData);
  }
  return;
}

// ReserveEntity @ 147248810

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FMassEntityHandle __thiscall FMassEntityManager::ReserveEntity(FMassEntityManager *this)

{
  IEntityStorageInterface *pIVar1;
  FMassEntityHandle in_RDX;
  StorageSelector local_res8 [32];
  
  local_res8[0] = (StorageSelector)0x0;
  pIVar1 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res8,&this->EntityStorage);
  (**(code **)((longlong)*pIVar1 + 0x70))(pIVar1);
  return in_RDX;
}

// SetDebugName @ 14724b980

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall FMassEntityManager::SetDebugName(FMassEntityManager *this,FString *param_1)

{
  ::FString::operator=(&this->DebugName,param_1);
  return;
}

// SetEntityFragmentValues @ 14724bb20

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityManager::SetEntityFragmentValues
          (FMassEntityManager *this,FMassEntityHandle param_1,
          TArrayView<FInstancedStruct_const_,int> *param_2)

{
  code *pcVar1;
  bool bVar2;
  IEntityStorageInterface *pIVar3;
  FMassArchetypeData *this_00;
  StorageSelector local_res8 [8];
  FMassEntityHandle local_res10;
  TArrayView<FInstancedStruct_const_,int> local_18;
  
  local_res10 = param_1;
  bVar2 = IsEntityBuilt(this,param_1);
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsEntityBuilt(EntityHandle)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntityManager.h"
                       ,0x232,L"Entity not yet created(ID: %d, SN:%d)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8[0] = (StorageSelector)0x0;
  pIVar3 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_res8,&this->EntityStorage);
  this_00 = (FMassArchetypeData *)
            (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3,(ulonglong)param_1 & 0xffffffff);
  if (this_00 == (FMassArchetypeData *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentArchetype",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                       ,0x73f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  FMassArchetypeData::SetFragmentsData(this_00,param_1,&local_18);
  return;
}

// SetEntityFragmentsValues @ 14724bc10

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassEntityManager::SetEntityFragmentsValues
          (FMassEntityManager *this,FMassEntityHandle param_1,
          TArrayView<FInstancedStruct_const_,int> *param_2)

{
  TArrayView<FInstancedStruct_const_,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  SetEntityFragmentValues(this,param_1,&local_18);
  return;
}

// SwapTagsForEntity @ 147251540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMassEntityManager::SwapTagsForEntity
          (FMassEntityManager *this,FMassEntityHandle param_1,UScriptStruct *param_2,
          UScriptStruct *param_3)

{
  FMassArchetypeData *pFVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  UPackage *pUVar6;
  IEntityStorageInterface *pIVar7;
  TSharedPtr<FMassArchetypeData,1> *pTVar8;
  UStruct *pUVar9;
  undefined1 *puVar10;
  uint uVar11;
  TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *_Buf2;
  undefined1 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  int iStackX_14;
  undefined1 auStack_e8 [32];
  char *local_c8;
  FScriptContainerElement *local_c0;
  StorageSelector local_b8;
  StorageSelector local_b7 [3];
  uint local_b4;
  FString local_b0;
  FString local_a0;
  UScriptStruct *local_90;
  UScriptStruct *local_88;
  FMassArchetypeHandle local_80;
  undefined1 local_70 [24];
  uint local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (UE::AITestSuite::TestsInProgress < 1) {
    if (0 < (int)this->ProcessingScopeCount) {
      local_c8 = "FMassEntityManager::SwapTagsForEntity";
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsProcessing() == false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                         ,0x4f0,
                         L"Synchronous API function %hs called during mass processing. Use asynchronous API instead."
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  else if (0 < (int)this->ProcessingScopeCount) {
    if ((byte)LogTestableEnsures._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTestableEnsures);
    return;
  }
  bVar4 = IsEntityBuilt(this,param_1);
  if (!bVar4) {
    iStackX_14 = param_1.SerialNumber;
    local_c0 = (FScriptContainerElement *)CONCAT44(local_c0._4_4_,iStackX_14);
    local_c8 = (char *)CONCAT44(local_c8._4_4_,param_1.Index);
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsEntityBuilt(EntityHandle)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Public\\MassEntityManager.h"
                       ,0x232,L"Entity not yet created(ID: %d, SN:%d)");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_2 == (UScriptStruct *)0x0) {
    ::FString::FString(&local_b0,L"None");
LAB_1472516b2:
    local_c0 = (FScriptContainerElement *)L"";
    if (local_b0.Data.ArrayNum != 0) {
      local_c0 = local_b0.Data.AllocatorInstance.Data;
    }
    local_c8 = "FMassEntityManager::SwapTagsForEntity";
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("UE::Mass::IsA<FMassTag>(OldTagType)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                       ,0x4f4,L"%hs works only with tags while \'%s\' is not one.");
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassTag,(UObject *)pUVar6,L"MassTag");
      if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton != (UScriptStruct *)0x0)
      goto LAB_14725166d;
LAB_147251691:
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2,&local_b0,(UObject *)0x0);
      goto LAB_1472516b2;
    }
LAB_14725166d:
    iVar5 = (int)(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_;
    if (((int)param_2->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(param_2->_padding_ + (longlong)iVar5 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_147251691;
  }
  if (param_3 == (UScriptStruct *)0x0) {
    ::FString::FString(&local_a0,L"None");
LAB_147251785:
    local_c0 = (FScriptContainerElement *)L"";
    if (local_a0.Data.ArrayNum != 0) {
      local_c0 = local_a0.Data.AllocatorInstance.Data;
    }
    local_c8 = "FMassEntityManager::SwapTagsForEntity";
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("UE::Mass::IsA<FMassTag>(NewTagType)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                       ,0x4f5,L"%hs works only with tags while \'%s\' is not one.");
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_MassEntity();
      Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMassTag,(UObject *)pUVar6,L"MassTag");
      if (Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton != (UScriptStruct *)0x0)
      goto LAB_147251740;
LAB_147251764:
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_3,&local_a0,(UObject *)0x0);
      goto LAB_147251785;
    }
LAB_147251740:
    iVar5 = (int)(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_;
    if (((int)param_3->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(param_3->_padding_ + (longlong)iVar5 * 8) !=
        &(Z_Registration_Info_UScriptStruct_FMassTag.OuterSingleton)->_padding_)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_147251764;
  }
  local_b8 = (StorageSelector)0x0;
  pIVar7 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
             ::__l2::Invokers[(this->EntityStorage).TypeIndex])(&local_b8,&this->EntityStorage);
  pTVar8 = (TSharedPtr<FMassArchetypeData,1> *)
           (**(code **)((longlong)*pIVar7 + 0x20))(pIVar7,(ulonglong)param_1 & 0xffffffff);
  if (pTVar8->Object == (FMassArchetypeData *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentArchetype",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MassEntity\\Private\\MassEntityManager.cpp"
                       ,0x4f8,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((pTVar8->Object == (FMassArchetypeData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FStructTypeBitSet::FBitSetContainer::FBitSetContainer
            ((FBitSetContainer *)local_70,
             (FBitSetContainer *)&(pTVar8->Object->CompositionDescriptor).Tags);
  pUVar9 = TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           ::GetBaseUStruct();
  if (pUVar9 == (UStruct *)0x0) {
LAB_14725189f:
    local_90 = param_2;
    bVar4 = `TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
            ::Remove'::__l6::<lambda_1>::operator()(&local_90);
    if (bVar4) goto LAB_1472518b0;
  }
  else {
    iVar5 = (int)pUVar9->_padding_;
    if (((int)param_2->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(param_2->_padding_ + (longlong)iVar5 * 8) != &pUVar9->_padding_
       )) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_14725189f;
LAB_1472518b0:
    iVar5 = FStructTracker::FindOrAddStructTypeIndex
                      (&FMassTagBitSetStructTrackerWrapper::StructTracker,(UStruct *)param_2);
    FStructTypeBitSet::FBitSetContainer::RemoveAtIndex((FBitSetContainer *)local_70,iVar5);
  }
  pUVar9 = TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
           ::GetBaseUStruct();
  if (pUVar9 == (UStruct *)0x0) {
LAB_1472518f8:
    local_88 = param_3;
    bVar4 = `TTypeBitSetBase<TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct>,FMassTag,UScriptStruct,FStructTypeBitSet::FBitSetContainer,1>
            ::Add'::__l6::<lambda_1>::operator()(&local_88);
    if (bVar4) goto LAB_147251909;
  }
  else {
    iVar5 = (int)pUVar9->_padding_;
    if (((int)param_3->_padding_ < iVar5) ||
       ((longlong *)*(undefined1 **)(param_3->_padding_ + (longlong)iVar5 * 8) != &pUVar9->_padding_
       )) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_1472518f8;
LAB_147251909:
    iVar5 = FStructTracker::FindOrAddStructTypeIndex
                      (&FMassTagBitSetStructTrackerWrapper::StructTracker,(UStruct *)param_3);
    FStructTypeBitSet::FBitSetContainer::AddAtIndex((FBitSetContainer *)local_70,iVar5);
  }
  if ((pTVar8->Object == (FMassArchetypeData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar12 = (undefined1 *)local_70._16_8_;
  pFVar1 = pTVar8->Object;
  puVar10 = local_70;
  if ((undefined1 *)local_70._16_8_ != (undefined1 *)0x0) {
    puVar10 = (undefined1 *)local_70._16_8_;
  }
  local_b4 = local_58 + 0x1f;
  uVar14 = 0;
  uVar13 = 0;
  iVar5 = (int)(((int)local_b4 >> 0x1f & 0x1fU) + local_b4) >> 5;
  uVar11 = local_58 & 0x8000001f;
  if ((int)uVar11 < 0) {
    uVar11 = (uVar11 - 1 | 0xffffffe0) + 1;
  }
  uVar3 = 0xffffffff >> ((byte)(0x20 - uVar11) & 0x1f);
  if (0x1f < (int)(0x20 - uVar11)) {
    uVar3 = 0xffffffff;
  }
  uVar11 = 0xffffffff;
  if (iVar5 == 1) {
    uVar11 = uVar3;
  }
  if (0 < iVar5) {
    do {
      uVar13 = uVar11 & *(uint *)(puVar10 + uVar14 * 4);
      if (uVar11 == 0xffffffff) {
        uVar13 = *(uint *)(puVar10 + uVar14 * 4);
      }
      if (uVar13 != 0) goto LAB_147251a05;
      uVar13 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar13;
      uVar11 = 0xffffffff;
      if (uVar13 == iVar5 - 1U) {
        uVar11 = uVar3;
      }
    } while ((int)uVar13 < iVar5);
  }
  if (((int)uVar13 < iVar5) ||
     (bVar4 = FStructTypeBitSet::FConstBitSetContainer::IsEmpty
                        ((FConstBitSetContainer *)&(pFVar1->CompositionDescriptor).Tags), !bVar4)) {
LAB_147251a05:
    if (local_58 == *(uint *)&(pFVar1->CompositionDescriptor).Tags.field_0x18) {
      _Buf2 = *(TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> **)
               &(pFVar1->CompositionDescriptor).Tags.field_0x10;
      if (_Buf2 == (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)
                   0x0) {
        _Buf2 = &(pFVar1->CompositionDescriptor).Tags;
      }
      puVar10 = local_70;
      if (puVar12 != (undefined1 *)0x0) {
        puVar10 = puVar12;
      }
      iVar5 = memcmp(puVar10,_Buf2,(ulonglong)(local_b4 >> 5) << 2);
      if (iVar5 == 0) goto LAB_147251aca;
    }
    InternalCreateSimilarArchetype
              (this,&local_80,pTVar8,
               (TStructTypeBitSet<FMassTag,FMassTagBitSetStructTrackerWrapper,UScriptStruct> *)
               local_70);
    if ((pTVar8->Object == (FMassArchetypeData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FMassArchetypeData::MoveEntityToAnotherArchetype
              (pTVar8->Object,param_1,local_80.DataPtr.Object,
               (FMassArchetypeSharedFragmentValues *)0x0);
    local_b7[0] = (StorageSelector)0x0;
    pIVar7 = (*`UNKNOWN___cdecl_UE::Core::Private::VisitImpl<`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector,0,1,2,0,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64>(unsigned___int64,`private:_class_UE::Mass::IEntityStorageInterface&___ptr64___cdecl_FMassEntityManager::GetEntityStorageInterface(void)const___ptr64'::`2'::StorageSelector&&___ptr64,TIntegerSequence<unsigned___int64,0,1,2>&&___ptr64,TIntegerSequence<unsigned___int64,0>&&___ptr64,TVariant<FEmptyVariantState,UE::Mass::FSingleThreadedEntityStorage,UE::Mass::FConcurrentEntityStorage>&___ptr64)'
               ::__l2::Invokers[(this->EntityStorage).TypeIndex])(local_b7,&this->EntityStorage);
    (**(code **)((longlong)*pIVar7 + 0x28))(pIVar7,(ulonglong)param_1 & 0xffffffff,&local_80);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.DataPtr.SharedReferenceCount.ReferenceController);
    puVar12 = (undefined1 *)local_70._16_8_;
  }
LAB_147251aca:
  if (puVar12 != (undefined1 *)0x0) {
    FMemory::Free(puVar12);
  }
  return;
}

// operator() @ 150502ce0

bool __thiscall
`FMassEntityManager::AddCompositionToEntity_GetDelta'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5136943605146975190>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5136943605146975190>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150502d20

bool __thiscall `FMassEntityManager::BatchReserveEntities'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5136943605146975578>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5136943605146975578>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150502d70

bool __thiscall
`FMassEntityManager::BatchSetEntityFragmentsValues'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5136943605146973937>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5136943605146973937>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150502db0

bool __thiscall
`FMassEntityManager::BatchSetEntityFragmentsValues'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5136943605146973932>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5136943605146973932>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150503290

bool __thiscall `FMassEntityManager::PostInitialize'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5136943605146976006>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5136943605146976006>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150503550

bool __thiscall `FMassEntityManager::AppendCommands'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5136943605146974183>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5136943605146974183>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505038b0

bool __thiscall `FMassEntityManager::FlushCommands'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5136943605146974254>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5136943605146974254>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150503900

bool __thiscall `FMassEntityManager::FlushCommands'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5136943605146974222>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5136943605146974222>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150503ec0

bool __thiscall
`FMassEntityManager::GetMatchingArchetypes'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5136943605146974279>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5136943605146974279>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150505190

bool __thiscall
`FMassEntityManager::AddConstSharedFragmentToEntity'::__l38::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5136943605146974835>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5136943605146974835>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505051e0

bool __thiscall
`FMassEntityManager::AddSharedFragmentToEntity'::__l38::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5136943605146974742>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5136943605146974742>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150505230

bool __thiscall
`FMassEntityManager::RemoveConstSharedFragmentFromEntity'::__l38::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5136943605146974785>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5136943605146974785>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150505280

bool __thiscall
`FMassEntityManager::RemoveSharedFragmentFromEntity'::__l38::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5136943605146974692>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5136943605146974692>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505052d0

bool __thiscall
`FMassEntityManager::RemoveCompositionFromEntity'::__l40::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5136943605146975139>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5136943605146975139>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150505310

bool __thiscall
`FMassEntityManager::BatchDestroyEntityChunks'::__l51::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5136943605146975361>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5136943605146975361>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505057f0

bool __thiscall
`FMassEntityManager::AddCompositionToEntity_GetDelta'::__l2::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5136943605146975187>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5136943605146975187>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1505058f0

bool __thiscall `FMassEntityManager::FlushCommands'::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5136943605146974249>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5136943605146974249>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150505940

bool __thiscall `FMassEntityManager::FlushCommands'::__l6::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5136943605146974218>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5136943605146974218>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150505c80

bool __thiscall `FMassEntityManager::FlushCommands'::__l13::<lambda_4>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5136943605146974197>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5136943605146974197>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

