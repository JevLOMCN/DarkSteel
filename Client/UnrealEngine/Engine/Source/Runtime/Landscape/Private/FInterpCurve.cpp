// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 5

// EvalDerivative @ 145fbe390

TVector<double> * __thiscall
FInterpCurve<UE::Math::TVector<double>_>::EvalDerivative
          (FInterpCurve<UE::Math::TVector<double>_> *this,TVector<double> *__return_storage_ptr__,
          float param_1,TVector<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  TVector<double> *pTVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  
  uVar23 = (this->Points).ArrayNum;
  uVar24 = uVar23 - 1;
  if ((uVar23 == 0) || (iVar18 = _isnan((double)param_1), iVar18 != 0)) {
    dVar2 = (param_2->field0_0x0)._s_0.Y;
    dVar1 = (param_2->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
    return __return_storage_ptr__;
  }
  uVar19 = GetPointIndexForInputValue(this,param_1);
  if (uVar19 == 0xffffffff) {
    if (((this->Points).ArrayNum < 1) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar5 = (code *)swi(3);
      pTVar21 = (TVector<double> *)(*pcVar5)();
      return pTVar21;
    }
    pFVar22 = (this->Points).AllocatorInstance.Data;
    dVar2 = *(double *)(pFVar22 + 0x40);
    dVar1 = *(double *)(pFVar22 + 0x48);
    (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)(pFVar22 + 0x38);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
    return __return_storage_ptr__;
  }
  if (uVar19 == uVar24) {
    iVar18 = (this->Points).ArrayNum;
    if (this->bIsLooped == false) {
      uVar23 = 0;
      if ((int)uVar24 < iVar18) {
        uVar23 = ~uVar24 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar5 = (code *)swi(3);
        pTVar21 = (TVector<double> *)(*pcVar5)();
        return pTVar21;
      }
      pFVar25 = (this->Points).AllocatorInstance.Data;
      pFVar22 = pFVar25 + (longlong)(int)uVar24 * 0x58 + 0x20;
      dVar2 = *(double *)(pFVar22 + 8);
      dVar1 = *(double *)(pFVar25 + (longlong)(int)uVar24 * 0x58 + 0x30);
      (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)pFVar22;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
      return __return_storage_ptr__;
    }
    uVar20 = 0;
    if ((int)uVar24 < iVar18) {
      uVar20 = ~uVar24 >> 0x1f;
    }
    if ((uVar20 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar5 = (code *)swi(3);
      pTVar21 = (TVector<double> *)(*pcVar5)();
      return pTVar21;
    }
    if (*(float *)((this->Points).AllocatorInstance.Data + (longlong)(int)uVar24 * 0x58) +
        this->LoopKeyOffset <= param_1) {
      if (((this->Points).ArrayNum < 1) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar5 = (code *)swi(3);
        pTVar21 = (TVector<double> *)(*pcVar5)();
        return pTVar21;
      }
      pFVar22 = (this->Points).AllocatorInstance.Data;
      dVar2 = *(double *)(pFVar22 + 0x28);
      dVar1 = *(double *)(pFVar22 + 0x30);
      (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)(pFVar22 + 0x20);
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
      return __return_storage_ptr__;
    }
  }
  if (-1 < (int)uVar19) {
    uVar20 = uVar24;
    if (this->bIsLooped != false) {
      uVar20 = uVar23;
    }
    if ((int)uVar19 < (int)uVar20) goto LAB_145fbe5be;
  }
  bVar16 = ::FDebug::CheckVerifyFailedImpl2
                     ("Index >= 0 && ((bIsLooped && Index < NumPoints) || (!bIsLooped && Index < LastPoint))"
                      ,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\InterpCurve.h"
                      ,0x1ad,L"");
  if (bVar16) {
    pcVar5 = (code *)swi(3);
    pTVar21 = (TVector<double> *)(*pcVar5)();
    return pTVar21;
  }
LAB_145fbe5be:
  if ((this->bIsLooped == false) || (uVar19 != uVar24)) {
    bVar16 = false;
  }
  else {
    bVar16 = true;
  }
  uVar24 = 0;
  if (!bVar16) {
    uVar24 = uVar19 + 1;
  }
  uVar23 = 0;
  if ((int)uVar19 < (this->Points).ArrayNum) {
    uVar23 = ~uVar19 >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar5 = (code *)swi(3);
    pTVar21 = (TVector<double> *)(*pcVar5)();
    return pTVar21;
  }
  pFVar22 = (this->Points).AllocatorInstance.Data + (longlong)(int)uVar19 * 0x58;
  uVar23 = 0;
  if ((int)uVar24 < (this->Points).ArrayNum) {
    uVar23 = ~uVar24 >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar5 = (code *)swi(3);
    pTVar21 = (TVector<double> *)(*pcVar5)();
    return pTVar21;
  }
  pFVar25 = (this->Points).AllocatorInstance.Data + (longlong)(int)uVar24 * 0x58;
  if (bVar16) {
    fVar29 = this->LoopKeyOffset;
  }
  else {
    fVar29 = *(float *)pFVar25 - *(float *)pFVar22;
  }
  if ((fVar29 <= 0.0) || (pFVar22[0x50] == (FScriptContainerElement)0x2)) {
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  }
  else if (pFVar22[0x50] == (FScriptContainerElement)0x0) {
    dVar26 = __real_3ff0000000000000 / (double)fVar29;
    dVar1 = *(double *)(pFVar25 + 0x10);
    dVar2 = *(double *)(pFVar22 + 0x10);
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (*(double *)(pFVar25 + 8) - *(double *)(pFVar22 + 8)) * dVar26;
    dVar3 = *(double *)(pFVar25 + 0x18);
    dVar4 = *(double *)(pFVar22 + 0x18);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (dVar1 - dVar2) * dVar26;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (dVar3 - dVar4) * dVar26;
  }
  else {
    fVar30 = (param_1 - *(float *)pFVar22) / fVar29;
    if (((fVar30 < 0.0) || (__real_3f800000 < fVar30)) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Alpha >= 0.0f && Alpha <= 1.0f",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\InterpCurve.h"
                            ,0x1bf,L"Bad value in EvalDerivative(): in %f prev %f  diff %f alpha %f"
                           ), bVar16)) {
      pcVar5 = (code *)swi(3);
      pTVar21 = (TVector<double> *)(*pcVar5)();
      return pTVar21;
    }
    dVar15 = __real_4018000000000000;
    dVar14 = __real_4010000000000000;
    dVar13 = __real_4008000000000000;
    dVar1 = *(double *)(pFVar25 + 0x20);
    dVar2 = *(double *)(pFVar25 + 0x28);
    dVar3 = *(double *)(pFVar22 + 0x10);
    dVar7 = (double)fVar29;
    dVar8 = *(double *)(pFVar25 + 0x10) * __real_4018000000000000;
    dVar4 = dVar7 * *(double *)(pFVar22 + 0x48);
    dVar28 = dVar7 * *(double *)(pFVar22 + 0x38);
    dVar10 = dVar7 * *(double *)(pFVar22 + 0x40);
    dVar26 = *(double *)(pFVar25 + 0x18) * __real_4018000000000000;
    dVar9 = (double)fVar30;
    dVar12 = (double)(fVar30 * fVar30);
    dVar6 = __real_3ff0000000000000 / dVar7;
    dVar27 = dVar10 * __real_4010000000000000;
    dVar11 = (dVar2 * dVar7 + dVar10) * __real_4008000000000000;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         ((*(double *)(pFVar25 + 8) * __real_4018000000000000 -
          (dVar28 * __real_4010000000000000 + *(double *)(pFVar22 + 8) * __real_4018000000000000 +
          (dVar1 + dVar1) * dVar7)) * dVar9 +
          (((dVar1 * dVar7 + dVar28) * __real_4008000000000000 +
           *(double *)(pFVar22 + 8) * __real_4018000000000000) -
          *(double *)(pFVar25 + 8) * __real_4018000000000000) * dVar12 + dVar28) * dVar6;
    (__return_storage_ptr__->field0_0x0)._s_0.Y =
         ((dVar8 - (dVar27 + dVar3 * dVar15 + dVar2 * (dVar7 + dVar7))) * dVar9 +
          ((dVar11 + dVar3 * dVar15) - dVar8) * dVar12 + dVar10) * dVar6;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         ((dVar26 - (dVar4 * dVar14 + *(double *)(pFVar22 + 0x18) * dVar15 +
                    *(double *)(pFVar25 + 0x30) * (dVar7 + dVar7))) * dVar9 +
          (((*(double *)(pFVar25 + 0x30) * dVar7 + dVar4) * dVar13 +
           *(double *)(pFVar22 + 0x18) * dVar15) - dVar26) * dVar12 + dVar4) * dVar6;
  }
  return __return_storage_ptr__;
}

