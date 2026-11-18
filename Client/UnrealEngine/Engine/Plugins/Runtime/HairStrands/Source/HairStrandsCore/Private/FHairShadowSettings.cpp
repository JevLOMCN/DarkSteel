// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 3

// StaticStruct @ 14df95560

UScriptStruct * __cdecl FHairShadowSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FHairShadowSettings.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UScriptStruct_FHairShadowSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHairShadowSettings,(UObject *)pUVar1,
                         L"HairShadowSettings");
  }
  return Z_Registration_Info_UScriptStruct_FHairShadowSettings.OuterSingleton;
}

// FHairShadowSettings @ 14dfad690

FHairShadowSettings * __thiscall FHairShadowSettings::FHairShadowSettings(FHairShadowSettings *this)

{
  this->HairShadowDensity = 1.0;
  this->HairRaytracingRadiusScale = 1.0;
  this->bUseHairRaytracingGeometry = false;
  this->bVoxelize = true;
  return this;
}

// operator== @ 14dfb23d0

bool __thiscall
FHairShadowSettings::operator==(FHairShadowSettings *this,FHairShadowSettings *param_1)

{
  if ((((param_1->HairShadowDensity == this->HairShadowDensity) &&
       (param_1->HairRaytracingRadiusScale == this->HairRaytracingRadiusScale)) &&
      (this->bUseHairRaytracingGeometry == param_1->bUseHairRaytracingGeometry)) &&
     (this->bVoxelize == param_1->bVoxelize)) {
    return true;
  }
  return false;
}

