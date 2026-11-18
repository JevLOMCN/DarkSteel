// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 2

// ExtractFromPowerSpectrum @ 1444fb620

float __thiscall
Audio::FSpectrumBandExtractor::FNNBandSpec::ExtractFromPowerSpectrum
          (FNNBandSpec *this,float *param_1,int param_2)

{
  int iVar1;
  
  if (this->Index < param_2) {
    param_2 = this->Index;
  }
  iVar1 = 0;
  if (0 < param_2) {
    iVar1 = param_2;
  }
  return param_1[iVar1];
}

// Update @ 14451fa80

void __thiscall
Audio::FSpectrumBandExtractor::FNNBandSpec::Update
          (FNNBandSpec *this,FSpectrumBandExtractorSettings *param_1,
          FSpectrumBandExtractorSpectrumSettings *param_2)

{
  EFFTScaling EVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = __real_3f800000;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  EVar1 = param_2->FFTScaling;
  fVar4 = (float)param_2->FFTSize;
  if ((float)param_2->FFTSize <= fVar5) {
    fVar4 = fVar5;
  }
  if (EVar1 != None) {
    if (EVar1 == MultipliedByFFTSize) {
      fVar4 = fVar5 / (fVar4 * fVar4);
      goto LAB_14451fabf;
    }
    if (EVar1 == MultipliedBySqrtFFTSize) {
      fVar4 = fVar5 / fVar4;
      goto LAB_14451fabf;
    }
    if (EVar1 == DividedByFFTSize) {
      fVar4 = fVar4 * fVar4;
      goto LAB_14451fabf;
    }
    if (EVar1 == DividedBySqrtFFTSize) goto LAB_14451fabf;
  }
  fVar4 = fVar5;
LAB_14451fabf:
  *(float *)&this->_padding_ = fVar4;
  fVar4 = param_2->SampleRate;
  if (param_2->SampleRate <= fVar5) {
    fVar4 = fVar5;
  }
  iVar2 = param_2->FFTSize / 2;
  fVar5 = (float)param_2->FFTSize;
  iVar3 = (int)ROUND((*(float *)((longlong)&this->_padding_ + 4) / fVar4) * (fVar5 + fVar5) +
                     __real_3f000000) >> 1;
  if (iVar3 < iVar2) {
    iVar2 = iVar3;
  }
  iVar3 = 0;
  if (0 < iVar2) {
    iVar3 = iVar2;
  }
  this->Index = iVar3;
  return;
}

