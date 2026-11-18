// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// operator() @ 1470ff570

void __thiscall
`FMassDependencySolverTest::FBadInput_MixedNulls::InstantTest'::__l3::<lambda_1>::operator()
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

// InstantTest @ 147139770

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassDependencySolverTest::FBadInput_MixedNulls::InstantTest(FBadInput_MixedNulls *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 *puVar5;
  TSharedPtr<FMassEntityManager,1> *pTVar6;
  FScopeGuardSyntaxSupport local_310 [4];
  int local_30c;
  int local_308;
  int local_304;
  int local_300;
  uint local_2fc;
  int local_2f8;
  undefined8 *local_2f0;
  UMassTestProcessor_A **local_2e8;
  undefined8 *local_2e0;
  UMassTestProcessor_B **local_2d8;
  undefined8 local_2d0;
  UMassTestProcessor_A *local_2c8;
  undefined8 local_2c0;
  UMassTestProcessor_B *local_2b8;
  int local_2b0;
  int local_2ac;
  int local_2a8;
  int local_2a4;
  undefined1 *local_2a0;
  undefined8 *local_298;
  undefined8 *local_290;
  undefined8 *local_288;
  longlong local_280;
  longlong local_278;
  longlong local_270;
  undefined4 local_268;
  undefined4 local_264;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  longlong local_248;
  longlong local_240;
  undefined8 local_238;
  longlong local_230;
  void *local_228;
  undefined8 *local_220;
  TSharedPtr<FMassEntityManager,1> *local_218;
  UMassTestProcessor_A **local_210;
  UMassTestProcessor_A **local_208;
  UMassTestProcessor_A **local_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  void *local_1a0;
  undefined8 *local_198;
  undefined8 *local_190;
  undefined8 *local_188;
  undefined8 *local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  longlong local_140;
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  void *local_120;
  undefined8 *local_118;
  TSharedPtr<FMassEntityManager,1> *local_110;
  UMassTestProcessor_B **local_108;
  UMassTestProcessor_B **local_100;
  UMassTestProcessor_B **local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  longlong local_a0;
  void *local_98;
  undefined8 *local_90;
  FString *local_88;
  FString *local_80;
  FAutomationTestBase *local_78;
  FBadInput_MixedNulls *local_70;
  FBadInput_MixedNulls **local_68;
  <lambda_1> local_60;
  FAutomationTestBase *local_58;
  FString local_50;
  TSharedPtr<FMassEntityManager,1> local_40;
  TSharedPtr<FMassEntityManager,1> local_30;
  FString local_20 [2];
  
  local_2a0 = &this->field_0x28;
  TArray<UMassTestProcessorBase_*,TSizedDefaultAllocator<32>_>::Reset
            ((TArray<UMassTestProcessorBase_*,TSizedDefaultAllocator<32>_> *)local_2a0,0);
  puVar5 = &this->field_0x28;
  local_2d0 = 0;
  local_2f0 = &local_2d0;
  local_298 = *(undefined8 **)puVar5;
  local_290 = local_298;
  local_288 = local_298;
  if ((local_298 <= local_2f0) &&
     (local_280 = *(longlong *)puVar5, local_278 = local_280, local_270 = local_280,
     local_2f0 < (undefined8 *)(local_280 + (longlong)*(int *)&this->field_0x34 * 8))) {
    local_268 = 0;
    local_264 = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_248 = (longlong)*(int *)&this->field_0x30;
    local_240 = (longlong)*(int *)&this->field_0x34;
    local_260 = *(undefined8 *)puVar5;
    local_258 = local_260;
    local_250 = local_260;
    local_238 = local_260;
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
  local_30c = *(int *)&this->field_0x30;
  *(int *)&this->field_0x30 = *(int *)&this->field_0x30 + 1;
  local_230 = *(longlong *)puVar5;
  local_228 = (void *)(local_230 + (longlong)local_30c * 8);
  local_220 = ::operator_new(8,local_228);
  *local_220 = local_2d0;
  local_2b0 = local_30c;
  puVar5 = &this->field_0x28;
  local_218 = &local_40;
  pTVar6 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                     (local_218,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x48);
  local_2c8 = NewTestProcessor<UMassTestProcessor_A>(pTVar6);
  local_2e8 = &local_2c8;
  local_210 = *(UMassTestProcessor_A ***)puVar5;
  local_208 = local_210;
  local_200 = local_210;
  if ((local_210 <= local_2e8) &&
     (local_1f8 = *(longlong *)puVar5, local_1f0 = local_1f8, local_1e8 = local_1f8,
     local_2e8 < (UMassTestProcessor_A **)(local_1f8 + (longlong)*(int *)&this->field_0x34 * 8))) {
    local_1e0 = 0;
    local_1dc = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_1c0 = (longlong)*(int *)&this->field_0x30;
    local_1b8 = (longlong)*(int *)&this->field_0x34;
    local_1d8 = *(undefined8 *)puVar5;
    local_1d0 = local_1d8;
    local_1c8 = local_1d8;
    local_1b0 = local_1d8;
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
  local_308 = *(int *)&this->field_0x30;
  *(int *)&this->field_0x30 = *(int *)&this->field_0x30 + 1;
  local_1a8 = *(longlong *)puVar5;
  local_1a0 = (void *)(local_1a8 + (longlong)local_308 * 8);
  local_198 = ::operator_new(8,local_1a0);
  *local_198 = local_2c8;
  local_2ac = local_308;
  puVar5 = &this->field_0x28;
  local_2c0 = 0;
  local_2e0 = &local_2c0;
  local_190 = *(undefined8 **)puVar5;
  local_188 = local_190;
  local_180 = local_190;
  if ((local_190 <= local_2e0) &&
     (local_178 = *(longlong *)puVar5, local_170 = local_178, local_168 = local_178,
     local_2e0 < (undefined8 *)(local_178 + (longlong)*(int *)&this->field_0x34 * 8))) {
    local_160 = 0;
    local_15c = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_140 = (longlong)*(int *)&this->field_0x30;
    local_138 = (longlong)*(int *)&this->field_0x34;
    local_158 = *(undefined8 *)puVar5;
    local_150 = local_158;
    local_148 = local_158;
    local_130 = local_158;
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
  local_304 = *(int *)&this->field_0x30;
  *(int *)&this->field_0x30 = *(int *)&this->field_0x30 + 1;
  local_128 = *(longlong *)puVar5;
  local_120 = (void *)(local_128 + (longlong)local_304 * 8);
  local_118 = ::operator_new(8,local_120);
  *local_118 = local_2c0;
  local_2a8 = local_304;
  puVar5 = &this->field_0x28;
  local_110 = &local_30;
  pTVar6 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                     (local_110,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x48);
  local_2b8 = NewTestProcessor<UMassTestProcessor_B>(pTVar6);
  local_2d8 = &local_2b8;
  local_108 = *(UMassTestProcessor_B ***)puVar5;
  local_100 = local_108;
  local_f8 = local_108;
  if ((local_108 <= local_2d8) &&
     (local_f0 = *(longlong *)puVar5, local_e8 = local_f0, local_e0 = local_f0,
     local_2d8 < (UMassTestProcessor_B **)(local_f0 + (longlong)*(int *)&this->field_0x34 * 8))) {
    local_d8 = 0;
    local_d4 = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_b8 = (longlong)*(int *)&this->field_0x30;
    local_b0 = (longlong)*(int *)&this->field_0x34;
    local_d0 = *(undefined8 *)puVar5;
    local_c8 = local_d0;
    local_c0 = local_d0;
    local_a8 = local_d0;
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
  local_300 = *(int *)&this->field_0x30;
  *(int *)&this->field_0x30 = *(int *)&this->field_0x30 + 1;
  local_a0 = *(longlong *)puVar5;
  local_98 = (void *)(local_a0 + (longlong)local_300 * 8);
  local_90 = ::operator_new(8,local_98);
  *local_90 = local_2b8;
  local_2a4 = local_300;
  local_78 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_88 = local_20;
  local_80 = ::FString::FString(local_88,L"nullptr found in Processors");
  FAutomationTestBase::AddExpectedErrorPlain(local_78,local_80,Contains,2);
  local_68 = &local_70;
  local_70 = this;
  ScopeExitSupport::FScopeGuardSyntaxSupport::
  operator+<_FMassDependencySolverTest::FBadInput_MixedNulls::InstantTest_::__l3::<lambda_1>_>
            (local_310,&local_60);
  UE::AITestSuite::TestsInProgress = UE::AITestSuite::TestsInProgress + 1;
  FDependencySolverBase::Solve((FDependencySolverBase *)this);
  ScopeExitSupport::
  TScopeGuard<`FMassDependencySolverTest::FBadInput_MixedNulls::InstantTest'::__l3::<lambda_1>_>::
  ~TScopeGuard<_FMassDependencySolverTest::FBadInput_MixedNulls::InstantTest_::__l3::<lambda_1>_>
            (&local_60);
  local_58 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_2f8 = *(int *)&this->field_0x40;
  bVar2 = local_2f8 == 2;
  ::FString::FString(&local_50,"Mixed nullptr and proper inputs should be handled gracefully");
  bVar2 = FAutomationTestBase::TestTrue(local_58,&local_50,bVar2);
  local_2fc = (uint)!bVar2;
  ::FString::~FString(&local_50);
  bVar2 = bVar2;
  if (!bVar2) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
  }
  return bVar2;
}

