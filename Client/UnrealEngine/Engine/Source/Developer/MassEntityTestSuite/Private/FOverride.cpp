// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147172c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall UE::Mass::Test::EntityBuilder::FOverride::InstantTest(FOverride *this)

{
  bool bVar1;
  undefined1 auStack_628 [32];
  char local_608;
  undefined1 local_607;
  char local_606;
  undefined1 local_605;
  char local_604;
  undefined1 local_603;
  bool local_602;
  char local_601;
  undefined1 local_600;
  bool local_5ff;
  char local_5fe;
  undefined1 local_5fd;
  undefined1 local_5fc;
  uint local_5f8;
  uint local_5f4;
  uint local_5f0;
  uint local_5ec;
  uint local_5e8;
  FMassEntityHandle local_5e0;
  FMassEntityHandle local_5d8;
  FMassEntityHandle local_5d0;
  FMassEntityManager *local_5c8;
  FMassEntityManager *local_5c0;
  FMassEntityHandle local_5b8;
  FMassEntityHandle local_5b0;
  FMassEntityHandle local_5a8;
  FAutomationTestBase *local_5a0;
  FMassEntityHandle local_598;
  FMassEntityHandle local_590;
  FMassEntityHandle local_588;
  FMassEntityHandle local_580;
  FMassEntityHandle local_578;
  FAutomationTestBase *local_570;
  FMassEntityHandle local_568;
  FMassEntityHandle local_560;
  FMassEntityHandle local_558;
  FMassEntityHandle local_550;
  FMassEntityHandle local_548;
  FAutomationTestBase *local_540;
  FMassEntityHandle local_538;
  FMassEntityHandle local_530;
  FMassEntityHandle local_528;
  FAutomationTestBase *local_520;
  FMassEntityHandle local_518;
  FAutomationTestBase *local_510;
  FString local_508;
  FString local_4f8;
  FString local_4e8;
  FString local_4d8;
  FString local_4c8;
  FEntityBuilder local_4b0;
  FEntityBuilder local_328;
  FEntityBuilder local_1a0;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_628;
  local_5c8 = *(FMassEntityManager **)&this->field_0x28;
  FEntityBuilder::FEntityBuilder(&local_1a0,local_5c8);
  FEntityBuilder::Add<FTestFragment_Int>(&local_1a0);
  local_5c0 = *(FMassEntityManager **)&this->field_0x28;
  FEntityBuilder::FEntityBuilder(&local_4b0,local_5c0);
  FEntityBuilder::Add<FTestFragment_Float>(&local_4b0);
  FEntityBuilder::FEntityBuilder(&local_328,&local_4b0);
  FEntityBuilder::GetEntityHandle(&local_1a0);
  FEntityBuilder::GetEntityHandle(&local_4b0);
  FEntityBuilder::GetEntityHandle(&local_328);
  local_5a0 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_5b8 = local_5e0;
  local_598 = local_5e0;
  local_5b0 = local_5d0;
  local_5a8 = local_5d0;
  local_590 = local_5d0;
  ::FString::FString(&local_508,"Entities reserved by different builders, A|B");
  bVar1 = FTestHelpers::TestNotEqual<FMassEntityHandle,FMassEntityHandle>
                    (&local_508,local_590,local_598,local_5a0);
  local_608 = !bVar1;
  local_5f8 = (uint)(byte)local_608;
  ::FString::~FString(&local_508);
  if (local_608 == '\0') {
    local_570 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_588 = local_5d8;
    local_568 = local_5d8;
    local_580 = local_5d0;
    local_578 = local_5d0;
    local_560 = local_5d0;
    ::FString::FString(&local_4f8,"Entities reserved by different builders, A|C");
    bVar1 = FTestHelpers::TestNotEqual<FMassEntityHandle,FMassEntityHandle>
                      (&local_4f8,local_560,local_568,local_570);
    local_606 = !bVar1;
    local_5f4 = (uint)(byte)local_606;
    ::FString::~FString(&local_4f8);
    if (local_606 == '\0') {
      local_540 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_558 = local_5d8;
      local_538 = local_5d8;
      local_550 = local_5e0;
      local_548 = local_5e0;
      local_530 = local_5e0;
      ::FString::FString(&local_4e8,"Entities reserved by different builders, B|C");
      bVar1 = FTestHelpers::TestNotEqual<FMassEntityHandle,FMassEntityHandle>
                        (&local_4e8,local_530,local_538,local_540);
      local_604 = !bVar1;
      local_5f0 = (uint)(byte)local_604;
      ::FString::~FString(&local_4e8);
      if (local_604 == '\0') {
        FEntityBuilder::operator=(&local_4b0,&local_1a0);
        FEntityBuilder::GetEntityHandle(&local_4b0);
        local_520 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_602 = FMassEntityHandle::operator==(&local_5e0,local_528);
        ::FString::FString(&local_4d8,
                           "The uncommitted (i.e. reserved) entity handle does not change with builder\'s config override"
                          );
        bVar1 = FAutomationTestBase::TestTrue(local_520,&local_4d8,local_602);
        local_601 = !bVar1;
        local_5ec = (uint)(byte)local_601;
        ::FString::~FString(&local_4d8);
        if (local_601 == '\0') {
          FEntityBuilder::Commit(&local_328);
          FEntityBuilder::operator=(&local_328,&local_1a0);
          FEntityBuilder::GetEntityHandle(&local_328);
          local_510 = FAITestBase::GetTestRunner((FAITestBase *)this);
          local_5ff = FMassEntityHandle::operator!=(&local_5d8,local_518);
          ::FString::FString(&local_4c8,"The committed entity handle differs from the new one");
          bVar1 = FAutomationTestBase::TestTrue(local_510,&local_4c8,local_5ff);
          local_5fe = !bVar1;
          local_5e8 = (uint)(byte)local_5fe;
          ::FString::~FString(&local_4c8);
          if (local_5fe == '\0') {
            local_5fc = 1;
            FEntityBuilder::~FEntityBuilder(&local_328);
            FEntityBuilder::~FEntityBuilder(&local_4b0);
            FEntityBuilder::~FEntityBuilder(&local_1a0);
            local_607 = local_5fc;
          }
          else {
            AITestSuite::ConditionallyBreakOnTestFail();
            local_5fd = 0;
            FEntityBuilder::~FEntityBuilder(&local_328);
            FEntityBuilder::~FEntityBuilder(&local_4b0);
            FEntityBuilder::~FEntityBuilder(&local_1a0);
            local_607 = local_5fd;
          }
        }
        else {
          AITestSuite::ConditionallyBreakOnTestFail();
          local_600 = 0;
          FEntityBuilder::~FEntityBuilder(&local_328);
          FEntityBuilder::~FEntityBuilder(&local_4b0);
          FEntityBuilder::~FEntityBuilder(&local_1a0);
          local_607 = local_600;
        }
      }
      else {
        AITestSuite::ConditionallyBreakOnTestFail();
        local_603 = 0;
        FEntityBuilder::~FEntityBuilder(&local_328);
        FEntityBuilder::~FEntityBuilder(&local_4b0);
        FEntityBuilder::~FEntityBuilder(&local_1a0);
        local_607 = local_603;
      }
    }
    else {
      AITestSuite::ConditionallyBreakOnTestFail();
      local_605 = 0;
      FEntityBuilder::~FEntityBuilder(&local_328);
      FEntityBuilder::~FEntityBuilder(&local_4b0);
      FEntityBuilder::~FEntityBuilder(&local_1a0);
      local_607 = local_605;
    }
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    local_607 = 0;
    FEntityBuilder::~FEntityBuilder(&local_328);
    FEntityBuilder::~FEntityBuilder(&local_4b0);
    FEntityBuilder::~FEntityBuilder(&local_1a0);
  }
  return (bool)local_607;
}

