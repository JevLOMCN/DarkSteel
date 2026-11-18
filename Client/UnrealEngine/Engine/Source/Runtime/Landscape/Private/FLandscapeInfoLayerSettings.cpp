// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 3

// StaticStruct @ 145f66380

UScriptStruct * __cdecl FLandscapeInfoLayerSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FLandscapeInfoLayerSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UScriptStruct_FLandscapeInfoLayerSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeInfoLayerSettings,(UObject *)pUVar1,
                         L"LandscapeInfoLayerSettings");
  }
  return Z_Registration_Info_UScriptStruct_FLandscapeInfoLayerSettings.OuterSingleton;
}

// FLandscapeInfoLayerSettings @ 145f79c20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FLandscapeInfoLayerSettings * __thiscall
FLandscapeInfoLayerSettings::FLandscapeInfoLayerSettings
          (FLandscapeInfoLayerSettings *this,ULandscapeLayerInfoObject *param_1,
          ALandscapeProxy *param_2)

{
  (this->LayerInfoObj).field0_0x0.DebugPtr = param_1;
  if (param_1 != (ULandscapeLayerInfoObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    this->LayerName = param_1->LayerName;
    return this;
  }
  (this->LayerName).ComparisonIndex = 0;
  (this->LayerName).Number = 0;
  return this;
}

// FLandscapeInfoLayerSettings @ 145f79c80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FLandscapeInfoLayerSettings * __thiscall
FLandscapeInfoLayerSettings::FLandscapeInfoLayerSettings
          (FLandscapeInfoLayerSettings *this,FName param_1,ALandscapeProxy *param_2)

{
  (this->LayerInfoObj).field0_0x0.DebugPtr = (ULandscapeLayerInfoObject *)0x0;
  this->LayerName = param_1;
  return this;
}

