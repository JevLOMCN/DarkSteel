// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 43

// SAudioSpectrumPlot @ 14d8b7d60

SAudioSpectrumPlot * __thiscall SAudioSpectrumPlot::SAudioSpectrumPlot(SAudioSpectrumPlot *this)

{
  SCompoundWidget::SCompoundWidget((SCompoundWidget *)this);
  this->_padding_ = (longlong)&___7SAudioSpectrumPlot__6B_;
  (this->ViewMinFrequency).Value = 0.0;
  (this->ViewMinFrequency).bIsSet = false;
  (this->ContextMenuExtender).Object = (FExtender *)0x0;
  (this->ContextMenuExtender).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->ViewMinFrequency).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ViewMinFrequency).Getter = 0;
  *(undefined8 *)&(this->ViewMinFrequency).Getter.field_0x8 = 0;
  (this->ViewMaxFrequency).Value = 0.0;
  (this->ViewMaxFrequency).bIsSet = false;
  *(undefined8 *)&(this->ViewMaxFrequency).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ViewMaxFrequency).Getter = 0;
  *(undefined8 *)&(this->ViewMaxFrequency).Getter.field_0x8 = 0;
  (this->ViewMinSoundLevel).Value = 0.0;
  (this->ViewMinSoundLevel).bIsSet = false;
  *(undefined8 *)&(this->ViewMinSoundLevel).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ViewMinSoundLevel).Getter = 0;
  *(undefined8 *)&(this->ViewMinSoundLevel).Getter.field_0x8 = 0;
  (this->ViewMaxSoundLevel).Value = 0.0;
  (this->ViewMaxSoundLevel).bIsSet = false;
  *(undefined8 *)&(this->ViewMaxSoundLevel).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->ViewMaxSoundLevel).Getter = 0;
  *(undefined8 *)&(this->ViewMaxSoundLevel).Getter.field_0x8 = 0;
  (this->TiltExponent).Value = 0.0;
  (this->TiltExponent).bIsSet = false;
  *(undefined8 *)&(this->TiltExponent).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->TiltExponent).Getter = 0;
  *(undefined8 *)&(this->TiltExponent).Getter.field_0x8 = 0;
  (this->TiltPivotFrequency).Value = 0.0;
  (this->TiltPivotFrequency).bIsSet = false;
  *(undefined8 *)&(this->TiltPivotFrequency).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->TiltPivotFrequency).Getter = 0;
  *(undefined8 *)&(this->TiltPivotFrequency).Getter.field_0x8 = 0;
  (this->SelectedFrequency).Value.bIsSet = false;
  (this->SelectedFrequency).bIsSet = false;
  *(undefined8 *)&(this->SelectedFrequency).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->SelectedFrequency).Getter = 0;
  *(undefined8 *)&(this->SelectedFrequency).Getter.field_0x8 = 0;
  (this->bDisplayCrosshair).Value = false;
  (this->bDisplayCrosshair).bIsSet = false;
  *(undefined8 *)&(this->bDisplayCrosshair).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->bDisplayCrosshair).Getter = 0;
  *(undefined8 *)&(this->bDisplayCrosshair).Getter.field_0x8 = 0;
  (this->bDisplayFrequencyAxisLabels).Value = false;
  (this->bDisplayFrequencyAxisLabels).bIsSet = false;
  *(undefined8 *)&(this->bDisplayFrequencyAxisLabels).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->bDisplayFrequencyAxisLabels).Getter = 0;
  *(undefined8 *)&(this->bDisplayFrequencyAxisLabels).Getter.field_0x8 = 0;
  (this->bDisplaySoundLevelAxisLabels).Value = false;
  (this->bDisplaySoundLevelAxisLabels).bIsSet = false;
  *(undefined8 *)&(this->bDisplaySoundLevelAxisLabels).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->bDisplaySoundLevelAxisLabels).Getter = 0;
  *(undefined8 *)&(this->bDisplaySoundLevelAxisLabels).Getter.field_0x8 = 0;
  (this->bDisplayFrequencyGridLines).Value = false;
  (this->bDisplayFrequencyGridLines).bIsSet = false;
  *(undefined8 *)&(this->bDisplayFrequencyGridLines).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->bDisplayFrequencyGridLines).Getter = 0;
  *(undefined8 *)&(this->bDisplayFrequencyGridLines).Getter.field_0x8 = 0;
  (this->bDisplaySoundLevelGridLines).Value = false;
  (this->bDisplaySoundLevelGridLines).bIsSet = false;
  *(undefined8 *)&(this->bDisplaySoundLevelGridLines).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->bDisplaySoundLevelGridLines).Getter = 0;
  *(undefined8 *)&(this->bDisplaySoundLevelGridLines).Getter.field_0x8 = 0;
  (this->FrequencyAxisScale).Value = Linear;
  (this->FrequencyAxisScale).bIsSet = false;
  *(undefined8 *)&(this->FrequencyAxisScale).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->FrequencyAxisScale).Getter = 0;
  *(undefined8 *)&(this->FrequencyAxisScale).Getter.field_0x8 = 0;
  (this->FrequencyAxisPixelBucketMode).Value = Sample;
  (this->FrequencyAxisPixelBucketMode).bIsSet = false;
  *(undefined8 *)&(this->FrequencyAxisPixelBucketMode).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->FrequencyAxisPixelBucketMode).Getter = 0;
  *(undefined8 *)&(this->FrequencyAxisPixelBucketMode).Getter.field_0x8 = 0;
  (this->BackgroundColor).Value.ColorUseRule = UseColor_Specified;
  (this->BackgroundColor).bIsSet = false;
  *(undefined8 *)&(this->BackgroundColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->BackgroundColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->BackgroundColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->BackgroundColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->BackgroundColor).Getter = 0;
  *(undefined8 *)&(this->GridColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->GridColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->GridColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->BackgroundColor).Getter.field_0x8 = 0;
  (this->GridColor).Value.ColorUseRule = UseColor_Specified;
  (this->GridColor).bIsSet = false;
  *(undefined8 *)&(this->GridColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->GridColor).Getter = 0;
  *(undefined8 *)&(this->GridColor).Getter.field_0x8 = 0;
  (this->AxisLabelColor).Value.ColorUseRule = UseColor_Specified;
  (this->AxisLabelColor).bIsSet = false;
  *(undefined8 *)&(this->AxisLabelColor).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->AxisLabelColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->AxisLabelColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->AxisLabelColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->AxisLabelColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->AxisLabelColor).Getter = 0;
  (this->CrosshairColor).Value.ColorUseRule = UseColor_Specified;
  (this->CrosshairColor).bIsSet = false;
  *(undefined8 *)&(this->CrosshairColor).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->CrosshairColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->CrosshairColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->CrosshairColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->CrosshairColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->CrosshairColor).Getter = 0;
  (this->SpectrumColor).Value.ColorUseRule = UseColor_Specified;
  (this->SpectrumColor).bIsSet = false;
  *(undefined8 *)&(this->SpectrumColor).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->SpectrumColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->SpectrumColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->SpectrumColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->SpectrumColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->SpectrumColor).Getter = 0;
  (this->bAllowContextMenu).Value = false;
  (this->bAllowContextMenu).bIsSet = false;
  *(undefined8 *)&(this->bAllowContextMenu).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->bAllowContextMenu).Getter = 0;
  *(undefined8 *)&(this->bAllowContextMenu).Getter.field_0x8 = 0;
  *(undefined8 *)&this->OnContextMenuOpening = 0;
  *(undefined8 *)&(this->OnContextMenuOpening).field_0x8 = 0;
  *(undefined4 *)&(this->OnContextMenuOpening).field_0x10 = 0;
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
  *(undefined8 *)&this->OnGetAudioSpectrumData = 0;
  *(undefined8 *)&(this->OnGetAudioSpectrumData).field_0x8 = 0;
  *(undefined4 *)&(this->OnGetAudioSpectrumData).field_0x10 = 0;
  return this;
}

// ~SAudioSpectrumPlot @ 14d8c08b0

void __thiscall SAudioSpectrumPlot::~SAudioSpectrumPlot(SAudioSpectrumPlot *this)

{
  void *pvVar1;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGetAudioSpectrumData);
  pvVar1 = *(void **)&(this->OnGetAudioSpectrumData).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnGetAudioSpectrumData);
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
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnContextMenuOpening);
  pvVar1 = *(void **)&(this->OnContextMenuOpening).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnContextMenuOpening);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bAllowContextMenu).Getter);
  pvVar1 = *(void **)&(this->bAllowContextMenu).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bAllowContextMenu).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SpectrumColor).Getter);
  pvVar1 = *(void **)&(this->SpectrumColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SpectrumColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->CrosshairColor).Getter);
  pvVar1 = *(void **)&(this->CrosshairColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->CrosshairColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->AxisLabelColor).Getter);
  pvVar1 = *(void **)&(this->AxisLabelColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->AxisLabelColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->GridColor).Getter);
  pvVar1 = *(void **)&(this->GridColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->GridColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->BackgroundColor).Getter);
  pvVar1 = *(void **)&(this->BackgroundColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->BackgroundColor).Getter);
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
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->FrequencyAxisScale).Getter);
  pvVar1 = *(void **)&(this->FrequencyAxisScale).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->FrequencyAxisScale).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)
             &(this->bDisplaySoundLevelGridLines).Getter);
  pvVar1 = *(void **)&(this->bDisplaySoundLevelGridLines).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bDisplaySoundLevelGridLines).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bDisplayFrequencyGridLines).Getter
            );
  pvVar1 = *(void **)&(this->bDisplayFrequencyGridLines).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bDisplayFrequencyGridLines).Getter);
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
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->bDisplayCrosshair).Getter);
  pvVar1 = *(void **)&(this->bDisplayCrosshair).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->bDisplayCrosshair).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->SelectedFrequency).Getter);
  pvVar1 = *(void **)&(this->SelectedFrequency).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->SelectedFrequency).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->TiltPivotFrequency).Getter);
  pvVar1 = *(void **)&(this->TiltPivotFrequency).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->TiltPivotFrequency).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->TiltExponent).Getter);
  pvVar1 = *(void **)&(this->TiltExponent).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->TiltExponent).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ViewMaxSoundLevel).Getter);
  pvVar1 = *(void **)&(this->ViewMaxSoundLevel).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ViewMaxSoundLevel).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ViewMinSoundLevel).Getter);
  pvVar1 = *(void **)&(this->ViewMinSoundLevel).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ViewMinSoundLevel).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ViewMaxFrequency).Getter);
  pvVar1 = *(void **)&(this->ViewMaxFrequency).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ViewMaxFrequency).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->ViewMinFrequency).Getter);
  pvVar1 = *(void **)&(this->ViewMinFrequency).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->ViewMinFrequency).Getter);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ContextMenuExtender).SharedReferenceCount.ReferenceController);
  SCompoundWidget::~SCompoundWidget((SCompoundWidget *)this);
  return;
}

// operator() @ 14d8c6ae0

bool __thiscall
`SAudioSpectrumPlot::GetSpectrumLinePoints'::__l2::<lambda_1>::operator()
          (void *this,TVector2<float> param_1,TVector2<float> param_2)

{
  float fVar1;
  float fVar2;
  float local_res10;
  float local_res18;
  
  local_res10 = param_1.field0_0x0._0_4_;
  fVar1 = FAudioSpectrumPlotScaleInfo::FrequencyToLocalX
                    (*(FAudioSpectrumPlotScaleInfo **)this,local_res10);
  fVar1 = fVar1 + fVar1 + __real_3f000000;
  local_res18 = param_2.field0_0x0._0_4_;
  fVar2 = FAudioSpectrumPlotScaleInfo::FrequencyToLocalX
                    (*(FAudioSpectrumPlotScaleInfo **)this,local_res18);
  return (int)ROUND(fVar1) >> 1 == (int)ROUND(fVar2 + fVar2 + __real_3f000000) >> 1;
}

// operator() @ 14d8c8930

void __thiscall
`SAudioSpectrumPlot::BuildFrequencyAxisPixelBucketModeSubMenu'::__l4::<lambda_1>::operator()
          (void *this)

{
  bool bVar1;
  TAttribute<EAudioSpectrumPlotFrequencyAxisPixelBucketMode> local_30;
  
  bVar1 = TAttribute<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode>::IsBound
                    ((void *)(*(longlong *)this + 0x468));
  if (!bVar1) {
    TAttribute<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode>::
    TAttribute<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode><enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode>
              (&local_30,(EAudioSpectrumPlotFrequencyAxisPixelBucketMode *)((longlong)this + 8));
    TAttribute<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode>::operator=
              ((void *)(*(longlong *)this + 0x468),&local_30);
    TAttribute<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode>::
    ~TAttribute<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode>(&local_30);
  }
  TDelegate<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy>
  ::ExecuteIfBound((void *)(*(longlong *)this + 0x5c8),
                   *(EAudioSpectrumPlotFrequencyAxisPixelBucketMode *)((longlong)this + 8));
  return;
}

// operator() @ 14d8c8b30

void __thiscall
`SAudioSpectrumPlot::BuildFrequencyAxisScaleSubMenu'::__l4::<lambda_1>::operator()(void *this)

{
  bool bVar1;
  TAttribute<EAudioSpectrumPlotFrequencyAxisScale> local_30;
  
  bVar1 = TAttribute<enum_EAudioSpectrumPlotFrequencyAxisScale>::IsBound
                    ((void *)(*(longlong *)this + 0x448));
  if (!bVar1) {
    TAttribute<enum_EAudioSpectrumPlotFrequencyAxisScale>::
    TAttribute<enum_EAudioSpectrumPlotFrequencyAxisScale><enum_EAudioSpectrumPlotFrequencyAxisScale>
              (&local_30,(EAudioSpectrumPlotFrequencyAxisScale *)((longlong)this + 8));
    TAttribute<enum_EAudioSpectrumPlotFrequencyAxisScale>::operator=
              ((void *)(*(longlong *)this + 0x448),&local_30);
    TAttribute<enum_EAudioSpectrumPlotFrequencyAxisScale>::
    ~TAttribute<enum_EAudioSpectrumPlotFrequencyAxisScale>(&local_30);
  }
  TDelegate<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisScale),FDefaultDelegateUserPolicy>::
  ExecuteIfBound((void *)(*(longlong *)this + 0x5e0),
                 *(EAudioSpectrumPlotFrequencyAxisScale *)((longlong)this + 8));
  return;
}

// operator() @ 14d8c8d30

void __thiscall
`SAudioSpectrumPlot::BuildTiltSpectrumSubMenu'::__l4::<lambda_1>::operator()(void *this)

{
  bool bVar1;
  TAttribute<float> local_30;
  
  bVar1 = TAttribute<float>::IsBound((TAttribute<float> *)(*(longlong *)this + 0x340));
  if (!bVar1) {
    TAttribute<float>::TAttribute<float><float>(&local_30,(float *)((longlong)this + 0xc));
    TAttribute<float>::operator=((TAttribute<float> *)(*(longlong *)this + 0x340),&local_30);
    TAttribute<float>::~TAttribute<float>(&local_30);
  }
  TDelegate<void___cdecl(enum_EAudioSpectrumPlotTilt),FDefaultDelegateUserPolicy>::ExecuteIfBound
            ((void *)(*(longlong *)this + 0x5b0),*(EAudioSpectrumPlotTilt *)((longlong)this + 8));
  return;
}

// operator() @ 14d8c9420

bool __thiscall
`SAudioSpectrumPlot::DrawCrosshairAndAxisLabels'::__l8::<lambda_1>::operator()
          (void *this,TVector2<float> param_1)

{
  float local_res10;
  bool local_18;
  
  local_res10 = param_1.field0_0x0._0_4_;
  local_18 = local_res10 < *(float *)this || local_res10 == *(float *)this;
  return local_18;
}

// operator() @ 14d8c96b0

float __thiscall
`SAudioSpectrumPlot::DrawPowerSpectrum'::__l10::<lambda_1>::operator()
          (void *this,TVector2<float> *param_1)

{
  float fVar1;
  
  fVar1 = FAudioSpectrumPlotScaleInfo::FrequencyToLocalX
                    (*(FAudioSpectrumPlotScaleInfo **)this,(param_1->field0_0x0)._s_0.X);
  fVar1 = fabsf(fVar1 - (float)((int)ROUND(fVar1 + fVar1 + __real_3f000000) >> 1));
  return fVar1;
}

// operator() @ 14d8c9870

void __thiscall
`SAudioSpectrumPlot::BuildDefaultContextMenu'::__l14::<lambda_1>::operator()(void *this)

{
  bool bVar1;
  bool *pbVar2;
  bool local_37 [7];
  TAttribute<bool> local_30;
  
  bVar1 = TAttribute<bool>::IsBound((TAttribute<bool> *)(*(longlong *)this + 0x3c8));
  if (!bVar1) {
    pbVar2 = TAttribute<bool>::Get((TAttribute<bool> *)(*(longlong *)this + 0x3c8));
    local_37[0] = *pbVar2 == false;
    TAttribute<bool>::TAttribute<bool>(&local_30,local_37);
    TAttribute<bool>::operator=((TAttribute<bool> *)(*(longlong *)this + 0x3c8),&local_30);
    TAttribute<bool>::~TAttribute<bool>(&local_30);
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(*(longlong *)this + 0x5f8)
            );
  return;
}

// operator() @ 14d8ca300

bool __thiscall
`SAudioSpectrumPlot::BuildFrequencyAxisPixelBucketModeSubMenu'::__l4::<lambda_2>::operator()
          (void *this)

{
  EAudioSpectrumPlotFrequencyAxisPixelBucketMode *pEVar1;
  
  pEVar1 = TAttribute<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode>::Get
                     ((void *)(*(longlong *)this + 0x468));
  return *pEVar1 == *(EAudioSpectrumPlotFrequencyAxisPixelBucketMode *)((longlong)this + 8);
}

// operator() @ 14d8ca350

bool __thiscall
`SAudioSpectrumPlot::BuildFrequencyAxisScaleSubMenu'::__l4::<lambda_2>::operator()(void *this)

{
  EAudioSpectrumPlotFrequencyAxisScale *pEVar1;
  
  pEVar1 = TAttribute<enum_EAudioSpectrumPlotFrequencyAxisScale>::Get
                     ((void *)(*(longlong *)this + 0x448));
  return *pEVar1 == *(EAudioSpectrumPlotFrequencyAxisScale *)((longlong)this + 8);
}

// operator() @ 14d8ca3a0

bool __thiscall
`SAudioSpectrumPlot::BuildTiltSpectrumSubMenu'::__l4::<lambda_2>::operator()(void *this)

{
  float *pfVar1;
  
  pfVar1 = TAttribute<float>::Get((TAttribute<float> *)(*(longlong *)this + 0x340));
  return *(float *)((longlong)this + 8) == *pfVar1;
}

// operator() @ 14d8ce7b0

float __thiscall
`SAudioSpectrumPlot::DrawPowerSpectrum'::__l11::<lambda_2>::operator()
          (void *this,TVector2<float> *param_1)

{
  return (float)((uint)(param_1->field0_0x0)._s_0.Y ^ __xmm_80000000800000008000000080000000);
}

// operator() @ 14d8ce8a0

bool __thiscall
`SAudioSpectrumPlot::BuildDefaultContextMenu'::__l14::<lambda_2>::operator()(void *this)

{
  bool *pbVar1;
  
  pbVar1 = TAttribute<bool>::Get((TAttribute<bool> *)(*(longlong *)this + 0x3c8));
  return *pbVar1;
}

// operator() @ 14d8cf040

