// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147186e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityTest::FSharedFragment_AddToEntity::InstantTest(FSharedFragment_AddToEntity *this)

{
  bool bVar1;
  FTestSharedFragment_Int *pFVar2;
  longlong lVar3;
  FMassArchetypeSharedFragmentValues *pFVar4;
  undefined1 auStack_1f8 [32];
  undefined1 local_1a0 [12];
  int local_194;
  FTestSharedFragment_Int local_190 [2];
  FSharedStruct local_188;
  undefined4 local_178;
  FMassEntityManager *local_170;
  FMassEntityHandle local_168;
  FMassEntityManager *local_160;
  FAutomationTestBase *local_158;
  FMassEntityHandle local_150;
  FMassEntityManager *local_148;
  FMassEntityHandle local_140;
  FMassEntityManager *local_138;
  FAutomationTestBase *local_130;
  FAutomationTestBase *local_128;
  FString *local_120;
  FString *local_118;
  FAutomationTestBase *local_110;
  FMassEntityHandle local_108;
  FMassEntityManager *local_100;
  FAutomationTestBase *local_f8;
  undefined4 local_f0;
  FSharedStruct local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FMassArchetypeSharedFragmentValues local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  local_f0 = 0x3ff;
  FTestSharedFragment_Int::FTestSharedFragment_Int((FTestSharedFragment_Int *)(local_1a0 + 8),0x3ff)
  ;
  FSharedStruct::Make<FTestSharedFragment_Int>
            (&local_188,(FTestSharedFragment_Int *)(local_1a0 + 8));
  local_170 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar4 = &local_88;
  for (lVar3 = 0x68; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&pFVar4->HashCache = 0;
    pFVar4 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar4->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_88);
  FMassEntityManager::CreateEntity
            (local_170,(FMassArchetypeHandle *)local_1a0,
             (FMassArchetypeSharedFragmentValues *)&this->field_0x50);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
  local_160 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_168.Index = local_1a0._0_4_;
  local_168.SerialNumber = local_1a0._4_4_;
  pFVar2 = FMassEntityManager::GetSharedFragmentDataPtr<FTestSharedFragment_Int>
                     (local_160,(FMassEntityHandle)local_1a0._0_8_);
  local_158 = FAITestBase::GetTestRunner((FAITestBase *)this);
  ::FString::FString(&local_d8,"Initially the entity is not expected to have the shared fragment");
  bVar1 = FAutomationTestBase::TestNull(local_158,&local_d8,pFVar2);
  ::FString::~FString(&local_d8);
  if (bVar1) {
    local_148 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_150.Index = local_1a0._0_4_;
    local_150.SerialNumber = local_1a0._4_4_;
    FMassEntityManager::AddSharedFragmentToEntity
              (local_148,(FMassEntityHandle)local_1a0._0_8_,&local_188);
    local_138 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_140.Index = local_1a0._0_4_;
    local_140.SerialNumber = local_1a0._4_4_;
    pFVar2 = FMassEntityManager::GetSharedFragmentDataPtr<FTestSharedFragment_Int>
                       (local_138,(FMassEntityHandle)local_1a0._0_8_);
    local_130 = FAITestBase::GetTestRunner((FAITestBase *)this);
    ::FString::FString(&local_c8,
                       "The entity is expected to have the shared fragment after the operation");
    bVar1 = FAutomationTestBase::TestNotNull<FTestSharedFragment_Int>(local_130,&local_c8,pFVar2);
    ::FString::~FString(&local_c8);
    if (bVar1) {
      local_128 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_194 = pFVar2->Value;
      ::FString::FString(&local_b8,
                         "The the shared fragment is expected to store the configured value");
      bVar1 = FTestHelpers::TestEqual<int,int>(&local_b8,local_194,0x3ff,local_128);
      ::FString::~FString(&local_b8);
      if (bVar1) {
        local_178 = 0x400;
        FTestSharedFragment_Int::FTestSharedFragment_Int(local_190,0x400);
        FSharedStruct::Make<FTestSharedFragment_Int>(&local_e8,local_190);
        local_110 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_120 = &local_98;
        local_118 = ::FString::FString(local_120,
                                       L"Changing shared fragment value of entities is not supported"
                                      );
        FAutomationTestBase::AddExpectedError(local_110,local_118,Contains,1,true);
        local_100 = TSharedPtr<FMassEntityManager,1>::operator->
                              ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
        local_108.Index = local_1a0._0_4_;
        local_108.SerialNumber = local_1a0._4_4_;
        bVar1 = FMassEntityManager::AddSharedFragmentToEntity
                          (local_100,(FMassEntityHandle)local_1a0._0_8_,&local_e8);
        local_f8 = FAITestBase::GetTestRunner((FAITestBase *)this);
        ::FString::FString(&local_a8,"Adding existing shared fragment type should fail");
        bVar1 = FAutomationTestBase::TestFalse(local_f8,&local_a8,bVar1);
        ::FString::~FString(&local_a8);
        if (bVar1) {
          FSharedStruct::~FSharedStruct(&local_e8);
          FSharedStruct::~FSharedStruct(&local_188);
          bVar1 = true;
        }
        else {
          UE::AITestSuite::ConditionallyBreakOnTestFail();
          FSharedStruct::~FSharedStruct(&local_e8);
          FSharedStruct::~FSharedStruct(&local_188);
          bVar1 = false;
        }
      }
      else {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        FSharedStruct::~FSharedStruct(&local_188);
        bVar1 = false;
      }
    }
    else {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      FSharedStruct::~FSharedStruct(&local_188);
      bVar1 = false;
    }
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    FSharedStruct::~FSharedStruct(&local_188);
    bVar1 = false;
  }
  return bVar1;
}

