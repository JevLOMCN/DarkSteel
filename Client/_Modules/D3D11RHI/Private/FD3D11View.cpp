// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 1

// ~FD3D11View @ 14596f6b0

void __thiscall FD3D11View::~FD3D11View(FD3D11View *this)

{
  *(undefined ***)this = &___7FD3D11View__6B_;
  if (*(longlong *)&this->field_0x8 != 0) {
    *(undefined8 *)(*(longlong *)&this->field_0x8 + 0x10) = *(undefined8 *)&this->field_0x10;
  }
  if (*(undefined8 **)&this->field_0x10 != (undefined8 *)0x0) {
    **(undefined8 **)&this->field_0x10 = *(undefined8 *)&this->field_0x8;
  }
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  return;
}