void __thiscall
`SAudioSpectrumPlot::BuildDefaultContextMenu'::__l17::<lambda_3>::operator()(void *this)

{
  bool bVar1;
  bool *pbVar2;
  bool local_37 [7];
  TAttribute<bool> local_30;
  
  bVar1 = TAttribute<bool>::IsBound((TAttribute<bool> *)(*(longlong *)this + 1000));
  if (!bVar1) {
    pbVar2 = TAttribute<bool>::Get((TAttribute<bool> *)(*(longlong *)this + 1000));
    local_37[0] = *pbVar2 == false;
    TAttribute<bool>::TAttribute<bool>(&local_30,local_37);
    TAttribute<bool>::operator=((TAttribute<bool> *)(*(longlong *)this + 1000),&local_30);
    TAttribute<bool>::~TAttribute<bool>(&local_30);
  }
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
            ((TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(*(longlong *)this + 0x610)
            );
  return;
}

// operator() @ 14d8cf1b0

bool __thiscall
`SAudioSpectrumPlot::BuildDefaultContextMenu'::__l17::<lambda_4>::operator()(void *this)

{
  bool *pbVar1;
  
  pbVar1 = TAttribute<bool>::Get((TAttribute<bool> *)(*(longlong *)this + 1000));
  return *pbVar1;
}

// AddContextMenuExtension @ 14d8d9fb0

TSharedRef<FExtensionBase_const_,1> * __thiscall
SAudioSpectrumPlot::AddContextMenuExtension
          (SAudioSpectrumPlot *this,TSharedRef<FExtensionBase_const_,1> *__return_storage_ptr__,
          Position param_1,TSharedPtr<FUICommandList,1> *param_2,
          TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *param_3)

{
  TSharedRef<FExtender,1> *pTVar1;
  FExtender *this_00;
  TSharedPtr<FExtender,1> local_30;
  TSharedRef<FExtender,1> local_20 [2];
  
  if ((this->ContextMenuExtender).Object == (FExtender *)0x0) {
    pTVar1 = MakeShared<FExtender,1>(local_20);
    TSharedPtr<FExtender,1>::TSharedPtr<FExtender,1><FExtender>(&local_30,pTVar1);
    TSharedPtr<FExtender,1>::operator=(&this->ContextMenuExtender,&local_30);
    TSharedPtr<FExtender,1>::~TSharedPtr<FExtender,1>(&local_30);
    TSharedRef<FExtender,1>::~TSharedRef<FExtender,1>(local_20);
  }
  this_00 = TSharedPtr<FExtender,1>::operator->(&this->ContextMenuExtender);
  FExtender::AddMenuExtension
            (this_00,__return_storage_ptr__,ContextMenuExtensionHook,param_1,param_2,param_3);
  return __return_storage_ptr__;
}

// BuildDefaultContextMenu @ 14d8de6f0

/* WARNING: Removing unreachable block (ram,0x00014d8dfb1d) */
/* WARNING: Removing unreachable block (ram,0x00014d8df605) */
/* WARNING: Removing unreachable block (ram,0x00014d8df1f3) */
/* WARNING: Removing unreachable block (ram,0x00014d8dee05) */
/* WARNING: Removing unreachable block (ram,0x00014d8dea1a) */
/* WARNING: Removing unreachable block (ram,0x00014d8de740) */
/* WARNING: Removing unreachable block (ram,0x00014d8deb2d) */
/* WARNING: Removing unreachable block (ram,0x00014d8def18) */
/* WARNING: Removing unreachable block (ram,0x00014d8df315) */
/* WARNING: Removing unreachable block (ram,0x00014d8df73a) */
/* WARNING: Removing unreachable block (ram,0x00014d8dfc52) */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
SAudioSpectrumPlot::BuildDefaultContextMenu
          (SAudioSpectrumPlot *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  uint uVar1;
  bool bVar2;
  FText *pFVar3;
  longlong lVar4;
  code **ppcVar5;
  pmf_3f89d5d7 *ppVar6;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *pTVar7;
  FNameEntryId local_e1c [2];
  FNameEntryId local_e14 [2];
  FNameEntryId local_e0c [2];
  FNameEntryId local_e04 [2];
  FNameEntryId local_dfc;
  FNameEntryId local_df8 [2];
  FNameEntryId local_df0 [2];
  FNameEntryId local_de8 [2];
  FNameEntryId local_de0 [2];
  FNameEntryId local_dd8 [2];
  FNameEntryId local_dd0 [4];
  FNameEntryId *local_dc0;
  FNameEntryId *local_db8;
  FName local_db0;
  FName local_da8;
  TSharedPtr<FExtender,1> *local_da0;
  TSharedPtr<FUICommandList_const_,1> *local_d98;
  FName local_d90;
  ISlateStyle *local_d88;
  TSharedPtr<FExtender,1> *local_d80;
  TSharedPtr<FUICommandList_const_,1> *local_d78;
  FName local_d70;
  TAttribute<FMenuEntryResizeParams> *local_d68;
  TAttribute<EVisibility> *local_d60;
  FName local_d58;
  FNameEntryId *local_d50;
  FNameEntryId *local_d48;
  FName local_d40;
  FName local_d38;
  FName local_d30;
  FName local_d28;
  FName local_d20;
  FNameEntryId *local_d18;
  FNameEntryId *local_d10;
  FName local_d08;
  FName local_d00;
  FName local_cf8;
  FName local_cf0;
  FName local_ce8;
  TAttribute<EVisibility> *local_ce0;
  FName local_cd8;
  FName local_cd0;
  FSlateIcon *local_cc8;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *local_cc0;
  FNameEntryId *local_cb8;
  FNameEntryId *local_cb0;
  FName local_ca8;
  FName local_ca0;
  FName local_c98;
  FName local_c90;
  FName local_c88;
  FNameEntryId *local_c80;
  FNameEntryId *local_c78;
  FName local_c70;
  FName local_c68;
  FName local_c60;
  FName local_c58;
  FName local_c50;
  TAttribute<EVisibility> *local_c48;
  FName local_c40;
  FName local_c38;
  FSlateIcon *local_c30;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *local_c28;
  FNameEntryId *local_c20;
  FNameEntryId *local_c18;
  FName local_c10;
  FName local_c08;
  FName local_c00;
  FName local_bf8;
  FName local_bf0;
  FNameEntryId *local_be8;
  FNameEntryId *local_be0;
  FName local_bd8;
  FName local_bd0;
  FName local_bc8;
  FName local_bc0;
  FName local_bb8;
  TAttribute<EVisibility> *local_bb0;
  FName local_ba8;
  FName local_ba0;
  FSlateIcon *local_b98;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> *local_b90;
  FNameEntryId *local_b88;
  FNameEntryId *local_b80;
  FName local_b78;
  FName local_b70;
  FName local_b68;
  FName local_b60;
  FName local_b58;
  FName local_b50;
  FNameEntryId *local_b48;
  FNameEntryId *local_b40;
  FName local_b38;
  FName local_b30;
  FName local_b28;
  FName local_b20;
  FName local_b18;
  FName local_b10;
  <lambda_2> local_b08;
  <lambda_2> *local_b00;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_af8;
  <lambda_1> local_af0;
  <lambda_1> *local_ae8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_ae0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_ad8;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_ad0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_ac8;
  TAttribute<EVisibility> *local_ac0;
  TAttribute<FText> *local_ab8;
  FName local_ab0;
  FName local_aa8;
  FUIAction *local_aa0;
  FSlateIcon *local_a98;
  FNameEntryId *local_a90;
  FNameEntryId *local_a88;
  FName local_a80;
  FName local_a78;
  FName local_a70;
  FName local_a68;
  FName local_a60;
  FName local_a58;
  FNameEntryId *local_a50;
  FNameEntryId *local_a48;
  FName local_a40;
  FName local_a38;
  FName local_a30;
  FName local_a28;
  FName local_a20;
  FName local_a18;
  <lambda_4> local_a10;
  <lambda_4> *local_a08;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_a00;
  <lambda_3> local_9f8;
  <lambda_3> *local_9f0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_9e8;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_9e0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_9d8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_9d0;
  TAttribute<EVisibility> *local_9c8;
  TAttribute<FText> *local_9c0;
  FName local_9b8;
  FName local_9b0;
  FUIAction *local_9a8;
  FSlateIcon *local_9a0;
  code *local_998;
  undefined4 local_990;
  code *local_988;
  undefined4 local_980;
  code *local_978;
  undefined4 local_970;
  FNameEntryId local_968;
  undefined4 uStack_964;
  FNameEntryId local_960;
  undefined4 uStack_95c;
  FNameEntryId local_958;
  undefined4 uStack_954;
  FNameEntryId local_950;
  undefined4 uStack_94c;
  FNameEntryId local_948;
  undefined4 uStack_944;
  FNameEntryId local_940;
  undefined4 uStack_93c;
  FNameEntryId local_938;
  undefined4 uStack_934;
  FNameEntryId local_930;
  undefined4 uStack_92c;
  FNameEntryId local_928;
  undefined4 uStack_924;
  FNameEntryId local_920;
  undefined4 uStack_91c;
  FNameEntryId local_918;
  undefined4 uStack_914;
  FText local_910;
  pmf_3f89d5d7 local_8f8;
  FText local_8e8;
  FText local_8d8;
  pmf_3f89d5d7 local_8c8;
  FText local_8b8;
  FText local_8a8;
  pmf_3f89d5d7 local_898;
  FText local_888;
  FText local_878;
  FText local_868;
  FText local_858;
  FText local_848;
  FText local_838;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> local_828;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> local_810;
  TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy> local_7f8;
  TSharedPtr<FExtender,1> local_7e0;
  TSharedPtr<FUICommandList_const_,1> local_7d0;
  TAttribute<EVisibility> local_7c0;
  TAttribute<EVisibility> local_7a0;
  TAttribute<EVisibility> local_780;
  TAttribute<EVisibility> local_760;
  TAttribute<EVisibility> local_740;
  TAttribute<EVisibility> local_720;
  TAttribute<FText> local_700;
  TAttribute<FText> local_6d0;
  TAttribute<FText> local_6a0;
  TAttribute<FText> local_670;
  TAttribute<FText> local_640;
  TAttribute<FText> local_610;
  TAttribute<FText> local_5e0;
  TAttribute<FText> local_5b0;
  TAttribute<FText> local_580;
  TAttribute<FText> local_550;
  TAttribute<FText> local_520;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_4f0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_4d8;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_4c0;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_4a8;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_490;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_478;
  TAttribute<FText> local_460;
  TAttribute<FText> local_430;
  FSlateIcon local_400;
  FSlateIcon local_3e0;
  FSlateIcon local_3c0;
  FSlateIcon local_3a0;
  FSlateIcon local_380;
  FMenuBuilder local_360;
  FUIAction local_1d8;
  FUIAction local_170;
  TAttribute<FMenuEntryResizeParams> local_108;
  
  local_dc0 = FNameEntryId::FNameEntryId(local_e1c);
  uVar1 = local_dc0->Value;
  FNameEntryId::FNameEntryId(&local_968);
  uStack_964 = 0;
  local_db0.Number = 0;
  local_db0.ComparisonIndex.Value = uVar1;
  local_db8 = &local_968;
  local_da8 = local_db0;
  local_d90 = local_db0;
  local_968.Value = uVar1;
  local_d88 = FCoreStyle::Get();
  local_da0 = &local_7e0;
  local_d80 = TSharedPtr<FExtender,1>::TSharedPtr<FExtender,1>(local_da0,&this->ContextMenuExtender)
  ;
  local_d98 = &local_7d0;
  local_d78 = TSharedPtr<FUICommandList_const_,1>::TSharedPtr<FUICommandList_const_,1>
                        (local_d98,(FNullTag *)0x0);
  FMenuBuilder::FMenuBuilder
            (&local_360,true,local_d78,local_d80,false,local_d88,true,local_d90,true);
  local_d68 = TAttribute<FMenuEntryResizeParams>::TAttribute<FMenuEntryResizeParams>(&local_108);
  local_d60 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_7a0);
  pFVar3 = FText::AsLocalizable_Advanced_LocText
                     (&local_910,L"SAudioSpectrumPlot",L"DisplayOptions",L"Display Options");
  TAttribute<FText>::TAttribute<FText>(&local_700,pFVar3);
  local_d70 = ContextMenuExtensionHook;
  local_d58 = ContextMenuExtensionHook;
  FMenuBuilder::BeginSection(&local_360,ContextMenuExtensionHook,&local_700,local_d60,local_d68);
  TAttribute<FText>::~TAttribute<FText>(&local_700);
  FText::~FText(&local_910);
  TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_7a0);
  TAttribute<FMenuEntryResizeParams>::~TAttribute<FMenuEntryResizeParams>(&local_108);
  bVar2 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                     &this->OnTiltSpectrumMenuEntryClicked);
  if ((bVar2) || (bVar2 = TAttribute<float>::IsBound(&this->TiltExponent), !bVar2)) {
    local_ce0 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_780);
    local_d50 = FNameEntryId::FNameEntryId(local_e14);
    uVar1 = local_d50->Value;
    FNameEntryId::FNameEntryId(&local_960);
    uStack_95c = 0;
    local_d40.Number = 0;
    local_d40.ComparisonIndex.Value = uVar1;
    local_d48 = &local_960;
    local_d38 = local_d40;
    local_d30 = local_d40;
    local_d28 = local_d40;
    local_d20 = local_d40;
    local_cd8 = local_d40;
    local_960.Value = uVar1;
    local_d18 = FNameEntryId::FNameEntryId(local_e0c);
    uVar1 = local_d18->Value;
    FNameEntryId::FNameEntryId(&local_958);
    uStack_954 = 0;
    local_d08.Number = 0;
    local_d08.ComparisonIndex.Value = uVar1;
    local_d10 = &local_958;
    local_d00 = local_d08;
    local_cf8 = local_d08;
    local_cf0 = local_d08;
    local_ce8 = local_d08;
    local_cd0 = local_d08;
    local_958.Value = uVar1;
    local_cc8 = FSlateIcon::FSlateIcon(&local_400);
    local_998 = BuildTiltSpectrumSubMenu;
    local_990 = 0;
    ppcVar5 = &local_998;
    ppVar6 = &local_8f8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined1 *)ppVar6 = *(undefined1 *)ppcVar5;
      ppcVar5 = (code **)((longlong)ppcVar5 + 1);
      ppVar6 = (pmf_3f89d5d7 *)&ppVar6->field_0x1;
    }
    local_cc0 = TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
                CreateSP<SAudioSpectrumPlot>(&local_7f8,this,&local_8f8);
    pFVar3 = FText::FText(&local_8d8);
    TAttribute<FText>::TAttribute<FText>(&local_6a0,pFVar3);
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_8e8,L"SAudioSpectrumPlot",L"TiltSpectrum",L"Tilt Spectrum");
    TAttribute<FText>::TAttribute<FText>(&local_6d0,pFVar3);
    FMenuBuilder::AddSubMenu
              (&local_360,&local_6d0,&local_6a0,local_cc0,false,local_cc8,true,local_cd0,local_cd8,
               local_ce0);
    TAttribute<FText>::~TAttribute<FText>(&local_6d0);
    FText::~FText(&local_8e8);
    TAttribute<FText>::~TAttribute<FText>(&local_6a0);
    FText::~FText(&local_8d8);
    TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
    ~TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>(&local_7f8);
    TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_780);
  }
  bVar2 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                     &this->OnFrequencyAxisPixelBucketModeMenuEntryClicked);
  if ((bVar2) ||
     (bVar2 = TAttribute<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode>::IsBound
                        (&this->FrequencyAxisPixelBucketMode), !bVar2)) {
    local_c48 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_7c0);
    local_cb8 = FNameEntryId::FNameEntryId(local_e04);
    uVar1 = local_cb8->Value;
    FNameEntryId::FNameEntryId(&local_950);
    uStack_94c = 0;
    local_ca8.Number = 0;
    local_ca8.ComparisonIndex.Value = uVar1;
    local_cb0 = &local_950;
    local_ca0 = local_ca8;
    local_c98 = local_ca8;
    local_c90 = local_ca8;
    local_c88 = local_ca8;
    local_c40 = local_ca8;
    local_950.Value = uVar1;
    local_c80 = FNameEntryId::FNameEntryId(&local_dfc);
    uVar1 = local_c80->Value;
    FNameEntryId::FNameEntryId(&local_948);
    uStack_944 = 0;
    local_c70.Number = 0;
    local_c70.ComparisonIndex.Value = uVar1;
    local_c78 = &local_948;
    local_c68 = local_c70;
    local_c60 = local_c70;
    local_c58 = local_c70;
    local_c50 = local_c70;
    local_c38 = local_c70;
    local_948.Value = uVar1;
    local_c30 = FSlateIcon::FSlateIcon(&local_3e0);
    local_988 = BuildFrequencyAxisPixelBucketModeSubMenu;
    local_980 = 0;
    ppcVar5 = &local_988;
    ppVar6 = &local_8c8;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined1 *)ppVar6 = *(undefined1 *)ppcVar5;
      ppcVar5 = (code **)((longlong)ppcVar5 + 1);
      ppVar6 = (pmf_3f89d5d7 *)&ppVar6->field_0x1;
    }
    local_c28 = TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
                CreateSP<SAudioSpectrumPlot>(&local_828,this,&local_8c8);
    pFVar3 = FText::FText(&local_8a8);
    TAttribute<FText>::TAttribute<FText>(&local_640,pFVar3);
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_8b8,L"SAudioSpectrumPlot",L"FrequencyAxisPixelBucketMode",
                        L"Pixel Plot Mode");
    TAttribute<FText>::TAttribute<FText>(&local_670,pFVar3);
    FMenuBuilder::AddSubMenu
              (&local_360,&local_670,&local_640,local_c28,false,local_c30,true,local_c38,local_c40,
               local_c48);
    TAttribute<FText>::~TAttribute<FText>(&local_670);
    FText::~FText(&local_8b8);
    TAttribute<FText>::~TAttribute<FText>(&local_640);
    FText::~FText(&local_8a8);
    TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
    ~TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>(&local_828);
    TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_7c0);
  }
  bVar2 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                     &this->OnFrequencyAxisScaleMenuEntryClicked);
  if ((bVar2) ||
     (bVar2 = TAttribute<enum_EAudioSpectrumPlotFrequencyAxisScale>::IsBound
                        (&this->FrequencyAxisScale), !bVar2)) {
    local_bb0 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_760);
    local_c20 = FNameEntryId::FNameEntryId(local_df8);
    uVar1 = local_c20->Value;
    FNameEntryId::FNameEntryId(&local_940);
    uStack_93c = 0;
    local_c10.Number = 0;
    local_c10.ComparisonIndex.Value = uVar1;
    local_c18 = &local_940;
    local_c08 = local_c10;
    local_c00 = local_c10;
    local_bf8 = local_c10;
    local_bf0 = local_c10;
    local_ba8 = local_c10;
    local_940.Value = uVar1;
    local_be8 = FNameEntryId::FNameEntryId(local_df0);
    uVar1 = local_be8->Value;
    FNameEntryId::FNameEntryId(&local_938);
    uStack_934 = 0;
    local_bd8.Number = 0;
    local_bd8.ComparisonIndex.Value = uVar1;
    local_be0 = &local_938;
    local_bd0 = local_bd8;
    local_bc8 = local_bd8;
    local_bc0 = local_bd8;
    local_bb8 = local_bd8;
    local_ba0 = local_bd8;
    local_938.Value = uVar1;
    local_b98 = FSlateIcon::FSlateIcon(&local_3c0);
    local_978 = BuildFrequencyAxisScaleSubMenu;
    local_970 = 0;
    ppcVar5 = &local_978;
    ppVar6 = &local_898;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined1 *)ppVar6 = *(undefined1 *)ppcVar5;
      ppcVar5 = (code **)((longlong)ppcVar5 + 1);
      ppVar6 = (pmf_3f89d5d7 *)&ppVar6->field_0x1;
    }
    local_b90 = TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
                CreateSP<SAudioSpectrumPlot>(&local_810,this,&local_898);
    pFVar3 = FText::FText(&local_878);
    TAttribute<FText>::TAttribute<FText>(&local_5e0,pFVar3);
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_888,L"SAudioSpectrumPlot",L"FrequencyAxisScale",L"Frequency Scale");
    TAttribute<FText>::TAttribute<FText>(&local_610,pFVar3);
    FMenuBuilder::AddSubMenu
              (&local_360,&local_610,&local_5e0,local_b90,false,local_b98,true,local_ba0,local_ba8,
               local_bb0);
    TAttribute<FText>::~TAttribute<FText>(&local_610);
    FText::~FText(&local_888);
    TAttribute<FText>::~TAttribute<FText>(&local_5e0);
    FText::~FText(&local_878);
    TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>::
    ~TDelegate<void___cdecl(FMenuBuilder_&),FDefaultDelegateUserPolicy>(&local_810);
    TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_760);
  }
  bVar2 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                     &this->OnDisplayFrequencyAxisLabelsButtonToggled);
  if ((bVar2) || (bVar2 = TAttribute<bool>::IsBound(&this->bDisplayFrequencyAxisLabels), !bVar2)) {
    local_ac0 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_740);
    local_ab8 = TAttribute<FText>::TAttribute<FText>(&local_460);
    local_b88 = FNameEntryId::FNameEntryId(local_de8);
    uVar1 = local_b88->Value;
    FNameEntryId::FNameEntryId(&local_930);
    uStack_92c = 0;
    local_b78.Number = 0;
    local_b78.ComparisonIndex.Value = uVar1;
    local_b80 = &local_930;
    local_b70 = local_b78;
    local_b68 = local_b78;
    local_b60 = local_b78;
    local_b58 = local_b78;
    local_b50 = local_b78;
    local_ab0 = local_b78;
    local_930.Value = uVar1;
    local_b48 = FNameEntryId::FNameEntryId(local_de0);
    uVar1 = local_b48->Value;
    FNameEntryId::FNameEntryId(&local_928);
    uStack_924 = 0;
    local_b38.Number = 0;
    local_b38.ComparisonIndex.Value = uVar1;
    local_af8 = &local_4c0;
    local_b00 = &local_b08;
    local_b40 = &local_928;
    local_b30 = local_b38;
    local_b28 = local_b38;
    local_b20 = local_b38;
    local_b18 = local_b38;
    local_b10 = local_b38;
    local_b08.__this = this;
    local_aa8 = local_b38;
    local_928.Value = uVar1;
    local_ad8 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
                CreateSPLambda<SAudioSpectrumPlot,_SAudioSpectrumPlot::BuildDefaultContextMenu_::__l14::<lambda_2>_>
                          (local_af8,this,local_b00);
    pTVar7 = &local_4f0;
    for (lVar4 = 0x18; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined1 *)pTVar7 = 0;
      pTVar7 = (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)&pTVar7->field_0x1;
    }
    local_ad0 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
                TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>(&local_4f0);
    local_ae0 = &local_4d8;
    local_ae8 = &local_af0;
    local_af0.__this = this;
    local_ac8 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                CreateSPLambda<SAudioSpectrumPlot,_SAudioSpectrumPlot::BuildDefaultContextMenu_::__l14::<lambda_1>_>
                          (local_ae0,this,local_ae8);
    local_aa0 = FUIAction::FUIAction(&local_1d8,local_ac8,local_ad0,local_ad8,RepeatDisabled);
    local_a98 = FSlateIcon::FSlateIcon(&local_3a0);
    pFVar3 = FText::FText(&local_858);
    TAttribute<FText>::TAttribute<FText>(&local_580,pFVar3);
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_868,L"SAudioSpectrumPlot",L"DisplayFrequencyAxisLabels",
                        L"Display Frequency Axis Labels");
    TAttribute<FText>::TAttribute<FText>(&local_5b0,pFVar3);
    FBaseMenuBuilder::AddMenuEntry
              ((FBaseMenuBuilder *)&local_360,&local_5b0,&local_580,local_a98,local_aa0,local_aa8,
               ToggleButton,local_ab0,local_ab8,local_ac0);
    TAttribute<FText>::~TAttribute<FText>(&local_5b0);
    FText::~FText(&local_868);
    TAttribute<FText>::~TAttribute<FText>(&local_580);
    FText::~FText(&local_858);
    FUIAction::~FUIAction(&local_1d8);
    TAttribute<FText>::~TAttribute<FText>(&local_460);
    TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_740);
  }
  bVar2 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)
                     &this->OnDisplaySoundLevelAxisLabelsButtonToggled);
  if ((bVar2) || (bVar2 = TAttribute<bool>::IsBound(&this->bDisplaySoundLevelAxisLabels), !bVar2)) {
    local_9c8 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_720);
    local_9c0 = TAttribute<FText>::TAttribute<FText>(&local_430);
    local_a90 = FNameEntryId::FNameEntryId(local_dd8);
    uVar1 = local_a90->Value;
    FNameEntryId::FNameEntryId(&local_920);
    uStack_91c = 0;
    local_a80.Number = 0;
    local_a80.ComparisonIndex.Value = uVar1;
    local_a88 = &local_920;
    local_a78 = local_a80;
    local_a70 = local_a80;
    local_a68 = local_a80;
    local_a60 = local_a80;
    local_a58 = local_a80;
    local_9b8 = local_a80;
    local_920.Value = uVar1;
    local_a50 = FNameEntryId::FNameEntryId(local_dd0);
    uVar1 = local_a50->Value;
    FNameEntryId::FNameEntryId(&local_918);
    uStack_914 = 0;
    local_a40.Number = 0;
    local_a40.ComparisonIndex.Value = uVar1;
    local_a00 = &local_4a8;
    local_a08 = &local_a10;
    local_a48 = &local_918;
    local_a38 = local_a40;
    local_a30 = local_a40;
    local_a28 = local_a40;
    local_a20 = local_a40;
    local_a18 = local_a40;
    local_a10.__this = this;
    local_9b0 = local_a40;
    local_918.Value = uVar1;
    local_9e0 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
                CreateSPLambda<SAudioSpectrumPlot,_SAudioSpectrumPlot::BuildDefaultContextMenu_::__l17::<lambda_4>_>
                          (local_a00,this,local_a08);
    pTVar7 = &local_490;
    for (lVar4 = 0x18; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined1 *)pTVar7 = 0;
      pTVar7 = (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)&pTVar7->field_0x1;
    }
    local_9d8 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
                TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>(&local_490);
    local_9e8 = &local_478;
    local_9f0 = &local_9f8;
    local_9f8.__this = this;
    local_9d0 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                CreateSPLambda<SAudioSpectrumPlot,_SAudioSpectrumPlot::BuildDefaultContextMenu_::__l17::<lambda_3>_>
                          (local_9e8,this,local_9f0);
    local_9a8 = FUIAction::FUIAction(&local_170,local_9d0,local_9d8,local_9e0,RepeatDisabled);
    local_9a0 = FSlateIcon::FSlateIcon(&local_380);
    pFVar3 = FText::FText(&local_838);
    TAttribute<FText>::TAttribute<FText>(&local_520,pFVar3);
    pFVar3 = FText::AsLocalizable_Advanced_LocText
                       (&local_848,L"SAudioSpectrumPlot",L"DisplaySoundLevelAxisLabels",
                        L"Display Sound Level Axis Labels");
    TAttribute<FText>::TAttribute<FText>(&local_550,pFVar3);
    FBaseMenuBuilder::AddMenuEntry
              ((FBaseMenuBuilder *)&local_360,&local_550,&local_520,local_9a0,local_9a8,local_9b0,
               ToggleButton,local_9b8,local_9c0,local_9c8);
    TAttribute<FText>::~TAttribute<FText>(&local_550);
    FText::~FText(&local_848);
    TAttribute<FText>::~TAttribute<FText>(&local_520);
    FText::~FText(&local_838);
    FUIAction::~FUIAction(&local_170);
    TAttribute<FText>::~TAttribute<FText>(&local_430);
    TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_720);
  }
  FMenuBuilder::EndSection(&local_360);
  FMenuBuilder::MakeWidget
            (&local_360,__return_storage_ptr__,
             (TDelegate<void___cdecl(TSharedRef<FMultiBox,1>_const_&,TSharedRef<SMultiBoxWidget,1>_const_&),FDefaultDelegateUserPolicy>
              *)0x0);
  FMenuBuilder::~FMenuBuilder(&local_360);
  return __return_storage_ptr__;
}

