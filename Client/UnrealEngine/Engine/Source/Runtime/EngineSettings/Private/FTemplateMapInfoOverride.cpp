// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: EngineSettings
// Functions: 1

// StaticStruct @ 1431298c0

UScriptStruct * __cdecl FTemplateMapInfoOverride::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTemplateMapInfoOverride.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_EngineSettings();
    Z_Registration_Info_UScriptStruct_FTemplateMapInfoOverride.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTemplateMapInfoOverride,(UObject *)pUVar1,
                         L"TemplateMapInfoOverride");
  }
  return Z_Registration_Info_UScriptStruct_FTemplateMapInfoOverride.OuterSingleton;
}

