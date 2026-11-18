// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCaching
// Functions: 2

// StaticStruct @ 14dadb350

UScriptStruct * __cdecl FBreakingEvent::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBreakingEvent.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosCaching();
    Z_Registration_Info_UScriptStruct_FBreakingEvent.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBreakingEvent,(UObject *)pUVar1,L"BreakingEvent"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FBreakingEvent.OuterSingleton;
}

// FBreakingEvent @ 14dae6320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FBreakingEvent * __thiscall
FBreakingEvent::FBreakingEvent
          (FBreakingEvent *this,int param_1,FBreakingData *param_2,TTransform<double> *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  TMatrix<double> *pTVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined4 uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auStack_188 [32];
  TVector<double>_u_0 local_168;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined1 local_138;
  TVector<double>_u_0 local_128;
  double local_110;
  double dStack_108;
  double local_100;
  TMatrix<double> local_e8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_188;
  this->Index = param_1;
  *(undefined ***)this = &___7FBreakingEvent__6B_;
  auVar40 = *(undefined1 (*) [16])(param_3->Rotation).ZW.m128d_f64;
  dVar11 = *(double *)&(param_2->Location).field_0x10 * (param_3->Scale3D).ZW.m128d_f64[0];
  dVar12 = (param_3->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar1 = (param_3->Rotation).ZW.m128d_f64[1];
  dVar6 = (param_3->Scale3D).XY.m128d_f64[0] * *(double *)&param_2->Location;
  dVar7 = (param_3->Scale3D).XY.m128d_f64[1] * *(double *)&(param_2->Location).field_0x8;
  uVar41 = (undefined4)((ulonglong)dVar7 >> 0x20);
  auVar21 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
  auVar29 = blendpd(auVar21,auVar40,2);
  auVar42._8_4_ = SUB84(dVar7,0);
  auVar42._0_8_ = dVar6;
  auVar42._12_4_ = uVar41;
  dVar5 = auVar40._0_8_;
  auVar43._0_8_ = auVar42._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar6;
  auVar43._8_8_ = dVar11 * auVar21._8_8_ - dVar5 * dVar7;
  auVar20._8_4_ = SUB84(dVar7,0);
  auVar20._0_8_ = dVar6;
  auVar20._12_4_ = uVar41;
  auVar33._8_4_ = SUB84(dVar12,0);
  auVar33._0_8_ = dVar11;
  auVar33._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  auVar21 = blendpd(auVar20,auVar33,2);
  auVar22._0_8_ = auVar21._0_8_ * dVar5 - auVar29._0_8_ * dVar11;
  auVar22._8_8_ = auVar21._8_8_ * auVar40._8_8_ - auVar29._8_8_ * dVar12;
  auVar21 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
  auVar29 = blendpd(auVar43,auVar22,2);
  dVar12 = auVar43._8_8_ + auVar43._8_8_;
  dVar4 = auVar22._0_8_ + auVar22._0_8_;
  uVar41 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar44._0_8_ = auVar29._0_8_ + auVar29._0_8_;
  auVar44._8_8_ = auVar29._8_8_ + auVar29._8_8_;
  auVar35._8_4_ = SUB84(dVar4,0);
  auVar35._0_8_ = dVar12;
  auVar35._12_4_ = uVar41;
  auVar30._8_4_ = SUB84(dVar4,0);
  auVar30._0_8_ = dVar12;
  auVar30._12_4_ = uVar41;
  auVar29 = blendpd(auVar30,auVar44,2);
  auVar36._0_8_ = auVar35._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar12;
  auVar36._8_8_ = auVar44._0_8_ * auVar21._8_8_ - dVar5 * dVar4;
  auVar23._8_4_ = SUB84(auVar36._8_8_,0);
  auVar23._0_8_ = auVar36._0_8_;
  auVar23._12_4_ = (int)((ulonglong)auVar36._8_8_ >> 0x20);
  auVar21 = blendpd(auVar21,auVar40,2);
  dVar2 = (param_3->Translation).ZW.m128d_f64[0];
  auVar31._0_8_ = auVar29._0_8_ * dVar5 - auVar21._0_8_ * auVar44._0_8_;
  auVar31._8_8_ = auVar29._8_8_ * auVar40._8_8_ - auVar21._8_8_ * auVar44._8_8_;
  auVar21 = blendpd(auVar36,auVar31,2);
  dVar5 = dVar4 * dVar1 + dVar7 + auVar31._0_8_ + (param_3->Translation).XY.m128d_f64[1];
  auVar40._8_4_ = SUB84(dVar5,0);
  auVar40._0_8_ = dVar12 * dVar1 + dVar6 + auVar23._8_8_ + (param_3->Translation).XY.m128d_f64[0];
  auVar40._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])&(this->Location).field0_0x0 = auVar40;
  (this->Location).field0_0x0._s_0.Z = auVar44._0_8_ * dVar1 + dVar11 + auVar21._0_8_ + dVar2;
  auVar40 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
  auVar21 = *(undefined1 (*) [16])(param_3->Rotation).ZW.m128d_f64;
  dVar15 = *(double *)&param_2->Orientation;
  dVar16 = *(double *)&(param_2->Orientation).field_0x8;
  dVar17 = *(double *)&(param_2->Orientation).field_0x10;
  dVar18 = *(double *)&(param_2->Orientation).field_0x18;
  dVar8 = auVar40._0_8_;
  dVar14 = auVar21._8_8_;
  auVar37._8_4_ = auVar40._0_4_;
  auVar37._0_8_ = dVar8;
  auVar37._12_4_ = auVar40._4_4_;
  auVar24._8_4_ = auVar21._8_4_;
  auVar24._0_8_ = dVar14;
  auVar24._12_4_ = auVar21._12_4_;
  dVar6 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
  dVar10 = auVar40._8_8_;
  dVar13 = auVar21._0_8_;
  dVar5 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
  dVar12 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar1 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  auVar25._8_4_ = auVar21._0_4_;
  auVar25._0_8_ = dVar13;
  auVar25._12_4_ = auVar21._4_4_;
  dVar2 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar4 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar3 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  (this->Orientation).X =
       dVar8 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar14 * dVar15 +
       dVar10 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar13 * dVar16 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  (this->Orientation).Y =
       auVar37._8_8_ * dVar17 * dVar6 + auVar24._8_8_ * dVar16 + dVar10 * dVar18 * dVar11 +
       auVar25._8_8_ * dVar15 * dVar2;
  dVar5 = dVar8 * dVar16 * dVar5 + dVar14 * dVar17 + dVar10 * dVar15 * dVar12 +
          dVar13 * dVar18 * dVar4;
  dVar12 = dVar8 * dVar15 * dVar7 + dVar14 * dVar18 + dVar10 * dVar16 * dVar1 +
           dVar13 * dVar17 * dVar3;
  auVar29._8_4_ = SUB84(dVar12,0);
  auVar29._0_8_ = dVar5;
  auVar29._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  (this->Orientation).Z = dVar5;
  (this->Orientation).W = (double)auVar29._8_8_;
  auVar40 = *(undefined1 (*) [16])(param_3->Rotation).ZW.m128d_f64;
  dVar11 = *(double *)&(param_2->Velocity).field_0x10 * (param_3->Scale3D).ZW.m128d_f64[0];
  dVar12 = (param_3->Scale3D).ZW.m128d_f64[1] * 0.0;
  dVar1 = (param_3->Rotation).ZW.m128d_f64[1];
  dVar6 = (param_3->Scale3D).XY.m128d_f64[0] * *(double *)&param_2->Velocity;
  dVar7 = (param_3->Scale3D).XY.m128d_f64[1] * *(double *)&(param_2->Velocity).field_0x8;
  uVar41 = (undefined4)((ulonglong)dVar7 >> 0x20);
  auVar21 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
  auVar29 = blendpd(auVar21,auVar40,2);
  auVar45._8_4_ = SUB84(dVar7,0);
  auVar45._0_8_ = dVar6;
  auVar45._12_4_ = uVar41;
  dVar5 = auVar40._0_8_;
  auVar46._0_8_ = auVar45._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar6;
  auVar46._8_8_ = dVar11 * auVar21._8_8_ - dVar5 * dVar7;
  auVar26._8_4_ = SUB84(dVar7,0);
  auVar26._0_8_ = dVar6;
  auVar26._12_4_ = uVar41;
  auVar9._8_4_ = SUB84(dVar12,0);
  auVar9._0_8_ = dVar11;
  auVar9._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  auVar21 = blendpd(auVar26,auVar9,2);
  auVar27._0_8_ = auVar21._0_8_ * dVar5 - auVar29._0_8_ * dVar11;
  auVar27._8_8_ = auVar21._8_8_ * auVar40._8_8_ - auVar29._8_8_ * dVar12;
  auVar21 = *(undefined1 (*) [16])(param_3->Rotation).XY.m128d_f64;
  auVar29 = blendpd(auVar46,auVar27,2);
  dVar12 = auVar46._8_8_ + auVar46._8_8_;
  dVar4 = auVar27._0_8_ + auVar27._0_8_;
  uVar41 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar47._0_8_ = auVar29._0_8_ + auVar29._0_8_;
  auVar47._8_8_ = auVar29._8_8_ + auVar29._8_8_;
  auVar38._8_4_ = SUB84(dVar4,0);
  auVar38._0_8_ = dVar12;
  auVar38._12_4_ = uVar41;
  auVar32._8_4_ = SUB84(dVar4,0);
  auVar32._0_8_ = dVar12;
  auVar32._12_4_ = uVar41;
  auVar33 = blendpd(auVar32,auVar47,2);
  auVar29 = blendpd(auVar21,auVar40,2);
  auVar39._0_8_ = auVar38._8_8_ * auVar21._0_8_ - auVar21._8_8_ * dVar12;
  auVar39._8_8_ = auVar47._0_8_ * auVar21._8_8_ - dVar5 * dVar4;
  auVar34._0_8_ = auVar33._0_8_ * dVar5 - auVar29._0_8_ * auVar47._0_8_;
  auVar34._8_8_ = auVar33._8_8_ * auVar40._8_8_ - auVar29._8_8_ * auVar47._8_8_;
  auVar28._8_4_ = SUB84(auVar39._8_8_,0);
  auVar28._0_8_ = auVar39._0_8_;
  auVar28._12_4_ = (int)((ulonglong)auVar39._8_8_ >> 0x20);
  dVar5 = dVar4 * dVar1 + dVar7 + auVar34._0_8_;
  auVar40 = blendpd(auVar39,auVar34,2);
  auVar21._8_4_ = SUB84(dVar5,0);
  auVar21._0_8_ = dVar12 * dVar1 + dVar6 + auVar28._8_8_;
  auVar21._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])&(this->Velocity).field0_0x0 = auVar21;
  (this->Velocity).field0_0x0._s_0.Z = auVar47._0_8_ * dVar1 + dVar11 + auVar40._0_8_;
  dVar5 = *(double *)&(param_2->AngularVelocity).field_0x8;
  (this->AngularVelocity).field0_0x0._s_0.X = *(double *)&param_2->AngularVelocity;
  (this->AngularVelocity).field0_0x0._s_0.Y = dVar5;
  (this->AngularVelocity).field0_0x0._s_0.Z = *(double *)&(param_2->AngularVelocity).field_0x10;
  this->Mass = (float)param_2->Mass;
  dVar5 = *(double *)&(param_2->BoundingBox).MMin.field_0x8;
  (this->BoundingBoxMin).field0_0x0._s_0.X = *(double *)&(param_2->BoundingBox).MMin;
  (this->BoundingBoxMin).field0_0x0._s_0.Y = dVar5;
  (this->BoundingBoxMin).field0_0x0._s_0.Z = *(double *)&(param_2->BoundingBox).MMin.field_0x10;
  dVar5 = *(double *)&(param_2->BoundingBox).MMax.field_0x8;
  local_138 = 1;
  (this->BoundingBoxMax).field0_0x0._s_0.X = *(double *)&(param_2->BoundingBox).MMax;
  (this->BoundingBoxMax).field0_0x0._s_0.Y = dVar5;
  local_168._0_16_ = *(undefined1 (*) [16])&(this->BoundingBoxMin).field0_0x0;
  (this->BoundingBoxMax).field0_0x0._s_0.Z = *(double *)&(param_2->BoundingBox).MMax.field_0x10;
  local_168._s_0.Z = (this->BoundingBoxMin).field0_0x0._s_0.Z;
  local_150 = *(undefined8 *)&(param_2->BoundingBox).MMax;
  uStack_148 = *(undefined8 *)&(param_2->BoundingBox).MMax.field_0x8;
  local_140 = *(undefined8 *)&(param_2->BoundingBox).MMax.field_0x10;
  pTVar19 = UE::Math::TTransform<double>::ToMatrixWithScale(param_3,&local_e8);
  UE::Math::TBox<double>::TransformBy
            ((TBox<double> *)&local_168._s_0,(TBox<double> *)&local_128._s_0,pTVar19);
  (this->BoundingBoxMin).field0_0x0._s_0.X = local_128._s_0.X;
  (this->BoundingBoxMin).field0_0x0._s_0.Y = local_128._s_0.Y;
  (this->BoundingBoxMin).field0_0x0._s_0.Z = local_128._s_0.Z;
  (this->BoundingBoxMax).field0_0x0._s_0.X = local_110;
  (this->BoundingBoxMax).field0_0x0._s_0.Y = dStack_108;
  (this->BoundingBoxMax).field0_0x0._s_0.Z = local_100;
  return this;
}

