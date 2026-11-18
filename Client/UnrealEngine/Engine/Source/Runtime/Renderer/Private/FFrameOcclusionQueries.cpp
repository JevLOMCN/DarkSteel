// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FFrameOcclusionQueries @ 1453f9a50

FFrameOcclusionQueries * __thiscall
FFrameBasedOcclusionQueryPool::FFrameOcclusionQueries::FFrameOcclusionQueries
          (FFrameOcclusionQueries *this)

{
  (this->Queries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Queries).ArrayNum = 0;
  (this->Queries).ArrayMax = 0;
  this->FirstFreeIndex = 0;
  this->OcclusionFrameCounter = 0;
  return this;
}

// ~FFrameOcclusionQueries @ 145405120

void __thiscall
FFrameBasedOcclusionQueryPool::FFrameOcclusionQueries::~FFrameOcclusionQueries
          (FFrameOcclusionQueries *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TRefCountPtr<FRHIRenderQuery>,int>
            ((TRefCountPtr<FRHIRenderQuery> *)(this->Queries).AllocatorInstance.Data,
             (this->Queries).ArrayNum);
  pFVar1 = (this->Queries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

