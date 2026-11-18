// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14715baf0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityTest::FEntityTest_BatchCreatingSingleEntity::InstantTest
          (FEntityTest_BatchCreatingSingleEntity *this)

{
  bool bVar1;
  FMassEntityManager *this_00;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_78;
  int local_68;
  int local_64;
  int local_60;
  FMassEntityManager *local_58;
  FAutomationTestBase *local_50;
  FAutomationTestBase *local_48;
  FString local_40;
  FString local_30;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_20 [2];
  
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType(&local_78.AllocatorInstance)
  ;
  local_78.ArrayNum = 0;
  local_78.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_78.AllocatorInstance);
  local_58 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities
            (local_58,local_20,(FMassArchetypeHandle *)&this->field_0x70,1,&local_78);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(local_20);
  local_50 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_68 = local_78.ArrayNum;
  local_64 = local_78.ArrayNum;
  ::FString::FString(&local_40,"Batch creation should have created a single entity");
  bVar1 = FTestHelpers::TestEqual<int,int>(&local_40,local_64,1,local_50);
  ::FString::~FString(&local_40);
  if (bVar1) {
    local_48 = FAITestBase::GetTestRunner((FAITestBase *)this);
    this_00 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_60 = FMassEntityManager::DebugGetEntityCount(this_00);
    ::FString::FString(&local_30,
                       "The total number of entities present must match the number created by batch creation"
                      );
    bVar1 = FTestHelpers::TestEqual<int,int>(&local_30,local_60,1,local_48);
    ::FString::~FString(&local_30);
    if (bVar1) {
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_78);
      bVar1 = true;
    }
    else {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
      ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_78);
      bVar1 = false;
    }
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_78);
    bVar1 = false;
  }
  return bVar1;
}

