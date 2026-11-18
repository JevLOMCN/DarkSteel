// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 4

// StaticStruct @ 14d891a00

UScriptStruct * __cdecl FAudioMeterDefaultColorStyle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAudioMeterDefaultColorStyle.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AudioWidgets();
    Z_Registration_Info_UScriptStruct_FAudioMeterDefaultColorStyle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAudioMeterDefaultColorStyle,(UObject *)pUVar1,
                         L"AudioMeterDefaultColorStyle");
  }
  return Z_Registration_Info_UScriptStruct_FAudioMeterDefaultColorStyle.OuterSingleton;
}

// FAudioMeterDefaultColorStyle @ 14d8b0590

FAudioMeterDefaultColorStyle * __thiscall
FAudioMeterDefaultColorStyle::FAudioMeterDefaultColorStyle(FAudioMeterDefaultColorStyle *this)

{
  FSlateWidgetStyle::FSlateWidgetStyle((FSlateWidgetStyle *)this);
  *(undefined4 *)&this->field_0x8 = 0x3cfdf3b6;
  *(undefined ***)this = &___7FAudioMeterDefaultColorStyle__6B_;
  *(undefined4 *)&this->field_0xc = 0x3cfdf3b6;
  *(undefined4 *)&this->field_0x10 = 0x3cfdf3b6;
  *(undefined4 *)&this->field_0x14 = 0x3f800000;
  *(undefined4 *)&this->field_0x18 = 0x3cd2b0a7;
  *(undefined4 *)&this->field_0x1c = 0x3e55553f;
  *(undefined4 *)&this->field_0x20 = 0x3d8f2b67;
  *(undefined4 *)&this->field_0x24 = 0x3f800000;
  *(undefined4 *)&this->field_0x28 = 0x3e795571;
  *(undefined4 *)&this->field_0x2c = 0x3f355550;
  *(undefined4 *)&this->field_0x30 = 0x3eb6c8f7;
  *(undefined4 *)&this->field_0x34 = 0x3f800000;
  *(undefined8 *)&this->field_0x38 = 0x3f800000;
  *(undefined4 *)&this->field_0x40 = 0x3de60f5e;
  *(undefined4 *)&this->field_0x44 = 0x3f800000;
  *(undefined4 *)&this->field_0x48 = 0x3c9085f5;
  *(undefined4 *)&this->field_0x4c = 0x3c9085f5;
  *(undefined4 *)&this->field_0x50 = 0x3c9085f5;
  *(undefined4 *)&this->field_0x54 = 0x3f800000;
  *(undefined4 *)&this->field_0x58 = 0x3ee2aa9f;
  *(undefined4 *)&this->field_0x5c = 0x3ee2aa9f;
  *(undefined4 *)&this->field_0x60 = 0x3ee2aa9f;
  *(undefined4 *)&this->field_0x64 = 0x3f800000;
  return this;
}

// GetDefault @ 14d92cb90

FAudioMeterDefaultColorStyle * __cdecl FAudioMeterDefaultColorStyle::GetDefault(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FAudioMeterDefaultColorStyle(&::Style);
      atexit(`FAudioMeterDefaultColorStyle::GetDefault'::__l2::
             _dynamic_atexit_destructor_for__Style__);
      _Init_thread_footer(&::_TSS0);
      return &::Style;
    }
  }
  return &::Style;
}

// GetTypeName @ 14d937430

FName __thiscall FAudioMeterDefaultColorStyle::GetTypeName(FAudioMeterDefaultColorStyle *this)

{
  FName in_RDX;
  
  *(FName *)in_RDX = TypeName;
  return in_RDX;
}

