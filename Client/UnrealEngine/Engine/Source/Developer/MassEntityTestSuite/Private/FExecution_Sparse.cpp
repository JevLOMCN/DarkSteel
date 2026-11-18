// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 1

// InstantTest @ 147164a30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

bool __thiscall FMassExecutionTest::FExecution_Sparse::InstantTest(FExecution_Sparse *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FMassEntityManager *pFVar4;
  TSharedPtr<FMassEntityManager,1> *pTVar5;
  TArrayView<UMassProcessor_*,int> *pTVar6;
  longlong lVar7;
  TArrayView<UMassProcessor_*,int> *pTVar8;
  undefined1 auStack_7b8 [32];
  FScriptContainerElement *local_798;
  FScriptContainerElement *local_790;
  longlong local_788;
  longlong local_780;
  undefined8 local_778;
  undefined1 local_768;
  TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_> local_760;
  int local_750;
  FScriptContainerElement *local_748;
  UMassTestProcessorBase *local_740;
  UMassTestProcessorBase *local_738;
  int local_730;
  TSharedPtr<FMassEntityManager,1> *local_728;
  FMassEntityQuery *local_720;
  FScriptContainerElement *local_718;
  FScriptContainerElement *local_710;
  FScriptContainerElement *local_708;
  FScriptContainerElement *local_700;
  FScriptContainerElement *local_6f8;
  FScriptContainerElement *local_6f0;
  undefined4 local_6e8;
  undefined4 local_6e4;
  FScriptContainerElement *local_6e0;
  FScriptContainerElement *local_6d8;
  FScriptContainerElement *local_6d0;
  longlong local_6c8;
  longlong local_6c0;
  FScriptContainerElement *local_6b8;
  FScriptContainerElement *local_6b0;
  FScriptContainerElement *local_6a8;
  undefined8 *local_6a0;
  TArrayView<UMassProcessor_*,int> *local_698;
  undefined4 local_690;
  FMassRuntimePipeline local_688;
  TArrayView<UMassProcessor_*,int> local_668;
  FMassArchetypeEntityCollection local_658;
  TSharedPtr<FMassEntityManager,1> local_630;
  TArrayView<UMassProcessor_*,int> local_620;
  FProcessingContext local_608;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_7b8;
  local_690 = 0;
  pFVar4 = TSharedPtr<FMassEntityManager,1>::operator*<FMassEntityManager>
                     ((TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  UE::Mass::FProcessingContext::FProcessingContext(&local_608,pFVar4,0.0,true);
  local_728 = &local_630;
  pTVar5 = TSharedPtr<FMassEntityManager,1>::TSharedPtr<FMassEntityManager,1>
                     (local_728,(TSharedPtr<FMassEntityManager,1> *)&this->field_0x28);
  local_740 = NewTestProcessor<UMassTestProcessorBase>(pTVar5);
  if ((local_740 == (UMassTestProcessorBase *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Processor",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MassEntityTestSuite\\Private\\MassExecutionTest.cpp"
                         ,0x85,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  local_720 = &local_740->EntityQuery;
  FMassFragmentRequirements::AddRequirement<FTestFragment_Float>
            ((FMassFragmentRequirements *)local_720,ReadOnly,All);
  FMassRuntimePipeline::FMassRuntimePipeline(&local_688,None);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_760.AllocatorInstance);
  local_760.ArrayNum = 0;
  local_760.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_760.AllocatorInstance);
  local_738 = local_740;
  local_748 = (FScriptContainerElement *)&local_738;
  local_718 = local_760.AllocatorInstance.Data;
  local_710 = local_760.AllocatorInstance.Data;
  local_708 = local_760.AllocatorInstance.Data;
  if (local_760.AllocatorInstance.Data <= local_748) {
    local_700 = local_760.AllocatorInstance.Data;
    local_6f8 = local_760.AllocatorInstance.Data;
    local_6f0 = local_760.AllocatorInstance.Data;
    if (local_748 < local_760.AllocatorInstance.Data + (longlong)local_760.ArrayMax * 8) {
      local_6e8 = 0;
      local_6e4 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_780 = (longlong)local_760.ArrayNum;
      local_788 = (longlong)local_760.ArrayMax;
      local_6e0 = local_760.AllocatorInstance.Data;
      local_6d8 = local_760.AllocatorInstance.Data;
      local_6d0 = local_760.AllocatorInstance.Data;
      local_6b8 = local_760.AllocatorInstance.Data;
      local_778 = 8;
      local_790 = local_760.AllocatorInstance.Data;
      local_798 = local_748;
      local_6c8 = local_780;
      local_6c0 = local_788;
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
  if (local_760.ArrayNum == local_760.ArrayMax) {
    local_760.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x808,&local_760.AllocatorInstance,&local_760.ArrayMax);
  }
  local_750 = local_760.ArrayNum;
  local_6b0 = local_760.AllocatorInstance.Data;
  local_6a8 = local_760.AllocatorInstance.Data + (longlong)local_760.ArrayNum * 8;
  local_760.ArrayNum = local_760.ArrayNum + 1;
  local_6a0 = ::operator_new(8,local_6a8);
  *local_6a0 = local_738;
  local_730 = local_750;
  local_698 = &local_620;
  pTVar6 = TArrayView<UMassProcessor_*,int>::
           TArrayView<UMassProcessor_*,int><TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_>_&,TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_>_>
                     (local_698,&local_760);
  pTVar8 = &local_668;
  for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
    *(undefined1 *)&pTVar8->DataPtr = *(undefined1 *)&pTVar6->DataPtr;
    pTVar6 = (TArrayView<UMassProcessor_*,int> *)((longlong)&pTVar6->DataPtr + 1);
    pTVar8 = (TArrayView<UMassProcessor_*,int> *)((longlong)&pTVar8->DataPtr + 1);
  }
  FMassRuntimePipeline::SetProcessors(&local_688,&local_668);
  TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_>::
  ~TArray<UMassProcessor_*,TSizedDefaultAllocator<32>_>(&local_760);
  FMassArchetypeEntityCollection::FMassArchetypeEntityCollection
            (&local_658,(FMassArchetypeHandle *)&this->field_0x50,GatherAll);
  UE::Mass::Executor::RunSparse(&local_688,&local_608,&local_658);
  local_768 = 1;
  FMassArchetypeEntityCollection::~FMassArchetypeEntityCollection(&local_658);
  TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>::
  ~TArray<TObjectPtr<UMassProcessor>,TSizedDefaultAllocator<32>_>(&local_688.Processors);
  UE::Mass::FProcessingContext::~FProcessingContext(&local_608);
  return (bool)local_768;
}

