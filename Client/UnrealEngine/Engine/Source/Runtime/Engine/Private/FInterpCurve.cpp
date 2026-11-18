// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 28

// AutoSetTangents @ 1479b3d20

void __thiscall
FInterpCurve<UE::Math::TQuat<double>_>::AutoSetTangents
          (FInterpCurve<UE::Math::TQuat<double>_> *this,float param_1,bool param_2)

{
  FScriptContainerElement FVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  float fVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ulonglong uVar20;
  
  fVar12 = __real_38d1b717;
  iVar2 = (this->Points).ArrayNum;
  lVar16 = (longlong)iVar2;
  uVar17 = 0;
  uVar22 = iVar2 - 1;
  uVar20 = uVar17;
  if (0 < iVar2) {
    do {
      uVar19 = (uint)uVar20;
      if (uVar19 == 0) {
        uVar15 = 0;
        if (this->bIsLooped != (bool)(char)uVar20) {
          uVar15 = uVar22;
        }
      }
      else {
        uVar15 = uVar19 - 1;
      }
      if (uVar19 == uVar22) {
        uVar23 = uVar22;
        if (this->bIsLooped != false) {
          uVar23 = 0;
        }
      }
      else {
        uVar23 = uVar19 + 1;
      }
      uVar14 = 0;
      if ((int)uVar19 < (this->Points).ArrayNum) {
        uVar14 = ~uVar19 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->Points).AllocatorInstance.Data;
      uVar14 = 0;
      if ((int)uVar15 < (this->Points).ArrayNum) {
        uVar14 = ~uVar15 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar18 = (this->Points).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x80;
      uVar15 = 0;
      if ((int)uVar23 < (this->Points).ArrayNum) {
        uVar15 = ~uVar23 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar1 = pFVar3[uVar17 + 0x70];
      pFVar21 = (this->Points).AllocatorInstance.Data + (longlong)(int)uVar23 * 0x80;
      if ((FVar1 == (FScriptContainerElement)0x1) || (FVar1 == (FScriptContainerElement)0x5)) {
        if ((param_2) && ((uVar19 == 0 || ((uVar19 == uVar22 && (this->bIsLooped == false)))))) {
LAB_1479b3f84:
          *(undefined8 *)(pFVar3 + uVar17 + 0x30) = 0;
          *(undefined8 *)(pFVar3 + uVar17 + 0x38) = 0;
          *(undefined8 *)(pFVar3 + uVar17 + 0x40) = 0;
          *(undefined8 *)(pFVar3 + uVar17 + 0x48) = 0x3ff0000000000000;
          *(undefined8 *)(pFVar3 + uVar17 + 0x50) = 0;
          *(undefined8 *)(pFVar3 + uVar17 + 0x58) = 0;
          *(undefined8 *)(pFVar3 + uVar17 + 0x60) = 0;
          *(undefined8 *)(pFVar3 + uVar17 + 0x68) = 0x3ff0000000000000;
          goto LAB_1479b4092;
        }
        if ((pFVar18[0x70] != (FScriptContainerElement)0x1) &&
           (2 < (byte)((char)pFVar18[0x70] - 3U))) {
          uVar11 = *(undefined8 *)(pFVar18 + 0x38);
          *(undefined8 *)(pFVar3 + uVar17 + 0x30) = *(undefined8 *)(pFVar18 + 0x30);
          *(undefined8 *)(pFVar3 + uVar17 + 0x30 + 8) = uVar11;
          uVar11 = *(undefined8 *)(pFVar18 + 0x48);
          *(undefined8 *)(pFVar3 + uVar17 + 0x40) = *(undefined8 *)(pFVar18 + 0x40);
          *(undefined8 *)(pFVar3 + uVar17 + 0x40 + 8) = uVar11;
          uVar11 = *(undefined8 *)(pFVar18 + 0x58);
          *(undefined8 *)(pFVar3 + uVar17 + 0x50) = *(undefined8 *)(pFVar18 + 0x50);
          *(undefined8 *)(pFVar3 + uVar17 + 0x50 + 8) = uVar11;
          *(undefined1 (*) [16])(pFVar3 + uVar17 + 0x60) = *(undefined1 (*) [16])(pFVar18 + 0x60);
          goto LAB_1479b4092;
        }
        if ((this->bIsLooped == false) || (uVar19 != 0)) {
          fVar29 = *(float *)pFVar18;
          if (this->bIsLooped != false) goto LAB_1479b4015;
LAB_1479b4027:
          fVar27 = *(float *)pFVar21;
        }
        else {
          fVar29 = *(float *)(pFVar3 + uVar17) - this->LoopKeyOffset;
LAB_1479b4015:
          if (uVar19 != uVar22) goto LAB_1479b4027;
          fVar27 = this->LoopKeyOffset + *(float *)(pFVar3 + uVar17);
        }
        UE::Math::TQuat<double>::CalcTangents
                  ((TQuat<double> *)(pFVar18 + 0x10),(TQuat<double> *)(pFVar3 + uVar17 + 0x10),
                   (TQuat<double> *)(pFVar21 + 0x10),(double)param_1,(TQuat<double> *)local_f8);
        fVar28 = fVar27 - fVar29;
        if (fVar27 - fVar29 <= fVar12) {
          fVar28 = fVar12;
        }
        dVar7 = (double)fVar28;
        uVar24 = (undefined4)((ulonglong)dVar7 >> 0x20);
        auVar26._8_4_ = SUB84(dVar7,0);
        auVar26._0_8_ = dVar7;
        auVar26._12_4_ = uVar24;
        local_f8 = divpd(local_f8,auVar26);
        auVar6._8_4_ = SUB84(dVar7,0);
        auVar6._0_8_ = dVar7;
        auVar6._12_4_ = uVar24;
        auVar26 = divpd(local_e8,auVar6);
        *(undefined1 (*) [16])(pFVar3 + uVar17 + 0x50) = local_f8;
        *(undefined1 (*) [16])(pFVar3 + uVar17 + 0x60) = auVar26;
        *(undefined1 (*) [16])(pFVar3 + uVar17 + 0x30) = local_f8;
        local_e8 = auVar26;
LAB_1479b408d:
        *(undefined1 (*) [16])(pFVar3 + uVar17 + 0x40) = auVar26;
      }
      else {
        if (FVar1 == (FScriptContainerElement)0x0) {
          dVar9 = *(double *)(pFVar3 + uVar17 + 0x10);
          dVar10 = *(double *)(pFVar3 + uVar17 + 0x10 + 8);
          local_88._0_8_ = *(double *)(pFVar21 + 0x20) - *(double *)(pFVar3 + uVar17 + 0x20);
          local_88._8_8_ = *(double *)(pFVar21 + 0x28) - *(double *)(pFVar3 + uVar17 + 0x20 + 8);
          dVar7 = *(double *)(pFVar21 + 0x10) - dVar9;
          dVar8 = *(double *)(pFVar21 + 0x18) - dVar10;
          uVar24 = SUB84(dVar8,0);
          uVar25 = (undefined4)((ulonglong)dVar8 >> 0x20);
          auVar5._8_4_ = uVar24;
          auVar5._0_8_ = dVar7;
          auVar5._12_4_ = uVar25;
          *(undefined1 (*) [16])(pFVar3 + uVar17 + 0x50) = auVar5;
          *(undefined1 (*) [16])(pFVar3 + uVar17 + 0x60) = local_88;
          local_98._8_4_ = uVar24;
          local_98._0_8_ = dVar7;
          local_98._12_4_ = uVar25;
          if ((pFVar18[0x70] == (FScriptContainerElement)0x1) ||
             ((byte)((char)pFVar18[0x70] - 3U) < 3)) {
            local_b8._8_4_ = uVar24;
            local_b8._0_8_ = dVar7;
            local_b8._12_4_ = uVar25;
            *(double *)(pFVar3 + uVar17 + 0x30) = dVar7;
            *(undefined8 *)(pFVar3 + uVar17 + 0x30 + 8) = local_b8._8_8_;
            auVar26 = local_88;
            local_a8 = local_88;
          }
          else {
            local_d8 = dVar9 - *(double *)(pFVar18 + 0x10);
            dStack_d0 = dVar10 - *(double *)(pFVar18 + 0x18);
            dVar7 = *(double *)(pFVar3 + uVar17 + 0x20 + 8) - *(double *)(pFVar18 + 0x28);
            local_c8._8_4_ = SUB84(dVar7,0);
            local_c8._0_8_ = *(double *)(pFVar3 + uVar17 + 0x20) - *(double *)(pFVar18 + 0x20);
            local_c8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
            *(double *)(pFVar3 + uVar17 + 0x30) = local_d8;
            *(double *)(pFVar3 + uVar17 + 0x30 + 8) = dStack_d0;
            auVar26 = local_c8;
          }
          goto LAB_1479b408d;
        }
        if (FVar1 == (FScriptContainerElement)0x2) goto LAB_1479b3f84;
      }
LAB_1479b4092:
      uVar17 = uVar17 + 0x80;
      lVar16 = lVar16 + -1;
      uVar20 = (ulonglong)(uVar19 + 1);
    } while (lVar16 != 0);
  }
  return;
}

// AutoSetTangents @ 1479b4100

void __thiscall
FInterpCurve<UE::Math::TVector<double>_>::AutoSetTangents
          (FInterpCurve<UE::Math::TVector<double>_> *this,float param_1,bool param_2)

{
  double dVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  double *pdVar17;
  uint uVar18;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  uint uVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  float fVar26;
  double dVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  longlong local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  ulonglong uVar19;
  
  fVar11 = __real_3f800000;
  fVar10 = __real_38d1b717;
  dVar9 = __real_3ff0000000000000;
  iVar3 = (this->Points).ArrayNum;
  local_110 = (longlong)iVar3;
  uVar15 = 0;
  uVar21 = iVar3 - 1;
  uVar19 = uVar15;
  if (0 < iVar3) {
    do {
      uVar18 = (uint)uVar19;
      if (uVar18 == 0) {
        uVar23 = 0;
        if (this->bIsLooped != (bool)(char)uVar19) {
          uVar23 = uVar21;
        }
      }
      else {
        uVar23 = uVar18 - 1;
      }
      if (uVar18 == uVar21) {
        uVar24 = uVar21;
        if (this->bIsLooped != false) {
          uVar24 = 0;
        }
      }
      else {
        uVar24 = uVar18 + 1;
      }
      uVar13 = 0;
      if ((int)uVar18 < (this->Points).ArrayNum) {
        uVar13 = ~uVar18 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar4 = (this->Points).AllocatorInstance.Data;
      uVar13 = 0;
      if ((int)uVar23 < (this->Points).ArrayNum) {
        uVar13 = ~uVar23 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (this->Points).AllocatorInstance.Data;
      lVar16 = (longlong)(int)uVar23 * 0x58;
      uVar23 = 0;
      if ((int)uVar24 < (this->Points).ArrayNum) {
        uVar23 = ~uVar24 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar23 = 0;
      FVar2 = pFVar4[uVar15 + 0x50];
      pFVar6 = (this->Points).AllocatorInstance.Data;
      lVar14 = (longlong)(int)uVar24 * 0x58;
      if ((FVar2 == (FScriptContainerElement)0x1) || (FVar2 == (FScriptContainerElement)0x5)) {
        if ((param_2) && ((uVar18 == 0 || ((uVar18 == uVar21 && (this->bIsLooped == false)))))) {
          *(undefined8 *)(pFVar4 + uVar15 + 0x20) = 0;
          *(undefined8 *)(pFVar4 + uVar15 + 0x28) = 0;
          *(undefined8 *)(pFVar4 + uVar15 + 0x30) = 0;
          *(undefined8 *)(pFVar4 + uVar15 + 0x38) = 0;
          *(undefined8 *)(pFVar4 + uVar15 + 0x40) = 0;
          *(undefined8 *)(pFVar4 + uVar15 + 0x48) = 0;
        }
        else {
          if ((pFVar5[lVar16 + 0x50] == (FScriptContainerElement)0x1) ||
             ((byte)((char)pFVar5[lVar16 + 0x50] - 3U) < 3)) {
            if ((this->bIsLooped == false) || (uVar18 != 0)) {
              fVar30 = *(float *)(pFVar5 + lVar16);
              if (this->bIsLooped != false) goto LAB_1479b4492;
LAB_1479b44a5:
              fVar28 = *(float *)(pFVar6 + lVar14);
            }
            else {
              fVar30 = *(float *)(pFVar4 + uVar15) - this->LoopKeyOffset;
LAB_1479b4492:
              if (uVar18 != uVar21) goto LAB_1479b44a5;
              fVar28 = *(float *)(pFVar4 + uVar15) + this->LoopKeyOffset;
            }
            fVar29 = *(float *)(pFVar4 + uVar15);
            pFVar22 = pFVar6 + lVar14 + 8;
            pFVar20 = pFVar4 + uVar15 + 8;
            pFVar25 = pFVar5 + lVar16 + 8;
            if (FVar2 == (FScriptContainerElement)0x5) {
              pdVar17 = &local_108;
              do {
                fVar26 = ClampFloatTangent(*(float *)pFVar25,fVar30,*(float *)pFVar20,fVar29,
                                           *(float *)pFVar22,fVar28);
                uVar23 = uVar23 + 4;
                pFVar25 = pFVar25 + 4;
                pFVar20 = pFVar20 + 4;
                pFVar22 = pFVar22 + 4;
                *(float *)pdVar17 = fVar26 * (fVar11 - param_1);
                pdVar17 = (double *)((longlong)pdVar17 + 4);
              } while (uVar23 < 0x18);
            }
            else {
              fVar29 = fVar28 - fVar30;
              if (fVar28 - fVar30 <= fVar10) {
                fVar29 = fVar10;
              }
              dVar27 = (double)(fVar11 - param_1);
              local_f8 = dVar9 / (double)fVar29;
              local_108 = ((*(double *)pFVar20 - *(double *)pFVar25) +
                          (*(double *)pFVar22 - *(double *)pFVar20)) * dVar27 * local_f8;
              dStack_100 = ((*(double *)(pFVar4 + uVar15 + 0x10) -
                            *(double *)(pFVar5 + lVar16 + 0x10)) +
                           (*(double *)(pFVar6 + lVar14 + 0x10) -
                           *(double *)(pFVar4 + uVar15 + 0x10))) * dVar27 * local_f8;
              local_f8 = ((*(double *)(pFVar4 + uVar15 + 0x18) - *(double *)(pFVar5 + lVar16 + 0x18)
                          ) + (*(double *)(pFVar6 + lVar14 + 0x18) -
                              *(double *)(pFVar4 + uVar15 + 0x18))) * dVar27 * local_f8;
            }
            *(double *)(pFVar4 + uVar15 + 0x38) = local_108;
            *(double *)(pFVar4 + uVar15 + 0x38 + 8) = dStack_100;
            *(double *)(pFVar4 + uVar15 + 0x48) = local_f8;
            *(double *)(pFVar4 + uVar15 + 0x20) = local_108;
            *(double *)(pFVar4 + uVar15 + 0x20 + 8) = dStack_100;
            dVar27 = local_f8;
            goto LAB_1479b45fc;
          }
          uVar8 = *(undefined8 *)(pFVar5 + lVar16 + 0x20 + 8);
          *(undefined8 *)(pFVar4 + uVar15 + 0x20) = *(undefined8 *)(pFVar5 + lVar16 + 0x20);
          *(undefined8 *)(pFVar4 + uVar15 + 0x20 + 8) = uVar8;
          *(undefined8 *)(pFVar4 + uVar15 + 0x30) = *(undefined8 *)(pFVar5 + lVar16 + 0x30);
          uVar8 = *(undefined8 *)(pFVar5 + lVar16 + 0x38 + 8);
          *(undefined8 *)(pFVar4 + uVar15 + 0x38) = *(undefined8 *)(pFVar5 + lVar16 + 0x38);
          *(undefined8 *)(pFVar4 + uVar15 + 0x38 + 8) = uVar8;
          *(undefined8 *)(pFVar4 + uVar15 + 0x48) = *(undefined8 *)(pFVar5 + lVar16 + 0x48);
        }
      }
      else {
        if (FVar2 != (FScriptContainerElement)0x0) {
          if (FVar2 == (FScriptContainerElement)0x2) {
            *(undefined8 *)(pFVar4 + uVar15 + 0x20) = 0;
            *(undefined8 *)(pFVar4 + uVar15 + 0x28) = 0;
            *(undefined8 *)(pFVar4 + uVar15 + 0x30) = 0;
            *(undefined8 *)(pFVar4 + uVar15 + 0x38) = 0;
            *(undefined8 *)(pFVar4 + uVar15 + 0x40) = 0;
            *(undefined8 *)(pFVar4 + uVar15 + 0x48) = 0;
          }
          goto LAB_1479b4602;
        }
        dVar27 = *(double *)(pFVar6 + lVar14 + 0x10);
        dVar1 = *(double *)(pFVar6 + lVar14 + 0x18);
        *(double *)(pFVar4 + uVar15 + 0x38) =
             *(double *)(pFVar6 + lVar14 + 8) - *(double *)(pFVar4 + uVar15 + 8);
        *(double *)(pFVar4 + uVar15 + 0x40) = dVar27 - *(double *)(pFVar4 + uVar15 + 0x10);
        *(double *)(pFVar4 + uVar15 + 0x48) = dVar1 - *(double *)(pFVar4 + uVar15 + 0x18);
        if ((pFVar5[lVar16 + 0x50] == (FScriptContainerElement)0x1) ||
           ((byte)((char)pFVar5[lVar16 + 0x50] - 3U) < 3)) {
          local_d8 = *(undefined8 *)(pFVar4 + uVar15 + 0x38);
          uStack_d0 = *(undefined8 *)(pFVar4 + uVar15 + 0x38 + 8);
          local_c8 = *(double *)(pFVar4 + uVar15 + 0x48);
          *(undefined8 *)(pFVar4 + uVar15 + 0x20) = local_d8;
          *(undefined8 *)(pFVar4 + uVar15 + 0x20 + 8) = uStack_d0;
          dVar27 = local_c8;
        }
        else {
          local_f0 = *(double *)(pFVar4 + uVar15 + 8) - *(double *)(pFVar5 + lVar16 + 8);
          dStack_e8 = *(double *)(pFVar4 + uVar15 + 0x10) - *(double *)(pFVar5 + lVar16 + 0x10);
          local_e0 = *(double *)(pFVar4 + uVar15 + 0x18) - *(double *)(pFVar5 + lVar16 + 0x18);
          *(double *)(pFVar4 + uVar15 + 0x20) = local_f0;
          *(double *)(pFVar4 + uVar15 + 0x20 + 8) = dStack_e8;
          dVar27 = local_e0;
        }
LAB_1479b45fc:
        *(double *)(pFVar4 + uVar15 + 0x30) = dVar27;
      }
LAB_1479b4602:
      uVar15 = uVar15 + 0x58;
      local_110 = local_110 + -1;
      uVar19 = (ulonglong)(uVar18 + 1);
    } while (local_110 != 0);
  }
  return;
}

// ClearLoopKey @ 1479b80a0

void __thiscall
FInterpCurve<UE::Math::TQuat<double>_>::ClearLoopKey(FInterpCurve<UE::Math::TQuat<double>_> *this)

{
  this->bIsLooped = false;
  return;
}

// ClearLoopKey @ 1479b80b0

void __thiscall
FInterpCurve<UE::Math::TVector<double>_>::ClearLoopKey
          (FInterpCurve<UE::Math::TVector<double>_> *this)

{
  this->bIsLooped = false;
  return;
}

// Eval @ 1479bff10

float __thiscall FInterpCurve<float>::Eval(FInterpCurve<float> *this,float param_1,float *param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  uVar9 = (this->Points).ArrayNum;
  uVar13 = uVar9 - 1;
  if (uVar9 == 0) {
    return *param_2;
  }
  iVar6 = _isnan((double)param_1);
  if (iVar6 != 0) {
    return *param_2;
  }
  uVar7 = GetPointIndexForInputValue(this,param_1);
  lVar11 = (longlong)(int)uVar7;
  if (uVar7 == 0xffffffff) {
    iVar6 = (this->Points).ArrayNum;
joined_r0x0001479c005b:
    if ((iVar6 < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      fVar14 = (float)(*pcVar3)();
      return fVar14;
    }
    return *(float *)((this->Points).AllocatorInstance.Data + 4);
  }
  uVar12 = 0;
  if (uVar7 == uVar13) {
    iVar6 = (this->Points).ArrayNum;
    if (this->bIsLooped == false) {
      if ((int)uVar13 < iVar6) {
        uVar12 = ~uVar13 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        fVar14 = (float)(*pcVar3)();
        return fVar14;
      }
      return *(float *)((this->Points).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x14 + 4);
    }
    uVar8 = 0;
    if ((int)uVar13 < iVar6) {
      uVar8 = ~uVar13 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      fVar14 = (float)(*pcVar3)();
      return fVar14;
    }
    if (*(float *)((this->Points).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x14) +
        this->LoopKeyOffset <= param_1) {
      iVar6 = (this->Points).ArrayNum;
      goto joined_r0x0001479c005b;
    }
  }
  if (-1 < (int)uVar7) {
    uVar8 = uVar13;
    if (this->bIsLooped != false) {
      uVar8 = uVar9;
    }
    if ((int)uVar7 < (int)uVar8) goto LAB_1479c00f1;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Index >= 0 && ((bIsLooped && Index < NumPoints) || (!bIsLooped && Index < LastPoint))"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\InterpCurve.h"
                     ,0x162,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    fVar14 = (float)(*pcVar3)();
    return fVar14;
  }
LAB_1479c00f1:
  if ((this->bIsLooped == false) || (uVar7 != uVar13)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  uVar13 = 0;
  if (!bVar4) {
    uVar13 = uVar7 + 1;
  }
  uVar9 = 0;
  if ((int)uVar7 < (this->Points).ArrayNum) {
    uVar9 = ~uVar7 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    fVar14 = (float)(*pcVar3)();
    return fVar14;
  }
  pFVar1 = (this->Points).AllocatorInstance.Data;
  uVar9 = uVar12;
  if ((int)uVar13 < (this->Points).ArrayNum) {
    uVar9 = ~uVar13 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    fVar14 = (float)(*pcVar3)();
    return fVar14;
  }
  fVar14 = __real_3f800000;
  lVar10 = (longlong)(int)uVar13;
  pFVar2 = (this->Points).AllocatorInstance.Data;
  if (bVar4) {
    fVar18 = this->LoopKeyOffset;
  }
  else {
    fVar18 = *(float *)(pFVar2 + lVar10 * 0x14) - *(float *)(pFVar1 + lVar11 * 0x14);
  }
  if ((fVar18 <= 0.0) || (pFVar1[lVar11 * 0x14 + 0x10] == (FScriptContainerElement)0x2)) {
    if ((int)uVar7 < (this->Points).ArrayNum) {
      uVar12 = ~uVar7 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      fVar14 = (float)(*pcVar3)();
      return fVar14;
    }
    fVar14 = *(float *)((this->Points).AllocatorInstance.Data + lVar11 * 0x14 + 4);
  }
  else {
    fVar17 = (param_1 - *(float *)(pFVar1 + lVar11 * 0x14)) / fVar18;
    if (((fVar17 < 0.0) || (__real_3f800000 < fVar17)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Alpha >= 0.0f && Alpha <= 1.0f",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\InterpCurve.h"
                           ,0x16e,L"Bad value in Eval(): in %f prev %f  diff %f alpha %f"), bVar4))
    {
      pcVar3 = (code *)swi(3);
      fVar14 = (float)(*pcVar3)();
      return fVar14;
    }
    if (pFVar1[lVar11 * 0x14 + 0x10] == (FScriptContainerElement)0x0) {
      fVar14 = (*(float *)(pFVar2 + lVar10 * 0x14 + 4) - *(float *)(pFVar1 + lVar11 * 0x14 + 4)) *
               fVar17 + *(float *)(pFVar1 + lVar11 * 0x14 + 4);
    }
    else {
      fVar16 = fVar17 * fVar17;
      fVar15 = fVar16 * fVar17;
      fVar14 = ((fVar15 - (fVar16 + fVar16)) + fVar17) *
               fVar18 * *(float *)(pFVar1 + lVar11 * 0x14 + 0xc) +
               (((fVar15 + fVar15) - fVar16 * __real_40400000) + fVar14) *
               *(float *)(pFVar1 + lVar11 * 0x14 + 4) +
               fVar18 * *(float *)(pFVar2 + lVar10 * 0x14 + 8) * (fVar15 - fVar16) +
               (fVar16 * __real_40400000 - (fVar15 + fVar15)) *
               *(float *)(pFVar2 + lVar10 * 0x14 + 4);
    }
  }
  return fVar14;
}

// GetPointIndexForInputValue @ 1479cd050

int __thiscall
FInterpCurve<float>::GetPointIndexForInputValue(FInterpCurve<float> *this,float param_1)

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
    if (param_1 < *(float *)((this->Points).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x14)) {
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
        if (param_1 < *(float *)((this->Points).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x14
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

// SetLoopKey @ 1479e9170

void __thiscall
FInterpCurve<UE::Math::TQuat<double>_>::SetLoopKey
          (FInterpCurve<UE::Math::TQuat<double>_> *this,float param_1)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  iVar2 = (this->Points).ArrayNum;
  if (iVar2 == 0) {
    this->bIsLooped = false;
    return;
  }
  uVar5 = 0;
  if ((int)(iVar2 - 1U) < iVar2) {
    uVar5 = ~(iVar2 - 1U) >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  fVar1 = *(float *)((this->Points).AllocatorInstance.Data +
                    (longlong)(this->Points).ArrayNum * 0x80 + -0x80);
  if (fVar1 < param_1) {
    this->bIsLooped = true;
    this->LoopKeyOffset = param_1 - fVar1;
    return;
  }
  this->bIsLooped = false;
  return;
}

// SetLoopKey @ 1479e9230

void __thiscall
FInterpCurve<UE::Math::TVector<double>_>::SetLoopKey
          (FInterpCurve<UE::Math::TVector<double>_> *this,float param_1)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  iVar2 = (this->Points).ArrayNum;
  if (iVar2 == 0) {
    this->bIsLooped = false;
    return;
  }
  uVar5 = 0;
  if ((int)(iVar2 - 1U) < iVar2) {
    uVar5 = ~(iVar2 - 1U) >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  fVar1 = *(float *)((this->Points).AllocatorInstance.Data +
                    (longlong)(this->Points).ArrayNum * 0x58 + -0x58);
  if (fVar1 < param_1) {
    this->bIsLooped = true;
    this->LoopKeyOffset = param_1 - fVar1;
    return;
  }
  this->bIsLooped = false;
  return;
}

// AddPoint @ 147a304f0

int __thiscall
FInterpCurve<UE::Math::TQuat<double>_>::AddPoint
          (FInterpCurve<UE::Math::TQuat<double>_> *this,float param_1,TQuat<double> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  longlong lVar13;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  uint7 uStack_87;
  longlong lStack_80;
  
  iVar10 = (this->Points).ArrayNum;
  uVar12 = 0;
  if (0 < iVar10) {
    lVar13 = 0;
    do {
      uVar9 = 0;
      if ((int)uVar12 < iVar10) {
        uVar9 = ~uVar12 >> 0x1f;
      }
      if (uVar9 == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar8) {
          pcVar3 = (code *)swi(3);
          iVar10 = (*pcVar3)();
          return iVar10;
        }
      }
      pFVar11 = (this->Points).AllocatorInstance.Data + lVar13;
      if (param_1 < *(float *)pFVar11 || param_1 == *(float *)pFVar11) break;
      iVar10 = (this->Points).ArrayNum;
      uVar12 = uVar12 + 1;
      lVar13 = lVar13 + 0x80;
    } while ((int)uVar12 < iVar10);
  }
  iVar10 = (this->Points).ArrayNum;
  piVar1 = &(this->Points).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1080,(ForAnyElementType *)this,piVar1);
  }
  pFVar11 = (this->Points).AllocatorInstance.Data;
  (this->Points).ArrayNum = iVar10 + 1;
  lVar13 = (longlong)(int)uVar12 * 0x80;
  pFVar11 = pFVar11 + lVar13;
  memmove(pFVar11 + 0x80,pFVar11,(longlong)(int)(iVar10 - uVar12) << 7);
  dVar4 = param_2->X;
  dVar5 = param_2->Y;
  dVar6 = param_2->Z;
  dVar7 = param_2->W;
  uVar9 = 0;
  if ((int)uVar12 < (this->Points).ArrayNum) {
    uVar9 = ~uVar12 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      iVar10 = (*pcVar3)();
      return iVar10;
    }
  }
  pFVar2 = (this->Points).AllocatorInstance.Data;
  pFVar11 = pFVar2 + lVar13;
  *(float *)pFVar11 = param_1;
  *(undefined4 *)(pFVar11 + 4) = uStack_f4;
  *(undefined4 *)(pFVar11 + 8) = uStack_f0;
  *(undefined4 *)(pFVar11 + 0xc) = uStack_ec;
  *(double *)(pFVar2 + lVar13 + 0x10) = dVar4;
  *(double *)(pFVar2 + lVar13 + 0x10 + 8) = dVar5;
  *(double *)(pFVar2 + lVar13 + 0x20) = dVar6;
  *(double *)(pFVar2 + lVar13 + 0x20 + 8) = dVar7;
  *(undefined8 *)(pFVar2 + lVar13 + 0x30) = 0;
  *(undefined8 *)(pFVar2 + lVar13 + 0x30 + 8) = 0;
  *(undefined8 *)(pFVar2 + lVar13 + 0x40) = 0;
  *(undefined8 *)(pFVar2 + lVar13 + 0x40 + 8) = 0;
  *(undefined8 *)(pFVar2 + lVar13 + 0x50) = 0;
  *(undefined8 *)(pFVar2 + lVar13 + 0x50 + 8) = 0;
  *(undefined8 *)(pFVar2 + lVar13 + 0x60) = 0;
  *(undefined8 *)(pFVar2 + lVar13 + 0x60 + 8) = 0;
  *(ulonglong *)(pFVar2 + lVar13 + 0x70) = (ulonglong)uStack_87 << 8;
  *(longlong *)(pFVar2 + lVar13 + 0x70 + 8) = lStack_80;
  return uVar12;
}

// AddPoint @ 147a30700

int __thiscall
FInterpCurve<UE::Math::TVector<double>_>::AddPoint
          (FInterpCurve<UE::Math::TVector<double>_> *this,float param_1,TVector<double> *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  longlong lVar11;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  uint7 uStack_87;
  
  iVar8 = (this->Points).ArrayNum;
  uVar10 = 0;
  if (0 < iVar8) {
    lVar11 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar10 < iVar8) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          iVar8 = (*pcVar4)();
          return iVar8;
        }
      }
      pFVar9 = (this->Points).AllocatorInstance.Data + lVar11;
      if (param_1 < *(float *)pFVar9 || param_1 == *(float *)pFVar9) break;
      iVar8 = (this->Points).ArrayNum;
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 0x58;
    } while ((int)uVar10 < iVar8);
  }
  iVar8 = (this->Points).ArrayNum;
  piVar1 = &(this->Points).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x858,(ForAnyElementType *)this,piVar1);
  }
  pFVar9 = (this->Points).AllocatorInstance.Data;
  (this->Points).ArrayNum = iVar8 + 1;
  lVar11 = (longlong)(int)uVar10 * 0x58;
  pFVar9 = pFVar9 + lVar11;
  memmove(pFVar9 + 0x58,pFVar9,(longlong)(int)(iVar8 - uVar10) * 0x58);
  uVar5 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  uVar2 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x10);
  local_d0 = (undefined4)*(undefined8 *)&param_2->field0_0x0;
  uStack_cc = (undefined4)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20);
  uStack_c8 = (undefined4)uVar5;
  uStack_c4 = (undefined4)((ulonglong)uVar5 >> 0x20);
  uVar7 = 0;
  if ((int)uVar10 < (this->Points).ArrayNum) {
    uVar7 = ~uVar10 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      iVar8 = (*pcVar4)();
      return iVar8;
    }
  }
  pFVar3 = (this->Points).AllocatorInstance.Data;
  pFVar9 = pFVar3 + lVar11;
  *(float *)pFVar9 = param_1;
  *(undefined4 *)(pFVar9 + 4) = uStack_d4;
  *(undefined4 *)(pFVar9 + 8) = local_d0;
  *(undefined4 *)(pFVar9 + 0xc) = uStack_cc;
  pFVar9 = pFVar3 + lVar11 + 0x10;
  *(undefined4 *)pFVar9 = uStack_c8;
  *(undefined4 *)(pFVar9 + 4) = uStack_c4;
  *(int *)(pFVar9 + 8) = (int)uVar2;
  *(int *)(pFVar9 + 0xc) = (int)((ulonglong)uVar2 >> 0x20);
  *(undefined8 *)(pFVar3 + lVar11 + 0x20) = 0;
  *(undefined8 *)(pFVar3 + lVar11 + 0x20 + 8) = 0;
  *(undefined8 *)(pFVar3 + lVar11 + 0x30) = 0;
  *(undefined8 *)(pFVar3 + lVar11 + 0x30 + 8) = 0;
  *(undefined8 *)(pFVar3 + lVar11 + 0x40) = 0;
  *(undefined8 *)(pFVar3 + lVar11 + 0x40 + 8) = 0;
  *(ulonglong *)(pFVar3 + lVar11 + 0x50) = (ulonglong)uStack_87 << 8;
  return uVar10;
}

