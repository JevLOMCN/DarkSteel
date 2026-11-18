// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// ~TSharedPtr<FD3D12ShaderResourceView,1> @ 1459f64d0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __thiscall
TSharedPtr<FD3D12ShaderResourceView,1>::~TSharedPtr<FD3D12ShaderResourceView,1>
          (TSharedPtr<FD3D12ShaderResourceView,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

// ~TSharedPtr<FD3D12DepthStencilView,1> @ 145a47c70

void __thiscall
TSharedPtr<FD3D12DepthStencilView,1>::~TSharedPtr<FD3D12DepthStencilView,1>
          (TSharedPtr<FD3D12DepthStencilView,1> *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SharedReferenceCount).ReferenceController);
  return;
}

