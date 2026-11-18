// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// operator() @ 1470ff690

void __thiscall
`FMassDependencySolverTest::FBadInput_Null::InstantTest'::__l3::<lambda_1>::operator()(void *this)

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

// InstantTest @ 14713ac50

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall FMassDependencySolverTest::FBadInput_Null::InstantTest(FBadInput_Null *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 *puVar5;
  FScopeGuardSyntaxSupport local_118 [4];
  int local_114;
  uint local_110;
  int local_10c;
  undefined8 *local_108;
  undefined8 local_100;
  int local_f8;
  undefined1 *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  void *local_78;
  undefined8 *local_70;
  FString *local_68;
  FString *local_60;
  FAutomationTestBase *local_58;
  FBadInput_Null *local_50;
  FBadInput_Null **local_48;
  <lambda_1> local_40;
  FAutomationTestBase *local_38;
  FString local_30;
  FString local_20 [2];
  
  local_f0 = &this->field_0x28;
  TArray<UMassTestProcessorBase_*,TSizedDefaultAllocator<32>_>::Reset
            ((TArray<UMassTestProcessorBase_*,TSizedDefaultAllocator<32>_> *)local_f0,0);
  puVar5 = &this->field_0x28;
  local_100 = 0;
  local_108 = &local_100;
  local_e8 = *(undefined8 **)puVar5;
  local_e0 = local_e8;
  local_d8 = local_e8;
  if ((local_e8 <= local_108) &&
     (local_d0 = *(longlong *)puVar5, local_c8 = local_d0, local_c0 = local_d0,
     local_108 < (undefined8 *)(local_d0 + (longlong)*(int *)&this->field_0x34 * 8))) {
    local_b8 = 0;
    local_b4 = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_98 = (longlong)*(int *)&this->field_0x30;
    local_90 = (longlong)*(int *)&this->field_0x34;
    local_b0 = *(undefined8 *)puVar5;
    local_a8 = local_b0;
    local_a0 = local_b0;
    local_88 = local_b0;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (*(int *)&this->field_0x30 == *(int *)&this->field_0x34) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)puVar5,(int *)&this->field_0x34);
    *(int *)&this->field_0x30 = iVar4;
  }
  local_114 = *(int *)&this->field_0x30;
  *(int *)&this->field_0x30 = *(int *)&this->field_0x30 + 1;
  local_80 = *(longlong *)puVar5;
  local_78 = (void *)(local_80 + (longlong)local_114 * 8);
  local_70 = ::operator_new(8,local_78);
  *local_70 = local_100;
  local_f8 = local_114;
  local_58 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_68 = local_20;
  local_60 = ::FString::FString(local_68,L"nullptr found in Processors");
  FAutomationTestBase::AddExpectedErrorPlain(local_58,local_60,Contains,1);
  local_48 = &local_50;
  local_50 = this;
  ScopeExitSupport::FScopeGuardSyntaxSupport::
  operator+<_FMassDependencySolverTest::FBadInput_Null::InstantTest_::__l3::<lambda_1>_>
            (local_118,&local_40);
  UE::AITestSuite::TestsInProgress = UE::AITestSuite::TestsInProgress + 1;
  FDependencySolverBase::Solve((FDependencySolverBase *)this);
  ScopeExitSupport::
  TScopeGuard<`FMassDependencySolverTest::FBadInput_Null::InstantTest'::__l3::<lambda_1>_>::
  ~TScopeGuard<_FMassDependencySolverTest::FBadInput_Null::InstantTest_::__l3::<lambda_1>_>
            (&local_40);
  local_38 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_10c = *(int *)&this->field_0x40;
  bVar2 = local_10c == 0;
  ::FString::FString(&local_30,"Single nullptr input should be handled gracefully");
  bVar2 = FAutomationTestBase::TestTrue(local_38,&local_30,bVar2);
  local_110 = (uint)!bVar2;
  ::FString::~FString(&local_30);
  bVar2 = bVar2;
  if (!bVar2) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
  }
  return bVar2;
}

