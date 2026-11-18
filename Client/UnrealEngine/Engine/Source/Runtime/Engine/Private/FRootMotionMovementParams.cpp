// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// StaticStruct @ 1473cad70

UScriptStruct * __cdecl FRootMotionMovementParams::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRootMotionMovementParams.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FRootMotionMovementParams.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionMovementParams,(UObject *)pUVar1,
                         L"RootMotionMovementParams");
  }
  return Z_Registration_Info_UScriptStruct_FRootMotionMovementParams.OuterSingleton;
}

// AccumulateWithBlend @ 14743ce00

void __thiscall
FRootMotionMovementParams::AccumulateWithBlend
          (FRootMotionMovementParams *this,TTransform<double> *param_1,float param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  uint uVar36;
  double dVar37;
  double dVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  uint uVar35;
  
  dVar12 = (double)param_2;
  dVar13 = (double)param_2;
  uVar39 = SUB84(dVar13,0);
  uVar40 = (undefined4)((ulonglong)dVar13 >> 0x20);
  dVar16 = (double)param_2;
  dVar17 = (double)param_2;
  if (this->bHasRootMotion == false) {
    dVar8 = (param_1->Rotation).XY.m128d_f64[0];
    dVar9 = (param_1->Rotation).XY.m128d_f64[1];
    auVar32._8_4_ = uVar39;
    auVar32._0_8_ = dVar12;
    auVar32._12_4_ = uVar40;
    dVar37 = (param_1->Rotation).ZW.m128d_f64[0];
    dVar5 = (param_1->Rotation).ZW.m128d_f64[1];
    dVar38 = (param_1->Scale3D).XY.m128d_f64[0];
    dVar18 = (param_1->Scale3D).XY.m128d_f64[1];
    dVar19 = (param_1->Scale3D).ZW.m128d_f64[0];
    dVar20 = (param_1->Scale3D).ZW.m128d_f64[1];
    dVar21 = (param_1->Translation).XY.m128d_f64[0];
    dVar22 = (param_1->Translation).XY.m128d_f64[1];
    dVar23 = (param_1->Translation).ZW.m128d_f64[0];
    dVar6 = (param_1->Translation).ZW.m128d_f64[1];
    this->bHasRootMotion = true;
    (this->RootMotionTransform).Rotation.XY.m128d_f64[0] = dVar12 * dVar8;
    (this->RootMotionTransform).Rotation.XY.m128d_f64[1] = auVar32._8_8_ * dVar9;
    dVar5 = dVar17 * dVar5;
    auVar33._8_4_ = uVar39;
    auVar33._0_8_ = dVar12;
    auVar33._12_4_ = uVar40;
    auVar3._8_4_ = SUB84(dVar5,0);
    auVar3._0_8_ = dVar16 * dVar37;
    auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    *(undefined1 (*) [16])(this->RootMotionTransform).Rotation.ZW.m128d_f64 = auVar3;
    dVar6 = dVar17 * dVar6;
    (this->RootMotionTransform).Translation.XY.m128d_f64[0] = dVar12 * dVar21;
    (this->RootMotionTransform).Translation.XY.m128d_f64[1] = auVar33._8_8_ * dVar22;
    auVar4._8_4_ = SUB84(dVar6,0);
    auVar4._0_8_ = dVar16 * dVar23;
    auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(this->RootMotionTransform).Translation.ZW.m128d_f64 = auVar4;
    dVar13 = dVar13 * dVar18;
    dVar17 = dVar17 * dVar20;
    auVar11._8_4_ = SUB84(dVar13,0);
    auVar11._0_8_ = dVar12 * dVar38;
    auVar11._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    *(undefined1 (*) [16])(this->RootMotionTransform).Scale3D.XY.m128d_f64 = auVar11;
    auVar15._8_4_ = SUB84(dVar17,0);
    auVar15._0_8_ = dVar16 * dVar19;
    auVar15._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
    *(undefined1 (*) [16])(this->RootMotionTransform).Scale3D.ZW.m128d_f64 = auVar15;
    uVar25 = RootMotionScale.field0_0x0._s_0.Z;
    uVar24 = RootMotionScale.field0_0x0._s_0.Y;
    (this->RootMotionTransform).Scale3D.XY.m128d_f64[0] = RootMotionScale.field0_0x0._s_0.X;
    (this->RootMotionTransform).Scale3D.XY.m128d_f64[1] = (double)uVar24;
    (this->RootMotionTransform).Scale3D.ZW.m128d_f64[0] = (double)uVar25;
    (this->RootMotionTransform).Scale3D.ZW.m128d_f64[1] = 0.0;
  }
  else {
    dVar37 = dVar12 * (param_1->Rotation).XY.m128d_f64[0];
    dVar38 = dVar13 * (param_1->Rotation).XY.m128d_f64[1];
    dVar8 = dVar16 * (param_1->Rotation).ZW.m128d_f64[0];
    dVar9 = dVar17 * (param_1->Rotation).ZW.m128d_f64[1];
    auVar28._8_4_ = SUB84(dVar38,0);
    auVar28._0_8_ = dVar37;
    auVar28._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
    dVar5 = dVar8 * (this->RootMotionTransform).Rotation.ZW.m128d_f64[0] +
            dVar37 * (this->RootMotionTransform).Rotation.XY.m128d_f64[0];
    dVar6 = dVar9 * (this->RootMotionTransform).Rotation.ZW.m128d_f64[1] +
            auVar28._8_8_ * (this->RootMotionTransform).Rotation.XY.m128d_f64[1];
    auVar29._8_4_ = SUB84(dVar6,0);
    auVar29._0_8_ = dVar5;
    auVar29._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    uVar26 = -(ulonglong)(0.0 <= auVar29._8_8_ + dVar5);
    uVar27 = -(ulonglong)(0.0 <= dVar5 + dVar6);
    uVar36 = (uint)(uVar27 >> 0x20);
    auVar34._0_4_ = ~(uint)uVar26 & SUB84(0.0 - dVar37,0);
    uVar35 = (uint)(uVar26 >> 0x20);
    auVar34._4_4_ = ~uVar35 & (uint)((ulonglong)(0.0 - dVar37) >> 0x20);
    auVar34._8_4_ = ~(uint)uVar27 & SUB84(0.0 - dVar38,0);
    auVar34._12_4_ = ~uVar36 & (uint)((ulonglong)(0.0 - dVar38) >> 0x20);
    auVar1._8_4_ = (int)((ulonglong)dVar38 & uVar27);
    auVar1._0_8_ = (ulonglong)dVar37 & uVar26;
    auVar1._12_4_ = (int)(((ulonglong)dVar38 & uVar27) >> 0x20);
    dVar5 = (this->RootMotionTransform).Rotation.XY.m128d_f64[1];
    auVar30._0_4_ = ~(uint)uVar26 & SUB84(0.0 - dVar8,0);
    auVar30._4_4_ = ~uVar35 & (uint)((ulonglong)(0.0 - dVar8) >> 0x20);
    auVar30._8_4_ = ~(uint)uVar27 & SUB84(0.0 - dVar9,0);
    auVar30._12_4_ = ~uVar36 & (uint)((ulonglong)(0.0 - dVar9) >> 0x20);
    (this->RootMotionTransform).Rotation.XY.m128d_f64[0] =
         SUB168(auVar34 | auVar1,0) + (this->RootMotionTransform).Rotation.XY.m128d_f64[0];
    (this->RootMotionTransform).Rotation.XY.m128d_f64[1] = SUB168(auVar34 | auVar1,8) + dVar5;
    auVar7._8_4_ = (int)((ulonglong)dVar9 & uVar27);
    auVar7._0_8_ = (ulonglong)dVar8 & uVar26;
    auVar7._12_4_ = (int)(((ulonglong)dVar9 & uVar27) >> 0x20);
    dVar5 = (this->RootMotionTransform).Rotation.ZW.m128d_f64[1];
    (this->RootMotionTransform).Rotation.ZW.m128d_f64[0] =
         SUB168(auVar30 | auVar7,0) + (this->RootMotionTransform).Rotation.ZW.m128d_f64[0];
    (this->RootMotionTransform).Rotation.ZW.m128d_f64[1] = SUB168(auVar30 | auVar7,8) + dVar5;
    dVar6 = (param_1->Translation).ZW.m128d_f64[0];
    dVar8 = (param_1->Translation).ZW.m128d_f64[1];
    auVar31._8_4_ = uVar39;
    auVar31._0_8_ = dVar12;
    auVar31._12_4_ = uVar40;
    dVar9 = (param_1->Translation).XY.m128d_f64[1];
    dVar5 = (this->RootMotionTransform).Translation.XY.m128d_f64[1];
    (this->RootMotionTransform).Translation.XY.m128d_f64[0] =
         dVar12 * (param_1->Translation).XY.m128d_f64[0] +
         (this->RootMotionTransform).Translation.XY.m128d_f64[0];
    (this->RootMotionTransform).Translation.XY.m128d_f64[1] = auVar31._8_8_ * dVar9 + dVar5;
    dVar5 = dVar17 * dVar8 + (this->RootMotionTransform).Translation.ZW.m128d_f64[1];
    auVar2._8_4_ = SUB84(dVar5,0);
    auVar2._0_8_ = dVar16 * dVar6 + (this->RootMotionTransform).Translation.ZW.m128d_f64[0];
    auVar2._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    *(undefined1 (*) [16])(this->RootMotionTransform).Translation.ZW.m128d_f64 = auVar2;
    dVar5 = (param_1->Scale3D).ZW.m128d_f64[0];
    dVar6 = (param_1->Scale3D).ZW.m128d_f64[1];
    dVar13 = dVar13 * (param_1->Scale3D).XY.m128d_f64[1] +
             (this->RootMotionTransform).Scale3D.XY.m128d_f64[1];
    auVar10._8_4_ = SUB84(dVar13,0);
    auVar10._0_8_ =
         dVar12 * (param_1->Scale3D).XY.m128d_f64[0] +
         (this->RootMotionTransform).Scale3D.XY.m128d_f64[0];
    auVar10._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    *(undefined1 (*) [16])(this->RootMotionTransform).Scale3D.XY.m128d_f64 = auVar10;
    dVar12 = dVar17 * dVar6 + (this->RootMotionTransform).Scale3D.ZW.m128d_f64[1];
    auVar14._8_4_ = SUB84(dVar12,0);
    auVar14._0_8_ = dVar16 * dVar5 + (this->RootMotionTransform).Scale3D.ZW.m128d_f64[0];
    auVar14._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    *(undefined1 (*) [16])(this->RootMotionTransform).Scale3D.ZW.m128d_f64 = auVar14;
    uVar25 = RootMotionScale.field0_0x0._s_0.Z;
    uVar24 = RootMotionScale.field0_0x0._s_0.Y;
    (this->RootMotionTransform).Scale3D.XY.m128d_f64[0] = RootMotionScale.field0_0x0._s_0.X;
    (this->RootMotionTransform).Scale3D.XY.m128d_f64[1] = (double)uVar24;
    (this->RootMotionTransform).Scale3D.ZW.m128d_f64[0] = (double)uVar25;
    (this->RootMotionTransform).Scale3D.ZW.m128d_f64[1] = 0.0;
    param_2 = param_2 + this->BlendWeight;
  }
  this->BlendWeight = param_2;
  return;
}

