// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 3

// FInterpTo<float,float,float,float> @ 14b8ae280

float __cdecl
FMath::FInterpTo<float,float,float,float>(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  
  if ((0.0 < param_4) && (fVar2 = param_2 - param_1, __real_322bcc77 <= fVar2 * fVar2)) {
    fVar1 = param_3 * param_4;
    if (__real_3f800000 <= param_3 * param_4) {
      fVar1 = __real_3f800000;
    }
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    return fVar1 * fVar2 + param_1;
  }
  return param_2;
}

// GetMappedRangeValueClamped<double,float> @ 14b8af320

double __cdecl
FMath::GetMappedRangeValueClamped<double,float>
          (TVector2<double> *param_1,TVector2<double> *param_2,float param_3)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.X;
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar1 = ((double)param_3 - (param_1->field0_0x0)._s_0.X) / dVar1;
  }
  else {
    dVar1 = __real_3ff0000000000000;
    if ((double)param_3 < (param_1->field0_0x0)._s_0.Y) {
      dVar1 = 0.0;
    }
  }
  if (__real_3ff0000000000000 <= dVar1) {
    dVar1 = __real_3ff0000000000000;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  return ((param_2->field0_0x0)._s_0.Y - (param_2->field0_0x0)._s_0.X) * dVar1 +
         (param_2->field0_0x0)._s_0.X;
}

// FindDeltaAngleDegrees<double,double> @ 14bc26aa0

double __cdecl FMath::FindDeltaAngleDegrees<double,double>(double param_1,double param_2)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  dVar1 = __real_4066800000000000;
  uVar3 = SUB84(__real_c066800000000000,0);
  uVar4 = (undefined4)((ulonglong)__real_c066800000000000 >> 0x20);
  dVar2 = param_2 - param_1;
  if (__real_c066800000000000 <= dVar2) {
    uVar3 = SUB84(__real_4066800000000000,0);
    uVar4 = (undefined4)((ulonglong)__real_4066800000000000 >> 0x20);
    if (dVar2 <= __real_4066800000000000) {
      return dVar2;
    }
    dVar2 = FGenericPlatformMath::Fmod(dVar2 - __real_4066800000000000,__real_4076800000000000);
    if (dVar2 != 0.0) {
      return dVar2 - dVar1;
    }
  }
  else {
    dVar1 = FGenericPlatformMath::Fmod(__real_c066800000000000 - dVar2,__real_4076800000000000);
    if (dVar1 != 0.0) {
      return __real_4066800000000000 - dVar1;
    }
  }
  return (double)CONCAT44(uVar4,uVar3);
}

