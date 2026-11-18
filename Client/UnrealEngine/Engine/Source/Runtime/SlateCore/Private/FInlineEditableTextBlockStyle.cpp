// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 6

// StaticStruct @ 14252ea90

UScriptStruct * __cdecl FInlineEditableTextBlockStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInlineEditableTextBlockStyle.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_SlateCore();
    Z_Registration_Info_UScriptStruct_FInlineEditableTextBlockStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInlineEditableTextBlockStyle,(UObject *)pUVar1,
                         L"InlineEditableTextBlockStyle");
  }
  return Z_Registration_Info_UScriptStruct_FInlineEditableTextBlockStyle.OuterSingleton;
}

// FInlineEditableTextBlockStyle @ 142544420

FInlineEditableTextBlockStyle * __thiscall
FInlineEditableTextBlockStyle::FInlineEditableTextBlockStyle(FInlineEditableTextBlockStyle *this)

{
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  this->_padding_ = (longlong)&___7FInlineEditableTextBlockStyle__6B_;
  FEditableTextBoxStyle::FEditableTextBoxStyle(&this->EditableTextBoxStyle);
  FTextBlockStyle::FTextBlockStyle(&this->TextStyle);
  return this;
}

// ~FInlineEditableTextBlockStyle @ 14254b1b0

void __thiscall
FInlineEditableTextBlockStyle::~FInlineEditableTextBlockStyle(FInlineEditableTextBlockStyle *this)

{
  this->_padding_ = (longlong)&___7FInlineEditableTextBlockStyle__6B_;
  FTextBlockStyle::~FTextBlockStyle(&this->TextStyle);
  FEditableTextBoxStyle::~FEditableTextBoxStyle(&this->EditableTextBoxStyle);
  FSlateWidgetStyle::~FSlateWidgetStyle((FSlateWidgetStyle *)this);
  return;
}

// GetDefault @ 14257fa30

FInlineEditableTextBlockStyle * __cdecl FInlineEditableTextBlockStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)&::Default);
      ::Default._padding_ = (longlong)&___7FInlineEditableTextBlockStyle__6B_;
      FEditableTextBoxStyle::FEditableTextBoxStyle(&::Default.EditableTextBoxStyle);
      FTextBlockStyle::FTextBlockStyle(&::Default.TextStyle);
      atexit(`FInlineEditableTextBlockStyle::GetDefault'::__l2::
             _dynamic_atexit_destructor_for__Default__);
      _Init_thread_footer(&::_TSS0);
      return &::Default;
    }
  }
  return &::Default;
}

// GetResources @ 142584a60

void __thiscall
FInlineEditableTextBlockStyle::GetResources
          (FInlineEditableTextBlockStyle *this,
          TArray<FSlateBrush_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  (**(code **)((this->EditableTextBoxStyle)._padding_ + 8))(&this->EditableTextBoxStyle);
                    /* WARNING: Could not recover jumptable at 0x000142584a92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)&this->TextStyle + 8))(&this->TextStyle,param_1);
  return;
}

// GetTypeName @ 142589c10

FName __thiscall FInlineEditableTextBlockStyle::GetTypeName(FInlineEditableTextBlockStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

