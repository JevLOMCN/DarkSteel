// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationCore
// Functions: 4

// Eval @ 142381e20

TQuat<double> * __thiscall
FInterpCurve<UE::Math::TQuat<double>_>::Eval
          (FInterpCurve<UE::Math::TQuat<double>_> *this,TQuat<double> *__return_storage_ptr__,
          float param_1,TQuat<double> *param_2)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  double dVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  TQuat<double> *pTVar15;
  uint uVar16;
  longlong lVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  double dVar22;
  double dVar25;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined4 uVar26;
  undefined1 auVar27 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  uint uVar33;
  uint uVar34;
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  TQuat<double> local_78 [2];
  
  uVar34 = (this->Points).ArrayNum;
  uVar33 = uVar34 - 1;
  if ((uVar34 == 0) || (iVar12 = _isnan((double)param_1), iVar12 != 0)) {
    dVar3 = param_2->Y;
    __return_storage_ptr__->X = param_2->X;
    __return_storage_ptr__->Y = dVar3;
    dVar3 = param_2->W;
    __return_storage_ptr__->Z = param_2->Z;
    __return_storage_ptr__->W = dVar3;
    return __return_storage_ptr__;
  }
  uVar13 = GetPointIndexForInputValue(this,param_1);
  if (uVar13 == 0xffffffff) {
    iVar12 = (this->Points).ArrayNum;
joined_r0x000142381f78:
    if ((iVar12 < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar1 = (code *)swi(3);
      pTVar15 = (TQuat<double> *)(*pcVar1)();
      return pTVar15;
    }
    pFVar18 = (this->Points).AllocatorInstance.Data;
    dVar3 = *(double *)(pFVar18 + 0x18);
    __return_storage_ptr__->X = *(double *)(pFVar18 + 0x10);
    __return_storage_ptr__->Y = dVar3;
    dVar3 = *(double *)(pFVar18 + 0x28);
    __return_storage_ptr__->Z = *(double *)(pFVar18 + 0x20);
    __return_storage_ptr__->W = dVar3;
    return __return_storage_ptr__;
  }
  uVar16 = 0;
  if (uVar13 == uVar33) {
    iVar12 = (this->Points).ArrayNum;
    if (this->bIsLooped == false) {
      if ((int)uVar33 < iVar12) {
        uVar16 = ~uVar33 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar1 = (code *)swi(3);
        pTVar15 = (TQuat<double> *)(*pcVar1)();
        return pTVar15;
      }
      pFVar19 = (this->Points).AllocatorInstance.Data;
      pFVar18 = pFVar19 + (longlong)(int)uVar33 * 0x80 + 0x10;
      dVar3 = *(double *)(pFVar18 + 8);
      __return_storage_ptr__->X = *(double *)pFVar18;
      __return_storage_ptr__->Y = dVar3;
      pFVar19 = pFVar19 + (longlong)(int)uVar33 * 0x80 + 0x20;
      dVar3 = *(double *)(pFVar19 + 8);
      __return_storage_ptr__->Z = *(double *)pFVar19;
      __return_storage_ptr__->W = dVar3;
      return __return_storage_ptr__;
    }
    uVar14 = 0;
    if ((int)uVar33 < iVar12) {
      uVar14 = ~uVar33 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar1 = (code *)swi(3);
      pTVar15 = (TQuat<double> *)(*pcVar1)();
      return pTVar15;
    }
    if (*(float *)((this->Points).AllocatorInstance.Data + (longlong)(int)uVar33 * 0x80) +
        this->LoopKeyOffset <= param_1) {
      iVar12 = (this->Points).ArrayNum;
      goto joined_r0x000142381f78;
    }
  }
  if (-1 < (int)uVar13) {
    uVar14 = uVar33;
    if (this->bIsLooped != false) {
      uVar14 = uVar34;
    }
    if ((int)uVar13 < (int)uVar14) goto LAB_142382013;
  }
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("Index >= 0 && ((bIsLooped && Index < NumPoints) || (!bIsLooped && Index < LastPoint))"
                      ,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\InterpCurve.h"
                      ,0x162,L"");
  if (bVar10) {
    pcVar1 = (code *)swi(3);
    pTVar15 = (TQuat<double> *)(*pcVar1)();
    return pTVar15;
  }
LAB_142382013:
  if ((this->bIsLooped == false) || (uVar13 != uVar33)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  uVar33 = 0;
  if (!bVar10) {
    uVar33 = uVar13 + 1;
  }
  uVar34 = 0;
  if ((int)uVar13 < (this->Points).ArrayNum) {
    uVar34 = ~uVar13 >> 0x1f;
  }
  if ((uVar34 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar1 = (code *)swi(3);
    pTVar15 = (TQuat<double> *)(*pcVar1)();
    return pTVar15;
  }
  pFVar18 = (this->Points).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x80;
  uVar34 = uVar16;
  if ((int)uVar33 < (this->Points).ArrayNum) {
    uVar34 = ~uVar33 >> 0x1f;
  }
  if ((uVar34 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar1 = (code *)swi(3);
    pTVar15 = (TQuat<double> *)(*pcVar1)();
    return pTVar15;
  }
  pFVar19 = (this->Points).AllocatorInstance.Data + (longlong)(int)uVar33 * 0x80;
  if (bVar10) {
    fVar32 = this->LoopKeyOffset;
  }
  else {
    fVar32 = *(float *)pFVar19 - *(float *)pFVar18;
  }
  if ((fVar32 <= 0.0) || (pFVar18[0x70] == (FScriptContainerElement)0x2)) {
    if ((int)uVar13 < (this->Points).ArrayNum) {
      uVar16 = ~uVar13 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar1 = (code *)swi(3);
      pTVar15 = (TQuat<double> *)(*pcVar1)();
      return pTVar15;
    }
    pFVar19 = (this->Points).AllocatorInstance.Data;
    lVar17 = (longlong)(int)uVar13 * 0x80;
    pFVar18 = pFVar19 + lVar17 + 0x10;
    dVar3 = *(double *)(pFVar18 + 8);
    __return_storage_ptr__->X = *(double *)pFVar18;
    __return_storage_ptr__->Y = dVar3;
    pFVar19 = pFVar19 + lVar17 + 0x20;
    dVar3 = *(double *)(pFVar19 + 8);
    __return_storage_ptr__->Z = *(double *)pFVar19;
    __return_storage_ptr__->W = dVar3;
  }
  else {
    fVar31 = (param_1 - *(float *)pFVar18) / fVar32;
    if (((fVar31 < 0.0) || (__real_3f800000 < fVar31)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Alpha >= 0.0f && Alpha <= 1.0f",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\InterpCurve.h"
                            ,0x16e,L"Bad value in Eval(): in %f prev %f  diff %f alpha %f"), bVar10)
       ) {
      pcVar1 = (code *)swi(3);
      pTVar15 = (TQuat<double> *)(*pcVar1)();
      return pTVar15;
    }
    if (pFVar18[0x70] == (FScriptContainerElement)0x0) {
      pTVar15 = UE::Math::TQuat<double>::Slerp_NotNormalized
                          (local_78,(TQuat<double> *)(pFVar18 + 0x10),
                           (TQuat<double> *)(pFVar19 + 0x10),(double)fVar31);
      dVar9 = __real_3e45798ee0000000;
      dVar3 = pTVar15->Y;
      __return_storage_ptr__->X = pTVar15->X;
      __return_storage_ptr__->Y = dVar3;
      dVar5 = pTVar15->Z;
      dVar6 = pTVar15->W;
      __return_storage_ptr__->Z = dVar5;
      __return_storage_ptr__->W = dVar6;
      dVar7 = __return_storage_ptr__->X;
      dVar8 = __return_storage_ptr__->Y;
      dVar22 = dVar5 * dVar5 + dVar7 * dVar7;
      dVar25 = dVar6 * dVar6 + dVar8 * dVar8;
      dVar3 = dVar25 + dVar22;
      dVar22 = dVar22 + dVar25;
      auVar2._8_4_ = SUB84(dVar22,0);
      auVar2._0_8_ = dVar3;
      auVar2._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
      auVar28 = sqrtpd(in_XMM4,auVar2);
      uVar20 = -(ulonglong)(dVar9 <= dVar3);
      uVar21 = -(ulonglong)(dVar9 <= dVar22);
      uVar33 = (uint)(uVar20 >> 0x20);
      uVar34 = (uint)(uVar21 >> 0x20);
      auVar29 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar28);
      auVar30._0_8_ = uVar20 & (ulonglong)(auVar29._0_8_ * dVar7);
      uVar4 = uVar21 & (ulonglong)(auVar29._8_8_ * dVar8);
      auVar30._8_4_ = (undefined4)uVar4;
      auVar30._12_4_ = (undefined4)(uVar4 >> 0x20);
      auVar23._0_4_ = ~(uint)uVar20 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
      auVar23._4_4_ =
           ~uVar33 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20)
      ;
      auVar23._8_4_ = ~(uint)uVar21 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
      auVar23._12_4_ =
           ~uVar34 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20)
      ;
      auVar28 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar28);
      auVar27._0_4_ = ~(uint)uVar20 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
      auVar27._4_4_ =
           ~uVar33 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20)
      ;
      auVar27._8_4_ = ~(uint)uVar21 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
      auVar27._12_4_ =
           ~uVar34 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20)
      ;
      __return_storage_ptr__->X = (double)SUB168(auVar30 | auVar23,0);
      __return_storage_ptr__->Y = (double)SUB168(auVar30 | auVar23,8);
      auVar24._0_8_ = (ulonglong)(auVar28._0_8_ * dVar5) & uVar20;
      uVar21 = (ulonglong)(auVar28._8_8_ * dVar6) & uVar21;
      auVar24._8_4_ = (undefined4)uVar21;
      auVar24._12_4_ = (undefined4)(uVar21 >> 0x20);
      __return_storage_ptr__->Z = (double)SUB168(auVar27 | auVar24,0);
      __return_storage_ptr__->W = (double)SUB168(auVar27 | auVar24,8);
    }
    else {
      dVar3 = (double)fVar32;
      uVar26 = (undefined4)((ulonglong)dVar3 >> 0x20);
      auVar28._8_4_ = SUB84(dVar3,0);
      auVar28._0_8_ = dVar3;
      auVar28._12_4_ = uVar26;
      local_b8._0_8_ = dVar3 * *(double *)(pFVar19 + 0x30);
      local_b8._8_8_ = auVar28._8_8_ * *(double *)(pFVar19 + 0x38);
      auVar29._8_4_ = SUB84(dVar3,0);
      auVar29._0_8_ = dVar3;
      auVar29._12_4_ = uVar26;
      local_98._0_8_ = dVar3 * *(double *)(pFVar18 + 0x50);
      local_98._8_8_ = auVar29._8_8_ * *(double *)(pFVar18 + 0x58);
      local_b8._24_4_ = SUB84(dVar3 * *(double *)(pFVar19 + 0x48),0);
      local_b8._16_8_ = dVar3 * *(double *)(pFVar19 + 0x40);
      local_b8._28_4_ = (int)((ulonglong)(dVar3 * *(double *)(pFVar19 + 0x48)) >> 0x20);
      local_98._24_4_ = SUB84(dVar3 * *(double *)(pFVar18 + 0x68),0);
      local_98._16_8_ = dVar3 * *(double *)(pFVar18 + 0x60);
      local_98._28_4_ = (int)((ulonglong)(dVar3 * *(double *)(pFVar18 + 0x68)) >> 0x20);
      UE::Math::TQuat<double>::Squad
                (__return_storage_ptr__,(TQuat<double> *)(pFVar18 + 0x10),(TQuat<double> *)local_98,
                 (TQuat<double> *)(pFVar19 + 0x10),(TQuat<double> *)local_b8,(double)fVar31);
    }
  }
  return __return_storage_ptr__;
}

