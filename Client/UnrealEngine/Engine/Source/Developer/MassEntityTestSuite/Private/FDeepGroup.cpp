// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// InstantTest @ 147154230

/* WARNING: Removing unreachable block (ram,0x000147154412) */
/* WARNING: Removing unreachable block (ram,0x000147154699) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall FMassDependencySolverTest::FDeepGroup::InstantTest(FDeepGroup *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  int local_1a8;
  longlong local_158;
  longlong local_150;
  longlong *local_148;
  longlong local_140;
  longlong local_138;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  undefined1 *local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  FName local_e8;
  undefined1 *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  longlong local_c8;
  FAutomationTestBase *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  longlong local_b0;
  longlong local_a8;
  undefined1 *local_a0;
  FName local_98;
  undefined1 *local_90;
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  FAutomationTestBase *local_70;
  FString local_68;
  FString local_58;
  longlong *local_48;
  longlong *local_40;
  longlong *local_30;
  longlong *local_28;
  
  FDependencySolverBase::Solve((FDependencySolverBase *)this);
  local_1a8 = 0;
  do {
    if (*(int *)&this->field_0x40 <= local_1a8) {
      local_c0 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_e8 = GetProcessorName<UMassTestProcessor_B>();
      if (*(int *)&this->field_0x40 < 1) {
        local_108 = 0;
        local_104 = 0;
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
      local_100 = *(undefined1 **)&this->field_0x38;
      local_d8 = *(undefined8 *)local_e8;
      local_158 = 0;
      puVar5 = local_100;
      plVar7 = &local_158;
      local_f8 = local_100;
      local_f0 = local_100;
      local_e0 = local_100;
      for (lVar4 = 8; lVar4 != 0; lVar4 = lVar4 + -1) {
        *(undefined1 *)plVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        plVar7 = (longlong *)((longlong)plVar7 + 1);
      }
      local_48 = &local_158;
      local_d0 = local_158;
      local_150 = 0;
      puVar6 = &local_d8;
      plVar7 = &local_150;
      for (lVar4 = 8; lVar4 != 0; lVar4 = lVar4 + -1) {
        *(undefined1 *)plVar7 = *(undefined1 *)puVar6;
        puVar6 = (undefined8 *)((longlong)puVar6 + 1);
        plVar7 = (longlong *)((longlong)plVar7 + 1);
      }
      local_40 = &local_150;
      local_c8 = local_150;
      bVar2 = local_d0 == local_150;
      ::FString::FString(&local_58,"B is expected to be first");
      bVar2 = FAutomationTestBase::TestTrue(local_c0,&local_58,bVar2);
      ::FString::~FString(&local_58);
      if (bVar2) {
        local_70 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_98 = GetProcessorName<UMassTestProcessor_A>();
        local_148 = (longlong *)&this->field_0x38;
        if (*(int *)&this->field_0x40 < 2) {
          local_b8 = 0;
          local_b4 = 0;
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
        local_b0 = *local_148;
        local_a8 = local_b0;
        local_a0 = (undefined1 *)(local_b0 + 0x30);
        local_90 = local_a0;
        local_88 = *(undefined8 *)local_98;
        local_140 = 0;
        puVar5 = local_a0;
        plVar7 = &local_140;
        for (lVar4 = 8; lVar4 != 0; lVar4 = lVar4 + -1) {
          *(undefined1 *)plVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          plVar7 = (longlong *)((longlong)plVar7 + 1);
        }
        local_30 = &local_140;
        local_80 = local_140;
        local_138 = 0;
        puVar6 = &local_88;
        plVar7 = &local_138;
        for (lVar4 = 8; lVar4 != 0; lVar4 = lVar4 + -1) {
          *(undefined1 *)plVar7 = *(undefined1 *)puVar6;
          puVar6 = (undefined8 *)((longlong)puVar6 + 1);
          plVar7 = (longlong *)((longlong)plVar7 + 1);
        }
        local_28 = &local_138;
        local_78 = local_138;
        bVar2 = local_80 == local_138;
        ::FString::FString(&local_68,"A is expected to be second");
        bVar2 = FAutomationTestBase::TestTrue(local_70,&local_68,bVar2);
        ::FString::~FString(&local_68);
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
      return bVar2;
    }
    if (local_1a8 < 0 || *(int *)&this->field_0x40 <= local_1a8) {
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
    local_128 = *(longlong *)&this->field_0x38;
    local_118 = local_128 + (longlong)local_1a8 * 0x30;
    local_120 = local_128;
    if (*(char *)(local_118 + 0x10) != '\x01') {
      local_110 = &this->field_0x38;
      TArray<FMassProcessorOrderInfo,TSizedDefaultAllocator<32>_>::RemoveAt
                ((TArray<FMassProcessorOrderInfo,TSizedDefaultAllocator<32>_> *)local_110,local_1a8,
                 No);
      local_1a8 = local_1a8 + -1;
    }
    local_1a8 = local_1a8 + 1;
  } while( true );
}

// SetUp @ 1471a4e20

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall FMassDependencySolverTest::FDeepGroup::SetUp(FDeepGroup *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 *puVar5;
  TSharedPtr<FMassEntityManager,1> *pTVar6;
  FMassProcessorExecutionOrder *pFVar7;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar8;
  UMassTestProcessor_A *local_220;
  undefined8 *local_218;
  FName local_210;
  UMassTestProcessorBase *local_208;
  UMassTestProcessor_B *local_200;
  int local_1f8;
  TSharedPtr<FMassEntityManager,1> *local_1f0;
  UMassTestProcessor_A **local_1e8;
  UMassTestProcessor_A **local_1e0;
  UMassTestProcessor_A **local_1d8;
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
  FName *local_160;
  FName *local_158;
  FName *local_150;
  FScriptContainerElement *local_148;
  FScriptContainerElement *local_140;
  FScriptContainerElement *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  FScriptContainerElement *local_128;
  FScriptContainerElement *local_120;
  FScriptContainerElement *local_118;
  longlong local_110;
  longlong local_108;
  FScriptContainerElement *local_100;
  FScriptContainerElement *local_f8;
  FScriptContainerElement *local_f0;
  FName *local_e8;
  FName local_e0;
  FName local_d8;
  TSharedPtr<FMassEntityManager,1> *local_d0;
  UMassTestProcessor_B **local_c8;
  UMassTestProcessor_B **local_c0;
  UMassTestProcessor_B **local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  void *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  FName local_40;
  UMassTestProcessorBase *local_38;
  FName local_30;
  TSharedPtr<FMassEntityManager,1> local_28;
  TSharedPtr<FMassEntityManager,1> local_18;
  
  FDependencySolverBase::SetUp((FDependencySolverBase *)this);
  puVar5 = &this->field_0x28;
  local_1f0 = &local_28;
  pTVar6 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                     (local_1f0,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x48);
  local_220 = NewTestProcessor<UMassTestProcessor_A>(pTVar6);
  local_1e8 = *(UMassTestProcessor_A ***)puVar5;
  local_1e0 = local_1e8;
  local_1d8 = local_1e8;
  if ((local_1e8 <= &local_220) &&
     (local_1d0 = *(longlong *)puVar5, local_1c8 = local_1d0, local_1c0 = local_1d0,
     &local_220 < (UMassTestProcessor_A **)(local_1d0 + (longlong)*(int *)&this->field_0x34 * 8))) {
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
  local_218 = ::operator_new(8,local_178);
  *local_218 = local_220;
  local_208 = (UMassTestProcessorBase *)*local_218;
  local_170 = local_218;
  local_168 = local_218;
  pFVar7 = UMassTestProcessorBase::GetMutableExecutionOrder(local_208);
  pTVar8 = &pFVar7->ExecuteAfter;
  ::FName::FName(&local_210,L"W.X.Y.Z");
  local_160 = (FName *)(pTVar8->AllocatorInstance).Data;
  local_158 = local_160;
  local_150 = local_160;
  if ((local_160 <= &local_210) &&
     (local_148 = (pTVar8->AllocatorInstance).Data, local_140 = local_148, local_138 = local_148,
     &local_210 < (FName *)(local_148 + (longlong)(pFVar7->ExecuteAfter).ArrayMax * 8))) {
    local_130 = 0;
    local_12c = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_110 = (longlong)(pFVar7->ExecuteAfter).ArrayNum;
    local_108 = (longlong)(pFVar7->ExecuteAfter).ArrayMax;
    local_128 = (pTVar8->AllocatorInstance).Data;
    local_120 = local_128;
    local_118 = local_128;
    local_100 = local_128;
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
  local_f8 = (pTVar8->AllocatorInstance).Data;
  local_f0 = local_f8 + (longlong)iVar4 * 8;
  local_e8 = ::operator_new(8,local_f0);
  *local_e8 = local_210;
  local_1f8 = iVar4;
  ::FName::FName(&local_e0,L"P.Q.R");
  local_d8 = local_e0;
  pFVar7 = UMassTestProcessorBase::GetMutableExecutionOrder(local_208);
  pFVar7->ExecuteInGroup = local_d8;
  puVar5 = &this->field_0x28;
  local_d0 = &local_18;
  pTVar6 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                     (local_d0,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x48);
  local_200 = NewTestProcessor<UMassTestProcessor_B>(pTVar6);
  local_c8 = *(UMassTestProcessor_B ***)puVar5;
  local_c0 = local_c8;
  local_b8 = local_c8;
  if ((local_c8 <= &local_200) &&
     (local_b0 = *(longlong *)puVar5, local_a8 = local_b0, local_a0 = local_b0,
     &local_200 < (UMassTestProcessor_B **)(local_b0 + (longlong)*(int *)&this->field_0x34 * 8))) {
    local_98 = 0;
    local_94 = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_78 = (longlong)*(int *)&this->field_0x30;
    local_70 = (longlong)*(int *)&this->field_0x34;
    local_90 = *(undefined8 *)puVar5;
    local_88 = local_90;
    local_80 = local_90;
    local_68 = local_90;
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
  local_60 = *(longlong *)puVar5;
  local_58 = (void *)(local_60 + (longlong)iVar4 * 8);
  local_50 = ::operator_new(8,local_58);
  *local_50 = local_200;
  local_38 = (UMassTestProcessorBase *)*local_50;
  local_48 = local_50;
  ::FName::FName(&local_40,L"W.X.Y.Z");
  local_30 = local_40;
  pFVar7 = UMassTestProcessorBase::GetMutableExecutionOrder(local_38);
  pFVar7->ExecuteInGroup = local_30;
  return true;
}

