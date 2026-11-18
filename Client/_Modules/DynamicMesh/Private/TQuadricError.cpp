// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 6

// TQuadricError<double> @ 14c6dcea0

TQuadricError<double> * __thiscall
UE::Geometry::TQuadricError<double>::TQuadricError<double>
          (TQuadricError<double> *this,TQuadricError<double> *param_1,TQuadricError<double> *param_2
          )

{
  this->Axx = param_1->Axx + param_2->Axx;
  this->Axy = param_1->Axy + param_2->Axy;
  this->Axz = param_1->Axz + param_2->Axz;
  this->Ayy = param_1->Ayy + param_2->Ayy;
  this->Ayz = param_1->Ayz + param_2->Ayz;
  this->Azz = param_1->Azz + param_2->Azz;
  this->bx = param_1->bx + param_2->bx;
  this->by = param_1->by + param_2->by;
  this->bz = param_1->bz + param_2->bz;
  this->c = param_1->c + param_2->c;
  return this;
}

// TQuadricError<double> @ 14c6dcf50

TQuadricError<double> * __thiscall
UE::Geometry::TQuadricError<double>::TQuadricError<double>
          (TQuadricError<double> *this,TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  
  dVar8 = (param_1->field0_0x0)._s_0.X;
  dVar8 = dVar8 * dVar8;
  this->Axx = dVar8;
  dVar5 = (param_1->field0_0x0)._s_0.X * (param_1->field0_0x0)._s_0.Y;
  this->Axy = dVar5;
  dVar7 = (param_1->field0_0x0)._s_0.Z * (param_1->field0_0x0)._s_0.X;
  this->Axz = dVar7;
  dVar11 = (param_1->field0_0x0)._s_0.Y;
  dVar11 = dVar11 * dVar11;
  this->Ayy = dVar11;
  dVar12 = (param_1->field0_0x0)._s_0.Z * (param_1->field0_0x0)._s_0.Y;
  this->Ayz = dVar12;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  this->c = 0.0;
  this->bz = 0.0;
  this->by = 0.0;
  this->bx = 0.0;
  dVar1 = dVar1 * dVar1;
  this->Azz = dVar1;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar3 = (param_2->field0_0x0)._s_0.X;
  dVar4 = (param_2->field0_0x0)._s_0.Z;
  dVar6 = dVar2 * dVar5 + dVar8 * dVar3 + dVar4 * dVar7;
  dVar8 = dVar2 * dVar12 + dVar3 * dVar7 + dVar1 * dVar4;
  dVar11 = dVar3 * dVar5 + dVar11 * dVar2 + dVar4 * dVar12;
  uVar9 = (uint)__xmm_80000000000000008000000000000000;
  uVar10 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  this->bx = (double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) ^ uVar10,SUB84(dVar6,0) ^ uVar9);
  this->bz = (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) ^ uVar10,SUB84(dVar8,0) ^ uVar9);
  this->by = (double)CONCAT44((uint)((ulonglong)dVar11 >> 0x20) ^ uVar10,SUB84(dVar11,0) ^ uVar9);
  this->c = dVar6 * (param_2->field0_0x0)._s_0.X + dVar11 * (param_2->field0_0x0)._s_0.Y +
            dVar8 * (param_2->field0_0x0)._s_0.Z;
  return this;
}

// Add @ 14c6fd810

void __thiscall
UE::Geometry::TQuadricError<double>::Add(TQuadricError<double> *this,TQuadricError<double> *param_1)

{
  this->Axx = param_1->Axx + this->Axx;
  this->Axy = param_1->Axy + this->Axy;
  this->Axz = param_1->Axz + this->Axz;
  this->Ayy = param_1->Ayy + this->Ayy;
  this->Ayz = param_1->Ayz + this->Ayz;
  this->Azz = param_1->Azz + this->Azz;
  this->bx = param_1->bx + this->bx;
  this->by = param_1->by + this->by;
  this->bz = param_1->bz + this->bz;
  this->c = param_1->c + this->c;
  return;
}

// Add @ 14c6fd8b0

void __thiscall
UE::Geometry::TQuadricError<double>::Add
          (TQuadricError<double> *this,double param_1,TQuadricError<double> *param_2)

{
  this->Axx = param_1 * param_2->Axx + this->Axx;
  this->Axy = param_1 * param_2->Axy + this->Axy;
  this->Axz = param_1 * param_2->Axz + this->Axz;
  this->Ayy = param_1 * param_2->Ayy + this->Ayy;
  this->Ayz = param_1 * param_2->Ayz + this->Ayz;
  this->Azz = param_1 * param_2->Azz + this->Azz;
  this->bx = param_1 * param_2->bx + this->bx;
  this->by = param_1 * param_2->by + this->by;
  this->bz = param_1 * param_2->bz + this->bz;
  this->c = param_1 * param_2->c + this->c;
  return;
}

// Evaluate @ 14c72f8b0

double __thiscall
UE::Geometry::TQuadricError<double>::Evaluate(TQuadricError<double> *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  return (this->Ayz * dVar3 + this->Axz * dVar1 + dVar2 * this->Azz) * dVar2 +
         (this->Axy * dVar3 + dVar1 * this->Axx + this->Axz * dVar2) * dVar1 +
         (dVar3 * this->Ayy + this->Axy * dVar1 + this->Ayz * dVar2) * dVar3 +
         (dVar3 + dVar3) * this->by + (dVar1 + dVar1) * this->bx +
         (dVar2 + dVar2) * this->bz + this->c;
}

// SolveAxEqualsb @ 14c766960

bool __thiscall
UE::Geometry::TQuadricError<double>::SolveAxEqualsb
          (TQuadricError<double> *this,TVector<double> *param_1,double param_2,double param_3,
          double param_4,double param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar1 = this->Axx;
  dVar2 = this->Axz;
  dVar3 = this->Axy;
  dVar4 = this->Ayz;
  dVar5 = this->Ayy;
  dVar6 = this->Azz;
  dVar11 = dVar6 * dVar5 - dVar4 * dVar4;
  dVar10 = dVar2 * dVar4 - dVar3 * dVar6;
  dVar7 = dVar3 * dVar4 - dVar2 * dVar5;
  dVar9 = dVar10 * dVar3 + dVar1 * dVar11 + dVar7 * dVar2;
  dVar8 = (double)CONCAT44((uint)((ulonglong)dVar9 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if (param_5 < dVar8) {
    dVar9 = __real_3ff0000000000000 / dVar9;
    dVar7 = dVar9 * dVar7;
    dVar10 = dVar9 * dVar10;
    dVar4 = (dVar3 * dVar2 - dVar1 * dVar4) * dVar9;
    (param_1->field0_0x0)._s_0.X = dVar9 * dVar11 * param_2 + dVar10 * param_3 + dVar7 * param_4;
    (param_1->field0_0x0)._s_0.Y =
         (dVar1 * dVar6 - dVar2 * dVar2) * dVar9 * param_3 + dVar10 * param_2 + dVar4 * param_4;
    (param_1->field0_0x0)._s_0.Z =
         (dVar1 * dVar5 - dVar3 * dVar3) * dVar9 * param_4 + dVar4 * param_3 + dVar7 * param_2;
  }
  return param_5 < dVar8;
}

