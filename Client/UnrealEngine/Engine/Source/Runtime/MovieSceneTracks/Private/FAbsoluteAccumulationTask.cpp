// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// ForEachEntity @ 146832c20

void __thiscall
UE::MovieScene::FAbsoluteAccumulationTask::ForEachEntity
          (FAbsoluteAccumulationTask *this,FMovieSceneBlendChannelID param_1,double param_2,
          double param_3,double param_4,double param_5,double param_6,double param_7,double param_8,
          double param_9,double param_10,double *param_11)

{
  double dVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  FQuaternionBlenderAccumulationBuffers *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  TQuat<double> *pTVar20;
  uint uVar21;
  longlong lVar22;
  undefined1 *puVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  double dVar26;
  double dVar29;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  uint uVar35;
  double dVar34;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined1 auVar38 [16];
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  ushort uStackX_12;
  TRotator<double> local_c8;
  TQuat<double> local_a8;
  TQuat<double> local_88 [4];
  
  uVar36 = (undefined4)__real_3ff0000000000000;
  uVar37 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  uVar43 = uVar36;
  uVar44 = uVar37;
  if (param_11 != (double *)0x0) {
    dVar1 = *param_11;
    uVar43 = SUB84(dVar1,0);
    uVar44 = (undefined4)((ulonglong)dVar1 >> 0x20);
    if (dVar1 == 0.0) {
      return;
    }
  }
  pFVar4 = this->Buffers;
  uVar21 = (uint)param_1 >> 0x10;
  if ((int)uVar21 < *(int *)&(pFVar4->AbsoluteWeights).field_0x28) {
    puVar23 = *(undefined1 **)&(pFVar4->AbsoluteWeights).field_0x20;
    if (puVar23 == (undefined1 *)0x0) {
      puVar23 = &(pFVar4->AbsoluteWeights).field_0x10;
    }
    if ((*(uint *)(puVar23 + (ulonglong)((uint)param_1 >> 0x15) * 4) >> (uVar21 & 0x1f) & 1) != 0) {
      uStackX_12 = param_1.ChannelID;
      uVar2 = *(undefined8 *)
               (*(longlong *)&this->Buffers->AbsoluteWeights + (ulonglong)uStackX_12 * 8);
      uVar36 = (undefined4)uVar2;
      uVar37 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
  }
  pFVar4 = this->Buffers;
  if (((pFVar4->Absolutes).ArrayNum <= (int)uVar21) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar5 = (pFVar4->Absolutes).AllocatorInstance.Data;
  local_c8.Pitch = param_6;
  local_c8.Roll = param_5;
  local_c8.Yaw = param_7;
  lVar22 = (ulonglong)uVar21 * 0x60;
  UE::Math::TRotator<double>::Quaternion(&local_c8,&local_a8);
  dVar15 = (double)CONCAT44(uVar44,uVar43) / (double)CONCAT44(uVar37,uVar36);
  auVar30._8_8_ = 0;
  auVar30._0_8_ = dVar15;
  *(double *)(pFVar5 + lVar22) = dVar15 * param_2 + *(double *)(pFVar5 + lVar22);
  *(double *)(pFVar5 + lVar22 + 8) = dVar15 * param_3 + *(double *)(pFVar5 + lVar22 + 8);
  *(double *)(pFVar5 + lVar22 + 0x10) = dVar15 * param_4 + *(double *)(pFVar5 + lVar22 + 0x10);
  pTVar20 = UE::Math::TQuat<double>::Slerp_NotNormalized
                      (local_88,&UE::Math::TQuat<double>::Identity,&local_a8,dVar15);
  auVar3 = *(undefined1 (*) [16])(pFVar5 + lVar22 + 0x20);
  dVar7 = pTVar20->X;
  dVar12 = pTVar20->Y;
  dVar8 = pTVar20->Z;
  dVar9 = pTVar20->W;
  dVar17 = *(double *)(pFVar5 + lVar22 + 0x30);
  dVar18 = *(double *)(pFVar5 + lVar22 + 0x30 + 8);
  dVar26 = dVar8 * dVar8 + dVar7 * dVar7;
  dVar29 = dVar9 * dVar9 + dVar12 * dVar12;
  dVar13 = auVar3._0_8_;
  dVar14 = auVar3._8_8_;
  dVar1 = dVar29 + dVar26;
  dVar26 = dVar26 + dVar29;
  auVar31._8_4_ = SUB84(dVar26,0);
  auVar31._0_8_ = dVar1;
  auVar31._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
  auVar31 = sqrtpd(auVar30,auVar31);
  uVar24 = -(ulonglong)(__real_3e45798ee0000000 <= dVar1);
  uVar25 = -(ulonglong)(__real_3e45798ee0000000 <= dVar26);
  auVar40 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar31);
  uVar21 = (uint)(uVar24 >> 0x20);
  uVar35 = (uint)(uVar25 >> 0x20);
  auVar41._0_8_ = uVar24 & (ulonglong)(auVar40._0_8_ * dVar7);
  uVar16 = uVar25 & (ulonglong)(auVar40._8_8_ * dVar12);
  auVar41._8_4_ = (undefined4)uVar16;
  auVar41._12_4_ = (undefined4)(uVar16 >> 0x20);
  auVar40._0_4_ = ~(uint)uVar24 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar40._4_4_ =
       ~uVar21 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar40._8_4_ = ~(uint)uVar25 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar40._12_4_ =
       ~uVar35 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  auVar31 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar31);
  auVar38._0_4_ = ~(uint)uVar24 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar38._4_4_ =
       ~uVar21 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar38._8_4_ = ~(uint)uVar25 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar38._12_4_ =
       ~uVar35 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar27._0_8_ = (ulonglong)(auVar31._0_8_ * dVar8) & uVar24;
  uVar25 = (ulonglong)(auVar31._8_8_ * dVar9) & uVar25;
  auVar27._8_4_ = (undefined4)uVar25;
  auVar27._12_4_ = (undefined4)(uVar25 >> 0x20);
  dVar33 = SUB168(auVar38 | auVar27,0);
  dVar34 = SUB168(auVar38 | auVar27,8);
  auVar32._8_4_ = auVar3._0_4_;
  auVar32._0_8_ = dVar13;
  auVar32._12_4_ = auVar3._4_4_;
  dVar39 = SUB168(auVar41 | auVar40,0);
  dVar42 = SUB168(auVar41 | auVar40,8);
  dVar12 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1];
  auVar28._8_4_ = auVar3._8_4_;
  auVar28._0_8_ = dVar14;
  auVar28._12_4_ = auVar3._12_4_;
  dVar1 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0];
  dVar8 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1];
  dVar9 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
  dVar29 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  dVar26 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0];
  dVar10 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1];
  dVar7 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar11 = GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  *(double *)(pFVar5 + lVar22 + 0x20) =
       dVar13 * dVar34 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar18 * dVar39 +
       dVar14 * dVar33 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       dVar17 * dVar42 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  *(double *)(pFVar5 + lVar22 + 0x20 + 8) =
       auVar32._8_8_ * dVar33 * dVar12 + dVar18 * dVar42 + auVar28._8_8_ * dVar34 * dVar9 +
       dVar17 * dVar39 * dVar29;
  dVar12 = dVar13 * dVar39 * dVar8 + dVar18 * dVar34 + dVar14 * dVar42 * dVar10 +
           dVar17 * dVar33 * dVar11;
  auVar3._8_4_ = SUB84(dVar12,0);
  auVar3._0_8_ = dVar13 * dVar42 * dVar1 + dVar18 * dVar33 + dVar14 * dVar39 * dVar26 +
                 dVar17 * dVar34 * dVar7;
  auVar3._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  *(undefined1 (*) [16])(pFVar5 + lVar22 + 0x30) = auVar3;
  *(double *)(pFVar5 + lVar22 + 0x40) = dVar15 * param_8 + *(double *)(pFVar5 + lVar22 + 0x40);
  *(double *)(pFVar5 + lVar22 + 0x48) = dVar15 * param_9 + *(double *)(pFVar5 + lVar22 + 0x48);
  *(double *)(pFVar5 + lVar22 + 0x50) = dVar15 * param_10 + *(double *)(pFVar5 + lVar22 + 0x50);
  return;
}

