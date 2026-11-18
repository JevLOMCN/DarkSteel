// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ResonanceAudio
// Functions: 4

// ConstantGain @ 14f073fc0

void __cdecl
vraudio::ConstantGain
          (ulong64 param_1,float param_2,ChannelView *param_3,ChannelView *param_4,bool param_5)

{
  ChannelView *pCVar1;
  ChannelView *pCVar2;
  float *pfVar3;
  float *pfVar4;
  ulonglong uVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  
  uVar5 = param_3->size_;
  uVar16 = (param_1 & 0xfffffffffffffffc) + 4;
  uVar18 = uVar5;
  if (uVar16 < uVar5) {
    uVar18 = uVar16;
  }
  if (param_5) {
    if (param_1 < uVar18) {
      if (3 < uVar18 - param_1) {
        do {
          param_4->begin_itr_[param_1] =
               param_2 * param_3->begin_itr_[param_1] + param_4->begin_itr_[param_1];
          param_4->begin_itr_[param_1 + 1] =
               param_2 * param_3->begin_itr_[param_1 + 1] + param_4->begin_itr_[param_1 + 1];
          param_4->begin_itr_[param_1 + 2] =
               param_2 * param_3->begin_itr_[param_1 + 2] + param_4->begin_itr_[param_1 + 2];
          param_4->begin_itr_[param_1 + 3] =
               param_2 * param_3->begin_itr_[param_1 + 3] + param_4->begin_itr_[param_1 + 3];
          param_1 = param_1 + 4;
        } while (param_1 < uVar18 - 3);
        if (uVar18 <= param_1) goto LAB_14f07422f;
      }
      do {
        param_4->begin_itr_[param_1] =
             param_2 * param_3->begin_itr_[param_1] + param_4->begin_itr_[param_1];
        param_1 = param_1 + 1;
      } while (param_1 < uVar18);
    }
  }
  else {
    uVar16 = uVar18 - param_1;
    if (param_1 < uVar18) {
      if (0xf < uVar16) {
        pfVar6 = param_3->begin_itr_;
        pfVar7 = param_4->begin_itr_;
        pCVar1 = (ChannelView *)(pfVar7 + param_1);
        pCVar2 = (ChannelView *)(pfVar7 + (uVar18 - 1));
        if (((((ChannelView *)(pfVar6 + (uVar18 - 1)) < pCVar1) ||
             (pCVar2 < (ChannelView *)(pfVar6 + param_1))) &&
            ((param_4 < pCVar1 || (pCVar2 < param_4)))) &&
           ((param_3 < pCVar1 || (pCVar2 < param_3)))) {
          lVar17 = param_1 * 4 + 0x20;
          do {
            pfVar4 = (float *)(lVar17 + -0x20 + (longlong)pfVar6);
            fVar8 = pfVar4[1];
            fVar9 = pfVar4[2];
            fVar10 = pfVar4[3];
            param_1 = param_1 + 0x10;
            pfVar3 = (float *)(lVar17 + (longlong)pfVar6);
            fVar11 = *pfVar3;
            fVar12 = pfVar3[1];
            fVar13 = pfVar3[2];
            fVar14 = pfVar3[3];
            pfVar3 = (float *)(lVar17 + -0x20 + (longlong)pfVar7);
            *pfVar3 = *pfVar4 * param_2;
            pfVar3[1] = fVar8 * param_2;
            pfVar3[2] = fVar9 * param_2;
            pfVar3[3] = fVar10 * param_2;
            pfVar3 = (float *)(lVar17 + -0x10 + (longlong)pfVar6);
            fVar8 = pfVar3[1];
            fVar9 = pfVar3[2];
            fVar10 = pfVar3[3];
            pfVar4 = (float *)(lVar17 + -0x10 + (longlong)pfVar7);
            *pfVar4 = *pfVar3 * param_2;
            pfVar4[1] = fVar8 * param_2;
            pfVar4[2] = fVar9 * param_2;
            pfVar4[3] = fVar10 * param_2;
            pfVar3 = (float *)(lVar17 + 0x10 + (longlong)pfVar6);
            fVar8 = *pfVar3;
            fVar9 = pfVar3[1];
            fVar10 = pfVar3[2];
            fVar15 = pfVar3[3];
            pfVar3 = (float *)(lVar17 + (longlong)pfVar7);
            *pfVar3 = fVar11 * param_2;
            pfVar3[1] = fVar12 * param_2;
            pfVar3[2] = fVar13 * param_2;
            pfVar3[3] = fVar14 * param_2;
            pfVar3 = (float *)(lVar17 + 0x10 + (longlong)pfVar7);
            *pfVar3 = fVar8 * param_2;
            pfVar3[1] = fVar9 * param_2;
            pfVar3[2] = fVar10 * param_2;
            pfVar3[3] = fVar15 * param_2;
            lVar17 = lVar17 + 0x40;
          } while (param_1 < uVar18 - ((uint)uVar16 & 0xf));
          if (uVar18 <= param_1) goto LAB_14f07422f;
        }
      }
      if (3 < uVar18 - param_1) {
        do {
          param_4->begin_itr_[param_1] = param_2 * param_3->begin_itr_[param_1];
          param_4->begin_itr_[param_1 + 1] = param_2 * param_3->begin_itr_[param_1 + 1];
          param_4->begin_itr_[param_1 + 2] = param_2 * param_3->begin_itr_[param_1 + 2];
          param_4->begin_itr_[param_1 + 3] = param_2 * param_3->begin_itr_[param_1 + 3];
          param_1 = param_1 + 4;
        } while (param_1 < uVar18 - 3);
        if (uVar18 <= param_1) goto LAB_14f07422f;
      }
      do {
        param_4->begin_itr_[param_1] = param_2 * param_3->begin_itr_[param_1];
        param_1 = param_1 + 1;
      } while (param_1 < uVar18);
    }
  }
LAB_14f07422f:
  if (uVar18 == uVar5) {
    return;
  }
  if (!param_5) {
    ScalarMultiply(uVar5 - uVar18,param_2,param_3->begin_itr_ + uVar18,param_4->begin_itr_ + uVar18)
    ;
    return;
  }
  ScalarMultiplyAndAccumulate
            (uVar5 - uVar18,param_2,param_3->begin_itr_ + uVar18,param_4->begin_itr_ + uVar18);
  return;
}