// BuildFrequencyAxisPixelBucketModeSubMenu @ 14d8e23f0

/* WARNING: Removing unreachable block (ram,0x00014d8e24af) */
/* WARNING: Removing unreachable block (ram,0x00014d8e25c6) */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SAudioSpectrumPlot::BuildFrequencyAxisPixelBucketModeSubMenu
          (SAudioSpectrumPlot *this,FMenuBuilder *param_1)

{
  uint uVar1;
  int iVar2;
  UEnum *this_00;
  long64 lVar3;
  FText *pFVar4;
  longlong lVar5;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *pTVar6;
  int local_334;
  FNameEntryId local_2e0 [2];
  FNameEntryId local_2d8 [2];
  undefined4 local_2d0;
  FNameEntryId *local_2c8;
  FNameEntryId *local_2c0;
  FName local_2b8;
  FName local_2b0;
  FName local_2a8;
  FName local_2a0;
  FName local_298;
  FName local_290;
  FNameEntryId *local_288;
  FNameEntryId *local_280;
  FName local_278;
  FName local_270;
  FName local_268;
  FName local_260;
  FName local_258;
  FName local_250;
  <lambda_2> *local_248;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_240;
  <lambda_1> *local_238;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_230;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_228;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_220;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_218;
  code *local_210;
  TAttribute<EVisibility> *local_208;
  TAttribute<FText> *local_200;
  FName local_1f8;
  FName local_1f0;
  FUIAction *local_1e8;
  FSlateIcon *local_1e0;
  <lambda_2> local_1d8;
  <lambda_1> local_1c8;
  FNameEntryId local_1b8;
  undefined4 uStack_1b4;
  FNameEntryId local_1b0;
  undefined4 uStack_1ac;
  FText local_1a8;
  FText local_198;
  TAttribute<EVisibility> local_188;
  TAttribute<FText> local_168;
  TAttribute<FText> local_138;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_108;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_f0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_d8;
  TAttribute<FText> local_c0;
  FSlateIcon local_90;
  FUIAction local_70;
  
  local_2d0 = 0;
  this_00 = StaticEnum<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode>();
  iVar2 = UEnum::NumEnums(this_00);
  for (local_334 = 0; local_334 < iVar2 + -1; local_334 = local_334 + 1) {
    lVar3 = UEnum::GetValueByIndex(this_00,local_334);
    local_208 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_188);
    local_200 = TAttribute<FText>::TAttribute<FText>(&local_c0);
    local_2c8 = FNameEntryId::FNameEntryId(local_2e0);
    uVar1 = local_2c8->Value;
    FNameEntryId::FNameEntryId(&local_1b8);
    uStack_1b4 = 0;
    local_2b8.Number = 0;
    local_2b8.ComparisonIndex.Value = uVar1;
    local_2c0 = &local_1b8;
    local_2b0 = local_2b8;
    local_2a8 = local_2b8;
    local_2a0 = local_2b8;
    local_298 = local_2b8;
    local_290 = local_2b8;
    local_1f8 = local_2b8;
    local_1b8.Value = uVar1;
    local_288 = FNameEntryId::FNameEntryId(local_2d8);
    uVar1 = local_288->Value;
    FNameEntryId::FNameEntryId(&local_1b0);
    uStack_1ac = 0;
    local_278.Number = 0;
    local_278.ComparisonIndex.Value = uVar1;
    local_240 = &local_108;
    local_248 = &local_1d8;
    local_280 = &local_1b0;
    local_270 = local_278;
    local_268 = local_278;
    local_260 = local_278;
    local_258 = local_278;
    local_250 = local_278;
    local_1f0 = local_278;
    local_1d8.__this = this;
    local_1d8.EnumValue = (EAudioSpectrumPlotFrequencyAxisPixelBucketMode)lVar3;
    local_1b0.Value = uVar1;
    local_228 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
                CreateSPLambda<SAudioSpectrumPlot,_SAudioSpectrumPlot::BuildFrequencyAxisPixelBucketModeSubMenu_::__l4::<lambda_2>_>
                          (local_240,this,local_248);
    pTVar6 = &local_f0;
    for (lVar5 = 0x18; lVar5 != 0; lVar5 = lVar5 + -1) {
      *(undefined1 *)pTVar6 = 0;
      pTVar6 = (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)&pTVar6->field_0x1;
    }
    local_220 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
                TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>(&local_f0);
    local_230 = &local_d8;
    local_238 = &local_1c8;
    local_1c8.__this = this;
    local_1c8.EnumValue = (EAudioSpectrumPlotFrequencyAxisPixelBucketMode)lVar3;
    local_218 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                CreateSPLambda<SAudioSpectrumPlot,_SAudioSpectrumPlot::BuildFrequencyAxisPixelBucketModeSubMenu_::__l4::<lambda_1>_>
                          (local_230,this,local_238);
    local_1e8 = FUIAction::FUIAction(&local_70,local_218,local_220,local_228,RepeatDisabled);
    local_1e0 = FSlateIcon::FSlateIcon(&local_90);
    pFVar4 = FText::FText(&local_198);
    TAttribute<FText>::TAttribute<FText>(&local_138,pFVar4);
    local_210 = *(code **)(this_00->_padding_ + 0x2c0);
    pFVar4 = (FText *)(*local_210)(this_00,&local_1a8,local_334);
    TAttribute<FText>::TAttribute<FText>(&local_168,pFVar4);
    FBaseMenuBuilder::AddMenuEntry
              ((FBaseMenuBuilder *)param_1,&local_168,&local_138,local_1e0,local_1e8,local_1f0,
               ToggleButton,local_1f8,local_200,local_208);
    TAttribute<FText>::~TAttribute<FText>(&local_168);
    FText::~FText(&local_1a8);
    TAttribute<FText>::~TAttribute<FText>(&local_138);
    FText::~FText(&local_198);
    FUIAction::~FUIAction(&local_70);
    TAttribute<FText>::~TAttribute<FText>(&local_c0);
    TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_188);
  }
  return;
}

// BuildFrequencyAxisScaleSubMenu @ 14d8e30c0

/* WARNING: Removing unreachable block (ram,0x00014d8e317f) */
/* WARNING: Removing unreachable block (ram,0x00014d8e3296) */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SAudioSpectrumPlot::BuildFrequencyAxisScaleSubMenu(SAudioSpectrumPlot *this,FMenuBuilder *param_1)

{
  uint uVar1;
  int iVar2;
  UEnum *this_00;
  long64 lVar3;
  FText *pFVar4;
  longlong lVar5;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *pTVar6;
  int local_334;
  FNameEntryId local_2e0 [2];
  FNameEntryId local_2d8 [2];
  undefined4 local_2d0;
  FNameEntryId *local_2c8;
  FNameEntryId *local_2c0;
  FName local_2b8;
  FName local_2b0;
  FName local_2a8;
  FName local_2a0;
  FName local_298;
  FName local_290;
  FNameEntryId *local_288;
  FNameEntryId *local_280;
  FName local_278;
  FName local_270;
  FName local_268;
  FName local_260;
  FName local_258;
  FName local_250;
  <lambda_2> *local_248;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_240;
  <lambda_1> *local_238;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_230;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_228;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_220;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_218;
  code *local_210;
  TAttribute<EVisibility> *local_208;
  TAttribute<FText> *local_200;
  FName local_1f8;
  FName local_1f0;
  FUIAction *local_1e8;
  FSlateIcon *local_1e0;
  <lambda_2> local_1d8;
  <lambda_1> local_1c8;
  FNameEntryId local_1b8;
  undefined4 uStack_1b4;
  FNameEntryId local_1b0;
  undefined4 uStack_1ac;
  FText local_1a8;
  FText local_198;
  TAttribute<EVisibility> local_188;
  TAttribute<FText> local_168;
  TAttribute<FText> local_138;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_108;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_f0;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_d8;
  TAttribute<FText> local_c0;
  FSlateIcon local_90;
  FUIAction local_70;
  
  local_2d0 = 0;
  this_00 = StaticEnum<enum_EAudioSpectrumPlotFrequencyAxisScale>();
  iVar2 = UEnum::NumEnums(this_00);
  for (local_334 = 0; local_334 < iVar2 + -1; local_334 = local_334 + 1) {
    lVar3 = UEnum::GetValueByIndex(this_00,local_334);
    local_208 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_188);
    local_200 = TAttribute<FText>::TAttribute<FText>(&local_c0);
    local_2c8 = FNameEntryId::FNameEntryId(local_2e0);
    uVar1 = local_2c8->Value;
    FNameEntryId::FNameEntryId(&local_1b8);
    uStack_1b4 = 0;
    local_2b8.Number = 0;
    local_2b8.ComparisonIndex.Value = uVar1;
    local_2c0 = &local_1b8;
    local_2b0 = local_2b8;
    local_2a8 = local_2b8;
    local_2a0 = local_2b8;
    local_298 = local_2b8;
    local_290 = local_2b8;
    local_1f8 = local_2b8;
    local_1b8.Value = uVar1;
    local_288 = FNameEntryId::FNameEntryId(local_2d8);
    uVar1 = local_288->Value;
    FNameEntryId::FNameEntryId(&local_1b0);
    uStack_1ac = 0;
    local_278.Number = 0;
    local_278.ComparisonIndex.Value = uVar1;
    local_240 = &local_108;
    local_248 = &local_1d8;
    local_280 = &local_1b0;
    local_270 = local_278;
    local_268 = local_278;
    local_260 = local_278;
    local_258 = local_278;
    local_250 = local_278;
    local_1f0 = local_278;
    local_1d8.__this = this;
    local_1d8.EnumValue = (EAudioSpectrumPlotFrequencyAxisScale)lVar3;
    local_1b0.Value = uVar1;
    local_228 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
                CreateSPLambda<SAudioSpectrumPlot,_SAudioSpectrumPlot::BuildFrequencyAxisScaleSubMenu_::__l4::<lambda_2>_>
                          (local_240,this,local_248);
    pTVar6 = &local_f0;
    for (lVar5 = 0x18; lVar5 != 0; lVar5 = lVar5 + -1) {
      *(undefined1 *)pTVar6 = 0;
      pTVar6 = (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)&pTVar6->field_0x1;
    }
    local_220 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
                TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>(&local_f0);
    local_230 = &local_d8;
    local_238 = &local_1c8;
    local_1c8.__this = this;
    local_1c8.EnumValue = (EAudioSpectrumPlotFrequencyAxisScale)lVar3;
    local_218 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                CreateSPLambda<SAudioSpectrumPlot,_SAudioSpectrumPlot::BuildFrequencyAxisScaleSubMenu_::__l4::<lambda_1>_>
                          (local_230,this,local_238);
    local_1e8 = FUIAction::FUIAction(&local_70,local_218,local_220,local_228,RepeatDisabled);
    local_1e0 = FSlateIcon::FSlateIcon(&local_90);
    pFVar4 = FText::FText(&local_198);
    TAttribute<FText>::TAttribute<FText>(&local_138,pFVar4);
    local_210 = *(code **)(this_00->_padding_ + 0x2c0);
    pFVar4 = (FText *)(*local_210)(this_00,&local_1a8,local_334);
    TAttribute<FText>::TAttribute<FText>(&local_168,pFVar4);
    FBaseMenuBuilder::AddMenuEntry
              ((FBaseMenuBuilder *)param_1,&local_168,&local_138,local_1e0,local_1e8,local_1f0,
               ToggleButton,local_1f8,local_200,local_208);
    TAttribute<FText>::~TAttribute<FText>(&local_168);
    FText::~FText(&local_1a8);
    TAttribute<FText>::~TAttribute<FText>(&local_138);
    FText::~FText(&local_198);
    FUIAction::~FUIAction(&local_70);
    TAttribute<FText>::~TAttribute<FText>(&local_c0);
    TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_188);
  }
  return;
}

