// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 1471600f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassEntityTest::FEntityTest_ReserveAPreviouslyBuiltEntity::InstantTest
          (FEntityTest_ReserveAPreviouslyBuiltEntity *this)

{
  bool bVar1;
  FMassEntityManager *pFVar2;
  longlong lVar3;
  TReferenceControllerBase<1> *pTVar4;
  FMassArchetypeSharedFragmentValues *pFVar5;
  undefined1 auStack_3f8 [32];
  char local_3d8;
  char local_3d7;
  char local_3d6;
  bool local_3d5;
  char local_3d4;
  bool local_3d3;
  char local_3d2;
  char local_3d1;
  char local_3d0;
  bool local_3cf;
  char local_3ce;
  char local_3cd;
  char local_3cc;
  char local_3cb;
  FMassEntityHandle local_3c8;
  uint local_3c0;
  uint local_3bc;
  uint local_3b8;
  uint local_3b4;
  uint local_3b0;
  uint local_3ac;
  uint local_3a8;
  uint local_3a4;
  uint local_3a0;
  uint local_39c;
  uint local_398;
  int local_394;
  int local_390;
  int local_38c;
  int local_388;
  int local_384;
  FMassArchetypeHandle local_380;
  FMassEntityManager *local_370;
  FMassArchetypeHandle *local_368;
  FMassEntityHandle local_360;
  FMassArchetypeHandle *local_358;
  FMassEntityManager *local_350;
  FAutomationTestBase *local_348;
  FMassArchetypeHandle *local_340;
  FMassArchetypeHandle *local_338;
  FMassEntityHandle local_330;
  FMassEntityManager *local_328;
  FAutomationTestBase *local_320;
  FMassEntityManager *local_318;
  FAutomationTestBase *local_310;
  FMassEntityManager *local_308;
  FMassEntityHandle local_300;
  FMassEntityManager *local_2f8;
  FAutomationTestBase *local_2f0;
  FMassEntityHandle local_2e8;
  FMassEntityManager *local_2e0;
  FAutomationTestBase *local_2d8;
  FAutomationTestBase *local_2d0;
  FMassEntityHandle local_2c8;
  FMassArchetypeHandle *local_2c0;
  FMassEntityManager *local_2b8;
  FAutomationTestBase *local_2b0;
  FMassArchetypeHandle *local_2a8;
  FMassArchetypeHandle *local_2a0;
  FMassEntityHandle local_298;
  FMassEntityManager *local_290;
  FMassEntityHandle local_288;
  FMassEntityManager *local_280;
  FAutomationTestBase *local_278;
  FMassArchetypeHandle *local_270;
  FMassEntityHandle local_268;
  FMassArchetypeHandle *local_260;
  FMassEntityManager *local_258;
  FAutomationTestBase *local_250;
  FMassArchetypeHandle *local_248;
  FMassArchetypeHandle *local_240;
  FMassEntityHandle local_238;
  FMassEntityManager *local_230;
  FAutomationTestBase *local_228;
  FMassEntityManager *local_220;
  FAutomationTestBase *local_218;
  FString local_210;
  FString local_200;
  FString local_1f0;
  FString local_1e0;
  FString local_1d0;
  FString local_1c0;
  FString local_1b0;
  FString local_1a0;
  FString local_190;
  FString local_180;
  FString local_170;
  FMassArchetypeHandle local_160;
  FMassArchetypeHandle local_150;
  TReferenceControllerBase<1> local_140;
  FMassArchetypeHandle local_130;
  FMassArchetypeHandle local_120;
  FMassArchetypeHandle local_110;
  FMassArchetypeSharedFragmentValues local_f8;
  FMassArchetypeSharedFragmentValues local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_3f8;
  local_370 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar5 = &local_f8;
  for (lVar3 = 0x68; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&pFVar5->HashCache = 0;
    pFVar5 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar5->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_f8);
  FMassEntityManager::CreateEntity
            (local_370,&local_380,(FMassArchetypeSharedFragmentValues *)&this->field_0x60);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_f8);
  local_348 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_368 = &local_160;
  local_340 = FMassArchetypeHandle::FMassArchetypeHandle
                        (local_368,(FMassArchetypeHandle *)&this->field_0x60);
  local_358 = &local_150;
  local_350 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_360 = (FMassEntityHandle)local_380.DataPtr.Object;
  local_338 = FMassEntityManager::GetArchetypeForEntity
                        (local_350,local_358,(FMassEntityHandle)local_380.DataPtr.Object);
  ::FString::FString(&local_210,"The entity should get associated to the right archetype");
  bVar1 = FTestHelpers::TestEqual<FMassArchetypeHandle,FMassArchetypeHandle>
                    (&local_210,local_338,local_340,local_348);
  local_3d8 = !bVar1;
  local_398 = (uint)(byte)local_3d8;
  ::FString::~FString(&local_210);
  if (local_3d8 == '\0') {
    local_328 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_330 = (FMassEntityHandle)local_380.DataPtr.Object;
    FMassEntityManager::DestroyEntity(local_328,(FMassEntityHandle)local_380.DataPtr.Object);
    local_320 = FAITestBase::GetTestRunner((FAITestBase *)this);
    pFVar2 = TSharedPtr<FMassEntityManager,1>::operator->
                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_384 = FMassEntityManager::DebugGetEntityCount(pFVar2);
    ::FString::FString(&local_200,"There should not be any entity across the whole system");
    bVar1 = FTestHelpers::TestEqual<int,int>(&local_200,local_384,0,local_320);
    local_3d7 = !bVar1;
    local_3c0 = (uint)(byte)local_3d7;
    ::FString::~FString(&local_200);
    if (local_3d7 == '\0') {
      local_310 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_318 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      local_394 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                            (local_318,(FMassArchetypeHandle *)&this->field_0x60);
      ::FString::FString(&local_1f0,"The original archetype should now have no entities");
      bVar1 = FTestHelpers::TestEqual<int,int>(&local_1f0,local_394,0,local_310);
      local_3d6 = !bVar1;
      local_3bc = (uint)(byte)local_3d6;
      ::FString::~FString(&local_1f0);
      if (local_3d6 == '\0') {
        local_308 = TSharedPtr<FMassEntityManager,1>::operator->
                              ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
        FMassEntityManager::ReserveEntity(local_308);
        local_2f0 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_2f8 = TSharedPtr<FMassEntityManager,1>::operator->
                              ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
        local_300 = local_3c8;
        local_3d5 = FMassEntityManager::IsEntityValid(local_2f8,local_3c8);
        ::FString::FString(&local_1e0,"The reserved entity should be a valid entity");
        bVar1 = FAutomationTestBase::TestTrue(local_2f0,&local_1e0,local_3d5);
        local_3d4 = !bVar1;
        local_3b8 = (uint)(byte)local_3d4;
        ::FString::~FString(&local_1e0);
        if (local_3d4 == '\0') {
          local_2d8 = FAITestBase::GetTestRunner((FAITestBase *)this);
          local_2e0 = TSharedPtr<FMassEntityManager,1>::operator->
                                ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
          local_2e8 = local_3c8;
          local_3d3 = FMassEntityManager::IsEntityBuilt(local_2e0,local_3c8);
          ::FString::FString(&local_1d0,"The reserved entity should not be a valid entity");
          bVar1 = FAutomationTestBase::TestFalse(local_2d8,&local_1d0,local_3d3);
          local_3d2 = !bVar1;
          local_3b4 = (uint)(byte)local_3d2;
          ::FString::~FString(&local_1d0);
          if (local_3d2 == '\0') {
            local_2d0 = FAITestBase::GetTestRunner((FAITestBase *)this);
            pFVar2 = TSharedPtr<FMassEntityManager,1>::operator->
                               ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
            local_390 = FMassEntityManager::DebugGetEntityCount(pFVar2);
            ::FString::FString(&local_1c0,"There should only be one entity across the whole system")
            ;
            bVar1 = FTestHelpers::TestEqual<int,int>(&local_1c0,local_390,1,local_2d0);
            local_3d1 = !bVar1;
            local_3b0 = (uint)(byte)local_3d1;
            ::FString::~FString(&local_1c0);
            if (local_3d1 == '\0') {
              local_2b0 = FAITestBase::GetTestRunner((FAITestBase *)this);
              local_380.DataPtr.SharedReferenceCount.ReferenceController = &local_140;
              pTVar4 = local_380.DataPtr.SharedReferenceCount.ReferenceController;
              for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
                *(undefined1 *)&((TSharedPtr<FMassArchetypeData,1> *)&pTVar4->_padding_)->Object = 0
                ;
                pTVar4 = (TReferenceControllerBase<1> *)
                         ((longlong)
                          &((TSharedPtr<FMassArchetypeData,1> *)&pTVar4->_padding_)->Object + 1);
              }
              local_2a8 = FMassArchetypeHandle::FMassArchetypeHandle
                                    ((FMassArchetypeHandle *)
                                     local_380.DataPtr.SharedReferenceCount.ReferenceController);
              local_2c0 = &local_130;
              local_2b8 = TSharedPtr<FMassEntityManager,1>::operator->
                                    ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
              local_2c8 = local_3c8;
              local_2a0 = FMassEntityManager::GetArchetypeForEntity(local_2b8,local_2c0,local_3c8);
              ::FString::FString(&local_1b0,"The entity should not get associated to any archetype")
              ;
              bVar1 = FTestHelpers::TestEqual<FMassArchetypeHandle,FMassArchetypeHandle>
                                (&local_1b0,local_2a0,local_2a8,local_2b0);
              local_3d0 = !bVar1;
              local_3ac = (uint)(byte)local_3d0;
              ::FString::~FString(&local_1b0);
              if (local_3d0 == '\0') {
                local_290 = TSharedPtr<FMassEntityManager,1>::operator->
                                      ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
                pFVar5 = &local_88;
                for (lVar3 = 0x68; lVar3 != 0; lVar3 = lVar3 + -1) {
                  *(undefined1 *)&pFVar5->HashCache = 0;
                  pFVar5 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar5->HashCache + 1);
                }
                FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_88);
                local_298 = local_3c8;
                FMassEntityManager::BuildEntity
                          (local_290,local_3c8,(FMassArchetypeHandle *)&this->field_0x50,&local_88);
                FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
                local_278 = FAITestBase::GetTestRunner((FAITestBase *)this);
                local_280 = TSharedPtr<FMassEntityManager,1>::operator->
                                      ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
                local_288 = local_3c8;
                local_3cf = FMassEntityManager::IsEntityBuilt(local_280,local_3c8);
                ::FString::FString(&local_1a0,"The reserved entity should not be a valid entity");
                bVar1 = FAutomationTestBase::TestTrue(local_278,&local_1a0,local_3cf);
                local_3ce = !bVar1;
                local_3a8 = (uint)(byte)local_3ce;
                ::FString::~FString(&local_1a0);
                if (local_3ce == '\0') {
                  local_250 = FAITestBase::GetTestRunner((FAITestBase *)this);
                  local_270 = &local_120;
                  local_248 = FMassArchetypeHandle::FMassArchetypeHandle
                                        (local_270,(FMassArchetypeHandle *)&this->field_0x50);
                  local_260 = &local_110;
                  local_258 = TSharedPtr<FMassEntityManager,1>::operator->
                                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
                  local_268 = local_3c8;
                  local_240 = FMassEntityManager::GetArchetypeForEntity
                                        (local_258,local_260,local_3c8);
                  ::FString::FString(&local_190,
                                     "The entity should get associated to the right archetype");
                  bVar1 = FTestHelpers::TestEqual<FMassArchetypeHandle,FMassArchetypeHandle>
                                    (&local_190,local_240,local_248,local_250);
                  local_3cd = !bVar1;
                  local_3a4 = (uint)(byte)local_3cd;
                  ::FString::~FString(&local_190);
                  if (local_3cd == '\0') {
                    local_230 = TSharedPtr<FMassEntityManager,1>::operator->
                                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
                    local_238 = local_3c8;
                    FMassEntityManager::DestroyEntity(local_230,local_3c8);
                    local_228 = FAITestBase::GetTestRunner((FAITestBase *)this);
                    pFVar2 = TSharedPtr<FMassEntityManager,1>::operator->
                                       ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
                    local_38c = FMassEntityManager::DebugGetEntityCount(pFVar2);
                    ::FString::FString(&local_180,
                                       "There should not be any entity across the whole system");
                    bVar1 = FTestHelpers::TestEqual<int,int>(&local_180,local_38c,0,local_228);
                    local_3cc = !bVar1;
                    local_3a0 = (uint)(byte)local_3cc;
                    ::FString::~FString(&local_180);
                    if (local_3cc == '\0') {
                      local_218 = FAITestBase::GetTestRunner((FAITestBase *)this);
                      local_220 = TSharedPtr<FMassEntityManager,1>::operator->
                                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
                      local_388 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                                            (local_220,(FMassArchetypeHandle *)&this->field_0x50);
                      ::FString::FString(&local_170,
                                         "The original archetype should now have no entities");
                      bVar1 = FTestHelpers::TestEqual<int,int>(&local_170,local_388,0,local_218);
                      local_3cb = !bVar1;
                      local_39c = (uint)(byte)local_3cb;
                      ::FString::~FString(&local_170);
                      if (local_3cb == '\0') {
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

