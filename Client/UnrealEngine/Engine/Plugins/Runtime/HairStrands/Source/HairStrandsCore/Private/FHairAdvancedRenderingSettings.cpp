// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 3

// StaticStruct @ 14df955e0

UScriptStruct * __cdecl FHairAdvancedRenderingSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FHairAdvancedRenderingSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UScriptStruct_FHairAdvancedRenderingSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHairAdvancedRenderingSettings,(UObject *)pUVar1,
                         L"HairAdvancedRenderingSettings");
  }
  return Z_Registration_Info_UScriptStruct_FHairAdvancedRenderingSettings.OuterSingleton;
}

// FHairAdvancedRenderingSettings @ 14dfabc60

FHairAdvancedRenderingSettings * __thiscall
FHairAdvancedRenderingSettings::FHairAdvancedRenderingSettings(FHairAdvancedRenderingSettings *this)

{
  this->bUseStableRasterization = false;
  this->bScatterSceneLighting = false;
  return this;
}

// operator== @ 14dfb1b90

bool __thiscall
FHairAdvancedRenderingSettings::operator==
          (FHairAdvancedRenderingSettings *this,FHairAdvancedRenderingSettings *param_1)

{
  if ((this->bUseStableRasterization == param_1->bUseStableRasterization) &&
     (this->bScatterSceneLighting == param_1->bScatterSceneLighting)) {
    return true;
  }
  return false;
}

