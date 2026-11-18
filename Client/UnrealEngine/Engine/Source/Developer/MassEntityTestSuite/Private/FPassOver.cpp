// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// operator() @ 147100520

void __thiscall
`UE::Mass::Test::EntityBuilder::FPassOver::InstantTest'::__l50::<lambda_1>::operator()(void *this)

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

// InstantTest @ 147173240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall UE::Mass::Test::EntityBuilder::FPassOver::InstantTest(FPassOver *this)

{
  bool bVar1;
  undefined1 auStack_fe8 [32];
  bool local_fc8;
  bool local_fc7;
  char local_fc6;
  undefined1 local_fc5;
  bool local_fc4;
  char local_fc3;
  undefined1 local_fc2;
  bool local_fc1;
  char local_fc0;
  undefined1 local_fbf;
  bool local_fbe;
  char local_fbd;
  undefined1 local_fbc;
  bool local_fbb;
  char local_fba;
  undefined1 local_fb9;
  bool local_fb8;
  char local_fb7;
  undefined1 local_fb6;
  char local_fb5;
  undefined1 local_fb4;
  bool local_fb3;
  char local_fb2;
  undefined1 local_fb1;
  bool local_fb0;
  char local_faf;
  undefined1 local_fae;
  bool local_fad;
  char local_fac;
  undefined1 local_fab;
  bool local_faa;
  char local_fa9;
  undefined1 local_fa8;
  bool local_fa7;
  char local_fa6;
  undefined1 local_fa5;
  bool local_fa4;
  char local_fa3;
  undefined1 local_fa2;
  bool local_fa1;
  char local_fa0;
  undefined1 local_f9f;
  FScopeGuardSyntaxSupport local_f9e [2];
  uint local_f9c;
  uint local_f98;
  uint local_f94;
  uint local_f90;
  uint local_f8c;
  uint local_f88;
  uint local_f84;
  uint local_f80;
  uint local_f7c;
  uint local_f78;
  uint local_f74;
  uint local_f70;
  uint local_f6c;
  uint local_f68;
  FMassEntityHandle local_f60;
  FMassEntityHandle local_f58;
  FMassEntityHandle local_f50;
  FMassEntityHandle local_f48;
  FMassEntityHandle local_f40;
  FMassEntityHandle local_f38;
  FMassEntityHandle local_f30;
  FMassEntityManager *local_f28;
  FMassEntityManager *local_f20;
  FMassEntityHandle local_f18;
  FMassEntityHandle local_f10;
  FMassEntityManager *local_f08;
  FAutomationTestBase *local_f00;
  FMassEntityHandle local_ef8;
  FMassEntityManager *local_ef0;
  FAutomationTestBase *local_ee8;
  FMassEntityManager *local_ee0;
  FMassEntityManager *local_ed8;
  FMassEntityHandle local_ed0;
  FMassEntityManager *local_ec8;
  FAutomationTestBase *local_ec0;
  FMassEntityHandle local_eb8;
  FMassEntityManager *local_eb0;
  FAutomationTestBase *local_ea8;
  FMassEntityHandle local_ea0;
  FMassEntityManager *local_e98;
  FAutomationTestBase *local_e90;
  FMassEntityManager *local_e88;
  FMassEntityManager *local_e80;
  FMassEntityHandle local_e78;
  FMassEntityManager *local_e70;
  FAutomationTestBase *local_e68;
  FMassEntityHandle local_e60;
  FMassEntityManager *local_e58;
  FAutomationTestBase *local_e50;
  FMassEntityHandle local_e48;
  FMassEntityManager *local_e40;
  FAutomationTestBase *local_e38;
  FMassEntityHandle local_e30;
  FMassEntityManager *local_e28;
  FAutomationTestBase *local_e20;
  FMassEntityManager *local_e18;
  FMassEntityManager *local_e10;
  FMassEntityHandle local_e08;
  FMassEntityManager *local_e00;
  FAutomationTestBase *local_df8;
  FMassEntityHandle local_df0;
  FMassEntityManager *local_de8;
  FAutomationTestBase *local_de0;
  FMassEntityHandle local_dd8;
  FMassEntityManager *local_dd0;
  FAutomationTestBase *local_dc8;
  FMassEntityHandle local_dc0;
  FMassEntityManager *local_db8;
  FAutomationTestBase *local_db0;
  FString *local_da8;
  FString *local_da0;
  FAutomationTestBase *local_d98;
  FPassOver *local_d90;
  FPassOver **local_d88;
  <lambda_1> local_d80;
  FMassEntityHandle local_d78;
  FAutomationTestBase *local_d70;
  FString local_d68;
  FString local_d58;
  FString local_d48;
  FString local_d38;
  FString local_d28;
  FString local_d18;
  FString local_d08;
  FString local_cf8;
  FString local_ce8;
  FString local_cd8;
  FString local_cc8;
  FString local_cb8;
  FString local_ca8;
  FString local_c98 [3];
  FString local_c60;
  FEntityBuilder local_c50;
  FEntityBuilder local_ac8;
  FEntityBuilder local_940;
  FEntityBuilder local_7b8;
  FEntityBuilder local_630;
  FEntityBuilder local_4a8;
  FEntityBuilder local_320;
  FEntityBuilder local_198;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_fe8;
  local_f28 = *(FMassEntityManager **)&this->field_0x28;
  FEntityBuilder::FEntityBuilder(&local_7b8,local_f28);
  FEntityBuilder::Add<FTestFragment_Int>(&local_7b8);
  FEntityBuilder::GetEntityHandle(&local_7b8);
  FMassEntityHandle::FMassEntityHandle(&local_f50);
  local_f20 = *(FMassEntityManager **)&this->field_0x28;
  FEntityBuilder::FEntityBuilder(&local_630,local_f20);
  FEntityBuilder::Add<FTestFragment_Float>(&local_630);
  local_f50 = FEntityBuilder::GetEntityHandle(&local_630);
  local_f50 = *(FMassEntityHandle *)local_f50;
  FEntityBuilder::operator=(&local_7b8,&local_630);
  FEntityBuilder::~FEntityBuilder(&local_630);
  local_f00 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_f08 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_f10 = local_f18;
  local_fc8 = FMassEntityManager::IsEntityValid(local_f08,local_f18);
  local_fc8 = !local_fc8;
  ::FString::FString(&local_d68,"The original entity is invalid");
  bVar1 = FAutomationTestBase::TestTrue(local_f00,&local_d68,local_fc8);
  local_fc6 = !bVar1;
  local_f9c = (uint)(byte)local_fc6;
  ::FString::~FString(&local_d68);
  if (local_fc6 == '\0') {
    local_ee8 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_ef0 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_ef8 = local_f50;
    local_fc4 = FMassEntityManager::IsEntityValid(local_ef0,local_f50);
    ::FString::FString(&local_d58,"The passed-over entity entity is valid");
    bVar1 = FAutomationTestBase::TestTrue(local_ee8,&local_d58,local_fc4);
    local_fc3 = !bVar1;
    local_f98 = (uint)(byte)local_fc3;
    ::FString::~FString(&local_d58);
    if (local_fc3 == '\0') {
      FEntityBuilder::~FEntityBuilder(&local_7b8);
      local_ee0 = *(FMassEntityManager **)&this->field_0x28;
      FEntityBuilder::FEntityBuilder(&local_940,local_ee0);
      FEntityBuilder::Add<FTestFragment_Int>(&local_940);
      FEntityBuilder::Commit(&local_940);
      FMassEntityHandle::FMassEntityHandle(&local_f40);
      local_ed8 = *(FMassEntityManager **)&this->field_0x28;
      FEntityBuilder::FEntityBuilder(&local_4a8,local_ed8);
      FEntityBuilder::Add<FTestFragment_Float>(&local_4a8);
      local_f40 = FEntityBuilder::GetEntityHandle(&local_4a8);
      local_f40 = *(FMassEntityHandle *)local_f40;
      FEntityBuilder::operator=(&local_940,&local_4a8);
      FEntityBuilder::~FEntityBuilder(&local_4a8);
      local_ec0 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_ec8 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      local_ed0 = local_f48;
      local_fc1 = FMassEntityManager::IsEntityValid(local_ec8,local_f48);
      ::FString::FString(&local_d48,"The original entity is valid, since it was committed");
      bVar1 = FAutomationTestBase::TestTrue(local_ec0,&local_d48,local_fc1);
      local_fc0 = !bVar1;
      local_f94 = (uint)(byte)local_fc0;
      ::FString::~FString(&local_d48);
      if (local_fc0 == '\0') {
        local_ea8 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_eb0 = TSharedPtr<FMassEntityManager,1>::operator->
                              ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
        local_eb8 = local_f48;
        local_fbe = FMassEntityManager::IsEntityActive(local_eb0,local_f48);
        ::FString::FString(&local_d38,"The original entity is active");
        bVar1 = FAutomationTestBase::TestTrue(local_ea8,&local_d38,local_fbe);
        local_fbd = !bVar1;
        local_f90 = (uint)(byte)local_fbd;
        ::FString::~FString(&local_d38);
        if (local_fbd == '\0') {
          local_e90 = FAITestBase::GetTestRunner((FAITestBase *)this);
          local_e98 = TSharedPtr<FMassEntityManager,1>::operator->
                                ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
          local_ea0 = local_f40;
          local_fbb = FMassEntityManager::IsEntityValid(local_e98,local_f40);
          ::FString::FString(&local_d28,"The passed-over entity entity is valid");
          bVar1 = FAutomationTestBase::TestTrue(local_e90,&local_d28,local_fbb);
          local_fba = !bVar1;
          local_f8c = (uint)(byte)local_fba;
          ::FString::~FString(&local_d28);
          if (local_fba == '\0') {
            FEntityBuilder::~FEntityBuilder(&local_940);
            local_e88 = *(FMassEntityManager **)&this->field_0x28;
            FEntityBuilder::FEntityBuilder(&local_ac8,local_e88);
            FEntityBuilder::Add<FTestFragment_Int>(&local_ac8);
            FEntityBuilder::GetEntityHandle(&local_ac8);
            FMassEntityHandle::FMassEntityHandle(&local_f58);
            local_e80 = *(FMassEntityManager **)&this->field_0x28;
            FEntityBuilder::FEntityBuilder(&local_320,local_e80);
            FEntityBuilder::Add<FTestFragment_Float>(&local_320);
            local_f58 = FEntityBuilder::Commit(&local_320);
            local_f58 = *(FMassEntityHandle *)local_f58;
            FEntityBuilder::operator=(&local_ac8,&local_320);
            FEntityBuilder::~FEntityBuilder(&local_320);
            local_e68 = FAITestBase::GetTestRunner((FAITestBase *)this);
            local_e70 = TSharedPtr<FMassEntityManager,1>::operator->
                                  ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
            local_e78 = local_f38;
            local_fb8 = FMassEntityManager::IsEntityValid(local_e70,local_f38);
            ::FString::FString(&local_d18,"The original entity is valid");
            bVar1 = FAutomationTestBase::TestTrue(local_e68,&local_d18,local_fb8);
            local_fb7 = !bVar1;
            local_f88 = (uint)(byte)local_fb7;
            ::FString::~FString(&local_d18);
            if (local_fb7 == '\0') {
              local_e50 = FAITestBase::GetTestRunner((FAITestBase *)this);
              local_e58 = TSharedPtr<FMassEntityManager,1>::operator->
                                    ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
              local_e60 = local_f38;
              local_fc7 = FMassEntityManager::IsEntityActive(local_e58,local_f38);
              local_fc7 = !local_fc7;
              ::FString::FString(&local_d08,"The original entity is NOT active");
              bVar1 = FAutomationTestBase::TestTrue(local_e50,&local_d08,local_fc7);
              local_fb5 = !bVar1;
              local_f84 = (uint)(byte)local_fb5;
              ::FString::~FString(&local_d08);
              if (local_fb5 == '\0') {
                local_e38 = FAITestBase::GetTestRunner((FAITestBase *)this);
                local_e40 = TSharedPtr<FMassEntityManager,1>::operator->
                                      ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
                local_e48 = local_f58;
                local_fb3 = FMassEntityManager::IsEntityValid(local_e40,local_f58);
                ::FString::FString(&local_cf8,"The secondary entity entity is valid");
                bVar1 = FAutomationTestBase::TestTrue(local_e38,&local_cf8,local_fb3);
                local_fb2 = !bVar1;
                local_f80 = (uint)(byte)local_fb2;
                ::FString::~FString(&local_cf8);
                if (local_fb2 == '\0') {
                  local_e20 = FAITestBase::GetTestRunner((FAITestBase *)this);
                  local_e28 = TSharedPtr<FMassEntityManager,1>::operator->
                                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
                  local_e30 = local_f58;
                  local_fb0 = FMassEntityManager::IsEntityActive(local_e28,local_f58);
                  ::FString::FString(&local_ce8,"The secondary entity is active");
                  bVar1 = FAutomationTestBase::TestTrue(local_e20,&local_ce8,local_fb0);
                  local_faf = !bVar1;
                  local_f7c = (uint)(byte)local_faf;
                  ::FString::~FString(&local_ce8);
                  if (local_faf == '\0') {
                    FEntityBuilder::~FEntityBuilder(&local_ac8);
                    local_e18 = *(FMassEntityManager **)&this->field_0x28;
                    FEntityBuilder::FEntityBuilder(&local_c50,local_e18);
                    FEntityBuilder::Add<FTestFragment_Int>(&local_c50);
                    FEntityBuilder::Commit(&local_c50);
                    FMassEntityHandle::FMassEntityHandle(&local_f60);
                    local_e10 = *(FMassEntityManager **)&this->field_0x28;
                    FEntityBuilder::FEntityBuilder(&local_198,local_e10);
                    FEntityBuilder::Add<FTestFragment_Float>(&local_198);
                    local_f60 = FEntityBuilder::Commit(&local_198);
                    local_f60 = *(FMassEntityHandle *)local_f60;
                    FEntityBuilder::operator=(&local_c50,&local_198);
                    FEntityBuilder::~FEntityBuilder(&local_198);
                    local_df8 = FAITestBase::GetTestRunner((FAITestBase *)this);
                    local_e00 = TSharedPtr<FMassEntityManager,1>::operator->
                                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
                    local_e08 = local_f30;
                    local_fad = FMassEntityManager::IsEntityValid(local_e00,local_f30);
                    ::FString::FString(&local_cd8,"The original entity is valid");
                    bVar1 = FAutomationTestBase::TestTrue(local_df8,&local_cd8,local_fad);
                    local_fac = !bVar1;
                    local_f78 = (uint)(byte)local_fac;
                    ::FString::~FString(&local_cd8);
                    if (local_fac == '\0') {
                      local_de0 = FAITestBase::GetTestRunner((FAITestBase *)this);
                      local_de8 = TSharedPtr<FMassEntityManager,1>::operator->
                                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
                      local_df0 = local_f30;
                      local_faa = FMassEntityManager::IsEntityActive(local_de8,local_f30);
                      ::FString::FString(&local_cc8,"The original entity is active");
                      bVar1 = FAutomationTestBase::TestTrue(local_de0,&local_cc8,local_faa);
                      local_fa9 = !bVar1;
                      local_f74 = (uint)(byte)local_fa9;
                      ::FString::~FString(&local_cc8);
                      if (local_fa9 == '\0') {
                        local_dc8 = FAITestBase::GetTestRunner((FAITestBase *)this);
                        local_dd0 = TSharedPtr<FMassEntityManager,1>::operator->
                                              ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28
                                              );
                        local_dd8 = local_f60;
                        local_fa7 = FMassEntityManager::IsEntityValid(local_dd0,local_f60);
                        ::FString::FString(&local_cb8,"The secondary entity entity is valid");
                        bVar1 = FAutomationTestBase::TestTrue(local_dc8,&local_cb8,local_fa7);
                        local_fa6 = !bVar1;
                        local_f70 = (uint)(byte)local_fa6;
                        ::FString::~FString(&local_cb8);
                        if (local_fa6 == '\0') {
                          local_db0 = FAITestBase::GetTestRunner((FAITestBase *)this);
                          local_db8 = TSharedPtr<FMassEntityManager,1>::operator->
                                                ((TSharedPtr<FMassEntityManager,1> *)
                                                 &this->field_0x28);
                          local_dc0 = local_f60;
                          local_fa4 = FMassEntityManager::IsEntityActive(local_db8,local_f60);
                          ::FString::FString(&local_ca8,"The secondary entity is active");
                          bVar1 = FAutomationTestBase::TestTrue(local_db0,&local_ca8,local_fa4);
                          local_fa3 = !bVar1;
                          local_f6c = (uint)(byte)local_fa3;
                          ::FString::~FString(&local_ca8);
                          if (local_fa3 == '\0') {
                            local_d98 = FAITestBase::GetTestRunner((FAITestBase *)this);
                            local_da8 = &local_c60;
                            local_da0 = ::FString::FString(local_da8,
                                                           "Trying to commit an already committed");
                            FAutomationTestBase::AddExpectedErrorPlain
                                      (local_d98,local_da0,Contains,1);
                            local_d88 = &local_d90;
                            local_d90 = this;
                            ScopeExitSupport::FScopeGuardSyntaxSupport::
                            operator+<_UE::Mass::Test::EntityBuilder::FPassOver::InstantTest_::__l50::<lambda_1>_>
                                      (local_f9e,&local_d80);
                            AITestSuite::TestsInProgress = AITestSuite::TestsInProgress + 1;
                            FEntityBuilder::Commit(&local_c50);
                            ScopeExitSupport::
                            TScopeGuard<`UE::Mass::Test::EntityBuilder::FPassOver::InstantTest'::__l50::<lambda_1>_>
                            ::
                            ~TScopeGuard<_UE::Mass::Test::EntityBuilder::FPassOver::InstantTest_::__l50::<lambda_1>_>
                                      (&local_d80);
                            FEntityBuilder::GetEntityHandle(&local_c50);
                            local_d70 = FAITestBase::GetTestRunner((FAITestBase *)this);
                            local_fa1 = FMassEntityHandle::operator==(&local_d78,local_f60);
                            ::FString::FString(local_c98,
                                               "The entity handle is the same as the builder\'s that has been moved"
                                              );
                            bVar1 = FAutomationTestBase::TestTrue(local_d70,local_c98,local_fa1);
                            local_fa0 = !bVar1;
                            local_f68 = (uint)(byte)local_fa0;
                            ::FString::~FString(local_c98);
                            if (local_fa0 == '\0') {
                              FEntityBuilder::~FEntityBuilder(&local_c50);
                              local_fc5 = 1;
                            }
                            else {
                              AITestSuite::ConditionallyBreakOnTestFail();
                              local_f9f = 0;
                              FEntityBuilder::~FEntityBuilder(&local_c50);
                              local_fc5 = local_f9f;
                            }
                          }
                          else {
                            AITestSuite::ConditionallyBreakOnTestFail();
                            local_fa2 = 0;
                            FEntityBuilder::~FEntityBuilder(&local_c50);
                            local_fc5 = local_fa2;
                          }
                        }
                        else {
                          AITestSuite::ConditionallyBreakOnTestFail();
                          local_fa5 = 0;
                          FEntityBuilder::~FEntityBuilder(&local_c50);
                          local_fc5 = local_fa5;
                        }
                      }
                      else {
                        AITestSuite::ConditionallyBreakOnTestFail();
                        local_fa8 = 0;
                        FEntityBuilder::~FEntityBuilder(&local_c50);
                        local_fc5 = local_fa8;
                      }
                    }
                    else {
                      AITestSuite::ConditionallyBreakOnTestFail();
                      local_fab = 0;
                      FEntityBuilder::~FEntityBuilder(&local_c50);
                      local_fc5 = local_fab;
                    }
                  }
                  else {
                    AITestSuite::ConditionallyBreakOnTestFail();
                    local_fae = 0;
                    FEntityBuilder::~FEntityBuilder(&local_ac8);
                    local_fc5 = local_fae;
                  }
                }
                else {
                  AITestSuite::ConditionallyBreakOnTestFail();
                  local_fb1 = 0;
                  FEntityBuilder::~FEntityBuilder(&local_ac8);
                  local_fc5 = local_fb1;
                }
              }
              else {
                AITestSuite::ConditionallyBreakOnTestFail();
                local_fb4 = 0;
                FEntityBuilder::~FEntityBuilder(&local_ac8);
                local_fc5 = local_fb4;
              }
            }
            else {
              AITestSuite::ConditionallyBreakOnTestFail();
              local_fb6 = 0;
              FEntityBuilder::~FEntityBuilder(&local_ac8);
              local_fc5 = local_fb6;
            }
          }
          else {
            AITestSuite::ConditionallyBreakOnTestFail();
            local_fb9 = 0;
            FEntityBuilder::~FEntityBuilder(&local_940);
            local_fc5 = local_fb9;
          }
        }
        else {
          AITestSuite::ConditionallyBreakOnTestFail();
          local_fbc = 0;
          FEntityBuilder::~FEntityBuilder(&local_940);
          local_fc5 = local_fbc;
        }
      }
      else {
        AITestSuite::ConditionallyBreakOnTestFail();
        local_fbf = 0;
        FEntityBuilder::~FEntityBuilder(&local_940);
        local_fc5 = local_fbf;
      }
    }
    else {
      AITestSuite::ConditionallyBreakOnTestFail();
      local_fc2 = 0;
      FEntityBuilder::~FEntityBuilder(&local_7b8);
      local_fc5 = local_fc2;
    }
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    local_fc5 = 0;
    FEntityBuilder::~FEntityBuilder(&local_7b8);
  }
  return (bool)local_fc5;
}

