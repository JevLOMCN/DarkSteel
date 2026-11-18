// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgetsCore
// Functions: 4

// StaticStruct @ 14d7e7260

UScriptStruct * __cdecl FAudioMeterDefaultColorWidgetStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAudioMeterDefaultColorWidgetStyle.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgetsCore();
    Z_Registration_Info_UScriptStruct_FAudioMeterDefaultColorWidgetStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAudioMeterDefaultColorWidgetStyle,
                         (UObject *)pUVar1,L"AudioMeterDefaultColorWidgetStyle");
  }
  return Z_Registration_Info_UScriptStruct_FAudioMeterDefaultColorWidgetStyle.OuterSingleton;
}

// FAudioMeterDefaultColorWidgetStyle @ 14d7e7670

FAudioMeterDefaultColorWidgetStyle * __thiscall
FAudioMeterDefaultColorWidgetStyle::FAudioMeterDefaultColorWidgetStyle
          (FAudioMeterDefaultColorWidgetStyle *this)

{
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  this->_padding_ = (longlong)&___7FAudioMeterDefaultColorWidgetStyle__6B_;
  (this->MeterBackgroundColor).field0_0x0._s_0.R = 0.031;
  (this->MeterBackgroundColor).field0_0x0._s_0.G = 0.031;
  (this->MeterBackgroundColor).field0_0x0._s_0.B = 0.031;
  (this->MeterBackgroundColor).field0_0x0._s_0.A = 1.0;
  (this->MeterValueColor).field0_0x0._s_0.R = 0.025719;
  (this->MeterValueColor).field0_0x0._s_0.G = 0.208333;
  (this->MeterValueColor).field0_0x0._s_0.B = 0.069907;
  (this->MeterValueColor).field0_0x0._s_0.A = 1.0;
  (this->MeterPeakColor).field0_0x0._s_0.R = 0.24349;
  (this->MeterPeakColor).field0_0x0._s_0.G = 0.708333;
  (this->MeterPeakColor).field0_0x0._s_0.B = 0.357002;
  (this->MeterPeakColor).field0_0x0._s_0.A = 1.0;
  *(undefined8 *)&(this->MeterClippingColor).field0_0x0 = 0x3f800000;
  (this->MeterClippingColor).field0_0x0._s_0.B = 0.112334;
  (this->MeterClippingColor).field0_0x0._s_0.A = 1.0;
  (this->MeterScaleColor).field0_0x0._s_0.R = 0.017642;
  (this->MeterScaleColor).field0_0x0._s_0.G = 0.017642;
  (this->MeterScaleColor).field0_0x0._s_0.B = 0.017642;
  (this->MeterScaleColor).field0_0x0._s_0.A = 1.0;
  (this->MeterScaleLabelColor).field0_0x0._s_0.R = 0.442708;
  (this->MeterScaleLabelColor).field0_0x0._s_0.G = 0.442708;
  (this->MeterScaleLabelColor).field0_0x0._s_0.B = 0.442708;
  (this->MeterScaleLabelColor).field0_0x0._s_0.A = 1.0;
  return this;
}

// GetDefault @ 14d7e8000

FAudioMeterDefaultColorWidgetStyle * __cdecl FAudioMeterDefaultColorWidgetStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FAudioMeterDefaultColorWidgetStyle(&::Default);
      atexit(`FAudioMeterDefaultColorWidgetStyle::GetDefault'::__l2::
             _dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetTypeName @ 14d7e8540

FName __thiscall
FAudioMeterDefaultColorWidgetStyle::GetTypeName(FAudioMeterDefaultColorWidgetStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

