// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 1

// StaticStruct @ 146b33a10

UScriptStruct * __cdecl FLocalizationImportDialogueSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLocalizationImportDialogueSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Localization();
    Z_Registration_Info_UScriptStruct_FLocalizationImportDialogueSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLocalizationImportDialogueSettings,
                         (UObject *)pUVar1,L"LocalizationImportDialogueSettings");
  }
  return Z_Registration_Info_UScriptStruct_FLocalizationImportDialogueSettings.OuterSingleton;
}

