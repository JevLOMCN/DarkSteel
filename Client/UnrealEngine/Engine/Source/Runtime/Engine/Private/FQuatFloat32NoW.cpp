// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ToQuat<1> @ 147430a70

TQuat<float> * __cdecl
FQuatFloat32NoW::ToQuat<1>(TQuat<float> *__return_storage_ptr__,uint *param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  uVar1 = *param_1;
  uVar5 = uVar1 >> 10;
  fVar6 = 0.0;
  if (uVar1 >> 0x15 == 0) {
    fVar2 = 0.0;
  }
  else {
    fVar2 = (float)(((uVar1 >> 0x15 & 0xfffffc00) << 5 | uVar1 >> 0x15 & 0x7f) << 0x10 |
                   (uVar1 >> 0x1c & 7) * 0x800000 + 0x3d800000);
  }
  if ((uVar5 & 0x7ff) == 0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = (float)(((uVar5 & 0x400) << 5 | uVar5 & 0x7f) << 0x10 |
                   ((uVar5 & 0x7ff) >> 7 & 7) * 0x800000 + 0x3d800000);
  }
  if ((uVar1 & 0x3ff) == 0) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = (float)(((uVar1 & 0x200) << 5 | uVar1 & 0x3f) << 0x11 |
                   ((uVar1 & 0x3ff) >> 6 & 7) * 0x800000 + 0x3d800000);
  }
  fVar7 = ((__real_3f800000 - fVar2 * fVar2) - fVar3 * fVar3) - fVar4 * fVar4;
  if (0.0 < fVar7) {
    fVar6 = SQRT(fVar7);
  }
  __return_storage_ptr__->X = fVar2;
  __return_storage_ptr__->Y = fVar3;
  __return_storage_ptr__->Z = fVar4;
  __return_storage_ptr__->W = fVar6;
  return __return_storage_ptr__;
}

