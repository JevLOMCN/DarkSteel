// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 5

// EvalSecondDerivative @ 1498b2940

TVector<double> * __thiscall
FInterpCurve<UE::Math::TVector<double>_>::EvalSecondDerivative
          (FInterpCurve<UE::Math::TVector<double>_> *this,TVector<double> *__return_storage_ptr__,
          float param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  TVector<double> *pTVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  FScriptContainerElement *pFVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  float fVar27;
  float fVar28;
  
  uVar19 = (this->Points).ArrayNum;
  uVar21 = uVar19 - 1;
  if ((uVar19 == 0) || (iVar16 = _isnan((double)param_1), iVar16 != 0)) {
    dVar2 = (param_2->field0_0x0)._s_0.Y;
    dVar1 = (param_2->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
    return __return_storage_ptr__;
  }
  uVar17 = GetPointIndexForInputValue(this,param_1);
  if (uVar17 == 0xffffffff) goto LAB_1498b2e42;
  if (uVar17 == uVar21) {
    if (this->bIsLooped == false) goto LAB_1498b2e42;
    uVar18 = 0;
    if ((int)uVar21 < (this->Points).ArrayNum) {
      uVar18 = ~uVar21 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar6 = (code *)swi(3);
      pTVar20 = (TVector<double> *)(*pcVar6)();
      return pTVar20;
    }
    if (*(float *)((this->Points).AllocatorInstance.Data + (longlong)(int)uVar21 * 0x58) +
        this->LoopKeyOffset <= param_1) goto LAB_1498b2e42;
  }
  if ((int)uVar17 < 0) {
LAB_1498b2a3f:
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Index >= 0 && ((bIsLooped && Index < NumPoints) || (!bIsLooped && Index < LastPoint))"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\InterpCurve.h"
                        ,499,L"");
    if (bVar14) {
      pcVar6 = (code *)swi(3);
      pTVar20 = (TVector<double> *)(*pcVar6)();
      return pTVar20;
    }
  }
  else {
    uVar18 = uVar21;
    if (this->bIsLooped != false) {
      uVar18 = uVar19;
    }
    if ((int)uVar18 <= (int)uVar17) goto LAB_1498b2a3f;
  }
  if ((this->bIsLooped == false) || (uVar17 != uVar21)) {
    bVar14 = false;
  }
  else {
    bVar14 = true;
  }
  uVar21 = 0;
  if (!bVar14) {
    uVar21 = uVar17 + 1;
  }
  uVar19 = 0;
  if ((int)uVar17 < (this->Points).ArrayNum) {
    uVar19 = ~uVar17 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar6 = (code *)swi(3);
    pTVar20 = (TVector<double> *)(*pcVar6)();
    return pTVar20;
  }
  pFVar23 = (this->Points).AllocatorInstance.Data + (longlong)(int)uVar17 * 0x58;
  uVar19 = 0;
  if ((int)uVar21 < (this->Points).ArrayNum) {
    uVar19 = ~uVar21 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar6 = (code *)swi(3);
    pTVar20 = (TVector<double> *)(*pcVar6)();
    return pTVar20;
  }
  pFVar22 = (this->Points).AllocatorInstance.Data + (longlong)(int)uVar21 * 0x58;
  if (bVar14) {
    fVar28 = this->LoopKeyOffset;
  }
  else {
    fVar28 = *(float *)pFVar22 - *(float *)pFVar23;
  }
  if (((0.0 < fVar28) && (pFVar23[0x50] != (FScriptContainerElement)0x2)) &&
     (pFVar23[0x50] != (FScriptContainerElement)0x0)) {
    fVar27 = (param_1 - *(float *)pFVar23) / fVar28;
    if (((fVar27 < 0.0) || (__real_3f800000 < fVar27)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Alpha >= 0.0f && Alpha <= 1.0f",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\InterpCurve.h"
                            ,0x206,
                            L"Bad value in EvalSecondDerivative(): in %f prev %f  diff %f alpha %f")
       , bVar14)) {
      pcVar6 = (code *)swi(3);
      pTVar20 = (TVector<double> *)(*pcVar6)();
      return pTVar20;
    }
    dVar13 = __real_4028000000000000;
    dVar12 = __real_4018000000000000;
    dVar1 = *(double *)(pFVar22 + 0x20);
    dVar2 = *(double *)(pFVar22 + 0x28);
    dVar3 = *(double *)(pFVar22 + 0x10);
    dVar24 = (double)fVar28;
    dVar4 = *(double *)(pFVar23 + 0x48);
    dVar25 = __real_3ff0000000000000 / (double)(fVar28 * fVar28);
    dVar11 = (double)fVar27;
    dVar7 = dVar24 * *(double *)(pFVar23 + 0x40) * __real_4010000000000000;
    dVar26 = *(double *)(pFVar23 + 0x10) * __real_4018000000000000;
    dVar9 = *(double *)(pFVar23 + 0x10) * __real_4028000000000000;
    dVar10 = (dVar2 * dVar24 + dVar24 * *(double *)(pFVar23 + 0x40)) * __real_4018000000000000;
    dVar5 = *(double *)(pFVar22 + 0x18);
    dVar8 = dVar24 * dVar4 * __real_4010000000000000;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         ((*(double *)(pFVar22 + 8) * __real_4018000000000000 -
          (*(double *)(pFVar23 + 8) * __real_4018000000000000 +
           dVar24 * *(double *)(pFVar23 + 0x38) * __real_4010000000000000 + (dVar1 + dVar1) * dVar24
          )) + (((dVar1 * dVar24 + dVar24 * *(double *)(pFVar23 + 0x38)) * __real_4018000000000000 +
                *(double *)(pFVar23 + 8) * __real_4028000000000000) -
               *(double *)(pFVar22 + 8) * __real_4028000000000000) * dVar11) * dVar25;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         ((dVar3 * dVar12 - (dVar26 + dVar7 + (dVar24 + dVar24) * dVar2)) +
         ((dVar10 + dVar9) - dVar3 * dVar13) * dVar11) * dVar25;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         ((dVar5 * dVar12 -
          (*(double *)(pFVar23 + 0x18) * dVar12 + dVar8 +
          (dVar24 + dVar24) * *(double *)(pFVar22 + 0x30))) +
         (((*(double *)(pFVar22 + 0x30) * dVar24 + dVar24 * dVar4) * dVar12 +
          *(double *)(pFVar23 + 0x18) * dVar13) - dVar5 * dVar13) * dVar11) * dVar25;
    return __return_storage_ptr__;
  }