// FindNearest @ 145fbf510

float __thiscall
FInterpCurve<UE::Math::TVector<double>_>::FindNearest
          (FInterpCurve<UE::Math::TVector<double>_> *this,TVector<double> *param_1,float *param_2,
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
  double dVar10;
  float fVar11;
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
      dVar10 = (param_1->field0_0x0)._s_0.Y - *(double *)(pFVar1 + 0x10);
      dVar8 = (param_1->field0_0x0)._s_0.Z - *(double *)(pFVar1 + 0x18);
      dVar9 = (param_1->field0_0x0)._s_0.X - *(double *)(pFVar1 + 8);
      *param_2 = (float)(dVar10 * dVar10 + dVar9 * dVar9 + dVar8 * dVar8);
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
    fVar11 = 0.0;
    fVar7 = 0.0;
    if (1 < iVar3) {
      do {
        fVar11 = fVar7;
        fVar7 = FindNearestOnSegment(this,param_1,iVar5,local_58);
        if (local_58[0] < local_res8[0]) {
          fVar11 = (float)iVar5;
          local_res8[0] = local_58[0];
          fVar6 = fVar7;
        }
        iVar5 = iVar5 + 1;
        fVar7 = fVar11;
      } while (iVar5 < iVar3);
    }
    *param_2 = local_res8[0];
    *param_3 = fVar11;
  }
  return fVar6;
}

