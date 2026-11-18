// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageCore
// Functions: 2

// LoadHalf @ 1423607a0

float __cdecl FGenericPlatformMath::LoadHalf(ushort *param_1)

{
  ushort uVar1;
  uint uVar2;
  float fVar3;
  
  uVar1 = *param_1;
  uVar2 = (uVar1 & 0x7fff) * 0x2000;
  fVar3 = (float)(uVar2 + 0x38000000);
  if ((uVar2 & 0xf800000) == 0xf800000) {
    return (float)(uVar2 + 0x70000000 | (uVar1 & 0x8000) << 0x10);
  }
  if ((uVar2 & 0xf800000) == 0) {
    fVar3 = (float)(uVar2 + 0x38800000) + __real_b8800000;
  }
  return (float)((uint)fVar3 | (uVar1 & 0x8000) << 0x10);
}

// StoreHalf @ 142362200

void __cdecl FGenericPlatformMath::StoreHalf(ushort *param_1,float param_2)

{
  ushort uVar1;
  ushort uVar2;
  float fVar3;
  undefined2 local_res10;
  
  fVar3 = (float)((uint)param_2 & 0x80000000 ^ (uint)param_2);
  uVar2 = (ushort)(((uint)param_2 & 0x80000000) >> 0x10);
  if (0x477fffff < (uint)fVar3) {
    uVar1 = 0x7c00;
    if (0x7f800000 < (uint)fVar3) {
      uVar1 = 0x7e00;
    }
    *param_1 = uVar2 | uVar1;
    return;
  }
  if ((uint)fVar3 < 0x38800000) {
    local_res10 = SUB42(fVar3 + __real_3f000000,0);
    *param_1 = uVar2 | local_res10;
    return;
  }
  *param_1 = uVar2 | (ushort)(((uint)fVar3 >> 0xd & 1) + 0xc8000fff + (int)fVar3 >> 0xd);
  return;
}

