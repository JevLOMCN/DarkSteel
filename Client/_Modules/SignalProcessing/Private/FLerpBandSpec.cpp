// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 2

// ExtractFromPowerSpectrum @ 1444fb5d0

float __thiscall
Audio::FSpectrumBandExtractor::FLerpBandSpec::ExtractFromPowerSpectrum
          (FLerpBandSpec *this,float *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2;
  if (this->LowerIndex < param_2) {
    iVar2 = this->LowerIndex;
  }
  if (this->UpperIndex < param_2) {
    param_2 = this->UpperIndex;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = 0;
  if (0 < param_2) {
    iVar2 = param_2;
  }
  return (param_1[iVar2] - param_1[iVar1]) * this->Alpha + param_1[iVar1];
}

// Update @ 14451f560

void __thiscall
Audio::FSpectrumBandExtractor::FLerpBandSpec::Update
          (FLerpBandSpec *this,FSpectrumBandExtractorSettings *param_1,
          FSpectrumBandExtractorSpectrumSettings *param_2)

{
  EFFTScaling EVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  
  fVar2 = __real_3f800000;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  EVar1 = param_2->FFTScaling;
  fVar7 = (float)param_2->FFTSize;
  if ((float)param_2->FFTSize <= fVar2) {
    fVar7 = fVar2;
  }
  if (EVar1 != None) {
    if (EVar1 == MultipliedByFFTSize) {
      fVar7 = fVar2 / (fVar7 * fVar7);
      goto LAB_14451f5ab;
    }
    if (EVar1 == MultipliedBySqrtFFTSize) {
      fVar7 = fVar2 / fVar7;
      goto LAB_14451f5ab;
    }
    if (EVar1 == DividedByFFTSize) {
      fVar7 = fVar7 * fVar7;
      goto LAB_14451f5ab;
    }
    if (EVar1 == DividedBySqrtFFTSize) goto LAB_14451f5ab;
  }
  fVar7 = fVar2;
LAB_14451f5ab:
  fVar8 = *(float *)((longlong)&this->_padding_ + 4);
  *(float *)&this->_padding_ = fVar7;
  fVar7 = param_2->SampleRate;
  if (param_2->SampleRate <= fVar2) {
    fVar7 = fVar2;
  }
  iVar3 = param_2->FFTSize / 2;
  fVar7 = (fVar8 / fVar7) * (float)param_2->FFTSize;
  iVar6 = (int)ROUND((fVar7 + fVar7) - __real_3f000000) >> 1;
  iVar5 = iVar3;
  if (iVar6 < iVar3) {
    iVar5 = iVar6;
  }
  iVar4 = 0;
  if (0 < iVar5) {
    iVar4 = iVar5;
  }
  this->LowerIndex = iVar4;
  if (iVar6 + 1 < iVar3) {
    iVar3 = iVar6 + 1;
  }
  iVar5 = 0;
  if (0 < iVar3) {
    iVar5 = iVar3;
  }
  this->UpperIndex = iVar5;
  fVar8 = fVar7 - (float)iVar6;
  if (fVar2 <= fVar7 - (float)iVar6) {
    fVar8 = fVar2;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  this->Alpha = fVar8;
  return;
}

