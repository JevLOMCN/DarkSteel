// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 1

// UpdateLinkedViews @ 14599ead0

void __thiscall FD3D11ViewableResource::UpdateLinkedViews(FD3D11ViewableResource *this)

{
  FD3D11View *pFVar1;
  
  for (pFVar1 = this->LinkedViews; pFVar1 != (FD3D11View *)0x0;
      pFVar1 = *(FD3D11View **)&pFVar1->field_0x8) {
    (**(code **)(*(longlong *)pFVar1 + 8))(pFVar1);
  }
  return;
}

