// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 3

// FExecution_SingleNullProcessor @ 1470f41e0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FExecution_SingleNullProcessor * __thiscall
FMassExecutionTest::FExecution_SingleNullProcessor::FExecution_SingleNullProcessor
          (FExecution_SingleNullProcessor *this)

{
  FAITestBase::FAITestBase((FAITestBase *)this);
  *(undefined ***)this = &___7FExecutionTestBase__6B_;
  TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28,(FNullTag *)0x0);
  this->field_0x38 = 1;
  *(undefined ***)this = &___7FExecution_SingleNullProcessor_FMassExecutionTest__6B_;
  return this;
}

// operator() @ 1470fd550

void __thiscall
`FMassExecutionTest::FExecution_SingleNullProcessor::InstantTest'::__l2::<lambda_1>::operator()
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

// InstantTest @ 1471644e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

bool __thiscall
FMassExecutionTest::FExecution_SingleNullProcessor::InstantTest
          (FExecution_SingleNullProcessor *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *pTVar4;
  TArrayView<UMassProcessor_*_const,int> *pTVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 auStack_7c8 [32];
  FScriptContainerElement *local_7a8;
  FScriptContainerElement *local_7a0;
  longlong local_798;
  longlong local_790;
  undefined8 local_788;
  undefined1 local_778;
  TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_> local_770;
  FScopeGuardSyntaxSupport local_760 [4];
  int local_75c;
  FScriptContainerElement *local_758;
  undefined8 local_750;
  int local_748;
  FScriptContainerElement *local_740;
  FScriptContainerElement *local_738;
  FScriptContainerElement *local_730;
  FScriptContainerElement *local_728;
  FScriptContainerElement *local_720;
  FScriptContainerElement *local_718;
  undefined4 local_710;
  undefined4 local_70c;
  FScriptContainerElement *local_708;
  FScriptContainerElement *local_700;
  FScriptContainerElement *local_6f8;
  longlong local_6f0;
  longlong local_6e8;
  FScriptContainerElement *local_6e0;
  FScriptContainerElement *local_6d8;
  FScriptContainerElement *local_6d0;
  undefined8 *local_6c8;
  FString *local_6c0;
  FString *local_6b8;
  FAutomationTestBase *local_6b0;
  FExecution_SingleNullProcessor *local_6a8;
  FExecution_SingleNullProcessor **local_6a0;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *local_698;
  TArrayView<UMassProcessor_*_const,int> *local_690;
  <lambda_1> local_688;
  undefined4 local_680;
  undefined1 local_678 [16];
  undefined1 local_668 [16];
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_658;
  TArrayView<UMassProcessor_*_const,int> local_648;
  FString local_638;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_628;
  TArrayView<UMassProcessor_*_const,int> local_618;
  FProcessingContext local_608;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_7c8;
  local_680 = 0;
  UE::Mass::FProcessingContext::FProcessingContext
            (&local_608,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28,0.0,true);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_770.AllocatorInstance);
  local_770.ArrayNum = 0;
  local_770.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_770.AllocatorInstance);
  local_750 = 0;
  local_758 = (FScriptContainerElement *)&local_750;
  local_740 = local_770.AllocatorInstance.Data;
  local_738 = local_770.AllocatorInstance.Data;
  local_730 = local_770.AllocatorInstance.Data;
  if (local_770.AllocatorInstance.Data <= local_758) {
    local_728 = local_770.AllocatorInstance.Data;
    local_720 = local_770.AllocatorInstance.Data;
    local_718 = local_770.AllocatorInstance.Data;
    if (local_758 < local_770.AllocatorInstance.Data + (longlong)local_770.ArrayMax * 8) {
      local_710 = 0;
      local_70c = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_790 = (longlong)local_770.ArrayNum;
      local_798 = (longlong)local_770.ArrayMax;
      local_708 = local_770.AllocatorInstance.Data;
      local_700 = local_770.AllocatorInstance.Data;
      local_6f8 = local_770.AllocatorInstance.Data;
      local_6e0 = local_770.AllocatorInstance.Data;
      local_788 = 8;
      local_7a0 = local_770.AllocatorInstance.Data;
      local_7a8 = local_758;
      local_6f0 = local_790;
      local_6e8 = local_798;
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
  if (local_770.ArrayNum == local_770.ArrayMax) {
    local_770.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_770.AllocatorInstance,&local_770.ArrayMax);
  }
  local_75c = local_770.ArrayNum;
  local_6d8 = local_770.AllocatorInstance.Data;
  local_6d0 = local_770.AllocatorInstance.Data + (longlong)local_770.ArrayNum * 8;
  local_770.ArrayNum = local_770.ArrayNum + 1;
  local_6c8 = ::operator_new(8,local_6d0);
  *local_6c8 = local_750;
  local_748 = local_75c;
  local_6b0 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_6c0 = &local_638;
  local_6b8 = ::FString::FString(local_6c0,L"Processors contains nullptr");
  FAutomationTestBase::AddExpectedErrorPlain(local_6b0,local_6b8,Contains,1);
  local_6a0 = &local_6a8;
  local_6a8 = this;
  ScopeExitSupport::FScopeGuardSyntaxSupport::
  operator+<_FMassExecutionTest::FExecution_SingleNullProcessor::InstantTest_::__l2::<lambda_1>_>
            (local_760,&local_688);
  UE::AITestSuite::TestsInProgress = UE::AITestSuite::TestsInProgress + 1;
  local_698 = &local_628;
  pTVar4 = TArrayView<FMassArchetypeEntityCollection_const_,int>::
           TArrayView<FMassArchetypeEntityCollection_const_,int>(local_698);
  puVar7 = local_678;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *(undefined1 *)&pTVar4->DataPtr;
    pTVar4 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
             ((longlong)&pTVar4->DataPtr + 1);
    puVar7 = puVar7 + 1;
  }
  local_690 = &local_618;
  pTVar5 = TArrayView<UMassProcessor_*_const,int>::
           TArrayView<UMassProcessor_*_const,int><TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_>_&,TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_>_>
                     (local_690,&local_770);
  puVar7 = local_668;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *(undefined1 *)&pTVar5->DataPtr;
    pTVar5 = (TArrayView<UMassProcessor_*_const,int> *)((longlong)&pTVar5->DataPtr + 1);
    puVar7 = puVar7 + 1;
  }
  puVar7 = local_678;
  pTVar4 = &local_658;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)&pTVar4->DataPtr = *puVar7;
    puVar7 = puVar7 + 1;
    pTVar4 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
             ((longlong)&pTVar4->DataPtr + 1);
  }
  puVar7 = local_668;
  pTVar5 = &local_648;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)&pTVar5->DataPtr = *puVar7;
    puVar7 = puVar7 + 1;
    pTVar5 = (TArrayView<UMassProcessor_*_const,int> *)((longlong)&pTVar5->DataPtr + 1);
  }
  UE::Mass::Executor::RunProcessorsView(&local_648,&local_608,&local_658);
  local_778 = 1;
  ScopeExitSupport::
  TScopeGuard<`FMassExecutionTest::FExecution_SingleNullProcessor::InstantTest'::__l2::<lambda_1>_>
  ::
  ~TScopeGuard<_FMassExecutionTest::FExecution_SingleNullProcessor::InstantTest_::__l2::<lambda_1>_>
            (&local_688);
  TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_>::
  ~TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_>(&local_770);
  UE::Mass::FProcessingContext::~FProcessingContext(&local_608);
  return (bool)local_778;
}

