// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 7

// FEntityCollectionTestBase @ 1470f3670

FEntityCollectionTestBase * __thiscall
UE::Mass::Test::EntityCollection::FEntityCollectionTestBase::FEntityCollectionTestBase
          (FEntityCollectionTestBase *this)

{
  int iVar1;
  
  FEntityTestBase::FEntityTestBase((FEntityTestBase *)this);
  this->_padding_ = (longlong)&___7FEntityCollectionTestBase_EntityCollection_Test_Mass_UE__6B_;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&(this->FloatEntities).AllocatorInstance);
  (this->FloatEntities).ArrayNum = 0;
  iVar1 = TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                    (&(this->FloatEntities).AllocatorInstance);
  (this->FloatEntities).ArrayMax = iVar1;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&(this->IntEntities).AllocatorInstance);
  (this->IntEntities).ArrayNum = 0;
  iVar1 = TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                    (&(this->IntEntities).AllocatorInstance);
  (this->IntEntities).ArrayMax = iVar1;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&(this->FloatIntEntities).AllocatorInstance);
  (this->FloatIntEntities).ArrayNum = 0;
  iVar1 = TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                    (&(this->FloatIntEntities).AllocatorInstance);
  (this->FloatIntEntities).ArrayMax = iVar1;
  this->EntitiesToCreatePerArchetype = 100;
  FRandomStream::FRandomStream(&this->RandomStream,0);
  return this;
}

// ~FEntityCollectionTestBase @ 1470f80d0

void __thiscall
UE::Mass::Test::EntityCollection::FEntityCollectionTestBase::~FEntityCollectionTestBase
          (FEntityCollectionTestBase *this)

{
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&this->FloatIntEntities);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&this->IntEntities);
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
  ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&this->FloatEntities);
  FEntityTestBase::~FEntityTestBase((FEntityTestBase *)this);
  return;
}

// operator() @ 147100260