// BuildTiltSpectrumSubMenu @ 14d8e3d50

/* WARNING: Removing unreachable block (ram,0x00014d8e3e1f) */
/* WARNING: Removing unreachable block (ram,0x00014d8e3f3c) */
/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
SAudioSpectrumPlot::BuildTiltSpectrumSubMenu(SAudioSpectrumPlot *this,FMenuBuilder *param_1)

{
  uint uVar1;
  int iVar2;
  UEnum *this_00;
  long64 lVar3;
  FText *pFVar4;
  longlong lVar5;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *pTVar6;
  float fVar7;
  int local_344;
  FNameEntryId local_2e8 [2];
  FNameEntryId local_2e0 [2];
  undefined4 local_2d8;
  FNameEntryId *local_2d0;
  FNameEntryId *local_2c8;
  FName local_2c0;
  FName local_2b8;
  FName local_2b0;
  FName local_2a8;
  FName local_2a0;
  FName local_298;
  FNameEntryId *local_290;
  FNameEntryId *local_288;
  FName local_280;
  FName local_278;
  FName local_270;
  FName local_268;
  FName local_260;
  FName local_258;
  <lambda_2> *local_250;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_248;
  <lambda_1> *local_240;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_238;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_230;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *local_228;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *local_220;
  code *local_218;
  TAttribute<EVisibility> *local_210;
  TAttribute<FText> *local_208;
  FName local_200;
  FName local_1f8;
  FUIAction *local_1f0;
  FSlateIcon *local_1e8;
  <lambda_1> local_1e0;
  <lambda_2> local_1d0;
  FNameEntryId local_1c0;
  undefined4 uStack_1bc;
  FNameEntryId local_1b8;
  undefined4 uStack_1b4;
  FText local_1b0;
  FText local_1a0;
  TAttribute<EVisibility> local_190;
  TAttribute<FText> local_170;
  TAttribute<FText> local_140;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_110;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> local_f8;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_e0;
  TAttribute<FText> local_c8;
  FSlateIcon local_98;
  FUIAction local_78;
  
  local_2d8 = 0;
  this_00 = StaticEnum<enum_EAudioSpectrumPlotTilt>();
  iVar2 = UEnum::NumEnums(this_00);
  for (local_344 = 0; local_344 < iVar2 + -1; local_344 = local_344 + 1) {
    lVar3 = UEnum::GetValueByIndex(this_00,local_344);
    fVar7 = GetTiltExponentValue((EAudioSpectrumPlotTilt)lVar3);
    local_210 = TAttribute<EVisibility>::TAttribute<EVisibility>(&local_190);
    local_208 = TAttribute<FText>::TAttribute<FText>(&local_c8);
    local_2d0 = FNameEntryId::FNameEntryId(local_2e8);
    uVar1 = local_2d0->Value;
    FNameEntryId::FNameEntryId(&local_1b8);
    uStack_1b4 = 0;
    local_2c0.Number = 0;
    local_2c0.ComparisonIndex.Value = uVar1;
    local_2c8 = &local_1b8;
    local_2b8 = local_2c0;
    local_2b0 = local_2c0;
    local_2a8 = local_2c0;
    local_2a0 = local_2c0;
    local_298 = local_2c0;
    local_200 = local_2c0;
    local_1b8.Value = uVar1;
    local_290 = FNameEntryId::FNameEntryId(local_2e0);
    uVar1 = local_290->Value;
    FNameEntryId::FNameEntryId(&local_1c0);
    uStack_1bc = 0;
    local_280.Number = 0;
    local_280.ComparisonIndex.Value = uVar1;
    local_248 = &local_110;
    local_250 = &local_1d0;
    local_288 = &local_1c0;
    local_278 = local_280;
    local_270 = local_280;
    local_268 = local_280;
    local_260 = local_280;
    local_258 = local_280;
    local_1f8 = local_280;
    local_1d0.__this = this;
    local_1d0.TiltExponentValue = fVar7;
    local_1c0.Value = uVar1;
    local_230 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
                CreateSPLambda<SAudioSpectrumPlot,_SAudioSpectrumPlot::BuildTiltSpectrumSubMenu_::__l4::<lambda_2>_>
                          (local_248,this,local_250);
    pTVar6 = &local_f8;
    for (lVar5 = 0x18; lVar5 != 0; lVar5 = lVar5 + -1) {
      *(undefined1 *)pTVar6 = 0;
      pTVar6 = (TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy> *)&pTVar6->field_0x1;
    }
    local_228 = TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::
                TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>(&local_f8);
    local_238 = &local_e0;
    local_240 = &local_1e0;
    local_1e0.__this = this;
    local_1e0.EnumValue = (EAudioSpectrumPlotTilt)lVar3;
    local_1e0.TiltExponentValue = fVar7;
    local_220 = TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::
                CreateSPLambda<SAudioSpectrumPlot,_SAudioSpectrumPlot::BuildTiltSpectrumSubMenu_::__l4::<lambda_1>_>
                          (local_238,this,local_240);
    local_1f0 = FUIAction::FUIAction(&local_78,local_220,local_228,local_230,RepeatDisabled);
    local_1e8 = FSlateIcon::FSlateIcon(&local_98);
    pFVar4 = FText::FText(&local_1a0);
    TAttribute<FText>::TAttribute<FText>(&local_140,pFVar4);
    local_218 = *(code **)(this_00->_padding_ + 0x2c0);
    pFVar4 = (FText *)(*local_218)(this_00,&local_1b0,local_344);
    TAttribute<FText>::TAttribute<FText>(&local_170,pFVar4);
    FBaseMenuBuilder::AddMenuEntry
              ((FBaseMenuBuilder *)param_1,&local_170,&local_140,local_1e8,local_1f0,local_1f8,
               ToggleButton,local_200,local_208,local_210);
    TAttribute<FText>::~TAttribute<FText>(&local_170);
    FText::~FText(&local_1b0);
    TAttribute<FText>::~TAttribute<FText>(&local_140);
    FText::~FText(&local_1a0);
    FUIAction::~FUIAction(&local_78);
    TAttribute<FText>::~TAttribute<FText>(&local_c8);
    TAttribute<EVisibility>::~TAttribute<EVisibility>(&local_190);
  }
  return;
}

// Construct @ 14d8ecbb0

void __thiscall SAudioSpectrumPlot::Construct(SAudioSpectrumPlot *this,FArguments *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1->_Style == (FAudioSpectrumPlotStyle *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InArgs._Style",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioSpectrumPlot.cpp"
                       ,0x1a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->Style = param_1->_Style;
  TAttribute<float>::operator=(&this->ViewMinFrequency,&param_1->_ViewMinFrequency);
  TAttribute<float>::operator=(&this->ViewMaxFrequency,&param_1->_ViewMaxFrequency);
  TAttribute<float>::operator=(&this->ViewMinSoundLevel,&param_1->_ViewMinSoundLevel);
  TAttribute<float>::operator=(&this->ViewMaxSoundLevel,&param_1->_ViewMaxSoundLevel);
  TAttribute<float>::operator=(&this->TiltExponent,&param_1->_TiltExponent);
  TAttribute<float>::operator=(&this->TiltPivotFrequency,&param_1->_TiltPivotFrequency);
  TOptional<float>::operator=(&(this->SelectedFrequency).Value,&(param_1->_SelectedFrequency).Value)
  ;
  (this->SelectedFrequency).bIsSet = (param_1->_SelectedFrequency).bIsSet;
  TDelegate<TOptional<float>___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&(this->SelectedFrequency).Getter,&(param_1->_SelectedFrequency).Getter);
  (this->bDisplayCrosshair).Value = (param_1->_DisplayCrosshair).Value;
  (this->bDisplayCrosshair).bIsSet = (param_1->_DisplayCrosshair).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&(this->bDisplayCrosshair).Getter,&(param_1->_DisplayCrosshair).Getter);
  (this->bDisplayFrequencyAxisLabels).Value = (param_1->_DisplayFrequencyAxisLabels).Value;
  (this->bDisplayFrequencyAxisLabels).bIsSet = (param_1->_DisplayFrequencyAxisLabels).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&(this->bDisplayFrequencyAxisLabels).Getter,
             &(param_1->_DisplayFrequencyAxisLabels).Getter);
  (this->bDisplaySoundLevelAxisLabels).Value = (param_1->_DisplaySoundLevelAxisLabels).Value;
  (this->bDisplaySoundLevelAxisLabels).bIsSet = (param_1->_DisplaySoundLevelAxisLabels).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&(this->bDisplaySoundLevelAxisLabels).Getter,
             &(param_1->_DisplaySoundLevelAxisLabels).Getter);
  (this->bDisplayFrequencyGridLines).Value = (param_1->_DisplayFrequencyGridLines).Value;
  (this->bDisplayFrequencyGridLines).bIsSet = (param_1->_DisplayFrequencyGridLines).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&(this->bDisplayFrequencyGridLines).Getter,
             &(param_1->_DisplayFrequencyGridLines).Getter);
  (this->bDisplaySoundLevelGridLines).Value = (param_1->_DisplaySoundLevelGridLines).Value;
  (this->bDisplaySoundLevelGridLines).bIsSet = (param_1->_DisplaySoundLevelGridLines).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&(this->bDisplaySoundLevelGridLines).Getter,
             &(param_1->_DisplaySoundLevelGridLines).Getter);
  (this->FrequencyAxisScale).Value = (param_1->_FrequencyAxisScale).Value;
  (this->FrequencyAxisScale).bIsSet = (param_1->_FrequencyAxisScale).bIsSet;
  TDelegate<enum_EAudioSpectrumPlotFrequencyAxisScale___cdecl(void),FDefaultDelegateUserPolicy>::
  operator=(&(this->FrequencyAxisScale).Getter,&(param_1->_FrequencyAxisScale).Getter);
  (this->FrequencyAxisPixelBucketMode).Value = (param_1->_FrequencyAxisPixelBucketMode).Value;
  (this->FrequencyAxisPixelBucketMode).bIsSet = (param_1->_FrequencyAxisPixelBucketMode).bIsSet;
  TDelegate<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode___cdecl(void),FDefaultDelegateUserPolicy>
  ::operator=(&(this->FrequencyAxisPixelBucketMode).Getter,
              &(param_1->_FrequencyAxisPixelBucketMode).Getter);
  TAttribute<FSlateColor>::operator=(&this->BackgroundColor,&param_1->_BackgroundColor);
  TAttribute<FSlateColor>::operator=(&this->GridColor,&param_1->_GridColor);
  TAttribute<FSlateColor>::operator=(&this->AxisLabelColor,&param_1->_AxisLabelColor);
  TAttribute<FSlateColor>::operator=(&this->CrosshairColor,&param_1->_CrosshairColor);
  TAttribute<FSlateColor>::operator=(&this->SpectrumColor,&param_1->_SpectrumColor);
  (this->bAllowContextMenu).Value = (param_1->_AllowContextMenu).Value;
  (this->bAllowContextMenu).bIsSet = (param_1->_AllowContextMenu).bIsSet;
  TDelegate<bool___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&(this->bAllowContextMenu).Getter,&(param_1->_AllowContextMenu).Getter);
  TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->OnContextMenuOpening,&param_1->_OnContextMenuOpening);
  TDelegate<void___cdecl(enum_EAudioSpectrumPlotTilt),FDefaultDelegateUserPolicy>::operator=
            (&this->OnTiltSpectrumMenuEntryClicked,&param_1->_OnTiltSpectrumMenuEntryClicked);
  TDelegate<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode),FDefaultDelegateUserPolicy>
  ::operator=(&this->OnFrequencyAxisPixelBucketModeMenuEntryClicked,
              &param_1->_OnFrequencyAxisPixelBucketModeMenuEntryClicked);
  TDelegate<void___cdecl(enum_EAudioSpectrumPlotFrequencyAxisScale),FDefaultDelegateUserPolicy>::
  operator=(&this->OnFrequencyAxisScaleMenuEntryClicked,
            &param_1->_OnFrequencyAxisScaleMenuEntryClicked);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->OnDisplayFrequencyAxisLabelsButtonToggled,
             &param_1->_OnDisplayFrequencyAxisLabelsButtonToggled);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->OnDisplaySoundLevelAxisLabelsButtonToggled,
             &param_1->_OnDisplaySoundLevelAxisLabelsButtonToggled);
  TDelegate<FAudioPowerSpectrumData___cdecl(void),FDefaultDelegateUserPolicy>::operator=
            (&this->OnGetAudioSpectrumData,&param_1->_OnGetAudioSpectrumData);
  return;
}

// DrawCrosshairAndAxisLabels @ 14d913630

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __thiscall
SAudioSpectrumPlot::DrawCrosshairAndAxisLabels
          (SAudioSpectrumPlot *this,FGeometry *param_1,FSlateWindowElementList *param_2,int param_3,
          FWidgetStyle *param_4,FAudioSpectrumPlotScaleInfo *param_5,
          TArrayView<UE::Math::TVector2<float>_const_,int> *param_6)

{
  float fVar1;
  bool bVar2;
  int iVar3;
  bool *pbVar4;
  TOptional<float> *pTVar5;
  TArrayView<float_const_,int> *pTVar6;
  longlong lVar7;
  TArrayView<float_const_,int> *pTVar8;
  <lambda_1> <Var9;
  float fVar10;
  int local_res20;
  float local_174;
  float local_170;
  int local_16c;
  int local_168;
  float local_164;
  float local_160;
  float local_15c;
  int local_158;
  TVector2<float> *local_150;
  TArray<float,TSizedDefaultAllocator<32>_> local_148;
  TArray<float,TSizedDefaultAllocator<32>_> local_138;
  TOptional<float> local_128;
  TVector2<float> *local_120;
  float *local_118;
  FSlateFontInfo *local_110;
  FLinearColor local_108;
  TArray<float,TSizedDefaultAllocator<32>_> local_f8;
  float *local_e8;
  float *local_e0;
  FSlateFontInfo *local_d8;
  TArrayView<float_const_,int> *local_d0;
  TArrayView<float_const_,int> *local_c8;
  FLinearColor local_c0;
  TArrayView<float_const_,int> local_a8;
  TArrayView<float_const_,int> local_98;
  FAudioSpectrumPlotGridAndLabelDrawingHelper local_88;
  TArrayView<float_const_,int> local_38;
  TArrayView<float_const_,int> local_28;
  
  FAudioSpectrumPlotGridAndLabelDrawingHelper::FAudioSpectrumPlotGridAndLabelDrawingHelper
            (&local_88,param_1,param_2,param_5);
  GetAxisLabelColor(this,&local_108,param_4);
  pbVar4 = TAttribute<bool>::Get(&this->bDisplayCrosshair);
  if (*pbVar4 != false) {
    pTVar5 = TAttribute<TOptional<float>_>::Get(&this->SelectedFrequency);
    TOptional<float>::TOptional<float>(&local_128,pTVar5);
    bVar2 = TOptional<float>::IsSet(&local_128);
    if (bVar2) {
      local_e8 = TOptional<float>::GetValue(&local_128);
      fVar1 = *local_e8;
      <Var9.CrosshairPosX = FAudioSpectrumPlotScaleInfo::FrequencyToLocalX(param_5,fVar1);
      local_e0 = &local_174;
      local_174 = <Var9.CrosshairPosX;
      local_170 = <Var9.CrosshairPosX;
      iVar3 = TArrayView<UE::Math::TVector2<float>_const_,int>::
              FindLastByPredicate<_SAudioSpectrumPlot::DrawCrosshairAndAxisLabels_::__l8::<lambda_1>_>
                        (param_6,<Var9,param_6->ArrayNum);
      local_16c = iVar3;
      if ((iVar3 != -1) && (local_168 = param_6->ArrayNum, iVar3 + 1 < local_168)) {
        local_150 = TArrayView<UE::Math::TVector2<float>_const_,int>::operator[](param_6,iVar3);
        local_120 = TArrayView<UE::Math::TVector2<float>_const_,int>::operator[](param_6,iVar3 + 1);
        local_164 = (<Var9.CrosshairPosX - (local_150->field0_0x0)._s_0.X) /
                    ((local_120->field0_0x0)._s_0.X - (local_150->field0_0x0)._s_0.X);
        local_118 = &(local_150->field0_0x0)._s_0.Y;
        local_160 = *local_118 + local_164 * ((local_120->field0_0x0)._s_0.Y - *local_118);
        local_15c = local_160;
        fVar10 = FAudioSpectrumPlotScaleInfo::LocalYToSoundLevel(param_5,local_160);
        if (__real_c3480000 < fVar10) {
          local_d8 = &this->Style->CrosshairLabelFont;
          GetCrosshairColor(this,&local_c0,param_4);
          FAudioSpectrumPlotGridAndLabelDrawingHelper::DrawCrosshairWithLabels
                    (&local_88,param_3,fVar1,fVar10,local_d8,&local_108,&local_c0);
        }
      }
    }
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_138.AllocatorInstance);
  local_138.ArrayNum = 0;
  local_138.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_138.AllocatorInstance);
  GetGridLineSoundLevels(this,&local_138);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType(&local_f8.AllocatorInstance)
  ;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_f8.AllocatorInstance);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_148.AllocatorInstance);
  local_148.ArrayNum = 0;
  local_148.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_148.AllocatorInstance);
  GetGridLineFrequencies(this,&local_f8,&local_148);
  local_110 = &this->Style->AxisLabelFont;
  if (local_88.DrawnLabelRects.ArrayNum != 0) {
    local_108.field0_0x0._s_0.A =
         (float)((double)local_108.field0_0x0._s_0.A * __real_3fe0000000000000);
  }
  pbVar4 = TAttribute<bool>::Get(&this->bDisplaySoundLevelAxisLabels);
  if (*pbVar4 != false) {
    local_d0 = &local_38;
    pTVar6 = TArrayView<float_const_,int>::
             TArrayView<float_const_,int><TArray<float,TSizedDefaultAllocator<32>_>_&,TArray<float,TSizedDefaultAllocator<32>_>_>
                       (local_d0,&local_138);
    pTVar8 = &local_a8;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *(undefined1 *)&pTVar8->DataPtr = *(undefined1 *)&pTVar6->DataPtr;
      pTVar6 = (TArrayView<float_const_,int> *)((longlong)&pTVar6->DataPtr + 1);
      pTVar8 = (TArrayView<float_const_,int> *)((longlong)&pTVar8->DataPtr + 1);
    }
    FAudioSpectrumPlotGridAndLabelDrawingHelper::DrawSoundLevelAxisLabels
              (&local_88,param_3,&local_a8,local_110,&local_108);
  }
  pbVar4 = TAttribute<bool>::Get(&this->bDisplayFrequencyAxisLabels);
  if (*pbVar4 != false) {
    local_c8 = &local_28;
    pTVar6 = TArrayView<float_const_,int>::
             TArrayView<float_const_,int><TArray<float,TSizedDefaultAllocator<32>_>_&,TArray<float,TSizedDefaultAllocator<32>_>_>
                       (local_c8,&local_148);
    pTVar8 = &local_98;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *(undefined1 *)&pTVar8->DataPtr = *(undefined1 *)&pTVar6->DataPtr;
      pTVar6 = (TArrayView<float_const_,int> *)((longlong)&pTVar6->DataPtr + 1);
      pTVar8 = (TArrayView<float_const_,int> *)((longlong)&pTVar8->DataPtr + 1);
    }
    FAudioSpectrumPlotGridAndLabelDrawingHelper::DrawFrequencyAxisLabels
              (&local_88,param_3,&local_98,local_110,&local_108);
  }
  local_res20 = param_3;
  if (local_88.DrawnLabelRects.ArrayNum != 0) {
    local_res20 = param_3 + 1;
  }
  local_158 = local_res20;
  TArray<float,TSizedDefaultAllocator<32>_>::~TArray<float,TSizedDefaultAllocator<32>_>(&local_148);
  TArray<float,TSizedDefaultAllocator<32>_>::~TArray<float,TSizedDefaultAllocator<32>_>(&local_f8);
  TArray<float,TSizedDefaultAllocator<32>_>::~TArray<float,TSizedDefaultAllocator<32>_>(&local_138);
  TArray<FSlateRect,TSizedDefaultAllocator<32>_>::~TArray<FSlateRect,TSizedDefaultAllocator<32>_>
            (&local_88.DrawnLabelRects);
  TSharedRef<FSlateFontMeasure,1>::~TSharedRef<FSlateFontMeasure,1>(&local_88.FontMeasureService);
  return local_158;
}

