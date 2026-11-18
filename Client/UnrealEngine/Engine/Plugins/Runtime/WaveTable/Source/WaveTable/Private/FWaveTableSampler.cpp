// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WaveTable
// Functions: 22

// FWaveTableSampler @ 14b2bd690

FWaveTableSampler * __thiscall
WaveTable::FWaveTableSampler::FWaveTableSampler(FWaveTableSampler *this,FSettings *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  undefined3 uVar5;
  
  (this->OneShotData).LastOutputIndex = -1.0;
  (this->OneShotData).IndexFinished = -1;
  (this->PhaseModScratch).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PhaseModScratch).ArrayNum = 0;
  (this->PhaseModScratch).ArrayMax = 0;
  this->LastIndex = 0.0;
  fVar1 = param_1->Offset;
  fVar2 = param_1->Freq;
  fVar3 = param_1->Phase;
  (this->Settings).Amplitude = param_1->Amplitude;
  (this->Settings).Offset = fVar1;
  (this->Settings).Freq = fVar2;
  (this->Settings).Phase = fVar3;
  bVar4 = param_1->bOneShot;
  uVar5 = *(undefined3 *)&param_1->field_0x15;
  (this->Settings).InterpolationMode = param_1->InterpolationMode;
  (this->Settings).bOneShot = bVar4;
  *(undefined3 *)&(this->Settings).field_0x15 = uVar5;
  return this;
}

// FWaveTableSampler @ 14b2bd6c0

FWaveTableSampler * __thiscall
WaveTable::FWaveTableSampler::FWaveTableSampler(FWaveTableSampler *this)

{
  (this->OneShotData).LastOutputIndex = -1.0;
  (this->OneShotData).IndexFinished = -1;
  this->LastIndex = 0.0;
  (this->PhaseModScratch).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PhaseModScratch).ArrayNum = 0;
  (this->PhaseModScratch).ArrayMax = 0;
  (this->Settings).bOneShot = false;
  (this->Settings).Amplitude = 1.0;
  (this->Settings).Offset = 0.0;
  (this->Settings).Freq = 1.0;
  (this->Settings).Phase = 0.0;
  (this->Settings).InterpolationMode = Linear;
  return this;
}

// ComputeIndexFinished @ 14b2be0b0

float __thiscall
WaveTable::FWaveTableSampler::ComputeIndexFinished
          (FWaveTableSampler *this,TArrayView<float_const_,int> *param_1,
          TArrayView<float,int> *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  
  if ((param_2->ArrayNum == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!OutIndicesView.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WaveTable\\Source\\WaveTable\\Private\\WaveTableSampler.cpp"
                         ,0x1e5,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    fVar9 = (float)(*pcVar2)();
    return fVar9;
  }
  if ((this->Settings).bOneShot == false) goto LAB_14b2be2d2;
  iVar1 = param_1->ArrayNum;
  iVar6 = param_2->ArrayNum;
  (this->OneShotData).IndexFinished = 0;
  if (iVar1 == 0) {
    uVar7 = 0;
    bVar3 = iVar6 == 0;
    if (0 < iVar6) {
      lVar8 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar7 < iVar6) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          fVar9 = (float)(*pcVar2)();
          return fVar9;
        }
        fVar9 = *(float *)(lVar8 + (longlong)param_2->DataPtr);
        if (fVar9 < (this->OneShotData).LastOutputIndex ||
            fVar9 == (this->OneShotData).LastOutputIndex) {
LAB_14b2be1ae:
          (this->OneShotData).IndexFinished = uVar7;
          return (float)(int)uVar7;
        }
        iVar6 = param_2->ArrayNum;
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 4;
        (this->OneShotData).LastOutputIndex = fVar9;
      } while ((int)uVar7 < iVar6);
LAB_14b2be2bd:
      bVar3 = iVar6 == 0;
    }
  }
  else {
    if ((iVar1 != iVar6) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InSyncTriggers.Num() == OutIndicesView.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WaveTable\\Source\\WaveTable\\Private\\WaveTableSampler.cpp"
                           ,0x1fb,
                           L"If SyncTriggers view is supplied, must match length of given indices view"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      fVar9 = (float)(*pcVar2)();
      return fVar9;
    }
    iVar6 = param_2->ArrayNum;
    uVar7 = 0;
    bVar3 = iVar6 == 0;
    if (0 < iVar6) {
      lVar8 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar7 < iVar6) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          fVar9 = (float)(*pcVar2)();
          return fVar9;
        }
        pfVar5 = param_2->DataPtr;
        uVar4 = 0;
        if ((int)uVar7 < param_1->ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          fVar9 = (float)(*pcVar2)();
          return fVar9;
        }
        if ((param_1->DataPtr[lVar8] == 0.0) &&
           (fVar9 = pfVar5[lVar8],
           fVar9 < (this->OneShotData).LastOutputIndex ||
           fVar9 == (this->OneShotData).LastOutputIndex)) goto LAB_14b2be1ae;
        pfVar5 = pfVar5 + lVar8;
        uVar7 = uVar7 + 1;
        iVar6 = param_2->ArrayNum;
        lVar8 = lVar8 + 1;
        (this->OneShotData).LastOutputIndex = *pfVar5;
      } while ((int)uVar7 < iVar6);
      goto LAB_14b2be2bd;
    }
  }
  if (bVar3) {
    (this->OneShotData).LastOutputIndex = -1.0;
    return (float)(this->OneShotData).IndexFinished;
  }
LAB_14b2be2d2:
  (this->OneShotData).IndexFinished = -1;
  pfVar5 = TArrayView<float,int>::Last(param_2,0);
  return *pfVar5;
}

// ComputeIndexFrequency @ 14b2be310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
WaveTable::FWaveTableSampler::ComputeIndexFrequency
          (FWaveTableSampler *this,int param_1,TArrayView<float_const_,int> *param_2,
          TArrayView<float_const_,int> *param_3,TArrayView<float,int> *param_4)

