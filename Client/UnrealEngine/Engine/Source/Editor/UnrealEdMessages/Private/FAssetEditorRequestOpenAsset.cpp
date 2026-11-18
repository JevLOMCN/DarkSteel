// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UnrealEdMessages
// Functions: 1

// StaticStruct @ 148c37bd0

UScriptStruct * __cdecl FAssetEditorRequestOpenAsset::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAssetEditorRequestOpenAsset.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UnrealEdMessages();
    Z_Registration_Info_UScriptStruct_FAssetEditorRequestOpenAsset.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAssetEditorRequestOpenAsset,(UObject *)pUVar1,
                         L"AssetEditorRequestOpenAsset");
  }
  return Z_Registration_Info_UScriptStruct_FAssetEditorRequestOpenAsset.OuterSingleton;
}

