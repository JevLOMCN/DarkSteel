// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147174370

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassProcessorTest::FProcessorTest_MultipleMatchingArchetype::InstantTest
          (FProcessorTest_MultipleMatchingArchetype *this)

{
  bool bVar1;
  FMassEntityManager *pFVar2;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_80;
  int local_70;
  undefined4 local_6c;
  FMassEntityManager *local_68;
  FMassEntityManager *local_60;
  FMassEntityManager *local_58;
  FAutomationTestBase *local_50;
  FString local_48;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_38;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_28;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_18;
  
  local_6c = 100;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType(&local_80.AllocatorInstance)
  ;
  local_80.ArrayNum = 0;
  local_80.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_80.AllocatorInstance);
  local_68 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities
            (local_68,&local_38,(FMassArchetypeHandle *)&this->field_0x50,100,&local_80);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_38);
  local_60 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities
            (local_60,&local_28,(FMassArchetypeHandle *)&this->field_0x70,100,&local_80);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_28);
  local_58 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::BatchCreateEntities
            (local_58,&local_18,(FMassArchetypeHandle *)&this->field_0x60,100,&local_80);
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
  ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_18);
  pFVar2 = TSharedPtr<FMassEntityManager,1>::operator*<FMassEntityManager>
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_70 = SimpleProcessorRun<UMassTestProcessor_Floats>(pFVar2);
  local_50 = FAITestBase::GetTestRunner((FAITestBase *)this);
  ::FString::FString(&local_48,"Two of given three archetypes should match.");
  bVar1 = FTestHelpers::TestEqual<int,int>(&local_48,local_70,200,local_50);
  ::FString::~FString(&local_48);
  if (bVar1) {
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_80);
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
    ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_80);
  }
  return bVar1;
}

