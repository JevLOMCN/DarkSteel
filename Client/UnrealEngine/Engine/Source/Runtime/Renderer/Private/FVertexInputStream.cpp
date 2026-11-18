// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FVertexInputStream @ 144b98390

FVertexInputStream * __thiscall FVertexInputStream::FVertexInputStream(FVertexInputStream *this)

{
  this->StreamIndex = 0;
  this->bStreamSourceSlot = 0;
  this->Offset = 0;
  (this->field3_0x4).VertexBuffer = (FRHIBuffer *)0x0;
  return this;
}