LAB_1498b2e42:
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// FindNearest @ 1498b3b60

float __thiscall
FInterpCurve<UE::Math::TVector2<double>_>::FindNearest
          (FInterpCurve<UE::Math::TVector2<double>_> *this,TVector2<double> *param_1,float *param_2,
          float *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  float local_res8 [2];
  float local_58 [16];
  
  iVar5 = (this->Points).ArrayNum;
  iVar3 = iVar5;
  if (this->bIsLooped == false) {
    iVar3 = iVar5 + -1;
  }
  if (iVar5 < 2) {
    if (iVar5 == 1) {
      pFVar1 = (this->Points).AllocatorInstance.Data;
      dVar8 = (param_1->field0_0x0)._s_0.Y - *(double *)(pFVar1 + 0x10);
      dVar9 = (param_1->field0_0x0)._s_0.X - *(double *)(pFVar1 + 8);
      *param_2 = (float)(dVar8 * dVar8 + dVar9 * dVar9);
      *param_3 = 0.0;
      if (((this->Points).ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        fVar6 = (float)(*pcVar2)();
        return fVar6;
      }
      fVar6 = *(float *)(this->Points).AllocatorInstance.Data;
    }
    else {
      fVar6 = 0.0;
    }
  }
  else {
    fVar6 = FindNearestOnSegment(this,param_1,0,local_res8);
    iVar5 = 1;
    fVar10 = 0.0;
    fVar7 = 0.0;
    if (1 < iVar3) {
      do {
        fVar10 = fVar7;
        fVar7 = FindNearestOnSegment(this,param_1,iVar5,local_58);
        if (local_58[0] < local_res8[0]) {
          fVar10 = (float)iVar5;
          local_res8[0] = local_58[0];
          fVar6 = fVar7;
        }
        iVar5 = iVar5 + 1;
        fVar7 = fVar10;
      } while (iVar5 < iVar3);
    }
    *param_2 = local_res8[0];
    *param_3 = fVar10;
  }
  return fVar6;
}

// FindNearestOnSegment @ 1498b3cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall
FInterpCurve<UE::Math::TVector2<double>_>::FindNearestOnSegment
          (FInterpCurve<UE::Math::TVector2<double>_> *this,TVector2<double> *param_1,int param_2,
          float *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  bool bVar10;
  uint uVar11;
  ForElementType<double> FVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  float fVar22;
  double dVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  float fVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined1 auStackY_1d8 [32];
  undefined4 uStack_15c;
  TArrayView<double_const_,int> local_158;
  TPolynomialRootSolver<double,5> local_148;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  uVar16 = (this->Points).ArrayNum;
  uVar18 = 0;
  uVar20 = 0;
  lVar15 = (longlong)param_2;
  uVar13 = uVar16 - 1;
  if ((this->bIsLooped == false) || (param_2 != uVar13)) {
    uVar20 = param_2 + 1;
  }
  if (-1 < param_2) {
    uVar17 = uVar13;
    if (this->bIsLooped != false) {
      uVar17 = uVar16;
    }
    if (param_2 < (int)uVar17) goto LAB_1498b3d60;
  }
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("PtIdx >= 0 && ((bIsLooped && PtIdx < NumPoints) || (!bIsLooped && PtIdx < LastPoint))"
                      ,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\InterpCurve.h"
                      ,0x251,L"");
  if (bVar10) {
    pcVar8 = (code *)swi(3);
    fVar22 = (float)(*pcVar8)();
    return fVar22;
  }
LAB_1498b3d60:
  uVar16 = 0;
  if ((this->bIsLooped == false) || (param_2 != uVar13)) {
    uVar13 = uVar16;
    if ((int)uVar20 < (this->Points).ArrayNum) {
      uVar13 = ~uVar20 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      fVar22 = (float)(*pcVar8)();
      return fVar22;
    }
    fVar22 = *(float *)((this->Points).AllocatorInstance.Data + (longlong)(int)uVar20 * 0x40);
  }
  else {
    uVar17 = 0;
    if ((int)uVar13 < (this->Points).ArrayNum) {
      uVar17 = ~uVar13 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      fVar22 = (float)(*pcVar8)();
      return fVar22;
    }
    fVar22 = *(float *)((this->Points).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x40) +
             this->LoopKeyOffset;
  }
  uVar17 = (uint)~param_2 >> 0x1f;
  uVar13 = uVar16;
  if (param_2 < (this->Points).ArrayNum) {
    uVar13 = uVar17;
  }
  if ((uVar13 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    fVar22 = (float)(*pcVar8)();
    return fVar22;
  }
  iVar14 = (this->Points).ArrayNum;
  lVar19 = lVar15 * 0x40;
  uVar13 = 0;
  if ((this->Points).AllocatorInstance.Data[lVar19 + 0x38] == (FScriptContainerElement)0x2) {
    uVar11 = uVar13;
    if (param_2 < iVar14) {
      uVar11 = uVar17;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      fVar22 = (float)(*pcVar8)();
      return fVar22;
    }
    pFVar6 = (this->Points).AllocatorInstance.Data;
    dVar9 = *(double *)(pFVar6 + lVar19 + 0x10) - (param_1->field0_0x0)._s_0.Y;
    dVar23 = *(double *)(pFVar6 + lVar19 + 8) - (param_1->field0_0x0)._s_0.X;
    if ((int)uVar20 < (this->Points).ArrayNum) {
      uVar13 = ~uVar20 >> 0x1f;
    }
    fVar32 = (float)(dVar9 * dVar9 + dVar23 * dVar23);
    if ((uVar13 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      fVar22 = (float)(*pcVar8)();
      return fVar22;
    }
    pFVar6 = (this->Points).AllocatorInstance.Data;
    dVar9 = *(double *)(pFVar6 + (longlong)(int)uVar20 * 0x40 + 0x10) - (param_1->field0_0x0)._s_0.Y
    ;
    dVar23 = *(double *)(pFVar6 + (longlong)(int)uVar20 * 0x40 + 8) - (param_1->field0_0x0)._s_0.X;
    fVar25 = (float)(dVar9 * dVar9 + dVar23 * dVar23);
    if (fVar25 <= fVar32) {
      *param_3 = fVar25;
    }
    else {
      *param_3 = fVar32;
      if (param_2 < (this->Points).ArrayNum) {
        uVar16 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        fVar22 = (float)(*pcVar8)();
        return fVar22;
      }
      fVar22 = *(float *)((this->Points).AllocatorInstance.Data + lVar15 * 0x40);
    }
  }
  else {
    uVar11 = uVar16;
    if (param_2 < iVar14) {
      uVar11 = uVar17;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      fVar22 = (float)(*pcVar8)();
      return fVar22;
    }
    fVar22 = fVar22 - *(float *)((this->Points).AllocatorInstance.Data + lVar19);
    uVar11 = uVar13;
    if (param_2 < (this->Points).ArrayNum) {
      uVar11 = uVar17;
    }
    if ((uVar11 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      fVar22 = (float)(*pcVar8)();
      return fVar22;
    }
    iVar14 = (this->Points).ArrayNum;
    if ((this->Points).AllocatorInstance.Data[lVar19 + 0x38] == (FScriptContainerElement)0x0) {
      uVar16 = uVar13;
      if (param_2 < iVar14) {
        uVar16 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        fVar22 = (float)(*pcVar8)();
        return fVar22;
      }
      pFVar6 = (this->Points).AllocatorInstance.Data;
      dVar9 = *(double *)(pFVar6 + lVar15 * 0x40 + 8);
      dVar23 = *(double *)(pFVar6 + lVar15 * 0x40 + 0x10);
      dVar1 = (param_1->field0_0x0)._s_0.X;
      dVar2 = (param_1->field0_0x0)._s_0.Y;
      uVar16 = uVar13;
      if ((int)uVar20 < (this->Points).ArrayNum) {
        uVar16 = ~uVar20 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        fVar22 = (float)(*pcVar8)();
        return fVar22;
      }
      lVar19 = (longlong)(int)uVar20 * 0x40;
      pFVar6 = (this->Points).AllocatorInstance.Data;
      uVar16 = uVar13;
      if (param_2 < (this->Points).ArrayNum) {
        uVar16 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        fVar22 = (float)(*pcVar8)();
        return fVar22;
      }
      pFVar7 = (this->Points).AllocatorInstance.Data;
      dVar3 = *(double *)(pFVar6 + lVar19 + 0x10);
      dVar4 = *(double *)(pFVar7 + lVar15 * 0x40 + 0x10);
      dVar5 = *(double *)(pFVar6 + lVar19 + 8);
      dVar29 = *(double *)(pFVar7 + lVar15 * 0x40 + 8);
      uVar16 = uVar13;
      if ((int)uVar20 < (this->Points).ArrayNum) {
        uVar16 = ~uVar20 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        fVar22 = (float)(*pcVar8)();
        return fVar22;
      }
      pFVar6 = (this->Points).AllocatorInstance.Data;
      uVar16 = uVar13;
      if (param_2 < (this->Points).ArrayNum) {
        uVar16 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        fVar22 = (float)(*pcVar8)();
        return fVar22;
      }
      pFVar7 = (this->Points).AllocatorInstance.Data;
      dVar27 = *(double *)(pFVar6 + lVar19 + 0x10) - *(double *)(pFVar7 + lVar15 * 0x40 + 0x10);
      dVar24 = *(double *)(pFVar6 + lVar19 + 8) - *(double *)(pFVar7 + lVar15 * 0x40 + 8);
      uVar16 = uVar13;
      if ((int)uVar20 < (this->Points).ArrayNum) {
        uVar16 = ~uVar20 >> 0x1f;
      }
      fVar32 = (float)((uint)((float)((dVar3 - dVar4) * (dVar23 - dVar2) +
                                     (dVar5 - dVar29) * (dVar9 - dVar1)) /
                             (float)(dVar27 * dVar27 + dVar24 * dVar24)) ^
                      __xmm_80000000800000008000000080000000);
      if (__real_3f800000 <= fVar32) {
        fVar32 = __real_3f800000;
      }
      if (fVar32 <= 0.0) {
        fVar32 = 0.0;
      }
      if ((uVar16 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        fVar22 = (float)(*pcVar8)();
        return fVar22;
      }
      pFVar6 = (this->Points).AllocatorInstance.Data;
      uVar16 = uVar13;
      if (param_2 < (this->Points).ArrayNum) {
        uVar16 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        fVar22 = (float)(*pcVar8)();
        return fVar22;
      }
      pFVar7 = (this->Points).AllocatorInstance.Data;
      lVar19 = lVar15 * 0x40;
      dVar9 = ((*(double *)(pFVar6 + (longlong)(int)uVar20 * 0x40 + 0x10) -
               *(double *)(pFVar7 + lVar19 + 0x10)) * (double)fVar32 +
              *(double *)(pFVar7 + lVar19 + 0x10)) - (param_1->field0_0x0)._s_0.Y;
      dVar23 = ((*(double *)(pFVar6 + (longlong)(int)uVar20 * 0x40 + 8) -
                *(double *)(pFVar7 + lVar19 + 8)) * (double)fVar32 +
               *(double *)(pFVar7 + lVar19 + 8)) - (param_1->field0_0x0)._s_0.X;
      *param_3 = (float)(dVar9 * dVar9 + dVar23 * dVar23);
      if (param_2 < (this->Points).ArrayNum) {
        uVar13 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        fVar22 = (float)(*pcVar8)();
        return fVar22;
      }
      fVar22 = fVar32 * fVar22 + *(float *)((this->Points).AllocatorInstance.Data + lVar15 * 0x40);
    }
    else {
      if (param_2 < iVar14) {
        uVar13 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        fVar22 = (float)(*pcVar8)();
        return fVar22;
      }
      pFVar6 = (this->Points).AllocatorInstance.Data;
      dVar9 = *(double *)(pFVar6 + lVar15 * 0x40 + 8) - (param_1->field0_0x0)._s_0.X;
      dVar23 = *(double *)(pFVar6 + lVar15 * 0x40 + 0x10) - (param_1->field0_0x0)._s_0.Y;
      uVar13 = uVar16;
      if ((int)uVar20 < (this->Points).ArrayNum) {
        uVar13 = ~uVar20 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        fVar22 = (float)(*pcVar8)();
        return fVar22;
      }
      pFVar6 = (this->Points).AllocatorInstance.Data;
      lVar19 = (longlong)(int)uVar20 * 0x40;
      dVar1 = *(double *)(pFVar6 + lVar19 + 8) - (param_1->field0_0x0)._s_0.X;
      dVar2 = *(double *)(pFVar6 + lVar19 + 0x10) - (param_1->field0_0x0)._s_0.Y;
      uVar13 = uVar16;
      if (param_2 < (this->Points).ArrayNum) {
        uVar13 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        fVar22 = (float)(*pcVar8)();
        return fVar22;
      }
      pFVar6 = (this->Points).AllocatorInstance.Data;
      dVar3 = (double)fVar22;
      dVar4 = dVar3 * *(double *)(pFVar6 + lVar15 * 0x40 + 0x28);
      dVar5 = dVar3 * *(double *)(pFVar6 + lVar15 * 0x40 + 0x30);
      uVar13 = uVar16;
      if ((int)uVar20 < (this->Points).ArrayNum) {
        uVar13 = ~uVar20 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        fVar22 = (float)(*pcVar8)();
        return fVar22;
      }
      pFVar6 = (this->Points).AllocatorInstance.Data;
      dVar24 = dVar3 * *(double *)(pFVar6 + lVar19 + 0x18);
      dVar3 = dVar3 * *(double *)(pFVar6 + lVar19 + 0x20);
      dVar27 = dVar1 * __real_4008000000000000 -
               (dVar4 + dVar4 + dVar9 * __real_4008000000000000 + dVar24);
      dVar29 = dVar2 * __real_4008000000000000 -
               (dVar5 + dVar5 + dVar23 * __real_4008000000000000 + dVar3);
      dVar30 = (dVar9 + dVar9 + dVar24 + dVar4) - (dVar1 + dVar1);
      dVar28 = (dVar23 + dVar3 + dVar23 + dVar5) - (dVar2 + dVar2);
      local_e8 = (dVar28 * dVar28 + dVar30 * dVar30) * __real_4008000000000000;
      local_f0 = (dVar28 * dVar29 + dVar30 * dVar27) * __real_4014000000000000;
      local_f8 = (dVar5 * dVar28 + dVar4 * dVar30) * __real_4010000000000000 + dVar29 * dVar29 +
                 (dVar27 + dVar27) * dVar27 + dVar29 * dVar29;
      local_100 = (dVar23 * dVar28 + dVar9 * dVar30 + dVar5 * dVar29 + dVar4 * dVar27) *
                  __real_4008000000000000;
      local_108 = dVar5 * dVar5 + dVar4 * dVar4 +
                  dVar9 * (dVar27 + dVar27) + dVar23 * dVar29 + dVar23 * dVar29;
      local_110 = dVar23 * dVar5 + dVar9 * dVar4;
      fVar25 = (float)(dVar23 * dVar23 + dVar9 * dVar9);
      fVar26 = (float)(dVar1 * dVar1 + dVar2 * dVar2);
      fVar32 = 0.0;
      if (fVar26 < fVar25) {
        fVar32 = __real_3f800000;
        fVar25 = fVar26;
      }
      local_158.DataPtr = &local_110;
      uVar33 = SUB84(__real_3ff0000000000000,0);
      uVar34 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      local_158._12_4_ = uStack_15c;
      local_158.ArrayNum = 6;
      local_148.Roots.AllocatorInstance.SecondaryData = (ForElementType<double>)0x0;
      local_148.Roots.ArrayNum = 0;
      local_148.Roots.ArrayMax = 5;
      UE::Math::TPolynomialRootSolver<double,5>::FindRootsInRange
                (&local_148,&local_158,0.0,__real_3ff0000000000000,__real_3e45798ee0000000,0x14,
                 __real_3e45798ee0000000);
      uVar21 = uVar18;
      iVar14 = local_148.Roots.ArrayNum;
      if (0 < local_148.Roots.ArrayNum) {
        do {
          uVar20 = (uint)uVar21;
          uVar13 = uVar16;
          if ((int)uVar20 < iVar14) {
            uVar13 = ~uVar20 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             iVar14 = local_148.Roots.ArrayNum, bVar10)) {
            pcVar8 = (code *)swi(3);
            fVar22 = (float)(*pcVar8)();
            return fVar22;
          }
          FVar12 = (ForElementType<double>)&local_148;
          if (local_148.Roots.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
            FVar12 = local_148.Roots.AllocatorInstance.SecondaryData;
          }
          dVar29 = *(double *)((longlong)FVar12 + uVar18 * 8);
          dVar31 = dVar29 * dVar29;
          dVar27 = (dVar29 + dVar29) * dVar31;
          dVar30 = dVar31 * __real_4008000000000000 - dVar27;
          dVar27 = (dVar27 - dVar31 * __real_4008000000000000) + (double)CONCAT44(uVar34,uVar33);
          dVar28 = dVar29 * dVar31 - dVar31;
          dVar29 = (dVar29 * dVar31 - dVar29 * (dVar29 + dVar29)) + dVar29;
          dVar31 = dVar4 * dVar29 + dVar9 * dVar27 + dVar1 * dVar30 + dVar24 * dVar28;
          dVar29 = dVar5 * dVar29 + dVar23 * dVar27 + dVar2 * dVar30 + dVar3 * dVar28;
          fVar26 = (float)(dVar31 * dVar31 + dVar29 * dVar29);
          if (fVar26 < fVar25) {
            uVar13 = uVar16;
            if ((int)uVar20 < iVar14) {
              uVar13 = ~uVar20 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               iVar14 = local_148.Roots.ArrayNum, bVar10)) {
              pcVar8 = (code *)swi(3);
              fVar22 = (float)(*pcVar8)();
              return fVar22;
            }
            FVar12 = (ForElementType<double>)&local_148;
            if (local_148.Roots.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
              FVar12 = local_148.Roots.AllocatorInstance.SecondaryData;
            }
            fVar32 = (float)*(double *)((longlong)FVar12 + uVar18 * 8);
            fVar25 = fVar26;
          }
          uVar33 = SUB84(__real_3ff0000000000000,0);
          uVar34 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
          uVar18 = uVar18 + 1;
          uVar21 = (ulonglong)(uVar20 + 1);
        } while ((int)(uVar20 + 1) < iVar14);
      }
      *param_3 = fVar25;
      if (param_2 < (this->Points).ArrayNum) {
        uVar16 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        fVar22 = (float)(*pcVar8)();
        return fVar22;
      }
      fVar22 = fVar32 * fVar22 + *(float *)((this->Points).AllocatorInstance.Data + lVar15 * 0x40);
      if (local_148.Roots.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
        FMemory::Free((void *)local_148.Roots.AllocatorInstance.SecondaryData);
      }
    }
  }
  return fVar22;
}

// InaccurateFindNearest @ 1498ca8f0

float __thiscall
FInterpCurve<UE::Math::TVector2<double>_>::InaccurateFindNearest
          (FInterpCurve<UE::Math::TVector2<double>_> *this,TVector2<double> *param_1,float *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  float local_res8 [2];
  float local_res20 [2];
  
  iVar5 = (this->Points).ArrayNum;
  iVar3 = iVar5;
  if (this->bIsLooped == false) {
    iVar3 = iVar5 + -1;
  }
  if (1 < iVar5) {
    fVar6 = FindNearestOnSegment(this,param_1,0,local_res8);
    iVar5 = 1;
    if (1 < iVar3) {
      do {
        fVar7 = FindNearestOnSegment(this,param_1,iVar5,local_res20);
        if (local_res20[0] < local_res8[0]) {
          local_res8[0] = local_res20[0];
          fVar6 = fVar7;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
    *param_2 = local_res8[0];
    return fVar6;
  }
  if (iVar5 != 1) {
    return 0.0;
  }
  pFVar1 = (this->Points).AllocatorInstance.Data;
  dVar8 = (param_1->field0_0x0)._s_0.Y - *(double *)(pFVar1 + 0x10);
  dVar9 = (param_1->field0_0x0)._s_0.X - *(double *)(pFVar1 + 8);
  *param_2 = (float)(dVar8 * dVar8 + dVar9 * dVar9);
  if ((this->Points).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      fVar6 = (float)(*pcVar2)();
      return fVar6;
    }
  }
  return *(float *)(this->Points).AllocatorInstance.Data;
}

// InaccurateFindNearest @ 149c79fa0

float __thiscall
FInterpCurve<UE::Math::TVector<double>_>::InaccurateFindNearest
          (FInterpCurve<UE::Math::TVector<double>_> *this,TVector<double> *param_1,float *param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float local_res8 [2];
  float local_res20 [2];
  
  iVar5 = (this->Points).ArrayNum;
  iVar3 = iVar5;
  if (this->bIsLooped == false) {
    iVar3 = iVar5 + -1;
  }
  if (1 < iVar5) {
    fVar6 = FindNearestOnSegment(this,param_1,0,local_res8);
    iVar5 = 1;
    if (1 < iVar3) {
      do {
        fVar7 = FindNearestOnSegment(this,param_1,iVar5,local_res20);
        if (local_res20[0] < local_res8[0]) {
          local_res8[0] = local_res20[0];
          fVar6 = fVar7;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
    *param_2 = local_res8[0];
    return fVar6;
  }
  if (iVar5 != 1) {
    return 0.0;
  }
  pFVar1 = (this->Points).AllocatorInstance.Data;
  dVar10 = (param_1->field0_0x0)._s_0.Y - *(double *)(pFVar1 + 0x10);
  dVar8 = (param_1->field0_0x0)._s_0.Z - *(double *)(pFVar1 + 0x18);
  dVar9 = (param_1->field0_0x0)._s_0.X - *(double *)(pFVar1 + 8);
  *param_2 = (float)(dVar10 * dVar10 + dVar9 * dVar9 + dVar8 * dVar8);
  if ((this->Points).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      fVar6 = (float)(*pcVar2)();
      return fVar6;
    }
  }
  return *(float *)(this->Points).AllocatorInstance.Data;
}

