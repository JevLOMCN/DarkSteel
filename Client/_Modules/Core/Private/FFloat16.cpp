// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// SetTruncate @ 1417fe230

void __thiscall FFloat16::SetTruncate(FFloat16 *this,float param_1)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  
  uVar1 = (ushort)((uint)param_1 >> 0x10);
  uVar3 = uVar1 & 0x8000;
  uVar4 = (uint)param_1 >> 0x17 & 0xff;
  if (uVar4 < 0x71) {
    if (0x18 < (int)(0x7e - uVar4)) {
      this->Encoded = uVar3;
      return;
    }
    uVar2 = (uint)param_1 & 0x7fffff | 0x800000;
    uVar3 = (ushort)(uVar2 >> ((byte)(0x7e - uVar4) & 0x1f)) & 0x3ff | uVar3;
    if ((uVar2 >> (0x7dU - (char)((uint)param_1 >> 0x17) & 0x1f) & 1) != 0) {
      this->Encoded = uVar3 + 1;
      return;
    }
  }
  else {
    if (0x8e < uVar4) {
      this->Encoded = uVar3 | 0x7bff;
      return;
    }
    uVar3 = ((uVar1 >> 7) - 0x10 & 0x1f) << 10 | (ushort)((uint)param_1 >> 0xd) & 0x3ff | uVar3;
  }
  this->Encoded = uVar3;
  return;
}

