// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 6

// PackBarycentrics @ 14dfd0da0

uint __cdecl FHairStrandsRootUtils::PackBarycentrics(TVector2<float> *param_1)

{
  ushort local_res8 [4];
  ushort local_res10 [4];
  
  local_res10[0] = 0;
  FGenericPlatformMath::StoreHalf(local_res10,(param_1->field0_0x0)._s_0.X);
  local_res8[0] = 0;
  FGenericPlatformMath::StoreHalf(local_res8,(param_1->field0_0x0)._s_0.Y);
  return CONCAT22(local_res8[0],local_res10[0]);
}

// PackTriangleIndex @ 14dfd0f00

uint __cdecl FHairStrandsRootUtils::PackTriangleIndex(uint param_1,uint param_2)

{
  return param_1 & 0xffffff | param_2 << 0x18;
}

// PackUVs @ 14dfd0f20

uint __cdecl FHairStrandsRootUtils::PackUVs(TVector2<float> *param_1)

{
  ushort local_res8 [4];
  ushort local_res10 [4];
  
  local_res10[0] = 0;
  FGenericPlatformMath::StoreHalf(local_res10,(param_1->field0_0x0)._s_0.X);
  local_res8[0] = 0;
  FGenericPlatformMath::StoreHalf(local_res8,(param_1->field0_0x0)._s_0.Y);
  return CONCAT22(local_res8[0],local_res10[0]);
}

// PackUVsToFloat @ 14dfd0f80

float __cdecl FHairStrandsRootUtils::PackUVsToFloat(TVector2<float> *param_1)

{
  ushort local_res8 [4];
  ushort local_res10 [4];
  
  local_res10[0] = 0;
  FGenericPlatformMath::StoreHalf(local_res10,(param_1->field0_0x0)._s_0.X);
  local_res8[0] = 0;
  FGenericPlatformMath::StoreHalf(local_res8,(param_1->field0_0x0)._s_0.Y);
  return (float)CONCAT22(local_res8[0],local_res10[0]);
}

// UnpackBarycentrics @ 14dfda7d0

TVector2<float> __cdecl FHairStrandsRootUtils::UnpackBarycentrics(uint param_1)

{
  undefined4 in_register_0000000c;
  TVector2<float>_u_0 TVar1;
  undefined4 in_EDX;
  float fVar2;
  float fVar3;
  ushort local_res8 [4];
  ushort local_res10 [12];
  
  TVar1._s_0.Y = (float)in_register_0000000c;
  TVar1._s_0.X = (float)param_1;
  local_res8[0] = (ushort)in_EDX;
  local_res10[0] = (ushort)((uint)in_EDX >> 0x10);
  fVar2 = FGenericPlatformMath::LoadHalf(local_res10);
  fVar3 = FGenericPlatformMath::LoadHalf(local_res8);
  *(float *)((longlong)TVar1 + 4) = fVar2;
  *(float *)TVar1 = fVar3;
  return (TVector2<float>)TVar1;
}

// UnpackTriangleIndex @ 14dfda820

void __cdecl FHairStrandsRootUtils::UnpackTriangleIndex(uint param_1,uint *param_2,uint *param_3)

{
  *param_3 = param_1 >> 0x18;
  *param_2 = param_1 & 0xffffff;
  return;
}

