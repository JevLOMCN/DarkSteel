// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// operator() @ 1470ff960

void __thiscall
`UE::Mass::Test::EntityIterator::FIterator_QuerylessIterator::InstantTest'::__l3::<lambda_1>::
operator()(void *this)

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

// InstantTest @ 14716ece0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::EntityIterator::FIterator_QuerylessIterator::InstantTest
          (FIterator_QuerylessIterator *this)

{
  bool bVar1;
  undefined1 auStack_678 [32];
  bool local_658;
  char local_657;
  undefined1 local_656;
  char local_655;
  undefined1 local_654;
  undefined1 local_653;
  FScopeGuardSyntaxSupport local_652 [2];
  int local_650;
  uint local_64c;
  uint local_648;
  <lambda_1> local_640;
  FMassEntityManager *local_638;
  FString *local_630;
  FString *local_628;
  FAutomationTestBase *local_620;
  FIterator_QuerylessIterator *local_618;
  FIterator_QuerylessIterator **local_610;
  FAutomationTestBase *local_608;
  FAutomationTestBase *local_600;
  FString local_5f8;
  FString local_5e8;
  FEntityIterator local_5d8;
  FString local_5b8;
  FMassExecutionContext local_5a8;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_678;
  local_638 = *(FMassEntityManager **)&this->field_0x28;
  FMassExecutionContext::FMassExecutionContext(&local_5a8,local_638,0.0,true);
  local_620 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_630 = &local_5b8;
  local_628 = ::FString::FString(local_630,"no entity query is being executed");
  FAutomationTestBase::AddExpectedErrorPlain(local_620,local_628,Contains,1);
  local_610 = &local_618;
  local_618 = this;
  ScopeExitSupport::FScopeGuardSyntaxSupport::
  operator+<_UE::Mass::Test::EntityIterator::FIterator_QuerylessIterator::InstantTest_::__l3::<lambda_1>_>
            (local_652,&local_640);
  AITestSuite::TestsInProgress = AITestSuite::TestsInProgress + 1;
  FMassExecutionContext::CreateEntityIterator(&local_5a8,&local_5d8);
  local_608 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_658 = FMassExecutionContext::FEntityIterator::operator_bool(&local_5d8);
  ::FString::FString(&local_5f8,"(Not) Created iterator is valid");
  bVar1 = FAutomationTestBase::TestFalse(local_608,&local_5f8,local_658);
  local_657 = !bVar1;
  local_64c = (uint)(byte)local_657;
  ::FString::~FString(&local_5f8);
  if (local_657 == '\0') {
    local_650 = 0;
    while (bVar1 = FMassExecutionContext::FEntityIterator::operator_bool(&local_5d8), bVar1) {
      local_650 = local_650 + 1;
      FMassExecutionContext::FEntityIterator::operator++(&local_5d8);
    }
    local_600 = FAITestBase::GetTestRunner((FAITestBase *)this);
    ::FString::FString(&local_5e8,"Number of iterations with an invalid iterator");
    bVar1 = FTestHelpers::TestEqual<int,int>(&local_5e8,local_650,0,local_600);
    local_655 = !bVar1;
    local_648 = (uint)(byte)local_655;
    ::FString::~FString(&local_5e8);
    if (local_655 == '\0') {
      ScopeExitSupport::
      TScopeGuard<`UE::Mass::Test::EntityIterator::FIterator_QuerylessIterator::InstantTest'::__l3::<lambda_1>_>
      ::
      ~TScopeGuard<_UE::Mass::Test::EntityIterator::FIterator_QuerylessIterator::InstantTest_::__l3::<lambda_1>_>
                (&local_640);
      local_653 = 1;
      FMassExecutionContext::~FMassExecutionContext(&local_5a8);
      local_656 = local_653;
    }
    else {
      AITestSuite::ConditionallyBreakOnTestFail();
      local_654 = 0;
      ScopeExitSupport::
      TScopeGuard<`UE::Mass::Test::EntityIterator::FIterator_QuerylessIterator::InstantTest'::__l3::<lambda_1>_>
      ::
      ~TScopeGuard<_UE::Mass::Test::EntityIterator::FIterator_QuerylessIterator::InstantTest_::__l3::<lambda_1>_>
                (&local_640);
      FMassExecutionContext::~FMassExecutionContext(&local_5a8);
      local_656 = local_654;
    }
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    local_656 = 0;
    ScopeExitSupport::
    TScopeGuard<`UE::Mass::Test::EntityIterator::FIterator_QuerylessIterator::InstantTest'::__l3::<lambda_1>_>
    ::
    ~TScopeGuard<_UE::Mass::Test::EntityIterator::FIterator_QuerylessIterator::InstantTest_::__l3::<lambda_1>_>
              (&local_640);
    FMassExecutionContext::~FMassExecutionContext(&local_5a8);
  }
  return (bool)local_656;
}

