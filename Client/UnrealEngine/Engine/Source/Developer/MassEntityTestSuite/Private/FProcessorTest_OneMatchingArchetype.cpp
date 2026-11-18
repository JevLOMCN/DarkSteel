// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147174790

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassProcessorTest::FProcessorTest_OneMatchingArchetype::InstantTest
          (FProcessorTest_OneMatchingArchetype *this)

{
  bool bVar1;
  int iVar2;
  FMassEntityManager *pFVar3;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_58;
  undefined4 local_48;
  FMassEntityManager *local_40;
  FAutomationTestBase *local_38;
  FString local_30;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_20 [2];
  
  local_48 = 100;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType(&local_58.AllocatorInstance)
  ;
  local_58.ArrayNum = 0;
  local_58.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_58.AllocatorInstance);
  local_40 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities
            (local_40,local_20,(FMassArchetypeHandle *)&this->field_0x50,100,&local_58);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(local_20);
  pFVar3 = TSharedPtr<FMassEntityManager,1>::operator*<FMassEntityManager>
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  iVar2 = SimpleProcessorRun<UMassTestProcessor_Floats>(pFVar3);
  local_38 = FAITestBase::GetTestRunner((FAITestBase *)this);
  ::FString::FString(&local_30,
                     "No matching entities have been created yet so the processor shouldn\'t do any work."
                    );
  bVar1 = FTestHelpers::TestEqual<int,int>(&local_30,iVar2,100,local_38);
  ::FString::~FString(&local_30);
  if (bVar1) {
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_58);
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_58);
  }
  return bVar1;
}

