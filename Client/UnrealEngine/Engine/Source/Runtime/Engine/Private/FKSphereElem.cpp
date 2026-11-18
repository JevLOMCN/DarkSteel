// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// StaticStruct @ 14732e610

UScriptStruct * __cdecl FKSphereElem::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FKSphereElem.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FKSphereElem.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FKSphereElem,(UObject *)pUVar1,L"KSphereElem");
  }
  return Z_Registration_Info_UScriptStruct_FKSphereElem.OuterSingleton;
}

// ~FKSphereElem @ 1476e8f60

void __thiscall FKSphereElem::~FKSphereElem(FKSphereElem *this)

{
  this->_padding_ = (longlong)&___7FKShapeElem__6B_;
  return;
}

// CalcAABB @ 1476f3aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TBox<double> * __thiscall
FKSphereElem::CalcAABB
          (FKSphereElem *this,TBox<double> *__return_storage_ptr__,TTransform<double> *param_1,
          float param_2)

{
  double dVar1;
  float fVar2;
  undefined1 auStack_c8 [64];
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_88.Rotation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  local_88.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_88.Rotation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_88.Rotation.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  local_88.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_88.Rotation.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_88.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_88.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_88.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  local_88.Scale3D.ZW.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
  local_88.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_88.Scale3D.ZW.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
  local_88.Translation.ZW.m128d_f64[0] = (double)param_2;
  dVar1 = (this->Center).field0_0x0._s_0.Y * local_88.Translation.ZW.m128d_f64[0];
  local_88.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar1,0);
  local_88.Translation.XY.m128d_f64[0] =
       (this->Center).field0_0x0._s_0.X * local_88.Translation.ZW.m128d_f64[0];
  local_88.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar1 >> 0x20);
  local_88.Translation.ZW.m128d_f64[0] =
       (this->Center).field0_0x0._s_0.Z * local_88.Translation.ZW.m128d_f64[0];
  local_88.Translation.ZW.m128d_f64[1] = 0.0;
  UE::Math::TTransform<double>::Multiply(&local_88,&local_88,param_1);
  fVar2 = param_2 * this->Radius;
  __return_storage_ptr__->IsValid = '\x01';
  (__return_storage_ptr__->Min).field0_0x0._s_0.X =
       (double)((float)local_88.Translation.XY.m128d_f64[0] - fVar2);
  (__return_storage_ptr__->Min).field0_0x0._s_0.Y =
       (double)((float)local_88.Translation.XY.m128d_f64[1] - fVar2);
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z =
       (double)((float)local_88.Translation.ZW.m128d_f64[0] - fVar2);
  (__return_storage_ptr__->Max).field0_0x0._s_0.X =
       (double)(fVar2 + (float)local_88.Translation.XY.m128d_f64[0]);
  (__return_storage_ptr__->Max).field0_0x0._s_0.Y =
       (double)(fVar2 + (float)local_88.Translation.XY.m128d_f64[1]);
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z =
       (double)(fVar2 + (float)local_88.Translation.ZW.m128d_f64[0]);
  return __return_storage_ptr__;
}

// GetClosestPointAndNormal @ 148285f80

float __thiscall
FKSphereElem::GetClosestPointAndNormal
          (FKSphereElem *this,TVector<double> *param_1,TTransform<double> *param_2,
          TVector<double> *param_3,TVector<double> *param_4)

