// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 2

// SAudioMeterWidget @ 14d8b7180

SAudioMeterWidget * __thiscall SAudioMeterWidget::SAudioMeterWidget(SAudioMeterWidget *this)

{
  SLeafWidget::SLeafWidget((SLeafWidget *)this);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7SAudioMeterWidget__6B_;
  this->Style = (FAudioMeterWidgetStyle *)0x0;
  (this->BackgroundColor).Value.ColorUseRule = UseColor_Specified;
  (this->BackgroundColor).bIsSet = false;
  this->Orientation = Orient_Vertical;
  *(undefined8 *)&(this->BackgroundColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->BackgroundColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->BackgroundColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->BackgroundColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->BackgroundColor).Getter = 0;
  *(undefined8 *)&(this->MeterBackgroundColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->MeterBackgroundColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->MeterBackgroundColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->BackgroundColor).Getter.field_0x8 = 0;
  (this->MeterBackgroundColor).Value.ColorUseRule = UseColor_Specified;
  (this->MeterBackgroundColor).bIsSet = false;
  *(undefined8 *)&(this->MeterBackgroundColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->MeterBackgroundColor).Getter = 0;
  *(undefined8 *)&(this->MeterValueColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->MeterValueColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->MeterValueColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->MeterBackgroundColor).Getter.field_0x8 = 0;
  (this->MeterValueColor).Value.ColorUseRule = UseColor_Specified;
  (this->MeterValueColor).bIsSet = false;
  *(undefined8 *)&(this->MeterValueColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->MeterValueColor).Getter = 0;
  *(undefined8 *)&(this->MeterValueColor).Getter.field_0x8 = 0;
  (this->MeterPeakColor).Value.ColorUseRule = UseColor_Specified;
  (this->MeterPeakColor).bIsSet = false;
  *(undefined8 *)&(this->MeterPeakColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->MeterPeakColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->MeterPeakColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->MeterPeakColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->MeterPeakColor).Getter = 0;
  *(undefined8 *)&(this->MeterPeakColor).Getter.field_0x8 = 0;
  (this->MeterClippingColor).Value.ColorUseRule = UseColor_Specified;
  (this->MeterClippingColor).bIsSet = false;
  *(undefined8 *)&(this->MeterClippingColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->MeterClippingColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->MeterClippingColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->MeterClippingColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->MeterClippingColor).Getter = 0;
  *(undefined8 *)&(this->MeterClippingColor).Getter.field_0x8 = 0;
  (this->MeterScaleColor).Value.ColorUseRule = UseColor_Specified;
  (this->MeterScaleColor).bIsSet = false;
  *(undefined8 *)&(this->MeterScaleColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->MeterScaleColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->MeterScaleColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->MeterScaleColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->MeterScaleColor).Getter = 0;
  *(undefined8 *)&(this->MeterScaleColor).Getter.field_0x8 = 0;
  (this->MeterScaleLabelColor).Value.ColorUseRule = UseColor_Specified;
  (this->MeterScaleLabelColor).bIsSet = false;
  *(undefined8 *)&(this->MeterScaleLabelColor).Getter.field_0x8 = 0;
  *(undefined8 *)&(this->MeterScaleLabelColor).Value.SpecifiedColor.field0_0x0 = 0x3f800000;
  (this->MeterScaleLabelColor).Value.SpecifiedColor.field0_0x0._s_0.B = 1.0;
  (this->MeterScaleLabelColor).Value.SpecifiedColor.field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->MeterScaleLabelColor).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->MeterScaleLabelColor).Getter = 0;
  (this->MeterChannelInfoAttribute).Value.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeterChannelInfoAttribute).Value.ArrayNum = 0;
  (this->MeterChannelInfoAttribute).Value.ArrayMax = 0;
  (this->MeterChannelInfoAttribute).bIsSet = false;
  *(undefined8 *)&(this->MeterChannelInfoAttribute).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->MeterChannelInfoAttribute).Getter = 0;
  *(undefined8 *)&(this->MeterChannelInfoAttribute).Getter.field_0x8 = 0;
  return this;
}

// ~SAudioMeterWidget @ 14d8bfdb0

void __thiscall SAudioMeterWidget::~SAudioMeterWidget(SAudioMeterWidget *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MeterChannelInfoAttribute).Getter)
  ;
  pvVar1 = *(void **)&(this->MeterChannelInfoAttribute).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MeterChannelInfoAttribute).Getter);
  pFVar2 = (this->MeterChannelInfoAttribute).Value.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MeterScaleLabelColor).Getter);
  pvVar1 = *(void **)&(this->MeterScaleLabelColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MeterScaleLabelColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MeterScaleColor).Getter);
  pvVar1 = *(void **)&(this->MeterScaleColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MeterScaleColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MeterClippingColor).Getter);
  pvVar1 = *(void **)&(this->MeterClippingColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MeterClippingColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MeterPeakColor).Getter);
  pvVar1 = *(void **)&(this->MeterPeakColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MeterPeakColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MeterValueColor).Getter);
  pvVar1 = *(void **)&(this->MeterValueColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MeterValueColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->MeterBackgroundColor).Getter);
  pvVar1 = *(void **)&(this->MeterBackgroundColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->MeterBackgroundColor).Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->BackgroundColor).Getter);
  pvVar1 = *(void **)&(this->BackgroundColor).Getter.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->BackgroundColor).Getter);
  SLeafWidget::~SLeafWidget((SLeafWidget *)this);
  return;
}

