// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// FSharedFragmentValues_CreateConst @ 1470f5290

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FSharedFragmentValues_CreateConst * __thiscall
FMassEntityTest::FSharedFragmentValues_CreateConst::FSharedFragmentValues_CreateConst
          (FSharedFragmentValues_CreateConst *this)

{
  FAITestBase::FAITestBase((FAITestBase *)this);
  *(undefined ***)this = &___7FExecutionTestBase__6B_;
  TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28,(FNullTag *)0x0);
  this->field_0x38 = 1;
  *(undefined ***)this = &___7FSharedFragmentValues_CreateConst_FMassEntityTest__6B_;
  return this;
}

// InstantTest @ 147183730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMassEntityTest::FSharedFragmentValues_CreateConst::InstantTest
          (FSharedFragmentValues_CreateConst *this)

{
  bool bVar1;
  undefined1 auStack_138 [32];
  char local_118;
  undefined1 local_117;
  char local_116;
  undefined1 local_115;
  char local_114;
  undefined1 local_113;
  undefined1 local_112;
  uint local_110;
  uint local_10c;
  uint local_108;
  int local_104;
  int local_100;
  FTestConstSharedFragment_Int *local_f8;
  FTestConstSharedFragment_Int *local_f0;
  FAutomationTestBase *local_e8;
  FAutomationTestBase *local_e0;
  FAutomationTestBase *local_d8;
  FConstSharedStruct local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  FMassArchetypeSharedFragmentValues local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_104 = 0x3b;
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_88);
  FConstSharedStruct::Make<FTestConstSharedFragment_Int,int_const_&>(&local_d0,&local_104);
  FMassArchetypeSharedFragmentValues::Add(&local_88,&local_d0);
  FConstSharedStruct::~FConstSharedStruct(&local_d0);
  local_f8 = GetConstSharedFragmentPtr<FTestConstSharedFragment_Int>(&local_88);
  local_f0 = GetMutableSharedFragmentPtr<FTestConstSharedFragment_Int>(&local_88);
  local_e8 = FAITestBase::GetTestRunner((FAITestBase *)this);
  ::FString::FString(&local_c0,"Fetching fragment as a shared fragment should fail");
  bVar1 = FAutomationTestBase::TestNull(local_e8,&local_c0,local_f0);
  local_118 = !bVar1;
  local_110 = (uint)(byte)local_118;
  ::FString::~FString(&local_c0);
  if (local_118 == '\0') {
    local_e0 = FAITestBase::GetTestRunner((FAITestBase *)this);
    ::FString::FString(&local_b0,"Fetching fragment as a const shared fragment should not fail");
    bVar1 = FAutomationTestBase::TestNotNull<FTestConstSharedFragment_Int>
                      (local_e0,&local_b0,local_f8);
    local_116 = !bVar1;
    local_10c = (uint)(byte)local_116;
    ::FString::~FString(&local_b0);
    if (local_116 == '\0') {
      local_d8 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_100 = local_f8->Value;
      ::FString::FString(&local_a0,"The fetched value should match the expectations");
      bVar1 = FTestHelpers::TestEqual<int,int>(&local_a0,local_100,0x3b,local_d8);
      local_114 = !bVar1;
      local_108 = (uint)(byte)local_114;
      ::FString::~FString(&local_a0);
      if (local_114 == '\0') {
        local_112 = 1;
        FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
        local_117 = local_112;
      }
      else {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        local_113 = 0;
        FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
        local_117 = local_113;
      }
    }
    else {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      local_115 = 0;
      FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
      local_117 = local_115;
    }
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    local_117 = 0;
    FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
  }
  return (bool)local_117;
}

