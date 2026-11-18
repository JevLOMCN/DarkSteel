// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// operator() @ 147100870

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`FMassCompositeProcessorTest::FCompositeProcessorTest_MultipleSubProcessors::InstantTest'::__l12::
<lambda_1>::operator()(void *this,FMassExecutionContext *param_1)

{
  **(int **)this = **(int **)this + *(int *)((longlong)this + 8);
  return;
}

// InstantTest @ 147147c00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

bool __thiscall
FMassCompositeProcessorTest::FCompositeProcessorTest_MultipleSubProcessors::InstantTest
          (FCompositeProcessorTest_MultipleSubProcessors *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  TSharedPtr<FMassEntityManager,1> *pTVar5;
  TArrayView<UMassProcessor_*,int> *pTVar6;
  longlong lVar7;
  FMassArchetypeSharedFragmentValues *pFVar8;
  TArrayView<UMassProcessor_*,int> *pTVar9;
  undefined1 auStack_868 [32];
  FScriptContainerElement *local_848;
  FScriptContainerElement *local_840;
  longlong local_838;
  longlong local_830;
  undefined8 local_828;
  char local_818;
  undefined1 local_817;
  undefined1 local_816;
  TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_> local_810;
  int local_800;
  int local_7fc;
  int local_7f8;
  int local_7f4;
  int local_7f0;
  uint local_7ec;
  float local_7e8;
  int local_7e4;
  UMassTestProcessorBase *local_7e0;
  FScriptContainerElement *local_7d8;
  UMassCompositeProcessor *local_7d0;
  UMassTestProcessorBase *local_7c8;
  FMassEntityManager *local_7c0;
  TSharedPtr<FMassEntityManager,1> *local_7b8;
  FMassEntityQuery *local_7b0;
  <lambda_1> *local_7a8;
  FScriptContainerElement *local_7a0;
  FScriptContainerElement *local_798;
  FScriptContainerElement *local_790;
  FScriptContainerElement *local_788;
  FScriptContainerElement *local_780;
  FScriptContainerElement *local_778;
  undefined4 local_770;
  undefined4 local_76c;
  FScriptContainerElement *local_768;
  FScriptContainerElement *local_760;
  FScriptContainerElement *local_758;
  longlong local_750;
  longlong local_748;
  FScriptContainerElement *local_740;
  FScriptContainerElement *local_738;
  FScriptContainerElement *local_730;
  undefined8 *local_728;
  TArrayView<UMassProcessor_*,int> *local_720;
  FAutomationTestBase *local_718;
  int local_710;
  <lambda_1> local_708;
  FString local_6f8;
  FMassArchetypeHandle local_6e8;
  TArrayView<UMassProcessor_*,int> local_6d8;
  TSharedPtr<FMassEntityManager,1> local_6c8;
  TArrayView<UMassProcessor_*,int> local_6b8;
  TFunction<void___cdecl(FMassExecutionContext_&)> local_6a8;
  FMassArchetypeSharedFragmentValues local_678;
  FProcessingContext local_608;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_868;
  local_7c0 = TSharedPtr<FMassEntityManager,1>::operator->
                        ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  pFVar8 = &local_678;
  for (lVar7 = 0x68; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)&pFVar8->HashCache = 0;
    pFVar8 = (FMassArchetypeSharedFragmentValues *)((longlong)&pFVar8->HashCache + 1);
  }
  FMassArchetypeSharedFragmentValues::FMassArchetypeSharedFragmentValues(&local_678);
  FMassEntityManager::CreateEntity
            (local_7c0,&local_6e8,(FMassArchetypeSharedFragmentValues *)&this->field_0x60);
  FMassArchetypeSharedFragmentValues::~FMassArchetypeSharedFragmentValues(&local_678);
  pUVar4 = GetTransientPackageAsObject();
  local_7d0 = NewObject<UMassCompositeProcessor>(pUVar4);
  if ((local_7d0 == (UMassCompositeProcessor *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompositeProcessor",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MassEntityTestSuite\\Private\\MassCompositeProcessorTest.cpp"
                         ,0x6a,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  local_7fc = 0;
  local_7f0 = 0;
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_810.AllocatorInstance);
  local_810.ArrayNum = 0;
  local_810.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_810.AllocatorInstance);
  local_800 = 0;
  do {
    if (2 < local_800) {
      local_720 = &local_6b8;
      pTVar6 = TArrayView<UMassProcessor_*,int>::
               TArrayView<UMassProcessor_*,int><TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_>_&,TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_>_>
                         (local_720,&local_810);
      pTVar9 = &local_6d8;
      for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
        *(undefined1 *)&pTVar9->DataPtr = *(undefined1 *)&pTVar6->DataPtr;
        pTVar6 = (TArrayView<UMassProcessor_*,int> *)((longlong)&pTVar6->DataPtr + 1);
        pTVar9 = (TArrayView<UMassProcessor_*,int> *)((longlong)&pTVar9->DataPtr + 1);
      }
      UMassCompositeProcessor::SetChildProcessors(local_7d0,&local_6d8);
      TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_>::
      ~TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_>(&local_810);
      UE::Mass::FProcessingContext::FProcessingContext
                (&local_608,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28,0.0,true);
      UE::Mass::Executor::Run((UMassProcessor *)local_7d0,&local_608);
      local_718 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_7e4 = local_7f0;
      ::FString::FString(&local_6f8,"All of the child processors should get run");
      bVar2 = FTestHelpers::TestEqual<int,int>(&local_6f8,local_7e4,local_7fc,local_718);
      local_818 = !bVar2;
      local_7ec = (uint)(byte)local_818;
      ::FString::~FString(&local_6f8);
      if (local_818 == '\0') {
        local_816 = 1;
        UE::Mass::FProcessingContext::~FProcessingContext(&local_608);
        local_817 = local_816;
      }
      else {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        local_817 = 0;
        UE::Mass::FProcessingContext::~FProcessingContext(&local_608);
      }
      return (bool)local_817;
    }
    local_7b8 = &local_6c8;
    pTVar5 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                       (local_7b8,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_7e0 = NewTestProcessor<UMassTestProcessorBase>(pTVar5);
    local_7b0 = &local_7e0->EntityQuery;
    FMassFragmentRequirements::AddRequirement<FTestFragment_Int>
              ((FMassFragmentRequirements *)local_7b0,ReadOnly,All);
    local_7e8 = powf(__real_41200000,(float)local_800);
    local_7f8 = (int)local_7e8;
    local_708.Result = &local_7f0;
    local_7a8 = &local_708;
    local_708.Value = local_7f8;
    TFunction<void___cdecl(FMassExecutionContext_&)>::
    TFunction<void___cdecl(FMassExecutionContext_&)><_FMassCompositeProcessorTest::FCompositeProcessorTest_MultipleSubProcessors::InstantTest_::__l12::<lambda_1>_>
              (&local_6a8,local_7a8);
    TFunction<void___cdecl(FMassExecutionContext_&)>::operator=
              (&local_7e0->ForEachEntityChunkExecutionFunction,&local_6a8);
    TFunction<void___cdecl(FMassExecutionContext_&)>::
    ~TFunction<void___cdecl(FMassExecutionContext_&)>(&local_6a8);
    local_7fc = local_7fc + local_7f8;
    local_7c8 = local_7e0;
    local_7d8 = (FScriptContainerElement *)&local_7c8;
    local_7a0 = local_810.AllocatorInstance.Data;
    local_798 = local_810.AllocatorInstance.Data;
    local_790 = local_810.AllocatorInstance.Data;
    if (local_810.AllocatorInstance.Data <= local_7d8) {
      local_788 = local_810.AllocatorInstance.Data;
      local_780 = local_810.AllocatorInstance.Data;
      local_778 = local_810.AllocatorInstance.Data;
      if (local_7d8 < local_810.AllocatorInstance.Data + (longlong)local_810.ArrayMax * 8) {
        local_770 = 0;
        local_76c = 0;
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_830 = (longlong)local_810.ArrayNum;
        local_838 = (longlong)local_810.ArrayMax;
        local_768 = local_810.AllocatorInstance.Data;
        local_760 = local_810.AllocatorInstance.Data;
        local_758 = local_810.AllocatorInstance.Data;
        local_740 = local_810.AllocatorInstance.Data;
        local_828 = 8;
        local_840 = local_810.AllocatorInstance.Data;
        local_848 = local_7d8;
        local_750 = local_830;
        local_748 = local_838;
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
    if (local_810.ArrayNum == local_810.ArrayMax) {
      local_810.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_810.AllocatorInstance,&local_810.ArrayMax);
    }
    local_7f4 = local_810.ArrayNum;
    local_738 = local_810.AllocatorInstance.Data;
    local_730 = local_810.AllocatorInstance.Data + (longlong)local_810.ArrayNum * 8;
    local_810.ArrayNum = local_810.ArrayNum + 1;
    local_728 = ::operator_new(8,local_730);
    *local_728 = local_7c8;
    local_710 = local_7f4;
    local_800 = local_800 + 1;
  } while( true );
}

