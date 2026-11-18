// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 2

// FAudioSpectrumAnalyzerParams @ 14d8b3da0

FAudioSpectrumAnalyzerParams * __thiscall
AudioWidgets::FAudioSpectrumAnalyzerParams::FAudioSpectrumAnalyzerParams
          (FAudioSpectrumAnalyzerParams *this)

{
  (this->Ballistics).Value = Digital;
  (this->Ballistics).bIsSet = true;
  (this->ExternalAudioBus).field0_0x0.DebugPtr = (UAudioBus *)0x0;
  this->NumChannels = 1;
  this->AudioDeviceId = 0xffffffff;
  *(undefined8 *)&(this->Ballistics).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->Ballistics).Getter = 0;
  *(undefined8 *)&(this->Ballistics).Getter.field_0x8 = 0;
  (this->AnalyzerType).Value = CQT;
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
  (this->TiltExponent).Value = 0.0;
  (this->TiltExponent).bIsSet = true;
  *(undefined8 *)&(this->TiltExponent).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->TiltExponent).Getter = 0;
  *(undefined8 *)&(this->TiltExponent).Getter.field_0x8 = 0;
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
  (this->bDisplayFrequencyAxisLabels).Value = false;
  (this->bDisplayFrequencyAxisLabels).bIsSet = true;
  *(undefined8 *)&(this->bDisplayFrequencyAxisLabels).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->bDisplayFrequencyAxisLabels).Getter = 0;
  *(undefined8 *)&(this->bDisplayFrequencyAxisLabels).Getter.field_0x8 = 0;
  (this->bDisplaySoundLevelAxisLabels).Value = false;
  (this->bDisplaySoundLevelAxisLabels).bIsSet = true;
  *(undefined8 *)&(this->bDisplaySoundLevelAxisLabels).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->bDisplaySoundLevelAxisLabels).Getter = 0;
  *(undefined8 *)&(this->bDisplaySoundLevelAxisLabels).Getter.field_0x8 = 0;
  *(undefined8 *)&this->OnBallisticsMenuEntryClicked = 0;
  *(undefined8 *)&(this->OnBallisticsMenuEntryClicked).field_0x8 = 0;
  *(undefined4 *)&(this->OnBallisticsMenuEntryClicked).field_0x10 = 0;
  *(undefined8 *)&this->OnAnalyzerTypeMenuEntryClicked = 0;
  *(undefined8 *)&(this->OnAnalyzerTypeMenuEntryClicked).field_0x8 = 0;
  *(undefined4 *)&(this->OnAnalyzerTypeMenuEntryClicked).field_0x10 = 0;
  *(undefined8 *)&this->OnFFTAnalyzerFFTSizeMenuEntryClicked = 0;
  *(undefined8 *)&(this->OnFFTAnalyzerFFTSizeMenuEntryClicked).field_0x8 = 0;
  *(undefined4 *)&(this->OnFFTAnalyzerFFTSizeMenuEntryClicked).field_0x10 = 0;
  *(undefined8 *)&this->OnCQTAnalyzerFFTSizeMenuEntryClicked = 0;
  *(undefined8 *)&(this->OnCQTAnalyzerFFTSizeMenuEntryClicked).field_0x8 = 0;
  *(undefined4 *)&(this->OnCQTAnalyzerFFTSizeMenuEntryClicked).field_0x10 = 0;
  *(undefined8 *)&this->OnTiltSpectrumMenuEntryClicked = 0;
  *(undefined8 *)&(this->OnTiltSpectrumMenuEntryClicked).field_0x8 = 0;
  *(undefined4 *)&(this->OnTiltSpectrumMenuEntryClicked).field_0x10 = 0;
  *(undefined8 *)&this->OnFrequencyAxisPixelBucketModeMenuEntryClicked = 0;
  *(undefined8 *)&(this->OnFrequencyAxisPixelBucketModeMenuEntryClicked).field_0x8 = 0;
  *(undefined4 *)&(this->OnFrequencyAxisPixelBucketModeMenuEntryClicked).field_0x10 = 0;
  *(undefined8 *)&this->OnFrequencyAxisScaleMenuEntryClicked = 0;
  *(undefined8 *)&(this->OnFrequencyAxisScaleMenuEntryClicked).field_0x8 = 0;
  *(undefined4 *)&(this->OnFrequencyAxisScaleMenuEntryClicked).field_0x10 = 0;
  *(undefined8 *)&this->OnDisplayFrequencyAxisLabelsButtonToggled = 0;
  *(undefined8 *)&(this->OnDisplayFrequencyAxisLabelsButtonToggled).field_0x8 = 0;
  *(undefined4 *)&(this->OnDisplayFrequencyAxisLabelsButtonToggled).field_0x10 = 0;
  *(undefined8 *)&this->OnDisplaySoundLevelAxisLabelsButtonToggled = 0;
  *(undefined8 *)&(this->OnDisplaySoundLevelAxisLabelsButtonToggled).field_0x8 = 0;
  *(undefined4 *)&(this->OnDisplaySoundLevelAxisLabelsButtonToggled).field_0x10 = 0;
  this->PlotStyle = (FAudioSpectrumPlotStyle *)0x0;
  return this;
}

// ~FAudioSpectrumAnalyzerParams @ 14d8bed60

void __thiscall
AudioWidgets::FAudioSpectrumAnalyzerParams::~FAudioSpectrumAnalyzerParams
          (FAudioSpectrumAnalyzerParams *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnDisplaySoundLevelAxisLabelsButtonToggled);
  pvVar1 = *(void **)&(this->OnDisplaySoundLevelAxisLabelsButtonToggled).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDisplaySoundLevelAxisLabelsButtonToggled);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &this->OnDisplayFrequencyAxisLabelsButtonToggled);
  pvVar1 = *(void **)&(this->OnDisplayFrequencyAxisLabelsButtonToggled).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnDisplayFrequencyAxisLabelsButtonToggled);
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
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnTiltSpectrumMenuEntryClicked);
  pvVar1 = *(void **)&(this->OnTiltSpectrumMenuEntryClicked).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnTiltSpectrumMenuEntryClicked);
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
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnBallisticsMenuEntryClicked);
  pvVar1 = *(void **)&(this->OnBallisticsMenuEntryClicked).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnBallisticsMenuEntryClicked);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->bDisplaySoundLevelAxisLabels).Getter);
  pvVar1 = *(void **)&(this->bDisplaySoundLevelAxisLabels).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bDisplaySoundLevelAxisLabels).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->bDisplayFrequencyAxisLabels).Getter);
  pvVar1 = *(void **)&(this->bDisplayFrequencyAxisLabels).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bDisplayFrequencyAxisLabels).Getter);
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
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->TiltExponent).Getter);
  pvVar1 = *(void **)&(this->TiltExponent).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->TiltExponent).Getter);
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
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->Ballistics).Getter);
  pvVar1 = *(void **)&(this->Ballistics).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->Ballistics).Getter);
  return;
}