// ConsumeRootMotion @ 147444d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FRootMotionMovementParams * __thiscall
FRootMotionMovementParams::ConsumeRootMotion
          (FRootMotionMovementParams *this,FRootMotionMovementParams *__return_storage_ptr__,
          float param_1)

{
  TTransform<double> *this_00;
  code *pcVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  ulonglong uVar5;
  double dVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  TQuat<double> *pTVar13;
  TTransform<double> *pTVar14;
  FRootMotionMovementParams *pFVar15;
  uint uVar16;
  undefined4 uVar17;
  TTransform<double> *pTVar18;
  undefined4 uVar19;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar30;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar31;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  uint uVar42;
  uint uVar43;
  undefined1 auStack_1d8 [32];
  double local_1b8;
  TQuat<double> local_1a8;
  double local_188;
  double dStack_180;
  double local_178;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  TQuat<double> local_148;
  TTransform<double> local_128;
  TTransform<double> local_c8;
  ulonglong local_68;
  TTransform<double> *pTVar20;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  dVar25 = (this->RootMotionTransform).Translation.XY.m128d_f64[0];
  dVar31 = (this->RootMotionTransform).Translation.XY.m128d_f64[1];
  this_00 = &this->RootMotionTransform;
  dVar6 = (this->RootMotionTransform).Translation.ZW.m128d_f64[0];
  local_1a8.X = (this_00->Rotation).XY.m128d_f64[0];
  local_1a8.Y = (this->RootMotionTransform).Rotation.XY.m128d_f64[1];
  local_1a8.Z = (this->RootMotionTransform).Rotation.ZW.m128d_f64[0];
  local_1a8.W = (this->RootMotionTransform).Rotation.ZW.m128d_f64[1];
  dVar4 = (double)param_1;
  local_188 = dVar25;
  dStack_180 = dVar31;
  pTVar13 = UE::Math::TQuat<double>::Slerp_NotNormalized
                      (&local_148,&UE::Math::TQuat<double>::Identity,&local_1a8,dVar4);
  pTVar20 = &local_128;
  local_1b8 = __real_3e45798ee0000000;
  local_168 = pTVar13->X;
  dStack_160 = pTVar13->Y;
  local_158 = pTVar13->Z;
  dStack_150 = pTVar13->W;
  dVar24 = local_158 * local_158 + local_168 * local_168;
  dVar30 = dStack_150 * dStack_150 + dStack_160 * dStack_160;
  local_128.Translation.ZW.m128d_f64[0] = dVar6 * dVar4;
  dVar3 = dVar30 + dVar24;
  dVar24 = dVar24 + dVar30;
  auVar32._8_4_ = SUB84(dVar24,0);
  auVar32._0_8_ = dVar3;
  auVar32._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
  auVar37 = sqrtpd(in_XMM4,auVar32);
  uVar21 = -(ulonglong)(__real_3e45798ee0000000 <= dVar3);
  uVar22 = -(ulonglong)(__real_3e45798ee0000000 <= dVar24);
  auVar32 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar37);
  uVar42 = (uint)(uVar21 >> 0x20);
  uVar43 = (uint)(uVar22 >> 0x20);
  auVar33._0_8_ = uVar21 & (ulonglong)(auVar32._0_8_ * local_168);
  uVar5 = uVar22 & (ulonglong)(auVar32._8_8_ * dStack_160);
  auVar33._8_4_ = (undefined4)uVar5;
  auVar33._12_4_ = (undefined4)(uVar5 >> 0x20);
  auVar26._0_4_ = ~(uint)uVar21 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar26._4_4_ =
       ~uVar42 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar26._8_4_ = ~(uint)uVar22 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar26._12_4_ =
       ~uVar43 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_128.Rotation.XY.m128d_f64 = (double  [2])(auVar33 | auVar26);
  auVar32 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar37);
  auVar27._0_8_ = (ulonglong)(auVar32._0_8_ * local_158) & uVar21;
  uVar5 = (ulonglong)(auVar32._8_8_ * dStack_150) & uVar22;
  auVar27._8_4_ = (undefined4)uVar5;
  auVar27._12_4_ = (undefined4)(uVar5 >> 0x20);
  local_128.Scale3D.XY.m128d_f64[0] = RootMotionScale.field0_0x0._s_0.X;
  local_128.Scale3D.XY.m128d_f64[1] = RootMotionScale.field0_0x0._s_0.Y;
  auVar34._0_4_ = ~(uint)uVar21 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar34._4_4_ =
       ~uVar42 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar34._8_4_ = ~(uint)uVar22 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar34._12_4_ =
       ~uVar43 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  local_128.Rotation.ZW.m128d_f64 = (double  [2])(auVar34 | auVar27);
  local_128.Translation.XY.m128d_f64[0] = dVar25 * dVar4;
  local_128.Translation.XY.m128d_f64[1] = dVar31 * dVar4;
  local_128.Translation.ZW.m128d_f64[1] = 0.0;
  local_128.Scale3D.ZW.m128d_f64[0] = RootMotionScale.field0_0x0._s_0.Z;
  local_128.Scale3D.ZW.m128d_f64[1] = 0.0;
  pTVar18 = this_00;
  local_178 = dVar6;
  pTVar14 = UE::Math::TTransform<double>::GetRelativeTransform(this_00,&local_c8,pTVar20);
  uVar19 = SUB84(pTVar20,0);
  dVar3 = (pTVar14->Rotation).XY.m128d_f64[1];
  (this_00->Rotation).XY.m128d_f64[0] = (pTVar14->Rotation).XY.m128d_f64[0];
  (this->RootMotionTransform).Rotation.XY.m128d_f64[1] = dVar3;
  dVar3 = (pTVar14->Rotation).ZW.m128d_f64[1];
  (this->RootMotionTransform).Rotation.ZW.m128d_f64[0] = (pTVar14->Rotation).ZW.m128d_f64[0];
  (this->RootMotionTransform).Rotation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (pTVar14->Translation).XY.m128d_f64[1];
  (this->RootMotionTransform).Translation.XY.m128d_f64[0] = (pTVar14->Translation).XY.m128d_f64[0];
  (this->RootMotionTransform).Translation.XY.m128d_f64[1] = dVar3;
  dVar3 = (pTVar14->Translation).ZW.m128d_f64[1];
  (this->RootMotionTransform).Translation.ZW.m128d_f64[0] = (pTVar14->Translation).ZW.m128d_f64[0];
  (this->RootMotionTransform).Translation.ZW.m128d_f64[1] = dVar3;
  dVar3 = (pTVar14->Scale3D).XY.m128d_f64[1];
  (this->RootMotionTransform).Scale3D.XY.m128d_f64[0] = (pTVar14->Scale3D).XY.m128d_f64[0];
  (this->RootMotionTransform).Scale3D.XY.m128d_f64[1] = dVar3;
  dVar3 = (pTVar14->Scale3D).ZW.m128d_f64[1];
  (this->RootMotionTransform).Scale3D.ZW.m128d_f64[0] = (pTVar14->Scale3D).ZW.m128d_f64[0];
  (this->RootMotionTransform).Scale3D.ZW.m128d_f64[1] = dVar3;
  __return_storage_ptr__->bHasRootMotion = false;
  (__return_storage_ptr__->RootMotionTransform).Rotation.XY.m128d_f64[0] =
       local_128.Rotation.XY.m128d_f64[0];
  (__return_storage_ptr__->RootMotionTransform).Rotation.XY.m128d_f64[1] =
       local_128.Rotation.XY.m128d_f64[1];
  __return_storage_ptr__->BlendWeight = 0.0;
  (__return_storage_ptr__->RootMotionTransform).Rotation.ZW.m128d_f64[0] =
       local_128.Rotation.ZW.m128d_f64[0];
  (__return_storage_ptr__->RootMotionTransform).Rotation.ZW.m128d_f64[1] =
       local_128.Rotation.ZW.m128d_f64[1];
  __return_storage_ptr__->bHasRootMotion = true;
  (__return_storage_ptr__->RootMotionTransform).Translation.XY.m128d_f64[0] =
       local_128.Translation.XY.m128d_f64[0];
  (__return_storage_ptr__->RootMotionTransform).Translation.XY.m128d_f64[1] =
       local_128.Translation.XY.m128d_f64[1];
  (__return_storage_ptr__->RootMotionTransform).Translation.ZW.m128d_f64[0] =
       local_128.Translation.ZW.m128d_f64[0];
  (__return_storage_ptr__->RootMotionTransform).Translation.ZW.m128d_f64[1] =
       local_128.Translation.ZW.m128d_f64[1];
  (__return_storage_ptr__->RootMotionTransform).Scale3D.XY.m128d_f64[0] =
       local_128.Scale3D.XY.m128d_f64[0];
  (__return_storage_ptr__->RootMotionTransform).Scale3D.XY.m128d_f64[1] =
       local_128.Scale3D.XY.m128d_f64[1];
  (__return_storage_ptr__->RootMotionTransform).Scale3D.ZW.m128d_f64[0] =
       local_128.Scale3D.ZW.m128d_f64[0];
  (__return_storage_ptr__->RootMotionTransform).Scale3D.ZW.m128d_f64[1] =
       local_128.Scale3D.ZW.m128d_f64[1];
  uVar10 = RootMotionScale.field0_0x0._s_0.Z;
  uVar9 = RootMotionScale.field0_0x0._s_0.Y;
  (__return_storage_ptr__->RootMotionTransform).Scale3D.XY.m128d_f64[0] =
       RootMotionScale.field0_0x0._s_0.X;
  (__return_storage_ptr__->RootMotionTransform).Scale3D.XY.m128d_f64[1] = (double)uVar9;
  (__return_storage_ptr__->RootMotionTransform).Scale3D.ZW.m128d_f64[0] = (double)uVar10;
  (__return_storage_ptr__->RootMotionTransform).Scale3D.ZW.m128d_f64[1] = 0.0;
  __return_storage_ptr__->BlendWeight = 1.0;
  uVar8 = _UNK_15061cc8c;
  uVar7 = _UNK_15061cc88;
  uVar43 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar42 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  fVar38 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0];
  fVar39 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1];
  fVar40 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2];
  fVar41 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3];
  dVar25 = local_128.Rotation.XY.m128d_f64[0] * local_128.Rotation.XY.m128d_f64[0] +
           local_128.Rotation.ZW.m128d_f64[0] * local_128.Rotation.ZW.m128d_f64[0];
  dVar31 = local_128.Rotation.XY.m128d_f64[1] * local_128.Rotation.XY.m128d_f64[1] +
           local_128.Rotation.ZW.m128d_f64[1] * local_128.Rotation.ZW.m128d_f64[1];
  auVar35._8_4_ = SUB84(dVar31,0);
  auVar35._0_8_ = dVar25;
  auVar35._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
  dVar24 = auVar35._8_8_ + dVar25;
  dVar3 = (double)GlobalVectorConstants::FloatOne.m128_f32[2] - dVar24;
  dVar4 = (double)GlobalVectorConstants::FloatOne.m128_f32[3] - (dVar25 + dVar31);
  auVar28._8_8_ =
       -(ulonglong)
        ((double)fVar41 <
        (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) & _UNK_15061cc8c,
                         SUB84(dVar4,0) & _UNK_15061cc88));
  auVar28._0_8_ =
       -(ulonglong)
        ((double)fVar40 <
        (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  dVar24 = (double)GlobalVectorConstants::FloatOne.m128_f32[0] - dVar24;
  dVar3 = (double)GlobalVectorConstants::FloatOne.m128_f32[1] - (dVar25 + dVar31);
  uVar16 = movmskpd((int)pTVar18,auVar28);
  lVar23 = -(ulonglong)
            ((double)fVar39 <
            (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar3,0) & _UNK_15061cc88));
  auVar37._8_4_ = (int)lVar23;
  auVar37._0_8_ =
       -(ulonglong)
        ((double)fVar38 <
        (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         SUB84(dVar24,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar37._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
  iVar12 = movmskpd((int)pTVar14,auVar37);
  uVar17 = 0;
  if ((uVar16 & 0x3fffffff) != 0 || iVar12 != 0) {
    uVar19 = 0x347;
    uVar17 = 0x516c5d70;
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("PartialRootMotion.IsRotationNormalized()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimationAsset.h"
                        ,0x347,L"");
    if (bVar11) {
      pcVar1 = (code *)swi(3);
      pFVar15 = (FRootMotionMovementParams *)(*pcVar1)();
      return pFVar15;
    }
    fVar38 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[0];
    fVar39 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[1];
    fVar40 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[2];
    fVar41 = GlobalVectorConstants::ThreshQuatNormalized.m128_f32[3];
  }
  dVar3 = (this_00->Rotation).XY.m128d_f64[0];
  dVar24 = (this->RootMotionTransform).Rotation.XY.m128d_f64[1];
  dVar4 = (this->RootMotionTransform).Rotation.ZW.m128d_f64[0];
  dVar25 = (this->RootMotionTransform).Rotation.ZW.m128d_f64[1];
  dVar31 = dVar4 * dVar4 + dVar3 * dVar3;
  dVar25 = dVar25 * dVar25 + dVar24 * dVar24;
  auVar36._8_4_ = SUB84(dVar25,0);
  auVar36._0_8_ = dVar31;
  auVar36._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
  dVar24 = auVar36._8_8_ + dVar31;
  dVar3 = (double)GlobalVectorConstants::FloatOne.m128_f32[2] - dVar24;
  dVar4 = (double)GlobalVectorConstants::FloatOne.m128_f32[3] - (dVar31 + dVar25);
  auVar29._8_8_ =
       -(ulonglong)
        ((double)fVar41 <
        (double)CONCAT44((uint)((ulonglong)dVar4 >> 0x20) & uVar8,SUB84(dVar4,0) & uVar7));
  auVar29._0_8_ =
       -(ulonglong)
        ((double)fVar40 <
        (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) & uVar43,SUB84(dVar3,0) & uVar42));
  dVar24 = (double)GlobalVectorConstants::FloatOne.m128_f32[0] - dVar24;
  dVar3 = (double)GlobalVectorConstants::FloatOne.m128_f32[1] - (dVar31 + dVar25);
  uVar16 = movmskpd(uVar19,auVar29);
  lVar23 = -(ulonglong)
            ((double)fVar39 <
            (double)CONCAT44((uint)((ulonglong)dVar3 >> 0x20) & uVar8,SUB84(dVar3,0) & uVar7));
  auVar2._8_4_ = (int)lVar23;
  auVar2._0_8_ = -(ulonglong)
                  ((double)fVar38 <
                  (double)CONCAT44((uint)((ulonglong)dVar24 >> 0x20) & uVar43,
                                   SUB84(dVar24,0) & uVar42));
  auVar2._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
  iVar12 = movmskpd(uVar17,auVar2);
  if ((uVar16 & 0x3fffffff) != 0 || iVar12 != 0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("RootMotionTransform.IsRotationNormalized()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimationAsset.h"
                        ,0x348,L"");
    if (bVar11) {
      pcVar1 = (code *)swi(3);
      pFVar15 = (FRootMotionMovementParams *)(*pcVar1)();
      return pFVar15;
    }
  }
  return __return_storage_ptr__;
}

// Accumulate @ 1474b8420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRootMotionMovementParams::Accumulate(FRootMotionMovementParams *this,TTransform<double> *param_1)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (this->bHasRootMotion == false) {
    this->bHasRootMotion = true;
    dVar1 = (param_1->Rotation).XY.m128d_f64[1];
    (this->RootMotionTransform).Rotation.XY.m128d_f64[0] = (param_1->Rotation).XY.m128d_f64[0];
    (this->RootMotionTransform).Rotation.XY.m128d_f64[1] = dVar1;
    dVar1 = (param_1->Rotation).ZW.m128d_f64[1];
    (this->RootMotionTransform).Rotation.ZW.m128d_f64[0] = (param_1->Rotation).ZW.m128d_f64[0];
    (this->RootMotionTransform).Rotation.ZW.m128d_f64[1] = dVar1;
    dVar1 = (param_1->Translation).XY.m128d_f64[1];
    (this->RootMotionTransform).Translation.XY.m128d_f64[0] = (param_1->Translation).XY.m128d_f64[0]
    ;
    (this->RootMotionTransform).Translation.XY.m128d_f64[1] = dVar1;
    dVar1 = (param_1->Translation).ZW.m128d_f64[1];
    (this->RootMotionTransform).Translation.ZW.m128d_f64[0] = (param_1->Translation).ZW.m128d_f64[0]
    ;
    (this->RootMotionTransform).Translation.ZW.m128d_f64[1] = dVar1;
    dVar1 = (param_1->Scale3D).XY.m128d_f64[1];
    (this->RootMotionTransform).Scale3D.XY.m128d_f64[0] = (param_1->Scale3D).XY.m128d_f64[0];
    (this->RootMotionTransform).Scale3D.XY.m128d_f64[1] = dVar1;
    dVar1 = (param_1->Scale3D).ZW.m128d_f64[1];
    (this->RootMotionTransform).Scale3D.ZW.m128d_f64[0] = (param_1->Scale3D).ZW.m128d_f64[0];
    (this->RootMotionTransform).Scale3D.ZW.m128d_f64[1] = dVar1;
    uVar3 = RootMotionScale.field0_0x0._s_0.Z;
    uVar2 = RootMotionScale.field0_0x0._s_0.Y;
    (this->RootMotionTransform).Scale3D.XY.m128d_f64[0] = RootMotionScale.field0_0x0._s_0.X;
    (this->RootMotionTransform).Scale3D.XY.m128d_f64[1] = (double)uVar2;
    (this->RootMotionTransform).Scale3D.ZW.m128d_f64[0] = (double)uVar3;
    (this->RootMotionTransform).Scale3D.ZW.m128d_f64[1] = 0.0;
    this->BlendWeight = 1.0;
  }
  else {
    local_78.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_78.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_78.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_78.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_78.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_78.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_78.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_78.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_78.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_78.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_78.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_78.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_78.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_78.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_78.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_78.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_78.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_78.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply(&local_78,param_1,&this->RootMotionTransform);
    (this->RootMotionTransform).Rotation.XY.m128d_f64[0] = local_78.Rotation.XY.m128d_f64[0];
    (this->RootMotionTransform).Rotation.XY.m128d_f64[1] = local_78.Rotation.XY.m128d_f64[1];
    (this->RootMotionTransform).Rotation.ZW.m128d_f64[0] = local_78.Rotation.ZW.m128d_f64[0];
    (this->RootMotionTransform).Rotation.ZW.m128d_f64[1] = local_78.Rotation.ZW.m128d_f64[1];
    (this->RootMotionTransform).Translation.XY.m128d_f64[0] = local_78.Translation.XY.m128d_f64[0];
    (this->RootMotionTransform).Translation.XY.m128d_f64[1] = local_78.Translation.XY.m128d_f64[1];
    (this->RootMotionTransform).Translation.ZW.m128d_f64[0] = local_78.Translation.ZW.m128d_f64[0];
    (this->RootMotionTransform).Translation.ZW.m128d_f64[1] = local_78.Translation.ZW.m128d_f64[1];
    (this->RootMotionTransform).Scale3D.XY.m128d_f64[0] = local_78.Scale3D.XY.m128d_f64[0];
    (this->RootMotionTransform).Scale3D.XY.m128d_f64[1] = local_78.Scale3D.XY.m128d_f64[1];
    (this->RootMotionTransform).Scale3D.ZW.m128d_f64[0] = local_78.Scale3D.ZW.m128d_f64[0];
    (this->RootMotionTransform).Scale3D.ZW.m128d_f64[1] = local_78.Scale3D.ZW.m128d_f64[1];
    uVar3 = RootMotionScale.field0_0x0._s_0.Z;
    uVar2 = RootMotionScale.field0_0x0._s_0.Y;
    (this->RootMotionTransform).Scale3D.XY.m128d_f64[0] = RootMotionScale.field0_0x0._s_0.X;
    (this->RootMotionTransform).Scale3D.XY.m128d_f64[1] = (double)uVar2;
    (this->RootMotionTransform).Scale3D.ZW.m128d_f64[0] = (double)uVar3;
    (this->RootMotionTransform).Scale3D.ZW.m128d_f64[1] = 0.0;
  }
  return;
}

