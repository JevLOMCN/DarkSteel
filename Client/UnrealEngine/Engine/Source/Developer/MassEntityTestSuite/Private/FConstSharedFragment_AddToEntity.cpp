// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147148c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityTest::FConstSharedFragment_AddToEntity::InstantTest
          (FConstSharedFragment_AddToEntity *this)

{
  bool bVar1;
  FSharedStruct *pFVar2;
  longlong lVar3;
  FMassArchetypeSharedFragmentValues *pFVar4;
  undefined1 auStack_2b8 [32];
  FMassArchetypeHandle local_278;
  uint local_268;
  uint local_264;
  FTestConstSharedFragment_Int local_260;
  uint local_25c;
  uint local_258;
  FTestConstSharedFragment_Int *local_250;
  FConstSharedStruct local_248;
  FTestConstSharedFragment_Int local_238;
  int local_234;
  FConstSharedStruct local_230;
  FSharedStruct local_220;
  FMassEntityHandle local_210;
  FMassEntityManager *local_208;
  FAutomationTestBase *local_200;
  FMassEntityHandle local_1f8;
  FMassEntityManager *local_1f0;
  FMassEntityHandle local_1e8;
  FMassEntityManager *local_1e0;
  FAutomationTestBase *local_1d8;
  FAutomationTestBase *local_1d0;
  FMassArchetypeHandle *local_1c8;
  FMassEntityHandle local_1c0;
  FMassArchetypeHandle *local_1b8;
  FMassEntityManager *local_1b0;
  FAutomationTestBase *local_1a8;
  FMassArchetypeHandle *local_1a0;
  FMassArchetypeHandle *local_198;
  FString *local_190;
  FString *local_188;
  FAutomationTestBase *local_180;
  FMassEntityHandle local_178;
  FMassEntityManager *local_170;
  FAutomationTestBase *local_168;
  FMassEntityHandle local_160;
  FMassEntityManager *local_158;
  FAutomationTestBase *local_150;
  undefined4 local_148;
  undefined4 local_144;
  FMassEntityManager *local_140;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FConstSharedStruct local_f8;
  FString local_e8;
  FString local_d8;
  FSharedStruct local_c8;
  FMassArchetypeHandle local_b8;
  FMassArchetypeHandle local_a8;
  FString local_98;
  FMassArchetypeSharedFragmentValues local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  local_148 = 0x3ff;
  FTestConstSharedFragment_Int::FTestConstSharedFragment_Int(&local_238,0x3ff);
  pFVar2 = FSharedStruct::Make<FTestConstSharedFragment_Int>(&local_c8,&local_238);
  FConstSharedStruct::FConstSharedStruct(&local_248,pFVar2);
  FSharedStruct::~FSharedStruct(&local_c8);
  local_140 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar4 = &local_88;
  for (lVar3 = 0x68; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&pFVar4->HashCache = 0;
    pFVar4 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar4->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_88);
  FMassEntityManager::CreateEntity
            (local_140,&local_278,(FMassArchetypeSharedFragmentValues *)&this->field_0x50);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
  local_208 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_210 = (FMassEntityHandle)local_278.DataPtr.Object;
  local_250 = FMassEntityManager::GetConstSharedFragmentDataPtr<FTestConstSharedFragment_Int>
                        (local_208,(FMassEntityHandle)local_278.DataPtr.Object);
  local_200 = FAITestBase::GetTestRunner((FAITestBase *)this);
  ::FString::FString(&local_138,"Initially the entity is not expected to have the shared fragment");
  bVar1 = FAutomationTestBase::TestNull(local_200,&local_138,local_250);
  local_278.DataPtr.SharedReferenceCount.ReferenceController._0_4_ = (uint)!bVar1;
  ::FString::~FString(&local_138);
  if (!bVar1) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    FConstSharedStruct::~FConstSharedStruct(&local_248);
    bVar1 = false;
  }
  else {
    local_1f0 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_1f8 = (FMassEntityHandle)local_278.DataPtr.Object;
    FMassEntityManager::AddConstSharedFragmentToEntity
              (local_1f0,(FMassEntityHandle)local_278.DataPtr.Object,&local_248);
    local_1e0 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_1e8 = (FMassEntityHandle)local_278.DataPtr.Object;
    local_250 = FMassEntityManager::GetConstSharedFragmentDataPtr<FTestConstSharedFragment_Int>
                          (local_1e0,(FMassEntityHandle)local_278.DataPtr.Object);
    local_1d8 = FAITestBase::GetTestRunner((FAITestBase *)this);
    ::FString::FString(&local_128,
                       "The entity is expected to have the shared fragment after the operation");
    bVar1 = FAutomationTestBase::TestNotNull<FTestConstSharedFragment_Int>
                      (local_1d8,&local_128,local_250);
    local_278.DataPtr.SharedReferenceCount.ReferenceController._4_4_ = (uint)!bVar1;
    ::FString::~FString(&local_128);
    if (!bVar1) {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      FConstSharedStruct::~FConstSharedStruct(&local_248);
      bVar1 = false;
    }
    else {
      local_1d0 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_234 = local_250->Value;
      ::FString::FString(&local_118,
                         "The the shared fragment is expected to store the configured value");
      bVar1 = FTestHelpers::TestEqual<int,int>(&local_118,local_234,0x3ff,local_1d0);
      local_268 = (uint)!bVar1;
      ::FString::~FString(&local_118);
      if (!bVar1) {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        FConstSharedStruct::~FConstSharedStruct(&local_248);
        bVar1 = false;
      }
      else {
        local_1a8 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_1c8 = &local_b8;
        local_1a0 = FMassArchetypeHandle::FMassArchetypeHandle
                              (local_1c8,(FMassArchetypeHandle *)&this->field_0x50);
        local_1b8 = &local_a8;
        local_1b0 = TSharedPtr<FMassEntityManager,1>::operator->
                              ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
        local_1c0 = (FMassEntityHandle)local_278.DataPtr.Object;
        local_198 = FMassEntityManager::GetArchetypeForEntity
                              (local_1b0,local_1b8,(FMassEntityHandle)local_278.DataPtr.Object);
        ::FString::FString(&local_108,
                           "The the entity\'s new archetype is not the same as the original one");
        bVar1 = FTestHelpers::TestNotEqual<FMassArchetypeHandle,FMassArchetypeHandle>
                          (&local_108,local_198,local_1a0,local_1a8);
        local_264 = (uint)!bVar1;
        ::FString::~FString(&local_108);
        if (!bVar1) {
          UE::AITestSuite::ConditionallyBreakOnTestFail();
          FConstSharedStruct::~FConstSharedStruct(&local_248);
          bVar1 = false;
        }
        else {
          local_144 = 0x400;
          FTestConstSharedFragment_Int::FTestConstSharedFragment_Int(&local_260,0x400);
          FSharedStruct::Make<FTestConstSharedFragment_Int>(&local_220,&local_260);
          FConstSharedStruct::Make<FTestConstSharedFragment_Int>(&local_230,&local_260);
          local_180 = FAITestBase::GetTestRunner((FAITestBase *)this);
          local_190 = &local_98;
          local_188 = ::FString::FString(local_190,
                                         L"Changing shared fragment value of entities is not supported"
                                        );
          FAutomationTestBase::AddExpectedError(local_180,local_188,Contains,2,true);
          local_170 = TSharedPtr<FMassEntityManager,1>::operator->
                                ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
          FConstSharedStruct::FConstSharedStruct(&local_f8,&local_220);
          local_178 = (FMassEntityHandle)local_278.DataPtr.Object;
          bVar1 = FMassEntityManager::AddConstSharedFragmentToEntity
                            (local_170,(FMassEntityHandle)local_278.DataPtr.Object,&local_f8);
          FConstSharedStruct::~FConstSharedStruct(&local_f8);
          local_168 = FAITestBase::GetTestRunner((FAITestBase *)this);
          ::FString::FString(&local_e8,"Adding existing shared fragment type should fail");
          bVar1 = FAutomationTestBase::TestFalse(local_168,&local_e8,bVar1);
          local_25c = (uint)!bVar1;
          ::FString::~FString(&local_e8);
          if (!bVar1) {
            UE::AITestSuite::ConditionallyBreakOnTestFail();
            FConstSharedStruct::~FConstSharedStruct(&local_230);
            FSharedStruct::~FSharedStruct(&local_220);
            FConstSharedStruct::~FConstSharedStruct(&local_248);
            bVar1 = false;
          }
          else {
            local_158 = TSharedPtr<FMassEntityManager,1>::operator->
                                  ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
            local_160 = (FMassEntityHandle)local_278.DataPtr.Object;
            bVar1 = FMassEntityManager::AddConstSharedFragmentToEntity
                              (local_158,(FMassEntityHandle)local_278.DataPtr.Object,&local_230);
            local_150 = FAITestBase::GetTestRunner((FAITestBase *)this);
            ::FString::FString(&local_d8,"Adding existing const shared fragment type should fail");
            bVar1 = FAutomationTestBase::TestFalse(local_150,&local_d8,bVar1);
            local_258 = (uint)!bVar1;
            ::FString::~FString(&local_d8);
            if (!bVar1) {
              UE::AITestSuite::ConditionallyBreakOnTestFail();
              FConstSharedStruct::~FConstSharedStruct(&local_230);
              FSharedStruct::~FSharedStruct(&local_220);
              FConstSharedStruct::~FConstSharedStruct(&local_248);
              bVar1 = false;
            }
            else {
              FConstSharedStruct::~FConstSharedStruct(&local_230);
              FSharedStruct::~FSharedStruct(&local_220);
              FConstSharedStruct::~FConstSharedStruct(&local_248);
              bVar1 = true;
            }
          }
        }
      }
    }
  }
  return bVar1;
}

