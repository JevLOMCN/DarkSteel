// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147174640

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassProcessorTest::FProcessorTest_NoMatchingEntities::InstantTest
          (FProcessorTest_NoMatchingEntities *this)

{
  bool bVar1;
  int iVar2;
  FMassEntityManager *pFVar3;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_48;
  FMassEntityManager *local_38;
  FAutomationTestBase *local_30;
  FString local_28;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_18;
  
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType(&local_48.AllocatorInstance)
  ;
  local_48.ArrayNum = 0;
  local_48.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_48.AllocatorInstance);
  local_38 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities
            (local_38,&local_18,(FMassArchetypeHandle *)&this->field_0x60,100,&local_48);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_18);
  pFVar3 = TSharedPtr<FMassEntityManager,1>::operator*<FMassEntityManager>
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  iVar2 = SimpleProcessorRun<UMassTestProcessor_Floats>(pFVar3);
  local_30 = FAITestBase::GetTestRunner((FAITestBase *)this);
  ::FString::FString(&local_28,
                     "No matching entities have been created yet so the processor shouldn\'t do any work."
                    );
  bVar1 = FTestHelpers::TestEqual<int,int>(&local_28,iVar2,0,local_30);
  ::FString::~FString(&local_28);
  if (bVar1) {
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_48);
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_48);
  }
  return bVar1;
}

