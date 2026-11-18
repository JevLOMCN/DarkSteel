// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// InstantTest @ 147170150

/* WARNING: Removing unreachable block (ram,0x0001471701b7) */
/* WARNING: Removing unreachable block (ram,0x000147170432) */
/* WARNING: Removing unreachable block (ram,0x0001471706c8) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall FMassDependencySolverTest::FMissingDependency::InstantTest(FMissingDependency *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong local_1c0;
  longlong local_1b8;
  longlong *local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong *local_198;
  longlong local_190;
  longlong local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined1 *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  FName local_160;
  undefined1 *local_158;
  undefined8 local_150;
  longlong local_148;
  longlong local_140;
  FAutomationTestBase *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  longlong local_120;
  undefined1 *local_118;
  FName local_110;
  undefined1 *local_108;
  undefined8 local_100;
  longlong local_f8;
  longlong local_f0;
  FAutomationTestBase *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  longlong local_d8;
  longlong local_d0;
  undefined1 *local_c8;
  FName local_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  longlong local_a0;
  FAutomationTestBase *local_98;
  FString local_90;
  FString local_80;
  FString local_70;
  longlong *local_58;
  longlong *local_48;
  longlong *local_40;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  FDependencySolverBase::Solve((FDependencySolverBase *)this);
  local_138 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_160 = GetProcessorName<UMassTestProcessor_C>();
  if (*(int *)&this->field_0x40 < 1) {
    local_180 = 0;
    local_17c = 0;
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
  local_178 = *(undefined1 **)&this->field_0x38;
  local_150 = *(undefined8 *)local_160;
  local_1c0 = 0;
  puVar5 = local_178;
  plVar7 = &local_1c0;
  local_170 = local_178;
  local_168 = local_178;
  local_158 = local_178;
  for (lVar4 = 8; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)plVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    plVar7 = (longlong *)((longlong)plVar7 + 1);
  }
  local_58 = &local_1c0;
  local_148 = local_1c0;
  local_1b8 = 0;
  puVar6 = &local_150;
  plVar7 = &local_1b8;
  for (lVar4 = 8; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined1 *)plVar7 = *(undefined1 *)puVar6;
    puVar6 = (undefined8 *)((longlong)puVar6 + 1);
    plVar7 = (longlong *)((longlong)plVar7 + 1);
  }
  local_20 = &local_1b8;
  local_140 = local_1b8;
  bVar2 = local_148 == local_1b8;
  ::FString::FString(&local_80,"C is expected to be the first one");
  bVar2 = FAutomationTestBase::TestTrue(local_138,&local_80,bVar2);
  ::FString::~FString(&local_80);
  if (bVar2) {
    local_e8 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_110 = GetProcessorName<UMassTestProcessor_B>();
    local_1b0 = (longlong *)&this->field_0x38;
    if (*(int *)&this->field_0x40 < 2) {
      local_130 = 0;
      local_12c = 0;
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
    local_128 = *local_1b0;
    local_120 = local_128;
    local_118 = (undefined1 *)(local_128 + 0x30);
    local_108 = local_118;
    local_100 = *(undefined8 *)local_110;
    local_1a8 = 0;
    puVar5 = local_118;
    plVar7 = &local_1a8;
    for (lVar4 = 8; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined1 *)plVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      plVar7 = (longlong *)((longlong)plVar7 + 1);
    }
    local_48 = &local_1a8;
    local_f8 = local_1a8;
    local_1a0 = 0;
    puVar6 = &local_100;
    plVar7 = &local_1a0;
    for (lVar4 = 8; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined1 *)plVar7 = *(undefined1 *)puVar6;
      puVar6 = (undefined8 *)((longlong)puVar6 + 1);
      plVar7 = (longlong *)((longlong)plVar7 + 1);
    }
    local_40 = &local_1a0;
    local_f0 = local_1a0;
    bVar2 = local_f8 == local_1a0;
    ::FString::FString(&local_70,"Then B");
    bVar2 = FAutomationTestBase::TestTrue(local_e8,&local_70,bVar2);
    ::FString::~FString(&local_70);
    if (bVar2) {
      local_98 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_c0 = GetProcessorName<UMassTestProcessor_A>();
      local_198 = (longlong *)&this->field_0x38;
      if (*(int *)&this->field_0x40 < 3) {
        local_e0 = 0;
        local_dc = 0;
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
      local_d8 = *local_198;
      local_d0 = local_d8;
      local_c8 = (undefined1 *)(local_d8 + 0x60);
      local_b8 = local_c8;
      local_b0 = *(undefined8 *)local_c0;
      local_190 = 0;
      puVar5 = local_c8;
      plVar7 = &local_190;
      for (lVar4 = 8; lVar4 != 0; lVar4 = lVar4 + -1) {
        *(undefined1 *)plVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        plVar7 = (longlong *)((longlong)plVar7 + 1);
      }
      local_30 = &local_190;
      local_a8 = local_190;
      local_188 = 0;
      puVar6 = &local_b0;
      plVar7 = &local_188;
      for (lVar4 = 8; lVar4 != 0; lVar4 = lVar4 + -1) {
        *(undefined1 *)plVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined8 *)((longlong)puVar6 + 1);
        plVar7 = (longlong *)((longlong)plVar7 + 1);
      }
      local_28 = &local_188;
      local_a0 = local_188;
      bVar2 = local_a8 == local_188;
      ::FString::FString(&local_90,"With A being last");
      bVar2 = FAutomationTestBase::TestTrue(local_98,&local_90,bVar2);
      ::FString::~FString(&local_90);
      if (bVar2) {
        bVar2 = true;
      }
      else {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        bVar2 = false;
      }
    }
    else {
      UE::AITestSuite::ConditionallyBreakOnTestFail();
      bVar2 = false;
    }
  }
  else {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
    bVar2 = false;
  }
  return bVar2;
}

// SetUp @ 1471a7b40

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall FMassDependencySolverTest::FMissingDependency::SetUp(FMissingDependency *this)

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
  FName FVar9;
  undefined8 *puVar10;
  UMassTestProcessor_C *local_3d0 [2];
  UMassTestProcessor_A *local_3c0;
  undefined8 *local_3b8;
  FName local_3b0;
  UMassTestProcessor_B *local_3a8;
  undefined8 *local_3a0;
  FName local_398;
  int local_390;
  int local_38c;
  int local_388;
  TSharedPtr<FMassEntityManager,1> *local_380;
  UMassTestProcessor_A **local_378;
  UMassTestProcessor_A **local_370;
  UMassTestProcessor_A **local_368;
  longlong local_360;
  longlong local_358;
  longlong local_350;
  undefined4 local_348;
  undefined4 local_344;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  longlong local_328;
  longlong local_320;
  undefined8 local_318;
  longlong local_310;
  void *local_308;
  undefined8 *local_300;
  undefined8 *local_2f8;
  UMassTestProcessorBase *local_2f0;
  FName *local_2e8;
  FName *local_2e0;
  FName *local_2d8;
  FScriptContainerElement *local_2d0;
  FScriptContainerElement *local_2c8;
  FScriptContainerElement *local_2c0;
  undefined4 local_2b8;
  undefined4 local_2b4;
  FScriptContainerElement *local_2b0;
  FScriptContainerElement *local_2a8;
  FScriptContainerElement *local_2a0;
  longlong local_298;
  longlong local_290;
  FScriptContainerElement *local_288;
  FScriptContainerElement *local_280;
  FScriptContainerElement *local_278;
  FName *local_270;
  TSharedPtr<FMassEntityManager,1> *local_268;
  UMassTestProcessor_B **local_260;
  UMassTestProcessor_B **local_258;
  UMassTestProcessor_B **local_250;
  longlong local_248;
  longlong local_240;
  longlong local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  longlong local_210;
  longlong local_208;
  undefined8 local_200;
  longlong local_1f8;
  void *local_1f0;
  undefined8 *local_1e8;
  undefined8 *local_1e0;
  FName *local_1d8;
  FName *local_1d0;
  FName *local_1c8;
  FScriptContainerElement *local_1c0;
  FScriptContainerElement *local_1b8;
  FScriptContainerElement *local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  FScriptContainerElement *local_1a0;
  FScriptContainerElement *local_198;
  FScriptContainerElement *local_190;
  longlong local_188;
  longlong local_180;
  FScriptContainerElement *local_178;
  FScriptContainerElement *local_170;
  FScriptContainerElement *local_168;
  FName *local_160;
  FName local_158;
  FName local_150;
  FName local_148;
  FScriptContainerElement *local_140;
  FScriptContainerElement *local_138;
  FScriptContainerElement *local_130;
  undefined4 local_128;
  undefined4 local_124;
  FScriptContainerElement *local_120;
  FScriptContainerElement *local_118;
  FScriptContainerElement *local_110;
  longlong local_108;
  longlong local_100;
  FScriptContainerElement *local_f8;
  FScriptContainerElement *local_f0;
  FScriptContainerElement *local_e8;
  undefined8 *local_e0;
  TSharedPtr<FMassEntityManager,1> *local_d8;
  UMassTestProcessor_C **local_d0;
  UMassTestProcessor_C **local_c8;
  UMassTestProcessor_C **local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  void *local_60;
  TSharedPtr<FMassEntityManager,1> local_38;
  TSharedPtr<FMassEntityManager,1> local_28;
  TSharedPtr<FMassEntityManager,1> local_18;
  
  FDependencySolverBase::SetUp((FDependencySolverBase *)this);
  puVar5 = &this->field_0x28;
  local_380 = &local_38;
  pTVar6 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                     (local_380,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x48);
  local_3c0 = NewTestProcessor<UMassTestProcessor_A>(pTVar6);
  local_378 = *(UMassTestProcessor_A ***)puVar5;
  local_370 = local_378;
  local_368 = local_378;
  if ((local_378 <= &local_3c0) &&
     (local_360 = *(longlong *)puVar5, local_358 = local_360, local_350 = local_360,
     &local_3c0 < (UMassTestProcessor_A **)(local_360 + (longlong)*(int *)&this->field_0x34 * 8))) {
    local_348 = 0;
    local_344 = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_328 = (longlong)*(int *)&this->field_0x30;
    local_320 = (longlong)*(int *)&this->field_0x34;
    local_340 = *(undefined8 *)puVar5;
    local_338 = local_340;
    local_330 = local_340;
    local_318 = local_340;
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
  iVar4 = *(int *)&this->field_0x30;
  *(int *)&this->field_0x30 = *(int *)&this->field_0x30 + 1;
  local_310 = *(longlong *)puVar5;
  local_308 = (void *)(local_310 + (longlong)iVar4 * 8);
  local_3b8 = ::operator_new(8,local_308);
  *local_3b8 = local_3c0;
  local_2f0 = (UMassTestProcessorBase *)*local_3b8;
  local_300 = local_3b8;
  local_2f8 = local_3b8;
  pFVar7 = UMassTestProcessorBase::GetMutableExecutionOrder(local_2f0);
  pTVar8 = &pFVar7->ExecuteAfter;
  ::FName::FName(&local_3b0,L"NonExistingDependency");
  local_2e8 = (FName *)(pTVar8->AllocatorInstance).Data;
  local_2e0 = local_2e8;
  local_2d8 = local_2e8;
  if ((local_2e8 <= &local_3b0) &&
     (local_2d0 = (pTVar8->AllocatorInstance).Data, local_2c8 = local_2d0, local_2c0 = local_2d0,
     &local_3b0 < (FName *)(local_2d0 + (longlong)(pFVar7->ExecuteAfter).ArrayMax * 8))) {
    local_2b8 = 0;
    local_2b4 = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_298 = (longlong)(pFVar7->ExecuteAfter).ArrayNum;
    local_290 = (longlong)(pFVar7->ExecuteAfter).ArrayMax;
    local_2b0 = (pTVar8->AllocatorInstance).Data;
    local_2a8 = local_2b0;
    local_2a0 = local_2b0;
    local_288 = local_2b0;
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
  if ((pFVar7->ExecuteAfter).ArrayNum == (pFVar7->ExecuteAfter).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar8->AllocatorInstance,&(pFVar7->ExecuteAfter).ArrayMax);
    (pFVar7->ExecuteAfter).ArrayNum = iVar4;
  }
  iVar4 = (pFVar7->ExecuteAfter).ArrayNum;
  (pFVar7->ExecuteAfter).ArrayNum = (pFVar7->ExecuteAfter).ArrayNum + 1;
  local_280 = (pTVar8->AllocatorInstance).Data;
  local_278 = local_280 + (longlong)iVar4 * 8;
  local_270 = ::operator_new(8,local_278);
  *local_270 = local_3b0;
  puVar5 = &this->field_0x28;
  local_268 = &local_28;
  local_390 = iVar4;
  pTVar6 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                     (local_268,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x48);
  local_3a8 = NewTestProcessor<UMassTestProcessor_B>(pTVar6);
  local_260 = *(UMassTestProcessor_B ***)puVar5;
  local_258 = local_260;
  local_250 = local_260;
  if ((local_260 <= &local_3a8) &&
     (local_248 = *(longlong *)puVar5, local_240 = local_248, local_238 = local_248,
     &local_3a8 < (UMassTestProcessor_B **)(local_248 + (longlong)*(int *)&this->field_0x34 * 8))) {
    local_230 = 0;
    local_22c = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_210 = (longlong)*(int *)&this->field_0x30;
    local_208 = (longlong)*(int *)&this->field_0x34;
    local_228 = *(undefined8 *)puVar5;
    local_220 = local_228;
    local_218 = local_228;
    local_200 = local_228;
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
  iVar4 = *(int *)&this->field_0x30;
  *(int *)&this->field_0x30 = *(int *)&this->field_0x30 + 1;
  local_1f8 = *(longlong *)puVar5;
  local_1f0 = (void *)(local_1f8 + (longlong)iVar4 * 8);
  local_3a0 = ::operator_new(8,local_1f0);
  *local_3a0 = local_3a8;
  this_00 = (UMassTestProcessorBase *)*local_3a0;
  local_1e8 = local_3a0;
  local_1e0 = local_3a0;
  pFVar7 = UMassTestProcessorBase::GetMutableExecutionOrder(this_00);
  pTVar8 = &pFVar7->ExecuteBefore;
  ::FName::FName(&local_398,L"NonExistingDependency2");
  local_1d8 = (FName *)(pTVar8->AllocatorInstance).Data;
  local_1d0 = local_1d8;
  local_1c8 = local_1d8;
  if ((local_1d8 <= &local_398) &&
     (local_1c0 = (pTVar8->AllocatorInstance).Data, local_1b8 = local_1c0, local_1b0 = local_1c0,
     &local_398 < (FName *)(local_1c0 + (longlong)(pFVar7->ExecuteBefore).ArrayMax * 8))) {
    local_1a8 = 0;
    local_1a4 = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_188 = (longlong)(pFVar7->ExecuteBefore).ArrayNum;
    local_180 = (longlong)(pFVar7->ExecuteBefore).ArrayMax;
    local_1a0 = (pTVar8->AllocatorInstance).Data;
    local_198 = local_1a0;
    local_190 = local_1a0;
    local_178 = local_1a0;
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
  if ((pFVar7->ExecuteBefore).ArrayNum == (pFVar7->ExecuteBefore).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar8->AllocatorInstance,&(pFVar7->ExecuteBefore).ArrayMax);
    (pFVar7->ExecuteBefore).ArrayNum = iVar4;
  }
  iVar4 = (pFVar7->ExecuteBefore).ArrayNum;
  (pFVar7->ExecuteBefore).ArrayNum = (pFVar7->ExecuteBefore).ArrayNum + 1;
  local_170 = (pTVar8->AllocatorInstance).Data;
  local_168 = local_170 + (longlong)iVar4 * 8;
  local_160 = ::operator_new(8,local_168);
  *local_160 = local_398;
  local_38c = iVar4;
  pFVar7 = UMassTestProcessorBase::GetMutableExecutionOrder(this_00);
  pTVar8 = &pFVar7->ExecuteAfter;
  FVar9 = GetProcessorName<UMassTestProcessor_C>();
  local_158 = (FName)(pTVar8->AllocatorInstance).Data;
  local_150 = local_158;
  local_148 = local_158;
  if (((ulonglong)local_158 <= (ulonglong)FVar9) &&
     (local_140 = (pTVar8->AllocatorInstance).Data, local_138 = local_140, local_130 = local_140,
     (ulonglong)FVar9 <
     (ulonglong)((longlong)local_140 + (longlong)(pFVar7->ExecuteAfter).ArrayMax * 8))) {
    local_128 = 0;
    local_124 = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_108 = (longlong)(pFVar7->ExecuteAfter).ArrayNum;
    local_100 = (longlong)(pFVar7->ExecuteAfter).ArrayMax;
    local_120 = (pTVar8->AllocatorInstance).Data;
    local_118 = local_120;
    local_110 = local_120;
    local_f8 = local_120;
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
  if ((pFVar7->ExecuteAfter).ArrayNum == (pFVar7->ExecuteAfter).ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar8->AllocatorInstance,&(pFVar7->ExecuteAfter).ArrayMax);
    (pFVar7->ExecuteAfter).ArrayNum = iVar4;
  }
  iVar4 = (pFVar7->ExecuteAfter).ArrayNum;
  (pFVar7->ExecuteAfter).ArrayNum = (pFVar7->ExecuteAfter).ArrayNum + 1;
  local_f0 = (pTVar8->AllocatorInstance).Data;
  local_e8 = local_f0 + (longlong)iVar4 * 8;
  local_e0 = ::operator_new(8,local_e8);
  *local_e0 = *(undefined8 *)FVar9;
  puVar5 = &this->field_0x28;
  local_d8 = &local_18;
  local_388 = iVar4;
  pTVar6 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                     (local_d8,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x48);
  local_3d0[0] = NewTestProcessor<UMassTestProcessor_C>(pTVar6);
  local_d0 = *(UMassTestProcessor_C ***)puVar5;
  local_c8 = local_d0;
  local_c0 = local_d0;
  if ((local_d0 <= local_3d0) &&
     (local_b8 = *(longlong *)puVar5, local_b0 = local_b8, local_a8 = local_b8,
     local_3d0 < (UMassTestProcessor_C **)(local_b8 + (longlong)*(int *)&this->field_0x34 * 8))) {
    local_a0 = 0;
    local_9c = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_80 = (longlong)*(int *)&this->field_0x30;
    local_78 = (longlong)*(int *)&this->field_0x34;
    local_98 = *(undefined8 *)puVar5;
    local_90 = local_98;
    local_88 = local_98;
    local_70 = local_98;
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
  iVar4 = *(int *)&this->field_0x30;
  *(int *)&this->field_0x30 = *(int *)&this->field_0x30 + 1;
  local_68 = *(longlong *)puVar5;
  local_60 = (void *)(local_68 + (longlong)iVar4 * 8);
  puVar10 = ::operator_new(8,local_60);
  *puVar10 = local_3d0[0];
  return true;
}

