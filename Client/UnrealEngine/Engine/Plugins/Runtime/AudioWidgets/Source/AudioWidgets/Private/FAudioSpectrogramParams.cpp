// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 2

// FAudioSpectrogramParams @ 14d8b2360

FAudioSpectrogramParams * __thiscall
AudioWidgets::FAudioSpectrogramParams::FAudioSpectrogramParams(FAudioSpectrogramParams *this)

{
  this->NumChannels = 1;
  (this->ExternalAudioBus).field0_0x0.DebugPtr = (UAudioBus *)0x0;
  this->AudioDeviceId = 0xffffffff;
  (this->AnalyzerType).Value = FFT;
  (this->AnalyzerType).bIsSet = true;
  *(undefined8 *)&(this->AnalyzerType).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->AnalyzerType).Getter = 0;
  *(undefined8 *)&(this->AnalyzerType).Getter.field_0x8 = 0;
  (this->FFTAnalyzerFFTSize).Value = Max;
  (this->FFTAnalyzerFFTSize).bIsSet = true;
  *(undefined8 *)&(this->FFTAnalyzerFFTSize).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->FFTAnalyzerFFTSize).Getter = 0;
  *(undefined8 *)&(this->FFTAnalyzerFFTSize).Getter.field_0x8 = 0;
  (this->CQTAnalyzerFFTSize).Value = XXLarge;
  (this->CQTAnalyzerFFTSize).bIsSet = true;
  *(undefined8 *)&(this->CQTAnalyzerFFTSize).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->CQTAnalyzerFFTSize).Getter = 0;
  *(undefined8 *)&(this->CQTAnalyzerFFTSize).Getter.field_0x8 = 0;
  (this->FrequencyAxisPixelBucketMode).Value = Average;
  (this->FrequencyAxisPixelBucketMode).bIsSet = true;
  *(undefined8 *)&(this->FrequencyAxisPixelBucketMode).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->FrequencyAxisPixelBucketMode).Getter = 0;
  *(undefined8 *)&(this->FrequencyAxisPixelBucketMode).Getter.field_0x8 = 0;
  (this->FrequencyAxisScale).Value = Logarithmic;
  (this->FrequencyAxisScale).bIsSet = true;
  *(undefined8 *)&(this->FrequencyAxisScale).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->FrequencyAxisScale).Getter = 0;
  *(undefined8 *)&(this->FrequencyAxisScale).Getter.field_0x8 = 0;
  (this->ColorMap).Value = BlackToWhite;
  (this->ColorMap).bIsSet = true;
  *(undefined8 *)&(this->ColorMap).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ColorMap).Getter = 0;
  *(undefined8 *)&(this->ColorMap).Getter.field_0x8 = 0;
  (this->Orientation).Value = Orient_Horizontal;
  (this->Orientation).bIsSet = true;
  *(undefined8 *)&(this->Orientation).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->Orientation).Getter = 0;
  *(undefined8 *)&(this->Orientation).Getter.field_0x8 = 0;
  *(undefined8 *)&this->OnAnalyzerTypeMenuEntryClicked = 0;
  *(undefined8 *)&(this->OnAnalyzerTypeMenuEntryClicked).field_0x8 = 0;
  *(undefined4 *)&(this->OnAnalyzerTypeMenuEntryClicked).field_0x10 = 0;
  *(undefined8 *)&this->OnFFTAnalyzerFFTSizeMenuEntryClicked = 0;
  *(undefined8 *)&(this->OnFFTAnalyzerFFTSizeMenuEntryClicked).field_0x8 = 0;
  *(undefined4 *)&(this->OnFFTAnalyzerFFTSizeMenuEntryClicked).field_0x10 = 0;
  *(undefined8 *)&this->OnCQTAnalyzerFFTSizeMenuEntryClicked = 0;
  *(undefined8 *)&(this->OnCQTAnalyzerFFTSizeMenuEntryClicked).field_0x8 = 0;
  *(undefined4 *)&(this->OnCQTAnalyzerFFTSizeMenuEntryClicked).field_0x10 = 0;
  *(undefined8 *)&this->OnFrequencyAxisPixelBucketModeMenuEntryClicked = 0;
  *(undefined8 *)&(this->OnFrequencyAxisPixelBucketModeMenuEntryClicked).field_0x8 = 0;
  *(undefined4 *)&(this->OnFrequencyAxisPixelBucketModeMenuEntryClicked).field_0x10 = 0;
  *(undefined8 *)&this->OnFrequencyAxisScaleMenuEntryClicked = 0;
  *(undefined8 *)&(this->OnFrequencyAxisScaleMenuEntryClicked).field_0x8 = 0;
  *(undefined4 *)&(this->OnFrequencyAxisScaleMenuEntryClicked).field_0x10 = 0;
  *(undefined8 *)&this->OnColorMapMenuEntryClicked = 0;
  *(undefined8 *)&(this->OnColorMapMenuEntryClicked).field_0x8 = 0;
  *(undefined4 *)&(this->OnColorMapMenuEntryClicked).field_0x10 = 0;
  *(undefined8 *)&this->OnOrientationMenuEntryClicked = 0;
  *(undefined8 *)&(this->OnOrientationMenuEntryClicked).field_0x8 = 0;
  *(undefined4 *)&(this->OnOrientationMenuEntryClicked).field_0x10 = 0;
  return this;
}

