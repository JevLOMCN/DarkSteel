// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 2

// SetAxisAngleD @ 14c761210

void __thiscall
UE::Geometry::TQuaternion<double>::SetAxisAngleD
          (TQuaternion<double> *this,TVector<double> *param_1,double param_2)

{
  double extraout_XMM0_Qa;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  
  __libm_sse2_sincos_();
  (this->field0_0x0)._s_0.W = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
  (this->field0_0x0)._s_0.X = extraout_XMM0_Qa * (param_1->field0_0x0)._s_0.X;
  (this->field0_0x0)._s_0.Y = extraout_XMM0_Qa * (param_1->field0_0x0)._s_0.Y;
  (this->field0_0x0)._s_0.Z = extraout_XMM0_Qa * (param_1->field0_0x0)._s_0.Z;
  return;
}

// EpsilonEqual @ 14c8015b0

bool __thiscall
UE::Geometry::TQuaternion<double>::EpsilonEqual
          (TQuaternion<double> *this,TQuaternion<double> *param_1,double param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (this->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.X;
  dVar1 = dVar2 - dVar3;
  if (((((param_2 < (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))
        || (dVar1 = (this->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y,
           param_2 < (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                      SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
           )) || (dVar1 = (this->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z,
                 param_2 < (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                            SUB84(dVar1,0) &
                                            (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
      (dVar1 = (this->field0_0x0)._s_0.W - (param_1->field0_0x0)._s_0.W,
      param_2 < (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                 SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) &&
     (((dVar3 = dVar3 + dVar2,
       param_2 < (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) ||
       (dVar2 = (param_1->field0_0x0)._s_0.Y + (this->field0_0x0)._s_0.Y,
       param_2 < (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)))
      || ((dVar2 = (param_1->field0_0x0)._s_0.Z + (this->field0_0x0)._s_0.Z,
          param_2 < (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
          || (dVar2 = (param_1->field0_0x0)._s_0.W + (this->field0_0x0)._s_0.W,
             param_2 < (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) &
                                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                        SUB84(dVar2,0) &
                                        (uint)__xmm_7fffffffffffffff7fffffffffffffff))))))) {
    return false;
  }
  return true;
}

