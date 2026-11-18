// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 3

// FRandomStream @ 1470f4fc0

FRandomStream * __thiscall FRandomStream::FRandomStream(FRandomStream *this,int param_1)

{
  this->InitialSeed = param_1;
  this->Seed = param_1;
  return this;
}

// GetFraction @ 147120270

float __thiscall FRandomStream::GetFraction(FRandomStream *this)

{
  uint uVar1;
  
  uVar1 = this->Seed * 0xbb38435 + 0x3619636b;
  this->Seed = uVar1;
  return (float)(uVar1 >> 9 | 0x3f800000) - __real_3f800000;
}

// RandRange @ 147199f40

int __thiscall FRandomStream::RandRange(FRandomStream *this,int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (param_2 - param_1) + 1;
  if (0 < iVar2) {
    uVar1 = this->Seed * 0xbb38435 + 0x3619636b;
    this->Seed = uVar1;
    return (int)(((float)(uVar1 >> 9 | 0x3f800000) - __real_3f800000) * (float)iVar2) + param_1;
  }
  return param_1;
}

