// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// StaticStruct @ 1487d6ab0

UScriptStruct * __cdecl FSubtitleAssetData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSubtitleAssetData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSubtitleAssetData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSubtitleAssetData,(UObject *)pUVar1,
                         L"SubtitleAssetData");
  }
  return Z_Registration_Info_UScriptStruct_FSubtitleAssetData.OuterSingleton;
}