{
  int iVar1;
  FWaveTableSampler *pFVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  undefined7 extraout_var;
  FOneShotData *pFVar11;
  undefined7 extraout_var_00;
  int iVar12;
  FSettings *pFVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  int iVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  TArrayView<float,int> local_88;
  TArrayView<float,int> local_78;
  TArrayView<float_const_,int> local_68 [5];
  
  fVar27 = (float)param_1;
  iVar12 = param_4->ArrayNum;
  local_88.DataPtr = param_4->DataPtr;
  local_88.ArrayNum = param_4->ArrayNum;
  local_88._12_4_ = *(undefined4 *)&param_4->field_0xc;
  Audio::ArraySetToConstantInplace(&local_88,(fVar27 * (this->Settings).Freq) / (float)iVar12);
  if (param_2->ArrayNum == iVar12) {
    local_78.DataPtr = param_4->DataPtr;
    local_78.ArrayNum = param_4->ArrayNum;
    local_78._12_4_ = *(undefined4 *)&param_4->field_0xc;
    local_68[0].DataPtr = param_2->DataPtr;
    local_68[0].ArrayNum = param_2->ArrayNum;
    local_68[0]._12_4_ = *(undefined4 *)&param_2->field_0xc;
    Audio::ArrayMultiplyInPlace(local_68,&local_78);
  }
  fVar26 = __real_3f800000;
  pFVar2 = (FWaveTableSampler *)param_4->DataPtr;
  if (param_3->ArrayNum != iVar12) {
    if ((param_3->ArrayNum != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InSyncTriggers.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WaveTable\\Source\\WaveTable\\Private\\WaveTableSampler.cpp"
                           ,0x1bb,
                           L"SyncTriggers view should be the same size as the sample view or not supplied (size of 0)."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar4 = _UNK_150631e0c;
    iVar9 = _UNK_150631e08;
    iVar15 = __xmm_00000003000000020000000100000000._4_4_;
    iVar12 = (int)__xmm_00000003000000020000000100000000;
    uVar6 = param_4->ArrayNum;
    if (0 < (int)uVar6) {
      iVar17 = 0;
      if (0xf < uVar6) {
        fVar26 = this->LastIndex;
        if ((this < pFVar2) ||
           (iVar17 = 0, (FWaveTableSampler *)(&pFVar2->LastIndex + (int)(uVar6 - 1)) < this)) {
          uVar7 = uVar6 & 0x8000000f;
          if ((int)uVar7 < 0) {
            uVar7 = (uVar7 - 1 | 0xfffffff0) + 1;
          }
          pFVar13 = &pFVar2->Settings;
          iVar20 = 8;
          iVar16 = 0;
          do {
            iVar8 = iVar20 + -4;
            iVar17 = iVar16 + 0x10;
            fVar22 = pFVar13[-1].Amplitude;
            fVar25 = *(float *)((longlong)(pFVar13 + -1) + 4);
            iVar1 = iVar20 + 4;
            *(float *)((longlong)(pFVar13 + -2) + 0x10) =
                 (float)(iVar16 + iVar12) * *(float *)((longlong)(pFVar13 + -2) + 0x10) + fVar26;
            *(float *)((longlong)(pFVar13 + -2) + 0x14) =
                 (float)(iVar16 + iVar15) * *(float *)((longlong)(pFVar13 + -2) + 0x14) + fVar26;
            pFVar13[-1].Amplitude = (float)(iVar16 + iVar9) * fVar22 + fVar26;
            *(float *)((longlong)(pFVar13 + -1) + 4) = (float)(iVar16 + iVar4) * fVar25 + fVar26;
            *(float *)((longlong)(pFVar13 + -1) + 8) =
                 (float)(iVar8 + iVar12) * *(float *)((longlong)(pFVar13 + -1) + 8) + fVar26;
            *(float *)((longlong)(pFVar13 + -1) + 0xc) =
                 (float)(iVar8 + iVar15) * *(float *)((longlong)(pFVar13 + -1) + 0xc) + fVar26;
            *(float *)((longlong)(pFVar13 + -1) + 0x10) =
                 (float)(iVar8 + iVar9) * *(float *)((longlong)(pFVar13 + -1) + 0x10) + fVar26;
            *(float *)((longlong)(pFVar13 + -1) + 0x14) =
                 (float)(iVar8 + iVar4) * *(float *)((longlong)(pFVar13 + -1) + 0x14) + fVar26;
            pFVar13->Amplitude = (float)(iVar20 + iVar12) * pFVar13->Amplitude + fVar26;
            pFVar13->Offset = (float)(iVar20 + iVar15) * pFVar13->Offset + fVar26;
            pFVar13->Freq = (float)(iVar20 + iVar9) * pFVar13->Freq + fVar26;
            pFVar13->Phase = (float)(iVar20 + iVar4) * pFVar13->Phase + fVar26;
            fVar22 = *(float *)((longlong)(pFVar13 + 1) + 4);
            pFVar13->InterpolationMode =
                 (EInterpolationMode)
                 ((float)(iVar1 + iVar12) * (float)pFVar13->InterpolationMode + fVar26);
            *(float *)&pFVar13->bOneShot =
                 (float)(iVar1 + iVar15) * *(float *)&pFVar13->bOneShot + fVar26;
            pFVar13[1].Amplitude = (float)(iVar1 + iVar9) * pFVar13[1].Amplitude + fVar26;
            *(float *)((longlong)(pFVar13 + 1) + 4) = (float)(iVar1 + iVar4) * fVar22 + fVar26;
            pFVar13 = (FSettings *)((longlong)(pFVar13 + 2) + 0x10);
            iVar20 = iVar20 + 0x10;
            iVar16 = iVar17;
          } while (iVar17 < (int)(uVar6 - uVar7));
        }
      }
      if (iVar17 < (int)uVar6) {
        lVar21 = (longlong)iVar17;
        if (3 < (int)(uVar6 - iVar17)) {
          piVar14 = &(pFVar2->OneShotData).IndexFinished + lVar21;
          iVar12 = iVar17 + 2;
          lVar21 = lVar21 + (ulonglong)((((uVar6 - 3) - iVar17) - 1 >> 2) + 1) * 4;
          do {
            iVar15 = iVar12 + -1;
            fVar25 = (float)iVar17;
            iVar17 = iVar17 + 4;
            fVar26 = (float)piVar14[-2];
            fVar23 = (float)iVar12;
            piVar14[-2] = (int)(fVar25 * fVar26);
            fVar22 = (float)*piVar14;
            piVar14[-2] = (int)(fVar25 * fVar26 + this->LastIndex);
            iVar9 = iVar12 + 1;
            iVar12 = iVar12 + 4;
            fVar25 = (float)iVar15 * ((FOneShotData *)(piVar14 + -1))->LastOutputIndex;
            ((FOneShotData *)(piVar14 + -1))->LastOutputIndex = fVar25;
            fVar26 = this->LastIndex;
            *piVar14 = (int)(fVar23 * fVar22);
            ((FOneShotData *)(piVar14 + -1))->LastOutputIndex = fVar25 + fVar26;
            *piVar14 = (int)(fVar23 * fVar22 + this->LastIndex);
            fVar26 = (float)iVar9 * (float)piVar14[1];
            piVar14[1] = (int)fVar26;
            piVar14[1] = (int)(fVar26 + this->LastIndex);
            piVar14 = piVar14 + 4;
          } while (iVar17 < (int)(uVar6 - 3));
          if ((int)uVar6 <= iVar17) goto LAB_14b2be809;
        }
        pFVar11 = (FOneShotData *)(&pFVar2->LastIndex + lVar21);
        do {
          iVar12 = iVar17 + 1;
          fVar26 = (float)iVar17 * pFVar11->LastOutputIndex;
          pFVar11->LastOutputIndex = fVar26;
          pFVar11->LastOutputIndex = fVar26 + this->LastIndex;
          pFVar11 = (FOneShotData *)&pFVar11->IndexFinished;
          iVar17 = iVar12;
        } while (iVar12 < (int)uVar6);
      }
    }
LAB_14b2be809:
    uVar7 = param_2->ArrayNum;
    pfVar10 = (float *)(ulonglong)uVar7;
    fVar26 = this->LastIndex;
    if (uVar7 == uVar6) {
      pfVar10 = TArrayView<float_const_,int>::Last(param_2,0);
      fVar22 = (this->Settings).Freq * *pfVar10 * (float)param_1;
    }
    else {
      if (uVar7 != 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFreqModulator.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WaveTable\\Source\\WaveTable\\Private\\WaveTableSampler.cpp"
                           ,0x19f,
                           L"FreqModulator view should be the same size as the sample view or not supplied (size of 0)."
                          );
        pfVar10 = (float *)CONCAT71(extraout_var_00,bVar5);
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      fVar22 = (float)param_1 * (this->Settings).Freq;
    }
    fVar22 = fVar22 + fVar26;
    goto LAB_14b2be871;
  }
  lVar21 = 0;
  iVar15 = 0;
  fVar25 = 0.0;
  if (iVar12 < 4) {
    if (0 < iVar12) {
      lVar18 = (longlong)param_3->DataPtr - (longlong)pFVar2;
      goto LAB_14b2be4df;
    }
  }
  else {
    lVar18 = (longlong)param_3->DataPtr - (longlong)pFVar2;
    pFVar11 = &pFVar2->OneShotData;
    uVar6 = (iVar12 - 4U >> 2) + 1;
    uVar19 = (ulonglong)uVar6;
    iVar15 = uVar6 * 4;
    lVar21 = (ulonglong)uVar6 * 4;
    do {
      fVar22 = fVar26 - *(float *)(lVar18 + -4 + (longlong)pFVar11);
      fVar25 = fVar22 * fVar25;
      this->LastIndex = fVar22 * this->LastIndex;
      fVar22 = fVar25 * *(float *)((longlong)(pFVar11 + -1) + 4);
      *(float *)((longlong)(pFVar11 + -1) + 4) = fVar22;
      *(float *)((longlong)(pFVar11 + -1) + 4) = fVar22 + this->LastIndex;
      fVar22 = fVar26 - *(float *)(lVar18 + (longlong)pFVar11);
      fVar25 = (fVar25 + fVar26) * fVar22;
      this->LastIndex = fVar22 * this->LastIndex;
      fVar22 = fVar25 * pFVar11->LastOutputIndex;
      pFVar11->LastOutputIndex = fVar22;
      pFVar11->LastOutputIndex = fVar22 + this->LastIndex;
      fVar22 = fVar26 - *(float *)(lVar18 + 4 + (longlong)pFVar11);
      fVar25 = (fVar25 + fVar26) * fVar22;
      this->LastIndex = fVar22 * this->LastIndex;
      fVar22 = fVar25 * (float)pFVar11->IndexFinished;
      pFVar11->IndexFinished = (int)fVar22;
      pFVar11->IndexFinished = (int)(fVar22 + this->LastIndex);
      fVar23 = fVar26 - *(float *)(lVar18 + 8 + (longlong)pFVar11);
      fVar22 = (fVar25 + fVar26) * fVar23;
      fVar25 = fVar22 + fVar26;
      this->LastIndex = fVar23 * this->LastIndex;
      fVar22 = fVar22 * pFVar11[1].LastOutputIndex;
      pFVar11[1].LastOutputIndex = fVar22;
      pFVar11[1].LastOutputIndex = fVar22 + this->LastIndex;
      pFVar11 = pFVar11 + 2;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
    if (iVar15 < iVar12) {
LAB_14b2be4df:
      pFVar11 = (FOneShotData *)(&pFVar2->LastIndex + lVar21);
      uVar19 = (ulonglong)(uint)(iVar12 - iVar15);
      do {
        fVar22 = fVar26 - *(float *)((longlong)&pFVar11->LastOutputIndex + lVar18);
        fVar25 = fVar22 * fVar25;
        this->LastIndex = fVar22 * this->LastIndex;
        fVar22 = fVar25 * pFVar11->LastOutputIndex;
        fVar25 = fVar25 + fVar26;
        pFVar11->LastOutputIndex = fVar22;
        pFVar11->LastOutputIndex = fVar22 + this->LastIndex;
        pFVar11 = (FOneShotData *)&pFVar11->IndexFinished;
        uVar19 = uVar19 - 1;
      } while (uVar19 != 0);
    }
  }
  fVar22 = this->LastIndex;
  if (param_2->ArrayNum == iVar12) {
    pfVar10 = TArrayView<float_const_,int>::Last(param_2,0);
    fVar26 = (this->Settings).Freq * *pfVar10;
  }
  else {
    if ((param_2->ArrayNum != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InFreqModulator.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WaveTable\\Source\\WaveTable\\Private\\WaveTableSampler.cpp"
                           ,0x19f,
                           L"FreqModulator view should be the same size as the sample view or not supplied (size of 0)."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    fVar26 = (this->Settings).Freq;
  }
  uVar6 = param_2->ArrayNum;
  pfVar10 = (float *)(ulonglong)uVar6;
  fVar22 = fVar26 * fVar27 + fVar22;
  if (uVar6 == param_4->ArrayNum) {
    pfVar10 = TArrayView<float_const_,int>::Last(param_2,0);
    fVar22 = *pfVar10 * (this->Settings).Freq * fVar27 + fVar25 + fVar22;
  }
  else {
    if (uVar6 != 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InFreqModulator.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WaveTable\\Source\\WaveTable\\Private\\WaveTableSampler.cpp"
                         ,0x19f,
                         L"FreqModulator view should be the same size as the sample view or not supplied (size of 0)."
                        );
      pfVar10 = (float *)CONCAT71(extraout_var,bVar5);
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    fVar22 = fVar27 * (this->Settings).Freq + fVar25 + fVar22;
  }
LAB_14b2be871:
  fVar22 = fVar22 / fVar27;
  iVar12 = (int)fVar22;
  fVar26 = fVar22;
  if ((iVar12 != -0x80000000) && ((float)iVar12 != fVar22)) {
    auVar24._4_4_ = fVar22;
    auVar24._0_4_ = fVar22;
    auVar24._8_8_ = 0;
    uVar6 = movmskps((int)pfVar10,auVar24);
    fVar26 = (float)(int)(iVar12 - (uVar6 & 1));
  }
  this->LastIndex = (fVar22 - fVar26) * fVar27;
  return;
}

// ComputeIndexPhase @ 14b2be900

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
WaveTable::FWaveTableSampler::ComputeIndexPhase
          (FWaveTableSampler *this,int param_1,TArrayView<float_const_,int> *param_2,
          TArrayView<float,int> *param_3)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  undefined4 uVar10;
  TArrayView<float,int> *pTVar11;
  uint uVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  ulonglong uVar15;
  longlong lVar16;
  uint uVar17;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  TArrayView<float,int> local_a8;
  TArrayView<float,int> local_98;
  TArrayView<float_const_,int> local_88;
  TArrayView<float,int> local_78;
  TArrayView<float,int> local_68;
  TArrayView<float,int> local_58 [3];
  undefined7 extraout_var;
  ulonglong uVar18;
  
  if ((param_3->ArrayNum == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!OutIndicesView.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WaveTable\\Source\\WaveTable\\Private\\WaveTableSampler.cpp"
                         ,0x1ca,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar9 = param_3->ArrayNum;
  if (param_2->ArrayNum == uVar9) {
    TArray<float,TSizedDefaultAllocator<32>_>::SetNum(&this->PhaseModScratch,uVar9,Default);
    fVar2 = (this->Settings).Phase;
    pTVar11 = TArrayView<float,int>::
              TArrayView<float,int><TArray<float,TSizedDefaultAllocator<32>_>_&,TArray<float,TSizedDefaultAllocator<32>_>_>
                        (&local_68,&this->PhaseModScratch);
    local_a8.DataPtr = pTVar11->DataPtr;
    local_a8.ArrayNum = pTVar11->ArrayNum;
    local_a8._12_4_ = *(undefined4 *)&pTVar11->field_0xc;
    Audio::ArraySetToConstantInplace(&local_a8,fVar2);
    pTVar11 = TArrayView<float,int>::
              TArrayView<float,int><TArray<float,TSizedDefaultAllocator<32>_>_&,TArray<float,TSizedDefaultAllocator<32>_>_>
                        (local_58,&this->PhaseModScratch);
    local_88.DataPtr = param_2->DataPtr;
    local_88.ArrayNum = param_2->ArrayNum;
    local_88._12_4_ = *(undefined4 *)&param_2->field_0xc;
    local_98.DataPtr = pTVar11->DataPtr;
    local_98.ArrayNum = pTVar11->ArrayNum;
    local_98._12_4_ = *(undefined4 *)&pTVar11->field_0xc;
    Audio::ArrayAddInPlace(&local_88,&local_98);
    pFVar3 = (FScriptContainerElement *)param_3->DataPtr;
    uVar15 = 0;
    pFVar4 = (this->PhaseModScratch).AllocatorInstance.Data;
    uVar17 = 0;
    if (((0 < (int)uVar9) && (3 < uVar9)) &&
       ((pFVar4 + (longlong)(int)(uVar9 - 1) * 4 < pFVar3 ||
        (pFVar3 + (longlong)(int)(uVar9 - 1) * 4 < pFVar4)))) {
      uVar12 = uVar9 & 0x80000003;
      if ((int)uVar12 < 0) {
        uVar12 = (uVar12 - 1 | 0xfffffffc) + 1;
      }
      pFVar14 = pFVar3;
      uVar18 = uVar15;
      do {
        pFVar1 = pFVar14 + ((longlong)pFVar4 - (longlong)pFVar3);
        fVar2 = *(float *)pFVar1;
        fVar19 = *(float *)(pFVar1 + 4);
        fVar6 = *(float *)(pFVar1 + 8);
        fVar7 = *(float *)(pFVar1 + 0xc);
        __vdecl_floorf4();
        uVar17 = (int)uVar18 + 4;
        uVar18 = (ulonglong)uVar17;
        uVar15 = uVar15 + 4;
        *(float *)pFVar14 = (fVar2 - extraout_XMM0_Da) * (float)param_1 + *(float *)pFVar14;
        *(float *)(pFVar14 + 4) =
             (fVar19 - extraout_XMM0_Db) * (float)param_1 + *(float *)(pFVar14 + 4);
        *(float *)(pFVar14 + 8) =
             (fVar6 - extraout_XMM0_Dc) * (float)param_1 + *(float *)(pFVar14 + 8);
        *(float *)(pFVar14 + 0xc) =
             (fVar7 - extraout_XMM0_Dd) * (float)param_1 + *(float *)(pFVar14 + 0xc);
        pFVar14 = pFVar14 + 0x10;
      } while ((longlong)uVar15 < (longlong)(int)(uVar9 - uVar12));
    }
    uVar15 = (ulonglong)(int)uVar17;
    if ((longlong)uVar15 < (longlong)(int)uVar9) {
      pFVar14 = pFVar3 + uVar15 * 4;
      lVar16 = (longlong)(int)uVar9 - uVar15;
      do {
        fVar2 = *(float *)(pFVar14 + ((longlong)pFVar4 - (longlong)pFVar3));
        iVar13 = (int)fVar2;
        fVar19 = fVar2;
        if ((iVar13 != -0x80000000) && ((float)iVar13 != fVar2)) {
          auVar20._4_4_ = fVar2;
          auVar20._0_4_ = fVar2;
          auVar20._8_8_ = 0;
          uVar9 = movmskps((int)uVar15,auVar20);
          uVar15 = (ulonglong)(uVar9 & 1);
          fVar19 = (float)(int)(iVar13 - (uVar9 & 1));
        }
        *(float *)pFVar14 = (fVar2 - fVar19) * (float)param_1 + *(float *)pFVar14;
        pFVar14 = pFVar14 + 4;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
  }
  else {
    uVar10 = 0;
    if (param_2->ArrayNum != 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPhaseModulator.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WaveTable\\Source\\WaveTable\\Private\\WaveTableSampler.cpp"
                         ,0x1dc,
                         L"PhaseModulator view should be the same size as the sample view or not supplied (size of 0)."
                        );
      uVar10 = (undefined4)CONCAT71(extraout_var,bVar8);
      if (bVar8) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    fVar2 = (this->Settings).Phase;
    local_78.DataPtr = param_3->DataPtr;
    local_78.ArrayNum = param_3->ArrayNum;
    local_78._12_4_ = *(undefined4 *)&param_3->field_0xc;
    iVar13 = (int)fVar2;
    fVar19 = fVar2;
    if ((iVar13 != -0x80000000) && ((float)iVar13 != fVar2)) {
      auVar21._4_4_ = fVar2;
      auVar21._0_4_ = fVar2;
      auVar21._8_8_ = 0;
      uVar9 = movmskps(uVar10,auVar21);
      fVar19 = (float)(int)(iVar13 - (uVar9 & 1));
    }
    Audio::ArrayAddConstantInplace(&local_78,(fVar2 - fVar19) * (float)param_1);
  }
  return;
}

// FinalizeSingleSample @ 14b2bef60

float __thiscall
WaveTable::FWaveTableSampler::FinalizeSingleSample
          (FWaveTableSampler *this,float param_1,int param_2,TArrayView<float,int> *param_3,
          float param_4,float param_5,ESingleSampleMode param_6)

{
  EInterpolationMode EVar1;
  code *pcVar2;
  float *pfVar3;
  undefined8 uVar4;
  bool bVar5;
  float *pfVar6;
  uint uVar7;
  TArrayView<float,int> *pTVar8;
  int iVar9;
  float fVar10;
  undefined4 in_XMM1_Db;
  undefined1 auVar12 [16];
  ForAnyElementType local_70;
  int local_68;
  int local_64 [3];
  FScriptContainerElement *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TArrayView<float,int> local_48;
  TArrayView<float_const_,int> local_38 [3];
  undefined1 auVar11 [16];
  
  if (param_6 != Loop) {
    if ((param_1 != 0.0) || (((this->Settings).Phase <= 0.0 && (this->LastIndex <= 0.0)))) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (((float)(param_2 + -1) < param_1) || (bVar5)) {
      if ((param_6 == Zero) || (param_6 == Unit)) {
        param_5 = (float)(int)param_6;
      }
      else if (((param_6 != Hold) && (param_5 = 0.0, param_6 == Loop)) &&
              (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!\"Enclosing block should never be called\"",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WaveTable\\Source\\WaveTable\\Private\\WaveTableSampler.cpp"
                                  ,0x239,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        fVar10 = (float)(*pcVar2)();
        return fVar10;
      }
      if (param_1 <= (float)(param_2 + -1)) {
        pfVar6 = TArrayView<float,int>::Last(param_3,0);
        *pfVar6 = param_5;
      }
      else {
        local_70.Data = (FScriptContainerElement *)0x0;
        local_68 = 2;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,2,0,&local_70,2,local_64);
        *(ulonglong *)local_70.Data = CONCAT44(param_5,param_4);
        pTVar8 = param_3;
        pfVar6 = TArrayView<float,int>::Last(param_3,0);
        iStack_50 = local_68;
        auVar12._4_4_ = in_XMM1_Db;
        auVar12._0_4_ = param_1;
        iVar9 = (int)param_1;
        fVar10 = param_1;
        if ((iVar9 != -0x80000000) && ((float)iVar9 != param_1)) {
          auVar12._8_4_ = in_XMM1_Db;
          auVar12._12_4_ = in_XMM1_Db;
          auVar11._8_8_ = auVar12._8_8_;
          auVar11._4_4_ = param_1;
          auVar11._0_4_ = param_1;
          uVar7 = movmskps((int)pTVar8,auVar11);
          fVar10 = (float)(int)(iVar9 - (uVar7 & 1));
        }
        pfVar3 = param_3->DataPtr;
        uVar4._0_4_ = param_3->ArrayNum;
        uVar4._4_4_ = *(undefined4 *)&param_3->field_0xc;
        *pfVar6 = param_1 - fVar10;
        EVar1 = (this->Settings).InterpolationMode;
        local_58 = local_70.Data;
        if ((local_68 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar5)) {
          pcVar2 = (code *)swi(3);
          fVar10 = (float)(*pcVar2)();
          return fVar10;
        }
        local_38[0]._12_4_ = uStack_4c;
        local_38[0].ArrayNum = iStack_50;
        local_38[0].DataPtr = (float *)local_58;
        local_48.DataPtr = pfVar3;
        local_48._8_8_ = uVar4;
        Interpolate(local_38,&local_48,EVar1);
        if (local_70.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data);
        }
      }
      fVar10 = (this->Settings).Amplitude;
      uVar7 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      if (__real_322bcc77 <
          (float)((uint)(fVar10 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
        pfVar6 = TArrayView<float,int>::Last(param_3,0);
        uVar7 = __xmm_7fffffff7fffffff7fffffff7fffffff;
        *pfVar6 = fVar10 * *pfVar6;
      }
      fVar10 = (this->Settings).Offset;
      if (__real_322bcc77 < (float)((uint)fVar10 & uVar7)) {
        pfVar6 = TArrayView<float,int>::Last(param_3,0);
        *pfVar6 = fVar10 + *pfVar6;
      }
    }
  }
  return param_1;
}

// GetIndexFinished @ 14b2bf550

int __thiscall WaveTable::FWaveTableSampler::GetIndexFinished(FWaveTableSampler *this)

{
  return (this->OneShotData).IndexFinished;
}

// GetSettings @ 14b2bf970

FSettings * __thiscall WaveTable::FWaveTableSampler::GetSettings(FWaveTableSampler *this)

{
  return &this->Settings;
}

// Interpolate @ 14b2bfa80

void __cdecl
WaveTable::FWaveTableSampler::Interpolate
          (FWaveTableData *param_1,TArrayView<float,int> *param_2,EInterpolationMode param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<float,int> local_68;
  TArrayView<float_const_,int> local_58;
  TArrayView<float,int> local_48;
  TArrayView<short_const_,int> local_38;
  undefined4 local_1c;
  undefined4 local_c;
  
  if (param_1->BitDepth == PCM_16) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    iVar4 = (int)((ulonglong)(longlong)(param_1->Data).ArrayNum >> 1);
    if ((iVar4 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_48.DataPtr = param_2->DataPtr;
    local_48.ArrayNum = param_2->ArrayNum;
    local_48._12_4_ = *(undefined4 *)&param_2->field_0xc;
    local_38._12_4_ = local_c;
    local_38.ArrayNum = iVar4;
    local_38.DataPtr = (short *)pFVar1;
    Interpolate(&local_38,&local_48,param_3);
  }
  else if (param_1->BitDepth == IEEE_Float) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    iVar4 = (int)((ulonglong)(longlong)(param_1->Data).ArrayNum >> 2);
    if ((iVar4 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_68.DataPtr = param_2->DataPtr;
    local_68.ArrayNum = param_2->ArrayNum;
    local_68._12_4_ = *(undefined4 *)&param_2->field_0xc;
    local_58._12_4_ = local_1c;
    local_58.ArrayNum = iVar4;
    local_58.DataPtr = (float *)pFVar1;
    Interpolate(&local_58,&local_68,param_3);
  }
  else {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WaveTable\\Source\\WaveTable\\Private\\WaveTableSampler.cpp"
                       ,0x96,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// Interpolate @ 14b2bfc00

void __cdecl
WaveTable::FWaveTableSampler::Interpolate
          (TArrayView<short_const_,int> *param_1,TArrayView<float,int> *param_2,
          EInterpolationMode param_3)

{
  code *pcVar1;
  short *psVar2;
  undefined8 uVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  float *pfVar11;
  ulonglong uVar12;
  float fVar13;
  TArrayView<float,int> local_78;
  TArrayView<short_const_,int> local_68;
  TArrayView<float,int> local_58;
  TArrayView<short_const_,int> local_48;
  float *local_38;
  undefined8 uStack_30;
  
  fVar4 = __real_38000100;
  if (param_3 == None) {
    psVar2 = param_1->DataPtr;
    uVar3 = *(undefined8 *)&param_1->ArrayNum;
    if (0 < param_2->ArrayNum) {
      uVar12 = (ulonglong)(uint)param_2->ArrayNum;
      pfVar11 = param_2->DataPtr;
      do {
        *pfVar11 = (float)(int)psVar2[(int)*pfVar11 % (int)uVar3] * fVar4;
        uVar12 = uVar12 - 1;
        pfVar11 = pfVar11 + 1;
      } while (uVar12 != 0);
      return;
    }
  }
  else if (param_3 == Linear) {
    psVar2 = param_1->DataPtr;
    uVar3 = *(undefined8 *)&param_1->ArrayNum;
    pfVar11 = param_2->DataPtr;
    uStack_30 = *(undefined8 *)&param_2->ArrayNum;
    uVar9 = 0;
    iVar7 = (int)*(undefined8 *)&param_2->ArrayNum;
    local_38 = pfVar11;
    if (0 < iVar7) {
      do {
        uVar6 = 0;
        if ((int)uVar9 < iVar7) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar9 = uVar9 + 1;
        iVar10 = (int)*pfVar11;
        iVar8 = (int)uVar3;
        fVar13 = (float)(int)psVar2[iVar10 % iVar8];
        *pfVar11 = (((float)(int)psVar2[(iVar10 + 1) % iVar8] - fVar13) * (*pfVar11 - (float)iVar10)
                   + fVar13) * fVar4;
        pfVar11 = pfVar11 + 1;
      } while ((int)uVar9 < iVar7);
    }
  }
  else {
    if (param_3 == Cubic) {
      local_58.DataPtr = param_2->DataPtr;
      local_58.ArrayNum = param_2->ArrayNum;
      local_58._12_4_ = *(undefined4 *)&param_2->field_0xc;
      local_48.DataPtr = param_1->DataPtr;
      local_48.ArrayNum = param_1->ArrayNum;
      local_48._12_4_ = *(undefined4 *)&param_1->field_0xc;
      UtilitiesPrivate::CubicIndexInterpolator<short>(&local_48,&local_58,__real_38000100);
      return;
    }
    if (param_3 == MaxValue) {
      local_78.DataPtr = param_2->DataPtr;
      local_78.ArrayNum = param_2->ArrayNum;
      local_78._12_4_ = *(undefined4 *)&param_2->field_0xc;
      local_68.DataPtr = param_1->DataPtr;
      local_68.ArrayNum = param_1->ArrayNum;
      local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
      UtilitiesPrivate::MaxValueIndexInterpolator<short>(&local_68,&local_78,__real_38000100);
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WaveTable\\Source\\WaveTable\\Private\\WaveTableSampler.cpp"
                       ,0xbd,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// Interpolate @ 14b2bfea0

void __cdecl
WaveTable::FWaveTableSampler::Interpolate
          (TArrayView<float_const_,int> *param_1,TArrayView<float,int> *param_2,
          EInterpolationMode param_3)

{
  float fVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  ulonglong uVar11;
  float *pfVar12;
  TArrayView<float,int> local_68;
  TArrayView<float_const_,int> local_58;
  TArrayView<float,int> local_48;
  TArrayView<float_const_,int> local_38;
  float *local_28;
  undefined8 uStack_20;
  
  if (param_3 == None) {
    pfVar12 = param_1->DataPtr;
    uVar3 = *(undefined8 *)&param_1->ArrayNum;
    if (0 < param_2->ArrayNum) {
      uVar11 = (ulonglong)(uint)param_2->ArrayNum;
      pfVar10 = param_2->DataPtr;
      do {
        *pfVar10 = pfVar12[(int)*pfVar10 % (int)uVar3];
        uVar11 = uVar11 - 1;
        pfVar10 = pfVar10 + 1;
      } while (uVar11 != 0);
      return;
    }
  }
  else if (param_3 == Linear) {
    pfVar10 = param_1->DataPtr;
    uVar3 = *(undefined8 *)&param_1->ArrayNum;
    pfVar12 = param_2->DataPtr;
    uStack_20 = *(undefined8 *)&param_2->ArrayNum;
    uVar9 = 0;
    iVar7 = (int)*(undefined8 *)&param_2->ArrayNum;
    local_28 = pfVar12;
    if (0 < iVar7) {
      do {
        uVar5 = 0;
        if ((int)uVar9 < iVar7) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar9 = uVar9 + 1;
        iVar6 = (int)*pfVar12;
        iVar8 = (int)uVar3;
        fVar1 = pfVar10[iVar6 % iVar8];
        *pfVar12 = (pfVar10[(iVar6 + 1) % iVar8] - fVar1) * (*pfVar12 - (float)iVar6) + fVar1;
        pfVar12 = pfVar12 + 1;
      } while ((int)uVar9 < iVar7);
    }
  }
  else {
    if (param_3 == Cubic) {
      local_48.DataPtr = param_2->DataPtr;
      local_48.ArrayNum = param_2->ArrayNum;
      local_48._12_4_ = *(undefined4 *)&param_2->field_0xc;
      local_38.DataPtr = param_1->DataPtr;
      local_38.ArrayNum = param_1->ArrayNum;
      local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
      UtilitiesPrivate::CubicIndexInterpolator<float>(&local_38,&local_48,__real_3f800000);
      return;
    }
    if (param_3 == MaxValue) {
      local_68.DataPtr = param_2->DataPtr;
      local_68.ArrayNum = param_2->ArrayNum;
      local_68._12_4_ = *(undefined4 *)&param_2->field_0xc;
      local_58.DataPtr = param_1->DataPtr;
      local_58.ArrayNum = param_1->ArrayNum;
      local_58._12_4_ = *(undefined4 *)&param_1->field_0xc;
      UtilitiesPrivate::MaxValueIndexInterpolator<float>(&local_58,&local_68,__real_3f800000);
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WaveTable\\Source\\WaveTable\\Private\\WaveTableSampler.cpp"
                       ,0xe4,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// Process @ 14b2c0a10

float __thiscall
WaveTable::FWaveTableSampler::Process
          (FWaveTableSampler *this,FWaveTableData *param_1,float *param_2,ESingleSampleMode param_3)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  TArrayView<float,int> local_88;
  TArrayView<float_const_,int> local_78;
  TArrayView<float_const_,int> local_68;
  TArrayView<float_const_,int> local_58 [5];
  
  if ((param_1->Data).ArrayNum == 0) {
    fVar3 = 0.0;
  }
  else {
    local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
    local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
    local_58[0]._8_8_ = local_58[0]._8_8_ & 0xffffffff00000000;
    uVar1 = local_88._12_4_;
    local_88.ArrayNum = 1;
    local_78.DataPtr = (float *)0x0;
    local_58[0].DataPtr = (float *)0x0;
    local_68.DataPtr = (float *)0x0;
    local_88.DataPtr = param_2;
    fVar4 = Process(this,param_1,local_58,&local_68,&local_78,&local_88);
    fVar3 = param_1->FinalValue;
    if ((float)((uint)(fVar3 - __real_00800000) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
        __real_322bcc77) {
      fVar3 = FWaveTableData::GetLastValue(param_1);
    }
    fVar5 = FWaveTableData::GetLastValue(param_1);
    iVar2 = FWaveTableData::GetNumSamples(param_1);
    local_58[0].ArrayNum = 1;
    local_58[0]._12_4_ = uVar1;
    local_58[0].DataPtr = param_2;
    fVar3 = FinalizeSingleSample
                      (this,fVar4,iVar2,(TArrayView<float,int> *)local_58,fVar5,fVar3,param_3);
  }
  return fVar3;
}

// Process @ 14b2c0b80

float __thiscall
WaveTable::FWaveTableSampler::Process
          (FWaveTableSampler *this,FWaveTableData *param_1,TArrayView<float_const_,int> *param_2,
          TArrayView<float_const_,int> *param_3,TArrayView<float_const_,int> *param_4,
          TArrayView<float,int> *param_5)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  float fVar6;
  TArrayView<float,int> local_128;
  TArrayView<float,int> local_118;
  TArrayView<float_const_,int> local_108;
  TArrayView<float_const_,int> local_f8;
  TArrayView<float,int> local_e8;
  TArrayView<float_const_,int> local_d8;
  TArrayView<float,int> local_c8;
  TArrayView<float_const_,int> local_b8;
  TArrayView<float,int> local_a8;
  TArrayView<float_const_,int> local_98;
  TArrayView<float,int> local_88;
  TArrayView<short_const_,int> local_78;
  TArrayView<float,int> local_68;
  TArrayView<float,int> local_58;
  undefined4 local_3c;
  undefined4 local_2c;
  
  fVar6 = 0.0;
  if (param_5->ArrayNum == 0) {
    fVar6 = 0.0;
  }
  else {
    if ((param_1->Data).ArrayNum == 0) {
      local_128.DataPtr = param_5->DataPtr;
      local_128.ArrayNum = param_5->ArrayNum;
      local_128._12_4_ = *(undefined4 *)&param_5->field_0xc;
      Audio::ArraySetToConstantInplace(&local_128,0.0);
    }
    else {
      iVar5 = FWaveTableData::GetNumSamples(param_1);
      local_118.DataPtr = param_5->DataPtr;
      local_118.ArrayNum = param_5->ArrayNum;
      local_118._12_4_ = *(undefined4 *)&param_5->field_0xc;
      local_f8.DataPtr = param_2->DataPtr;
      local_f8.ArrayNum = param_2->ArrayNum;
      local_f8._12_4_ = *(undefined4 *)&param_2->field_0xc;
      local_108.DataPtr = param_4->DataPtr;
      local_108.ArrayNum = param_4->ArrayNum;
      local_108._12_4_ = *(undefined4 *)&param_4->field_0xc;
      ComputeIndexFrequency(this,iVar5,&local_f8,&local_108,&local_118);
      iVar5 = FWaveTableData::GetNumSamples(param_1);
      local_e8.DataPtr = param_5->DataPtr;
      local_e8.ArrayNum = param_5->ArrayNum;
      local_e8._12_4_ = *(undefined4 *)&param_5->field_0xc;
      local_d8.DataPtr = param_3->DataPtr;
      local_d8.ArrayNum = param_3->ArrayNum;
      local_d8._12_4_ = *(undefined4 *)&param_3->field_0xc;
      ComputeIndexPhase(this,iVar5,&local_d8,&local_e8);
      local_c8.DataPtr = param_5->DataPtr;
      local_c8.ArrayNum = param_5->ArrayNum;
      local_c8._12_4_ = *(undefined4 *)&param_5->field_0xc;
      local_b8.DataPtr = param_4->DataPtr;
      local_b8.ArrayNum = param_4->ArrayNum;
      local_b8._12_4_ = *(undefined4 *)&param_4->field_0xc;
      fVar6 = ComputeIndexFinished(this,&local_b8,&local_c8);
      if (param_1->BitDepth == PCM_16) {
        pFVar2 = (param_1->Data).AllocatorInstance.Data;
        iVar5 = (int)((ulonglong)(longlong)(param_1->Data).ArrayNum >> 1);
        if ((iVar5 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          fVar6 = (float)(*pcVar3)();
          return fVar6;
        }
        local_88.DataPtr = param_5->DataPtr;
        local_88.ArrayNum = param_5->ArrayNum;
        local_88._12_4_ = *(undefined4 *)&param_5->field_0xc;
        local_78._12_4_ = local_2c;
        local_78.ArrayNum = iVar5;
        local_78.DataPtr = (short *)pFVar2;
        Interpolate(&local_78,&local_88,(this->Settings).InterpolationMode);
      }
      else if (param_1->BitDepth == IEEE_Float) {
        pFVar2 = (param_1->Data).AllocatorInstance.Data;
        iVar5 = (int)((ulonglong)(longlong)(param_1->Data).ArrayNum >> 2);
        if ((iVar5 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          fVar6 = (float)(*pcVar3)();
          return fVar6;
        }
        local_a8.DataPtr = param_5->DataPtr;
        local_a8.ArrayNum = param_5->ArrayNum;
        local_a8._12_4_ = *(undefined4 *)&param_5->field_0xc;
        local_98._12_4_ = local_3c;
        local_98.ArrayNum = iVar5;
        local_98.DataPtr = (float *)pFVar2;
        Interpolate(&local_98,&local_a8,(this->Settings).InterpolationMode);
      }
      else {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\WaveTable\\Source\\WaveTable\\Private\\WaveTableSampler.cpp"
                           ,0x17b,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          fVar6 = (float)(*pcVar3)();
          return fVar6;
        }
      }
    }
    fVar1 = (this->Settings).Amplitude;
    if (__real_322bcc77 <
        (float)((uint)(fVar1 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      local_68.DataPtr = param_5->DataPtr;
      local_68.ArrayNum = param_5->ArrayNum;
      local_68._12_4_ = *(undefined4 *)&param_5->field_0xc;
      Audio::ArrayMultiplyByConstantInPlace(&local_68,fVar1);
    }
    fVar1 = (this->Settings).Offset;
    if (__real_322bcc77 < (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      local_58.DataPtr = param_5->DataPtr;
      local_58.ArrayNum = param_5->ArrayNum;
      local_58._12_4_ = *(undefined4 *)&param_5->field_0xc;
      Audio::ArrayAddConstantInplace(&local_58,fVar1);
    }
  }
  return fVar6;
}

// Process @ 14b2c0e50

float __thiscall
WaveTable::FWaveTableSampler::Process
          (FWaveTableSampler *this,FWaveTableData *param_1,TArrayView<float,int> *param_2)

{
  float fVar1;
  TArrayView<float_const_,int> local_48;
  TArrayView<float_const_,int> local_38;
  TArrayView<float_const_,int> local_28;
  TArrayView<float,int> local_18;
  
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  local_48._8_8_ = local_48._8_8_ & 0xffffffff00000000;
  local_38._8_8_ = local_38._8_8_ & 0xffffffff00000000;
  local_28._8_8_ = local_28._8_8_ & 0xffffffff00000000;
  local_48.DataPtr = (float *)0x0;
  local_28.DataPtr = (float *)0x0;
  local_38.DataPtr = (float *)0x0;
  fVar1 = Process(this,param_1,&local_28,&local_38,&local_48,&local_18);
  return fVar1;
}

// Process @ 14b2c0ed0

float __thiscall
WaveTable::FWaveTableSampler::Process
          (FWaveTableSampler *this,FWaveTableView *param_1,float *param_2,ESingleSampleMode param_3)

{
  undefined8 uVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  TArrayView<float,int> local_48 [4];
  
  if ((param_1->SampleView).ArrayNum == 0) {
    fVar3 = 0.0;
  }
  else {
    local_48[0].ArrayNum = 1;
    uVar1 = local_48[0]._8_8_;
    local_48[0].DataPtr = param_2;
    fVar4 = Process(this,param_1,local_48);
    fVar3 = param_1->FinalValue;
    pfVar2 = TArrayView<float_const_,int>::Last(&param_1->SampleView,0);
    local_48[0].DataPtr = param_2;
    local_48[0]._8_8_ = uVar1;
    fVar3 = FinalizeSingleSample
                      (this,fVar4,(param_1->SampleView).ArrayNum,local_48,*pfVar2,fVar3,param_3);
  }
  return fVar3;
}

// Process @ 14b2c0fa0

float __thiscall
WaveTable::FWaveTableSampler::Process
          (FWaveTableSampler *this,FWaveTableView *param_1,TArrayView<float_const_,int> *param_2,
          TArrayView<float_const_,int> *param_3,TArrayView<float_const_,int> *param_4,
          TArrayView<float,int> *param_5)

{
  float fVar1;
  int iVar2;
  float fVar3;
  TArrayView<float,int> local_58;
  TArrayView<float_const_,int> local_48;
  TArrayView<float_const_,int> local_38 [2];
  
  fVar3 = 0.0;
  if (param_5->ArrayNum == 0) {
    fVar3 = 0.0;
  }
  else {
    local_58.DataPtr = param_5->DataPtr;
    local_58.ArrayNum = param_5->ArrayNum;
    local_58._12_4_ = *(undefined4 *)&param_5->field_0xc;
    iVar2 = (param_1->SampleView).ArrayNum;
    if (iVar2 == 0) {
      Audio::ArraySetToConstantInplace(&local_58,0.0);
    }
    else {
      local_38[0].DataPtr = param_2->DataPtr;
      local_38[0].ArrayNum = param_2->ArrayNum;
      local_38[0]._12_4_ = *(undefined4 *)&param_2->field_0xc;
      local_48.DataPtr = param_4->DataPtr;
      local_48.ArrayNum = param_4->ArrayNum;
      local_48._12_4_ = *(undefined4 *)&param_4->field_0xc;
      ComputeIndexFrequency(this,iVar2,local_38,&local_48,&local_58);
      local_38[0].DataPtr = param_5->DataPtr;
      local_38[0].ArrayNum = param_5->ArrayNum;
      local_38[0]._12_4_ = *(undefined4 *)&param_5->field_0xc;
      local_48.DataPtr = param_3->DataPtr;
      local_48.ArrayNum = param_3->ArrayNum;
      local_48._12_4_ = *(undefined4 *)&param_3->field_0xc;
      ComputeIndexPhase(this,(param_1->SampleView).ArrayNum,&local_48,
                        (TArrayView<float,int> *)local_38);
      local_38[0].DataPtr = param_5->DataPtr;
      local_38[0].ArrayNum = param_5->ArrayNum;
      local_38[0]._12_4_ = *(undefined4 *)&param_5->field_0xc;
      local_48.DataPtr = param_4->DataPtr;
      local_48.ArrayNum = param_4->ArrayNum;
      local_48._12_4_ = *(undefined4 *)&param_4->field_0xc;
      fVar3 = ComputeIndexFinished(this,&local_48,(TArrayView<float,int> *)local_38);
      local_38[0].DataPtr = param_5->DataPtr;
      local_38[0].ArrayNum = param_5->ArrayNum;
      local_38[0]._12_4_ = *(undefined4 *)&param_5->field_0xc;
      local_48.DataPtr = (param_1->SampleView).DataPtr;
      local_48.ArrayNum = (param_1->SampleView).ArrayNum;
      local_48._12_4_ = *(undefined4 *)&(param_1->SampleView).field_0xc;
      Interpolate(&local_48,(TArrayView<float,int> *)local_38,(this->Settings).InterpolationMode);
    }
    fVar1 = (this->Settings).Amplitude;
    if (__real_322bcc77 <
        (float)((uint)(fVar1 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      local_38[0].DataPtr = param_5->DataPtr;
      local_38[0].ArrayNum = param_5->ArrayNum;
      local_38[0]._12_4_ = *(undefined4 *)&param_5->field_0xc;
      Audio::ArrayMultiplyByConstantInPlace((TArrayView<float,int> *)local_38,fVar1);
    }
    fVar1 = (this->Settings).Offset;
    if (__real_322bcc77 < (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      local_38[0].DataPtr = param_5->DataPtr;
      local_38[0].ArrayNum = param_5->ArrayNum;
      local_38[0]._12_4_ = *(undefined4 *)&param_5->field_0xc;
      Audio::ArrayAddConstantInplace((TArrayView<float,int> *)local_38,fVar1);
    }
  }
  return fVar3;
}

// Process @ 14b2c1120

float __thiscall
WaveTable::FWaveTableSampler::Process
          (FWaveTableSampler *this,FWaveTableView *param_1,TArrayView<float,int> *param_2)

{
  float fVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  TArrayView<float_const_,int> local_58;
  TArrayView<float_const_,int> local_48;
  TArrayView<float,int> local_38;
  TArrayView<float,int> local_28 [2];
  
  local_58.DataPtr = (float *)0x0;
  fVar5 = 0.0;
  local_58._8_8_ = local_58._8_8_ & 0xffffffff00000000;
  uVar3 = local_58._8_8_;
  local_38.DataPtr = (float *)0x0;
  local_38._8_8_ = local_38._8_8_ & 0xffffffff00000000;
  local_48.DataPtr = (float *)0x0;
  local_48._8_8_ = local_48._8_8_ & 0xffffffff00000000;
  if (param_2->ArrayNum == 0) {
    fVar5 = 0.0;
  }
  else {
    iVar2 = (param_1->SampleView).ArrayNum;
    local_28[0].DataPtr = param_2->DataPtr;
    local_28[0].ArrayNum = param_2->ArrayNum;
    local_28[0]._12_4_ = *(undefined4 *)&param_2->field_0xc;
    if (iVar2 == 0) {
      local_38.DataPtr = local_28[0].DataPtr;
      local_38._8_8_ = local_28[0]._8_8_;
      Audio::ArraySetToConstantInplace(&local_38,0.0);
    }
    else {
      local_48.DataPtr = (float *)0x0;
      local_58.DataPtr = (float *)0x0;
      ComputeIndexFrequency(this,iVar2,&local_48,&local_58,local_28);
      local_28[0].DataPtr = param_2->DataPtr;
      local_28[0].ArrayNum = param_2->ArrayNum;
      local_28[0]._12_4_ = *(undefined4 *)&param_2->field_0xc;
      ComputeIndexPhase(this,(param_1->SampleView).ArrayNum,
                        (TArrayView<float_const_,int> *)&local_38,local_28);
      uVar4 = local_58._8_8_;
      local_28[0].DataPtr = param_2->DataPtr;
      local_28[0].ArrayNum = param_2->ArrayNum;
      local_28[0]._12_4_ = *(undefined4 *)&param_2->field_0xc;
      local_38.DataPtr = (float *)0x0;
      local_58.ArrayNum = (int)uVar3;
      local_58._12_4_ = SUB84(uVar3,4);
      local_38.ArrayNum = local_58.ArrayNum;
      local_38._12_4_ = local_58._12_4_;
      local_58._8_8_ = uVar4;
      fVar5 = ComputeIndexFinished(this,(TArrayView<float_const_,int> *)&local_38,local_28);
      local_28[0].DataPtr = param_2->DataPtr;
      local_28[0].ArrayNum = param_2->ArrayNum;
      local_28[0]._12_4_ = *(undefined4 *)&param_2->field_0xc;
      local_38.DataPtr = (param_1->SampleView).DataPtr;
      local_38.ArrayNum = (param_1->SampleView).ArrayNum;
      local_38._12_4_ = *(undefined4 *)&(param_1->SampleView).field_0xc;
      Interpolate((TArrayView<float_const_,int> *)&local_38,local_28,
                  (this->Settings).InterpolationMode);
    }
    fVar1 = (this->Settings).Amplitude;
    if (__real_322bcc77 <
        (float)((uint)(fVar1 - __real_3f800000) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      local_28[0].DataPtr = param_2->DataPtr;
      local_28[0].ArrayNum = param_2->ArrayNum;
      local_28[0]._12_4_ = *(undefined4 *)&param_2->field_0xc;
      Audio::ArrayMultiplyByConstantInPlace(local_28,fVar1);
    }
    fVar1 = (this->Settings).Offset;
    if (__real_322bcc77 < (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      local_28[0].DataPtr = param_2->DataPtr;
      local_28[0].ArrayNum = param_2->ArrayNum;
      local_28[0]._12_4_ = *(undefined4 *)&param_2->field_0xc;
      Audio::ArrayAddConstantInplace(local_28,fVar1);
    }
  }
  return fVar5;
}

// Reset @ 14b2c19e0

void __thiscall WaveTable::FWaveTableSampler::Reset(FWaveTableSampler *this)

{
  this->LastIndex = 0.0;
  return;
}

// SetFreq @ 14b2c2b90

void __thiscall WaveTable::FWaveTableSampler::SetFreq(FWaveTableSampler *this,float param_1)

{
  (this->Settings).Freq = param_1;
  return;
}

// SetInterpolationMode @ 14b2c2ba0

void __thiscall
WaveTable::FWaveTableSampler::SetInterpolationMode
          (FWaveTableSampler *this,EInterpolationMode param_1)

{
  (this->Settings).InterpolationMode = param_1;
  return;
}

// SetOneShot @ 14b2c2bc0

void __thiscall WaveTable::FWaveTableSampler::SetOneShot(FWaveTableSampler *this,bool param_1)

{
  (this->Settings).bOneShot = param_1;
  return;
}

// SetPhase @ 14b2c2bd0

void __thiscall WaveTable::FWaveTableSampler::SetPhase(FWaveTableSampler *this,float param_1)

{
  (this->Settings).Phase = param_1;
  return;
}

