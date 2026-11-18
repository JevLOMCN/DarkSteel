// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FScreenPS @ 1451274d0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FScreenPS * __thiscall
FScreenPS::FScreenPS(FScreenPS *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShaderResourceParameter *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->InTexture;
  this_00->BaseIndex = 0;
  this_00->NumResources = '\0';
  this_00->Type = LooseData;
  (this->InTextureSampler).BaseIndex = 0;
  (this->InTextureSampler).NumResources = '\0';
  (this->InTextureSampler).Type = LooseData;
  FShaderResourceParameter::Bind(this_00,param_1->ParameterMap,L"InTexture",SPF_Mandatory);
  FShaderResourceParameter::Bind
            (&this->InTextureSampler,param_1->ParameterMap,L"InTextureSampler",SPF_Optional);
  return this;
}