// AddPoint @ 147b43d30

int __thiscall FInterpCurve<float>::AddPoint(FInterpCurve<float> *this,float param_1,float *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint local_48;
  
  iVar8 = (this->Points).ArrayNum;
  uVar9 = 0;
  if (0 < iVar8) {
    lVar10 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar9 < iVar8) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
      }
      pFVar2 = (this->Points).AllocatorInstance.Data + lVar10;
      if (param_1 < *(float *)pFVar2 || param_1 == *(float *)pFVar2) break;
      iVar8 = (this->Points).ArrayNum;
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x14;
    } while ((int)uVar9 < iVar8);
  }
  iVar8 = (this->Points).ArrayNum;
  piVar1 = &(this->Points).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x414,(ForAnyElementType *)this,piVar1);
  }
  lVar10 = (longlong)(int)uVar9;
  (this->Points).ArrayNum = iVar8 + 1;
  pFVar2 = (this->Points).AllocatorInstance.Data + lVar10 * 0x14;
  memmove(pFVar2 + 0x14,pFVar2,(longlong)(int)(iVar8 - uVar9) * 0x14);
  fVar3 = *param_2;
  local_48 = local_48 & 0xffffff00;
  uVar7 = 0;
  if ((int)uVar9 < (this->Points).ArrayNum) {
    uVar7 = ~uVar9 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
  }
  pFVar4 = (this->Points).AllocatorInstance.Data;
  pFVar2 = pFVar4 + lVar10 * 0x14;
  *(float *)pFVar2 = param_1;
  *(float *)(pFVar2 + 4) = fVar3;
  *(undefined4 *)(pFVar2 + 8) = 0;
  *(undefined4 *)(pFVar2 + 0xc) = 0;
  *(uint *)(pFVar4 + lVar10 * 0x14 + 0x10) = local_48;
  return uVar9;
}

