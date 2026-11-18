// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// InstantTest @ 147145b30

/* WARNING: Removing unreachable block (ram,0x000147145e42) */
/* WARNING: Removing unreachable block (ram,0x0001471460d2) */
/* WARNING: Removing unreachable block (ram,0x0001471462ea) */
/* WARNING: Removing unreachable block (ram,0x00014714651a) */
/* WARNING: Removing unreachable block (ram,0x00014714674a) */
/* WARNING: Removing unreachable block (ram,0x000147146a13) */
/* WARNING: Removing unreachable block (ram,0x000147146ccd) */
/* WARNING: Removing unreachable block (ram,0x000147146f87) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall FMassDependencySolverTest::FComplexScenario::InstantTest(FComplexScenario *this)

{
  EDependencyNodeType EVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  bool local_567;
  int local_548;
  longlong local_4a0;
  longlong local_498;
  longlong *local_490;
  longlong local_488;
  longlong local_480;
  longlong *local_478;
  longlong local_470;
  longlong local_468;
  longlong *local_460;
  longlong local_458;
  longlong local_450;
  longlong *local_448;
  longlong local_440;
  longlong local_438;
  longlong *local_430;
  longlong local_428;
  longlong local_420;
  longlong *local_418;
  longlong local_410;
  longlong local_408;
  longlong *local_400;
  longlong local_3f8;
  longlong local_3f0;
  FAutomationTestBase *local_3e8;
  undefined4 local_3e0;
  undefined4 local_3dc;
  longlong local_3d8;
  longlong local_3d0;
  longlong local_3c8;
  FAutomationTestBase *local_3c0;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined1 *local_3b0;
  undefined1 *local_3a8;
  undefined1 *local_3a0;
  FName local_398;
  undefined1 *local_390;
  undefined8 local_388;
  longlong local_380;
  longlong local_378;
  FAutomationTestBase *local_370;
  undefined4 local_368;
  undefined4 local_364;
  longlong local_360;
  longlong local_358;
  undefined1 *local_350;
  FName local_348;
  undefined1 *local_340;
  undefined8 local_338;
  longlong local_330;
  longlong local_328;
  undefined4 local_320;
  undefined4 local_31c;
  longlong local_318;
  longlong local_310;
  undefined1 *local_308;
  FName local_300;
  undefined1 *local_2f8;
  undefined8 local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  longlong local_2d0;
  longlong local_2c8;
  undefined1 *local_2c0;
  FName local_2b8;
  undefined1 *local_2b0;
  undefined8 local_2a8;
  longlong local_2a0;
  longlong local_298;
  undefined4 local_290;
  undefined4 local_28c;
  longlong local_288;
  longlong local_280;
  undefined1 *local_278;
  FName local_270;
  undefined1 *local_268;
  undefined8 local_260;
  longlong local_258;
  longlong local_250;
  FAutomationTestBase *local_248;
  undefined4 local_240;
  undefined4 local_23c;
  longlong local_238;
  longlong local_230;
  undefined1 *local_228;
  FName local_220;
  undefined1 *local_218;
  undefined8 local_210;
  longlong local_208;
  longlong local_200;
  FAutomationTestBase *local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  longlong local_1e8;
  longlong local_1e0;
  undefined1 *local_1d8;
  FName local_1d0;
  undefined1 *local_1c8;
  undefined8 local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  FAutomationTestBase *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  longlong local_198;
  longlong local_190;
  undefined1 *local_188;
  FName local_180;
  undefined1 *local_178;
  undefined8 local_170;
  longlong local_168;
  longlong local_160;
  FAutomationTestBase *local_158;
  FString local_150;
  FString local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c0;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_98;
  longlong *local_90;
  longlong *local_80;
  longlong *local_78;
  longlong *local_68;
  longlong *local_60;
  longlong *local_50;
  longlong *local_48;
  longlong *local_38;
  longlong *local_30;
  longlong *local_28;
  
  FDependencySolverBase::Solve((FDependencySolverBase *)this);
  local_3e8 = FAITestBase::GetTestRunner((FAITestBase *)this);
  iVar2 = *(int *)&this->field_0x40;
  iVar3 = *(int *)&this->field_0x30;
  ::FString::FString(&local_140,"None of the processors should have been pruned");
  bVar5 = FAutomationTestBase::TestTrue(local_3e8,&local_140,iVar2 == iVar3);
  ::FString::~FString(&local_140);
  if (!bVar5) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    return false;
  }
  for (local_548 = 0; local_548 < *(int *)&this->field_0x40; local_548 = local_548 + 1) {
    local_3c0 = FAITestBase::GetTestRunner((FAITestBase *)this);
    if (local_548 < 0 || *(int *)&this->field_0x40 <= local_548) {
      local_3e0 = 0;
      local_3dc = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    local_3d8 = *(longlong *)&this->field_0x38;
    local_3c8 = local_3d8 + (longlong)local_548 * 0x30;
    EVar1 = *(EDependencyNodeType *)(local_3c8 + 0x10);
    local_3d0 = local_3d8;
    ::FString::FString(&local_130,"We expect only processor nodes in the results");
    bVar5 = FTestHelpers::
            TestEqual<enum_FMassProcessorOrderInfo::EDependencyNodeType,enum_FMassProcessorOrderInfo::EDependencyNodeType>
                      (&local_130,EVar1,Processor,local_3c0);
    ::FString::~FString(&local_130);
    if (!bVar5) {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      return false;
    }
  }
  local_370 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_398 = GetProcessorName<UMassTestProcessor_D>();
  if (*(int *)&this->field_0x40 < 1) {
    local_3b8 = 0;
    local_3b4 = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  local_3b0 = *(undefined1 **)&this->field_0x38;
  local_388 = *(undefined8 *)local_398;
  local_4a0 = 0;
  puVar8 = local_3b0;
  plVar10 = &local_4a0;
  local_3a8 = local_3b0;
  local_3a0 = local_3b0;
  local_390 = local_3b0;
  for (lVar7 = 8; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)plVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    plVar10 = (longlong *)((longlong)plVar10 + 1);
  }
  local_d8 = &local_4a0;
  local_380 = local_4a0;
  local_498 = 0;
  puVar9 = &local_388;
  plVar10 = &local_498;
  for (lVar7 = 8; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)plVar10 = *(undefined1 *)puVar9;
    puVar9 = (undefined8 *)((longlong)puVar9 + 1);
    plVar10 = (longlong *)((longlong)plVar10 + 1);
  }
  local_d0 = &local_498;
  local_378 = local_498;
  bVar5 = local_380 == local_498;
  ::FString::FString(&local_120,"D is the only fully dependency-less processor so should be first");
  bVar5 = FAutomationTestBase::TestTrue(local_370,&local_120,bVar5);
  ::FString::~FString(&local_120);
  if (!bVar5) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    return false;
  }
  local_248 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_348 = GetProcessorName<UMassTestProcessor_B>();
  local_490 = (longlong *)&this->field_0x38;
  if (*(int *)&this->field_0x40 < 2) {
    local_368 = 0;
    local_364 = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  local_360 = *local_490;
  local_358 = local_360;
  local_350 = (undefined1 *)(local_360 + 0x30);
  local_340 = local_350;
  local_338 = *(undefined8 *)local_348;
  local_488 = 0;
  puVar8 = local_350;
  plVar10 = &local_488;
  for (lVar7 = 8; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)plVar10 = *puVar8;
    puVar8 = puVar8 + 1;
    plVar10 = (longlong *)((longlong)plVar10 + 1);
  }
  local_c0 = &local_488;
  local_330 = local_488;
  local_480 = 0;
  puVar9 = &local_338;
  plVar10 = &local_480;
  for (lVar7 = 8; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)plVar10 = *(undefined1 *)puVar9;
    puVar9 = (undefined8 *)((longlong)puVar9 + 1);
    plVar10 = (longlong *)((longlong)plVar10 + 1);
  }
  local_28 = &local_480;
  local_328 = local_480;
  if (local_330 == local_480) {
LAB_1471464dd:
    local_2b8 = GetProcessorName<UMassTestProcessor_C>();
    local_460 = (longlong *)&this->field_0x38;
    if (*(int *)&this->field_0x40 < 2) {
      local_2d8 = 0;
      local_2d4 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    local_2d0 = *local_460;
    local_2c8 = local_2d0;
    local_2c0 = (undefined1 *)(local_2d0 + 0x30);
    local_2b0 = local_2c0;
    local_2a8 = *(undefined8 *)local_2b8;
    local_458 = 0;
    puVar8 = local_2c0;
    plVar10 = &local_458;
    for (lVar7 = 8; lVar7 != 0; lVar7 = lVar7 + -1) {
      *(undefined1 *)plVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      plVar10 = (longlong *)((longlong)plVar10 + 1);
    }
    local_98 = &local_458;
    local_2a0 = local_458;
    local_450 = 0;
    puVar9 = &local_2a8;
    plVar10 = &local_450;
    for (lVar7 = 8; lVar7 != 0; lVar7 = lVar7 + -1) {
      *(undefined1 *)plVar10 = *(undefined1 *)puVar9;
      puVar9 = (undefined8 *)((longlong)puVar9 + 1);
      plVar10 = (longlong *)((longlong)plVar10 + 1);
    }
    local_90 = &local_450;
    local_298 = local_450;
    if (local_2a0 != local_450) {
      local_270 = GetProcessorName<UMassTestProcessor_C>();
      local_448 = (longlong *)&this->field_0x38;
      if (*(int *)&this->field_0x40 < 3) {
        local_290 = 0;
        local_28c = 0;
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      local_288 = *local_448;
      local_280 = local_288;
      local_278 = (undefined1 *)(local_288 + 0x60);
      local_268 = local_278;
      local_260 = *(undefined8 *)local_270;
      local_440 = 0;
      puVar8 = local_278;
      plVar10 = &local_440;
      for (lVar7 = 8; lVar7 != 0; lVar7 = lVar7 + -1) {
        *(undefined1 *)plVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        plVar10 = (longlong *)((longlong)plVar10 + 1);
      }
      local_80 = &local_440;
      local_258 = local_440;
      local_438 = 0;
      puVar9 = &local_260;
      plVar10 = &local_438;
      for (lVar7 = 8; lVar7 != 0; lVar7 = lVar7 + -1) {
        *(undefined1 *)plVar10 = *(undefined1 *)puVar9;
        puVar9 = (undefined8 *)((longlong)puVar9 + 1);
        plVar10 = (longlong *)((longlong)plVar10 + 1);
      }
      local_78 = &local_438;
      local_250 = local_438;
      if (local_258 != local_438) goto LAB_147146940;
    }
    local_567 = true;
  }
  else {
    local_300 = GetProcessorName<UMassTestProcessor_B>();
    local_478 = (longlong *)&this->field_0x38;
    if (*(int *)&this->field_0x40 < 3) {
      local_320 = 0;
      local_31c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    local_318 = *local_478;
    local_310 = local_318;
    local_308 = (undefined1 *)(local_318 + 0x60);
    local_2f8 = local_308;
    local_2f0 = *(undefined8 *)local_300;
    local_470 = 0;
    puVar8 = local_308;
    plVar10 = &local_470;
    for (lVar7 = 8; lVar7 != 0; lVar7 = lVar7 + -1) {
      *(undefined1 *)plVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      plVar10 = (longlong *)((longlong)plVar10 + 1);
    }
    local_b0 = &local_470;
    local_2e8 = local_470;
    local_468 = 0;
    puVar9 = &local_2f0;
    plVar10 = &local_468;
    for (lVar7 = 8; lVar7 != 0; lVar7 = lVar7 + -1) {
      *(undefined1 *)plVar10 = *(undefined1 *)puVar9;
      puVar9 = (undefined8 *)((longlong)puVar9 + 1);
      plVar10 = (longlong *)((longlong)plVar10 + 1);
    }
    local_a8 = &local_468;
    local_2e0 = local_468;
    if (local_2e8 == local_468) goto LAB_1471464dd;
LAB_147146940:
    local_567 = false;
  }
  ::FString::FString(&local_110,"B and C come next");
  bVar5 = FAutomationTestBase::TestTrue(local_248,&local_110,local_567);
  ::FString::~FString(&local_110);
  if (bVar5) {
    local_1f8 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_220 = GetProcessorName<UMassTestProcessor_E>();
    local_430 = (longlong *)&this->field_0x38;
    if (*(int *)&this->field_0x40 < 4) {
      local_240 = 0;
      local_23c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    local_238 = *local_430;
    local_230 = local_238;
    local_228 = (undefined1 *)(local_238 + 0x90);
    local_218 = local_228;
    local_210 = *(undefined8 *)local_220;
    local_428 = 0;
    puVar8 = local_228;
    plVar10 = &local_428;
    for (lVar7 = 8; lVar7 != 0; lVar7 = lVar7 + -1) {
      *(undefined1 *)plVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      plVar10 = (longlong *)((longlong)plVar10 + 1);
    }
    local_68 = &local_428;
    local_208 = local_428;
    local_420 = 0;
    puVar9 = &local_210;
    plVar10 = &local_420;
    for (lVar7 = 8; lVar7 != 0; lVar7 = lVar7 + -1) {
      *(undefined1 *)plVar10 = *(undefined1 *)puVar9;
      puVar9 = (undefined8 *)((longlong)puVar9 + 1);
      plVar10 = (longlong *)((longlong)plVar10 + 1);
    }
    local_60 = &local_420;
    local_200 = local_420;
    bVar5 = local_208 == local_420;
    ::FString::FString(&local_100,"Following by E");
    bVar5 = FAutomationTestBase::TestTrue(local_1f8,&local_100,bVar5);
    ::FString::~FString(&local_100);
    if (bVar5) {
      local_1a8 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_1d0 = GetProcessorName<UMassTestProcessor_A>();
      local_418 = (longlong *)&this->field_0x38;
      if (*(int *)&this->field_0x40 < 5) {
        local_1f0 = 0;
        local_1ec = 0;
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      local_1e8 = *local_418;
      local_1e0 = local_1e8;
      local_1d8 = (undefined1 *)(local_1e8 + 0xc0);
      local_1c8 = local_1d8;
      local_1c0 = *(undefined8 *)local_1d0;
      local_410 = 0;
      puVar8 = local_1d8;
      plVar10 = &local_410;
      for (lVar7 = 8; lVar7 != 0; lVar7 = lVar7 + -1) {
        *(undefined1 *)plVar10 = *puVar8;
        puVar8 = puVar8 + 1;
        plVar10 = (longlong *)((longlong)plVar10 + 1);
      }
      local_50 = &local_410;
      local_1b8 = local_410;
      local_408 = 0;
      puVar9 = &local_1c0;
      plVar10 = &local_408;
      for (lVar7 = 8; lVar7 != 0; lVar7 = lVar7 + -1) {
        *(undefined1 *)plVar10 = *(undefined1 *)puVar9;
        puVar9 = (undefined8 *)((longlong)puVar9 + 1);
        plVar10 = (longlong *)((longlong)plVar10 + 1);
      }
      local_48 = &local_408;
      local_1b0 = local_408;
      bVar5 = local_1b8 == local_408;
      ::FString::FString(&local_f0,"Then A");
      bVar5 = FAutomationTestBase::TestTrue(local_1a8,&local_f0,bVar5);
      ::FString::~FString(&local_f0);
      if (bVar5) {
        local_158 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_180 = GetProcessorName<UMassTestProcessor_F>();
        local_400 = (longlong *)&this->field_0x38;
        if (*(int *)&this->field_0x40 < 6) {
          local_1a0 = 0;
          local_19c = 0;
          UE::Core::Private::FormatStringSan::
          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        local_198 = *local_400;
        local_190 = local_198;
        local_188 = (undefined1 *)(local_198 + 0xf0);
        local_178 = local_188;
        local_170 = *(undefined8 *)local_180;
        local_3f8 = 0;
        puVar8 = local_188;
        plVar10 = &local_3f8;
        for (lVar7 = 8; lVar7 != 0; lVar7 = lVar7 + -1) {
          *(undefined1 *)plVar10 = *puVar8;
          puVar8 = puVar8 + 1;
          plVar10 = (longlong *)((longlong)plVar10 + 1);
        }
        local_38 = &local_3f8;
        local_168 = local_3f8;
        local_3f0 = 0;
        puVar9 = &local_170;
        plVar10 = &local_3f0;
        for (lVar7 = 8; lVar7 != 0; lVar7 = lVar7 + -1) {
          *(undefined1 *)plVar10 = *(undefined1 *)puVar9;
          puVar9 = (undefined8 *)((longlong)puVar9 + 1);
          plVar10 = (longlong *)((longlong)plVar10 + 1);
        }
        local_30 = &local_3f0;
        local_160 = local_3f0;
        bVar5 = local_168 == local_3f0;
        ::FString::FString(&local_150,"F is last");
        bVar5 = FAutomationTestBase::TestTrue(local_158,&local_150,bVar5);
        ::FString::~FString(&local_150);
        if (bVar5) {
          bVar5 = true;
        }
        else {
          UE::AITestSuite::ConditionallyBreakOnTestFail();
          bVar5 = false;
        }
      }
      else {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        bVar5 = false;
      }
    }
    else {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      bVar5 = false;
    }
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    bVar5 = false;
  }
  return bVar5;
}

// SetUp @ 1471a2ee0

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall FMassDependencySolverTest::FComplexScenario::SetUp(FComplexScenario *this)

{
  UMassTestProcessorBase *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 *puVar5;
  TSharedPtr<FMassEntityManager,1> *pTVar6;
  FMassProcessorExecutionOrder *pFVar7;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong *plVar9;
  FName local_770;
  undefined8 *local_768;
  UMassTestProcessor_F *local_760;
  undefined8 *local_758;
  UMassTestProcessor_E *local_750;
  UMassTestProcessor_A *local_748;
  undefined8 *local_740;
  FName local_738;
  UMassTestProcessor_B *local_730;
  undefined8 *local_728;
  UMassTestProcessor_C *local_720;
  undefined8 *local_718;
  UMassTestProcessor_D *local_710;
  undefined8 *local_708;
  UMassTestProcessorBase *local_700;
  int local_6f8;
  int local_6f4;
  int local_6f0;
  int local_6ec;
  TSharedPtr<FMassEntityManager,1> *local_6e0;
  UMassTestProcessor_A **local_6d8;
  UMassTestProcessor_A **local_6d0;
  UMassTestProcessor_A **local_6c8;
  longlong local_6c0;
  longlong local_6b8;
  longlong local_6b0;
  undefined4 local_6a8;
  undefined4 local_6a4;
  undefined8 local_6a0;
  undefined8 local_698;
  undefined8 local_690;
  longlong local_688;
  longlong local_680;
  undefined8 local_678;
  longlong local_670;
  void *local_668;
  undefined8 *local_660;
  undefined8 *local_658;
  FName local_650;
  FName local_648;
  FName *local_640;
  FName *local_638;
  FName *local_630;
  FScriptContainerElement *local_628;
  FScriptContainerElement *local_620;
  FScriptContainerElement *local_618;
  undefined4 local_610;
  undefined4 local_60c;
  FScriptContainerElement *local_608;
  FScriptContainerElement *local_600;
  FScriptContainerElement *local_5f8;
  longlong local_5f0;
  longlong local_5e8;
  FScriptContainerElement *local_5e0;
  FScriptContainerElement *local_5d8;
  FScriptContainerElement *local_5d0;
  FName *local_5c8;
  UClass *local_5c0;
  longlong local_5b8;
  FScriptContainerElement *local_5b0;
  FScriptContainerElement *local_5a8;
  FScriptContainerElement *local_5a0;
  FScriptContainerElement *local_598;
  FScriptContainerElement *local_590;
  FScriptContainerElement *local_588;
  undefined4 local_580;
  undefined4 local_57c;
  FScriptContainerElement *local_578;
  FScriptContainerElement *local_570;
  FScriptContainerElement *local_568;
  longlong local_560;
  longlong local_558;
  FScriptContainerElement *local_550;
  FScriptContainerElement *local_548;
  FScriptContainerElement *local_540;
  longlong *local_538;
  TSharedPtr<FMassEntityManager,1> *local_530;
  UMassTestProcessor_B **local_528;
  UMassTestProcessor_B **local_520;
  UMassTestProcessor_B **local_518;
  longlong local_510;
  longlong local_508;
  longlong local_500;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  longlong local_4d8;
  longlong local_4d0;
  undefined8 local_4c8;
  longlong local_4c0;
  void *local_4b8;
  undefined8 *local_4b0;
  undefined8 *local_4a8;
  FName local_4a0;
  UMassTestProcessorBase *local_498;
  FName local_490;
  TSharedPtr<FMassEntityManager,1> *local_488;
  UMassTestProcessor_C **local_480;
  UMassTestProcessor_C **local_478;
  UMassTestProcessor_C **local_470;
  longlong local_468;
  longlong local_460;
  longlong local_458;
  undefined4 local_450;
  undefined4 local_44c;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 local_438;
  longlong local_430;
  longlong local_428;
  undefined8 local_420;
  longlong local_418;
  void *local_410;
  undefined8 *local_408;
  undefined8 *local_400;
  FName local_3f8;
  UMassTestProcessorBase *local_3f0;
  FName local_3e8;
  TSharedPtr<FMassEntityManager,1> *local_3e0;
  UMassTestProcessor_D **local_3d8;
  UMassTestProcessor_D **local_3d0;
  UMassTestProcessor_D **local_3c8;
  longlong local_3c0;
  longlong local_3b8;
  longlong local_3b0;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  longlong local_388;
  longlong local_380;
  undefined8 local_378;
  longlong local_370;
  void *local_368;
  undefined8 *local_360;
  undefined8 *local_358;
  UClass *local_350;
  longlong local_348;
  FScriptContainerElement *local_340;
  FScriptContainerElement *local_338;
  FScriptContainerElement *local_330;
  FScriptContainerElement *local_328;
  FScriptContainerElement *local_320;
  FScriptContainerElement *local_318;
  undefined4 local_310;
  undefined4 local_30c;
  FScriptContainerElement *local_308;
  FScriptContainerElement *local_300;
  FScriptContainerElement *local_2f8;
  longlong local_2f0;
  longlong local_2e8;
  FScriptContainerElement *local_2e0;
  FScriptContainerElement *local_2d8;
  FScriptContainerElement *local_2d0;
  longlong *local_2c8;
  FName *local_2c0;
  FName *local_2b8;
  FName *local_2b0;
  FScriptContainerElement *local_2a8;
  FScriptContainerElement *local_2a0;
  FScriptContainerElement *local_298;
  undefined4 local_290;
  undefined4 local_28c;
  FScriptContainerElement *local_288;
  FScriptContainerElement *local_280;
  FScriptContainerElement *local_278;
  longlong local_270;
  longlong local_268;
  FScriptContainerElement *local_260;
  FScriptContainerElement *local_258;
  FScriptContainerElement *local_250;
  FName *local_248;
  TSharedPtr<FMassEntityManager,1> *local_240;
  UMassTestProcessor_E **local_238;
  UMassTestProcessor_E **local_230;
  UMassTestProcessor_E **local_228;
  longlong local_220;
  longlong local_218;
  longlong local_210;
  undefined4 local_208;
  undefined4 local_204;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  longlong local_1d0;
  void *local_1c8;
  undefined8 *local_1c0;
  undefined8 *local_1b8;
  FName local_1b0;
  UMassTestProcessorBase *local_1a8;
  FName local_1a0;
  TSharedPtr<FMassEntityManager,1> *local_198;
  UMassTestProcessor_F **local_190;
  UMassTestProcessor_F **local_188;
  UMassTestProcessor_F **local_180;
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
  UMassTestProcessorBase *local_108;
  UClass *local_100;
  longlong local_f8;
  FScriptContainerElement *local_f0;
  FScriptContainerElement *local_e8;
  FScriptContainerElement *local_e0;
  FScriptContainerElement *local_d8;
  FScriptContainerElement *local_d0;
  FScriptContainerElement *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  FScriptContainerElement *local_b8;
  FScriptContainerElement *local_b0;
  FScriptContainerElement *local_a8;
  longlong local_a0;
  longlong local_98;
  FScriptContainerElement *local_90;
  FScriptContainerElement *local_88;
  FScriptContainerElement *local_80;
  TSharedPtr<FMassEntityManager,1> local_70;
  TSharedPtr<FMassEntityManager,1> local_60;
  TSharedPtr<FMassEntityManager,1> local_50;
  TSharedPtr<FMassEntityManager,1> local_40;
  TSharedPtr<FMassEntityManager,1> local_30;
  TSharedPtr<FMassEntityManager,1> local_20 [2];
  
  FDependencySolverBase::SetUp((FDependencySolverBase *)this);
  puVar5 = &this->field_0x28;
  local_6e0 = &local_70;
  pTVar6 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                     (local_6e0,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x48);
  local_748 = NewTestProcessor<UMassTestProcessor_A>(pTVar6);
  local_6d8 = *(UMassTestProcessor_A ***)puVar5;
  local_6d0 = local_6d8;
  local_6c8 = local_6d8;
  if (local_6d8 <= &local_748) {
    local_6c0 = *(longlong *)puVar5;
    local_6b8 = local_6c0;
    local_6b0 = local_6c0;
    if (&local_748 < (UMassTestProcessor_A **)(local_6c0 + (longlong)*(int *)&this->field_0x34 * 8))
    {
      local_6a8 = 0;
      local_6a4 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_688 = (longlong)*(int *)&this->field_0x30;
      local_680 = (longlong)*(int *)&this->field_0x34;
      local_6a0 = *(undefined8 *)puVar5;
      local_698 = local_6a0;
      local_690 = local_6a0;
      local_678 = local_6a0;
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
  }
  if (*(int *)&this->field_0x30 == *(int *)&this->field_0x34) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)puVar5,(int *)&this->field_0x34);
    *(int *)&this->field_0x30 = iVar4;
  }
  iVar4 = *(int *)&this->field_0x30;
  *(int *)&this->field_0x30 = *(int *)&this->field_0x30 + 1;
  local_670 = *(longlong *)puVar5;
  local_668 = (void *)(local_670 + (longlong)iVar4 * 8);
  local_740 = ::operator_new(8,local_668);
  *local_740 = local_748;
  this_00 = (UMassTestProcessorBase *)*local_740;
  local_660 = local_740;
  local_658 = local_740;
  ::FName::FName(&local_650,L"X.Z");
  local_648 = local_650;
  pFVar7 = UMassTestProcessorBase::GetMutableExecutionOrder(this_00);
  pFVar7->ExecuteInGroup = local_648;
  pFVar7 = UMassTestProcessorBase::GetMutableExecutionOrder(this_00);
  pTVar8 = &pFVar7->ExecuteAfter;
  ::FName::FName(&local_738,L"X.Y");
  local_640 = (FName *)(pTVar8->AllocatorInstance).Data;
  local_638 = local_640;
  local_630 = local_640;
  if (local_640 <= &local_738) {
    local_628 = (pTVar8->AllocatorInstance).Data;
    local_620 = local_628;
    local_618 = local_628;
    if (&local_738 < (FName *)(local_628 + (longlong)(pFVar7->ExecuteAfter).ArrayMax * 8)) {
      local_610 = 0;
      local_60c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_5f0 = (longlong)(pFVar7->ExecuteAfter).ArrayNum;
      local_5e8 = (longlong)(pFVar7->ExecuteAfter).ArrayMax;
      local_608 = (pTVar8->AllocatorInstance).Data;
      local_600 = local_608;
      local_5f8 = local_608;
      local_5e0 = local_608;
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
  }
  if ((pFVar7->ExecuteAfter).ArrayNum == (pFVar7->ExecuteAfter).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar8->AllocatorInstance,&(pFVar7->ExecuteAfter).ArrayMax);
    (pFVar7->ExecuteAfter).ArrayNum = iVar4;
  }
  iVar4 = (pFVar7->ExecuteAfter).ArrayNum;
  (pFVar7->ExecuteAfter).ArrayNum = (pFVar7->ExecuteAfter).ArrayNum + 1;
  local_5d8 = (pTVar8->AllocatorInstance).Data;
  local_5d0 = local_5d8 + (longlong)iVar4 * 8;
  local_5c8 = ::operator_new(8,local_5d0);
  *local_5c8 = local_738;
  local_6f8 = iVar4;
  pFVar7 = UMassTestProcessorBase::GetMutableExecutionOrder(this_00);
  pTVar8 = &pFVar7->ExecuteAfter;
  local_5c0 = UMassTestProcessor_E::StaticClass();
  local_5b8 = local_5c0->_padding_;
  local_5b0 = (pTVar8->AllocatorInstance).Data;
  local_5a8 = local_5b0;
  local_5a0 = local_5b0;
  if (local_5b0 <= (FScriptContainerElement *)&local_5b8) {
    local_598 = (pTVar8->AllocatorInstance).Data;
    local_590 = local_598;
    local_588 = local_598;
    if ((FScriptContainerElement *)&local_5b8 <
        local_598 + (longlong)(pFVar7->ExecuteAfter).ArrayMax * 8) {
      local_580 = 0;
      local_57c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_560 = (longlong)(pFVar7->ExecuteAfter).ArrayNum;
      local_558 = (longlong)(pFVar7->ExecuteAfter).ArrayMax;
      local_578 = (pTVar8->AllocatorInstance).Data;
      local_570 = local_578;
      local_568 = local_578;
      local_550 = local_578;
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
  }
  if ((pFVar7->ExecuteAfter).ArrayNum == (pFVar7->ExecuteAfter).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar8->AllocatorInstance,&(pFVar7->ExecuteAfter).ArrayMax);
    (pFVar7->ExecuteAfter).ArrayNum = iVar4;
  }
  iVar4 = (pFVar7->ExecuteAfter).ArrayNum;
  (pFVar7->ExecuteAfter).ArrayNum = (pFVar7->ExecuteAfter).ArrayNum + 1;
  local_548 = (pTVar8->AllocatorInstance).Data;
  local_540 = local_548 + (longlong)iVar4 * 8;
  local_538 = ::operator_new(8,local_540);
  *local_538 = local_5b8;
  puVar5 = &this->field_0x28;
  local_530 = &local_60;
  local_6f4 = iVar4;
  pTVar6 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                     (local_530,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x48);
  local_730 = NewTestProcessor<UMassTestProcessor_B>(pTVar6);
  local_528 = *(UMassTestProcessor_B ***)puVar5;
  local_520 = local_528;
  local_518 = local_528;
  if (local_528 <= &local_730) {
    local_510 = *(longlong *)puVar5;
    local_508 = local_510;
    local_500 = local_510;
    if (&local_730 < (UMassTestProcessor_B **)(local_510 + (longlong)*(int *)&this->field_0x34 * 8))
    {
      local_4f8 = 0;
      local_4f4 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_4d8 = (longlong)*(int *)&this->field_0x30;
      local_4d0 = (longlong)*(int *)&this->field_0x34;
      local_4f0 = *(undefined8 *)puVar5;
      local_4e8 = local_4f0;
      local_4e0 = local_4f0;
      local_4c8 = local_4f0;
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
  }
  if (*(int *)&this->field_0x30 == *(int *)&this->field_0x34) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)puVar5,(int *)&this->field_0x34);
    *(int *)&this->field_0x30 = iVar4;
  }
  iVar4 = *(int *)&this->field_0x30;
  *(int *)&this->field_0x30 = *(int *)&this->field_0x30 + 1;
  local_4c0 = *(longlong *)puVar5;
  local_4b8 = (void *)(local_4c0 + (longlong)iVar4 * 8);
  local_728 = ::operator_new(8,local_4b8);
  *local_728 = local_730;
  local_498 = (UMassTestProcessorBase *)*local_728;
  local_4b0 = local_728;
  local_4a8 = local_728;
  ::FName::FName(&local_4a0,L"X.Y");
  local_490 = local_4a0;
  pFVar7 = UMassTestProcessorBase::GetMutableExecutionOrder(local_498);
  pFVar7->ExecuteInGroup = local_490;
  puVar5 = &this->field_0x28;
  local_488 = &local_50;
  pTVar6 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                     (local_488,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x48);
  local_720 = NewTestProcessor<UMassTestProcessor_C>(pTVar6);
  local_480 = *(UMassTestProcessor_C ***)puVar5;
  local_478 = local_480;
  local_470 = local_480;
  if (local_480 <= &local_720) {
    local_468 = *(longlong *)puVar5;
    local_460 = local_468;
    local_458 = local_468;
    if (&local_720 < (UMassTestProcessor_C **)(local_468 + (longlong)*(int *)&this->field_0x34 * 8))
    {
      local_450 = 0;
      local_44c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_430 = (longlong)*(int *)&this->field_0x30;
      local_428 = (longlong)*(int *)&this->field_0x34;
      local_448 = *(undefined8 *)puVar5;
      local_440 = local_448;
      local_438 = local_448;
      local_420 = local_448;
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
  }
  if (*(int *)&this->field_0x30 == *(int *)&this->field_0x34) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)puVar5,(int *)&this->field_0x34);
    *(int *)&this->field_0x30 = iVar4;
  }
  iVar4 = *(int *)&this->field_0x30;
  *(int *)&this->field_0x30 = *(int *)&this->field_0x30 + 1;
  local_418 = *(longlong *)puVar5;
  local_410 = (void *)(local_418 + (longlong)iVar4 * 8);
  local_718 = ::operator_new(8,local_410);
  *local_718 = local_720;
  local_3f0 = (UMassTestProcessorBase *)*local_718;
  local_408 = local_718;
  local_400 = local_718;
  ::FName::FName(&local_3f8,L"X.Y");
  local_3e8 = local_3f8;
  pFVar7 = UMassTestProcessorBase::GetMutableExecutionOrder(local_3f0);
  pFVar7->ExecuteInGroup = local_3e8;
  puVar5 = &this->field_0x28;
  local_3e0 = &local_40;
  pTVar6 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                     (local_3e0,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x48);
  local_710 = NewTestProcessor<UMassTestProcessor_D>(pTVar6);
  local_3d8 = *(UMassTestProcessor_D ***)puVar5;
  local_3d0 = local_3d8;
  local_3c8 = local_3d8;
  if (local_3d8 <= &local_710) {
    local_3c0 = *(longlong *)puVar5;
    local_3b8 = local_3c0;
    local_3b0 = local_3c0;
    if (&local_710 < (UMassTestProcessor_D **)(local_3c0 + (longlong)*(int *)&this->field_0x34 * 8))
    {
      local_3a8 = 0;
      local_3a4 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_388 = (longlong)*(int *)&this->field_0x30;
      local_380 = (longlong)*(int *)&this->field_0x34;
      local_3a0 = *(undefined8 *)puVar5;
      local_398 = local_3a0;
      local_390 = local_3a0;
      local_378 = local_3a0;
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
  }
  if (*(int *)&this->field_0x30 == *(int *)&this->field_0x34) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)puVar5,(int *)&this->field_0x34);
    *(int *)&this->field_0x30 = iVar4;
  }
  iVar4 = *(int *)&this->field_0x30;
  *(int *)&this->field_0x30 = *(int *)&this->field_0x30 + 1;
  local_370 = *(longlong *)puVar5;
  local_368 = (void *)(local_370 + (longlong)iVar4 * 8);
  local_708 = ::operator_new(8,local_368);
  *local_708 = local_710;
  local_700 = (UMassTestProcessorBase *)*local_708;
  local_360 = local_708;
  local_358 = local_708;
  pFVar7 = UMassTestProcessorBase::GetMutableExecutionOrder(local_700);
  pTVar8 = &pFVar7->ExecuteBefore;
  local_350 = UMassTestProcessor_A::StaticClass();
  local_348 = local_350->_padding_;
  local_340 = (pTVar8->AllocatorInstance).Data;
  local_338 = local_340;
  local_330 = local_340;
  if (local_340 <= (FScriptContainerElement *)&local_348) {
    local_328 = (pTVar8->AllocatorInstance).Data;
    local_320 = local_328;
    local_318 = local_328;
    if ((FScriptContainerElement *)&local_348 <
        local_328 + (longlong)(pFVar7->ExecuteBefore).ArrayMax * 8) {
      local_310 = 0;
      local_30c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_2f0 = (longlong)(pFVar7->ExecuteBefore).ArrayNum;
      local_2e8 = (longlong)(pFVar7->ExecuteBefore).ArrayMax;
      local_308 = (pTVar8->AllocatorInstance).Data;
      local_300 = local_308;
      local_2f8 = local_308;
      local_2e0 = local_308;
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
  }
  if ((pFVar7->ExecuteBefore).ArrayNum == (pFVar7->ExecuteBefore).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar8->AllocatorInstance,&(pFVar7->ExecuteBefore).ArrayMax);
    (pFVar7->ExecuteBefore).ArrayNum = iVar4;
  }
  iVar4 = (pFVar7->ExecuteBefore).ArrayNum;
  (pFVar7->ExecuteBefore).ArrayNum = (pFVar7->ExecuteBefore).ArrayNum + 1;
  local_2d8 = (pTVar8->AllocatorInstance).Data;
  local_2d0 = local_2d8 + (longlong)iVar4 * 8;
  local_2c8 = ::operator_new(8,local_2d0);
  *local_2c8 = local_348;
  local_6f0 = iVar4;
  pFVar7 = UMassTestProcessorBase::GetMutableExecutionOrder(local_700);
  pTVar8 = &pFVar7->ExecuteBefore;
  ::FName::FName(&local_770,L"X.Y");
  local_2c0 = (FName *)(pTVar8->AllocatorInstance).Data;
  local_2b8 = local_2c0;
  local_2b0 = local_2c0;
  if (local_2c0 <= &local_770) {
    local_2a8 = (pTVar8->AllocatorInstance).Data;
    local_2a0 = local_2a8;
    local_298 = local_2a8;
    if (&local_770 < (FName *)(local_2a8 + (longlong)(pFVar7->ExecuteBefore).ArrayMax * 8)) {
      local_290 = 0;
      local_28c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_270 = (longlong)(pFVar7->ExecuteBefore).ArrayNum;
      local_268 = (longlong)(pFVar7->ExecuteBefore).ArrayMax;
      local_288 = (pTVar8->AllocatorInstance).Data;
      local_280 = local_288;
      local_278 = local_288;
      local_260 = local_288;
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
  }
  if ((pFVar7->ExecuteBefore).ArrayNum == (pFVar7->ExecuteBefore).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar8->AllocatorInstance,&(pFVar7->ExecuteBefore).ArrayMax);
    (pFVar7->ExecuteBefore).ArrayNum = iVar4;
  }
  iVar4 = (pFVar7->ExecuteBefore).ArrayNum;
  (pFVar7->ExecuteBefore).ArrayNum = (pFVar7->ExecuteBefore).ArrayNum + 1;
  local_258 = (pTVar8->AllocatorInstance).Data;
  local_250 = local_258 + (longlong)iVar4 * 8;
  local_248 = ::operator_new(8,local_250);
  *local_248 = local_770;
  puVar5 = &this->field_0x28;
  local_240 = &local_30;
  local_6ec = iVar4;
  pTVar6 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                     (local_240,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x48);
  local_750 = NewTestProcessor<UMassTestProcessor_E>(pTVar6);
  local_238 = *(UMassTestProcessor_E ***)puVar5;
  local_230 = local_238;
  local_228 = local_238;
  if (local_238 <= &local_750) {
    local_220 = *(longlong *)puVar5;
    local_218 = local_220;
    local_210 = local_220;
    if (&local_750 < (UMassTestProcessor_E **)(local_220 + (longlong)*(int *)&this->field_0x34 * 8))
    {
      local_208 = 0;
      local_204 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_1e8 = (longlong)*(int *)&this->field_0x30;
      local_1e0 = (longlong)*(int *)&this->field_0x34;
      local_200 = *(undefined8 *)puVar5;
      local_1f8 = local_200;
      local_1f0 = local_200;
      local_1d8 = local_200;
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
  }
  if (*(int *)&this->field_0x30 == *(int *)&this->field_0x34) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)puVar5,(int *)&this->field_0x34);
    *(int *)&this->field_0x30 = iVar4;
  }
  iVar4 = *(int *)&this->field_0x30;
  *(int *)&this->field_0x30 = *(int *)&this->field_0x30 + 1;
  local_1d0 = *(longlong *)puVar5;
  local_1c8 = (void *)(local_1d0 + (longlong)iVar4 * 8);
  local_758 = ::operator_new(8,local_1c8);
  *local_758 = local_750;
  local_1a8 = (UMassTestProcessorBase *)*local_758;
  local_1c0 = local_758;
  local_1b8 = local_758;
  ::FName::FName(&local_1b0,L"X.Z");
  local_1a0 = local_1b0;
  pFVar7 = UMassTestProcessorBase::GetMutableExecutionOrder(local_1a8);
  pFVar7->ExecuteInGroup = local_1a0;
  puVar5 = &this->field_0x28;
  local_198 = local_20;
  pTVar6 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                     (local_198,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x48);
  local_760 = NewTestProcessor<UMassTestProcessor_F>(pTVar6);
  local_190 = *(UMassTestProcessor_F ***)puVar5;
  local_188 = local_190;
  local_180 = local_190;
  if (local_190 <= &local_760) {
    local_178 = *(longlong *)puVar5;
    local_170 = local_178;
    local_168 = local_178;
    if (&local_760 < (UMassTestProcessor_F **)(local_178 + (longlong)*(int *)&this->field_0x34 * 8))
    {
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
  }
  if (*(int *)&this->field_0x30 == *(int *)&this->field_0x34) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)puVar5,(int *)&this->field_0x34);
    *(int *)&this->field_0x30 = iVar4;
  }
  iVar4 = *(int *)&this->field_0x30;
  *(int *)&this->field_0x30 = *(int *)&this->field_0x30 + 1;
  local_128 = *(longlong *)puVar5;
  local_120 = (void *)(local_128 + (longlong)iVar4 * 8);
  local_768 = ::operator_new(8,local_120);
  *local_768 = local_760;
  local_108 = (UMassTestProcessorBase *)*local_768;
  local_118 = local_768;
  local_110 = local_768;
  pFVar7 = UMassTestProcessorBase::GetMutableExecutionOrder(local_108);
  pTVar8 = &pFVar7->ExecuteAfter;
  local_100 = UMassTestProcessor_A::StaticClass();
  local_f8 = local_100->_padding_;
  local_f0 = (pTVar8->AllocatorInstance).Data;
  local_e8 = local_f0;
  local_e0 = local_f0;
  if (local_f0 <= (FScriptContainerElement *)&local_f8) {
    local_d8 = (pTVar8->AllocatorInstance).Data;
    local_d0 = local_d8;
    local_c8 = local_d8;
    if ((FScriptContainerElement *)&local_f8 <
        local_d8 + (longlong)(pFVar7->ExecuteAfter).ArrayMax * 8) {
      local_c0 = 0;
      local_bc = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_a0 = (longlong)(pFVar7->ExecuteAfter).ArrayNum;
      local_98 = (longlong)(pFVar7->ExecuteAfter).ArrayMax;
      local_b8 = (pTVar8->AllocatorInstance).Data;
      local_b0 = local_b8;
      local_a8 = local_b8;
      local_90 = local_b8;
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
  }
  if ((pFVar7->ExecuteAfter).ArrayNum == (pFVar7->ExecuteAfter).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar8->AllocatorInstance,&(pFVar7->ExecuteAfter).ArrayMax);
    (pFVar7->ExecuteAfter).ArrayNum = iVar4;
  }
  iVar4 = (pFVar7->ExecuteAfter).ArrayNum;
  (pFVar7->ExecuteAfter).ArrayNum = (pFVar7->ExecuteAfter).ArrayNum + 1;
  local_88 = (pTVar8->AllocatorInstance).Data;
  local_80 = local_88 + (longlong)iVar4 * 8;
  plVar9 = ::operator_new(8,local_80);
  *plVar9 = local_f8;
  return true;
}

