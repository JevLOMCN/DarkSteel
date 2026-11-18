// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 15

// FWaveShaper @ 144521230

FWaveShaper * __thiscall Audio::FWaveShaper::FWaveShaper(FWaveShaper *this)

{
  this->Amount = 1.0;
  this->OutputGain = 1.0;
  this->Bias = 0.0;
  this->Type = ATan;
  this->OneOverAtanAmount = 1.2732395;
  this->OneOverTanhAmount = 1.2857143;
  return this;
}

// ~FWaveShaper @ 1445212a0

void __thiscall Audio::FWaveShaper::~FWaveShaper(FWaveShaper *this)

{
  return;
}

// Init @ 144523520

void __thiscall Audio::FWaveShaper::Init(FWaveShaper *this,float param_1)

{
  return;
}

// ProcessATan @ 144523610

void __thiscall
Audio::FWaveShaper::ProcessATan(FWaveShaper *this,float *param_1,float *param_2,int param_3)

{
  FWaveShaper *pFVar1;
  longlong lVar2;
  ulonglong uVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar8;
  float fVar9;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  ulonglong uVar7;
  
  uVar3 = 0;
  uVar8 = (ulonglong)param_3;
  uVar5 = 0;
  uVar6 = 0;
  if ((0 < param_3) && (3 < (uint)param_3)) {
    pFVar1 = (FWaveShaper *)(param_2 + (uVar8 - 1));
    if (((param_1 + (uVar8 - 1) < param_2) || (pFVar1 < param_1)) &&
       ((((uVar6 = uVar5, &this->OutputGain < param_2 || (pFVar1 < &this->OutputGain)) &&
         ((&this->Bias < param_2 || (pFVar1 < &this->Bias)))) &&
        (((&this->OneOverAtanAmount < param_2 || (pFVar1 < &this->OneOverAtanAmount)) &&
         ((this < param_2 || (pFVar1 < this)))))))) {
      fVar9 = this->OutputGain * this->OneOverAtanAmount;
      pfVar4 = param_2;
      uVar7 = uVar3;
      do {
        __vdecl_atanf4();
        uVar6 = (int)uVar7 + 4;
        uVar7 = (ulonglong)uVar6;
        uVar3 = uVar3 + 4;
        *pfVar4 = extraout_XMM0_Da * fVar9;
        pfVar4[1] = extraout_XMM0_Db * fVar9;
        pfVar4[2] = extraout_XMM0_Dc * fVar9;
        pfVar4[3] = extraout_XMM0_Dd * fVar9;
        pfVar4 = pfVar4 + 4;
      } while ((longlong)uVar3 < (longlong)(uVar8 & 0xfffffffffffffffc));
    }
  }
  lVar2 = (longlong)(int)uVar6;
  if (lVar2 < (longlong)uVar8) {
    pfVar4 = param_2 + lVar2;
    lVar2 = uVar8 - lVar2;
    do {
      fVar9 = atanf((*(float *)((longlong)pfVar4 + ((longlong)param_1 - (longlong)param_2)) +
                    this->Bias) * this->Amount);
      *pfVar4 = fVar9 * this->OutputGain * this->OneOverAtanAmount;
      pfVar4 = pfVar4 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}

// ProcessAudio @ 144523970

void __thiscall Audio::FWaveShaper::ProcessAudio(FWaveShaper *this,float param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = atanf((param_1 + this->Bias) * this->Amount);
  *param_2 = fVar1 * this->OutputGain * this->OneOverAtanAmount;
  return;
}

// ProcessAudioBuffer @ 1445239b0

void __thiscall
Audio::FWaveShaper::ProcessAudioBuffer(FWaveShaper *this,float *param_1,float *param_2,int param_3)

{
  FWaveShaper *pFVar1;
  EWaveShaperType EVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  float fVar10;
  float extraout_XMM0_Da;
  float extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  ulonglong uVar9;
  
  uVar5 = (ulonglong)param_3;
  EVar2 = this->Type;
  if (EVar2 == Sin) {
    ProcessSin(this,param_1,param_2,param_3);
    return;
  }
  if (EVar2 == ATan) {
    uVar4 = 0;
    uVar7 = 0;
    uVar8 = 0;
    if ((0 < param_3) && (3 < (uint)param_3)) {
      pFVar1 = (FWaveShaper *)(param_2 + (uVar5 - 1));
      if (((param_1 + (uVar5 - 1) < param_2) || (pFVar1 < param_1)) &&
         ((((uVar8 = uVar7, &this->OutputGain < param_2 || (pFVar1 < &this->OutputGain)) &&
           ((&this->Bias < param_2 || (pFVar1 < &this->Bias)))) &&
          (((&this->OneOverAtanAmount < param_2 || (pFVar1 < &this->OneOverAtanAmount)) &&
           ((this < param_2 || (pFVar1 < this)))))))) {
        fVar10 = this->OutputGain * this->OneOverAtanAmount;
        uVar9 = uVar4;
        pfVar6 = param_2;
        do {
          __vdecl_atanf4();
          uVar8 = (int)uVar9 + 4;
          uVar9 = (ulonglong)uVar8;
          uVar4 = uVar4 + 4;
          *pfVar6 = extraout_XMM0_Da * fVar10;
          pfVar6[1] = extraout_XMM0_Db * fVar10;
          pfVar6[2] = extraout_XMM0_Dc * fVar10;
          pfVar6[3] = extraout_XMM0_Dd * fVar10;
          pfVar6 = pfVar6 + 4;
        } while ((longlong)uVar4 < (longlong)(uVar5 & 0xfffffffffffffffc));
      }
    }
    lVar3 = (longlong)(int)uVar8;
    if (lVar3 < (longlong)uVar5) {
      pfVar6 = param_2 + lVar3;
      lVar3 = uVar5 - lVar3;
      do {
        fVar10 = atanf((*(float *)(((longlong)param_1 - (longlong)param_2) + (longlong)pfVar6) +
                       this->Bias) * this->Amount);
        *pfVar6 = fVar10 * this->OutputGain * this->OneOverAtanAmount;
        pfVar6 = pfVar6 + 1;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    return;
  }
  if (EVar2 != Tanh) {
    if (EVar2 == Cubic) {
      ProcessCubic(this,param_1,param_2,param_3);
      return;
    }
    if (EVar2 == HardClip) {
      ProcessHardClip(this,param_1,param_2,param_3);
      return;
    }
  }
  ProcessTanh(this,param_1,param_2,param_3);
  return;
}

// ProcessCubic @ 144523e80

void __thiscall
Audio::FWaveShaper::ProcessCubic(FWaveShaper *this,float *param_1,float *param_2,int param_3)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  longlong lVar7;
  float *pfVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  
  fVar5 = __real_bf2aaaab;
  fVar4 = __real_3f2aaaab;
  fVar3 = __real_3eaaaaab;
  uVar2 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar1 = __real_3f800000;
  lVar7 = 0;
  iVar11 = 0;
  if (param_3 < 4) {
    if (param_3 < 1) {
      return;
    }
    lVar9 = (longlong)param_1 - (longlong)param_2;
  }
  else {
    lVar9 = (longlong)param_1 - (longlong)param_2;
    pfVar8 = param_2 + 1;
    uVar6 = (param_3 - 4U >> 2) + 1;
    uVar10 = (ulonglong)uVar6;
    iVar11 = uVar6 * 4;
    lVar7 = (ulonglong)uVar6 * 4;
    do {
      fVar12 = (*(float *)((longlong)pfVar8 + lVar9 + -4) + this->Bias) * this->Amount;
      if ((float)((uint)fVar12 & uVar2) <= fVar1) {
        fVar13 = fVar12 - fVar12 * fVar12 * fVar12 * fVar3;
      }
      else {
        fVar13 = fVar4;
        if ((fVar12 <= 0.0) && (fVar13 = fVar5, 0.0 <= fVar12)) {
          fVar13 = 0.0;
        }
      }
      pfVar8[-1] = fVar13;
      pfVar8[-1] = fVar13 * this->OutputGain;
      fVar12 = (*(float *)((longlong)pfVar8 + lVar9) + this->Bias) * this->Amount;
      if ((float)((uint)fVar12 & uVar2) <= fVar1) {
        fVar13 = fVar12 - fVar12 * fVar12 * fVar12 * fVar3;
      }
      else {
        fVar13 = fVar4;
        if ((fVar12 <= 0.0) && (fVar13 = fVar5, 0.0 <= fVar12)) {
          fVar13 = 0.0;
        }
      }
      *pfVar8 = fVar13;
      *pfVar8 = fVar13 * this->OutputGain;
      fVar12 = (*(float *)((longlong)pfVar8 + lVar9 + 4) + this->Bias) * this->Amount;
      if ((float)((uint)fVar12 & uVar2) <= fVar1) {
        fVar13 = fVar12 - fVar12 * fVar12 * fVar12 * fVar3;
      }
      else {
        fVar13 = fVar4;
        if ((fVar12 <= 0.0) && (fVar13 = fVar5, 0.0 <= fVar12)) {
          fVar13 = 0.0;
        }
      }
      pfVar8[1] = fVar13;
      pfVar8[1] = fVar13 * this->OutputGain;
      fVar12 = (*(float *)((longlong)pfVar8 + lVar9 + 8) + this->Bias) * this->Amount;
      if ((float)((uint)fVar12 & uVar2) <= fVar1) {
        fVar13 = fVar12 - fVar12 * fVar12 * fVar12 * fVar3;
      }
      else {
        fVar13 = fVar4;
        if ((fVar12 <= 0.0) && (fVar13 = fVar5, 0.0 <= fVar12)) {
          fVar13 = 0.0;
        }
      }
      pfVar8[2] = fVar13;
      pfVar8[2] = fVar13 * this->OutputGain;
      pfVar8 = pfVar8 + 4;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    if (param_3 <= iVar11) {
      return;
    }
  }
  pfVar8 = param_2 + lVar7;
  uVar10 = (ulonglong)(uint)(param_3 - iVar11);
  do {
    fVar12 = (*(float *)(lVar9 + (longlong)pfVar8) + this->Bias) * this->Amount;
    if ((float)((uint)fVar12 & uVar2) <= fVar1) {
      fVar13 = fVar12 - fVar12 * fVar12 * fVar12 * fVar3;
    }
    else {
      fVar13 = fVar4;
      if ((fVar12 <= 0.0) && (fVar13 = fVar5, 0.0 <= fVar12)) {
        fVar13 = 0.0;
      }
    }
    *pfVar8 = fVar13;
    *pfVar8 = fVar13 * this->OutputGain;
    pfVar8 = pfVar8 + 1;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  return;
}

// ProcessHardClip @ 144524110

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Audio::FWaveShaper::ProcessHardClip(FWaveShaper *this,float *param_1,float *param_2,int param_3)

{
  FWaveShaper *pFVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  longlong lVar12;
  float *pfVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  ulonglong uVar16;
  
  auVar11 = ___xmm_bf800000bf800000bf800000bf800000;
  auVar10 = ___xmm_3f8000003f8000003f8000003f800000;
  uVar16 = 0;
  uVar15 = 0;
  if ((0 < param_3) && (0xf < (uint)param_3)) {
    fVar4 = this->Amount;
    pfVar13 = &this->Bias;
    fVar5 = *pfVar13;
    pfVar2 = &this->OutputGain;
    fVar20 = *pfVar2;
    pFVar1 = (FWaveShaper *)(param_2 + (longlong)param_3 + -1);
    if (((((param_1 + (longlong)param_3 + -1 < param_2) || (pFVar1 < param_1)) &&
         ((pfVar2 < param_2 || (pFVar1 < pfVar2)))) && ((pfVar13 < param_2 || (pFVar1 < pfVar13))))
       && ((this < param_2 || (pFVar1 < this)))) {
      pfVar13 = param_2 + 4;
      lVar12 = (longlong)param_1 - (longlong)param_2;
      uVar17 = uVar16;
      do {
        pfVar2 = (float *)(lVar12 + -0x10 + (longlong)pfVar13);
        uVar15 = (int)uVar16 + 0x10;
        uVar16 = (ulonglong)uVar15;
        uVar17 = uVar17 + 0x10;
        auVar21._0_4_ = (*pfVar2 + fVar5) * fVar4;
        auVar21._4_4_ = (pfVar2[1] + fVar5) * fVar4;
        auVar21._8_4_ = (pfVar2[2] + fVar5) * fVar4;
        auVar21._12_4_ = (pfVar2[3] + fVar5) * fVar4;
        auVar21 = minps(auVar21,auVar10);
        auVar21 = maxps(auVar21,auVar11);
        pfVar13[-4] = auVar21._0_4_ * fVar20;
        pfVar13[-3] = auVar21._4_4_ * fVar20;
        pfVar13[-2] = auVar21._8_4_ * fVar20;
        pfVar13[-1] = auVar21._12_4_ * fVar20;
        pfVar2 = (float *)(lVar12 + (longlong)pfVar13);
        pfVar3 = (float *)(lVar12 + 0x10 + (longlong)pfVar13);
        auVar22._0_4_ = (fVar5 + *pfVar2) * fVar4;
        auVar22._4_4_ = (fVar5 + pfVar2[1]) * fVar4;
        auVar22._8_4_ = (fVar5 + pfVar2[2]) * fVar4;
        auVar22._12_4_ = (fVar5 + pfVar2[3]) * fVar4;
        auVar23._0_4_ = (*pfVar3 + fVar5) * fVar4;
        auVar23._4_4_ = (pfVar3[1] + fVar5) * fVar4;
        auVar23._8_4_ = (pfVar3[2] + fVar5) * fVar4;
        auVar23._12_4_ = (pfVar3[3] + fVar5) * fVar4;
        auVar22 = minps(auVar22,auVar10);
        auVar21 = minps(auVar23,auVar10);
        auVar23 = maxps(auVar22,auVar11);
        auVar21 = maxps(auVar21,auVar11);
        *pfVar13 = auVar23._0_4_ * fVar20;
        pfVar13[1] = auVar23._4_4_ * fVar20;
        pfVar13[2] = auVar23._8_4_ * fVar20;
        pfVar13[3] = auVar23._12_4_ * fVar20;
        pfVar2 = (float *)(lVar12 + 0x20 + (longlong)pfVar13);
        fVar6 = *pfVar2;
        fVar7 = pfVar2[1];
        fVar8 = pfVar2[2];
        fVar9 = pfVar2[3];
        pfVar13[4] = auVar21._0_4_ * fVar20;
        pfVar13[5] = auVar21._4_4_ * fVar20;
        pfVar13[6] = auVar21._8_4_ * fVar20;
        pfVar13[7] = auVar21._12_4_ * fVar20;
        auVar24._0_4_ = (fVar6 + fVar5) * fVar4;
        auVar24._4_4_ = (fVar7 + fVar5) * fVar4;
        auVar24._8_4_ = (fVar8 + fVar5) * fVar4;
        auVar24._12_4_ = (fVar9 + fVar5) * fVar4;
        auVar21 = minps(auVar24,auVar10);
        auVar21 = maxps(auVar21,auVar11);
        pfVar13[8] = auVar21._0_4_ * fVar20;
        pfVar13[9] = auVar21._4_4_ * fVar20;
        pfVar13[10] = auVar21._8_4_ * fVar20;
        pfVar13[0xb] = auVar21._12_4_ * fVar20;
        pfVar13 = pfVar13 + 0x10;
      } while ((longlong)uVar17 < (longlong)((longlong)param_3 & 0xfffffffffffffff0U));
    }
  }
  fVar5 = __real_bf800000;
  fVar4 = __real_3f800000;
  lVar12 = (longlong)(int)uVar15;
  lVar14 = (longlong)param_3;
  if (lVar12 < lVar14) {
    if (3 < lVar14 - lVar12) {
      pfVar13 = param_2 + lVar12 + 1;
      lVar19 = (longlong)param_1 - (longlong)param_2;
      lVar18 = ((lVar14 - lVar12) - 4U >> 2) + 1;
      lVar12 = lVar12 + lVar18 * 4;
      do {
        fVar20 = (*(float *)(lVar19 + -4 + (longlong)pfVar13) + this->Bias) * this->Amount;
        if (fVar4 <= fVar20) {
          fVar20 = fVar4;
        }
        if (fVar20 <= fVar5) {
          fVar20 = fVar5;
        }
        pfVar13[-1] = fVar20 * this->OutputGain;
        fVar20 = (this->Bias + *(float *)(lVar19 + (longlong)pfVar13)) * this->Amount;
        if (fVar4 <= fVar20) {
          fVar20 = fVar4;
        }
        if (fVar20 <= fVar5) {
          fVar20 = fVar5;
        }
        *pfVar13 = fVar20 * this->OutputGain;
        fVar20 = (*(float *)(lVar19 + 4 + (longlong)pfVar13) + this->Bias) * this->Amount;
        if (fVar4 <= fVar20) {
          fVar20 = fVar4;
        }
        if (fVar20 <= fVar5) {
          fVar20 = fVar5;
        }
        pfVar13[1] = fVar20 * this->OutputGain;
        fVar20 = (*(float *)(lVar19 + 8 + (longlong)pfVar13) + this->Bias) * this->Amount;
        if (fVar4 <= fVar20) {
          fVar20 = fVar4;
        }
        if (fVar20 <= fVar5) {
          fVar20 = fVar5;
        }
        pfVar13[2] = fVar20 * this->OutputGain;
        pfVar13 = pfVar13 + 4;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      if (lVar14 <= lVar12) {
        return;
      }
    }
    pfVar13 = param_2 + lVar12;
    lVar14 = lVar14 - lVar12;
    do {
      fVar20 = (*(float *)(((longlong)param_1 - (longlong)param_2) + (longlong)pfVar13) + this->Bias
               ) * this->Amount;
      if (fVar4 <= fVar20) {
        fVar20 = fVar4;
      }
      if (fVar20 <= fVar5) {
        fVar20 = fVar5;
      }
      *pfVar13 = fVar20 * this->OutputGain;
      pfVar13 = pfVar13 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  return;
}

// ProcessSin @ 144524440

void __thiscall
Audio::FWaveShaper::ProcessSin(FWaveShaper *this,float *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  longlong lVar10;
  float *pfVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  
  fVar8 = __real_42456461;
  fVar7 = __real_41800000;
  fVar6 = __real_bf800000;
  fVar5 = __real_40490fdb;
  fVar4 = __real_3fc90fdb;
  uVar3 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar2 = __real_40800000;
  fVar1 = __real_3f800000;
  lVar10 = 0;
  iVar14 = 0;
  if (param_3 < 4) {
    if (param_3 < 1) {
      return;
    }
    lVar12 = (longlong)param_1 - (longlong)param_2;
  }
  else {
    lVar12 = (longlong)param_1 - (longlong)param_2;
    pfVar11 = param_2 + 1;
    uVar9 = (param_3 - 4U >> 2) + 1;
    uVar13 = (ulonglong)uVar9;
    iVar14 = uVar9 * 4;
    lVar10 = (ulonglong)uVar9 * 4;
    do {
      fVar16 = (*(float *)(lVar12 + -4 + (longlong)pfVar11) + this->Bias) * this->Amount;
      fVar15 = (float)((uint)fVar16 & uVar3);
      if (fVar15 <= fVar4) {
        fVar15 = (fVar7 / (fVar8 - (fVar5 - fVar15) * fVar15 * fVar2)) * (fVar5 - fVar15) * fVar16;
      }
      else {
        fVar15 = fVar1;
        if ((fVar16 <= 0.0) && (fVar15 = fVar6, 0.0 <= fVar16)) {
          fVar15 = 0.0;
        }
      }
      pfVar11[-1] = fVar15;
      pfVar11[-1] = fVar15 * this->OutputGain;
      fVar16 = (*(float *)(lVar12 + (longlong)pfVar11) + this->Bias) * this->Amount;
      fVar15 = (float)((uint)fVar16 & uVar3);
      if (fVar15 <= fVar4) {
        fVar15 = (fVar7 / (fVar8 - (fVar5 - fVar15) * fVar15 * fVar2)) * (fVar5 - fVar15) * fVar16;
      }
      else {
        fVar15 = fVar1;
        if ((fVar16 <= 0.0) && (fVar15 = fVar6, 0.0 <= fVar16)) {
          fVar15 = 0.0;
        }
      }
      *pfVar11 = fVar15;
      *pfVar11 = fVar15 * this->OutputGain;
      fVar16 = (*(float *)(lVar12 + 4 + (longlong)pfVar11) + this->Bias) * this->Amount;
      fVar15 = (float)((uint)fVar16 & uVar3);
      if (fVar15 <= fVar4) {
        fVar15 = (fVar7 / (fVar8 - (fVar5 - fVar15) * fVar15 * fVar2)) * (fVar5 - fVar15) * fVar16;
      }
      else {
        fVar15 = fVar1;
        if ((fVar16 <= 0.0) && (fVar15 = fVar6, 0.0 <= fVar16)) {
          fVar15 = 0.0;
        }
      }
      pfVar11[1] = fVar15;
      pfVar11[1] = fVar15 * this->OutputGain;
      fVar16 = (*(float *)(lVar12 + 8 + (longlong)pfVar11) + this->Bias) * this->Amount;
      fVar15 = (float)((uint)fVar16 & uVar3);
      if (fVar15 <= fVar4) {
        fVar15 = (fVar7 / (fVar8 - (fVar5 - fVar15) * fVar15 * fVar2)) * (fVar5 - fVar15) * fVar16;
      }
      else {
        fVar15 = fVar1;
        if ((fVar16 <= 0.0) && (fVar15 = fVar6, 0.0 <= fVar16)) {
          fVar15 = 0.0;
        }
      }
      pfVar11[2] = fVar15;
      pfVar11[2] = fVar15 * this->OutputGain;
      pfVar11 = pfVar11 + 4;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    if (param_3 <= iVar14) {
      return;
    }
  }
  pfVar11 = param_2 + lVar10;
  uVar13 = (ulonglong)(uint)(param_3 - iVar14);
  do {
    fVar16 = (*(float *)(lVar12 + (longlong)pfVar11) + this->Bias) * this->Amount;
    fVar15 = (float)((uint)fVar16 & uVar3);
    if (fVar15 <= fVar4) {
      fVar15 = (fVar7 / (fVar8 - (fVar5 - fVar15) * fVar15 * fVar2)) * (fVar5 - fVar15) * fVar16;
    }
    else {
      fVar15 = fVar1;
      if ((fVar16 <= 0.0) && (fVar15 = fVar6, 0.0 <= fVar16)) {
        fVar15 = 0.0;
      }
    }
    *pfVar11 = fVar15;
    *pfVar11 = fVar15 * this->OutputGain;
    pfVar11 = pfVar11 + 1;
    uVar13 = uVar13 - 1;
  } while (uVar13 != 0);
  return;
}

// ProcessTanh @ 1445247a0

void __thiscall
Audio::FWaveShaper::ProcessTanh(FWaveShaper *this,float *param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  
  fVar6 = __real_41d80000;
  fVar5 = __real_41100000;
  fVar4 = __real_c0400000;
  fVar3 = __real_bf800000;
  fVar2 = __real_40400000;
  fVar1 = __real_3f800000;
  lVar9 = 0;
  lVar11 = (longlong)param_3;
  if (3 < lVar11) {
    pfVar7 = param_2 + 1;
    lVar8 = (longlong)param_1 - (longlong)param_2;
    lVar10 = (lVar11 - 4U >> 2) + 1;
    lVar9 = lVar10 * 4;
    do {
      fVar13 = (*(float *)(lVar8 + -4 + (longlong)pfVar7) + this->Bias) * this->Amount;
      fVar12 = fVar3;
      if ((fVar4 <= fVar13) && (fVar12 = fVar1, fVar13 <= fVar2)) {
        fVar12 = ((fVar13 * fVar13 + fVar6) * fVar13) / (fVar13 * fVar13 * fVar5 + fVar6);
      }
      pfVar7[-1] = fVar12 * this->OutputGain * this->OneOverTanhAmount;
      fVar13 = (*(float *)(lVar8 + (longlong)pfVar7) + this->Bias) * this->Amount;
      fVar12 = fVar3;
      if ((fVar4 <= fVar13) && (fVar12 = fVar1, fVar13 <= fVar2)) {
        fVar12 = ((fVar13 * fVar13 + fVar6) * fVar13) / (fVar13 * fVar13 * fVar5 + fVar6);
      }
      *pfVar7 = fVar12 * this->OutputGain * this->OneOverTanhAmount;
      fVar13 = (*(float *)(lVar8 + 4 + (longlong)pfVar7) + this->Bias) * this->Amount;
      fVar12 = fVar3;
      if ((fVar4 <= fVar13) && (fVar12 = fVar1, fVar13 <= fVar2)) {
        fVar12 = ((fVar13 * fVar13 + fVar6) * fVar13) / (fVar13 * fVar13 * fVar5 + fVar6);
      }
      pfVar7[1] = fVar12 * this->OutputGain * this->OneOverTanhAmount;
      fVar13 = (*(float *)(lVar8 + 8 + (longlong)pfVar7) + this->Bias) * this->Amount;
      fVar12 = fVar3;
      if ((fVar4 <= fVar13) && (fVar12 = fVar1, fVar13 <= fVar2)) {
        fVar12 = ((fVar13 * fVar13 + fVar6) * fVar13) / (fVar13 * fVar13 * fVar5 + fVar6);
      }
      pfVar7[2] = fVar12 * this->OutputGain * this->OneOverTanhAmount;
      pfVar7 = pfVar7 + 4;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
  }
  if (lVar9 < lVar11) {
    pfVar7 = param_2 + lVar9;
    lVar11 = lVar11 - lVar9;
    do {
      fVar13 = (*(float *)(((longlong)param_1 - (longlong)param_2) + (longlong)pfVar7) + this->Bias)
               * this->Amount;
      fVar12 = fVar3;
      if ((fVar4 <= fVar13) && (fVar12 = fVar1, fVar13 <= fVar2)) {
        fVar12 = ((fVar13 * fVar13 + fVar6) * fVar13) / (fVar13 * fVar13 * fVar5 + fVar6);
      }
      *pfVar7 = fVar12 * this->OutputGain * this->OneOverTanhAmount;
      pfVar7 = pfVar7 + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return;
}

// SetAmount @ 144525320

void __thiscall Audio::FWaveShaper::SetAmount(FWaveShaper *this,float param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = __real_3f800000;
  if (param_1 <= __real_3f800000) {
    param_1 = __real_3f800000;
  }
  this->Amount = param_1;
  fVar3 = atanf(param_1);
  bVar1 = __real_c0400000 <= param_1;
  this->OneOverAtanAmount = fVar2 / fVar3;
  fVar3 = __real_bf800000;
  if ((bVar1) && (fVar3 = fVar2, param_1 <= __real_40400000)) {
    fVar3 = ((param_1 * param_1 + __real_41d80000) * param_1) /
            (param_1 * param_1 * __real_41100000 + __real_41d80000);
  }
  this->OneOverTanhAmount = fVar2 / fVar3;
  return;
}

// SetBias @ 1445253d0

void __thiscall Audio::FWaveShaper::SetBias(FWaveShaper *this,float param_1)

{
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  if (param_1 <= __real_bf800000) {
    param_1 = __real_bf800000;
  }
  this->Bias = param_1;
  return;
}

// SetOutputGainDb @ 144525500

void __thiscall Audio::FWaveShaper::SetOutputGainDb(FWaveShaper *this,float param_1)

{
  float fVar1;
  
  fVar1 = powf(__real_41200000,param_1 * __real_3d4ccccd);
  this->OutputGain = fVar1;
  return;
}

// SetOutputGainLinear @ 144525530

void __thiscall Audio::FWaveShaper::SetOutputGainLinear(FWaveShaper *this,float param_1)

{
  this->OutputGain = param_1;
  return;
}

// SetType @ 1445255a0

void __thiscall Audio::FWaveShaper::SetType(FWaveShaper *this,EWaveShaperType param_1)

{
  this->Type = param_1;
  return;
}

