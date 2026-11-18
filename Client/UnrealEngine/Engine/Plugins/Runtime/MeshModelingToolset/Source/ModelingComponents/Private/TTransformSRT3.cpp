// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 4

// InverseUnsafe @ 14ca97480

TTransformSRT3<double> * __thiscall
UE::Geometry::TTransformSRT3<double>::InverseUnsafe
          (TTransformSRT3<double> *this,TTransformSRT3<double> *__return_storage_ptr__,
          double param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_d0;
  double local_a8;
  TQuaternion<double>_u_0 local_a0 [4];
  
  dVar9 = (this->Rotation).field0_0x0._s_0.Y;
  local_a8 = 0.0;
  dVar1 = (this->Rotation).field0_0x0._s_0.W;
  dVar2 = (this->Rotation).field0_0x0._s_0.Z;
  dVar7 = (this->Rotation).field0_0x0._s_0.X;
  uVar16 = (uint)__xmm_80000000000000008000000000000000;
  uVar17 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  dVar9 = dVar9 * dVar9 + dVar7 * dVar7 + dVar2 * dVar2 + dVar1 * dVar1;
  if (dVar9 <= 0.0) {
    local_a0[0]._s_0.X = 0.0;
    local_a0[0]._s_0.Y = 0.0;
    local_a0[0]._s_0.Z = 0.0;
    local_a0[0]._s_0.W = 0.0;
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
  }
  else {
    dVar9 = __real_3ff0000000000000 / dVar9;
    dVar8 = dVar9 * (this->Rotation).field0_0x0._s_0.Y;
    local_a0[0]._24_8_ = dVar9 * dVar1;
    uVar12 = SUB84(dVar8,0) ^ uVar16;
    uVar13 = (uint)((ulonglong)dVar8 >> 0x20) ^ uVar17;
    uVar14 = SUB84(dVar9 * dVar7,0) ^ uVar16;
    uVar15 = (uint)((ulonglong)(dVar9 * dVar7) >> 0x20) ^ uVar17;
    local_a0[0]._8_8_ = CONCAT44(uVar13,uVar12);
    uVar10 = SUB84(dVar9 * dVar2,0) ^ uVar16;
    uVar11 = (uint)((ulonglong)(dVar9 * dVar2) >> 0x20) ^ uVar17;
    local_a0[0]._0_8_ = CONCAT44(uVar15,uVar14);
    local_a0[0]._16_8_ = CONCAT44(uVar11,uVar10);
  }
  uVar4 = local_a0[0]._s_0.W;
  dVar9 = *(double *)&(this->Scale3D).field0_0x0;
  uVar5 = SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar6 = (uint)((ulonglong)dVar9 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (param_1 <= (double)CONCAT44(uVar6,uVar5) && (double)CONCAT44(uVar6,uVar5) != param_1) {
    dVar9 = __real_3ff0000000000000 / dVar9;
  }
  else {
    dVar9 = 0.0;
  }
  dVar1 = *(double *)((longlong)&(this->Scale3D).field0_0x0 + 8);
  uVar5 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar6 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (param_1 <= (double)CONCAT44(uVar6,uVar5) && (double)CONCAT44(uVar6,uVar5) != param_1) {
    dVar1 = __real_3ff0000000000000 / dVar1;
  }
  else {
    dVar1 = 0.0;
  }
  dVar2 = *(double *)((longlong)&(this->Scale3D).field0_0x0 + 0x10);
  uVar5 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar6 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (param_1 <= (double)CONCAT44(uVar6,uVar5) && (double)CONCAT44(uVar6,uVar5) != param_1) {
    local_a8 = __real_3ff0000000000000 / dVar2;
  }
  dVar8 = local_a8 * (this->Translation).field0_0x0._s_0.Z;
  dVar2 = dVar9 * (this->Translation).field0_0x0._s_0.X;
  dVar7 = dVar1 * (this->Translation).field0_0x0._s_0.Y;
  local_e8._s_0.Z =
       (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) ^ uVar17,SUB84(dVar8,0) ^ uVar16);
  local_e8._s_0.X =
       (double)CONCAT44((uint)((ulonglong)dVar2 >> 0x20) ^ uVar17,SUB84(dVar2,0) ^ uVar16);
  local_e8._s_0.Y =
       (double)CONCAT44((uint)((ulonglong)dVar7 >> 0x20) ^ uVar17,SUB84(dVar7,0) ^ uVar16);
  operator*<double>((TVector<double> *)&local_d0._s_0,(TQuaternion<double> *)&local_a0[0]._s_0,
                    (TVector<double> *)&local_e8._s_0);
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.X = (double)CONCAT44(uVar15,uVar14);
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.Y = (double)CONCAT44(uVar13,uVar12);
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.Z = (double)CONCAT44(uVar11,uVar10);
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.W = (double)uVar4;
  (__return_storage_ptr__->Translation).field0_0x0._s_0.X = local_d0._s_0.X;
  (__return_storage_ptr__->Translation).field0_0x0._s_0.Y = local_d0._s_0.Y;
  (__return_storage_ptr__->Translation).field0_0x0._s_0.Z = local_d0._s_0.Z;
  auVar3._8_4_ = SUB84(dVar1,0);
  auVar3._0_8_ = dVar9;
  auVar3._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 (*) [16])&(__return_storage_ptr__->Scale3D).field0_0x0 = auVar3;
  (__return_storage_ptr__->Scale3D).field0_0x0._s_0.Z = local_a8;
  return __return_storage_ptr__;
}

