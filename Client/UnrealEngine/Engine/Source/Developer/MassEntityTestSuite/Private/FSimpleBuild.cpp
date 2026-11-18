// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// operator() @ 147100410

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UE::Mass::Test::EntityBuilder::FSimpleBuild::InstantTest'::__l7::<lambda_1>::operator()(void *this)

{
  UE::Mass::FEntityBuilder::Commit(*(FEntityBuilder **)this);
  return;
}

// InstantTest @ 147189d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall UE::Mass::Test::EntityBuilder::FSimpleBuild::InstantTest(FSimpleBuild *this)

{
  bool bVar1;
  undefined1 auStack_fd8 [32];
  int local_fb8;
  int local_fb4;
  int local_fb0;
  char local_fac;
  char local_fab;
  char local_faa;
  char local_fa9;
  char local_fa8;
  char local_fa7;
  FScopeGuardSyntaxSupport local_fa6 [2];
  uint local_fa4;
  uint local_fa0;
  uint local_f9c;
  uint local_f98;
  uint local_f94;
  uint local_f90;
  int local_f8c;
  int local_f88;
  int local_f84;
  int local_f80;
  int local_f7c;
  int local_f78;
  int local_f74;
  int local_f70;
  int local_f6c;
  int local_f68;
  int local_f64;
  int local_f60;
  int local_f5c;
  int local_f58;
  int local_f54;
  int local_f50;
  int local_f4c;
  int local_f48;
  FMassEntityManager *local_f40;
  FMassEntityManager *local_f38;
  FMassEntityManager *local_f30;
  FAutomationTestBase *local_f28;
  FMassEntityManager *local_f20;
  FMassEntityManager *local_f18;
  FEntityBuilder *local_f10;
  FEntityBuilder **local_f08;
  <lambda_1> local_f00;
  FMassEntityManager *local_ef8;
  FAutomationTestBase *local_ef0;
  FMassEntityManager *local_ee8;
  FMassEntityManager *local_ee0;
  FMassEntityManager *local_ed8;
  FAutomationTestBase *local_ed0;
  FMassEntityManager *local_ec8;
  FMassEntityManager *local_ec0;
  FMassEntityManager *local_eb8;
  FAutomationTestBase *local_eb0;
  FMassEntityManager *local_ea8;
  FMassEntityManager *local_ea0;
  FMassEntityManager *local_e98;
  FAutomationTestBase *local_e90;
  FMassEntityManager *local_e88;
  FMassEntityManager *local_e80;
  FMassEntityManager *local_e78;
  FAutomationTestBase *local_e70;
  FMassEntityManager *local_e68;
  FString local_e60;
  FString local_e50;
  FString local_e40;
  FString local_e30;
  FString local_e20;
  FString local_e10 [3];
  FEntityBuilder local_de0;
  FEntityBuilder local_c58;
  FEntityBuilder local_ad0;
  FEntityBuilder local_948;
  FEntityBuilder local_7c0;
  FEntityBuilder local_638;
  FEntityBuilder local_4b0;
  FEntityBuilder local_328;
  FEntityBuilder local_1a0;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_fd8;
  local_f40 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_fb0 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                        (local_f40,(FMassArchetypeHandle *)&this->field_0x60);
  local_fb8 = 1;
  local_fb4 = 0;
  local_f38 = *(FMassEntityManager **)&this->field_0x28;
  FEntityBuilder::FEntityBuilder(&local_ad0,local_f38);
  local_f8c = local_fb8;
  local_f88 = local_fb8;
  local_fb8 = local_fb8 + 1;
  FEntityBuilder::Add_GetRef<FTestFragment_Int,int>(&local_ad0,&local_f88);
  FEntityBuilder::Commit(&local_ad0);
  local_fb4 = 1;
  FEntityBuilder::~FEntityBuilder(&local_ad0);
  local_f28 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_f30 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_f84 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                        (local_f30,(FMassArchetypeHandle *)&this->field_0x60);
  local_f84 = local_f84 - local_fb0;
  ::FString::FString(&local_e60,"Number of entities created with basic use");
  bVar1 = FTestHelpers::TestEqual<int,int>(&local_e60,local_f84,local_fb4,local_f28);
  local_fac = !bVar1;
  local_fa4 = (uint)(byte)local_fac;
  ::FString::~FString(&local_e60);
  if (local_fac == '\0') {
    local_f20 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_fb0 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                          (local_f20,(FMassArchetypeHandle *)&this->field_0x60);
    local_f18 = *(FMassEntityManager **)&this->field_0x28;
    FEntityBuilder::FEntityBuilder(&local_948,local_f18);
    local_f10 = &local_948;
    local_f08 = &local_f10;
    ScopeExitSupport::FScopeGuardSyntaxSupport::
    operator+<_UE::Mass::Test::EntityBuilder::FSimpleBuild::InstantTest_::__l7::<lambda_1>_>
              (local_fa6,&local_f00);
    local_f80 = local_fb8;
    local_f7c = local_fb8;
    local_fb8 = local_fb8 + 1;
    FEntityBuilder::Add_GetRef<FTestFragment_Int,int>(&local_948,&local_f7c);
    ScopeExitSupport::
    TScopeGuard<`UE::Mass::Test::EntityBuilder::FSimpleBuild::InstantTest'::__l7::<lambda_1>_>::
    ~TScopeGuard<_UE::Mass::Test::EntityBuilder::FSimpleBuild::InstantTest_::__l7::<lambda_1>_>
              (&local_f00);
    FEntityBuilder::~FEntityBuilder(&local_948);
    local_fb4 = 1;
    local_ef0 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_ef8 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_f78 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                          (local_ef8,(FMassArchetypeHandle *)&this->field_0x60);
    local_f78 = local_f78 - local_fb0;
    ::FString::FString(&local_e50,"Number of entities created with ON_SCOPE_EXIT");
    bVar1 = FTestHelpers::TestEqual<int,int>(&local_e50,local_f78,local_fb4,local_ef0);
    local_fab = !bVar1;
    local_fa0 = (uint)(byte)local_fab;
    ::FString::~FString(&local_e50);
    if (local_fab == '\0') {
      local_ee8 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      local_fb0 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                            (local_ee8,(FMassArchetypeHandle *)&this->field_0x60);
      local_ee0 = *(FMassEntityManager **)&this->field_0x28;
      FScopedEntityBuilder::FScopedEntityBuilder<FMassEntityManager_&>
                ((FScopedEntityBuilder *)&local_638,local_ee0);
      local_f74 = local_fb8;
      local_f70 = local_fb8;
      local_fb8 = local_fb8 + 1;
      FEntityBuilder::Add_GetRef<FTestFragment_Int,int>(&local_638,&local_f70);
      FScopedEntityBuilder::~FScopedEntityBuilder((FScopedEntityBuilder *)&local_638);
      local_fb4 = 1;
      local_ed0 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_ed8 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      local_f6c = FMassEntityManager::DebugGetArchetypeEntitiesCount
                            (local_ed8,(FMassArchetypeHandle *)&this->field_0x60);
      local_f6c = local_f6c - local_fb0;
      ::FString::FString(&local_e40,"Number of entities created with scoped builder");
      bVar1 = FTestHelpers::TestEqual<int,int>(&local_e40,local_f6c,local_fb4,local_ed0);
      local_faa = !bVar1;
      local_f9c = (uint)(byte)local_faa;
      ::FString::~FString(&local_e40);
      if (local_faa == '\0') {
        local_ec8 = TSharedPtr<FMassEntityManager,1>::operator->
                              ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
        local_fb0 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                              (local_ec8,(FMassArchetypeHandle *)&this->field_0x60);
        local_ec0 = *(FMassEntityManager **)&this->field_0x28;
        FScopedEntityBuilder::FScopedEntityBuilder<FMassEntityManager_&>
                  ((FScopedEntityBuilder *)&local_7c0,local_ec0);
        local_f68 = local_fb8;
        local_f64 = local_fb8;
        local_fb8 = local_fb8 + 1;
        FEntityBuilder::Add_GetRef<FTestFragment_Int,int>(&local_7c0,&local_f64);
        FEntityBuilder::FEntityBuilder(&local_4b0,&local_7c0);
        FEntityBuilder::Commit(&local_4b0);
        FEntityBuilder::~FEntityBuilder(&local_4b0);
        FScopedEntityBuilder::~FScopedEntityBuilder((FScopedEntityBuilder *)&local_7c0);
        local_fb4 = 2;
        local_eb0 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_eb8 = TSharedPtr<FMassEntityManager,1>::operator->
                              ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
        local_f60 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                              (local_eb8,(FMassArchetypeHandle *)&this->field_0x60);
        local_f60 = local_f60 - local_fb0;
        ::FString::FString(&local_e30,
                           "Number of entities created with with a scoped builder and its regular copy"
                          );
        bVar1 = FTestHelpers::TestEqual<int,int>(&local_e30,local_f60,local_fb4,local_eb0);
        local_fa9 = !bVar1;
        local_f98 = (uint)(byte)local_fa9;
        ::FString::~FString(&local_e30);
        if (local_fa9 == '\0') {
          local_ea8 = TSharedPtr<FMassEntityManager,1>::operator->
                                ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
          local_fb0 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                                (local_ea8,(FMassArchetypeHandle *)&this->field_0x60);
          local_ea0 = *(FMassEntityManager **)&this->field_0x28;
          FEntityBuilder::FEntityBuilder(&local_de0,local_ea0);
          local_f5c = local_fb8;
          local_f58 = local_fb8;
          local_fb8 = local_fb8 + 1;
          FEntityBuilder::Add_GetRef<FTestFragment_Int,int>(&local_de0,&local_f58);
          FEntityBuilder::Commit(&local_de0);
          FEntityBuilder::FEntityBuilder(&local_1a0,&local_de0);
          FEntityBuilder::~FEntityBuilder(&local_1a0);
          FEntityBuilder::~FEntityBuilder(&local_de0);
          local_fb4 = 1;
          local_e90 = FAITestBase::GetTestRunner((FAITestBase *)this);
          local_e98 = TSharedPtr<FMassEntityManager,1>::operator->
                                ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
          local_f54 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                                (local_e98,(FMassArchetypeHandle *)&this->field_0x60);
          local_f54 = local_f54 - local_fb0;
          ::FString::FString(&local_e20,
                             "Number of entities created with Commit and an abandoned copy of a builder"
                            );
          bVar1 = FTestHelpers::TestEqual<int,int>(&local_e20,local_f54,local_fb4,local_e90);
          local_fa8 = !bVar1;
          local_f94 = (uint)(byte)local_fa8;
          ::FString::~FString(&local_e20);
          if (local_fa8 == '\0') {
            local_e88 = TSharedPtr<FMassEntityManager,1>::operator->
                                  ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
            local_fb0 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                                  (local_e88,(FMassArchetypeHandle *)&this->field_0x60);
            local_e80 = *(FMassEntityManager **)&this->field_0x28;
            FEntityBuilder::FEntityBuilder(&local_c58,local_e80);
            local_f50 = local_fb8;
            local_f4c = local_fb8;
            local_fb8 = local_fb8 + 1;
            FEntityBuilder::Add_GetRef<FTestFragment_Int,int>(&local_c58,&local_f4c);
            FEntityBuilder::FEntityBuilder(&local_328,&local_c58);
            FEntityBuilder::Commit(&local_328);
            FEntityBuilder::Reset(&local_c58,true);
            FEntityBuilder::~FEntityBuilder(&local_328);
            FEntityBuilder::~FEntityBuilder(&local_c58);
            local_fb4 = 1;
            local_e70 = FAITestBase::GetTestRunner((FAITestBase *)this);
            local_e78 = TSharedPtr<FMassEntityManager,1>::operator->
                                  ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
            local_f48 = FMassEntityManager::DebugGetArchetypeEntitiesCount
                                  (local_e78,(FMassArchetypeHandle *)&this->field_0x60);
            local_f48 = local_f48 - local_fb0;
            ::FString::FString(local_e10,
                               "Number of entities created with committed copy and abandoned original builder"
                              );
            bVar1 = FTestHelpers::TestEqual<int,int>(local_e10,local_f48,local_fb4,local_e70);
            local_fa7 = !bVar1;
            local_f90 = (uint)(byte)local_fa7;
            ::FString::~FString(local_e10);
            if (local_fa7 == '\0') {
              local_e68 = TSharedPtr<FMassEntityManager,1>::operator->
                                    ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
              FMassEntityManager::DebugGetArchetypeEntitiesCount
                        (local_e68,(FMassArchetypeHandle *)&this->field_0x60);
              bVar1 = true;
            }
            else {
              AITestSuite::ConditionallyBreakOnTestFail();
              bVar1 = false;
            }
          }
          else {
            AITestSuite::ConditionallyBreakOnTestFail();
            bVar1 = false;
          }
        }
        else {
          AITestSuite::ConditionallyBreakOnTestFail();
          bVar1 = false;
        }
      }
      else {
        AITestSuite::ConditionallyBreakOnTestFail();
        bVar1 = false;
      }
    }
    else {
      AITestSuite::ConditionallyBreakOnTestFail();
      bVar1 = false;
    }
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    bVar1 = false;
  }
  return bVar1;
}

