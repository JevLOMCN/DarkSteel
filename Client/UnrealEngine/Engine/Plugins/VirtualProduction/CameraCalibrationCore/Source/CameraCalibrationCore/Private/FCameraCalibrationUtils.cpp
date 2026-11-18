// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 1

// IsNearlyEqual @ 14d6e1c70

bool __cdecl
FCameraCalibrationUtils::IsNearlyEqual
          (TTransform<double> *param_1,TTransform<double> *param_2,float param_3,float param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (param_2->Translation).ZW.m128d_f64[0] - (param_1->Translation).ZW.m128d_f64[0];
  dVar1 = (param_2->Translation).XY.m128d_f64[0] - (param_1->Translation).XY.m128d_f64[0];
  dVar3 = (param_2->Translation).XY.m128d_f64[1] - (param_1->Translation).XY.m128d_f64[1];
  if (param_3 < (float)SQRT(dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2)) {
    return false;
  }
  dVar1 = (param_1->Rotation).XY.m128d_f64[1] * (param_2->Rotation).XY.m128d_f64[1] +
          (param_1->Rotation).XY.m128d_f64[0] * (param_2->Rotation).XY.m128d_f64[0] +
          (param_1->Rotation).ZW.m128d_f64[0] * (param_2->Rotation).ZW.m128d_f64[0] +
          (param_1->Rotation).ZW.m128d_f64[1] * (param_2->Rotation).ZW.m128d_f64[1];
  dVar2 = (dVar1 + dVar1) * dVar1 - __real_3ff0000000000000;
  dVar1 = __real_bff0000000000000;
  if ((__real_bff0000000000000 <= dVar2) && (dVar1 = dVar2, __real_3ff0000000000000 <= dVar2)) {
    dVar1 = __real_3ff0000000000000;
  }
  dVar1 = acos(dVar1);
  return (float)(double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
         param_4 * __real_3c8efa35;
}