// Accumulate @ 1478031b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRootMotionMovementParams::Accumulate
          (FRootMotionMovementParams *this,FRootMotionMovementParams *param_1)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (param_1->bHasRootMotion != false) {
    if (this->bHasRootMotion == false) {
      this->bHasRootMotion = true;
      dVar1 = (param_1->RootMotionTransform).Rotation.XY.m128d_f64[1];
      (this->RootMotionTransform).Rotation.XY.m128d_f64[0] =
           (param_1->RootMotionTransform).Rotation.XY.m128d_f64[0];
      (this->RootMotionTransform).Rotation.XY.m128d_f64[1] = dVar1;
      dVar1 = (param_1->RootMotionTransform).Rotation.ZW.m128d_f64[1];
      (this->RootMotionTransform).Rotation.ZW.m128d_f64[0] =
           (param_1->RootMotionTransform).Rotation.ZW.m128d_f64[0];
      (this->RootMotionTransform).Rotation.ZW.m128d_f64[1] = dVar1;
      dVar1 = (param_1->RootMotionTransform).Translation.XY.m128d_f64[1];
      (this->RootMotionTransform).Translation.XY.m128d_f64[0] =
           (param_1->RootMotionTransform).Translation.XY.m128d_f64[0];
      (this->RootMotionTransform).Translation.XY.m128d_f64[1] = dVar1;
      dVar1 = (param_1->RootMotionTransform).Translation.ZW.m128d_f64[1];
      (this->RootMotionTransform).Translation.ZW.m128d_f64[0] =
           (param_1->RootMotionTransform).Translation.ZW.m128d_f64[0];
      (this->RootMotionTransform).Translation.ZW.m128d_f64[1] = dVar1;
      dVar1 = (param_1->RootMotionTransform).Scale3D.XY.m128d_f64[1];
      (this->RootMotionTransform).Scale3D.XY.m128d_f64[0] =
           (param_1->RootMotionTransform).Scale3D.XY.m128d_f64[0];
      (this->RootMotionTransform).Scale3D.XY.m128d_f64[1] = dVar1;
      dVar1 = (param_1->RootMotionTransform).Scale3D.ZW.m128d_f64[1];
      (this->RootMotionTransform).Scale3D.ZW.m128d_f64[0] =
           (param_1->RootMotionTransform).Scale3D.ZW.m128d_f64[0];
      (this->RootMotionTransform).Scale3D.ZW.m128d_f64[1] = dVar1;
      uVar3 = RootMotionScale.field0_0x0._s_0.Z;
      uVar2 = RootMotionScale.field0_0x0._s_0.Y;
      (this->RootMotionTransform).Scale3D.XY.m128d_f64[0] = RootMotionScale.field0_0x0._s_0.X;
      (this->RootMotionTransform).Scale3D.XY.m128d_f64[1] = (double)uVar2;
      (this->RootMotionTransform).Scale3D.ZW.m128d_f64[0] = (double)uVar3;
      (this->RootMotionTransform).Scale3D.ZW.m128d_f64[1] = 0.0;
      this->BlendWeight = 1.0;
    }
    else {
      local_78.Rotation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      local_78.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_78.Rotation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
      local_78.Rotation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      local_78.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_78.Rotation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
      local_78.Translation.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
      local_78.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_78.Translation.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
      local_78.Translation.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
      local_78.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_78.Translation.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
      local_78.Scale3D.XY.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
      local_78.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_78.Scale3D.XY.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
      local_78.Scale3D.ZW.m128d_f64[1]._0_4_ =
           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
      local_78.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_78.Scale3D.ZW.m128d_f64[1]._4_4_ =
           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
      UE::Math::TTransform<double>::Multiply
                (&local_78,&param_1->RootMotionTransform,&this->RootMotionTransform);
      (this->RootMotionTransform).Rotation.XY.m128d_f64[0] = local_78.Rotation.XY.m128d_f64[0];
      (this->RootMotionTransform).Rotation.XY.m128d_f64[1] = local_78.Rotation.XY.m128d_f64[1];
      (this->RootMotionTransform).Rotation.ZW.m128d_f64[0] = local_78.Rotation.ZW.m128d_f64[0];
      (this->RootMotionTransform).Rotation.ZW.m128d_f64[1] = local_78.Rotation.ZW.m128d_f64[1];
      (this->RootMotionTransform).Translation.XY.m128d_f64[0] = local_78.Translation.XY.m128d_f64[0]
      ;
      (this->RootMotionTransform).Translation.XY.m128d_f64[1] = local_78.Translation.XY.m128d_f64[1]
      ;
      (this->RootMotionTransform).Translation.ZW.m128d_f64[0] = local_78.Translation.ZW.m128d_f64[0]
      ;
      (this->RootMotionTransform).Translation.ZW.m128d_f64[1] = local_78.Translation.ZW.m128d_f64[1]
      ;
      (this->RootMotionTransform).Scale3D.XY.m128d_f64[0] = local_78.Scale3D.XY.m128d_f64[0];
      (this->RootMotionTransform).Scale3D.XY.m128d_f64[1] = local_78.Scale3D.XY.m128d_f64[1];
      (this->RootMotionTransform).Scale3D.ZW.m128d_f64[0] = local_78.Scale3D.ZW.m128d_f64[0];
      (this->RootMotionTransform).Scale3D.ZW.m128d_f64[1] = local_78.Scale3D.ZW.m128d_f64[1];
      uVar3 = RootMotionScale.field0_0x0._s_0.Z;
      uVar2 = RootMotionScale.field0_0x0._s_0.Y;
      (this->RootMotionTransform).Scale3D.XY.m128d_f64[0] = RootMotionScale.field0_0x0._s_0.X;
      (this->RootMotionTransform).Scale3D.XY.m128d_f64[1] = (double)uVar2;
      (this->RootMotionTransform).Scale3D.ZW.m128d_f64[0] = (double)uVar3;
      (this->RootMotionTransform).Scale3D.ZW.m128d_f64[1] = 0.0;
    }
  }
  return;
}

