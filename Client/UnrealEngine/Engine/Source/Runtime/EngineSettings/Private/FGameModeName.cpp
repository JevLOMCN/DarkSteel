// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineSettings
// Functions: 1

// StaticStruct @ 143129880

UScriptStruct * __cdecl FGameModeName::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGameModeName.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_EngineSettings();
    Z_Registration_Info_UScriptStruct_FGameModeName.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGameModeName,(UObject *)pUVar1,L"GameModeName");
  }
  return Z_Registration_Info_UScriptStruct_FGameModeName.OuterSingleton;
}

