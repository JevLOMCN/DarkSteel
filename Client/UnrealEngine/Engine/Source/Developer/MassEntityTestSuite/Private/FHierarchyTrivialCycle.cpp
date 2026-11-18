// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// operator() @ 1470ff7b0

void __thiscall
`UE::Mass::Test::Relations::FHierarchyTrivialCycle::InstantTest'::__l3::<lambda_1>::operator()
          (void *this)

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

// InstantTest @ 147168d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
UE::Mass::Test::Relations::FHierarchyTrivialCycle::InstantTest(FHierarchyTrivialCycle *this)

{
  FMassEntityHandle FVar1;
  bool bVar2;
  longlong lVar3;
  FMassArchetypeSharedFragmentValues *pFVar4;
  undefined1 auStack_178 [32];
  FMassEntityHandle local_158;
  bool local_148;
  char local_147;
  undefined1 local_146;
  undefined1 local_145;
  FScopeGuardSyntaxSupport local_144 [4];
  uint local_140;
  undefined1 local_138 [8];
  undefined1 local_130 [24];
  FString *local_118;
  FString *local_110;
  FAutomationTestBase *local_108;
  FHierarchyTrivialCycle *local_100;
  FHierarchyTrivialCycle **local_f8;
  FRelationManager *local_f0;
  <lambda_1> local_e8;
  FMassEntityHandle local_e0;
  ForAnyElementType local_d8;
  FAutomationTestBase *local_d0;
  FMassArchetypeHandle local_c8;
  FString local_b8;
  undefined1 local_a8 [8];
  FString local_a0;
  FMassArchetypeSharedFragmentValues local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_178;
  FMassArchetypeHandle::FMassArchetypeHandle
            ((FMassArchetypeHandle *)local_130,(FMassArchetypeHandle *)&this->field_0x60);
  local_130._16_8_ =
       TSharedPtr<FMassEntityManager,1>::operator->
                 ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar4 = &local_88;
  for (lVar3 = 0x68; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined1 *)&pFVar4->HashCache = 0;
    pFVar4 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar4->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_88);
  FMassEntityManager::CreateEntity
            ((FMassEntityManager *)local_130._16_8_,(FMassArchetypeHandle *)local_138,
             (FMassArchetypeSharedFragmentValues *)local_130);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_88);
  local_108 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_118 = &local_a0;
  local_110 = ::FString::FString(local_118,"subject and object to be different");
  FAutomationTestBase::AddExpectedErrorPlain(local_108,local_110,Contains,1);
  local_f8 = &local_100;
  local_100 = this;
  ScopeExitSupport::FScopeGuardSyntaxSupport::
  operator+<_UE::Mass::Test::Relations::FHierarchyTrivialCycle::InstantTest_::__l3::<lambda_1>_>
            (local_144,&local_e8);
  AITestSuite::TestsInProgress = AITestSuite::TestsInProgress + 1;
  local_f0 = *(FRelationManager **)&this->field_0xa8;
  local_158.Index = local_138._0_4_;
  local_158.SerialNumber = local_138._4_4_;
  FVar1.Index = *(int *)&this->field_0xa0;
  FVar1.SerialNumber = *(int *)&this->field_0xa4;
  FRelationManager::CreateRelationInstance
            (local_f0,(FTypeHandle)local_a8,FVar1,(FMassEntityHandle)local_138);
  ScopeExitSupport::
  TScopeGuard<`UE::Mass::Test::Relations::FHierarchyTrivialCycle::InstantTest'::__l3::<lambda_1>_>::
  ~TScopeGuard<_UE::Mass::Test::Relations::FHierarchyTrivialCycle::InstantTest_::__l3::<lambda_1>_>
            (&local_e8);
  local_d8.Data =
       (FScriptContainerElement *)
       TSharedPtr<FMassEntityManager,1>::operator->
                 ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_e0.Index = local_138._0_4_;
  local_e0.SerialNumber = local_138._4_4_;
  FMassEntityManager::GetArchetypeForEntity
            ((FMassEntityManager *)local_d8.Data,&local_c8,(FMassEntityHandle)local_138);
  local_d0 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_148 = FMassArchetypeHandle::operator==(&local_c8,(FMassArchetypeHandle *)local_130);
  ::FString::FString(&local_b8,"The entity has not changed archetypes");
  bVar2 = FAutomationTestBase::TestTrue(local_d0,&local_b8,local_148);
  local_147 = !bVar2;
  local_140 = (uint)(byte)local_147;
  ::FString::~FString(&local_b8);
  if (local_147 == '\0') {
    local_145 = 1;
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_c8);
    FMassArchetypeHandle::~FMassArchetypeHandle((FMassArchetypeHandle *)local_130);
    local_146 = local_145;
  }
  else {
    AITestSuite::ConditionallyBreakOnTestFail();
    local_146 = 0;
    FMassArchetypeHandle::~FMassArchetypeHandle(&local_c8);
    FMassArchetypeHandle::~FMassArchetypeHandle((FMassArchetypeHandle *)local_130);
  }
  return (bool)local_146;
}

