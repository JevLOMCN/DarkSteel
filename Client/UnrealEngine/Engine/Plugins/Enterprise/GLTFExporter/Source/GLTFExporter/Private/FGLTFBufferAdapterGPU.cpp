// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// GetData @ 14e5f5cb0

uchar * __thiscall FGLTFBufferAdapterGPU::GetData(FGLTFBufferAdapterGPU *this)

{
  if (0 < (this->DataBuffer).ArrayNum) {
    return (uchar *)(this->DataBuffer).AllocatorInstance.Data;
  }
  return (uchar *)0x0;
}

