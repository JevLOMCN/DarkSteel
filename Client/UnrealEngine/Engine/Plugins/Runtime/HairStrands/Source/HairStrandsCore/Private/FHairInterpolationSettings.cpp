// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 3

// StaticStruct @ 14df93e60

UScriptStruct * __cdecl FHairInterpolationSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FHairInterpolationSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UScriptStruct_FHairInterpolationSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHairInterpolationSettings,(UObject *)pUVar1,
                         L"HairInterpolationSettings");
  }
  return Z_Registration_Info_UScriptStruct_FHairInterpolationSettings.OuterSingleton;
}

// FHairInterpolationSettings @ 14dfad230

FHairInterpolationSettings * __thiscall
FHairInterpolationSettings::FHairInterpolationSettings(FHairInterpolationSettings *this)

{
  this->GuideType = Imported;
  this->bOverrideGuides_DEPRECATED = false;
  this->HairToGuideDensity = 0.1;
  this->InterpolationQuality = High;
  this->InterpolationDistance = Parametric;
  this->bRandomizeGuide = false;
  this->bUseUniqueGuide = false;
  this->RiggedGuideNumCurves = 10;
  this->RiggedGuideNumPoints = 4;
  return this;
}

// operator== @ 14dfb21f0

bool __thiscall
FHairInterpolationSettings::operator==
          (FHairInterpolationSettings *this,FHairInterpolationSettings *param_1)

{
  if (((((this->GuideType == param_1->GuideType) &&
        (param_1->HairToGuideDensity == this->HairToGuideDensity)) &&
       (this->InterpolationQuality == param_1->InterpolationQuality)) &&
      ((this->InterpolationDistance == param_1->InterpolationDistance &&
       (this->bRandomizeGuide == param_1->bRandomizeGuide)))) &&
     ((this->bUseUniqueGuide == param_1->bUseUniqueGuide &&
      ((this->RiggedGuideNumCurves == param_1->RiggedGuideNumCurves &&
       (this->RiggedGuideNumPoints == param_1->RiggedGuideNumPoints)))))) {
    return true;
  }
  return false;
}

