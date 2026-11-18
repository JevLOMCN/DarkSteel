// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 7

// StaticStruct @ 14252e670

UScriptStruct * __cdecl FHyperlinkStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FHyperlinkStyle.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FHyperlinkStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHyperlinkStyle,(UObject *)pUVar1,
                         L"HyperlinkStyle");
  }
  return Z_Registration_Info_UScriptStruct_FHyperlinkStyle.OuterSingleton;
}

// FHyperlinkStyle @ 142544370

FHyperlinkStyle * __thiscall
FHyperlinkStyle::FHyperlinkStyle(FHyperlinkStyle *this,FHyperlinkStyle *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  this->_padding_ = (longlong)&___7FHyperlinkStyle__6B_;
  FButtonStyle::FButtonStyle(&this->UnderlineStyle,&param_1->UnderlineStyle);
  FTextBlockStyle::FTextBlockStyle(&this->TextStyle,&param_1->TextStyle);
  fVar1 = (param_1->Padding).Top;
  fVar2 = (param_1->Padding).Right;
  fVar3 = (param_1->Padding).Bottom;
  (this->Padding).Left = (param_1->Padding).Left;
  (this->Padding).Top = fVar1;
  (this->Padding).Right = fVar2;
  (this->Padding).Bottom = fVar3;
  return this;
}

// FHyperlinkStyle @ 1425443d0

FHyperlinkStyle * __thiscall FHyperlinkStyle::FHyperlinkStyle(FHyperlinkStyle *this)

{
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  this->_padding_ = (longlong)&___7FHyperlinkStyle__6B_;
  FButtonStyle::FButtonStyle(&this->UnderlineStyle);
  FTextBlockStyle::FTextBlockStyle(&this->TextStyle);
  (this->Padding).Left = 0.0;
  (this->Padding).Top = 0.0;
  (this->Padding).Right = 0.0;
  (this->Padding).Bottom = 0.0;
  return this;
}

// ~FHyperlinkStyle @ 14254b170

void __thiscall FHyperlinkStyle::~FHyperlinkStyle(FHyperlinkStyle *this)

{
  this->_padding_ = (longlong)&___7FHyperlinkStyle__6B_;
  FTextBlockStyle::~FTextBlockStyle(&this->TextStyle);
  FButtonStyle::~FButtonStyle(&this->UnderlineStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  return;
}

// GetDefault @ 14257f970

FHyperlinkStyle * __cdecl FHyperlinkStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
      ::Default._padding_ = (longlong)&___7FHyperlinkStyle__6B_;
      FButtonStyle::FButtonStyle(&::Default.UnderlineStyle);
      FTextBlockStyle::FTextBlockStyle(&::Default.TextStyle);
      ::Default.Padding = (FMargin)ZEXT816(0);
      atexit(`FHyperlinkStyle::GetDefault'::__l2::_dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetResources @ 142584a20

void __thiscall
FHyperlinkStyle::GetResources
          (FHyperlinkStyle *this,TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  (**(code **)(*(longlong *)&this->UnderlineStyle + 8))(&this->UnderlineStyle);
                    /* WARNING: Could not recover jumptable at 0x000142584a52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&this->TextStyle + 8))(&this->TextStyle,param_1);
  return;
}

// GetTypeName @ 142589bf0

FName __thiscall FHyperlinkStyle::GetTypeName(FHyperlinkStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

