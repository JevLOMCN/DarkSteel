// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 1

// StaticStruct @ 14a783f10

UScriptStruct * __cdecl FCommonButtonStyleOptionalSlateSound::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCommonButtonStyleOptionalSlateSound.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CommonUI();
    Z_Registration_Info_UScriptStruct_FCommonButtonStyleOptionalSlateSound.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCommonButtonStyleOptionalSlateSound,
                         (UObject *)pUVar1,L"CommonButtonStyleOptionalSlateSound");
  }
  return Z_Registration_Info_UScriptStruct_FCommonButtonStyleOptionalSlateSound.OuterSingleton;
}

