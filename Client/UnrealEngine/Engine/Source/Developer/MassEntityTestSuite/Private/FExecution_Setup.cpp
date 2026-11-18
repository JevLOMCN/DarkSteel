// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// FExecution_Setup @ 1470f4170

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FExecution_Setup * __thiscall
FMassExecutionTest::FExecution_Setup::FExecution_Setup(FExecution_Setup *this)

{
  FAITestBase::FAITestBase((FAITestBase *)this);
  *(undefined ***)this = &___7FExecutionTestBase__6B_;
  TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28,(FNullTag *)0x0);
  this->field_0x38 = 1;
  *(undefined ***)this = &___7FExecution_Setup_FMassExecutionTest__6B_;
  return this;
}

// InstantTest @ 147164440

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall FMassExecutionTest::FExecution_Setup::InstantTest(FExecution_Setup *this)

{
  FMassEntityManager *pFVar1;
  bool bVar2;
  FAutomationTestBase *this_00;
  FString local_18;
  
  this_00 = FAITestBase::GetTestRunner((FAITestBase *)this);
  pFVar1 = *(FMassEntityManager **)&this->field_0x28;
  ::FString::FString(&local_18,"EntitySubsystem needs to be created for the test to be performed");
  bVar2 = FAutomationTestBase::TestNotNull<FMassEntityManager>(this_00,&local_18,pFVar1);
  ::FString::~FString(&local_18);
  if (!bVar2) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
  }
  return bVar2;
}

