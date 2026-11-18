// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeEngine
// Functions: 2

// Execute @ 14e4f0fa0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UE::Interchange::FTaskPipeline::Execute(FTaskPipeline *this)

{
  UInterchangeResultsContainer *pUVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  atomic<int> aVar5;
  uint uVar6;
  UInterchangePipelineBase *this_00;
  uint uVar7;
  FImportAsyncHelper *pFVar8;
  longlong lVar9;
  TReferenceControllerBase<1> *pTVar10;
  bool bVar11;
  FGCScopeGuard local_res10;
  char local_res11;
  FLLMScope local_res18 [2];
  TReferenceControllerBase<1> *local_res20;
  FMemScope local_50 [2];
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId24,"UE::Interchange::FTaskPipeline::DoTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskPipeline.cpp"
               ,0x18);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId24);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name29,L"Interchange");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_res18,LLMScope_Name29,false,None,Default,true);
  FMemScope::FMemScope(local_50,&LLMScope_Name29,true);
  local_res11 = '\0';
  bVar4 = IsInGameThread();
  if (!bVar4) {
    if (local_res11 != '\0') {
      FGCScopeGuard::~FGCScopeGuard(&local_res10);
    }
    FGCScopeGuard::FGCScopeGuard(&local_res10);
    local_res11 = '\x01';
  }
  pTVar10 = (this->WeakAsyncHelper).WeakReferenceCount.ReferenceController;
  pFVar8 = (FImportAsyncHelper *)0x0;
  local_res20 = pTVar10;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    aVar3 = pTVar10->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        local_res20 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e4f10ee;
      }
      LOCK();
      aVar5 = pTVar10->SharedReferenceCount;
      bVar4 = aVar3 == aVar5;
      if (bVar4) {
        pTVar10->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar4);
    pFVar8 = (this->WeakAsyncHelper).Object;
    if (pFVar8 != (FImportAsyncHelper *)0x0) goto LAB_14e4f1114;
  }
LAB_14e4f10ee:
  pTVar10 = local_res20;
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("AsyncHelper.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskPipeline.cpp"
                     ,0x26,L"");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14e4f1114:
  this_00 = (UInterchangePipelineBase *)FWeakObjectPtr::Get(&(this->PipelineBase).WeakPtr);
  if (this_00 != (UInterchangePipelineBase *)0x0) {
    if ((pFVar8 == (FImportAsyncHelper *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar1 = (((pFVar8->AssetImportResult).Object)->Results).field0_0x0.DebugPtr;
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 != (UInterchangeResultsContainer *)0x0)) {
      GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this_00->Results).field0_0x0.DebugPtr = pUVar1;
    uVar7 = 0;
    lVar9 = 0;
    while ((pTVar10 = local_res20, (int)uVar7 < (pFVar8->BaseNodeContainers).ArrayNum &&
           (pFVar8->bCancel == (atomic<bool>)0x0))) {
      uVar6 = 0;
      if ((int)uVar7 < (pFVar8->BaseNodeContainers).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (*(longlong *)((pFVar8->BaseNodeContainers).AllocatorInstance.Data + lVar9) == 0) {
        bVar4 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_7806791002571669452>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskPipeline.cpp"
                           ,0x34,"AsyncHelper->BaseNodeContainers[GraphIndex].IsValid()");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else {
        uVar6 = 0;
        if ((int)uVar7 < (pFVar8->BaseNodeContainers).ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UInterchangePipelineBase::ScriptedExecutePipeline
                  (this_00,*(UInterchangeBaseNodeContainer **)
                            ((pFVar8->BaseNodeContainers).AllocatorInstance.Data + lVar9),
                   (TArray<UInterchangeSourceData_*,TSizedDefaultAllocator<32>_> *)
                   &pFVar8->SourceDatas,&pFVar8->ContentBasePath);
      }
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 8;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if (local_res11 != '\0') {
    FGCScopeGuard::~FGCScopeGuard(&local_res10);
  }
  FMemScope::~FMemScope(local_50);
  FLLMScope::~FLLMScope(local_res18);
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetTaskThread @ 14e4f97e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

EInterchangeTaskThread __thiscall UE::Interchange::FTaskPipeline::GetTaskThread(FTaskPipeline *this)

{
  FImportAsyncHelper *pFVar1;
  code *pcVar2;
  atomic<int> aVar3;
  EInterchangeTaskThread EVar4;
  char cVar5;
  atomic<int> aVar6;
  UObject *pUVar7;
  TReferenceControllerBase<1> *pTVar8;
  TWeakObjectPtr<UInterchangePipelineBase,FWeakObjectPtr> *this_00;
  bool bVar9;
  
  pTVar8 = (this->WeakAsyncHelper).WeakReferenceCount.ReferenceController;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
LAB_14e4f9810:
    this_00 = &this->PipelineBase;
    bVar9 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
    if (bVar9) {
      pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      cVar5 = (**(code **)(*(longlong *)pUVar7 + 0x2b8))(pUVar7);
      if (cVar5 == '\0') {
        pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        cVar5 = (**(code **)(*(longlong *)pUVar7 + 0x2b0))(pUVar7,0);
        bVar9 = cVar5 != '\0';
        goto LAB_14e4f98a3;
      }
    }
    else {
      bVar9 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3259487278350729179>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Interchange\\Engine\\Private\\Tasks\\InterchangeTaskPipeline.h"
                         ,0x25,"PipelineBase.IsValid()");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        EVar4 = (*pcVar2)();
        return EVar4;
      }
    }
  }
  else {
    aVar3 = pTVar8->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        pTVar8 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14e4f9810;
      }
      LOCK();
      aVar6 = pTVar8->SharedReferenceCount;
      bVar9 = aVar3 == aVar6;
      if (bVar9) {
        pTVar8->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar6 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar6;
    } while (!bVar9);
    pFVar1 = (this->WeakAsyncHelper).Object;
    if ((pFVar1 == (FImportAsyncHelper *)0x0) || (pFVar1->bRunSynchronous == false))
    goto LAB_14e4f9810;
  }
  bVar9 = false;
LAB_14e4f98a3:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return bVar9;
}

