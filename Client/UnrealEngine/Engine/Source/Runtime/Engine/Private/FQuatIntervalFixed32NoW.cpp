// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ToQuat<1> @ 147430bb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TQuat<float> * __cdecl
FQuatIntervalFixed32NoW::ToQuat<1>
          (TQuat<float> *__return_storage_ptr__,float *param_1,float *param_2,uint *param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = *param_3;
  fVar3 = (float)(int)((uVar1 >> 0x15) - 0x3ff) * __real_3a802008 * *param_2 + *param_1;
  fVar4 = (float)(int)((uVar1 >> 10 & 0x7ff) - 0x3ff) * __real_3a802008 * param_2[1] + param_1[1];
  fVar5 = (float)(int)((uVar1 & 0x3ff) - 0x1ff) * ___real_3b004020 * param_2[2] + param_1[2];
  fVar2 = 0.0;
  fVar6 = ((__real_3f800000 - fVar3 * fVar3) - fVar4 * fVar4) - fVar5 * fVar5;
  if (0.0 < fVar6) {
    fVar2 = SQRT(fVar6);
  }
  __return_storage_ptr__->X = fVar3;
  __return_storage_ptr__->Y = fVar4;
  __return_storage_ptr__->Z = fVar5;
  __return_storage_ptr__->W = fVar2;
  return __return_storage_ptr__;
}

