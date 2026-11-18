// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ScreenShotComparisonTools
// Functions: 3

// GetHue @ 148c488c0

float __cdecl FPixelOperations::GetHue(FColor *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = (float)(param_1->field0_0x0)._s_0.R * __real_3b808081;
  fVar5 = (float)(param_1->field0_0x0)._s_0.G * __real_3b808081;
  fVar6 = (float)(param_1->field0_0x0)._s_0.B * __real_3b808081;
  fVar4 = fVar5;
  if (fVar5 <= fVar7) {
    fVar4 = fVar7;
  }
  fVar2 = fVar5;
  if (fVar7 <= fVar5) {
    fVar2 = fVar7;
  }
  if (fVar4 <= fVar6) {
    fVar4 = fVar6;
  }
  if (fVar6 <= fVar2) {
    fVar2 = fVar6;
  }
  if (fVar4 == fVar2) {
    return 0.0;
  }
  fVar3 = 0.0;
  fVar2 = fVar4 - fVar2;
  if (fVar4 == fVar7) {
    iVar1 = 0;
    if (fVar5 < fVar6) {
      iVar1 = 6;
    }
    return ((fVar5 - fVar6) / fVar2 + (float)iVar1) * __real_3e2aaaab;
  }
  if (fVar4 == fVar5) {
    return ((fVar6 - fVar7) / fVar2 + __real_40000000) * __real_3e2aaaab;
  }
  if (fVar4 == fVar6) {
    fVar3 = (fVar7 - fVar5) / fVar2 + __real_40800000;
  }
  return fVar3 * __real_3e2aaaab;
}

// IsAntialiased @ 148c48e80

bool __cdecl
FPixelOperations::IsAntialiased
          (FColor *param_1,FComparableImage *param_2,int param_3,int param_4,
          FImageTolerance *param_5)