// DrawGrid @ 14d917c90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

int __thiscall
SAudioSpectrumPlot::DrawGrid
          (SAudioSpectrumPlot *this,FGeometry *param_1,FSlateWindowElementList *param_2,int param_3,
          FWidgetStyle *param_4,FAudioSpectrumPlotScaleInfo *param_5)

{
  bool *pbVar1;
  TArrayView<float_const_,int> *pTVar2;
  longlong lVar3;
  TArrayView<float_const_,int> *pTVar4;
  TArray<float,TSizedDefaultAllocator<32>_> local_100;
  TArray<float,TSizedDefaultAllocator<32>_> local_f0;
  TArray<float,TSizedDefaultAllocator<32>_> local_e0;
  TArrayView<float_const_,int> *local_d0;
  TArrayView<float_const_,int> *local_c8;
  FLinearColor local_c0;
  TArrayView<float_const_,int> local_a8;
  TArrayView<float_const_,int> local_98;
  TArrayView<float_const_,int> local_88;
  TArrayView<float_const_,int> local_78;
  FAudioSpectrumPlotGridAndLabelDrawingHelper local_68;
  
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType(&local_f0.AllocatorInstance)
  ;
  local_f0.ArrayNum = 0;
  local_f0.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_f0.AllocatorInstance);
  GetGridLineSoundLevels(this,&local_f0);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
            (&local_100.AllocatorInstance);
  local_100.ArrayNum = 0;
  local_100.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_100.AllocatorInstance);
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType(&local_e0.AllocatorInstance)
  ;
  local_e0.ArrayNum = 0;
  local_e0.ArrayMax =
       TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                 (&local_e0.AllocatorInstance);
  GetGridLineFrequencies(this,&local_100,&local_e0);
  GetGridColor(this,&local_c0,param_4);
  FAudioSpectrumPlotGridAndLabelDrawingHelper::FAudioSpectrumPlotGridAndLabelDrawingHelper
            (&local_68,param_1,param_2,param_5);
  pbVar1 = TAttribute<bool>::Get(&this->bDisplaySoundLevelGridLines);
  if (*pbVar1 != false) {
    local_d0 = &local_88;
    pTVar2 = TArrayView<float_const_,int>::
             TArrayView<float_const_,int><TArray<float,TSizedDefaultAllocator<32>_>_&,TArray<float,TSizedDefaultAllocator<32>_>_>
                       (local_d0,&local_f0);
    pTVar4 = &local_a8;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *(undefined1 *)&pTVar4->DataPtr = *(undefined1 *)&pTVar2->DataPtr;
      pTVar2 = (TArrayView<float_const_,int> *)((longlong)&pTVar2->DataPtr + 1);
      pTVar4 = (TArrayView<float_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
    }
    FAudioSpectrumPlotGridAndLabelDrawingHelper::DrawSoundLevelGridLines
              (&local_68,param_3,&local_a8,&local_c0);
  }
  pbVar1 = TAttribute<bool>::Get(&this->bDisplayFrequencyGridLines);
  if (*pbVar1 != false) {
    local_c8 = &local_78;
    pTVar2 = TArrayView<float_const_,int>::
             TArrayView<float_const_,int><TArray<float,TSizedDefaultAllocator<32>_>_&,TArray<float,TSizedDefaultAllocator<32>_>_>
                       (local_c8,&local_100);
    pTVar4 = &local_98;
    for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
      *(undefined1 *)&pTVar4->DataPtr = *(undefined1 *)&pTVar2->DataPtr;
      pTVar2 = (TArrayView<float_const_,int> *)((longlong)&pTVar2->DataPtr + 1);
      pTVar4 = (TArrayView<float_const_,int> *)((longlong)&pTVar4->DataPtr + 1);
    }
    FAudioSpectrumPlotGridAndLabelDrawingHelper::DrawFrequencyGridLines
              (&local_68,param_3,&local_98,&local_c0);
  }
  TArray<FSlateRect,TSizedDefaultAllocator<32>_>::~TArray<FSlateRect,TSizedDefaultAllocator<32>_>
            (&local_68.DrawnLabelRects);
  TSharedRef<FSlateFontMeasure,1>::~TSharedRef<FSlateFontMeasure,1>(&local_68.FontMeasureService);
  TArray<float,TSizedDefaultAllocator<32>_>::~TArray<float,TSizedDefaultAllocator<32>_>(&local_e0);
  TArray<float,TSizedDefaultAllocator<32>_>::~TArray<float,TSizedDefaultAllocator<32>_>(&local_100);
  TArray<float,TSizedDefaultAllocator<32>_>::~TArray<float,TSizedDefaultAllocator<32>_>(&local_f0);
  return param_3 + 1;
}

