// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonInput
// Functions: 2

// StaticStruct @ 14a76eb50

UScriptStruct * __cdecl FCommonInputKeySetBrushConfiguration::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCommonInputKeySetBrushConfiguration.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CommonInput();
    Z_Registration_Info_UScriptStruct_FCommonInputKeySetBrushConfiguration.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCommonInputKeySetBrushConfiguration,
                         (UObject *)pUVar1,L"CommonInputKeySetBrushConfiguration");
  }
  return Z_Registration_Info_UScriptStruct_FCommonInputKeySetBrushConfiguration.OuterSingleton;
}

// FCommonInputKeySetBrushConfiguration @ 14a7717f0

FCommonInputKeySetBrushConfiguration * __thiscall
FCommonInputKeySetBrushConfiguration::FCommonInputKeySetBrushConfiguration
          (FCommonInputKeySetBrushConfiguration *this)

{
  (this->Keys).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Keys).ArrayNum = 0;
  (this->Keys).ArrayMax = 0;
  FSlateBrush::FSlateBrush(&this->KeyBrush);
  (this->KeyBrush).DrawAs.Value = '\x03';
  return this;
}

