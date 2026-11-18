// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 1

// ~TGlobalResource<TBoundShaderStateHistory<10000,1>,1> @ 14596e650

void __thiscall
TGlobalResource<TBoundShaderStateHistory<10000,1>,1>::
~TGlobalResource<TBoundShaderStateHistory<10000,1>,1>
          (TGlobalResource<TBoundShaderStateHistory<10000,1>,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_V__TBoundShaderStateHistory__0CHBA__00___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  TBoundShaderStateHistory<10000,1>::~TBoundShaderStateHistory<10000,1>
            ((TBoundShaderStateHistory<10000,1> *)this);
  return;
}

