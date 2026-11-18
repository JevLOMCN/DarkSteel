// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 17

// FBiquadFilter @ 1444a25b0

FBiquadFilter * __thiscall Audio::FBiquadFilter::FBiquadFilter(FBiquadFilter *this)

{
  this->bEnabled = true;
  this->_padding_ = (longlong)&___7FBiquadFilter_Audio__6B_;
  this->FilterType = Lowpass;
  this->Biquad = (FBiquadCoeff *)0x0;
  this->SampleRate = 0.0;
  this->NumChannels = 0;
  this->Frequency = 0.0;
  this->Bandwidth = 0.0;
  this->GainDB = 0.0;
  return this;
}

// ~FBiquadFilter @ 1444a6040

void __thiscall Audio::FBiquadFilter::~FBiquadFilter(FBiquadFilter *this)

{
  FBiquadCoeff *pFVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7FBiquadFilter_Audio__6B_;
  pFVar1 = this->Biquad;
  if (pFVar1 == (FBiquadCoeff *)0x0) {
    return;
  }
  if (pFVar1 != (FBiquadCoeff *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::FreeExternal(pFVar1);
      return;
    }
    DoGamethreadHook(2);
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ArrayCalculateResponseInPlace @ 1444aadd0

void __thiscall
Audio::FBiquadFilter::ArrayCalculateResponseInPlace
          (FBiquadFilter *this,TArrayView<float,int> *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  FBiquadCoeff *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_res8;
  float local_res10;
  float fStackX_14;
  
  if ((this->NumChannels < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ChannelIndex < NumChannels",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\Filter.cpp"
                         ,0x104,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar3 = param_1->ArrayNum;
  pFVar5 = this->Biquad;
  if ((((longlong)iVar3 & 1U) != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumFloats % 2 == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\Filter.cpp"
                         ,0x108,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar10 = 0;
  if (0 < iVar3) {
    lVar11 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar8 = uVar10 + 1;
      fVar1 = param_1->DataPtr[lVar11];
      uVar9 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      fVar2 = param_1->DataPtr[lVar11 + 1];
      fVar14 = pFVar5->A0 * fVar1 + pFVar5->A1;
      fVar12 = pFVar5->A0 * fVar2;
      fVar13 = fVar1 + pFVar5->B1;
      local_res8._4_4_ = fVar14 * fVar2 + fVar12 * fVar1;
      local_res8._0_4_ = (fVar14 * fVar1 - fVar12 * fVar2) + pFVar5->A2;
      fStackX_14 = (fVar13 + fVar1) * fVar2;
      local_res10 = (fVar13 * fVar1 - fVar2 * fVar2) + pFVar5->B2;
      std::complex<float>::operator/=((complex<float> *)&local_res8,(complex<float> *)&local_res10);
      fVar1 = (float)local_res8;
      uVar9 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar4 = param_1->ArrayNum;
      param_1->DataPtr[lVar11] = fVar1;
      fVar1 = local_res8._4_4_;
      uVar9 = 0;
      if ((int)uVar8 < iVar4) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar10 = uVar10 + 2;
      param_1->DataPtr[lVar11 + 1] = fVar1;
      lVar11 = lVar11 + 2;
    } while (lVar11 < iVar3);
  }
  return;
}

// CalculateBiquadCoefficients @ 1444b75a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Audio::FBiquadFilter::CalculateBiquadCoefficients(FBiquadFilter *this)

{
  int iVar1;
  longlong lVar2;
  float fVar3;
  undefined8 extraout_XMM0_Qa;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar7 = this->SampleRate;
  fVar9 = this->Frequency;
  fVar6 = (fVar9 / fVar7) * __real_40c90fdb;
  __libm_sse2_sincosf_();
  fVar10 = __real_3f800000;
  fVar5 = (float)extraout_XMM0_Qa;
  fVar4 = (float)((ulonglong)extraout_XMM0_Qa >> 0x20);
  fVar13 = __real_3f800000 / fVar5;
  fVar3 = sinhf(fVar6 * fVar13 * this->Bandwidth * ___real_3eb17218);
  fVar3 = fVar3 * fVar5;
  fVar6 = fVar10;
  switch(this->FilterType) {
  default:
    fVar8 = fVar10 - fVar4;
    fVar9 = fVar8;
    goto LAB_1444b7994;
  case Highpass:
    fVar8 = fVar4 + fVar10;
    fVar9 = __real_bf800000 - fVar4;
LAB_1444b7994:
    fVar8 = fVar8 * __real_3f000000;
    fVar7 = fVar8;
LAB_1444b79a0:
    fVar11 = fVar4 * __real_c0000000;
    goto LAB_1444b79a9;
  case Bandpass:
    fVar8 = (float)((uint)fVar3 ^ __xmm_80000000800000008000000080000000);
    fVar9 = 0.0;
    fVar7 = fVar3;
    goto LAB_1444b79a0;
  case Notch:
    fVar9 = fVar4 * __real_c0000000;
    fVar7 = fVar10;
    fVar11 = fVar9;
    fVar8 = fVar10;
    goto LAB_1444b79a9;
  case ParametricEQ:
    fVar7 = powf(__real_41200000,this->GainDB * __real_3ccccccd);
    fVar9 = fVar4 * __real_c0000000;
    fVar6 = fVar7 * fVar3;
    fVar3 = fVar3 / fVar7;
    fVar7 = fVar6 + fVar10;
    fVar11 = fVar9;
    fVar8 = fVar10 - fVar6;
LAB_1444b79a9:
    fVar13 = fVar10 - fVar3;
    fVar6 = fVar3 + fVar10;
    break;
  case LowShelf:
    fVar8 = powf(__real_41200000,this->GainDB * __real_3ccccccd);
    fVar3 = fVar8 - fVar10;
    fVar9 = fVar8 + fVar10;
    fVar12 = fVar9 - fVar3 * fVar4;
    fVar5 = SQRT(fVar8 + fVar8) * fVar5;
    fVar13 = fVar3 * fVar4 + fVar9;
    fVar9 = fVar9 * fVar4;
    fVar6 = fVar13 + fVar5;
    fVar7 = (fVar12 + fVar5) * fVar8;
    fVar13 = fVar13 - fVar5;
    fVar11 = fVar3 * __real_c0000000 - (fVar9 + fVar9);
    fVar9 = (fVar3 - fVar9) * (fVar8 + fVar8);
    fVar8 = (fVar12 - fVar5) * fVar8;
    break;
  case HighShelf:
    fVar7 = powf(__real_41200000,this->GainDB * __real_3ccccccd);
    fVar9 = fVar7 - fVar10;
    fVar3 = fVar7 + fVar10;
    fVar5 = SQRT(fVar7 + fVar7) * fVar5;
    fVar12 = fVar9 * fVar4 + fVar3;
    fVar13 = fVar3 - fVar9 * fVar4;
    fVar11 = fVar9 - fVar3 * fVar4;
    fVar6 = fVar13 + fVar5;
    fVar11 = fVar11 + fVar11;
    fVar8 = (fVar12 - fVar5) * fVar7;
    fVar13 = fVar13 - fVar5;
    fVar9 = (fVar3 * fVar4 + fVar9) * fVar7 * __real_c0000000;
    fVar7 = (fVar12 + fVar5) * fVar7;
    break;
  case AllPass:
    fVar7 = fVar10 - fVar3;
    fVar9 = fVar4 * __real_c0000000;
    fVar8 = fVar3 + fVar10;
    fVar13 = fVar7;
    fVar11 = fVar9;
    fVar6 = fVar8;
    break;
  case ButterworthLowPass:
    fVar7 = tanf((__real_40490fdb / fVar7) * fVar9);
    fVar3 = (((fVar3 + fVar3) * fVar13) / fVar7) * __real_3fb504f3;
    fVar5 = fVar10 / (fVar7 * fVar7);
    fVar7 = fVar10 / (fVar3 + fVar10 + fVar5);
    fVar9 = fVar7 + fVar7;
    fVar13 = ((fVar10 - fVar3) + fVar5) * fVar7;
    fVar11 = (fVar10 - fVar5) * fVar9;
    fVar8 = fVar7;
    break;
  case ButterworthHighPass:
    fVar7 = tanf((__real_40490fdb / fVar7) * fVar9);
    fVar5 = fVar7 * fVar7;
    fVar3 = fVar13 * fVar3 * fVar7 * __real_403504f3;
    fVar7 = fVar10 / (fVar3 + fVar10 + fVar5);
    fVar9 = fVar7 * __real_c0000000;
    fVar13 = ((fVar10 - fVar3) + fVar5) * fVar7;
    fVar11 = (fVar10 - fVar5) * fVar9;
    fVar8 = fVar7;
  }
  iVar1 = _finite((double)fVar6);
  if (iVar1 == 0) {
    fVar7 = 0.0;
    fVar9 = 0.0;
    fVar8 = 0.0;
    fVar11 = 0.0;
    fVar13 = 0.0;
  }
  else {
    fVar10 = fVar10 / fVar6;
    fVar7 = fVar7 * fVar10;
    fVar9 = fVar9 * fVar10;
    fVar8 = fVar8 * fVar10;
    fVar11 = fVar11 * fVar10;
    fVar13 = fVar13 * fVar10;
  }
  iVar1 = 0;
  if (0 < this->NumChannels) {
    lVar2 = 0;
    do {
      iVar1 = iVar1 + 1;
      *(float *)((longlong)&this->Biquad->A0 + lVar2) = fVar7;
      *(float *)((longlong)&this->Biquad->A1 + lVar2) = fVar9;
      *(float *)((longlong)&this->Biquad->A2 + lVar2) = fVar8;
      *(float *)((longlong)&this->Biquad->B1 + lVar2) = fVar11;
      *(float *)((longlong)&this->Biquad->B2 + lVar2) = fVar13;
      lVar2 = lVar2 + 0x24;
    } while (iVar1 < this->NumChannels);
  }
  return;
}

// ClampCutoffFrequency @ 1444b8300

float __thiscall Audio::FBiquadFilter::ClampCutoffFrequency(FBiquadFilter *this,float param_1)

{
  float fVar1;
  
  fVar1 = this->SampleRate * __real_3ee66666;
  if (param_1 <= fVar1) {
    fVar1 = param_1;
  }
  if (fVar1 <= __real_40a00000) {
    fVar1 = __real_40a00000;
  }
  return fVar1;
}

// GetNumChannels @ 1444c07d0

int __thiscall Audio::FBiquadFilter::GetNumChannels(FBiquadFilter *this)

{
  return this->NumChannels;
}

// Init @ 1444c1b80

void __thiscall
Audio::FBiquadFilter::Init
          (FBiquadFilter *this,float param_1,int param_2,Type param_3,float param_4,float param_5,
          float param_6)

{
  undefined1 auVar1 [16];
  ulong64 uVar2;
  FBiquadCoeff *pFVar3;
  float *pfVar4;
  ulonglong uVar5;
  float fVar6;
  
  this->SampleRate = param_1;
  fVar6 = param_1 * __real_3ee66666;
  this->NumChannels = param_2;
  this->Bandwidth = param_5;
  this->FilterType = param_3;
  if (param_4 <= fVar6) {
    fVar6 = param_4;
  }
  if (fVar6 <= __real_40a00000) {
    fVar6 = __real_40a00000;
  }
  this->Frequency = fVar6;
  this->GainDB = param_6;
  if (this->Biquad != (FBiquadCoeff *)0x0) {
    operator_delete__(this->Biquad);
  }
  uVar5 = (ulonglong)this->NumChannels;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar5;
  uVar2 = SUB168(ZEXT816(0x24) * auVar1,0);
  if (SUB168(ZEXT816(0x24) * auVar1,8) != 0) {
    uVar2 = 0xffffffffffffffff;
  }
  pFVar3 = operator_new__(uVar2);
  if (pFVar3 == (FBiquadCoeff *)0x0) {
    pFVar3 = (FBiquadCoeff *)0x0;
  }
  else if (uVar5 != 0) {
    pfVar4 = &pFVar3->A2;
    do {
      ((FBiquadCoeff *)(pfVar4 + -2))->A0 = 1.0;
      ((FBiquadCoeff *)(pfVar4 + -2))->A1 = 0.0;
      *(undefined8 *)pfVar4 = 0;
      *(undefined8 *)(pfVar4 + 2) = 0;
      *(undefined8 *)(pfVar4 + 4) = 0;
      pfVar4[6] = 0.0;
      pfVar4 = pfVar4 + 9;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  this->Biquad = pFVar3;
  Reset(this);
  CalculateBiquadCoefficients(this);
  return;
}

// ProcessAudio @ 1444d6430

void __thiscall
Audio::FBiquadFilter::ProcessAudio(FBiquadFilter *this,float *param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  FBiquadCoeff *pFVar6;
  longlong lVar7;
  float *pfVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  lVar12 = (longlong)param_2;
  if (this->bEnabled != false) {
    uVar11 = 0;
    if (this->NumChannels == 1) {
      lVar13 = (longlong)param_1 - (longlong)param_3;
      pFVar6 = this->Biquad;
      fVar1 = pFVar6->A0;
      fVar2 = pFVar6->A1;
      fVar3 = pFVar6->A2;
      fVar4 = pFVar6->B1;
      fVar5 = pFVar6->B2;
      fVar19 = pFVar6->X_Z1;
      fVar18 = pFVar6->X_Z2;
      fVar15 = pFVar6->Y_Z1;
      fVar14 = pFVar6->Y_Z2;
      if (3 < lVar12) {
        pfVar8 = param_3 + 1;
        lVar7 = (lVar12 - 4U >> 2) + 1;
        uVar11 = lVar7 * 4;
        do {
          fVar16 = *(float *)(lVar13 + -4 + (longlong)pfVar8);
          fVar14 = ((fVar16 * fVar1 + fVar19 * fVar2 + fVar18 * fVar3) - fVar15 * fVar4) -
                   fVar14 * fVar5;
          pfVar8[-1] = fVar14;
          fVar17 = *(float *)(lVar13 + (longlong)pfVar8);
          fVar15 = ((fVar16 * fVar2 + fVar17 * fVar1 + fVar19 * fVar3) - fVar14 * fVar4) -
                   fVar15 * fVar5;
          *pfVar8 = fVar15;
          fVar18 = *(float *)(lVar13 + 4 + (longlong)pfVar8);
          fVar14 = ((fVar18 * fVar1 + fVar17 * fVar2 + fVar16 * fVar3) - fVar15 * fVar4) -
                   fVar14 * fVar5;
          pfVar8[1] = fVar14;
          fVar19 = *(float *)(lVar13 + 8 + (longlong)pfVar8);
          fVar15 = ((fVar19 * fVar1 + fVar18 * fVar2 + fVar17 * fVar3) - fVar14 * fVar4) -
                   fVar15 * fVar5;
          pfVar8[2] = fVar15;
          pfVar8 = pfVar8 + 4;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      if ((longlong)uVar11 < lVar12) {
        pfVar8 = param_3 + uVar11;
        lVar12 = lVar12 - uVar11;
        fVar16 = fVar14;
        fVar17 = fVar18;
        do {
          fVar18 = fVar19;
          fVar14 = fVar15;
          fVar19 = *(float *)(lVar13 + (longlong)pfVar8);
          fVar15 = ((fVar19 * fVar1 + fVar18 * fVar2 + fVar17 * fVar3) - fVar14 * fVar4) -
                   fVar16 * fVar5;
          *pfVar8 = fVar15;
          pfVar8 = pfVar8 + 1;
          lVar12 = lVar12 + -1;
          fVar16 = fVar14;
          fVar17 = fVar18;
        } while (lVar12 != 0);
      }
      this->Biquad->X_Z1 = fVar19;
      this->Biquad->X_Z2 = fVar18;
      this->Biquad->Y_Z1 = fVar15;
      this->Biquad->Y_Z2 = fVar14;
    }
    else if (0 < param_2) {
      do {
        iVar9 = (int)uVar11;
        ProcessAudioFrame(this,param_1 + iVar9,param_3 + iVar9);
        uVar10 = iVar9 + this->NumChannels;
        uVar11 = (ulonglong)uVar10;
      } while ((int)uVar10 < param_2);
    }
  }
  return;
}

// ProcessAudio @ 1444d6720

void __thiscall
Audio::FBiquadFilter::ProcessAudio(FBiquadFilter *this,float **param_1,int param_2,float **param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  float *pfVar5;
  FBiquadCoeff *pFVar6;
  longlong lVar7;
  longlong lVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  FBiquadCoeff **ppFVar13;
  longlong lVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  
  if (this->bEnabled != false) {
    iVar15 = 0;
    lVar10 = (longlong)param_2;
    if (0 < this->NumChannels) {
      lVar7 = 0;
      lVar14 = (longlong)param_1 - (longlong)param_3;
      do {
        ppFVar13 = &this->Biquad;
        lVar4 = *(longlong *)(lVar14 + (longlong)param_3);
        lVar12 = 0;
        pfVar5 = *param_3;
        if (3 < lVar10) {
          lVar11 = lVar4 - (longlong)pfVar5;
          lVar8 = (lVar10 - 4U >> 2) + 1;
          pfVar9 = pfVar5 + 1;
          lVar12 = lVar8 * 4;
          do {
            pFVar6 = *ppFVar13;
            fVar17 = *(float *)((longlong)pfVar9 + lVar11 + -4);
            fVar1 = *(float *)((longlong)&pFVar6->X_Z1 + lVar7);
            fVar16 = *(float *)((longlong)&pFVar6->Y_Z1 + lVar7);
            fVar2 = *(float *)((longlong)&pFVar6->Y_Z2 + lVar7);
            *(float *)((longlong)&pFVar6->Y_Z2 + lVar7) = fVar16;
            fVar16 = ((fVar1 * *(float *)((longlong)&pFVar6->A1 + lVar7) +
                       fVar17 * *(float *)((longlong)&pFVar6->A0 + lVar7) +
                      *(float *)((longlong)&pFVar6->A2 + lVar7) *
                      *(float *)((longlong)&pFVar6->X_Z2 + lVar7)) -
                     fVar16 * *(float *)((longlong)&pFVar6->B1 + lVar7)) -
                     *(float *)((longlong)&pFVar6->B2 + lVar7) * fVar2;
            *(float *)((longlong)&pFVar6->Y_Z1 + lVar7) = fVar16;
            *(float *)((longlong)&pFVar6->X_Z2 + lVar7) = fVar1;
            *(float *)((longlong)&pFVar6->X_Z1 + lVar7) = fVar17;
            pfVar9[-1] = fVar16;
            pFVar6 = *ppFVar13;
            fVar17 = *(float *)((longlong)pfVar9 + lVar11);
            fVar1 = *(float *)((longlong)&pFVar6->X_Z1 + lVar7);
            fVar16 = *(float *)((longlong)&pFVar6->Y_Z1 + lVar7);
            fVar2 = *(float *)((longlong)&pFVar6->Y_Z2 + lVar7);
            *(float *)((longlong)&pFVar6->Y_Z2 + lVar7) = fVar16;
            fVar16 = ((fVar1 * *(float *)((longlong)&pFVar6->A1 + lVar7) +
                       fVar17 * *(float *)((longlong)&pFVar6->A0 + lVar7) +
                      *(float *)((longlong)&pFVar6->A2 + lVar7) *
                      *(float *)((longlong)&pFVar6->X_Z2 + lVar7)) -
                     fVar16 * *(float *)((longlong)&pFVar6->B1 + lVar7)) -
                     *(float *)((longlong)&pFVar6->B2 + lVar7) * fVar2;
            *(float *)((longlong)&pFVar6->Y_Z1 + lVar7) = fVar16;
            *(float *)((longlong)&pFVar6->X_Z2 + lVar7) = fVar1;
            *(float *)((longlong)&pFVar6->X_Z1 + lVar7) = fVar17;
            *pfVar9 = fVar16;
            pFVar6 = *ppFVar13;
            fVar17 = *(float *)((longlong)pfVar9 + lVar11 + 4);
            fVar1 = *(float *)((longlong)&pFVar6->X_Z1 + lVar7);
            fVar16 = *(float *)((longlong)&pFVar6->Y_Z1 + lVar7);
            fVar2 = *(float *)((longlong)&pFVar6->Y_Z2 + lVar7);
            *(float *)((longlong)&pFVar6->Y_Z2 + lVar7) = fVar16;
            fVar16 = ((fVar1 * *(float *)((longlong)&pFVar6->A1 + lVar7) +
                       fVar17 * *(float *)((longlong)&pFVar6->A0 + lVar7) +
                      *(float *)((longlong)&pFVar6->A2 + lVar7) *
                      *(float *)((longlong)&pFVar6->X_Z2 + lVar7)) -
                     fVar16 * *(float *)((longlong)&pFVar6->B1 + lVar7)) -
                     *(float *)((longlong)&pFVar6->B2 + lVar7) * fVar2;
            *(float *)((longlong)&pFVar6->Y_Z1 + lVar7) = fVar16;
            *(float *)((longlong)&pFVar6->X_Z2 + lVar7) = fVar1;
            *(float *)((longlong)&pFVar6->X_Z1 + lVar7) = fVar17;
            pfVar9[1] = fVar16;
            pFVar6 = *ppFVar13;
            fVar17 = *(float *)((longlong)pfVar9 + lVar11 + 8);
            fVar1 = *(float *)((longlong)&pFVar6->X_Z1 + lVar7);
            fVar16 = *(float *)((longlong)&pFVar6->Y_Z1 + lVar7);
            fVar2 = *(float *)((longlong)&pFVar6->Y_Z2 + lVar7);
            *(float *)((longlong)&pFVar6->Y_Z2 + lVar7) = fVar16;
            fVar16 = ((fVar1 * *(float *)((longlong)&pFVar6->A1 + lVar7) +
                       fVar17 * *(float *)((longlong)&pFVar6->A0 + lVar7) +
                      *(float *)((longlong)&pFVar6->A2 + lVar7) *
                      *(float *)((longlong)&pFVar6->X_Z2 + lVar7)) -
                     fVar16 * *(float *)((longlong)&pFVar6->B1 + lVar7)) -
                     *(float *)((longlong)&pFVar6->B2 + lVar7) * fVar2;
            *(float *)((longlong)&pFVar6->Y_Z1 + lVar7) = fVar16;
            *(float *)((longlong)&pFVar6->X_Z2 + lVar7) = fVar1;
            *(float *)((longlong)&pFVar6->X_Z1 + lVar7) = fVar17;
            pfVar9[2] = fVar16;
            pfVar9 = pfVar9 + 4;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        if (lVar12 < lVar10) {
          pfVar9 = pfVar5 + lVar12;
          lVar12 = lVar10 - lVar12;
          do {
            pFVar6 = this->Biquad;
            fVar17 = *(float *)((longlong)pfVar9 + (lVar4 - (longlong)pfVar5));
            fVar1 = *(float *)((longlong)&pFVar6->X_Z1 + lVar7);
            fVar16 = *(float *)((longlong)&pFVar6->Y_Z1 + lVar7);
            fVar2 = *(float *)((longlong)&pFVar6->X_Z2 + lVar7);
            *(float *)((longlong)&pFVar6->X_Z2 + lVar7) = fVar1;
            *(float *)((longlong)&pFVar6->X_Z1 + lVar7) = fVar17;
            fVar3 = *(float *)((longlong)&pFVar6->Y_Z2 + lVar7);
            *(float *)((longlong)&pFVar6->Y_Z2 + lVar7) = fVar16;
            fVar17 = ((fVar1 * *(float *)((longlong)&pFVar6->A1 + lVar7) +
                       fVar17 * *(float *)((longlong)&pFVar6->A0 + lVar7) +
                      *(float *)((longlong)&pFVar6->A2 + lVar7) * fVar2) -
                     fVar16 * *(float *)((longlong)&pFVar6->B1 + lVar7)) -
                     *(float *)((longlong)&pFVar6->B2 + lVar7) * fVar3;
            *(float *)((longlong)&pFVar6->Y_Z1 + lVar7) = fVar17;
            *pfVar9 = fVar17;
            pfVar9 = pfVar9 + 1;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
        iVar15 = iVar15 + 1;
        param_3 = param_3 + 1;
        lVar7 = lVar7 + 0x24;
      } while (iVar15 < this->NumChannels);
    }
  }
  return;
}

// ProcessAudioFrame @ 1444de040

void __thiscall
Audio::FBiquadFilter::ProcessAudioFrame(FBiquadFilter *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  FBiquadCoeff *pFVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  float fVar9;
  
  iVar8 = 0;
  if (0 < this->NumChannels) {
    lVar7 = 0;
    lVar6 = (longlong)param_1 - (longlong)param_2;
    do {
      pFVar5 = this->Biquad;
      iVar8 = iVar8 + 1;
      fVar9 = *(float *)((longlong)param_2 + lVar6);
      fVar1 = *(float *)((longlong)&pFVar5->X_Z1 + lVar7);
      fVar2 = *(float *)((longlong)&pFVar5->Y_Z1 + lVar7);
      fVar3 = *(float *)((longlong)&pFVar5->X_Z2 + lVar7);
      *(float *)((longlong)&pFVar5->X_Z2 + lVar7) = fVar1;
      *(float *)((longlong)&pFVar5->X_Z1 + lVar7) = fVar9;
      fVar4 = *(float *)((longlong)&pFVar5->Y_Z2 + lVar7);
      *(float *)((longlong)&pFVar5->Y_Z2 + lVar7) = fVar2;
      fVar9 = ((fVar1 * *(float *)((longlong)&pFVar5->A1 + lVar7) +
                fVar9 * *(float *)((longlong)&pFVar5->A0 + lVar7) +
               *(float *)((longlong)&pFVar5->A2 + lVar7) * fVar3) -
              fVar2 * *(float *)((longlong)&pFVar5->B1 + lVar7)) -
              *(float *)((longlong)&pFVar5->B2 + lVar7) * fVar4;
      *(float *)((longlong)&pFVar5->Y_Z1 + lVar7) = fVar9;
      lVar7 = lVar7 + 0x24;
      *param_2 = fVar9;
      param_2 = param_2 + 1;
    } while (iVar8 < this->NumChannels);
  }
  return;
}

// Reset @ 1444e15c0

void __thiscall Audio::FBiquadFilter::Reset(FBiquadFilter *this)

{
  FBiquadCoeff *pFVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = 0;
  uVar4 = uVar2;
  if (0 < this->NumChannels) {
    do {
      pFVar1 = this->Biquad;
      uVar3 = (int)uVar4 + 1;
      *(undefined8 *)((longlong)&pFVar1->X_Z1 + uVar2) = 0;
      *(undefined8 *)((longlong)&pFVar1->Y_Z1 + uVar2) = 0;
      uVar2 = uVar2 + 0x24;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < this->NumChannels);
  }
  return;
}

// SetBandwidth @ 1444e2ec0

void __thiscall Audio::FBiquadFilter::SetBandwidth(FBiquadFilter *this,float param_1)

{
  if (param_1 != this->Bandwidth) {
    this->Bandwidth = param_1;
    CalculateBiquadCoefficients(this);
    return;
  }
  return;
}

// SetEnabled @ 1444e3770

void __thiscall Audio::FBiquadFilter::SetEnabled(FBiquadFilter *this,bool param_1)

{
  this->bEnabled = param_1;
  return;
}

// SetFrequency @ 1444e3a10

void __thiscall Audio::FBiquadFilter::SetFrequency(FBiquadFilter *this,float param_1)

{
  float fVar1;
  
  fVar1 = this->SampleRate * __real_3ee66666;
  if (param_1 <= fVar1) {
    fVar1 = param_1;
  }
  if (fVar1 <= __real_40a00000) {
    fVar1 = __real_40a00000;
  }
  if (fVar1 != this->Frequency) {
    this->Frequency = fVar1;
    CalculateBiquadCoefficients(this);
    return;
  }
  return;
}

// SetGainDB @ 1444e3c40

void __thiscall Audio::FBiquadFilter::SetGainDB(FBiquadFilter *this,float param_1)

{
  if (param_1 != this->GainDB) {
    this->GainDB = param_1;
    if ((this->FilterType == ParametricEQ) || (this->FilterType - LowShelf < 2)) {
      CalculateBiquadCoefficients(this);
      return;
    }
  }
  return;
}

// SetParams @ 1444e4e40

void __thiscall
Audio::FBiquadFilter::SetParams
          (FBiquadFilter *this,Type param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  fVar1 = this->SampleRate * __real_3ee66666;
  if (param_2 <= fVar1) {
    fVar1 = param_2;
  }
  if (fVar1 <= __real_40a00000) {
    fVar1 = __real_40a00000;
  }
  if (this->FilterType == param_1) {
    if ((((float)((uint)(this->Frequency - fVar1) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
          __real_322bcc77) &&
        ((float)((uint)(this->Bandwidth - param_3) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
         __real_322bcc77)) &&
       ((float)((uint)(this->GainDB - param_4) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
        __real_322bcc77)) {
      return;
    }
  }
  this->Frequency = fVar1;
  this->Bandwidth = param_3;
  this->GainDB = param_4;
  this->FilterType = param_1;
  CalculateBiquadCoefficients(this);
  return;
}

// SetType @ 1444e5bb0

void __thiscall Audio::FBiquadFilter::SetType(FBiquadFilter *this,Type param_1)

{
  if (this->FilterType != param_1) {
    this->FilterType = param_1;
    CalculateBiquadCoefficients(this);
    return;
  }
  return;
}

