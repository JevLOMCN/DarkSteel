// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 1471396b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall FMassDependencySolverTest::FBadInput_Empty::InstantTest(FBadInput_Empty *this)

{
  int iVar1;
  bool bVar2;
  FAutomationTestBase *this_00;
  FString local_20 [2];
  
  FDependencySolverBase::Solve((FDependencySolverBase *)this);
  this_00 = FAITestBase::GetTestRunner((FAITestBase *)this);
  iVar1 = *(int *)&this->field_0x40;
  ::FString::FString(local_20,"Empty input should be handled gracefully");
  bVar2 = FAutomationTestBase::TestTrue(this_00,local_20,iVar1 == 0);
  ::FString::~FString(local_20);
  if (!bVar2) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
  }
  return bVar2;
}

