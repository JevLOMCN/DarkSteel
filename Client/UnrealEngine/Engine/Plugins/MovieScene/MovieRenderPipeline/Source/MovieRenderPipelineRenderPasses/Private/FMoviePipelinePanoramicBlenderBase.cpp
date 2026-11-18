// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 1

// ~FMoviePipelinePanoramicBlenderBase @ 14ddcb430

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::~FMoviePipelinePanoramicBlenderBase
          (FMoviePipelinePanoramicBlenderBase *this)

{
  FScriptContainerElement *pFVar1;
  FTaskConcurrencyLimiter *pFVar2;
  
  pFVar1 = (this->OutputEquirectangularMap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->OutputMapAccessMutex);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PoolAccessMutex);
  DestructItems<TUniquePtr<UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::FPoolEntry,TDefaultDelete<UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::FPoolEntry>_>,__int64>
            ((TUniquePtr<UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::FPoolEntry,TDefaultDelete<UE::MoviePipeline::FMoviePipelinePanoramicBlenderBase::FPoolEntry>_>
              *)(this->TempBufferPool).AllocatorInstance.Data,(this->TempBufferPool).ArrayNum);
  pFVar1 = (this->TempBufferPool).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->TaskConcurrencyLimiter).Ptr;
  if (pFVar2 != (FTaskConcurrencyLimiter *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar2->Pimpl).SharedReferenceCount.ReferenceController);
    ::operator_delete(pFVar2,0x10);
    return;
  }
  return;
}

