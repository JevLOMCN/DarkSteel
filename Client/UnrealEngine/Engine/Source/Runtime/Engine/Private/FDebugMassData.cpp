// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// DrawDebugMass @ 1483fcdf0

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
FPrimitiveSceneProxy::FDebugMassData::DrawDebugMass
          (FDebugMassData *this,FPrimitiveDrawInterface *param_1,TTransform<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [12];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 uVar28;
  uint uVar29;
  uint uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  FLinearColor_u_0 *pFVar36;
  ulonglong uVar37;
  FLinearColor_u_0 local_148;
  TVector<double>_u_0 local_138;
  double local_120;
  double local_118;
  double local_110;
  undefined1 local_108 [16];
  double local_f8;
  TVector<double>_u_0 local_e8;
  TVector<double>_u_0 local_d0;
  TVector<double>_u_0 local_b8 [7];
  
  dVar13 = __real_402e000000000000;
  dVar8 = __real_3ff0000000000000;
  dVar24 = (this->LocalTensorOrientation).Z;
  dVar1 = (this->LocalTensorOrientation).W;
  dVar35 = (param_2->Rotation).XY.m128d_f64[0];
  dVar7 = (param_2->Rotation).XY.m128d_f64[1];
  dVar10 = (this->LocalTensorOrientation).X;
  dVar11 = (this->LocalTensorOrientation).Y;
  auVar27 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
  dVar2 = (this->LocalCenterOfMass).field0_0x0._s_0.Z * (param_2->Scale3D).ZW.m128d_f64[0];
  dVar3 = (param_2->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar20 = auVar27._8_8_;
  dVar19 = auVar27._0_8_;
  auVar17._8_4_ = auVar27._0_4_;
  auVar17._0_8_ = dVar19;
  auVar17._12_4_ = auVar27._4_4_;
  dVar12 = (param_2->Rotation).ZW.m128d_f64[1];
  auVar27 = *(undefined1 (*) [16])(param_2->Rotation).ZW.m128d_f64;
  dVar4 = dVar35 * dVar1 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
          dVar10 * dVar20 +
          dVar24 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
          dVar19 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar5 = dVar35 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
          dVar11 * dVar20 +
          dVar1 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
          auVar17._8_8_ * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar6 = dVar35 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
          dVar24 * dVar20 +
          dVar10 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
          dVar19 * dVar1 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar7 = dVar35 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
          dVar1 * dVar20 +
          dVar11 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
          dVar19 * dVar24 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  dVar1 = (param_2->Scale3D).XY.m128d_f64[0] * (this->LocalCenterOfMass).field0_0x0._s_0.X;
  dVar35 = (param_2->Scale3D).XY.m128d_f64[1] * (this->LocalCenterOfMass).field0_0x0._s_0.Y;
  uVar28 = (undefined4)((ulonglong)dVar35 >> 0x20);
  local_108 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  auVar17 = blendpd(local_108,auVar27,2);
  auVar31._8_4_ = SUB84(dVar35,0);
  auVar31._0_8_ = dVar1;
  auVar31._12_4_ = uVar28;
  dVar19 = auVar27._0_8_;
  auVar32._0_8_ = auVar31._8_8_ * local_108._0_8_ - local_108._8_8_ * dVar1;
  auVar32._8_8_ = dVar2 * local_108._8_8_ - dVar19 * dVar35;
  auVar22._8_4_ = SUB84(dVar35,0);
  auVar22._0_8_ = dVar1;
  auVar22._12_4_ = uVar28;
  auVar14._8_4_ = SUB84(dVar3,0);
  auVar14._0_8_ = dVar2;
  auVar14._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  auVar14 = blendpd(auVar22,auVar14,2);
  auVar15._0_8_ = auVar14._0_8_ * dVar19 - auVar17._0_8_ * dVar2;
  auVar15._8_8_ = auVar14._8_8_ * auVar27._8_8_ - auVar17._8_8_ * dVar3;
  auVar14 = *(undefined1 (*) [16])(param_2->Rotation).XY.m128d_f64;
  dVar20 = auVar32._8_8_ + auVar32._8_8_;
  dVar24 = auVar15._0_8_ + auVar15._0_8_;
  uVar28 = (undefined4)((ulonglong)dVar24 >> 0x20);
  auVar17 = blendpd(auVar32,auVar15,2);
  auVar33._0_8_ = auVar17._0_8_ + auVar17._0_8_;
  auVar33._8_8_ = auVar17._8_8_ + auVar17._8_8_;
  auVar25._8_4_ = SUB84(dVar24,0);
  auVar25._0_8_ = dVar20;
  auVar25._12_4_ = uVar28;
  auVar21._8_4_ = SUB84(dVar24,0);
  auVar21._0_8_ = dVar20;
  auVar21._12_4_ = uVar28;
  auVar22 = blendpd(auVar21,auVar33,2);
  auVar17 = blendpd(auVar14,auVar27,2);
  auVar26._0_8_ = auVar25._8_8_ * auVar14._0_8_ - auVar14._8_8_ * dVar20;
  auVar26._8_8_ = auVar33._0_8_ * auVar14._8_8_ - dVar19 * dVar24;
  auVar16._8_4_ = SUB84(auVar26._8_8_,0);
  auVar16._0_8_ = auVar26._0_8_;
  auVar16._12_4_ = (int)((ulonglong)auVar26._8_8_ >> 0x20);
  auVar23._0_8_ = auVar22._0_8_ * dVar19 - auVar17._0_8_ * auVar33._0_8_;
  auVar23._8_8_ = auVar22._8_8_ * auVar27._8_8_ - auVar17._8_8_ * auVar33._8_8_;
  auVar27 = blendpd(auVar26,auVar23,2);
  uVar29 = (uint)__xmm_80000000000000008000000000000000;
  uVar30 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  local_138._s_0.Z =
       auVar33._0_8_ * dVar12 + dVar2 + auVar27._0_8_ + (param_2->Translation).ZW.m128d_f64[0];
  dVar19 = dVar24 * dVar12 + dVar35 + auVar23._0_8_ + (param_2->Translation).XY.m128d_f64[1];
  dVar24 = dVar6 + dVar6;
  auVar9._4_8_ = auVar33._8_8_ * dVar12 + dVar3 + auVar27._8_8_ +
                 (param_2->Translation).ZW.m128d_f64[1];
  auVar9._0_4_ = (int)((ulonglong)dVar4 >> 0x20);
  auVar34._0_8_ = auVar9._0_8_ << 0x20;
  auVar34._8_4_ = SUB84(dVar5,0);
  auVar34._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  dVar35 = auVar34._8_8_;
  local_138._8_4_ = SUB84(dVar19,0);
  local_138._s_0.X =
       dVar20 * dVar12 + dVar1 + auVar16._8_8_ + (param_2->Translation).XY.m128d_f64[0];
  local_138._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
  dVar19 = (double)CONCAT44((uint)((ulonglong)(dVar35 + dVar35) >> 0x20) ^ uVar30,
                            SUB84(dVar35 + dVar35,0) ^ uVar29);
  local_d0._s_0.X = (dVar19 * dVar35 - dVar24 * dVar6) + __real_3ff0000000000000;
  local_d0._s_0.Z = dVar24 * dVar4 + dVar19 * dVar7;
  dVar20 = dVar4 + dVar4;
  local_d0._s_0.Y = dVar24 * dVar7 - dVar19 * dVar4;
  dVar19 = (double)CONCAT44((uint)((ulonglong)(dVar6 + dVar6) >> 0x20) ^ uVar30,
                            SUB84(dVar6 + dVar6,0) ^ uVar29);
  local_e8._s_0.X = dVar20 * dVar35 + dVar19 * dVar7;
  local_e8._s_0.Z = dVar20 * dVar7 - dVar19 * dVar35;
  dVar24 = dVar35 + dVar35;
  local_e8._s_0.Y = (dVar19 * dVar6 - dVar20 * dVar4) + __real_3ff0000000000000;
  dVar19 = (double)CONCAT44((uint)((ulonglong)(dVar4 + dVar4) >> 0x20) ^ uVar30,
                            SUB84(dVar4 + dVar4,0) ^ uVar29);
  local_148._s_0.A = 1.0;
  local_b8[0]._0_8_ = dVar24 * dVar7 - dVar19 * dVar6;
  local_b8[0]._8_8_ = dVar24 * dVar6 + dVar19 * dVar7;
  local_148._s_0.R = FLinearColor::sRGBToLinearTable[0xff];
  local_148._s_0.G = FLinearColor::sRGBToLinearTable[0xff];
  local_b8[0]._16_8_ = (dVar19 * dVar4 - dVar24 * dVar35) + __real_3ff0000000000000;
  local_148._s_0.B = FLinearColor::sRGBToLinearTable[100];
  DrawCircle(param_1,(TVector<double> *)&local_138._s_0,(TVector<double> *)&local_d0._s_0,
             (TVector<double> *)&local_e8._s_0,(FLinearColor *)&local_148._s_0,
             __real_402e000000000000,0x19,'\0',0.0,0.0,false);
  pFVar36 = &local_148;
  local_148._s_0.R = FLinearColor::sRGBToLinearTable[0xff];
  local_148._s_0.G = FLinearColor::sRGBToLinearTable[0xff];
  local_148._s_0.B = FLinearColor::sRGBToLinearTable[100];
  local_148._s_0.A = 1.0;
  DrawCircle(param_1,(TVector<double> *)&local_138._s_0,(TVector<double> *)&local_b8[0]._s_0,
             (TVector<double> *)&local_e8._s_0,(FLinearColor *)&pFVar36->_s_0,dVar13,0x19,'\0',0.0,
             0.0,false);
  dVar1 = __real_400bb67ae0000000;
  dVar19 = (this->MassSpaceInertiaTensor).field0_0x0._s_0.X;
  dVar20 = (this->MassSpaceInertiaTensor).field0_0x0._s_0.Y;
  dVar24 = (this->MassSpaceInertiaTensor).field0_0x0._s_0.Z;
  auVar27._0_8_ = dVar19 * dVar19;
  auVar27._8_8_ = 0;
  local_148._s_0.A = 1.0;
  auVar18._0_8_ = dVar20 * dVar20 + auVar27._0_8_ + dVar24 * dVar24;
  auVar18._8_8_ = 0;
  auVar27 = sqrtpd(auVar27,auVar18);
  dVar35 = auVar27._0_8_;
  if (auVar27._0_8_ <= __real_3f1a36e2e0000000) {
    dVar35 = __real_3f1a36e2e0000000;
  }
  dVar8 = dVar8 / (double)(float)dVar35;
  local_148._s_0.G = FLinearColor::sRGBToLinearTable[0];
  local_148._s_0.B = FLinearColor::sRGBToLinearTable[0];
  local_148._s_0.R = FLinearColor::sRGBToLinearTable[0xff];
  local_120 = local_138._s_0.X - local_d0._s_0.X * dVar13;
  local_108._0_8_ = local_138._s_0.X + local_d0._s_0.X * dVar13;
  local_118 = local_138._s_0.Y - local_d0._s_0.Y * dVar13;
  local_108._8_8_ = local_138._s_0.Y + local_d0._s_0.Y * dVar13;
  local_110 = local_138._s_0.Z - local_d0._s_0.Z * dVar13;
  local_f8 = local_138._s_0.Z + local_d0._s_0.Z * dVar13;
  uVar37 = (ulonglong)pFVar36 & 0xffffffffffffff00;
  (**(code **)(param_1->_padding_ + 0x30))
            (param_1,local_108,&local_120,&local_148,uVar37,
             (float)(dVar19 * __real_400bb67ae0000000 * dVar8),0,0);
  local_148._s_0.G = FLinearColor::sRGBToLinearTable[0xff];
  local_148._s_0.A = 1.0;
  local_108._0_8_ = local_138._s_0.X - local_e8._s_0.X * dVar13;
  local_148._s_0.R = FLinearColor::sRGBToLinearTable[0];
  local_120 = local_138._s_0.X + local_e8._s_0.X * dVar13;
  local_148._s_0.B = FLinearColor::sRGBToLinearTable[0];
  local_108._8_8_ = local_138._s_0.Y - local_e8._s_0.Y * dVar13;
  local_f8 = local_138._s_0.Z - local_e8._s_0.Z * dVar13;
  local_118 = local_138._s_0.Y + local_e8._s_0.Y * dVar13;
  local_110 = local_138._s_0.Z + local_e8._s_0.Z * dVar13;
  uVar37 = uVar37 & 0xffffffffffffff00;
  (**(code **)(param_1->_padding_ + 0x30))
            (param_1,&local_120,local_108,&local_148,uVar37,(float)(dVar20 * dVar1 * dVar8),0,0);
  local_148._s_0.R = FLinearColor::sRGBToLinearTable[0];
  local_148._s_0.G = FLinearColor::sRGBToLinearTable[0];
  local_148._s_0.B = FLinearColor::sRGBToLinearTable[0xff];
  local_148._s_0.A = 1.0;
  local_120 = local_138._s_0.X + (double)local_b8[0]._0_8_ * dVar13;
  local_118 = local_138._s_0.Y + (double)local_b8[0]._8_8_ * dVar13;
  local_f8 = local_138._s_0.Z - (double)local_b8[0]._16_8_ * dVar13;
  local_110 = local_138._s_0.Z + (double)local_b8[0]._16_8_ * dVar13;
  local_108._8_8_ = local_138._s_0.Y - (double)local_b8[0]._8_8_ * dVar13;
  local_108._0_8_ = local_138._s_0.X - (double)local_b8[0]._0_8_ * dVar13;
  (**(code **)(param_1->_padding_ + 0x30))
            (param_1,&local_120,local_108,&local_148,uVar37 & 0xffffffffffffff00,
             (float)(dVar24 * dVar1 * dVar8),0,0);
  return;
}

