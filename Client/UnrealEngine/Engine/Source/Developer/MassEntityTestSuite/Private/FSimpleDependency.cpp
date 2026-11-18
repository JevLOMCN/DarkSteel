// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// InstantTest @ 14718a800

/* WARNING: Removing unreachable block (ram,0x00014718a867) */
/* WARNING: Removing unreachable block (ram,0x00014718aae2) */
/* WARNING: Removing unreachable block (ram,0x00014718ad78) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall FMassDependencySolverTest::FSimpleDependency::InstantTest(FSimpleDependency *this)

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
  ::FString::FString(&local_80,"C is expected to be first");
  bVar2 = FAutomationTestBase::TestTrue(local_138,&local_80,bVar2);
  ::FString::~FString(&local_80);
  if (bVar2) {
    local_e8 = FAITestBase::GetTestRunner((FAITestBase *)this);
    local_110 = GetProcessorName<UMassTestProcessor_A>();
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
    ::FString::FString(&local_70,"A is expected to be second");
    bVar2 = FAutomationTestBase::TestTrue(local_e8,&local_70,bVar2);
    ::FString::~FString(&local_70);
    if (bVar2) {
      local_98 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_c0 = GetProcessorName<UMassTestProcessor_B>();
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
      ::FString::FString(&local_90,"B is expected to be third");
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

// SetUp @ 1471a93c0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall FMassDependencySolverTest::FSimpleDependency::SetUp(FSimpleDependency *this)

{
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
  UMassTestProcessor_B *local_340;
  undefined8 *local_338;
  UMassTestProcessor_C *local_330;
  UMassTestProcessor_A *local_328;
  undefined8 *local_320;
  int local_318;
  int local_314;
  TSharedPtr<FMassEntityManager,1> *local_308;
  UMassTestProcessor_A **local_300;
  UMassTestProcessor_A **local_2f8;
  UMassTestProcessor_A **local_2f0;
  longlong local_2e8;
  longlong local_2e0;
  longlong local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  longlong local_2b0;
  longlong local_2a8;
  undefined8 local_2a0;
  longlong local_298;
  void *local_290;
  undefined8 *local_288;
  undefined8 *local_280;
  UMassTestProcessorBase *local_278;
  FName local_270;
  FName local_268;
  FName local_260;
  FScriptContainerElement *local_258;
  FScriptContainerElement *local_250;
  FScriptContainerElement *local_248;
  undefined4 local_240;
  undefined4 local_23c;
  FScriptContainerElement *local_238;
  FScriptContainerElement *local_230;
  FScriptContainerElement *local_228;
  longlong local_220;
  longlong local_218;
  FScriptContainerElement *local_210;
  FScriptContainerElement *local_208;
  FScriptContainerElement *local_200;
  undefined8 *local_1f8;
  TSharedPtr<FMassEntityManager,1> *local_1f0;
  UMassTestProcessor_B **local_1e8;
  UMassTestProcessor_B **local_1e0;
  UMassTestProcessor_B **local_1d8;
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
  UMassTestProcessorBase *local_160;
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
  TSharedPtr<FMassEntityManager,1> local_40;
  TSharedPtr<FMassEntityManager,1> local_30;
  TSharedPtr<FMassEntityManager,1> local_20 [2];
  
  FDependencySolverBase::SetUp((FDependencySolverBase *)this);
  puVar5 = &this->field_0x28;
  local_308 = &local_40;
  pTVar6 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                     (local_308,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x48);
  local_328 = NewTestProcessor<UMassTestProcessor_A>(pTVar6);
  local_300 = *(UMassTestProcessor_A ***)puVar5;
  local_2f8 = local_300;
  local_2f0 = local_300;
  if ((local_300 <= &local_328) &&
     (local_2e8 = *(longlong *)puVar5, local_2e0 = local_2e8, local_2d8 = local_2e8,
     &local_328 < (UMassTestProcessor_A **)(local_2e8 + (longlong)*(int *)&this->field_0x34 * 8))) {
    local_2d0 = 0;
    local_2cc = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_2b0 = (longlong)*(int *)&this->field_0x30;
    local_2a8 = (longlong)*(int *)&this->field_0x34;
    local_2c8 = *(undefined8 *)puVar5;
    local_2c0 = local_2c8;
    local_2b8 = local_2c8;
    local_2a0 = local_2c8;
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
  local_298 = *(longlong *)puVar5;
  local_290 = (void *)(local_298 + (longlong)iVar4 * 8);
  local_320 = ::operator_new(8,local_290);
  *local_320 = local_328;
  local_278 = (UMassTestProcessorBase *)*local_320;
  local_288 = local_320;
  local_280 = local_320;
  pFVar7 = UMassTestProcessorBase::GetMutableExecutionOrder(local_278);
  pTVar8 = &pFVar7->ExecuteAfter;
  FVar9 = GetProcessorName<UMassTestProcessor_C>();
  local_270 = (FName)(pTVar8->AllocatorInstance).Data;
  local_268 = local_270;
  local_260 = local_270;
  if (((ulonglong)local_270 <= (ulonglong)FVar9) &&
     (local_258 = (pTVar8->AllocatorInstance).Data, local_250 = local_258, local_248 = local_258,
     (ulonglong)FVar9 <
     (ulonglong)((longlong)local_258 + (longlong)(pFVar7->ExecuteAfter).ArrayMax * 8))) {
    local_240 = 0;
    local_23c = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_220 = (longlong)(pFVar7->ExecuteAfter).ArrayNum;
    local_218 = (longlong)(pFVar7->ExecuteAfter).ArrayMax;
    local_238 = (pTVar8->AllocatorInstance).Data;
    local_230 = local_238;
    local_228 = local_238;
    local_210 = local_238;
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
  local_208 = (pTVar8->AllocatorInstance).Data;
  local_200 = local_208 + (longlong)iVar4 * 8;
  local_1f8 = ::operator_new(8,local_200);
  *local_1f8 = *(undefined8 *)FVar9;
  puVar5 = &this->field_0x28;
  local_1f0 = &local_30;
  local_318 = iVar4;
  pTVar6 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                     (local_1f0,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x48);
  local_340 = NewTestProcessor<UMassTestProcessor_B>(pTVar6);
  local_1e8 = *(UMassTestProcessor_B ***)puVar5;
  local_1e0 = local_1e8;
  local_1d8 = local_1e8;
  if ((local_1e8 <= &local_340) &&
     (local_1d0 = *(longlong *)puVar5, local_1c8 = local_1d0, local_1c0 = local_1d0,
     &local_340 < (UMassTestProcessor_B **)(local_1d0 + (longlong)*(int *)&this->field_0x34 * 8))) {
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
  iVar4 = *(int *)&this->field_0x30;
  *(int *)&this->field_0x30 = *(int *)&this->field_0x30 + 1;
  local_180 = *(longlong *)puVar5;
  local_178 = (void *)(local_180 + (longlong)iVar4 * 8);
  local_338 = ::operator_new(8,local_178);
  *local_338 = local_340;
  local_160 = (UMassTestProcessorBase *)*local_338;
  local_170 = local_338;
  local_168 = local_338;
  pFVar7 = UMassTestProcessorBase::GetMutableExecutionOrder(local_160);
  pTVar8 = &pFVar7->ExecuteAfter;
  FVar9 = GetProcessorName<UMassTestProcessor_A>();
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
  local_d8 = local_20;
  local_314 = iVar4;
  pTVar6 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                     (local_d8,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x48);
  local_330 = NewTestProcessor<UMassTestProcessor_C>(pTVar6);
  local_d0 = *(UMassTestProcessor_C ***)puVar5;
  local_c8 = local_d0;
  local_c0 = local_d0;
  if ((local_d0 <= &local_330) &&
     (local_b8 = *(longlong *)puVar5, local_b0 = local_b8, local_a8 = local_b8,
     &local_330 < (UMassTestProcessor_C **)(local_b8 + (longlong)*(int *)&this->field_0x34 * 8))) {
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
  *puVar10 = local_330;
  return true;
}

