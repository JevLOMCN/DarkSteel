// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// InstantTest @ 14718fed0

/* WARNING: Removing unreachable block (ram,0x00014718ffd1) */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

bool __thiscall FMassDependencySolverTest::FTrivialDependency::InstantTest(FTrivialDependency *this)

{
  UMassTestProcessorBase *pUVar1;
  UMassProcessor *pUVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  undefined1 uVar6;
  FAutomationTestBase *pFVar7;
  FString local_30;
  FString local_20 [2];
  
  FDependencySolverBase::Solve((FDependencySolverBase *)this);
  pFVar7 = FAITestBase::GetTestRunner((FAITestBase *)this);
  lVar4 = this->_padding_;
  ::FString::FString(&local_30,"The results should contain only a single processor");
  bVar5 = FTestHelpers::TestEqual<int,int>(&local_30,(int)lVar4,1,pFVar7);
  ::FString::~FString(&local_30);
  if (bVar5) {
    pFVar7 = FAITestBase::GetTestRunner((FAITestBase *)this);
    pUVar1 = this->Proc;
    if ((int)this->_padding_ < 1) {
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
    }
    pUVar2 = *(UMassProcessor **)(this->_padding_ + 8);
    ::FString::FString(local_20,"The sole processor should be the one we\'ve added");
    bVar5 = FTestHelpers::TestEqual<UMassProcessor,UMassTestProcessorBase>
                      (local_20,pUVar2,pUVar1,pFVar7);
    ::FString::~FString(local_20);
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
  return bVar5;
}

// SetUp @ 1471ab010

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

bool __thiscall FMassDependencySolverTest::FTrivialDependency::SetUp(FTrivialDependency *this)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  TSharedPtr<FMassEntityManager,1> *pTVar7;
  undefined8 *puVar8;
  UMassTestProcessor_A *local_c0 [2];
  TSharedPtr<FMassEntityManager,1> *local_b0;
  UMassTestProcessor_A **local_a8;
  UMassTestProcessor_A **local_a0;
  UMassTestProcessor_A **local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  void *local_38;
  TSharedPtr<FMassEntityManager,1> local_20 [2];
  
  FDependencySolverBase::SetUp((FDependencySolverBase *)this);
  plVar6 = &this->_padding_;
  local_b0 = local_20;
  pTVar7 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                     (local_b0,(TSharedPtr<FMassEntityManager,1> *)&this->_padding_);
  local_c0[0] = NewTestProcessor<UMassTestProcessor_A>(pTVar7);
  local_a8 = (UMassTestProcessor_A **)*plVar6;
  local_a0 = local_a8;
  local_98 = local_a8;
  if ((local_a8 <= local_c0) &&
     (local_90 = *plVar6, local_88 = local_90, local_80 = local_90,
     local_c0 <
     (UMassTestProcessor_A **)(local_90 + (longlong)*(int *)((longlong)&this->_padding_ + 4) * 8)))
  {
    local_78 = 0;
    local_74 = 0;
    UE::Core::Private::FormatStringSan::
    AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
    local_58 = (longlong)(int)this->_padding_;
    local_50 = (longlong)*(int *)((longlong)&this->_padding_ + 4);
    local_70 = *plVar6;
    local_68 = local_70;
    local_60 = local_70;
    local_48 = local_70;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
  }
  if ((int)this->_padding_ == *(int *)((longlong)&this->_padding_ + 4)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)plVar6,(int *)((longlong)&this->_padding_ + 4));
    *(int *)&this->_padding_ = iVar5;
  }
  lVar2 = this->_padding_;
  *(int *)&this->_padding_ = (int)this->_padding_ + 1;
  local_40 = *plVar6;
  local_38 = (void *)(local_40 + (longlong)(int)lVar2 * 8);
  puVar8 = ::operator_new(8,local_38);
  *puVar8 = local_c0[0];
  this->Proc = (UMassTestProcessorBase *)*puVar8;
  return true;
}

