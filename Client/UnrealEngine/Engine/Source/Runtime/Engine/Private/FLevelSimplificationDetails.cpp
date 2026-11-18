// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 147e41670

UScriptStruct * __cdecl FLevelSimplificationDetails::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLevelSimplificationDetails.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FLevelSimplificationDetails.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLevelSimplificationDetails,(UObject *)pUVar1,
                         L"LevelSimplificationDetails");
  }
  return Z_Registration_Info_UScriptStruct_FLevelSimplificationDetails.OuterSingleton;
}

// FLevelSimplificationDetails @ 147e54c00

FLevelSimplificationDetails * __thiscall
FLevelSimplificationDetails::FLevelSimplificationDetails(FLevelSimplificationDetails *this)

{
  this->bCreatePackagePerAsset = true;
  this->DetailsPercentage = 70.0;
  FMaterialProxySettings::FMaterialProxySettings(&this->StaticMeshMaterialSettings);
  this->bOverrideLandscapeExportLOD = false;
  this->LandscapeExportLOD = 7;
  FMaterialProxySettings::FMaterialProxySettings(&this->LandscapeMaterialSettings);
  this->bBakeFoliageToLandscape = false;
  this->bBakeGrassToLandscape = false;
  return this;
}

// operator== @ 147e58c60

bool __thiscall
FLevelSimplificationDetails::operator==
          (FLevelSimplificationDetails *this,FLevelSimplificationDetails *param_1)

{
  bool bVar1;
  
  if ((this->bCreatePackagePerAsset == param_1->bCreatePackagePerAsset) &&
     (param_1->DetailsPercentage == this->DetailsPercentage)) {
    bVar1 = FMaterialProxySettings::operator==
                      (&this->StaticMeshMaterialSettings,&param_1->StaticMeshMaterialSettings);
    if ((bVar1) &&
       ((this->bOverrideLandscapeExportLOD == param_1->bOverrideLandscapeExportLOD &&
        (this->LandscapeExportLOD == param_1->LandscapeExportLOD)))) {
      bVar1 = FMaterialProxySettings::operator==
                        (&this->LandscapeMaterialSettings,&param_1->LandscapeMaterialSettings);
      if ((bVar1) &&
         ((this->bBakeFoliageToLandscape == param_1->bBakeFoliageToLandscape &&
          (this->bBakeGrassToLandscape == param_1->bBakeGrassToLandscape)))) {
        return true;
      }
    }
  }
  return false;
}

