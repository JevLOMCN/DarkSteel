// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147174590

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassProcessorTest::FProcessorTest_NoEntities::InstantTest(FProcessorTest_NoEntities *this)

{
  bool bVar1;
  int iVar2;
  FMassEntityManager *pFVar3;
  FAutomationTestBase *pFVar4;
  FString local_20 [2];
  
  pFVar3 = TSharedPtr<FMassEntityManager,1>::operator*<FMassEntityManager>
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  iVar2 = SimpleProcessorRun<UMassTestProcessor_Floats>(pFVar3);
  pFVar4 = FAITestBase::GetTestRunner((FAITestBase *)this);
  ::FString::FString(local_20,
                     "No entities have been created yet so the processor shouldn\'t do any work.");
  bVar1 = FTestHelpers::TestEqual<int,int>(local_20,iVar2,0,pFVar4);
  ::FString::~FString(local_20);
  if (!bVar1) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
  }
  return bVar1;
}

