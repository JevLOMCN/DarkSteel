// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 3

// UseForeground @ 14283ae40

FSlateColor * __cdecl FSlateColor::UseForeground(FSlateColor *__return_storage_ptr__)

{
  *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 = 0x3f800000;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = 1.0;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = 1.0;
  __return_storage_ptr__->ColorUseRule = UseColor_Foreground;
  __return_storage_ptr__->ColorTableId = Black;
  return __return_storage_ptr__;
}

// UseSubduedForeground @ 14283ae70

FSlateColor * __cdecl FSlateColor::UseSubduedForeground(FSlateColor *__return_storage_ptr__)

{
  *(undefined8 *)&(__return_storage_ptr__->SpecifiedColor).field0_0x0 = 0x3f800000;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.B = 1.0;
  (__return_storage_ptr__->SpecifiedColor).field0_0x0._s_0.A = 1.0;
  __return_storage_ptr__->ColorUseRule = UseColor_Foreground_Subdued;
  __return_storage_ptr__->ColorTableId = Black;
  return __return_storage_ptr__;
}

// GetColor @ 14293e5d0

FLinearColor * __thiscall FSlateColor::GetColor(FSlateColor *this,FWidgetStyle *param_1)

{
  ESlateColorStylingMode EVar1;
  FLinearColor *pFVar2;
  
  EVar1 = this->ColorUseRule;
  if (EVar1 == UseColor_Specified) {
    return &this->SpecifiedColor;
  }
  if (EVar1 != UseColor_ColorTable) {
    if ((EVar1 != UseColor_Foreground) && (EVar1 == UseColor_Foreground_Subdued)) {
      return &param_1->SubduedForeground;
    }
    return &param_1->ForegroundColor;
  }
  pFVar2 = GetColorFromTable(this);
  return pFVar2;
}

