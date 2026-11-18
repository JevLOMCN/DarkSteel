// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// ForEachEntity @ 146833230

void __thiscall
UE::MovieScene::FCombineTask::ForEachEntity
          (FCombineTask *this,FMovieSceneBlendChannelID param_1,double *param_2,double *param_3,
          double *param_4,double *param_5,double *param_6,double *param_7,double *param_8,
          double *param_9,double *param_10,FIntermediate3DTransform *param_11)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  FQuaternionBlenderAccumulationBuffers *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
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
  ushort uVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  undefined1 *puVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  double dVar28;
  double dVar30;
  undefined1 auVar29 [16];
  double dVar31;
  double dVar33;
  undefined1 auVar32 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined4 uVar38;
  undefined4 uVar39;
  uint uVar40;
  uint uVar41;
  double local_res8;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  TRotator<double> local_168;
  TRotator<double> local_150;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  TQuat<double> local_118;
  TQuat<double> local_f8 [6];
  
  dVar5 = __real_3ff0000000000000;
  uVar38 = SUB84(__real_3ff0000000000000,0);
  uVar39 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  pFVar8 = this->Buffers;
  uVar21 = param_1.ChannelID;
  uVar24 = (ulonglong)uVar21;
  uVar23 = (uint)uVar21;
  if ((int)(uint)uVar21 < *(int *)&(pFVar8->AbsoluteWeights).field_0x28) {
    puVar25 = *(undefined1 **)&(pFVar8->AbsoluteWeights).field_0x20;
    if (puVar25 == (undefined1 *)0x0) {
      puVar25 = &(pFVar8->AbsoluteWeights).field_0x10;
    }
    if ((*(uint *)(puVar25 + (ulonglong)(uVar21 >> 5) * 4) >> (uVar21 & 0x1f) & 1) != 0) {
      uVar2 = *(undefined8 *)
               (*(longlong *)&this->Buffers->AbsoluteWeights +
               (ulonglong)((uint)param_1 >> 0x10) * 8);
      uVar38 = (undefined4)uVar2;
      uVar39 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
  }
  pFVar8 = this->Buffers;
  if (((pFVar8->Absolutes).ArrayNum <= (int)uVar23) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar9 = (pFVar8->Absolutes).AllocatorInstance.Data;
  pFVar8 = this->Buffers;
  lVar22 = uVar24 * 0x60;
  pFVar1 = pFVar9 + lVar22;
  dVar14 = *(double *)pFVar1;
  dVar13 = *(double *)(pFVar1 + 8);
  dVar3 = *(double *)(pFVar9 + lVar22 + 0x10);
  if (((pFVar8->Absolutes).ArrayNum <= (int)uVar23) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar1 = (pFVar8->Absolutes).AllocatorInstance.Data;
  pFVar8 = this->Buffers;
  local_188 = *(undefined1 (*) [16])(pFVar1 + lVar22 + 0x20);
  local_178 = *(undefined1 (*) [16])(pFVar1 + lVar22 + 0x30);
  if (((pFVar8->Absolutes).ArrayNum <= (int)uVar23) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar9 = (pFVar8->Absolutes).AllocatorInstance.Data;
  pFVar1 = pFVar9 + lVar22 + 0x40;
  local_res8 = *(double *)pFVar1;
  dVar15 = *(double *)(pFVar1 + 8);
  dVar4 = *(double *)(pFVar9 + lVar22 + 0x50);
  if ((0.0 <= (double)CONCAT44(uVar39,uVar38)) && ((double)CONCAT44(uVar39,uVar38) < dVar5)) {
    if (param_11 == (FIntermediate3DTransform *)0x0) {
      bVar19 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_725489778102894429>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneQuaternionBlenderSystem.cpp"
                          ,0xa3,"InitialValue");
      if (bVar19) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    else {
      local_168.Pitch = param_11->R_Y;
      local_168.Yaw = param_11->R_Z;
      dVar14 = (dVar14 - param_11->T_X) * (double)CONCAT44(uVar39,uVar38) + param_11->T_X;
      dVar13 = (dVar13 - param_11->T_Y) * (double)CONCAT44(uVar39,uVar38) + param_11->T_Y;
      local_168.Roll = param_11->R_X;
      dVar3 = (dVar3 - param_11->T_Z) * (double)CONCAT44(uVar39,uVar38) + param_11->T_Z;
      pTVar20 = UE::Math::TRotator<double>::Quaternion(&local_168,&local_118);
      pTVar20 = UE::Math::TQuat<double>::Slerp_NotNormalized
                          (local_f8,pTVar20,(TQuat<double> *)local_188,
                           (double)CONCAT44(uVar39,uVar38));
      dVar6 = pTVar20->X;
      dVar11 = pTVar20->Y;
      dVar12 = pTVar20->Z;
      dVar7 = pTVar20->W;
      dVar28 = dVar6 * dVar6 + dVar12 * dVar12;
      dVar30 = dVar11 * dVar11 + dVar7 * dVar7;
      dVar5 = dVar30 + dVar28;
      dVar28 = dVar28 + dVar30;
      dVar15 = (dVar15 - param_11->S_Y) * (double)CONCAT44(uVar39,uVar38) + param_11->S_Y;
      auVar34._8_4_ = SUB84(dVar28,0);
      auVar34._0_8_ = dVar5;
      auVar34._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
      auVar34 = sqrtpd(in_XMM4,auVar34);
      uVar26 = -(ulonglong)(__real_3e45798ee0000000 <= dVar5);
      uVar27 = -(ulonglong)(__real_3e45798ee0000000 <= dVar28);
      uVar40 = (uint)(uVar26 >> 0x20);
      uVar41 = (uint)(uVar27 >> 0x20);
      auVar36 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar34);
      dVar4 = (dVar4 - param_11->S_Z) * (double)CONCAT44(uVar39,uVar38) + param_11->S_Z;
      auVar37._0_8_ = uVar26 & (ulonglong)(auVar36._0_8_ * dVar6);
      uVar16 = uVar27 & (ulonglong)(auVar36._8_8_ * dVar11);
      auVar37._8_4_ = (undefined4)uVar16;
      auVar37._12_4_ = (undefined4)(uVar16 >> 0x20);
      auVar36._0_4_ = ~(uint)uVar26 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
      auVar36._4_4_ =
           ~uVar40 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20)
      ;
      auVar36._8_4_ = ~(uint)uVar27 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar36._12_4_ =
           ~uVar41 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      local_188 = auVar37 | auVar36;
      auVar34 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar34);
      auVar32._0_4_ = ~(uint)uVar26 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
      auVar32._4_4_ =
           ~uVar40 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20)
      ;
      auVar32._8_4_ = ~(uint)uVar27 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      auVar32._12_4_ =
           ~uVar41 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
      ;
      auVar29._0_8_ = (ulonglong)(auVar34._0_8_ * dVar12) & uVar26;
      uVar27 = (ulonglong)(auVar34._8_8_ * dVar7) & uVar27;
      auVar29._8_4_ = (undefined4)uVar27;
      auVar29._12_4_ = (undefined4)(uVar27 >> 0x20);
      local_178 = auVar32 | auVar29;
      local_res8 = (local_res8 - param_11->S_X) * (double)CONCAT44(uVar39,uVar38) + param_11->S_X;
      local_138 = local_188;
      local_128 = local_178;
    }
  }
  pFVar8 = this->Buffers;
  if (((pFVar8->Additives).ArrayNum <= (int)uVar23) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar1 = (pFVar8->Additives).AllocatorInstance.Data;
  pFVar8 = this->Buffers;
  lVar22 = uVar24 * 0x60;
  dVar5 = *(double *)(pFVar1 + lVar22);
  dVar28 = *(double *)(pFVar1 + lVar22 + 8);
  dVar6 = *(double *)(pFVar1 + lVar22 + 0x10);
  if (((pFVar8->Additives).ArrayNum <= (int)uVar23) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar9 = (pFVar8->Additives).AllocatorInstance.Data;
  pFVar8 = this->Buffers;
  dVar31 = local_188._0_8_;
  dVar33 = local_188._8_8_;
  auVar35._8_4_ = local_188._0_4_;
  auVar35._0_8_ = dVar31;
  auVar35._12_4_ = local_188._4_4_;
  pFVar1 = pFVar9 + uVar24 * 0x60 + 0x30;
  dVar7 = *(double *)pFVar1;
  dVar30 = *(double *)(pFVar1 + 8);
  pFVar9 = pFVar9 + uVar24 * 0x60 + 0x20;
  dVar17 = *(double *)pFVar9;
  dVar18 = *(double *)(pFVar9 + 8);
  dVar11 = dVar7 * (double)local_178._8_8_;
  dVar12 = dVar31 * dVar17 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar30 * (double)local_178._8_8_ +
           dVar18 * dVar33 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           (double)local_178._0_8_ * dVar7 *
           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  local_188._8_8_ =
       auVar35._8_8_ * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
       dVar18 * (double)local_178._8_8_ +
       dVar30 * dVar33 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
       (double)local_178._0_8_ * dVar17 *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  local_188._0_8_ =
       dVar31 * dVar30 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
       dVar17 * (double)local_178._8_8_ +
       dVar7 * dVar33 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
       (double)local_178._0_8_ * dVar18 *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  local_178._8_4_ = SUB84(dVar12,0);
  local_178._0_8_ =
       dVar31 * dVar18 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] + dVar11 +
       dVar17 * dVar33 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
       (double)local_178._0_8_ * dVar30 *
       GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  local_178._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
  if (((pFVar8->Additives).ArrayNum <= (int)uVar23) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar19)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar1 = (pFVar8->Additives).AllocatorInstance.Data;
  lVar22 = uVar24 * 0x60;
  dVar11 = *(double *)(pFVar1 + lVar22 + 0x40);
  dVar12 = *(double *)(pFVar1 + lVar22 + 0x48);
  dVar7 = *(double *)(pFVar1 + lVar22 + 0x50);
  UE::Math::TRotator<double>::TRotator<double>(&local_150,(TQuat<double> *)local_188);
  *param_2 = dVar14 + dVar5;
  *param_3 = dVar13 + dVar28;
  *param_4 = dVar3 + dVar6;
  *param_5 = local_150.Roll;
  *param_6 = local_150.Pitch;
  *param_7 = local_150.Yaw;
  *param_8 = local_res8 + dVar11;
  *param_9 = dVar15 + dVar12;
  *param_10 = dVar4 + dVar7;
  return;
}