// Eval @ 142382360

TVector<double> * __thiscall
FInterpCurve<UE::Math::TVector<double>_>::Eval
          (FInterpCurve<UE::Math::TVector<double>_> *this,TVector<double> *__return_storage_ptr__,
          float param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  bool bVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  TVector<double> *pTVar15;
  uint uVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  uVar14 = (this->Points).ArrayNum;
  uVar17 = uVar14 - 1;
  if ((uVar14 == 0) || (iVar11 = _isnan((double)param_1), iVar11 != 0)) {
    dVar1 = (param_2->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    return __return_storage_ptr__;
  }
  uVar12 = GetPointIndexForInputValue(this,param_1);
  if (uVar12 == 0xffffffff) {
    iVar11 = (this->Points).ArrayNum;
joined_r0x0001423824be:
    if ((iVar11 < 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar15 = (TVector<double> *)(*pcVar7)();
      return pTVar15;
    }
    pFVar6 = (this->Points).AllocatorInstance.Data;
    dVar1 = *(double *)(pFVar6 + 0x10);
    (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)(pFVar6 + 8);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = *(double *)(pFVar6 + 0x18);
    return __return_storage_ptr__;
  }
  uVar16 = 0;
  if (uVar12 == uVar17) {
    iVar11 = (this->Points).ArrayNum;
    if (this->bIsLooped == false) {
      if ((int)uVar17 < iVar11) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        pTVar15 = (TVector<double> *)(*pcVar7)();
        return pTVar15;
      }
      pFVar18 = (this->Points).AllocatorInstance.Data;
      pFVar6 = pFVar18 + (longlong)(int)uVar17 * 0x58 + 8;
      dVar1 = *(double *)(pFVar6 + 8);
      (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)pFVar6;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
      (__return_storage_ptr__->field0_0x0)._s_0.Z =
           *(double *)(pFVar18 + (longlong)(int)uVar17 * 0x58 + 0x18);
      return __return_storage_ptr__;
    }
    uVar13 = 0;
    if ((int)uVar17 < iVar11) {
      uVar13 = ~uVar17 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar15 = (TVector<double> *)(*pcVar7)();
      return pTVar15;
    }
    if (*(float *)((this->Points).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x58) +
        this->LoopKeyOffset <= param_1) {
      iVar11 = (this->Points).ArrayNum;
      goto joined_r0x0001423824be;
    }
  }
  if (-1 < (int)uVar12) {
    uVar13 = uVar17;
    if (this->bIsLooped != false) {
      uVar13 = uVar14;
    }
    if ((int)uVar12 < (int)uVar13) goto LAB_14238255e;
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("Index >= 0 && ((bIsLooped && Index < NumPoints) || (!bIsLooped && Index < LastPoint))"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\InterpCurve.h"
                     ,0x162,L"");
  if (bVar9) {
    pcVar7 = (code *)swi(3);
    pTVar15 = (TVector<double> *)(*pcVar7)();
    return pTVar15;
  }
LAB_14238255e:
  if ((this->bIsLooped == false) || (uVar12 != uVar17)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  uVar17 = 0;
  if (!bVar9) {
    uVar17 = uVar12 + 1;
  }
  uVar14 = 0;
  if ((int)uVar12 < (this->Points).ArrayNum) {
    uVar14 = ~uVar12 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar7 = (code *)swi(3);
    pTVar15 = (TVector<double> *)(*pcVar7)();
    return pTVar15;
  }
  pFVar6 = (this->Points).AllocatorInstance.Data;
  lVar19 = (longlong)(int)uVar12 * 0x58;
  uVar14 = uVar16;
  if ((int)uVar17 < (this->Points).ArrayNum) {
    uVar14 = ~uVar17 >> 0x1f;
  }
  if ((uVar14 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar7 = (code *)swi(3);
    pTVar15 = (TVector<double> *)(*pcVar7)();
    return pTVar15;
  }
  fVar26 = __real_3f800000;
  pFVar18 = (this->Points).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x58;
  if (bVar9) {
    fVar21 = this->LoopKeyOffset;
  }
  else {
    fVar21 = *(float *)pFVar18 - *(float *)(pFVar6 + lVar19);
  }
  if ((fVar21 <= 0.0) || (pFVar6[lVar19 + 0x50] == (FScriptContainerElement)0x2)) {
    if ((int)uVar12 < (this->Points).ArrayNum) {
      uVar16 = ~uVar12 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      pTVar15 = (TVector<double> *)(*pcVar7)();
      return pTVar15;
    }
    pFVar18 = (this->Points).AllocatorInstance.Data;
    lVar19 = (longlong)(int)uVar12 * 0x58;
    pFVar6 = pFVar18 + lVar19 + 8;
    dVar1 = *(double *)(pFVar6 + 8);
    (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)pFVar6;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = *(double *)(pFVar18 + lVar19 + 0x18);
  }
  else {
    fVar25 = (param_1 - *(float *)(pFVar6 + lVar19)) / fVar21;
    if (((fVar25 < 0.0) || (__real_3f800000 < fVar25)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Alpha >= 0.0f && Alpha <= 1.0f",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\InterpCurve.h"
                           ,0x16e,L"Bad value in Eval(): in %f prev %f  diff %f alpha %f"), bVar9))
    {
      pcVar7 = (code *)swi(3);
      pTVar15 = (TVector<double> *)(*pcVar7)();
      return pTVar15;
    }
    if (pFVar6[lVar19 + 0x50] == (FScriptContainerElement)0x0) {
      dVar1 = *(double *)(pFVar6 + lVar19 + 0x18);
      dVar2 = *(double *)(pFVar18 + 0x18);
      dVar3 = *(double *)(pFVar18 + 8);
      dVar4 = *(double *)(pFVar6 + lVar19 + 8);
      dVar20 = (double)fVar25;
      dVar5 = *(double *)(pFVar6 + lVar19 + 8);
      (__return_storage_ptr__->field0_0x0)._s_0.Y =
           *(double *)(pFVar6 + lVar19 + 0x10) +
           (*(double *)(pFVar18 + 0x10) - *(double *)(pFVar6 + lVar19 + 0x10)) * dVar20;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1 + (dVar2 - dVar1) * dVar20;
      (__return_storage_ptr__->field0_0x0)._s_0.X = (dVar3 - dVar4) * dVar20 + dVar5;
    }
    else {
      fVar23 = fVar25 * fVar25;
      dVar20 = (double)fVar21;
      fVar21 = fVar23 * fVar25;
      fVar22 = fVar21 - fVar23;
      dVar1 = *(double *)(pFVar18 + 0x30);
      fVar25 = (fVar21 - (fVar23 + fVar23)) + fVar25;
      fVar24 = fVar23 * __real_40400000 - (fVar21 + fVar21);
      fVar26 = ((fVar21 + fVar21) - fVar23 * __real_40400000) + fVar26;
      dVar2 = *(double *)(pFVar6 + lVar19 + 0x18);
      dVar3 = *(double *)(pFVar6 + lVar19 + 0x48);
      dVar4 = *(double *)(pFVar18 + 0x18);
      dVar5 = (double)fVar22 * dVar20 * *(double *)(pFVar18 + 0x28) +
              (double)fVar24 * *(double *)(pFVar18 + 0x10) +
              (double)fVar25 * dVar20 * *(double *)(pFVar6 + lVar19 + 0x40) +
              (double)fVar26 * *(double *)(pFVar6 + lVar19 + 8 + 8);
      auVar8._8_4_ = SUB84(dVar5,0);
      auVar8._0_8_ = (double)fVar22 * dVar20 * *(double *)(pFVar18 + 0x20) +
                     (double)fVar24 * *(double *)(pFVar18 + 8) +
                     (double)fVar25 * dVar20 * *(double *)(pFVar6 + lVar19 + 0x38) +
                     (double)fVar26 * *(double *)(pFVar6 + lVar19 + 8);
      auVar8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      *(undefined1 (*) [16])&__return_storage_ptr__->field0_0x0 = auVar8;
      (__return_storage_ptr__->field0_0x0)._s_0.Z =
           (double)fVar25 * dVar20 * dVar3 + (double)fVar26 * dVar2 +
           (double)fVar22 * dVar20 * dVar1 + (double)fVar24 * dVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetPointIndexForInputValue @ 142383d70

int __thiscall
FInterpCurve<UE::Math::TQuat<double>_>::GetPointIndexForInputValue
          (FInterpCurve<UE::Math::TQuat<double>_> *this,float param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar1 = (this->Points).ArrayNum;
  uVar5 = uVar1 - 1;
  if (((int)uVar1 < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumPoints > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\InterpCurve.h"
                         ,0x114,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  if (((this->Points).ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  if (*(float *)(this->Points).AllocatorInstance.Data <= param_1) {
    uVar7 = 0;
    if ((int)uVar5 < (this->Points).ArrayNum) {
      uVar7 = ~uVar5 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    if (param_1 < *(float *)((this->Points).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x80)) {
      uVar5 = 0;
      uVar7 = uVar1;
      while (1 < (int)uVar7) {
        uVar6 = (int)(uVar1 + uVar5) / 2;
        uVar7 = 0;
        if ((int)uVar6 < (this->Points).ArrayNum) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        uVar8 = uVar6;
        if (param_1 < *(float *)((this->Points).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x80
                                )) {
          uVar8 = uVar5;
          uVar1 = uVar6;
        }
        uVar5 = uVar8;
        uVar7 = uVar1 - uVar8;
      }
    }
  }
  else {
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

// GetPointIndexForInputValue @ 142383f10

int __thiscall
FInterpCurve<UE::Math::TVector<double>_>::GetPointIndexForInputValue
          (FInterpCurve<UE::Math::TVector<double>_> *this,float param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar1 = (this->Points).ArrayNum;
  uVar5 = uVar1 - 1;
  if (((int)uVar1 < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumPoints > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\InterpCurve.h"
                         ,0x114,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  if (((this->Points).ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  if (*(float *)(this->Points).AllocatorInstance.Data <= param_1) {
    uVar7 = 0;
    if ((int)uVar5 < (this->Points).ArrayNum) {
      uVar7 = ~uVar5 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
    if (param_1 < *(float *)((this->Points).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x58)) {
      uVar5 = 0;
      uVar7 = uVar1;
      while (1 < (int)uVar7) {
        uVar6 = (int)(uVar1 + uVar5) / 2;
        uVar7 = 0;
        if ((int)uVar6 < (this->Points).ArrayNum) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        uVar8 = uVar6;
        if (param_1 < *(float *)((this->Points).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x58
                                )) {
          uVar8 = uVar5;
          uVar1 = uVar6;
        }
        uVar5 = uVar8;
        uVar7 = uVar1 - uVar8;
      }
    }
  }
  else {
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

