// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 29

// TQuaternion<float> @ 1433662e0

TQuaternion<float> * __thiscall
UE::Geometry::TQuaternion<float>::TQuaternion<float>
          (TQuaternion<float> *this,TMatrix3<float> *param_1)

{
  (this->field0_0x0)._s_0.W = 1.0;
  *(undefined8 *)((longlong)&this->field0_0x0 + 4) = 0;
  (this->field0_0x0)._s_0.X = 0.0;
  SetFromRotationMatrix(this,param_1);
  return this;
}

// TQuaternion<float> @ 143366310

TQuaternion<float> * __thiscall
UE::Geometry::TQuaternion<float>::TQuaternion<float>
          (TQuaternion<float> *this,float param_1,float param_2,float param_3,float param_4)

{
  (this->field0_0x0)._s_0.W = param_4;
  (this->field0_0x0)._s_0.X = param_1;
  (this->field0_0x0)._s_0.Y = param_2;
  (this->field0_0x0)._s_0.Z = param_3;
  return this;
}

// TQuaternion<float> @ 143366340

TQuaternion<float> * __thiscall
UE::Geometry::TQuaternion<float>::TQuaternion<float>(TQuaternion<float> *this)

{
  (this->field0_0x0)._s_0.W = 1.0;
  *(undefined8 *)((longlong)&this->field0_0x0 + 4) = 0;
  (this->field0_0x0)._s_0.X = 0.0;
  return this;
}

// TQuaternion<double> @ 143366360

TQuaternion<double> * __thiscall
UE::Geometry::TQuaternion<double>::TQuaternion<double>
          (TQuaternion<double> *this,TMatrix3<double> *param_1)

{
  (this->field0_0x0)._s_0.Z = 0.0;
  (this->field0_0x0)._s_0.Y = 0.0;
  (this->field0_0x0)._s_0.X = 0.0;
  (this->field0_0x0)._s_0.W = 1.0;
  SetFromRotationMatrix(this,param_1);
  return this;
}

// TQuaternion<double> @ 1433663a0

TQuaternion<double> * __thiscall
UE::Geometry::TQuaternion<double>::TQuaternion<double>
          (TQuaternion<double> *this,double param_1,double param_2,double param_3,double param_4)

{
  (this->field0_0x0)._s_0.W = param_4;
  (this->field0_0x0)._s_0.X = param_1;
  (this->field0_0x0)._s_0.Y = param_2;
  (this->field0_0x0)._s_0.Z = param_3;
  return this;
}

// TQuaternion<double> @ 1433663d0

TQuaternion<double> * __thiscall
UE::Geometry::TQuaternion<double>::TQuaternion<double>(TQuaternion<double> *this)

{
  (this->field0_0x0)._s_0.Z = 0.0;
  (this->field0_0x0)._s_0.Y = 0.0;
  (this->field0_0x0)._s_0.X = 0.0;
  (this->field0_0x0)._s_0.W = 1.0;
  return this;
}

// AxisX @ 1433893a0

