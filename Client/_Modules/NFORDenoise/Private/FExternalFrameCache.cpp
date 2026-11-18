// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NFORDenoise
// Functions: 1

// ToRGDResource @ 14e9feba0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGFrameCache * __thiscall
FExternalFrameCache::ToRGDResource
          (FExternalFrameCache *this,FRDGFrameCache *__return_storage_ptr__,FRDGBuilder *param_1,
          FSceneView *param_2)

{
  FRDGTexture *pFVar1;
  
  pFVar1 = FRDGBuilder::RegisterExternalTexture(param_1,&this->Radiance,None);
  __return_storage_ptr__->Radiance = pFVar1;
  pFVar1 = FRDGBuilder::RegisterExternalTexture(param_1,&this->RadianceVariance,None);
  __return_storage_ptr__->RadianceVariance = pFVar1;
  pFVar1 = FRDGBuilder::RegisterExternalTexture(param_1,&this->Albedo,None);
  __return_storage_ptr__->Albedo = pFVar1;
  pFVar1 = FRDGBuilder::RegisterExternalTexture(param_1,&this->Normal,None);
  __return_storage_ptr__->Normal = pFVar1;
  pFVar1 = FRDGBuilder::RegisterExternalTexture(param_1,&this->Depth,None);
  __return_storage_ptr__->Depth = pFVar1;
  return __return_storage_ptr__;
}