// FindNearest @ 145fbf6a0

float __thiscall
FInterpCurve<UE::Math::TVector<double>_>::FindNearest
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

// FindNearestOnSegment @ 145fbf990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall
FInterpCurve<UE::Math::TVector<double>_>::FindNearestOnSegment
          (FInterpCurve<UE::Math::TVector<double>_> *this,TVector<double> *param_1,int param_2,
          float *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  ForElementType<double> FVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  float fVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined1 auStackY_1f8 [32];
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
  
  local_e0 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  uVar20 = (this->Points).ArrayNum;
  uVar22 = 0;
  uVar24 = 0;
  lVar19 = (longlong)param_2;
  uVar16 = uVar20 - 1;
  if ((this->bIsLooped == false) || (param_2 != uVar16)) {
    uVar24 = param_2 + 1;
  }
  if (-1 < param_2) {
    uVar21 = uVar16;
    if (this->bIsLooped != false) {
      uVar21 = uVar20;
    }
    if (param_2 < (int)uVar21) goto LAB_145fbfa20;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("PtIdx >= 0 && ((bIsLooped && PtIdx < NumPoints) || (!bIsLooped && PtIdx < LastPoint))"
                      ,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\InterpCurve.h"
                      ,0x251,L"");
  if (bVar13) {
    pcVar9 = (code *)swi(3);
    fVar26 = (float)(*pcVar9)();
    return fVar26;
  }
LAB_145fbfa20:
  uVar20 = 0;
  if ((this->bIsLooped == false) || (param_2 != uVar16)) {
    uVar16 = uVar20;
    if ((int)uVar24 < (this->Points).ArrayNum) {
      uVar16 = ~uVar24 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar9 = (code *)swi(3);
      fVar26 = (float)(*pcVar9)();
      return fVar26;
    }
    fVar26 = *(float *)((this->Points).AllocatorInstance.Data + (longlong)(int)uVar24 * 0x58);
  }
  else {
    uVar21 = 0;
    if ((int)uVar16 < (this->Points).ArrayNum) {
      uVar21 = ~uVar16 >> 0x1f;
    }
    if ((uVar21 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar9 = (code *)swi(3);
      fVar26 = (float)(*pcVar9)();
      return fVar26;
    }
    fVar26 = *(float *)((this->Points).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x58) +
             this->LoopKeyOffset;
  }
  uVar21 = (uint)~param_2 >> 0x1f;
  uVar16 = uVar20;
  if (param_2 < (this->Points).ArrayNum) {
    uVar16 = uVar21;
  }
  if ((uVar16 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar9 = (code *)swi(3);
    fVar26 = (float)(*pcVar9)();
    return fVar26;
  }
  iVar17 = (this->Points).ArrayNum;
  lVar23 = lVar19 * 0x58;
  uVar16 = 0;
  if ((this->Points).AllocatorInstance.Data[lVar23 + 0x50] == (FScriptContainerElement)0x2) {
    uVar14 = uVar16;
    if (param_2 < iVar17) {
      uVar14 = uVar21;
    }
    if ((uVar14 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar9 = (code *)swi(3);
      fVar26 = (float)(*pcVar9)();
      return fVar26;
    }
    pFVar7 = (this->Points).AllocatorInstance.Data;
    dVar30 = *(double *)(pFVar7 + lVar23 + 0x10) - (param_1->field0_0x0)._s_0.Y;
    dVar29 = *(double *)(pFVar7 + lVar23 + 8) - (param_1->field0_0x0)._s_0.X;
    dVar10 = *(double *)(pFVar7 + lVar23 + 0x18) - (param_1->field0_0x0)._s_0.Z;
    if ((int)uVar24 < (this->Points).ArrayNum) {
      uVar16 = ~uVar24 >> 0x1f;
    }
    fVar39 = (float)(dVar30 * dVar30 + dVar29 * dVar29 + dVar10 * dVar10);
    if ((uVar16 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar9 = (code *)swi(3);
      fVar26 = (float)(*pcVar9)();
      return fVar26;
    }
    lVar23 = (longlong)(int)uVar24 * 0x58;
    pFVar7 = (this->Points).AllocatorInstance.Data;
    dVar30 = *(double *)(pFVar7 + lVar23 + 0x10) - (param_1->field0_0x0)._s_0.Y;
    dVar29 = *(double *)(pFVar7 + lVar23 + 8) - (param_1->field0_0x0)._s_0.X;
    dVar10 = *(double *)(pFVar7 + lVar23 + 0x18) - (param_1->field0_0x0)._s_0.Z;
    fVar28 = (float)(dVar30 * dVar30 + dVar29 * dVar29 + dVar10 * dVar10);
    if (fVar28 <= fVar39) {
      *param_3 = fVar28;
    }
    else {
      *param_3 = fVar39;
      if (param_2 < (this->Points).ArrayNum) {
        uVar20 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        fVar26 = (float)(*pcVar9)();
        return fVar26;
      }
      fVar26 = *(float *)((this->Points).AllocatorInstance.Data + lVar19 * 0x58);
    }
  }
  else {
    uVar14 = uVar20;
    if (param_2 < iVar17) {
      uVar14 = uVar21;
    }
    if ((uVar14 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar9 = (code *)swi(3);
      fVar26 = (float)(*pcVar9)();
      return fVar26;
    }
    fVar26 = fVar26 - *(float *)((this->Points).AllocatorInstance.Data + lVar23);
    uVar14 = uVar16;
    if (param_2 < (this->Points).ArrayNum) {
      uVar14 = uVar21;
    }
    if ((uVar14 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar9 = (code *)swi(3);
      fVar26 = (float)(*pcVar9)();
      return fVar26;
    }
    iVar17 = (this->Points).ArrayNum;
    if ((this->Points).AllocatorInstance.Data[lVar23 + 0x50] == (FScriptContainerElement)0x0) {
      uVar20 = uVar16;
      if (param_2 < iVar17) {
        uVar20 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        fVar26 = (float)(*pcVar9)();
        return fVar26;
      }
      pFVar7 = (this->Points).AllocatorInstance.Data;
      lVar23 = lVar19 * 0x58;
      dVar10 = *(double *)(pFVar7 + lVar23 + 8);
      dVar29 = *(double *)(pFVar7 + lVar23 + 0x10);
      dVar30 = *(double *)(pFVar7 + lVar23 + 0x18);
      dVar1 = (param_1->field0_0x0)._s_0.X;
      dVar2 = (param_1->field0_0x0)._s_0.Y;
      dVar3 = (param_1->field0_0x0)._s_0.Z;
      uVar20 = uVar16;
      if ((int)uVar24 < (this->Points).ArrayNum) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        fVar26 = (float)(*pcVar9)();
        return fVar26;
      }
      pFVar7 = (this->Points).AllocatorInstance.Data;
      lVar23 = (longlong)(int)uVar24 * 0x58;
      uVar20 = uVar16;
      if (param_2 < (this->Points).ArrayNum) {
        uVar20 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        fVar26 = (float)(*pcVar9)();
        return fVar26;
      }
      pFVar8 = (this->Points).AllocatorInstance.Data;
      lVar18 = lVar19 * 0x58;
      dVar4 = *(double *)(pFVar7 + lVar23 + 0x10);
      dVar5 = *(double *)(pFVar7 + lVar23 + 8);
      dVar6 = *(double *)(pFVar7 + lVar23 + 0x18);
      dVar31 = *(double *)(pFVar8 + lVar18 + 0x10);
      dVar38 = *(double *)(pFVar8 + lVar18 + 8);
      dVar32 = *(double *)(pFVar8 + lVar18 + 0x18);
      uVar20 = uVar16;
      if ((int)uVar24 < (this->Points).ArrayNum) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        fVar26 = (float)(*pcVar9)();
        return fVar26;
      }
      pFVar7 = (this->Points).AllocatorInstance.Data;
      uVar20 = uVar16;
      if (param_2 < (this->Points).ArrayNum) {
        uVar20 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        fVar26 = (float)(*pcVar9)();
        return fVar26;
      }
      pFVar8 = (this->Points).AllocatorInstance.Data;
      lVar18 = lVar19 * 0x58;
      uVar20 = uVar16;
      if ((int)uVar24 < (this->Points).ArrayNum) {
        uVar20 = ~uVar24 >> 0x1f;
      }
      fVar39 = (float)((uint)((float)((dVar4 - dVar31) * (dVar29 - dVar2) +
                                      (dVar5 - dVar38) * (dVar10 - dVar1) +
                                     (dVar6 - dVar32) * (dVar30 - dVar3)) /
                             (float)((*(double *)(pFVar7 + lVar23 + 0x10) -
                                     *(double *)(pFVar8 + lVar18 + 0x10)) *
                                     (*(double *)(pFVar7 + lVar23 + 0x10) -
                                     *(double *)(pFVar8 + lVar18 + 0x10)) +
                                     (*(double *)(pFVar7 + lVar23 + 8) -
                                     *(double *)(pFVar8 + lVar18 + 8)) *
                                     (*(double *)(pFVar7 + lVar23 + 8) -
                                     *(double *)(pFVar8 + lVar18 + 8)) +
                                    (*(double *)(pFVar7 + lVar23 + 0x18) -
                                    *(double *)(pFVar8 + lVar18 + 0x18)) *
                                    (*(double *)(pFVar7 + lVar23 + 0x18) -
                                    *(double *)(pFVar8 + lVar18 + 0x18)))) ^
                      __xmm_80000000800000008000000080000000);
      if (__real_3f800000 <= fVar39) {
        fVar39 = __real_3f800000;
      }
      if (fVar39 <= 0.0) {
        fVar39 = 0.0;
      }
      if ((uVar20 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        fVar26 = (float)(*pcVar9)();
        return fVar26;
      }
      pFVar7 = (this->Points).AllocatorInstance.Data;
      lVar23 = (longlong)(int)uVar24 * 0x58;
      uVar20 = uVar16;
      if (param_2 < (this->Points).ArrayNum) {
        uVar20 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        fVar26 = (float)(*pcVar9)();
        return fVar26;
      }
      pFVar8 = (this->Points).AllocatorInstance.Data;
      lVar18 = lVar19 * 0x58;
      dVar29 = (double)fVar39;
      dVar30 = ((*(double *)(pFVar7 + lVar23 + 0x10) - *(double *)(pFVar8 + lVar18 + 0x10)) * dVar29
               + *(double *)(pFVar8 + lVar18 + 0x10)) - (param_1->field0_0x0)._s_0.Y;
      dVar10 = ((*(double *)(pFVar7 + lVar23 + 0x18) - *(double *)(pFVar8 + lVar18 + 0x18)) * dVar29
               + *(double *)(pFVar8 + lVar18 + 0x18)) - (param_1->field0_0x0)._s_0.Z;
      dVar29 = ((*(double *)(pFVar7 + lVar23 + 8) - *(double *)(pFVar8 + lVar18 + 8)) * dVar29 +
               *(double *)(pFVar8 + lVar18 + 8)) - (param_1->field0_0x0)._s_0.X;
      *param_3 = (float)(dVar30 * dVar30 + dVar29 * dVar29 + dVar10 * dVar10);
      if (param_2 < (this->Points).ArrayNum) {
        uVar16 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        fVar26 = (float)(*pcVar9)();
        return fVar26;
      }
      fVar26 = fVar39 * fVar26 + *(float *)((this->Points).AllocatorInstance.Data + lVar19 * 0x58);
    }
    else {
      if (param_2 < iVar17) {
        uVar16 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        fVar26 = (float)(*pcVar9)();
        return fVar26;
      }
      pFVar7 = (this->Points).AllocatorInstance.Data;
      lVar23 = lVar19 * 0x58;
      dVar29 = *(double *)(pFVar7 + lVar23 + 8) - (param_1->field0_0x0)._s_0.X;
      dVar30 = *(double *)(pFVar7 + lVar23 + 0x10) - (param_1->field0_0x0)._s_0.Y;
      dVar10 = *(double *)(pFVar7 + lVar23 + 0x18) - (param_1->field0_0x0)._s_0.Z;
      uVar16 = uVar20;
      if ((int)uVar24 < (this->Points).ArrayNum) {
        uVar16 = ~uVar24 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        fVar26 = (float)(*pcVar9)();
        return fVar26;
      }
      pFVar7 = (this->Points).AllocatorInstance.Data;
      lVar23 = (longlong)(int)uVar24 * 0x58;
      dVar2 = *(double *)(pFVar7 + lVar23 + 8) - (param_1->field0_0x0)._s_0.X;
      dVar3 = *(double *)(pFVar7 + lVar23 + 0x10) - (param_1->field0_0x0)._s_0.Y;
      dVar1 = *(double *)(pFVar7 + lVar23 + 0x18) - (param_1->field0_0x0)._s_0.Z;
      uVar16 = uVar20;
      if (param_2 < (this->Points).ArrayNum) {
        uVar16 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        fVar26 = (float)(*pcVar9)();
        return fVar26;
      }
      pFVar7 = (this->Points).AllocatorInstance.Data;
      lVar18 = lVar19 * 0x58;
      dVar6 = (double)fVar26;
      dVar4 = dVar6 * *(double *)(pFVar7 + lVar18 + 0x38);
      dVar5 = dVar6 * *(double *)(pFVar7 + lVar18 + 0x40);
      dVar31 = dVar6 * *(double *)(pFVar7 + lVar18 + 0x48);
      uVar16 = uVar20;
      if ((int)uVar24 < (this->Points).ArrayNum) {
        uVar16 = ~uVar24 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        fVar26 = (float)(*pcVar9)();
        return fVar26;
      }
      pFVar7 = (this->Points).AllocatorInstance.Data;
      dVar33 = dVar6 * *(double *)(pFVar7 + lVar23 + 0x28);
      dVar36 = dVar6 * *(double *)(pFVar7 + lVar23 + 0x20);
      dVar6 = dVar6 * *(double *)(pFVar7 + lVar23 + 0x30);
      dVar12 = dVar2 * __real_4008000000000000 -
               (dVar4 + dVar4 + dVar29 * __real_4008000000000000 + dVar36);
      dVar34 = dVar3 * __real_4008000000000000 -
               (dVar5 + dVar5 + dVar30 * __real_4008000000000000 + dVar33);
      dVar11 = dVar1 * __real_4008000000000000 -
               (dVar31 + dVar31 + dVar10 * __real_4008000000000000 + dVar6);
      dVar32 = (dVar29 + dVar29 + dVar4 + dVar36) - (dVar2 + dVar2);
      dVar38 = (dVar5 + dVar33 + dVar30 + dVar30) - (dVar3 + dVar3);
      dVar37 = (dVar10 + dVar6 + dVar31 + dVar10) - (dVar1 + dVar1);
      local_e8 = (dVar38 * dVar38 + dVar32 * dVar32 + dVar37 * dVar37) * __real_4008000000000000;
      local_f0 = (dVar38 * dVar34 + dVar32 * dVar12 + dVar37 * dVar11) * __real_4014000000000000;
      dVar35 = dVar34 * dVar34 + dVar12 * dVar12;
      local_f8 = (dVar5 * dVar38 + dVar4 * dVar32 + dVar31 * dVar37) * __real_4010000000000000 +
                 dVar35 + (dVar11 + dVar11) * dVar11 + dVar35;
      dVar35 = dVar34 * dVar30 + dVar12 * dVar29;
      local_100 = (dVar31 * dVar11 + dVar5 * dVar34 + dVar4 * dVar12 +
                  dVar37 * dVar10 + dVar38 * dVar30 + dVar32 * dVar29) * __real_4008000000000000;
      local_108 = dVar31 * dVar31 + dVar5 * dVar5 + dVar4 * dVar4 +
                  (dVar10 + dVar10) * dVar11 + dVar35 + dVar35;
      local_110 = dVar5 * dVar30 + dVar4 * dVar29 + dVar31 * dVar10;
      fVar28 = (float)(dVar30 * dVar30 + dVar29 * dVar29 + dVar10 * dVar10);
      fVar27 = (float)(dVar2 * dVar2 + dVar3 * dVar3 + dVar1 * dVar1);
      fVar39 = 0.0;
      if (fVar27 < fVar28) {
        fVar39 = __real_3f800000;
        fVar28 = fVar27;
      }
      local_158.DataPtr = &local_110;
      uVar40 = SUB84(__real_3ff0000000000000,0);
      uVar41 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
      local_158._12_4_ = uStack_15c;
      local_158.ArrayNum = 6;
      local_148.Roots.AllocatorInstance.SecondaryData = (ForElementType<double>)0x0;
      local_148.Roots.ArrayNum = 0;
      local_148.Roots.ArrayMax = 5;
      UE::Math::TPolynomialRootSolver<double,5>::FindRootsInRange
                (&local_148,&local_158,0.0,__real_3ff0000000000000,__real_3e45798ee0000000,0x14,
                 __real_3e45798ee0000000);
      uVar25 = uVar22;
      iVar17 = local_148.Roots.ArrayNum;
      if (0 < local_148.Roots.ArrayNum) {
        do {
          uVar24 = (uint)uVar25;
          uVar16 = uVar20;
          if ((int)uVar24 < iVar17) {
            uVar16 = ~uVar24 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             iVar17 = local_148.Roots.ArrayNum, bVar13)) {
            pcVar9 = (code *)swi(3);
            fVar26 = (float)(*pcVar9)();
            return fVar26;
          }
          FVar15 = (ForElementType<double>)&local_148;
          if (local_148.Roots.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
            FVar15 = local_148.Roots.AllocatorInstance.SecondaryData;
          }
          dVar38 = *(double *)((longlong)FVar15 + uVar22 * 8);
          dVar34 = dVar38 * dVar38;
          dVar32 = (dVar38 + dVar38) * dVar34;
          dVar11 = dVar34 * __real_4008000000000000 - dVar32;
          dVar12 = (dVar32 - dVar34 * __real_4008000000000000) + (double)CONCAT44(uVar41,uVar40);
          dVar32 = dVar38 * dVar34 - dVar34;
          dVar38 = (dVar38 * dVar34 - dVar38 * (dVar38 + dVar38)) + dVar38;
          dVar35 = dVar2 * dVar11 + dVar36 * dVar32 + dVar4 * dVar38 + dVar12 * dVar29;
          dVar34 = dVar3 * dVar11 + dVar33 * dVar32 + dVar5 * dVar38 + dVar12 * dVar30;
          dVar38 = dVar1 * dVar11 + dVar6 * dVar32 + dVar31 * dVar38 + dVar12 * dVar10;
          fVar27 = (float)(dVar34 * dVar34 + dVar35 * dVar35 + dVar38 * dVar38);
          if (fVar27 < fVar28) {
            uVar16 = uVar20;
            if ((int)uVar24 < iVar17) {
              uVar16 = ~uVar24 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               iVar17 = local_148.Roots.ArrayNum, bVar13)) {
              pcVar9 = (code *)swi(3);
              fVar26 = (float)(*pcVar9)();
              return fVar26;
            }
            FVar15 = (ForElementType<double>)&local_148;
            if (local_148.Roots.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
              FVar15 = local_148.Roots.AllocatorInstance.SecondaryData;
            }
            fVar39 = (float)*(double *)((longlong)FVar15 + uVar22 * 8);
            fVar28 = fVar27;
          }
          uVar40 = SUB84(__real_3ff0000000000000,0);
          uVar41 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
          uVar22 = uVar22 + 1;
          uVar25 = (ulonglong)(uVar24 + 1);
        } while ((int)(uVar24 + 1) < iVar17);
      }
      *param_3 = fVar28;
      if (param_2 < (this->Points).ArrayNum) {
        uVar20 = (uint)~param_2 >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar9 = (code *)swi(3);
        fVar26 = (float)(*pcVar9)();
        return fVar26;
      }
      fVar26 = fVar39 * fVar26 + *(float *)((this->Points).AllocatorInstance.Data + lVar19 * 0x58);
      if (local_148.Roots.AllocatorInstance.SecondaryData != (ForElementType<double>)0x0) {
        FMemory::Free((void *)local_148.Roots.AllocatorInstance.SecondaryData);
      }
    }
  }
  return fVar26;
}

// GetKeyInterval @ 145fc2090

FFloatInterval __thiscall
FInterpCurve<UE::Math::TVector<double>_>::GetKeyInterval
          (FInterpCurve<UE::Math::TVector<double>_> *this)

{
  undefined4 uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  FFloatInterval FVar6;
  uint uVar7;
  FFloatInterval in_RDX;
  
  iVar2 = (this->Points).ArrayNum;
  if (iVar2 == 0) {
    *(undefined4 *)in_RDX = 0x7f7fffff;
    *(undefined4 *)((longlong)in_RDX + 4) = 0xff7fffff;
    return in_RDX;
  }
  uVar7 = 0;
  if ((int)(iVar2 - 1U) < iVar2) {
    uVar7 = ~(iVar2 - 1U) >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      FVar6 = (FFloatInterval)(*pcVar4)();
      return FVar6;
    }
  }
  iVar2 = (this->Points).ArrayNum;
  uVar1 = *(undefined4 *)((this->Points).AllocatorInstance.Data + (longlong)iVar2 * 0x58 + -0x58);
  if (iVar2 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      FVar6 = (FFloatInterval)(*pcVar4)();
      return FVar6;
    }
  }
  pFVar3 = (this->Points).AllocatorInstance.Data;
  *(undefined4 *)((longlong)in_RDX + 4) = uVar1;
  *(undefined4 *)in_RDX = *(undefined4 *)pFVar3;
  return in_RDX;
}

