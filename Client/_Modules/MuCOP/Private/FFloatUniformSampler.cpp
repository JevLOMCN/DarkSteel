// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCOP
// Functions: 3

// FFloatUniformSampler @ 14d367720

FFloatUniformSampler * __thiscall
CustomizableObjectPopulation::FFloatUniformSampler::FFloatUniformSampler
          (FFloatUniformSampler *this,float param_1,float param_2)

{
  this->MinValue = param_1;
  this->MaxValue = param_2;
  return this;
}

// IsValidSampler @ 14d36a560

bool __thiscall
CustomizableObjectPopulation::FFloatUniformSampler::IsValidSampler(FFloatUniformSampler *this)

{
  return this->MinValue < this->MaxValue;
}

// Sample @ 14d36acb0

float __thiscall
CustomizableObjectPopulation::FFloatUniformSampler::Sample
          (FFloatUniformSampler *this,FRandomStream *param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  
  fVar1 = this->MaxValue;
  fVar2 = this->MinValue;
  uVar3 = param_1->Seed * 0xbb38435 + 0x3619636b;
  param_1->Seed = uVar3;
  return ((float)(uVar3 >> 9 | 0x3f800000) - __real_3f800000) * (fVar1 - fVar2) + fVar2;
}

