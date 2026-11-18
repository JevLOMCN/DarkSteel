// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// operator() @ 145e89130

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
TDefaultDelete<FShaderPipelineCacheTask>::operator()
          (TDefaultDelete<FShaderPipelineCacheTask> *this,FShaderPipelineCacheTask *param_1)

{
  FScriptContainerElement *pFVar1;
  ForElementType<FSetElementId> FVar2;
  
  if (param_1 != (FShaderPipelineCacheTask *)0x0) {
    pFVar1 = (param_1->PrecompileContext).CacheName.Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->CompletedMasks).HashSize = 0;
    FVar2 = (param_1->CompletedMasks).Hash.SecondaryData;
    if (FVar2 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar2);
    }
    TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<unsigned___int64>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&(param_1->CompletedMasks).Elements);
    TDoubleLinkedList<FPipelineCacheFileFormatPSORead_*>::
    ~TDoubleLinkedList<FPipelineCacheFileFormatPSORead_*>(&param_1->FetchTasks);
    DestructItems<FPipelineCachePSOHeader,int>
              ((FPipelineCachePSOHeader *)(param_1->OrderedCompileTasks).AllocatorInstance.Data,
               (param_1->OrderedCompileTasks).ArrayNum);
    pFVar1 = (param_1->OrderedCompileTasks).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    DestructItems<UE::ShaderPipeline::CompileJob,int>
              ((CompileJob *)(param_1->CompileTasks).AllocatorInstance.Data,
               (param_1->CompileTasks).ArrayNum);
    pFVar1 = (param_1->CompileTasks).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    DestructItems<UE::ShaderPipeline::CompileJob,int>
              ((CompileJob *)(param_1->ReadTasks).AllocatorInstance.Data,
               (param_1->ReadTasks).ArrayNum);
    pFVar1 = (param_1->ReadTasks).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    pFVar1 = (param_1->PSOCacheKey).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(param_1,0xf0);
  }
  return;
}

