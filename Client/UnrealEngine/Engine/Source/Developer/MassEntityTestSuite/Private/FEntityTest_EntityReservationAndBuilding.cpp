// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14715dce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityTest::FEntityTest_EntityReservationAndBuilding::InstantTest
          (FEntityTest_EntityReservationAndBuilding *this)

{
  bool bVar1;
  FMassEntityManager *pFVar2;
  longlong lVar3;
  FMassArchetypeSharedFragmentValues *pFVar4;
  undefined1 auStack_2a8 [32];
  bool local_288;
  char local_287;
  bool local_286;
  char local_285;
  bool local_284;
  char local_283;
  char local_282;
  char local_281;
  char local_280;
  char local_27f;
  char local_27e;
  char local_27d;
  FMassEntityHandle local_278;
  uint local_270;
  uint local_26c;
  uint local_268;
  uint local_264;
  uint local_260;
  uint local_25c;
  uint local_258;
  uint local_254;
  uint local_250;
  int local_24c;
  int local_248;
  int local_244;
  int local_240;
  int local_23c;
  int local_238;
  FMassEntityManager *local_230;
  FMassEntityHandle local_228;
  FMassEntityManager *local_220;
  FAutomationTestBase *local_218;
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
  FMassEntityManager *local_190;
  FAutomationTestBase *local_188;
  FMassEntityManager *local_180;
  FMassEntityManager *local_178;
  FAutomationTestBase *local_170;
  FMassEntityHandle local_168;
  FMassEntityManager *local_160;
  FAutomationTestBase *local_158;
  FMassEntityManager *local_150;
  FAutomationTestBase *local_148;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FMassArchetypeHandle local_b0;
  FMassArchetypeHandle local_a0;
  FMassArchetypeSharedFragmentValues local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  local_230 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::ReserveEntity(local_230);
  local_218 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_220 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_228 = local_278;
  local_288 = FMassEntityManager::IsEntityValid(local_220,local_278);
  ::FString::FString(&local_140,"The reserved entity should be a valid entity");
  bVar1 = FAutomationTestBase::TestTrue(local_218,&local_140,local_288);
  local_287 = !bVar1;
  local_270 = (uint)(byte)local_287;
  ::FString::~FString(&local_140);
  if (local_287 == '\0') {
    local_200 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_208 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_210 = local_278;
    local_286 = FMassEntityManager::IsEntityBuilt(local_208,local_278);
    ::FString::FString(&local_130,"The reserved entity should not be a valid entity");
    bVar1 = FAutomationTestBase::TestFalse(local_200,&local_130,local_286);
    local_285 = !bVar1;
    local_26c = (uint)(byte)local_285;
    ::FString::~FString(&local_130);
    if (local_285 == '\0') {
      local_1f0 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      pFVar4 = &local_88;
      for (lVar3 = 0x68; lVar3 != 0; lVar3 = lVar3 + -1) {
        *(undefined1 *)&pFVar4->HashCache = 0;
        pFVar4 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar4->HashCache + 1);
      }
      FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_88);
      local_1f8 = local_278;
      FMassEntityManager::BuildEntity
                (local_1f0,local_278,(FMassArchetypeHandle *)&this->field_0x50,&local_88);
      FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
      local_1d8 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_1e0 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      local_1e8 = local_278;
      local_284 = FMassEntityManager::IsEntityBuilt(local_1e0,local_278);
      ::FString::FString(&local_120,"The reserved entity should be a valid entity");
      bVar1 = FAutomationTestBase::TestTrue(local_1d8,&local_120,local_284);
      local_283 = !bVar1;
      local_268 = (uint)(byte)local_283;
      ::FString::~FString(&local_120);
      if (local_283 == '\0') {
        local_1d0 = FAITestBase::GetTestRunner((FAITestBase *)this);
        pFVar2 = TSharedPtr<FMassEntityManager,1>::operator->
                           ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
        local_24c = FMassEntityManager::DebugGetEntityCount(pFVar2);
        ::FString::FString(&local_110,"There should be one entity across the whole system");
        bVar1 = FTestHelpers::TestEqual<int,int>(&local_110,local_24c,1,local_1d0);
        local_282 = !bVar1;
        local_264 = (uint)(byte)local_282;
        ::FString::~FString(&local_110);
        if (local_282 == '\0') {
          local_1a8 = FAITestBase::GetTestRunner((FAITestBase *)this);
          local_1c8 = &local_b0;
          local_1a0 = FMassArchetypeHandle::FMassArchetypeHandle
                                (local_1c8,(FMassArchetypeHandle *)&this->field_0x50);
          local_1b8 = &local_a0;
          local_1b0 = TSharedPtr<FMassEntityManager,1>::operator->
                                ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
          local_1c0 = local_278;
          local_198 = FMassEntityManager::GetArchetypeForEntity(local_1b0,local_1b8,local_278);
          ::FString::FString(&local_100,"Entity\'s archetype should be the Float one");
          bVar1 = FTestHelpers::TestEqual<FMassArchetypeHandle,FMassArchetypeHandle>
                            (&local_100,local_198,local_1a0,local_1a8);
          local_281 = !bVar1;
          local_260 = (uint)(byte)local_281;
          ::FString::~FString(&local_100);
          if (local_281 == '\0') {
            local_188 = FAITestBase::GetTestRunner((FAITestBase *)this);
            local_190 = TSharedPtr<FMassEntityManager,1>::operator->
                                  ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
            local_248 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                                  (local_190,(FMassArchetypeHandle *)&this->field_0x50);
            ::FString::FString(&local_f0,
                               "The created entity should have been added to the Floats archetype");
            bVar1 = FTestHelpers::TestEqual<int,int>(&local_f0,local_248,1,local_188);
            local_280 = !bVar1;
            local_25c = (uint)(byte)local_280;
            ::FString::~FString(&local_f0);
            if (local_280 == '\0') {
              local_170 = FAITestBase::GetTestRunner((FAITestBase *)this);
              local_178 = TSharedPtr<FMassEntityManager,1>::operator->
                                    ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
              local_180 = TSharedPtr<FMassEntityManager,1>::operator->
                                    ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
              local_244 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                                    (local_180,(FMassArchetypeHandle *)&this->field_0x70);
              local_240 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                                    (local_178,(FMassArchetypeHandle *)&this->field_0x60);
              local_240 = local_240 + local_244;
              ::FString::FString(&local_e0,"Other archetypes should not get affected");
              bVar1 = FTestHelpers::TestEqual<int,int>(&local_e0,local_240,0,local_170);
              local_27f = !bVar1;
              local_258 = (uint)(byte)local_27f;
              ::FString::~FString(&local_e0);
              if (local_27f == '\0') {
                local_160 = TSharedPtr<FMassEntityManager,1>::operator->
                                      ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
                local_168 = local_278;
                FMassEntityManager::DestroyEntity(local_160,local_278);
                local_158 = FAITestBase::GetTestRunner((FAITestBase *)this);
                pFVar2 = TSharedPtr<FMassEntityManager,1>::operator->
                                   ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
                local_23c = FMassEntityManager::DebugGetEntityCount(pFVar2);
                ::FString::FString(&local_d0,
                                   "There should not be any entity across the whole system");
                bVar1 = FTestHelpers::TestEqual<int,int>(&local_d0,local_23c,0,local_158);
                local_27e = !bVar1;
                local_254 = (uint)(byte)local_27e;
                ::FString::~FString(&local_d0);
                if (local_27e == '\0') {
                  local_148 = FAITestBase::GetTestRunner((FAITestBase *)this);
                  local_150 = TSharedPtr<FMassEntityManager,1>::operator->
                                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
                  local_238 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                                        (local_150,(FMassArchetypeHandle *)&this->field_0x50);
                  ::FString::FString(&local_c0,"The original archetype should now have no entities")
                  ;
                  bVar1 = FTestHelpers::TestEqual<int,int>(&local_c0,local_238,0,local_148);
                  local_27d = !bVar1;
                  local_250 = (uint)(byte)local_27d;
                  ::FString::~FString(&local_c0);
                  if (local_27d == '\0') {
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

