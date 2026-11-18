// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 3

// FArchetypeEntityCollectionTestBase @ 1470f2af0

FArchetypeEntityCollectionTestBase * __thiscall
FMassArchetypeEntityCollectionTest::FArchetypeEntityCollectionTestBase::
FArchetypeEntityCollectionTestBase(FArchetypeEntityCollectionTestBase *this)

{
  int iVar1;
  
  FEntityTestBase::FEntityTestBase((FEntityTestBase *)this);
  this->_padding_ =
       (longlong)&___7FArchetypeEntityCollectionTestBase_FMassArchetypeEntityCollectionTest__6B_;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&(this->Entities).AllocatorInstance);
  (this->Entities).ArrayNum = 0;
  iVar1 = TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                    (&(this->Entities).AllocatorInstance);
  (this->Entities).ArrayMax = iVar1;
  return this;
}

// SetUp @ 14719d950

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassArchetypeEntityCollectionTest::FArchetypeEntityCollectionTestBase::SetUp
          (FArchetypeEntityCollectionTestBase *this)

{
  FMassEntityManager *this_00;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_18;
  
  FEntityTestBase::SetUp((FEntityTestBase *)this);
  this_00 = TSharedPtr<FMassEntityManager,1>::operator->
                      ((TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
  FMassEntityManager::BatchCreateEntities
            (this_00,&local_18,(FMassArchetypeHandle *)&this->_padding_,100,&this->Entities);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_18);
  return true;
}

// TearDown @ 1471abc80

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
FMassArchetypeEntityCollectionTest::FArchetypeEntityCollectionTestBase::TearDown
          (FArchetypeEntityCollectionTestBase *this)

{
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::Reset(&this->Entities,0);
  FExecutionTestBase::TearDown((FExecutionTestBase *)this);
  return;
}

