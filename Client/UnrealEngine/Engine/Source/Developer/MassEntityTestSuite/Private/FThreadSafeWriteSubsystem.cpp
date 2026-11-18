// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// InstantTest @ 14718f8d0

/* WARNING: Removing unreachable block (ram,0x00014718f920) */
/* WARNING: Removing unreachable block (ram,0x00014718fa34) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassDependencySolverTest::FThreadSafeWriteSubsystem::InstantTest(FThreadSafeWriteSubsystem *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FAutomationTestBase *this_00;
  bool local_98;
  FString local_20 [2];
  
  FDependencySolverBase::Solve((FDependencySolverBase *)this);
  this_00 = FAITestBase::GetTestRunner((FAITestBase *)this);
  if (*(int *)&this->field_0x40 < 1) {
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
  if (*(int *)(*(longlong *)&this->field_0x38 + 0x20) == 0) {
    if (*(int *)&this->field_0x40 < 2) {
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
    if (*(int *)(*(longlong *)&this->field_0x38 + 0x50) == 0) {
      local_98 = true;
      goto LAB_14718fb4c;
    }
  }
  local_98 = false;
LAB_14718fb4c:
  ::FString::FString(local_20,"No dependency between processors is expected");
  bVar2 = FAutomationTestBase::TestTrue(this_00,local_20,local_98);
  ::FString::~FString(local_20);
  if (!bVar2) {
    UE::AITestSuite::ConditionallyBreakOnTestFail();
  }
  return bVar2;
}

// SetUp @ 1471aa450

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall
FMassDependencySolverTest::FThreadSafeWriteSubsystem::SetUp(FThreadSafeWriteSubsystem *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 *puVar5;
  TSharedPtr<FMassEntityManager,1> *pTVar6;
  UMassTestProcessor_A *local_190;
  longlong *local_188;
  UMassTestProcessor_B *local_180;
  longlong *local_178;
  TSharedPtr<FMassEntityManager,1> *local_170;
  UMassTestProcessor_A **local_168;
  UMassTestProcessor_A **local_160;
  UMassTestProcessor_A **local_158;
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
  longlong *local_f0;
  longlong *local_e8;
  longlong local_e0;
  FMassSubsystemRequirements *local_d8;
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
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  FMassSubsystemRequirements *local_38;
  TSharedPtr<FMassEntityManager,1> local_30;
  TSharedPtr<FMassEntityManager,1> local_20 [2];
  
  FDependencySolverBase::SetUp((FDependencySolverBase *)this);
  puVar5 = &this->field_0x28;
  local_170 = &local_30;
  pTVar6 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                     (local_170,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x48);
  local_190 = NewTestProcessor<UMassTestProcessor_A>(pTVar6);
  local_168 = *(UMassTestProcessor_A ***)puVar5;
  local_160 = local_168;
  local_158 = local_168;
  if ((local_168 <= &local_190) &&
     (local_150 = *(longlong *)puVar5, local_148 = local_150, local_140 = local_150,
     &local_190 < (UMassTestProcessor_A **)(local_150 + (longlong)*(int *)&this->field_0x34 * 8))) {
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
  iVar4 = *(int *)&this->field_0x30;
  *(int *)&this->field_0x30 = *(int *)&this->field_0x30 + 1;
  local_100 = *(longlong *)puVar5;
  local_f8 = (void *)(local_100 + (longlong)iVar4 * 8);
  local_188 = ::operator_new(8,local_f8);
  *local_188 = (longlong)local_190;
  local_e0 = *local_188;
  local_d8 = (FMassSubsystemRequirements *)(local_e0 + 0x3b8);
  local_f0 = local_188;
  local_e8 = local_188;
  FMassSubsystemRequirements::AddSubsystemRequirement<UMassTestParallelSubsystem>
            (local_d8,ReadWrite);
  puVar5 = &this->field_0x28;
  local_d0 = local_20;
  pTVar6 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                     (local_d0,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x48);
  local_180 = NewTestProcessor<UMassTestProcessor_B>(pTVar6);
  local_c8 = *(UMassTestProcessor_B ***)puVar5;
  local_c0 = local_c8;
  local_b8 = local_c8;
  if ((local_c8 <= &local_180) &&
     (local_b0 = *(longlong *)puVar5, local_a8 = local_b0, local_a0 = local_b0,
     &local_180 < (UMassTestProcessor_B **)(local_b0 + (longlong)*(int *)&this->field_0x34 * 8))) {
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
  local_178 = ::operator_new(8,local_58);
  *local_178 = (longlong)local_180;
  local_40 = *local_178;
  local_38 = (FMassSubsystemRequirements *)(local_40 + 0x3b8);
  local_50 = local_178;
  local_48 = local_178;
  FMassSubsystemRequirements::AddSubsystemRequirement<UMassTestParallelSubsystem>
            (local_38,ReadWrite);
  return true;
}

