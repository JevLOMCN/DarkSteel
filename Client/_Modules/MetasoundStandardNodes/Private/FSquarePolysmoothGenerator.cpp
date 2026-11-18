// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 1

// operator() @ 14b157dd0

float __thiscall
Metasound::Generators::FSquarePolysmoothGenerator::operator()
          (FSquarePolysmoothGenerator *this,float param_1,float param_2,FGeneratorArgs *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = 0.0;
  fVar5 = (float)((uint)param_2 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (param_1 <= __real_3f800000 - fVar5) {
    if (param_1 < fVar5) {
      fVar4 = param_1 / fVar5;
      fVar4 = (fVar4 * fVar4 - (fVar4 + fVar4)) + __real_3f800000;
    }
  }
  else {
    fVar4 = (param_1 - __real_3f800000) / fVar5;
    fVar4 = ((float)((uint)(fVar4 * fVar4) ^ __xmm_80000000800000008000000080000000) -
            (fVar4 + fVar4)) - __real_3f800000;
  }
  fVar1 = param_3->PulseWidth;
  if (param_2 <= 0.0) {
    fVar2 = param_1 - fVar1;
    if (fVar2 <= 0.0) {
      fVar2 = fVar2 + __real_3f800000;
    }
  }
  else {
    fVar2 = fVar1 + param_1;
    if (__real_3f800000 <= fVar2) {
      fVar2 = fVar2 + __real_bf800000;
    }
  }
  fVar3 = 0.0;
  if (fVar2 <= __real_3f800000 - fVar5) {
    if (fVar2 < fVar5) {
      fVar5 = fVar2 / fVar5;
      fVar3 = (fVar5 * fVar5 - (fVar5 + fVar5)) + __real_3f800000;
    }
  }
  else {
    fVar5 = (fVar2 - __real_3f800000) / fVar5;
    fVar3 = ((float)((uint)(fVar5 * fVar5) ^ __xmm_80000000800000008000000080000000) -
            (fVar5 + fVar5)) - __real_3f800000;
  }
  fVar5 = ((param_1 + param_1 + fVar4) - __real_3f800000) -
          ((fVar2 + fVar2 + fVar3) - __real_3f800000);
  if (param_2 <= 0.0) {
    fVar5 = (__real_3f000000 - fVar1) + (__real_3f000000 - fVar1) + fVar5;
  }
  else {
    fVar5 = (fVar1 + fVar5 + fVar1) - __real_3f800000;
  }
  return fVar5;
}