// TransformNormal<double> @ 14cac6290

TVector<double> * __thiscall
UE::Geometry::TTransformSRT3<double>::TransformNormal<double>
          (TTransformSRT3<double> *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  TVector<double>_u_0 local_48 [2];
  
  dVar6 = (this->Scale3D).field0_0x0._s_0.Y;
  dVar7 = (this->Scale3D).field0_0x0._s_0.Z;
  dVar1 = (this->Scale3D).field0_0x0._s_0.X;
  dVar5 = dVar6 * dVar1;
  dVar4 = __real_3ff0000000000000;
  if (dVar7 * dVar5 < 0.0) {
    dVar4 = __real_bff0000000000000;
  }
  dVar1 = dVar1 * (param_1->field0_0x0)._s_0.Y * dVar7 * dVar4;
  dVar7 = dVar6 * (param_1->field0_0x0)._s_0.X * dVar7 * dVar4;
  dVar6 = dVar5 * dVar4 * (param_1->field0_0x0)._s_0.Z;
  auVar2._0_8_ = dVar1 * dVar1;
  auVar2._8_8_ = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar7 * dVar7 + auVar2._0_8_ + dVar6 * dVar6;
  auVar3 = sqrtpd(auVar2,auVar3);
  if (auVar3._0_8_ <= 0.0) {
    local_48[0]._s_0.Z = 0.0;
    local_48[0]._s_0.X = 0.0;
    local_48[0]._s_0.Y = 0.0;
  }
  else {
    dVar4 = __real_3ff0000000000000 / auVar3._0_8_;
    local_48[0]._0_8_ = dVar4 * dVar7;
    local_48[0]._8_8_ = dVar4 * dVar1;
    local_48[0]._16_8_ = dVar4 * dVar6;
  }
  operator*<double>(__return_storage_ptr__,&this->Rotation,(TVector<double> *)&local_48[0]._s_0);
  return __return_storage_ptr__;
}

// TransformPosition<double> @ 14cb60850

