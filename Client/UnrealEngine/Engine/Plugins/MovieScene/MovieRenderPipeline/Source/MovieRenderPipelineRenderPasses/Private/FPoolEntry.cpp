// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 1

// FPoolEntry @ 14ddc6000

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FPoolEntry * __thiscall
UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender::FPoolEntry::FPoolEntry(FPoolEntry *this)

{
  (this->Blender).TaskConcurrencyLimiter.Ptr = (FTaskConcurrencyLimiter *)0x0;
  (this->Blender).TempBufferPool.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Blender).TempBufferPool.ArrayNum = 0;
  (this->Blender).TempBufferPool.ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&(this->Blender).PoolAccessMutex,4000);
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)&(this->Blender).OutputMapAccessMutex,4000);
  (this->Blender).OutputEquirectangularMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Blender).OutputEquirectangularMap.ArrayNum = 0;
  (this->Blender).OutputEquirectangularMap.ArrayMax = 0;
  this->NumCompletedAccumulations = (atomic<int>)0x0;
  return this;
}