{
  longlong lVar1;
  longlong lVar2;
  FScriptContainerElement FVar3;
  FScriptContainerElement FVar4;
  FScriptContainerElement FVar5;
  FScriptContainerElement FVar6;
  FScriptContainerElement FVar7;
  FScriptContainerElement FVar8;
  FScriptContainerElement FVar9;
  code *pcVar10;
  double dVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  undefined1 uVar19;
  uint uVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  int iVar25;
  int iVar26;
  longlong lVar27;
  int iVar28;
  int iVar29;
  float fVar30;
  float fVar31;
  double dVar32;
  FColor_u_0 local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  longlong local_b0;
  longlong local_a8;
  
  iVar28 = 0;
  iVar29 = 0;
  lVar24 = (longlong)param_4;
  lVar22 = (longlong)param_3;
  local_c0 = 0;
  local_bc = 0;
  fVar30 = GetHue(param_1);
  dVar17 = __real_3f66f9e501447116;
  dVar16 = __real_3f4b51cbdb6c02bf;
  dVar15 = __real_3f328e41400572d0;
  uVar14 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar13 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar12 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  dVar11 = __real_3fd3333333333333;
  local_b4 = param_3 + -1;
  iVar25 = param_4 + -1;
  lVar27 = -1;
  local_b0 = lVar22;
  local_a8 = lVar24;
  do {
    lVar23 = -1;
    iVar26 = local_b4;
    local_b8 = iVar25;
    do {
      if ((lVar27 != 0) || (lVar23 != 0)) {
        lVar1 = lVar22 + lVar23;
        lVar2 = lVar24 + lVar27;
        if ((-1 < lVar1) &&
           (((-1 < lVar2 && (iVar21 = param_2->Width, lVar22 = local_b0, iVar26 < iVar21)) &&
            (lVar24 = local_a8, iVar25 < param_2->Height)))) {
          lVar24 = (iVar21 * lVar2 + lVar1) * 4;
          if (((longlong)param_2->Height * (longlong)iVar21 * 4 <= lVar24) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Offset < ( (int64)Width * Height * 4 )",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ScreenShotComparisonTools\\Public\\ImageComparer.h"
                                  ,199,L""), bVar18)) {
            pcVar10 = (code *)swi(3);
            uVar19 = (*pcVar10)();
            return (bool)uVar19;
          }
          lVar22 = lVar24 + 3;
          uVar20 = 0;
          if (lVar22 < (param_2->Bytes).ArrayNum) {
            uVar20 = (uint)((ulonglong)lVar22 >> 0x3f) ^ 1;
          }
          if ((uVar20 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar10 = (code *)swi(3);
            uVar19 = (*pcVar10)();
            return (bool)uVar19;
          }
          FVar3 = (param_2->Bytes).AllocatorInstance.Data[lVar22];
          lVar22 = lVar24 + 2;
          uVar20 = 0;
          if (lVar22 < (param_2->Bytes).ArrayNum) {
            uVar20 = (uint)((ulonglong)lVar22 >> 0x3f) ^ 1;
          }
          if ((uVar20 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar10 = (code *)swi(3);
            uVar19 = (*pcVar10)();
            return (bool)uVar19;
          }
          FVar4 = (param_2->Bytes).AllocatorInstance.Data[lVar22];
          lVar22 = lVar24 + 1;
          uVar20 = 0;
          if (lVar22 < (param_2->Bytes).ArrayNum) {
            uVar20 = (uint)((ulonglong)lVar22 >> 0x3f) ^ 1;
          }
          if ((uVar20 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar10 = (code *)swi(3);
            uVar19 = (*pcVar10)();
            return (bool)uVar19;
          }
          FVar5 = (param_2->Bytes).AllocatorInstance.Data[lVar22];
          uVar20 = 0;
          if (lVar24 < (param_2->Bytes).ArrayNum) {
            uVar20 = (uint)((ulonglong)lVar24 >> 0x3f) ^ 1;
          }
          if ((uVar20 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar10 = (code *)swi(3);
            uVar19 = (*pcVar10)();
            return (bool)uVar19;
          }
          FVar6 = (param_2->Bytes).AllocatorInstance.Data[lVar24];
          local_c4._s_0.B = (uchar)FVar4;
          local_c4._s_0.G = (uchar)FVar5;
          local_c4._s_0.R = (uchar)FVar6;
          local_c4._s_0.A = (uchar)FVar3;
          fVar31 = GetHue((FColor *)&local_c4._s_0);
          FVar7 = (FScriptContainerElement)(param_1->field0_0x0)._s_0.R;
          FVar8 = (FScriptContainerElement)(param_1->field0_0x0)._s_0.G;
          FVar9 = (FScriptContainerElement)(param_1->field0_0x0)._s_0.B;
          dVar32 = ((double)(byte)FVar8 * dVar17 + (double)(byte)FVar7 * dVar16 +
                   (double)(byte)FVar9 * dVar15) * (double)(param_1->field0_0x0)._s_0.A -
                   ((double)(byte)FVar5 * dVar17 + (double)(byte)FVar6 * dVar16 +
                   (double)(byte)FVar4 * dVar15) * (double)(byte)FVar3;
          iVar21 = local_c0 + 1;
          if ((double)CONCAT44((uint)((ulonglong)dVar32 >> 0x20) & uVar14,SUB84(dVar32,0) & uVar13)
              <= (double)param_5->MaxBrightness) {
            iVar21 = local_c0;
          }
          if (((FVar7 == FVar6) && (FVar8 == FVar5)) && (FVar9 == FVar4)) {
            bVar18 = true;
          }
          else {
            bVar18 = false;
          }
          iVar25 = iVar29 + 1;
          if ((double)(float)((uint)(fVar30 - fVar31) & uVar12) <= dVar11) {
            iVar25 = iVar29;
          }
          iVar29 = iVar25;
          if (1 < iVar29) {
            return true;
          }
          iVar28 = local_bc + 1;
          if (!bVar18) {
            iVar28 = local_bc;
          }
          lVar24 = local_a8;
          lVar22 = local_b0;
          iVar25 = local_b8;
          local_c0 = iVar21;
          local_bc = iVar28;
          if (1 < iVar21) {
            return true;
          }
        }
      }
      iVar26 = iVar26 + 1;
      lVar23 = lVar23 + 1;
    } while (lVar23 < 2);
    iVar25 = iVar25 + 1;
    lVar27 = lVar27 + 1;
    if (1 < lVar27) {
      return iVar28 < 2;
    }
  } while( true );
}

// IsBrightnessSimilar @ 148c49310

bool __cdecl
FPixelOperations::IsBrightnessSimilar(FColor *param_1,FColor *param_2,FImageTolerance *param_3)

{
  byte bVar1;
  byte bVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  
  bVar1 = (param_1->field0_0x0)._s_0.A;
  bVar2 = (param_2->field0_0x0)._s_0.A;
  dVar3 = ((double)(param_1->field0_0x0)._s_0.G * __real_3f66f9e501447116 +
           (double)(param_1->field0_0x0)._s_0.R * __real_3f4b51cbdb6c02bf +
          (double)(param_1->field0_0x0)._s_0.B * __real_3f328e41400572d0) * (double)bVar1 -
          ((double)(param_2->field0_0x0)._s_0.G * __real_3f66f9e501447116 +
           (double)(param_2->field0_0x0)._s_0.R * __real_3f4b51cbdb6c02bf +
          (double)(param_2->field0_0x0)._s_0.B * __real_3f328e41400572d0) * (double)bVar2;
  uVar4 = SUB84(dVar3,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar5 = (uint)((ulonglong)dVar3 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((double)CONCAT44(uVar5,uVar4) < (double)param_3->MinBrightness ||
       (double)CONCAT44(uVar5,uVar4) == (double)param_3->MinBrightness) &&
     ((float)((uint)((float)bVar1 - (float)bVar2) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
      (float)param_3->Alpha)) {
    return true;
  }
  return false;
}