{
  double dVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar6;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined4 uVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  TVector<double>_u_0 local_b8;
  FKSphereElem local_98;
  
  local_b8._s_0.X = (param_2->Scale3D).XY.m128d_f64[0];
  local_b8._s_0.Y = (param_2->Scale3D).XY.m128d_f64[1];
  local_b8._s_0.Z = (param_2->Scale3D).ZW.m128d_f64[0];
  GetFinalScaled(this,&local_98,(TVector<double> *)&local_b8._s_0,
                 &UE::Math::TTransform<double>::Identity);
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  auVar5 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
  auVar4 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  dVar17 = (param_2->Rotation).ZW.m128d_f64[1];
  auVar9 = blendpd(auVar4,auVar5,2);
  dVar13 = local_98.Center.field0_0x0._8_8_;
  dVar1 = auVar5._0_8_;
  auVar18._0_8_ = dVar13 * auVar4._0_8_ - auVar4._8_8_ * local_98.Center.field0_0x0._0_8_;
  auVar18._8_8_ = local_98.Center.field0_0x0._s_0.Z * auVar4._8_8_ - dVar1 * dVar13;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_98.Center.field0_0x0._s_0.Z;
  auVar4 = blendpd(local_98.Center.field0_0x0._0_16_,auVar4,2);
  auVar10._0_8_ = auVar4._0_8_ * dVar1 - auVar9._0_8_ * local_98.Center.field0_0x0._s_0.Z;
  auVar10._8_8_ = auVar4._8_8_ * auVar5._8_8_ - auVar9._8_8_ * 0.0;
  auVar4 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar9 = blendpd(auVar18,auVar10,2);
  dVar8 = auVar18._8_8_ + auVar18._8_8_;
  dVar12 = auVar10._0_8_ + auVar10._0_8_;
  uVar16 = (undefined4)((ulonglong)dVar12 >> 0x20);
  auVar19._0_8_ = auVar9._0_8_ + auVar9._0_8_;
  auVar19._8_8_ = auVar9._8_8_ + auVar9._8_8_;
  auVar14._8_4_ = SUB84(dVar12,0);
  auVar14._0_8_ = dVar8;
  auVar14._12_4_ = uVar16;
  auVar9._8_4_ = SUB84(dVar12,0);
  auVar9._0_8_ = dVar8;
  auVar9._12_4_ = uVar16;
  auVar10 = blendpd(auVar4,auVar5,2);
  auVar15._0_8_ = auVar14._8_8_ * auVar4._0_8_ - auVar4._8_8_ * dVar8;
  auVar15._8_8_ = auVar19._0_8_ * auVar4._8_8_ - dVar1 * dVar12;
  auVar4 = blendpd(auVar9,auVar19,2);
  auVar11._0_8_ = auVar4._0_8_ * dVar1 - auVar10._0_8_ * auVar19._0_8_;
  auVar11._8_8_ = auVar4._8_8_ * auVar5._8_8_ - auVar10._8_8_ * auVar19._8_8_;
  auVar5._8_4_ = SUB84(auVar15._8_8_,0);
  auVar5._0_8_ = auVar15._0_8_;
  auVar5._12_4_ = (int)((ulonglong)auVar15._8_8_ >> 0x20);
  auVar4 = blendpd(auVar15,auVar11,2);
  dVar1 = (dVar12 * dVar17 + dVar13 + auVar11._0_8_ + (param_2->Translation).XY.m128d_f64[1]) -
          (param_1->field0_0x0)._s_0.Y;
  dVar12 = (dVar8 * dVar17 + local_98.Center.field0_0x0._0_8_ + auVar5._8_8_ +
           (param_2->Translation).XY.m128d_f64[0]) - (param_1->field0_0x0)._s_0.X;
  dVar17 = (auVar19._0_8_ * dVar17 + local_98.Center.field0_0x0._s_0.Z + auVar4._0_8_ +
           (param_2->Translation).ZW.m128d_f64[0]) - (param_1->field0_0x0)._s_0.Z;
  dVar8 = dVar1 * dVar1 + dVar12 * dVar12 + dVar17 * dVar17;
  fVar7 = (float)SQRT(dVar8);
  local_98.Radius = fVar7 - local_98.Radius;
  if (local_98.Radius <= 0.0) {
    local_98.Radius = 0.0;
  }
  if (fVar7 <= __real_322bcc77) {
    (param_4->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (param_4->field0_0x0)._s_0.Y = (double)uVar2;
    (param_4->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    dVar8 = __real_3ff0000000000000 / SQRT(dVar8);
    uVar3 = (uint)__xmm_80000000000000008000000000000000;
    uVar6 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
    (param_4->field0_0x0)._s_0.X =
         (double)CONCAT44((uint)((ulonglong)(dVar12 * dVar8) >> 0x20) ^ uVar6,
                          SUB84(dVar12 * dVar8,0) ^ uVar3);
    (param_4->field0_0x0)._s_0.Y =
         (double)CONCAT44((uint)((ulonglong)(dVar1 * dVar8) >> 0x20) ^ uVar6,
                          SUB84(dVar1 * dVar8,0) ^ uVar3);
    (param_4->field0_0x0)._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)(dVar8 * dVar17) >> 0x20) ^ uVar6,
                          SUB84(dVar8 * dVar17,0) ^ uVar3);
  }
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  dVar8 = (param_1->field0_0x0)._s_0.Y;
  dVar13 = (double)local_98.Radius;
  dVar12 = (param_4->field0_0x0)._s_0.Z;
  dVar17 = (param_4->field0_0x0)._s_0.Y;
  (param_3->field0_0x0)._s_0.X =
       (param_1->field0_0x0)._s_0.X - dVar13 * (param_4->field0_0x0)._s_0.X;
  (param_3->field0_0x0)._s_0.Y = dVar8 - dVar13 * dVar17;
  (param_3->field0_0x0)._s_0.Z = dVar1 - dVar13 * dVar12;
  ~FKSphereElem(&local_98);
  return local_98.Radius;
}

// GetFinalScaled @ 148287d80

FKSphereElem * __thiscall
FKSphereElem::GetFinalScaled
          (FKSphereElem *this,FKSphereElem *__return_storage_ptr__,TVector<double> *param_1,
          TTransform<double> *param_2)

