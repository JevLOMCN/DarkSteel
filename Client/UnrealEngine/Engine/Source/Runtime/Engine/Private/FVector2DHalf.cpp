// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FVector2DHalf @ 148444470

FVector2DHalf * __thiscall FVector2DHalf::FVector2DHalf(FVector2DHalf *this)

{
  this->X = 0;
  this->Y = 0;
  return this;
}

// operator= @ 148626ba0

FVector2DHalf * __thiscall FVector2DHalf::operator=(FVector2DHalf *this,TVector2<float> *param_1)

{
  FFloat16 local_res8 [4];
  
  local_res8[0].Encoded = 0;
  FGenericPlatformMath::StoreHalf(&local_res8[0].Encoded,(param_1->field0_0x0)._s_0.X);
  (this->X).Encoded = local_res8[0].Encoded;
  local_res8[0].Encoded = 0;
  FGenericPlatformMath::StoreHalf(&local_res8[0].Encoded,(param_1->field0_0x0)._s_0.Y);
  (this->Y).Encoded = local_res8[0].Encoded;
  return this;
}

