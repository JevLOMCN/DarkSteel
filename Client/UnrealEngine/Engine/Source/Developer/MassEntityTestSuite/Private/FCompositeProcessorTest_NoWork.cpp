// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 2

// operator() @ 1470fcdf0

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`FMassCompositeProcessorTest::FCompositeProcessorTest_NoWork::InstantTest'::__l2::<lambda_1>::
operator()(void *this,FMassExecutionContext *param_1)

{
  **(int **)this = **(int **)this + 1;
  return;
}

// InstantTest @ 1471481f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

bool __thiscall
FMassCompositeProcessorTest::FCompositeProcessorTest_NoWork::InstantTest
          (FCompositeProcessorTest_NoWork *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UObject *pUVar4;
  TSharedPtr<FMassEntityManager,1> *pTVar5;
  TArrayView<UMassProcessor_*,int> *pTVar6;
  UMassProcessor *pUVar7;
  longlong lVar8;
  TArrayView<UMassProcessor_*,int> *pTVar9;
  undefined1 auStackY_918 [32];
  TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_> local_8c0;
  TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_> local_8b0;
  int local_8a0;
  int local_89c;
  int local_898;
  int local_894;
  uint local_890;
  int local_88c;
  uint local_888;
  UMassCompositeProcessor *local_880;
  int local_878;
  int local_874;
  TObjectPtr<UMassProcessor>_u_0 *local_870;
  UMassTestProcessorBase *local_868;
  FScriptContainerElement *local_860;
  UMassTestProcessorBase *local_858;
  UMassTestProcessorBase *local_850;
  TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_> local_848;
  UMassTestProcessorBase *local_838;
  TObjectPtr<UMassProcessor>_u_0 local_830;
  <lambda_1> local_828;
  <lambda_1> *local_820;
  TSharedPtr<FMassEntityManager,1> *local_818;
  FMassEntityQuery *local_810;
  FScriptContainerElement *local_808;
  FScriptContainerElement *local_800;
  FScriptContainerElement *local_7f8;
  FScriptContainerElement *local_7f0;
  FScriptContainerElement *local_7e8;
  FScriptContainerElement *local_7e0;
  undefined4 local_7d8;
  undefined4 local_7d4;
  FScriptContainerElement *local_7d0;
  FScriptContainerElement *local_7c8;
  FScriptContainerElement *local_7c0;
  longlong local_7b8;
  longlong local_7b0;
  FScriptContainerElement *local_7a8;
  FScriptContainerElement *local_7a0;
  FScriptContainerElement *local_798;
  undefined8 *local_790;
  TArrayView<UMassProcessor_*,int> *local_788;
  FAutomationTestBase *local_780;
  FMassEntityManager *local_778;
  TSharedPtr<FMassEntityManager,1> *local_770;
  FMassEntityQuery *local_768;
  UMassTestProcessorBase *local_760;
  TObjectPtr<UMassProcessor>_u_0 *local_758;
  TObjectPtr<UMassProcessor>_u_0 *local_750;
  TObjectPtr<UMassProcessor>_u_0 *local_748;
  TObjectPtr<UMassProcessor>_u_0 *local_740;
  TObjectPtr<UMassProcessor>_u_0 *local_738;
  TObjectPtr<UMassProcessor>_u_0 *local_730;
  TObjectPtr<UMassProcessor>_u_0 *local_728;
  undefined4 local_720;
  undefined4 local_71c;
  TObjectPtr<UMassProcessor>_u_0 *local_718;
  int local_710;
  TObjectPtr<UMassProcessor>_u_0 *local_708;
  longlong local_700;
  longlong local_6f8;
  TObjectPtr<UMassProcessor>_u_0 *local_6f0;
  TObjectPtr<UMassProcessor>_u_0 *local_6e8;
  FScriptContainerElement *local_6e0;
  TObjectPtr<UMassProcessor> *local_6d8;
  FAutomationTestBase *local_6d0;
  undefined4 local_6c8;
  TObjectPtr<UMassProcessor>_u_0 *local_6c0;
  int local_6b8;
  FString local_6b0;
  FString local_6a0;
  TArrayView<UMassProcessor_*,int> local_688;
  TSharedRef<UE::Mass::ObserverManager::FCreationContext,1> local_678;
  TSharedPtr<FMassEntityManager,1> local_668;
  TArrayView<UMassProcessor_*,int> local_658;
  TSharedPtr<FMassEntityManager,1> local_648;
  TFunction<void___cdecl(FMassExecutionContext_&)> local_638;
  FProcessingContext local_608;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_918;
  pUVar4 = GetTransientPackageAsObject();
  local_880 = NewObject<UMassCompositeProcessor>(pUVar4);
  if ((local_880 == (UMassCompositeProcessor *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompositeProcessor",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MassEntityTestSuite\\Private\\MassCompositeProcessorTest.cpp"
                         ,0x2b,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  local_8a0 = 0;
  local_828.TimesExecuted = &local_8a0;
  local_820 = &local_828;
  TFunction<void___cdecl(FMassExecutionContext_&)>::
  TFunction<void___cdecl(FMassExecutionContext_&)><_FMassCompositeProcessorTest::FCompositeProcessorTest_NoWork::InstantTest_::__l2::<lambda_1>_>
            (&local_638,local_820);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_8b0.AllocatorInstance);
  local_8b0.ArrayNum = 0;
  local_8b0.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_8b0.AllocatorInstance);
  local_89c = 0;
  do {
    if (2 < local_89c) {
      local_788 = &local_658;
      pTVar6 = TArrayView<UMassProcessor_*,int>::
               TArrayView<UMassProcessor_*,int><TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_>_&,TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_>_>
                         (local_788,&local_8b0);
      pTVar9 = &local_688;
      for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
        *(undefined1 *)&pTVar9->DataPtr = *(undefined1 *)&pTVar6->DataPtr;
        pTVar6 = (TArrayView<UMassProcessor_*,int> *)((longlong)&pTVar6->DataPtr + 1);
        pTVar9 = (TArrayView<UMassProcessor_*,int> *)((longlong)&pTVar9->DataPtr + 1);
      }
      UMassCompositeProcessor::SetChildProcessors(local_880,&local_688);
      TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_>::
      ~TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_>(&local_8b0);
      UE::Mass::FProcessingContext::FProcessingContext
                (&local_608,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28,0.0,true);
      UE::Mass::Executor::Run((UMassProcessor *)local_880,&local_608);
      local_780 = FAITestBase::GetTestRunner((FAITestBase *)this);
      local_878 = local_8a0;
      ::FString::FString(&local_6b0,"None of the execution functions should have been executed");
      bVar2 = FTestHelpers::TestEqual<int,int>(&local_6b0,local_878,0,local_780);
      local_890 = (uint)!bVar2;
      ::FString::~FString(&local_6b0);
      if (!bVar2) {
        UE::AITestSuite::ConditionallyBreakOnTestFail();
        UE::Mass::FProcessingContext::~FProcessingContext(&local_608);
        TFunction<void___cdecl(FMassExecutionContext_&)>::
        ~TFunction<void___cdecl(FMassExecutionContext_&)>(&local_638);
        bVar2 = false;
      }
      else {
        local_6c8 = 0x11;
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
                  (&local_848.AllocatorInstance);
        local_848.ArrayNum = 0;
        local_848.ArrayMax =
             TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                       (&local_848.AllocatorInstance);
        local_778 = TSharedPtr<FMassEntityManager,1>::operator->
                              ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
        FMassEntityManager::BatchCreateEntities
                  (local_778,&local_678,(FMassArchetypeHandle *)&this->field_0x50,0x11,&local_848);
        TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>::
        ~TSharedRef<UE::Mass::ObserverManager::FCreationContext,1>(&local_678);
        local_8a0 = 0;
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
                  (&local_8c0.AllocatorInstance);
        local_8c0.ArrayNum = 0;
        local_8c0.ArrayMax =
             TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                       (&local_8c0.AllocatorInstance);
        for (local_898 = 0; local_898 < 3; local_898 = local_898 + 1) {
          local_770 = &local_648;
          pTVar5 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                             (local_770,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
          local_858 = NewTestProcessor<UMassTestProcessorBase>(pTVar5);
          TFunction<void___cdecl(FMassExecutionContext_&)>::operator=
                    (&local_858->ForEachEntityChunkExecutionFunction,&local_638);
          local_768 = &local_858->EntityQuery;
          FMassFragmentRequirements::AddRequirement<FTestFragment_Int>
                    ((FMassFragmentRequirements *)local_768,ReadWrite,All);
          local_758 = &local_830;
          local_760 = local_858;
          local_850 = local_858;
          pUVar7 = (UMassProcessor *)
                   UE::CoreUObject::Private::MakeObjectHandle((UObject *)local_858);
          local_758->DebugPtr = pUVar7;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_850 != (UMassTestProcessorBase *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_850);
          }
          local_870 = &local_830;
          local_750 = (TObjectPtr<UMassProcessor>_u_0 *)local_8c0.AllocatorInstance.Data;
          local_748 = (TObjectPtr<UMassProcessor>_u_0 *)local_8c0.AllocatorInstance.Data;
          local_740 = (TObjectPtr<UMassProcessor>_u_0 *)local_8c0.AllocatorInstance.Data;
          if (local_8c0.AllocatorInstance.Data <= local_870) {
            local_738 = (TObjectPtr<UMassProcessor>_u_0 *)local_8c0.AllocatorInstance.Data;
            local_730 = (TObjectPtr<UMassProcessor>_u_0 *)local_8c0.AllocatorInstance.Data;
            local_728 = (TObjectPtr<UMassProcessor>_u_0 *)local_8c0.AllocatorInstance.Data;
            if (local_870 <
                (TObjectPtr<UMassProcessor>_u_0 *)
                (local_8c0.AllocatorInstance.Data + (longlong)local_8c0.ArrayMax * 8)) {
              local_720 = 0;
              local_71c = 0;
              UE::Core::Private::FormatStringSan::
              AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
              local_700 = (longlong)local_8c0.ArrayNum;
              local_6f8 = (longlong)local_8c0.ArrayMax;
              local_718 = (TObjectPtr<UMassProcessor>_u_0 *)local_8c0.AllocatorInstance.Data;
              local_6c0 = (TObjectPtr<UMassProcessor>_u_0 *)local_8c0.AllocatorInstance.Data;
              local_708 = (TObjectPtr<UMassProcessor>_u_0 *)local_8c0.AllocatorInstance.Data;
              local_6f0 = (TObjectPtr<UMassProcessor>_u_0 *)local_8c0.AllocatorInstance.Data;
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
          if (local_8c0.ArrayNum == local_8c0.ArrayMax) {
            local_8c0.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_8c0.AllocatorInstance,&local_8c0.ArrayMax);
          }
          local_88c = local_8c0.ArrayNum;
          local_6e8 = (TObjectPtr<UMassProcessor>_u_0 *)local_8c0.AllocatorInstance.Data;
          local_6e0 = local_8c0.AllocatorInstance.Data + (longlong)local_8c0.ArrayNum * 8;
          local_8c0.ArrayNum = local_8c0.ArrayNum + 1;
          local_6d8 = ::operator_new(8,local_6e0);
          TObjectPtr<UMassProcessor>::TObjectPtr<UMassProcessor>
                    (local_6d8,(TObjectPtr<UMassProcessor> *)&local_830.ObjectPtr);
          local_6b8 = local_88c;
        }
        UMassCompositeProcessor::SetChildProcessors(local_880,&local_8c0);
        TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>::
        ~TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>(&local_8c0);
        UE::Mass::Executor::Run((UMassProcessor *)local_880,&local_608);
        local_6d0 = FAITestBase::GetTestRunner((FAITestBase *)this);
        local_874 = local_8a0;
        ::FString::FString(&local_6a0,"None of the execution functions should have been executed");
        bVar2 = FTestHelpers::TestEqual<int,int>(&local_6a0,local_874,0,local_6d0);
        local_888 = (uint)!bVar2;
        ::FString::~FString(&local_6a0);
        if (!bVar2) {
          UE::AITestSuite::ConditionallyBreakOnTestFail();
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_848);
          UE::Mass::FProcessingContext::~FProcessingContext(&local_608);
          TFunction<void___cdecl(FMassExecutionContext_&)>::
          ~TFunction<void___cdecl(FMassExecutionContext_&)>(&local_638);
          bVar2 = false;
        }
        else {
          TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>::
          ~TArray<FMassEntityHandle,TSizedDefaultAllocator<32>_>(&local_848);
          UE::Mass::FProcessingContext::~FProcessingContext(&local_608);
          TFunction<void___cdecl(FMassExecutionContext_&)>::
          ~TFunction<void___cdecl(FMassExecutionContext_&)>(&local_638);
          bVar2 = true;
        }
      }
      return bVar2;
    }
    local_818 = &local_668;
    pTVar5 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                       (local_818,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
    local_868 = NewTestProcessor<UMassTestProcessorBase>(pTVar5);
    TFunction<void___cdecl(FMassExecutionContext_&)>::operator=
              (&local_868->ForEachEntityChunkExecutionFunction,&local_638);
    local_810 = &local_868->EntityQuery;
    FMassFragmentRequirements::AddRequirement<FTestFragment_Float>
              ((FMassFragmentRequirements *)local_810,ReadOnly,All);
    local_838 = local_868;
    local_860 = (FScriptContainerElement *)&local_838;
    local_808 = local_8b0.AllocatorInstance.Data;
    local_800 = local_8b0.AllocatorInstance.Data;
    local_7f8 = local_8b0.AllocatorInstance.Data;
    if (local_8b0.AllocatorInstance.Data <= local_860) {
      local_7f0 = local_8b0.AllocatorInstance.Data;
      local_7e8 = local_8b0.AllocatorInstance.Data;
      local_7e0 = local_8b0.AllocatorInstance.Data;
      if (local_860 < local_8b0.AllocatorInstance.Data + (longlong)local_8b0.ArrayMax * 8) {
        local_7d8 = 0;
        local_7d4 = 0;
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_7b8 = (longlong)local_8b0.ArrayNum;
        local_7b0 = (longlong)local_8b0.ArrayMax;
        local_7d0 = local_8b0.AllocatorInstance.Data;
        local_7c8 = local_8b0.AllocatorInstance.Data;
        local_7c0 = local_8b0.AllocatorInstance.Data;
        local_7a8 = local_8b0.AllocatorInstance.Data;
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
    if (local_8b0.ArrayNum == local_8b0.ArrayMax) {
      local_8b0.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_8b0.AllocatorInstance,&local_8b0.ArrayMax);
    }
    local_894 = local_8b0.ArrayNum;
    local_7a0 = local_8b0.AllocatorInstance.Data;
    local_798 = local_8b0.AllocatorInstance.Data + (longlong)local_8b0.ArrayNum * 8;
    local_8b0.ArrayNum = local_8b0.ArrayNum + 1;
    local_790 = ::operator_new(8,local_798);
    *local_790 = local_838;
    local_710 = local_894;
    local_89c = local_89c + 1;
  } while( true );
}

