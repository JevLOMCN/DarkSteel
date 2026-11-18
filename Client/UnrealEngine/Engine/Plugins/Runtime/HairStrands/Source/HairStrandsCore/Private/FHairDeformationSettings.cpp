// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 2

// StaticStruct @ 14df93ea0

UScriptStruct * __cdecl FHairDeformationSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FHairDeformationSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UScriptStruct_FHairDeformationSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHairDeformationSettings,(UObject *)pUVar1,
                         L"HairDeformationSettings");
  }
  return Z_Registration_Info_UScriptStruct_FHairDeformationSettings.OuterSingleton;
}

// FHairDeformationSettings @ 14dfac120

FHairDeformationSettings * __thiscall
FHairDeformationSettings::FHairDeformationSettings(FHairDeformationSettings *this)

{
  this->bEnableRigging_DEPRECATED = false;
  this->NumCurves_DEPRECATED = 10;
  this->NumPoints_DEPRECATED = 4;
  return this;
}

