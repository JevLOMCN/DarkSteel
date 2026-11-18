// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 1

// FAudioMeterWidgetStyle @ 14d8b0780

FAudioMeterWidgetStyle * __thiscall
FAudioMeterWidgetStyle::FAudioMeterWidgetStyle
          (FAudioMeterWidgetStyle *this,FAudioMeterWidgetStyle *param_1)

{
  double dVar1;
  
  this->_padding_ = (longlong)&___7FAudioMeterWidgetStyle__6B_;
  FSlateBrush::FSlateBrush(&this->MeterValueImage,&param_1->MeterValueImage);
  FSlateBrush::FSlateBrush(&this->BackgroundImage,&param_1->BackgroundImage);
  FSlateBrush::FSlateBrush(&this->MeterBackgroundImage,&param_1->MeterBackgroundImage);
  FSlateBrush::FSlateBrush(&this->MeterValueBackgroundImage,&param_1->MeterValueBackgroundImage);
  FSlateBrush::FSlateBrush(&this->MeterPeakImage,&param_1->MeterPeakImage);
  dVar1 = (param_1->MeterSize).field0_0x0._s_0.Y;
  (this->MeterSize).field0_0x0._s_0.X = (param_1->MeterSize).field0_0x0._s_0.X;
  (this->MeterSize).field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->MeterPadding).field0_0x0._s_0.Y;
  (this->MeterPadding).field0_0x0._s_0.X = (param_1->MeterPadding).field0_0x0._s_0.X;
  (this->MeterPadding).field0_0x0._s_0.Y = dVar1;
  this->MeterValuePadding = param_1->MeterValuePadding;
  this->PeakValueWidth = param_1->PeakValueWidth;
  dVar1 = (param_1->ValueRangeDb).field0_0x0._s_0.Y;
  (this->ValueRangeDb).field0_0x0._s_0.X = (param_1->ValueRangeDb).field0_0x0._s_0.X;
  (this->ValueRangeDb).field0_0x0._s_0.Y = dVar1;
  this->bShowScale = param_1->bShowScale;
  this->bScaleSide = param_1->bScaleSide;
  this->ScaleHashOffset = param_1->ScaleHashOffset;
  this->ScaleHashWidth = param_1->ScaleHashWidth;
  this->ScaleHashHeight = param_1->ScaleHashHeight;
  this->DecibelsPerHash = param_1->DecibelsPerHash;
  FSlateFontInfo::FSlateFontInfo(&this->Font,&param_1->Font);
  return this;
}

