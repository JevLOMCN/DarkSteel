// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationCore
// Functions: 1

// ClampAngle<double> @ 14237c2d0

double __cdecl FMath::ClampAngle<double>(double param_1,double param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar2 = __real_4076800000000000;
  dVar3 = FGenericPlatformMath::Fmod(param_3 - param_2,__real_4076800000000000);
  if (dVar3 < 0.0) {
    dVar3 = dVar3 + dVar2;
  }
  dVar3 = dVar3 * __real_3fe0000000000000;
  dVar4 = FGenericPlatformMath::Fmod(dVar3 + param_2,dVar2);
  if (dVar4 < 0.0) {
    dVar4 = dVar4 + dVar2;
  }
  dVar5 = FGenericPlatformMath::Fmod(param_1 - dVar4,dVar2);
  dVar1 = __real_4066800000000000;
  if (dVar5 < 0.0) {
    dVar5 = dVar5 + dVar2;
  }
  if (__real_4066800000000000 < dVar5) {
    dVar5 = dVar5 - dVar2;
  }
  if (dVar5 <= dVar3) {
    if (dVar5 < (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) ^
                                 __xmm_80000000000000008000000000000000._4_4_,
                                 SUB84(dVar3,0) ^ (uint)__xmm_80000000000000008000000000000000)) {
      param_1 = dVar4 - dVar3;
    }
  }
  else {
    param_1 = dVar4 + dVar3;
  }
  dVar3 = FGenericPlatformMath::Fmod(param_1,dVar2);
  if (dVar3 < 0.0) {
    dVar3 = dVar3 + dVar2;
  }
  if (dVar1 < dVar3) {
    dVar3 = dVar3 - dVar2;
  }
  return dVar3;
}

