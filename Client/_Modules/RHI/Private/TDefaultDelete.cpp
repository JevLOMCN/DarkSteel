// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 2

// operator() @ 145c4c970

void __thiscall
TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState>::operator()
          (TDefaultDelete<UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState> *this,
          FQueueState *param_1)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  if (param_1 != (FQueueState *)0x0) {
    DestructItems<TUniquePtr<UE::RHI::GPUProfiler::FNode,TDefaultDelete<UE::RHI::GPUProfiler::FNode>_>,int>
              ((TUniquePtr<UE::RHI::GPUProfiler::FNode,TDefaultDelete<UE::RHI::GPUProfiler::FNode>_>
                *)(param_1->Profile).Nodes.AllocatorInstance.Data,(param_1->Profile).Nodes.ArrayNum)
    ;
    pFVar1 = (param_1->Profile).Nodes.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->Breadcrumb).AllocatorRef.SharedReferenceCount.ReferenceController);
    pFVar1 = (param_1->ActiveStatsStack).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    *(undefined4 *)&(param_1->ActiveStats).field_0x48 = 0;
    pvVar2 = *(void **)&(param_1->ActiveStats).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<FRHIBreadcrumbData_Stats,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FRHIBreadcrumbData_Stats,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FRHIBreadcrumbData_Stats,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&param_1->ActiveStats);
    *(undefined4 *)&(param_1->Timestamps).Stats.field_0x48 = 0;
    pvVar2 = *(void **)&(param_1->Timestamps).Stats.field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<FRHIBreadcrumbData_Stats,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FRHIBreadcrumbData_Stats,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FRHIBreadcrumbData_Stats,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&(param_1->Timestamps).Stats);
    pFVar1 = (param_1->Timestamps).Queue.Values.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->Signals).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    TSpscQueue<UE::RHI::GPUProfiler::FEventSink::FIterator,FMemory>::
    ~TSpscQueue<UE::RHI::GPUProfiler::FEventSink::FIterator,FMemory>(&param_1->PendingStreams);
    ::operator_delete(param_1,0x1b0);
  }
  return;
}

// operator() @ 145c4ca60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TDefaultDelete<FPipelineCacheFile>::operator()
          (TDefaultDelete<FPipelineCacheFile> *this,FPipelineCacheFile *param_1)

{
  uint uVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_FileCacheMemory> FVar6;
  longlong lVar7;
  FName local_res10 [3];
  
  if (param_1 != (FPipelineCacheFile *)0x0) {
    uVar1 = *(uint *)&(param_1->TOC).MetaData.field_0x48;
    if (uVar1 < 2) {
      lVar7 = 0;
    }
    else {
      lVar7 = (longlong)(int)uVar1 << 2;
    }
    lVar7 = (longlong)*(int *)&(param_1->TOC).MetaData.field_0xc * 0xc0 +
            lVar7 + (ulonglong)((*(int *)&(param_1->TOC).MetaData.field_0x2c + 0x1fU >> 5) << 2);
    if (lVar7 != 0) {
      FVar6 = StatPtr_STAT_FileCacheMemory;
      if (StatPtr_STAT_FileCacheMemory == (FThreadSafeStaticStat<FStat_STAT_FileCacheMemory>)0x0) {
        pFVar5 = ::FName::FName(local_res10,"STAT_FileCacheMemory");
        FVar6 = (FThreadSafeStaticStat<FStat_STAT_FileCacheMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FileCacheMemory,*pFVar5,
                           L"File Cache","STATGROUP_PipelineStateCache","STATCAT_Advanced",
                           L"ShaderPipelineCache",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar2 = *(FName *)FVar6;
      local_res10[0].ComparisonIndex = FVar2.ComparisonIndex.Value;
      local_res10[0].Number = FVar2.Number;
      FThreadStats::AddMessage<__int64>(FVar2,Subtract,lVar7,false);
    }
    pFVar3 = (param_1->RecordingFilename).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->AsyncFileHandle).SharedReferenceCount.ReferenceController);
    pFVar3 = (param_1->FilePath).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    *(undefined4 *)&(param_1->TOC).MetaData.field_0x48 = 0;
    pvVar4 = *(void **)&(param_1->TOC).MetaData.field_0x40;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FPipelineCacheFileFormatPSOMetaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&(param_1->TOC).MetaData);
    pFVar3 = (param_1->Name).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    ::operator_delete(param_1,200);
  }
  return;
}