bool __thiscall
`UE::Mass::Test::EntityCollection::FEntityCollectionTestBase::CompareCollectionArrays'::__l6::
<lambda_1>::operator()(void *this,FMassArchetypeEntityCollection *param_1)

{
  bool bVar1;
  
  bVar1 = FMassArchetypeEntityCollection::IsSameArchetype
                    (param_1,*(FMassArchetypeEntityCollection **)this);
  return bVar1;
}

// CompareCollectionArrays @ 14711b030

/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool __thiscall
UE::Mass::Test::EntityCollection::FEntityCollectionTestBase::CompareCollectionArrays
          (FEntityCollectionTestBase *this,
          TArrayView<FMassArchetypeEntityCollection_const_,int> *param_1,
          TArrayView<FMassArchetypeEntityCollection_const_,int> *param_2)

{
  int iVar1;
  FMassArchetypeEntityCollection *pFVar2;
  bool bVar3;
  FMassArchetypeEntityCollection *pFVar4;
  <lambda_1> local_a8;
  FMassArchetypeEntityCollection *local_58;
  FMassArchetypeEntityCollection **local_50;
  FMassArchetypeEntityCollection *local_48;
  FAutomationTestBase *local_40;
  FAutomationTestBase *local_38;
  FString local_30;
  FString local_20 [2];
  
  local_a8.ArchetypeCollectionA = param_1->DataPtr;
  pFVar2 = param_1->DataPtr;
  iVar1 = param_1->ArrayNum;
  while( true ) {
    if (local_a8.ArchetypeCollectionA == pFVar2 + iVar1) {
      return true;
    }
    local_58 = local_a8.ArchetypeCollectionA;
    local_50 = &local_58;
    local_48 = local_a8.ArchetypeCollectionA;
    pFVar4 = TArrayView<FMassArchetypeEntityCollection_const_,int>::
             FindByPredicate<_UE::Mass::Test::EntityCollection::FEntityCollectionTestBase::CompareCollectionArrays_::__l6::<lambda_1>_>
                       (param_2,local_a8);
    local_40 = FAITestBase::GetTestRunner((FAITestBase *)this);
    ::FString::FString(&local_30,"Matching collection found in the other archetype collection set");
    bVar3 = FAutomationTestBase::TestNotNull<FMassArchetypeEntityCollection>
                      (local_40,&local_30,pFVar4);
    ::FString::~FString(&local_30);
    if (!bVar3) break;
    local_38 = FAITestBase::GetTestRunner((FAITestBase *)this);
    bVar3 = FMassArchetypeEntityCollection::IsSame(local_a8.ArchetypeCollectionA,pFVar4);
    ::FString::FString(local_20,"Individual archetype collections match");
    bVar3 = FAutomationTestBase::TestTrue(local_38,local_20,bVar3);
    ::FString::~FString(local_20);
    if (!bVar3) {
      AITestSuite::ConditionallyBreakOnTestFail();
      return false;
    }
    local_a8.ArchetypeCollectionA = local_a8.ArchetypeCollectionA + 1;
  }
  AITestSuite::ConditionallyBreakOnTestFail();
  return false;
}

// CreateEntitySubset @ 14711bb90

TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> * __thiscall
UE::Mass::Test::EntityCollection::FEntityCollectionTestBase::CreateEntitySubset
          (FEntityCollectionTestBase *this,
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1)

{
  int iVar1;
  FMassEntityHandle *pFVar2;
  int local_78;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_68;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *local_60;
  TArrayView<FMassEntityHandle_const_,int> local_20 [2];
  
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&__return_storage_ptr__->AllocatorInstance);
  __return_storage_ptr__->ArrayNum = 0;
  iVar1 = TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                    (&__return_storage_ptr__->AllocatorInstance);
  __return_storage_ptr__->ArrayMax = iVar1;
  local_78 = 0;
  while (__return_storage_ptr__->ArrayNum < param_1) {
    if (local_78 == 2) {
      local_60 = &this->FloatIntEntities;
    }
    else {
      if (local_78 == 1) {
        local_68 = &this->IntEntities;
      }
      else {
        local_68 = &this->FloatEntities;
      }
      local_60 = local_68;
    }
    TArrayView<FMassEntityHandle_const_,int>::
    TArrayView<FMassEntityHandle_const_,int><TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_&,TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>_>
              (local_20,local_60);
    iVar1 = FRandomStream::RandRange(&this->RandomStream,0,this->EntitiesToCreatePerArchetype + -1);
    pFVar2 = TArrayView<FMassEntityHandle_const_,int>::operator[](local_20,iVar1);
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FMassEntityHandle_const_&>
              (__return_storage_ptr__,pFVar2);
    local_78 = (local_78 + 1) % 3;
  }
  return __return_storage_ptr__;
}

// GetArraySubset @ 14711f8a0

TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> * __thiscall
UE::Mass::Test::EntityCollection::FEntityCollectionTestBase::GetArraySubset
          (FEntityCollectionTestBase *this,
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          TArrayView<FMassEntityHandle_const_,int> *param_1,int param_2)

{
  int iVar1;
  FMassEntityHandle *pFVar2;
  
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&__return_storage_ptr__->AllocatorInstance);
  __return_storage_ptr__->ArrayNum = 0;
  iVar1 = TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                    (&__return_storage_ptr__->AllocatorInstance);
  __return_storage_ptr__->ArrayMax = iVar1;
  if (param_2 < param_1->ArrayNum) {
    while (__return_storage_ptr__->ArrayNum < param_2) {
      iVar1 = FRandomStream::RandRange(&this->RandomStream,0,param_1->ArrayNum + -1);
      pFVar2 = TArrayView<FMassEntityHandle_const_,int>::operator[](param_1,iVar1);
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<FMassEntityHandle_const_&>(__return_storage_ptr__,pFVar2);
    }
  }
  else {
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::operator=<FMassEntityHandle_const_,int>
              (__return_storage_ptr__,param_1);
  }
  return __return_storage_ptr__;
}

// SetUp @ 1471a57d0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::EntityCollection::FEntityCollectionTestBase::SetUp(FEntityCollectionTestBase *this)

{
  bool bVar1;
  FMassEntityManager *pFVar2;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_40;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_30;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_20 [2];
  
  bVar1 = FEntityTestBase::SetUp((FEntityTestBase *)this);
  if (bVar1) {
    pFVar2 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
    FMassEntityManager::BatchCreateEntities
              (pFVar2,&local_40,(FMassArchetypeHandle *)&this->_padding_,
               this->EntitiesToCreatePerArchetype,&this->FloatEntities);
    TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
    ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_40);
    pFVar2 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
    FMassEntityManager::BatchCreateEntities
              (pFVar2,&local_30,(FMassArchetypeHandle *)&this->_padding_,
               this->EntitiesToCreatePerArchetype,&this->IntEntities);
    TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
    ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_30);
    pFVar2 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
    FMassEntityManager::BatchCreateEntities
              (pFVar2,local_20,(FMassArchetypeHandle *)&this->_padding_,
               this->EntitiesToCreatePerArchetype,&this->FloatIntEntities);
    TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
    ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(local_20);
  }
  return bVar1;
}