{
  double dVar1;
  undefined1 auVar2 [12];
  double dVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  uint uVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  undefined4 uVar20;
  double dVar19;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  
  dVar10 = (param_2->Scale3D).XY.m128d_f64[0] * (param_1->field0_0x0)._s_0.X;
  dVar12 = (param_2->Scale3D).ZW.m128d_f64[0] * (param_1->field0_0x0)._s_0.Z;
  dVar19 = (param_2->Scale3D).XY.m128d_f64[1] * (param_1->field0_0x0)._s_0.Y;
  if ((((double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
        __real_3f1a36e2e0000000) &&
      ((double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
       __real_3f1a36e2e0000000)) &&
     ((double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
      __real_3f1a36e2e0000000)) {
    dVar19 = __real_3fb99999a0000000;
    dVar12 = __real_3fb99999a0000000;
    dVar10 = __real_3fb99999a0000000;
  }
  dVar10 = (double)CONCAT44((uint)((ulonglong)dVar10 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  uVar8 = SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar9 = (uint)((ulonglong)dVar19 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((double)CONCAT44(uVar9,uVar8) <= dVar10) {
    dVar10 = (double)CONCAT44(uVar9,uVar8);
  }
  dVar19 = (double)CONCAT44((uint)((ulonglong)dVar12 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  if (dVar19 <= dVar10) {
    dVar10 = dVar19;
  }
  if (dVar10 <= __real_3e45798ee2308c3a) {
    dVar10 = __real_3fb99999a0000000;
  }
  __return_storage_ptr__->_padding_ = (longlong)&___7FKShapeElem__6B_;
  *(int *)&__return_storage_ptr__->_padding_ = (int)this->_padding_;
  *(undefined8 *)((longlong)&__return_storage_ptr__->_padding_ + 4) =
       *(undefined8 *)((longlong)&this->_padding_ + 4);
  lVar4 = __return_storage_ptr__->_padding_;
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) =
       *(undefined4 *)((longlong)&this->_padding_ + 4);
  *(byte *)&__return_storage_ptr__->_padding_ =
       (byte)__return_storage_ptr__->_padding_ ^ ((byte)lVar4 ^ (byte)this->_padding_) & 1;
  *(undefined1 *)((longlong)&__return_storage_ptr__->_padding_ + 1) =
       *(undefined1 *)((longlong)&this->_padding_ + 1);
  *(undefined4 *)&__return_storage_ptr__->_padding_ = 6;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__;
  __return_storage_ptr__->_padding_ = (longlong)&___7FKSphereElem__6B_;
  dVar19 = (this->Center).field0_0x0._s_0.Y;
  (__return_storage_ptr__->Center).field0_0x0._s_0.X = (this->Center).field0_0x0._s_0.X;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Y = dVar19;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Z = (this->Center).field0_0x0._s_0.Z;
  __return_storage_ptr__->Radius = (float)dVar10 * this->Radius;
  auVar7 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
  auVar5 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  dVar12 = (this->Center).field0_0x0._s_0.X * (param_2->Scale3D).XY.m128d_f64[0];
  dVar10 = (this->Center).field0_0x0._s_0.Y * (param_2->Scale3D).XY.m128d_f64[1];
  uVar20 = (undefined4)((ulonglong)dVar10 >> 0x20);
  dVar1 = (this->Center).field0_0x0._s_0.Z * (param_2->Scale3D).ZW.m128d_f64[0];
  dVar17 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar3 = (param_2->Rotation).ZW.m128d_f64[1];
  auVar21._8_4_ = SUB84(dVar10,0);
  auVar21._0_8_ = dVar12;
  auVar21._12_4_ = uVar20;
  dVar19 = auVar7._0_8_;
  auVar11 = blendpd(auVar5,auVar7,2);
  auVar22._0_8_ = auVar21._8_8_ * auVar5._0_8_ - auVar5._8_8_ * dVar12;
  auVar22._8_8_ = dVar1 * auVar5._8_8_ - dVar19 * dVar10;
  auVar23._8_4_ = SUB84(dVar10,0);
  auVar23._0_8_ = dVar12;
  auVar23._12_4_ = uVar20;
  auVar5._8_4_ = SUB84(dVar17,0);
  auVar5._0_8_ = dVar1;
  auVar5._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  auVar5 = blendpd(auVar23,auVar5,2);
  auVar6._0_8_ = auVar5._0_8_ * dVar19 - auVar11._0_8_ * dVar1;
  auVar6._8_8_ = auVar5._8_8_ * auVar7._8_8_ - auVar11._8_8_ * dVar17;
  auVar5 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar23 = blendpd(auVar22,auVar6,2);
  auVar24._0_8_ = auVar23._0_8_ + auVar23._0_8_;
  auVar24._8_8_ = auVar23._8_8_ + auVar23._8_8_;
  dVar17 = auVar22._8_8_ + auVar22._8_8_;
  dVar18 = auVar6._0_8_ + auVar6._0_8_;
  auVar15._8_4_ = SUB84(dVar18,0);
  auVar15._0_8_ = dVar17;
  uVar20 = (undefined4)((ulonglong)dVar18 >> 0x20);
  auVar15._12_4_ = uVar20;
  auVar13._8_4_ = SUB84(dVar18,0);
  auVar13._0_8_ = dVar17;
  auVar13._12_4_ = uVar20;
  auVar23 = blendpd(auVar13,auVar24,2);
  auVar16._0_8_ = auVar15._8_8_ * auVar5._0_8_ - auVar5._8_8_ * dVar17;
  auVar16._8_8_ = auVar24._0_8_ * auVar5._8_8_ - dVar19 * dVar18;
  auVar11._8_4_ = SUB84(auVar16._8_8_,0);
  auVar11._0_8_ = auVar16._0_8_;
  auVar11._12_4_ = (int)((ulonglong)auVar16._8_8_ >> 0x20);
  auVar5 = blendpd(auVar5,auVar7,2);
  auVar14._0_8_ = auVar23._0_8_ * dVar19 - auVar5._0_8_ * auVar24._0_8_;
  auVar14._8_8_ = auVar23._8_8_ * auVar7._8_8_ - auVar5._8_8_ * auVar24._8_8_;
  auVar5 = blendpd(auVar16,auVar14,2);
  dVar17 = dVar17 * dVar3 + dVar12 + auVar11._8_8_ + (param_2->Translation).XY.m128d_f64[0];
  dVar19 = dVar18 * dVar3 + dVar10 + auVar14._0_8_ + (param_2->Translation).XY.m128d_f64[1];
  auVar2._4_8_ = auVar14._0_8_;
  auVar2._0_4_ = (int)((ulonglong)dVar17 >> 0x20);
  auVar7._0_8_ = auVar2._0_8_ << 0x20;
  auVar7._8_4_ = SUB84(dVar19,0);
  auVar7._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
  dVar10 = (param_2->Translation).ZW.m128d_f64[0];
  dVar19 = (param_1->field0_0x0)._s_0.Y;
  dVar12 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->Center).field0_0x0._s_0.X = dVar17 * (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Y = auVar7._8_8_ * dVar19;
  (__return_storage_ptr__->Center).field0_0x0._s_0.Z =
       (auVar24._0_8_ * dVar3 + dVar1 + auVar5._0_8_ + dVar10) * dVar12;
  return __return_storage_ptr__;
}

// GetShortestDistanceToPoint @ 14828dcb0

float __thiscall
FKSphereElem::GetShortestDistanceToPoint
          (FKSphereElem *this,TVector<double> *param_1,TTransform<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  double dVar13;
  double dVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  TVector<double>_u_0 local_b8;
  FKSphereElem local_98;
  
  local_b8._s_0.X = (param_2->Scale3D).XY.m128d_f64[0];
  local_b8._s_0.Y = (param_2->Scale3D).XY.m128d_f64[1];
  local_b8._s_0.Z = (param_2->Scale3D).ZW.m128d_f64[0];
  GetFinalScaled(this,&local_98,(TVector<double> *)&local_b8._s_0,
                 &UE::Math::TTransform<double>::Identity);
  auVar11 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
  auVar4 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  dVar2 = (param_2->Rotation).ZW.m128d_f64[1];
  dVar16 = local_98.Center.field0_0x0._8_8_;
  dVar1 = auVar11._0_8_;
  auVar5 = blendpd(auVar4,auVar11,2);
  auVar14._0_8_ = dVar16 * auVar4._0_8_ - auVar4._8_8_ * local_98.Center.field0_0x0._0_8_;
  auVar14._8_8_ = local_98.Center.field0_0x0._s_0.Z * auVar4._8_8_ - dVar1 * dVar16;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_98.Center.field0_0x0._s_0.Z;
  auVar4 = blendpd(local_98.Center.field0_0x0._0_16_,auVar4,2);
  auVar6._0_8_ = auVar4._0_8_ * dVar1 - auVar5._0_8_ * local_98.Center.field0_0x0._s_0.Z;
  auVar6._8_8_ = auVar4._8_8_ * auVar11._8_8_ - auVar5._8_8_ * 0.0;
  auVar4 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar5 = blendpd(auVar14,auVar6,2);
  dVar3 = auVar14._8_8_ + auVar14._8_8_;
  dVar13 = auVar6._0_8_ + auVar6._0_8_;
  uVar12 = (undefined4)((ulonglong)dVar13 >> 0x20);
  auVar15._0_8_ = auVar5._0_8_ + auVar5._0_8_;
  auVar15._8_8_ = auVar5._8_8_ + auVar5._8_8_;
  auVar9._8_4_ = SUB84(dVar13,0);
  auVar9._0_8_ = dVar3;
  auVar9._12_4_ = uVar12;
  auVar7._8_4_ = SUB84(dVar13,0);
  auVar7._0_8_ = dVar3;
  auVar7._12_4_ = uVar12;
  auVar7 = blendpd(auVar7,auVar15,2);
  auVar6 = blendpd(auVar4,auVar11,2);
  auVar10._0_8_ = auVar9._8_8_ * auVar4._0_8_ - auVar4._8_8_ * dVar3;
  auVar10._8_8_ = auVar15._0_8_ * auVar4._8_8_ - dVar1 * dVar13;
  auVar5._8_4_ = SUB84(auVar10._8_8_,0);
  auVar5._0_8_ = auVar10._0_8_;
  auVar5._12_4_ = (int)((ulonglong)auVar10._8_8_ >> 0x20);
  auVar8._0_8_ = auVar7._0_8_ * dVar1 - auVar6._0_8_ * auVar15._0_8_;
  auVar8._8_8_ = auVar7._8_8_ * auVar11._8_8_ - auVar6._8_8_ * auVar15._8_8_;
  auVar11 = blendpd(auVar10,auVar8,2);
  dVar1 = (dVar13 * dVar2 + dVar16 + auVar8._0_8_ + (param_2->Translation).XY.m128d_f64[1]) -
          (param_1->field0_0x0)._s_0.Y;
  dVar3 = (dVar3 * dVar2 + local_98.Center.field0_0x0._0_8_ + auVar5._8_8_ +
          (param_2->Translation).XY.m128d_f64[0]) - (param_1->field0_0x0)._s_0.X;
  dVar13 = (auVar15._0_8_ * dVar2 + local_98.Center.field0_0x0._s_0.Z + auVar11._0_8_ +
           (param_2->Translation).ZW.m128d_f64[0]) - (param_1->field0_0x0)._s_0.Z;
  local_98.Radius = (float)SQRT(dVar1 * dVar1 + dVar3 * dVar3 + dVar13 * dVar13) - local_98.Radius;
  if (local_98.Radius <= __real_322bcc77) {
    local_98.Radius = 0.0;
  }
  ~FKSphereElem(&local_98);
  return local_98.Radius;
}

// ScaleElem @ 1482a8600

void __thiscall FKSphereElem::ScaleElem(FKSphereElem *this,TVector<double> *param_1,float param_2)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  double dVar5;
  
  dVar1 = *(double *)((longlong)&param_1->field0_0x0 + 8);
  fVar4 = (float)(param_1->field0_0x0)._s_0.X;
  dVar5 = (double)(float)((uint)fVar4 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  uVar2 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar3 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((double)CONCAT44(uVar3,uVar2) < dVar5 || (double)CONCAT44(uVar3,uVar2) == dVar5) {
    dVar1 = *(double *)((longlong)&param_1->field0_0x0 + 0x10);
    uVar2 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar3 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (dVar5 <= (double)CONCAT44(uVar3,uVar2) && (double)CONCAT44(uVar3,uVar2) != dVar5) {
      fVar4 = (float)dVar1;
    }
  }
  else {
    fVar4 = (float)dVar1;
  }
  fVar4 = fVar4 + this->Radius;
  if (fVar4 <= param_2) {
    fVar4 = param_2;
  }
  this->Radius = fVar4;
  return;
}

// DrawElemSolid @ 1482f8170

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FKSphereElem::DrawElemSolid
          (FKSphereElem *this,FPrimitiveDrawInterface *param_1,TTransform<double> *param_2,
          TVector<double> *param_3,FMaterialRenderProxy *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  TVector<double>_u_0 local_38;
  TVector<double>_u_0 local_20;
  
  uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  uVar4 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar5 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 0x10);
  uVar2 = (uint)*(undefined8 *)&param_3->field0_0x0 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar3 = (uint)((ulonglong)*(undefined8 *)&param_3->field0_0x0 >> 0x20) &
          __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((double)CONCAT44(uVar3,uVar2) <= (double)CONCAT44(uVar5,uVar4)) {
    uVar4 = uVar2;
    uVar5 = uVar3;
  }
  uVar2 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar3 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((double)CONCAT44(uVar3,uVar2) <= (double)CONCAT44(uVar5,uVar4)) {
    uVar4 = uVar2;
    uVar5 = uVar3;
  }
  local_20._s_0.Z = (param_2->Translation).ZW.m128d_f64[0];
  local_38._s_0.Z = (double)CONCAT44(uVar5,uVar4) * (double)this->Radius;
  local_20._s_0.X = (param_2->Translation).XY.m128d_f64[0];
  local_20._s_0.Y = (param_2->Translation).XY.m128d_f64[1];
  local_38._8_4_ = SUB84(local_38._s_0.Z,0);
  local_38._0_8_ = local_38._s_0.Z;
  local_38._12_4_ = (int)((ulonglong)local_38._s_0.Z >> 0x20);
  DrawSphere(param_1,(TVector<double> *)&local_20._s_0,&UE::Math::TRotator<double>::ZeroRotator,
             (TVector<double> *)&local_38._s_0,0x20,0x10,param_4,'\0',false);
  return;
}

// DrawElemSolid @ 1482f8230

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FKSphereElem::DrawElemSolid
          (FKSphereElem *this,FPrimitiveDrawInterface *param_1,TTransform<double> *param_2,
          float param_3,FMaterialRenderProxy *param_4)

{
  TVector<double>_u_0 local_38;
  TVector<double>_u_0 local_20;
  
  local_38._s_0.Z =
       (double)(float)((uint)param_3 & __xmm_7fffffff7fffffff7fffffff7fffffff) *
       (double)this->Radius;
  local_20._s_0.X = (param_2->Translation).XY.m128d_f64[0];
  local_20._s_0.Y = (param_2->Translation).XY.m128d_f64[1];
  local_38._8_4_ = SUB84(local_38._s_0.Z,0);
  local_38._0_8_ = local_38._s_0.Z;
  local_38._12_4_ = (int)((ulonglong)local_38._s_0.Z >> 0x20);
  local_20._s_0.Z = (param_2->Translation).ZW.m128d_f64[0];
  DrawSphere(param_1,(TVector<double> *)&local_20._s_0,&UE::Math::TRotator<double>::ZeroRotator,
             (TVector<double> *)&local_38._s_0,0x20,0x10,param_4,'\0',false);
  return;
}

// DrawElemWire @ 1482fb6c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FKSphereElem::DrawElemWire
          (FKSphereElem *this,FPrimitiveDrawInterface *param_1,TTransform<double> *param_2,
          TVector<double> *param_3,FColor param_4)

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
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  uint uVar22;
  uint uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined4 uVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  undefined1 local_f8 [8];
  float fStack_f0;
  float fStack_ec;
  undefined8 local_e8;
  TVector<double>_u_0 local_d8;
  TVector<double>_u_0 local_b8;
  TVector<double>_u_0 local_a0;
  TVector<double>_u_0 local_88 [4];
  
  local_b8._s_0.X = (param_2->Translation).XY.m128d_f64[0];
  local_b8._s_0.Y = (param_2->Translation).XY.m128d_f64[1];
  local_b8._s_0.Z = (param_2->Translation).ZW.m128d_f64[0];
  auVar16 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  dVar11 = (param_2->Rotation).ZW.m128d_f64[1];
  dVar3 = (param_2->Scale3D).XY.m128d_f64[0] * ___xmm_00000000000000003ff0000000000000;
  dVar5 = (param_2->Scale3D).XY.m128d_f64[1] * _UNK_150689518;
  uVar35 = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar37._8_4_ = SUB84(dVar5,0);
  auVar37._0_8_ = dVar3;
  auVar37._12_4_ = uVar35;
  auVar21 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
  dVar7 = (param_2->Scale3D).ZW.m128d_f64[0] * 0.0;
  dVar9 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
  auVar24 = blendpd(auVar16,auVar21,2);
  dVar26 = auVar21._0_8_;
  auVar38._0_8_ = auVar37._8_8_ * auVar16._0_8_ - auVar16._8_8_ * dVar3;
  auVar38._8_8_ = dVar7 * auVar16._8_8_ - dVar26 * dVar5;
  auVar25._8_4_ = SUB84(dVar5,0);
  auVar25._0_8_ = dVar3;
  auVar25._12_4_ = uVar35;
  auVar16._8_4_ = SUB84(dVar9,0);
  auVar16._0_8_ = dVar7;
  auVar16._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  auVar16 = blendpd(auVar25,auVar16,2);
  local_d8._s_0.Z = 0.0;
  dVar15 = auVar21._8_8_;
  auVar17._0_8_ = auVar16._0_8_ * dVar26 - auVar24._0_8_ * dVar7;
  auVar17._8_8_ = auVar16._8_8_ * dVar15 - auVar24._8_8_ * dVar9;
  auVar16 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar24 = blendpd(auVar38,auVar17,2);
  auVar39._0_8_ = auVar24._0_8_ + auVar24._0_8_;
  auVar39._8_8_ = auVar24._8_8_ + auVar24._8_8_;
  dVar9 = auVar38._8_8_ + auVar38._8_8_;
  dVar2 = auVar17._0_8_ + auVar17._0_8_;
  uVar35 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar31._8_4_ = SUB84(dVar2,0);
  auVar31._0_8_ = dVar9;
  auVar31._12_4_ = uVar35;
  auVar27._8_4_ = SUB84(dVar2,0);
  auVar27._0_8_ = dVar9;
  auVar27._12_4_ = uVar35;
  auVar24 = blendpd(auVar27,auVar39,2);
  auVar32._0_8_ = auVar31._8_8_ * auVar16._0_8_ - auVar16._8_8_ * dVar9;
  auVar32._8_8_ = auVar39._0_8_ * auVar16._8_8_ - dVar26 * dVar2;
  auVar18._8_4_ = SUB84(auVar32._8_8_,0);
  auVar18._0_8_ = auVar32._0_8_;
  auVar18._12_4_ = (int)((ulonglong)auVar32._8_8_ >> 0x20);
  dVar4 = (param_2->Scale3D).XY.m128d_f64[0] * ___xmm_3ff00000000000000000000000000000;
  dVar6 = (param_2->Scale3D).XY.m128d_f64[1] * _UNK_15061cbc8;
  uVar35 = (undefined4)((ulonglong)dVar6 >> 0x20);
  auVar16 = blendpd(auVar16,auVar21,2);
  auVar28._0_8_ = auVar24._0_8_ * dVar26 - auVar16._0_8_ * auVar39._0_8_;
  auVar28._8_8_ = auVar24._8_8_ * dVar15 - auVar16._8_8_ * auVar39._8_8_;
  dVar8 = (param_2->Scale3D).ZW.m128d_f64[0] * 0.0;
  dVar10 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar2 = dVar2 * dVar11 + dVar5 + auVar28._0_8_;
  local_d8._0_16_ = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar16 = blendpd(auVar32,auVar28,2);
  local_a0._s_0.Z = auVar39._0_8_ * dVar11 + dVar7 + auVar16._0_8_;
  auVar40._8_4_ = SUB84(dVar6,0);
  auVar40._0_8_ = dVar4;
  auVar40._12_4_ = uVar35;
  local_a0._8_4_ = SUB84(dVar2,0);
  local_a0._0_8_ = dVar9 * dVar11 + dVar3 + auVar18._8_8_;
  local_a0._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  auVar25 = blendpd(local_d8._0_16_,auVar21,2);
  auVar41._0_8_ = auVar40._8_8_ * local_d8._0_8_ - local_d8._8_8_ * dVar4;
  auVar41._8_8_ = dVar8 * local_d8._8_8_ - dVar26 * dVar6;
  auVar19._8_4_ = SUB84(dVar6,0);
  auVar19._0_8_ = dVar4;
  auVar19._12_4_ = uVar35;
  auVar24._8_4_ = SUB84(dVar10,0);
  auVar24._0_8_ = dVar8;
  auVar24._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  auVar16 = blendpd(auVar19,auVar24,2);
  auVar20._0_8_ = auVar16._0_8_ * dVar26 - auVar25._0_8_ * dVar8;
  auVar20._8_8_ = auVar16._8_8_ * dVar15 - auVar25._8_8_ * dVar10;
  auVar16 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar24 = blendpd(auVar41,auVar20,2);
  dVar9 = auVar41._8_8_ + auVar41._8_8_;
  dVar2 = auVar20._0_8_ + auVar20._0_8_;
  uVar35 = (undefined4)((ulonglong)dVar2 >> 0x20);
  auVar42._0_8_ = auVar24._0_8_ + auVar24._0_8_;
  auVar42._8_8_ = auVar24._8_8_ + auVar24._8_8_;
  auVar33._8_4_ = SUB84(dVar2,0);
  auVar33._0_8_ = dVar9;
  auVar33._12_4_ = uVar35;
  auVar29._8_4_ = SUB84(dVar2,0);
  auVar29._0_8_ = dVar9;
  auVar29._12_4_ = uVar35;
  auVar24 = blendpd(auVar29,auVar42,2);
  auVar34._0_8_ = auVar33._8_8_ * auVar16._0_8_ - auVar16._8_8_ * dVar9;
  auVar34._8_8_ = auVar42._0_8_ * auVar16._8_8_ - dVar26 * dVar2;
  auVar16 = blendpd(auVar16,auVar21,2);
  auVar21._8_4_ = SUB84(auVar34._8_8_,0);
  auVar21._0_8_ = auVar34._0_8_;
  auVar21._12_4_ = (int)((ulonglong)auVar34._8_8_ >> 0x20);
  auVar30._0_8_ = auVar24._0_8_ * dVar26 - auVar16._0_8_ * auVar42._0_8_;
  auVar30._8_8_ = auVar24._8_8_ * dVar15 - auVar16._8_8_ * auVar42._8_8_;
  dVar26 = dVar2 * dVar15 + dVar6 + auVar30._0_8_;
  auVar16 = blendpd(auVar34,auVar30,2);
  local_88[0]._16_8_ = auVar42._0_8_ * dVar15 + dVar8 + auVar16._0_8_;
  local_f8 = (undefined1  [8])0x0;
  _fStack_f0 = 0.0;
  local_88[0]._8_4_ = SUB84(dVar26,0);
  local_88[0]._0_8_ = dVar9 * dVar15 + dVar4 + auVar21._8_8_;
  local_88[0]._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
  local_e8 = __real_3ff0000000000000;
  UE::Math::TTransform<double>::TransformVector
            (param_2,(TVector<double> *)&local_d8._s_0,(TVector<double> *)local_f8);
  uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
  dVar26 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  uVar1 = *(undefined8 *)((longlong)&param_3->field0_0x0 + 0x10);
  dVar15 = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_3->field0_0x0 >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            (uint)*(undefined8 *)&param_3->field0_0x0 &
                            (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  uVar13 = (ulonglong)param_4.field0_0x0._s_0.R;
  if (dVar15 <= dVar26) {
    dVar26 = dVar15;
  }
  uVar14 = (ulonglong)param_4.field0_0x0._s_0.G;
  uVar22 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar23 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar12 = (ulonglong)param_4.field0_0x0._s_0.B;
  if ((double)CONCAT44(uVar23,uVar22) <= dVar26) {
    dVar26 = (double)CONCAT44(uVar23,uVar22);
  }
  local_f8._4_4_ = FLinearColor::sRGBToLinearTable[uVar14];
  local_f8._0_4_ = FLinearColor::sRGBToLinearTable[uVar13];
  fVar43 = (float)dVar26;
  fVar36 = (float)((uint)param_4.field0_0x0 >> 0x18) * __real_3b808081;
  fStack_ec = fVar36;
  fStack_f0 = FLinearColor::sRGBToLinearTable[uVar12];
  DrawCircle(param_1,(TVector<double> *)&local_b8._s_0,(TVector<double> *)&local_a0._s_0,
             (TVector<double> *)&local_88[0]._s_0,(FLinearColor *)local_f8,
             (double)(fVar43 * this->Radius),0x20,'\0',0.0,0.0,false);
  local_f8._4_4_ = FLinearColor::sRGBToLinearTable[uVar14];
  local_f8._0_4_ = FLinearColor::sRGBToLinearTable[uVar13];
  fStack_f0 = FLinearColor::sRGBToLinearTable[uVar12];
  DrawCircle(param_1,(TVector<double> *)&local_b8._s_0,(TVector<double> *)&local_a0._s_0,
             (TVector<double> *)&local_d8._s_0,(FLinearColor *)local_f8,
             (double)(fVar43 * this->Radius),0x20,'\0',0.0,0.0,false);
  local_f8._4_4_ = FLinearColor::sRGBToLinearTable[uVar14];
  local_f8._0_4_ = FLinearColor::sRGBToLinearTable[uVar13];
  fStack_f0 = FLinearColor::sRGBToLinearTable[uVar12];
  DrawCircle(param_1,(TVector<double> *)&local_b8._s_0,(TVector<double> *)&local_88[0]._s_0,
             (TVector<double> *)&local_d8._s_0,(FLinearColor *)local_f8,
             (double)(fVar43 * this->Radius),0x20,'\0',0.0,0.0,false);
  return;
}

// DrawElemWire @ 1482fbb30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FKSphereElem::DrawElemWire
          (FKSphereElem *this,FPrimitiveDrawInterface *param_1,TTransform<double> *param_2,
          float param_3,FColor param_4)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.Z = (double)param_3;
  local_28._8_4_ = SUB84(local_28._s_0.Z,0);
  local_28._0_8_ = local_28._s_0.Z;
  local_28._12_4_ = (int)((ulonglong)local_28._s_0.Z >> 0x20);
  DrawElemWire(this,param_1,param_2,(TVector<double> *)&local_28._s_0,param_4);
  return;
}

// GetElemSolid @ 148309680

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FKSphereElem::GetElemSolid
          (FKSphereElem *this,TTransform<double> *param_1,TVector<double> *param_2,
          FMaterialRenderProxy *param_3,int param_4,FMeshElementCollector *param_5)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  TVector<double>_u_0 local_38;
  TVector<double>_u_0 local_20;
  
  uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  uVar4 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar5 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x10);
  uVar2 = (uint)*(undefined8 *)&param_2->field0_0x0 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar3 = (uint)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20) &
          __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((double)CONCAT44(uVar3,uVar2) <= (double)CONCAT44(uVar5,uVar4)) {
    uVar4 = uVar2;
    uVar5 = uVar3;
  }
  uVar2 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar3 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((double)CONCAT44(uVar3,uVar2) <= (double)CONCAT44(uVar5,uVar4)) {
    uVar4 = uVar2;
    uVar5 = uVar3;
  }
  local_20._s_0.Z = (param_1->Translation).ZW.m128d_f64[0];
  local_38._s_0.Z = (double)CONCAT44(uVar5,uVar4) * (double)this->Radius;
  local_20._s_0.X = (param_1->Translation).XY.m128d_f64[0];
  local_20._s_0.Y = (param_1->Translation).XY.m128d_f64[1];
  local_38._8_4_ = SUB84(local_38._s_0.Z,0);
  local_38._0_8_ = local_38._s_0.Z;
  local_38._12_4_ = (int)((ulonglong)local_38._s_0.Z >> 0x20);
  GetSphereMesh((TVector<double> *)&local_20._s_0,(TVector<double> *)&local_38._s_0,0x20,0x10,
                param_3,'\0',false,param_4,param_5);
  return;
}