// ~FAudioSpectrogramParams @ 14d8be700

void __thiscall
AudioWidgets::FAudioSpectrogramParams::~FAudioSpectrogramParams(FAudioSpectrogramParams *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnOrientationMenuEntryClicked);
  pvVar1 = *(void **)&(this->OnOrientationMenuEntryClicked).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnOrientationMenuEntryClicked);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnColorMapMenuEntryClicked);
  pvVar1 = *(void **)&(this->OnColorMapMenuEntryClicked).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnColorMapMenuEntryClicked);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnFrequencyAxisScaleMenuEntryClicked);
  pvVar1 = *(void **)&(this->OnFrequencyAxisScaleMenuEntryClicked).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFrequencyAxisScaleMenuEntryClicked);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnFrequencyAxisPixelBucketModeMenuEntryClicked);
  pvVar1 = *(void **)&(this->OnFrequencyAxisPixelBucketModeMenuEntryClicked).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFrequencyAxisPixelBucketModeMenuEntryClicked);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnCQTAnalyzerFFTSizeMenuEntryClicked);
  pvVar1 = *(void **)&(this->OnCQTAnalyzerFFTSizeMenuEntryClicked).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnCQTAnalyzerFFTSizeMenuEntryClicked);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnFFTAnalyzerFFTSizeMenuEntryClicked);
  pvVar1 = *(void **)&(this->OnFFTAnalyzerFFTSizeMenuEntryClicked).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnFFTAnalyzerFFTSizeMenuEntryClicked);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnAnalyzerTypeMenuEntryClicked);
  pvVar1 = *(void **)&(this->OnAnalyzerTypeMenuEntryClicked).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnAnalyzerTypeMenuEntryClicked);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Orientation).Getter);
  pvVar1 = *(void **)&(this->Orientation).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Orientation).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ColorMap).Getter);
  pvVar1 = *(void **)&(this->ColorMap).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ColorMap).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->FrequencyAxisScale).Getter);
  pvVar1 = *(void **)&(this->FrequencyAxisScale).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->FrequencyAxisScale).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->FrequencyAxisPixelBucketMode).Getter);
  pvVar1 = *(void **)&(this->FrequencyAxisPixelBucketMode).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->FrequencyAxisPixelBucketMode).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CQTAnalyzerFFTSize).Getter);
  pvVar1 = *(void **)&(this->CQTAnalyzerFFTSize).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->CQTAnalyzerFFTSize).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->FFTAnalyzerFFTSize).Getter);
  pvVar1 = *(void **)&(this->FFTAnalyzerFFTSize).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->FFTAnalyzerFFTSize).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->AnalyzerType).Getter);
  pvVar1 = *(void **)&(this->AnalyzerType).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AnalyzerType).Getter);
  return;
}

