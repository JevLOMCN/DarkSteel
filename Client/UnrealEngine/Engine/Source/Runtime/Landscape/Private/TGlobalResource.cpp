// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// ~TGlobalResource<FLandscapeEditReadbackTaskPool,1> @ 145f42ea0

void __thiscall
TGlobalResource<FLandscapeEditReadbackTaskPool,1>::
~TGlobalResource<FLandscapeEditReadbackTaskPool,1>
          (TGlobalResource<FLandscapeEditReadbackTaskPool,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFLandscapeEditReadbackTaskPool___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  TIndirectArray<TChunkedArray<FLandscapeEditReadbackTaskImpl,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
  ::Empty((TIndirectArray<TChunkedArray<FLandscapeEditReadbackTaskImpl,16384,TSizedDefaultAllocator<32>_>::FChunk,TSizedDefaultAllocator<32>_>
           *)&this->field_0x20,0);
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

