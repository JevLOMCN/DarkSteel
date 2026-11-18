// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14715e580

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityTest::FEntityTest_EntityReservationAndBuildingFromInstances::InstantTest
          (FEntityTest_EntityReservationAndBuildingFromInstances *this)

{
  bool bVar1;
  TArrayView<FInstancedStruct,int> *pTVar2;
  TArrayView<FInstancedStruct_const_,int> *pTVar3;
  FMassEntityManager *pFVar4;
  FTestFragment_Int *pFVar5;
  longlong lVar6;
  undefined1 *puVar7;
  FMassArchetypeSharedFragmentValues *pFVar8;
  undefined1 *puVar9;
  undefined1 auStack_308 [32];
  bool local_2e8;
  char local_2e7;
  bool local_2e6;
  char local_2e5;
  bool local_2e4;
  char local_2e3;
  char local_2e2;
  char local_2e1;
  char local_2e0;
  char local_2df;
  char local_2de;
  char local_2dd;
  FMassEntityHandle local_2d8;
  uint local_2d0;
  uint local_2cc;
  uint local_2c8;
  uint local_2c4;
  uint local_2c0;
  uint local_2bc;
  uint local_2b8;
  uint local_2b4;
  uint local_2b0;
  int local_2ac;
  int local_2a8;
  int local_2a4;
  int local_2a0;
  int local_29c;
  FMassEntityManager *local_298;
  FMassEntityHandle local_290;
  FMassEntityManager *local_288;
  FAutomationTestBase *local_280;
  FMassEntityHandle local_278;
  FMassEntityManager *local_270;
  FAutomationTestBase *local_268;
  TArrayView<FInstancedStruct_const_,int> *local_260;
  FMassEntityHandle local_258;
  FMassEntityHandle local_250;
  FMassEntityManager *local_248;
  FMassEntityHandle local_240;
  FMassEntityManager *local_238;
  FAutomationTestBase *local_230;
  FAutomationTestBase *local_228;
  FMassArchetypeHandle *local_220;
  FMassEntityHandle local_218;
  FMassArchetypeHandle *local_210;
  FMassEntityManager *local_208;
  FAutomationTestBase *local_200;
  FMassArchetypeHandle *local_1f8;
  FMassArchetypeHandle *local_1f0;
  FMassEntityManager *local_1e8;
  FAutomationTestBase *local_1e0;
  FMassEntityHandle local_1d8;
  FMassEntityManager *local_1d0;
  FAutomationTestBase *local_1c8;
  FMassEntityHandle local_1c0;
  FMassEntityManager *local_1b8;
  FAutomationTestBase *local_1b0;
  FMassEntityManager *local_1a8;
  FAutomationTestBase *local_1a0;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  TArrayView<FInstancedStruct_const_,int> local_e8;
  TArrayView<FInstancedStruct_const_,int> local_d8;
  TArrayView<FInstancedStruct,int> local_c8;
  FMassArchetypeHandle local_b8;
  FMassArchetypeHandle local_a8;
  FMassArchetypeSharedFragmentValues local_98;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_308;
  local_298 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::ReserveEntity(local_298);
  local_280 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_288 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_290 = local_2d8;
  local_2e8 = FMassEntityManager::IsEntityValid(local_288,local_2d8);
  ::FString::FString(&local_198,"The reserved entity should be a valid entity");
  bVar1 = FAutomationTestBase::TestTrue(local_280,&local_198,local_2e8);
  local_2e7 = !bVar1;
  local_2d0 = (uint)(byte)local_2e7;
  ::FString::~FString(&local_198);
  if (local_2e7 == '\0') {
    local_268 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_270 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_278 = local_2d8;
    local_2e6 = FMassEntityManager::IsEntityBuilt(local_270,local_2d8);
    ::FString::FString(&local_188,"The reserved entity should not be a valid entity");
    bVar1 = FAutomationTestBase::TestFalse(local_268,&local_188,local_2e6);
    local_2e5 = !bVar1;
    local_2cc = (uint)(byte)local_2e5;
    ::FString::~FString(&local_188);
    if (local_2e5 == '\0') {
      local_248 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      pFVar8 = &local_98;
      for (lVar6 = 0x68; lVar6 != 0; lVar6 = lVar6 + -1) {
        *(undefined1 *)&pFVar8->HashCache = 0;
        pFVar8 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar8->HashCache + 1);
      }
      FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_98);
      local_260 = &local_d8;
      pTVar2 = MakeArrayView<FInstancedStruct>(&local_c8,(FInstancedStruct *)&this->field_0x80,1);
      pTVar3 = TArrayView<FInstancedStruct_const_,int>::
               TArrayView<FInstancedStruct_const_,int><TArrayView<FInstancedStruct,int>,TArrayView<FInstancedStruct,int>_>
                         (local_260,pTVar2);
      puVar7 = local_108;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar7 = *(undefined1 *)&pTVar3->DataPtr;
        pTVar3 = (TArrayView<FInstancedStruct_const_,int> *)((longlong)&pTVar3->DataPtr + 1);
        puVar7 = puVar7 + 1;
      }
      puVar7 = local_108;
      puVar9 = local_f8;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      local_258 = local_2d8;
      local_250 = local_2d8;
      puVar7 = local_f8;
      pTVar3 = &local_e8;
      for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
        *(undefined1 *)&pTVar3->DataPtr = *puVar7;
        puVar7 = puVar7 + 1;
        pTVar3 = (TArrayView<FInstancedStruct_const_,int> *)((longlong)&pTVar3->DataPtr + 1);
      }
      FMassEntityManager::BuildEntity(local_248,local_2d8,&local_e8,&local_98);
      FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_98);
      local_230 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_238 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      local_240 = local_2d8;
      local_2e4 = FMassEntityManager::IsEntityBuilt(local_238,local_2d8);
      ::FString::FString(&local_178,"The reserved entity should not be a valid entity");
      bVar1 = FAutomationTestBase::TestTrue(local_230,&local_178,local_2e4);
      local_2e3 = !bVar1;
      local_2c8 = (uint)(byte)local_2e3;
      ::FString::~FString(&local_178);
      if (local_2e3 == '\0') {
        local_228 = FAITestBase::GetTestRunner((FAITestBase *)this);
        pFVar4 = TSharedPtr<FMassEntityManager,1>::operator->
                           ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
        local_2ac = FMassEntityManager::DebugGetEntityCount(pFVar4);
        ::FString::FString(&local_168,"There should be one entity across the whole system");
        bVar1 = FTestHelpers::TestEqual<int,int>(&local_168,local_2ac,1,local_228);
        local_2e2 = !bVar1;
        local_2c4 = (uint)(byte)local_2e2;
        ::FString::~FString(&local_168);
        if (local_2e2 == '\0') {
          local_200 = FAITestBase::GetTestRunner((FAITestBase *)this);
          local_220 = &local_b8;
          local_1f8 = FMassArchetypeHandle::FMassArchetypeHandle
                                (local_220,(FMassArchetypeHandle *)&this->field_0x60);
          local_210 = &local_a8;
          local_208 = TSharedPtr<FMassEntityManager,1>::operator->
                                ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
          local_218 = local_2d8;
          local_1f0 = FMassEntityManager::GetArchetypeForEntity(local_208,local_210,local_2d8);
          ::FString::FString(&local_158,"Entity\'s archetype should be the Ints one");
          bVar1 = FTestHelpers::TestEqual<FMassArchetypeHandle,FMassArchetypeHandle>
                            (&local_158,local_1f0,local_1f8,local_200);
          local_2e1 = !bVar1;
          local_2c0 = (uint)(byte)local_2e1;
          ::FString::~FString(&local_158);
          if (local_2e1 == '\0') {
            local_1e0 = FAITestBase::GetTestRunner((FAITestBase *)this);
            local_1e8 = TSharedPtr<FMassEntityManager,1>::operator->
                                  ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
            local_2a8 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                                  (local_1e8,(FMassArchetypeHandle *)&this->field_0x60);
            ::FString::FString(&local_148,
                               "The created entity should have been added to the Ints archetype");
            bVar1 = FTestHelpers::TestEqual<int,int>(&local_148,local_2a8,1,local_1e0);
            local_2e0 = !bVar1;
            local_2bc = (uint)(byte)local_2e0;
            ::FString::~FString(&local_148);
            if (local_2e0 == '\0') {
              local_1c8 = FAITestBase::GetTestRunner((FAITestBase *)this);
              local_1d0 = TSharedPtr<FMassEntityManager,1>::operator->
                                    ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
              local_1d8 = local_2d8;
              pFVar5 = FMassEntityManager::GetFragmentDataChecked<FTestFragment_Int>
                                 (local_1d0,local_2d8);
              local_2a4 = pFVar5->Value;
              ::FString::FString(&local_138,
                                 "The entity should have the new component with the correct value set"
                                );
              bVar1 = FTestHelpers::TestEqual<int,int>(&local_138,local_2a4,0x1e240,local_1c8);
              local_2df = !bVar1;
              local_2b8 = (uint)(byte)local_2df;
              ::FString::~FString(&local_138);
              if (local_2df == '\0') {
                local_1b8 = TSharedPtr<FMassEntityManager,1>::operator->
                                      ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
                local_1c0 = local_2d8;
                FMassEntityManager::DestroyEntity(local_1b8,local_2d8);
                local_1b0 = FAITestBase::GetTestRunner((FAITestBase *)this);
                pFVar4 = TSharedPtr<FMassEntityManager,1>::operator->
                                   ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
                local_2a0 = FMassEntityManager::DebugGetEntityCount(pFVar4);
                ::FString::FString(&local_128,
                                   "There should not be any entity across the whole system");
                bVar1 = FTestHelpers::TestEqual<int,int>(&local_128,local_2a0,0,local_1b0);
                local_2de = !bVar1;
                local_2b4 = (uint)(byte)local_2de;
                ::FString::~FString(&local_128);
                if (local_2de == '\0') {
                  local_1a0 = FAITestBase::GetTestRunner((FAITestBase *)this);
                  local_1a8 = TSharedPtr<FMassEntityManager,1>::operator->
                                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
                  local_29c = FMassEntityManager::DebugGetArchetypeEntitiesCount
                                        (local_1a8,(FMassArchetypeHandle *)&this->field_0x50);
                  ::FString::FString(&local_118,"The original archetype should now have no entities"
                                    );
                  bVar1 = FTestHelpers::TestEqual<int,int>(&local_118,local_29c,0,local_1a0);
                  local_2dd = !bVar1;
                  local_2b0 = (uint)(byte)local_2dd;
                  ::FString::~FString(&local_118);
                  if (local_2dd == '\0') {
                    bVar1 = true;
                  }
                  else {
                    UE::AITestSuite::ConditionallyBreakOnTestFail();
                    bVar1 = false;
                  }
                }
                else {
                  UE::AITestSuite::ConditionallyBreakOnTestFail();
                  bVar1 = false;
                }
              }
              else {
                UE::AITestSuite::ConditionallyBreakOnTestFail();
                bVar1 = false;
              }
            }
            else {
              UE::AITestSuite::ConditionallyBreakOnTestFail();
              bVar1 = false;
            }
          }
          else {
            UE::AITestSuite::ConditionallyBreakOnTestFail();
            bVar1 = false;
          }
        }
        else {
          UE::AITestSuite::ConditionallyBreakOnTestFail();
          bVar1 = false;
        }
      }
      else {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        bVar1 = false;
      }
    }
    else {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      bVar1 = false;
    }
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    bVar1 = false;
  }
  return bVar1;
}

