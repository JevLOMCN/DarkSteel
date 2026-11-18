// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 3

// FExecution_MultipleNullProcessors @ 1470f4100

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

FExecution_MultipleNullProcessors * __thiscall
FMassExecutionTest::FExecution_MultipleNullProcessors::FExecution_MultipleNullProcessors
          (FExecution_MultipleNullProcessors *this)

{
  FAITestBase::FAITestBase((FAITestBase *)this);
  *(undefined ***)this = &___7FExecutionTestBase__6B_;
  TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
            ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28,(FNullTag *)0x0);
  this->field_0x38 = 1;
  *(undefined ***)this = &___7FExecution_MultipleNullProcessors_FMassExecutionTest__6B_;
  return this;
}

// operator() @ 1470fd4c0

void __thiscall
`FMassExecutionTest::FExecution_MultipleNullProcessors::InstantTest'::__l2::<lambda_1>::operator()
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

// InstantTest @ 147163bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

bool __thiscall
FMassExecutionTest::FExecution_MultipleNullProcessors::InstantTest
          (FExecution_MultipleNullProcessors *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *pTVar4;
  TArrayView<UMassProcessor_*_const,int> *pTVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 auStack_8f8 [32];
  FScriptContainerElement *local_8d8;
  FScriptContainerElement *local_8d0;
  longlong local_8c8;
  longlong local_8c0;
  undefined8 local_8b8;
  TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_> local_8a8;
  undefined1 local_898;
  FScopeGuardSyntaxSupport local_897 [3];
  int local_894;
  int local_890;
  int local_88c;
  FScriptContainerElement *local_888;
  FScriptContainerElement *local_880;
  FScriptContainerElement *local_878;
  undefined8 local_870;
  undefined8 local_868;
  undefined8 local_860;
  int local_858;
  int local_854;
  int local_850;
  FScriptContainerElement *local_848;
  FScriptContainerElement *local_840;
  FScriptContainerElement *local_838;
  FScriptContainerElement *local_830;
  FScriptContainerElement *local_828;
  FScriptContainerElement *local_820;
  undefined4 local_818;
  undefined4 local_814;
  FScriptContainerElement *local_810;
  FScriptContainerElement *local_808;
  FScriptContainerElement *local_800;
  longlong local_7f8;
  longlong local_7f0;
  FScriptContainerElement *local_7e8;
  FScriptContainerElement *local_7e0;
  FScriptContainerElement *local_7d8;
  undefined8 *local_7d0;
  FScriptContainerElement *local_7c8;
  FScriptContainerElement *local_7c0;
  FScriptContainerElement *local_7b8;
  FScriptContainerElement *local_7b0;
  FScriptContainerElement *local_7a8;
  FScriptContainerElement *local_7a0;
  undefined4 local_798;
  undefined4 local_794;
  FScriptContainerElement *local_790;
  FScriptContainerElement *local_788;
  FScriptContainerElement *local_780;
  longlong local_778;
  longlong local_770;
  FScriptContainerElement *local_768;
  FScriptContainerElement *local_760;
  FScriptContainerElement *local_758;
  undefined8 *local_750;
  FScriptContainerElement *local_748;
  FScriptContainerElement *local_740;
  FScriptContainerElement *local_738;
  FScriptContainerElement *local_730;
  FScriptContainerElement *local_728;
  FScriptContainerElement *local_720;
  undefined4 local_718;
  undefined4 local_714;
  FScriptContainerElement *local_710;
  FScriptContainerElement *local_708;
  FScriptContainerElement *local_700;
  longlong local_6f8;
  longlong local_6f0;
  FScriptContainerElement *local_6e8;
  FScriptContainerElement *local_6e0;
  FScriptContainerElement *local_6d8;
  undefined8 *local_6d0;
  FString *local_6c8;
  FString *local_6c0;
  FAutomationTestBase *local_6b8;
  FExecution_MultipleNullProcessors *local_6b0;
  FExecution_MultipleNullProcessors **local_6a8;
  TArrayView<FMassArchetypeEntityCollection_const_,int> *local_6a0;
  TArrayView<UMassProcessor_*_const,int> *local_698;
  <lambda_1> local_690;
  undefined4 local_688;
  undefined1 local_680 [16];
  undefined1 local_670 [24];
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_658;
  TArrayView<UMassProcessor_*_const,int> local_648;
  FString local_638;
  TArrayView<FMassArchetypeEntityCollection_const_,int> local_628;
  TArrayView<UMassProcessor_*_const,int> local_618;
  FProcessingContext local_608;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_8f8;
  local_688 = 0;
  UE::Mass::FProcessingContext::FProcessingContext
            (&local_608,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28,0.0,true);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_8a8.AllocatorInstance);
  local_8a8.ArrayNum = 0;
  local_8a8.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_8a8.AllocatorInstance);
  local_870 = 0;
  local_880 = (FScriptContainerElement *)&local_870;
  local_848 = local_8a8.AllocatorInstance.Data;
  local_840 = local_8a8.AllocatorInstance.Data;
  local_838 = local_8a8.AllocatorInstance.Data;
  if (local_8a8.AllocatorInstance.Data <= local_880) {
    local_830 = local_8a8.AllocatorInstance.Data;
    local_828 = local_8a8.AllocatorInstance.Data;
    local_820 = local_8a8.AllocatorInstance.Data;
    if (local_880 < local_8a8.AllocatorInstance.Data + (longlong)local_8a8.ArrayMax * 8) {
      local_818 = 0;
      local_814 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_8c0 = (longlong)local_8a8.ArrayNum;
      local_8c8 = (longlong)local_8a8.ArrayMax;
      local_810 = local_8a8.AllocatorInstance.Data;
      local_808 = local_8a8.AllocatorInstance.Data;
      local_800 = local_8a8.AllocatorInstance.Data;
      local_7e8 = local_8a8.AllocatorInstance.Data;
      local_8b8 = 8;
      local_8d0 = local_8a8.AllocatorInstance.Data;
      local_8d8 = local_880;
      local_7f8 = local_8c0;
      local_7f0 = local_8c8;
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
  if (local_8a8.ArrayNum == local_8a8.ArrayMax) {
    local_8a8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_8a8.AllocatorInstance,&local_8a8.ArrayMax);
  }
  local_894 = local_8a8.ArrayNum;
  local_7e0 = local_8a8.AllocatorInstance.Data;
  local_7d8 = local_8a8.AllocatorInstance.Data + (longlong)local_8a8.ArrayNum * 8;
  local_8a8.ArrayNum = local_8a8.ArrayNum + 1;
  local_7d0 = ::operator_new(8,local_7d8);
  *local_7d0 = local_870;
  local_858 = local_894;
  local_868 = 0;
  local_878 = (FScriptContainerElement *)&local_868;
  local_7c8 = local_8a8.AllocatorInstance.Data;
  local_7c0 = local_8a8.AllocatorInstance.Data;
  local_7b8 = local_8a8.AllocatorInstance.Data;
  if (local_8a8.AllocatorInstance.Data <= local_878) {
    local_7b0 = local_8a8.AllocatorInstance.Data;
    local_7a8 = local_8a8.AllocatorInstance.Data;
    local_7a0 = local_8a8.AllocatorInstance.Data;
    if (local_878 < local_8a8.AllocatorInstance.Data + (longlong)local_8a8.ArrayMax * 8) {
      local_798 = 0;
      local_794 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_8c0 = (longlong)local_8a8.ArrayNum;
      local_8c8 = (longlong)local_8a8.ArrayMax;
      local_790 = local_8a8.AllocatorInstance.Data;
      local_788 = local_8a8.AllocatorInstance.Data;
      local_780 = local_8a8.AllocatorInstance.Data;
      local_768 = local_8a8.AllocatorInstance.Data;
      local_8b8 = 8;
      local_8d0 = local_8a8.AllocatorInstance.Data;
      local_8d8 = local_878;
      local_778 = local_8c0;
      local_770 = local_8c8;
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
  if (local_8a8.ArrayNum == local_8a8.ArrayMax) {
    local_8a8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_8a8.AllocatorInstance,&local_8a8.ArrayMax);
  }
  local_890 = local_8a8.ArrayNum;
  local_760 = local_8a8.AllocatorInstance.Data;
  local_758 = local_8a8.AllocatorInstance.Data + (longlong)local_8a8.ArrayNum * 8;
  local_8a8.ArrayNum = local_8a8.ArrayNum + 1;
  local_750 = ::operator_new(8,local_758);
  *local_750 = local_868;
  local_854 = local_890;
  local_860 = 0;
  local_888 = (FScriptContainerElement *)&local_860;
  local_748 = local_8a8.AllocatorInstance.Data;
  local_740 = local_8a8.AllocatorInstance.Data;
  local_738 = local_8a8.AllocatorInstance.Data;
  if (local_8a8.AllocatorInstance.Data <= local_888) {
    local_730 = local_8a8.AllocatorInstance.Data;
    local_728 = local_8a8.AllocatorInstance.Data;
    local_720 = local_8a8.AllocatorInstance.Data;
    if (local_888 < local_8a8.AllocatorInstance.Data + (longlong)local_8a8.ArrayMax * 8) {
      local_718 = 0;
      local_714 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_8c0 = (longlong)local_8a8.ArrayNum;
      local_8c8 = (longlong)local_8a8.ArrayMax;
      local_710 = local_8a8.AllocatorInstance.Data;
      local_708 = local_8a8.AllocatorInstance.Data;
      local_700 = local_8a8.AllocatorInstance.Data;
      local_6e8 = local_8a8.AllocatorInstance.Data;
      local_8b8 = 8;
      local_8d0 = local_8a8.AllocatorInstance.Data;
      local_8d8 = local_888;
      local_6f8 = local_8c0;
      local_6f0 = local_8c8;
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
  if (local_8a8.ArrayNum == local_8a8.ArrayMax) {
    local_8a8.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_8a8.AllocatorInstance,&local_8a8.ArrayMax);
  }
  local_88c = local_8a8.ArrayNum;
  local_6e0 = local_8a8.AllocatorInstance.Data;
  local_6d8 = local_8a8.AllocatorInstance.Data + (longlong)local_8a8.ArrayNum * 8;
  local_8a8.ArrayNum = local_8a8.ArrayNum + 1;
  local_6d0 = ::operator_new(8,local_6d8);
  *local_6d0 = local_860;
  local_850 = local_88c;
  local_6b8 = FAITestBase::GetTestRunner((FAITestBase *)this);
  local_6c8 = &local_638;
  local_6c0 = ::FString::FString(local_6c8,L"Processors contains nullptr");
  FAutomationTestBase::AddExpectedErrorPlain(local_6b8,local_6c0,Contains,1);
  local_6a8 = &local_6b0;
  local_6b0 = this;
  ScopeExitSupport::FScopeGuardSyntaxSupport::
  operator+<_FMassExecutionTest::FExecution_MultipleNullProcessors::InstantTest_::__l2::<lambda_1>_>
            (local_897,&local_690);
  UE::AITestSuite::TestsInProgress = UE::AITestSuite::TestsInProgress + 1;
  local_6a0 = &local_628;
  pTVar4 = TArrayView<FMassArchetypeEntityCollection_const_,int>::
           TArrayView<FMassArchetypeEntityCollection_const_,int>(local_6a0);
  puVar7 = local_680;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *(undefined1 *)&pTVar4->DataPtr;
    pTVar4 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
             ((longlong)&pTVar4->DataPtr + 1);
    puVar7 = puVar7 + 1;
  }
  local_698 = &local_618;
  pTVar5 = TArrayView<UMassProcessor_*_const,int>::
           TArrayView<UMassProcessor_*_const,int><TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_>_&,TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_>_>
                     (local_698,&local_8a8);
  puVar7 = local_670;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar7 = *(undefined1 *)&pTVar5->DataPtr;
    pTVar5 = (TArrayView<UMassProcessor_*_const,int> *)((longlong)&pTVar5->DataPtr + 1);
    puVar7 = puVar7 + 1;
  }
  puVar7 = local_680;
  pTVar4 = &local_658;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)&pTVar4->DataPtr = *puVar7;
    puVar7 = puVar7 + 1;
    pTVar4 = (TArrayView<FMassArchetypeEntityCollection_const_,int> *)
             ((longlong)&pTVar4->DataPtr + 1);
  }
  puVar7 = local_670;
  pTVar5 = &local_648;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *(undefined1 *)&pTVar5->DataPtr = *puVar7;
    puVar7 = puVar7 + 1;
    pTVar5 = (TArrayView<UMassProcessor_*_const,int> *)((longlong)&pTVar5->DataPtr + 1);
  }
  UE::Mass::Executor::RunProcessorsView(&local_648,&local_608,&local_658);
  local_898 = 1;
  ScopeExitSupport::
  TScopeGuard<`FMassExecutionTest::FExecution_MultipleNullProcessors::InstantTest'::__l2::<lambda_1>_>
  ::
  ~TScopeGuard<_FMassExecutionTest::FExecution_MultipleNullProcessors::InstantTest_::__l2::<lambda_1>_>
            (&local_690);
  TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_>::
  ~TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_>(&local_8a8);
  UE::Mass::FProcessingContext::~FProcessingContext(&local_608);
  return (bool)local_898;
}

