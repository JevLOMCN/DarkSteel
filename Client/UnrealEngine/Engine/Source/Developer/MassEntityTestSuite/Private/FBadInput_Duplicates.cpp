// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// operator() @ 1470ff4e0

void __thiscall
`FMassDependencySolverTest::FBadInput_Duplicates::InstantTest'::__l3::<lambda_1>::operator()
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

// InstantTest @ 147138d20

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassDependencySolverTest::FBadInput_Duplicates::InstantTest(FBadInput_Duplicates *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 *puVar5;
  TSharedPtr<FMassEntityManager,1> *pTVar6;
  FScopeGuardSyntaxSupport local_288 [4];
  int local_284;
  int local_280;
  int local_27c;
  uint local_278;
  int local_274;
  UMassTestProcessor_A **local_270;
  UMassTestProcessor_A **local_268;
  UMassTestProcessor_A **local_260;
  UMassTestProcessor_A *local_258;
  UMassTestProcessor_A *local_250;
  UMassTestProcessor_A *local_248;
  int local_240;
  int local_23c;
  int local_238;
  undefined1 *local_230;
  TSharedPtr<FMassEntityManager,1> *local_228;
  UMassTestProcessor_A **local_220;
  UMassTestProcessor_A **local_218;
  UMassTestProcessor_A **local_210;
  longlong local_208;
  longlong local_200;
  longlong local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  void *local_1b0;
  undefined8 *local_1a8;
  TSharedPtr<FMassEntityManager,1> *local_1a0;
  UMassTestProcessor_A **local_198;
  UMassTestProcessor_A **local_190;
  UMassTestProcessor_A **local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  longlong local_130;
  void *local_128;
  undefined8 *local_120;
  TSharedPtr<FMassEntityManager,1> *local_118;
  UMassTestProcessor_A **local_110;
  UMassTestProcessor_A **local_108;
  UMassTestProcessor_A **local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  void *local_a0;
  undefined8 *local_98;
  FString *local_90;
  FString *local_88;
  FAutomationTestBase *local_80;
  FBadInput_Duplicates *local_78;
  FBadInput_Duplicates **local_70;
  <lambda_1> local_68;
  FAutomationTestBase *local_60;
  FString local_58;
  TSharedPtr<FMassEntityManager,1> local_48;
  TSharedPtr<FMassEntityManager,1> local_38;
  TSharedPtr<FMassEntityManager,1> local_28;
  FString local_18;
  
  local_230 = &this->field_0x28;
  TArray<UMassTestProcessorBase_*,TSizedDefaultAllocator<32>_>::Reset
            ((TArray<UMassTestProcessorBase_*,TSizedDefaultAllocator<32>_> *)local_230,0);
  puVar5 = &this->field_0x28;
  local_228 = &local_48;
  pTVar6 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                     (local_228,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x48);
  local_258 = NewTestProcessor<UMassTestProcessor_A>(pTVar6);
  local_270 = &local_258;
  local_220 = *(UMassTestProcessor_A ***)puVar5;
  local_218 = local_220;
  local_210 = local_220;
  if ((local_220 <= local_270) &&
     (local_208 = *(longlong *)puVar5, local_200 = local_208, local_1f8 = local_208,
     local_270 < (UMassTestProcessor_A **)(local_208 + (longlong)*(int *)&this->field_0x34 * 8))) {
    local_1f0 = 0;
    local_1ec = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_1d0 = (longlong)*(int *)&this->field_0x30;
    local_1c8 = (longlong)*(int *)&this->field_0x34;
    local_1e8 = *(undefined8 *)puVar5;
    local_1e0 = local_1e8;
    local_1d8 = local_1e8;
    local_1c0 = local_1e8;
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
  local_284 = *(int *)&this->field_0x30;
  *(int *)&this->field_0x30 = *(int *)&this->field_0x30 + 1;
  local_1b8 = *(longlong *)puVar5;
  local_1b0 = (void *)(local_1b8 + (longlong)local_284 * 8);
  local_1a8 = ::operator_new(8,local_1b0);
  *local_1a8 = local_258;
  local_240 = local_284;
  puVar5 = &this->field_0x28;
  local_1a0 = &local_38;
  pTVar6 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                     (local_1a0,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x48);
  local_250 = NewTestProcessor<UMassTestProcessor_A>(pTVar6);
  local_268 = &local_250;
  local_198 = *(UMassTestProcessor_A ***)puVar5;
  local_190 = local_198;
  local_188 = local_198;
  if ((local_198 <= local_268) &&
     (local_180 = *(longlong *)puVar5, local_178 = local_180, local_170 = local_180,
     local_268 < (UMassTestProcessor_A **)(local_180 + (longlong)*(int *)&this->field_0x34 * 8))) {
    local_168 = 0;
    local_164 = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_148 = (longlong)*(int *)&this->field_0x30;
    local_140 = (longlong)*(int *)&this->field_0x34;
    local_160 = *(undefined8 *)puVar5;
    local_158 = local_160;
    local_150 = local_160;
    local_138 = local_160;
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
  local_280 = *(int *)&this->field_0x30;
  *(int *)&this->field_0x30 = *(int *)&this->field_0x30 + 1;
  local_130 = *(longlong *)puVar5;
  local_128 = (void *)(local_130 + (longlong)local_280 * 8);
  local_120 = ::operator_new(8,local_128);
  *local_120 = local_250;
  local_23c = local_280;
  puVar5 = &this->field_0x28;
  local_118 = &local_28;
  pTVar6 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                     (local_118,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x48);
  local_248 = NewTestProcessor<UMassTestProcessor_A>(pTVar6);
  local_260 = &local_248;
  local_110 = *(UMassTestProcessor_A ***)puVar5;
  local_108 = local_110;
  local_100 = local_110;
  if ((local_110 <= local_260) &&
     (local_f8 = *(longlong *)puVar5, local_f0 = local_f8, local_e8 = local_f8,
     local_260 < (UMassTestProcessor_A **)(local_f8 + (longlong)*(int *)&this->field_0x34 * 8))) {
    local_e0 = 0;
    local_dc = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_c0 = (longlong)*(int *)&this->field_0x30;
    local_b8 = (longlong)*(int *)&this->field_0x34;
    local_d8 = *(undefined8 *)puVar5;
    local_d0 = local_d8;
    local_c8 = local_d8;
    local_b0 = local_d8;
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
  local_27c = *(int *)&this->field_0x30;
  *(int *)&this->field_0x30 = *(int *)&this->field_0x30 + 1;
  local_a8 = *(longlong *)puVar5;
  local_a0 = (void *)(local_a8 + (longlong)local_27c * 8);
  local_98 = ::operator_new(8,local_a0);
  *local_98 = local_248;
  local_238 = local_27c;
  local_80 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_90 = &local_18;
  local_88 = ::FString::FString(local_90,L"already registered. Duplicates are not supported");
  FAutomationTestBase::AddExpectedErrorPlain(local_80,local_88,Contains,2);
  local_70 = &local_78;
  local_78 = this;
  ScopeExitSupport::FScopeGuardSyntaxSupport::
  operator+<_FMassDependencySolverTest::FBadInput_Duplicates::InstantTest_::__l3::<lambda_1>_>
            (local_288,&local_68);
  UE::AITestSuite::TestsInProgress = UE::AITestSuite::TestsInProgress + 1;
  FDependencySolverBase::Solve((FDependencySolverBase *)this);
  ScopeExitSupport::
  TScopeGuard<`FMassDependencySolverTest::FBadInput_Duplicates::InstantTest'::__l3::<lambda_1>_>::
  ~TScopeGuard<_FMassDependencySolverTest::FBadInput_Duplicates::InstantTest_::__l3::<lambda_1>_>
            (&local_68);
  local_60 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_274 = *(int *)&this->field_0x40;
  bVar2 = local_274 == 1;
  ::FString::FString(&local_58,"Duplicates in input should be handled gracefully");
  bVar2 = FAutomationTestBase::TestTrue(local_60,&local_58,bVar2);
  local_278 = (uint)!bVar2;
  ::FString::~FString(&local_58);
  bVar2 = bVar2;
  if (!bVar2) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
  }
  return bVar2;
}