TVector<float> * __thiscall
UE::Geometry::TQuaternion<float>::AxisX
          (TQuaternion<float> *this,TVector<float> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = (this->field0_0x0)._s_0.Z;
  fVar2 = (this->field0_0x0)._s_0.Y;
  fVar5 = fVar1 + fVar1;
  fVar6 = fVar2 + fVar2;
  fVar3 = (this->field0_0x0)._s_0.X;
  fVar4 = (this->field0_0x0)._s_0.W;
  (__return_storage_ptr__->field0_0x0)._s_0.X = __real_3f800000 - (fVar5 * fVar1 + fVar6 * fVar2);
  fVar1 = (this->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar5 * (this->field0_0x0)._s_0.W + fVar6 * fVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar5 * fVar1 - fVar6 * fVar4;
  return __return_storage_ptr__;
}

// AxisX @ 143389410

TVector<double> * __thiscall
UE::Geometry::TQuaternion<double>::AxisX
          (TQuaternion<double> *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = (this->field0_0x0)._s_0.Z;
  dVar2 = (this->field0_0x0)._s_0.Y;
  dVar5 = dVar1 + dVar1;
  dVar6 = dVar2 + dVar2;
  dVar3 = (this->field0_0x0)._s_0.X;
  dVar4 = (this->field0_0x0)._s_0.W;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       __real_3ff0000000000000 - (dVar5 * dVar1 + dVar6 * dVar2);
  dVar1 = (this->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5 * (this->field0_0x0)._s_0.W + dVar6 * dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar5 * dVar1 - dVar6 * dVar4;
  return __return_storage_ptr__;
}

// AxisY @ 143389480

TVector<float> * __thiscall
UE::Geometry::TQuaternion<float>::AxisY
          (TQuaternion<float> *this,TVector<float> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Z;
  fVar3 = (this->field0_0x0)._s_0.Y;
  fVar6 = fVar2 + fVar2;
  fVar4 = (this->field0_0x0)._s_0.W;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (fVar3 + fVar3) * fVar1 - fVar6 * (this->field0_0x0)._s_0.W;
  fVar5 = __real_3f800000;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar6 * fVar3 + (fVar1 + fVar1) * fVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar5 - (fVar6 * fVar2 + (fVar1 + fVar1) * fVar1);
  return __return_storage_ptr__;
}

// AxisY @ 143389520

TVector<double> * __thiscall
UE::Geometry::TQuaternion<double>::AxisY
          (TQuaternion<double> *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = (this->field0_0x0)._s_0.X;
  dVar2 = (this->field0_0x0)._s_0.Z;
  dVar3 = (this->field0_0x0)._s_0.Y;
  dVar5 = dVar2 + dVar2;
  dVar4 = (this->field0_0x0)._s_0.W;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (dVar3 + dVar3) * dVar1 - dVar5 * (this->field0_0x0)._s_0.W;
  dVar6 = __real_3ff0000000000000;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar5 * dVar3 + (dVar1 + dVar1) * dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar6 - (dVar5 * dVar2 + (dVar1 + dVar1) * dVar1);
  return __return_storage_ptr__;
}

// AxisZ @ 1433895c0

TVector<float> * __thiscall
UE::Geometry::TQuaternion<float>::AxisZ
          (TQuaternion<float> *this,TVector<float> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = (this->field0_0x0)._s_0.Y;
  fVar2 = (this->field0_0x0)._s_0.X;
  fVar5 = (this->field0_0x0)._s_0.Z;
  fVar5 = fVar5 + fVar5;
  fVar3 = (this->field0_0x0)._s_0.W;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (fVar1 + fVar1) * (this->field0_0x0)._s_0.W + fVar5 * fVar2;
  fVar4 = __real_3f800000;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar5 * fVar1 - (fVar2 + fVar2) * fVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       fVar4 - ((fVar1 + fVar1) * fVar1 + (fVar2 + fVar2) * fVar2);
  return __return_storage_ptr__;
}

// AxisZ @ 143389650

TVector<double> * __thiscall
UE::Geometry::TQuaternion<double>::AxisZ
          (TQuaternion<double> *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = (this->field0_0x0)._s_0.Y;
  dVar2 = (this->field0_0x0)._s_0.X;
  dVar5 = (this->field0_0x0)._s_0.Z;
  dVar5 = dVar5 + dVar5;
  dVar3 = (this->field0_0x0)._s_0.W;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (dVar1 + dVar1) * (this->field0_0x0)._s_0.W + dVar5 * dVar2;
  dVar4 = __real_3ff0000000000000;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar5 * dVar1 - (dVar2 + dVar2) * dVar3;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       dVar4 - ((dVar1 + dVar1) * dVar1 + (dVar2 + dVar2) * dVar2);
  return __return_storage_ptr__;
}

// InverseMultiply @ 1433bb4f0

TVector<float> * __thiscall
UE::Geometry::TQuaternion<float>::InverseMultiply
          (TQuaternion<float> *this,TVector<float> *__return_storage_ptr__,TVector<float> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar4 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar5 = (this->field0_0x0)._s_0.W;
  fVar2 = (this->field0_0x0)._s_0.Z;
  fVar3 = (this->field0_0x0)._s_0.Y;
  fVar6 = fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2 + fVar5 * fVar5;
  if (fVar6 <= 0.0) {
    *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
         UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)uVar4;
  }
  else {
    fVar6 = __real_3f800000 / fVar6;
    fVar7 = (float)((uint)(fVar6 * fVar2) ^ __xmm_80000000800000008000000080000000);
    fVar5 = fVar6 * fVar5;
    fVar8 = (float)((uint)(fVar6 * fVar1) ^ __xmm_80000000800000008000000080000000);
    fVar10 = fVar7 + fVar7;
    fVar9 = (float)((uint)(fVar6 * fVar3) ^ __xmm_80000000800000008000000080000000);
    fVar12 = fVar9 + fVar9;
    fVar11 = (fVar8 + fVar8) * fVar5;
    fVar1 = (param_1->field0_0x0)._s_0.Y;
    fVar13 = (fVar8 + fVar8) * fVar8;
    fVar2 = (param_1->field0_0x0)._s_0.X;
    fVar6 = __real_3f800000 - (fVar10 * fVar7 + fVar13);
    fVar3 = (param_1->field0_0x0)._s_0.Z;
    fVar13 = __real_3f800000 - (fVar12 * fVar9 + fVar13);
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (__real_3f800000 - (fVar10 * fVar7 + fVar12 * fVar9)) * fVar2 +
         (fVar12 * fVar8 - fVar10 * fVar5) * fVar1 +
         (fVar10 * fVar8 + fVar12 * fVar5) * (param_1->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         (fVar10 * fVar8 - fVar12 * fVar5) * fVar2 + (fVar10 * fVar9 + fVar11) * fVar1 +
         fVar13 * (param_1->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         fVar6 * fVar1 + (fVar12 * fVar8 + fVar10 * fVar5) * fVar2 +
         (fVar10 * fVar9 - fVar11) * fVar3;
  }
  return __return_storage_ptr__;
}

// InverseMultiply @ 1433bb710

TVector<double> * __thiscall
UE::Geometry::TQuaternion<double>::InverseMultiply
          (TQuaternion<double> *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  double dVar11;
  uint uVar13;
  uint uVar14;
  uint uVar16;
  uint uVar17;
  uint uVar19;
  double dVar12;
  double dVar15;
  double dVar18;
  
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  dVar1 = (this->field0_0x0)._s_0.X;
  dVar8 = (this->field0_0x0)._s_0.W;
  dVar2 = (this->field0_0x0)._s_0.Z;
  dVar3 = (this->field0_0x0)._s_0.Y;
  dVar11 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2 + dVar8 * dVar8;
  if (dVar11 <= 0.0) {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar7;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    uVar17 = (uint)__xmm_80000000000000008000000000000000;
    uVar19 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    dVar11 = __real_3ff0000000000000 / dVar11;
    dVar8 = dVar11 * dVar8;
    uVar10 = SUB84(dVar11 * dVar2,0) ^ uVar17;
    uVar13 = (uint)((ulonglong)(dVar11 * dVar2) >> 0x20) ^ uVar19;
    dVar12 = (double)CONCAT44(uVar13,uVar10);
    uVar14 = SUB84(dVar11 * dVar1,0) ^ uVar17;
    uVar16 = (uint)((ulonglong)(dVar11 * dVar1) >> 0x20) ^ uVar19;
    dVar15 = (double)CONCAT44(uVar16,uVar14);
    dVar4 = (double)CONCAT44(uVar13,uVar10) + dVar12;
    dVar6 = (double)CONCAT44(uVar16,uVar14) + dVar15;
    uVar17 = SUB84(dVar11 * dVar3,0) ^ uVar17;
    uVar19 = (uint)((ulonglong)(dVar11 * dVar3) >> 0x20) ^ uVar19;
    dVar18 = (double)CONCAT44(uVar19,uVar17);
    dVar5 = (double)CONCAT44(uVar19,uVar17) + dVar18;
    dVar11 = dVar6 * dVar8;
    dVar12 = dVar4 * dVar12;
    dVar1 = (param_1->field0_0x0)._s_0.Y;
    dVar6 = dVar6 * dVar15;
    dVar2 = (param_1->field0_0x0)._s_0.X;
    dVar9 = __real_3ff0000000000000 - (dVar12 + dVar6);
    dVar3 = (param_1->field0_0x0)._s_0.Z;
    dVar6 = __real_3ff0000000000000 - (dVar5 * dVar18 + dVar6);
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (__real_3ff0000000000000 - (dVar12 + dVar5 * dVar18)) * dVar2 +
         (dVar5 * dVar15 - dVar4 * dVar8) * dVar1 +
         (dVar4 * dVar15 + dVar5 * dVar8) * (param_1->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         (dVar4 * dVar15 - dVar5 * dVar8) * dVar2 + (dVar4 * dVar18 + dVar11) * dVar1 +
         dVar6 * (param_1->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         dVar9 * dVar1 + (dVar5 * dVar15 + dVar4 * dVar8) * dVar2 +
         (dVar4 * dVar18 - dVar11) * dVar3;
  }
  return __return_storage_ptr__;
}

// Normalize @ 1433c0940

float __thiscall UE::Geometry::TQuaternion<float>::Normalize(TQuaternion<float> *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = (this->field0_0x0)._s_0.X;
  fVar1 = (this->field0_0x0)._s_0.W;
  fVar2 = (this->field0_0x0)._s_0.Z;
  fVar3 = (this->field0_0x0)._s_0.Y;
  fVar4 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3 + fVar4 * fVar4);
  if (param_1 < fVar4) {
    fVar4 = __real_3f800000 / fVar4;
    (this->field0_0x0)._s_0.X = fVar4 * (this->field0_0x0)._s_0.X;
    (this->field0_0x0)._s_0.Y = fVar4 * (this->field0_0x0)._s_0.Y;
    (this->field0_0x0)._s_0.Z = fVar4 * (this->field0_0x0)._s_0.Z;
    (this->field0_0x0)._s_0.W = fVar4 * (this->field0_0x0)._s_0.W;
    return fVar4;
  }
  *(undefined8 *)((longlong)&this->field0_0x0 + 8) = 0;
  *(undefined8 *)&this->field0_0x0 = 0;
  return 0.0;
}

// Normalize @ 1433c09b0

double __thiscall
UE::Geometry::TQuaternion<double>::Normalize(TQuaternion<double> *this,double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  dVar1 = (this->field0_0x0)._s_0.Z;
  dVar5 = (this->field0_0x0)._s_0.X;
  dVar2 = (this->field0_0x0)._s_0.W;
  dVar3 = (this->field0_0x0)._s_0.Y;
  auVar6._0_8_ = dVar5 * dVar5;
  auVar6._8_8_ = 0;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar1 * dVar1 + dVar2 * dVar2 + dVar3 * dVar3 + auVar6._0_8_;
  auVar7 = sqrtpd(auVar6,auVar7);
  if (param_1 < auVar7._0_8_) {
    dVar5 = __real_3ff0000000000000 / auVar7._0_8_;
    dVar1 = dVar5 * (this->field0_0x0)._s_0.Y;
    auVar4._8_4_ = SUB84(dVar1,0);
    auVar4._0_8_ = dVar5 * (this->field0_0x0)._s_0.X;
    auVar4._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    *(undefined1 (*) [16])&this->field0_0x0 = auVar4;
    (this->field0_0x0)._s_0.Z = dVar5 * (this->field0_0x0)._s_0.Z;
    (this->field0_0x0)._s_0.W = dVar5 * (this->field0_0x0)._s_0.W;
    return dVar5;
  }
  (this->field0_0x0)._s_0.W = 0.0;
  (this->field0_0x0)._s_0.Z = 0.0;
  (this->field0_0x0)._s_0.Y = 0.0;
  (this->field0_0x0)._s_0.X = 0.0;
  return 0.0;
}

// SetFromRotationMatrix @ 1433c7900

void __thiscall
UE::Geometry::TQuaternion<float>::SetFromRotationMatrix
          (TQuaternion<float> *this,TMatrix3<float> *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_88 [4];
  uint local_78 [20];
  
  fVar11 = __real_3f800000;
  fVar10 = (param_1->Row1).field0_0x0._s_0.Y;
  fVar8 = (param_1->Row0).field0_0x0._s_0.X;
  fVar9 = (param_1->Row2).field0_0x0._s_0.Z;
  fVar7 = fVar10 + fVar8 + fVar9;
  local_78[1] = 2;
  local_78[2] = 0;
  local_78[0] = 1;
  if (fVar7 <= 0.0) {
    uVar6 = (ulonglong)(fVar8 < fVar10);
    uVar5 = (uint)(fVar8 < fVar10);
    fVar10 = TMatrix3<float>::operator()(param_1,uVar5,uVar5);
    if (fVar10 < fVar9) {
      uVar6 = 2;
    }
    uVar5 = local_78[uVar6];
    uVar1 = local_78[(int)uVar5];
    iVar4 = (int)uVar6;
    fVar10 = TMatrix3<float>::operator()(param_1,iVar4,iVar4);
    fVar8 = TMatrix3<float>::operator()(param_1,uVar5,uVar5);
    fVar9 = TMatrix3<float>::operator()(param_1,uVar1,uVar1);
    fVar11 = __real_3f800000;
    local_88[0] = (this->field0_0x0)._s_0.X;
    local_88[1] = (this->field0_0x0)._s_0.Y;
    local_88[2] = (this->field0_0x0)._s_0.Z;
    fVar10 = SQRT(((fVar10 - fVar8) - fVar9) + __real_3f800000);
    fVar9 = __real_3f000000 / fVar10;
    local_88[uVar6] = fVar10 * __real_3f000000;
    fVar10 = TMatrix3<float>::operator()(param_1,uVar1,uVar5);
    fVar8 = TMatrix3<float>::operator()(param_1,uVar5,uVar1);
    (this->field0_0x0)._s_0.W = (fVar10 - fVar8) * fVar9;
    fVar10 = TMatrix3<float>::operator()(param_1,uVar5,iVar4);
    fVar8 = TMatrix3<float>::operator()(param_1,iVar4,uVar5);
    if ((2 < uVar5) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7a2,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_88[(int)uVar5] = (fVar10 + fVar8) * fVar9;
    fVar10 = TMatrix3<float>::operator()(param_1,iVar4,uVar1);
    fVar8 = TMatrix3<float>::operator()(param_1,uVar1,iVar4);
    if ((2 < uVar1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7a2,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_88[(int)uVar1] = (fVar10 + fVar8) * fVar9;
    (this->field0_0x0)._s_0.X = local_88[0];
    (this->field0_0x0)._s_0.Y = local_88[1];
    (this->field0_0x0)._s_0.Z = local_88[2];
  }
  else {
    fVar10 = SQRT(fVar7 + __real_3f800000);
    local_88[2] = __real_3f000000 / fVar10;
    (this->field0_0x0)._s_0.W = fVar10 * __real_3f000000;
    local_88[0] = ((param_1->Row2).field0_0x0._s_0.Y - (param_1->Row1).field0_0x0._s_0.Z) *
                  local_88[2];
    (this->field0_0x0)._s_0.X = local_88[0];
    local_88[1] = ((param_1->Row0).field0_0x0._s_0.Z - (param_1->Row2).field0_0x0._s_0.X) *
                  local_88[2];
    (this->field0_0x0)._s_0.Y = local_88[1];
    local_88[2] = ((param_1->Row1).field0_0x0._s_0.X - (param_1->Row0).field0_0x0._s_0.Y) *
                  local_88[2];
    (this->field0_0x0)._s_0.Z = local_88[2];
  }
  fVar10 = (this->field0_0x0)._s_0.W;
  fVar10 = SQRT(local_88[1] * local_88[1] + local_88[0] * local_88[0] +
                local_88[2] * local_88[2] + fVar10 * fVar10);
  if (0.0 < fVar10) {
    fVar11 = fVar11 / fVar10;
    (this->field0_0x0)._s_0.X = fVar11 * (this->field0_0x0)._s_0.X;
    (this->field0_0x0)._s_0.Y = fVar11 * (this->field0_0x0)._s_0.Y;
    (this->field0_0x0)._s_0.Z = fVar11 * (this->field0_0x0)._s_0.Z;
    (this->field0_0x0)._s_0.W = fVar11 * (this->field0_0x0)._s_0.W;
    return;
  }
  *(undefined8 *)((longlong)&this->field0_0x0 + 8) = 0;
  *(undefined8 *)&this->field0_0x0 = 0;
  return;
}

// SetFromRotationMatrix @ 1433c7c50

void __thiscall
UE::Geometry::TQuaternion<double>::SetFromRotationMatrix
          (TQuaternion<double> *this,TMatrix3<double> *param_1)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  double dVar7;
  bool bVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  double dVar11;
  uint local_78 [4];
  double local_68 [10];
  
  dVar11 = (param_1->Row1).field0_0x0._s_0.Y;
  dVar1 = (param_1->Row0).field0_0x0._s_0.X;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = dVar1;
  dVar2 = (param_1->Row2).field0_0x0._s_0.Z;
  local_78[0] = 1;
  local_78[1] = 2;
  local_78[2] = 0;
  dVar7 = dVar11 + dVar1 + dVar2;
  if (dVar7 <= 0.0) {
    uVar9 = (uint)(dVar1 < dVar11);
    dVar11 = TMatrix3<double>::operator()(param_1,uVar9,uVar9);
    if (dVar11 < dVar2) {
      uVar9 = 2;
    }
    uVar3 = local_78[uVar9];
    uVar4 = local_78[(int)uVar3];
    dVar11 = TMatrix3<double>::operator()(param_1,uVar9,uVar9);
    dVar1 = TMatrix3<double>::operator()(param_1,uVar3,uVar3);
    dVar2 = TMatrix3<double>::operator()(param_1,uVar4,uVar4);
    local_68[0] = (this->field0_0x0)._s_0.X;
    local_68[1] = (this->field0_0x0)._s_0.Y;
    local_68[2] = (this->field0_0x0)._s_0.Z;
    dVar11 = SQRT(((dVar11 - dVar1) - dVar2) + __real_3ff0000000000000);
    dVar2 = __real_3fe0000000000000 / dVar11;
    local_68[uVar9] = dVar11 * __real_3fe0000000000000;
    dVar11 = TMatrix3<double>::operator()(param_1,uVar4,uVar3);
    dVar1 = TMatrix3<double>::operator()(param_1,uVar3,uVar4);
    (this->field0_0x0)._s_0.W = (dVar11 - dVar1) * dVar2;
    dVar11 = TMatrix3<double>::operator()(param_1,uVar9,uVar3);
    dVar1 = TMatrix3<double>::operator()(param_1,uVar3,uVar9);
    if ((2 < uVar3) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7a2,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_68[(int)uVar3] = (dVar11 + dVar1) * dVar2;
    dVar11 = TMatrix3<double>::operator()(param_1,uVar9,uVar4);
    dVar1 = TMatrix3<double>::operator()(param_1,uVar4,uVar9);
    if ((2 < uVar4) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                           ,0x7a2,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_68[(int)uVar4] = (dVar11 + dVar1) * dVar2;
    (this->field0_0x0)._s_0.X = local_68[0];
    (this->field0_0x0)._s_0.Y = local_68[1];
    (this->field0_0x0)._s_0.Z = local_68[2];
  }
  else {
    auVar6._8_8_ = 0;
    auVar6._0_8_ = dVar7 + __real_3ff0000000000000;
    auVar10 = sqrtpd(auVar10,auVar6);
    dVar11 = __real_3fe0000000000000 / auVar10._0_8_;
    (this->field0_0x0)._s_0.W = auVar10._0_8_ * __real_3fe0000000000000;
    (this->field0_0x0)._s_0.X =
         ((param_1->Row2).field0_0x0._s_0.Y - (param_1->Row1).field0_0x0._s_0.Z) * dVar11;
    (this->field0_0x0)._s_0.Y =
         ((param_1->Row0).field0_0x0._s_0.Z - (param_1->Row2).field0_0x0._s_0.X) * dVar11;
    (this->field0_0x0)._s_0.Z =
         ((param_1->Row1).field0_0x0._s_0.X - (param_1->Row0).field0_0x0._s_0.Y) * dVar11;
  }
  Normalize(this,0.0);
  return;
}

// SetFromTo @ 1433c7f10

void __thiscall
UE::Geometry::TQuaternion<float>::SetFromTo
          (TQuaternion<float> *this,TVector<float> *param_1,TVector<float> *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar8 = __real_3f800000;
  fVar5 = (param_1->field0_0x0)._s_0.Z;
  fVar6 = (param_1->field0_0x0)._s_0.X;
  fVar7 = (param_1->field0_0x0)._s_0.Y;
  fVar1 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5);
  if (fVar1 <= 0.0) {
    fVar6 = 0.0;
    fVar7 = 0.0;
    fVar1 = 0.0;
  }
  else {
    fVar1 = __real_3f800000 / fVar1;
    fVar6 = fVar1 * fVar6;
    fVar7 = fVar1 * fVar7;
    fVar1 = fVar1 * fVar5;
  }
  fVar5 = (param_2->field0_0x0)._s_0.X;
  fVar3 = (param_2->field0_0x0)._s_0.Z;
  fVar2 = (param_2->field0_0x0)._s_0.Y;
  fVar2 = SQRT(fVar2 * fVar2 + fVar5 * fVar5 + fVar3 * fVar3);
  if (fVar2 <= 0.0) {
    fVar5 = 0.0;
    fVar9 = 0.0;
    fVar2 = 0.0;
  }
  else {
    fVar2 = __real_3f800000 / fVar2;
    fVar9 = fVar2 * (param_2->field0_0x0)._s_0.Y;
    fVar5 = fVar2 * fVar5;
    fVar2 = fVar2 * fVar3;
  }
  fVar5 = fVar5 + fVar6;
  fVar9 = fVar9 + fVar7;
  fVar2 = fVar2 + fVar1;
  fVar3 = SQRT(fVar9 * fVar9 + fVar5 * fVar5 + fVar2 * fVar2);
  if (fVar3 <= __real_358637bd) {
    fVar5 = 0.0;
    fVar9 = 0.0;
    fVar3 = 0.0;
  }
  else {
    fVar3 = __real_3f800000 / fVar3;
    fVar5 = fVar3 * fVar5;
    fVar9 = fVar3 * fVar9;
    fVar3 = fVar3 * fVar2;
  }
  fVar2 = fVar5 * fVar6 + fVar9 * fVar7 + fVar3 * fVar1;
  (this->field0_0x0)._s_0.W = fVar2;
  if (fVar2 == 0.0) {
    if ((float)((uint)fVar6 & __xmm_7fffffff7fffffff7fffffff7fffffff) <
        (float)((uint)fVar7 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      fVar9 = 0.0;
      fVar5 = fVar8 / SQRT(fVar7 * fVar7 + fVar1 * fVar1);
      fVar3 = fVar5 * fVar1;
      fVar4 = (float)((uint)(fVar5 * fVar7) ^ __xmm_80000000800000008000000080000000);
    }
    else {
      fVar3 = 0.0;
      fVar5 = fVar8 / SQRT(fVar6 * fVar6 + fVar1 * fVar1);
      fVar4 = fVar5 * fVar6;
      fVar9 = (float)((uint)(fVar5 * fVar1) ^ __xmm_80000000800000008000000080000000);
    }
  }
  else {
    fVar4 = fVar9 * fVar6 - fVar5 * fVar7;
    fVar9 = fVar3 * fVar7 - fVar9 * fVar1;
    fVar3 = fVar5 * fVar1 - fVar3 * fVar6;
  }
  (this->field0_0x0)._s_0.X = fVar9;
  (this->field0_0x0)._s_0.Y = fVar3;
  (this->field0_0x0)._s_0.Z = fVar4;
  fVar5 = SQRT(fVar9 * fVar9 + fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4);
  if (fVar5 <= 0.0) {
    *(undefined8 *)((longlong)&this->field0_0x0 + 8) = 0;
    *(undefined8 *)&this->field0_0x0 = 0;
  }
  else {
    fVar8 = fVar8 / fVar5;
    (this->field0_0x0)._s_0.X = fVar8 * (this->field0_0x0)._s_0.X;
    (this->field0_0x0)._s_0.Y = fVar8 * (this->field0_0x0)._s_0.Y;
    (this->field0_0x0)._s_0.Z = fVar8 * (this->field0_0x0)._s_0.Z;
    (this->field0_0x0)._s_0.W = fVar8 * (this->field0_0x0)._s_0.W;
  }
  return;
}

// SetFromTo @ 1433c81f0

void __thiscall
UE::Geometry::TQuaternion<double>::SetFromTo
          (TQuaternion<double> *this,TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  
  dVar12 = __real_3ff0000000000000;
  dVar11 = (param_1->field0_0x0)._s_0.Z;
  dVar15 = (param_1->field0_0x0)._s_0.X;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  auVar6._0_8_ = dVar15 * dVar15;
  auVar6._8_8_ = 0;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dVar1 * dVar1 + auVar6._0_8_ + dVar11 * dVar11;
  auVar7 = sqrtpd(auVar6,auVar7);
  if (auVar7._0_8_ <= 0.0) {
    dVar15 = 0.0;
    dVar1 = 0.0;
    dVar16 = 0.0;
  }
  else {
    dVar16 = __real_3ff0000000000000 / auVar7._0_8_;
    dVar15 = dVar16 * dVar15;
    dVar1 = dVar16 * dVar1;
    dVar16 = dVar16 * dVar11;
  }
  dVar11 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  dVar14 = (param_2->field0_0x0)._s_0.Z;
  auVar13._0_8_ = dVar14 * dVar14;
  auVar13._8_8_ = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar2 * dVar2 + dVar11 * dVar11 + auVar13._0_8_;
  auVar7 = sqrtpd(auVar13,auVar3);
  if (auVar7._0_8_ <= 0.0) {
    dVar11 = 0.0;
    dVar2 = 0.0;
    dVar5 = 0.0;
  }
  else {
    dVar5 = __real_3ff0000000000000 / auVar7._0_8_;
    dVar11 = dVar5 * dVar11;
    dVar2 = dVar5 * dVar2;
    dVar5 = dVar5 * dVar14;
  }
  dVar11 = dVar15 + dVar11;
  dVar5 = dVar16 + dVar5;
  dVar2 = dVar1 + dVar2;
  auVar8._0_8_ = dVar11 * dVar11;
  auVar8._8_8_ = 0;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar2 * dVar2 + auVar8._0_8_ + dVar5 * dVar5;
  auVar7 = sqrtpd(auVar8,auVar4);
  if (auVar7._0_8_ <= __real_3e45798ee2308c3a) {
    dVar11 = 0.0;
    dVar2 = 0.0;
    dVar14 = 0.0;
  }
  else {
    dVar14 = __real_3ff0000000000000 / auVar7._0_8_;
    dVar11 = dVar14 * dVar11;
    dVar2 = dVar14 * dVar2;
    dVar14 = dVar14 * dVar5;
  }
  dVar5 = dVar11 * dVar15 + dVar2 * dVar1 + dVar14 * dVar16;
  (this->field0_0x0)._s_0.W = dVar5;
  if (dVar5 == 0.0) {
    if ((double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
        (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
      auVar10._0_8_ = dVar1 * dVar1 + dVar16 * dVar16;
      auVar10._8_8_ = 0;
      dVar15 = 0.0;
      auVar7 = sqrtpd(auVar10,auVar10);
      dVar12 = dVar12 / auVar7._0_8_;
      dVar11 = dVar12 * dVar16;
      dVar12 = dVar12 * dVar1;
      dVar12 = (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) ^
                                __xmm_80000000000000008000000000000000._4_4_,
                                SUB84(dVar12,0) ^ (uint)__xmm_80000000000000008000000000000000);
    }
    else {
      dVar11 = 0.0;
      auVar9._0_8_ = dVar15 * dVar15 + dVar16 * dVar16;
      auVar9._8_8_ = 0;
      auVar7 = sqrtpd(auVar9,auVar9);
      dVar12 = dVar12 / auVar7._0_8_;
      dVar16 = dVar12 * dVar16;
      dVar12 = dVar12 * dVar15;
      dVar15 = (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) ^
                                __xmm_80000000000000008000000000000000._4_4_,
                                SUB84(dVar16,0) ^ (uint)__xmm_80000000000000008000000000000000);
    }
  }
  else {
    dVar12 = dVar2 * dVar15 - dVar11 * dVar1;
    dVar11 = dVar11 * dVar16 - dVar14 * dVar15;
    dVar15 = dVar14 * dVar1 - dVar2 * dVar16;
  }
  (this->field0_0x0)._s_0.X = dVar15;
  (this->field0_0x0)._s_0.Y = dVar11;
  (this->field0_0x0)._s_0.Z = dVar12;
  Normalize(this,0.0);
  return;
}

// TQuaternion<double> @ 1435671b0

TQuaternion<double> * __thiscall
UE::Geometry::TQuaternion<double>::TQuaternion<double>
          (TQuaternion<double> *this,TVector<double> *param_1,TVector<double> *param_2)

{
  (this->field0_0x0)._s_0.Z = 0.0;
  (this->field0_0x0)._s_0.Y = 0.0;
  (this->field0_0x0)._s_0.X = 0.0;
  (this->field0_0x0)._s_0.W = 1.0;
  SetFromTo(this,param_1,param_2);
  return this;
}

// GetAxes @ 1435b0a70

void __thiscall
UE::Geometry::TQuaternion<float>::GetAxes
          (TQuaternion<float> *this,TVector<float> *param_1,TVector<float> *param_2,
          TVector<float> *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar5 = __real_3f800000;
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Z;
  fVar3 = (this->field0_0x0)._s_0.Y;
  fVar4 = (this->field0_0x0)._s_0.W;
  fVar6 = fVar2 + fVar2;
  fVar8 = fVar3 + fVar3;
  fVar9 = (fVar1 + fVar1) * fVar1;
  fVar7 = (fVar1 + fVar1) * fVar4;
  (param_1->field0_0x0)._s_0.X = __real_3f800000 - (fVar6 * fVar2 + fVar8 * fVar3);
  (param_1->field0_0x0)._s_0.Y = fVar8 * fVar1 + fVar6 * fVar4;
  (param_1->field0_0x0)._s_0.Z = fVar6 * fVar1 - fVar8 * fVar4;
  (param_2->field0_0x0)._s_0.X = fVar8 * fVar1 - fVar6 * fVar4;
  (param_2->field0_0x0)._s_0.Y = fVar5 - (fVar6 * fVar2 + fVar9);
  (param_2->field0_0x0)._s_0.Z = fVar6 * fVar3 + fVar7;
  (param_3->field0_0x0)._s_0.X = fVar6 * fVar1 + fVar8 * fVar4;
  (param_3->field0_0x0)._s_0.Y = fVar6 * fVar3 - fVar7;
  (param_3->field0_0x0)._s_0.Z = fVar5 - (fVar8 * fVar3 + fVar9);
  return;
}

// GetAxes @ 1435b0bc0

void __thiscall
UE::Geometry::TQuaternion<double>::GetAxes
          (TQuaternion<double> *this,TVector<double> *param_1,TVector<double> *param_2,
          TVector<double> *param_3)

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
  
  dVar9 = __real_3ff0000000000000;
  dVar1 = (this->field0_0x0)._s_0.X;
  dVar2 = (this->field0_0x0)._s_0.Z;
  dVar3 = (this->field0_0x0)._s_0.Y;
  dVar4 = (this->field0_0x0)._s_0.W;
  dVar5 = dVar2 + dVar2;
  dVar7 = dVar3 + dVar3;
  dVar8 = (dVar1 + dVar1) * dVar1;
  dVar6 = (dVar1 + dVar1) * dVar4;
  (param_1->field0_0x0)._s_0.X = __real_3ff0000000000000 - (dVar5 * dVar2 + dVar7 * dVar3);
  (param_1->field0_0x0)._s_0.Y = dVar7 * dVar1 + dVar5 * dVar4;
  (param_1->field0_0x0)._s_0.Z = dVar5 * dVar1 - dVar7 * dVar4;
  (param_2->field0_0x0)._s_0.X = dVar7 * dVar1 - dVar5 * dVar4;
  (param_2->field0_0x0)._s_0.Y = dVar9 - (dVar5 * dVar2 + dVar8);
  (param_2->field0_0x0)._s_0.Z = dVar5 * dVar3 + dVar6;
  (param_3->field0_0x0)._s_0.X = dVar5 * dVar1 + dVar7 * dVar4;
  (param_3->field0_0x0)._s_0.Y = dVar5 * dVar3 - dVar6;
  (param_3->field0_0x0)._s_0.Z = dVar9 - (dVar7 * dVar3 + dVar8);
  return;
}

// ToRotationMatrix @ 1435c88f0

TMatrix3<float> * __thiscall
UE::Geometry::TQuaternion<float>::ToRotationMatrix
          (TQuaternion<float> *this,TMatrix3<float> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar5 = __real_3f800000;
  fVar1 = (this->field0_0x0)._s_0.X;
  fVar2 = (this->field0_0x0)._s_0.Z;
  fVar3 = (this->field0_0x0)._s_0.Y;
  fVar4 = (this->field0_0x0)._s_0.W;
  fVar6 = fVar2 + fVar2;
  fVar8 = fVar3 + fVar3;
  fVar9 = (fVar1 + fVar1) * fVar1;
  fVar7 = (fVar1 + fVar1) * fVar4;
  (__return_storage_ptr__->Row0).field0_0x0._s_0.X =
       __real_3f800000 - (fVar6 * fVar2 + fVar8 * fVar3);
  (__return_storage_ptr__->Row0).field0_0x0._s_0.Y = fVar8 * fVar1 - fVar6 * fVar4;
  (__return_storage_ptr__->Row0).field0_0x0._s_0.Z = fVar6 * fVar1 + fVar8 * fVar4;
  (__return_storage_ptr__->Row1).field0_0x0._s_0.X = fVar8 * fVar1 + fVar6 * fVar4;
  (__return_storage_ptr__->Row1).field0_0x0._s_0.Y = fVar5 - (fVar6 * fVar2 + fVar9);
  (__return_storage_ptr__->Row1).field0_0x0._s_0.Z = fVar6 * fVar3 - fVar7;
  (__return_storage_ptr__->Row2).field0_0x0._s_0.X = fVar6 * fVar1 - fVar8 * fVar4;
  (__return_storage_ptr__->Row2).field0_0x0._s_0.Y = fVar6 * fVar3 + fVar7;
  (__return_storage_ptr__->Row2).field0_0x0._s_0.Z = fVar5 - (fVar8 * fVar3 + fVar9);
  return __return_storage_ptr__;
}

// ToRotationMatrix @ 1435c8a40

TMatrix3<double> * __thiscall
UE::Geometry::TQuaternion<double>::ToRotationMatrix
          (TQuaternion<double> *this,TMatrix3<double> *__return_storage_ptr__)

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
  
  dVar9 = __real_3ff0000000000000;
  dVar1 = (this->field0_0x0)._s_0.X;
  dVar2 = (this->field0_0x0)._s_0.Z;
  dVar3 = (this->field0_0x0)._s_0.Y;
  dVar4 = (this->field0_0x0)._s_0.W;
  dVar5 = dVar2 + dVar2;
  dVar7 = dVar3 + dVar3;
  dVar8 = (dVar1 + dVar1) * dVar1;
  dVar6 = (dVar1 + dVar1) * dVar4;
  (__return_storage_ptr__->Row0).field0_0x0._s_0.X =
       __real_3ff0000000000000 - (dVar5 * dVar2 + dVar7 * dVar3);
  (__return_storage_ptr__->Row0).field0_0x0._s_0.Y = dVar7 * dVar1 - dVar5 * dVar4;
  (__return_storage_ptr__->Row0).field0_0x0._s_0.Z = dVar5 * dVar1 + dVar7 * dVar4;
  (__return_storage_ptr__->Row1).field0_0x0._s_0.X = dVar7 * dVar1 + dVar5 * dVar4;
  (__return_storage_ptr__->Row1).field0_0x0._s_0.Y = dVar9 - (dVar5 * dVar2 + dVar8);
  (__return_storage_ptr__->Row1).field0_0x0._s_0.Z = dVar5 * dVar3 - dVar6;
  (__return_storage_ptr__->Row2).field0_0x0._s_0.X = dVar5 * dVar1 - dVar7 * dVar4;
  (__return_storage_ptr__->Row2).field0_0x0._s_0.Y = dVar5 * dVar3 + dVar6;
  (__return_storage_ptr__->Row2).field0_0x0._s_0.Z = dVar9 - (dVar7 * dVar3 + dVar8);
  return __return_storage_ptr__;
}

// TQuaternion<double> @ 1435e2890

TQuaternion<double> * __thiscall
UE::Geometry::TQuaternion<double>::TQuaternion<double>
          (TQuaternion<double> *this,TVector<double> *param_1,double param_2,bool param_3)

{
  double extraout_XMM0_Qa;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  
  (this->field0_0x0)._s_0.Z = 0.0;
  (this->field0_0x0)._s_0.Y = 0.0;
  (this->field0_0x0)._s_0.X = 0.0;
  __libm_sse2_sincos_();
  (this->field0_0x0)._s_0.W = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
  (this->field0_0x0)._s_0.X = extraout_XMM0_Qa * (param_1->field0_0x0)._s_0.X;
  (this->field0_0x0)._s_0.Y = extraout_XMM0_Qa * (param_1->field0_0x0)._s_0.Y;
  (this->field0_0x0)._s_0.Z = extraout_XMM0_Qa * (param_1->field0_0x0)._s_0.Z;
  return this;
}

// Inverse @ 14360d5f0

TQuaternion<float> * __thiscall
UE::Geometry::TQuaternion<float>::Inverse
          (TQuaternion<float> *this,TQuaternion<float> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  
  uVar4 = __xmm_80000000800000008000000080000000;
  fVar5 = (this->field0_0x0)._s_0.X;
  fVar1 = (this->field0_0x0)._s_0.W;
  fVar2 = (this->field0_0x0)._s_0.Z;
  fVar3 = (this->field0_0x0)._s_0.Y;
  fVar5 = fVar3 * fVar3 + fVar5 * fVar5 + fVar2 * fVar2 + fVar1 * fVar1;
  if (0.0 < fVar5) {
    fVar5 = __real_3f800000 / fVar5;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (float)((uint)(fVar5 * (this->field0_0x0)._s_0.X) ^ __xmm_80000000800000008000000080000000)
    ;
    fVar3 = (this->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (float)((uint)(fVar5 * fVar2) ^ uVar4);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (float)((uint)(fVar5 * fVar3) ^ uVar4);
    (__return_storage_ptr__->field0_0x0)._s_0.W = fVar5 * fVar1;
    return __return_storage_ptr__;
  }
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 = 0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
  return __return_storage_ptr__;
}

// Inverse @ 14360d690

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TQuaternion<double> * __thiscall
UE::Geometry::TQuaternion<double>::Inverse
          (TQuaternion<double> *this,TQuaternion<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  
  uVar6 = __xmm_80000000000000008000000000000000._4_4_;
  uVar5 = (uint)__xmm_80000000000000008000000000000000;
  dVar10 = (this->field0_0x0)._s_0.X;
  dVar1 = (this->field0_0x0)._s_0.W;
  dVar2 = (this->field0_0x0)._s_0.Z;
  dVar3 = (this->field0_0x0)._s_0.Y;
  dVar10 = dVar3 * dVar3 + dVar10 * dVar10 + dVar2 * dVar2 + dVar1 * dVar1;
  if (0.0 < dVar10) {
    dVar10 = __real_3ff0000000000000 / dVar10;
    dVar3 = (this->field0_0x0)._s_0.X * dVar10;
    dVar4 = (this->field0_0x0)._s_0.Y * dVar10;
    uVar7 = (uint)((ulonglong)dVar3 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
    uVar8 = SUB84(dVar4,0) ^ _UNK_15066df78;
    uVar9 = (uint)((ulonglong)dVar4 >> 0x20) ^ _UNK_15066df7c;
    *(uint *)&__return_storage_ptr__->field0_0x0 =
         SUB84(dVar3,0) ^ (uint)__xmm_80000000000000008000000000000000;
    *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 4) = uVar7;
    *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = uVar8;
    *(uint *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = uVar9;
    (__return_storage_ptr__->field0_0x0)._s_0.W = dVar10 * dVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)(dVar10 * dVar2) >> 0x20) ^ uVar6,
                          SUB84(dVar10 * dVar2,0) ^ uVar5);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.W = 0.0;
  return __return_storage_ptr__;
}

// SetAxisAngleR @ 14361a920

void __thiscall
UE::Geometry::TQuaternion<double>::SetAxisAngleR
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

