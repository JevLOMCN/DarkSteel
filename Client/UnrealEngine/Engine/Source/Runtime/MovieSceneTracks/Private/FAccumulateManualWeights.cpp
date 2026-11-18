// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// ForEachAllocation @ 1468b49e0

void __cdecl
UE::MovieScene::FAccumulateManualWeights::ForEachAllocation
          (FEntityAllocation *param_1,
          TMultiComponentData<UE::MovieScene::TReadOptional<double>,UE::MovieScene::TReadOptional<double>_>
          *param_2,double *param_3)

{
  double *pdVar1;
  ushort uVar2;
  double *pdVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  bool bVar16;
  double *pdVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  double *_Src;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  ulonglong uVar25;
  
  pdVar3 = *(double **)&param_2->Data;
  uVar2 = param_1->Size;
  uVar20 = (ulonglong)uVar2;
  _Src = *(double **)&(param_2->Data).field_0x8;
  uVar18 = (ulonglong)(int)(uint)uVar2;
  if (pdVar3 == (double *)0x0) {
    if ((_Src == (double *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("WeightResults || EasingResults",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\WeightAndEasingEvaluatorSystem.cpp"
                            ,0x23c,L""), bVar16)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (_Src != (double *)0x0) {
    uVar19 = 0;
    uVar24 = 0;
    if ((((uVar2 != 0) && (7 < uVar2)) &&
        ((pdVar3 + (uVar18 - 1) < param_3 || (param_3 + (uVar18 - 1) < pdVar3)))) &&
       ((_Src + (uVar18 - 1) < param_3 || (param_3 + (uVar18 - 1) < _Src)))) {
      lVar21 = (longlong)_Src - (longlong)pdVar3;
      lVar22 = (longlong)param_3 - (longlong)pdVar3;
      pdVar17 = pdVar3 + 2;
      uVar25 = uVar19;
      do {
        pdVar1 = (double *)((longlong)pdVar17 + lVar21 + -0x10);
        uVar24 = (int)uVar25 + 8;
        uVar25 = (ulonglong)uVar24;
        uVar19 = uVar19 + 8;
        dVar11 = *pdVar17;
        dVar10 = pdVar17[1];
        dVar7 = pdVar17[-1] * pdVar1[1];
        dVar12 = *(double *)((longlong)pdVar17 + lVar21);
        dVar13 = ((double *)((longlong)pdVar17 + lVar21))[1];
        auVar5._8_4_ = SUB84(dVar7,0);
        auVar5._0_8_ = pdVar17[-2] * *pdVar1;
        auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        *(undefined1 (*) [16])((longlong)pdVar17 + lVar22 + -0x10) = auVar5;
        dVar14 = pdVar17[2];
        dVar7 = pdVar17[3];
        dVar10 = dVar10 * dVar13;
        pdVar1 = (double *)((longlong)pdVar17 + lVar21 + 0x10);
        dVar13 = *pdVar1;
        dVar15 = pdVar1[1];
        auVar8._8_4_ = SUB84(dVar10,0);
        auVar8._0_8_ = dVar11 * dVar12;
        auVar8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        *(undefined1 (*) [16])((longlong)pdVar17 + lVar22) = auVar8;
        dVar11 = pdVar17[4];
        dVar10 = pdVar17[5];
        dVar7 = dVar7 * dVar15;
        pdVar1 = (double *)((longlong)pdVar17 + lVar21 + 0x20);
        dVar12 = *pdVar1;
        dVar15 = pdVar1[1];
        auVar6._8_4_ = SUB84(dVar7,0);
        auVar6._0_8_ = dVar14 * dVar13;
        auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        *(undefined1 (*) [16])((longlong)pdVar17 + lVar22 + 0x10) = auVar6;
        dVar10 = dVar10 * dVar15;
        auVar9._8_4_ = SUB84(dVar10,0);
        auVar9._0_8_ = dVar11 * dVar12;
        auVar9._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        *(undefined1 (*) [16])((longlong)pdVar17 + lVar22 + 0x20) = auVar9;
        pdVar17 = pdVar17 + 8;
      } while ((longlong)uVar19 < (longlong)(uVar18 & 0xfffffff8));
    }
    lVar21 = (longlong)(int)uVar24;
    if ((longlong)uVar20 <= lVar21) {
      return;
    }
    if (3 < (longlong)(uVar20 - lVar21)) {
      lVar22 = lVar21 + 1;
      lVar23 = ((uVar20 - lVar21) - 4 >> 2) + 1;
      lVar21 = lVar21 + lVar23 * 4;
      pdVar17 = pdVar3 + lVar22;
      do {
        pdVar1 = pdVar17 + 4;
        *(double *)((longlong)param_3 + (-0x28 - (longlong)pdVar3) + (longlong)pdVar1) =
             *(double *)((longlong)_Src + (-8 - (longlong)pdVar3) + (longlong)pdVar17) * pdVar17[-1]
        ;
        *(double *)((longlong)param_3 + (-0x20 - (longlong)pdVar3) + (longlong)pdVar1) =
             *(double *)((longlong)_Src + (-0x20 - (longlong)pdVar3) + (longlong)pdVar1) * *pdVar17;
        *(double *)((longlong)param_3 + (-0x18 - (longlong)pdVar3) + (longlong)pdVar1) =
             *(double *)((longlong)_Src + (-0x18 - (longlong)pdVar3) + (longlong)pdVar1) *
             pdVar17[1];
        *(double *)((longlong)param_3 + (-0x10 - (longlong)pdVar3) + (longlong)pdVar1) =
             *(double *)((longlong)_Src + (-0x10 - (longlong)pdVar3) + (longlong)pdVar1) *
             pdVar17[2];
        lVar23 = lVar23 + -1;
        pdVar17 = pdVar1;
      } while (lVar23 != 0);
      if ((longlong)uVar20 <= lVar21) {
        return;
      }
    }
    pdVar17 = pdVar3 + lVar21;
    lVar21 = uVar20 - lVar21;
    do {
      pdVar1 = (double *)(((longlong)_Src - (longlong)pdVar3) + (longlong)pdVar17);
      dVar7 = *pdVar17;
      pdVar17 = pdVar17 + 1;
      *(double *)((longlong)param_3 + (-8 - (longlong)pdVar3) + (longlong)pdVar17) = *pdVar1 * dVar7
      ;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    return;
  }
  if (pdVar3 != (double *)0x0) {
    _Src = pdVar3;
  }
  memcpy(param_3,_Src,uVar20 << 3);
  return;
}