// IsGainNearUnity @ 14f074280

bool __cdecl vraudio::IsGainNearUnity(float param_1)

{
  return (float)((uint)(__real_3f800000 - param_1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <
         __real_3a83126f;
}

// IsGainNearZero @ 14f0742b0

bool __cdecl vraudio::IsGainNearZero(float param_1)

{
  return (float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff) < __real_3a83126f;
}

// LinearGainRamp @ 14f0742d0

float __cdecl
vraudio::LinearGainRamp
          (ulong64 param_1,float param_2,float param_3,ChannelView *param_4,ChannelView *param_5,
          bool param_6)

{
  ulonglong uVar1;
  ulong64 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar2 = param_1;
  if (param_4->size_ < param_1) {
    uVar2 = param_4->size_;
  }
  uVar1 = 0;
  fVar3 = (param_3 - param_2) / (float)param_1;
  if (param_6) {
    if (3 < uVar2) {
      do {
        param_5->begin_itr_[uVar1] =
             param_2 * param_4->begin_itr_[uVar1] + param_5->begin_itr_[uVar1];
        fVar4 = param_2 + fVar3 + fVar3;
        param_5->begin_itr_[uVar1 + 1] =
             (param_2 + fVar3) * param_4->begin_itr_[uVar1 + 1] + param_5->begin_itr_[uVar1 + 1];
        fVar5 = fVar4 + fVar3;
        param_5->begin_itr_[uVar1 + 2] =
             fVar4 * param_4->begin_itr_[uVar1 + 2] + param_5->begin_itr_[uVar1 + 2];
        param_2 = fVar5 + fVar3;
        param_5->begin_itr_[uVar1 + 3] =
             fVar5 * param_4->begin_itr_[uVar1 + 3] + param_5->begin_itr_[uVar1 + 3];
        uVar1 = uVar1 + 4;
      } while (uVar1 < uVar2 - 3);
    }
    if (uVar1 < uVar2) {
      do {
        fVar4 = param_2 + fVar3;
        param_5->begin_itr_[uVar1] =
             param_2 * param_4->begin_itr_[uVar1] + param_5->begin_itr_[uVar1];
        uVar1 = uVar1 + 1;
        param_2 = fVar4;
      } while (uVar1 < uVar2);
      return fVar4;
    }
  }
  else {
    if (3 < uVar2) {
      do {
        param_5->begin_itr_[uVar1] = param_2 * param_4->begin_itr_[uVar1];
        fVar4 = param_2 + fVar3 + fVar3;
        param_5->begin_itr_[uVar1 + 1] = (param_2 + fVar3) * param_4->begin_itr_[uVar1 + 1];
        fVar5 = fVar4 + fVar3;
        param_5->begin_itr_[uVar1 + 2] = fVar4 * param_4->begin_itr_[uVar1 + 2];
        param_2 = fVar5 + fVar3;
        param_5->begin_itr_[uVar1 + 3] = fVar5 * param_4->begin_itr_[uVar1 + 3];
        uVar1 = uVar1 + 4;
      } while (uVar1 < uVar2 - 3);
    }
    for (; uVar1 < uVar2; uVar1 = uVar1 + 1) {
      param_5->begin_itr_[uVar1] = param_2 * param_4->begin_itr_[uVar1];
      param_2 = param_2 + fVar3;
    }
  }
  return param_2;
}

