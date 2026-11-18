// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 1

// Classify @ 14caf3d90

EIntersectionType __cdecl
UE::Geometry::TIntrLine2Line2<double>::Classify
          (TVector2<double> *param_1,TVector2<double> *param_2,TVector2<double> *param_3,
          TVector2<double> *param_4,double param_5,double param_6,TVector2<double> *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  EIntersectionType EVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  
  dVar10 = (param_4->field0_0x0)._s_0.X;
  dVar1 = (param_4->field0_0x0)._s_0.Y;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar3 = (param_2->field0_0x0)._s_0.X;
  dVar4 = (param_3->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  dVar5 = (param_3->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar7 = dVar3 * dVar1 - dVar2 * dVar10;
  uVar8 = SUB84(dVar7,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar9 = (uint)((ulonglong)dVar7 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  dVar10 = dVar1 * dVar4 - dVar10 * dVar5;
  if (param_5 <= 0.0) {
    param_5 = 0.0;
  }
  if ((double)CONCAT44(uVar9,uVar8) < param_5 || (double)CONCAT44(uVar9,uVar8) == param_5) {
    EVar6 = Empty;
    if ((double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= param_6)
    {
      EVar6 = Line;
    }
  }
  else {
    dVar7 = __real_3ff0000000000000 / dVar7;
    (param_7->field0_0x0)._s_0.X = dVar7 * dVar10;
    (param_7->field0_0x0)._s_0.Y = (dVar2 * dVar4 - dVar3 * dVar5) * dVar7;
    EVar6 = Point;
  }
  return EVar6;
}

