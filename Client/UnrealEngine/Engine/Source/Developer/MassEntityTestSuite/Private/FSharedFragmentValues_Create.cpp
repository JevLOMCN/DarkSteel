// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// FSharedFragmentValues_Create @ 1470f5220

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FSharedFragmentValues_Create * __thiscall
FMassEntityTest::FSharedFragmentValues_Create::FSharedFragmentValues_Create
          (FSharedFragmentValues_Create *this)

{
  FAITestBase::FAITestBase((FAITestBase *)this);
  *(undefined ***)this = &___7FExecutionTestBase__6B_;
  TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28,(FNullTag *)0x0);
  this->field_0x38 = 1;
  *(undefined ***)this = &___7FSharedFragmentValues_Create_FMassEntityTest__6B_;
  return this;
}

// InstantTest @ 147183490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMassEntityTest::FSharedFragmentValues_Create::InstantTest(FSharedFragmentValues_Create *this)

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
  FTestSharedFragment_Int local_104;
  int local_100;
  FTestSharedFragment_Int *local_f8;
  undefined4 local_f0;
  FTestSharedFragment_Int *local_e8;
  FAutomationTestBase *local_e0;
  FAutomationTestBase *local_d8;
  FAutomationTestBase *local_d0;
  FSharedStruct local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FMassArchetypeSharedFragmentValues local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_f0 = 0x3b;
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_88);
  FTestSharedFragment_Int::FTestSharedFragment_Int(&local_104,0x3b);
  FSharedStruct::Make<FTestSharedFragment_Int>(&local_c8,&local_104);
  FMassArchetypeSharedFragmentValues::Add(&local_88,&local_c8);
  FSharedStruct::~FSharedStruct(&local_c8);
  local_e8 = GetConstSharedFragmentPtr<FTestSharedFragment_Int>(&local_88);
  local_f8 = GetMutableSharedFragmentPtr<FTestSharedFragment_Int>(&local_88);
  local_e0 = FAITestBase::GetTestRunner((FAITestBase *)this);
  ::FString::FString(&local_b8,"Fetching fragment as a const shared fragment should fail");
  bVar1 = FAutomationTestBase::TestNull(local_e0,&local_b8,local_e8);
  local_118 = !bVar1;
  local_110 = (uint)(byte)local_118;
  ::FString::~FString(&local_b8);
  if (local_118 == '\0') {
    local_d8 = FAITestBase::GetTestRunner((FAITestBase *)this);
    ::FString::FString(&local_a8,"Fetching fragment as a shared fragment should not fail");
    bVar1 = FAutomationTestBase::TestNotNull<FTestSharedFragment_Int>(local_d8,&local_a8,local_f8);
    local_116 = !bVar1;
    local_10c = (uint)(byte)local_116;
    ::FString::~FString(&local_a8);
    if (local_116 == '\0') {
      local_d0 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_100 = local_f8->Value;
      ::FString::FString(&local_98,"The fetched value should match the expectations");
      bVar1 = FTestHelpers::TestEqual<int,int>(&local_98,local_100,0x3b,local_d0);
      local_114 = !bVar1;
      local_108 = (uint)(byte)local_114;
      ::FString::~FString(&local_98);
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

