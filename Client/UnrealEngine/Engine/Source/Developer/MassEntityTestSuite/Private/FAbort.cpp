// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147124340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall UE::Mass::Test::EntityBuilder::FAbort::InstantTest(FAbort *this)

{
  bool bVar1;
  TSharedRef<FMassEntityManager,1> *pTVar2;
  undefined1 auStack_448 [32];
  bool local_428;
  char local_427;
  undefined1 local_426;
  bool local_425;
  char local_424;
  undefined1 local_423;
  bool local_422;
  char local_421;
  undefined1 local_420;
  bool local_41f;
  char local_41e;
  uint local_41c;
  uint local_418;
  uint local_414;
  uint local_410;
  FMassEntityHandle local_408;
  FMassEntityHandle local_400;
  undefined1 *local_3f8;
  FMassEntityHandle local_3f0;
  FMassEntityManager *local_3e8;
  FAutomationTestBase *local_3e0;
  FMassEntityHandle local_3d8;
  FMassEntityManager *local_3d0;
  FAutomationTestBase *local_3c8;
  FMassEntityHandle local_3c0;
  FMassEntityManager *local_3b8;
  FAutomationTestBase *local_3b0;
  undefined1 *local_3a8;
  FMassEntityHandle local_3a0;
  FMassEntityManager *local_398;
  FAutomationTestBase *local_390;
  FString local_388;
  FString local_378;
  FString local_368;
  FString local_358;
  TSharedRef<FMassEntityManager,1> local_340;
  TSharedRef<FMassEntityManager,1> local_330;
  FEntityBuilder local_320;
  FEntityBuilder local_198;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_448;
  local_3f8 = &this->field_0x28;
  pTVar2 = TSharedPtr<FMassEntityManager,1>::ToSharedRef
                     ((TSharedPtr<FMassEntityManager,1> *)local_3f8,&local_340);
  FEntityBuilder::FEntityBuilder(&local_320,pTVar2);
  TSharedRef<FMassEntityManager,1>::~TSharedRef<FMassEntityManager,1>(&local_340);
  FEntityBuilder::Add<FTestFragment_Int>(&local_320);
  FEntityBuilder::GetEntityHandle(&local_320);
  local_3e8 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_3f0 = local_408;
  local_428 = FMassEntityManager::IsEntityValid(local_3e8,local_408);
  local_3e0 = FAITestBase::GetTestRunner((FAITestBase *)this);
  ::FString::FString(&local_388,"Before committing the entity handle is reserved");
  bVar1 = FAutomationTestBase::TestTrue(local_3e0,&local_388,local_428);
  local_427 = !bVar1;
  local_41c = (uint)(byte)local_427;
  ::FString::~FString(&local_388);
  if (local_427 == '\0') {
    local_3d0 = TSharedPtr<FMassEntityManager,1>::operator->
                          ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_3d8 = local_408;
    local_425 = FMassEntityManager::IsEntityActive(local_3d0,local_408);
    local_3c8 = FAITestBase::GetTestRunner((FAITestBase *)this);
    ::FString::FString(&local_378,"Before committing the entity is already created");
    bVar1 = FAutomationTestBase::TestFalse(local_3c8,&local_378,local_425);
    local_424 = !bVar1;
    local_418 = (uint)(byte)local_424;
    ::FString::~FString(&local_378);
    if (local_424 == '\0') {
      FEntityBuilder::Reset(&local_320,true);
      local_3b8 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      local_3c0 = local_408;
      local_422 = FMassEntityManager::IsEntityValid(local_3b8,local_408);
      local_3b0 = FAITestBase::GetTestRunner((FAITestBase *)this);
      ::FString::FString(&local_368,"After resetting the entity handle is still valid");
      bVar1 = FAutomationTestBase::TestFalse(local_3b0,&local_368,local_422);
      local_421 = !bVar1;
      local_414 = (uint)(byte)local_421;
      ::FString::~FString(&local_368);
      if (local_421 == '\0') {
        FEntityBuilder::~FEntityBuilder(&local_320);
        FMassEntityHandle::FMassEntityHandle(&local_400);
        local_3a8 = &this->field_0x28;
        pTVar2 = TSharedPtr<FMassEntityManager,1>::ToSharedRef
                           ((TSharedPtr<FMassEntityManager,1> *)local_3a8,&local_330);
        FEntityBuilder::FEntityBuilder(&local_198,pTVar2);
        TSharedRef<FMassEntityManager,1>::~TSharedRef<FMassEntityManager,1>(&local_330);
        FEntityBuilder::Add<FTestFragment_Int>(&local_198);
        local_400 = FEntityBuilder::GetEntityHandle(&local_198);
        local_400 = *(FMassEntityHandle *)local_400;
        FEntityBuilder::~FEntityBuilder(&local_198);
        local_398 = TSharedPtr<FMassEntityManager,1>::operator->
                              ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
        local_3a0 = local_400;
        local_41f = FMassEntityManager::IsEntityValid(local_398,local_400);
        local_390 = FAITestBase::GetTestRunner((FAITestBase *)this);
        ::FString::FString(&local_358,
                           "After builder\'s destruction without committing the entity handle is still valid"
                          );
        bVar1 = FAutomationTestBase::TestFalse(local_390,&local_358,local_41f);
        local_41e = !bVar1;
        local_410 = (uint)(byte)local_41e;
        ::FString::~FString(&local_358);
        if (local_41e == '\0') {
          local_426 = 1;
        }
        else {
          AITestSuite::ConditionallyBreakOnTestFail();
          local_426 = 0;
        }
      }
      else {
        AITestSuite::ConditionallyBreakOnTestFail();
        local_420 = 0;
        FEntityBuilder::~FEntityBuilder(&local_320);
        local_426 = local_420;
      }
    }
    else {
      AITestSuite::ConditionallyBreakOnTestFail();
      local_423 = 0;
      FEntityBuilder::~FEntityBuilder(&local_320);
      local_426 = local_423;
    }
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    local_426 = 0;
    FEntityBuilder::~FEntityBuilder(&local_320);
  }
  return (bool)local_426;
}

