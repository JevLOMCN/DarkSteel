// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 8

// operator() @ 14b153dd0

void __thiscall
Metasound::Generators::
TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>::
operator()(TGenerateBlockFM<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>
           *this,FGeneratorArgs *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  longlong lVar10;
  float *pfVar11;
  int iVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 in_XMM2 [16];
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  fVar6 = __real_42456461;
  fVar1 = __real_41800000;
  fVar5 = __real_40c90fdb;
  uVar17 = __xmm_80000000800000008000000080000000;
  fVar4 = __real_40490fdb;
  fVar20 = __real_3f000000;
  fVar19 = __real_41000000;
  fVar3 = __real_40800000;
  fVar2 = __real_3f800000;
  fVar15 = this->CurrentFreq;
  iVar12 = (param_1->AlignedBuffer).ArrayNum;
  pfVar11 = (param_1->AlignedBuffer).DataPtr;
  pfVar9 = (param_1->FM).DataPtr;
  auVar16 = ZEXT416((uint)__real_322bcc77);
  fVar22 = __real_3f800000 / param_1->SampleRate;
  fVar21 = param_1->SampleRate * __real_3f000000;
  fVar14 = (float)((uint)(param_1->FrequencyHz - fVar15) & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (param_1->BiPolar == false) {
    if (((__real_322bcc77 < fVar14) && (0.0 <= fVar15)) &&
       (uVar17 = __xmm_7fffffff7fffffff7fffffff7fffffff,
       __real_322bcc77 <
       (float)((uint)(param_1->GlideEaseFactor - __real_3f800000) &
              __xmm_7fffffff7fffffff7fffffff7fffffff))) {
      for (; 0 < iVar12; iVar12 = iVar12 + -1) {
        fVar1 = *pfVar9;
        pfVar9 = pfVar9 + 1;
        fVar14 = this->Phase;
        if (fVar2 <= fVar14) {
          auVar16 = roundps(auVar16,ZEXT416((uint)fVar14),3);
          fVar14 = fVar14 - auVar16._0_4_;
          this->Phase = fVar14;
        }
        if (fVar14 < 0.0) {
          auVar16 = roundps(in_XMM2,ZEXT416((uint)fVar14),3);
          fVar14 = fVar14 - (auVar16._0_4_ + fVar2);
          this->Phase = fVar14;
        }
        uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
        fVar14 = fVar14 * fVar5;
        if (0.0 <= fVar14) {
          fVar14 = fVar14 - fVar4;
        }
        else {
          fVar14 = fVar14 + fVar4;
        }
        fVar18 = fVar4 - (float)((uint)fVar14 & uVar17);
        fVar21 = fVar18 * (float)((uint)fVar14 & uVar17) * fVar3;
        auVar16 = ZEXT416((uint)fVar21);
        fVar14 = (fVar19 / (fVar6 - fVar21)) * fVar14 * fVar18 + fVar20;
        in_XMM2 = ZEXT416((uint)fVar14);
        *pfVar11 = fVar14;
        pfVar11 = pfVar11 + 1;
        this->Phase = (fVar15 + fVar1) * fVar22 + this->Phase;
        fVar15 = (param_1->FrequencyHz - this->CurrentFreq) * param_1->GlideEaseFactor +
                 this->CurrentFreq;
        this->CurrentFreq = fVar15;
        uVar17 = uVar8;
      }
      return;
    }
    uVar17 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    if (3 < iVar12) {
      uVar8 = (iVar12 - 4U >> 2) + 1;
      uVar13 = (ulonglong)uVar8;
      iVar12 = iVar12 + uVar8 * -4;
      do {
        fVar15 = *pfVar9;
        fVar1 = param_1->FrequencyHz;
        fVar14 = this->Phase;
        if (fVar2 <= fVar14) {
          auVar16 = roundps(auVar16,ZEXT416((uint)fVar14),3);
          fVar14 = fVar14 - auVar16._0_4_;
          this->Phase = fVar14;
        }
        if (fVar14 < 0.0) {
          auVar16 = roundps(in_XMM2,ZEXT416((uint)fVar14),3);
          fVar14 = fVar14 - (auVar16._0_4_ + fVar2);
          this->Phase = fVar14;
        }
        fVar14 = fVar14 * fVar5;
        if (0.0 <= fVar14) {
          fVar14 = fVar14 - fVar4;
        }
        else {
          fVar14 = fVar14 + fVar4;
        }
        fVar18 = fVar4 - (float)((uint)fVar14 & uVar17);
        fVar21 = fVar18 * (float)((uint)fVar14 & uVar17) * fVar3;
        fVar14 = (fVar19 / (fVar6 - fVar21)) * fVar18 * fVar14 + fVar20;
        *pfVar11 = fVar14;
        fVar18 = (fVar15 + fVar1) * fVar22 + this->Phase;
        this->Phase = fVar18;
        fVar15 = pfVar9[1];
        fVar1 = param_1->FrequencyHz;
        if (fVar2 <= fVar18) {
          auVar16 = roundps(ZEXT416((uint)fVar21),ZEXT416((uint)fVar18),3);
          fVar18 = fVar18 - auVar16._0_4_;
          this->Phase = fVar18;
        }
        if (fVar18 < 0.0) {
          auVar16 = roundps(ZEXT416((uint)fVar14),ZEXT416((uint)fVar18),3);
          fVar18 = fVar18 - (auVar16._0_4_ + fVar2);
          this->Phase = fVar18;
        }
        uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
        fVar18 = fVar18 * fVar5;
        if (0.0 <= fVar18) {
          fVar18 = fVar18 - fVar4;
        }
        else {
          fVar18 = fVar18 + fVar4;
        }
        fVar21 = fVar4 - (float)((uint)fVar18 & __xmm_7fffffff7fffffff7fffffff7fffffff);
        fVar14 = fVar21 * (float)((uint)fVar18 & __xmm_7fffffff7fffffff7fffffff7fffffff) * fVar3;
        fVar21 = (fVar19 / (fVar6 - fVar14)) * fVar21 * fVar18 + fVar20;
        pfVar11[1] = fVar21;
        fVar18 = (fVar15 + fVar1) * fVar22 + this->Phase;
        this->Phase = fVar18;
        fVar15 = pfVar9[2];
        fVar1 = param_1->FrequencyHz;
        if (fVar2 <= fVar18) {
          auVar16 = roundps(ZEXT416((uint)fVar14),ZEXT416((uint)fVar18),3);
          fVar18 = fVar18 - auVar16._0_4_;
          this->Phase = fVar18;
        }
        if (fVar18 < 0.0) {
          auVar16 = roundps(ZEXT416((uint)fVar21),ZEXT416((uint)fVar18),3);
          fVar18 = fVar18 - (auVar16._0_4_ + fVar2);
          this->Phase = fVar18;
        }
        fVar18 = fVar18 * fVar5;
        if (0.0 <= fVar18) {
          fVar18 = fVar18 - fVar4;
        }
        else {
          fVar18 = fVar18 + fVar4;
        }
        fVar14 = (float)((uint)fVar18 & uVar8);
        fVar21 = fVar4 - fVar14;
        fVar14 = fVar21 * fVar14 * fVar3;
        fVar21 = (fVar19 / (fVar6 - fVar14)) * fVar21 * fVar18 + fVar20;
        pfVar11[2] = fVar21;
        fVar18 = (fVar15 + fVar1) * fVar22 + this->Phase;
        this->Phase = fVar18;
        fVar15 = pfVar9[3];
        fVar1 = param_1->FrequencyHz;
        if (fVar2 <= fVar18) {
          auVar16 = roundps(ZEXT416((uint)fVar14),ZEXT416((uint)fVar18),3);
          fVar18 = fVar18 - auVar16._0_4_;
          this->Phase = fVar18;
        }
        if (fVar18 < 0.0) {
          auVar16 = roundps(ZEXT416((uint)fVar21),ZEXT416((uint)fVar18),3);
          fVar18 = fVar18 - (auVar16._0_4_ + fVar2);
          this->Phase = fVar18;
        }
        uVar17 = __xmm_7fffffff7fffffff7fffffff7fffffff;
        fVar18 = fVar18 * fVar5;
        if (0.0 <= fVar18) {
          fVar18 = fVar18 - fVar4;
        }
        else {
          fVar18 = fVar18 + fVar4;
        }
        fVar14 = (float)((uint)fVar18 & uVar8);
        fVar21 = fVar4 - fVar14;
        pfVar9 = pfVar9 + 4;
        fVar14 = fVar21 * fVar14 * fVar3;
        auVar16 = ZEXT416((uint)fVar14);
        fVar14 = (fVar19 / (fVar6 - fVar14)) * fVar21 * fVar18 + fVar20;
        in_XMM2 = ZEXT416((uint)fVar14);
        pfVar11[3] = fVar14;
        pfVar11 = pfVar11 + 4;
        this->Phase = (fVar15 + fVar1) * fVar22 + this->Phase;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    for (; 0 < iVar12; iVar12 = iVar12 + -1) {
      fVar15 = *pfVar9;
      fVar1 = param_1->FrequencyHz;
      fVar14 = this->Phase;
      if (fVar2 <= fVar14) {
        auVar16 = roundps(auVar16,ZEXT416((uint)fVar14),3);
        fVar14 = fVar14 - auVar16._0_4_;
        this->Phase = fVar14;
      }
      if (fVar14 < 0.0) {
        auVar16 = roundps(in_XMM2,ZEXT416((uint)fVar14),3);
        fVar14 = fVar14 - (auVar16._0_4_ + fVar2);
        this->Phase = fVar14;
      }
      uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      fVar14 = fVar14 * fVar5;
      if (0.0 <= fVar14) {
        fVar14 = fVar14 - fVar4;
      }
      else {
        fVar14 = fVar14 + fVar4;
      }
      pfVar9 = pfVar9 + 1;
      fVar18 = fVar4 - (float)((uint)fVar14 & uVar17);
      fVar21 = fVar18 * (float)((uint)fVar14 & uVar17) * fVar3;
      auVar16 = ZEXT416((uint)fVar21);
      fVar14 = (fVar19 / (fVar6 - fVar21)) * fVar18 * fVar14 + fVar20;
      in_XMM2 = ZEXT416((uint)fVar14);
      *pfVar11 = fVar14;
      pfVar11 = pfVar11 + 1;
      this->Phase = (fVar15 + fVar1) * fVar22 + this->Phase;
      uVar17 = uVar8;
    }
  }
  else {
    if (((__real_322bcc77 < fVar14) && (0.0 <= fVar15)) &&
       (__real_322bcc77 <
        (float)((uint)(param_1->GlideEaseFactor - __real_3f800000) &
               __xmm_7fffffff7fffffff7fffffff7fffffff))) {
      if (iVar12 < 1) {
        return;
      }
      fVar19 = this->Phase;
      fVar20 = (float)((uint)fVar21 ^ __xmm_80000000800000008000000080000000);
      uVar17 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      do {
        fVar14 = *pfVar9;
        pfVar9 = pfVar9 + 1;
        fVar18 = fVar15 + fVar14;
        if (fVar21 <= fVar15 + fVar14) {
          fVar18 = fVar21;
        }
        if (fVar18 <= fVar20) {
          fVar18 = fVar20;
        }
        if (fVar2 <= fVar19) {
          auVar16 = roundps(auVar16,ZEXT416((uint)fVar19),3);
          fVar19 = fVar19 - auVar16._0_4_;
          this->Phase = fVar19;
        }
        if (fVar19 < 0.0) {
          auVar16 = roundps(in_XMM2,ZEXT416((uint)fVar19),3);
          fVar19 = fVar19 - (auVar16._0_4_ + fVar2);
          this->Phase = fVar19;
        }
        uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
        fVar19 = fVar19 * fVar5;
        if (0.0 <= fVar19) {
          fVar19 = fVar19 - fVar4;
        }
        else {
          fVar19 = fVar19 + fVar4;
        }
        iVar12 = iVar12 + -1;
        fVar14 = fVar4 - (float)((uint)fVar19 & uVar17);
        fVar15 = fVar14 * (float)((uint)fVar19 & uVar17) * fVar3;
        auVar16 = ZEXT416((uint)fVar15);
        fVar15 = (fVar1 / (fVar6 - fVar15)) * fVar19 * fVar14;
        in_XMM2 = ZEXT416((uint)fVar15);
        *pfVar11 = fVar15;
        pfVar11 = pfVar11 + 1;
        fVar19 = fVar18 * fVar22 + this->Phase;
        this->Phase = fVar19;
        fVar15 = (param_1->FrequencyHz - this->CurrentFreq) * param_1->GlideEaseFactor +
                 this->CurrentFreq;
        this->CurrentFreq = fVar15;
        uVar17 = uVar8;
      } while (0 < iVar12);
      return;
    }
    uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    if (iVar12 < 4) {
      if (iVar12 < 1) goto LAB_14b15486c;
      fVar15 = this->Phase;
    }
    else {
      fVar15 = this->Phase;
      fVar19 = (float)((uint)fVar21 ^ __xmm_80000000800000008000000080000000);
      uVar7 = (iVar12 - 4U >> 2) + 1;
      uVar13 = (ulonglong)uVar7;
      iVar12 = iVar12 + uVar7 * -4;
      do {
        fVar20 = *pfVar9 + param_1->FrequencyHz;
        if (fVar21 <= fVar20) {
          fVar20 = fVar21;
        }
        if (fVar20 <= fVar19) {
          fVar20 = fVar19;
        }
        if (fVar2 <= fVar15) {
          auVar16 = roundps(auVar16,ZEXT416((uint)fVar15),3);
          fVar15 = fVar15 - auVar16._0_4_;
          this->Phase = fVar15;
        }
        if (fVar15 < 0.0) {
          auVar16 = roundps(in_XMM2,ZEXT416((uint)fVar15),3);
          fVar15 = fVar15 - (auVar16._0_4_ + fVar2);
          this->Phase = fVar15;
        }
        fVar15 = fVar15 * fVar5;
        if (0.0 <= fVar15) {
          fVar15 = fVar15 - fVar4;
        }
        else {
          fVar15 = fVar15 + fVar4;
        }
        fVar18 = fVar4 - (float)((uint)fVar15 & uVar8);
        fVar14 = fVar18 * (float)((uint)fVar15 & uVar8) * fVar3;
        fVar18 = (fVar1 / (fVar6 - fVar14)) * fVar15 * fVar18;
        *pfVar11 = fVar18;
        fVar20 = fVar20 * fVar22 + this->Phase;
        this->Phase = fVar20;
        fVar15 = pfVar9[1] + param_1->FrequencyHz;
        if (fVar21 <= fVar15) {
          fVar15 = fVar21;
        }
        if (fVar15 <= fVar19) {
          fVar15 = fVar19;
        }
        if (fVar2 <= fVar20) {
          auVar16 = roundps(ZEXT416((uint)fVar14),ZEXT416((uint)fVar20),3);
          fVar20 = fVar20 - auVar16._0_4_;
          this->Phase = fVar20;
        }
        if (fVar20 < 0.0) {
          auVar16 = roundps(ZEXT416((uint)fVar18),ZEXT416((uint)fVar20),3);
          fVar20 = fVar20 - (auVar16._0_4_ + fVar2);
          this->Phase = fVar20;
        }
        fVar20 = fVar20 * fVar5;
        if (0.0 <= fVar20) {
          fVar20 = fVar20 - fVar4;
        }
        else {
          fVar20 = fVar20 + fVar4;
        }
        fVar18 = fVar4 - (float)((uint)fVar20 & __xmm_7fffffff7fffffff7fffffff7fffffff);
        fVar14 = fVar18 * (float)((uint)fVar20 & __xmm_7fffffff7fffffff7fffffff7fffffff) * fVar3;
        fVar20 = (fVar1 / (fVar6 - fVar14)) * fVar20 * fVar18;
        pfVar11[1] = fVar20;
        fVar18 = fVar15 * fVar22 + this->Phase;
        this->Phase = fVar18;
        fVar15 = pfVar9[2] + param_1->FrequencyHz;
        if (fVar21 <= fVar15) {
          fVar15 = fVar21;
        }
        if (fVar15 <= fVar19) {
          fVar15 = fVar19;
        }
        if (fVar2 <= fVar18) {
          auVar16 = roundps(ZEXT416((uint)fVar14),ZEXT416((uint)fVar18),3);
          fVar18 = fVar18 - auVar16._0_4_;
          this->Phase = fVar18;
        }
        if (fVar18 < 0.0) {
          auVar16 = roundps(ZEXT416((uint)fVar20),ZEXT416((uint)fVar18),3);
          fVar18 = fVar18 - (auVar16._0_4_ + fVar2);
          this->Phase = fVar18;
        }
        fVar18 = fVar18 * fVar5;
        if (0.0 <= fVar18) {
          fVar18 = fVar18 - fVar4;
        }
        else {
          fVar18 = fVar18 + fVar4;
        }
        fVar14 = fVar4 - (float)((uint)fVar18 & __xmm_7fffffff7fffffff7fffffff7fffffff);
        fVar20 = fVar14 * (float)((uint)fVar18 & __xmm_7fffffff7fffffff7fffffff7fffffff) * fVar3;
        fVar14 = (fVar1 / (fVar6 - fVar20)) * fVar18 * fVar14;
        pfVar11[2] = fVar14;
        fVar18 = fVar15 * fVar22 + this->Phase;
        this->Phase = fVar18;
        fVar15 = pfVar9[3] + param_1->FrequencyHz;
        if (fVar21 <= fVar15) {
          fVar15 = fVar21;
        }
        if (fVar15 <= fVar19) {
          fVar15 = fVar19;
        }
        if (fVar2 <= fVar18) {
          auVar16 = roundps(ZEXT416((uint)fVar20),ZEXT416((uint)fVar18),3);
          fVar18 = fVar18 - auVar16._0_4_;
          this->Phase = fVar18;
        }
        if (fVar18 < 0.0) {
          auVar16 = roundps(ZEXT416((uint)fVar14),ZEXT416((uint)fVar18),3);
          fVar18 = fVar18 - (auVar16._0_4_ + fVar2);
          this->Phase = fVar18;
        }
        uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
        fVar18 = fVar18 * fVar5;
        if (0.0 <= fVar18) {
          fVar18 = fVar18 - fVar4;
        }
        else {
          fVar18 = fVar18 + fVar4;
        }
        fVar14 = fVar4 - (float)((uint)fVar18 & __xmm_7fffffff7fffffff7fffffff7fffffff);
        pfVar9 = pfVar9 + 4;
        fVar20 = fVar14 * (float)((uint)fVar18 & __xmm_7fffffff7fffffff7fffffff7fffffff) * fVar3;
        auVar16 = ZEXT416((uint)fVar20);
        fVar20 = (fVar1 / (fVar6 - fVar20)) * fVar18 * fVar14;
        in_XMM2 = ZEXT416((uint)fVar20);
        pfVar11[3] = fVar20;
        pfVar11 = pfVar11 + 4;
        fVar15 = fVar15 * fVar22 + this->Phase;
        this->Phase = fVar15;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
      if (iVar12 < 1) goto LAB_14b15486c;
    }
    lVar10 = (longlong)pfVar9 - (longlong)pfVar11;
    do {
      fVar19 = *(float *)(lVar10 + (longlong)pfVar11) + param_1->FrequencyHz;
      if (fVar21 <= fVar19) {
        fVar19 = fVar21;
      }
      if (fVar19 <= (float)((uint)fVar21 ^ uVar17)) {
        fVar19 = (float)((uint)fVar21 ^ uVar17);
      }
      if (fVar2 <= fVar15) {
        auVar16 = roundps(auVar16,ZEXT416((uint)fVar15),3);
        fVar15 = fVar15 - auVar16._0_4_;
        this->Phase = fVar15;
      }
      if (fVar15 < 0.0) {
        auVar16 = roundps(in_XMM2,ZEXT416((uint)fVar15),3);
        fVar15 = fVar15 - (auVar16._0_4_ + fVar2);
        this->Phase = fVar15;
      }
      uVar7 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      fVar15 = fVar15 * fVar5;
      if (0.0 <= fVar15) {
        fVar15 = fVar15 - fVar4;
      }
      else {
        fVar15 = fVar15 + fVar4;
      }
      iVar12 = iVar12 + -1;
      fVar14 = fVar4 - (float)((uint)fVar15 & uVar8);
      fVar20 = fVar14 * (float)((uint)fVar15 & uVar8) * fVar3;
      auVar16 = ZEXT416((uint)fVar20);
      fVar15 = (fVar1 / (fVar6 - fVar20)) * fVar15 * fVar14;
      in_XMM2 = ZEXT416((uint)fVar15);
      *pfVar11 = fVar15;
      pfVar11 = pfVar11 + 1;
      fVar15 = fVar19 * fVar22 + this->Phase;
      this->Phase = fVar15;
      uVar8 = uVar7;
    } while (0 < iVar12);
  }
LAB_14b15486c:
  this->CurrentFreq = param_1->FrequencyHz;
  return;
}

// operator() @ 14b1548c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Metasound::Generators::
TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>::operator()
          (TGenerateBlockFM<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>
           *this,FGeneratorArgs *param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  uVar4 = __xmm_80000000800000008000000080000000;
  fVar2 = __real_3f800000;
  fVar17 = this->CurrentFreq;
  iVar8 = (param_1->AlignedBuffer).ArrayNum;
  pfVar5 = (param_1->AlignedBuffer).DataPtr;
  pfVar6 = (param_1->FM).DataPtr;
  auVar11 = ZEXT416((uint)__real_322bcc77);
  fVar18 = __real_3f800000 / param_1->SampleRate;
  fVar20 = param_1->SampleRate * __real_3f000000;
  uVar3 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar10 = (float)((uint)(param_1->FrequencyHz - fVar17) & uVar3);
  if (param_1->BiPolar == false) {
    if (((__real_322bcc77 < fVar10) && (0.0 <= fVar17)) &&
       (__real_322bcc77 < (float)((uint)(param_1->GlideEaseFactor - __real_3f800000) & uVar3))) {
      auVar15 = ___xmm_7fffffff7fffffff7fffffff7fffffff;
      if (iVar8 < 1) {
        return;
      }
      do {
        fVar10 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        fVar20 = this->Phase;
        if (fVar2 <= fVar20) {
          auVar11 = roundps(auVar11,ZEXT416((uint)fVar20),3);
          fVar20 = fVar20 - auVar11._0_4_;
          this->Phase = fVar20;
        }
        if (fVar20 < 0.0) {
          auVar12 = roundps(auVar15,ZEXT416((uint)fVar20),3);
          auVar15._4_12_ = auVar12._4_12_;
          auVar15._0_4_ = auVar12._0_4_ + fVar2;
          fVar20 = fVar20 - auVar15._0_4_;
          this->Phase = fVar20;
        }
        *pfVar5 = fVar20;
        iVar8 = iVar8 + -1;
        pfVar5 = pfVar5 + 1;
        this->Phase = (fVar17 + fVar10) * fVar18 + this->Phase;
        fVar17 = (param_1->FrequencyHz - this->CurrentFreq) * param_1->GlideEaseFactor +
                 this->CurrentFreq;
        this->CurrentFreq = fVar17;
      } while (0 < iVar8);
      return;
    }
    auVar12 = ___xmm_7fffffff7fffffff7fffffff7fffffff;
    if (3 < iVar8) {
      uVar4 = (iVar8 - 4U >> 2) + 1;
      uVar9 = (ulonglong)uVar4;
      iVar8 = iVar8 + uVar4 * -4;
      do {
        fVar17 = *pfVar6;
        fVar10 = param_1->FrequencyHz;
        fVar20 = this->Phase;
        if (fVar2 <= fVar20) {
          auVar11 = roundps(auVar11,ZEXT416((uint)fVar20),3);
          fVar20 = fVar20 - auVar11._0_4_;
          this->Phase = fVar20;
        }
        if (fVar20 < 0.0) {
          auVar12 = roundps(auVar12,ZEXT416((uint)fVar20),3);
          auVar12._0_4_ = auVar12._0_4_ + fVar2;
          fVar20 = fVar20 - auVar12._0_4_;
          this->Phase = fVar20;
        }
        *pfVar5 = fVar20;
        fVar20 = (fVar17 + fVar10) * fVar18 + this->Phase;
        this->Phase = fVar20;
        fVar17 = pfVar6[1];
        fVar10 = param_1->FrequencyHz;
        if (fVar2 <= fVar20) {
          auVar11 = roundps(auVar11,ZEXT416((uint)fVar20),3);
          fVar20 = fVar20 - auVar11._0_4_;
          this->Phase = fVar20;
        }
        if (fVar20 < 0.0) {
          auVar12 = roundps(auVar12,ZEXT416((uint)fVar20),3);
          auVar12._0_4_ = auVar12._0_4_ + fVar2;
          fVar20 = fVar20 - auVar12._0_4_;
          this->Phase = fVar20;
        }
        pfVar5[1] = fVar20;
        fVar20 = (fVar17 + fVar10) * fVar18 + this->Phase;
        this->Phase = fVar20;
        fVar17 = pfVar6[2];
        fVar10 = param_1->FrequencyHz;
        if (fVar2 <= fVar20) {
          auVar11 = roundps(auVar11,ZEXT416((uint)fVar20),3);
          fVar20 = fVar20 - auVar11._0_4_;
          this->Phase = fVar20;
        }
        if (fVar20 < 0.0) {
          auVar12 = roundps(auVar12,ZEXT416((uint)fVar20),3);
          auVar12._0_4_ = auVar12._0_4_ + fVar2;
          fVar20 = fVar20 - auVar12._0_4_;
          this->Phase = fVar20;
        }
        pfVar5[2] = fVar20;
        fVar20 = (fVar17 + fVar10) * fVar18 + this->Phase;
        this->Phase = fVar20;
        fVar17 = pfVar6[3];
        fVar10 = param_1->FrequencyHz;
        if (fVar2 <= fVar20) {
          auVar11 = roundps(auVar11,ZEXT416((uint)fVar20),3);
          fVar20 = fVar20 - auVar11._0_4_;
          this->Phase = fVar20;
        }
        if (fVar20 < 0.0) {
          auVar12 = roundps(auVar12,ZEXT416((uint)fVar20),3);
          auVar12._0_4_ = auVar12._0_4_ + fVar2;
          fVar20 = fVar20 - auVar12._0_4_;
          this->Phase = fVar20;
        }
        pfVar5[3] = fVar20;
        pfVar6 = pfVar6 + 4;
        pfVar5 = pfVar5 + 4;
        this->Phase = (fVar17 + fVar10) * fVar18 + this->Phase;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    for (; 0 < iVar8; iVar8 = iVar8 + -1) {
      fVar17 = *pfVar6;
      fVar10 = param_1->FrequencyHz;
      fVar20 = this->Phase;
      if (fVar2 <= fVar20) {
        auVar11 = roundps(auVar11,ZEXT416((uint)fVar20),3);
        fVar20 = fVar20 - auVar11._0_4_;
        this->Phase = fVar20;
      }
      if (fVar20 < 0.0) {
        auVar12 = roundps(auVar12,ZEXT416((uint)fVar20),3);
        auVar12._0_4_ = auVar12._0_4_ + fVar2;
        fVar20 = fVar20 - auVar12._0_4_;
        this->Phase = fVar20;
      }
      *pfVar5 = fVar20;
      pfVar6 = pfVar6 + 1;
      pfVar5 = pfVar5 + 1;
      this->Phase = (fVar17 + fVar10) * fVar18 + this->Phase;
    }
    this->CurrentFreq = param_1->FrequencyHz;
    return;
  }
  if (((__real_322bcc77 < fVar10) && (0.0 <= fVar17)) &&
     (__real_322bcc77 < (float)((uint)(param_1->GlideEaseFactor - __real_3f800000) & uVar3))) {
    if (iVar8 < 1) {
      return;
    }
    fVar10 = this->Phase;
    fVar19 = (float)((uint)fVar20 ^ __xmm_80000000800000008000000080000000);
    auVar13 = ___xmm_7fffffff7fffffff7fffffff7fffffff;
    do {
      fVar1 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      fVar16 = fVar17 + fVar1;
      if (fVar20 <= fVar17 + fVar1) {
        fVar16 = fVar20;
      }
      if (fVar16 <= fVar19) {
        fVar16 = fVar19;
      }
      if (fVar2 <= fVar10) {
        auVar11 = roundps(auVar11,ZEXT416((uint)fVar10),3);
        fVar10 = fVar10 - auVar11._0_4_;
        this->Phase = fVar10;
      }
      if (fVar10 < 0.0) {
        auVar12 = roundps(auVar13,ZEXT416((uint)fVar10),3);
        auVar13._4_12_ = auVar12._4_12_;
        auVar13._0_4_ = auVar12._0_4_ + fVar2;
        fVar10 = fVar10 - auVar13._0_4_;
        this->Phase = fVar10;
      }
      iVar8 = iVar8 + -1;
      *pfVar5 = (fVar10 + fVar10) - fVar2;
      pfVar5 = pfVar5 + 1;
      fVar10 = fVar16 * fVar18 + this->Phase;
      this->Phase = fVar10;
      fVar17 = (param_1->FrequencyHz - this->CurrentFreq) * param_1->GlideEaseFactor +
               this->CurrentFreq;
      this->CurrentFreq = fVar17;
    } while (0 < iVar8);
    return;
  }
  auVar14 = ___xmm_7fffffff7fffffff7fffffff7fffffff;
  if (iVar8 < 4) {
    if (iVar8 < 1) goto LAB_14b154c75;
    fVar17 = this->Phase;
  }
  else {
    fVar17 = this->Phase;
    fVar10 = (float)((uint)fVar20 ^ __xmm_80000000800000008000000080000000);
    uVar3 = (iVar8 - 4U >> 2) + 1;
    uVar9 = (ulonglong)uVar3;
    iVar8 = iVar8 + uVar3 * -4;
    do {
      fVar19 = *pfVar6 + param_1->FrequencyHz;
      if (fVar20 <= fVar19) {
        fVar19 = fVar20;
      }
      if (fVar19 <= fVar10) {
        fVar19 = fVar10;
      }
      if (fVar2 <= fVar17) {
        auVar11 = roundps(auVar11,ZEXT416((uint)fVar17),3);
        fVar17 = fVar17 - auVar11._0_4_;
        this->Phase = fVar17;
      }
      if (fVar17 < 0.0) {
        auVar12 = roundps(auVar14,ZEXT416((uint)fVar17),3);
        auVar14._4_12_ = auVar12._4_12_;
        auVar14._0_4_ = auVar12._0_4_ + fVar2;
        fVar17 = fVar17 - auVar14._0_4_;
        this->Phase = fVar17;
      }
      *pfVar5 = (fVar17 + fVar17) - fVar2;
      fVar19 = fVar19 * fVar18 + this->Phase;
      this->Phase = fVar19;
      fVar17 = pfVar6[1] + param_1->FrequencyHz;
      if (fVar20 <= fVar17) {
        fVar17 = fVar20;
      }
      if (fVar17 <= fVar10) {
        fVar17 = fVar10;
      }
      if (fVar2 <= fVar19) {
        auVar11 = roundps(auVar11,ZEXT416((uint)fVar19),3);
        fVar19 = fVar19 - auVar11._0_4_;
        this->Phase = fVar19;
      }
      if (fVar19 < 0.0) {
        auVar12 = roundps(auVar14,ZEXT416((uint)fVar19),3);
        auVar14._4_12_ = auVar12._4_12_;
        auVar14._0_4_ = auVar12._0_4_ + fVar2;
        fVar19 = fVar19 - auVar14._0_4_;
        this->Phase = fVar19;
      }
      pfVar5[1] = (fVar19 + fVar19) - fVar2;
      fVar19 = fVar17 * fVar18 + this->Phase;
      this->Phase = fVar19;
      fVar17 = pfVar6[2] + param_1->FrequencyHz;
      if (fVar20 <= fVar17) {
        fVar17 = fVar20;
      }
      if (fVar17 <= fVar10) {
        fVar17 = fVar10;
      }
      if (fVar2 <= fVar19) {
        auVar11 = roundps(auVar11,ZEXT416((uint)fVar19),3);
        fVar19 = fVar19 - auVar11._0_4_;
        this->Phase = fVar19;
      }
      if (fVar19 < 0.0) {
        auVar12 = roundps(auVar14,ZEXT416((uint)fVar19),3);
        auVar14._4_12_ = auVar12._4_12_;
        auVar14._0_4_ = auVar12._0_4_ + fVar2;
        fVar19 = fVar19 - auVar14._0_4_;
        this->Phase = fVar19;
      }
      pfVar5[2] = (fVar19 + fVar19) - fVar2;
      fVar19 = fVar17 * fVar18 + this->Phase;
      this->Phase = fVar19;
      fVar17 = pfVar6[3] + param_1->FrequencyHz;
      if (fVar20 <= fVar17) {
        fVar17 = fVar20;
      }
      if (fVar17 <= fVar10) {
        fVar17 = fVar10;
      }
      if (fVar2 <= fVar19) {
        auVar11 = roundps(auVar11,ZEXT416((uint)fVar19),3);
        fVar19 = fVar19 - auVar11._0_4_;
        this->Phase = fVar19;
      }
      if (fVar19 < 0.0) {
        auVar12 = roundps(auVar14,ZEXT416((uint)fVar19),3);
        auVar14._4_12_ = auVar12._4_12_;
        auVar14._0_4_ = auVar12._0_4_ + fVar2;
        fVar19 = fVar19 - auVar14._0_4_;
        this->Phase = fVar19;
      }
      pfVar6 = pfVar6 + 4;
      pfVar5[3] = (fVar19 + fVar19) - fVar2;
      pfVar5 = pfVar5 + 4;
      fVar17 = fVar17 * fVar18 + this->Phase;
      this->Phase = fVar17;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    if (iVar8 < 1) {
      this->CurrentFreq = param_1->FrequencyHz;
      return;
    }
  }
  lVar7 = (longlong)pfVar6 - (longlong)pfVar5;
  do {
    fVar10 = *(float *)(lVar7 + (longlong)pfVar5) + param_1->FrequencyHz;
    if (fVar20 <= fVar10) {
      fVar10 = fVar20;
    }
    if (fVar10 <= (float)((uint)fVar20 ^ uVar4)) {
      fVar10 = (float)((uint)fVar20 ^ uVar4);
    }
    if (fVar2 <= fVar17) {
      auVar11 = roundps(auVar11,ZEXT416((uint)fVar17),3);
      fVar17 = fVar17 - auVar11._0_4_;
      this->Phase = fVar17;
    }
    if (fVar17 < 0.0) {
      auVar12 = roundps(auVar14,ZEXT416((uint)fVar17),3);
      auVar14._4_12_ = auVar12._4_12_;
      auVar14._0_4_ = auVar12._0_4_ + fVar2;
      fVar17 = fVar17 - auVar14._0_4_;
      this->Phase = fVar17;
    }
    iVar8 = iVar8 + -1;
    *pfVar5 = (fVar17 + fVar17) - fVar2;
    fVar17 = fVar10 * fVar18 + this->Phase;
    pfVar5 = pfVar5 + 1;
    this->Phase = fVar17;
  } while (0 < iVar8);
LAB_14b154c75:
  this->CurrentFreq = param_1->FrequencyHz;
  return;
}

// operator() @ 14b154f30

void __thiscall
Metasound::Generators::
TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>::
operator()(TGenerateBlockFM<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>
           *this,FGeneratorArgs *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint uVar23;
  ulonglong uVar24;
  float *pfVar25;
  float *pfVar26;
  longlong lVar27;
  int iVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  undefined1 auVar44 [16];
  undefined1 auVar50 [12];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar51 [12];
  float fVar52;
  float fVar53;
  undefined1 auVar55 [16];
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar54 [16];
  
  fVar30 = __real_40100000;
  fVar31 = __real_3f8d69ce;
  fVar59 = __real_3f0d69ce;
  fVar22 = __real_41d80000;
  fVar57 = __real_41100000;
  fVar21 = __real_c0400000;
  fVar20 = __real_3fc00000;
  uVar19 = __xmm_80000000800000008000000080000000;
  fVar18 = __real_bf800000;
  fVar52 = __real_3f000000;
  fVar17 = __real_40400000;
  fVar16 = __real_3f800000;
  fVar56 = this->CurrentFreq;
  iVar28 = (param_1->AlignedBuffer).ArrayNum;
  pfVar25 = (param_1->AlignedBuffer).DataPtr;
  pfVar26 = (param_1->FM).DataPtr;
  auVar32 = ZEXT416((uint)__real_322bcc77);
  fVar58 = __real_3f800000 / param_1->SampleRate;
  fVar43 = param_1->SampleRate * __real_3f000000;
  auVar34 = ZEXT416((uint)fVar43);
  fVar29 = (float)((uint)(param_1->FrequencyHz - fVar56) & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (param_1->BiPolar == false) {
    if (((__real_322bcc77 < fVar29) && (0.0 <= fVar56)) &&
       (__real_322bcc77 <
        (float)((uint)(param_1->GlideEaseFactor - __real_3f800000) &
               __xmm_7fffffff7fffffff7fffffff7fffffff))) {
      for (; 0 < iVar28; iVar28 = iVar28 + -1) {
        fVar52 = *pfVar26;
        pfVar26 = pfVar26 + 1;
        fVar31 = this->Phase;
        fVar56 = (fVar56 + fVar52) * fVar58;
        if (fVar16 <= fVar31) {
          auVar32 = roundps(auVar32,ZEXT416((uint)fVar31),3);
          fVar31 = fVar31 - auVar32._0_4_;
          this->Phase = fVar31;
        }
        auVar50._4_8_ = 0;
        auVar50._0_4_ = fVar31;
        if (fVar31 < 0.0) {
          auVar1._12_4_ = 0;
          auVar1._0_12_ = auVar50;
          auVar32 = roundps(auVar34,auVar1,3);
          fVar31 = fVar31 - (auVar32._0_4_ + fVar16);
          auVar50._4_8_ = 0;
          auVar50._0_4_ = fVar31;
          this->Phase = fVar31;
        }
        fVar29 = auVar50._0_4_;
        uVar23 = auVar50._8_4_;
        fVar52 = (fVar29 + fVar29) - fVar16;
        fVar31 = fVar52 * fVar20;
        if (fVar21 <= fVar31) {
          if (fVar31 <= fVar17) {
            fVar52 = fVar52 * fVar52 * fVar30;
            auVar4._4_8_ = 0;
            auVar4._0_4_ = uVar23;
            auVar46._0_4_ = ((fVar52 + fVar22) * fVar31) / (fVar52 * fVar57 + fVar22);
            auVar46._4_8_ = SUB128(auVar4 << 0x40,4);
            auVar46._12_4_ = 0;
          }
          else {
            auVar46 = ZEXT416((uint)fVar16);
          }
        }
        else {
          auVar46 = ZEXT416((uint)fVar18);
        }
        fVar52 = (float)((uint)fVar56 & __xmm_7fffffff7fffffff7fffffff7fffffff);
        auVar36._0_12_ = ZEXT812(0);
        auVar36._12_4_ = 0;
        if (fVar29 <= fVar16 - fVar52) {
          if (fVar29 < fVar52) {
            fVar29 = fVar29 / fVar52;
            auVar6._4_8_ = 0;
            auVar6._0_4_ = uVar23;
            auVar36._0_4_ = (fVar29 * fVar29 - (fVar29 + fVar29)) + fVar16;
            auVar36._4_8_ = SUB128(auVar6 << 0x40,4);
            auVar36._12_4_ = 0;
          }
        }
        else {
          fVar52 = (fVar29 - fVar16) / fVar52;
          auVar5._4_8_ = 0;
          auVar5._0_4_ = uVar23;
          auVar36._0_4_ = ((float)((uint)(fVar52 * fVar52) ^ uVar19) - (fVar52 + fVar52)) - fVar16;
          auVar36._4_8_ = SUB128(auVar5 << 0x40,4);
          auVar36._12_4_ = 0;
        }
        auVar32._4_12_ = auVar36._4_12_;
        auVar32._0_4_ = auVar36._0_4_ * __real_3f000000;
        auVar34._4_12_ = auVar46._4_12_;
        auVar34._0_4_ = auVar46._0_4_ * fVar59 + auVar32._0_4_ + __real_3f000000;
        *pfVar25 = auVar34._0_4_;
        pfVar25 = pfVar25 + 1;
        this->Phase = fVar56 + this->Phase;
        fVar56 = (param_1->FrequencyHz - this->CurrentFreq) * param_1->GlideEaseFactor +
                 this->CurrentFreq;
        this->CurrentFreq = fVar56;
      }
      return;
    }
    fVar56 = __real_40100000;
    if (3 < iVar28) {
      uVar23 = (iVar28 - 4U >> 2) + 1;
      uVar24 = (ulonglong)uVar23;
      iVar28 = iVar28 + uVar23 * -4;
      do {
        fVar57 = __real_40100000;
        fVar56 = this->Phase;
        fVar31 = (*pfVar26 + param_1->FrequencyHz) * fVar58;
        if (fVar16 <= fVar56) {
          auVar32 = roundps(auVar32,ZEXT416((uint)fVar56),3);
          fVar56 = fVar56 - auVar32._0_4_;
          this->Phase = fVar56;
        }
        if (fVar56 < 0.0) {
          auVar32 = roundps(auVar34,ZEXT416((uint)fVar56),3);
          fVar56 = fVar56 - (auVar32._0_4_ + fVar16);
          this->Phase = fVar56;
        }
        fVar30 = (fVar56 + fVar56) - fVar16;
        fVar29 = fVar30 * fVar20;
        if (fVar21 <= fVar29) {
          if (fVar29 <= fVar17) {
            fVar57 = fVar30 * fVar30 * fVar57;
            auVar32 = ZEXT416((uint)(((fVar57 + fVar22) * fVar29) /
                                    (fVar57 * __real_41100000 + fVar22)));
          }
          else {
            auVar32 = ZEXT416((uint)fVar16);
          }
        }
        else {
          auVar32 = ZEXT416((uint)fVar18);
        }
        fVar57 = (float)((uint)fVar31 & __xmm_7fffffff7fffffff7fffffff7fffffff);
        auVar34 = ZEXT816(0);
        if (fVar56 <= fVar16 - fVar57) {
          if (fVar56 < fVar57) {
            fVar56 = fVar56 / fVar57;
            auVar34 = ZEXT416((uint)((fVar56 * fVar56 - (fVar56 + fVar56)) + fVar16));
          }
        }
        else {
          fVar57 = (fVar56 - fVar16) / fVar57;
          auVar34 = ZEXT416((uint)(((float)((uint)(fVar57 * fVar57) ^ uVar19) - (fVar57 + fVar57)) -
                                  fVar16));
        }
        auVar47._4_12_ = auVar32._4_12_;
        auVar37._4_12_ = auVar34._4_12_;
        auVar37._0_4_ = auVar34._0_4_ * fVar52;
        auVar47._0_4_ = auVar32._0_4_ * fVar59 + auVar37._0_4_ + fVar52;
        *pfVar25 = auVar47._0_4_;
        fVar31 = fVar31 + this->Phase;
        this->Phase = fVar31;
        fVar56 = (pfVar26[1] + param_1->FrequencyHz) * fVar58;
        if (fVar16 <= fVar31) {
          auVar32 = roundps(auVar37,ZEXT416((uint)fVar31),3);
          fVar31 = fVar31 - auVar32._0_4_;
          this->Phase = fVar31;
        }
        if (fVar31 < 0.0) {
          auVar32 = roundps(auVar47,ZEXT416((uint)fVar31),3);
          fVar31 = fVar31 - (auVar32._0_4_ + fVar16);
          this->Phase = fVar31;
        }
        fVar57 = (fVar31 + fVar31) - fVar16;
        fVar30 = fVar57 * fVar20;
        if (fVar21 <= fVar30) {
          if (fVar30 <= fVar17) {
            fVar57 = fVar57 * fVar57 * __real_40100000;
            auVar50 = ZEXT812(0);
            fVar57 = ((fVar57 + fVar22) * fVar30) / (fVar57 * __real_41100000 + fVar22);
          }
          else {
            auVar50 = (undefined1  [12])0x0;
            fVar57 = fVar16;
          }
        }
        else {
          auVar50 = (undefined1  [12])0x0;
          fVar57 = fVar18;
        }
        fVar30 = (float)((uint)fVar56 & __xmm_7fffffff7fffffff7fffffff7fffffff);
        auVar38._0_12_ = ZEXT812(0);
        auVar38._12_4_ = 0;
        if (fVar31 <= fVar16 - fVar30) {
          if (fVar31 < fVar30) {
            fVar31 = fVar31 / fVar30;
            auVar38 = ZEXT416((uint)((fVar31 * fVar31 - (fVar31 + fVar31)) + fVar16));
          }
        }
        else {
          fVar30 = (fVar31 - fVar16) / fVar30;
          auVar38 = ZEXT416((uint)(((float)((uint)(fVar30 * fVar30) ^ uVar19) - (fVar30 + fVar30)) -
                                  fVar16));
        }
        auVar39._4_12_ = auVar38._4_12_;
        auVar39._0_4_ = auVar38._0_4_ * fVar52;
        auVar48._0_4_ = fVar57 * fVar59 + auVar39._0_4_ + fVar52;
        auVar48._4_12_ = auVar50;
        pfVar25[1] = auVar48._0_4_;
        fVar56 = fVar56 + this->Phase;
        this->Phase = fVar56;
        fVar57 = (pfVar26[2] + param_1->FrequencyHz) * fVar58;
        if (fVar16 <= fVar56) {
          auVar32 = roundps(auVar39,ZEXT416((uint)fVar56),3);
          fVar56 = fVar56 - auVar32._0_4_;
          this->Phase = fVar56;
        }
        if (fVar56 < 0.0) {
          auVar32 = roundps(auVar48,ZEXT416((uint)fVar56),3);
          fVar56 = fVar56 - (auVar32._0_4_ + fVar16);
          this->Phase = fVar56;
        }
        fVar31 = (fVar56 + fVar56) - fVar16;
        fVar30 = fVar31 * fVar20;
        if (fVar21 <= fVar30) {
          if (fVar30 <= fVar17) {
            fVar31 = fVar31 * fVar31 * __real_40100000;
            auVar32 = ZEXT416((uint)(((fVar31 + fVar22) * fVar30) /
                                    (fVar31 * __real_41100000 + fVar22)));
          }
          else {
            auVar32 = ZEXT416((uint)fVar16);
          }
        }
        else {
          auVar32 = ZEXT416((uint)fVar18);
        }
        fVar31 = (float)((uint)fVar57 & __xmm_7fffffff7fffffff7fffffff7fffffff);
        auVar34 = ZEXT816(0);
        if (fVar56 <= fVar16 - fVar31) {
          if (fVar56 < fVar31) {
            fVar56 = fVar56 / fVar31;
            auVar34 = ZEXT416((uint)((fVar56 * fVar56 - (fVar56 + fVar56)) + fVar16));
          }
        }
        else {
          fVar31 = (fVar56 - fVar16) / fVar31;
          auVar34 = ZEXT416((uint)(((float)((uint)(fVar31 * fVar31) ^ uVar19) - (fVar31 + fVar31)) -
                                  fVar16));
        }
        auVar49._4_12_ = auVar32._4_12_;
        auVar40._4_12_ = auVar34._4_12_;
        auVar40._0_4_ = auVar34._0_4_ * fVar52;
        auVar49._0_4_ = auVar32._0_4_ * fVar59 + auVar40._0_4_ + fVar52;
        pfVar25[2] = auVar49._0_4_;
        fVar57 = fVar57 + this->Phase;
        this->Phase = fVar57;
        fVar56 = (pfVar26[3] + param_1->FrequencyHz) * fVar58;
        if (fVar16 <= fVar57) {
          auVar32 = roundps(auVar40,ZEXT416((uint)fVar57),3);
          fVar57 = fVar57 - auVar32._0_4_;
          this->Phase = fVar57;
        }
        if (fVar57 < 0.0) {
          auVar32 = roundps(auVar49,ZEXT416((uint)fVar57),3);
          fVar57 = fVar57 - (auVar32._0_4_ + fVar16);
          this->Phase = fVar57;
        }
        fVar31 = (fVar57 + fVar57) - fVar16;
        fVar30 = fVar31 * fVar20;
        if (fVar21 <= fVar30) {
          if (fVar30 <= fVar17) {
            fVar31 = fVar31 * fVar31 * __real_40100000;
            auVar50 = ZEXT812(0);
            fVar31 = ((fVar31 + fVar22) * fVar30) / (fVar31 * __real_41100000 + fVar22);
          }
          else {
            auVar50 = (undefined1  [12])0x0;
            fVar31 = fVar16;
          }
        }
        else {
          auVar50 = (undefined1  [12])0x0;
          fVar31 = fVar18;
        }
        fVar30 = (float)((uint)fVar56 & __xmm_7fffffff7fffffff7fffffff7fffffff);
        auVar41._0_12_ = ZEXT812(0);
        auVar41._12_4_ = 0;
        if (fVar57 <= fVar16 - fVar30) {
          if (fVar57 < fVar30) {
            fVar57 = fVar57 / fVar30;
            auVar41 = ZEXT416((uint)((fVar57 * fVar57 - (fVar57 + fVar57)) + fVar16));
          }
        }
        else {
          fVar30 = (fVar57 - fVar16) / fVar30;
          auVar41 = ZEXT416((uint)(((float)((uint)(fVar30 * fVar30) ^ uVar19) - (fVar30 + fVar30)) -
                                  fVar16));
        }
        pfVar26 = pfVar26 + 4;
        auVar32._4_12_ = auVar41._4_12_;
        auVar32._0_4_ = auVar41._0_4_ * fVar52;
        auVar34._0_4_ = fVar31 * fVar59 + auVar32._0_4_ + fVar52;
        auVar34._4_12_ = auVar50;
        pfVar25[3] = auVar34._0_4_;
        pfVar25 = pfVar25 + 4;
        this->Phase = fVar56 + this->Phase;
        uVar24 = uVar24 - 1;
        fVar56 = __real_40100000;
      } while (uVar24 != 0);
    }
    for (; 0 < iVar28; iVar28 = iVar28 + -1) {
      fVar57 = this->Phase;
      fVar31 = (*pfVar26 + param_1->FrequencyHz) * fVar58;
      if (fVar16 <= fVar57) {
        auVar32 = roundps(auVar32,ZEXT416((uint)fVar57),3);
        fVar57 = fVar57 - auVar32._0_4_;
        this->Phase = fVar57;
      }
      auVar3._4_8_ = 0;
      auVar3._0_4_ = fVar57;
      if (fVar57 < 0.0) {
        auVar2._12_4_ = 0;
        auVar2._0_12_ = auVar3;
        auVar32 = roundps(auVar34,auVar2,3);
        fVar57 = fVar57 - (auVar32._0_4_ + fVar16);
        auVar3._4_8_ = 0;
        auVar3._0_4_ = fVar57;
        this->Phase = fVar57;
      }
      fVar57 = __real_40100000;
      fVar43 = auVar3._0_4_;
      uVar23 = auVar3._8_4_;
      fVar30 = (fVar43 + fVar43) - fVar16;
      fVar29 = fVar30 * fVar20;
      if (fVar21 <= fVar29) {
        if (fVar29 <= fVar17) {
          fVar56 = fVar30 * fVar30 * fVar56;
          auVar7._4_8_ = 0;
          auVar7._0_4_ = uVar23;
          auVar51._8_4_ = 0;
          auVar51._0_8_ = SUB128(auVar7 << 0x40,4);
          fVar56 = ((fVar56 + fVar22) * fVar29) / (fVar56 * __real_41100000 + fVar22);
        }
        else {
          auVar51 = (undefined1  [12])0x0;
          fVar56 = fVar16;
        }
      }
      else {
        auVar51 = (undefined1  [12])0x0;
        fVar56 = fVar18;
      }
      fVar30 = (float)((uint)fVar31 & __xmm_7fffffff7fffffff7fffffff7fffffff);
      auVar42._0_12_ = ZEXT812(0);
      auVar42._12_4_ = 0;
      if (fVar43 <= fVar16 - fVar30) {
        if (fVar43 < fVar30) {
          fVar43 = fVar43 / fVar30;
          auVar9._4_8_ = 0;
          auVar9._0_4_ = uVar23;
          auVar42._0_4_ = (fVar43 * fVar43 - (fVar43 + fVar43)) + fVar16;
          auVar42._4_8_ = SUB128(auVar9 << 0x40,4);
          auVar42._12_4_ = 0;
        }
      }
      else {
        fVar30 = (fVar43 - fVar16) / fVar30;
        auVar8._4_8_ = 0;
        auVar8._0_4_ = uVar23;
        auVar42._0_4_ = ((float)((uint)(fVar30 * fVar30) ^ uVar19) - (fVar30 + fVar30)) - fVar16;
        auVar42._4_8_ = SUB128(auVar8 << 0x40,4);
        auVar42._12_4_ = 0;
      }
      pfVar26 = pfVar26 + 1;
      auVar32._4_12_ = auVar42._4_12_;
      auVar32._0_4_ = auVar42._0_4_ * fVar52;
      auVar34._0_4_ = fVar56 * fVar59 + auVar32._0_4_ + fVar52;
      auVar34._4_12_ = auVar51;
      *pfVar25 = auVar34._0_4_;
      pfVar25 = pfVar25 + 1;
      this->Phase = fVar31 + this->Phase;
      fVar56 = fVar57;
    }
  }
  else {
    if (((__real_322bcc77 < fVar29) && (0.0 <= fVar56)) &&
       (__real_322bcc77 <
        (float)((uint)(param_1->GlideEaseFactor - __real_3f800000) &
               __xmm_7fffffff7fffffff7fffffff7fffffff))) {
      if (iVar28 < 1) {
        return;
      }
      fVar52 = this->Phase;
      fVar59 = (float)((uint)fVar43 ^ __xmm_80000000800000008000000080000000);
      do {
        auVar54 = ZEXT416((uint)fVar52);
        fVar31 = *pfVar26;
        pfVar26 = pfVar26 + 1;
        fVar29 = fVar56 + fVar31;
        if (fVar43 <= fVar56 + fVar31) {
          fVar29 = fVar43;
        }
        if (fVar29 <= fVar59) {
          fVar29 = fVar59;
        }
        if (fVar16 <= fVar52) {
          auVar32 = roundps(auVar32,auVar54,3);
          fVar52 = fVar52 - auVar32._0_4_;
          auVar54 = ZEXT416((uint)fVar52);
          this->Phase = fVar52;
        }
        if (auVar54._0_4_ < 0.0) {
          auVar32 = roundps(ZEXT416((uint)fVar43),auVar54,3);
          auVar54._0_4_ = auVar54._0_4_ - (auVar32._0_4_ + fVar16);
          this->Phase = auVar54._0_4_;
        }
        fVar53 = auVar54._0_4_;
        fVar52 = (fVar53 + fVar53) - fVar16;
        fVar31 = fVar52 * fVar20;
        fVar56 = fVar18;
        if ((fVar21 <= fVar31) && (fVar56 = fVar16, fVar31 <= fVar17)) {
          fVar56 = fVar52 * fVar52 * fVar30;
          fVar56 = ((fVar56 + fVar22) * fVar31) / (fVar56 * fVar57 + fVar22);
        }
        fVar52 = (float)((uint)(fVar29 * fVar58) & __xmm_7fffffff7fffffff7fffffff7fffffff);
        auVar32._0_12_ = ZEXT812(0);
        auVar32._12_4_ = 0;
        if (fVar53 <= fVar16 - fVar52) {
          if (fVar53 < fVar52) {
            fVar53 = fVar53 / fVar52;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = auVar54._8_8_;
            auVar32._4_12_ = SUB1612(auVar11 << 0x40,4);
            auVar32._0_4_ = (fVar53 * fVar53 - (fVar53 + fVar53)) + fVar16;
          }
        }
        else {
          fVar52 = (fVar53 - fVar16) / fVar52;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = auVar54._8_8_;
          auVar32._4_12_ = SUB1612(auVar10 << 0x40,4);
          auVar32._0_4_ = ((float)((uint)(fVar52 * fVar52) ^ uVar19) - (fVar52 + fVar52)) - fVar16;
        }
        iVar28 = iVar28 + -1;
        *pfVar25 = fVar56 * __real_3f8d69ce + auVar32._0_4_;
        pfVar25 = pfVar25 + 1;
        fVar52 = fVar29 * fVar58 + this->Phase;
        this->Phase = fVar52;
        fVar56 = (param_1->FrequencyHz - this->CurrentFreq) * param_1->GlideEaseFactor +
                 this->CurrentFreq;
        this->CurrentFreq = fVar56;
      } while (0 < iVar28);
      return;
    }
    fVar56 = __real_40100000;
    if (iVar28 < 4) {
      if (iVar28 < 1) goto LAB_14b155fc1;
      auVar55 = ZEXT416((uint)this->Phase);
    }
    else {
      auVar55 = ZEXT416((uint)this->Phase);
      fVar52 = (float)((uint)fVar43 ^ __xmm_80000000800000008000000080000000);
      uVar23 = (iVar28 - 4U >> 2) + 1;
      uVar24 = (ulonglong)uVar23;
      iVar28 = iVar28 + uVar23 * -4;
      do {
        fVar57 = *pfVar26 + param_1->FrequencyHz;
        if (fVar43 <= fVar57) {
          fVar57 = fVar43;
        }
        if (fVar57 <= fVar52) {
          fVar57 = fVar52;
        }
        if (fVar16 <= auVar55._0_4_) {
          auVar32 = roundps(auVar32,auVar55,3);
          auVar55._0_4_ = auVar55._0_4_ - auVar32._0_4_;
          this->Phase = auVar55._0_4_;
        }
        if (auVar55._0_4_ < 0.0) {
          auVar32 = roundps(ZEXT416((uint)fVar43),auVar55,3);
          auVar55._0_4_ = auVar55._0_4_ - (auVar32._0_4_ + fVar16);
          this->Phase = auVar55._0_4_;
        }
        fVar53 = auVar55._0_4_;
        fVar30 = (fVar53 + fVar53) - fVar16;
        fVar29 = fVar30 * fVar20;
        fVar59 = fVar18;
        if ((fVar21 <= fVar29) && (fVar59 = fVar16, fVar29 <= fVar17)) {
          fVar56 = fVar30 * fVar30 * fVar56;
          fVar59 = ((fVar56 + fVar22) * fVar29) / (fVar56 * __real_41100000 + fVar22);
        }
        fVar56 = (float)((uint)(fVar57 * fVar58) & __xmm_7fffffff7fffffff7fffffff7fffffff);
        auVar33._0_12_ = ZEXT812(0);
        auVar33._12_4_ = 0;
        if (fVar53 <= fVar16 - fVar56) {
          if (fVar53 < fVar56) {
            fVar53 = fVar53 / fVar56;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = auVar55._8_8_;
            auVar33._4_12_ = SUB1612(auVar13 << 0x40,4);
            auVar33._0_4_ = (fVar53 * fVar53 - (fVar53 + fVar53)) + fVar16;
          }
        }
        else {
          fVar30 = (fVar53 - fVar16) / fVar56;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = auVar55._8_8_;
          auVar33._4_12_ = SUB1612(auVar12 << 0x40,4);
          auVar33._0_4_ = ((float)((uint)(fVar30 * fVar30) ^ uVar19) - (fVar30 + fVar30)) - fVar16;
        }
        *pfVar25 = fVar59 * fVar31 + auVar33._0_4_;
        fVar59 = fVar57 * fVar58 + this->Phase;
        this->Phase = fVar59;
        fVar57 = pfVar26[1] + param_1->FrequencyHz;
        if (fVar43 <= fVar57) {
          fVar57 = fVar43;
        }
        if (fVar57 <= fVar52) {
          fVar57 = fVar52;
        }
        if (fVar16 <= fVar59) {
          auVar32 = roundps(auVar33,ZEXT416((uint)fVar59),3);
          fVar59 = fVar59 - auVar32._0_4_;
          this->Phase = fVar59;
        }
        if (fVar59 < 0.0) {
          auVar32 = roundps(ZEXT416((uint)fVar56),ZEXT416((uint)fVar59),3);
          fVar59 = fVar59 - (auVar32._0_4_ + fVar16);
          this->Phase = fVar59;
        }
        fVar56 = (fVar59 + fVar59) - fVar16;
        fVar30 = fVar56 * fVar20;
        if (fVar21 <= fVar30) {
          if (fVar30 <= fVar17) {
            fVar56 = fVar56 * fVar56 * __real_40100000;
            auVar32 = ZEXT416((uint)(((fVar56 + fVar22) * fVar30) /
                                    (fVar56 * __real_41100000 + fVar22)));
          }
          else {
            auVar32 = ZEXT416((uint)fVar16);
          }
        }
        else {
          auVar32 = ZEXT416((uint)fVar18);
        }
        fVar56 = (float)((uint)(fVar57 * fVar58) & __xmm_7fffffff7fffffff7fffffff7fffffff);
        auVar34 = ZEXT816(0);
        if (fVar59 <= fVar16 - fVar56) {
          if (fVar59 < fVar56) {
            fVar59 = fVar59 / fVar56;
            auVar34 = ZEXT416((uint)((fVar59 * fVar59 - (fVar59 + fVar59)) + fVar16));
          }
        }
        else {
          fVar56 = (fVar59 - fVar16) / fVar56;
          auVar34 = ZEXT416((uint)(((float)((uint)(fVar56 * fVar56) ^ uVar19) - (fVar56 + fVar56)) -
                                  fVar16));
        }
        auVar44._4_12_ = auVar32._4_12_;
        auVar44._0_4_ = auVar32._0_4_ * fVar31 + auVar34._0_4_;
        pfVar25[1] = auVar44._0_4_;
        fVar57 = fVar57 * fVar58 + this->Phase;
        this->Phase = fVar57;
        fVar56 = pfVar26[2] + param_1->FrequencyHz;
        if (fVar43 <= fVar56) {
          fVar56 = fVar43;
        }
        if (fVar56 <= fVar52) {
          fVar56 = fVar52;
        }
        if (fVar16 <= fVar57) {
          auVar32 = roundps(auVar34,ZEXT416((uint)fVar57),3);
          fVar57 = fVar57 - auVar32._0_4_;
          this->Phase = fVar57;
        }
        if (fVar57 < 0.0) {
          auVar32 = roundps(auVar44,ZEXT416((uint)fVar57),3);
          fVar57 = fVar57 - (auVar32._0_4_ + fVar16);
          this->Phase = fVar57;
        }
        fVar59 = (fVar57 + fVar57) - fVar16;
        fVar30 = fVar59 * fVar20;
        if (fVar21 <= fVar30) {
          if (fVar30 <= fVar17) {
            fVar59 = fVar59 * fVar59 * __real_40100000;
            auVar50 = ZEXT812(0);
            fVar59 = ((fVar59 + fVar22) * fVar30) / (fVar59 * __real_41100000 + fVar22);
          }
          else {
            auVar50 = (undefined1  [12])0x0;
            fVar59 = fVar16;
          }
        }
        else {
          auVar50 = (undefined1  [12])0x0;
          fVar59 = fVar18;
        }
        fVar30 = (float)((uint)(fVar56 * fVar58) & __xmm_7fffffff7fffffff7fffffff7fffffff);
        auVar35._0_12_ = ZEXT812(0);
        auVar35._12_4_ = 0;
        if (fVar57 <= fVar16 - fVar30) {
          if (fVar57 < fVar30) {
            fVar57 = fVar57 / fVar30;
            auVar35 = ZEXT416((uint)((fVar57 * fVar57 - (fVar57 + fVar57)) + fVar16));
          }
        }
        else {
          fVar30 = (fVar57 - fVar16) / fVar30;
          auVar35 = ZEXT416((uint)(((float)((uint)(fVar30 * fVar30) ^ uVar19) - (fVar30 + fVar30)) -
                                  fVar16));
        }
        auVar45._0_4_ = fVar59 * fVar31 + auVar35._0_4_;
        auVar45._4_12_ = auVar50;
        pfVar25[2] = auVar45._0_4_;
        fVar59 = fVar56 * fVar58 + this->Phase;
        this->Phase = fVar59;
        fVar57 = pfVar26[3] + param_1->FrequencyHz;
        if (fVar43 <= fVar57) {
          fVar57 = fVar43;
        }
        if (fVar57 <= fVar52) {
          fVar57 = fVar52;
        }
        if (fVar16 <= fVar59) {
          auVar32 = roundps(auVar35,ZEXT416((uint)fVar59),3);
          fVar59 = fVar59 - auVar32._0_4_;
          this->Phase = fVar59;
        }
        if (fVar59 < 0.0) {
          auVar32 = roundps(auVar45,ZEXT416((uint)fVar59),3);
          fVar59 = fVar59 - (auVar32._0_4_ + fVar16);
          this->Phase = fVar59;
        }
        fVar56 = __real_40100000;
        fVar29 = (fVar59 + fVar59) - fVar16;
        fVar53 = fVar29 * fVar20;
        fVar30 = fVar18;
        if ((fVar21 <= fVar53) && (fVar30 = fVar16, fVar53 <= fVar17)) {
          fVar30 = fVar29 * fVar29 * __real_40100000;
          fVar30 = ((fVar30 + fVar22) * fVar53) / (fVar30 * __real_41100000 + fVar22);
        }
        fVar29 = (float)((uint)(fVar57 * fVar58) & __xmm_7fffffff7fffffff7fffffff7fffffff);
        auVar32 = ZEXT816(0);
        if (fVar59 <= fVar16 - fVar29) {
          if (fVar59 < fVar29) {
            fVar59 = fVar59 / fVar29;
            auVar32 = ZEXT416((uint)((fVar59 * fVar59 - (fVar59 + fVar59)) + fVar16));
          }
        }
        else {
          fVar29 = (fVar59 - fVar16) / fVar29;
          auVar32 = ZEXT416((uint)(((float)((uint)(fVar29 * fVar29) ^ uVar19) - (fVar29 + fVar29)) -
                                  fVar16));
        }
        pfVar26 = pfVar26 + 4;
        pfVar25[3] = fVar30 * fVar31 + auVar32._0_4_;
        pfVar25 = pfVar25 + 4;
        fVar57 = fVar57 * fVar58 + this->Phase;
        auVar55 = ZEXT416((uint)fVar57);
        this->Phase = fVar57;
        uVar24 = uVar24 - 1;
      } while (uVar24 != 0);
      if (iVar28 < 1) goto LAB_14b155fc1;
    }
    lVar27 = (longlong)pfVar26 - (longlong)pfVar25;
    do {
      fVar52 = *(float *)(lVar27 + (longlong)pfVar25) + param_1->FrequencyHz;
      if (fVar43 <= fVar52) {
        fVar52 = fVar43;
      }
      if (fVar52 <= (float)((uint)fVar43 ^ uVar19)) {
        fVar52 = (float)((uint)fVar43 ^ uVar19);
      }
      if (fVar16 <= auVar55._0_4_) {
        auVar32 = roundps(auVar32,auVar55,3);
        auVar55._0_4_ = auVar55._0_4_ - auVar32._0_4_;
        this->Phase = auVar55._0_4_;
      }
      if (auVar55._0_4_ < 0.0) {
        auVar32 = roundps(ZEXT416((uint)fVar43),auVar55,3);
        auVar55._0_4_ = auVar55._0_4_ - (auVar32._0_4_ + fVar16);
        this->Phase = auVar55._0_4_;
      }
      fVar57 = __real_40100000;
      fVar53 = auVar55._0_4_;
      fVar30 = (fVar53 + fVar53) - fVar16;
      fVar29 = fVar30 * fVar20;
      fVar59 = fVar18;
      if ((fVar21 <= fVar29) && (fVar59 = fVar16, fVar29 <= fVar17)) {
        fVar56 = fVar30 * fVar30 * fVar56;
        fVar59 = ((fVar56 + fVar22) * fVar29) / (fVar56 * __real_41100000 + fVar22);
      }
      fVar56 = (float)((uint)(fVar52 * fVar58) & __xmm_7fffffff7fffffff7fffffff7fffffff);
      auVar32._0_12_ = ZEXT812(0);
      auVar32._12_4_ = 0;
      if (fVar53 <= fVar16 - fVar56) {
        if (fVar53 < fVar56) {
          fVar53 = fVar53 / fVar56;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = auVar55._8_8_;
          auVar32._4_12_ = SUB1612(auVar15 << 0x40,4);
          auVar32._0_4_ = (fVar53 * fVar53 - (fVar53 + fVar53)) + fVar16;
        }
      }
      else {
        fVar56 = (fVar53 - fVar16) / fVar56;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = auVar55._8_8_;
        auVar32._4_12_ = SUB1612(auVar14 << 0x40,4);
        auVar32._0_4_ = ((float)((uint)(fVar56 * fVar56) ^ uVar19) - (fVar56 + fVar56)) - fVar16;
      }
      iVar28 = iVar28 + -1;
      *pfVar25 = fVar59 * fVar31 + auVar32._0_4_;
      pfVar25 = pfVar25 + 1;
      fVar56 = fVar52 * fVar58 + this->Phase;
      auVar55 = ZEXT416((uint)fVar56);
      this->Phase = fVar56;
      fVar56 = fVar57;
    } while (0 < iVar28);
  }
LAB_14b155fc1:
  this->CurrentFreq = param_1->FrequencyHz;
  return;
}

// operator() @ 14b156010

void __thiscall
Metasound::Generators::
TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>::
operator()(TGenerateBlockFM<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>
           *this,FGeneratorArgs *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 in_XMM3 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar9 = __real_3f000000;
  fVar2 = __real_3f800000;
  iVar3 = (param_1->AlignedBuffer).ArrayNum;
  pfVar5 = (param_1->AlignedBuffer).DataPtr;
  pfVar4 = (param_1->FM).DataPtr;
  auVar8 = ZEXT416((uint)__real_322bcc77);
  fVar7 = this->CurrentFreq;
  fVar12 = __real_3f800000 / param_1->SampleRate;
  fVar11 = param_1->SampleRate * __real_3f000000;
  fVar6 = (float)((uint)(param_1->FrequencyHz - fVar7) & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (param_1->BiPolar == false) {
    if (((__real_322bcc77 < fVar6) && (0.0 <= fVar7)) &&
       (__real_322bcc77 <
        (float)((uint)(param_1->GlideEaseFactor - __real_3f800000) &
               __xmm_7fffffff7fffffff7fffffff7fffffff))) {
      for (; 0 < iVar3; iVar3 = iVar3 + -1) {
        fVar6 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        fVar11 = this->Phase;
        fVar7 = (fVar6 + fVar7) * fVar12;
        if (fVar2 <= fVar11) {
          auVar8 = roundps(auVar8,ZEXT416((uint)fVar11),3);
          fVar11 = fVar11 - auVar8._0_4_;
          this->Phase = fVar11;
        }
        if (fVar11 < 0.0) {
          auVar8 = roundps(in_XMM3,ZEXT416((uint)fVar11),3);
          in_XMM3._4_12_ = auVar8._4_12_;
          in_XMM3._0_4_ = auVar8._0_4_ + fVar2;
          fVar11 = fVar11 - in_XMM3._0_4_;
          this->Phase = fVar11;
        }
        auVar8 = ZEXT416((uint)fVar11);
        fVar6 = FSineWaveTableGenerator::operator()(&this->Osc,fVar11,fVar7,param_1);
        *pfVar5 = (fVar6 + fVar2) * fVar9;
        pfVar5 = pfVar5 + 1;
        this->Phase = fVar7 + this->Phase;
        fVar7 = (param_1->FrequencyHz - this->CurrentFreq) * param_1->GlideEaseFactor +
                this->CurrentFreq;
        this->CurrentFreq = fVar7;
      }
      return;
    }
    for (; 0 < iVar3; iVar3 = iVar3 + -1) {
      fVar7 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      fVar6 = this->Phase;
      fVar7 = (fVar7 + param_1->FrequencyHz) * fVar12;
      if (fVar2 <= fVar6) {
        auVar8 = roundps(auVar8,ZEXT416((uint)fVar6),3);
        fVar6 = fVar6 - auVar8._0_4_;
        this->Phase = fVar6;
      }
      if (fVar6 < 0.0) {
        auVar8 = roundps(in_XMM3,ZEXT416((uint)fVar6),3);
        in_XMM3._4_12_ = auVar8._4_12_;
        in_XMM3._0_4_ = auVar8._0_4_ + fVar2;
        fVar6 = fVar6 - in_XMM3._0_4_;
        this->Phase = fVar6;
      }
      auVar8 = ZEXT416((uint)fVar6);
      fVar6 = FSineWaveTableGenerator::operator()(&this->Osc,fVar6,fVar7,param_1);
      *pfVar5 = (fVar6 + fVar2) * fVar9;
      pfVar5 = pfVar5 + 1;
      this->Phase = fVar7 + this->Phase;
    }
  }
  else {
    if (((__real_322bcc77 < fVar6) && (0.0 <= fVar7)) &&
       (__real_322bcc77 <
        (float)((uint)(param_1->GlideEaseFactor - __real_3f800000) &
               __xmm_7fffffff7fffffff7fffffff7fffffff))) {
      if (iVar3 < 1) {
        return;
      }
      fVar9 = this->Phase;
      fVar6 = (float)((uint)fVar11 ^ __xmm_80000000800000008000000080000000);
      do {
        fVar1 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        fVar10 = fVar7 + fVar1;
        if (fVar11 <= fVar7 + fVar1) {
          fVar10 = fVar11;
        }
        if (fVar10 <= fVar6) {
          fVar10 = fVar6;
        }
        if (fVar2 <= fVar9) {
          auVar8 = roundps(auVar8,ZEXT416((uint)fVar9),3);
          fVar9 = fVar9 - auVar8._0_4_;
          this->Phase = fVar9;
        }
        if (fVar9 < 0.0) {
          auVar8 = roundps(in_XMM3,ZEXT416((uint)fVar9),3);
          in_XMM3._4_12_ = auVar8._4_12_;
          in_XMM3._0_4_ = auVar8._0_4_ + fVar2;
          fVar9 = fVar9 - in_XMM3._0_4_;
          this->Phase = fVar9;
        }
        auVar8 = ZEXT416((uint)fVar9);
        fVar7 = FSineWaveTableGenerator::operator()(&this->Osc,fVar9,fVar10 * fVar12,param_1);
        *pfVar5 = fVar7;
        pfVar5 = pfVar5 + 1;
        fVar9 = fVar10 * fVar12 + this->Phase;
        iVar3 = iVar3 + -1;
        this->Phase = fVar9;
        fVar7 = (param_1->FrequencyHz - this->CurrentFreq) * param_1->GlideEaseFactor +
                this->CurrentFreq;
        this->CurrentFreq = fVar7;
      } while (0 < iVar3);
      return;
    }
    if (0 < iVar3) {
      fVar7 = this->Phase;
      fVar9 = (float)((uint)fVar11 ^ __xmm_80000000800000008000000080000000);
      do {
        fVar6 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        fVar6 = fVar6 + param_1->FrequencyHz;
        if (fVar11 <= fVar6) {
          fVar6 = fVar11;
        }
        if (fVar6 <= fVar9) {
          fVar6 = fVar9;
        }
        if (fVar2 <= fVar7) {
          auVar8 = roundps(auVar8,ZEXT416((uint)fVar7),3);
          fVar7 = fVar7 - auVar8._0_4_;
          this->Phase = fVar7;
        }
        if (fVar7 < 0.0) {
          auVar8 = roundps(in_XMM3,ZEXT416((uint)fVar7),3);
          in_XMM3._4_12_ = auVar8._4_12_;
          in_XMM3._0_4_ = auVar8._0_4_ + fVar2;
          fVar7 = fVar7 - in_XMM3._0_4_;
          this->Phase = fVar7;
        }
        auVar8 = ZEXT416((uint)fVar7);
        fVar7 = FSineWaveTableGenerator::operator()(&this->Osc,fVar7,fVar6 * fVar12,param_1);
        *pfVar5 = fVar7;
        fVar7 = fVar6 * fVar12 + this->Phase;
        pfVar5 = pfVar5 + 1;
        iVar3 = iVar3 + -1;
        this->Phase = fVar7;
      } while (0 < iVar3);
    }
  }
  this->CurrentFreq = param_1->FrequencyHz;
  return;
}

// operator() @ 14b1563d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Metasound::Generators::
TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>::
operator()(TGenerateBlockFM<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>
           *this,FGeneratorArgs *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar3 = __real_40c90fdb;
  fVar15 = __real_3f000000;
  fVar2 = __real_3f800000;
  iVar5 = (param_1->AlignedBuffer).ArrayNum;
  pfVar4 = (param_1->AlignedBuffer).DataPtr;
  pfVar6 = (param_1->FM).DataPtr;
  auVar9 = ZEXT416((uint)__real_322bcc77);
  fVar8 = this->CurrentFreq;
  fVar18 = __real_3f800000 / param_1->SampleRate;
  fVar17 = param_1->SampleRate * __real_3f000000;
  uVar10 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar7 = (float)((uint)(param_1->FrequencyHz - fVar8) & uVar10);
  if (param_1->BiPolar == false) {
    auVar11 = ___xmm_7fffffff7fffffff7fffffff7fffffff;
    if (((__real_322bcc77 < fVar7) && (0.0 <= fVar8)) &&
       (auVar14 = ___xmm_7fffffff7fffffff7fffffff7fffffff,
       __real_322bcc77 < (float)((uint)(param_1->GlideEaseFactor - __real_3f800000) & uVar10))) {
      for (; 0 < iVar5; iVar5 = iVar5 + -1) {
        fVar7 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        fVar17 = this->Phase;
        if (fVar2 <= fVar17) {
          auVar9 = roundps(auVar9,ZEXT416((uint)fVar17),3);
          fVar17 = fVar17 - auVar9._0_4_;
          this->Phase = fVar17;
        }
        if (fVar17 < 0.0) {
          auVar11 = roundps(auVar14,ZEXT416((uint)fVar17),3);
          auVar14._4_12_ = auVar11._4_12_;
          auVar14._0_4_ = auVar11._0_4_ + fVar2;
          fVar17 = fVar17 - auVar14._0_4_;
          this->Phase = fVar17;
        }
        fVar17 = sinf(fVar17 * fVar3);
        *pfVar4 = (fVar17 + fVar2) * fVar15;
        pfVar4 = pfVar4 + 1;
        this->Phase = (fVar7 + fVar8) * fVar18 + this->Phase;
        fVar8 = (param_1->FrequencyHz - this->CurrentFreq) * param_1->GlideEaseFactor +
                this->CurrentFreq;
        this->CurrentFreq = fVar8;
      }
      return;
    }
    for (; 0 < iVar5; iVar5 = iVar5 + -1) {
      fVar8 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      fVar7 = param_1->FrequencyHz;
      fVar17 = this->Phase;
      if (fVar2 <= fVar17) {
        auVar9 = roundps(auVar9,ZEXT416((uint)fVar17),3);
        fVar17 = fVar17 - auVar9._0_4_;
        this->Phase = fVar17;
      }
      if (fVar17 < 0.0) {
        auVar11 = roundps(auVar11,ZEXT416((uint)fVar17),3);
        auVar11._0_4_ = auVar11._0_4_ + fVar2;
        fVar17 = fVar17 - auVar11._0_4_;
        this->Phase = fVar17;
      }
      fVar17 = sinf(fVar17 * fVar3);
      *pfVar4 = (fVar17 + fVar2) * fVar15;
      pfVar4 = pfVar4 + 1;
      this->Phase = (fVar8 + fVar7) * fVar18 + this->Phase;
    }
  }
  else {
    if (((__real_322bcc77 < fVar7) && (0.0 <= fVar8)) &&
       (__real_322bcc77 < (float)((uint)(param_1->GlideEaseFactor - __real_3f800000) & uVar10))) {
      if (iVar5 < 1) {
        return;
      }
      fVar15 = this->Phase;
      fVar7 = (float)((uint)fVar17 ^ __xmm_80000000800000008000000080000000);
      auVar12 = ___xmm_7fffffff7fffffff7fffffff7fffffff;
      do {
        fVar1 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        fVar16 = fVar8 + fVar1;
        if (fVar17 <= fVar8 + fVar1) {
          fVar16 = fVar17;
        }
        if (fVar16 <= fVar7) {
          fVar16 = fVar7;
        }
        if (fVar2 <= fVar15) {
          auVar9 = roundps(auVar9,ZEXT416((uint)fVar15),3);
          fVar15 = fVar15 - auVar9._0_4_;
          this->Phase = fVar15;
        }
        if (fVar15 < 0.0) {
          auVar11 = roundps(auVar12,ZEXT416((uint)fVar15),3);
          auVar12._4_12_ = auVar11._4_12_;
          auVar12._0_4_ = auVar11._0_4_ + fVar2;
          fVar15 = fVar15 - auVar12._0_4_;
          this->Phase = fVar15;
        }
        fVar8 = sinf(fVar15 * fVar3);
        *pfVar4 = fVar8;
        pfVar4 = pfVar4 + 1;
        fVar15 = fVar16 * fVar18 + this->Phase;
        iVar5 = iVar5 + -1;
        this->Phase = fVar15;
        fVar8 = (param_1->FrequencyHz - this->CurrentFreq) * param_1->GlideEaseFactor +
                this->CurrentFreq;
        this->CurrentFreq = fVar8;
      } while (0 < iVar5);
      return;
    }
    if (0 < iVar5) {
      fVar8 = this->Phase;
      fVar15 = (float)((uint)fVar17 ^ __xmm_80000000800000008000000080000000);
      auVar13 = ___xmm_7fffffff7fffffff7fffffff7fffffff;
      do {
        fVar7 = *pfVar6;
        pfVar6 = pfVar6 + 1;
        fVar7 = fVar7 + param_1->FrequencyHz;
        if (fVar17 <= fVar7) {
          fVar7 = fVar17;
        }
        if (fVar7 <= fVar15) {
          fVar7 = fVar15;
        }
        if (fVar2 <= fVar8) {
          auVar9 = roundps(auVar9,ZEXT416((uint)fVar8),3);
          fVar8 = fVar8 - auVar9._0_4_;
          this->Phase = fVar8;
        }
        if (fVar8 < 0.0) {
          auVar11 = roundps(auVar13,ZEXT416((uint)fVar8),3);
          auVar13._4_12_ = auVar11._4_12_;
          auVar13._0_4_ = auVar11._0_4_ + fVar2;
          fVar8 = fVar8 - auVar13._0_4_;
          this->Phase = fVar8;
        }
        fVar8 = sinf(fVar8 * fVar3);
        *pfVar4 = fVar8;
        fVar8 = fVar7 * fVar18 + this->Phase;
        pfVar4 = pfVar4 + 1;
        iVar5 = iVar5 + -1;
        this->Phase = fVar8;
      } while (0 < iVar5);
    }
  }
  this->CurrentFreq = param_1->FrequencyHz;
  return;
}

// operator() @ 14b1567b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Metasound::Generators::
TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>::
operator()(TGenerateBlockFM<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>
           *this,FGeneratorArgs *param_1)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  
  uVar3 = __xmm_80000000800000008000000080000000;
  fVar13 = __real_bf800000;
  fVar1 = __real_3f800000;
  fVar10 = this->CurrentFreq;
  iVar7 = (param_1->AlignedBuffer).ArrayNum;
  pfVar4 = (param_1->AlignedBuffer).DataPtr;
  pfVar5 = (param_1->FM).DataPtr;
  auVar14 = ZEXT416((uint)__real_322bcc77);
  fVar20 = param_1->SampleRate * __real_3f000000;
  fVar21 = __real_3f800000 / param_1->SampleRate;
  uVar2 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar9 = (float)((uint)(param_1->FrequencyHz - fVar10) & uVar2);
  if (param_1->BiPolar == false) {
    if (((__real_322bcc77 < fVar9) && (0.0 <= fVar10)) &&
       (auVar17 = ___xmm_7fffffff7fffffff7fffffff7fffffff,
       __real_322bcc77 < (float)((uint)(param_1->GlideEaseFactor - __real_3f800000) & uVar2))) {
      for (; 0 < iVar7; iVar7 = iVar7 + -1) {
        fVar13 = *pfVar5;
        pfVar5 = pfVar5 + 1;
        fVar9 = this->Phase;
        fVar10 = (fVar13 + fVar10) * fVar21;
        if (fVar1 <= fVar9) {
          auVar14 = roundps(auVar14,ZEXT416((uint)fVar9),3);
          fVar9 = fVar9 - auVar14._0_4_;
          this->Phase = fVar9;
        }
        if (fVar9 < 0.0) {
          auVar14 = roundps(auVar17,ZEXT416((uint)fVar9),3);
          auVar17._4_12_ = auVar14._4_12_;
          auVar17._0_4_ = auVar14._0_4_ + fVar1;
          fVar9 = fVar9 - auVar17._0_4_;
          this->Phase = fVar9;
        }
        fVar13 = param_1->PulseWidth;
        if (fVar10 < 0.0) {
          fVar13 = fVar1 - fVar13;
        }
        auVar14 = ZEXT416((uint)fVar13);
        fVar20 = fVar1;
        if (fVar9 < fVar13) {
          fVar20 = 0.0;
        }
        *pfVar4 = fVar20;
        pfVar4 = pfVar4 + 1;
        this->Phase = fVar10 + this->Phase;
        fVar10 = (param_1->FrequencyHz - this->CurrentFreq) * param_1->GlideEaseFactor +
                 this->CurrentFreq;
        this->CurrentFreq = fVar10;
      }
      return;
    }
    auVar18 = ___xmm_7fffffff7fffffff7fffffff7fffffff;
    if (3 < iVar7) {
      uVar3 = (iVar7 - 4U >> 2) + 1;
      uVar8 = (ulonglong)uVar3;
      iVar7 = iVar7 + uVar3 * -4;
      do {
        fVar10 = this->Phase;
        fVar13 = (*pfVar5 + param_1->FrequencyHz) * fVar21;
        if (fVar1 <= fVar10) {
          auVar14 = roundps(auVar14,ZEXT416((uint)fVar10),3);
          fVar10 = fVar10 - auVar14._0_4_;
          this->Phase = fVar10;
        }
        if (fVar10 < 0.0) {
          auVar14 = roundps(auVar18,ZEXT416((uint)fVar10),3);
          auVar18._4_12_ = auVar14._4_12_;
          auVar18._0_4_ = auVar14._0_4_ + fVar1;
          fVar10 = fVar10 - auVar18._0_4_;
          this->Phase = fVar10;
        }
        fVar9 = param_1->PulseWidth;
        if (fVar13 < 0.0) {
          fVar9 = fVar1 - fVar9;
        }
        fVar20 = fVar1;
        if (fVar10 < fVar9) {
          fVar20 = 0.0;
        }
        *pfVar4 = fVar20;
        fVar13 = fVar13 + this->Phase;
        this->Phase = fVar13;
        fVar10 = (pfVar5[1] + param_1->FrequencyHz) * fVar21;
        if (fVar1 <= fVar13) {
          auVar14 = roundps(ZEXT416((uint)fVar9),ZEXT416((uint)fVar13),3);
          fVar13 = fVar13 - auVar14._0_4_;
          this->Phase = fVar13;
        }
        if (fVar13 < 0.0) {
          auVar14 = roundps(auVar18,ZEXT416((uint)fVar13),3);
          auVar18._4_12_ = auVar14._4_12_;
          auVar18._0_4_ = auVar14._0_4_ + fVar1;
          fVar13 = fVar13 - auVar18._0_4_;
          this->Phase = fVar13;
        }
        fVar9 = param_1->PulseWidth;
        if (fVar10 < 0.0) {
          fVar9 = fVar1 - fVar9;
        }
        fVar20 = fVar1;
        if (fVar13 < fVar9) {
          fVar20 = 0.0;
        }
        pfVar4[1] = fVar20;
        fVar10 = fVar10 + this->Phase;
        this->Phase = fVar10;
        fVar13 = (pfVar5[2] + param_1->FrequencyHz) * fVar21;
        if (fVar1 <= fVar10) {
          auVar14 = roundps(ZEXT416((uint)fVar9),ZEXT416((uint)fVar10),3);
          fVar10 = fVar10 - auVar14._0_4_;
          this->Phase = fVar10;
        }
        if (fVar10 < 0.0) {
          auVar14 = roundps(auVar18,ZEXT416((uint)fVar10),3);
          auVar18._4_12_ = auVar14._4_12_;
          auVar18._0_4_ = auVar14._0_4_ + fVar1;
          fVar10 = fVar10 - auVar18._0_4_;
          this->Phase = fVar10;
        }
        fVar9 = param_1->PulseWidth;
        if (fVar13 < 0.0) {
          fVar9 = fVar1 - fVar9;
        }
        fVar20 = fVar1;
        if (fVar10 < fVar9) {
          fVar20 = 0.0;
        }
        pfVar4[2] = fVar20;
        fVar13 = fVar13 + this->Phase;
        this->Phase = fVar13;
        fVar10 = (pfVar5[3] + param_1->FrequencyHz) * fVar21;
        if (fVar1 <= fVar13) {
          auVar14 = roundps(ZEXT416((uint)fVar9),ZEXT416((uint)fVar13),3);
          fVar13 = fVar13 - auVar14._0_4_;
          this->Phase = fVar13;
        }
        if (fVar13 < 0.0) {
          auVar14 = roundps(auVar18,ZEXT416((uint)fVar13),3);
          auVar18._4_12_ = auVar14._4_12_;
          auVar18._0_4_ = auVar14._0_4_ + fVar1;
          fVar13 = fVar13 - auVar18._0_4_;
          this->Phase = fVar13;
        }
        fVar9 = param_1->PulseWidth;
        if (fVar10 < 0.0) {
          fVar9 = fVar1 - fVar9;
        }
        auVar14 = ZEXT416((uint)fVar9);
        fVar20 = fVar1;
        if (fVar13 < fVar9) {
          fVar20 = 0.0;
        }
        pfVar4[3] = fVar20;
        pfVar5 = pfVar5 + 4;
        pfVar4 = pfVar4 + 4;
        this->Phase = fVar10 + this->Phase;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    for (; 0 < iVar7; iVar7 = iVar7 + -1) {
      fVar10 = this->Phase;
      fVar13 = (*pfVar5 + param_1->FrequencyHz) * fVar21;
      if (fVar1 <= fVar10) {
        auVar14 = roundps(auVar14,ZEXT416((uint)fVar10),3);
        fVar10 = fVar10 - auVar14._0_4_;
        this->Phase = fVar10;
      }
      if (fVar10 < 0.0) {
        auVar14 = roundps(auVar18,ZEXT416((uint)fVar10),3);
        auVar18._4_12_ = auVar14._4_12_;
        auVar18._0_4_ = auVar14._0_4_ + fVar1;
        fVar10 = fVar10 - auVar18._0_4_;
        this->Phase = fVar10;
      }
      fVar9 = param_1->PulseWidth;
      if (fVar13 < 0.0) {
        fVar9 = fVar1 - fVar9;
      }
      auVar14 = ZEXT416((uint)fVar9);
      fVar20 = fVar1;
      if (fVar10 < fVar9) {
        fVar20 = 0.0;
      }
      *pfVar4 = fVar20;
      pfVar5 = pfVar5 + 1;
      pfVar4 = pfVar4 + 1;
      this->Phase = fVar13 + this->Phase;
    }
    this->CurrentFreq = param_1->FrequencyHz;
    return;
  }
  if (((__real_322bcc77 < fVar9) && (0.0 <= fVar10)) &&
     (__real_322bcc77 < (float)((uint)(param_1->GlideEaseFactor - __real_3f800000) & uVar2))) {
    if (iVar7 < 1) {
      return;
    }
    fVar9 = this->Phase;
    fVar19 = (float)((uint)fVar20 ^ __xmm_80000000800000008000000080000000);
    auVar15 = ___xmm_7fffffff7fffffff7fffffff7fffffff;
    do {
      fVar11 = *pfVar5;
      pfVar5 = pfVar5 + 1;
      fVar12 = fVar10 + fVar11;
      if (fVar20 <= fVar10 + fVar11) {
        fVar12 = fVar20;
      }
      if (fVar12 <= fVar19) {
        fVar12 = fVar19;
      }
      if (fVar1 <= fVar9) {
        auVar14 = roundps(auVar14,ZEXT416((uint)fVar9),3);
        fVar9 = fVar9 - auVar14._0_4_;
        this->Phase = fVar9;
      }
      if (fVar9 < 0.0) {
        auVar14 = roundps(auVar15,ZEXT416((uint)fVar9),3);
        auVar15._4_12_ = auVar14._4_12_;
        auVar15._0_4_ = auVar14._0_4_ + fVar1;
        fVar9 = fVar9 - auVar15._0_4_;
        this->Phase = fVar9;
      }
      fVar10 = param_1->PulseWidth;
      if (fVar12 * fVar21 < 0.0) {
        fVar10 = fVar1 - fVar10;
      }
      auVar14 = ZEXT416((uint)fVar10);
      fVar11 = fVar13;
      if (fVar10 <= fVar9) {
        fVar11 = fVar1;
      }
      *pfVar4 = fVar11;
      pfVar4 = pfVar4 + 1;
      fVar9 = fVar12 * fVar21 + this->Phase;
      iVar7 = iVar7 + -1;
      this->Phase = fVar9;
      fVar10 = (param_1->FrequencyHz - this->CurrentFreq) * param_1->GlideEaseFactor +
               this->CurrentFreq;
      this->CurrentFreq = fVar10;
    } while (0 < iVar7);
    return;
  }
  auVar16 = ___xmm_7fffffff7fffffff7fffffff7fffffff;
  if (iVar7 < 4) {
    if (iVar7 < 1) goto LAB_14b156c1b;
    fVar10 = this->Phase;
  }
  else {
    fVar10 = this->Phase;
    fVar9 = (float)((uint)fVar20 ^ __xmm_80000000800000008000000080000000);
    uVar2 = (iVar7 - 4U >> 2) + 1;
    uVar8 = (ulonglong)uVar2;
    iVar7 = iVar7 + uVar2 * -4;
    do {
      fVar19 = *pfVar5 + param_1->FrequencyHz;
      if (fVar20 <= fVar19) {
        fVar19 = fVar20;
      }
      if (fVar19 <= fVar9) {
        fVar19 = fVar9;
      }
      if (fVar1 <= fVar10) {
        auVar14 = roundps(auVar14,ZEXT416((uint)fVar10),3);
        fVar10 = fVar10 - auVar14._0_4_;
        this->Phase = fVar10;
      }
      if (fVar10 < 0.0) {
        auVar14 = roundps(auVar16,ZEXT416((uint)fVar10),3);
        auVar16._4_12_ = auVar14._4_12_;
        auVar16._0_4_ = auVar14._0_4_ + fVar1;
        fVar10 = fVar10 - auVar16._0_4_;
        this->Phase = fVar10;
      }
      fVar11 = param_1->PulseWidth;
      if (fVar19 * fVar21 < 0.0) {
        fVar11 = fVar1 - fVar11;
      }
      fVar12 = fVar13;
      if (fVar11 <= fVar10) {
        fVar12 = fVar1;
      }
      *pfVar4 = fVar12;
      fVar19 = fVar19 * fVar21 + this->Phase;
      this->Phase = fVar19;
      fVar10 = pfVar5[1] + param_1->FrequencyHz;
      if (fVar20 <= fVar10) {
        fVar10 = fVar20;
      }
      if (fVar10 <= fVar9) {
        fVar10 = fVar9;
      }
      if (fVar1 <= fVar19) {
        auVar14 = roundps(ZEXT416((uint)fVar11),ZEXT416((uint)fVar19),3);
        fVar19 = fVar19 - auVar14._0_4_;
        this->Phase = fVar19;
      }
      if (fVar19 < 0.0) {
        auVar14 = roundps(auVar16,ZEXT416((uint)fVar19),3);
        auVar16._4_12_ = auVar14._4_12_;
        auVar16._0_4_ = auVar14._0_4_ + fVar1;
        fVar19 = fVar19 - auVar16._0_4_;
        this->Phase = fVar19;
      }
      fVar11 = param_1->PulseWidth;
      if (fVar10 * fVar21 < 0.0) {
        fVar11 = fVar1 - fVar11;
      }
      fVar12 = fVar13;
      if (fVar11 <= fVar19) {
        fVar12 = fVar1;
      }
      pfVar4[1] = fVar12;
      fVar19 = fVar10 * fVar21 + this->Phase;
      this->Phase = fVar19;
      fVar10 = pfVar5[2] + param_1->FrequencyHz;
      if (fVar20 <= fVar10) {
        fVar10 = fVar20;
      }
      if (fVar10 <= fVar9) {
        fVar10 = fVar9;
      }
      if (fVar1 <= fVar19) {
        auVar14 = roundps(ZEXT416((uint)fVar11),ZEXT416((uint)fVar19),3);
        fVar19 = fVar19 - auVar14._0_4_;
        this->Phase = fVar19;
      }
      if (fVar19 < 0.0) {
        auVar14 = roundps(auVar16,ZEXT416((uint)fVar19),3);
        auVar16._4_12_ = auVar14._4_12_;
        auVar16._0_4_ = auVar14._0_4_ + fVar1;
        fVar19 = fVar19 - auVar16._0_4_;
        this->Phase = fVar19;
      }
      fVar11 = param_1->PulseWidth;
      if (fVar10 * fVar21 < 0.0) {
        fVar11 = fVar1 - fVar11;
      }
      fVar12 = fVar13;
      if (fVar11 <= fVar19) {
        fVar12 = fVar1;
      }
      pfVar4[2] = fVar12;
      fVar19 = fVar10 * fVar21 + this->Phase;
      this->Phase = fVar19;
      fVar10 = pfVar5[3] + param_1->FrequencyHz;
      if (fVar20 <= fVar10) {
        fVar10 = fVar20;
      }
      if (fVar10 <= fVar9) {
        fVar10 = fVar9;
      }
      if (fVar1 <= fVar19) {
        auVar14 = roundps(ZEXT416((uint)fVar11),ZEXT416((uint)fVar19),3);
        fVar19 = fVar19 - auVar14._0_4_;
        this->Phase = fVar19;
      }
      if (fVar19 < 0.0) {
        auVar14 = roundps(auVar16,ZEXT416((uint)fVar19),3);
        auVar16._4_12_ = auVar14._4_12_;
        auVar16._0_4_ = auVar14._0_4_ + fVar1;
        fVar19 = fVar19 - auVar16._0_4_;
        this->Phase = fVar19;
      }
      fVar11 = param_1->PulseWidth;
      if (fVar10 * fVar21 < 0.0) {
        fVar11 = fVar1 - fVar11;
      }
      auVar14 = ZEXT416((uint)fVar11);
      fVar12 = fVar13;
      if (fVar11 <= fVar19) {
        fVar12 = fVar1;
      }
      pfVar4[3] = fVar12;
      pfVar5 = pfVar5 + 4;
      fVar10 = fVar10 * fVar21 + this->Phase;
      pfVar4 = pfVar4 + 4;
      this->Phase = fVar10;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
    if (iVar7 < 1) {
      this->CurrentFreq = param_1->FrequencyHz;
      return;
    }
  }
  lVar6 = (longlong)pfVar5 - (longlong)pfVar4;
  do {
    fVar9 = *(float *)(lVar6 + (longlong)pfVar4) + param_1->FrequencyHz;
    if (fVar20 <= fVar9) {
      fVar9 = fVar20;
    }
    if (fVar9 <= (float)((uint)fVar20 ^ uVar3)) {
      fVar9 = (float)((uint)fVar20 ^ uVar3);
    }
    if (fVar1 <= fVar10) {
      auVar14 = roundps(auVar14,ZEXT416((uint)fVar10),3);
      fVar10 = fVar10 - auVar14._0_4_;
      this->Phase = fVar10;
    }
    if (fVar10 < 0.0) {
      auVar14 = roundps(auVar16,ZEXT416((uint)fVar10),3);
      auVar16._4_12_ = auVar14._4_12_;
      auVar16._0_4_ = auVar14._0_4_ + fVar1;
      fVar10 = fVar10 - auVar16._0_4_;
      this->Phase = fVar10;
    }
    fVar19 = param_1->PulseWidth;
    if (fVar9 * fVar21 < 0.0) {
      fVar19 = fVar1 - fVar19;
    }
    auVar14 = ZEXT416((uint)fVar19);
    fVar11 = fVar13;
    if (fVar19 <= fVar10) {
      fVar11 = fVar1;
    }
    *pfVar4 = fVar11;
    fVar10 = fVar9 * fVar21 + this->Phase;
    pfVar4 = pfVar4 + 1;
    iVar7 = iVar7 + -1;
    this->Phase = fVar10;
  } while (0 < iVar7);
LAB_14b156c1b:
  this->CurrentFreq = param_1->FrequencyHz;
  return;
}

// operator() @ 14b156f90

void __thiscall
Metasound::Generators::
TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>
::operator()(TGenerateBlockFM<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>
             *this,FGeneratorArgs *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [12];
  uint uVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 in_XMM3 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [12];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar16 [16];
  
  uVar6 = __xmm_80000000800000008000000080000000;
  fVar25 = __real_bf800000;
  fVar23 = __real_3f000000;
  fVar4 = __real_3f800000;
  iVar7 = (param_1->AlignedBuffer).ArrayNum;
  pfVar9 = (param_1->AlignedBuffer).DataPtr;
  pfVar8 = (param_1->FM).DataPtr;
  auVar15 = ZEXT416((uint)__real_322bcc77);
  fVar11 = this->CurrentFreq;
  fVar17 = __real_3f800000 / param_1->SampleRate;
  fVar26 = param_1->SampleRate * __real_3f000000;
  fVar10 = (float)((uint)(param_1->FrequencyHz - fVar11) & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (param_1->BiPolar == false) {
    uVar3 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    if (((__real_322bcc77 < fVar10) && (0.0 <= fVar11)) &&
       (__real_322bcc77 <
        (float)((uint)(param_1->GlideEaseFactor - __real_3f800000) &
               __xmm_7fffffff7fffffff7fffffff7fffffff))) {
      for (; 0 < iVar7; iVar7 = iVar7 + -1) {
        fVar25 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        fVar10 = this->Phase;
        fVar11 = (fVar11 + fVar25) * fVar17;
        if (fVar4 <= fVar10) {
          auVar15 = roundps(auVar15,ZEXT416((uint)fVar10),3);
          fVar10 = fVar10 - auVar15._0_4_;
          this->Phase = fVar10;
        }
        auVar22._4_8_ = 0;
        auVar22._0_4_ = fVar10;
        if (fVar10 < 0.0) {
          auVar20._12_4_ = 0;
          auVar20._0_12_ = auVar22;
          auVar15 = roundps(in_XMM3,auVar20,3);
          in_XMM3._4_12_ = auVar15._4_12_;
          in_XMM3._0_4_ = auVar15._0_4_ + fVar4;
          auVar22._4_8_ = 0;
          auVar22._0_4_ = fVar10 - in_XMM3._0_4_;
          this->Phase = fVar10 - in_XMM3._0_4_;
        }
        auVar15._12_4_ = 0;
        auVar15._0_12_ = auVar22;
        fVar25 = FSquarePolysmoothGenerator::operator()(&this->Osc,auVar22._0_4_,fVar11,param_1);
        *pfVar9 = (fVar25 + fVar4) * fVar23;
        pfVar9 = pfVar9 + 1;
        this->Phase = fVar11 + this->Phase;
        fVar11 = (param_1->FrequencyHz - this->CurrentFreq) * param_1->GlideEaseFactor +
                 this->CurrentFreq;
        this->CurrentFreq = fVar11;
      }
      return;
    }
    for (; 0 < iVar7; iVar7 = iVar7 + -1) {
      fVar11 = *pfVar8;
      pfVar8 = pfVar8 + 1;
      fVar10 = this->Phase;
      fVar11 = (fVar11 + param_1->FrequencyHz) * fVar17;
      if (fVar4 <= fVar10) {
        auVar15 = roundps(auVar15,ZEXT416((uint)fVar10),3);
        fVar10 = fVar10 - auVar15._0_4_;
        this->Phase = fVar10;
      }
      auVar2._4_8_ = 0;
      auVar2._0_4_ = fVar10;
      if (fVar10 < 0.0) {
        auVar1._12_4_ = 0;
        auVar1._0_12_ = auVar2;
        auVar15 = roundps(ZEXT416((uint)fVar17),auVar1,3);
        fVar10 = fVar10 - (auVar15._0_4_ + fVar4);
        auVar2._4_8_ = 0;
        auVar2._0_4_ = fVar10;
        this->Phase = fVar10;
      }
      uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      fVar10 = (float)((uint)fVar11 & uVar3);
      fVar26 = 0.0;
      fVar24 = auVar2._0_4_;
      if (fVar24 <= fVar4 - fVar10) {
        if (fVar24 < fVar10) {
          fVar26 = fVar24 / fVar10;
          fVar26 = (fVar26 * fVar26 - (fVar26 + fVar26)) + fVar4;
        }
      }
      else {
        fVar26 = (fVar24 - fVar4) / fVar10;
        fVar26 = ((float)((uint)(fVar26 * fVar26) ^ uVar6) - (fVar26 + fVar26)) - fVar4;
      }
      fVar12 = param_1->PulseWidth;
      if (fVar11 <= 0.0) {
        auVar16._0_4_ = fVar24 - fVar12;
        auVar16._4_8_ = auVar2._4_8_;
        auVar16._12_4_ = 0;
        if (auVar16._0_4_ <= 0.0) {
          auVar16._0_4_ = auVar16._0_4_ + fVar4;
          auVar16._12_4_ = 0;
        }
      }
      else {
        fVar14 = fVar12 + fVar24;
        auVar16 = ZEXT416((uint)fVar14);
        if (fVar4 <= fVar14) {
          auVar16 = ZEXT416((uint)(fVar14 + fVar25));
        }
      }
      fVar14 = auVar16._0_4_;
      fVar19 = 0.0;
      if (fVar14 <= fVar4 - fVar10) {
        if (fVar14 < fVar10) {
          fVar10 = fVar14 / fVar10;
          fVar19 = (fVar10 * fVar10 - (fVar10 + fVar10)) + fVar4;
        }
      }
      else {
        fVar10 = (fVar14 - fVar4) / fVar10;
        fVar19 = ((float)((uint)(fVar10 * fVar10) ^ uVar6) - (fVar10 + fVar10)) - fVar4;
      }
      auVar15._4_12_ = auVar16._4_12_;
      auVar15._0_4_ = (fVar14 + fVar14 + fVar19) - fVar4;
      if (fVar11 <= 0.0) {
        fVar12 = fVar23 - fVar12;
      }
      else {
        fVar12 = fVar12 - fVar23;
      }
      *pfVar9 = (((fVar24 + fVar24 + fVar26) - fVar4) - auVar15._0_4_) * fVar23 + fVar12 + fVar23;
      pfVar9 = pfVar9 + 1;
      this->Phase = fVar11 + this->Phase;
      uVar3 = uVar5;
    }
  }
  else {
    if (((__real_322bcc77 < fVar10) && (0.0 <= fVar11)) &&
       (__real_322bcc77 <
        (float)((uint)(param_1->GlideEaseFactor - __real_3f800000) &
               __xmm_7fffffff7fffffff7fffffff7fffffff))) {
      if (iVar7 < 1) {
        return;
      }
      fVar23 = this->Phase;
      fVar25 = (float)((uint)fVar26 ^ __xmm_80000000800000008000000080000000);
      do {
        fVar10 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        fVar24 = fVar11 + fVar10;
        if (fVar26 <= fVar11 + fVar10) {
          fVar24 = fVar26;
        }
        if (fVar24 <= fVar25) {
          fVar24 = fVar25;
        }
        auVar20 = ZEXT416((uint)fVar23);
        if (fVar4 <= fVar23) {
          auVar15 = roundps(auVar15,ZEXT416((uint)fVar23),3);
          fVar23 = fVar23 - auVar15._0_4_;
          this->Phase = fVar23;
          auVar20 = ZEXT416((uint)fVar23);
        }
        auVar15 = auVar20;
        if (auVar15._0_4_ < 0.0) {
          auVar20 = roundps(in_XMM3,auVar15,3);
          in_XMM3._4_12_ = auVar20._4_12_;
          in_XMM3._0_4_ = auVar20._0_4_ + fVar4;
          auVar15._0_4_ = auVar15._0_4_ - in_XMM3._0_4_;
          this->Phase = auVar15._0_4_;
        }
        fVar11 = FSquarePolysmoothGenerator::operator()
                           (&this->Osc,auVar15._0_4_,fVar24 * fVar17,param_1);
        *pfVar9 = fVar11;
        iVar7 = iVar7 + -1;
        pfVar9 = pfVar9 + 1;
        fVar23 = fVar24 * fVar17 + this->Phase;
        this->Phase = fVar23;
        fVar11 = (param_1->FrequencyHz - this->CurrentFreq) * param_1->GlideEaseFactor +
                 this->CurrentFreq;
        this->CurrentFreq = fVar11;
      } while (0 < iVar7);
      return;
    }
    if (0 < iVar7) {
      fVar11 = this->Phase;
      fVar10 = (float)((uint)fVar26 ^ __xmm_80000000800000008000000080000000);
      do {
        auVar21 = ZEXT416((uint)fVar11);
        fVar24 = *pfVar8;
        pfVar8 = pfVar8 + 1;
        fVar24 = fVar24 + param_1->FrequencyHz;
        if (fVar26 <= fVar24) {
          fVar24 = fVar26;
        }
        if (fVar24 <= fVar10) {
          fVar24 = fVar10;
        }
        fVar24 = fVar24 * fVar17;
        if (fVar4 <= fVar11) {
          auVar15 = roundps(auVar15,auVar21,3);
          fVar11 = fVar11 - auVar15._0_4_;
          auVar21 = ZEXT416((uint)fVar11);
          this->Phase = fVar11;
        }
        if (auVar21._0_4_ < 0.0) {
          auVar15 = roundps(ZEXT416((uint)fVar17),auVar21,3);
          auVar21._0_4_ = auVar21._0_4_ - (auVar15._0_4_ + fVar4);
          this->Phase = auVar21._0_4_;
        }
        fVar11 = (float)((uint)fVar24 & __xmm_7fffffff7fffffff7fffffff7fffffff);
        fVar12 = 0.0;
        fVar14 = auVar21._0_4_;
        if (fVar14 <= fVar4 - fVar11) {
          if (fVar14 < fVar11) {
            fVar12 = fVar14 / fVar11;
            fVar12 = (fVar12 * fVar12 - (fVar12 + fVar12)) + fVar4;
          }
        }
        else {
          fVar12 = (fVar14 - fVar4) / fVar11;
          fVar12 = ((float)((uint)(fVar12 * fVar12) ^ uVar6) - (fVar12 + fVar12)) - fVar4;
        }
        fVar19 = param_1->PulseWidth;
        auVar22 = auVar21._4_12_;
        if (fVar24 <= 0.0) {
          fVar13 = fVar14 - fVar19;
          if (fVar13 <= 0.0) {
            fVar13 = fVar13 + fVar4;
          }
        }
        else {
          fVar13 = fVar19 + fVar14;
          auVar22 = (undefined1  [12])0x0;
          if (fVar4 <= fVar13) {
            fVar13 = fVar13 + fVar25;
            auVar22 = (undefined1  [12])0x0;
          }
        }
        fVar18 = 0.0;
        if (fVar13 <= fVar4 - fVar11) {
          if (fVar13 < fVar11) {
            fVar11 = fVar13 / fVar11;
            fVar18 = (fVar11 * fVar11 - (fVar11 + fVar11)) + fVar4;
          }
        }
        else {
          fVar11 = (fVar13 - fVar4) / fVar11;
          fVar18 = ((float)((uint)(fVar11 * fVar11) ^ uVar6) - (fVar11 + fVar11)) - fVar4;
        }
        auVar15._0_4_ = (fVar13 + fVar13 + fVar18) - fVar4;
        auVar15._4_12_ = auVar22;
        if (fVar24 <= 0.0) {
          fVar11 = (fVar23 - fVar19) + (fVar23 - fVar19);
        }
        else {
          fVar11 = ((fVar19 - fVar23) + fVar19) - fVar23;
        }
        iVar7 = iVar7 + -1;
        *pfVar9 = (((fVar14 + fVar14 + fVar12) - fVar4) - auVar15._0_4_) + fVar11;
        pfVar9 = pfVar9 + 1;
        fVar11 = fVar24 + this->Phase;
        this->Phase = fVar11;
      } while (0 < iVar7);
    }
  }
  this->CurrentFreq = param_1->FrequencyHz;
  return;
}

// operator() @ 14b157610

void __thiscall
Metasound::Generators::
TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>::
operator()(TGenerateBlockFM<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>
           *this,FGeneratorArgs *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 in_XMM2 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar13 = __real_3ea2f984;
  fVar18 = __real_42456461;
  fVar5 = __real_41800000;
  fVar4 = __real_40c90fdb;
  fVar3 = __real_40490fdb;
  fVar12 = __real_3f000000;
  fVar2 = __real_40800000;
  fVar1 = __real_3f800000;
  iVar6 = (param_1->AlignedBuffer).ArrayNum;
  pfVar8 = (param_1->AlignedBuffer).DataPtr;
  pfVar7 = (param_1->FM).DataPtr;
  auVar11 = ZEXT416((uint)__real_322bcc77);
  fVar10 = this->CurrentFreq;
  fVar16 = __real_3f800000 / param_1->SampleRate;
  fVar17 = param_1->SampleRate * __real_3f000000;
  fVar9 = (float)((uint)(param_1->FrequencyHz - fVar10) & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (param_1->BiPolar == false) {
    uVar15 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    if (((__real_322bcc77 < fVar9) && (0.0 <= fVar10)) &&
       (__real_322bcc77 <
        (float)((uint)(param_1->GlideEaseFactor - __real_3f800000) &
               __xmm_7fffffff7fffffff7fffffff7fffffff))) {
      for (; 0 < iVar6; iVar6 = iVar6 + -1) {
        fVar13 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        fVar9 = this->Phase;
        if (fVar1 <= fVar9) {
          auVar11 = roundps(auVar11,ZEXT416((uint)fVar9),3);
          fVar9 = fVar9 - auVar11._0_4_;
          this->Phase = fVar9;
        }
        if (fVar9 < 0.0) {
          auVar11 = roundps(in_XMM2,ZEXT416((uint)fVar9),3);
          fVar9 = fVar9 - (auVar11._0_4_ + fVar1);
          this->Phase = fVar9;
        }
        fVar14 = fVar9 * fVar4 - fVar3;
        fVar9 = (float)((uint)fVar14 & uVar15);
        fVar17 = fVar3 - fVar9;
        fVar9 = fVar17 * fVar9 * fVar2;
        in_XMM2 = ZEXT416((uint)fVar9);
        fVar9 = fVar18 - fVar9;
        auVar11 = ZEXT416((uint)fVar9);
        fVar9 = FMath::FastAsin((fVar17 * fVar14 * fVar5) / fVar9);
        uVar15 = __xmm_7fffffff7fffffff7fffffff7fffffff;
        *pfVar8 = fVar9 * __real_3ea2f984 + fVar12;
        pfVar8 = pfVar8 + 1;
        this->Phase = (fVar10 + fVar13) * fVar16 + this->Phase;
        fVar10 = (param_1->FrequencyHz - this->CurrentFreq) * param_1->GlideEaseFactor +
                 this->CurrentFreq;
        this->CurrentFreq = fVar10;
      }
      return;
    }
    for (; 0 < iVar6; iVar6 = iVar6 + -1) {
      fVar10 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      fVar12 = param_1->FrequencyHz;
      fVar9 = this->Phase;
      if (fVar1 <= fVar9) {
        auVar11 = roundps(auVar11,ZEXT416((uint)fVar9),3);
        fVar9 = fVar9 - auVar11._0_4_;
        this->Phase = fVar9;
      }
      if (fVar9 < 0.0) {
        auVar11 = roundps(in_XMM2,ZEXT416((uint)fVar9),3);
        fVar9 = fVar9 - (auVar11._0_4_ + fVar1);
        this->Phase = fVar9;
      }
      fVar14 = fVar9 * fVar4 - fVar3;
      fVar9 = (float)((uint)fVar14 & uVar15);
      fVar17 = fVar3 - fVar9;
      fVar9 = fVar17 * fVar9 * fVar2;
      in_XMM2 = ZEXT416((uint)fVar9);
      fVar9 = fVar18 - fVar9;
      auVar11 = ZEXT416((uint)fVar9);
      fVar9 = FMath::FastAsin((fVar17 * fVar14 * fVar5) / fVar9);
      uVar15 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      *pfVar8 = fVar9 * fVar13 + __real_3f000000;
      pfVar8 = pfVar8 + 1;
      this->Phase = (fVar10 + fVar12) * fVar16 + this->Phase;
    }
  }
  else {
    if (((__real_322bcc77 < fVar9) && (0.0 <= fVar10)) &&
       (__real_322bcc77 <
        (float)((uint)(param_1->GlideEaseFactor - __real_3f800000) &
               __xmm_7fffffff7fffffff7fffffff7fffffff))) {
      if (iVar6 < 1) {
        return;
      }
      fVar12 = this->Phase;
      fVar18 = (float)((uint)fVar17 ^ __xmm_80000000800000008000000080000000);
      uVar15 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      do {
        fVar13 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        fVar9 = fVar10 + fVar13;
        if (fVar17 <= fVar10 + fVar13) {
          fVar9 = fVar17;
        }
        if (fVar9 <= fVar18) {
          fVar9 = fVar18;
        }
        if (fVar1 <= fVar12) {
          auVar11 = roundps(auVar11,ZEXT416((uint)fVar12),3);
          fVar12 = fVar12 - auVar11._0_4_;
          this->Phase = fVar12;
        }
        if (fVar12 < 0.0) {
          auVar11 = roundps(in_XMM2,ZEXT416((uint)fVar12),3);
          fVar12 = fVar12 - (auVar11._0_4_ + fVar1);
          this->Phase = fVar12;
        }
        fVar13 = fVar12 * fVar4 - fVar3;
        fVar10 = (float)((uint)fVar13 & uVar15);
        fVar12 = fVar3 - fVar10;
        fVar10 = fVar12 * fVar10 * fVar2;
        in_XMM2 = ZEXT416((uint)fVar10);
        fVar10 = __real_42456461 - fVar10;
        auVar11 = ZEXT416((uint)fVar10);
        fVar10 = FMath::FastAsin((fVar12 * fVar13 * fVar5) / fVar10);
        uVar15 = __xmm_7fffffff7fffffff7fffffff7fffffff;
        iVar6 = iVar6 + -1;
        *pfVar8 = fVar10 * __real_3f22f984;
        pfVar8 = pfVar8 + 1;
        fVar12 = fVar9 * fVar16 + this->Phase;
        this->Phase = fVar12;
        fVar10 = (param_1->FrequencyHz - this->CurrentFreq) * param_1->GlideEaseFactor +
                 this->CurrentFreq;
        this->CurrentFreq = fVar10;
      } while (0 < iVar6);
      return;
    }
    if (0 < iVar6) {
      fVar10 = this->Phase;
      fVar12 = (float)((uint)fVar17 ^ __xmm_80000000800000008000000080000000);
      uVar15 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      do {
        fVar18 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        fVar18 = fVar18 + param_1->FrequencyHz;
        if (fVar17 <= fVar18) {
          fVar18 = fVar17;
        }
        if (fVar18 <= fVar12) {
          fVar18 = fVar12;
        }
        if (fVar1 <= fVar10) {
          auVar11 = roundps(auVar11,ZEXT416((uint)fVar10),3);
          fVar10 = fVar10 - auVar11._0_4_;
          this->Phase = fVar10;
        }
        if (fVar10 < 0.0) {
          auVar11 = roundps(in_XMM2,ZEXT416((uint)fVar10),3);
          fVar10 = fVar10 - (auVar11._0_4_ + fVar1);
          this->Phase = fVar10;
        }
        fVar9 = fVar10 * fVar4 - fVar3;
        fVar10 = (float)((uint)fVar9 & uVar15);
        fVar13 = fVar3 - fVar10;
        fVar10 = fVar13 * fVar10 * fVar2;
        in_XMM2 = ZEXT416((uint)fVar10);
        fVar10 = __real_42456461 - fVar10;
        auVar11 = ZEXT416((uint)fVar10);
        fVar10 = FMath::FastAsin((fVar13 * fVar9 * fVar5) / fVar10);
        uVar15 = __xmm_7fffffff7fffffff7fffffff7fffffff;
        iVar6 = iVar6 + -1;
        *pfVar8 = fVar10 * __real_3f22f984;
        pfVar8 = pfVar8 + 1;
        fVar10 = fVar18 * fVar16 + this->Phase;
        this->Phase = fVar10;
      } while (0 < iVar6);
    }
  }
  this->CurrentFreq = param_1->FrequencyHz;
  return;
}

