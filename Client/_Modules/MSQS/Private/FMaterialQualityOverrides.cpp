// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSQS
// Functions: 4

// StaticStruct @ 1446f06b0

UScriptStruct * __cdecl FMaterialQualityOverrides::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMaterialQualityOverrides.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MaterialShaderQualitySettings();
    Z_Registration_Info_UScriptStruct_FMaterialQualityOverrides.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMaterialQualityOverrides,(UObject *)pUVar1,
                         L"MaterialQualityOverrides");
  }
  return Z_Registration_Info_UScriptStruct_FMaterialQualityOverrides.OuterSingleton;
}

// FMaterialQualityOverrides @ 1446f11c0

FMaterialQualityOverrides * __thiscall
FMaterialQualityOverrides::FMaterialQualityOverrides(FMaterialQualityOverrides *this)

{
  this->bDiscardQualityDuringCook = false;
  this->bEnableOverride = false;
  this->bForceFullyRough = false;
  this->bForceNonMetal = false;
  this->bForceDisableLMDirectionality = false;
  this->bForceDisablePreintegratedGF = false;
  this->bDisableMaterialNormalCalculation = false;
  this->MobileShadowQuality = PCF_3x3;
  return this;
}

// CanOverride @ 1446f16d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FMaterialQualityOverrides::CanOverride(FMaterialQualityOverrides *this,EShaderPlatform param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1].bContainsValidPlatformInfo == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return FGenericDataDrivenShaderPlatformInfo::Infos[param_1].MaxFeatureLevel == ES3_1;
}

// HasAnyOverridesSet @ 1446f1dd0

bool __thiscall FMaterialQualityOverrides::HasAnyOverridesSet(FMaterialQualityOverrides *this)

{
  if ((((this->MobileShadowQuality == DefaultOverrides.MobileShadowQuality) &&
       (this->bForceDisableLMDirectionality == DefaultOverrides.bForceDisableLMDirectionality)) &&
      (this->bForceFullyRough == DefaultOverrides.bForceFullyRough)) &&
     (((this->bForceNonMetal == DefaultOverrides.bForceNonMetal &&
       (this->bForceDisablePreintegratedGF == DefaultOverrides.bForceDisablePreintegratedGF)) &&
      ((this->bDisableMaterialNormalCalculation ==
        DefaultOverrides.bDisableMaterialNormalCalculation &&
       (this->bDiscardQualityDuringCook == DefaultOverrides.bDiscardQualityDuringCook)))))) {
    return false;
  }
  return true;
}

