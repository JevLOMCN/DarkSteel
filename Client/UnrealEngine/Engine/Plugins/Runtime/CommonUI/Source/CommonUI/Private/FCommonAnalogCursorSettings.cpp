// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonUI
// Functions: 1

// StaticStruct @ 14a780870

UScriptStruct * __cdecl FCommonAnalogCursorSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCommonAnalogCursorSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CommonUI();
    Z_Registration_Info_UScriptStruct_FCommonAnalogCursorSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCommonAnalogCursorSettings,(UObject *)pUVar1,
                         L"CommonAnalogCursorSettings");
  }
  return Z_Registration_Info_UScriptStruct_FCommonAnalogCursorSettings.OuterSingleton;
}

