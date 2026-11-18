// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 4

// StaticStruct @ 14d88f3e0

UScriptStruct * __cdecl FPlayheadOverlayStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPlayheadOverlayStyle.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UScriptStruct_FPlayheadOverlayStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPlayheadOverlayStyle,(UObject *)pUVar1,
                         L"PlayheadOverlayStyle");
  }
  return Z_Registration_Info_UScriptStruct_FPlayheadOverlayStyle.OuterSingleton;
}

// FPlayheadOverlayStyle @ 14d8b6450

FPlayheadOverlayStyle * __thiscall
FPlayheadOverlayStyle::FPlayheadOverlayStyle(FPlayheadOverlayStyle *this)

{
  FLinearColor FVar1;
  
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  this->_padding_ = (longlong)&___7FPlayheadOverlayStyle__6B_;
  FVar1 = AudioWidgetStylesSharedParams::PlayheadColor;
  (this->PlayheadColor).ColorUseRule = UseColor_Specified;
  (this->PlayheadColor).SpecifiedColor.field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  this->PlayheadWidth = 1.0;
  this->DesiredWidth = 1280.0;
  this->DesiredHeight = 720.0;
  return this;
}

// GetDefault @ 14d92cf80

FPlayheadOverlayStyle * __cdecl FPlayheadOverlayStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
      ::Default.PlayheadColor.ColorUseRule = UseColor_Specified;
      ::Default._padding_ = (longlong)&___7FPlayheadOverlayStyle__6B_;
      ::Default.PlayheadColor.SpecifiedColor = AudioWidgetStylesSharedParams::PlayheadColor;
      ::Default.PlayheadWidth = 1.0;
      ::Default.DesiredWidth = 1280.0;
      ::Default.DesiredHeight = 720.0;
      atexit(`FPlayheadOverlayStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetTypeName @ 14d937550

FName __thiscall FPlayheadOverlayStyle::GetTypeName(FPlayheadOverlayStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

