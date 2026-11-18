// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundStandardNodes
// Functions: 8

// operator() @ 14b150670

void __thiscall
Metasound::Generators::
TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>::
operator()(TGenerateBlock<Metasound::Generators::FBhaskaraGenerator,Metasound::Generators::FWrapPhase>
           *this,FGeneratorArgs *param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  ulonglong uVar8;
  float *pfVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  fVar6 = __real_42456461;
  fVar13 = __real_41800000;
  fVar5 = __real_40c90fdb;
  fVar4 = __real_40490fdb;
  fVar16 = __real_3f000000;
  uVar3 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar12 = __real_41000000;
  fVar2 = __real_40800000;
  fVar1 = __real_3f800000;
  fVar17 = param_1->FrequencyHz;
  auVar14 = ZEXT416((uint)fVar17);
  fVar18 = this->CurrentFreq;
  iVar10 = (param_1->AlignedBuffer).ArrayNum;
  pfVar9 = (param_1->AlignedBuffer).DataPtr;
  auVar15 = ZEXT416((uint)__real_322bcc77);
  fVar19 = __real_3f800000 / param_1->SampleRate;
  fVar11 = (float)((uint)(fVar17 - fVar18) & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (param_1->BiPolar == false) {
    if (((fVar11 <= __real_322bcc77) || (fVar18 < 0.0)) ||
       ((float)((uint)(param_1->GlideEaseFactor - __real_3f800000) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
      this->CurrentFreq = fVar17;
      fVar19 = fVar19 * param_1->FrequencyHz;
      if (3 < iVar10) {
        uVar7 = (iVar10 - 4U >> 2) + 1;
        uVar8 = (ulonglong)uVar7;
        iVar10 = iVar10 + uVar7 * -4;
        do {
          fVar17 = this->Phase;
          if (fVar1 <= fVar17) {
            auVar14 = roundps(auVar14,ZEXT416((uint)fVar17),3);
            fVar17 = fVar17 - auVar14._0_4_;
            this->Phase = fVar17;
          }
          if (fVar17 < 0.0) {
            auVar14 = roundps(auVar15,ZEXT416((uint)fVar17),3);
            fVar17 = fVar17 - (auVar14._0_4_ + fVar1);
            this->Phase = fVar17;
          }
          fVar17 = fVar17 * fVar5;
          if (0.0 <= fVar17) {
            fVar17 = fVar17 - fVar4;
          }
          else {
            fVar17 = fVar17 + fVar4;
          }
          fVar18 = fVar4 - (float)((uint)fVar17 & uVar3);
          fVar17 = (fVar12 / (fVar6 - fVar18 * (float)((uint)fVar17 & uVar3) * fVar2)) *
                   fVar18 * fVar17 + fVar16;
          *pfVar9 = fVar17;
          fVar18 = fVar19 + this->Phase;
          this->Phase = fVar18;
          if (fVar1 <= fVar18) {
            auVar14 = roundps(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18),3);
            fVar18 = fVar18 - auVar14._0_4_;
            this->Phase = fVar18;
          }
          if (fVar18 < 0.0) {
            auVar14 = roundps(ZEXT416((uint)fVar17),ZEXT416((uint)fVar18),3);
            fVar18 = fVar18 - (auVar14._0_4_ + fVar1);
            this->Phase = fVar18;
          }
          fVar18 = fVar18 * fVar5;
          if (0.0 <= fVar18) {
            fVar18 = fVar18 - fVar4;
          }
          else {
            fVar18 = fVar18 + fVar4;
          }
          fVar17 = fVar4 - (float)((uint)fVar18 & uVar3);
          fVar17 = (fVar12 / (fVar6 - fVar17 * (float)((uint)fVar18 & uVar3) * fVar2)) *
                   fVar17 * fVar18 + fVar16;
          pfVar9[1] = fVar17;
          fVar18 = fVar19 + this->Phase;
          this->Phase = fVar18;
          if (fVar1 <= fVar18) {
            auVar14 = roundps(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18),3);
            fVar18 = fVar18 - auVar14._0_4_;
            this->Phase = fVar18;
          }
          if (fVar18 < 0.0) {
            auVar14 = roundps(ZEXT416((uint)fVar17),ZEXT416((uint)fVar18),3);
            fVar18 = fVar18 - (auVar14._0_4_ + fVar1);
            this->Phase = fVar18;
          }
          fVar18 = fVar18 * fVar5;
          if (0.0 <= fVar18) {
            fVar18 = fVar18 - fVar4;
          }
          else {
            fVar18 = fVar18 + fVar4;
          }
          fVar17 = fVar4 - (float)((uint)fVar18 & uVar3);
          fVar17 = (fVar12 / (fVar6 - fVar17 * (float)((uint)fVar18 & uVar3) * fVar2)) *
                   fVar17 * fVar18 + fVar16;
          pfVar9[2] = fVar17;
          fVar18 = fVar19 + this->Phase;
          this->Phase = fVar18;
          if (fVar1 <= fVar18) {
            auVar14 = roundps(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18),3);
            fVar18 = fVar18 - auVar14._0_4_;
            this->Phase = fVar18;
          }
          if (fVar18 < 0.0) {
            auVar14 = roundps(ZEXT416((uint)fVar17),ZEXT416((uint)fVar18),3);
            fVar18 = fVar18 - (auVar14._0_4_ + fVar1);
            this->Phase = fVar18;
          }
          fVar18 = fVar18 * fVar5;
          if (0.0 <= fVar18) {
            fVar18 = fVar18 - fVar4;
          }
          else {
            fVar18 = fVar18 + fVar4;
          }
          fVar13 = fVar4 - (float)((uint)fVar18 & uVar3);
          fVar17 = fVar13 * (float)((uint)fVar18 & uVar3) * fVar2;
          auVar14 = ZEXT416((uint)fVar17);
          fVar17 = (fVar12 / (fVar6 - fVar17)) * fVar13 * fVar18 + fVar16;
          auVar15 = ZEXT416((uint)fVar17);
          pfVar9[3] = fVar17;
          pfVar9 = pfVar9 + 4;
          this->Phase = fVar19 + this->Phase;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      for (; 0 < iVar10; iVar10 = iVar10 + -1) {
        fVar17 = this->Phase;
        if (fVar1 <= fVar17) {
          auVar14 = roundps(auVar14,ZEXT416((uint)fVar17),3);
          fVar17 = fVar17 - auVar14._0_4_;
          this->Phase = fVar17;
        }
        if (fVar17 < 0.0) {
          auVar14 = roundps(auVar15,ZEXT416((uint)fVar17),3);
          fVar17 = fVar17 - (auVar14._0_4_ + fVar1);
          this->Phase = fVar17;
        }
        fVar17 = fVar17 * fVar5;
        if (0.0 <= fVar17) {
          fVar17 = fVar17 - fVar4;
        }
        else {
          fVar17 = fVar17 + fVar4;
        }
        fVar13 = fVar4 - (float)((uint)fVar17 & uVar3);
        fVar18 = fVar13 * (float)((uint)fVar17 & uVar3) * fVar2;
        auVar14 = ZEXT416((uint)fVar18);
        fVar17 = (fVar12 / (fVar6 - fVar18)) * fVar13 * fVar17 + fVar16;
        auVar15 = ZEXT416((uint)fVar17);
        *pfVar9 = fVar17;
        pfVar9 = pfVar9 + 1;
        this->Phase = fVar19 + this->Phase;
      }
    }
    else {
      for (; 0 < iVar10; iVar10 = iVar10 + -1) {
        fVar17 = this->Phase;
        if (fVar1 <= fVar17) {
          auVar14 = roundps(auVar14,ZEXT416((uint)fVar17),3);
          fVar17 = fVar17 - auVar14._0_4_;
          this->Phase = fVar17;
        }
        if (fVar17 < 0.0) {
          auVar14 = roundps(auVar15,ZEXT416((uint)fVar17),3);
          fVar17 = fVar17 - (auVar14._0_4_ + fVar1);
          this->Phase = fVar17;
        }
        fVar17 = fVar17 * fVar5;
        if (0.0 <= fVar17) {
          fVar17 = fVar17 - fVar4;
        }
        else {
          fVar17 = fVar17 + fVar4;
        }
        fVar11 = fVar4 - (float)((uint)fVar17 & uVar3);
        fVar13 = fVar11 * (float)((uint)fVar17 & uVar3) * fVar2;
        auVar14 = ZEXT416((uint)fVar13);
        fVar17 = (fVar12 / (fVar6 - fVar13)) * fVar11 * fVar17 + fVar16;
        auVar15 = ZEXT416((uint)fVar17);
        *pfVar9 = fVar17;
        pfVar9 = pfVar9 + 1;
        this->Phase = fVar18 * fVar19 + this->Phase;
        fVar18 = (param_1->FrequencyHz - this->CurrentFreq) * param_1->GlideEaseFactor +
                 this->CurrentFreq;
        this->CurrentFreq = fVar18;
      }
    }
  }
  else if (((fVar11 <= __real_322bcc77) || (fVar18 < 0.0)) ||
          ((float)((uint)(param_1->GlideEaseFactor - __real_3f800000) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
    this->CurrentFreq = fVar17;
    fVar19 = fVar19 * param_1->FrequencyHz;
    if (3 < iVar10) {
      uVar7 = (iVar10 - 4U >> 2) + 1;
      uVar8 = (ulonglong)uVar7;
      iVar10 = iVar10 + uVar7 * -4;
      do {
        fVar17 = this->Phase;
        if (fVar1 <= fVar17) {
          auVar14 = roundps(auVar14,ZEXT416((uint)fVar17),3);
          fVar17 = fVar17 - auVar14._0_4_;
          this->Phase = fVar17;
        }
        if (fVar17 < 0.0) {
          auVar14 = roundps(auVar15,ZEXT416((uint)fVar17),3);
          fVar17 = fVar17 - (auVar14._0_4_ + fVar1);
          this->Phase = fVar17;
        }
        fVar17 = fVar17 * fVar5;
        if (0.0 <= fVar17) {
          fVar17 = fVar17 - fVar4;
        }
        else {
          fVar17 = fVar17 + fVar4;
        }
        fVar18 = fVar4 - (float)((uint)fVar17 & uVar3);
        fVar17 = (fVar13 / (fVar6 - fVar18 * (float)((uint)fVar17 & uVar3) * fVar2)) *
                 fVar18 * fVar17;
        *pfVar9 = fVar17;
        fVar18 = fVar19 + this->Phase;
        this->Phase = fVar18;
        if (fVar1 <= fVar18) {
          auVar14 = roundps(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18),3);
          fVar18 = fVar18 - auVar14._0_4_;
          this->Phase = fVar18;
        }
        if (fVar18 < 0.0) {
          auVar14 = roundps(ZEXT416((uint)fVar17),ZEXT416((uint)fVar18),3);
          fVar18 = fVar18 - (auVar14._0_4_ + fVar1);
          this->Phase = fVar18;
        }
        fVar18 = fVar18 * fVar5;
        if (0.0 <= fVar18) {
          fVar18 = fVar18 - fVar4;
        }
        else {
          fVar18 = fVar18 + fVar4;
        }
        fVar17 = fVar4 - (float)((uint)fVar18 & uVar3);
        fVar17 = (fVar13 / (fVar6 - fVar17 * (float)((uint)fVar18 & uVar3) * fVar2)) *
                 fVar17 * fVar18;
        pfVar9[1] = fVar17;
        fVar18 = fVar19 + this->Phase;
        this->Phase = fVar18;
        if (fVar1 <= fVar18) {
          auVar14 = roundps(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18),3);
          fVar18 = fVar18 - auVar14._0_4_;
          this->Phase = fVar18;
        }
        if (fVar18 < 0.0) {
          auVar14 = roundps(ZEXT416((uint)fVar17),ZEXT416((uint)fVar18),3);
          fVar18 = fVar18 - (auVar14._0_4_ + fVar1);
          this->Phase = fVar18;
        }
        fVar18 = fVar18 * fVar5;
        if (0.0 <= fVar18) {
          fVar18 = fVar18 - fVar4;
        }
        else {
          fVar18 = fVar18 + fVar4;
        }
        fVar17 = fVar4 - (float)((uint)fVar18 & uVar3);
        fVar17 = (fVar13 / (fVar6 - fVar17 * (float)((uint)fVar18 & uVar3) * fVar2)) *
                 fVar17 * fVar18;
        pfVar9[2] = fVar17;
        fVar18 = fVar19 + this->Phase;
        this->Phase = fVar18;
        if (fVar1 <= fVar18) {
          auVar14 = roundps(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18),3);
          fVar18 = fVar18 - auVar14._0_4_;
          this->Phase = fVar18;
        }
        if (fVar18 < 0.0) {
          auVar14 = roundps(ZEXT416((uint)fVar17),ZEXT416((uint)fVar18),3);
          fVar18 = fVar18 - (auVar14._0_4_ + fVar1);
          this->Phase = fVar18;
        }
        fVar18 = fVar18 * fVar5;
        if (0.0 <= fVar18) {
          fVar18 = fVar18 - fVar4;
        }
        else {
          fVar18 = fVar18 + fVar4;
        }
        fVar12 = fVar4 - (float)((uint)fVar18 & uVar3);
        fVar17 = fVar12 * (float)((uint)fVar18 & uVar3) * fVar2;
        auVar14 = ZEXT416((uint)fVar17);
        fVar17 = (fVar13 / (fVar6 - fVar17)) * fVar12 * fVar18;
        auVar15 = ZEXT416((uint)fVar17);
        pfVar9[3] = fVar17;
        pfVar9 = pfVar9 + 4;
        this->Phase = fVar19 + this->Phase;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    for (; 0 < iVar10; iVar10 = iVar10 + -1) {
      fVar17 = this->Phase;
      if (fVar1 <= fVar17) {
        auVar14 = roundps(auVar14,ZEXT416((uint)fVar17),3);
        fVar17 = fVar17 - auVar14._0_4_;
        this->Phase = fVar17;
      }
      if (fVar17 < 0.0) {
        auVar14 = roundps(auVar15,ZEXT416((uint)fVar17),3);
        fVar17 = fVar17 - (auVar14._0_4_ + fVar1);
        this->Phase = fVar17;
      }
      fVar17 = fVar17 * fVar5;
      if (0.0 <= fVar17) {
        fVar17 = fVar17 - fVar4;
      }
      else {
        fVar17 = fVar17 + fVar4;
      }
      fVar12 = fVar4 - (float)((uint)fVar17 & uVar3);
      fVar18 = fVar12 * (float)((uint)fVar17 & uVar3) * fVar2;
      auVar14 = ZEXT416((uint)fVar18);
      fVar17 = (fVar13 / (fVar6 - fVar18)) * fVar12 * fVar17;
      auVar15 = ZEXT416((uint)fVar17);
      *pfVar9 = fVar17;
      pfVar9 = pfVar9 + 1;
      this->Phase = fVar19 + this->Phase;
    }
  }
  else {
    for (; 0 < iVar10; iVar10 = iVar10 + -1) {
      fVar17 = this->Phase;
      if (fVar1 <= fVar17) {
        auVar14 = roundps(auVar14,ZEXT416((uint)fVar17),3);
        fVar17 = fVar17 - auVar14._0_4_;
        this->Phase = fVar17;
      }
      if (fVar17 < 0.0) {
        auVar14 = roundps(auVar15,ZEXT416((uint)fVar17),3);
        fVar17 = fVar17 - (auVar14._0_4_ + fVar1);
        this->Phase = fVar17;
      }
      fVar17 = fVar17 * fVar5;
      if (0.0 <= fVar17) {
        fVar17 = fVar17 - fVar4;
      }
      else {
        fVar17 = fVar17 + fVar4;
      }
      fVar16 = fVar4 - (float)((uint)fVar17 & uVar3);
      fVar12 = fVar16 * (float)((uint)fVar17 & uVar3) * fVar2;
      auVar14 = ZEXT416((uint)fVar12);
      fVar17 = (fVar13 / (fVar6 - fVar12)) * fVar16 * fVar17;
      auVar15 = ZEXT416((uint)fVar17);
      *pfVar9 = fVar17;
      pfVar9 = pfVar9 + 1;
      this->Phase = fVar18 * fVar19 + this->Phase;
      fVar18 = (param_1->FrequencyHz - this->CurrentFreq) * param_1->GlideEaseFactor +
               this->CurrentFreq;
      this->CurrentFreq = fVar18;
    }
  }
  return;
}

// operator() @ 14b151050

void __thiscall
Metasound::Generators::
TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>::operator()
          (TGenerateBlock<Metasound::Generators::FSawGenerator,Metasound::Generators::FWrapPhase>
           *this,FGeneratorArgs *param_1)

{
  float fVar1;
  uint uVar2;
  ulonglong uVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar1 = __real_3f800000;
  fVar9 = param_1->FrequencyHz;
  auVar7 = ZEXT416((uint)fVar9);
  fVar10 = this->CurrentFreq;
  iVar5 = (param_1->AlignedBuffer).ArrayNum;
  pfVar4 = (param_1->AlignedBuffer).DataPtr;
  auVar8 = ZEXT416((uint)__real_322bcc77);
  fVar6 = (float)((uint)(fVar9 - fVar10) & __xmm_7fffffff7fffffff7fffffff7fffffff);
  fVar11 = __real_3f800000 / param_1->SampleRate;
  if (param_1->BiPolar == false) {
    if (((fVar6 <= __real_322bcc77) || (fVar10 < 0.0)) ||
       ((float)((uint)(param_1->GlideEaseFactor - __real_3f800000) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
      this->CurrentFreq = fVar9;
      fVar11 = fVar11 * param_1->FrequencyHz;
      if (3 < iVar5) {
        uVar2 = (iVar5 - 4U >> 2) + 1;
        uVar3 = (ulonglong)uVar2;
        iVar5 = iVar5 + uVar2 * -4;
        do {
          fVar9 = this->Phase;
          if (fVar1 <= fVar9) {
            auVar7 = roundps(auVar7,ZEXT416((uint)fVar9),3);
            fVar9 = fVar9 - auVar7._0_4_;
            this->Phase = fVar9;
          }
          if (fVar9 < 0.0) {
            auVar8 = roundps(auVar8,ZEXT416((uint)fVar9),3);
            auVar8._0_4_ = auVar8._0_4_ + fVar1;
            fVar9 = fVar9 - auVar8._0_4_;
            this->Phase = fVar9;
          }
          *pfVar4 = fVar9;
          fVar9 = fVar11 + this->Phase;
          this->Phase = fVar9;
          if (fVar1 <= fVar9) {
            auVar7 = roundps(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9),3);
            fVar9 = fVar9 - auVar7._0_4_;
            this->Phase = fVar9;
          }
          if (fVar9 < 0.0) {
            auVar7 = ZEXT416((uint)fVar9);
            auVar8 = roundps(auVar8,auVar7,3);
            auVar8._0_4_ = auVar8._0_4_ + fVar1;
            fVar9 = fVar9 - auVar8._0_4_;
            this->Phase = fVar9;
          }
          pfVar4[1] = fVar9;
          fVar9 = fVar11 + this->Phase;
          this->Phase = fVar9;
          if (fVar1 <= fVar9) {
            auVar7 = roundps(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9),3);
            fVar9 = fVar9 - auVar7._0_4_;
            this->Phase = fVar9;
          }
          if (fVar9 < 0.0) {
            auVar7 = ZEXT416((uint)fVar9);
            auVar8 = roundps(auVar8,auVar7,3);
            auVar8._0_4_ = auVar8._0_4_ + fVar1;
            fVar9 = fVar9 - auVar8._0_4_;
            this->Phase = fVar9;
          }
          pfVar4[2] = fVar9;
          fVar9 = fVar11 + this->Phase;
          this->Phase = fVar9;
          if (fVar1 <= fVar9) {
            auVar7 = roundps(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9),3);
            fVar9 = fVar9 - auVar7._0_4_;
            this->Phase = fVar9;
          }
          if (fVar9 < 0.0) {
            auVar7 = ZEXT416((uint)fVar9);
            auVar8 = roundps(auVar8,auVar7,3);
            auVar8._0_4_ = auVar8._0_4_ + fVar1;
            fVar9 = fVar9 - auVar8._0_4_;
            this->Phase = fVar9;
          }
          pfVar4[3] = fVar9;
          pfVar4 = pfVar4 + 4;
          this->Phase = fVar11 + this->Phase;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      for (; 0 < iVar5; iVar5 = iVar5 + -1) {
        fVar9 = this->Phase;
        if (fVar1 <= fVar9) {
          auVar7 = roundps(auVar7,ZEXT416((uint)fVar9),3);
          fVar9 = fVar9 - auVar7._0_4_;
          this->Phase = fVar9;
        }
        if (fVar9 < 0.0) {
          auVar8 = roundps(auVar8,ZEXT416((uint)fVar9),3);
          auVar8._0_4_ = auVar8._0_4_ + fVar1;
          fVar9 = fVar9 - auVar8._0_4_;
          this->Phase = fVar9;
        }
        *pfVar4 = fVar9;
        pfVar4 = pfVar4 + 1;
        this->Phase = fVar11 + this->Phase;
      }
    }
    else if (0 < iVar5) {
      do {
        fVar9 = this->Phase;
        if (fVar1 <= fVar9) {
          auVar7 = roundps(auVar7,ZEXT416((uint)fVar9),3);
          fVar9 = fVar9 - auVar7._0_4_;
          this->Phase = fVar9;
        }
        if (fVar9 < 0.0) {
          auVar8 = roundps(auVar8,ZEXT416((uint)fVar9),3);
          auVar8._0_4_ = auVar8._0_4_ + fVar1;
          fVar9 = fVar9 - auVar8._0_4_;
          this->Phase = fVar9;
        }
        *pfVar4 = fVar9;
        iVar5 = iVar5 + -1;
        pfVar4 = pfVar4 + 1;
        this->Phase = fVar10 * fVar11 + this->Phase;
        fVar10 = (param_1->FrequencyHz - this->CurrentFreq) * param_1->GlideEaseFactor +
                 this->CurrentFreq;
        this->CurrentFreq = fVar10;
      } while (0 < iVar5);
      return;
    }
  }
  else {
    if (((fVar6 <= __real_322bcc77) || (fVar10 < 0.0)) ||
       ((float)((uint)(param_1->GlideEaseFactor - __real_3f800000) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
      this->CurrentFreq = fVar9;
      fVar11 = fVar11 * param_1->FrequencyHz;
      if (iVar5 < 4) {
        if (iVar5 < 1) {
          return;
        }
      }
      else {
        uVar2 = (iVar5 - 4U >> 2) + 1;
        uVar3 = (ulonglong)uVar2;
        iVar5 = iVar5 + uVar2 * -4;
        do {
          fVar9 = this->Phase;
          if (fVar1 <= fVar9) {
            auVar7 = roundps(auVar7,ZEXT416((uint)fVar9),3);
            fVar9 = fVar9 - auVar7._0_4_;
            this->Phase = fVar9;
          }
          if (fVar9 < 0.0) {
            auVar8 = roundps(auVar8,ZEXT416((uint)fVar9),3);
            auVar8._0_4_ = auVar8._0_4_ + fVar1;
            fVar9 = fVar9 - auVar8._0_4_;
            this->Phase = fVar9;
          }
          *pfVar4 = (fVar9 + fVar9) - fVar1;
          fVar9 = fVar11 + this->Phase;
          this->Phase = fVar9;
          if (fVar1 <= fVar9) {
            auVar7 = roundps(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9),3);
            fVar9 = fVar9 - auVar7._0_4_;
            this->Phase = fVar9;
          }
          if (fVar9 < 0.0) {
            auVar7 = ZEXT416((uint)fVar9);
            auVar8 = roundps(auVar8,auVar7,3);
            auVar8._0_4_ = auVar8._0_4_ + fVar1;
            fVar9 = fVar9 - auVar8._0_4_;
            this->Phase = fVar9;
          }
          pfVar4[1] = (fVar9 + fVar9) - fVar1;
          fVar9 = fVar11 + this->Phase;
          this->Phase = fVar9;
          if (fVar1 <= fVar9) {
            auVar7 = roundps(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9),3);
            fVar9 = fVar9 - auVar7._0_4_;
            this->Phase = fVar9;
          }
          if (fVar9 < 0.0) {
            auVar7 = ZEXT416((uint)fVar9);
            auVar8 = roundps(auVar8,auVar7,3);
            auVar8._0_4_ = auVar8._0_4_ + fVar1;
            fVar9 = fVar9 - auVar8._0_4_;
            this->Phase = fVar9;
          }
          pfVar4[2] = (fVar9 + fVar9) - fVar1;
          fVar9 = fVar11 + this->Phase;
          this->Phase = fVar9;
          if (fVar1 <= fVar9) {
            auVar7 = roundps(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9),3);
            fVar9 = fVar9 - auVar7._0_4_;
            this->Phase = fVar9;
          }
          if (fVar9 < 0.0) {
            auVar7 = ZEXT416((uint)fVar9);
            auVar8 = roundps(auVar8,auVar7,3);
            auVar8._0_4_ = auVar8._0_4_ + fVar1;
            fVar9 = fVar9 - auVar8._0_4_;
            this->Phase = fVar9;
          }
          pfVar4[3] = (fVar9 + fVar9) - fVar1;
          pfVar4 = pfVar4 + 4;
          this->Phase = fVar11 + this->Phase;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
        if (iVar5 < 1) {
          return;
        }
      }
      do {
        fVar9 = this->Phase;
        if (fVar1 <= fVar9) {
          auVar7 = roundps(auVar7,ZEXT416((uint)fVar9),3);
          fVar9 = fVar9 - auVar7._0_4_;
          this->Phase = fVar9;
        }
        if (fVar9 < 0.0) {
          auVar8 = roundps(auVar8,ZEXT416((uint)fVar9),3);
          auVar8._0_4_ = auVar8._0_4_ + fVar1;
          fVar9 = fVar9 - auVar8._0_4_;
          this->Phase = fVar9;
        }
        iVar5 = iVar5 + -1;
        *pfVar4 = (fVar9 + fVar9) - fVar1;
        pfVar4 = pfVar4 + 1;
        this->Phase = fVar11 + this->Phase;
      } while (0 < iVar5);
      return;
    }
    if (0 < iVar5) {
      do {
        fVar9 = this->Phase;
        if (fVar1 <= fVar9) {
          auVar7 = roundps(auVar7,ZEXT416((uint)fVar9),3);
          fVar9 = fVar9 - auVar7._0_4_;
          this->Phase = fVar9;
        }
        if (fVar9 < 0.0) {
          auVar8 = roundps(auVar8,ZEXT416((uint)fVar9),3);
          auVar8._0_4_ = auVar8._0_4_ + fVar1;
          fVar9 = fVar9 - auVar8._0_4_;
          this->Phase = fVar9;
        }
        iVar5 = iVar5 + -1;
        *pfVar4 = (fVar9 + fVar9) - fVar1;
        pfVar4 = pfVar4 + 1;
        this->Phase = fVar10 * fVar11 + this->Phase;
        fVar10 = (param_1->FrequencyHz - this->CurrentFreq) * param_1->GlideEaseFactor +
                 this->CurrentFreq;
        this->CurrentFreq = fVar10;
      } while (0 < iVar5);
      return;
    }
  }
  return;
}

// operator() @ 14b1515c0

void __thiscall
Metasound::Generators::
TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>::
operator()(TGenerateBlock<Metasound::Generators::FSawPolySmoothGenerator,Metasound::Generators::FWrapPhase>
           *this,FGeneratorArgs *param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  ulonglong uVar9;
  float *pfVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  
  fVar24 = __real_40100000;
  fVar16 = __real_3f8d69ce;
  fVar15 = __real_3f0d69ce;
  fVar7 = __real_41d80000;
  fVar14 = __real_41100000;
  fVar6 = __real_c0400000;
  fVar5 = __real_3fc00000;
  uVar4 = __xmm_80000000800000008000000080000000;
  uVar3 = __real_bf800000;
  fVar13 = __real_3f000000;
  uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar2 = __real_40400000;
  fVar1 = __real_3f800000;
  fVar27 = param_1->FrequencyHz;
  auVar25 = ZEXT416((uint)fVar27);
  fVar26 = __real_3f800000 / param_1->SampleRate;
  iVar11 = (param_1->AlignedBuffer).ArrayNum;
  pfVar10 = (param_1->AlignedBuffer).DataPtr;
  fVar28 = this->CurrentFreq;
  auVar17 = ZEXT416((uint)__real_322bcc77);
  fVar12 = (float)((uint)(fVar27 - fVar28) & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (param_1->BiPolar == false) {
    if (((fVar12 <= __real_322bcc77) || (fVar28 < 0.0)) ||
       ((float)((uint)(param_1->GlideEaseFactor - __real_3f800000) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
      this->CurrentFreq = fVar27;
      fVar26 = fVar26 * param_1->FrequencyHz;
      if (3 < iVar11) {
        fVar27 = (float)((uint)fVar26 & uVar8);
        uVar8 = (iVar11 - 4U >> 2) + 1;
        uVar9 = (ulonglong)uVar8;
        fVar28 = fVar1 - fVar27;
        iVar11 = iVar11 + uVar8 * -4;
        do {
          fVar14 = this->Phase;
          if (fVar1 <= fVar14) {
            auVar17 = roundps(auVar17,ZEXT416((uint)fVar14),3);
            fVar14 = fVar14 - auVar17._0_4_;
            this->Phase = fVar14;
          }
          if (fVar14 < 0.0) {
            auVar17 = roundps(auVar25,ZEXT416((uint)fVar14),3);
            fVar14 = fVar14 - (auVar17._0_4_ + fVar1);
            this->Phase = fVar14;
          }
          fVar16 = (fVar14 + fVar14) - fVar1;
          fVar24 = fVar16 * fVar5;
          if (fVar6 <= fVar24) {
            if (fVar24 <= fVar2) {
              fVar16 = fVar16 * fVar16 * __real_40100000;
              auVar17 = ZEXT416((uint)(((fVar16 + fVar7) * fVar24) /
                                      (fVar16 * __real_41100000 + fVar7)));
            }
            else {
              auVar17 = ZEXT416((uint)fVar1);
            }
          }
          else {
            auVar17 = ZEXT416(uVar3);
          }
          fVar16 = 0.0;
          if (fVar14 <= fVar28) {
            if (fVar14 < fVar27) {
              fVar14 = fVar14 / fVar27;
              fVar16 = (fVar14 * fVar14 - (fVar14 + fVar14)) + fVar1;
            }
          }
          else {
            fVar14 = (fVar14 - fVar1) / fVar27;
            fVar16 = ((float)((uint)(fVar14 * fVar14) ^ uVar4) - (fVar14 + fVar14)) - fVar1;
          }
          auVar21._4_12_ = auVar17._4_12_;
          auVar21._0_4_ = auVar17._0_4_ * fVar15 + fVar16 * fVar13 + fVar13;
          *pfVar10 = auVar21._0_4_;
          fVar14 = fVar26 + this->Phase;
          this->Phase = fVar14;
          if (fVar1 <= fVar14) {
            auVar17 = roundps(auVar21,ZEXT416((uint)fVar14),3);
            fVar14 = fVar14 - auVar17._0_4_;
            this->Phase = fVar14;
          }
          if (fVar14 < 0.0) {
            auVar17 = roundps(ZEXT416((uint)fVar24),ZEXT416((uint)fVar14),3);
            fVar14 = fVar14 - (auVar17._0_4_ + fVar1);
            this->Phase = fVar14;
          }
          fVar16 = (fVar14 + fVar14) - fVar1;
          fVar24 = fVar16 * fVar5;
          if (fVar6 <= fVar24) {
            if (fVar24 <= fVar2) {
              fVar16 = fVar16 * fVar16 * __real_40100000;
              auVar17 = ZEXT416((uint)(((fVar16 + fVar7) * fVar24) /
                                      (fVar16 * __real_41100000 + fVar7)));
            }
            else {
              auVar17 = ZEXT416((uint)fVar1);
            }
          }
          else {
            auVar17 = ZEXT416(uVar3);
          }
          fVar16 = 0.0;
          if (fVar14 <= fVar28) {
            if (fVar14 < fVar27) {
              fVar14 = fVar14 / fVar27;
              fVar16 = (fVar14 * fVar14 - (fVar14 + fVar14)) + fVar1;
            }
          }
          else {
            fVar14 = (fVar14 - fVar1) / fVar27;
            fVar16 = ((float)((uint)(fVar14 * fVar14) ^ uVar4) - (fVar14 + fVar14)) - fVar1;
          }
          auVar22._4_12_ = auVar17._4_12_;
          auVar22._0_4_ = auVar17._0_4_ * fVar15 + fVar16 * fVar13 + fVar13;
          pfVar10[1] = auVar22._0_4_;
          fVar14 = fVar26 + this->Phase;
          this->Phase = fVar14;
          if (fVar1 <= fVar14) {
            auVar17 = roundps(auVar22,ZEXT416((uint)fVar14),3);
            fVar14 = fVar14 - auVar17._0_4_;
            this->Phase = fVar14;
          }
          if (fVar14 < 0.0) {
            auVar17 = roundps(ZEXT416((uint)fVar24),ZEXT416((uint)fVar14),3);
            fVar14 = fVar14 - (auVar17._0_4_ + fVar1);
            this->Phase = fVar14;
          }
          fVar16 = (fVar14 + fVar14) - fVar1;
          fVar24 = fVar16 * fVar5;
          if (fVar6 <= fVar24) {
            if (fVar24 <= fVar2) {
              fVar16 = fVar16 * fVar16 * __real_40100000;
              auVar17 = ZEXT416((uint)(((fVar16 + fVar7) * fVar24) /
                                      (fVar16 * __real_41100000 + fVar7)));
            }
            else {
              auVar17 = ZEXT416((uint)fVar1);
            }
          }
          else {
            auVar17 = ZEXT416(uVar3);
          }
          fVar16 = 0.0;
          if (fVar14 <= fVar28) {
            if (fVar14 < fVar27) {
              fVar14 = fVar14 / fVar27;
              fVar16 = (fVar14 * fVar14 - (fVar14 + fVar14)) + fVar1;
            }
          }
          else {
            fVar14 = (fVar14 - fVar1) / fVar27;
            fVar16 = ((float)((uint)(fVar14 * fVar14) ^ uVar4) - (fVar14 + fVar14)) - fVar1;
          }
          auVar23._4_12_ = auVar17._4_12_;
          auVar23._0_4_ = auVar17._0_4_ * fVar15 + fVar16 * fVar13 + fVar13;
          pfVar10[2] = auVar23._0_4_;
          fVar14 = fVar26 + this->Phase;
          this->Phase = fVar14;
          if (fVar1 <= fVar14) {
            auVar17 = roundps(auVar23,ZEXT416((uint)fVar14),3);
            fVar14 = fVar14 - auVar17._0_4_;
            this->Phase = fVar14;
          }
          if (fVar14 < 0.0) {
            auVar17 = roundps(ZEXT416((uint)fVar24),ZEXT416((uint)fVar14),3);
            fVar14 = fVar14 - (auVar17._0_4_ + fVar1);
            this->Phase = fVar14;
          }
          fVar16 = (fVar14 + fVar14) - fVar1;
          fVar24 = fVar16 * fVar5;
          auVar25 = ZEXT416((uint)fVar24);
          if (fVar6 <= fVar24) {
            if (fVar24 <= fVar2) {
              fVar16 = fVar16 * fVar16 * __real_40100000;
              auVar17 = ZEXT416((uint)(((fVar16 + fVar7) * fVar24) /
                                      (fVar16 * __real_41100000 + fVar7)));
            }
            else {
              auVar17 = ZEXT416((uint)fVar1);
            }
          }
          else {
            auVar17 = ZEXT416(uVar3);
          }
          fVar16 = 0.0;
          if (fVar14 <= fVar28) {
            if (fVar14 < fVar27) {
              fVar14 = fVar14 / fVar27;
              fVar16 = (fVar14 * fVar14 - (fVar14 + fVar14)) + fVar1;
            }
          }
          else {
            fVar14 = (fVar14 - fVar1) / fVar27;
            fVar16 = ((float)((uint)(fVar14 * fVar14) ^ uVar4) - (fVar14 + fVar14)) - fVar1;
          }
          auVar17._0_4_ = auVar17._0_4_ * fVar15 + fVar16 * fVar13 + fVar13;
          pfVar10[3] = auVar17._0_4_;
          pfVar10 = pfVar10 + 4;
          this->Phase = fVar26 + this->Phase;
          uVar9 = uVar9 - 1;
          uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
        } while (uVar9 != 0);
      }
      if (0 < iVar11) {
        fVar27 = (float)((uint)fVar26 & uVar8);
        do {
          fVar28 = this->Phase;
          if (fVar1 <= fVar28) {
            auVar17 = roundps(auVar17,ZEXT416((uint)fVar28),3);
            fVar28 = fVar28 - auVar17._0_4_;
            this->Phase = fVar28;
          }
          fVar14 = 0.0;
          if (fVar28 < 0.0) {
            auVar17 = roundps(auVar25,ZEXT416((uint)fVar28),3);
            fVar28 = fVar28 - (auVar17._0_4_ + fVar1);
            this->Phase = fVar28;
          }
          fVar16 = (fVar28 + fVar28) - fVar1;
          fVar24 = fVar16 * fVar5;
          auVar25 = ZEXT416((uint)fVar24);
          if (fVar6 <= fVar24) {
            if (fVar24 <= fVar2) {
              fVar16 = fVar16 * fVar16 * __real_40100000;
              auVar17 = ZEXT416((uint)(((fVar16 + fVar7) * fVar24) /
                                      (fVar16 * __real_41100000 + fVar7)));
            }
            else {
              auVar17 = ZEXT416((uint)fVar1);
            }
          }
          else {
            auVar17 = ZEXT416(uVar3);
          }
          if (fVar28 <= fVar1 - fVar27) {
            if (fVar28 < fVar27) {
              fVar28 = fVar28 / fVar27;
              fVar14 = (fVar28 * fVar28 - (fVar28 + fVar28)) + fVar1;
            }
          }
          else {
            fVar28 = (fVar28 - fVar1) / fVar27;
            fVar14 = ((float)((uint)(fVar28 * fVar28) ^ uVar4) - (fVar28 + fVar28)) - fVar1;
          }
          iVar11 = iVar11 + -1;
          auVar17._0_4_ = auVar17._0_4_ * fVar15 + fVar14 * fVar13 + fVar13;
          *pfVar10 = auVar17._0_4_;
          pfVar10 = pfVar10 + 1;
          this->Phase = fVar26 + this->Phase;
        } while (0 < iVar11);
      }
    }
    else {
      for (; 0 < iVar11; iVar11 = iVar11 + -1) {
        fVar27 = this->Phase;
        if (fVar1 <= fVar27) {
          auVar17 = roundps(auVar17,ZEXT416((uint)fVar27),3);
          fVar27 = fVar27 - auVar17._0_4_;
          this->Phase = fVar27;
        }
        if (fVar27 < 0.0) {
          auVar17 = roundps(auVar25,ZEXT416((uint)fVar27),3);
          fVar27 = fVar27 - (auVar17._0_4_ + fVar1);
          this->Phase = fVar27;
        }
        fVar15 = (fVar27 + fVar27) - fVar1;
        fVar16 = fVar15 * fVar5;
        if (fVar6 <= fVar16) {
          if (fVar16 <= fVar2) {
            fVar15 = fVar15 * fVar15 * fVar24;
            auVar25 = ZEXT416((uint)(((fVar15 + fVar7) * fVar16) / (fVar15 * fVar14 + fVar7)));
          }
          else {
            auVar25 = ZEXT416((uint)fVar1);
          }
        }
        else {
          auVar25 = ZEXT416(uVar3);
        }
        fVar15 = (float)((uint)(fVar28 * fVar26) & __xmm_7fffffff7fffffff7fffffff7fffffff);
        auVar17 = ZEXT816(0);
        if (fVar27 <= fVar1 - fVar15) {
          if (fVar27 < fVar15) {
            fVar27 = fVar27 / fVar15;
            auVar17 = ZEXT416((uint)((fVar27 * fVar27 - (fVar27 + fVar27)) + fVar1));
          }
        }
        else {
          fVar15 = (fVar27 - fVar1) / fVar15;
          auVar17 = ZEXT416((uint)(((float)((uint)(fVar15 * fVar15) ^ uVar4) - (fVar15 + fVar15)) -
                                  fVar1));
        }
        auVar17._0_4_ = auVar17._0_4_ * fVar13;
        auVar25._0_4_ = auVar25._0_4_ * __real_3f0d69ce + auVar17._0_4_ + fVar13;
        *pfVar10 = auVar25._0_4_;
        pfVar10 = pfVar10 + 1;
        this->Phase = fVar28 * fVar26 + this->Phase;
        fVar28 = (param_1->FrequencyHz - this->CurrentFreq) * param_1->GlideEaseFactor +
                 this->CurrentFreq;
        this->CurrentFreq = fVar28;
      }
    }
  }
  else if (((fVar12 <= __real_322bcc77) || (fVar28 < 0.0)) ||
          ((float)((uint)(param_1->GlideEaseFactor - __real_3f800000) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
    this->CurrentFreq = fVar27;
    fVar26 = fVar26 * param_1->FrequencyHz;
    if (3 < iVar11) {
      fVar27 = (float)((uint)fVar26 & uVar8);
      uVar8 = (iVar11 - 4U >> 2) + 1;
      uVar9 = (ulonglong)uVar8;
      fVar28 = fVar1 - fVar27;
      iVar11 = iVar11 + uVar8 * -4;
      do {
        fVar13 = this->Phase;
        if (fVar1 <= fVar13) {
          auVar17 = roundps(auVar17,ZEXT416((uint)fVar13),3);
          fVar13 = fVar13 - auVar17._0_4_;
          this->Phase = fVar13;
        }
        if (fVar13 < 0.0) {
          auVar17 = roundps(auVar25,ZEXT416((uint)fVar13),3);
          fVar13 = fVar13 - (auVar17._0_4_ + fVar1);
          this->Phase = fVar13;
        }
        fVar14 = (fVar13 + fVar13) - fVar1;
        fVar15 = fVar14 * fVar5;
        if (fVar6 <= fVar15) {
          if (fVar15 <= fVar2) {
            fVar14 = fVar14 * fVar14 * fVar24;
            auVar17 = ZEXT416((uint)(((fVar14 + fVar7) * fVar15) /
                                    (fVar14 * __real_41100000 + fVar7)));
          }
          else {
            auVar17 = ZEXT416((uint)fVar1);
          }
        }
        else {
          auVar17 = ZEXT416(uVar3);
        }
        fVar14 = 0.0;
        if (fVar13 <= fVar28) {
          if (fVar13 < fVar27) {
            fVar13 = fVar13 / fVar27;
            fVar14 = (fVar13 * fVar13 - (fVar13 + fVar13)) + fVar1;
          }
        }
        else {
          fVar13 = (fVar13 - fVar1) / fVar27;
          fVar14 = ((float)((uint)(fVar13 * fVar13) ^ uVar4) - (fVar13 + fVar13)) - fVar1;
        }
        auVar18._4_12_ = auVar17._4_12_;
        auVar18._0_4_ = auVar17._0_4_ * fVar16 + fVar14;
        *pfVar10 = auVar18._0_4_;
        fVar13 = fVar26 + this->Phase;
        this->Phase = fVar13;
        if (fVar1 <= fVar13) {
          auVar17 = roundps(auVar18,ZEXT416((uint)fVar13),3);
          fVar13 = fVar13 - auVar17._0_4_;
          this->Phase = fVar13;
        }
        if (fVar13 < 0.0) {
          auVar17 = roundps(ZEXT416((uint)fVar15),ZEXT416((uint)fVar13),3);
          fVar13 = fVar13 - (auVar17._0_4_ + fVar1);
          this->Phase = fVar13;
        }
        fVar14 = (fVar13 + fVar13) - fVar1;
        fVar15 = fVar14 * fVar5;
        if (fVar6 <= fVar15) {
          if (fVar15 <= fVar2) {
            fVar14 = fVar14 * fVar14 * fVar24;
            auVar17 = ZEXT416((uint)(((fVar14 + fVar7) * fVar15) /
                                    (fVar14 * __real_41100000 + fVar7)));
          }
          else {
            auVar17 = ZEXT416((uint)fVar1);
          }
        }
        else {
          auVar17 = ZEXT416(uVar3);
        }
        fVar14 = 0.0;
        if (fVar13 <= fVar28) {
          if (fVar13 < fVar27) {
            fVar13 = fVar13 / fVar27;
            fVar14 = (fVar13 * fVar13 - (fVar13 + fVar13)) + fVar1;
          }
        }
        else {
          fVar13 = (fVar13 - fVar1) / fVar27;
          fVar14 = ((float)((uint)(fVar13 * fVar13) ^ uVar4) - (fVar13 + fVar13)) - fVar1;
        }
        auVar19._4_12_ = auVar17._4_12_;
        auVar19._0_4_ = auVar17._0_4_ * fVar16 + fVar14;
        pfVar10[1] = auVar19._0_4_;
        fVar13 = fVar26 + this->Phase;
        this->Phase = fVar13;
        if (fVar1 <= fVar13) {
          auVar17 = roundps(auVar19,ZEXT416((uint)fVar13),3);
          fVar13 = fVar13 - auVar17._0_4_;
          this->Phase = fVar13;
        }
        if (fVar13 < 0.0) {
          auVar17 = roundps(ZEXT416((uint)fVar15),ZEXT416((uint)fVar13),3);
          fVar13 = fVar13 - (auVar17._0_4_ + fVar1);
          this->Phase = fVar13;
        }
        fVar14 = (fVar13 + fVar13) - fVar1;
        fVar15 = fVar14 * fVar5;
        if (fVar6 <= fVar15) {
          if (fVar15 <= fVar2) {
            fVar14 = fVar14 * fVar14 * fVar24;
            auVar17 = ZEXT416((uint)(((fVar14 + fVar7) * fVar15) /
                                    (fVar14 * __real_41100000 + fVar7)));
          }
          else {
            auVar17 = ZEXT416((uint)fVar1);
          }
        }
        else {
          auVar17 = ZEXT416(uVar3);
        }
        fVar14 = 0.0;
        if (fVar13 <= fVar28) {
          if (fVar13 < fVar27) {
            fVar13 = fVar13 / fVar27;
            fVar14 = (fVar13 * fVar13 - (fVar13 + fVar13)) + fVar1;
          }
        }
        else {
          fVar13 = (fVar13 - fVar1) / fVar27;
          fVar14 = ((float)((uint)(fVar13 * fVar13) ^ uVar4) - (fVar13 + fVar13)) - fVar1;
        }
        auVar20._4_12_ = auVar17._4_12_;
        auVar20._0_4_ = auVar17._0_4_ * fVar16 + fVar14;
        pfVar10[2] = auVar20._0_4_;
        fVar13 = fVar26 + this->Phase;
        this->Phase = fVar13;
        if (fVar1 <= fVar13) {
          auVar17 = roundps(auVar20,ZEXT416((uint)fVar13),3);
          fVar13 = fVar13 - auVar17._0_4_;
          this->Phase = fVar13;
        }
        if (fVar13 < 0.0) {
          auVar17 = roundps(ZEXT416((uint)fVar15),ZEXT416((uint)fVar13),3);
          fVar13 = fVar13 - (auVar17._0_4_ + fVar1);
          this->Phase = fVar13;
        }
        fVar14 = (fVar13 + fVar13) - fVar1;
        fVar15 = fVar14 * fVar5;
        auVar25 = ZEXT416((uint)fVar15);
        if (fVar6 <= fVar15) {
          if (fVar15 <= fVar2) {
            fVar14 = fVar14 * fVar14 * fVar24;
            auVar17 = ZEXT416((uint)(((fVar14 + fVar7) * fVar15) /
                                    (fVar14 * __real_41100000 + fVar7)));
          }
          else {
            auVar17 = ZEXT416((uint)fVar1);
          }
        }
        else {
          auVar17 = ZEXT416(uVar3);
        }
        fVar14 = 0.0;
        if (fVar13 <= fVar28) {
          if (fVar13 < fVar27) {
            fVar13 = fVar13 / fVar27;
            fVar14 = (fVar13 * fVar13 - (fVar13 + fVar13)) + fVar1;
          }
        }
        else {
          fVar13 = (fVar13 - fVar1) / fVar27;
          fVar14 = ((float)((uint)(fVar13 * fVar13) ^ uVar4) - (fVar13 + fVar13)) - fVar1;
        }
        auVar17._0_4_ = auVar17._0_4_ * fVar16 + fVar14;
        pfVar10[3] = auVar17._0_4_;
        pfVar10 = pfVar10 + 4;
        this->Phase = fVar26 + this->Phase;
        uVar9 = uVar9 - 1;
        uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      } while (uVar9 != 0);
    }
    if (0 < iVar11) {
      fVar27 = (float)((uint)fVar26 & uVar8);
      do {
        fVar28 = this->Phase;
        if (fVar1 <= fVar28) {
          auVar17 = roundps(auVar17,ZEXT416((uint)fVar28),3);
          fVar28 = fVar28 - auVar17._0_4_;
          this->Phase = fVar28;
        }
        fVar13 = 0.0;
        if (fVar28 < 0.0) {
          auVar17 = roundps(auVar25,ZEXT416((uint)fVar28),3);
          fVar28 = fVar28 - (auVar17._0_4_ + fVar1);
          this->Phase = fVar28;
        }
        fVar14 = (fVar28 + fVar28) - fVar1;
        fVar15 = fVar14 * fVar5;
        auVar25 = ZEXT416((uint)fVar15);
        if (fVar6 <= fVar15) {
          if (fVar15 <= fVar2) {
            fVar14 = fVar14 * fVar14 * fVar24;
            auVar17 = ZEXT416((uint)(((fVar14 + fVar7) * fVar15) /
                                    (fVar14 * __real_41100000 + fVar7)));
          }
          else {
            auVar17 = ZEXT416((uint)fVar1);
          }
        }
        else {
          auVar17 = ZEXT416(uVar3);
        }
        if (fVar28 <= fVar1 - fVar27) {
          if (fVar28 < fVar27) {
            fVar28 = fVar28 / fVar27;
            fVar13 = (fVar28 * fVar28 - (fVar28 + fVar28)) + fVar1;
          }
        }
        else {
          fVar28 = (fVar28 - fVar1) / fVar27;
          fVar13 = ((float)((uint)(fVar28 * fVar28) ^ uVar4) - (fVar28 + fVar28)) - fVar1;
        }
        iVar11 = iVar11 + -1;
        auVar17._0_4_ = auVar17._0_4_ * fVar16 + fVar13;
        *pfVar10 = auVar17._0_4_;
        pfVar10 = pfVar10 + 1;
        this->Phase = fVar26 + this->Phase;
      } while (0 < iVar11);
    }
  }
  else {
    for (; 0 < iVar11; iVar11 = iVar11 + -1) {
      fVar27 = this->Phase;
      if (fVar1 <= fVar27) {
        auVar17 = roundps(auVar17,ZEXT416((uint)fVar27),3);
        fVar27 = fVar27 - auVar17._0_4_;
        this->Phase = fVar27;
      }
      if (fVar27 < 0.0) {
        auVar17 = roundps(auVar25,ZEXT416((uint)fVar27),3);
        fVar27 = fVar27 - (auVar17._0_4_ + fVar1);
        this->Phase = fVar27;
      }
      fVar13 = (fVar27 + fVar27) - fVar1;
      fVar15 = fVar13 * fVar5;
      if (fVar6 <= fVar15) {
        if (fVar15 <= fVar2) {
          fVar13 = fVar13 * fVar13 * fVar24;
          auVar25 = ZEXT416((uint)(((fVar13 + fVar7) * fVar15) / (fVar13 * fVar14 + fVar7)));
        }
        else {
          auVar25 = ZEXT416((uint)fVar1);
        }
      }
      else {
        auVar25 = ZEXT416(uVar3);
      }
      fVar13 = (float)((uint)(fVar28 * fVar26) & __xmm_7fffffff7fffffff7fffffff7fffffff);
      auVar17 = ZEXT816(0);
      if (fVar27 <= fVar1 - fVar13) {
        if (fVar27 < fVar13) {
          fVar27 = fVar27 / fVar13;
          auVar17 = ZEXT416((uint)((fVar27 * fVar27 - (fVar27 + fVar27)) + fVar1));
        }
      }
      else {
        fVar13 = (fVar27 - fVar1) / fVar13;
        auVar17 = ZEXT416((uint)(((float)((uint)(fVar13 * fVar13) ^ uVar4) - (fVar13 + fVar13)) -
                                fVar1));
      }
      auVar25._0_4_ = auVar25._0_4_ * fVar16 + auVar17._0_4_;
      *pfVar10 = auVar25._0_4_;
      pfVar10 = pfVar10 + 1;
      this->Phase = fVar28 * fVar26 + this->Phase;
      fVar28 = (param_1->FrequencyHz - this->CurrentFreq) * param_1->GlideEaseFactor +
               this->CurrentFreq;
      this->CurrentFreq = fVar28;
    }
  }
  return;
}

// operator() @ 14b1524f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Metasound::Generators::
TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>::
operator()(TGenerateBlock<Metasound::Generators::FSineWaveTableGenerator,Metasound::Generators::FWrapPhase>
           *this,FGeneratorArgs *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  float fVar5;
  float fVar6;
  float *pfVar7;
  int iVar8;
  float fVar9;
  undefined1 auVar10 [16];
  uint uVar11;
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  
  fVar6 = __real_3f000000;
  fVar5 = __real_3f800000;
  fVar13 = param_1->FrequencyHz;
  auVar10 = ZEXT416((uint)fVar13);
  iVar8 = (param_1->AlignedBuffer).ArrayNum;
  pfVar7 = (param_1->AlignedBuffer).DataPtr;
  auVar14 = ZEXT416((uint)__real_322bcc77);
  fVar15 = this->CurrentFreq;
  fVar16 = __real_3f800000 / param_1->SampleRate;
  uVar11 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar9 = (float)((uint)(fVar13 - fVar15) & uVar11);
  if (param_1->BiPolar == false) {
    if (((fVar9 <= __real_322bcc77) || (fVar15 < 0.0)) ||
       (auVar12 = ___xmm_7fffffff7fffffff7fffffff7fffffff,
       (float)((uint)(param_1->GlideEaseFactor - __real_3f800000) & uVar11) <= __real_322bcc77)) {
      this->CurrentFreq = fVar13;
      fVar13 = __real_3f000000;
      fVar16 = fVar16 * param_1->FrequencyHz;
      for (; 0 < iVar8; iVar8 = iVar8 + -1) {
        fVar15 = this->Phase;
        if (fVar5 <= fVar15) {
          auVar10 = roundps(auVar10,ZEXT416((uint)fVar15),3);
          fVar15 = fVar15 - auVar10._0_4_;
          this->Phase = fVar15;
        }
        if (fVar15 < 0.0) {
          auVar10 = roundps(auVar14,ZEXT416((uint)fVar15),3);
          auVar14._4_12_ = auVar10._4_12_;
          auVar14._0_4_ = auVar10._0_4_ + fVar5;
          fVar15 = fVar15 - auVar14._0_4_;
          this->Phase = fVar15;
        }
        auVar10 = ZEXT416((uint)fVar15);
        fVar15 = FSineWaveTableGenerator::operator()(&this->Osc,fVar15,fVar16,param_1);
        *pfVar7 = (fVar15 + fVar5) * fVar13;
        pfVar7 = pfVar7 + 1;
        this->Phase = fVar16 + this->Phase;
      }
    }
    else {
      for (; 0 < iVar8; iVar8 = iVar8 + -1) {
        fVar13 = this->Phase;
        if (fVar5 <= fVar13) {
          auVar10 = roundps(auVar10,ZEXT416((uint)fVar13),3);
          fVar13 = fVar13 - auVar10._0_4_;
          this->Phase = fVar13;
        }
        auVar4._4_8_ = 0;
        auVar4._0_4_ = fVar13;
        if (fVar13 < 0.0) {
          auVar2._12_4_ = 0;
          auVar2._0_12_ = auVar4;
          auVar10 = roundps(auVar12,auVar2,3);
          fVar13 = fVar13 - (auVar10._0_4_ + fVar5);
          auVar4._4_8_ = 0;
          auVar4._0_4_ = fVar13;
          this->Phase = fVar13;
        }
        fVar15 = fVar15 * fVar16;
        auVar10._12_4_ = 0;
        auVar10._0_12_ = auVar4;
        auVar12 = ZEXT416((uint)fVar15);
        fVar13 = FSineWaveTableGenerator::operator()(&this->Osc,auVar4._0_4_,fVar15,param_1);
        *pfVar7 = (fVar13 + fVar5) * fVar6;
        pfVar7 = pfVar7 + 1;
        this->Phase = fVar15 + this->Phase;
        fVar15 = (param_1->FrequencyHz - this->CurrentFreq) * param_1->GlideEaseFactor +
                 this->CurrentFreq;
        this->CurrentFreq = fVar15;
      }
    }
  }
  else if (((fVar9 <= __real_322bcc77) || (fVar15 < 0.0)) ||
          (auVar12 = ___xmm_7fffffff7fffffff7fffffff7fffffff,
          (float)((uint)(param_1->GlideEaseFactor - __real_3f800000) & uVar11) <= __real_322bcc77))
  {
    this->CurrentFreq = fVar13;
    fVar16 = fVar16 * param_1->FrequencyHz;
    for (; 0 < iVar8; iVar8 = iVar8 + -1) {
      fVar13 = this->Phase;
      if (fVar5 <= fVar13) {
        auVar10 = roundps(auVar10,ZEXT416((uint)fVar13),3);
        fVar13 = fVar13 - auVar10._0_4_;
        this->Phase = fVar13;
      }
      if (fVar13 < 0.0) {
        auVar10 = roundps(auVar14,ZEXT416((uint)fVar13),3);
        auVar14._4_12_ = auVar10._4_12_;
        auVar14._0_4_ = auVar10._0_4_ + fVar5;
        fVar13 = fVar13 - auVar14._0_4_;
        this->Phase = fVar13;
      }
      fVar13 = FSineWaveTableGenerator::operator()(&this->Osc,fVar13,fVar16,param_1);
      *pfVar7 = fVar13;
      fVar13 = fVar16 + this->Phase;
      auVar10 = ZEXT416((uint)fVar13);
      pfVar7 = pfVar7 + 1;
      this->Phase = fVar13;
    }
  }
  else {
    for (; 0 < iVar8; iVar8 = iVar8 + -1) {
      fVar13 = this->Phase;
      if (fVar5 <= fVar13) {
        auVar10 = roundps(auVar10,ZEXT416((uint)fVar13),3);
        fVar13 = fVar13 - auVar10._0_4_;
        this->Phase = fVar13;
      }
      auVar3._4_8_ = 0;
      auVar3._0_4_ = fVar13;
      if (fVar13 < 0.0) {
        auVar1._12_4_ = 0;
        auVar1._0_12_ = auVar3;
        auVar10 = roundps(auVar12,auVar1,3);
        fVar13 = fVar13 - (auVar10._0_4_ + fVar5);
        auVar3._4_8_ = 0;
        auVar3._0_4_ = fVar13;
        this->Phase = fVar13;
      }
      fVar15 = fVar15 * fVar16;
      auVar10._12_4_ = 0;
      auVar10._0_12_ = auVar3;
      auVar12 = ZEXT416((uint)fVar15);
      fVar13 = FSineWaveTableGenerator::operator()(&this->Osc,auVar3._0_4_,fVar15,param_1);
      *pfVar7 = fVar13;
      pfVar7 = pfVar7 + 1;
      this->Phase = fVar15 + this->Phase;
      fVar15 = (param_1->FrequencyHz - this->CurrentFreq) * param_1->GlideEaseFactor +
               this->CurrentFreq;
      this->CurrentFreq = fVar15;
    }
  }
  return;
}

// operator() @ 14b152830

void __thiscall
Metasound::Generators::
TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>::operator()
          (TGenerateBlock<Metasound::Generators::FSinfGenerator,Metasound::Generators::FWrapPhase>
           *this,FGeneratorArgs *param_1)

{
  float fVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar9 = __real_40c90fdb;
  fVar8 = __real_3f000000;
  fVar1 = __real_3f800000;
  fVar7 = param_1->FrequencyHz;
  auVar5 = ZEXT416((uint)fVar7);
  iVar3 = (param_1->AlignedBuffer).ArrayNum;
  pfVar2 = (param_1->AlignedBuffer).DataPtr;
  auVar6 = ZEXT416((uint)__real_322bcc77);
  fVar10 = this->CurrentFreq;
  fVar11 = __real_3f800000 / param_1->SampleRate;
  fVar4 = (float)((uint)(fVar7 - fVar10) & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (param_1->BiPolar == false) {
    if (((fVar4 <= __real_322bcc77) || (fVar10 < 0.0)) ||
       ((float)((uint)(param_1->GlideEaseFactor - __real_3f800000) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
      this->CurrentFreq = fVar7;
      fVar8 = __real_40c90fdb;
      fVar10 = __real_3f000000;
      fVar7 = param_1->FrequencyHz;
      for (; 0 < iVar3; iVar3 = iVar3 + -1) {
        fVar9 = this->Phase;
        if (fVar1 <= fVar9) {
          auVar5 = roundps(auVar5,ZEXT416((uint)fVar9),3);
          fVar9 = fVar9 - auVar5._0_4_;
          this->Phase = fVar9;
        }
        if (fVar9 < 0.0) {
          auVar6 = roundps(auVar6,ZEXT416((uint)fVar9),3);
          auVar6._0_4_ = auVar6._0_4_ + fVar1;
          fVar9 = fVar9 - auVar6._0_4_;
          this->Phase = fVar9;
        }
        fVar9 = sinf(fVar9 * fVar8);
        *pfVar2 = (fVar9 + fVar1) * fVar10;
        pfVar2 = pfVar2 + 1;
        this->Phase = fVar11 * fVar7 + this->Phase;
      }
    }
    else {
      for (; 0 < iVar3; iVar3 = iVar3 + -1) {
        fVar7 = this->Phase;
        if (fVar1 <= fVar7) {
          auVar5 = roundps(auVar5,ZEXT416((uint)fVar7),3);
          fVar7 = fVar7 - auVar5._0_4_;
          this->Phase = fVar7;
        }
        if (fVar7 < 0.0) {
          auVar6 = roundps(auVar6,ZEXT416((uint)fVar7),3);
          auVar6._0_4_ = auVar6._0_4_ + fVar1;
          fVar7 = fVar7 - auVar6._0_4_;
          this->Phase = fVar7;
        }
        fVar7 = sinf(fVar7 * fVar9);
        *pfVar2 = (fVar7 + fVar1) * fVar8;
        pfVar2 = pfVar2 + 1;
        this->Phase = fVar10 * fVar11 + this->Phase;
        fVar10 = (param_1->FrequencyHz - this->CurrentFreq) * param_1->GlideEaseFactor +
                 this->CurrentFreq;
        this->CurrentFreq = fVar10;
      }
    }
  }
  else if (((fVar4 <= __real_322bcc77) || (fVar10 < 0.0)) ||
          ((float)((uint)(param_1->GlideEaseFactor - __real_3f800000) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
    this->CurrentFreq = fVar7;
    fVar10 = __real_40c90fdb;
    fVar7 = param_1->FrequencyHz;
    for (; 0 < iVar3; iVar3 = iVar3 + -1) {
      fVar8 = this->Phase;
      if (fVar1 <= fVar8) {
        auVar5 = roundps(auVar5,ZEXT416((uint)fVar8),3);
        fVar8 = fVar8 - auVar5._0_4_;
        this->Phase = fVar8;
      }
      if (fVar8 < 0.0) {
        auVar5 = roundps(auVar6,ZEXT416((uint)fVar8),3);
        auVar6._4_12_ = auVar5._4_12_;
        auVar6._0_4_ = auVar5._0_4_ + fVar1;
        fVar8 = fVar8 - auVar6._0_4_;
        this->Phase = fVar8;
      }
      fVar8 = sinf(fVar8 * fVar10);
      *pfVar2 = fVar8;
      fVar8 = fVar11 * fVar7 + this->Phase;
      auVar5 = ZEXT416((uint)fVar8);
      pfVar2 = pfVar2 + 1;
      this->Phase = fVar8;
    }
  }
  else {
    for (; 0 < iVar3; iVar3 = iVar3 + -1) {
      fVar7 = this->Phase;
      if (fVar1 <= fVar7) {
        auVar5 = roundps(auVar5,ZEXT416((uint)fVar7),3);
        fVar7 = fVar7 - auVar5._0_4_;
        this->Phase = fVar7;
      }
      if (fVar7 < 0.0) {
        auVar6 = roundps(auVar6,ZEXT416((uint)fVar7),3);
        auVar6._0_4_ = auVar6._0_4_ + fVar1;
        fVar7 = fVar7 - auVar6._0_4_;
        this->Phase = fVar7;
      }
      fVar7 = sinf(fVar7 * fVar9);
      *pfVar2 = fVar7;
      pfVar2 = pfVar2 + 1;
      this->Phase = fVar10 * fVar11 + this->Phase;
      fVar10 = (param_1->FrequencyHz - this->CurrentFreq) * param_1->GlideEaseFactor +
               this->CurrentFreq;
      this->CurrentFreq = fVar10;
    }
  }
  return;
}

// operator() @ 14b152b80

void __thiscall
Metasound::Generators::
TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>::
operator()(TGenerateBlock<Metasound::Generators::FSquareGenerator,Metasound::Generators::FWrapPhase>
           *this,FGeneratorArgs *param_1)

{
  float fVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar8 = __real_bf800000;
  fVar1 = __real_3f800000;
  fVar12 = param_1->FrequencyHz;
  auVar10 = ZEXT416((uint)fVar12);
  fVar11 = this->CurrentFreq;
  iVar4 = (param_1->AlignedBuffer).ArrayNum;
  pfVar3 = (param_1->AlignedBuffer).DataPtr;
  auVar9 = ZEXT416((uint)__real_322bcc77);
  fVar13 = __real_3f800000 / param_1->SampleRate;
  fVar6 = (float)((uint)(fVar12 - fVar11) & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (param_1->BiPolar == false) {
    if (((fVar6 <= __real_322bcc77) || (fVar11 < 0.0)) ||
       ((float)((uint)(param_1->GlideEaseFactor - __real_3f800000) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
      this->CurrentFreq = fVar12;
      fVar13 = fVar13 * param_1->FrequencyHz;
      if (0 < iVar4) {
        if (0.0 <= fVar13) {
          do {
            fVar12 = this->Phase;
            if (fVar1 <= fVar12) {
              auVar9 = roundps(auVar9,ZEXT416((uint)fVar12),3);
              fVar12 = fVar12 - auVar9._0_4_;
              this->Phase = fVar12;
            }
            if (fVar12 < 0.0) {
              auVar10 = roundps(auVar10,ZEXT416((uint)fVar12),3);
              auVar10._0_4_ = auVar10._0_4_ + fVar1;
              fVar12 = fVar12 - auVar10._0_4_;
              this->Phase = fVar12;
            }
            fVar11 = fVar1;
            if (fVar12 < param_1->PulseWidth) {
              fVar11 = 0.0;
            }
            *pfVar3 = fVar11;
            iVar4 = iVar4 + -1;
            pfVar3 = pfVar3 + 1;
            this->Phase = fVar13 + this->Phase;
          } while (0 < iVar4);
          return;
        }
        if (3 < iVar4) {
          uVar2 = (iVar4 - 4U >> 2) + 1;
          uVar5 = (ulonglong)uVar2;
          iVar4 = iVar4 + uVar2 * -4;
          do {
            fVar12 = this->Phase;
            if (fVar1 <= fVar12) {
              auVar9 = roundps(auVar9,ZEXT416((uint)fVar12),3);
              fVar12 = fVar12 - auVar9._0_4_;
              this->Phase = fVar12;
            }
            if (fVar12 < 0.0) {
              auVar10 = roundps(auVar10,ZEXT416((uint)fVar12),3);
              auVar10._0_4_ = auVar10._0_4_ + fVar1;
              fVar12 = fVar12 - auVar10._0_4_;
              this->Phase = fVar12;
            }
            fVar11 = fVar1;
            if (fVar12 < fVar1 - param_1->PulseWidth) {
              fVar11 = 0.0;
            }
            *pfVar3 = fVar11;
            fVar12 = fVar13 + this->Phase;
            this->Phase = fVar12;
            if (fVar1 <= fVar12) {
              auVar9 = roundps(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12),3);
              fVar12 = fVar12 - auVar9._0_4_;
              this->Phase = fVar12;
            }
            if (fVar12 < 0.0) {
              auVar9 = ZEXT416((uint)fVar12);
              auVar10 = roundps(auVar10,auVar9,3);
              auVar10._0_4_ = auVar10._0_4_ + fVar1;
              fVar12 = fVar12 - auVar10._0_4_;
              this->Phase = fVar12;
            }
            fVar11 = fVar1;
            if (fVar12 < fVar1 - param_1->PulseWidth) {
              fVar11 = 0.0;
            }
            pfVar3[1] = fVar11;
            fVar12 = fVar13 + this->Phase;
            this->Phase = fVar12;
            if (fVar1 <= fVar12) {
              auVar9 = roundps(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12),3);
              fVar12 = fVar12 - auVar9._0_4_;
              this->Phase = fVar12;
            }
            if (fVar12 < 0.0) {
              auVar9 = ZEXT416((uint)fVar12);
              auVar10 = roundps(auVar10,auVar9,3);
              auVar10._0_4_ = auVar10._0_4_ + fVar1;
              fVar12 = fVar12 - auVar10._0_4_;
              this->Phase = fVar12;
            }
            fVar11 = fVar1;
            if (fVar12 < fVar1 - param_1->PulseWidth) {
              fVar11 = 0.0;
            }
            pfVar3[2] = fVar11;
            fVar12 = fVar13 + this->Phase;
            this->Phase = fVar12;
            if (fVar1 <= fVar12) {
              auVar9 = roundps(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12),3);
              fVar12 = fVar12 - auVar9._0_4_;
              this->Phase = fVar12;
            }
            if (fVar12 < 0.0) {
              auVar9 = ZEXT416((uint)fVar12);
              auVar10 = roundps(auVar10,auVar9,3);
              auVar10._0_4_ = auVar10._0_4_ + fVar1;
              fVar12 = fVar12 - auVar10._0_4_;
              this->Phase = fVar12;
            }
            fVar11 = fVar1;
            if (fVar12 < fVar1 - param_1->PulseWidth) {
              fVar11 = 0.0;
            }
            pfVar3[3] = fVar11;
            pfVar3 = pfVar3 + 4;
            this->Phase = fVar13 + this->Phase;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
          if (iVar4 < 1) {
            return;
          }
        }
        do {
          fVar12 = this->Phase;
          if (fVar1 <= fVar12) {
            auVar9 = roundps(auVar9,ZEXT416((uint)fVar12),3);
            fVar12 = fVar12 - auVar9._0_4_;
            this->Phase = fVar12;
          }
          if (fVar12 < 0.0) {
            auVar10 = roundps(auVar10,ZEXT416((uint)fVar12),3);
            auVar10._0_4_ = auVar10._0_4_ + fVar1;
            fVar12 = fVar12 - auVar10._0_4_;
            this->Phase = fVar12;
          }
          fVar11 = fVar1;
          if (fVar12 < fVar1 - param_1->PulseWidth) {
            fVar11 = 0.0;
          }
          *pfVar3 = fVar11;
          iVar4 = iVar4 + -1;
          pfVar3 = pfVar3 + 1;
          this->Phase = fVar13 + this->Phase;
        } while (0 < iVar4);
      }
    }
    else if (0 < iVar4) {
      do {
        fVar12 = this->Phase;
        if (fVar1 <= fVar12) {
          auVar9 = roundps(auVar9,ZEXT416((uint)fVar12),3);
          fVar12 = fVar12 - auVar9._0_4_;
          this->Phase = fVar12;
        }
        if (fVar12 < 0.0) {
          auVar9 = roundps(auVar10,ZEXT416((uint)fVar12),3);
          auVar10._4_12_ = auVar9._4_12_;
          auVar10._0_4_ = auVar9._0_4_ + fVar1;
          fVar12 = fVar12 - auVar10._0_4_;
          this->Phase = fVar12;
        }
        fVar8 = param_1->PulseWidth;
        if (fVar11 * fVar13 < 0.0) {
          fVar8 = fVar1 - fVar8;
        }
        auVar9 = ZEXT416((uint)fVar8);
        fVar6 = fVar1;
        if (fVar12 < fVar8) {
          fVar6 = 0.0;
        }
        *pfVar3 = fVar6;
        iVar4 = iVar4 + -1;
        pfVar3 = pfVar3 + 1;
        this->Phase = fVar11 * fVar13 + this->Phase;
        fVar11 = (param_1->FrequencyHz - this->CurrentFreq) * param_1->GlideEaseFactor +
                 this->CurrentFreq;
        this->CurrentFreq = fVar11;
      } while (0 < iVar4);
      return;
    }
  }
  else if (((fVar6 <= __real_322bcc77) || (fVar11 < 0.0)) ||
          ((float)((uint)(param_1->GlideEaseFactor - __real_3f800000) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
    this->CurrentFreq = fVar12;
    fVar12 = __real_bf800000;
    fVar13 = fVar13 * param_1->FrequencyHz;
    if (0 < iVar4) {
      if (0.0 <= fVar13) {
        do {
          fVar11 = this->Phase;
          if (fVar1 <= fVar11) {
            auVar9 = roundps(auVar9,ZEXT416((uint)fVar11),3);
            fVar11 = fVar11 - auVar9._0_4_;
            this->Phase = fVar11;
          }
          if (fVar11 < 0.0) {
            auVar10 = roundps(auVar10,ZEXT416((uint)fVar11),3);
            auVar10._0_4_ = auVar10._0_4_ + fVar1;
            fVar11 = fVar11 - auVar10._0_4_;
            this->Phase = fVar11;
          }
          fVar8 = fVar12;
          if (param_1->PulseWidth <= fVar11) {
            fVar8 = fVar1;
          }
          *pfVar3 = fVar8;
          iVar4 = iVar4 + -1;
          pfVar3 = pfVar3 + 1;
          this->Phase = fVar13 + this->Phase;
        } while (0 < iVar4);
        return;
      }
      if (3 < iVar4) {
        uVar2 = (iVar4 - 4U >> 2) + 1;
        uVar5 = (ulonglong)uVar2;
        iVar4 = iVar4 + uVar2 * -4;
        do {
          fVar11 = this->Phase;
          if (fVar1 <= fVar11) {
            auVar9 = roundps(auVar9,ZEXT416((uint)fVar11),3);
            fVar11 = fVar11 - auVar9._0_4_;
            this->Phase = fVar11;
          }
          if (fVar11 < 0.0) {
            auVar10 = roundps(auVar10,ZEXT416((uint)fVar11),3);
            auVar10._0_4_ = auVar10._0_4_ + fVar1;
            fVar11 = fVar11 - auVar10._0_4_;
            this->Phase = fVar11;
          }
          fVar8 = fVar12;
          if (fVar1 - param_1->PulseWidth <= fVar11) {
            fVar8 = fVar1;
          }
          *pfVar3 = fVar8;
          fVar11 = fVar13 + this->Phase;
          this->Phase = fVar11;
          if (fVar1 <= fVar11) {
            auVar9 = roundps(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11),3);
            fVar11 = fVar11 - auVar9._0_4_;
            this->Phase = fVar11;
          }
          if (fVar11 < 0.0) {
            auVar9 = ZEXT416((uint)fVar11);
            auVar10 = roundps(auVar10,auVar9,3);
            auVar10._0_4_ = auVar10._0_4_ + fVar1;
            fVar11 = fVar11 - auVar10._0_4_;
            this->Phase = fVar11;
          }
          fVar8 = fVar12;
          if (fVar1 - param_1->PulseWidth <= fVar11) {
            fVar8 = fVar1;
          }
          pfVar3[1] = fVar8;
          fVar11 = fVar13 + this->Phase;
          this->Phase = fVar11;
          if (fVar1 <= fVar11) {
            auVar9 = roundps(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11),3);
            fVar11 = fVar11 - auVar9._0_4_;
            this->Phase = fVar11;
          }
          if (fVar11 < 0.0) {
            auVar9 = ZEXT416((uint)fVar11);
            auVar10 = roundps(auVar10,auVar9,3);
            auVar10._0_4_ = auVar10._0_4_ + fVar1;
            fVar11 = fVar11 - auVar10._0_4_;
            this->Phase = fVar11;
          }
          fVar8 = fVar12;
          if (fVar1 - param_1->PulseWidth <= fVar11) {
            fVar8 = fVar1;
          }
          pfVar3[2] = fVar8;
          fVar11 = fVar13 + this->Phase;
          this->Phase = fVar11;
          if (fVar1 <= fVar11) {
            auVar9 = roundps(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11),3);
            fVar11 = fVar11 - auVar9._0_4_;
            this->Phase = fVar11;
          }
          if (fVar11 < 0.0) {
            auVar9 = ZEXT416((uint)fVar11);
            auVar10 = roundps(auVar10,auVar9,3);
            auVar10._0_4_ = auVar10._0_4_ + fVar1;
            fVar11 = fVar11 - auVar10._0_4_;
            this->Phase = fVar11;
          }
          fVar8 = fVar12;
          if (fVar1 - param_1->PulseWidth <= fVar11) {
            fVar8 = fVar1;
          }
          pfVar3[3] = fVar8;
          pfVar3 = pfVar3 + 4;
          this->Phase = fVar13 + this->Phase;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
        if (iVar4 < 1) {
          return;
        }
      }
      do {
        fVar11 = this->Phase;
        if (fVar1 <= fVar11) {
          auVar9 = roundps(auVar9,ZEXT416((uint)fVar11),3);
          fVar11 = fVar11 - auVar9._0_4_;
          this->Phase = fVar11;
        }
        if (fVar11 < 0.0) {
          auVar10 = roundps(auVar10,ZEXT416((uint)fVar11),3);
          auVar10._0_4_ = auVar10._0_4_ + fVar1;
          fVar11 = fVar11 - auVar10._0_4_;
          this->Phase = fVar11;
        }
        fVar8 = fVar12;
        if (fVar1 - param_1->PulseWidth <= fVar11) {
          fVar8 = fVar1;
        }
        *pfVar3 = fVar8;
        iVar4 = iVar4 + -1;
        pfVar3 = pfVar3 + 1;
        this->Phase = fVar13 + this->Phase;
      } while (0 < iVar4);
      return;
    }
  }
  else if (0 < iVar4) {
    do {
      fVar12 = this->Phase;
      if (fVar1 <= fVar12) {
        auVar9 = roundps(auVar9,ZEXT416((uint)fVar12),3);
        fVar12 = fVar12 - auVar9._0_4_;
        this->Phase = fVar12;
      }
      if (fVar12 < 0.0) {
        auVar9 = roundps(auVar10,ZEXT416((uint)fVar12),3);
        auVar10._4_12_ = auVar9._4_12_;
        auVar10._0_4_ = auVar9._0_4_ + fVar1;
        fVar12 = fVar12 - auVar10._0_4_;
        this->Phase = fVar12;
      }
      fVar6 = param_1->PulseWidth;
      if (fVar11 * fVar13 < 0.0) {
        fVar6 = fVar1 - fVar6;
      }
      auVar9 = ZEXT416((uint)fVar6);
      fVar7 = fVar8;
      if (fVar6 <= fVar12) {
        fVar7 = fVar1;
      }
      *pfVar3 = fVar7;
      iVar4 = iVar4 + -1;
      pfVar3 = pfVar3 + 1;
      this->Phase = fVar11 * fVar13 + this->Phase;
      fVar11 = (param_1->FrequencyHz - this->CurrentFreq) * param_1->GlideEaseFactor +
               this->CurrentFreq;
      this->CurrentFreq = fVar11;
    } while (0 < iVar4);
    return;
  }
  return;
}

// operator() @ 14b153310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Metasound::Generators::
TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>
::operator()(TGenerateBlock<Metasound::Generators::FSquarePolysmoothGenerator,Metasound::Generators::FWrapPhase>
             *this,FGeneratorArgs *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  fVar19 = __real_3f000000;
  auVar15 = ___xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar5 = __real_3f800000;
  fVar17 = param_1->FrequencyHz;
  auVar16 = ZEXT416((uint)fVar17);
  iVar8 = (param_1->AlignedBuffer).ArrayNum;
  pfVar7 = (param_1->AlignedBuffer).DataPtr;
  fVar18 = this->CurrentFreq;
  fVar20 = __real_3f800000 / param_1->SampleRate;
  uVar13 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar9 = (float)((uint)(fVar17 - fVar18) & uVar13);
  if (param_1->BiPolar == false) {
    if (((fVar9 <= __real_322bcc77) || (fVar18 < 0.0)) ||
       ((float)((uint)(param_1->GlideEaseFactor - __real_3f800000) & uVar13) <= __real_322bcc77)) {
      this->CurrentFreq = fVar17;
      uVar6 = __xmm_80000000800000008000000080000000;
      fVar18 = __real_bf800000;
      fVar17 = __real_3f000000;
      fVar20 = fVar20 * param_1->FrequencyHz;
      if (0 < iVar8) {
        fVar19 = (float)((uint)fVar20 & uVar13);
        do {
          fVar9 = this->Phase;
          if (fVar5 <= fVar9) {
            auVar15 = roundps(auVar15,ZEXT416((uint)fVar9),3);
            fVar9 = fVar9 - auVar15._0_4_;
            this->Phase = fVar9;
          }
          if (fVar9 < 0.0) {
            auVar16 = roundps(auVar16,ZEXT416((uint)fVar9),3);
            fVar9 = fVar9 - (auVar16._0_4_ + fVar5);
            this->Phase = fVar9;
          }
          fVar10 = 0.0;
          if (fVar9 <= fVar5 - fVar19) {
            if (fVar9 < fVar19) {
              fVar10 = fVar9 / fVar19;
              fVar10 = (fVar10 * fVar10 - (fVar10 + fVar10)) + fVar5;
            }
          }
          else {
            fVar10 = (fVar9 - fVar5) / fVar19;
            fVar10 = ((float)((uint)(fVar10 * fVar10) ^ uVar6) - (fVar10 + fVar10)) - fVar5;
          }
          fVar12 = param_1->PulseWidth;
          if (fVar20 <= 0.0) {
            fVar14 = fVar9 - fVar12;
            auVar15 = ZEXT416((uint)fVar14);
            if (fVar14 <= 0.0) {
              auVar15 = ZEXT416((uint)(fVar14 + fVar5));
            }
          }
          else {
            fVar14 = fVar12 + fVar9;
            auVar15 = ZEXT416((uint)fVar14);
            if (fVar5 <= fVar14) {
              auVar15 = ZEXT416((uint)(fVar14 + fVar18));
            }
          }
          fVar14 = auVar15._0_4_;
          auVar16 = ZEXT816(0);
          if (fVar14 <= fVar5 - fVar19) {
            if (fVar14 < fVar19) {
              fVar11 = fVar14 / fVar19;
              auVar4._8_8_ = 0;
              auVar4._0_8_ = auVar15._8_8_;
              auVar16._4_12_ = SUB1612(auVar4 << 0x40,4);
              auVar16._0_4_ = (fVar11 * fVar11 - (fVar11 + fVar11)) + fVar5;
            }
          }
          else {
            fVar11 = (fVar14 - fVar5) / fVar19;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = auVar15._8_8_;
            auVar16._4_12_ = SUB1612(auVar3 << 0x40,4);
            auVar16._0_4_ = ((float)((uint)(fVar11 * fVar11) ^ uVar6) - (fVar11 + fVar11)) - fVar5;
          }
          auVar15._0_4_ = (fVar14 + fVar14 + auVar16._0_4_) - fVar5;
          if (fVar20 <= 0.0) {
            fVar12 = fVar17 - fVar12;
          }
          else {
            fVar12 = fVar12 - fVar17;
          }
          iVar8 = iVar8 + -1;
          *pfVar7 = (((fVar9 + fVar9 + fVar10) - fVar5) - auVar15._0_4_) * fVar17 + fVar12 + fVar17;
          pfVar7 = pfVar7 + 1;
          this->Phase = fVar20 + this->Phase;
        } while (0 < iVar8);
      }
    }
    else {
      for (; 0 < iVar8; iVar8 = iVar8 + -1) {
        fVar17 = this->Phase;
        if (fVar5 <= fVar17) {
          auVar15 = roundps(auVar15,ZEXT416((uint)fVar17),3);
          fVar17 = fVar17 - auVar15._0_4_;
          this->Phase = fVar17;
        }
        if (fVar17 < 0.0) {
          auVar16 = roundps(auVar16,ZEXT416((uint)fVar17),3);
          fVar17 = fVar17 - (auVar16._0_4_ + fVar5);
          this->Phase = fVar17;
        }
        fVar18 = fVar18 * fVar20;
        auVar15 = ZEXT416((uint)fVar17);
        auVar16 = ZEXT416((uint)fVar18);
        fVar17 = FSquarePolysmoothGenerator::operator()(&this->Osc,fVar17,fVar18,param_1);
        *pfVar7 = (fVar17 + fVar5) * fVar19;
        pfVar7 = pfVar7 + 1;
        this->Phase = fVar18 + this->Phase;
        fVar18 = (param_1->FrequencyHz - this->CurrentFreq) * param_1->GlideEaseFactor +
                 this->CurrentFreq;
        this->CurrentFreq = fVar18;
      }
    }
  }
  else if (((fVar9 <= __real_322bcc77) || (fVar18 < 0.0)) ||
          ((float)((uint)(param_1->GlideEaseFactor - __real_3f800000) & uVar13) <= __real_322bcc77))
  {
    this->CurrentFreq = fVar17;
    uVar6 = __xmm_80000000800000008000000080000000;
    fVar18 = __real_bf800000;
    fVar17 = __real_3f000000;
    fVar20 = fVar20 * param_1->FrequencyHz;
    if (0 < iVar8) {
      fVar19 = (float)((uint)fVar20 & uVar13);
      do {
        fVar9 = this->Phase;
        if (fVar5 <= fVar9) {
          auVar15 = roundps(auVar15,ZEXT416((uint)fVar9),3);
          fVar9 = fVar9 - auVar15._0_4_;
          this->Phase = fVar9;
        }
        if (fVar9 < 0.0) {
          auVar16 = roundps(auVar16,ZEXT416((uint)fVar9),3);
          fVar9 = fVar9 - (auVar16._0_4_ + fVar5);
          this->Phase = fVar9;
        }
        fVar10 = 0.0;
        if (fVar9 <= fVar5 - fVar19) {
          if (fVar9 < fVar19) {
            fVar10 = fVar9 / fVar19;
            fVar10 = (fVar10 * fVar10 - (fVar10 + fVar10)) + fVar5;
          }
        }
        else {
          fVar10 = (fVar9 - fVar5) / fVar19;
          fVar10 = ((float)((uint)(fVar10 * fVar10) ^ uVar6) - (fVar10 + fVar10)) - fVar5;
        }
        fVar12 = param_1->PulseWidth;
        if (fVar20 <= 0.0) {
          fVar14 = fVar9 - fVar12;
          auVar15 = ZEXT416((uint)fVar14);
          if (fVar14 <= 0.0) {
            auVar15 = ZEXT416((uint)(fVar14 + fVar5));
          }
        }
        else {
          fVar14 = fVar12 + fVar9;
          auVar15 = ZEXT416((uint)fVar14);
          if (fVar5 <= fVar14) {
            auVar15 = ZEXT416((uint)(fVar14 + fVar18));
          }
        }
        fVar14 = auVar15._0_4_;
        auVar16 = ZEXT816(0);
        if (fVar14 <= fVar5 - fVar19) {
          if (fVar14 < fVar19) {
            fVar11 = fVar14 / fVar19;
            auVar2._8_8_ = 0;
            auVar2._0_8_ = auVar15._8_8_;
            auVar16._4_12_ = SUB1612(auVar2 << 0x40,4);
            auVar16._0_4_ = (fVar11 * fVar11 - (fVar11 + fVar11)) + fVar5;
          }
        }
        else {
          fVar11 = (fVar14 - fVar5) / fVar19;
          auVar1._8_8_ = 0;
          auVar1._0_8_ = auVar15._8_8_;
          auVar16._4_12_ = SUB1612(auVar1 << 0x40,4);
          auVar16._0_4_ = ((float)((uint)(fVar11 * fVar11) ^ uVar6) - (fVar11 + fVar11)) - fVar5;
        }
        auVar15._0_4_ = (fVar14 + fVar14 + auVar16._0_4_) - fVar5;
        if (fVar20 <= 0.0) {
          fVar12 = (fVar17 - fVar12) + (fVar17 - fVar12);
        }
        else {
          fVar12 = ((fVar12 - fVar17) + fVar12) - fVar17;
        }
        iVar8 = iVar8 + -1;
        *pfVar7 = (((fVar9 + fVar9 + fVar10) - fVar5) - auVar15._0_4_) + fVar12;
        pfVar7 = pfVar7 + 1;
        this->Phase = fVar20 + this->Phase;
      } while (0 < iVar8);
    }
  }
  else {
    for (; 0 < iVar8; iVar8 = iVar8 + -1) {
      fVar17 = this->Phase;
      if (fVar5 <= fVar17) {
        auVar15 = roundps(auVar15,ZEXT416((uint)fVar17),3);
        fVar17 = fVar17 - auVar15._0_4_;
        this->Phase = fVar17;
      }
      if (fVar17 < 0.0) {
        auVar16 = roundps(auVar16,ZEXT416((uint)fVar17),3);
        fVar17 = fVar17 - (auVar16._0_4_ + fVar5);
        this->Phase = fVar17;
      }
      fVar18 = fVar18 * fVar20;
      auVar15 = ZEXT416((uint)fVar17);
      auVar16 = ZEXT416((uint)fVar18);
      fVar17 = FSquarePolysmoothGenerator::operator()(&this->Osc,fVar17,fVar18,param_1);
      *pfVar7 = fVar17;
      pfVar7 = pfVar7 + 1;
      this->Phase = fVar18 + this->Phase;
      fVar18 = (param_1->FrequencyHz - this->CurrentFreq) * param_1->GlideEaseFactor +
               this->CurrentFreq;
      this->CurrentFreq = fVar18;
    }
  }
  return;
}

// operator() @ 14b1538d0

void __thiscall
Metasound::Generators::
TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>::
operator()(TGenerateBlock<Metasound::Generators::FTriangleGenerator,Metasound::Generators::FWrapPhase>
           *this,FGeneratorArgs *param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  int iVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar7 = __real_42456461;
  fVar6 = __real_41800000;
  fVar5 = __real_40c90fdb;
  fVar4 = __real_40490fdb;
  uVar3 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar2 = __real_40800000;
  fVar1 = __real_3f800000;
  fVar13 = param_1->FrequencyHz;
  auVar11 = ZEXT416((uint)fVar13);
  iVar9 = (param_1->AlignedBuffer).ArrayNum;
  pfVar8 = (param_1->AlignedBuffer).DataPtr;
  auVar12 = ZEXT416((uint)__real_322bcc77);
  fVar16 = this->CurrentFreq;
  fVar17 = __real_3f800000 / param_1->SampleRate;
  fVar10 = (float)((uint)(fVar13 - fVar16) & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (param_1->BiPolar == false) {
    if (((fVar10 <= __real_322bcc77) || (fVar16 < 0.0)) ||
       ((float)((uint)(param_1->GlideEaseFactor - __real_3f800000) &
               __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
      this->CurrentFreq = fVar13;
      fVar7 = __real_3ea2f984;
      fVar6 = __real_42456461;
      fVar5 = __real_41800000;
      fVar4 = __real_40c90fdb;
      fVar2 = __real_40490fdb;
      fVar16 = __real_40800000;
      fVar13 = param_1->FrequencyHz;
      for (; 0 < iVar9; iVar9 = iVar9 + -1) {
        fVar10 = this->Phase;
        if (fVar1 <= fVar10) {
          auVar11 = roundps(auVar11,ZEXT416((uint)fVar10),3);
          fVar10 = fVar10 - auVar11._0_4_;
          this->Phase = fVar10;
        }
        if (fVar10 < 0.0) {
          auVar11 = roundps(auVar12,ZEXT416((uint)fVar10),3);
          fVar10 = fVar10 - (auVar11._0_4_ + fVar1);
          this->Phase = fVar10;
        }
        fVar15 = fVar10 * fVar4 - fVar2;
        fVar10 = (float)((uint)fVar15 & uVar3);
        fVar14 = fVar2 - fVar10;
        fVar10 = fVar14 * fVar10 * fVar16;
        auVar12 = ZEXT416((uint)fVar10);
        fVar10 = fVar6 - fVar10;
        auVar11 = ZEXT416((uint)fVar10);
        fVar10 = FMath::FastAsin((fVar14 * fVar15 * fVar5) / fVar10);
        *pfVar8 = fVar10 * fVar7 + __real_3f000000;
        pfVar8 = pfVar8 + 1;
        this->Phase = fVar17 * fVar13 + this->Phase;
      }
    }
    else {
      for (; 0 < iVar9; iVar9 = iVar9 + -1) {
        fVar13 = this->Phase;
        if (fVar1 <= fVar13) {
          auVar11 = roundps(auVar11,ZEXT416((uint)fVar13),3);
          fVar13 = fVar13 - auVar11._0_4_;
          this->Phase = fVar13;
        }
        if (fVar13 < 0.0) {
          auVar11 = roundps(auVar12,ZEXT416((uint)fVar13),3);
          fVar13 = fVar13 - (auVar11._0_4_ + fVar1);
          this->Phase = fVar13;
        }
        fVar14 = fVar13 * fVar5 - fVar4;
        fVar13 = (float)((uint)fVar14 & uVar3);
        fVar10 = fVar4 - fVar13;
        fVar13 = fVar10 * fVar13 * fVar2;
        auVar12 = ZEXT416((uint)fVar13);
        fVar13 = fVar7 - fVar13;
        auVar11 = ZEXT416((uint)fVar13);
        fVar13 = FMath::FastAsin((fVar10 * fVar14 * fVar6) / fVar13);
        *pfVar8 = fVar13 * __real_3ea2f984 + __real_3f000000;
        pfVar8 = pfVar8 + 1;
        this->Phase = fVar16 * fVar17 + this->Phase;
        fVar16 = (param_1->FrequencyHz - this->CurrentFreq) * param_1->GlideEaseFactor +
                 this->CurrentFreq;
        this->CurrentFreq = fVar16;
      }
    }
  }
  else if (((fVar10 <= __real_322bcc77) || (fVar16 < 0.0)) ||
          ((float)((uint)(param_1->GlideEaseFactor - __real_3f800000) &
                  __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
    this->CurrentFreq = fVar13;
    fVar7 = __real_3f22f984;
    fVar6 = __real_42456461;
    fVar5 = __real_41800000;
    fVar4 = __real_40c90fdb;
    fVar2 = __real_40490fdb;
    fVar16 = __real_40800000;
    fVar13 = param_1->FrequencyHz;
    for (; 0 < iVar9; iVar9 = iVar9 + -1) {
      fVar10 = this->Phase;
      if (fVar1 <= fVar10) {
        auVar11 = roundps(auVar11,ZEXT416((uint)fVar10),3);
        fVar10 = fVar10 - auVar11._0_4_;
        this->Phase = fVar10;
      }
      if (fVar10 < 0.0) {
        auVar11 = roundps(auVar12,ZEXT416((uint)fVar10),3);
        fVar10 = fVar10 - (auVar11._0_4_ + fVar1);
        this->Phase = fVar10;
      }
      fVar15 = fVar10 * fVar4 - fVar2;
      fVar10 = (float)((uint)fVar15 & uVar3);
      fVar14 = fVar2 - fVar10;
      fVar10 = fVar14 * fVar10 * fVar16;
      auVar12 = ZEXT416((uint)fVar10);
      fVar10 = FMath::FastAsin((fVar14 * fVar15 * fVar5) / (fVar6 - fVar10));
      *pfVar8 = fVar10 * fVar7;
      pfVar8 = pfVar8 + 1;
      fVar10 = fVar17 * fVar13 + this->Phase;
      auVar11 = ZEXT416((uint)fVar10);
      this->Phase = fVar10;
    }
  }
  else {
    for (; 0 < iVar9; iVar9 = iVar9 + -1) {
      fVar13 = this->Phase;
      if (fVar1 <= fVar13) {
        auVar11 = roundps(auVar11,ZEXT416((uint)fVar13),3);
        fVar13 = fVar13 - auVar11._0_4_;
        this->Phase = fVar13;
      }
      if (fVar13 < 0.0) {
        auVar11 = roundps(auVar12,ZEXT416((uint)fVar13),3);
        fVar13 = fVar13 - (auVar11._0_4_ + fVar1);
        this->Phase = fVar13;
      }
      fVar14 = fVar13 * fVar5 - fVar4;
      fVar13 = (float)((uint)fVar14 & uVar3);
      fVar10 = fVar4 - fVar13;
      fVar13 = fVar10 * fVar13 * fVar2;
      auVar12 = ZEXT416((uint)fVar13);
      fVar13 = fVar7 - fVar13;
      auVar11 = ZEXT416((uint)fVar13);
      fVar13 = FMath::FastAsin((fVar10 * fVar14 * fVar6) / fVar13);
      *pfVar8 = fVar13 * __real_3f22f984;
      pfVar8 = pfVar8 + 1;
      this->Phase = fVar16 * fVar17 + this->Phase;
      fVar16 = (param_1->FrequencyHz - this->CurrentFreq) * param_1->GlideEaseFactor +
               this->CurrentFreq;
      this->CurrentFreq = fVar16;
    }
  }
  return;
}

