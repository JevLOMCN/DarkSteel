// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// GetNumActive @ 1450d0fe0

uint __thiscall FRHIGPUMask::GetNumActive(FRHIGPUMask *this)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)this->GPUMask - ((ulonglong)(this->GPUMask >> 1) & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  return (uint)(byte)(((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
}

