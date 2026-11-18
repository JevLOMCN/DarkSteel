// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FullBodyIK
// Functions: 1

// ApplyConstraint @ 14df781e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FPositionLimitConstraint::ApplyConstraint
          (FPositionLimitConstraint *this,TArray<FFBIKLinkData,TSizedDefaultAllocator<32>_> *param_1
          ,TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  undefined1 uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  float fVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  double dVar39;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined4 uVar48;
  undefined1 auStackY_238 [32];
  undefined1 local_200 [56];
  TTransform<double> local_1c8;
  TTransform<double> local_168;
  TTransform<double> local_108;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_238;
  uVar19 = this->ConstrainedIndex;
  if (((((int)uVar19 < 0) || (param_1->ArrayNum <= (int)uVar19)) || (this->BaseIndex < 0)) ||
     (param_1->ArrayNum <= this->BaseIndex)) {
    bVar12 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_3777367163522777079>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FullBodyIK\\Source\\FullBodyIK\\Private\\FBIKConstraint.cpp"
                        ,9,
                        "InOutLinkData.IsValidIndex(ConstrainedIndex) && InOutLinkData.IsValidIndex(BaseIndex)"
                       );
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      uVar13 = (*pcVar4)();
      return (bool)uVar13;
    }
    bVar12 = false;
  }
  else {
    uVar14 = 0;
    if ((int)uVar19 < param_2->ArrayNum) {
      uVar14 = ~uVar19 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar4 = (code *)swi(3);
      uVar13 = (*pcVar4)();
      return (bool)uVar13;
    }
    pFVar2 = (param_2->AllocatorInstance).Data;
    lVar16 = (longlong)(int)uVar19 * 0x60;
    dVar6 = *(double *)(pFVar2 + lVar16);
    dVar7 = *(double *)(pFVar2 + lVar16 + 8);
    dVar36 = *(double *)(pFVar2 + lVar16 + 0x10);
    dVar39 = *(double *)(pFVar2 + lVar16 + 0x10 + 8);
    auVar31 = *(undefined1 (*) [16])(pFVar2 + lVar16 + 0x20);
    dVar26 = auVar31._0_8_;
    dVar28 = *(double *)(pFVar2 + lVar16 + 0x30);
    dVar8 = *(double *)(pFVar2 + lVar16 + 0x40);
    dVar9 = *(double *)(pFVar2 + lVar16 + 0x40 + 8);
    dVar10 = *(double *)(pFVar2 + lVar16 + 0x50);
    dVar11 = *(double *)(pFVar2 + lVar16 + 0x50 + 8);
    bVar12 = false;
    local_200._0_16_ = auVar31;
    if (this->bXLimitSet != 0) {
      fVar44 = (float)(this->Limit).field0_0x0._s_0.X;
      fVar25 = (float)(dVar26 - (this->RelativelRefPose).Translation.XY.m128d_f64[0]);
      fVar40 = (float)((uint)fVar44 ^ __xmm_80000000800000008000000080000000);
      if ((fVar25 < fVar40) || (fVar44 < fVar25)) {
        bVar12 = true;
      }
      if (fVar44 <= fVar25) {
        fVar25 = fVar44;
      }
      if (fVar25 <= fVar40) {
        fVar25 = fVar40;
      }
      dVar26 = (double)fVar25;
      local_200._8_4_ = auVar31._8_4_;
      local_200._0_8_ = dVar26;
      local_200._12_4_ = auVar31._12_4_;
    }
    dVar27 = auVar31._8_8_;
    if (this->bYLimitSet != '\0') {
      fVar44 = (float)(this->Limit).field0_0x0._s_0.Y;
      fVar25 = (float)((double)local_200._8_8_ -
                      (this->RelativelRefPose).Translation.XY.m128d_f64[1]);
      fVar40 = (float)((uint)fVar44 ^ __xmm_80000000800000008000000080000000);
      if ((fVar25 < fVar40) || (fVar44 < fVar25)) {
        bVar12 = true;
      }
      else {
        bVar12 = false;
      }
      if (fVar44 <= fVar25) {
        fVar25 = fVar44;
      }
      if (fVar25 <= fVar40) {
        fVar25 = fVar40;
      }
      dVar27 = (double)fVar25;
      dVar26 = (double)local_200._0_8_;
    }
    uVar48 = (undefined4)((ulonglong)dVar27 >> 0x20);
    if (this->bZLimitSet != '\0') {
      fVar44 = (float)(this->Limit).field0_0x0._s_0.Z;
      fVar25 = (float)(dVar28 - (this->RelativelRefPose).Translation.ZW.m128d_f64[0]);
      fVar40 = (float)((uint)fVar44 ^ __xmm_80000000800000008000000080000000);
      if ((fVar25 < fVar40) || (fVar44 < fVar25)) {
        bVar12 = true;
      }
      else {
        bVar12 = false;
      }
      if (fVar44 <= fVar25) {
        fVar25 = fVar44;
      }
      if (fVar25 <= fVar40) {
        fVar25 = fVar40;
      }
      dVar28 = (double)fVar25;
    }
    if (bVar12) {
      uVar19 = this->ConstrainedIndex;
      local_108.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar27,0);
      local_108.Translation.XY.m128d_f64[0] = dVar26;
      local_108.Translation.XY.m128d_f64[1]._4_4_ = uVar48;
      uVar14 = 0;
      if ((int)uVar19 < param_2->ArrayNum) {
        uVar14 = ~uVar19 >> 0x1f;
      }
      local_108.Translation.ZW.m128d_f64[1] = 0.0;
      local_108.Rotation.XY.m128d_f64[0] = dVar6;
      local_108.Rotation.XY.m128d_f64[1] = dVar7;
      local_108.Rotation.ZW.m128d_f64[0] = dVar36;
      local_108.Rotation.ZW.m128d_f64[1] = dVar39;
      local_108.Translation.ZW.m128d_f64[0] = dVar28;
      local_108.Scale3D.XY.m128d_f64[0] = dVar8;
      local_108.Scale3D.XY.m128d_f64[1] = dVar9;
      local_108.Scale3D.ZW.m128d_f64[0] = dVar10;
      local_108.Scale3D.ZW.m128d_f64[1] = dVar11;
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar4 = (code *)swi(3);
        uVar13 = (*pcVar4)();
        return (bool)uVar13;
      }
      pFVar2 = (param_2->AllocatorInstance).Data;
      lVar16 = (longlong)(int)uVar19 * 0x60;
      *(double *)(pFVar2 + lVar16) = dVar6;
      *(double *)(pFVar2 + lVar16 + 8) = dVar7;
      *(double *)(pFVar2 + lVar16 + 0x10) = dVar36;
      *(double *)(pFVar2 + lVar16 + 0x10 + 8) = dVar39;
      auVar31._8_4_ = SUB84(dVar27,0);
      auVar31._0_8_ = dVar26;
      auVar31._12_4_ = uVar48;
      *(undefined1 (*) [16])(pFVar2 + lVar16 + 0x20) = auVar31;
      *(double *)(pFVar2 + lVar16 + 0x30) = dVar28;
      *(double *)(pFVar2 + lVar16 + 0x30 + 8) = 0.0;
      *(double *)(pFVar2 + lVar16 + 0x40) = dVar8;
      *(double *)(pFVar2 + lVar16 + 0x40 + 8) = dVar9;
      *(double *)(pFVar2 + lVar16 + 0x50) = dVar10;
      *(double *)(pFVar2 + lVar16 + 0x50 + 8) = dVar11;
      uVar19 = this->ConstrainedIndex;
      uVar14 = 0;
      if ((int)uVar19 < param_1->ArrayNum) {
        uVar14 = ~uVar19 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar4 = (code *)swi(3);
        uVar13 = (*pcVar4)();
        return (bool)uVar13;
      }
      uVar14 = this->BaseIndex;
      pFVar2 = (param_1->AllocatorInstance).Data;
      uVar18 = 0;
      if ((int)uVar14 < param_1->ArrayNum) {
        uVar18 = ~uVar14 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar4 = (code *)swi(3);
        uVar13 = (*pcVar4)();
        return (bool)uVar13;
      }
      local_1c8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
      local_1c8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
      local_1c8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
      local_1c8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
      local_1c8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
      local_1c8.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
      auVar41._8_8_ = GlobalVectorConstants::FloatZero.m128_u64[1];
      auVar41._0_8_ = auVar41._8_8_;
      local_1c8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
      local_1c8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
      local_1c8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
      local_1c8.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
      local_1c8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
      local_1c8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
      UE::Math::TTransform<double>::Multiply
                (&local_1c8,&local_108,
                 (TTransform<double> *)
                 ((param_1->AllocatorInstance).Data + (longlong)(int)uVar14 * 0x130 + 0x10));
      *(double *)(pFVar2 + (longlong)(int)uVar19 * 0x130 + 0x10) =
           local_1c8.Rotation.XY.m128d_f64[0];
      *(double *)(pFVar2 + (longlong)(int)uVar19 * 0x130 + 0x18) =
           local_1c8.Rotation.XY.m128d_f64[1];
      *(double *)(pFVar2 + (longlong)(int)uVar19 * 0x130 + 0x20) =
           local_1c8.Rotation.ZW.m128d_f64[0];
      *(double *)(pFVar2 + (longlong)(int)uVar19 * 0x130 + 0x28) =
           local_1c8.Rotation.ZW.m128d_f64[1];
      *(double *)(pFVar2 + (longlong)(int)uVar19 * 0x130 + 0x30) =
           local_1c8.Translation.XY.m128d_f64[0];
      *(double *)(pFVar2 + (longlong)(int)uVar19 * 0x130 + 0x38) =
           local_1c8.Translation.XY.m128d_f64[1];
      *(double *)(pFVar2 + (longlong)(int)uVar19 * 0x130 + 0x40) =
           local_1c8.Translation.ZW.m128d_f64[0];
      *(double *)(pFVar2 + (longlong)(int)uVar19 * 0x130 + 0x48) =
           local_1c8.Translation.ZW.m128d_f64[1];
      *(double *)(pFVar2 + (longlong)(int)uVar19 * 0x130 + 0x50) = local_1c8.Scale3D.XY.m128d_f64[0]
      ;
      *(double *)(pFVar2 + (longlong)(int)uVar19 * 0x130 + 0x58) = local_1c8.Scale3D.XY.m128d_f64[1]
      ;
      *(double *)(pFVar2 + (longlong)(int)uVar19 * 0x130 + 0x60) = local_1c8.Scale3D.ZW.m128d_f64[0]
      ;
      *(double *)(pFVar2 + (longlong)(int)uVar19 * 0x130 + 0x68) = local_1c8.Scale3D.ZW.m128d_f64[1]
      ;
      dVar28 = *(double *)(pFVar2 + (longlong)(int)uVar19 * 0x130 + 0x10);
      dVar26 = *(double *)(pFVar2 + (longlong)(int)uVar19 * 0x130 + 0x18);
      dVar6 = *(double *)(pFVar2 + (longlong)(int)uVar19 * 0x130 + 0x20);
      dVar7 = *(double *)(pFVar2 + (longlong)(int)uVar19 * 0x130 + 0x28);
      dVar36 = dVar6 * dVar6 + dVar28 * dVar28;
      dVar39 = dVar7 * dVar7 + dVar26 * dVar26;
      auVar29._8_4_ = SUB84(dVar39,0);
      auVar29._0_8_ = dVar36;
      auVar29._12_4_ = (int)((ulonglong)dVar39 >> 0x20);
      auVar30._0_8_ = auVar29._8_8_ + dVar36;
      auVar30._8_8_ = dVar36 + dVar39;
      auVar42 = sqrtpd(auVar41,auVar30);
      uVar21 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <= auVar30._0_8_)
      ;
      uVar23 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <= auVar30._8_8_)
      ;
      uVar22 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <= auVar30._0_8_)
      ;
      uVar24 = -(ulonglong)
                (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <= auVar30._8_8_)
      ;
      auVar31 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar42);
      auVar42 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar42);
      auVar32._0_8_ = uVar22 & (ulonglong)(auVar31._0_8_ * dVar28);
      uVar5 = uVar24 & (ulonglong)(auVar31._8_8_ * dVar26);
      auVar32._8_4_ = (undefined4)uVar5;
      auVar32._12_4_ = (undefined4)(uVar5 >> 0x20);
      auVar46._0_8_ = uVar21 & (ulonglong)(auVar42._0_8_ * dVar6);
      uVar5 = uVar23 & (ulonglong)(auVar42._8_8_ * dVar7);
      auVar46._8_4_ = (undefined4)uVar5;
      auVar46._12_4_ = (undefined4)(uVar5 >> 0x20);
      auVar42._4_4_ =
           ~(uint)(uVar22 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
      auVar42._0_4_ = ~(uint)uVar22 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
      auVar42._8_4_ = ~(uint)uVar24 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
      auVar42._12_4_ =
           ~(uint)(uVar24 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
      auVar37._0_4_ = ~(uint)uVar21 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
      auVar37._4_4_ =
           ~(uint)(uVar21 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
      auVar37._8_4_ = ~(uint)uVar23 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
      auVar37._12_4_ =
           ~(uint)(uVar23 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
      *(undefined1 (*) [16])(pFVar2 + (longlong)(int)uVar19 * 0x130 + 0x10) = auVar32 | auVar42;
      *(undefined1 (*) [16])(pFVar2 + (longlong)(int)uVar19 * 0x130 + 0x20) = auVar46 | auVar37;
      iVar17 = param_1->ArrayNum;
      uVar19 = this->ConstrainedIndex + 1;
      if ((int)uVar19 < iVar17) {
        lVar16 = (longlong)(int)uVar19 * 0x60;
        lVar20 = (longlong)(int)uVar19 * 0x130;
        do {
          uVar18 = ~uVar19 >> 0x1f;
          uVar14 = 0;
          if ((int)uVar19 < iVar17) {
            uVar14 = uVar18;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar4 = (code *)swi(3);
            uVar13 = (*pcVar4)();
            return (bool)uVar13;
          }
          uVar14 = *(uint *)((param_1->AllocatorInstance).Data + lVar20);
          uVar15 = 0;
          if ((int)uVar19 < param_1->ArrayNum) {
            uVar15 = uVar18;
          }
          if ((uVar15 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar4 = (code *)swi(3);
            uVar13 = (*pcVar4)();
            return (bool)uVar13;
          }
          pFVar2 = (param_1->AllocatorInstance).Data;
          uVar15 = 0;
          if ((int)uVar19 < param_2->ArrayNum) {
            uVar15 = uVar18;
          }
          if ((uVar15 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar4 = (code *)swi(3);
            uVar13 = (*pcVar4)();
            return (bool)uVar13;
          }
          pFVar3 = (param_2->AllocatorInstance).Data;
          uVar18 = 0;
          if ((int)uVar14 < param_1->ArrayNum) {
            uVar18 = ~uVar14 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar4 = (code *)swi(3);
            uVar13 = (*pcVar4)();
            return (bool)uVar13;
          }
          local_168.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_168.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_168.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_168.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_168.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_168.Translation.XY.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[1];
          local_168.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_168.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_168.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_168.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
          local_168.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_168.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          UE::Math::TTransform<double>::Multiply
                    (&local_168,(TTransform<double> *)(pFVar3 + lVar16),
                     (TTransform<double> *)
                     ((param_1->AllocatorInstance).Data + (longlong)(int)uVar14 * 0x130 + 0x10));
          uVar19 = uVar19 + 1;
          lVar16 = lVar16 + 0x60;
          *(double *)(pFVar2 + lVar20 + 0x10) = local_168.Rotation.XY.m128d_f64[0];
          *(double *)(pFVar2 + lVar20 + 0x10 + 8) = local_168.Rotation.XY.m128d_f64[1];
          *(double *)(pFVar2 + lVar20 + 0x20) = local_168.Rotation.ZW.m128d_f64[0];
          *(double *)(pFVar2 + lVar20 + 0x20 + 8) = local_168.Rotation.ZW.m128d_f64[1];
          *(double *)(pFVar2 + lVar20 + 0x30) = local_168.Translation.XY.m128d_f64[0];
          *(double *)(pFVar2 + lVar20 + 0x30 + 8) = local_168.Translation.XY.m128d_f64[1];
          *(double *)(pFVar2 + lVar20 + 0x40) = local_168.Translation.ZW.m128d_f64[0];
          *(double *)(pFVar2 + lVar20 + 0x40 + 8) = local_168.Translation.ZW.m128d_f64[1];
          *(double *)(pFVar2 + lVar20 + 0x50) = local_168.Scale3D.XY.m128d_f64[0];
          *(double *)(pFVar2 + lVar20 + 0x50 + 8) = local_168.Scale3D.XY.m128d_f64[1];
          *(double *)(pFVar2 + lVar20 + 0x60) = local_168.Scale3D.ZW.m128d_f64[0];
          *(double *)(pFVar2 + lVar20 + 0x60 + 8) = local_168.Scale3D.ZW.m128d_f64[1];
          dVar28 = *(double *)(pFVar2 + lVar20 + 0x10);
          dVar26 = *(double *)(pFVar2 + lVar20 + 0x10 + 8);
          dVar6 = *(double *)(pFVar2 + lVar20 + 0x20);
          dVar7 = *(double *)(pFVar2 + lVar20 + 0x20 + 8);
          auVar38._0_8_ = dVar6 * dVar6 + dVar28 * dVar28;
          auVar38._8_8_ = dVar7 * dVar7 + dVar26 * dVar26;
          auVar33._8_4_ = SUB84(auVar38._8_8_,0);
          auVar33._0_8_ = auVar38._0_8_;
          auVar33._12_4_ = (int)((ulonglong)auVar38._8_8_ >> 0x20);
          auVar34._0_8_ = auVar33._8_8_ + auVar38._0_8_;
          auVar34._8_8_ = auVar38._0_8_ + auVar38._8_8_;
          auVar42 = sqrtpd(auVar38,auVar34);
          uVar21 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                    auVar34._0_8_);
          uVar23 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                    auVar34._8_8_);
          uVar22 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                    auVar34._0_8_);
          uVar24 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                    auVar34._8_8_);
          auVar31 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar42);
          auVar42 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar42);
          auVar35._0_8_ = (ulonglong)(auVar31._0_8_ * dVar28) & uVar22;
          uVar5 = uVar24 & (ulonglong)(auVar31._8_8_ * dVar26);
          auVar35._8_4_ = (undefined4)uVar5;
          auVar35._12_4_ = (undefined4)(uVar5 >> 0x20);
          auVar47._0_4_ = ~(uint)uVar22 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
          auVar47._4_4_ =
               ~(uint)(uVar22 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
          auVar47._8_4_ = ~(uint)uVar24 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
          auVar47._12_4_ =
               ~(uint)(uVar24 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
          auVar45._0_8_ = uVar21 & (ulonglong)(auVar42._0_8_ * dVar6);
          uVar5 = uVar23 & (ulonglong)(auVar42._8_8_ * dVar7);
          auVar45._8_4_ = (undefined4)uVar5;
          auVar45._12_4_ = (undefined4)(uVar5 >> 0x20);
          auVar43._0_4_ = ~(uint)uVar21 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
          auVar43._4_4_ =
               ~(uint)(uVar21 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
          auVar43._8_4_ = ~(uint)uVar23 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
          auVar43._12_4_ =
               ~(uint)(uVar23 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
          *(undefined1 (*) [16])(pFVar2 + lVar20 + 0x10) = auVar35 | auVar47;
          *(undefined1 (*) [16])(pFVar2 + lVar20 + 0x20) = auVar45 | auVar43;
          iVar17 = param_1->ArrayNum;
          lVar20 = lVar20 + 0x130;
        } while ((int)uVar19 < iVar17);
      }
    }
    bVar12 = true;
  }
  return bVar12;
}