TVector<double> * __thiscall
UE::Geometry::TTransformSRT3<double>::TransformPosition<double>
          (TTransformSRT3<double> *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  TVector<double> *pTVar5;
  TVector<double>_u_0 local_38;
  TVector<double> local_20;
  
  local_38._s_0.X = (param_1->field0_0x0)._s_0.X * (this->Scale3D).field0_0x0._s_0.X;
  local_38._s_0.Y = (this->Scale3D).field0_0x0._s_0.Y * (param_1->field0_0x0)._s_0.Y;
  local_38._s_0.Z = (this->Scale3D).field0_0x0._s_0.Z * (param_1->field0_0x0)._s_0.Z;
  pTVar5 = operator*<double>(&local_20,&this->Rotation,(TVector<double> *)&local_38._s_0);
  dVar1 = (this->Translation).field0_0x0._s_0.Y;
  dVar2 = (pTVar5->field0_0x0)._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       (this->Translation).field0_0x0._s_0.X + (pTVar5->field0_0x0)._s_0.X;
  dVar3 = (this->Translation).field0_0x0._s_0.Z;
  dVar4 = (pTVar5->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1 + dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3 + dVar4;
  return __return_storage_ptr__;
}

// InverseTransformRay @ 14cba3830

TRay<double> * __thiscall
UE::Geometry::TTransformSRT3<double>::InverseTransformRay
          (TTransformSRT3<double> *this,TRay<double> *__return_storage_ptr__,TRay<double> *param_1)

{
  undefined8 uVar1;
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
  TVector<double> *pTVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  TVector<double>_u_0 local_c8;
  TVector<double> local_b0 [7];
  
  dVar9 = __real_3e45798ee2308c3a;
  dVar7 = __real_3ff0000000000000;
  dVar8 = 0.0;
  uVar1 = *(undefined8 *)&(this->Scale3D).field0_0x0;
  uVar18 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar19 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar19,uVar18) &&
      (double)CONCAT44(uVar19,uVar18) != __real_3e45798ee2308c3a) {
    dVar11 = __real_3ff0000000000000 / (this->Scale3D).field0_0x0._s_0.X;
  }
  else {
    dVar11 = 0.0;
  }
  dVar2 = *(double *)((longlong)&(this->Scale3D).field0_0x0 + 8);
  uVar16 = SUB84(dVar2,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar17 = (uint)((ulonglong)dVar2 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar17,uVar16) &&
      (double)CONCAT44(uVar17,uVar16) != __real_3e45798ee2308c3a) {
    dVar2 = __real_3ff0000000000000 / dVar2;
  }
  else {
    dVar2 = 0.0;
  }
  dVar3 = *(double *)((longlong)&(this->Scale3D).field0_0x0 + 0x10);
  uVar20 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar21 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar21,uVar20) &&
      (double)CONCAT44(uVar21,uVar20) != __real_3e45798ee2308c3a) {
    dVar3 = __real_3ff0000000000000 / dVar3;
  }
  else {
    dVar3 = 0.0;
  }
  local_c8._s_0.X = (param_1->Origin).field0_0x0._s_0.X - (this->Translation).field0_0x0._s_0.X;
  local_c8._s_0.Y = (param_1->Origin).field0_0x0._s_0.Y - (this->Translation).field0_0x0._s_0.Y;
  local_c8._s_0.Z = (param_1->Origin).field0_0x0._s_0.Z - (this->Translation).field0_0x0._s_0.Z;
  pTVar12 = TQuaternion<double>::InverseMultiply
                      (&this->Rotation,local_b0,(TVector<double> *)&local_c8._s_0);
  dVar4 = (pTVar12->field0_0x0)._s_0.X;
  dVar5 = (pTVar12->field0_0x0)._s_0.Y;
  dVar6 = (pTVar12->field0_0x0)._s_0.Z;
  if (dVar9 <= (double)CONCAT44(uVar19,uVar18) && (double)CONCAT44(uVar19,uVar18) != dVar9) {
    dVar10 = dVar7 / (this->Scale3D).field0_0x0._s_0.X;
  }
  else {
    dVar10 = 0.0;
  }
  if (dVar9 <= (double)CONCAT44(uVar17,uVar16) && (double)CONCAT44(uVar17,uVar16) != dVar9) {
    dVar13 = dVar7 / (this->Scale3D).field0_0x0._s_0.Y;
  }
  else {
    dVar13 = 0.0;
  }
  if (dVar9 <= (double)CONCAT44(uVar21,uVar20) && (double)CONCAT44(uVar21,uVar20) != dVar9) {
    dVar9 = dVar7 / (this->Scale3D).field0_0x0._s_0.Z;
  }
  else {
    dVar9 = 0.0;
  }
  pTVar12 = TQuaternion<double>::InverseMultiply(&this->Rotation,local_b0,&param_1->Direction);
  dVar10 = dVar10 * (pTVar12->field0_0x0)._s_0.X;
  dVar13 = dVar13 * (pTVar12->field0_0x0)._s_0.Y;
  dVar9 = dVar9 * (pTVar12->field0_0x0)._s_0.Z;
  auVar14._0_8_ = dVar10 * dVar10;
  auVar14._8_8_ = 0;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = dVar13 * dVar13 + auVar14._0_8_ + dVar9 * dVar9;
  auVar15 = sqrtpd(auVar14,auVar15);
  if (auVar15._0_8_ <= 0.0) {
    dVar13 = 0.0;
    dVar7 = 0.0;
  }
  else {
    dVar7 = dVar7 / auVar15._0_8_;
    dVar8 = dVar7 * dVar9;
    dVar13 = dVar7 * dVar13;
    dVar7 = dVar7 * dVar10;
  }
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = dVar11 * dVar4;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar2 * dVar5;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar3 * dVar6;
  (__return_storage_ptr__->Direction).field0_0x0._s_0.X = dVar7;
  (__return_storage_ptr__->Direction).field0_0x0._s_0.Y = dVar13;
  (__return_storage_ptr__->Direction).field0_0x0._s_0.Z = dVar8;
  UE::Math::TVector<double>::Normalize(&__return_storage_ptr__->Direction,__real_3e45798ee0000000);
  return __return_storage_ptr__;
}

