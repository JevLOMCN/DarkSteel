// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// StaticStruct @ 145f23df0

UScriptStruct * __cdecl FHeightmapData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FHeightmapData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UScriptStruct_FHeightmapData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHeightmapData,(UObject *)pUVar1,L"HeightmapData"
                        );
  }
  return Z_Registration_Info_UScriptStruct_FHeightmapData.OuterSingleton;
}

