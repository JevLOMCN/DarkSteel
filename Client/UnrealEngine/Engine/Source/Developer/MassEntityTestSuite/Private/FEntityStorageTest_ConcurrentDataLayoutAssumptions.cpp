// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147156f00

bool __thiscall
FMassEntityStorageTest::FEntityStorageTest_ConcurrentDataLayoutAssumptions::InstantTest
          (FEntityStorageTest_ConcurrentDataLayoutAssumptions *this)

{
  bool bVar1;
  FAutomationTestBase *this_00;
  FString local_18;
  
  bVar1 = UE::Mass::FConcurrentEntityStorage::DebugAssumptionsSelfTest();
  this_00 = FAITestBase::GetTestRunner((FAITestBase *)this);
  ::FString::FString(&local_18,"Testing assumptions");
  bVar1 = FAutomationTestBase::TestTrue(this_00,&local_18,bVar1);
  ::FString::~FString(&local_18);
  if (!bVar1) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
  }
  return bVar1;
}

