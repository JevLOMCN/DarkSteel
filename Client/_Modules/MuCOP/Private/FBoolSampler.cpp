// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCOP
// Functions: 3

// FBoolSampler @ 14d3671b0

FBoolSampler * __thiscall
CustomizableObjectPopulation::FBoolSampler::FBoolSampler(FBoolSampler *this,int param_1,int param_2)

{
  this->TippingValue = param_1;
  this->CumulativeValue = param_1 + param_2;
  return this;
}

// IsValidSampler @ 14d36a410

bool __thiscall CustomizableObjectPopulation::FBoolSampler::IsValidSampler(FBoolSampler *this)

{
  return 0 < this->CumulativeValue;
}

// Sample @ 14d36a5d0

bool __thiscall
CustomizableObjectPopulation::FBoolSampler::Sample(FBoolSampler *this,FRandomStream *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = this->CumulativeValue;
  if (0 < iVar1) {
    uVar2 = param_1->Seed * 0xbb38435 + 0x3619636b;
    param_1->Seed = uVar2;
    return (int)(((float)(uVar2 >> 9 | 0x3f800000) - __real_3f800000) * (float)iVar1) <
           this->TippingValue;
  }
  return 0 < this->TippingValue;
}

