// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// FGpuFrameData @ 1492d0260

FGpuFrameData * __thiscall FNiagaraGPUProfiler::FGpuFrameData::FGpuFrameData(FGpuFrameData *this)

{
  (this->EndQuery).Query.Reference = (FRHIRenderQuery *)0x0;
  (this->EndQuery).QueryPool = (FRHIRenderQueryPool *)0x0;
  (this->DispatchTimers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DispatchTimers).ArrayNum = 0;
  (this->DispatchTimers).ArrayMax = 0;
  return this;
}

// ~FGpuFrameData @ 1492d3e90

void __thiscall FNiagaraGPUProfiler::FGpuFrameData::~FGpuFrameData(FGpuFrameData *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FNiagaraGPUProfiler::FGpuDispatchTimer,int>
            ((FGpuDispatchTimer *)(this->DispatchTimers).AllocatorInstance.Data,
             (this->DispatchTimers).ArrayNum);
  pFVar1 = (this->DispatchTimers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FRHIPooledRenderQuery::~FRHIPooledRenderQuery(&this->EndQuery);
  return;
}

