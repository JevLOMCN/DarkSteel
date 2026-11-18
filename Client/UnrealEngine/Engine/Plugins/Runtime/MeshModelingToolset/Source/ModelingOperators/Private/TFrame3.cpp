// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 1

// RayPlaneIntersection @ 14c983e60

bool __thiscall
UE::Geometry::TFrame3<double>::RayPlaneIntersection
          (TFrame3<double> *this,TVector<double> *param_1,TVector<double> *param_2,int param_3,
          TVector<double> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  double dVar7;
  TVector<double>_u_0 local_68 [4];
  
  GetAxis(this,(TVector<double> *)&local_68[0]._s_0,param_3);
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  dVar2 = (param_2->field0_0x0)._s_0.X;
  dVar3 = (param_2->field0_0x0)._s_0.Z;
  dVar7 = dVar2 * (double)local_68[0]._0_8_ + dVar1 * (double)local_68[0]._8_8_ +
          dVar3 * (double)local_68[0]._16_8_;
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar4 = (param_1->field0_0x0)._s_0.Z;
    dVar5 = (param_1->field0_0x0)._s_0.Y;
    dVar7 = (((double)local_68[0]._8_8_ * (this->Origin).field0_0x0._s_0.Y +
              (double)local_68[0]._0_8_ * (this->Origin).field0_0x0._s_0.X +
             (double)local_68[0]._16_8_ * (this->Origin).field0_0x0._s_0.Z) -
            ((param_1->field0_0x0)._s_0.X * (double)local_68[0]._0_8_ +
             dVar5 * (double)local_68[0]._8_8_ + dVar4 * (double)local_68[0]._16_8_)) / dVar7;
    bVar6 = 0.0 <= dVar7;
    if (bVar6) {
      (param_4->field0_0x0)._s_0.X = dVar2 * dVar7 + (param_1->field0_0x0)._s_0.X;
      (param_4->field0_0x0)._s_0.Y = dVar1 * dVar7 + dVar5;
      (param_4->field0_0x0)._s_0.Z = dVar3 * dVar7 + dVar4;
    }
    else {
      (param_4->field0_0x0)._s_0.X = 1.7976931348623157e+308;
      (param_4->field0_0x0)._s_0.Y = 1.7976931348623157e+308;
      (param_4->field0_0x0)._s_0.Z = 1.7976931348623157e+308;
    }
  }
  else {
    (param_4->field0_0x0)._s_0.X = 1.7976931348623157e+308;
    (param_4->field0_0x0)._s_0.Y = 1.7976931348623157e+308;
    (param_4->field0_0x0)._s_0.Z = 1.7976931348623157e+308;
    bVar6 = false;
  }
  return bVar6;
}

