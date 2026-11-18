// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 1

// StaticStruct @ 146b339d0

UScriptStruct * __cdecl FLocalizationCompilationSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLocalizationCompilationSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Localization();
    Z_Registration_Info_UScriptStruct_FLocalizationCompilationSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLocalizationCompilationSettings,
                         (UObject *)pUVar1,L"LocalizationCompilationSettings");
  }
  return Z_Registration_Info_UScriptStruct_FLocalizationCompilationSettings.OuterSingleton;
}

