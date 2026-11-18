// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 3

// GetBackBufferTexture @ 145a68b00

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

FRHITexture * __thiscall
FD3D12BackBufferReferenceTexture2D::GetBackBufferTexture(FD3D12BackBufferReferenceTexture2D *this)

{
  return (FRHITexture *)(this->Viewport->CurrentBackBuffer_RHIThread->Texture).Reference;
}

// GetDefaultBindlessHandle @ 145a68e60

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

FRHIDescriptorHandle __thiscall
FD3D12BackBufferReferenceTexture2D::GetDefaultBindlessHandle
          (FD3D12BackBufferReferenceTexture2D *this)

{
  FRHIDescriptorHandle in_RDX;
  
  (**(code **)(((this->Viewport->CurrentBackBuffer_RHIThread->Texture).Reference)->_padding_ + 0x30)
  )();
  return in_RDX;
}

// GetTextureBaseRHI @ 145aab8d0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void * __thiscall
FD3D12BackBufferReferenceTexture2D::GetTextureBaseRHI(FD3D12BackBufferReferenceTexture2D *this)

{
  return (this->Viewport->CurrentBackBuffer_RHIThread->Texture).Reference;
}

