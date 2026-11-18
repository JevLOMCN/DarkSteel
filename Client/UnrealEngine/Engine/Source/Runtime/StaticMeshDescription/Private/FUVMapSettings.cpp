// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StaticMeshDescription
// Functions: 1

// StaticStruct @ 14435f7b0

UScriptStruct * __cdecl FUVMapSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FUVMapSettings.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StaticMeshDescription();
    Z_Registration_Info_UScriptStruct_FUVMapSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FUVMapSettings,(UObject *)pUVar1,L"UVMapSettings"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FUVMapSettings.OuterSingleton;
}

