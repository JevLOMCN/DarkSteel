// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// ForEachAllocation @ 146830240

void __thiscall
UE::MovieScene::FEvaluateQuaternionInterpolationRotationChannels::ForEachAllocation
          (FEvaluateQuaternionInterpolationRotationChannels *this,FEntityAllocation *param_1,
          TRead<FFrameTime> param_2,
          TMultiComponentData<UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TReadOptional<UE::MovieScene::FSourceDoubleChannel>_>
          *param_3,double *param_4,double *param_5,double *param_6)

{
  uint uVar1;
  FFrameTime FVar2;
  code *pcVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  FFrameTime FVar8;
  FFrameTime FVar9;
  FFrameTime FVar10;
  FFrameTime FVar11;
  FFrameTime FVar12;
  undefined8 uVar13;
  double dVar14;
  double dVar15;
  longlong *plVar16;
  longlong *plVar17;
  bool bVar18;
  longlong lVar19;
  FFrameNumber *pFVar20;
  TQuat<double> *pTVar21;
  TRotator<double> *pTVar22;
  int iVar23;
  FFrameNumber FVar24;
  longlong lVar25;
  longlong lVar26;
  uint uVar27;
  uint uVar28;
  longlong lVar29;
  int iVar30;
  longlong lVar31;
  longlong *plVar32;
  int iVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  undefined1 auVar36 [16];
  double dVar37;
  double dVar40;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar41 [16];
  double dVar42;
  uint uVar43;
  uint uVar44;
  int local_res10;
  double local_288;
  longlong *local_280;
  double local_278;
  longlong *local_270;
  longlong local_268;
  longlong local_260;
  TArrayView<FFrameNumber_const_,int> local_258;
  TArrayView<FFrameNumber_const_,int> local_248;
  TArrayView<FFrameNumber_const_,int> local_238;
  uint local_228;
  undefined4 uStack_224;
  uint local_220;
  undefined4 uStack_21c;
  uint local_218;
  undefined4 uStack_214;
  uint local_210;
  undefined4 uStack_20c;
  uint local_208;
  undefined4 uStack_204;
  uint local_200;
  undefined4 uStack_1fc;
  longlong local_1f8;
  FFrameTime local_1f0;
  ulonglong local_1e8;
  longlong local_1e0;
  TVector<double>_u_0 local_1d8;
  TVector<double>_u_0 local_1c0;
  TVector<double>_u_0 local_1a8;
  TVector<double>_u_0 local_190;
  TVector<double>_u_0 local_178;
  double local_160;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  TQuat<double> local_138;
  TQuat<double> local_118;
  TQuat<double> local_f8;
  TRotator<double> local_d8;
  TRotator<double> local_c0;
  TQuat<double> local_a8 [3];
  
  local_260 = *(longlong *)&param_3->Data;
  local_268 = *(longlong *)&(param_3->Data).field_0x8;
  lVar25 = *(longlong *)&(param_3->Data).field_0x10;
  local_1e0 = lVar25;
  if (((((param_4 != (double *)0x0) != (local_260 != 0)) ||
       ((param_5 != (double *)0x0) != (local_268 != 0))) ||
      ((param_6 != (double *)0x0) != (lVar25 != 0))) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("(OutResultXs != nullptr) == (RotationXs != nullptr) && (OutResultYs != nullptr) == (RotationYs != nullptr) && (OutResultZs != nullptr) == (RotationZs != nullptr)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneQuaternionInterpolationRotationSystem.cpp"
                          ,0x39,L""), bVar18)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  dVar15 = __real_3e45798ee0000000;
  dVar14 = __real_3ff0000000000000;
  local_1e8 = (ulonglong)param_1->Size;
  local_res10 = 0;
  if (local_1e8 != 0) {
    lVar31 = (longlong)param_5 - (longlong)param_4;
    lVar26 = (longlong)param_2 - (longlong)param_4;
    lVar29 = (longlong)param_6 - (longlong)param_4;
    local_1f8 = 0;
    do {
      FVar2 = *(FFrameTime *)((longlong)param_4 + lVar26);
      lVar19 = (longlong)local_res10;
      if (local_260 == 0) {
        local_270 = (longlong *)0x0;
      }
      else {
        local_270 = (longlong *)(local_260 + lVar19 * 8);
      }
      if (local_268 == 0) {
        plVar32 = (longlong *)0x0;
      }
      else {
        plVar32 = (longlong *)(local_268 + lVar19 * 8);
      }
      if (lVar25 == 0) {
        local_280 = (longlong *)0x0;
      }
      else {
        local_280 = (longlong *)(lVar25 + lVar19 * 8);
      }
      uVar43 = 0x80000000;
      uVar44 = 0x7fffffff;
      FVar24 = FVar2.FrameNumber.Value;
      local_1f0 = FVar2;
      if (local_270 != (longlong *)0x0) {
        pFVar20 = *(FFrameNumber **)(*local_270 + 0x70);
        uVar1 = *(uint *)(*local_270 + 0x78);
        local_258.DataPtr = pFVar20;
        if (((int)uVar1 < 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar18)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar30 = 0;
        uVar27 = uVar1;
        if (0 < (int)uVar1) {
          do {
            uVar28 = uVar27 >> 1;
            if (pFVar20[(int)(uVar28 + iVar30)].Value <= FVar24.Value) {
              iVar30 = uVar28 + iVar30 + (uVar27 & 1);
            }
            uVar27 = uVar28;
          } while (uVar28 != 0);
        }
        iVar23 = -1;
        if (-1 < iVar30 + -1) {
          iVar23 = iVar30 + -1;
        }
        iVar33 = -1;
        if (iVar30 < (int)uVar1) {
          iVar33 = iVar30;
        }
        local_258.ArrayNum = uVar1;
        if ((iVar23 != -1) && (iVar33 != -1)) {
          pFVar20 = TArrayView<FFrameNumber_const_,int>::operator[](&local_258,iVar23);
          if (-0x80000000 < pFVar20->Value) {
            pFVar20 = TArrayView<FFrameNumber_const_,int>::operator[](&local_258,iVar23);
            uVar43 = pFVar20->Value;
          }
          pFVar20 = TArrayView<FFrameNumber_const_,int>::operator[](&local_258,iVar33);
          if ((pFVar20->Value != FVar24.Value) &&
             (pFVar20 = TArrayView<FFrameNumber_const_,int>::operator[](&local_258,iVar33),
             pFVar20->Value < 0x7fffffff)) {
            pFVar20 = TArrayView<FFrameNumber_const_,int>::operator[](&local_258,iVar33);
            uVar44 = pFVar20->Value;
          }
        }
      }
      if (plVar32 != (longlong *)0x0) {
        pFVar20 = *(FFrameNumber **)(*plVar32 + 0x70);
        uVar1 = *(uint *)(*plVar32 + 0x78);
        local_248.DataPtr = pFVar20;
        if (((int)uVar1 < 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar18)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar30 = 0;
        uVar27 = uVar1;
        if (0 < (int)uVar1) {
          do {
            uVar28 = uVar27 >> 1;
            if (pFVar20[(int)(uVar28 + iVar30)].Value <= FVar24.Value) {
              iVar30 = uVar28 + iVar30 + (uVar27 & 1);
            }
            uVar27 = uVar28;
          } while (uVar28 != 0);
        }
        iVar23 = -1;
        if (-1 < iVar30 + -1) {
          iVar23 = iVar30 + -1;
        }
        iVar33 = -1;
        if (iVar30 < (int)uVar1) {
          iVar33 = iVar30;
        }
        local_248.ArrayNum = uVar1;
        if ((iVar23 != -1) && (iVar33 != -1)) {
          pFVar20 = TArrayView<FFrameNumber_const_,int>::operator[](&local_248,iVar23);
          if ((int)uVar43 < pFVar20->Value) {
            pFVar20 = TArrayView<FFrameNumber_const_,int>::operator[](&local_248,iVar23);
            uVar43 = pFVar20->Value;
          }
          pFVar20 = TArrayView<FFrameNumber_const_,int>::operator[](&local_248,iVar33);
          if ((pFVar20->Value != FVar24.Value) &&
             (pFVar20 = TArrayView<FFrameNumber_const_,int>::operator[](&local_248,iVar33),
             pFVar20->Value < (int)uVar44)) {
            pFVar20 = TArrayView<FFrameNumber_const_,int>::operator[](&local_248,iVar33);
            uVar44 = pFVar20->Value;
          }
        }
      }
      if (local_280 != (longlong *)0x0) {
        pFVar20 = *(FFrameNumber **)(*local_280 + 0x70);
        uVar1 = *(uint *)(*local_280 + 0x78);
        local_238.DataPtr = pFVar20;
        if (((int)uVar1 < 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar18)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar30 = 0;
        uVar27 = uVar1;
        if (0 < (int)uVar1) {
          do {
            uVar28 = uVar27 >> 1;
            if (pFVar20[(int)(uVar28 + iVar30)].Value <= FVar24.Value) {
              iVar30 = uVar28 + iVar30 + (uVar27 & 1);
            }
            uVar27 = uVar28;
          } while (uVar28 != 0);
        }
        iVar23 = -1;
        if (-1 < iVar30 + -1) {
          iVar23 = iVar30 + -1;
        }
        iVar33 = -1;
        if (iVar30 < (int)uVar1) {
          iVar33 = iVar30;
        }
        local_238.ArrayNum = uVar1;
        if ((iVar23 != -1) && (iVar33 != -1)) {
          pFVar20 = TArrayView<FFrameNumber_const_,int>::operator[](&local_238,iVar23);
          if ((int)uVar43 < pFVar20->Value) {
            pFVar20 = TArrayView<FFrameNumber_const_,int>::operator[](&local_238,iVar23);
            uVar43 = pFVar20->Value;
          }
          pFVar20 = TArrayView<FFrameNumber_const_,int>::operator[](&local_238,iVar33);
          if ((pFVar20->Value != FVar24.Value) &&
             (pFVar20 = TArrayView<FFrameNumber_const_,int>::operator[](&local_238,iVar33),
             pFVar20->Value < (int)uVar44)) {
            pFVar20 = TArrayView<FFrameNumber_const_,int>::operator[](&local_238,iVar33);
            uVar44 = pFVar20->Value;
          }
        }
      }
      plVar17 = local_270;
      plVar16 = local_280;
      if ((uVar43 == 0x80000000) || (uVar44 == 0x7fffffff)) {
        local_1a8._s_0.Z = 0.0;
        local_1a8._s_0.X = 0.0;
        local_1a8._s_0.Y = 0.0;
        if ((local_270 != (longlong *)0x0) &&
           (bVar18 = FMovieSceneDoubleChannel::Evaluate
                               ((FMovieSceneDoubleChannel *)*local_270,FVar2,&local_278), bVar18)) {
          local_1a8._s_0.X = local_278;
        }
        if ((plVar32 != (longlong *)0x0) &&
           (bVar18 = FMovieSceneDoubleChannel::Evaluate
                               ((FMovieSceneDoubleChannel *)*plVar32,FVar2,&local_278), bVar18)) {
          local_1a8._s_0.Y = local_278;
        }
        if ((plVar16 != (longlong *)0x0) &&
           (bVar18 = FMovieSceneDoubleChannel::Evaluate
                               ((FMovieSceneDoubleChannel *)*plVar16,FVar2,&local_278), bVar18)) {
          local_1a8._s_0.Z = local_278;
        }
        UE::Math::TQuat<double>::MakeFromEuler(&local_f8,(TVector<double> *)&local_1a8._s_0);
        pTVar22 = UE::Math::TRotator<double>::TRotator<double>(&local_c0,&local_f8);
        UE::Math::TRotator<double>::Euler(pTVar22,(TVector<double> *)&local_178._s_0);
        if (plVar17 != (longlong *)0x0) {
          *param_4 = local_178._s_0.X;
        }
        lVar25 = local_1e0;
        uVar13 = local_178._s_0.Z;
        if (plVar32 != (longlong *)0x0) {
          *(double *)(lVar31 + (longlong)param_4) = local_178._s_0.Y;
        }
      }
      else {
        local_1d8._s_0.X = 0.0;
        local_1d8._s_0.Y = 0.0;
        local_1d8._s_0.Z = 0.0;
        local_1c0._s_0.Z = 0.0;
        local_1c0._s_0.X = 0.0;
        local_1c0._s_0.Y = 0.0;
        dVar42 = (((double)FVar24.Value + (double)local_1f0.SubFrame) - (double)(int)uVar43) /
                 (double)(int)(uVar44 - uVar43);
        if (dVar14 <= dVar42) {
          dVar42 = dVar14;
        }
        if (dVar42 <= 0.0) {
          dVar42 = 0.0;
        }
        if (local_270 != (longlong *)0x0) {
          uStack_224 = 0;
          FVar2.SubFrame = 0.0;
          FVar2.FrameNumber.Value = uVar43;
          local_228 = uVar43;
          bVar18 = FMovieSceneDoubleChannel::Evaluate
                             ((FMovieSceneDoubleChannel *)*local_270,FVar2,&local_288);
          if (bVar18) {
            local_1d8._s_0.X = local_288;
          }
          uStack_21c = 0;
          FVar8.SubFrame = 0.0;
          FVar8.FrameNumber.Value = uVar44;
          local_220 = uVar44;
          bVar18 = FMovieSceneDoubleChannel::Evaluate
                             ((FMovieSceneDoubleChannel *)*plVar17,FVar8,&local_288);
          if (bVar18) {
            local_1c0._s_0.X = local_288;
          }
        }
        if (plVar32 != (longlong *)0x0) {
          uStack_214 = 0;
          FVar9.SubFrame = 0.0;
          FVar9.FrameNumber.Value = uVar43;
          local_218 = uVar43;
          bVar18 = FMovieSceneDoubleChannel::Evaluate
                             ((FMovieSceneDoubleChannel *)*plVar32,FVar9,&local_288);
          if (bVar18) {
            local_1d8._s_0.Y = local_288;
          }
          uStack_20c = 0;
          FVar10.SubFrame = 0.0;
          FVar10.FrameNumber.Value = uVar44;
          local_210 = uVar44;
          bVar18 = FMovieSceneDoubleChannel::Evaluate
                             ((FMovieSceneDoubleChannel *)*plVar32,FVar10,&local_288);
          if (bVar18) {
            local_1c0._s_0.Y = local_288;
          }
        }
        if (plVar16 != (longlong *)0x0) {
          uStack_204 = 0;
          FVar11.SubFrame = 0.0;
          FVar11.FrameNumber.Value = uVar43;
          local_208 = uVar43;
          bVar18 = FMovieSceneDoubleChannel::Evaluate
                             ((FMovieSceneDoubleChannel *)*plVar16,FVar11,&local_288);
          if (bVar18) {
            local_1d8._s_0.Z = local_288;
          }
          uStack_1fc = 0;
          FVar12.SubFrame = 0.0;
          FVar12.FrameNumber.Value = uVar44;
          local_200 = uVar44;
          bVar18 = FMovieSceneDoubleChannel::Evaluate
                             ((FMovieSceneDoubleChannel *)*plVar16,FVar12,&local_288);
          if (bVar18) {
            local_1c0._s_0.Z = local_288;
          }
        }
        UE::Math::TQuat<double>::MakeFromEuler(&local_118,(TVector<double> *)&local_1d8._s_0);
        UE::Math::TQuat<double>::MakeFromEuler(&local_138,(TVector<double> *)&local_1c0._s_0);
        pTVar21 = UE::Math::TQuat<double>::Slerp_NotNormalized
                            (local_a8,&local_118,&local_138,dVar42);
        local_160 = dVar15;
        dVar42 = pTVar21->X;
        dVar5 = pTVar21->Y;
        dVar6 = pTVar21->Z;
        dVar7 = pTVar21->W;
        dVar37 = dVar42 * dVar42 + dVar6 * dVar6;
        dVar40 = dVar5 * dVar5 + dVar7 * dVar7;
        auVar41._8_4_ = SUB84(dVar40,0);
        auVar41._0_8_ = dVar37;
        auVar41._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
        auVar36._0_8_ = auVar41._8_8_ + dVar37;
        auVar36._8_8_ = dVar37 + dVar40;
        in_XMM4 = sqrtpd(in_XMM4,auVar36);
        uVar34 = -(ulonglong)(dVar15 <= auVar36._0_8_);
        uVar35 = -(ulonglong)(dVar15 <= auVar36._8_8_);
        auVar41 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,in_XMM4);
        uVar43 = (uint)(uVar34 >> 0x20);
        uVar44 = (uint)(uVar35 >> 0x20);
        local_158._0_8_ = uVar34 & (ulonglong)(auVar41._0_8_ * dVar42);
        uVar4 = uVar35 & (ulonglong)(auVar41._8_8_ * dVar5);
        local_158._8_4_ = (undefined4)uVar4;
        local_158._12_4_ = (undefined4)(uVar4 >> 0x20);
        auVar38._0_4_ =
             ~(uint)uVar34 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
        auVar38._4_4_ =
             ~uVar43 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                             0x20);
        auVar38._8_4_ =
             ~(uint)uVar35 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        auVar38._12_4_ =
             ~uVar44 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                             0x20);
        local_158 = local_158 | auVar38;
        auVar41 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,in_XMM4);
        local_148._0_4_ =
             ~(uint)uVar34 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
        local_148._4_4_ =
             ~uVar43 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                             0x20);
        local_148._8_4_ =
             ~(uint)uVar35 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_148._12_4_ =
             ~uVar44 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                             0x20);
        auVar39._0_8_ = (ulonglong)(auVar41._0_8_ * dVar6) & uVar34;
        uVar35 = (ulonglong)(auVar41._8_8_ * dVar7) & uVar35;
        auVar39._8_4_ = (undefined4)uVar35;
        auVar39._12_4_ = (undefined4)(uVar35 >> 0x20);
        local_148 = local_148 | auVar39;
        pTVar22 = UE::Math::TRotator<double>::TRotator<double>(&local_d8,(TQuat<double> *)local_158)
        ;
        UE::Math::TRotator<double>::Euler(pTVar22,(TVector<double> *)&local_190._s_0);
        if (plVar17 != (longlong *)0x0) {
          *param_4 = local_190._s_0.X;
        }
        lVar25 = local_1e0;
        uVar13 = local_190._s_0.Z;
        if (plVar32 != (longlong *)0x0) {
          *(double *)(lVar31 + (longlong)param_4) = local_190._s_0.Y;
        }
      }
      if (plVar16 != (longlong *)0x0) {
        *(undefined8 *)(lVar29 + (longlong)param_4) = uVar13;
      }
      local_res10 = local_res10 + 1;
      local_1f8 = local_1f8 + 1;
      param_4 = param_4 + 1;
      local_1e0 = lVar25;
    } while (local_1f8 < (longlong)local_1e8);
  }
  return;
}

