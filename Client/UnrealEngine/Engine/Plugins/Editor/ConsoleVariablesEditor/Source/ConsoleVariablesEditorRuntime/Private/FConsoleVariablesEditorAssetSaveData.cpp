// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ConsoleVariablesEditorRuntime
// Functions: 1

// StaticStruct @ 14de36270

UScriptStruct * __cdecl FConsoleVariablesEditorAssetSaveData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FConsoleVariablesEditorAssetSaveData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ConsoleVariablesEditorRuntime();
    Z_Registration_Info_UScriptStruct_FConsoleVariablesEditorAssetSaveData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FConsoleVariablesEditorAssetSaveData,
                         (UObject *)pUVar1,L"ConsoleVariablesEditorAssetSaveData");
  }
  return Z_Registration_Info_UScriptStruct_FConsoleVariablesEditorAssetSaveData.OuterSingleton;
}

