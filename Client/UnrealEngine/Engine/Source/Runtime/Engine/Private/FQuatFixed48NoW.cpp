// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// ToQuat @ 14747bb60

void __thiscall FQuatFixed48NoW::ToQuat(FQuatFixed48NoW *this,TQuat<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (float)(int)(this->X - 0x7fff);
  fVar2 = (float)(int)(this->Y - 0x7fff);
  fVar4 = (float)(int)(this->Z - 0x7fff);
  fVar3 = fVar2 * __real_38000100;
  fVar2 = ((__real_3f800000 - fVar1 * fVar1 * __real_30800200) - fVar2 * fVar2 * __real_30800200) -
          fVar4 * fVar4 * __real_30800200;
  fVar4 = fVar4 * __real_38000100;
  param_1->X = fVar1 * __real_38000100;
  param_1->Y = fVar3;
  param_1->Z = fVar4;
  if (0.0 < fVar2) {
    param_1->W = SQRT(fVar2);
    return;
  }
  param_1->W = 0.0;
  return;
}

