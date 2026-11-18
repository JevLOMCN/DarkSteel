// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 5

// operator() @ 1470ff720

void __thiscall
`FMassDependencySolverTest::FCircularDependency::InstantTest'::__l3::<lambda_1>::operator()
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

// operator() @ 147102ff0

void __thiscall
`FMassDependencySolverTest::FCircularDependency::InstantTest'::__l3::<lambda_2>::operator()
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

// operator() @ 147103d00

void __thiscall
`FMassDependencySolverTest::FCircularDependency::InstantTest'::__l3::<lambda_3>::operator()
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

// InstantTest @ 147140160

/* WARNING: Removing unreachable block (ram,0x0001471403e7) */
/* WARNING: Removing unreachable block (ram,0x0001471408dc) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassDependencySolverTest::FCircularDependency::InstantTest(FCircularDependency *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int local_258;
  FScopeGuardSyntaxSupport local_240;
  FScopeGuardSyntaxSupport local_23f;
  FScopeGuardSyntaxSupport local_23e [2];
  uint local_23c;
  undefined4 local_238;
  uint local_234;
  uint local_230;
  uint local_22c;
  uint local_228;
  uint local_224;
  uint local_220;
  uint local_21c;
  uint local_218;
  undefined4 local_214;
  uint local_210;
  int local_20c;
  int local_208;
  int local_204;
  longlong *local_200;
  longlong *local_1f8;
  longlong *local_1f0;
  undefined8 *local_1e8;
  longlong local_1e0;
  FString *local_1d8;
  FString *local_1d0;
  FAutomationTestBase *local_1c8;
  FCircularDependency *local_1c0;
  FCircularDependency **local_1b8;
  FString *local_1b0;
  FString *local_1a8;
  FAutomationTestBase *local_1a0;
  FCircularDependency *local_198;
  FCircularDependency **local_190;
  FString *local_188;
  FString *local_180;
  FAutomationTestBase *local_178;
  FCircularDependency *local_170;
  FCircularDependency **local_168;
  <lambda_3> local_160;
  <lambda_2> local_158;
  <lambda_1> local_150;
  undefined4 local_148;
  undefined4 local_144;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  FAutomationTestBase *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  FAutomationTestBase *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  longlong local_f0;
  longlong local_e8;
  FName *local_e0;
  FName local_d8;
  FName local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  FName *local_c0;
  FName *local_b8;
  FName *local_b0;
  FName *local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  FAutomationTestBase *local_88;
  FName local_80;
  FName local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  FString local_30;
  FString local_20 [2];
  
  local_1c8 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_1d8 = &local_40;
  local_1d0 = ::FString::FString(local_1d8,L"Detected processing dependency cycle");
  FAutomationTestBase::AddExpectedErrorPlain(local_1c8,local_1d0,Contains,1);
  local_1b8 = &local_1c0;
  local_1c0 = this;
  ScopeExitSupport::FScopeGuardSyntaxSupport::
  operator+<_FMassDependencySolverTest::FCircularDependency::InstantTest_::__l3::<lambda_1>_>
            (&local_240,&local_150);
  UE::AITestSuite::TestsInProgress = UE::AITestSuite::TestsInProgress + 1;
  local_1a0 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_1b0 = &local_30;
  local_1a8 = ::FString::FString(local_1b0,L"Encountered processing dependency cycle");
  FAutomationTestBase::AddExpectedErrorPlain(local_1a0,local_1a8,Contains,1);
  local_190 = &local_198;
  local_198 = this;
  ScopeExitSupport::FScopeGuardSyntaxSupport::
  operator+<_FMassDependencySolverTest::FCircularDependency::InstantTest_::__l3::<lambda_2>_>
            (&local_23f,&local_158);
  UE::AITestSuite::TestsInProgress = UE::AITestSuite::TestsInProgress + 1;
  local_178 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_188 = local_20;
  local_180 = ::FString::FString(local_188,L"group: None");
  FAutomationTestBase::AddExpectedErrorPlain(local_178,local_180,Contains,4);
  local_168 = &local_170;
  local_170 = this;
  ScopeExitSupport::FScopeGuardSyntaxSupport::
  operator+<_FMassDependencySolverTest::FCircularDependency::InstantTest_::__l3::<lambda_3>_>
            (local_23e,&local_160);
  UE::AITestSuite::TestsInProgress = UE::AITestSuite::TestsInProgress + 1;
  FDependencySolverBase::Solve((FDependencySolverBase *)this);
  ScopeExitSupport::
  TScopeGuard<`FMassDependencySolverTest::FCircularDependency::InstantTest'::__l3::<lambda_3>_>::
  ~TScopeGuard<_FMassDependencySolverTest::FCircularDependency::InstantTest_::__l3::<lambda_3>_>
            (&local_160);
  ScopeExitSupport::
  TScopeGuard<`FMassDependencySolverTest::FCircularDependency::InstantTest'::__l3::<lambda_2>_>::
  ~TScopeGuard<_FMassDependencySolverTest::FCircularDependency::InstantTest_::__l3::<lambda_2>_>
            (&local_158);
  ScopeExitSupport::
  TScopeGuard<`FMassDependencySolverTest::FCircularDependency::InstantTest'::__l3::<lambda_1>_>::
  ~TScopeGuard<_FMassDependencySolverTest::FCircularDependency::InstantTest_::__l3::<lambda_1>_>
            (&local_150);
  local_128 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_200 = (longlong *)&this->field_0x38;
  local_238 = 1;
  local_23c = (uint)(0 < *(int *)&this->field_0x40);
  if (local_23c == 0) {
    local_148 = 0;
    local_144 = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_140 = *local_200;
  bVar2 = *(int *)(local_140 + 0x20) == 0;
  local_234 = (uint)bVar2;
  local_138 = local_140;
  local_130 = local_140;
  ::FString::FString(&local_70,"The first processor has no dependencies");
  bVar2 = FAutomationTestBase::TestTrue(local_128,&local_70,bVar2);
  local_230 = (uint)!bVar2;
  ::FString::~FString(&local_70);
  if (!bVar2) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    bVar2 = false;
  }
  else {
    for (local_258 = 1; local_20c = *(int *)&this->field_0x40, local_258 < local_20c;
        local_258 = local_258 + 1) {
      local_1f8 = (longlong *)&this->field_0x38;
      local_228 = (uint)(-1 < local_258);
      bVar2 = local_258 < *(int *)&this->field_0x40;
      local_22c = (uint)bVar2;
      if (-1 >= local_258 || !bVar2) {
        local_120 = 0;
        local_11c = 0;
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      local_118 = *local_1f8;
      local_1e0 = local_118 + (longlong)local_258 * 0x30;
      local_110 = local_118;
      local_108 = local_1e0;
      local_100 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_208 = *(int *)(local_1e0 + 0x20);
      local_204 = local_208;
      ::FString::FString(&local_60,"The subsequent processors has only one dependency");
      bVar2 = FTestHelpers::TestEqual<int,int>(&local_60,local_204,1,local_100);
      local_224 = (uint)!bVar2;
      ::FString::~FString(&local_60);
      if (!bVar2) {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        return false;
      }
      local_88 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_1f0 = (longlong *)&this->field_0x38;
      iVar4 = local_258 + -1;
      local_21c = (uint)(-1 < iVar4);
      bVar2 = iVar4 < *(int *)&this->field_0x40;
      local_220 = (uint)bVar2;
      if (-1 >= iVar4 || !bVar2) {
        local_f8 = 0;
        local_f4 = 0;
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      local_f0 = *local_1f0;
      local_e0 = (FName *)(local_f0 + (longlong)iVar4 * 0x30);
      local_d8 = *local_e0;
      local_1e8 = (undefined8 *)(local_1e0 + 0x18);
      local_214 = 1;
      local_218 = (uint)(0 < *(int *)(local_1e0 + 0x20));
      local_e8 = local_f0;
      local_d0 = local_d8;
      local_80 = local_d8;
      if (local_218 == 0) {
        local_214 = 1;
        local_c8 = 0;
        local_c4 = 0;
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      local_c0 = (FName *)*local_1e8;
      local_a0 = *local_c0;
      local_b8 = local_c0;
      local_b0 = local_c0;
      local_a8 = local_c0;
      local_98 = local_a0;
      local_90 = local_a0;
      local_78 = local_a0;
      ::FString::FString(&local_50,"The subsequent processors depend only on the previous one");
      bVar2 = FTestHelpers::TestEqual<FName,FName>(&local_50,local_78,local_80,local_88);
      local_210 = (uint)!bVar2;
      ::FString::~FString(&local_50);
      if (!bVar2) {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        return false;
      }
    }
    bVar2 = true;
  }
  return bVar2;
}

// SetUp @ 1471a03b0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall FMassDependencySolverTest::FCircularDependency::SetUp(FCircularDependency *this)

{
  UMassTestProcessorBase *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  undefined1 *puVar6;
  TSharedPtr<FMassEntityManager,1> *pTVar7;
  FMassProcessorExecutionOrder *pFVar8;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar9;
  FName FVar10;
  UMassTestProcessor_C *local_560;
  undefined8 *local_558;
  UMassTestProcessor_D *local_550;
  undefined8 *local_548;
  UMassTestProcessor_A *local_540;
  undefined8 *local_538;
  UMassTestProcessor_B *local_530;
  undefined8 *local_528;
  TSharedRef<FMassEntityManager,1> local_520;
  int local_510;
  int local_50c;
  int local_508;
  undefined1 *local_500;
  TSharedPtr<FMassEntityManager,1> *local_4f8;
  UMassTestProcessor_A **local_4f0;
  UMassTestProcessor_A **local_4e8;
  UMassTestProcessor_A **local_4e0;
  longlong local_4d8;
  longlong local_4d0;
  longlong local_4c8;
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  longlong local_4a0;
  longlong local_498;
  undefined8 local_490;
  longlong local_488;
  void *local_480;
  undefined8 *local_478;
  undefined8 *local_470;
  FMassEntityQuery *local_468;
  FMassEntityQuery *local_460;
  FName local_458;
  FName local_450;
  FName local_448;
  FScriptContainerElement *local_440;
  FScriptContainerElement *local_438;
  FScriptContainerElement *local_430;
  undefined4 local_428;
  undefined4 local_424;
  FScriptContainerElement *local_420;
  FScriptContainerElement *local_418;
  FScriptContainerElement *local_410;
  longlong local_408;
  longlong local_400;
  FScriptContainerElement *local_3f8;
  FScriptContainerElement *local_3f0;
  FScriptContainerElement *local_3e8;
  undefined8 *local_3e0;
  TSharedPtr<FMassEntityManager,1> *local_3d8;
  UMassTestProcessor_B **local_3d0;
  UMassTestProcessor_B **local_3c8;
  UMassTestProcessor_B **local_3c0;
  longlong local_3b8;
  longlong local_3b0;
  longlong local_3a8;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined8 local_398;
  undefined8 local_390;
  undefined8 local_388;
  longlong local_380;
  longlong local_378;
  undefined8 local_370;
  longlong local_368;
  void *local_360;
  undefined8 *local_358;
  undefined8 *local_350;
  FMassEntityQuery *local_348;
  FMassEntityQuery *local_340;
  FName local_338;
  FName local_330;
  FName local_328;
  FScriptContainerElement *local_320;
  FScriptContainerElement *local_318;
  FScriptContainerElement *local_310;
  undefined4 local_308;
  undefined4 local_304;
  FScriptContainerElement *local_300;
  FScriptContainerElement *local_2f8;
  FScriptContainerElement *local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  FScriptContainerElement *local_2d8;
  FScriptContainerElement *local_2d0;
  FScriptContainerElement *local_2c8;
  undefined8 *local_2c0;
  TSharedPtr<FMassEntityManager,1> *local_2b8;
  UMassTestProcessor_C **local_2b0;
  UMassTestProcessor_C **local_2a8;
  UMassTestProcessor_C **local_2a0;
  longlong local_298;
  longlong local_290;
  longlong local_288;
  undefined4 local_280;
  undefined4 local_27c;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  longlong local_260;
  longlong local_258;
  undefined8 local_250;
  longlong local_248;
  void *local_240;
  undefined8 *local_238;
  undefined8 *local_230;
  FMassEntityQuery *local_228;
  FMassEntityQuery *local_220;
  FName local_218;
  FName local_210;
  FName local_208;
  FScriptContainerElement *local_200;
  FScriptContainerElement *local_1f8;
  FScriptContainerElement *local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  FScriptContainerElement *local_1e0;
  FScriptContainerElement *local_1d8;
  FScriptContainerElement *local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  FScriptContainerElement *local_1b8;
  FScriptContainerElement *local_1b0;
  FScriptContainerElement *local_1a8;
  undefined8 *local_1a0;
  TSharedPtr<FMassEntityManager,1> *local_198;
  UMassTestProcessor_D **local_190;
  UMassTestProcessor_D **local_188;
  UMassTestProcessor_D **local_180;
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
  undefined8 *local_110;
  FMassEntityQuery *local_108;
  FMassEntityQuery *local_100;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FScriptContainerElement *local_e0;
  FScriptContainerElement *local_d8;
  FScriptContainerElement *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  FScriptContainerElement *local_c0;
  FScriptContainerElement *local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  FScriptContainerElement *local_98;
  FScriptContainerElement *local_90;
  FScriptContainerElement *local_88;
  undefined8 *local_80;
  int local_78;
  TSharedPtr<FMassEntityManager,1> local_50;
  TSharedPtr<FMassEntityManager,1> local_40;
  TSharedPtr<FMassEntityManager,1> local_30;
  TSharedPtr<FMassEntityManager,1> local_20 [2];
  
  FDependencySolverBase::SetUp((FDependencySolverBase *)this);
  local_500 = &this->field_0x48;
  TSharedPtr<FMassEntityManager,1>::ToSharedRef
            ((TSharedPtr<FMassEntityManager,1> *)local_500,&local_520);
  puVar6 = &this->field_0x28;
  local_4f8 = &local_50;
  pTVar7 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                     (local_4f8,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x48);
  local_540 = NewTestProcessor<UMassTestProcessor_A>(pTVar7);
  local_4f0 = *(UMassTestProcessor_A ***)puVar6;
  local_4e8 = local_4f0;
  local_4e0 = local_4f0;
  if ((local_4f0 <= &local_540) &&
     (local_4d8 = *(longlong *)puVar6, local_4d0 = local_4d8, local_4c8 = local_4d8,
     &local_540 < (UMassTestProcessor_A **)(local_4d8 + (longlong)*(int *)&this->field_0x34 * 8))) {
    local_4c0 = 0;
    local_4bc = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_4a0 = (longlong)*(int *)&this->field_0x30;
    local_498 = (longlong)*(int *)&this->field_0x34;
    local_4b8 = *(undefined8 *)puVar6;
    local_4b0 = local_4b8;
    local_4a8 = local_4b8;
    local_490 = local_4b8;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (*(int *)&this->field_0x30 == *(int *)&this->field_0x34) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)puVar6,(int *)&this->field_0x34);
    *(int *)&this->field_0x30 = iVar5;
  }
  iVar5 = *(int *)&this->field_0x30;
  *(int *)&this->field_0x30 = *(int *)&this->field_0x30 + 1;
  local_488 = *(longlong *)puVar6;
  local_480 = (void *)(local_488 + (longlong)iVar5 * 8);
  local_538 = ::operator_new(8,local_480);
  *local_538 = local_540;
  pUVar1 = (UMassTestProcessorBase *)*local_538;
  local_468 = &pUVar1->EntityQuery;
  local_478 = local_538;
  local_470 = local_538;
  FMassFragmentRequirements::Initialize((FMassFragmentRequirements *)local_468,&local_520);
  local_460 = &pUVar1->EntityQuery;
  FMassFragmentRequirements::AddRequirement<FTestFragment_Int>
            ((FMassFragmentRequirements *)local_460,ReadWrite,All);
  pFVar8 = UMassTestProcessorBase::GetMutableExecutionOrder(pUVar1);
  pTVar9 = &pFVar8->ExecuteAfter;
  FVar10 = GetProcessorName<UMassTestProcessor_D>();
  local_458 = (FName)(pTVar9->AllocatorInstance).Data;
  local_450 = local_458;
  local_448 = local_458;
  if (((ulonglong)local_458 <= (ulonglong)FVar10) &&
     (local_440 = (pTVar9->AllocatorInstance).Data, local_438 = local_440, local_430 = local_440,
     (ulonglong)FVar10 <
     (ulonglong)((longlong)local_440 + (longlong)(pFVar8->ExecuteAfter).ArrayMax * 8))) {
    local_428 = 0;
    local_424 = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_408 = (longlong)(pFVar8->ExecuteAfter).ArrayNum;
    local_400 = (longlong)(pFVar8->ExecuteAfter).ArrayMax;
    local_420 = (pTVar9->AllocatorInstance).Data;
    local_418 = local_420;
    local_410 = local_420;
    local_3f8 = local_420;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if ((pFVar8->ExecuteAfter).ArrayNum == (pFVar8->ExecuteAfter).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar9->AllocatorInstance,&(pFVar8->ExecuteAfter).ArrayMax);
    (pFVar8->ExecuteAfter).ArrayNum = iVar5;
  }
  iVar5 = (pFVar8->ExecuteAfter).ArrayNum;
  (pFVar8->ExecuteAfter).ArrayNum = (pFVar8->ExecuteAfter).ArrayNum + 1;
  local_3f0 = (pTVar9->AllocatorInstance).Data;
  local_3e8 = local_3f0 + (longlong)iVar5 * 8;
  local_3e0 = ::operator_new(8,local_3e8);
  *local_3e0 = *(undefined8 *)FVar10;
  puVar6 = &this->field_0x28;
  local_3d8 = &local_40;
  local_78 = iVar5;
  pTVar7 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                     (local_3d8,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x48);
  local_530 = NewTestProcessor<UMassTestProcessor_B>(pTVar7);
  local_3d0 = *(UMassTestProcessor_B ***)puVar6;
  local_3c8 = local_3d0;
  local_3c0 = local_3d0;
  if ((local_3d0 <= &local_530) &&
     (local_3b8 = *(longlong *)puVar6, local_3b0 = local_3b8, local_3a8 = local_3b8,
     &local_530 < (UMassTestProcessor_B **)(local_3b8 + (longlong)*(int *)&this->field_0x34 * 8))) {
    local_3a0 = 0;
    local_39c = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_380 = (longlong)*(int *)&this->field_0x30;
    local_378 = (longlong)*(int *)&this->field_0x34;
    local_398 = *(undefined8 *)puVar6;
    local_390 = local_398;
    local_388 = local_398;
    local_370 = local_398;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (*(int *)&this->field_0x30 == *(int *)&this->field_0x34) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)puVar6,(int *)&this->field_0x34);
    *(int *)&this->field_0x30 = iVar5;
  }
  iVar5 = *(int *)&this->field_0x30;
  *(int *)&this->field_0x30 = *(int *)&this->field_0x30 + 1;
  local_368 = *(longlong *)puVar6;
  local_360 = (void *)(local_368 + (longlong)iVar5 * 8);
  local_528 = ::operator_new(8,local_360);
  *local_528 = local_530;
  pUVar1 = (UMassTestProcessorBase *)*local_528;
  local_348 = &pUVar1->EntityQuery;
  local_358 = local_528;
  local_350 = local_528;
  FMassFragmentRequirements::Initialize((FMassFragmentRequirements *)local_348,&local_520);
  local_340 = &pUVar1->EntityQuery;
  FMassFragmentRequirements::AddRequirement<FTestFragment_Int>
            ((FMassFragmentRequirements *)local_340,ReadWrite,All);
  pFVar8 = UMassTestProcessorBase::GetMutableExecutionOrder(pUVar1);
  pTVar9 = &pFVar8->ExecuteAfter;
  FVar10 = GetProcessorName<UMassTestProcessor_A>();
  local_338 = (FName)(pTVar9->AllocatorInstance).Data;
  local_330 = local_338;
  local_328 = local_338;
  if (((ulonglong)local_338 <= (ulonglong)FVar10) &&
     (local_320 = (pTVar9->AllocatorInstance).Data, local_318 = local_320, local_310 = local_320,
     (ulonglong)FVar10 <
     (ulonglong)((longlong)local_320 + (longlong)(pFVar8->ExecuteAfter).ArrayMax * 8))) {
    local_308 = 0;
    local_304 = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_2e8 = (longlong)(pFVar8->ExecuteAfter).ArrayNum;
    local_2e0 = (longlong)(pFVar8->ExecuteAfter).ArrayMax;
    local_300 = (pTVar9->AllocatorInstance).Data;
    local_2f8 = local_300;
    local_2f0 = local_300;
    local_2d8 = local_300;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if ((pFVar8->ExecuteAfter).ArrayNum == (pFVar8->ExecuteAfter).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar9->AllocatorInstance,&(pFVar8->ExecuteAfter).ArrayMax);
    (pFVar8->ExecuteAfter).ArrayNum = iVar5;
  }
  iVar5 = (pFVar8->ExecuteAfter).ArrayNum;
  (pFVar8->ExecuteAfter).ArrayNum = (pFVar8->ExecuteAfter).ArrayNum + 1;
  local_2d0 = (pTVar9->AllocatorInstance).Data;
  local_2c8 = local_2d0 + (longlong)iVar5 * 8;
  local_2c0 = ::operator_new(8,local_2c8);
  *local_2c0 = *(undefined8 *)FVar10;
  puVar6 = &this->field_0x28;
  local_2b8 = &local_30;
  local_510 = iVar5;
  pTVar7 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                     (local_2b8,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x48);
  local_560 = NewTestProcessor<UMassTestProcessor_C>(pTVar7);
  local_2b0 = *(UMassTestProcessor_C ***)puVar6;
  local_2a8 = local_2b0;
  local_2a0 = local_2b0;
  if ((local_2b0 <= &local_560) &&
     (local_298 = *(longlong *)puVar6, local_290 = local_298, local_288 = local_298,
     &local_560 < (UMassTestProcessor_C **)(local_298 + (longlong)*(int *)&this->field_0x34 * 8))) {
    local_280 = 0;
    local_27c = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_260 = (longlong)*(int *)&this->field_0x30;
    local_258 = (longlong)*(int *)&this->field_0x34;
    local_278 = *(undefined8 *)puVar6;
    local_270 = local_278;
    local_268 = local_278;
    local_250 = local_278;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (*(int *)&this->field_0x30 == *(int *)&this->field_0x34) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)puVar6,(int *)&this->field_0x34);
    *(int *)&this->field_0x30 = iVar5;
  }
  iVar5 = *(int *)&this->field_0x30;
  *(int *)&this->field_0x30 = *(int *)&this->field_0x30 + 1;
  local_248 = *(longlong *)puVar6;
  local_240 = (void *)(local_248 + (longlong)iVar5 * 8);
  local_558 = ::operator_new(8,local_240);
  *local_558 = local_560;
  pUVar1 = (UMassTestProcessorBase *)*local_558;
  local_228 = &pUVar1->EntityQuery;
  local_238 = local_558;
  local_230 = local_558;
  FMassFragmentRequirements::Initialize((FMassFragmentRequirements *)local_228,&local_520);
  local_220 = &pUVar1->EntityQuery;
  FMassFragmentRequirements::AddRequirement<FTestFragment_Int>
            ((FMassFragmentRequirements *)local_220,ReadWrite,All);
  pFVar8 = UMassTestProcessorBase::GetMutableExecutionOrder(pUVar1);
  pTVar9 = &pFVar8->ExecuteAfter;
  FVar10 = GetProcessorName<UMassTestProcessor_B>();
  local_218 = (FName)(pTVar9->AllocatorInstance).Data;
  local_210 = local_218;
  local_208 = local_218;
  if (((ulonglong)local_218 <= (ulonglong)FVar10) &&
     (local_200 = (pTVar9->AllocatorInstance).Data, local_1f8 = local_200, local_1f0 = local_200,
     (ulonglong)FVar10 <
     (ulonglong)((longlong)local_200 + (longlong)(pFVar8->ExecuteAfter).ArrayMax * 8))) {
    local_1e8 = 0;
    local_1e4 = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_1c8 = (longlong)(pFVar8->ExecuteAfter).ArrayNum;
    local_1c0 = (longlong)(pFVar8->ExecuteAfter).ArrayMax;
    local_1e0 = (pTVar9->AllocatorInstance).Data;
    local_1d8 = local_1e0;
    local_1d0 = local_1e0;
    local_1b8 = local_1e0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if ((pFVar8->ExecuteAfter).ArrayNum == (pFVar8->ExecuteAfter).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar9->AllocatorInstance,&(pFVar8->ExecuteAfter).ArrayMax);
    (pFVar8->ExecuteAfter).ArrayNum = iVar5;
  }
  iVar5 = (pFVar8->ExecuteAfter).ArrayNum;
  (pFVar8->ExecuteAfter).ArrayNum = (pFVar8->ExecuteAfter).ArrayNum + 1;
  local_1b0 = (pTVar9->AllocatorInstance).Data;
  local_1a8 = local_1b0 + (longlong)iVar5 * 8;
  local_1a0 = ::operator_new(8,local_1a8);
  *local_1a0 = *(undefined8 *)FVar10;
  puVar6 = &this->field_0x28;
  local_198 = local_20;
  local_50c = iVar5;
  pTVar7 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                     (local_198,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x48);
  local_550 = NewTestProcessor<UMassTestProcessor_D>(pTVar7);
  local_190 = *(UMassTestProcessor_D ***)puVar6;
  local_188 = local_190;
  local_180 = local_190;
  if ((local_190 <= &local_550) &&
     (local_178 = *(longlong *)puVar6, local_170 = local_178, local_168 = local_178,
     &local_550 < (UMassTestProcessor_D **)(local_178 + (longlong)*(int *)&this->field_0x34 * 8))) {
    local_160 = 0;
    local_15c = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_140 = (longlong)*(int *)&this->field_0x30;
    local_138 = (longlong)*(int *)&this->field_0x34;
    local_158 = *(undefined8 *)puVar6;
    local_150 = local_158;
    local_148 = local_158;
    local_130 = local_158;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if (*(int *)&this->field_0x30 == *(int *)&this->field_0x34) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)puVar6,(int *)&this->field_0x34);
    *(int *)&this->field_0x30 = iVar5;
  }
  iVar5 = *(int *)&this->field_0x30;
  *(int *)&this->field_0x30 = *(int *)&this->field_0x30 + 1;
  local_128 = *(longlong *)puVar6;
  local_120 = (void *)(local_128 + (longlong)iVar5 * 8);
  local_548 = ::operator_new(8,local_120);
  *local_548 = local_550;
  pUVar1 = (UMassTestProcessorBase *)*local_548;
  local_108 = &pUVar1->EntityQuery;
  local_118 = local_548;
  local_110 = local_548;
  FMassFragmentRequirements::Initialize((FMassFragmentRequirements *)local_108,&local_520);
  local_100 = &pUVar1->EntityQuery;
  FMassFragmentRequirements::AddRequirement<FTestFragment_Int>
            ((FMassFragmentRequirements *)local_100,ReadWrite,All);
  pFVar8 = UMassTestProcessorBase::GetMutableExecutionOrder(pUVar1);
  pTVar9 = &pFVar8->ExecuteAfter;
  FVar10 = GetProcessorName<UMassTestProcessor_C>();
  local_f8 = (FName)(pTVar9->AllocatorInstance).Data;
  local_f0 = local_f8;
  local_e8 = local_f8;
  if (((ulonglong)local_f8 <= (ulonglong)FVar10) &&
     (local_e0 = (pTVar9->AllocatorInstance).Data, local_d8 = local_e0, local_d0 = local_e0,
     (ulonglong)FVar10 <
     (ulonglong)((longlong)local_e0 + (longlong)(pFVar8->ExecuteAfter).ArrayMax * 8))) {
    local_c8 = 0;
    local_c4 = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_a8 = (longlong)(pFVar8->ExecuteAfter).ArrayNum;
    local_a0 = (longlong)(pFVar8->ExecuteAfter).ArrayMax;
    local_c0 = (pTVar9->AllocatorInstance).Data;
    local_b8 = local_c0;
    local_b0 = local_c0;
    local_98 = local_c0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  if ((pFVar8->ExecuteAfter).ArrayNum == (pFVar8->ExecuteAfter).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar9->AllocatorInstance,&(pFVar8->ExecuteAfter).ArrayMax);
    (pFVar8->ExecuteAfter).ArrayNum = iVar5;
  }
  iVar5 = (pFVar8->ExecuteAfter).ArrayNum;
  (pFVar8->ExecuteAfter).ArrayNum = (pFVar8->ExecuteAfter).ArrayNum + 1;
  local_90 = (pTVar9->AllocatorInstance).Data;
  local_88 = local_90 + (longlong)iVar5 * 8;
  local_80 = ::operator_new(8,local_88);
  *local_80 = *(undefined8 *)FVar10;
  local_508 = iVar5;
  TSharedRef<FMassEntityManager,1>::~TSharedRef<FMassEntityManager,1>(&local_520);
  return true;
}

