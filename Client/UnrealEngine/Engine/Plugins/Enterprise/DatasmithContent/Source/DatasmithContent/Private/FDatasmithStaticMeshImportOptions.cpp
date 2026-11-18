// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DatasmithContent
// Functions: 4

// StaticStruct @ 14e2eadc0

UScriptStruct * __cdecl FDatasmithStaticMeshImportOptions::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDatasmithStaticMeshImportOptions.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DatasmithContent();
    Z_Registration_Info_UScriptStruct_FDatasmithStaticMeshImportOptions.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDatasmithStaticMeshImportOptions,
                         (UObject *)pUVar1,L"DatasmithStaticMeshImportOptions");
  }
  return Z_Registration_Info_UScriptStruct_FDatasmithStaticMeshImportOptions.OuterSingleton;
}

// FDatasmithStaticMeshImportOptions @ 14e2f42c0

FDatasmithStaticMeshImportOptions * __thiscall
FDatasmithStaticMeshImportOptions::FDatasmithStaticMeshImportOptions
          (FDatasmithStaticMeshImportOptions *this)

{
  this->MinLightmapResolution = LIGHTMAP_64;
  this->MaxLightmapResolution = LIGHTMAP_512;
  this->bGenerateLightmapUVs = true;
  this->bRemoveDegenerates = true;
  return this;
}

// ConvertLightmapEnumToValue @ 14e2f86e0

int __cdecl
FDatasmithStaticMeshImportOptions::ConvertLightmapEnumToValue(EDatasmithImportLightmapMax param_1)

{
  switch(param_1) {
  case LIGHTMAP_64:
    return 0x40;
  case LIGHTMAP_128:
    return 0x80;
  case LIGHTMAP_256:
    return 0x100;
  default:
    return 0x200;
  case LIGHTMAP_1024:
    return 0x400;
  case LIGHTMAP_2048:
    return 0x800;
  case LIGHTMAP_4096:
    return 0x1000;
  }
}

// ConvertLightmapEnumToValue @ 14e2f8750

int __cdecl
FDatasmithStaticMeshImportOptions::ConvertLightmapEnumToValue(EDatasmithImportLightmapMin param_1)

{
  switch(param_1) {
  case LIGHTMAP_16:
    return 0x10;
  default:
    return 0x20;
  case LIGHTMAP_64:
    return 0x40;
  case LIGHTMAP_128:
    return 0x80;
  case LIGHTMAP_256:
    return 0x100;
  case LIGHTMAP_512:
    return 0x200;
  }
}

