// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ToQuat<1> @ 1474309a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TQuat<float> * __cdecl
FQuatFixed32NoW::ToQuat<1>(TQuat<float> *__return_storage_ptr__,uint *param_1)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = *param_1;
  fVar3 = (float)(int)((uVar1 >> 0x15) - 0x3ff);
  fVar4 = (float)(int)((uVar1 >> 10 & 0x7ff) - 0x3ff);
  fVar5 = (float)(int)((uVar1 & 0x3ff) - 0x1ff);
  fVar6 = ((__real_3f800000 - fVar3 * fVar3 * ___real_35804018) - fVar4 * fVar4 * ___real_35804018)
          - fVar5 * fVar5 * ___real_36808060;
  fVar2 = 0.0;
  if (0.0 < fVar6) {
    fVar2 = SQRT(fVar6);
  }
  fVar4 = fVar4 * __real_3a802008;
  fVar5 = fVar5 * ___real_3b004020;
  __return_storage_ptr__->X = fVar3 * __real_3a802008;
  __return_storage_ptr__->Y = fVar4;
  __return_storage_ptr__->Z = fVar5;
  __return_storage_ptr__->W = fVar2;
  return __return_storage_ptr__;
}

