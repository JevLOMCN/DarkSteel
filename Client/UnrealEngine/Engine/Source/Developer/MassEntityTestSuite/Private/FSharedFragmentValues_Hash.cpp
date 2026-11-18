// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 3

// FSharedFragmentValues_Hash @ 1470f5300

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FSharedFragmentValues_Hash * __thiscall
FMassEntityTest::FSharedFragmentValues_Hash::FSharedFragmentValues_Hash
          (FSharedFragmentValues_Hash *this)

{
  FAITestBase::FAITestBase((FAITestBase *)this);
  *(undefined ***)this = &___7FExecutionTestBase__6B_;
  TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28,(FNullTag *)0x0);
  this->field_0x38 = 1;
  *(undefined ***)this = &___7FSharedFragmentValues_Hash_FMassEntityTest__6B_;
  return this;
}

// operator() @ 1470fe170

void __thiscall
`FMassEntityTest::FSharedFragmentValues_Hash::InstantTest'::__l2::<lambda_1>::operator()(void *this)

{
  int iVar1;
  int iVar2;
  FAutomationTestBase *this_00;
  FAutomationTestExecutionInfo local_78;
  
  UE::AITestSuite::TestsInProgress = UE::AITestSuite::TestsInProgress + -1;
  FAutomationTestExecutionInfo::FAutomationTestExecutionInfo(&local_78);
  this_00 = FAITestBase::GetTestRunner(*(FAITestBase **)this);
  FAutomationTestBase::GetExecutionInfo(this_00,&local_78);
  iVar1 = FAutomationTestExecutionInfo::GetWarningTotal(&local_78);
  iVar2 = FAutomationTestExecutionInfo::GetWarningTotal(&local_78);
  if (0 < iVar1 + iVar2) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
  }
  FAutomationTestExecutionInfo::~FAutomationTestExecutionInfo(&local_78);
  return;
}

// InstantTest @ 147185730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMassEntityTest::FSharedFragmentValues_Hash::InstantTest(FSharedFragmentValues_Hash *this)

{
  bool bVar1;
  FSharedStruct *pFVar2;
  undefined1 auStack_158 [32];
  char local_138;
  undefined1 local_137;
  char local_136;
  undefined1 local_135;
  undefined1 local_134;
  FScopeGuardSyntaxSupport local_133 [3];
  uint local_130;
  uint local_12c;
  int local_128;
  float local_124;
  uint local_120;
  uint local_11c;
  <lambda_1> local_118;
  FString *local_110;
  FString *local_108;
  FAutomationTestBase *local_100;
  FSharedFragmentValues_Hash *local_f8;
  FSharedFragmentValues_Hash **local_f0;
  FAutomationTestBase *local_e8;
  FAutomationTestBase *local_e0;
  FString local_d8;
  FString local_c8;
  FSharedStruct local_b8;
  FSharedStruct local_a8;
  FString local_98;
  FMassArchetypeSharedFragmentValues local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_128 = 0x1f;
  local_124 = __real_427c0000;
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_88);
  pFVar2 = FSharedStruct::Make<FTestSharedFragment_Int,int_const_&>(&local_b8,&local_128);
  FMassArchetypeSharedFragmentValues::Add(&local_88,pFVar2);
  FSharedStruct::~FSharedStruct(&local_b8);
  pFVar2 = FSharedStruct::Make<FTestSharedFragment_Float,float_const_&>(&local_a8,&local_124);
  FMassArchetypeSharedFragmentValues::Add(&local_88,pFVar2);
  FSharedStruct::~FSharedStruct(&local_a8);
  local_100 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_110 = &local_98;
  local_108 = ::FString::FString(local_110,"Expecting the containers to be sorted");
  FAutomationTestBase::AddExpectedErrorPlain(local_100,local_108,Contains,1);
  local_f0 = &local_f8;
  local_f8 = this;
  ScopeExitSupport::FScopeGuardSyntaxSupport::
  operator+<_FMassEntityTest::FSharedFragmentValues_Hash::InstantTest_::__l2::<lambda_1>_>
            (local_133,&local_118);
  UE::AITestSuite::TestsInProgress = UE::AITestSuite::TestsInProgress + 1;
  local_120 = FMassArchetypeSharedFragmentValues::CalculateHash(&local_88);
  local_e8 = FAITestBase::GetTestRunner((FAITestBase *)this);
  ::FString::FString(&local_d8,"Expecting unsorted collection hashing to result in 0");
  bVar1 = FTestHelpers::TestEqual<unsigned_int,unsigned_int>(&local_d8,local_120,0,local_e8);
  local_138 = !bVar1;
  local_130 = (uint)(byte)local_138;
  ::FString::~FString(&local_d8);
  if (local_138 == '\0') {
    FMassArchetypeSharedFragmentValues::Sort(&local_88);
    local_11c = FMassArchetypeSharedFragmentValues::CalculateHash(&local_88);
    local_e0 = FAITestBase::GetTestRunner((FAITestBase *)this);
    ::FString::FString(&local_c8,"Expecting sorted collection hashing to result in non 0");
    bVar1 = FTestHelpers::TestNotEqual<unsigned_int,unsigned_int>(&local_c8,local_11c,0,local_e0);
    local_136 = !bVar1;
    local_12c = (uint)(byte)local_136;
    ::FString::~FString(&local_c8);
    if (local_136 == '\0') {
      local_134 = 1;
      ScopeExitSupport::
      TScopeGuard<`FMassEntityTest::FSharedFragmentValues_Hash::InstantTest'::__l2::<lambda_1>_>::
      ~TScopeGuard<_FMassEntityTest::FSharedFragmentValues_Hash::InstantTest_::__l2::<lambda_1>_>
                (&local_118);
      FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
      local_137 = local_134;
    }
    else {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      local_135 = 0;
      ScopeExitSupport::
      TScopeGuard<`FMassEntityTest::FSharedFragmentValues_Hash::InstantTest'::__l2::<lambda_1>_>::
      ~TScopeGuard<_FMassEntityTest::FSharedFragmentValues_Hash::InstantTest_::__l2::<lambda_1>_>
                (&local_118);
      FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
      local_137 = local_135;
    }
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    local_137 = 0;
    ScopeExitSupport::
    TScopeGuard<`FMassEntityTest::FSharedFragmentValues_Hash::InstantTest'::__l2::<lambda_1>_>::
    ~TScopeGuard<_FMassEntityTest::FSharedFragmentValues_Hash::InstantTest_::__l2::<lambda_1>_>
              (&local_118);
    FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
  }
  return (bool)local_137;
}

