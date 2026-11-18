// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 3

// FPinkNoise @ 1444f1b70

FPinkNoise * __thiscall Audio::FPinkNoise::FPinkNoise(FPinkNoise *this,int param_1)

{
  (this->Noise).RandomStream.InitialSeed = param_1;
  this->X_Z[0] = 0.0;
  this->X_Z[1] = 0.0;
  this->X_Z[2] = 0.0;
  this->X_Z[3] = 0.0;
  this->Y_Z[0] = 0.0;
  this->Y_Z[1] = 0.0;
  this->Y_Z[2] = 0.0;
  this->Y_Z[3] = 0.0;
  (this->Noise).RandomStream.Seed = param_1;
  this->A0 = 1.0;
  return this;
}

// FPinkNoise @ 1444f1ba0

FPinkNoise * __thiscall Audio::FPinkNoise::FPinkNoise(FPinkNoise *this)

{
  LARGE_INTEGER local_res8 [4];
  
  QueryPerformanceCounter(local_res8);
  (this->Noise).RandomStream.InitialSeed = local_res8[0].s.LowPart;
  (this->Noise).RandomStream.Seed = local_res8[0].s.LowPart;
  this->X_Z[0] = 0.0;
  this->X_Z[1] = 0.0;
  this->X_Z[2] = 0.0;
  this->X_Z[3] = 0.0;
  this->Y_Z[0] = 0.0;
  this->Y_Z[1] = 0.0;
  this->Y_Z[2] = 0.0;
  this->Y_Z[3] = 0.0;
  this->A0 = 1.0;
  return this;
}

// Generate @ 1444fd170

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall Audio::FPinkNoise::Generate(FPinkNoise *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = this->Y_Z[1];
  fVar9 = this->Y_Z[2];
  fVar2 = this->X_Z[2];
  fVar7 = fVar9 * ___real_bf05ae34;
  uVar4 = (this->Noise).RandomStream.Seed * 0xbb38435 + 0x3619636b;
  (this->Noise).RandomStream.Seed = uVar4;
  fVar3 = this->Y_Z[0];
  fVar6 = fVar2 * ___real_3d4f4f43;
  fVar5 = this->X_Z[1] * ___real_3dc49842;
  fVar8 = (float)(uVar4 >> 9 | 0x3f800000) - __real_3f800000;
  this->X_Z[2] = this->X_Z[1];
  this->Y_Z[1] = fVar3;
  this->Y_Z[3] = fVar9;
  this->Y_Z[2] = fVar1;
  fVar9 = (fVar8 + fVar8) - __real_3f800000;
  this->X_Z[0] = fVar9;
  fVar8 = fVar9 * ___real_3d4c7b0c;
  this->X_Z[1] = fVar9;
  fVar9 = this->X_Z[3] * ___real_3b907794;
  this->X_Z[3] = fVar2;
  fVar7 = ((((fVar8 - fVar5) + (fVar6 - fVar9)) - fVar3 * ___real_c01fad5c) -
          fVar1 * ___real_40011ae2) - fVar7;
  this->Y_Z[0] = fVar7;
  return fVar7;
}

