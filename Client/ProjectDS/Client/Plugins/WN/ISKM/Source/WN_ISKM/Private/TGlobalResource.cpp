// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 1

// ~TGlobalResource<FWN_DummyFloatBuffer,1> @ 14a83f7c0

void __thiscall
TGlobalResource<FWN_DummyFloatBuffer,1>::~TGlobalResource<FWN_DummyFloatBuffer,1>
          (TGlobalResource<FWN_DummyFloatBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFWN_DummyFloatBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexBufferWithSRV::~FVertexBufferWithSRV((FVertexBufferWithSRV *)this);
  return;
}

