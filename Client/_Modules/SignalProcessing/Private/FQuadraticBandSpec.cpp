// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 2

// ExtractFromPowerSpectrum @ 1444fb640

float __thiscall
Audio::FSpectrumBandExtractor::FQuadraticBandSpec::ExtractFromPowerSpectrum
          (FQuadraticBandSpec *this,float *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2;
  if (this->LowerIndex < param_2) {
    iVar1 = this->LowerIndex;
  }
  iVar3 = param_2;
  if (this->MidIndex < param_2) {
    iVar3 = this->MidIndex;
  }
  if (this->UpperIndex < param_2) {
    param_2 = this->UpperIndex;
  }
  iVar2 = 0;
  if (0 < iVar3) {
    iVar2 = iVar3;
  }
  iVar3 = 0;
  if (0 < iVar1) {
    iVar3 = iVar1;
  }
  iVar1 = 0;
  if (0 < param_2) {
    iVar1 = param_2;
  }
  return param_1[iVar2] * this->MidWeight + param_1[iVar3] * this->LowerWeight +
         param_1[iVar1] * this->UpperWeight;
}

// Update @ 14451fcb0

void __thiscall
Audio::FSpectrumBandExtractor::FQuadraticBandSpec::Update
          (FQuadraticBandSpec *this,FSpectrumBandExtractorSettings *param_1,
          FSpectrumBandExtractorSpectrumSettings *param_2)

{
  int iVar1;
  EFFTScaling EVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  fVar4 = __real_3f000000;
  fVar3 = __real_3f800000;
  EVar2 = param_2->FFTScaling;
  fVar12 = (float)param_2->FFTSize;
  if ((float)param_2->FFTSize <= __real_3f800000) {
    fVar12 = __real_3f800000;
  }
  if (EVar2 != None) {
    if (EVar2 == MultipliedByFFTSize) {
      fVar12 = __real_3f800000 / (fVar12 * fVar12);
      goto LAB_14451fd08;
    }
    if (EVar2 == MultipliedBySqrtFFTSize) {
      fVar12 = __real_3f800000 / fVar12;
      goto LAB_14451fd08;
    }
    if (EVar2 == DividedByFFTSize) {
      fVar12 = fVar12 * fVar12;
      goto LAB_14451fd08;
    }
    if (EVar2 == DividedBySqrtFFTSize) goto LAB_14451fd08;
  }
  fVar12 = __real_3f800000;
LAB_14451fd08:
  fVar11 = *(float *)&this->_padding_;
  if (__real_461c4000 <= *(float *)&this->_padding_) {
    fVar11 = __real_461c4000;
  }
  fVar10 = *(float *)((longlong)&this->_padding_ + 4);
  *(float *)&this->_padding_ = fVar12;
  if (fVar11 <= __real_38d1b717) {
    fVar11 = __real_38d1b717;
  }
  *(float *)&this->_padding_ = fVar11;
  fVar12 = param_2->SampleRate;
  if (param_2->SampleRate <= fVar3) {
    fVar12 = fVar3;
  }
  iVar5 = param_2->FFTSize / 2;
  fVar12 = (fVar10 / fVar12) * (float)param_2->FFTSize;
  iVar9 = (int)ROUND(fVar12 + fVar12 + fVar4) >> 1;
  iVar1 = iVar9 + -1;
  iVar7 = iVar5;
  if (iVar1 < iVar5) {
    iVar7 = iVar1;
  }
  iVar8 = 0;
  iVar6 = iVar8;
  if (0 < iVar7) {
    iVar6 = iVar7;
  }
  fVar11 = fVar12 - (float)iVar1;
  this->LowerIndex = iVar6;
  iVar7 = iVar5;
  if (iVar9 < iVar5) {
    iVar7 = iVar9;
  }
  fVar10 = fVar11 - __real_40000000;
  iVar6 = iVar8;
  if (0 < iVar7) {
    iVar6 = iVar7;
  }
  this->MidIndex = iVar6;
  if (iVar9 + 1 < iVar5) {
    iVar5 = iVar9 + 1;
  }
  if (0 < iVar5) {
    iVar8 = iVar5;
  }
  this->UpperIndex = iVar8;
  this->MidWeight = ((float)iVar1 - fVar12) * fVar10;
  this->UpperWeight = (fVar11 - fVar3) * fVar11 * fVar4;
  this->LowerWeight = (fVar11 - fVar3) * fVar10 * fVar4;
  return;
}

