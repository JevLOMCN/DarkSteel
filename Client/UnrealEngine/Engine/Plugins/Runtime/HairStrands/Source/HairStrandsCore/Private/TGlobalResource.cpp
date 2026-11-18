// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// ~TGlobalResource<FDummyCulledDispatchVertexIdsBuffer,1> @ 14e07d070

void __thiscall
TGlobalResource<FDummyCulledDispatchVertexIdsBuffer,1>::
~TGlobalResource<FDummyCulledDispatchVertexIdsBuffer,1>
          (TGlobalResource<FDummyCulledDispatchVertexIdsBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFDummyCulledDispatchVertexIdsBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FDummyCulledDispatchVertexIdsBuffer::~FDummyCulledDispatchVertexIdsBuffer
            ((FDummyCulledDispatchVertexIdsBuffer *)this);
  return;
}