// AddPoint @ 147b43ec0

int __thiscall
FInterpCurve<UE::Math::TVector2<double>_>::AddPoint
          (FInterpCurve<UE::Math::TVector2<double>_> *this,float param_1,TVector2<double> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  longlong lVar10;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  uint7 uStack_5f;
  
  iVar7 = (this->Points).ArrayNum;
  uVar9 = 0;
  if (0 < iVar7) {
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar9 < iVar7) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          iVar7 = (*pcVar3)();
          return iVar7;
        }
      }
      pFVar8 = (this->Points).AllocatorInstance.Data + lVar10;
      if (param_1 < *(float *)pFVar8 || param_1 == *(float *)pFVar8) break;
      iVar7 = (this->Points).ArrayNum;
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x40;
    } while ((int)uVar9 < iVar7);
  }
  iVar7 = (this->Points).ArrayNum;
  piVar1 = &(this->Points).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x840,(ForAnyElementType *)this,piVar1);
  }
  pFVar8 = (this->Points).AllocatorInstance.Data;
  (this->Points).ArrayNum = iVar7 + 1;
  lVar10 = (longlong)(int)uVar9 * 0x40;
  pFVar8 = pFVar8 + lVar10;
  memmove(pFVar8 + 0x40,pFVar8,(longlong)(int)(iVar7 - uVar9) << 6);
  dVar4 = (param_2->field0_0x0)._s_0.Y;
  local_90 = (undefined4)*(undefined8 *)&param_2->field0_0x0;
  uStack_8c = (undefined4)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20);
  uVar6 = 0;
  if ((int)uVar9 < (this->Points).ArrayNum) {
    uVar6 = ~uVar9 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      iVar7 = (*pcVar3)();
      return iVar7;
    }
  }
  pFVar2 = (this->Points).AllocatorInstance.Data;
  pFVar8 = pFVar2 + lVar10;
  *(float *)pFVar8 = param_1;
  *(undefined4 *)(pFVar8 + 4) = uStack_94;
  *(undefined4 *)(pFVar8 + 8) = local_90;
  *(undefined4 *)(pFVar8 + 0xc) = uStack_8c;
  *(double *)(pFVar2 + lVar10 + 0x10) = dVar4;
  *(undefined8 *)(pFVar2 + lVar10 + 0x10 + 8) = 0;
  *(undefined8 *)(pFVar2 + lVar10 + 0x20) = 0;
  *(undefined8 *)(pFVar2 + lVar10 + 0x20 + 8) = 0;
  *(undefined8 *)(pFVar2 + lVar10 + 0x30) = 0;
  *(ulonglong *)(pFVar2 + lVar10 + 0x30 + 8) = (ulonglong)uStack_5f << 8;
  return uVar9;
}

// AddPoint @ 147b44080

int __thiscall
FInterpCurve<FTwoVectors>::AddPoint
          (FInterpCurve<FTwoVectors> *this,float param_1,FTwoVectors *param_2)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  longlong lVar14;
  undefined4 uStack_164;
  uint7 uStack_cf;
  
  iVar11 = (this->Points).ArrayNum;
  uVar13 = 0;
  if (0 < iVar11) {
    lVar14 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar13 < iVar11) {
        uVar10 = ~uVar13 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar2 = (code *)swi(3);
          iVar11 = (*pcVar2)();
          return iVar11;
        }
      }
      pFVar12 = (this->Points).AllocatorInstance.Data + lVar14;
      if (param_1 < *(float *)pFVar12 || param_1 == *(float *)pFVar12) break;
      iVar11 = (this->Points).ArrayNum;
      uVar13 = uVar13 + 1;
      lVar14 = lVar14 + 0xa0;
    } while ((int)uVar13 < iVar11);
  }
  iVar11 = (this->Points).ArrayNum;
  piVar1 = &(this->Points).ArrayMax;
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x8a0,(ForAnyElementType *)this,piVar1);
  }
  pFVar12 = (this->Points).AllocatorInstance.Data;
  (this->Points).ArrayNum = iVar11 + 1;
  pFVar12 = pFVar12 + (longlong)(int)uVar13 * 0xa0;
  memmove(pFVar12 + 0xa0,pFVar12,(longlong)(int)(iVar11 - uVar13) * 0xa0);
  dVar3 = (param_2->v1).field0_0x0._s_0.X;
  dVar4 = (param_2->v1).field0_0x0._s_0.Y;
  dVar5 = (param_2->v1).field0_0x0._s_0.Z;
  dVar6 = (param_2->v2).field0_0x0._s_0.X;
  dVar7 = (param_2->v2).field0_0x0._s_0.Y;
  dVar8 = (param_2->v2).field0_0x0._s_0.Z;
  uVar10 = 0;
  if ((int)uVar13 < (this->Points).ArrayNum) {
    uVar10 = ~uVar13 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      iVar11 = (*pcVar2)();
      return iVar11;
    }
  }
  pFVar12 = (this->Points).AllocatorInstance.Data + (longlong)(int)uVar13 * 0xa0;
  *(ulonglong *)pFVar12 = CONCAT44(uStack_164,param_1);
  *(double *)(pFVar12 + 8) = dVar3;
  *(double *)(pFVar12 + 0x10) = dVar4;
  *(double *)(pFVar12 + 0x18) = dVar5;
  *(double *)(pFVar12 + 0x20) = dVar6;
  *(double *)(pFVar12 + 0x28) = dVar7;
  *(double *)(pFVar12 + 0x30) = dVar8;
  *(undefined8 *)(pFVar12 + 0x38) = 0;
  *(undefined8 *)(pFVar12 + 0x40) = 0;
  *(undefined8 *)(pFVar12 + 0x48) = 0;
  *(undefined8 *)(pFVar12 + 0x50) = 0;
  *(undefined8 *)(pFVar12 + 0x58) = 0;
  *(undefined8 *)(pFVar12 + 0x60) = 0;
  *(undefined8 *)(pFVar12 + 0x68) = 0;
  *(undefined8 *)(pFVar12 + 0x70) = 0;
  *(undefined8 *)(pFVar12 + 0x78) = 0;
  *(undefined8 *)(pFVar12 + 0x80) = 0;
  *(undefined8 *)(pFVar12 + 0x88) = 0;
  *(undefined8 *)(pFVar12 + 0x90) = 0;
  *(ulonglong *)(pFVar12 + 0x98) = (ulonglong)uStack_cf << 8;
  return uVar13;
}

// AutoSetTangents @ 147b47290

void __thiscall
FInterpCurve<float>::AutoSetTangents(FInterpCurve<float> *this,float param_1,bool param_2)