// DrawPowerSpectrum @ 14d918dc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SAudioSpectrumPlot::DrawPowerSpectrum
          (SAudioSpectrumPlot *this,FGeometry *param_1,FSlateWindowElementList *param_2,int param_3,
          FWidgetStyle *param_4,FAudioSpectrumPlotScaleInfo *param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  EAudioSpectrumPlotFrequencyAxisScale *pEVar6;
  EAudioSpectrumPlotFrequencyAxisPixelBucketMode *pEVar7;
  TArrayView<UE::Math::TVector2<float>_const_,int> *pTVar8;
  longlong lVar9;
  undefined1 *puVar10;
  bool *pbVar11;
  TArrayView<UE::Math::TVector2<float>_const_,int> *pTVar12;
  float fVar13;
  int local_res20;
  undefined1 auStackY_598 [32];
  TVector2<float>_u_0 local_548;
  int local_540;
  int local_53c;
  bool local_538 [4];
  int local_534;
  uint local_530;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_528;
  int local_518;
  <lambda_2> local_514 [4];
  EAudioSpectrumPlotFrequencyAxisPixelBucketMode local_510;
  float local_50c;
  uint local_508;
  uint local_504;
  uint local_500;
  float local_4fc;
  float local_4f8;
  float local_4f0;
  float local_4ec;
  float local_4e8;
  float local_4e0;
  float local_4dc;
  float local_4d8;
  int local_4d4;
  uint local_4d0;
  int local_4cc;
  int local_4c8;
  int local_4c4;
  int local_4c0;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_4b8;
  TVector2<float>_u_0 local_4b0;
  TVector2<float>_u_0 local_4a8;
  TVector2<float>_u_0 local_4a0;
  float local_498;
  float local_494;
  float local_490;
  float local_488;
  float local_480;
  float local_47c;
  float local_478;
  float local_474;
  float local_470;
  float local_46c;
  float local_468;
  float local_464;
  int local_460;
  int local_45c;
  int local_458;
  uint local_454;
  int local_450;
  int local_44c;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_448;
  uint local_440;
  float local_43c;
  uint local_438;
  uint local_434;
  FScriptContainerElement *local_430;
  float local_428;
  float fStack_424;
  uint local_420;
  float local_41c;
  undefined8 local_418;
  float local_410;
  float local_40c;
  TCheckedPointerIterator<UE::Math::TVector2<float>,int,0> local_408;
  FScriptContainerElement *local_3f0;
  FScriptContainerElement *local_3e8;
  FScriptContainerElement *local_3e0;
  FScriptContainerElement *local_3d8;
  FScriptContainerElement *local_3d0;
  FScriptContainerElement *local_3c8;
  undefined4 local_3c0;
  undefined4 local_3bc;
  FScriptContainerElement *local_3b8;
  FScriptContainerElement *local_3b0;
  FScriptContainerElement *local_3a8;
  longlong local_3a0;
  longlong local_398;
  FScriptContainerElement *local_390;
  FScriptContainerElement *local_388;
  FScriptContainerElement *local_380;
  undefined8 *local_378;
  <lambda_1> local_370;
  TFunctionRef<float___cdecl(UE::Math::TVector2<float>_const_&)> *local_368;
  TArrayView<UE::Math::TVector2<float>_const_,int> *local_360;
  TFunctionRef<float___cdecl(UE::Math::TVector2<float>_const_&)> *local_358;
  TFunctionRef<float___cdecl(UE::Math::TVector2<float>_const_&)> *local_350;
  TArrayView<UE::Math::TVector2<float>_const_,int> *local_348;
  TFunctionRef<float___cdecl(UE::Math::TVector2<float>_const_&)> *local_340;
  FScriptContainerElement *local_328;
  FScriptContainerElement *local_320;
  TVector2<float> *local_318;
  TVector2<float>_u_0 local_310;
  TVector2<float>_u_0 local_308;
  TVector2<float>_u_0 local_300;
  TVector2<float>_u_0 local_2f8;
  TVector2<float>_u_0 local_2f0;
  TVector2<float>_u_0 local_2e8;
  undefined4 local_2e0;
  undefined4 local_2dc;
  TVector2<float>_u_0 local_2d8;
  TVector2<float>_u_0 local_2d0;
  TVector2<float>_u_0 local_2c8;
  longlong local_2c0;
  longlong local_2b8;
  TVector2<float>_u_0 local_2b0;
  TVector2<float>_u_0 local_2a8;
  void *local_2a0;
  undefined8 *local_298;
  float *local_290;
  TVector2<float>_u_0 local_288;
  TVector2<float>_u_0 local_280;
  TVector2<float>_u_0 local_278;
  TVector2<float>_u_0 local_270;
  TVector2<float>_u_0 local_268;
  TVector2<float>_u_0 local_260;
  undefined4 local_258;
  undefined4 local_254;
  TVector2<float>_u_0 local_250;
  TVector2<float>_u_0 local_248;
  TVector2<float>_u_0 local_240;
  longlong local_238;
  longlong local_230;
  TVector2<float>_u_0 local_228;
  TVector2<float>_u_0 local_220;
  void *local_218;
  undefined8 *local_210;
  TArrayView<UE::Math::TVector2<float>_const_,int> *local_208;
  TVector2<float>_u_0 local_200;
  TVector2<float>_u_0 local_1f8;
  TVector2<float>_u_0 local_1f0;
  TVector2<float>_u_0 local_1e8;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_1e0;
  TVector2<float>_u_0 local_1d8;
  FDeprecateVector2DParameter local_1d0;
  TTransform2<float> *local_1c8;
  FSlateLayoutTransform *local_1c0;
  FLinearColor *local_1b8;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *local_1b0;
  FPaintGeometry *local_1a8;
  int local_1a0;
  int local_19c;
  int local_198;
  FAudioPowerSpectrumData local_190;
  TVector2<float> local_168;
  undefined1 local_160 [24];
  TArrayView<UE::Math::TVector2<float>_const_,int> local_148;
  undefined1 local_138 [16];
  TArrayView<UE::Math::TVector2<float>_const_,int> local_128;
  undefined1 local_118 [16];
  TArrayView<UE::Math::TVector2<float>_const_,int> local_108;
  FLinearColor local_f8;
  FSlateLayoutTransform local_e0;
  TCheckedPointerIterator<UE::Math::TVector2<float>,int,0> local_d0;
  TFunctionRef<float___cdecl(UE::Math::TVector2<float>_const_&)> local_b8;
  TArrayView<UE::Math::TVector2<float>_const_,int> local_a8;
  TFunctionRef<float___cdecl(UE::Math::TVector2<float>_const_&)> local_98;
  TArrayView<UE::Math::TVector2<float>_const_,int> local_88;
  TArrayView<UE::Math::TVector2<float>_const_,int> local_78;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_68;
  FPaintGeometry local_58;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_598;
  GetPowerSpectrum(this,&local_190);
  local_454 = local_190.CenterFrequencies.ArrayNum;
  local_440 = local_190.SquaredMagnitudes.ArrayNum;
  if ((local_190.CenterFrequencies.ArrayNum != local_190.SquaredMagnitudes.ArrayNum) &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4977582906667958937>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioSpectrumPlot.cpp"
                         ,0x299,
                         "PowerSpectrum.CenterFrequencies.Num() == PowerSpectrum.SquaredMagnitudes.Num()"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  local_438 = local_190.SquaredMagnitudes.ArrayNum;
  local_504 = local_190.SquaredMagnitudes.ArrayNum;
  local_434 = local_190.CenterFrequencies.ArrayNum;
  local_508 = local_190.CenterFrequencies.ArrayNum;
  if (local_190.CenterFrequencies.ArrayNum < local_190.SquaredMagnitudes.ArrayNum) {
    local_500 = local_190.CenterFrequencies.ArrayNum;
  }
  else {
    local_500 = local_190.SquaredMagnitudes.ArrayNum;
  }
  local_420 = local_500;
  local_530 = local_500;
  local_res20 = param_3;
  if (0 < (int)local_500) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
              (&local_528.AllocatorInstance);
    local_528.ArrayNum = 0;
    local_528.ArrayMax =
         TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                   (&local_528.AllocatorInstance);
    if ((int)local_530 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_530);
    }
    if (local_528.ArrayMax < (int)local_530) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,local_530,&local_528.AllocatorInstance,local_528.ArrayNum,&local_528.ArrayMax);
    }
    pfVar5 = TAttribute<float>::Get(&this->TiltExponent);
    local_490 = *pfVar5;
    pfVar5 = TAttribute<float>::Get(&this->TiltPivotFrequency);
    local_494 = *pfVar5;
    pEVar6 = TAttribute<enum_EAudioSpectrumPlotFrequencyAxisScale>::Get(&this->FrequencyAxisScale);
    if (*pEVar6 == Logarithmic) {
      local_4fc = __real_3727c5ac;
    }
    else {
      local_4fc = __real_ff7fffff;
    }
    local_4f0 = local_4fc;
    fVar13 = __real_c1a00000;
    local_4e0 = powf(__real_41200000,__real_c1a00000);
    local_41c = local_4e0;
    for (local_518 = 0; local_518 < (int)local_530; local_518 = local_518 + 1) {
      pfVar5 = TArrayView<float_const_,int>::operator[](&local_190.CenterFrequencies,local_518);
      local_4f8 = *pfVar5;
      local_4ec = local_4f8;
      if (local_4f8 <= local_4f0) {
        local_4ec = local_4f0;
      }
      local_498 = local_4ec;
      local_4d8 = local_4ec;
      local_488 = local_4ec / local_494;
      local_480 = powf(local_488,local_490);
      local_47c = local_480;
      pfVar5 = TArrayView<float_const_,int>::operator[](&local_190.SquaredMagnitudes,local_518);
      local_4e8 = local_47c * *pfVar5;
      local_4dc = local_4e8;
      if (local_4e8 <= local_4e0) {
        local_4dc = local_4e0;
      }
      local_478 = local_4dc;
      local_474 = local_4dc;
      local_470 = logf(local_4dc);
      local_46c = logf(__real_41200000);
      local_468 = local_470 / local_46c;
      fVar13 = __real_41200000 * local_468;
      local_428 = local_4d8;
      local_430 = (FScriptContainerElement *)&local_428;
      local_3f0 = local_528.AllocatorInstance.Data;
      local_3e8 = local_528.AllocatorInstance.Data;
      local_3e0 = local_528.AllocatorInstance.Data;
      local_464 = fVar13;
      fStack_424 = fVar13;
      if (local_528.AllocatorInstance.Data <= local_430) {
        local_3d8 = local_528.AllocatorInstance.Data;
        local_3d0 = local_528.AllocatorInstance.Data;
        local_3c8 = local_528.AllocatorInstance.Data;
        if (local_430 < local_528.AllocatorInstance.Data + (longlong)local_528.ArrayMax * 8) {
          local_3c0 = 0;
          local_3bc = 0;
          UE::Core::Private::FormatStringSan::
          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
          local_3a0 = (longlong)local_528.ArrayNum;
          local_398 = (longlong)local_528.ArrayMax;
          local_3b8 = local_528.AllocatorInstance.Data;
          local_3b0 = local_528.AllocatorInstance.Data;
          local_3a8 = local_528.AllocatorInstance.Data;
          local_390 = local_528.AllocatorInstance.Data;
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            iVar3 = (*pcVar1)();
            return iVar3;
          }
        }
      }
      if (local_528.ArrayNum == local_528.ArrayMax) {
        local_528.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&local_528.AllocatorInstance,&local_528.ArrayMax);
      }
      local_4d4 = local_528.ArrayNum;
      local_388 = local_528.AllocatorInstance.Data;
      local_380 = local_528.AllocatorInstance.Data + (longlong)local_528.ArrayNum * 8;
      local_528.ArrayNum = local_528.ArrayNum + 1;
      local_378 = ::operator_new(8,local_380);
      *local_378 = CONCAT44(fStack_424,local_428);
      local_1a0 = local_4d4;
    }
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
              ((ForAnyElementType *)&local_548._s_0);
    local_540 = 0;
    local_53c = TSizedHeapAllocator<32,FMemory>::ForAnyElementType::GetInitialCapacity
                          ((ForAnyElementType *)&local_548._s_0);
    pEVar7 = TAttribute<enum_EAudioSpectrumPlotFrequencyAxisPixelBucketMode>::Get
                       (&this->FrequencyAxisPixelBucketMode);
    local_510 = *pEVar7;
    if (local_510 == Sample) {
      local_370.ScaleInfo = param_5;
      local_368 = &local_b8;
      local_358 = TFunctionRef<float___cdecl(UE::Math::TVector2<float>_const_&)>::
                  TFunctionRef<float___cdecl(UE::Math::TVector2<float>_const_&)><_SAudioSpectrumPlot::DrawPowerSpectrum_::__l10::<lambda_1>_const_&>
                            (local_368,&local_370);
      local_360 = &local_a8;
      pTVar8 = TArrayView<UE::Math::TVector2<float>_const_,int>::
               TArrayView<UE::Math::TVector2<float>_const_,int><TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
                         (local_360,&local_528);
      puVar10 = local_160;
      for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar10 = *(undefined1 *)&pTVar8->DataPtr;
        pTVar8 = (TArrayView<UE::Math::TVector2<float>_const_,int> *)
                 ((longlong)&pTVar8->DataPtr + 1);
        puVar10 = puVar10 + 1;
      }
      puVar10 = local_160;
      pTVar8 = &local_148;
      for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
        *(undefined1 *)&pTVar8->DataPtr = *puVar10;
        puVar10 = puVar10 + 1;
        pTVar8 = (TArrayView<UE::Math::TVector2<float>_const_,int> *)
                 ((longlong)&pTVar8->DataPtr + 1);
      }
      GetSpectrumLinePoints
                ((TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)&local_548._s_0,
                 &local_148,param_5,local_358);
    }
    else if (local_510 == Peak) {
      local_350 = &local_98;
      local_340 = TFunctionRef<float___cdecl(UE::Math::TVector2<float>_const_&)>::
                  TFunctionRef<float___cdecl(UE::Math::TVector2<float>_const_&)><_SAudioSpectrumPlot::DrawPowerSpectrum_::__l11::<lambda_2>_const_&>
                            (local_350,local_514);
      local_348 = &local_88;
      pTVar8 = TArrayView<UE::Math::TVector2<float>_const_,int>::
               TArrayView<UE::Math::TVector2<float>_const_,int><TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
                         (local_348,&local_528);
      puVar10 = local_138;
      for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar10 = *(undefined1 *)&pTVar8->DataPtr;
        pTVar8 = (TArrayView<UE::Math::TVector2<float>_const_,int> *)
                 ((longlong)&pTVar8->DataPtr + 1);
        puVar10 = puVar10 + 1;
      }
      puVar10 = local_138;
      pTVar8 = &local_128;
      for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
        *(undefined1 *)&pTVar8->DataPtr = *puVar10;
        puVar10 = puVar10 + 1;
        pTVar8 = (TArrayView<UE::Math::TVector2<float>_const_,int> *)
                 ((longlong)&pTVar8->DataPtr + 1);
      }
      GetSpectrumLinePoints
                ((TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)&local_548._s_0,
                 &local_128,param_5,local_340);
    }
    else if (local_510 == Average) {
      local_4c4 = -0x80000000;
      local_4a8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
      local_534 = 0;
      local_4b8 = &local_528;
      TCheckedPointerIterator<UE::Math::TVector2<float>,int,0>::
      TCheckedPointerIterator<UE::Math::TVector2<float>,int,0>
                (&local_408,&local_528.ArrayNum,(TVector2<float> *)local_528.AllocatorInstance.Data)
      ;
      local_328 = (local_4b8->AllocatorInstance).Data;
      local_460 = local_4b8->ArrayNum;
      local_320 = local_328;
      TCheckedPointerIterator<UE::Math::TVector2<float>,int,0>::
      TCheckedPointerIterator<UE::Math::TVector2<float>,int,0>
                (&local_d0,&local_4b8->ArrayNum,
                 (TVector2<float> *)(local_328 + (longlong)local_460 * 8));
      while( true ) {
        if (*local_408.CurrentNum != local_408.InitialNum) {
          pbVar11 = local_538;
          for (lVar9 = 1; lVar9 != 0; lVar9 = lVar9 + -1) {
            *pbVar11 = false;
            pbVar11 = pbVar11 + 1;
          }
          `TCheckedPointerIterator<UE::Math::TVector2<float>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_538);
        }
        local_538[1] = local_408.Ptr != local_d0.Ptr;
        local_4d0 = (uint)local_538[1];
        if (!local_538[1]) break;
        local_318 = local_408.Ptr;
        local_418 = (TVector2<float>_u_0)(local_408.Ptr)->field0_0x0;
        local_50c = FAudioSpectrumPlotScaleInfo::FrequencyToLocalX(param_5,(float)local_418);
        local_43c = FAudioSpectrumPlotScaleInfo::SoundLevelToLocalY(param_5,local_418._4_4_);
        fVar13 = local_50c + local_50c + __real_3f000000;
        local_118 = ZEXT416((uint)fVar13);
        local_4c8 = (int)ROUND(fVar13) >> 1;
        local_45c = local_4c8;
        local_458 = local_4c8;
        if ((local_4c8 != local_4c4) && (0 < local_534)) {
          local_4b0._s_0 =
               (TVector2<float>_u_0_s_0)
               UE::Math::TVector2<float>::operator/((TVector2<float> *)&local_4a8._s_0,fVar13);
          local_310 = local_548;
          local_308 = local_548;
          local_300 = local_548;
          if ((ulonglong)local_548 <= (ulonglong)local_4b0) {
            local_2f8 = local_548;
            local_2f0 = local_548;
            local_2e8 = local_548;
            if ((ulonglong)local_4b0 < (ulonglong)(local_548._s_0 + (longlong)local_53c * 8)) {
              local_2e0 = 0;
              local_2dc = 0;
              UE::Core::Private::FormatStringSan::
              AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
              local_2c0 = (longlong)local_540;
              local_2b8 = (longlong)local_53c;
              local_2d8 = local_548;
              local_2d0 = local_548;
              local_2c8 = local_548;
              local_2b0 = local_548;
              bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar2) {
                pcVar1 = (code *)swi(3);
                iVar3 = (*pcVar1)();
                return iVar3;
              }
            }
          }
          if (local_540 == local_53c) {
            local_540 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x408,(ForAnyElementType *)&local_548._s_0,&local_53c);
          }
          local_4cc = local_540;
          local_2a8 = local_548;
          local_2a0 = (void *)((longlong)local_548 + (longlong)local_540 * 8);
          local_540 = local_540 + 1;
          local_298 = ::operator_new(8,local_2a0);
          *local_298 = *(undefined8 *)local_4b0;
          local_19c = local_4cc;
          local_4a8 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
          local_534 = 0;
        }
        local_4c4 = local_4c8;
        local_410 = local_50c;
        local_40c = local_43c;
        local_290 = &local_410;
        UE::Math::TVector2<float>::operator+=((TVector2<float> *)&local_4a8._s_0,&local_168);
        local_534 = local_534 + 1;
        local_408.Ptr = local_408.Ptr + 1;
      }
      if ((local_534 < 1) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrCount > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioSpectrumPlot.cpp"
                             ,0x2e9,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      local_4a0._s_0 =
           (TVector2<float>_u_0_s_0)
           UE::Math::TVector2<float>::operator/((TVector2<float> *)&local_4a8._s_0,fVar13);
      local_288 = local_548;
      local_280 = local_548;
      local_278 = local_548;
      if ((ulonglong)local_548 <= (ulonglong)local_4a0) {
        local_270 = local_548;
        local_268 = local_548;
        local_260 = local_548;
        if ((ulonglong)local_4a0 < (ulonglong)(local_548._s_0 + (longlong)local_53c * 8)) {
          local_258 = 0;
          local_254 = 0;
          UE::Core::Private::FormatStringSan::
          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
          local_238 = (longlong)local_540;
          local_230 = (longlong)local_53c;
          local_250 = local_548;
          local_248 = local_548;
          local_240 = local_548;
          local_228 = local_548;
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            iVar3 = (*pcVar1)();
            return iVar3;
          }
        }
      }
      if (local_540 == local_53c) {
        local_540 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,(ForAnyElementType *)&local_548._s_0,&local_53c);
      }
      local_4c0 = local_540;
      local_220 = local_548;
      local_218 = (void *)((longlong)local_548 + (longlong)local_540 * 8);
      local_540 = local_540 + 1;
      local_210 = ::operator_new(8,local_218);
      *local_210 = *(undefined8 *)local_4a0;
      local_198 = local_4c0;
    }
    local_208 = &local_78;
    pTVar8 = TArrayView<UE::Math::TVector2<float>_const_,int>::
             TArrayView<UE::Math::TVector2<float>_const_,int><TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_&,TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
                       (local_208,
                        (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)
                        &local_548._s_0);
    pTVar12 = &local_108;
    for (lVar9 = 0x10; lVar9 != 0; lVar9 = lVar9 + -1) {
      *(undefined1 *)&pTVar12->DataPtr = *(undefined1 *)&pTVar8->DataPtr;
      pTVar8 = (TArrayView<UE::Math::TVector2<float>_const_,int> *)((longlong)&pTVar8->DataPtr + 1);
      pTVar12 = (TArrayView<UE::Math::TVector2<float>_const_,int> *)
                ((longlong)&pTVar12->DataPtr + 1);
    }
    uVar4 = DrawCrosshairAndAxisLabels(this,param_1,param_2,param_3,param_4,param_5,&local_108);
    GetSpectrumColor(this,&local_f8,param_4);
    local_1b8 = &local_f8;
    local_448 = &local_68;
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ForAnyElementType
              (&local_448->AllocatorInstance);
    local_450 = local_540;
    local_44c = local_540;
    local_200 = local_548;
    local_1f8 = local_548;
    local_1f0 = local_548;
    local_1e8 = local_548;
    TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
    CopyToEmpty<UE::Math::TVector2<float>,int>(local_448,(TVector2<float> *)local_548,local_540,0);
    local_1e0 = local_448;
    local_1b0 = local_448;
    local_538[2] = param_1->bHasRenderTransform;
    local_1d8._s_0 = *(TVector2<float>_u_0_s_0 *)&param_1->Size;
    UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
              (&local_1d0,(TVector2<float> *)&local_1d8._s_0);
    local_1c8 = FGeometry::GetAccumulatedRenderTransform(param_1);
    local_1c0 = FGeometry::GetAccumulatedLayoutTransform(param_1,&local_e0);
    FPaintGeometry::FPaintGeometry(&local_58,local_1c0,local_1c8,&local_1d0,local_538[2]);
    local_1a8 = &local_58;
    FSlateDrawElement::MakeLines
              (param_2,uVar4,local_1a8,local_1b0,None,local_1b8,true,__real_3f800000);
    local_res20 = uVar4 + 1;
    TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
    ~TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>
              ((TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)&local_548._s_0);
    TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>::
    ~TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>(&local_528);
  }
  return local_res20;
}

// DrawSolidBackgroundRectangle @ 14d91a550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SAudioSpectrumPlot::DrawSolidBackgroundRectangle
          (SAudioSpectrumPlot *this,FGeometry *param_1,FSlateWindowElementList *param_2,int param_3,
          FWidgetStyle *param_4)

{
  undefined1 uVar1;
  undefined1 auStackY_178 [32];
  TVector2<float>_u_0 local_140;
  FDeprecateVector2DParameter local_138;
  TTransform2<float> *local_130;
  FSlateLayoutTransform *local_128;
  FLinearColor local_120;
  FSlateLayoutTransform local_110 [2];
  FSlateBrush local_f8;
  FPaintGeometry local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStackY_178;
  FSlateBrush::FSlateBrush(&local_f8);
  GetBackgroundColor(this,&local_120,param_4);
  local_140._s_0 = *(TVector2<float>_u_0_s_0 *)&param_1->Size;
  UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
            (&local_138,(TVector2<float> *)&local_140._s_0);
  local_130 = FGeometry::GetAccumulatedRenderTransform(param_1);
  local_128 = FGeometry::GetAccumulatedLayoutTransform(param_1,local_110);
  FPaintGeometry::FPaintGeometry
            (&local_48,local_128,local_130,&local_138,param_1->bHasRenderTransform);
  FSlateDrawElement::MakeBox(param_2,param_3,&local_48,&local_f8,None,&local_120);
  FSlateBrush::~FSlateBrush(&local_f8);
  return param_3 + 1;
}

// GetAxisLabelColor @ 14d92ade0

FLinearColor * __thiscall
SAudioSpectrumPlot::GetAxisLabelColor
          (SAudioSpectrumPlot *this,FLinearColor *__return_storage_ptr__,FWidgetStyle *param_1)

{
  bool bVar1;
  FSlateColor *this_00;
  FSlateColor *pFVar2;
  FLinearColor *this_01;
  FLinearColor *pFVar3;
  FSlateColor *local_58;
  FSlateColor local_20;
  
  this_00 = TAttribute<FSlateColor>::Get(&this->AxisLabelColor);
  pFVar2 = FSlateColor::UseStyle(&local_20);
  bVar1 = FSlateColor::operator!=(this_00,pFVar2);
  if (bVar1) {
    local_58 = TAttribute<FSlateColor>::Get(&this->AxisLabelColor);
  }
  else {
    local_58 = &this->Style->AxisLabelColor;
  }
  this_01 = FSlateColor::GetColor(local_58,param_1);
  pFVar3 = FWidgetStyle::GetColorAndOpacityTint(param_1);
  FLinearColor::operator*(this_01,__return_storage_ptr__,pFVar3);
  return __return_storage_ptr__;
}

// GetBackgroundColor @ 14d92aed0

FLinearColor * __thiscall
SAudioSpectrumPlot::GetBackgroundColor
          (SAudioSpectrumPlot *this,FLinearColor *__return_storage_ptr__,FWidgetStyle *param_1)

{
  bool bVar1;
  FSlateColor *this_00;
  FSlateColor *pFVar2;
  FLinearColor *this_01;
  FLinearColor *pFVar3;
  FSlateColor *local_58;
  FSlateColor local_20;
  
  this_00 = TAttribute<FSlateColor>::Get(&this->BackgroundColor);
  pFVar2 = FSlateColor::UseStyle(&local_20);
  bVar1 = FSlateColor::operator!=(this_00,pFVar2);
  if (bVar1) {
    local_58 = TAttribute<FSlateColor>::Get(&this->BackgroundColor);
  }
  else {
    local_58 = &this->Style->BackgroundColor;
  }
  this_01 = FSlateColor::GetColor(local_58,param_1);
  pFVar3 = FWidgetStyle::GetColorAndOpacityTint(param_1);
  FLinearColor::operator*(this_01,__return_storage_ptr__,pFVar3);
  return __return_storage_ptr__;
}

// GetCrosshairColor @ 14d92c3f0

FLinearColor * __thiscall
SAudioSpectrumPlot::GetCrosshairColor
          (SAudioSpectrumPlot *this,FLinearColor *__return_storage_ptr__,FWidgetStyle *param_1)

{
  bool bVar1;
  FSlateColor *this_00;
  FSlateColor *pFVar2;
  FLinearColor *this_01;
  FLinearColor *pFVar3;
  FSlateColor *local_58;
  FSlateColor local_20;
  
  this_00 = TAttribute<FSlateColor>::Get(&this->CrosshairColor);
  pFVar2 = FSlateColor::UseStyle(&local_20);
  bVar1 = FSlateColor::operator!=(this_00,pFVar2);
  if (bVar1) {
    local_58 = TAttribute<FSlateColor>::Get(&this->CrosshairColor);
  }
  else {
    local_58 = &this->Style->CrosshairColor;
  }
  this_01 = FSlateColor::GetColor(local_58,param_1);
  pFVar3 = FWidgetStyle::GetColorAndOpacityTint(param_1);
  FLinearColor::operator*(this_01,__return_storage_ptr__,pFVar3);
  return __return_storage_ptr__;
}

// GetGridColor @ 14d92d950

FLinearColor * __thiscall
SAudioSpectrumPlot::GetGridColor
          (SAudioSpectrumPlot *this,FLinearColor *__return_storage_ptr__,FWidgetStyle *param_1)

{
  bool bVar1;
  FSlateColor *this_00;
  FSlateColor *pFVar2;
  FLinearColor *this_01;
  FLinearColor *pFVar3;
  FSlateColor *local_58;
  FSlateColor local_20;
  
  this_00 = TAttribute<FSlateColor>::Get(&this->GridColor);
  pFVar2 = FSlateColor::UseStyle(&local_20);
  bVar1 = FSlateColor::operator!=(this_00,pFVar2);
  if (bVar1) {
    local_58 = TAttribute<FSlateColor>::Get(&this->GridColor);
  }
  else {
    local_58 = &this->Style->GridColor;
  }
  this_01 = FSlateColor::GetColor(local_58,param_1);
  pFVar3 = FWidgetStyle::GetColorAndOpacityTint(param_1);
  FLinearColor::operator*(this_01,__return_storage_ptr__,pFVar3);
  return __return_storage_ptr__;
}

// GetGridLineFrequencies @ 14d92da40

void __thiscall
SAudioSpectrumPlot::GetGridLineFrequencies
          (SAudioSpectrumPlot *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  int iVar4;
  EAudioSpectrumPlotFrequencyAxisScale *pEVar5;
  float *pfVar6;
  float local_348;
  float local_344;
  float local_340;
  float local_33c;
  int local_338;
  float local_334;
  int local_330;
  float local_32c;
  int local_328;
  int local_324;
  float local_320;
  float local_31c;
  float local_318;
  float local_314;
  float local_310;
  float local_30c;
  float local_308;
  float local_304;
  float local_300;
  float local_2fc;
  float local_2f8;
  float local_2f0;
  float local_2e8;
  float local_2e4;
  float local_2e0;
  float local_2dc;
  float local_2d8;
  float local_2d4;
  float local_2d0;
  float local_2cc;
  float local_2c8;
  float local_2c4;
  FScriptContainerElement *local_2c0;
  FScriptContainerElement *local_2b8;
  FScriptContainerElement *local_2b0;
  FScriptContainerElement *local_2a8;
  int local_2a0;
  int local_29c;
  int local_298;
  int local_294;
  FScriptContainerElement *local_290;
  FScriptContainerElement *local_288;
  FScriptContainerElement *local_280;
  FScriptContainerElement *local_278;
  FScriptContainerElement *local_270;
  FScriptContainerElement *local_268;
  undefined4 local_260;
  undefined4 local_25c;
  FScriptContainerElement *local_258;
  FScriptContainerElement *local_250;
  FScriptContainerElement *local_248;
  longlong local_240;
  longlong local_238;
  FScriptContainerElement *local_230;
  FScriptContainerElement *local_228;
  FScriptContainerElement *local_220;
  float *local_218;
  FScriptContainerElement *local_210;
  FScriptContainerElement *local_208;
  FScriptContainerElement *local_200;
  FScriptContainerElement *local_1f8;
  FScriptContainerElement *local_1f0;
  FScriptContainerElement *local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  FScriptContainerElement *local_1d8;
  FScriptContainerElement *local_1d0;
  FScriptContainerElement *local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  FScriptContainerElement *local_1b0;
  FScriptContainerElement *local_1a8;
  FScriptContainerElement *local_1a0;
  float *local_198;
  float *local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  FScriptContainerElement *local_168;
  FScriptContainerElement *local_160;
  FScriptContainerElement *local_158;
  FScriptContainerElement *local_150;
  FScriptContainerElement *local_148;
  FScriptContainerElement *local_140;
  undefined4 local_138;
  undefined4 local_134;
  FScriptContainerElement *local_130;
  FScriptContainerElement *local_128;
  FScriptContainerElement *local_120;
  longlong local_118;
  longlong local_110;
  FScriptContainerElement *local_108;
  FScriptContainerElement *local_100;
  FScriptContainerElement *local_f8;
  float *local_f0;
  FScriptContainerElement *local_e8;
  FScriptContainerElement *local_e0;
  FScriptContainerElement *local_d8;
  FScriptContainerElement *local_d0;
  FScriptContainerElement *local_c8;
  FScriptContainerElement *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  FScriptContainerElement *local_b0;
  FScriptContainerElement *local_a8;
  FScriptContainerElement *local_a0;
  longlong local_98;
  longlong local_90;
  FScriptContainerElement *local_88;
  FScriptContainerElement *local_80;
  FScriptContainerElement *local_78;
  float *local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  double local_28;
  undefined8 uStack_20;
  undefined1 local_18 [16];
  
  pEVar5 = TAttribute<enum_EAudioSpectrumPlotFrequencyAxisScale>::Get(&this->FrequencyAxisScale);
  if (*pEVar5 == Logarithmic) {
    pfVar6 = TAttribute<float>::Get(&this->ViewMinFrequency);
    local_340 = *pfVar6;
    pfVar6 = TAttribute<float>::Get(&this->ViewMaxFrequency);
    local_334 = *pfVar6;
    local_320 = logf(local_340);
    local_31c = logf(__real_41200000);
    local_318 = local_320 / local_31c;
    local_68 = ZEXT416((uint)local_318);
    local_58 = roundps(local_68,local_68,1);
    local_310 = (float)local_58._0_4_;
    local_30c = (float)local_58._0_4_;
    local_308 = (float)local_58._0_4_;
    local_304 = (float)local_58._0_4_;
    local_314 = local_318;
    local_348 = powf(__real_41200000,(float)local_58._0_4_);
    local_300 = local_348;
    while (local_348 <= local_334) {
      if (local_340 <= local_348) {
        local_2c0 = (FScriptContainerElement *)&local_348;
        local_290 = (param_2->AllocatorInstance).Data;
        local_288 = local_290;
        local_280 = local_290;
        if ((local_290 <= local_2c0) &&
           (local_278 = (param_2->AllocatorInstance).Data, local_270 = local_278,
           local_268 = local_278, local_2c0 < local_278 + (longlong)param_2->ArrayMax * 4)) {
          local_260 = 0;
          local_25c = 0;
          UE::Core::Private::FormatStringSan::
          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
          local_240 = (longlong)param_2->ArrayNum;
          local_238 = (longlong)param_2->ArrayMax;
          local_258 = (param_2->AllocatorInstance).Data;
          local_250 = local_258;
          local_248 = local_258;
          local_230 = local_258;
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        if (param_2->ArrayNum == param_2->ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
          param_2->ArrayNum = iVar4;
        }
        local_338 = param_2->ArrayNum;
        param_2->ArrayNum = param_2->ArrayNum + 1;
        local_228 = (param_2->AllocatorInstance).Data;
        local_220 = local_228 + (longlong)local_338 * 4;
        local_218 = ::operator_new(4,local_220);
        *local_218 = local_348;
        local_2a0 = local_338;
      }
      local_32c = local_348;
      local_2fc = __real_41200000 * local_348;
      for (; (local_348 < local_2fc && (local_348 <= local_334)); local_348 = local_348 + local_32c)
      {
        if (local_340 <= local_348) {
          local_2b8 = (FScriptContainerElement *)&local_348;
          local_210 = (param_1->AllocatorInstance).Data;
          local_208 = local_210;
          local_200 = local_210;
          if ((local_210 <= local_2b8) &&
             (local_1f8 = (param_1->AllocatorInstance).Data, local_1f0 = local_1f8,
             local_1e8 = local_1f8, local_2b8 < local_1f8 + (longlong)param_1->ArrayMax * 4)) {
            local_1e0 = 0;
            local_1dc = 0;
            UE::Core::Private::FormatStringSan::
            AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
            local_1c0 = (longlong)param_1->ArrayNum;
            local_1b8 = (longlong)param_1->ArrayMax;
            local_1d8 = (param_1->AllocatorInstance).Data;
            local_1d0 = local_1d8;
            local_1c8 = local_1d8;
            local_1b0 = local_1d8;
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar3) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
          if (param_1->ArrayNum == param_1->ArrayMax) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
            param_1->ArrayNum = iVar4;
          }
          local_330 = param_1->ArrayNum;
          param_1->ArrayNum = param_1->ArrayNum + 1;
          local_1a8 = (param_1->AllocatorInstance).Data;
          local_1a0 = local_1a8 + (longlong)local_330 * 4;
          local_198 = ::operator_new(4,local_1a0);
          *local_198 = local_348;
          local_29c = local_330;
        }
      }
    }
  }
  else {
    local_190 = TAttribute<float>::Get(&this->ViewMaxFrequency);
    pfVar6 = TAttribute<float>::Get(&this->ViewMinFrequency);
    local_2f8 = *local_190 - *pfVar6;
    local_2f0 = local_2f8 / __real_41200000;
    local_2e8 = logf(local_2f0);
    local_2e4 = logf(__real_41200000);
    local_2e0 = local_2e8 / local_2e4;
    local_48 = ZEXT416((uint)local_2e0);
    local_38 = roundps(local_48,local_48,1);
    local_2d8 = (float)local_38._0_4_;
    local_2d4 = (float)local_38._0_4_;
    local_2d0 = (float)local_38._0_4_;
    local_2cc = (float)local_38._0_4_;
    local_2dc = local_2e0;
    local_33c = powf(__real_41200000,(float)local_38._0_4_);
    local_2c8 = local_33c;
    pfVar6 = TAttribute<float>::Get(&this->ViewMinFrequency);
    local_188 = (double)(*pfVar6 / local_33c);
    uStack_20 = 0;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_188;
    local_18 = roundpd(auVar2,auVar2,2);
    local_180 = (double)local_18._0_8_;
    local_178 = (double)local_18._0_8_;
    local_170 = (double)local_18._0_8_;
    local_344 = (float)((double)local_33c * (double)local_18._0_8_);
    local_2c4 = local_344;
    local_28 = local_188;
    while (pfVar6 = TAttribute<float>::Get(&this->ViewMaxFrequency),
          local_344 < *pfVar6 || local_344 == *pfVar6) {
      local_2b0 = (FScriptContainerElement *)&local_344;
      local_168 = (param_1->AllocatorInstance).Data;
      local_160 = local_168;
      local_158 = local_168;
      if ((local_168 <= local_2b0) &&
         (local_150 = (param_1->AllocatorInstance).Data, local_148 = local_150,
         local_140 = local_150, local_2b0 < local_150 + (longlong)param_1->ArrayMax * 4)) {
        local_138 = 0;
        local_134 = 0;
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_118 = (longlong)param_1->ArrayNum;
        local_110 = (longlong)param_1->ArrayMax;
        local_130 = (param_1->AllocatorInstance).Data;
        local_128 = local_130;
        local_120 = local_130;
        local_108 = local_130;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (param_1->ArrayNum == param_1->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
        param_1->ArrayNum = iVar4;
      }
      local_328 = param_1->ArrayNum;
      param_1->ArrayNum = param_1->ArrayNum + 1;
      local_100 = (param_1->AllocatorInstance).Data;
      local_f8 = local_100 + (longlong)local_328 * 4;
      local_f0 = ::operator_new(4,local_f8);
      *local_f0 = local_344;
      local_298 = local_328;
      local_2a8 = (FScriptContainerElement *)&local_344;
      local_e8 = (param_2->AllocatorInstance).Data;
      local_e0 = local_e8;
      local_d8 = local_e8;
      if ((local_e8 <= local_2a8) &&
         (local_d0 = (param_2->AllocatorInstance).Data, local_c8 = local_d0, local_c0 = local_d0,
         local_2a8 < local_d0 + (longlong)param_2->ArrayMax * 4)) {
        local_b8 = 0;
        local_b4 = 0;
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_98 = (longlong)param_2->ArrayNum;
        local_90 = (longlong)param_2->ArrayMax;
        local_b0 = (param_2->AllocatorInstance).Data;
        local_a8 = local_b0;
        local_a0 = local_b0;
        local_88 = local_b0;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (param_2->ArrayNum == param_2->ArrayMax) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_2->AllocatorInstance,&param_2->ArrayMax);
        param_2->ArrayNum = iVar4;
      }
      local_324 = param_2->ArrayNum;
      param_2->ArrayNum = param_2->ArrayNum + 1;
      local_80 = (param_2->AllocatorInstance).Data;
      local_78 = local_80 + (longlong)local_324 * 4;
      local_70 = ::operator_new(4,local_78);
      *local_70 = local_344;
      local_294 = local_324;
      local_344 = local_344 + local_33c;
    }
  }
  return;
}

// GetGridLineSoundLevels @ 14d92e890

void __thiscall
SAudioSpectrumPlot::GetGridLineSoundLevels
          (SAudioSpectrumPlot *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  float local_148;
  float local_144;
  int local_140;
  int local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  FScriptContainerElement *local_120;
  FScriptContainerElement *local_118;
  int local_110;
  int local_10c;
  FScriptContainerElement *local_108;
  FScriptContainerElement *local_100;
  FScriptContainerElement *local_f8;
  FScriptContainerElement *local_f0;
  FScriptContainerElement *local_e8;
  FScriptContainerElement *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  FScriptContainerElement *local_d0;
  FScriptContainerElement *local_c8;
  FScriptContainerElement *local_c0;
  longlong local_b8;
  longlong local_b0;
  FScriptContainerElement *local_a8;
  FScriptContainerElement *local_a0;
  FScriptContainerElement *local_98;
  float *local_90;
  FScriptContainerElement *local_88;
  FScriptContainerElement *local_80;
  FScriptContainerElement *local_78;
  FScriptContainerElement *local_70;
  FScriptContainerElement *local_68;
  FScriptContainerElement *local_60;
  undefined4 local_58;
  undefined4 local_54;
  FScriptContainerElement *local_50;
  FScriptContainerElement *local_48;
  FScriptContainerElement *local_40;
  longlong local_38;
  longlong local_30;
  FScriptContainerElement *local_28;
  FScriptContainerElement *local_20;
  FScriptContainerElement *local_18;
  float *local_10;
  
  pfVar4 = TAttribute<float>::Get(&this->ViewMaxSoundLevel);
  local_12c = *pfVar4;
  pfVar4 = TAttribute<float>::Get(&this->ViewMinSoundLevel);
  local_128 = *pfVar4;
  local_138 = logf(__real_40000000);
  local_134 = logf(__real_41200000);
  local_130 = local_138 / local_134;
  local_144 = __real_41a00000 * local_130;
  local_148 = 0.0;
  do {
    if (local_12c < local_148) {
      local_148 = 0.0 - local_144;
      do {
        if (local_148 < local_128) {
          return;
        }
        local_118 = (FScriptContainerElement *)&local_148;
        local_88 = (param_1->AllocatorInstance).Data;
        local_80 = local_88;
        local_78 = local_88;
        if ((local_88 <= local_118) &&
           (local_70 = (param_1->AllocatorInstance).Data, local_68 = local_70, local_60 = local_70,
           local_118 < local_70 + (longlong)param_1->ArrayMax * 4)) {
          local_58 = 0;
          local_54 = 0;
          UE::Core::Private::FormatStringSan::
          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
          local_38 = (longlong)param_1->ArrayNum;
          local_30 = (longlong)param_1->ArrayMax;
          local_50 = (param_1->AllocatorInstance).Data;
          local_48 = local_50;
          local_40 = local_50;
          local_28 = local_50;
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        if (param_1->ArrayNum == param_1->ArrayMax) {
          iVar3 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
          param_1->ArrayNum = iVar3;
        }
        local_13c = param_1->ArrayNum;
        param_1->ArrayNum = param_1->ArrayNum + 1;
        local_20 = (param_1->AllocatorInstance).Data;
        local_18 = local_20 + (longlong)local_13c * 4;
        local_10 = ::operator_new(4,local_18);
        *local_10 = local_148;
        local_10c = local_13c;
        local_148 = local_148 - local_144;
      } while( true );
    }
    local_120 = (FScriptContainerElement *)&local_148;
    local_108 = (param_1->AllocatorInstance).Data;
    local_100 = local_108;
    local_f8 = local_108;
    if ((local_108 <= local_120) &&
       (local_f0 = (param_1->AllocatorInstance).Data, local_e8 = local_f0, local_e0 = local_f0,
       local_120 < local_f0 + (longlong)param_1->ArrayMax * 4)) {
      local_d8 = 0;
      local_d4 = 0;
      UE::Core::Private::FormatStringSan::
      AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
      local_b8 = (longlong)param_1->ArrayNum;
      local_b0 = (longlong)param_1->ArrayMax;
      local_d0 = (param_1->AllocatorInstance).Data;
      local_c8 = local_d0;
      local_c0 = local_d0;
      local_a8 = local_d0;
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (param_1->ArrayNum == param_1->ArrayMax) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&param_1->AllocatorInstance,&param_1->ArrayMax);
      param_1->ArrayNum = iVar3;
    }
    local_140 = param_1->ArrayNum;
    param_1->ArrayNum = param_1->ArrayNum + 1;
    local_a0 = (param_1->AllocatorInstance).Data;
    local_98 = local_a0 + (longlong)local_140 * 4;
    local_90 = ::operator_new(4,local_98);
    *local_90 = local_148;
    local_110 = local_140;
    local_148 = local_148 + local_144;
  } while( true );
}

// GetPowerSpectrum @ 14d9332d0

FAudioPowerSpectrumData * __thiscall
SAudioSpectrumPlot::GetPowerSpectrum
          (SAudioSpectrumPlot *this,FAudioPowerSpectrumData *__return_storage_ptr__)

{
  bool bVar1;
  longlong lVar2;
  FAudioPowerSpectrumData *pFVar3;
  
  bVar1 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                    ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnGetAudioSpectrumData);
  if (bVar1) {
    TDelegate<FAudioPowerSpectrumData___cdecl(void),FDefaultDelegateUserPolicy>::Execute
              (&this->OnGetAudioSpectrumData,__return_storage_ptr__);
  }
  else {
    pFVar3 = __return_storage_ptr__;
    for (lVar2 = 0x20; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined1 *)&(pFVar3->CenterFrequencies).DataPtr = 0;
      pFVar3 = (FAudioPowerSpectrumData *)((longlong)&(pFVar3->CenterFrequencies).DataPtr + 1);
    }
    TArrayView<float_const_,int>::TArrayView<float_const_,int>
              (&__return_storage_ptr__->CenterFrequencies);
    TArrayView<float_const_,int>::TArrayView<float_const_,int>
              (&__return_storage_ptr__->SquaredMagnitudes);
  }
  return __return_storage_ptr__;
}

// GetScaleInfo @ 14d934770

FAudioSpectrumPlotScaleInfo * __thiscall
SAudioSpectrumPlot::GetScaleInfo
          (SAudioSpectrumPlot *this,FAudioSpectrumPlotScaleInfo *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  EAudioSpectrumPlotFrequencyAxisScale EVar5;
  FGeometry *this_00;
  float *pfVar6;
  EAudioSpectrumPlotFrequencyAxisScale *pEVar7;
  FDeprecateSlateVector2D FVar8;
  
  this_00 = SWidget::GetPaintSpaceGeometry((SWidget *)this);
  pfVar6 = TAttribute<float>::Get(&this->ViewMaxSoundLevel);
  fVar1 = *pfVar6;
  pfVar6 = TAttribute<float>::Get(&this->ViewMinSoundLevel);
  fVar2 = *pfVar6;
  pfVar6 = TAttribute<float>::Get(&this->ViewMaxFrequency);
  fVar3 = *pfVar6;
  pfVar6 = TAttribute<float>::Get(&this->ViewMinFrequency);
  fVar4 = *pfVar6;
  pEVar7 = TAttribute<enum_EAudioSpectrumPlotFrequencyAxisScale>::Get(&this->FrequencyAxisScale);
  EVar5 = *pEVar7;
  FVar8 = FGeometry::GetLocalSize(this_00);
  FAudioSpectrumPlotScaleInfo::FAudioSpectrumPlotScaleInfo
            (__return_storage_ptr__,(TVector2<float>)*(TVector2<float>_u_0 *)FVar8,EVar5,fVar4,fVar3
             ,fVar2,fVar1);
  return __return_storage_ptr__;
}

// GetSpectrumColor @ 14d936860

FLinearColor * __thiscall
SAudioSpectrumPlot::GetSpectrumColor
          (SAudioSpectrumPlot *this,FLinearColor *__return_storage_ptr__,FWidgetStyle *param_1)

{
  bool bVar1;
  FSlateColor *this_00;
  FSlateColor *pFVar2;
  FLinearColor *this_01;
  FLinearColor *pFVar3;
  FSlateColor *local_58;
  FSlateColor local_20;
  
  this_00 = TAttribute<FSlateColor>::Get(&this->SpectrumColor);
  pFVar2 = FSlateColor::UseStyle(&local_20);
  bVar1 = FSlateColor::operator!=(this_00,pFVar2);
  if (bVar1) {
    local_58 = TAttribute<FSlateColor>::Get(&this->SpectrumColor);
  }
  else {
    local_58 = &this->Style->SpectrumColor;
  }
  this_01 = FSlateColor::GetColor(local_58,param_1);
  pFVar3 = FWidgetStyle::GetColorAndOpacityTint(param_1);
  FLinearColor::operator*(this_01,__return_storage_ptr__,pFVar3);
  return __return_storage_ptr__;
}

// GetSpectrumLinePoints @ 14d936960

void __cdecl
SAudioSpectrumPlot::GetSpectrumLinePoints
          (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *param_1,
          TArrayView<UE::Math::TVector2<float>_const_,int> *param_2,
          FAudioSpectrumPlotScaleInfo *param_3,
          TFunctionRef<float___cdecl(UE::Math::TVector2<float>_const_&)> *param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TVector2<float>_u_0_s_0 *pTVar4;
  float fVar5;
  TOptional<UE::Math::TVector2<float>_> local_1b0;
  TVector2<float>_u_0 *local_1a0;
  int local_198;
  float local_194;
  TArrayView<UE::Math::TVector2<float>_const_,int> *local_190;
  TVector2<float>_u_0 *local_188;
  TVector2<float>_u_0 local_180;
  TVector2<float>_u_0 *local_178;
  TVector2<float>_u_0 local_170;
  TVector2<float>_u_0 local_168;
  int local_160;
  TVector2<float>_u_0 *local_158;
  TVector2<float>_u_0 *local_150;
  TVector2<float> *local_148;
  TVector2<float>_u_0 *local_140;
  TVector2<float>_u_0 *local_138;
  TVector2<float>_u_0 local_130;
  TVector2<float>_u_0 local_128;
  FAudioSpectrumPlotScaleInfo *local_120;
  TVector2<float>_u_0 *local_118;
  TVector2<float>_u_0 *local_110;
  TVector2<float>_u_0 *local_108;
  FScriptContainerElement *local_100;
  FScriptContainerElement *local_f8;
  FScriptContainerElement *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  FScriptContainerElement *local_e0;
  FScriptContainerElement *local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  FScriptContainerElement *local_b8;
  FScriptContainerElement *local_b0;
  FScriptContainerElement *local_a8;
  TVector2<float>_u_0 *local_a0;
  TVector2<float> *local_98;
  TVector2<float>_u_0 *local_90;
  TVector2<float>_u_0 *local_88;
  TVector2<float>_u_0 *local_80;
  FScriptContainerElement *local_78;
  int local_70;
  FScriptContainerElement *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  FScriptContainerElement *local_58;
  FScriptContainerElement *local_50;
  FScriptContainerElement *local_48;
  FScriptContainerElement *local_40;
  longlong local_38;
  FScriptContainerElement *local_30;
  FScriptContainerElement *local_28;
  FScriptContainerElement *local_20;
  TVector2<float>_u_0 *local_18;
  longlong local_10;
  
  local_120 = param_3;
  TOptional<UE::Math::TVector2<float>_>::TOptional<UE::Math::TVector2<float>_>(&local_1b0);
  local_1a0 = &param_2->DataPtr->field0_0x0;
  local_148 = param_2->DataPtr;
  local_198 = param_2->ArrayNum;
  local_140 = &local_148[local_198].field0_0x0;
  local_190 = param_2;
  local_158 = local_1a0;
  local_150 = local_1a0;
  local_138 = local_140;
  do {
    if (local_1a0 == local_138) {
      TOptional<UE::Math::TVector2<float>_>::GetValue(&local_1b0);
      FAudioSpectrumPlotScaleInfo::ToLocalPos(param_3,(TVector2<float> *)&local_168._s_0);
      local_178 = &local_168;
      local_90 = (TVector2<float>_u_0 *)(param_1->AllocatorInstance).Data;
      local_88 = local_90;
      local_80 = local_90;
      if ((local_90 <= local_178) &&
         (local_78 = (param_1->AllocatorInstance).Data, local_68 = local_78, local_40 = local_78,
         local_178 < (TVector2<float>_u_0 *)(local_78 + (longlong)param_1->ArrayMax * 8))) {
        local_60 = 0;
        local_5c = 0;
        UE::Core::Private::FormatStringSan::
        AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
        local_10 = (longlong)param_1->ArrayNum;
        local_38 = (longlong)param_1->ArrayMax;
        local_58 = (param_1->AllocatorInstance).Data;
        local_50 = local_58;
        local_48 = local_58;
        local_30 = local_58;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if (param_1->ArrayNum == param_1->ArrayMax) {
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,&param_1->AllocatorInstance,&param_1->ArrayMax);
        param_1->ArrayNum = iVar3;
      }
      iVar3 = param_1->ArrayNum;
      param_1->ArrayNum = param_1->ArrayNum + 1;
      local_28 = (param_1->AllocatorInstance).Data;
      local_20 = local_28 + (longlong)iVar3 * 8;
      local_18 = ::operator_new(8,local_20);
      *local_18 = local_168;
      local_160 = iVar3;
      UE::Core::Private::Function::
      TFunctionRefBase<UE::Core::Private::Function::FFunctionRefStoragePolicy,float___cdecl(UE::Math::TVector2<float>_const_&)>
      ::
      ~TFunctionRefBase<UE::Core::Private::Function::FFunctionRefStoragePolicy,float___cdecl(UE::Math::TVector2<float>_const_&)>
                ((TFunctionRefBase<UE::Core::Private::Function::FFunctionRefStoragePolicy,float___cdecl(UE::Math::TVector2<float>_const_&)>
                  *)param_4);
      return;
    }
    local_180 = (TVector2<float>_u_0)*(TVector2<float>_u_0 *)&local_1a0->_s_0;
    bVar2 = TOptional<UE::Math::TVector2<float>_>::IsSet(&local_1b0);
    if (bVar2) {
      pTVar4 = (TVector2<float>_u_0_s_0 *)
               TOptional<UE::Math::TVector2<float>_>::GetValue(&local_1b0);
      local_130._s_0 = *pTVar4;
      local_128._s_0 = local_180._s_0;
      bVar2 = `SAudioSpectrumPlot::GetSpectrumLinePoints'::__l2::<lambda_1>::operator()
                        (&local_120,(TVector2<float>)local_180._s_0,(TVector2<float>)local_130._s_0)
      ;
      if (!bVar2) {
        TOptional<UE::Math::TVector2<float>_>::GetValue(&local_1b0);
        FAudioSpectrumPlotScaleInfo::ToLocalPos(param_3,(TVector2<float> *)&local_170._s_0);
        local_188 = &local_170;
        local_118 = (TVector2<float>_u_0 *)(param_1->AllocatorInstance).Data;
        local_110 = local_118;
        local_108 = local_118;
        if ((local_118 <= local_188) &&
           (local_100 = (param_1->AllocatorInstance).Data, local_f8 = local_100,
           local_f0 = local_100,
           local_188 < (TVector2<float>_u_0 *)(local_100 + (longlong)param_1->ArrayMax * 8))) {
          local_e8 = 0;
          local_e4 = 0;
          UE::Core::Private::FormatStringSan::
          AssertFormatStatus<0,UE::Core::Private::FormatStringSan::TAtArgPos<0>_>();
          local_c8 = (longlong)param_1->ArrayNum;
          local_c0 = (longlong)param_1->ArrayMax;
          local_e0 = (param_1->AllocatorInstance).Data;
          local_d8 = local_e0;
          local_d0 = local_e0;
          local_b8 = local_e0;
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        if (param_1->ArrayNum == param_1->ArrayMax) {
          iVar3 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&param_1->AllocatorInstance,&param_1->ArrayMax);
          param_1->ArrayNum = iVar3;
        }
        iVar3 = param_1->ArrayNum;
        param_1->ArrayNum = param_1->ArrayNum + 1;
        local_b0 = (param_1->AllocatorInstance).Data;
        local_a8 = local_b0 + (longlong)iVar3 * 8;
        local_a0 = ::operator_new(8,local_a8);
        *local_a0 = local_170;
        local_70 = iVar3;
        TOptional<UE::Math::TVector2<float>_>::Reset(&local_1b0);
      }
    }
    bVar2 = TOptional<UE::Math::TVector2<float>_>::IsSet(&local_1b0);
    if (bVar2) {
      local_98 = TOptional<UE::Math::TVector2<float>_>::GetValue(&local_1b0);
      local_194 = UE::Core::Private::Function::
                  TFunctionRefBase<UE::Core::Private::Function::FFunctionRefStoragePolicy,float___cdecl(UE::Math::TVector2<float>_const_&)>
                  ::operator()((TFunctionRefBase<UE::Core::Private::Function::FFunctionRefStoragePolicy,float___cdecl(UE::Math::TVector2<float>_const_&)>
                                *)param_4,local_98);
      fVar5 = UE::Core::Private::Function::
              TFunctionRefBase<UE::Core::Private::Function::FFunctionRefStoragePolicy,float___cdecl(UE::Math::TVector2<float>_const_&)>
              ::operator()((TFunctionRefBase<UE::Core::Private::Function::FFunctionRefStoragePolicy,float___cdecl(UE::Math::TVector2<float>_const_&)>
                            *)param_4,(TVector2<float> *)&local_180._s_0);
      if (fVar5 < local_194) goto LAB_14d936dac;
    }
    else {
LAB_14d936dac:
      TOptional<UE::Math::TVector2<float>_>::operator=
                (&local_1b0,(TVector2<float> *)&local_180._s_0);
    }
    local_1a0 = local_1a0 + 1;
  } while( true );
}

