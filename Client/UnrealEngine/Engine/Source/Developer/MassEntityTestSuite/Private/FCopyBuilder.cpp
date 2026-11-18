// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 14714a3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall UE::Mass::Test::EntityBuilder::FCopyBuilder::InstantTest(FCopyBuilder *this)

{
  bool bVar1;
  FTestFragment_Int *pFVar2;
  undefined1 auStack_628 [32];
  char local_608;
  undefined1 local_607;
  char local_606;
  undefined1 local_605;
  char local_604;
  undefined1 local_603;
  char local_602;
  undefined1 local_601;
  char local_600;
  undefined1 local_5ff;
  char local_5fe;
  undefined1 local_5fd;
  undefined1 local_5fc;
  uint local_5f8;
  uint local_5f4;
  uint local_5f0;
  uint local_5ec;
  uint local_5e8;
  uint local_5e4;
  int local_5e0 [3];
  int local_5d4;
  int local_5d0;
  int local_5cc;
  FTestFragment_Int *local_5c8;
  FTestFragment_Int *local_5c0;
  FTestFragment_Int *local_5b8;
  FMassEntityManager *local_5b0;
  FMassEntityManager *local_5a8;
  FMassEntityHandle local_5a0;
  FMassEntityManager *local_598;
  FAutomationTestBase *local_590;
  FAutomationTestBase *local_588;
  FMassEntityHandle local_580;
  FMassEntityManager *local_578;
  FAutomationTestBase *local_570;
  FAutomationTestBase *local_568;
  FMassEntityHandle local_560;
  FMassEntityManager *local_558;
  FAutomationTestBase *local_550;
  FAutomationTestBase *local_548;
  FString local_540;
  FString local_530;
  FString local_520;
  FString local_510;
  FString local_500;
  FString local_4f0 [4];
  FEntityBuilder local_4b0;
  FEntityBuilder local_328;
  FEntityBuilder local_1a0;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_628;
  local_5e0[0] = 1;
  local_5b0 = *(FMassEntityManager **)&this->field_0x28;
  FEntityBuilder::FEntityBuilder(&local_4b0,local_5b0);
  FEntityBuilder::Add<FTestFragment_Int,int_const_&>(&local_4b0,local_5e0);
  local_5e0[1] = 2;
  local_5a8 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  FMassEntityManager::MakeEntityBuilder(local_5a8,&local_1a0);
  FEntityBuilder::Add<FTestFragment_Int,int_const_&>(&local_1a0,local_5e0 + 1);
  FEntityBuilder::FEntityBuilder(&local_328,&local_4b0);
  pFVar2 = FEntityBuilder::GetOrCreate<FTestFragment_Int>(&local_328);
  pFVar2->Value = 2;
  FEntityBuilder::Commit(&local_4b0);
  FEntityBuilder::Commit(&local_1a0);
  FEntityBuilder::Commit(&local_328);
  local_598 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_5a0 = FEntityBuilder::GetEntityHandle(&local_4b0);
  local_5a0 = *(FMassEntityHandle *)local_5a0;
  local_5c0 = FMassEntityManager::GetFragmentDataPtr<FTestFragment_Int>(local_598,local_5a0);
  local_590 = FAITestBase::GetTestRunner((FAITestBase *)this);
  ::FString::FString(&local_530,"The original entity has the expected fragment");
  bVar1 = FAutomationTestBase::TestNotNull<FTestFragment_Int>(local_590,&local_530,local_5c0);
  local_608 = !bVar1;
  local_5f8 = (uint)(byte)local_608;
  ::FString::~FString(&local_530);
  if (local_608 == '\0') {
    local_588 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_5e0[2] = local_5c0->Value;
    ::FString::FString(&local_540,
                       "The value of the original entity\'s fragment matches expectations");
    bVar1 = FTestHelpers::TestEqual<int,int>(&local_540,local_5e0[2],1,local_588);
    local_606 = !bVar1;
    local_5f4 = (uint)(byte)local_606;
    ::FString::~FString(&local_540);
    if (local_606 == '\0') {
      local_578 = TSharedPtr<FMassEntityManager,1>::operator->
                            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
      local_580 = FEntityBuilder::GetEntityHandle(&local_1a0);
      local_580 = *(FMassEntityHandle *)local_580;
      local_5c8 = FMassEntityManager::GetFragmentDataPtr<FTestFragment_Int>(local_578,local_580);
      local_570 = FAITestBase::GetTestRunner((FAITestBase *)this);
      ::FString::FString(&local_520,"The copied entity has the expected fragment");
      bVar1 = FAutomationTestBase::TestNotNull<FTestFragment_Int>(local_570,&local_520,local_5c8);
      local_604 = !bVar1;
      local_5f0 = (uint)(byte)local_604;
      ::FString::~FString(&local_520);
      if (local_604 == '\0') {
        local_568 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_5d4 = local_5c8->Value;
        ::FString::FString(&local_510,
                           "The value of the copied entity\'s fragment matches expectations");
        bVar1 = FTestHelpers::TestEqual<int,int>(&local_510,local_5d4,2,local_568);
        local_602 = !bVar1;
        local_5ec = (uint)(byte)local_602;
        ::FString::~FString(&local_510);
        if (local_602 == '\0') {
          local_558 = TSharedPtr<FMassEntityManager,1>::operator->
                                ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
          local_560 = FEntityBuilder::GetEntityHandle(&local_328);
          local_560 = *(FMassEntityHandle *)local_560;
          local_5b8 = FMassEntityManager::GetFragmentDataPtr<FTestFragment_Int>(local_558,local_560)
          ;
          local_550 = FAITestBase::GetTestRunner((FAITestBase *)this);
          ::FString::FString(&local_500,"The other copied entity has the expected fragment");
          bVar1 = FAutomationTestBase::TestNotNull<FTestFragment_Int>
                            (local_550,&local_500,local_5b8);
          local_600 = !bVar1;
          local_5e8 = (uint)(byte)local_600;
          ::FString::~FString(&local_500);
          if (local_600 == '\0') {
            local_548 = FAITestBase::GetTestRunner((FAITestBase *)this);
            local_5d0 = local_5c8->Value;
            local_5cc = local_5b8->Value;
            ::FString::FString(local_4f0,
                               "The value of the other copied entity\'s fragment matches expectations"
                              );
            bVar1 = FTestHelpers::TestEqual<int,int>(local_4f0,local_5cc,local_5d0,local_548);
            local_5fe = !bVar1;
            local_5e4 = (uint)(byte)local_5fe;
            ::FString::~FString(local_4f0);
            if (local_5fe == '\0') {
              local_5fc = 1;
              FEntityBuilder::~FEntityBuilder(&local_328);
              FEntityBuilder::~FEntityBuilder(&local_1a0);
              FEntityBuilder::~FEntityBuilder(&local_4b0);
              local_607 = local_5fc;
            }
            else {
              AITestSuite::ConditionallyBreakOnTestFail();
              local_5fd = 0;
              FEntityBuilder::~FEntityBuilder(&local_328);
              FEntityBuilder::~FEntityBuilder(&local_1a0);
              FEntityBuilder::~FEntityBuilder(&local_4b0);
              local_607 = local_5fd;
            }
          }
          else {
            AITestSuite::ConditionallyBreakOnTestFail();
            local_5ff = 0;
            FEntityBuilder::~FEntityBuilder(&local_328);
            FEntityBuilder::~FEntityBuilder(&local_1a0);
            FEntityBuilder::~FEntityBuilder(&local_4b0);
            local_607 = local_5ff;
          }
        }
        else {
          AITestSuite::ConditionallyBreakOnTestFail();
          local_601 = 0;
          FEntityBuilder::~FEntityBuilder(&local_328);
          FEntityBuilder::~FEntityBuilder(&local_1a0);
          FEntityBuilder::~FEntityBuilder(&local_4b0);
          local_607 = local_601;
        }
      }
      else {
        AITestSuite::ConditionallyBreakOnTestFail();
        local_603 = 0;
        FEntityBuilder::~FEntityBuilder(&local_328);
        FEntityBuilder::~FEntityBuilder(&local_1a0);
        FEntityBuilder::~FEntityBuilder(&local_4b0);
        local_607 = local_603;
      }
    }
    else {
      AITestSuite::ConditionallyBreakOnTestFail();
      local_605 = 0;
      FEntityBuilder::~FEntityBuilder(&local_328);
      FEntityBuilder::~FEntityBuilder(&local_1a0);
      FEntityBuilder::~FEntityBuilder(&local_4b0);
      local_607 = local_605;
    }
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    local_607 = 0;
    FEntityBuilder::~FEntityBuilder(&local_328);
    FEntityBuilder::~FEntityBuilder(&local_1a0);
    FEntityBuilder::~FEntityBuilder(&local_4b0);
  }
  return (bool)local_607;
}

