// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// FSharedFragmentValues_Contains @ 1470f51b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FSharedFragmentValues_Contains * __thiscall
FMassEntityTest::FSharedFragmentValues_Contains::FSharedFragmentValues_Contains
          (FSharedFragmentValues_Contains *this)

{
  FAITestBase::FAITestBase((FAITestBase *)this);
  *(undefined ***)this = &___7FExecutionTestBase__6B_;
  TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28,(FNullTag *)0x0);
  this->field_0x38 = 1;
  *(undefined ***)this = &___7FSharedFragmentValues_Contains_FMassEntityTest__6B_;
  return this;
}

// InstantTest @ 147182f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FMassEntityTest::FSharedFragmentValues_Contains::InstantTest(FSharedFragmentValues_Contains *this)

{
  bool bVar1;
  UScriptStruct *pUVar2;
  undefined1 auStack_198 [32];
  bool local_178;
  char local_177;
  undefined1 local_176;
  bool local_175;
  char local_174;
  undefined1 local_173;
  bool local_172;
  char local_171;
  undefined1 local_170;
  bool local_16f;
  char local_16e;
  undefined1 local_16d;
  bool local_16c;
  char local_16b;
  undefined1 local_16a;
  bool local_169;
  char local_168;
  undefined1 local_167;
  undefined1 local_166;
  uint local_164;
  uint local_160;
  uint local_15c;
  uint local_158;
  uint local_154;
  uint local_150;
  int local_14c;
  float local_148 [2];
  FAutomationTestBase *local_140;
  FAutomationTestBase *local_138;
  FAutomationTestBase *local_130;
  FAutomationTestBase *local_128;
  FAutomationTestBase *local_120;
  FAutomationTestBase *local_118;
  FString local_110;
  FString local_100;
  FSharedStruct local_f0;
  FString local_e0;
  FString local_d0;
  FSharedStruct local_c0;
  FString local_b0;
  FString local_a0;
  FMassArchetypeSharedFragmentValues local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_198;
  local_14c = 0x1f;
  local_148[0] = __real_427c0000;
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_88);
  local_140 = FAITestBase::GetTestRunner((FAITestBase *)this);
  pUVar2 = FTestSharedFragment_Int::StaticStruct();
  local_178 = FMassArchetypeSharedFragmentValues::ContainsType(&local_88,pUVar2);
  ::FString::FString(&local_110,
                     "Empty FMassArchetypeSharedFragmentValues should fail ContainsType tests");
  bVar1 = FAutomationTestBase::TestFalse(local_140,&local_110,local_178);
  local_177 = !bVar1;
  local_164 = (uint)(byte)local_177;
  ::FString::~FString(&local_110);
  if (local_177 == '\0') {
    local_138 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_175 = FMassArchetypeSharedFragmentValues::ContainsType<FTestSharedFragment_Int>(&local_88)
    ;
    ::FString::FString(&local_100,
                       "Empty FMassArchetypeSharedFragmentValues should fail ContainsType tests");
    bVar1 = FAutomationTestBase::TestFalse(local_138,&local_100,local_175);
    local_174 = !bVar1;
    local_160 = (uint)(byte)local_174;
    ::FString::~FString(&local_100);
    if (local_174 == '\0') {
      FSharedStruct::Make<FTestSharedFragment_Int,int_const_&>(&local_f0,&local_14c);
      FMassArchetypeSharedFragmentValues::Add(&local_88,&local_f0);
      FSharedStruct::~FSharedStruct(&local_f0);
      local_130 = FAITestBase::GetTestRunner((FAITestBase *)this);
      pUVar2 = FTestSharedFragment_Int::StaticStruct();
      local_172 = FMassArchetypeSharedFragmentValues::ContainsType(&local_88,pUVar2);
      ::FString::FString(&local_e0,
                         "Empty FMassArchetypeSharedFragmentValues should fail ContainsType tests");
      bVar1 = FAutomationTestBase::TestTrue(local_130,&local_e0,local_172);
      local_171 = !bVar1;
      local_15c = (uint)(byte)local_171;
      ::FString::~FString(&local_e0);
      if (local_171 == '\0') {
        local_128 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_16f = FMassArchetypeSharedFragmentValues::ContainsType<FTestSharedFragment_Int>
                              (&local_88);
        ::FString::FString(&local_d0,
                           "Empty FMassArchetypeSharedFragmentValues should fail ContainsType tests"
                          );
        bVar1 = FAutomationTestBase::TestTrue(local_128,&local_d0,local_16f);
        local_16e = !bVar1;
        local_158 = (uint)(byte)local_16e;
        ::FString::~FString(&local_d0);
        if (local_16e == '\0') {
          FSharedStruct::Make<FTestSharedFragment_Float,float_const_&>(&local_c0,local_148);
          FMassArchetypeSharedFragmentValues::Add(&local_88,&local_c0);
          FSharedStruct::~FSharedStruct(&local_c0);
          local_120 = FAITestBase::GetTestRunner((FAITestBase *)this);
          pUVar2 = FTestSharedFragment_Float::StaticStruct();
          local_16c = FMassArchetypeSharedFragmentValues::ContainsType(&local_88,pUVar2);
          ::FString::FString(&local_b0,
                             "Empty FMassArchetypeSharedFragmentValues should fail ContainsType tests"
                            );
          bVar1 = FAutomationTestBase::TestTrue(local_120,&local_b0,local_16c);
          local_16b = !bVar1;
          local_154 = (uint)(byte)local_16b;
          ::FString::~FString(&local_b0);
          if (local_16b == '\0') {
            local_118 = FAITestBase::GetTestRunner((FAITestBase *)this);
            local_169 = FMassArchetypeSharedFragmentValues::ContainsType<FTestSharedFragment_Float>
                                  (&local_88);
            ::FString::FString(&local_a0,
                               "Empty FMassArchetypeSharedFragmentValues should fail ContainsType tests"
                              );
            bVar1 = FAutomationTestBase::TestTrue(local_118,&local_a0,local_169);
            local_168 = !bVar1;
            local_150 = (uint)(byte)local_168;
            ::FString::~FString(&local_a0);
            if (local_168 == '\0') {
              local_166 = 1;
              FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
              local_176 = local_166;
            }
            else {
              UE::AITestSuite::ConditionallyBreakOnTestFail();
              local_167 = 0;
              FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
              local_176 = local_167;
            }
          }
          else {
            UE::AITestSuite::ConditionallyBreakOnTestFail();
            local_16a = 0;
            FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
            local_176 = local_16a;
          }
        }
        else {
          UE::AITestSuite::ConditionallyBreakOnTestFail();
          local_16d = 0;
          FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
          local_176 = local_16d;
        }
      }
      else {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        local_170 = 0;
        FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
        local_176 = local_170;
      }
    }
    else {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      local_173 = 0;
      FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
      local_176 = local_173;
    }
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    local_176 = 0;
    FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
  }
  return (bool)local_176;
}

