// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 2

// ~FBandSpec @ 1444f36f0

void __thiscall Audio::FSpectrumBandExtractor::FBandSpec::~FBandSpec(FBandSpec *this)

{
  this->_padding_ = (longlong)&___7FBandSpec_FSpectrumBandExtractor_Audio__6B_;
  return;
}

// Update @ 14451f350

void __thiscall
Audio::FSpectrumBandExtractor::FBandSpec::Update
          (FBandSpec *this,FSpectrumBandExtractorSettings *param_1,
          FSpectrumBandExtractorSpectrumSettings *param_2)

{
  EFFTScaling EVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = __real_3f800000;
  this->PowerSpectrumScale = 1.0;
  EVar1 = param_2->FFTScaling;
  fVar2 = (float)param_2->FFTSize;
  if ((float)param_2->FFTSize <= fVar3) {
    fVar2 = fVar3;
  }
  if (EVar1 != None) {
    if (EVar1 == MultipliedByFFTSize) {
      fVar2 = fVar2 * fVar2;
    }
    else if (EVar1 != MultipliedBySqrtFFTSize) {
      if (EVar1 == DividedByFFTSize) {
        this->PowerSpectrumScale = fVar2 * fVar2;
        return;
      }
      if (EVar1 == DividedBySqrtFFTSize) {
        this->PowerSpectrumScale = fVar2;
        return;
      }
      goto LAB_14451f3a1;
    }
    fVar3 = fVar3 / fVar2;
  }
LAB_14451f3a1:
  this->PowerSpectrumScale = fVar3;
  return;
}

