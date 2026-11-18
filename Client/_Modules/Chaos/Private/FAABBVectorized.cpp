// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// FAABBVectorized @ 143af9990

FAABBVectorized * __thiscall Chaos::FAABBVectorized::FAABBVectorized(FAABBVectorized *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  this->Min = GlobalVectorConstants::BigNumber;
  fVar1 = GlobalVectorConstants::BigNumber.m128_f32[1];
  fVar2 = GlobalVectorConstants::BigNumber.m128_f32[2];
  fVar3 = GlobalVectorConstants::BigNumber.m128_f32[3];
  (this->Max).m128_f32[0] = 0.0 - GlobalVectorConstants::BigNumber.m128_f32[0];
  (this->Max).m128_f32[1] = 0.0 - fVar1;
  (this->Max).m128_f32[2] = 0.0 - fVar2;
  (this->Max).m128_f32[3] = 0.0 - fVar3;
  return this;
}

