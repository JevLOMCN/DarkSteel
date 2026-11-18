// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 2

// TOrientedBox2<float> @ 143366060

TOrientedBox2<float> * __thiscall
UE::Geometry::TOrientedBox2<float>::TOrientedBox2<float>
          (TOrientedBox2<float> *this,TVector2<float> *param_1,TVector2<float> *param_2,
          TVector2<float> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  (this->Origin).field0_0x0 = param_1->field0_0x0;
  (this->UnitAxisX).field0_0x0 = param_2->field0_0x0;
  (this->Extents).field0_0x0 = param_3->field0_0x0;
  fVar1 = (this->UnitAxisX).field0_0x0._s_0.X;
  fVar2 = (this->UnitAxisX).field0_0x0._s_0.Y;
  fVar3 = fVar2 * fVar2 + fVar1 * fVar1;
  if (__real_322bcc77 < fVar3) {
    fVar3 = __real_3f800000 / SQRT(fVar3);
    (this->UnitAxisX).field0_0x0._s_0.X = fVar3 * fVar1;
    (this->UnitAxisX).field0_0x0._s_0.Y = fVar3 * fVar2;
    return this;
  }
  (this->UnitAxisX).field0_0x0 = (TVector2<float>_u_0)0x3f800000;
  return this;
}

// TOrientedBox2<double> @ 1433660f0

TOrientedBox2<double> * __thiscall
UE::Geometry::TOrientedBox2<double>::TOrientedBox2<double>
          (TOrientedBox2<double> *this,TVector2<double> *param_1,TVector2<double> *param_2,
          TVector2<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->Origin).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->Origin).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  (this->UnitAxisX).field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (this->UnitAxisX).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  (this->Extents).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
  (this->Extents).field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->UnitAxisX).field0_0x0._s_0.X;
  dVar2 = (this->UnitAxisX).field0_0x0._s_0.Y;
  dVar3 = dVar2 * dVar2 + dVar1 * dVar1;
  if (__real_3e45798ee0000000 < dVar3) {
    dVar3 = __real_3ff0000000000000 / SQRT(dVar3);
    (this->UnitAxisX).field0_0x0._s_0.X = dVar1 * dVar3;
    (this->UnitAxisX).field0_0x0._s_0.Y = dVar2 * dVar3;
    return this;
  }
  (this->UnitAxisX).field0_0x0._s_0.X = __real_3ff0000000000000;
  (this->UnitAxisX).field0_0x0._s_0.Y = 0.0;
  return this;
}