{
  float fVar1;
  FScriptContainerElement FVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_res20 [2];
  longlong local_b0;
  
  fVar8 = __real_3f800000;
  fVar7 = __real_38d1b717;
  iVar3 = (this->Points).ArrayNum;
  local_b0 = (longlong)iVar3;
  uVar14 = 0;
  uVar16 = iVar3 - 1;
  if (0 < iVar3) {
    lVar13 = 0;
    do {
      if (uVar14 == 0) {
        uVar19 = 0;
        if (this->bIsLooped != false) {
          uVar19 = uVar16;
        }
      }
      else {
        uVar19 = uVar14 - 1;
      }
      if (uVar14 == uVar16) {
        uVar18 = uVar16;
        if (this->bIsLooped != false) {
          uVar18 = 0;
        }
      }
      else {
        uVar18 = uVar14 + 1;
      }
      uVar10 = 0;
      if ((int)uVar14 < (this->Points).ArrayNum) {
        uVar10 = ~uVar14 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (this->Points).AllocatorInstance.Data;
      uVar10 = 0;
      if ((int)uVar19 < (this->Points).ArrayNum) {
        uVar10 = ~uVar19 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar15 = (this->Points).AllocatorInstance.Data;
      lVar11 = (longlong)(int)uVar19;
      uVar19 = 0;
      if ((int)uVar18 < (this->Points).ArrayNum) {
        uVar19 = ~uVar18 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar2 = pFVar4[lVar13 + 0x10];
      pFVar5 = (this->Points).AllocatorInstance.Data;
      lVar12 = (longlong)(int)uVar18;
      if ((FVar2 == (FScriptContainerElement)0x1) || (FVar2 == (FScriptContainerElement)0x5)) {
        if ((param_2) && ((uVar14 == 0 || ((uVar14 == uVar16 && (this->bIsLooped == false)))))) {
          *(undefined8 *)(pFVar4 + lVar13 + 8) = 0;
        }
        else if ((pFVar15[lVar11 * 0x14 + 0x10] == (FScriptContainerElement)0x1) ||
                ((byte)((char)pFVar15[lVar11 * 0x14 + 0x10] - 3U) < 3)) {
          if ((this->bIsLooped == false) || (uVar14 != 0)) {
            fVar21 = *(float *)(pFVar15 + lVar11 * 0x14);
            if (this->bIsLooped != false) goto LAB_147b4753a;
LAB_147b4754d:
            fVar22 = *(float *)(pFVar5 + lVar12 * 0x14);
          }
          else {
            fVar21 = *(float *)(pFVar4 + lVar13) - this->LoopKeyOffset;
LAB_147b4753a:
            if (uVar14 != uVar16) goto LAB_147b4754d;
            fVar22 = this->LoopKeyOffset + *(float *)(pFVar4 + lVar13);
          }
          fVar1 = *(float *)(pFVar4 + lVar13);
          pFVar15 = pFVar15 + (lVar11 * 5 + 1) * 4;
          if (FVar2 == (FScriptContainerElement)0x5) {
            lVar17 = (longlong)(pFVar4 + lVar13 + 4) - (longlong)pFVar15;
            lVar11 = -(longlong)pFVar15;
            uVar19 = 0;
            lVar12 = (longlong)(pFVar5 + (lVar12 * 5 + 1) * 4) - (longlong)pFVar15;
            do {
              fVar20 = ClampFloatTangent(*(float *)pFVar15,fVar21,*(float *)(pFVar15 + lVar17),fVar1
                                         ,*(float *)(pFVar15 + lVar12),fVar22);
              pFVar15 = pFVar15 + 4;
              uVar19 = uVar19 + 4;
              *(float *)(&stack0x0000001c + lVar11 + (longlong)pFVar15) = fVar20 * (fVar8 - param_1)
              ;
            } while (uVar19 < 4);
          }
          else {
            fVar1 = *(float *)(pFVar4 + lVar13 + 4);
            local_res20[0] = fVar22 - fVar21;
            if (fVar22 - fVar21 <= fVar7) {
              local_res20[0] = fVar7;
            }
            local_res20[0] =
                 (((*(float *)(pFVar5 + (lVar12 * 5 + 1) * 4) - fVar1) + (fVar1 - *(float *)pFVar15)
                  ) * (fVar8 - param_1)) / local_res20[0];
          }
          *(float *)(pFVar4 + lVar13 + 8) = local_res20[0];
          *(float *)(pFVar4 + lVar13 + 0xc) = local_res20[0];
        }
        else {
          *(undefined4 *)(pFVar4 + lVar13 + 8) = *(undefined4 *)(pFVar15 + lVar11 * 0x14 + 8);
          *(undefined4 *)(pFVar4 + lVar13 + 0xc) = *(undefined4 *)(pFVar15 + lVar11 * 0x14 + 0xc);
        }
      }
      else if (FVar2 == (FScriptContainerElement)0x0) {
        fVar21 = *(float *)(pFVar5 + lVar12 * 0x14 + 4) - *(float *)(pFVar4 + lVar13 + 4);
        *(float *)(pFVar4 + lVar13 + 0xc) = fVar21;
        if ((pFVar15[lVar11 * 0x14 + 0x10] == (FScriptContainerElement)0x1) ||
           ((byte)((char)pFVar15[lVar11 * 0x14 + 0x10] - 3U) < 3)) {
          *(float *)(pFVar4 + lVar13 + 8) = fVar21;
        }
        else {
          *(float *)(pFVar4 + lVar13 + 8) =
               *(float *)(pFVar4 + lVar13 + 4) - *(float *)(pFVar15 + lVar11 * 0x14 + 4);
        }
      }
      else if (FVar2 == (FScriptContainerElement)0x2) {
        *(undefined8 *)(pFVar4 + lVar13 + 8) = 0;
      }
      uVar14 = uVar14 + 1;
      lVar13 = lVar13 + 0x14;
      local_b0 = local_b0 + -1;
    } while (local_b0 != 0);
  }
  return;
}

// AutoSetTangents @ 147b476c0

void __thiscall
FInterpCurve<UE::Math::TVector2<double>_>::AutoSetTangents
          (FInterpCurve<UE::Math::TVector2<double>_> *this,float param_1,bool param_2)

{
  FScriptContainerElement FVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  float *pfVar15;
  uint uVar16;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  float fVar25;
  double dVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  ulonglong uVar17;
  
  fVar9 = __real_3f800000;
  fVar8 = __real_38d1b717;
  dVar7 = __real_3ff0000000000000;
  iVar2 = (this->Points).ArrayNum;
  local_f0 = (longlong)iVar2;
  uVar13 = 0;
  uVar18 = iVar2 - 1;
  uVar17 = uVar13;
  if (0 < iVar2) {
    do {
      uVar16 = (uint)uVar17;
      if (uVar16 == 0) {
        uVar23 = 0;
        if (this->bIsLooped != (bool)(char)uVar17) {
          uVar23 = uVar18;
        }
      }
      else {
        uVar23 = uVar16 - 1;
      }
      if (uVar16 == uVar18) {
        uVar22 = uVar18;
        if (this->bIsLooped != false) {
          uVar22 = 0;
        }
      }
      else {
        uVar22 = uVar16 + 1;
      }
      uVar11 = 0;
      uVar12 = uVar11;
      if ((int)uVar16 < (this->Points).ArrayNum) {
        uVar12 = ~uVar16 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar3 = (this->Points).AllocatorInstance.Data;
      uVar12 = uVar11;
      if ((int)uVar23 < (this->Points).ArrayNum) {
        uVar12 = ~uVar23 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar24 = (this->Points).AllocatorInstance.Data;
      lVar14 = (longlong)(int)uVar23 * 0x40;
      if ((int)uVar22 < (this->Points).ArrayNum) {
        uVar11 = ~uVar22 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVar1 = pFVar3[uVar13 + 0x38];
      pFVar20 = (this->Points).AllocatorInstance.Data + (longlong)(int)uVar22 * 0x40;
      if ((FVar1 == (FScriptContainerElement)0x1) || (FVar1 == (FScriptContainerElement)0x5)) {
        if ((param_2) && ((uVar16 == 0 || ((uVar16 == uVar18 && (this->bIsLooped == false)))))) {
LAB_147b47946:
          *(undefined8 *)(pFVar3 + uVar13 + 0x18) = 0;
          *(undefined8 *)(pFVar3 + uVar13 + 0x20) = 0;
          *(undefined8 *)(pFVar3 + uVar13 + 0x28) = 0;
          *(undefined8 *)(pFVar3 + uVar13 + 0x30) = 0;
          goto LAB_147b47ae3;
        }
        if ((pFVar24[lVar14 + 0x38] != (FScriptContainerElement)0x1) &&
           (2 < (byte)((char)pFVar24[lVar14 + 0x38] - 3U))) {
          uVar5 = *(undefined8 *)(pFVar24 + lVar14 + 0x18 + 8);
          *(undefined8 *)(pFVar3 + uVar13 + 0x18) = *(undefined8 *)(pFVar24 + lVar14 + 0x18);
          *(undefined8 *)(pFVar3 + uVar13 + 0x18 + 8) = uVar5;
          uVar5 = *(undefined8 *)(pFVar24 + lVar14 + 0x28 + 8);
          *(undefined8 *)(pFVar3 + uVar13 + 0x28) = *(undefined8 *)(pFVar24 + lVar14 + 0x28);
          *(undefined8 *)(pFVar3 + uVar13 + 0x28 + 8) = uVar5;
          goto LAB_147b47ae3;
        }
        if ((this->bIsLooped == false) || (uVar16 != 0)) {
          fVar29 = *(float *)(pFVar24 + lVar14);
          if (this->bIsLooped != false) goto LAB_147b479ad;
LAB_147b479bf:
          fVar27 = *(float *)pFVar20;
        }
        else {
          fVar29 = *(float *)(pFVar3 + uVar13) - this->LoopKeyOffset;
LAB_147b479ad:
          if (uVar16 != uVar18) goto LAB_147b479bf;
          fVar27 = *(float *)(pFVar3 + uVar13) + this->LoopKeyOffset;
        }
        fVar28 = *(float *)(pFVar3 + uVar13);
        pFVar19 = pFVar3 + uVar13 + 8;
        pFVar24 = pFVar24 + lVar14 + 8;
        pFVar21 = pFVar20 + 8;
        if (FVar1 == (FScriptContainerElement)0x5) {
          uVar23 = 0;
          pfVar15 = (float *)&local_e8;
          do {
            fVar25 = ClampFloatTangent(*(float *)pFVar24,fVar29,*(float *)pFVar19,fVar28,
                                       *(float *)pFVar21,fVar27);
            uVar23 = uVar23 + 4;
            pFVar24 = pFVar24 + 4;
            pFVar19 = pFVar19 + 4;
            pFVar21 = pFVar21 + 4;
            *pfVar15 = fVar25 * (fVar9 - param_1);
            pfVar15 = pfVar15 + 1;
          } while (uVar23 < 0x10);
        }
        else {
          fVar28 = fVar27 - fVar29;
          if (fVar27 - fVar29 <= fVar8) {
            fVar28 = fVar8;
          }
          dVar26 = (double)(fVar9 - param_1);
          local_e8 = ((*(double *)pFVar19 - *(double *)pFVar24) +
                     (*(double *)pFVar21 - *(double *)pFVar19)) * dVar26 * (dVar7 / (double)fVar28);
          uStack_e0 = ((*(double *)(pFVar19 + 8) - *(double *)(pFVar24 + 8)) +
                      (*(double *)(pFVar20 + 0x10) - *(double *)(pFVar19 + 8))) * dVar26 *
                      (dVar7 / (double)fVar28);
        }
        pFVar24 = pFVar3 + uVar13 + 0x28;
        *(float *)pFVar24 = (float)local_e8;
        *(undefined4 *)(pFVar24 + 4) = local_e8._4_4_;
        *(undefined4 *)(pFVar24 + 8) = (undefined4)uStack_e0;
        *(undefined4 *)(pFVar24 + 0xc) = uStack_e0._4_4_;
        dVar26 = local_e8;
        dVar6 = uStack_e0;
LAB_147b47adb:
        *(double *)(pFVar3 + uVar13 + 0x18) = dVar26;
        *(double *)(pFVar3 + uVar13 + 0x18 + 8) = dVar6;
      }
      else {
        if (FVar1 == (FScriptContainerElement)0x0) {
          dVar26 = *(double *)(pFVar20 + 0x10);
          *(double *)(pFVar3 + uVar13 + 0x28) =
               *(double *)(pFVar20 + 8) - *(double *)(pFVar3 + uVar13 + 8);
          *(double *)(pFVar3 + uVar13 + 0x30) = dVar26 - *(double *)(pFVar3 + uVar13 + 0x10);
          if ((pFVar24[lVar14 + 0x38] == (FScriptContainerElement)0x1) ||
             ((byte)((char)pFVar24[lVar14 + 0x38] - 3U) < 3)) {
            local_c8 = *(double *)(pFVar3 + uVar13 + 0x28);
            dStack_c0 = *(double *)(pFVar3 + uVar13 + 0x28 + 8);
            dVar26 = local_c8;
            dVar6 = dStack_c0;
          }
          else {
            local_d8 = *(double *)(pFVar3 + uVar13 + 8) - *(double *)(pFVar24 + lVar14 + 8);
            dStack_d0 = *(double *)(pFVar3 + uVar13 + 0x10) - *(double *)(pFVar24 + lVar14 + 0x10);
            dVar26 = local_d8;
            dVar6 = dStack_d0;
          }
          goto LAB_147b47adb;
        }
        if (FVar1 == (FScriptContainerElement)0x2) goto LAB_147b47946;
      }
LAB_147b47ae3:
      uVar13 = uVar13 + 0x40;
      local_f0 = local_f0 + -1;
      uVar17 = (ulonglong)(uVar16 + 1);
    } while (local_f0 != 0);
  }
  return;
}

// AutoSetTangents @ 147b47b70

void __thiscall
FInterpCurve<FTwoVectors>::AutoSetTangents
          (FInterpCurve<FTwoVectors> *this,float param_1,bool param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  FScriptContainerElement FVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  bool bVar14;
  uint uVar15;
  double *pdVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  FScriptContainerElement *pFVar22;
  FScriptContainerElement *pFVar23;
  uint uVar24;
  FScriptContainerElement *pFVar25;
  uint uVar26;
  uint uVar27;
  float fVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  longlong local_170;
  double local_168;
  double dStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  FScriptContainerElement *local_138;
  double local_130;
  double dStack_128;
  double local_120;
  double dStack_118;
  double local_110;
  double dStack_108;
  double local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulonglong uVar28;
  
  fVar13 = __real_3f800000;
  fVar12 = __real_38d1b717;
  iVar7 = (this->Points).ArrayNum;
  local_170 = (longlong)iVar7;
  uVar20 = 0;
  uVar18 = iVar7 - 1;
  uVar28 = uVar20;
  if (0 < iVar7) {
    do {
      uVar27 = (uint)uVar28;
      if (uVar27 == 0) {
        uVar26 = 0;
        if (this->bIsLooped != (bool)(char)uVar28) {
          uVar26 = uVar18;
        }
      }
      else {
        uVar26 = uVar27 - 1;
      }
      if (uVar27 == uVar18) {
        uVar24 = uVar18;
        if (this->bIsLooped != false) {
          uVar24 = 0;
        }
      }
      else {
        uVar24 = uVar27 + 1;
      }
      uVar15 = 0;
      if ((int)uVar27 < (this->Points).ArrayNum) {
        uVar15 = ~uVar27 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar22 = (this->Points).AllocatorInstance.Data;
      uVar15 = 0;
      if ((int)uVar26 < (this->Points).ArrayNum) {
        uVar15 = ~uVar26 >> 0x1f;
      }
      local_138 = pFVar22;
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar8 = (this->Points).AllocatorInstance.Data;
      lVar21 = (longlong)(int)uVar26 * 0xa0;
      uVar26 = 0;
      if ((int)uVar24 < (this->Points).ArrayNum) {
        uVar26 = ~uVar24 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar26 = 0;
      FVar6 = pFVar22[uVar20 + 0x98];
      pFVar9 = (this->Points).AllocatorInstance.Data;
      lVar19 = (longlong)(int)uVar24 * 0xa0;
      if ((FVar6 == (FScriptContainerElement)0x1) || (FVar6 == (FScriptContainerElement)0x5)) {
        if ((param_2) && ((uVar27 == 0 || ((uVar27 == uVar18 && (this->bIsLooped == false)))))) {
          *(undefined8 *)(pFVar22 + uVar20 + 0x38) = 0;
          *(undefined8 *)(pFVar22 + uVar20 + 0x40) = 0;
          *(undefined8 *)(pFVar22 + uVar20 + 0x48) = 0;
          *(undefined8 *)(pFVar22 + uVar20 + 0x50) = 0;
          *(undefined8 *)(pFVar22 + uVar20 + 0x58) = 0;
          *(undefined8 *)(pFVar22 + uVar20 + 0x60) = 0;
          *(undefined8 *)(pFVar22 + uVar20 + 0x68) = 0;
          *(undefined8 *)(pFVar22 + uVar20 + 0x70) = 0;
          *(undefined8 *)(pFVar22 + uVar20 + 0x78) = 0;
          *(undefined8 *)(pFVar22 + uVar20 + 0x80) = 0;
          *(undefined8 *)(pFVar22 + uVar20 + 0x88) = 0;
          *(undefined8 *)(pFVar22 + uVar20 + 0x90) = 0;
        }
        else {
          if ((pFVar8[lVar21 + 0x98] == (FScriptContainerElement)0x1) ||
             ((byte)((char)pFVar8[lVar21 + 0x98] - 3U) < 3)) {
            local_168 = 0.0;
            dStack_160 = 0.0;
            local_158 = 0.0;
            uStack_150 = 0.0;
            local_148 = 0.0;
            uStack_140 = 0.0;
            if ((this->bIsLooped == false) || (uVar27 != 0)) {
              fVar39 = *(float *)(pFVar8 + lVar21);
              if (this->bIsLooped != false) goto LAB_147b48020;
LAB_147b48034:
              fVar40 = *(float *)(pFVar9 + lVar19);
            }
            else {
              fVar39 = *(float *)(pFVar22 + uVar20) - this->LoopKeyOffset;
LAB_147b48020:
              if (uVar27 != uVar18) goto LAB_147b48034;
              fVar40 = this->LoopKeyOffset + *(float *)(pFVar22 + uVar20);
            }
            fVar41 = *(float *)(pFVar22 + uVar20);
            pFVar17 = pFVar9 + lVar19 + 8;
            pFVar25 = pFVar22 + uVar20 + 8;
            pFVar23 = pFVar8 + lVar21 + 8;
            fVar38 = fVar13 - param_1;
            if (FVar6 == (FScriptContainerElement)0x5) {
              pdVar16 = &local_168;
              do {
                fVar29 = ClampFloatTangent(*(float *)pFVar23,fVar39,*(float *)pFVar25,fVar41,
                                           *(float *)pFVar17,fVar40);
                uVar26 = uVar26 + 4;
                pFVar23 = pFVar23 + 4;
                pFVar25 = pFVar25 + 4;
                pFVar17 = pFVar17 + 4;
                *(float *)pdVar16 = fVar29 * fVar38;
                pdVar16 = (double *)((longlong)pdVar16 + 4);
                pFVar22 = local_138;
              } while (uVar26 < 0x30);
            }
            else {
              dVar1 = (double)fVar38;
              fVar41 = fVar40 - fVar39;
              if (fVar40 - fVar39 <= fVar12) {
                fVar41 = fVar12;
              }
              uStack_140 = (double)(fVar13 / fVar41);
              local_168 = ((*(double *)pFVar17 - *(double *)pFVar25) +
                          (*(double *)pFVar25 - *(double *)pFVar23)) * dVar1 * uStack_140;
              dStack_160 = ((*(double *)(pFVar22 + uVar20 + 0x10) -
                            *(double *)(pFVar8 + lVar21 + 0x10)) +
                           (*(double *)(pFVar9 + lVar19 + 0x10) -
                           *(double *)(pFVar22 + uVar20 + 0x10))) * dVar1 * uStack_140;
              local_158 = ((*(double *)(pFVar22 + uVar20 + 0x18) -
                           *(double *)(pFVar8 + lVar21 + 0x18)) +
                          (*(double *)(pFVar9 + lVar19 + 0x18) -
                          *(double *)(pFVar22 + uVar20 + 0x18))) * dVar1 * uStack_140;
              uStack_150 = ((*(double *)(pFVar22 + uVar20 + 0x20) -
                            *(double *)(pFVar8 + lVar21 + 0x20)) +
                           (*(double *)(pFVar9 + lVar19 + 0x20) -
                           *(double *)(pFVar22 + uVar20 + 0x20))) * dVar1 * uStack_140;
              local_148 = ((*(double *)(pFVar22 + uVar20 + 0x28) -
                           *(double *)(pFVar8 + lVar21 + 0x28)) +
                          (*(double *)(pFVar9 + lVar19 + 0x28) -
                          *(double *)(pFVar22 + uVar20 + 0x28))) * dVar1 * uStack_140;
              uStack_140 = ((*(double *)(pFVar22 + uVar20 + 0x30) -
                            *(double *)(pFVar8 + lVar21 + 0x30)) +
                           (*(double *)(pFVar9 + lVar19 + 0x30) -
                           *(double *)(pFVar22 + uVar20 + 0x30))) * dVar1 * uStack_140;
            }
            *(double *)(pFVar22 + uVar20 + 0x68) = local_168;
            *(double *)(pFVar22 + uVar20 + 0x68 + 8) = dStack_160;
            pFVar8 = pFVar22 + uVar20 + 0x78;
            *(undefined4 *)pFVar8 = (undefined4)local_158;
            *(undefined4 *)(pFVar8 + 4) = local_158._4_4_;
            *(undefined4 *)(pFVar8 + 8) = (undefined4)uStack_150;
            *(undefined4 *)(pFVar8 + 0xc) = uStack_150._4_4_;
            pFVar8 = pFVar22 + uVar20 + 0x88;
            *(undefined4 *)pFVar8 = (undefined4)local_148;
            *(undefined4 *)(pFVar8 + 4) = local_148._4_4_;
            *(undefined4 *)(pFVar8 + 8) = (undefined4)uStack_140;
            *(undefined4 *)(pFVar8 + 0xc) = uStack_140._4_4_;
            *(double *)(pFVar22 + uVar20 + 0x38) = local_168;
            *(double *)(pFVar22 + uVar20 + 0x38 + 8) = dStack_160;
            uVar30 = (undefined4)local_148;
            uVar31 = local_148._4_4_;
            uVar32 = (undefined4)uStack_140;
            uVar33 = uStack_140._4_4_;
            uVar34 = (undefined4)local_158;
            uVar35 = local_158._4_4_;
            uVar36 = (undefined4)uStack_150;
            uVar37 = uStack_150._4_4_;
            goto LAB_147b4820f;
          }
          uVar11 = *(undefined8 *)(pFVar8 + lVar21 + 0x38 + 8);
          *(undefined8 *)(pFVar22 + uVar20 + 0x38) = *(undefined8 *)(pFVar8 + lVar21 + 0x38);
          *(undefined8 *)(pFVar22 + uVar20 + 0x38 + 8) = uVar11;
          uVar11 = *(undefined8 *)(pFVar8 + lVar21 + 0x48 + 8);
          *(undefined8 *)(pFVar22 + uVar20 + 0x48) = *(undefined8 *)(pFVar8 + lVar21 + 0x48);
          *(undefined8 *)(pFVar22 + uVar20 + 0x48 + 8) = uVar11;
          uVar11 = *(undefined8 *)(pFVar8 + lVar21 + 0x58 + 8);
          *(undefined8 *)(pFVar22 + uVar20 + 0x58) = *(undefined8 *)(pFVar8 + lVar21 + 0x58);
          *(undefined8 *)(pFVar22 + uVar20 + 0x58 + 8) = uVar11;
          uVar11 = *(undefined8 *)(pFVar8 + lVar21 + 0x68 + 8);
          *(undefined8 *)(pFVar22 + uVar20 + 0x68) = *(undefined8 *)(pFVar8 + lVar21 + 0x68);
          *(undefined8 *)(pFVar22 + uVar20 + 0x68 + 8) = uVar11;
          pFVar9 = pFVar8 + lVar21 + 0x78;
          uVar34 = *(undefined4 *)(pFVar9 + 4);
          uVar35 = *(undefined4 *)(pFVar9 + 8);
          uVar36 = *(undefined4 *)(pFVar9 + 0xc);
          pFVar25 = pFVar22 + uVar20 + 0x78;
          *(undefined4 *)pFVar25 = *(undefined4 *)pFVar9;
          *(undefined4 *)(pFVar25 + 4) = uVar34;
          *(undefined4 *)(pFVar25 + 8) = uVar35;
          *(undefined4 *)(pFVar25 + 0xc) = uVar36;
          pFVar8 = pFVar8 + lVar21 + 0x88;
          uVar34 = *(undefined4 *)(pFVar8 + 4);
          uVar35 = *(undefined4 *)(pFVar8 + 8);
          uVar36 = *(undefined4 *)(pFVar8 + 0xc);
          pFVar22 = pFVar22 + uVar20 + 0x88;
          *(undefined4 *)pFVar22 = *(undefined4 *)pFVar8;
          *(undefined4 *)(pFVar22 + 4) = uVar34;
          *(undefined4 *)(pFVar22 + 8) = uVar35;
          *(undefined4 *)(pFVar22 + 0xc) = uVar36;
        }
      }
      else {
        if (FVar6 != (FScriptContainerElement)0x0) {
          if (FVar6 == (FScriptContainerElement)0x2) {
            *(undefined8 *)(pFVar22 + uVar20 + 0x38) = 0;
            *(undefined8 *)(pFVar22 + uVar20 + 0x40) = 0;
            *(undefined8 *)(pFVar22 + uVar20 + 0x48) = 0;
            *(undefined8 *)(pFVar22 + uVar20 + 0x50) = 0;
            *(undefined8 *)(pFVar22 + uVar20 + 0x58) = 0;
            *(undefined8 *)(pFVar22 + uVar20 + 0x60) = 0;
            *(undefined8 *)(pFVar22 + uVar20 + 0x68) = 0;
            *(undefined8 *)(pFVar22 + uVar20 + 0x70) = 0;
            *(undefined8 *)(pFVar22 + uVar20 + 0x78) = 0;
            *(undefined8 *)(pFVar22 + uVar20 + 0x80) = 0;
            *(undefined8 *)(pFVar22 + uVar20 + 0x88) = 0;
            *(undefined8 *)(pFVar22 + uVar20 + 0x90) = 0;
          }
          goto LAB_147b48219;
        }
        dVar1 = *(double *)(pFVar9 + lVar19 + 0x10);
        dVar2 = *(double *)(pFVar9 + lVar19 + 0x18);
        dVar3 = *(double *)(pFVar9 + lVar19 + 0x20);
        dVar4 = *(double *)(pFVar9 + lVar19 + 0x28);
        dVar5 = *(double *)(pFVar9 + lVar19 + 0x30);
        *(double *)(pFVar22 + uVar20 + 0x68) =
             *(double *)(pFVar9 + lVar19 + 8) - *(double *)(pFVar22 + uVar20 + 8);
        *(double *)(pFVar22 + uVar20 + 0x70) = dVar1 - *(double *)(pFVar22 + uVar20 + 0x10);
        *(double *)(pFVar22 + uVar20 + 0x78) = dVar2 - *(double *)(pFVar22 + uVar20 + 0x18);
        *(double *)(pFVar22 + uVar20 + 0x80) = dVar3 - *(double *)(pFVar22 + uVar20 + 0x20);
        *(double *)(pFVar22 + uVar20 + 0x88) = dVar4 - *(double *)(pFVar22 + uVar20 + 0x28);
        *(double *)(pFVar22 + uVar20 + 0x90) = dVar5 - *(double *)(pFVar22 + uVar20 + 0x30);
        if ((pFVar8[lVar21 + 0x98] == (FScriptContainerElement)0x1) ||
           ((byte)((char)pFVar8[lVar21 + 0x98] - 3U) < 3)) {
          pdVar16 = &local_100;
          local_100 = *(double *)(pFVar22 + uVar20 + 0x68);
          uStack_f8 = *(undefined8 *)(pFVar22 + uVar20 + 0x68 + 8);
          local_f0 = *(undefined8 *)(pFVar22 + uVar20 + 0x78);
          uStack_e8 = *(undefined8 *)(pFVar22 + uVar20 + 0x78 + 8);
          local_e0 = *(undefined8 *)(pFVar22 + uVar20 + 0x88);
          uStack_d8 = *(undefined8 *)(pFVar22 + uVar20 + 0x88 + 8);
        }
        else {
          local_130 = *(double *)(pFVar22 + uVar20 + 8) - *(double *)(pFVar8 + lVar21 + 8);
          pdVar16 = &local_130;
          dStack_128 = *(double *)(pFVar22 + uVar20 + 0x10) - *(double *)(pFVar8 + lVar21 + 0x10);
          local_120 = *(double *)(pFVar22 + uVar20 + 0x18) - *(double *)(pFVar8 + lVar21 + 0x18);
          dStack_118 = *(double *)(pFVar22 + uVar20 + 0x20) - *(double *)(pFVar8 + lVar21 + 0x20);
          local_110 = *(double *)(pFVar22 + uVar20 + 0x28) - *(double *)(pFVar8 + lVar21 + 0x28);
          dStack_108 = *(double *)(pFVar22 + uVar20 + 0x30) - *(double *)(pFVar8 + lVar21 + 0x30);
        }
        dVar1 = pdVar16[1];
        uVar34 = *(undefined4 *)(pdVar16 + 2);
        uVar35 = *(undefined4 *)((longlong)pdVar16 + 0x14);
        uVar36 = *(undefined4 *)(pdVar16 + 3);
        uVar37 = *(undefined4 *)((longlong)pdVar16 + 0x1c);
        *(double *)(pFVar22 + uVar20 + 0x38) = *pdVar16;
        *(double *)(pFVar22 + uVar20 + 0x38 + 8) = dVar1;
        uVar30 = *(undefined4 *)(pdVar16 + 4);
        uVar31 = *(undefined4 *)((longlong)pdVar16 + 0x24);
        uVar32 = *(undefined4 *)(pdVar16 + 5);
        uVar33 = *(undefined4 *)((longlong)pdVar16 + 0x2c);
LAB_147b4820f:
        pFVar8 = pFVar22 + uVar20 + 0x48;
        *(undefined4 *)pFVar8 = uVar34;
        *(undefined4 *)(pFVar8 + 4) = uVar35;
        *(undefined4 *)(pFVar8 + 8) = uVar36;
        *(undefined4 *)(pFVar8 + 0xc) = uVar37;
        pFVar22 = pFVar22 + uVar20 + 0x58;
        *(undefined4 *)pFVar22 = uVar30;
        *(undefined4 *)(pFVar22 + 4) = uVar31;
        *(undefined4 *)(pFVar22 + 8) = uVar32;
        *(undefined4 *)(pFVar22 + 0xc) = uVar33;
      }
LAB_147b48219:
      uVar20 = uVar20 + 0xa0;
      local_170 = local_170 + -1;
      uVar28 = (ulonglong)(uVar27 + 1);
    } while (local_170 != 0);
  }
  return;
}

// CalcBounds @ 147b49440

void __thiscall
FInterpCurve<float>::CalcBounds
          (FInterpCurve<float> *this,float *param_1,float *param_2,float *param_3)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = (this->Points).ArrayNum;
  if (uVar1 == 0) {
    *param_1 = *param_3;
    *param_2 = *param_3;
    return;
  }
  if (uVar1 == 1) {
    *param_1 = *(float *)((this->Points).AllocatorInstance.Data + 4);
    if (((this->Points).ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *param_2 = *(float *)((this->Points).AllocatorInstance.Data + 4);
    return;
  }
  if (((int)uVar1 < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *param_1 = *(float *)((this->Points).AllocatorInstance.Data + 4);
  if (((this->Points).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *param_2 = *(float *)((this->Points).AllocatorInstance.Data + 4);
  uVar6 = uVar1;
  if (this->bIsLooped == false) {
    uVar6 = uVar1 - 1;
  }
  uVar8 = 0;
  if (0 < (int)uVar6) {
    do {
      uVar9 = uVar8 + 1;
      uVar7 = 0;
      if (uVar8 != uVar1 - 1) {
        uVar7 = uVar9;
      }
      uVar5 = 0;
      if ((int)uVar7 < (this->Points).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->Points).AllocatorInstance.Data;
      uVar5 = 0;
      if ((int)uVar8 < (this->Points).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      CurveFloatFindIntervalBounds
                ((FInterpCurvePoint<float> *)
                 ((this->Points).AllocatorInstance.Data + (ulonglong)uVar8 * 0x14),
                 (FInterpCurvePoint<float> *)(pFVar2 + (longlong)(int)uVar7 * 0x14),param_1,param_2)
      ;
      uVar8 = uVar9;
    } while ((int)uVar9 < (int)uVar6);
  }
  return;
}

// CalcBounds @ 147b49680

void __thiscall
FInterpCurve<UE::Math::TVector2<double>_>::CalcBounds
          (FInterpCurve<UE::Math::TVector2<double>_> *this,TVector2<double> *param_1,
          TVector2<double> *param_2,TVector2<double> *param_3)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar1 = (this->Points).ArrayNum;
  if (uVar1 == 0) {
    dVar4 = (param_3->field0_0x0)._s_0.Y;
    (param_1->field0_0x0)._s_0.X = (param_3->field0_0x0)._s_0.X;
    (param_1->field0_0x0)._s_0.Y = dVar4;
    dVar4 = (param_3->field0_0x0)._s_0.Y;
    (param_2->field0_0x0)._s_0.X = (param_3->field0_0x0)._s_0.X;
    (param_2->field0_0x0)._s_0.Y = dVar4;
    return;
  }
  if (uVar1 == 1) {
    pFVar2 = (this->Points).AllocatorInstance.Data;
    dVar4 = *(double *)(pFVar2 + 0x10);
    (param_1->field0_0x0)._s_0.X = *(double *)(pFVar2 + 8);
    (param_1->field0_0x0)._s_0.Y = dVar4;
    if (((this->Points).ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = (this->Points).AllocatorInstance.Data;
    dVar4 = *(double *)(pFVar2 + 0x10);
    (param_2->field0_0x0)._s_0.X = *(double *)(pFVar2 + 8);
    (param_2->field0_0x0)._s_0.Y = dVar4;
    return;
  }
  if (((int)uVar1 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->Points).AllocatorInstance.Data;
  dVar4 = *(double *)(pFVar2 + 0x10);
  (param_1->field0_0x0)._s_0.X = *(double *)(pFVar2 + 8);
  (param_1->field0_0x0)._s_0.Y = dVar4;
  if (((this->Points).ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->Points).AllocatorInstance.Data;
  dVar4 = *(double *)(pFVar2 + 0x10);
  (param_2->field0_0x0)._s_0.X = *(double *)(pFVar2 + 8);
  (param_2->field0_0x0)._s_0.Y = dVar4;
  uVar7 = uVar1;
  if (this->bIsLooped == false) {
    uVar7 = uVar1 - 1;
  }
  uVar9 = 0;
  if (0 < (int)uVar7) {
    do {
      uVar10 = uVar9 + 1;
      uVar8 = 0;
      if (uVar9 != uVar1 - 1) {
        uVar8 = uVar10;
      }
      uVar6 = 0;
      if ((int)uVar8 < (this->Points).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->Points).AllocatorInstance.Data;
      uVar6 = 0;
      if ((int)uVar9 < (this->Points).ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      CurveVector2DFindIntervalBounds
                ((FInterpCurvePoint<UE::Math::TVector2<double>_> *)
                 ((this->Points).AllocatorInstance.Data + (ulonglong)uVar9 * 0x40),
                 (FInterpCurvePoint<UE::Math::TVector2<double>_> *)
                 (pFVar2 + (longlong)(int)uVar8 * 0x40),param_1,param_2);
      uVar9 = uVar10;
    } while ((int)uVar10 < (int)uVar7);
  }
  return;
}

// CalcBounds @ 147b498c0

void __thiscall
FInterpCurve<UE::Math::TVector<double>_>::CalcBounds
          (FInterpCurve<UE::Math::TVector<double>_> *this,TVector<double> *param_1,
          TVector<double> *param_2,TVector<double> *param_3)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar1 = (this->Points).ArrayNum;
  if (uVar1 == 0) {
    dVar4 = (param_3->field0_0x0)._s_0.Y;
    (param_1->field0_0x0)._s_0.X = (param_3->field0_0x0)._s_0.X;
    (param_1->field0_0x0)._s_0.Y = dVar4;
    (param_1->field0_0x0)._s_0.Z = (param_3->field0_0x0)._s_0.Z;
    dVar4 = (param_3->field0_0x0)._s_0.Y;
    (param_2->field0_0x0)._s_0.X = (param_3->field0_0x0)._s_0.X;
    (param_2->field0_0x0)._s_0.Y = dVar4;
    (param_2->field0_0x0)._s_0.Z = (param_3->field0_0x0)._s_0.Z;
    return;
  }
  if (uVar1 == 1) {
    pFVar2 = (this->Points).AllocatorInstance.Data;
    dVar4 = *(double *)(pFVar2 + 0x10);
    (param_1->field0_0x0)._s_0.X = *(double *)(pFVar2 + 8);
    (param_1->field0_0x0)._s_0.Y = dVar4;
    (param_1->field0_0x0)._s_0.Z = *(double *)(pFVar2 + 0x18);
    if (((this->Points).ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = (this->Points).AllocatorInstance.Data;
    dVar4 = *(double *)(pFVar2 + 0x10);
    (param_2->field0_0x0)._s_0.X = *(double *)(pFVar2 + 8);
    (param_2->field0_0x0)._s_0.Y = dVar4;
    (param_2->field0_0x0)._s_0.Z = *(double *)(pFVar2 + 0x18);
    return;
  }
  if (((int)uVar1 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->Points).AllocatorInstance.Data;
  dVar4 = *(double *)(pFVar2 + 0x10);
  (param_1->field0_0x0)._s_0.X = *(double *)(pFVar2 + 8);
  (param_1->field0_0x0)._s_0.Y = dVar4;
  (param_1->field0_0x0)._s_0.Z = *(double *)(pFVar2 + 0x18);
  if (((this->Points).ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->Points).AllocatorInstance.Data;
  dVar4 = *(double *)(pFVar2 + 0x10);
  (param_2->field0_0x0)._s_0.X = *(double *)(pFVar2 + 8);
  (param_2->field0_0x0)._s_0.Y = dVar4;
  (param_2->field0_0x0)._s_0.Z = *(double *)(pFVar2 + 0x18);
  uVar10 = uVar1;
  if (this->bIsLooped == false) {
    uVar10 = uVar1 - 1;
  }
  uVar8 = 0;
  if (0 < (int)uVar10) {
    do {
      uVar9 = uVar8 + 1;
      uVar7 = 0;
      if (uVar8 != uVar1 - 1) {
        uVar7 = uVar9;
      }
      uVar6 = 0;
      if ((int)uVar7 < (this->Points).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->Points).AllocatorInstance.Data;
      uVar6 = 0;
      if ((int)uVar8 < (this->Points).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      CurveVectorFindIntervalBounds
                ((FInterpCurvePoint<UE::Math::TVector<double>_> *)
                 ((this->Points).AllocatorInstance.Data + (ulonglong)uVar8 * 0x58),
                 (FInterpCurvePoint<UE::Math::TVector<double>_> *)
                 (pFVar2 + (longlong)(int)uVar7 * 0x58),param_1,param_2);
      uVar8 = uVar9;
    } while ((int)uVar9 < (int)uVar10);
  }
  return;
}

// CalcBounds @ 147b49b50

void __thiscall
FInterpCurve<FTwoVectors>::CalcBounds
          (FInterpCurve<FTwoVectors> *this,FTwoVectors *param_1,FTwoVectors *param_2,
          FTwoVectors *param_3)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar1 = (this->Points).ArrayNum;
  if (uVar1 == 0) {
    dVar4 = (param_3->v1).field0_0x0._s_0.Y;
    (param_1->v1).field0_0x0._s_0.X = (param_3->v1).field0_0x0._s_0.X;
    (param_1->v1).field0_0x0._s_0.Y = dVar4;
    dVar4 = (param_3->v2).field0_0x0._s_0.X;
    (param_1->v1).field0_0x0._s_0.Z = (param_3->v1).field0_0x0._s_0.Z;
    (param_1->v2).field0_0x0._s_0.X = dVar4;
    dVar4 = (param_3->v2).field0_0x0._s_0.Z;
    (param_1->v2).field0_0x0._s_0.Y = (param_3->v2).field0_0x0._s_0.Y;
    (param_1->v2).field0_0x0._s_0.Z = dVar4;
    dVar4 = (param_3->v1).field0_0x0._s_0.Y;
    (param_2->v1).field0_0x0._s_0.X = (param_3->v1).field0_0x0._s_0.X;
    (param_2->v1).field0_0x0._s_0.Y = dVar4;
    dVar4 = (param_3->v2).field0_0x0._s_0.X;
    (param_2->v1).field0_0x0._s_0.Z = (param_3->v1).field0_0x0._s_0.Z;
    (param_2->v2).field0_0x0._s_0.X = dVar4;
    dVar4 = (param_3->v2).field0_0x0._s_0.Z;
    (param_2->v2).field0_0x0._s_0.Y = (param_3->v2).field0_0x0._s_0.Y;
    (param_2->v2).field0_0x0._s_0.Z = dVar4;
    return;
  }
  if (uVar1 == 1) {
    pFVar2 = (this->Points).AllocatorInstance.Data;
    dVar4 = *(double *)(pFVar2 + 0x10);
    (param_1->v1).field0_0x0._s_0.X = *(double *)(pFVar2 + 8);
    (param_1->v1).field0_0x0._s_0.Y = dVar4;
    dVar4 = *(double *)(pFVar2 + 0x20);
    (param_1->v1).field0_0x0._s_0.Z = *(double *)(pFVar2 + 0x18);
    (param_1->v2).field0_0x0._s_0.X = dVar4;
    dVar4 = *(double *)(pFVar2 + 0x30);
    (param_1->v2).field0_0x0._s_0.Y = *(double *)(pFVar2 + 0x28);
    (param_1->v2).field0_0x0._s_0.Z = dVar4;
    if (((this->Points).ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = (this->Points).AllocatorInstance.Data;
    dVar4 = *(double *)(pFVar2 + 0x10);
    (param_2->v1).field0_0x0._s_0.X = *(double *)(pFVar2 + 8);
    (param_2->v1).field0_0x0._s_0.Y = dVar4;
    dVar4 = *(double *)(pFVar2 + 0x20);
    (param_2->v1).field0_0x0._s_0.Z = *(double *)(pFVar2 + 0x18);
    (param_2->v2).field0_0x0._s_0.X = dVar4;
    dVar4 = *(double *)(pFVar2 + 0x30);
    (param_2->v2).field0_0x0._s_0.Y = *(double *)(pFVar2 + 0x28);
    (param_2->v2).field0_0x0._s_0.Z = dVar4;
    return;
  }
  if (((int)uVar1 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->Points).AllocatorInstance.Data;
  dVar4 = *(double *)(pFVar2 + 0x10);
  (param_1->v1).field0_0x0._s_0.X = *(double *)(pFVar2 + 8);
  (param_1->v1).field0_0x0._s_0.Y = dVar4;
  dVar4 = *(double *)(pFVar2 + 0x20);
  (param_1->v1).field0_0x0._s_0.Z = *(double *)(pFVar2 + 0x18);
  (param_1->v2).field0_0x0._s_0.X = dVar4;
  dVar4 = *(double *)(pFVar2 + 0x30);
  (param_1->v2).field0_0x0._s_0.Y = *(double *)(pFVar2 + 0x28);
  (param_1->v2).field0_0x0._s_0.Z = dVar4;
  if (((this->Points).ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->Points).AllocatorInstance.Data;
  dVar4 = *(double *)(pFVar2 + 0x10);
  (param_2->v1).field0_0x0._s_0.X = *(double *)(pFVar2 + 8);
  (param_2->v1).field0_0x0._s_0.Y = dVar4;
  dVar4 = *(double *)(pFVar2 + 0x20);
  (param_2->v1).field0_0x0._s_0.Z = *(double *)(pFVar2 + 0x18);
  (param_2->v2).field0_0x0._s_0.X = dVar4;
  dVar4 = *(double *)(pFVar2 + 0x30);
  (param_2->v2).field0_0x0._s_0.Y = *(double *)(pFVar2 + 0x28);
  (param_2->v2).field0_0x0._s_0.Z = dVar4;
  uVar10 = uVar1;
  if (this->bIsLooped == false) {
    uVar10 = uVar1 - 1;
  }
  uVar8 = 0;
  if (0 < (int)uVar10) {
    do {
      uVar9 = uVar8 + 1;
      uVar7 = 0;
      if (uVar8 != uVar1 - 1) {
        uVar7 = uVar9;
      }
      uVar6 = 0;
      if ((int)uVar7 < (this->Points).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar2 = (this->Points).AllocatorInstance.Data;
      uVar6 = 0;
      if ((int)uVar8 < (this->Points).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      CurveTwoVectorsFindIntervalBounds
                ((FInterpCurvePoint<FTwoVectors> *)
                 ((this->Points).AllocatorInstance.Data + (ulonglong)uVar8 * 0xa0),
                 (FInterpCurvePoint<FTwoVectors> *)(pFVar2 + (longlong)(int)uVar7 * 0xa0),param_1,
                 param_2);
      uVar8 = uVar9;
    } while ((int)uVar9 < (int)uVar10);
  }
  return;
}

// Eval @ 147b5f2a0

TVector2<double> * __thiscall
FInterpCurve<UE::Math::TVector2<double>_>::Eval
          (FInterpCurve<UE::Math::TVector2<double>_> *this,TVector2<double> *__return_storage_ptr__,
          float param_1,TVector2<double> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  TVector2<double> *pTVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  float fVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  
  uVar15 = (this->Points).ArrayNum;
  uVar19 = uVar15 - 1;
  if ((uVar15 == 0) || (iVar12 = _isnan((double)param_1), iVar12 != 0)) {
    dVar1 = (param_2->field0_0x0)._s_0.Y;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (param_2->field0_0x0)._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
    return __return_storage_ptr__;
  }
  uVar13 = GetPointIndexForInputValue(this,param_1);
  if (uVar13 == 0xffffffff) {
    iVar12 = (this->Points).ArrayNum;
joined_r0x000147b5f3ef:
    if ((iVar12 < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      pTVar16 = (TVector2<double> *)(*pcVar5)();
      return pTVar16;
    }
    pFVar18 = (this->Points).AllocatorInstance.Data;
    dVar1 = *(double *)(pFVar18 + 0x10);
    (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)(pFVar18 + 8);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
    return __return_storage_ptr__;
  }
  uVar17 = 0;
  if (uVar13 == uVar19) {
    iVar12 = (this->Points).ArrayNum;
    if (this->bIsLooped == false) {
      if ((int)uVar19 < iVar12) {
        uVar17 = ~uVar19 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        pTVar16 = (TVector2<double> *)(*pcVar5)();
        return pTVar16;
      }
      pFVar18 = (this->Points).AllocatorInstance.Data + (longlong)(int)uVar19 * 0x40 + 8;
      dVar1 = *(double *)(pFVar18 + 8);
      (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)pFVar18;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
      return __return_storage_ptr__;
    }
    uVar14 = 0;
    if ((int)uVar19 < iVar12) {
      uVar14 = ~uVar19 >> 0x1f;
    }
    if ((uVar14 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      pTVar16 = (TVector2<double> *)(*pcVar5)();
      return pTVar16;
    }
    if (*(float *)((this->Points).AllocatorInstance.Data + (longlong)(int)uVar19 * 0x40) +
        this->LoopKeyOffset <= param_1) {
      iVar12 = (this->Points).ArrayNum;
      goto joined_r0x000147b5f3ef;
    }
  }
  if (-1 < (int)uVar13) {
    uVar14 = uVar19;
    if (this->bIsLooped != false) {
      uVar14 = uVar15;
    }
    if ((int)uVar13 < (int)uVar14) goto LAB_147b5f47f;
  }
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("Index >= 0 && ((bIsLooped && Index < NumPoints) || (!bIsLooped && Index < LastPoint))"
                      ,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\InterpCurve.h"
                      ,0x162,L"");
  if (bVar10) {
    pcVar5 = (code *)swi(3);
    pTVar16 = (TVector2<double> *)(*pcVar5)();
    return pTVar16;
  }
LAB_147b5f47f:
  if ((this->bIsLooped == false) || (uVar13 != uVar19)) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  uVar19 = 0;
  if (!bVar10) {
    uVar19 = uVar13 + 1;
  }
  uVar15 = 0;
  if ((int)uVar13 < (this->Points).ArrayNum) {
    uVar15 = ~uVar13 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    pTVar16 = (TVector2<double> *)(*pcVar5)();
    return pTVar16;
  }
  pFVar18 = (this->Points).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x40;
  uVar15 = uVar17;
  if ((int)uVar19 < (this->Points).ArrayNum) {
    uVar15 = ~uVar19 >> 0x1f;
  }
  if ((uVar15 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar5 = (code *)swi(3);
    pTVar16 = (TVector2<double> *)(*pcVar5)();
    return pTVar16;
  }
  fVar9 = __real_3f800000;
  pFVar20 = (this->Points).AllocatorInstance.Data + (longlong)(int)uVar19 * 0x40;
  if (bVar10) {
    fVar21 = this->LoopKeyOffset;
  }
  else {
    fVar21 = *(float *)pFVar20 - *(float *)pFVar18;
  }
  if ((fVar21 <= 0.0) || (pFVar18[0x38] == (FScriptContainerElement)0x2)) {
    if ((int)uVar13 < (this->Points).ArrayNum) {
      uVar17 = ~uVar13 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      pTVar16 = (TVector2<double> *)(*pcVar5)();
      return pTVar16;
    }
    pFVar18 = (this->Points).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x40 + 8;
    dVar1 = *(double *)(pFVar18 + 8);
    (__return_storage_ptr__->field0_0x0)._s_0.X = *(double *)pFVar18;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  }
  else {
    fVar24 = (param_1 - *(float *)pFVar18) / fVar21;
    if (((fVar24 < 0.0) || (__real_3f800000 < fVar24)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Alpha >= 0.0f && Alpha <= 1.0f",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\InterpCurve.h"
                            ,0x16e,L"Bad value in Eval(): in %f prev %f  diff %f alpha %f"), bVar10)
       ) {
      pcVar5 = (code *)swi(3);
      pTVar16 = (TVector2<double> *)(*pcVar5)();
      return pTVar16;
    }
    if (pFVar18[0x38] == (FScriptContainerElement)0x0) {
      dVar1 = *(double *)(pFVar20 + 0x10);
      dVar2 = *(double *)(pFVar18 + 0x10);
      dVar3 = *(double *)(pFVar18 + 0x10);
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           (*(double *)(pFVar20 + 8) - *(double *)(pFVar18 + 8)) * (double)fVar24 +
           *(double *)(pFVar18 + 8);
      (__return_storage_ptr__->field0_0x0)._s_0.Y = (dVar1 - dVar2) * (double)fVar24 + dVar3;
    }
    else {
      fVar23 = fVar24 * fVar24;
      dVar8 = (double)fVar21;
      fVar21 = fVar23 * fVar24;
      dVar7 = (double)(((fVar21 + fVar21) - fVar23 * __real_40400000) + fVar9);
      dVar22 = (double)(fVar23 * __real_40400000 - (fVar21 + fVar21));
      dVar1 = *(double *)(pFVar20 + 0x10);
      dVar6 = (double)((fVar21 - (fVar23 + fVar23)) + fVar24);
      dVar2 = *(double *)(pFVar18 + 0x10);
      dVar3 = *(double *)(pFVar20 + 0x20);
      dVar4 = *(double *)(pFVar18 + 0x30);
      (__return_storage_ptr__->field0_0x0)._s_0.X =
           dVar8 * *(double *)(pFVar20 + 0x18) * (double)(fVar21 - fVar23) +
           dVar22 * *(double *)(pFVar20 + 8) +
           dVar8 * *(double *)(pFVar18 + 0x28) * dVar6 + dVar7 * *(double *)(pFVar18 + 8);
      (__return_storage_ptr__->field0_0x0)._s_0.Y =
           dVar8 * dVar3 * (double)(fVar21 - fVar23) + dVar22 * dVar1 +
           dVar8 * dVar4 * dVar6 + dVar7 * dVar2;
    }
  }
  return __return_storage_ptr__;
}

// Eval @ 147b5f7c0

FTwoVectors * __thiscall
FInterpCurve<FTwoVectors>::Eval
          (FInterpCurve<FTwoVectors> *this,FTwoVectors *__return_storage_ptr__,float param_1,
          FTwoVectors *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
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
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  code *pcVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  float fVar29;
  bool bVar30;
  bool bVar31;
  int iVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  FTwoVectors *pFVar36;
  longlong lVar37;
  uint uVar38;
  uint uVar39;
  longlong lVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  
  uVar35 = (this->Points).ArrayNum;
  uVar39 = uVar35 - 1;
  if ((uVar35 == 0) || (iVar32 = _isnan((double)param_1), iVar32 != 0)) {
    dVar1 = (param_2->v1).field0_0x0._s_0.Y;
    dVar2 = (param_2->v1).field0_0x0._s_0.Z;
    dVar3 = (param_2->v2).field0_0x0._s_0.X;
    (__return_storage_ptr__->v1).field0_0x0._s_0.X = (param_2->v1).field0_0x0._s_0.X;
    (__return_storage_ptr__->v1).field0_0x0._s_0.Y = dVar1;
    dVar1 = (param_2->v2).field0_0x0._s_0.Y;
    dVar4 = (param_2->v2).field0_0x0._s_0.Z;
    (__return_storage_ptr__->v1).field0_0x0._s_0.Z = dVar2;
    (__return_storage_ptr__->v2).field0_0x0._s_0.X = dVar3;
    (__return_storage_ptr__->v2).field0_0x0._s_0.Y = dVar1;
    (__return_storage_ptr__->v2).field0_0x0._s_0.Z = dVar4;
    return __return_storage_ptr__;
  }
  uVar33 = GetPointIndexForInputValue(this,param_1);
  if (uVar33 == 0xffffffff) {
    iVar32 = (this->Points).ArrayNum;
joined_r0x000147b5f92c:
    if ((iVar32 < 1) &&
       (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar30)) {
      pcVar22 = (code *)swi(3);
      pFVar36 = (FTwoVectors *)(*pcVar22)();
      return pFVar36;
    }
    pFVar20 = (this->Points).AllocatorInstance.Data;
    dVar1 = *(double *)(pFVar20 + 0x10);
    dVar2 = *(double *)(pFVar20 + 0x18);
    dVar3 = *(double *)(pFVar20 + 0x20);
    (__return_storage_ptr__->v1).field0_0x0._s_0.X = *(double *)(pFVar20 + 8);
    (__return_storage_ptr__->v1).field0_0x0._s_0.Y = dVar1;
    dVar1 = *(double *)(pFVar20 + 0x28);
    dVar4 = *(double *)(pFVar20 + 0x30);
    (__return_storage_ptr__->v1).field0_0x0._s_0.Z = dVar2;
    (__return_storage_ptr__->v2).field0_0x0._s_0.X = dVar3;
    (__return_storage_ptr__->v2).field0_0x0._s_0.Y = dVar1;
    (__return_storage_ptr__->v2).field0_0x0._s_0.Z = dVar4;
    return __return_storage_ptr__;
  }
  uVar38 = 0;
  if (uVar33 == uVar39) {
    iVar32 = (this->Points).ArrayNum;
    if (this->bIsLooped == false) {
      if ((int)uVar39 < iVar32) {
        uVar38 = ~uVar39 >> 0x1f;
      }
      if ((uVar38 == 0) &&
         (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar30)) {
        pcVar22 = (code *)swi(3);
        pFVar36 = (FTwoVectors *)(*pcVar22)();
        return pFVar36;
      }
      pFVar20 = (this->Points).AllocatorInstance.Data;
      lVar37 = (longlong)(int)uVar39 * 0xa0;
      dVar1 = *(double *)(pFVar20 + lVar37 + 8 + 8);
      dVar2 = *(double *)(pFVar20 + lVar37 + 0x18);
      dVar3 = *(double *)(pFVar20 + lVar37 + 0x18 + 8);
      (__return_storage_ptr__->v1).field0_0x0._s_0.X = *(double *)(pFVar20 + lVar37 + 8);
      (__return_storage_ptr__->v1).field0_0x0._s_0.Y = dVar1;
      dVar1 = *(double *)(pFVar20 + lVar37 + 0x28);
      dVar4 = *(double *)(pFVar20 + lVar37 + 0x28 + 8);
      (__return_storage_ptr__->v1).field0_0x0._s_0.Z = dVar2;
      (__return_storage_ptr__->v2).field0_0x0._s_0.X = dVar3;
      (__return_storage_ptr__->v2).field0_0x0._s_0.Y = dVar1;
      (__return_storage_ptr__->v2).field0_0x0._s_0.Z = dVar4;
      return __return_storage_ptr__;
    }
    uVar34 = 0;
    if ((int)uVar39 < iVar32) {
      uVar34 = ~uVar39 >> 0x1f;
    }
    if ((uVar34 == 0) &&
       (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar30)) {
      pcVar22 = (code *)swi(3);
      pFVar36 = (FTwoVectors *)(*pcVar22)();
      return pFVar36;
    }
    if (*(float *)((this->Points).AllocatorInstance.Data + (longlong)(int)uVar39 * 0xa0) +
        this->LoopKeyOffset <= param_1) {
      iVar32 = (this->Points).ArrayNum;
      goto joined_r0x000147b5f92c;
    }
  }
  if (-1 < (int)uVar33) {
    uVar34 = uVar39;
    if (this->bIsLooped != false) {
      uVar34 = uVar35;
    }
    if ((int)uVar33 < (int)uVar34) goto LAB_147b5f9d2;
  }
  bVar30 = ::FDebug::CheckVerifyFailedImpl2
                     ("Index >= 0 && ((bIsLooped && Index < NumPoints) || (!bIsLooped && Index < LastPoint))"
                      ,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\InterpCurve.h"
                      ,0x162,L"");
  if (bVar30) {
    pcVar22 = (code *)swi(3);
    pFVar36 = (FTwoVectors *)(*pcVar22)();
    return pFVar36;
  }
LAB_147b5f9d2:
  if ((this->bIsLooped == false) || (uVar33 != uVar39)) {
    bVar30 = false;
  }
  else {
    bVar30 = true;
  }
  uVar39 = 0;
  if (!bVar30) {
    uVar39 = uVar33 + 1;
  }
  uVar35 = 0;
  if ((int)uVar33 < (this->Points).ArrayNum) {
    uVar35 = ~uVar33 >> 0x1f;
  }
  if ((uVar35 == 0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar31)) {
    pcVar22 = (code *)swi(3);
    pFVar36 = (FTwoVectors *)(*pcVar22)();
    return pFVar36;
  }
  pFVar20 = (this->Points).AllocatorInstance.Data;
  lVar37 = (longlong)(int)uVar33 * 0xa0;
  uVar35 = uVar38;
  if ((int)uVar39 < (this->Points).ArrayNum) {
    uVar35 = ~uVar39 >> 0x1f;
  }
  if ((uVar35 == 0) &&
     (bVar31 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar31)) {
    pcVar22 = (code *)swi(3);
    pFVar36 = (FTwoVectors *)(*pcVar22)();
    return pFVar36;
  }
  fVar29 = __real_3f800000;
  pFVar21 = (this->Points).AllocatorInstance.Data;
  lVar40 = (longlong)(int)uVar39 * 0xa0;
  if (bVar30) {
    fVar41 = this->LoopKeyOffset;
  }
  else {
    fVar41 = *(float *)(pFVar21 + lVar40) - *(float *)(pFVar20 + lVar37);
  }
  if ((fVar41 <= 0.0) || (pFVar20[lVar37 + 0x98] == (FScriptContainerElement)0x2)) {
    if ((int)uVar33 < (this->Points).ArrayNum) {
      uVar38 = ~uVar33 >> 0x1f;
    }
    if ((uVar38 == 0) &&
       (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar30)) {
      pcVar22 = (code *)swi(3);
      pFVar36 = (FTwoVectors *)(*pcVar22)();
      return pFVar36;
    }
    pFVar20 = (this->Points).AllocatorInstance.Data;
    lVar37 = (longlong)(int)uVar33 * 0xa0;
    dVar1 = *(double *)(pFVar20 + lVar37 + 8 + 8);
    dVar2 = *(double *)(pFVar20 + lVar37 + 0x18);
    dVar3 = *(double *)(pFVar20 + lVar37 + 0x18 + 8);
    (__return_storage_ptr__->v1).field0_0x0._s_0.X = *(double *)(pFVar20 + lVar37 + 8);
    (__return_storage_ptr__->v1).field0_0x0._s_0.Y = dVar1;
    dVar1 = *(double *)(pFVar20 + lVar37 + 0x28);
    dVar4 = *(double *)(pFVar20 + lVar37 + 0x28 + 8);
    (__return_storage_ptr__->v1).field0_0x0._s_0.Z = dVar2;
    (__return_storage_ptr__->v2).field0_0x0._s_0.X = dVar3;
    (__return_storage_ptr__->v2).field0_0x0._s_0.Y = dVar1;
    (__return_storage_ptr__->v2).field0_0x0._s_0.Z = dVar4;
  }
  else {
    fVar43 = (param_1 - *(float *)(pFVar20 + lVar37)) / fVar41;
    if (((fVar43 < 0.0) || (__real_3f800000 < fVar43)) &&
       (bVar30 = ::FDebug::CheckVerifyFailedImpl2
                           ("Alpha >= 0.0f && Alpha <= 1.0f",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\InterpCurve.h"
                            ,0x16e,L"Bad value in Eval(): in %f prev %f  diff %f alpha %f"), bVar30)
       ) {
      pcVar22 = (code *)swi(3);
      pFVar36 = (FTwoVectors *)(*pcVar22)();
      return pFVar36;
    }
    if (pFVar20[lVar37 + 0x98] == (FScriptContainerElement)0x0) {
      dVar1 = *(double *)(pFVar21 + lVar40 + 0x10);
      dVar2 = *(double *)(pFVar20 + lVar37 + 0x10);
      dVar3 = *(double *)(pFVar21 + lVar40 + 0x18);
      dVar4 = *(double *)(pFVar20 + lVar37 + 0x18);
      dVar5 = *(double *)(pFVar21 + lVar40 + 0x20);
      dVar6 = *(double *)(pFVar20 + lVar37 + 0x20);
      dVar7 = *(double *)(pFVar21 + lVar40 + 0x28);
      dVar8 = *(double *)(pFVar20 + lVar37 + 0x28);
      dVar9 = *(double *)(pFVar21 + lVar40 + 0x30);
      dVar10 = *(double *)(pFVar20 + lVar37 + 0x30);
      dVar23 = (double)fVar43;
      dVar11 = *(double *)(pFVar20 + lVar37 + 0x10);
      dVar12 = *(double *)(pFVar20 + lVar37 + 0x18);
      dVar13 = *(double *)(pFVar20 + lVar37 + 0x20);
      dVar14 = *(double *)(pFVar20 + lVar37 + 0x28);
      dVar15 = *(double *)(pFVar20 + lVar37 + 0x30);
      (__return_storage_ptr__->v1).field0_0x0._s_0.X =
           (*(double *)(pFVar21 + lVar40 + 8) - *(double *)(pFVar20 + lVar37 + 8)) * dVar23 +
           *(double *)(pFVar20 + lVar37 + 8);
      (__return_storage_ptr__->v1).field0_0x0._s_0.Y = (dVar1 - dVar2) * dVar23 + dVar11;
      (__return_storage_ptr__->v1).field0_0x0._s_0.Z = (dVar3 - dVar4) * dVar23 + dVar12;
      (__return_storage_ptr__->v2).field0_0x0._s_0.X = (dVar5 - dVar6) * dVar23 + dVar13;
      (__return_storage_ptr__->v2).field0_0x0._s_0.Y = (dVar7 - dVar8) * dVar23 + dVar14;
      (__return_storage_ptr__->v2).field0_0x0._s_0.Z = (dVar9 - dVar10) * dVar23 + dVar15;
    }
    else {
      fVar42 = fVar43 * fVar43;
      dVar28 = (double)fVar41;
      fVar41 = fVar42 * fVar43;
      dVar26 = (double)(fVar41 - fVar42);
      dVar1 = *(double *)(pFVar20 + lVar37 + 0x70);
      dVar2 = *(double *)(pFVar21 + lVar40 + 0x50);
      dVar27 = (double)(((fVar41 + fVar41) - fVar42 * __real_40400000) + fVar29);
      dVar3 = *(double *)(pFVar21 + lVar40 + 0x58);
      dVar4 = *(double *)(pFVar20 + lVar37 + 0x20);
      dVar24 = (double)(fVar42 * __real_40400000 - (fVar41 + fVar41));
      dVar25 = (double)((fVar41 - (fVar42 + fVar42)) + fVar43);
      dVar5 = *(double *)(pFVar20 + lVar37 + 0x80);
      dVar6 = *(double *)(pFVar21 + lVar40 + 0x20);
      dVar7 = *(double *)(pFVar21 + lVar40 + 0x60);
      dVar8 = *(double *)(pFVar20 + lVar37 + 0x28);
      dVar9 = *(double *)(pFVar20 + lVar37 + 0x88);
      dVar10 = *(double *)(pFVar21 + lVar40 + 0x28);
      dVar11 = *(double *)(pFVar20 + lVar37 + 0x30);
      dVar12 = *(double *)(pFVar20 + lVar37 + 0x90);
      dVar13 = *(double *)(pFVar21 + lVar40 + 0x30);
      dVar14 = *(double *)(pFVar21 + lVar40 + 0x10);
      dVar15 = *(double *)(pFVar21 + lVar40 + 0x40);
      dVar23 = *(double *)(pFVar20 + lVar37 + 0x10);
      dVar16 = *(double *)(pFVar20 + lVar37 + 0x78);
      dVar17 = *(double *)(pFVar21 + lVar40 + 0x18);
      dVar18 = *(double *)(pFVar21 + lVar40 + 0x48);
      dVar19 = *(double *)(pFVar20 + lVar37 + 0x18);
      (__return_storage_ptr__->v1).field0_0x0._s_0.X =
           dVar28 * *(double *)(pFVar20 + lVar37 + 0x68) * dVar25 +
           dVar24 * *(double *)(pFVar21 + lVar40 + 8) +
           dVar28 * *(double *)(pFVar21 + lVar40 + 0x38) * dVar26 +
           dVar27 * *(double *)(pFVar20 + lVar37 + 8);
      (__return_storage_ptr__->v1).field0_0x0._s_0.Y =
           dVar28 * dVar1 * dVar25 + dVar24 * dVar14 + dVar28 * dVar15 * dVar26 + dVar27 * dVar23;
      (__return_storage_ptr__->v1).field0_0x0._s_0.Z =
           dVar28 * dVar16 * dVar25 + dVar24 * dVar17 + dVar28 * dVar18 * dVar26 + dVar27 * dVar19;
      (__return_storage_ptr__->v2).field0_0x0._s_0.X =
           dVar28 * dVar2 * dVar26 + dVar27 * dVar4 + dVar28 * dVar5 * dVar25 + dVar24 * dVar6;
      (__return_storage_ptr__->v2).field0_0x0._s_0.Y =
           dVar28 * dVar3 * dVar26 + dVar27 * dVar8 + dVar28 * dVar9 * dVar25 + dVar24 * dVar10;
      (__return_storage_ptr__->v2).field0_0x0._s_0.Z =
           dVar28 * dVar7 * dVar26 + dVar27 * dVar11 + dVar28 * dVar12 * dVar25 + dVar24 * dVar13;
    }
  }
  return __return_storage_ptr__;
}

// GetPointIndexForInputValue @ 147b6ab00

int __thiscall
FInterpCurve<UE::Math::TVector2<double>_>::GetPointIndexForInputValue
          (FInterpCurve<UE::Math::TVector2<double>_> *this,float param_1)

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
    if (param_1 < *(float *)((this->Points).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x40)) {
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
        if (param_1 < *(float *)((this->Points).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x40
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

// GetPointIndexForInputValue @ 147b6aca0

int __thiscall
FInterpCurve<FTwoVectors>::GetPointIndexForInputValue(FInterpCurve<FTwoVectors> *this,float param_1)

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
    if (param_1 < *(float *)((this->Points).AllocatorInstance.Data + (longlong)(int)uVar5 * 0xa0)) {
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
        if (param_1 < *(float *)((this->Points).AllocatorInstance.Data + (longlong)(int)uVar6 * 0xa0
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

// MovePoint @ 147b795f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall FInterpCurve<float>::MovePoint(FInterpCurve<float> *this,int param_1,float param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  FScriptContainerElement FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  float local_res10 [2];
  
  lVar9 = (longlong)param_1;
  if ((-1 < param_1) && (param_1 < (this->Points).ArrayNum)) {
    local_res10[0] = *(float *)((this->Points).AllocatorInstance.Data + lVar9 * 0x14 + 4);
    uVar8 = (uint)~param_1 >> 0x1f;
    uVar7 = 0;
    if (param_1 < (this->Points).ArrayNum) {
      uVar7 = uVar8;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
    }
    FVar3 = (this->Points).AllocatorInstance.Data[lVar9 * 0x14 + 0x10];
    uVar7 = 0;
    if (param_1 < (this->Points).ArrayNum) {
      uVar7 = uVar8;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
    }
    uVar1 = *(undefined4 *)((this->Points).AllocatorInstance.Data + lVar9 * 0x14 + 8);
    uVar7 = 0;
    if (param_1 < (this->Points).ArrayNum) {
      uVar7 = uVar8;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
    }
    uVar2 = *(undefined4 *)((this->Points).AllocatorInstance.Data + lVar9 * 0x14 + 0xc);
    TArray<FInterpCurvePoint<float>,TSizedDefaultAllocator<32>_>::RemoveAt
              (&this->Points,param_1,Default);
    param_1 = AddPoint(this,param_2,local_res10);
    lVar9 = (longlong)param_1;
    uVar8 = (uint)~param_1 >> 0x1f;
    uVar7 = 0;
    if (param_1 < (this->Points).ArrayNum) {
      uVar7 = uVar8;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
    }
    (this->Points).AllocatorInstance.Data[lVar9 * 0x14 + 0x10] = FVar3;
    uVar7 = 0;
    if (param_1 < (this->Points).ArrayNum) {
      uVar7 = uVar8;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
    }
    *(undefined4 *)((this->Points).AllocatorInstance.Data + lVar9 * 0x14 + 8) = uVar1;
    uVar7 = 0;
    if (param_1 < (this->Points).ArrayNum) {
      uVar7 = uVar8;
    }
    if (uVar7 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
    }
    *(undefined4 *)((this->Points).AllocatorInstance.Data + lVar9 * 0x14 + 0xc) = uVar2;
  }
  return param_1;
}

// MovePoint @ 147b79880

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
FInterpCurve<UE::Math::TVector2<double>_>::MovePoint
          (FInterpCurve<UE::Math::TVector2<double>_> *this,int param_1,float param_2)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement FVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  TVector2<double>_u_0 local_58 [4];
  
  if ((-1 < param_1) && (param_1 < (this->Points).ArrayNum)) {
    lVar12 = (longlong)param_1 * 0x40;
    uVar11 = (uint)~param_1 >> 0x1f;
    pFVar1 = (this->Points).AllocatorInstance.Data + lVar12 + 8;
    local_58[0]._0_8_ = *(undefined8 *)pFVar1;
    local_58[0]._8_8_ = *(undefined8 *)(pFVar1 + 8);
    uVar10 = 0;
    if (param_1 < (this->Points).ArrayNum) {
      uVar10 = uVar11;
    }
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        iVar9 = (*pcVar3)();
        return iVar9;
      }
    }
    FVar2 = (this->Points).AllocatorInstance.Data[lVar12 + 0x38];
    uVar10 = 0;
    if (param_1 < (this->Points).ArrayNum) {
      uVar10 = uVar11;
    }
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        iVar9 = (*pcVar3)();
        return iVar9;
      }
    }
    pFVar1 = (this->Points).AllocatorInstance.Data + lVar12 + 0x18;
    uVar4 = *(undefined8 *)pFVar1;
    uVar5 = *(undefined8 *)(pFVar1 + 8);
    uVar10 = 0;
    if (param_1 < (this->Points).ArrayNum) {
      uVar10 = uVar11;
    }
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        iVar9 = (*pcVar3)();
        return iVar9;
      }
    }
    pFVar1 = (this->Points).AllocatorInstance.Data + lVar12 + 0x28;
    uVar6 = *(undefined8 *)pFVar1;
    uVar7 = *(undefined8 *)(pFVar1 + 8);
    TArray<FInterpCurvePoint<UE::Math::TVector2<double>_>,TSizedDefaultAllocator<32>_>::RemoveAt
              (&this->Points,param_1,Default);
    uVar11 = AddPoint(this,param_2,(TVector2<double> *)&local_58[0]._s_0);
    uVar13 = ~uVar11 >> 0x1f;
    uVar10 = 0;
    if ((int)uVar11 < (this->Points).ArrayNum) {
      uVar10 = uVar13;
    }
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        iVar9 = (*pcVar3)();
        return iVar9;
      }
    }
    lVar12 = (longlong)(int)uVar11 * 0x40;
    (this->Points).AllocatorInstance.Data[lVar12 + 0x38] = FVar2;
    uVar10 = 0;
    if ((int)uVar11 < (this->Points).ArrayNum) {
      uVar10 = uVar13;
    }
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        iVar9 = (*pcVar3)();
        return iVar9;
      }
    }
    pFVar1 = (this->Points).AllocatorInstance.Data + lVar12 + 0x18;
    *(undefined8 *)pFVar1 = uVar4;
    *(undefined8 *)(pFVar1 + 8) = uVar5;
    uVar10 = 0;
    if ((int)uVar11 < (this->Points).ArrayNum) {
      uVar10 = uVar13;
    }
    if (uVar10 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        iVar9 = (*pcVar3)();
        return iVar9;
      }
    }
    pFVar1 = (this->Points).AllocatorInstance.Data + lVar12 + 0x28;
    *(undefined8 *)pFVar1 = uVar6;
    *(undefined8 *)(pFVar1 + 8) = uVar7;
    return uVar11;
  }
  return param_1;
}

// MovePoint @ 147b79b20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
FInterpCurve<UE::Math::TVector<double>_>::MovePoint
          (FInterpCurve<UE::Math::TVector<double>_> *this,int param_1,float param_2)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FScriptContainerElement FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  TVector<double>_u_0 local_88 [4];
  
  if ((-1 < param_1) && (param_1 < (this->Points).ArrayNum)) {
    lVar15 = (longlong)param_1 * 0x58;
    pFVar5 = (this->Points).AllocatorInstance.Data;
    uVar14 = (uint)~param_1 >> 0x1f;
    pFVar1 = pFVar5 + lVar15 + 8;
    local_88[0]._0_8_ = *(undefined8 *)pFVar1;
    local_88[0]._8_8_ = *(undefined8 *)(pFVar1 + 8);
    local_88[0]._16_8_ = *(undefined8 *)(pFVar5 + lVar15 + 0x18);
    uVar13 = 0;
    if (param_1 < (this->Points).ArrayNum) {
      uVar13 = uVar14;
    }
    if (uVar13 == 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        iVar12 = (*pcVar6)();
        return iVar12;
      }
    }
    FVar4 = (this->Points).AllocatorInstance.Data[lVar15 + 0x50];
    uVar13 = 0;
    if (param_1 < (this->Points).ArrayNum) {
      uVar13 = uVar14;
    }
    if (uVar13 == 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        iVar12 = (*pcVar6)();
        return iVar12;
      }
    }
    pFVar5 = (this->Points).AllocatorInstance.Data;
    pFVar1 = pFVar5 + lVar15 + 0x20;
    uVar7 = *(undefined8 *)pFVar1;
    uVar8 = *(undefined8 *)(pFVar1 + 8);
    uVar2 = *(undefined8 *)(pFVar5 + lVar15 + 0x30);
    uVar13 = 0;
    if (param_1 < (this->Points).ArrayNum) {
      uVar13 = uVar14;
    }
    if (uVar13 == 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        iVar12 = (*pcVar6)();
        return iVar12;
      }
    }
    pFVar5 = (this->Points).AllocatorInstance.Data;
    pFVar1 = pFVar5 + lVar15 + 0x38;
    uVar9 = *(undefined8 *)pFVar1;
    uVar10 = *(undefined8 *)(pFVar1 + 8);
    uVar3 = *(undefined8 *)(pFVar5 + lVar15 + 0x48);
    TArray<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>::RemoveAt
              (&this->Points,param_1,Default);
    uVar14 = AddPoint(this,param_2,(TVector<double> *)&local_88[0]._s_0);
    uVar16 = ~uVar14 >> 0x1f;
    uVar13 = 0;
    if ((int)uVar14 < (this->Points).ArrayNum) {
      uVar13 = uVar16;
    }
    if (uVar13 == 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        iVar12 = (*pcVar6)();
        return iVar12;
      }
    }
    lVar15 = (longlong)(int)uVar14 * 0x58;
    (this->Points).AllocatorInstance.Data[lVar15 + 0x50] = FVar4;
    uVar13 = 0;
    if ((int)uVar14 < (this->Points).ArrayNum) {
      uVar13 = uVar16;
    }
    if (uVar13 == 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        iVar12 = (*pcVar6)();
        return iVar12;
      }
    }
    pFVar5 = (this->Points).AllocatorInstance.Data;
    pFVar1 = pFVar5 + lVar15 + 0x20;
    *(undefined8 *)pFVar1 = uVar7;
    *(undefined8 *)(pFVar1 + 8) = uVar8;
    *(undefined8 *)(pFVar5 + lVar15 + 0x30) = uVar2;
    uVar13 = 0;
    if ((int)uVar14 < (this->Points).ArrayNum) {
      uVar13 = uVar16;
    }
    if (uVar13 == 0) {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        iVar12 = (*pcVar6)();
        return iVar12;
      }
    }
    pFVar5 = (this->Points).AllocatorInstance.Data;
    pFVar1 = pFVar5 + lVar15 + 0x38;
    *(undefined8 *)pFVar1 = uVar9;
    *(undefined8 *)(pFVar1 + 8) = uVar10;
    *(undefined8 *)(pFVar5 + lVar15 + 0x48) = uVar3;
    return uVar14;
  }
  return param_1;
}

// MovePoint @ 147b79e10

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
FInterpCurve<FTwoVectors>::MovePoint(FInterpCurve<FTwoVectors> *this,int param_1,float param_2)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  longlong lVar21;
  TVector<double>_u_0 local_b8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  
  if ((-1 < param_1) && (param_1 < (this->Points).ArrayNum)) {
    lVar21 = (longlong)param_1 * 0xa0;
    pFVar2 = (this->Points).AllocatorInstance.Data;
    uVar19 = (uint)~param_1 >> 0x1f;
    local_b8._s_0.X = (double)*(undefined8 *)(pFVar2 + lVar21 + 8);
    local_b8._s_0.Y = (double)*(undefined8 *)(pFVar2 + lVar21 + 8 + 8);
    local_b8._s_0.Z = (double)*(undefined8 *)(pFVar2 + lVar21 + 0x18);
    uStack_a0 = *(undefined8 *)(pFVar2 + lVar21 + 0x18 + 8);
    local_98 = *(undefined8 *)(pFVar2 + lVar21 + 0x28);
    uStack_90 = *(undefined8 *)(pFVar2 + lVar21 + 0x28 + 8);
    uVar18 = 0;
    if (param_1 < (this->Points).ArrayNum) {
      uVar18 = uVar19;
    }
    if (uVar18 == 0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar3 = (code *)swi(3);
        iVar17 = (*pcVar3)();
        return iVar17;
      }
    }
    FVar1 = (this->Points).AllocatorInstance.Data[lVar21 + 0x98];
    uVar18 = 0;
    if (param_1 < (this->Points).ArrayNum) {
      uVar18 = uVar19;
    }
    if (uVar18 == 0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar3 = (code *)swi(3);
        iVar17 = (*pcVar3)();
        return iVar17;
      }
    }
    pFVar2 = (this->Points).AllocatorInstance.Data;
    uVar4 = *(undefined8 *)(pFVar2 + lVar21 + 0x38);
    uVar5 = *(undefined8 *)(pFVar2 + lVar21 + 0x38 + 8);
    uVar6 = *(undefined8 *)(pFVar2 + lVar21 + 0x48);
    uVar7 = *(undefined8 *)(pFVar2 + lVar21 + 0x48 + 8);
    uVar8 = *(undefined8 *)(pFVar2 + lVar21 + 0x58);
    uVar9 = *(undefined8 *)(pFVar2 + lVar21 + 0x58 + 8);
    uVar18 = 0;
    if (param_1 < (this->Points).ArrayNum) {
      uVar18 = uVar19;
    }
    if (uVar18 == 0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar3 = (code *)swi(3);
        iVar17 = (*pcVar3)();
        return iVar17;
      }
    }
    pFVar2 = (this->Points).AllocatorInstance.Data;
    uVar10 = *(undefined8 *)(pFVar2 + lVar21 + 0x68);
    uVar11 = *(undefined8 *)(pFVar2 + lVar21 + 0x68 + 8);
    uVar12 = *(undefined8 *)(pFVar2 + lVar21 + 0x78);
    uVar13 = *(undefined8 *)(pFVar2 + lVar21 + 0x78 + 8);
    uVar14 = *(undefined8 *)(pFVar2 + lVar21 + 0x88);
    uVar15 = *(undefined8 *)(pFVar2 + lVar21 + 0x88 + 8);
    TArray<FInterpCurvePoint<FTwoVectors>,TSizedDefaultAllocator<32>_>::RemoveAt
              (&this->Points,param_1,Default);
    uVar19 = AddPoint(this,param_2,(FTwoVectors *)&local_b8._s_0);
    uVar20 = ~uVar19 >> 0x1f;
    uVar18 = 0;
    if ((int)uVar19 < (this->Points).ArrayNum) {
      uVar18 = uVar20;
    }
    if (uVar18 == 0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar3 = (code *)swi(3);
        iVar17 = (*pcVar3)();
        return iVar17;
      }
    }
    lVar21 = (longlong)(int)uVar19 * 0xa0;
    (this->Points).AllocatorInstance.Data[lVar21 + 0x98] = FVar1;
    uVar18 = 0;
    if ((int)uVar19 < (this->Points).ArrayNum) {
      uVar18 = uVar20;
    }
    if (uVar18 == 0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar3 = (code *)swi(3);
        iVar17 = (*pcVar3)();
        return iVar17;
      }
    }
    pFVar2 = (this->Points).AllocatorInstance.Data;
    *(undefined8 *)(pFVar2 + lVar21 + 0x38) = uVar4;
    *(undefined8 *)(pFVar2 + lVar21 + 0x38 + 8) = uVar5;
    *(undefined8 *)(pFVar2 + lVar21 + 0x48) = uVar6;
    *(undefined8 *)(pFVar2 + lVar21 + 0x48 + 8) = uVar7;
    *(undefined8 *)(pFVar2 + lVar21 + 0x58) = uVar8;
    *(undefined8 *)(pFVar2 + lVar21 + 0x58 + 8) = uVar9;
    uVar18 = 0;
    if ((int)uVar19 < (this->Points).ArrayNum) {
      uVar18 = uVar20;
    }
    if (uVar18 == 0) {
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar16) {
        pcVar3 = (code *)swi(3);
        iVar17 = (*pcVar3)();
        return iVar17;
      }
    }
    pFVar2 = (this->Points).AllocatorInstance.Data;
    *(undefined8 *)(pFVar2 + lVar21 + 0x68) = uVar10;
    *(undefined8 *)(pFVar2 + lVar21 + 0x68 + 8) = uVar11;
    *(undefined8 *)(pFVar2 + lVar21 + 0x78) = uVar12;
    *(undefined8 *)(pFVar2 + lVar21 + 0x78 + 8) = uVar13;
    *(undefined8 *)(pFVar2 + lVar21 + 0x88) = uVar14;
    *(undefined8 *)(pFVar2 + lVar21 + 0x88 + 8) = uVar15;
    return uVar19;
  }
  return param_1;
}

