// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 2

// StaticStruct @ 14e2eae40

UScriptStruct * __cdecl FDatasmithImportBaseOptions::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDatasmithImportBaseOptions.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DatasmithContent();
    Z_Registration_Info_UScriptStruct_FDatasmithImportBaseOptions.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithImportBaseOptions,(UObject *)pUVar1,
                         L"DatasmithImportBaseOptions");
  }
  return Z_Registration_Info_UScriptStruct_FDatasmithImportBaseOptions.OuterSingleton;
}

// FDatasmithImportBaseOptions @ 14e2f4070

FDatasmithImportBaseOptions * __thiscall
FDatasmithImportBaseOptions::FDatasmithImportBaseOptions(FDatasmithImportBaseOptions *this)

{
  this->SceneHandling = CurrentLevel;
  this->bIncludeGeometry = true;
  this->bIncludeMaterial = true;
  this->bIncludeLight = true;
  (this->AssetOptions).PackagePath = (FName)0x0;
  this->bIncludeCamera = true;
  this->bIncludeAnimation = true;
  (this->StaticMeshOptions).MinLightmapResolution = LIGHTMAP_64;
  (this->StaticMeshOptions).MaxLightmapResolution = LIGHTMAP_512;
  (this->StaticMeshOptions).bGenerateLightmapUVs = true;
  (this->StaticMeshOptions).bRemoveDegenerates = true;
  return this;
}

