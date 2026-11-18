// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonInput
// Functions: 2

// StaticStruct @ 14a76eb10

UScriptStruct * __cdecl FCommonInputKeyBrushConfiguration::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCommonInputKeyBrushConfiguration.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CommonInput();
    Z_Registration_Info_UScriptStruct_FCommonInputKeyBrushConfiguration.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCommonInputKeyBrushConfiguration,
                         (UObject *)pUVar1,L"CommonInputKeyBrushConfiguration");
  }
  return Z_Registration_Info_UScriptStruct_FCommonInputKeyBrushConfiguration.OuterSingleton;
}

// FCommonInputKeyBrushConfiguration @ 14a7717b0

FCommonInputKeyBrushConfiguration * __thiscall
FCommonInputKeyBrushConfiguration::FCommonInputKeyBrushConfiguration
          (FCommonInputKeyBrushConfiguration *this)

{
  (this->Key).KeyName.ComparisonIndex = 0;
  (this->Key).KeyName.Number = 0;
  (this->Key).KeyDetails.Object = (FKeyDetails *)0x0;
  (this->Key).KeyDetails.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FSlateBrush::FSlateBrush(&this->KeyBrush);
  (this->KeyBrush).DrawAs.Value = '\x03';
  return this;
}

