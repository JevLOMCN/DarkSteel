// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// operator() @ 1470ff600

void __thiscall
`FMassDependencySolverTest::FBadInput_MultipleNulls::InstantTest'::__l3::<lambda_1>::operator()
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

// InstantTest @ 14713a350

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassDependencySolverTest::FBadInput_MultipleNulls::InstantTest(FBadInput_MultipleNulls *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 *puVar5;
  FScopeGuardSyntaxSupport local_248 [4];
  int local_244;
  int local_240;
  int local_23c;
  uint local_238;
  int local_234;
  undefined8 *local_230;
  undefined8 *local_228;
  undefined8 *local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  int local_200;
  int local_1fc;
  int local_1f8;
  undefined1 *local_1f0;
  undefined8 *local_1e8;
  undefined8 *local_1e0;
  undefined8 *local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  longlong local_190;
  undefined8 local_188;
  longlong local_180;
  void *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  undefined8 *local_160;
  undefined8 *local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  longlong local_100;
  void *local_f8;
  undefined8 *local_f0;
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
  FBadInput_MultipleNulls *local_50;
  FBadInput_MultipleNulls **local_48;
  <lambda_1> local_40;
  FAutomationTestBase *local_38;
  FString local_30;
  FString local_20 [2];
  
  local_1f0 = &this->field_0x28;
  TArray<UMassTestProcessorBase_*,TSizedDefaultAllocator<32>_>::Reset
            ((TArray<UMassTestProcessorBase_*,TSizedDefaultAllocator<32>_> *)local_1f0,0);
  puVar5 = &this->field_0x28;
  local_218 = 0;
  local_230 = &local_218;
  local_1e8 = *(undefined8 **)puVar5;
  local_1e0 = local_1e8;
  local_1d8 = local_1e8;
  if ((local_1e8 <= local_230) &&
     (local_1d0 = *(longlong *)puVar5, local_1c8 = local_1d0, local_1c0 = local_1d0,
     local_230 < (undefined8 *)(local_1d0 + (longlong)*(int *)&this->field_0x34 * 8))) {
    local_1b8 = 0;
    local_1b4 = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_198 = (longlong)*(int *)&this->field_0x30;
    local_190 = (longlong)*(int *)&this->field_0x34;
    local_1b0 = *(undefined8 *)puVar5;
    local_1a8 = local_1b0;
    local_1a0 = local_1b0;
    local_188 = local_1b0;
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
  local_244 = *(int *)&this->field_0x30;
  *(int *)&this->field_0x30 = *(int *)&this->field_0x30 + 1;
  local_180 = *(longlong *)puVar5;
  local_178 = (void *)(local_180 + (longlong)local_244 * 8);
  local_170 = ::operator_new(8,local_178);
  *local_170 = local_218;
  local_200 = local_244;
  puVar5 = &this->field_0x28;
  local_210 = 0;
  local_228 = &local_210;
  local_168 = *(undefined8 **)puVar5;
  local_160 = local_168;
  local_158 = local_168;
  if ((local_168 <= local_228) &&
     (local_150 = *(longlong *)puVar5, local_148 = local_150, local_140 = local_150,
     local_228 < (undefined8 *)(local_150 + (longlong)*(int *)&this->field_0x34 * 8))) {
    local_138 = 0;
    local_134 = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_118 = (longlong)*(int *)&this->field_0x30;
    local_110 = (longlong)*(int *)&this->field_0x34;
    local_130 = *(undefined8 *)puVar5;
    local_128 = local_130;
    local_120 = local_130;
    local_108 = local_130;
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
  local_240 = *(int *)&this->field_0x30;
  *(int *)&this->field_0x30 = *(int *)&this->field_0x30 + 1;
  local_100 = *(longlong *)puVar5;
  local_f8 = (void *)(local_100 + (longlong)local_240 * 8);
  local_f0 = ::operator_new(8,local_f8);
  *local_f0 = local_210;
  local_1f8 = local_240;
  puVar5 = &this->field_0x28;
  local_208 = 0;
  local_220 = &local_208;
  local_e8 = *(undefined8 **)puVar5;
  local_e0 = local_e8;
  local_d8 = local_e8;
  if ((local_e8 <= local_220) &&
     (local_d0 = *(longlong *)puVar5, local_c8 = local_d0, local_c0 = local_d0,
     local_220 < (undefined8 *)(local_d0 + (longlong)*(int *)&this->field_0x34 * 8))) {
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
  local_23c = *(int *)&this->field_0x30;
  *(int *)&this->field_0x30 = *(int *)&this->field_0x30 + 1;
  local_80 = *(longlong *)puVar5;
  local_78 = (void *)(local_80 + (longlong)local_23c * 8);
  local_70 = ::operator_new(8,local_78);
  *local_70 = local_208;
  local_1fc = local_23c;
  local_58 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_68 = local_20;
  local_60 = ::FString::FString(local_68,L"nullptr found in Processors");
  FAutomationTestBase::AddExpectedErrorPlain(local_58,local_60,Contains,3);
  local_48 = &local_50;
  local_50 = this;
  ScopeExitSupport::FScopeGuardSyntaxSupport::
  operator+<_FMassDependencySolverTest::FBadInput_MultipleNulls::InstantTest_::__l3::<lambda_1>_>
            (local_248,&local_40);
  UE::AITestSuite::TestsInProgress = UE::AITestSuite::TestsInProgress + 1;
  FDependencySolverBase::Solve((FDependencySolverBase *)this);
  ScopeExitSupport::
  TScopeGuard<`FMassDependencySolverTest::FBadInput_MultipleNulls::InstantTest'::__l3::<lambda_1>_>
  ::
  ~TScopeGuard<_FMassDependencySolverTest::FBadInput_MultipleNulls::InstantTest_::__l3::<lambda_1>_>
            (&local_40);
  local_38 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_234 = *(int *)&this->field_0x40;
  bVar2 = local_234 == 0;
  ::FString::FString(&local_30,"Multiple nullptr inputs should be handled gracefully");
  bVar2 = FAutomationTestBase::TestTrue(local_38,&local_30,bVar2);
  local_238 = (uint)!bVar2;
  ::FString::~FString(&local_30);
  bVar2 = bVar2;
  if (!bVar2) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
  }
  return bVar2;
}