// GetTiltExponentValue @ 14d937100

float __cdecl SAudioSpectrumPlot::GetTiltExponentValue(EAudioSpectrumPlotTilt param_1)

{
  float fVar1;
  
  if ((param_1 == NoTilt) ||
     ((((fVar1 = __real_3f000000, param_1 != Plus1_5dBPerOctave &&
        (fVar1 = __real_3f800000, param_1 != Plus3dBPerOctave)) &&
       (fVar1 = __real_3fc00000, param_1 != Plus4_5dBPerOctave)) &&
      (fVar1 = __real_40000000, param_1 != Plus6dBPerOctave)))) {
    fVar1 = 0.0;
  }
  return fVar1;
}

// OnMouseButtonDown @ 14d94ef20

/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SAudioSpectrumPlot::OnMouseButtonDown
          (SAudioSpectrumPlot *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  bool bVar1;
  FKey *pFVar2;
  FReply *pFVar3;
  TSharedRef<SWidget,1> *pTVar4;
  FKey local_100;
  TSharedRef<SWidget,1> local_e8;
  TSharedRef<SWidget,1> local_d8;
  FReply local_c8;
  
  bVar1 = SWidget::HasMouseCapture((SWidget *)this);
  if (!bVar1) {
    pFVar2 = FPointerEvent::GetEffectingButton(param_2,&local_100);
    bVar1 = ::operator==(pFVar2,&EKeys::RightMouseButton);
    FKey::~FKey(&local_100);
    if (bVar1) {
      pFVar3 = FReply::Handled(&local_c8);
      pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_e8);
      pFVar3 = FReply::CaptureMouse(pFVar3,pTVar4);
      pTVar4 = TSharedFromThis<SWidget,1>::AsShared
                         ((TSharedFromThis<SWidget,1> *)&this->_padding_,&local_d8);
      pFVar3 = FReply::SetUserFocus(pFVar3,pTVar4,Mouse,false);
      FReply::FReply(__return_storage_ptr__,pFVar3);
      FReply::~FReply(&local_c8);
      return __return_storage_ptr__;
    }
  }
  SWidget::OnMouseButtonDown((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnMouseButtonUp @ 14d9508e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SAudioSpectrumPlot::OnMouseButtonUp
          (SAudioSpectrumPlot *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  bool bVar1;
  FKey *pFVar2;
  FDeprecateSlateVector2D *pFVar3;
  bool *pbVar4;
  TSharedRef<SWidget,1> *pTVar5;
  FWidgetPath *pFVar6;
  FWidgetPath *pFVar7;
  FReply *pFVar8;
  undefined1 auStackY_658 [32];
  undefined1 local_5f0 [4];
  FPopupTransitionEffect local_5ec;
  TSharedPtr<SWidget,1> *local_5e8;
  FWidgetPath *local_5e0;
  FDeprecateVector2DParameter local_5d8;
  TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy> *local_5d0;
  TSharedPtr<SWidget,1> *local_5c8;
  FWidgetPath *local_5c0;
  undefined1 *local_5b8;
  longlong *local_5b0;
  TOptional<EPopupMethod> *local_5a8;
  FDeprecateVector2DParameter local_5a0;
  FDeprecateVector2DParameter local_598;
  TSharedRef<SWidget,1> *local_590;
  TSharedRef<SWidget,1> *local_588;
  FSlateApplication *local_580;
  TSharedPtr<SWidget,1> local_578;
  TSharedPtr<SWidget,1> local_568;
  TSharedRef<SWidget,1> local_558;
  TSharedPtr<SWidget,1> local_548;
  TSharedPtr<IMenu,1> local_538;
  TSharedRef<SWidget,1> local_528;
  TSharedRef<SWidget,1> local_518;
  FKey local_508;
  FReply local_4f0;
  FWidgetPath local_438;
  FWidgetPath local_2d8;
  FWidgetPath local_178;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_658;
  bVar1 = SWidget::HasMouseCapture((SWidget *)this);
  if (bVar1) {
    pFVar2 = FPointerEvent::GetEffectingButton(param_2,&local_508);
    bVar1 = ::operator==(pFVar2,&EKeys::RightMouseButton);
    FKey::~FKey(&local_508);
    if (bVar1) {
      pFVar3 = FPointerEvent::GetScreenSpacePosition(param_2);
      UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter(&local_5d8,pFVar3);
      bVar1 = FGeometry::IsUnderLocation(param_1,&local_5d8);
      if ((bVar1) && (pbVar4 = TAttribute<bool>::Get(&this->bAllowContextMenu), *pbVar4 != false)) {
        bVar1 = TDelegateBase<FNotThreadSafeDelegateMode>::IsBound
                          ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->OnContextMenuOpening)
        ;
        if (!bVar1) {
          pTVar5 = BuildDefaultContextMenu(this,&local_558);
          local_5e8 = TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1><SWidget>(&local_568,pTVar5);
        }
        else {
          local_5d0 = &this->OnContextMenuOpening;
          local_5e8 = TDelegate<TSharedPtr<SWidget,1>___cdecl(void),FDefaultDelegateUserPolicy>::
                      Execute(local_5d0,&local_548);
        }
        local_5c8 = local_5e8;
        TSharedPtr<SWidget,1>::TSharedPtr<SWidget,1>(&local_578,local_5e8);
        if (!bVar1) {
          TSharedPtr<SWidget,1>::~TSharedPtr<SWidget,1>(&local_568);
          TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_558);
        }
        else {
          TSharedPtr<SWidget,1>::~TSharedPtr<SWidget,1>(&local_548);
        }
        if (local_578.Object != (SWidget *)0x0) {
          pFVar6 = FInputEvent::GetEventPath((FInputEvent *)param_2);
          if (pFVar6 == (FWidgetPath *)0x0) {
            local_5e0 = FWidgetPath::FWidgetPath(&local_2d8);
          }
          else {
            pFVar7 = FInputEvent::GetEventPath((FInputEvent *)param_2);
            local_5e0 = FWidgetPath::FWidgetPath(&local_178,pFVar7);
          }
          local_5c0 = local_5e0;
          FWidgetPath::FWidgetPath(&local_438,local_5e0);
          if (pFVar6 == (FWidgetPath *)0x0) {
            FWidgetPath::~FWidgetPath(&local_2d8);
          }
          else {
            FWidgetPath::~FWidgetPath(&local_178);
          }
          local_580 = FSlateApplication::Get();
          local_5b8 = local_5f0;
          local_5a8 = TOptional<enum_EPopupMethod>::TOptional<enum_EPopupMethod>(local_5b8);
          UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter
                    (&local_5a0,&UE::Math::TVector2<float>::ZeroVector);
          FPopupTransitionEffect::FPopupTransitionEffect(&local_5ec,ContextMenu);
          pFVar3 = FPointerEvent::GetScreenSpacePosition(param_2);
          UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter(&local_598,pFVar3);
          local_590 = TSharedPtr<SWidget,1>::ToSharedRef(&local_578,&local_518);
          local_5b0 = &this->_padding_;
          local_588 = TSharedFromThis<SWidget,1>::AsShared
                                ((TSharedFromThis<SWidget,1> *)local_5b0,&local_528);
          FSlateApplication::PushMenu
                    (local_580,&local_538,local_588,&local_438,local_590,&local_598,&local_5ec,true,
                     &local_5a0,SUB82(local_5a8,0),true,-1);
          TSharedPtr<IMenu,1>::~TSharedPtr<IMenu,1>(&local_538);
          TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_528);
          TSharedRef<SWidget,1>::~TSharedRef<SWidget,1>(&local_518);
          FWidgetPath::~FWidgetPath(&local_438);
        }
        TSharedPtr<SWidget,1>::~TSharedPtr<SWidget,1>(&local_578);
      }
      pFVar8 = FReply::Handled(&local_4f0);
      pFVar8 = FReply::ReleaseMouseCapture(pFVar8);
      FReply::FReply(__return_storage_ptr__,pFVar8);
      FReply::~FReply(&local_4f0);
      return __return_storage_ptr__;
    }
  }
  SWidget::OnMouseButtonUp((SWidget *)this,__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// OnMouseLeave @ 14d950ea0

void __thiscall SAudioSpectrumPlot::OnMouseLeave(SAudioSpectrumPlot *this,FPointerEvent *param_1)

{
  bool bVar1;
  TAttribute<TOptional<float>_> local_38;
  
  bVar1 = TAttribute<TOptional<float>_>::IsBound(&this->SelectedFrequency);
  if (!bVar1) {
    TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_><FNullOpt>(&local_38,&NullOpt);
    TAttribute<TOptional<float>_>::operator=(&this->SelectedFrequency,&local_38);
    TAttribute<TOptional<float>_>::~TAttribute<TOptional<float>_>(&local_38);
  }
  return;
}

// OnMouseMove @ 14d951320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FReply * __thiscall
SAudioSpectrumPlot::OnMouseMove
          (SAudioSpectrumPlot *this,FReply *__return_storage_ptr__,FGeometry *param_1,
          FPointerEvent *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  EAudioSpectrumPlotFrequencyAxisScale EVar5;
  undefined4 uVar6;
  bool bVar7;
  float *pfVar8;
  EAudioSpectrumPlotFrequencyAxisScale *pEVar9;
  FDeprecateSlateVector2D FVar10;
  FDeprecateSlateVector2D *pFVar11;
  FDeprecateVector2DParameter *pFVar12;
  TTransform2<float> *pTVar13;
  TVector2<float> TVar14;
  undefined1 auStackY_158 [32];
  float local_104;
  TVector2<float>_u_0 local_100;
  TVector2<float>_u_0 local_f8;
  TVector2<float>_u_0 local_f0;
  TVector2<float>_u_0 local_e8;
  TVector2<float>_u_0 local_e0;
  TVector2<float>_u_0 local_d8;
  FDeprecateVector2DParameter *local_d0;
  FDeprecateVector2DParameter local_c8;
  TVector2<float> *local_c0;
  TTransform2<float> *local_b8;
  FDeprecateSlateVector2D local_b0;
  FDeprecateSlateVector2D local_a8;
  FDeprecateVector2DParameter local_98;
  undefined1 local_90 [48];
  FAudioSpectrumPlotScaleInfo local_60;
  TTransform2<float> local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_158;
  bVar7 = TAttribute<TOptional<float>_>::IsBound(&this->SelectedFrequency);
  if (!bVar7) {
    pfVar8 = TAttribute<float>::Get(&this->ViewMaxSoundLevel);
    fVar1 = *pfVar8;
    pfVar8 = TAttribute<float>::Get(&this->ViewMinSoundLevel);
    fVar2 = *pfVar8;
    pfVar8 = TAttribute<float>::Get(&this->ViewMaxFrequency);
    fVar3 = *pfVar8;
    pfVar8 = TAttribute<float>::Get(&this->ViewMinFrequency);
    fVar4 = *pfVar8;
    pEVar9 = TAttribute<enum_EAudioSpectrumPlotFrequencyAxisScale>::Get(&this->FrequencyAxisScale);
    EVar5 = *pEVar9;
    FVar10 = FGeometry::GetLocalSize(param_1);
    local_100 = *(TVector2<float>_u_0 *)FVar10;
    local_f8 = local_100;
    local_f0 = local_100;
    local_e8 = local_100;
    local_e0 = local_100;
    local_d8 = local_100;
    FAudioSpectrumPlotScaleInfo::FAudioSpectrumPlotScaleInfo
              (&local_60,(TVector2<float>)local_100,EVar5,fVar4,fVar3,fVar2,fVar1);
    local_d0 = &local_98;
    pFVar11 = FPointerEvent::GetScreenSpacePosition(param_2);
    pFVar12 = UE::Slate::FDeprecateVector2DParameter::FDeprecateVector2DParameter(local_d0,pFVar11);
    local_c8 = *pFVar12;
    local_c0 = UE::Slate::CastToVector2f(&local_c8);
    pTVar13 = FGeometry::GetAccumulatedRenderTransform(param_1);
    local_b8 = Inverse<TTransform2<float>_>(&local_30,pTVar13);
    TVar14 = TransformPoint<TTransform2<float>,UE::Math::TVector2<float>_>
                       ((TTransform2<float> *)local_90,(TVector2<float> *)local_b8);
    FDeprecateSlateVector2D::FDeprecateSlateVector2D
              (&local_b0,(TVector2<float>)*(TVector2<float>_u_0 *)TVar14.field0_0x0);
    local_a8 = local_b0;
    FVar10 = local_a8;
    local_a8._0_4_ = local_b0._0_4_;
    uVar6 = local_a8._0_4_;
    local_a8 = FVar10;
    local_104 = FAudioSpectrumPlotScaleInfo::LocalXToFrequency(&local_60,(float)uVar6);
    TAttribute<TOptional<float>_>::TAttribute<TOptional<float>_><float>
              ((TAttribute<TOptional<float>_> *)(local_90 + 8),&local_104);
    TAttribute<TOptional<float>_>::operator=
              (&this->SelectedFrequency,(TAttribute<TOptional<float>_> *)(local_90 + 8));
    TAttribute<TOptional<float>_>::~TAttribute<TOptional<float>_>
              ((TAttribute<TOptional<float>_> *)(local_90 + 8));
  }
  FReply::Unhandled(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// OnPaint @ 14d955160

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
SAudioSpectrumPlot::OnPaint
          (SAudioSpectrumPlot *this,FPaintArgs *param_1,FGeometry *param_2,FSlateRect *param_3,
          FSlateWindowElementList *param_4,int param_5,FWidgetStyle *param_6,bool param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  EAudioSpectrumPlotFrequencyAxisScale EVar5;
  int iVar6;
  float *pfVar7;
  EAudioSpectrumPlotFrequencyAxisScale *pEVar8;
  FDeprecateSlateVector2D FVar9;
  FAudioSpectrumPlotScaleInfo local_38;
  
  pfVar7 = TAttribute<float>::Get(&this->ViewMaxSoundLevel);
  fVar1 = *pfVar7;
  pfVar7 = TAttribute<float>::Get(&this->ViewMinSoundLevel);
  fVar2 = *pfVar7;
  pfVar7 = TAttribute<float>::Get(&this->ViewMaxFrequency);
  fVar3 = *pfVar7;
  pfVar7 = TAttribute<float>::Get(&this->ViewMinFrequency);
  fVar4 = *pfVar7;
  pEVar8 = TAttribute<enum_EAudioSpectrumPlotFrequencyAxisScale>::Get(&this->FrequencyAxisScale);
  EVar5 = *pEVar8;
  FVar9 = FGeometry::GetLocalSize(param_2);
  FAudioSpectrumPlotScaleInfo::FAudioSpectrumPlotScaleInfo
            (&local_38,(TVector2<float>)*(TVector2<float>_u_0 *)FVar9,EVar5,fVar4,fVar3,fVar2,fVar1)
  ;
  iVar6 = DrawSolidBackgroundRectangle(this,param_2,param_4,param_5,param_6);
  iVar6 = DrawGrid(this,param_2,param_4,iVar6,param_6,&local_38);
  iVar6 = DrawPowerSpectrum(this,param_2,param_4,iVar6,param_6,&local_38);
  return iVar6;
}

// RemoveContextMenuExtension @ 14d9641a0

void __thiscall
SAudioSpectrumPlot::RemoveContextMenuExtension
          (SAudioSpectrumPlot *this,TSharedRef<FExtensionBase_const_,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FExtender *this_00;
  
  if ((this->ContextMenuExtender).Object == (FExtender *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4977582906667958732>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioWidgets\\Source\\AudioWidgets\\Private\\SAudioSpectrumPlot.cpp"
                       ,0x1cc,"ContextMenuExtender.IsValid()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    this_00 = TSharedPtr<FExtender,1>::operator->(&this->ContextMenuExtender);
    FExtender::RemoveExtension(this_00,param_1);
  }
  return;
}

