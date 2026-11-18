// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 165

// TOnePassPointShadowProjectionPS<1,1,0> @ 145570eb0

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

TOnePassPointShadowProjectionPS<1,1,0> * __thiscall
TOnePassPointShadowProjectionPS<1,1,0>::TOnePassPointShadowProjectionPS<1,1,0>
          (TOnePassPointShadowProjectionPS<1,1,0> *this,
          FShaderCompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  FShaderParameter *this_01;
  FShaderParameter *this_02;
  FShaderParameter *this_03;
  FShaderParameter *this_04;
  FShaderResourceParameter *this_05;
  FShaderParametersMetadata *pFVar1;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this->HairStrandsParameters = 0xffff;
  this->SubstrateGlobalParameters = 0xffff;
  this_00 = &this->LightPosition;
  (this->OnePassShadowParameters).ShadowDepthTexture.BaseIndex = 0;
  this_01 = &this->ShadowFadeFraction;
  *(undefined8 *)&(this->OnePassShadowParameters).ShadowDepthTexture.NumResources = 0;
  this_02 = &this->ShadowSharpen;
  *(undefined8 *)&(this->OnePassShadowParameters).ShadowDepthCubeComparisonSampler.NumResources = 0;
  this_03 = &this->PointLightDepthBias;
  (this->OnePassShadowParameters).InvShadowmapResolution.BufferIndex = 0;
  (this->OnePassShadowParameters).InvShadowmapResolution.BaseIndex = 0;
  (this->OnePassShadowParameters).InvShadowmapResolution.NumBytes = 0;
  (this->OnePassShadowParameters).LightPositionOrDirection.BufferIndex = 0;
  this_04 = &this->PointLightProjParameters;
  (this->OnePassShadowParameters).LightPositionOrDirection.BaseIndex = 0;
  (this->OnePassShadowParameters).LightPositionOrDirection.NumBytes = 0;
  this_05 = &this->ShadowDepthTextureSampler;
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  this_05->BaseIndex = 0;
  this_05->NumResources = '\0';
  this_05->Type = LooseData;
  (this->LightPosition).NumBytes = 0;
  this_01->BufferIndex = 0;
  this_01->BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  this_02->BufferIndex = 0;
  this_02->BaseIndex = 0;
  (this->ShadowSharpen).NumBytes = 0;
  this_03->BufferIndex = 0;
  this_03->BaseIndex = 0;
  (this->PointLightDepthBias).NumBytes = 0;
  this_04->BufferIndex = 0;
  this_04->BaseIndex = 0;
  (this->PointLightProjParameters).NumBytes = 0;
  pFVar1 = FHairStrandsViewUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            (&this->HairStrandsParameters,param_1->ParameterMap,pFVar1->ShaderVariableName,
             SPF_Optional);
  pFVar1 = FSubstrateGlobalUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            (&this->SubstrateGlobalParameters,param_1->ParameterMap,pFVar1->ShaderVariableName,
             SPF_Optional);
  FOnePassPointShadowProjectionShaderParameters::Bind
            (&this->OnePassShadowParameters,param_1->ParameterMap);
  FShaderResourceParameter::Bind
            (this_05,param_1->ParameterMap,L"ShadowDepthTextureSampler",SPF_Optional);
  FShaderParameter::Bind(this_00,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  FShaderParameter::Bind(this_01,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(this_02,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind(this_03,param_1->ParameterMap,L"PointLightDepthBias",SPF_Optional);
  FShaderParameter::Bind(this_04,param_1->ParameterMap,L"PointLightProjParameters",SPF_Optional);
  return this;
}

// TOnePassPointShadowProjectionPS<1,0,1> @ 145571060

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

TOnePassPointShadowProjectionPS<1,0,1> * __thiscall
TOnePassPointShadowProjectionPS<1,0,1>::TOnePassPointShadowProjectionPS<1,0,1>
          (TOnePassPointShadowProjectionPS<1,0,1> *this,
          FShaderCompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  FShaderParameter *this_01;
  FShaderParameter *this_02;
  FShaderParameter *this_03;
  FShaderParameter *this_04;
  FShaderResourceParameter *this_05;
  FShaderParametersMetadata *pFVar1;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this->HairStrandsParameters = 0xffff;
  this->SubstrateGlobalParameters = 0xffff;
  this_00 = &this->LightPosition;
  (this->OnePassShadowParameters).ShadowDepthTexture.BaseIndex = 0;
  this_01 = &this->ShadowFadeFraction;
  *(undefined8 *)&(this->OnePassShadowParameters).ShadowDepthTexture.NumResources = 0;
  this_02 = &this->ShadowSharpen;
  *(undefined8 *)&(this->OnePassShadowParameters).ShadowDepthCubeComparisonSampler.NumResources = 0;
  this_03 = &this->PointLightDepthBias;
  (this->OnePassShadowParameters).InvShadowmapResolution.BufferIndex = 0;
  (this->OnePassShadowParameters).InvShadowmapResolution.BaseIndex = 0;
  (this->OnePassShadowParameters).InvShadowmapResolution.NumBytes = 0;
  (this->OnePassShadowParameters).LightPositionOrDirection.BufferIndex = 0;
  this_04 = &this->PointLightProjParameters;
  (this->OnePassShadowParameters).LightPositionOrDirection.BaseIndex = 0;
  (this->OnePassShadowParameters).LightPositionOrDirection.NumBytes = 0;
  this_05 = &this->ShadowDepthTextureSampler;
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  this_05->BaseIndex = 0;
  this_05->NumResources = '\0';
  this_05->Type = LooseData;
  (this->LightPosition).NumBytes = 0;
  this_01->BufferIndex = 0;
  this_01->BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  this_02->BufferIndex = 0;
  this_02->BaseIndex = 0;
  (this->ShadowSharpen).NumBytes = 0;
  this_03->BufferIndex = 0;
  this_03->BaseIndex = 0;
  (this->PointLightDepthBias).NumBytes = 0;
  this_04->BufferIndex = 0;
  this_04->BaseIndex = 0;
  (this->PointLightProjParameters).NumBytes = 0;
  pFVar1 = FHairStrandsViewUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            (&this->HairStrandsParameters,param_1->ParameterMap,pFVar1->ShaderVariableName,
             SPF_Optional);
  pFVar1 = FSubstrateGlobalUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            (&this->SubstrateGlobalParameters,param_1->ParameterMap,pFVar1->ShaderVariableName,
             SPF_Optional);
  FOnePassPointShadowProjectionShaderParameters::Bind
            (&this->OnePassShadowParameters,param_1->ParameterMap);
  FShaderResourceParameter::Bind
            (this_05,param_1->ParameterMap,L"ShadowDepthTextureSampler",SPF_Optional);
  FShaderParameter::Bind(this_00,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  FShaderParameter::Bind(this_01,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(this_02,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind(this_03,param_1->ParameterMap,L"PointLightDepthBias",SPF_Optional);
  FShaderParameter::Bind(this_04,param_1->ParameterMap,L"PointLightProjParameters",SPF_Optional);
  return this;
}

// TOnePassPointShadowProjectionPS<1,0,0> @ 145571210

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

TOnePassPointShadowProjectionPS<1,0,0> * __thiscall
TOnePassPointShadowProjectionPS<1,0,0>::TOnePassPointShadowProjectionPS<1,0,0>
          (TOnePassPointShadowProjectionPS<1,0,0> *this,
          FShaderCompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  FShaderParameter *this_01;
  FShaderParameter *this_02;
  FShaderParameter *this_03;
  FShaderParameter *this_04;
  FShaderResourceParameter *this_05;
  FShaderParametersMetadata *pFVar1;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this->HairStrandsParameters = 0xffff;
  this->SubstrateGlobalParameters = 0xffff;
  this_00 = &this->LightPosition;
  (this->OnePassShadowParameters).ShadowDepthTexture.BaseIndex = 0;
  this_01 = &this->ShadowFadeFraction;
  *(undefined8 *)&(this->OnePassShadowParameters).ShadowDepthTexture.NumResources = 0;
  this_02 = &this->ShadowSharpen;
  *(undefined8 *)&(this->OnePassShadowParameters).ShadowDepthCubeComparisonSampler.NumResources = 0;
  this_03 = &this->PointLightDepthBias;
  (this->OnePassShadowParameters).InvShadowmapResolution.BufferIndex = 0;
  (this->OnePassShadowParameters).InvShadowmapResolution.BaseIndex = 0;
  (this->OnePassShadowParameters).InvShadowmapResolution.NumBytes = 0;
  (this->OnePassShadowParameters).LightPositionOrDirection.BufferIndex = 0;
  this_04 = &this->PointLightProjParameters;
  (this->OnePassShadowParameters).LightPositionOrDirection.BaseIndex = 0;
  (this->OnePassShadowParameters).LightPositionOrDirection.NumBytes = 0;
  this_05 = &this->ShadowDepthTextureSampler;
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  this_05->BaseIndex = 0;
  this_05->NumResources = '\0';
  this_05->Type = LooseData;
  (this->LightPosition).NumBytes = 0;
  this_01->BufferIndex = 0;
  this_01->BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  this_02->BufferIndex = 0;
  this_02->BaseIndex = 0;
  (this->ShadowSharpen).NumBytes = 0;
  this_03->BufferIndex = 0;
  this_03->BaseIndex = 0;
  (this->PointLightDepthBias).NumBytes = 0;
  this_04->BufferIndex = 0;
  this_04->BaseIndex = 0;
  (this->PointLightProjParameters).NumBytes = 0;
  pFVar1 = FHairStrandsViewUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            (&this->HairStrandsParameters,param_1->ParameterMap,pFVar1->ShaderVariableName,
             SPF_Optional);
  pFVar1 = FSubstrateGlobalUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            (&this->SubstrateGlobalParameters,param_1->ParameterMap,pFVar1->ShaderVariableName,
             SPF_Optional);
  FOnePassPointShadowProjectionShaderParameters::Bind
            (&this->OnePassShadowParameters,param_1->ParameterMap);
  FShaderResourceParameter::Bind
            (this_05,param_1->ParameterMap,L"ShadowDepthTextureSampler",SPF_Optional);
  FShaderParameter::Bind(this_00,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  FShaderParameter::Bind(this_01,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(this_02,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind(this_03,param_1->ParameterMap,L"PointLightDepthBias",SPF_Optional);
  FShaderParameter::Bind(this_04,param_1->ParameterMap,L"PointLightProjParameters",SPF_Optional);
  return this;
}

// TOnePassPointShadowProjectionPS<2,1,0> @ 1455713c0

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

TOnePassPointShadowProjectionPS<2,1,0> * __thiscall
TOnePassPointShadowProjectionPS<2,1,0>::TOnePassPointShadowProjectionPS<2,1,0>
          (TOnePassPointShadowProjectionPS<2,1,0> *this,
          FShaderCompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  FShaderParameter *this_01;
  FShaderParameter *this_02;
  FShaderParameter *this_03;
  FShaderParameter *this_04;
  FShaderResourceParameter *this_05;
  FShaderParametersMetadata *pFVar1;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this->HairStrandsParameters = 0xffff;
  this->SubstrateGlobalParameters = 0xffff;
  this_00 = &this->LightPosition;
  (this->OnePassShadowParameters).ShadowDepthTexture.BaseIndex = 0;
  this_01 = &this->ShadowFadeFraction;
  *(undefined8 *)&(this->OnePassShadowParameters).ShadowDepthTexture.NumResources = 0;
  this_02 = &this->ShadowSharpen;
  *(undefined8 *)&(this->OnePassShadowParameters).ShadowDepthCubeComparisonSampler.NumResources = 0;
  this_03 = &this->PointLightDepthBias;
  (this->OnePassShadowParameters).InvShadowmapResolution.BufferIndex = 0;
  (this->OnePassShadowParameters).InvShadowmapResolution.BaseIndex = 0;
  (this->OnePassShadowParameters).InvShadowmapResolution.NumBytes = 0;
  (this->OnePassShadowParameters).LightPositionOrDirection.BufferIndex = 0;
  this_04 = &this->PointLightProjParameters;
  (this->OnePassShadowParameters).LightPositionOrDirection.BaseIndex = 0;
  (this->OnePassShadowParameters).LightPositionOrDirection.NumBytes = 0;
  this_05 = &this->ShadowDepthTextureSampler;
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  this_05->BaseIndex = 0;
  this_05->NumResources = '\0';
  this_05->Type = LooseData;
  (this->LightPosition).NumBytes = 0;
  this_01->BufferIndex = 0;
  this_01->BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  this_02->BufferIndex = 0;
  this_02->BaseIndex = 0;
  (this->ShadowSharpen).NumBytes = 0;
  this_03->BufferIndex = 0;
  this_03->BaseIndex = 0;
  (this->PointLightDepthBias).NumBytes = 0;
  this_04->BufferIndex = 0;
  this_04->BaseIndex = 0;
  (this->PointLightProjParameters).NumBytes = 0;
  pFVar1 = FHairStrandsViewUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            (&this->HairStrandsParameters,param_1->ParameterMap,pFVar1->ShaderVariableName,
             SPF_Optional);
  pFVar1 = FSubstrateGlobalUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            (&this->SubstrateGlobalParameters,param_1->ParameterMap,pFVar1->ShaderVariableName,
             SPF_Optional);
  FOnePassPointShadowProjectionShaderParameters::Bind
            (&this->OnePassShadowParameters,param_1->ParameterMap);
  FShaderResourceParameter::Bind
            (this_05,param_1->ParameterMap,L"ShadowDepthTextureSampler",SPF_Optional);
  FShaderParameter::Bind(this_00,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  FShaderParameter::Bind(this_01,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(this_02,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind(this_03,param_1->ParameterMap,L"PointLightDepthBias",SPF_Optional);
  FShaderParameter::Bind(this_04,param_1->ParameterMap,L"PointLightProjParameters",SPF_Optional);
  return this;
}

// TOnePassPointShadowProjectionPS<2,0,1> @ 145571570

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

TOnePassPointShadowProjectionPS<2,0,1> * __thiscall
TOnePassPointShadowProjectionPS<2,0,1>::TOnePassPointShadowProjectionPS<2,0,1>
          (TOnePassPointShadowProjectionPS<2,0,1> *this,
          FShaderCompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  FShaderParameter *this_01;
  FShaderParameter *this_02;
  FShaderParameter *this_03;
  FShaderParameter *this_04;
  FShaderResourceParameter *this_05;
  FShaderParametersMetadata *pFVar1;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this->HairStrandsParameters = 0xffff;
  this->SubstrateGlobalParameters = 0xffff;
  this_00 = &this->LightPosition;
  (this->OnePassShadowParameters).ShadowDepthTexture.BaseIndex = 0;
  this_01 = &this->ShadowFadeFraction;
  *(undefined8 *)&(this->OnePassShadowParameters).ShadowDepthTexture.NumResources = 0;
  this_02 = &this->ShadowSharpen;
  *(undefined8 *)&(this->OnePassShadowParameters).ShadowDepthCubeComparisonSampler.NumResources = 0;
  this_03 = &this->PointLightDepthBias;
  (this->OnePassShadowParameters).InvShadowmapResolution.BufferIndex = 0;
  (this->OnePassShadowParameters).InvShadowmapResolution.BaseIndex = 0;
  (this->OnePassShadowParameters).InvShadowmapResolution.NumBytes = 0;
  (this->OnePassShadowParameters).LightPositionOrDirection.BufferIndex = 0;
  this_04 = &this->PointLightProjParameters;
  (this->OnePassShadowParameters).LightPositionOrDirection.BaseIndex = 0;
  (this->OnePassShadowParameters).LightPositionOrDirection.NumBytes = 0;
  this_05 = &this->ShadowDepthTextureSampler;
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  this_05->BaseIndex = 0;
  this_05->NumResources = '\0';
  this_05->Type = LooseData;
  (this->LightPosition).NumBytes = 0;
  this_01->BufferIndex = 0;
  this_01->BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  this_02->BufferIndex = 0;
  this_02->BaseIndex = 0;
  (this->ShadowSharpen).NumBytes = 0;
  this_03->BufferIndex = 0;
  this_03->BaseIndex = 0;
  (this->PointLightDepthBias).NumBytes = 0;
  this_04->BufferIndex = 0;
  this_04->BaseIndex = 0;
  (this->PointLightProjParameters).NumBytes = 0;
  pFVar1 = FHairStrandsViewUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            (&this->HairStrandsParameters,param_1->ParameterMap,pFVar1->ShaderVariableName,
             SPF_Optional);
  pFVar1 = FSubstrateGlobalUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            (&this->SubstrateGlobalParameters,param_1->ParameterMap,pFVar1->ShaderVariableName,
             SPF_Optional);
  FOnePassPointShadowProjectionShaderParameters::Bind
            (&this->OnePassShadowParameters,param_1->ParameterMap);
  FShaderResourceParameter::Bind
            (this_05,param_1->ParameterMap,L"ShadowDepthTextureSampler",SPF_Optional);
  FShaderParameter::Bind(this_00,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  FShaderParameter::Bind(this_01,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(this_02,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind(this_03,param_1->ParameterMap,L"PointLightDepthBias",SPF_Optional);
  FShaderParameter::Bind(this_04,param_1->ParameterMap,L"PointLightProjParameters",SPF_Optional);
  return this;
}

// TOnePassPointShadowProjectionPS<2,0,0> @ 145571720

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

TOnePassPointShadowProjectionPS<2,0,0> * __thiscall
TOnePassPointShadowProjectionPS<2,0,0>::TOnePassPointShadowProjectionPS<2,0,0>
          (TOnePassPointShadowProjectionPS<2,0,0> *this,
          FShaderCompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  FShaderParameter *this_01;
  FShaderParameter *this_02;
  FShaderParameter *this_03;
  FShaderParameter *this_04;
  FShaderResourceParameter *this_05;
  FShaderParametersMetadata *pFVar1;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this->HairStrandsParameters = 0xffff;
  this->SubstrateGlobalParameters = 0xffff;
  this_00 = &this->LightPosition;
  (this->OnePassShadowParameters).ShadowDepthTexture.BaseIndex = 0;
  this_01 = &this->ShadowFadeFraction;
  *(undefined8 *)&(this->OnePassShadowParameters).ShadowDepthTexture.NumResources = 0;
  this_02 = &this->ShadowSharpen;
  *(undefined8 *)&(this->OnePassShadowParameters).ShadowDepthCubeComparisonSampler.NumResources = 0;
  this_03 = &this->PointLightDepthBias;
  (this->OnePassShadowParameters).InvShadowmapResolution.BufferIndex = 0;
  (this->OnePassShadowParameters).InvShadowmapResolution.BaseIndex = 0;
  (this->OnePassShadowParameters).InvShadowmapResolution.NumBytes = 0;
  (this->OnePassShadowParameters).LightPositionOrDirection.BufferIndex = 0;
  this_04 = &this->PointLightProjParameters;
  (this->OnePassShadowParameters).LightPositionOrDirection.BaseIndex = 0;
  (this->OnePassShadowParameters).LightPositionOrDirection.NumBytes = 0;
  this_05 = &this->ShadowDepthTextureSampler;
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  this_05->BaseIndex = 0;
  this_05->NumResources = '\0';
  this_05->Type = LooseData;
  (this->LightPosition).NumBytes = 0;
  this_01->BufferIndex = 0;
  this_01->BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  this_02->BufferIndex = 0;
  this_02->BaseIndex = 0;
  (this->ShadowSharpen).NumBytes = 0;
  this_03->BufferIndex = 0;
  this_03->BaseIndex = 0;
  (this->PointLightDepthBias).NumBytes = 0;
  this_04->BufferIndex = 0;
  this_04->BaseIndex = 0;
  (this->PointLightProjParameters).NumBytes = 0;
  pFVar1 = FHairStrandsViewUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            (&this->HairStrandsParameters,param_1->ParameterMap,pFVar1->ShaderVariableName,
             SPF_Optional);
  pFVar1 = FSubstrateGlobalUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            (&this->SubstrateGlobalParameters,param_1->ParameterMap,pFVar1->ShaderVariableName,
             SPF_Optional);
  FOnePassPointShadowProjectionShaderParameters::Bind
            (&this->OnePassShadowParameters,param_1->ParameterMap);
  FShaderResourceParameter::Bind
            (this_05,param_1->ParameterMap,L"ShadowDepthTextureSampler",SPF_Optional);
  FShaderParameter::Bind(this_00,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  FShaderParameter::Bind(this_01,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(this_02,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind(this_03,param_1->ParameterMap,L"PointLightDepthBias",SPF_Optional);
  FShaderParameter::Bind(this_04,param_1->ParameterMap,L"PointLightProjParameters",SPF_Optional);
  return this;
}

// TOnePassPointShadowProjectionPS<3,1,0> @ 1455718d0

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

TOnePassPointShadowProjectionPS<3,1,0> * __thiscall
TOnePassPointShadowProjectionPS<3,1,0>::TOnePassPointShadowProjectionPS<3,1,0>
          (TOnePassPointShadowProjectionPS<3,1,0> *this,
          FShaderCompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  FShaderParameter *this_01;
  FShaderParameter *this_02;
  FShaderParameter *this_03;
  FShaderParameter *this_04;
  FShaderResourceParameter *this_05;
  FShaderParametersMetadata *pFVar1;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this->HairStrandsParameters = 0xffff;
  this->SubstrateGlobalParameters = 0xffff;
  this_00 = &this->LightPosition;
  (this->OnePassShadowParameters).ShadowDepthTexture.BaseIndex = 0;
  this_01 = &this->ShadowFadeFraction;
  *(undefined8 *)&(this->OnePassShadowParameters).ShadowDepthTexture.NumResources = 0;
  this_02 = &this->ShadowSharpen;
  *(undefined8 *)&(this->OnePassShadowParameters).ShadowDepthCubeComparisonSampler.NumResources = 0;
  this_03 = &this->PointLightDepthBias;
  (this->OnePassShadowParameters).InvShadowmapResolution.BufferIndex = 0;
  (this->OnePassShadowParameters).InvShadowmapResolution.BaseIndex = 0;
  (this->OnePassShadowParameters).InvShadowmapResolution.NumBytes = 0;
  (this->OnePassShadowParameters).LightPositionOrDirection.BufferIndex = 0;
  this_04 = &this->PointLightProjParameters;
  (this->OnePassShadowParameters).LightPositionOrDirection.BaseIndex = 0;
  (this->OnePassShadowParameters).LightPositionOrDirection.NumBytes = 0;
  this_05 = &this->ShadowDepthTextureSampler;
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  this_05->BaseIndex = 0;
  this_05->NumResources = '\0';
  this_05->Type = LooseData;
  (this->LightPosition).NumBytes = 0;
  this_01->BufferIndex = 0;
  this_01->BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  this_02->BufferIndex = 0;
  this_02->BaseIndex = 0;
  (this->ShadowSharpen).NumBytes = 0;
  this_03->BufferIndex = 0;
  this_03->BaseIndex = 0;
  (this->PointLightDepthBias).NumBytes = 0;
  this_04->BufferIndex = 0;
  this_04->BaseIndex = 0;
  (this->PointLightProjParameters).NumBytes = 0;
  pFVar1 = FHairStrandsViewUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            (&this->HairStrandsParameters,param_1->ParameterMap,pFVar1->ShaderVariableName,
             SPF_Optional);
  pFVar1 = FSubstrateGlobalUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            (&this->SubstrateGlobalParameters,param_1->ParameterMap,pFVar1->ShaderVariableName,
             SPF_Optional);
  FOnePassPointShadowProjectionShaderParameters::Bind
            (&this->OnePassShadowParameters,param_1->ParameterMap);
  FShaderResourceParameter::Bind
            (this_05,param_1->ParameterMap,L"ShadowDepthTextureSampler",SPF_Optional);
  FShaderParameter::Bind(this_00,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  FShaderParameter::Bind(this_01,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(this_02,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind(this_03,param_1->ParameterMap,L"PointLightDepthBias",SPF_Optional);
  FShaderParameter::Bind(this_04,param_1->ParameterMap,L"PointLightProjParameters",SPF_Optional);
  return this;
}

// TOnePassPointShadowProjectionPS<3,0,1> @ 145571a80

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

TOnePassPointShadowProjectionPS<3,0,1> * __thiscall
TOnePassPointShadowProjectionPS<3,0,1>::TOnePassPointShadowProjectionPS<3,0,1>
          (TOnePassPointShadowProjectionPS<3,0,1> *this,
          FShaderCompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  FShaderParameter *this_01;
  FShaderParameter *this_02;
  FShaderParameter *this_03;
  FShaderParameter *this_04;
  FShaderResourceParameter *this_05;
  FShaderParametersMetadata *pFVar1;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this->HairStrandsParameters = 0xffff;
  this->SubstrateGlobalParameters = 0xffff;
  this_00 = &this->LightPosition;
  (this->OnePassShadowParameters).ShadowDepthTexture.BaseIndex = 0;
  this_01 = &this->ShadowFadeFraction;
  *(undefined8 *)&(this->OnePassShadowParameters).ShadowDepthTexture.NumResources = 0;
  this_02 = &this->ShadowSharpen;
  *(undefined8 *)&(this->OnePassShadowParameters).ShadowDepthCubeComparisonSampler.NumResources = 0;
  this_03 = &this->PointLightDepthBias;
  (this->OnePassShadowParameters).InvShadowmapResolution.BufferIndex = 0;
  (this->OnePassShadowParameters).InvShadowmapResolution.BaseIndex = 0;
  (this->OnePassShadowParameters).InvShadowmapResolution.NumBytes = 0;
  (this->OnePassShadowParameters).LightPositionOrDirection.BufferIndex = 0;
  this_04 = &this->PointLightProjParameters;
  (this->OnePassShadowParameters).LightPositionOrDirection.BaseIndex = 0;
  (this->OnePassShadowParameters).LightPositionOrDirection.NumBytes = 0;
  this_05 = &this->ShadowDepthTextureSampler;
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  this_05->BaseIndex = 0;
  this_05->NumResources = '\0';
  this_05->Type = LooseData;
  (this->LightPosition).NumBytes = 0;
  this_01->BufferIndex = 0;
  this_01->BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  this_02->BufferIndex = 0;
  this_02->BaseIndex = 0;
  (this->ShadowSharpen).NumBytes = 0;
  this_03->BufferIndex = 0;
  this_03->BaseIndex = 0;
  (this->PointLightDepthBias).NumBytes = 0;
  this_04->BufferIndex = 0;
  this_04->BaseIndex = 0;
  (this->PointLightProjParameters).NumBytes = 0;
  pFVar1 = FHairStrandsViewUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            (&this->HairStrandsParameters,param_1->ParameterMap,pFVar1->ShaderVariableName,
             SPF_Optional);
  pFVar1 = FSubstrateGlobalUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            (&this->SubstrateGlobalParameters,param_1->ParameterMap,pFVar1->ShaderVariableName,
             SPF_Optional);
  FOnePassPointShadowProjectionShaderParameters::Bind
            (&this->OnePassShadowParameters,param_1->ParameterMap);
  FShaderResourceParameter::Bind
            (this_05,param_1->ParameterMap,L"ShadowDepthTextureSampler",SPF_Optional);
  FShaderParameter::Bind(this_00,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  FShaderParameter::Bind(this_01,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(this_02,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind(this_03,param_1->ParameterMap,L"PointLightDepthBias",SPF_Optional);
  FShaderParameter::Bind(this_04,param_1->ParameterMap,L"PointLightProjParameters",SPF_Optional);
  return this;
}

// TOnePassPointShadowProjectionPS<3,0,0> @ 145571c30

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

TOnePassPointShadowProjectionPS<3,0,0> * __thiscall
TOnePassPointShadowProjectionPS<3,0,0>::TOnePassPointShadowProjectionPS<3,0,0>
          (TOnePassPointShadowProjectionPS<3,0,0> *this,
          FShaderCompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  FShaderParameter *this_01;
  FShaderParameter *this_02;
  FShaderParameter *this_03;
  FShaderParameter *this_04;
  FShaderResourceParameter *this_05;
  FShaderParametersMetadata *pFVar1;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this->HairStrandsParameters = 0xffff;
  this->SubstrateGlobalParameters = 0xffff;
  this_00 = &this->LightPosition;
  (this->OnePassShadowParameters).ShadowDepthTexture.BaseIndex = 0;
  this_01 = &this->ShadowFadeFraction;
  *(undefined8 *)&(this->OnePassShadowParameters).ShadowDepthTexture.NumResources = 0;
  this_02 = &this->ShadowSharpen;
  *(undefined8 *)&(this->OnePassShadowParameters).ShadowDepthCubeComparisonSampler.NumResources = 0;
  this_03 = &this->PointLightDepthBias;
  (this->OnePassShadowParameters).InvShadowmapResolution.BufferIndex = 0;
  (this->OnePassShadowParameters).InvShadowmapResolution.BaseIndex = 0;
  (this->OnePassShadowParameters).InvShadowmapResolution.NumBytes = 0;
  (this->OnePassShadowParameters).LightPositionOrDirection.BufferIndex = 0;
  this_04 = &this->PointLightProjParameters;
  (this->OnePassShadowParameters).LightPositionOrDirection.BaseIndex = 0;
  (this->OnePassShadowParameters).LightPositionOrDirection.NumBytes = 0;
  this_05 = &this->ShadowDepthTextureSampler;
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  this_05->BaseIndex = 0;
  this_05->NumResources = '\0';
  this_05->Type = LooseData;
  (this->LightPosition).NumBytes = 0;
  this_01->BufferIndex = 0;
  this_01->BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  this_02->BufferIndex = 0;
  this_02->BaseIndex = 0;
  (this->ShadowSharpen).NumBytes = 0;
  this_03->BufferIndex = 0;
  this_03->BaseIndex = 0;
  (this->PointLightDepthBias).NumBytes = 0;
  this_04->BufferIndex = 0;
  this_04->BaseIndex = 0;
  (this->PointLightProjParameters).NumBytes = 0;
  pFVar1 = FHairStrandsViewUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            (&this->HairStrandsParameters,param_1->ParameterMap,pFVar1->ShaderVariableName,
             SPF_Optional);
  pFVar1 = FSubstrateGlobalUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            (&this->SubstrateGlobalParameters,param_1->ParameterMap,pFVar1->ShaderVariableName,
             SPF_Optional);
  FOnePassPointShadowProjectionShaderParameters::Bind
            (&this->OnePassShadowParameters,param_1->ParameterMap);
  FShaderResourceParameter::Bind
            (this_05,param_1->ParameterMap,L"ShadowDepthTextureSampler",SPF_Optional);
  FShaderParameter::Bind(this_00,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  FShaderParameter::Bind(this_01,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(this_02,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind(this_03,param_1->ParameterMap,L"PointLightDepthBias",SPF_Optional);
  FShaderParameter::Bind(this_04,param_1->ParameterMap,L"PointLightProjParameters",SPF_Optional);
  return this;
}

// TOnePassPointShadowProjectionPS<4,1,0> @ 145571de0

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

TOnePassPointShadowProjectionPS<4,1,0> * __thiscall
TOnePassPointShadowProjectionPS<4,1,0>::TOnePassPointShadowProjectionPS<4,1,0>
          (TOnePassPointShadowProjectionPS<4,1,0> *this,
          FShaderCompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  FShaderParameter *this_01;
  FShaderParameter *this_02;
  FShaderParameter *this_03;
  FShaderParameter *this_04;
  FShaderResourceParameter *this_05;
  FShaderParametersMetadata *pFVar1;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this->HairStrandsParameters = 0xffff;
  this->SubstrateGlobalParameters = 0xffff;
  this_00 = &this->LightPosition;
  (this->OnePassShadowParameters).ShadowDepthTexture.BaseIndex = 0;
  this_01 = &this->ShadowFadeFraction;
  *(undefined8 *)&(this->OnePassShadowParameters).ShadowDepthTexture.NumResources = 0;
  this_02 = &this->ShadowSharpen;
  *(undefined8 *)&(this->OnePassShadowParameters).ShadowDepthCubeComparisonSampler.NumResources = 0;
  this_03 = &this->PointLightDepthBias;
  (this->OnePassShadowParameters).InvShadowmapResolution.BufferIndex = 0;
  (this->OnePassShadowParameters).InvShadowmapResolution.BaseIndex = 0;
  (this->OnePassShadowParameters).InvShadowmapResolution.NumBytes = 0;
  (this->OnePassShadowParameters).LightPositionOrDirection.BufferIndex = 0;
  this_04 = &this->PointLightProjParameters;
  (this->OnePassShadowParameters).LightPositionOrDirection.BaseIndex = 0;
  (this->OnePassShadowParameters).LightPositionOrDirection.NumBytes = 0;
  this_05 = &this->ShadowDepthTextureSampler;
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  this_05->BaseIndex = 0;
  this_05->NumResources = '\0';
  this_05->Type = LooseData;
  (this->LightPosition).NumBytes = 0;
  this_01->BufferIndex = 0;
  this_01->BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  this_02->BufferIndex = 0;
  this_02->BaseIndex = 0;
  (this->ShadowSharpen).NumBytes = 0;
  this_03->BufferIndex = 0;
  this_03->BaseIndex = 0;
  (this->PointLightDepthBias).NumBytes = 0;
  this_04->BufferIndex = 0;
  this_04->BaseIndex = 0;
  (this->PointLightProjParameters).NumBytes = 0;
  pFVar1 = FHairStrandsViewUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            (&this->HairStrandsParameters,param_1->ParameterMap,pFVar1->ShaderVariableName,
             SPF_Optional);
  pFVar1 = FSubstrateGlobalUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            (&this->SubstrateGlobalParameters,param_1->ParameterMap,pFVar1->ShaderVariableName,
             SPF_Optional);
  FOnePassPointShadowProjectionShaderParameters::Bind
            (&this->OnePassShadowParameters,param_1->ParameterMap);
  FShaderResourceParameter::Bind
            (this_05,param_1->ParameterMap,L"ShadowDepthTextureSampler",SPF_Optional);
  FShaderParameter::Bind(this_00,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  FShaderParameter::Bind(this_01,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(this_02,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind(this_03,param_1->ParameterMap,L"PointLightDepthBias",SPF_Optional);
  FShaderParameter::Bind(this_04,param_1->ParameterMap,L"PointLightProjParameters",SPF_Optional);
  return this;
}

// TOnePassPointShadowProjectionPS<4,0,1> @ 145571f90

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

TOnePassPointShadowProjectionPS<4,0,1> * __thiscall
TOnePassPointShadowProjectionPS<4,0,1>::TOnePassPointShadowProjectionPS<4,0,1>
          (TOnePassPointShadowProjectionPS<4,0,1> *this,
          FShaderCompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  FShaderParameter *this_01;
  FShaderParameter *this_02;
  FShaderParameter *this_03;
  FShaderParameter *this_04;
  FShaderResourceParameter *this_05;
  FShaderParametersMetadata *pFVar1;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this->HairStrandsParameters = 0xffff;
  this->SubstrateGlobalParameters = 0xffff;
  this_00 = &this->LightPosition;
  (this->OnePassShadowParameters).ShadowDepthTexture.BaseIndex = 0;
  this_01 = &this->ShadowFadeFraction;
  *(undefined8 *)&(this->OnePassShadowParameters).ShadowDepthTexture.NumResources = 0;
  this_02 = &this->ShadowSharpen;
  *(undefined8 *)&(this->OnePassShadowParameters).ShadowDepthCubeComparisonSampler.NumResources = 0;
  this_03 = &this->PointLightDepthBias;
  (this->OnePassShadowParameters).InvShadowmapResolution.BufferIndex = 0;
  (this->OnePassShadowParameters).InvShadowmapResolution.BaseIndex = 0;
  (this->OnePassShadowParameters).InvShadowmapResolution.NumBytes = 0;
  (this->OnePassShadowParameters).LightPositionOrDirection.BufferIndex = 0;
  this_04 = &this->PointLightProjParameters;
  (this->OnePassShadowParameters).LightPositionOrDirection.BaseIndex = 0;
  (this->OnePassShadowParameters).LightPositionOrDirection.NumBytes = 0;
  this_05 = &this->ShadowDepthTextureSampler;
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  this_05->BaseIndex = 0;
  this_05->NumResources = '\0';
  this_05->Type = LooseData;
  (this->LightPosition).NumBytes = 0;
  this_01->BufferIndex = 0;
  this_01->BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  this_02->BufferIndex = 0;
  this_02->BaseIndex = 0;
  (this->ShadowSharpen).NumBytes = 0;
  this_03->BufferIndex = 0;
  this_03->BaseIndex = 0;
  (this->PointLightDepthBias).NumBytes = 0;
  this_04->BufferIndex = 0;
  this_04->BaseIndex = 0;
  (this->PointLightProjParameters).NumBytes = 0;
  pFVar1 = FHairStrandsViewUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            (&this->HairStrandsParameters,param_1->ParameterMap,pFVar1->ShaderVariableName,
             SPF_Optional);
  pFVar1 = FSubstrateGlobalUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            (&this->SubstrateGlobalParameters,param_1->ParameterMap,pFVar1->ShaderVariableName,
             SPF_Optional);
  FOnePassPointShadowProjectionShaderParameters::Bind
            (&this->OnePassShadowParameters,param_1->ParameterMap);
  FShaderResourceParameter::Bind
            (this_05,param_1->ParameterMap,L"ShadowDepthTextureSampler",SPF_Optional);
  FShaderParameter::Bind(this_00,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  FShaderParameter::Bind(this_01,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(this_02,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind(this_03,param_1->ParameterMap,L"PointLightDepthBias",SPF_Optional);
  FShaderParameter::Bind(this_04,param_1->ParameterMap,L"PointLightProjParameters",SPF_Optional);
  return this;
}

// TOnePassPointShadowProjectionPS<4,0,0> @ 145572140

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

TOnePassPointShadowProjectionPS<4,0,0> * __thiscall
TOnePassPointShadowProjectionPS<4,0,0>::TOnePassPointShadowProjectionPS<4,0,0>
          (TOnePassPointShadowProjectionPS<4,0,0> *this,
          FShaderCompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  FShaderParameter *this_01;
  FShaderParameter *this_02;
  FShaderParameter *this_03;
  FShaderParameter *this_04;
  FShaderResourceParameter *this_05;
  FShaderParametersMetadata *pFVar1;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this->HairStrandsParameters = 0xffff;
  this->SubstrateGlobalParameters = 0xffff;
  this_00 = &this->LightPosition;
  (this->OnePassShadowParameters).ShadowDepthTexture.BaseIndex = 0;
  this_01 = &this->ShadowFadeFraction;
  *(undefined8 *)&(this->OnePassShadowParameters).ShadowDepthTexture.NumResources = 0;
  this_02 = &this->ShadowSharpen;
  *(undefined8 *)&(this->OnePassShadowParameters).ShadowDepthCubeComparisonSampler.NumResources = 0;
  this_03 = &this->PointLightDepthBias;
  (this->OnePassShadowParameters).InvShadowmapResolution.BufferIndex = 0;
  (this->OnePassShadowParameters).InvShadowmapResolution.BaseIndex = 0;
  (this->OnePassShadowParameters).InvShadowmapResolution.NumBytes = 0;
  (this->OnePassShadowParameters).LightPositionOrDirection.BufferIndex = 0;
  this_04 = &this->PointLightProjParameters;
  (this->OnePassShadowParameters).LightPositionOrDirection.BaseIndex = 0;
  (this->OnePassShadowParameters).LightPositionOrDirection.NumBytes = 0;
  this_05 = &this->ShadowDepthTextureSampler;
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  this_05->BaseIndex = 0;
  this_05->NumResources = '\0';
  this_05->Type = LooseData;
  (this->LightPosition).NumBytes = 0;
  this_01->BufferIndex = 0;
  this_01->BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  this_02->BufferIndex = 0;
  this_02->BaseIndex = 0;
  (this->ShadowSharpen).NumBytes = 0;
  this_03->BufferIndex = 0;
  this_03->BaseIndex = 0;
  (this->PointLightDepthBias).NumBytes = 0;
  this_04->BufferIndex = 0;
  this_04->BaseIndex = 0;
  (this->PointLightProjParameters).NumBytes = 0;
  pFVar1 = FHairStrandsViewUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            (&this->HairStrandsParameters,param_1->ParameterMap,pFVar1->ShaderVariableName,
             SPF_Optional);
  pFVar1 = FSubstrateGlobalUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            (&this->SubstrateGlobalParameters,param_1->ParameterMap,pFVar1->ShaderVariableName,
             SPF_Optional);
  FOnePassPointShadowProjectionShaderParameters::Bind
            (&this->OnePassShadowParameters,param_1->ParameterMap);
  FShaderResourceParameter::Bind
            (this_05,param_1->ParameterMap,L"ShadowDepthTextureSampler",SPF_Optional);
  FShaderParameter::Bind(this_00,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  FShaderParameter::Bind(this_01,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(this_02,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind(this_03,param_1->ParameterMap,L"PointLightDepthBias",SPF_Optional);
  FShaderParameter::Bind(this_04,param_1->ParameterMap,L"PointLightProjParameters",SPF_Optional);
  return this;
}

// TOnePassPointShadowProjectionPS<5,1,0> @ 1455722f0

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

TOnePassPointShadowProjectionPS<5,1,0> * __thiscall
TOnePassPointShadowProjectionPS<5,1,0>::TOnePassPointShadowProjectionPS<5,1,0>
          (TOnePassPointShadowProjectionPS<5,1,0> *this,
          FShaderCompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  FShaderParameter *this_01;
  FShaderParameter *this_02;
  FShaderParameter *this_03;
  FShaderParameter *this_04;
  FShaderResourceParameter *this_05;
  FShaderParametersMetadata *pFVar1;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this->HairStrandsParameters = 0xffff;
  this->SubstrateGlobalParameters = 0xffff;
  this_00 = &this->LightPosition;
  (this->OnePassShadowParameters).ShadowDepthTexture.BaseIndex = 0;
  this_01 = &this->ShadowFadeFraction;
  *(undefined8 *)&(this->OnePassShadowParameters).ShadowDepthTexture.NumResources = 0;
  this_02 = &this->ShadowSharpen;
  *(undefined8 *)&(this->OnePassShadowParameters).ShadowDepthCubeComparisonSampler.NumResources = 0;
  this_03 = &this->PointLightDepthBias;
  (this->OnePassShadowParameters).InvShadowmapResolution.BufferIndex = 0;
  (this->OnePassShadowParameters).InvShadowmapResolution.BaseIndex = 0;
  (this->OnePassShadowParameters).InvShadowmapResolution.NumBytes = 0;
  (this->OnePassShadowParameters).LightPositionOrDirection.BufferIndex = 0;
  this_04 = &this->PointLightProjParameters;
  (this->OnePassShadowParameters).LightPositionOrDirection.BaseIndex = 0;
  (this->OnePassShadowParameters).LightPositionOrDirection.NumBytes = 0;
  this_05 = &this->ShadowDepthTextureSampler;
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  this_05->BaseIndex = 0;
  this_05->NumResources = '\0';
  this_05->Type = LooseData;
  (this->LightPosition).NumBytes = 0;
  this_01->BufferIndex = 0;
  this_01->BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  this_02->BufferIndex = 0;
  this_02->BaseIndex = 0;
  (this->ShadowSharpen).NumBytes = 0;
  this_03->BufferIndex = 0;
  this_03->BaseIndex = 0;
  (this->PointLightDepthBias).NumBytes = 0;
  this_04->BufferIndex = 0;
  this_04->BaseIndex = 0;
  (this->PointLightProjParameters).NumBytes = 0;
  pFVar1 = FHairStrandsViewUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            (&this->HairStrandsParameters,param_1->ParameterMap,pFVar1->ShaderVariableName,
             SPF_Optional);
  pFVar1 = FSubstrateGlobalUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            (&this->SubstrateGlobalParameters,param_1->ParameterMap,pFVar1->ShaderVariableName,
             SPF_Optional);
  FOnePassPointShadowProjectionShaderParameters::Bind
            (&this->OnePassShadowParameters,param_1->ParameterMap);
  FShaderResourceParameter::Bind
            (this_05,param_1->ParameterMap,L"ShadowDepthTextureSampler",SPF_Optional);
  FShaderParameter::Bind(this_00,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  FShaderParameter::Bind(this_01,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(this_02,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind(this_03,param_1->ParameterMap,L"PointLightDepthBias",SPF_Optional);
  FShaderParameter::Bind(this_04,param_1->ParameterMap,L"PointLightProjParameters",SPF_Optional);
  return this;
}

// TOnePassPointShadowProjectionPS<5,0,1> @ 1455724a0

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

TOnePassPointShadowProjectionPS<5,0,1> * __thiscall
TOnePassPointShadowProjectionPS<5,0,1>::TOnePassPointShadowProjectionPS<5,0,1>
          (TOnePassPointShadowProjectionPS<5,0,1> *this,
          FShaderCompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  FShaderParameter *this_01;
  FShaderParameter *this_02;
  FShaderParameter *this_03;
  FShaderParameter *this_04;
  FShaderResourceParameter *this_05;
  FShaderParametersMetadata *pFVar1;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this->HairStrandsParameters = 0xffff;
  this->SubstrateGlobalParameters = 0xffff;
  this_00 = &this->LightPosition;
  (this->OnePassShadowParameters).ShadowDepthTexture.BaseIndex = 0;
  this_01 = &this->ShadowFadeFraction;
  *(undefined8 *)&(this->OnePassShadowParameters).ShadowDepthTexture.NumResources = 0;
  this_02 = &this->ShadowSharpen;
  *(undefined8 *)&(this->OnePassShadowParameters).ShadowDepthCubeComparisonSampler.NumResources = 0;
  this_03 = &this->PointLightDepthBias;
  (this->OnePassShadowParameters).InvShadowmapResolution.BufferIndex = 0;
  (this->OnePassShadowParameters).InvShadowmapResolution.BaseIndex = 0;
  (this->OnePassShadowParameters).InvShadowmapResolution.NumBytes = 0;
  (this->OnePassShadowParameters).LightPositionOrDirection.BufferIndex = 0;
  this_04 = &this->PointLightProjParameters;
  (this->OnePassShadowParameters).LightPositionOrDirection.BaseIndex = 0;
  (this->OnePassShadowParameters).LightPositionOrDirection.NumBytes = 0;
  this_05 = &this->ShadowDepthTextureSampler;
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  this_05->BaseIndex = 0;
  this_05->NumResources = '\0';
  this_05->Type = LooseData;
  (this->LightPosition).NumBytes = 0;
  this_01->BufferIndex = 0;
  this_01->BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  this_02->BufferIndex = 0;
  this_02->BaseIndex = 0;
  (this->ShadowSharpen).NumBytes = 0;
  this_03->BufferIndex = 0;
  this_03->BaseIndex = 0;
  (this->PointLightDepthBias).NumBytes = 0;
  this_04->BufferIndex = 0;
  this_04->BaseIndex = 0;
  (this->PointLightProjParameters).NumBytes = 0;
  pFVar1 = FHairStrandsViewUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            (&this->HairStrandsParameters,param_1->ParameterMap,pFVar1->ShaderVariableName,
             SPF_Optional);
  pFVar1 = FSubstrateGlobalUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            (&this->SubstrateGlobalParameters,param_1->ParameterMap,pFVar1->ShaderVariableName,
             SPF_Optional);
  FOnePassPointShadowProjectionShaderParameters::Bind
            (&this->OnePassShadowParameters,param_1->ParameterMap);
  FShaderResourceParameter::Bind
            (this_05,param_1->ParameterMap,L"ShadowDepthTextureSampler",SPF_Optional);
  FShaderParameter::Bind(this_00,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  FShaderParameter::Bind(this_01,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(this_02,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind(this_03,param_1->ParameterMap,L"PointLightDepthBias",SPF_Optional);
  FShaderParameter::Bind(this_04,param_1->ParameterMap,L"PointLightProjParameters",SPF_Optional);
  return this;
}

// TOnePassPointShadowProjectionPS<5,0,0> @ 145572650

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

TOnePassPointShadowProjectionPS<5,0,0> * __thiscall
TOnePassPointShadowProjectionPS<5,0,0>::TOnePassPointShadowProjectionPS<5,0,0>
          (TOnePassPointShadowProjectionPS<5,0,0> *this,
          FShaderCompiledShaderInitializerType *param_1)

{
  FShaderParameter *this_00;
  FShaderParameter *this_01;
  FShaderParameter *this_02;
  FShaderParameter *this_03;
  FShaderParameter *this_04;
  FShaderResourceParameter *this_05;
  FShaderParametersMetadata *pFVar1;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this->HairStrandsParameters = 0xffff;
  this->SubstrateGlobalParameters = 0xffff;
  this_00 = &this->LightPosition;
  (this->OnePassShadowParameters).ShadowDepthTexture.BaseIndex = 0;
  this_01 = &this->ShadowFadeFraction;
  *(undefined8 *)&(this->OnePassShadowParameters).ShadowDepthTexture.NumResources = 0;
  this_02 = &this->ShadowSharpen;
  *(undefined8 *)&(this->OnePassShadowParameters).ShadowDepthCubeComparisonSampler.NumResources = 0;
  this_03 = &this->PointLightDepthBias;
  (this->OnePassShadowParameters).InvShadowmapResolution.BufferIndex = 0;
  (this->OnePassShadowParameters).InvShadowmapResolution.BaseIndex = 0;
  (this->OnePassShadowParameters).InvShadowmapResolution.NumBytes = 0;
  (this->OnePassShadowParameters).LightPositionOrDirection.BufferIndex = 0;
  this_04 = &this->PointLightProjParameters;
  (this->OnePassShadowParameters).LightPositionOrDirection.BaseIndex = 0;
  (this->OnePassShadowParameters).LightPositionOrDirection.NumBytes = 0;
  this_05 = &this->ShadowDepthTextureSampler;
  this_00->BufferIndex = 0;
  this_00->BaseIndex = 0;
  this_05->BaseIndex = 0;
  this_05->NumResources = '\0';
  this_05->Type = LooseData;
  (this->LightPosition).NumBytes = 0;
  this_01->BufferIndex = 0;
  this_01->BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  this_02->BufferIndex = 0;
  this_02->BaseIndex = 0;
  (this->ShadowSharpen).NumBytes = 0;
  this_03->BufferIndex = 0;
  this_03->BaseIndex = 0;
  (this->PointLightDepthBias).NumBytes = 0;
  this_04->BufferIndex = 0;
  this_04->BaseIndex = 0;
  (this->PointLightProjParameters).NumBytes = 0;
  pFVar1 = FHairStrandsViewUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            (&this->HairStrandsParameters,param_1->ParameterMap,pFVar1->ShaderVariableName,
             SPF_Optional);
  pFVar1 = FSubstrateGlobalUniformParameters::GetStructMetadata();
  FShaderUniformBufferParameter::Bind
            (&this->SubstrateGlobalParameters,param_1->ParameterMap,pFVar1->ShaderVariableName,
             SPF_Optional);
  FOnePassPointShadowProjectionShaderParameters::Bind
            (&this->OnePassShadowParameters,param_1->ParameterMap);
  FShaderResourceParameter::Bind
            (this_05,param_1->ParameterMap,L"ShadowDepthTextureSampler",SPF_Optional);
  FShaderParameter::Bind(this_00,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  FShaderParameter::Bind(this_01,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(this_02,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind(this_03,param_1->ParameterMap,L"PointLightDepthBias",SPF_Optional);
  FShaderParameter::Bind(this_04,param_1->ParameterMap,L"PointLightProjParameters",SPF_Optional);
  return this;
}

// ConstructCompiledInstance @ 145586870

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

FShader * __cdecl
TOnePassPointShadowProjectionPS<1,1,0>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TOnePassPointShadowProjectionPS<1,1,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x128);
  if (pTVar1 != (TOnePassPointShadowProjectionPS<1,1,0> *)0x0) {
    pTVar1 = TOnePassPointShadowProjectionPS<1,1,0>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 1455868b0

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

FShader * __cdecl
TOnePassPointShadowProjectionPS<1,0,1>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TOnePassPointShadowProjectionPS<1,0,1> *pTVar1;
  
  pTVar1 = ::operator_new(0x128);
  if (pTVar1 != (TOnePassPointShadowProjectionPS<1,0,1> *)0x0) {
    pTVar1 = TOnePassPointShadowProjectionPS<1,0,1>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 1455868f0

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

FShader * __cdecl
TOnePassPointShadowProjectionPS<1,0,0>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TOnePassPointShadowProjectionPS<1,0,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x128);
  if (pTVar1 != (TOnePassPointShadowProjectionPS<1,0,0> *)0x0) {
    pTVar1 = TOnePassPointShadowProjectionPS<1,0,0>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 145586930

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

FShader * __cdecl
TOnePassPointShadowProjectionPS<2,1,0>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TOnePassPointShadowProjectionPS<2,1,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x128);
  if (pTVar1 != (TOnePassPointShadowProjectionPS<2,1,0> *)0x0) {
    pTVar1 = TOnePassPointShadowProjectionPS<2,1,0>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 145586970

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

FShader * __cdecl
TOnePassPointShadowProjectionPS<2,0,1>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TOnePassPointShadowProjectionPS<2,0,1> *pTVar1;
  
  pTVar1 = ::operator_new(0x128);
  if (pTVar1 != (TOnePassPointShadowProjectionPS<2,0,1> *)0x0) {
    pTVar1 = TOnePassPointShadowProjectionPS<2,0,1>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 1455869b0

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

FShader * __cdecl
TOnePassPointShadowProjectionPS<2,0,0>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TOnePassPointShadowProjectionPS<2,0,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x128);
  if (pTVar1 != (TOnePassPointShadowProjectionPS<2,0,0> *)0x0) {
    pTVar1 = TOnePassPointShadowProjectionPS<2,0,0>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 1455869f0

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

FShader * __cdecl
TOnePassPointShadowProjectionPS<3,1,0>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TOnePassPointShadowProjectionPS<3,1,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x128);
  if (pTVar1 != (TOnePassPointShadowProjectionPS<3,1,0> *)0x0) {
    pTVar1 = TOnePassPointShadowProjectionPS<3,1,0>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 145586a30

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

FShader * __cdecl
TOnePassPointShadowProjectionPS<3,0,1>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TOnePassPointShadowProjectionPS<3,0,1> *pTVar1;
  
  pTVar1 = ::operator_new(0x128);
  if (pTVar1 != (TOnePassPointShadowProjectionPS<3,0,1> *)0x0) {
    pTVar1 = TOnePassPointShadowProjectionPS<3,0,1>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 145586a70

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

FShader * __cdecl
TOnePassPointShadowProjectionPS<3,0,0>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TOnePassPointShadowProjectionPS<3,0,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x128);
  if (pTVar1 != (TOnePassPointShadowProjectionPS<3,0,0> *)0x0) {
    pTVar1 = TOnePassPointShadowProjectionPS<3,0,0>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 145586ab0

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

FShader * __cdecl
TOnePassPointShadowProjectionPS<4,1,0>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TOnePassPointShadowProjectionPS<4,1,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x128);
  if (pTVar1 != (TOnePassPointShadowProjectionPS<4,1,0> *)0x0) {
    pTVar1 = TOnePassPointShadowProjectionPS<4,1,0>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 145586af0

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

FShader * __cdecl
TOnePassPointShadowProjectionPS<4,0,1>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TOnePassPointShadowProjectionPS<4,0,1> *pTVar1;
  
  pTVar1 = ::operator_new(0x128);
  if (pTVar1 != (TOnePassPointShadowProjectionPS<4,0,1> *)0x0) {
    pTVar1 = TOnePassPointShadowProjectionPS<4,0,1>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 145586b30

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

FShader * __cdecl
TOnePassPointShadowProjectionPS<4,0,0>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TOnePassPointShadowProjectionPS<4,0,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x128);
  if (pTVar1 != (TOnePassPointShadowProjectionPS<4,0,0> *)0x0) {
    pTVar1 = TOnePassPointShadowProjectionPS<4,0,0>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 145586b70

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

FShader * __cdecl
TOnePassPointShadowProjectionPS<5,1,0>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TOnePassPointShadowProjectionPS<5,1,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x128);
  if (pTVar1 != (TOnePassPointShadowProjectionPS<5,1,0> *)0x0) {
    pTVar1 = TOnePassPointShadowProjectionPS<5,1,0>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 145586bb0

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

FShader * __cdecl
TOnePassPointShadowProjectionPS<5,0,1>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TOnePassPointShadowProjectionPS<5,0,1> *pTVar1;
  
  pTVar1 = ::operator_new(0x128);
  if (pTVar1 != (TOnePassPointShadowProjectionPS<5,0,1> *)0x0) {
    pTVar1 = TOnePassPointShadowProjectionPS<5,0,1>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 145586bf0

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

FShader * __cdecl
TOnePassPointShadowProjectionPS<5,0,0>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TOnePassPointShadowProjectionPS<5,0,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x128);
  if (pTVar1 != (TOnePassPointShadowProjectionPS<5,0,0> *)0x0) {
    pTVar1 = TOnePassPointShadowProjectionPS<5,0,0>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145588c50

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

FShader * __cdecl TOnePassPointShadowProjectionPS<1,1,0>::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0x128);
  if (this != (FShader *)0x0) {
    FShader::FShader(this);
    *(undefined4 *)&this[1].Bindings.ParameterReferences.AllocatorInstance = 0xffffffff;
    *(undefined2 *)&this[1].Bindings.Parameters.AllocatorInstance = 0;
    *(undefined8 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x2 = 0;
    *(undefined8 *)((longlong)&this[1].Bindings.Parameters.ArrayNum + 2) = 0;
    *(undefined8 *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x2 = 0;
    *(undefined4 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayNum + 2) = 0;
    *(undefined2 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayMax + 2) = 0;
    this[1].Bindings.BindlessResourceParameters.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.BindlessResourceParameters.ArrayNum = 0;
    this[1].Bindings.BindlessResourceParameters.ArrayMax = 0;
    this[1].Bindings.GraphUniformBuffers.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.GraphUniformBuffers.ArrayNum = 0;
    this[1].Bindings.GraphUniformBuffers.ArrayMax = 0;
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145588ce0

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

FShader * __cdecl TOnePassPointShadowProjectionPS<1,0,1>::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0x128);
  if (this != (FShader *)0x0) {
    FShader::FShader(this);
    *(undefined4 *)&this[1].Bindings.ParameterReferences.AllocatorInstance = 0xffffffff;
    *(undefined2 *)&this[1].Bindings.Parameters.AllocatorInstance = 0;
    *(undefined8 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x2 = 0;
    *(undefined8 *)((longlong)&this[1].Bindings.Parameters.ArrayNum + 2) = 0;
    *(undefined8 *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x2 = 0;
    *(undefined4 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayNum + 2) = 0;
    *(undefined2 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayMax + 2) = 0;
    this[1].Bindings.BindlessResourceParameters.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.BindlessResourceParameters.ArrayNum = 0;
    this[1].Bindings.BindlessResourceParameters.ArrayMax = 0;
    this[1].Bindings.GraphUniformBuffers.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.GraphUniformBuffers.ArrayNum = 0;
    this[1].Bindings.GraphUniformBuffers.ArrayMax = 0;
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145588d70

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

FShader * __cdecl TOnePassPointShadowProjectionPS<1,0,0>::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0x128);
  if (this != (FShader *)0x0) {
    FShader::FShader(this);
    *(undefined4 *)&this[1].Bindings.ParameterReferences.AllocatorInstance = 0xffffffff;
    *(undefined2 *)&this[1].Bindings.Parameters.AllocatorInstance = 0;
    *(undefined8 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x2 = 0;
    *(undefined8 *)((longlong)&this[1].Bindings.Parameters.ArrayNum + 2) = 0;
    *(undefined8 *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x2 = 0;
    *(undefined4 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayNum + 2) = 0;
    *(undefined2 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayMax + 2) = 0;
    this[1].Bindings.BindlessResourceParameters.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.BindlessResourceParameters.ArrayNum = 0;
    this[1].Bindings.BindlessResourceParameters.ArrayMax = 0;
    this[1].Bindings.GraphUniformBuffers.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.GraphUniformBuffers.ArrayNum = 0;
    this[1].Bindings.GraphUniformBuffers.ArrayMax = 0;
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145588e00

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

FShader * __cdecl TOnePassPointShadowProjectionPS<2,1,0>::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0x128);
  if (this != (FShader *)0x0) {
    FShader::FShader(this);
    *(undefined4 *)&this[1].Bindings.ParameterReferences.AllocatorInstance = 0xffffffff;
    *(undefined2 *)&this[1].Bindings.Parameters.AllocatorInstance = 0;
    *(undefined8 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x2 = 0;
    *(undefined8 *)((longlong)&this[1].Bindings.Parameters.ArrayNum + 2) = 0;
    *(undefined8 *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x2 = 0;
    *(undefined4 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayNum + 2) = 0;
    *(undefined2 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayMax + 2) = 0;
    this[1].Bindings.BindlessResourceParameters.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.BindlessResourceParameters.ArrayNum = 0;
    this[1].Bindings.BindlessResourceParameters.ArrayMax = 0;
    this[1].Bindings.GraphUniformBuffers.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.GraphUniformBuffers.ArrayNum = 0;
    this[1].Bindings.GraphUniformBuffers.ArrayMax = 0;
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145588e90

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

FShader * __cdecl TOnePassPointShadowProjectionPS<2,0,1>::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0x128);
  if (this != (FShader *)0x0) {
    FShader::FShader(this);
    *(undefined4 *)&this[1].Bindings.ParameterReferences.AllocatorInstance = 0xffffffff;
    *(undefined2 *)&this[1].Bindings.Parameters.AllocatorInstance = 0;
    *(undefined8 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x2 = 0;
    *(undefined8 *)((longlong)&this[1].Bindings.Parameters.ArrayNum + 2) = 0;
    *(undefined8 *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x2 = 0;
    *(undefined4 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayNum + 2) = 0;
    *(undefined2 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayMax + 2) = 0;
    this[1].Bindings.BindlessResourceParameters.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.BindlessResourceParameters.ArrayNum = 0;
    this[1].Bindings.BindlessResourceParameters.ArrayMax = 0;
    this[1].Bindings.GraphUniformBuffers.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.GraphUniformBuffers.ArrayNum = 0;
    this[1].Bindings.GraphUniformBuffers.ArrayMax = 0;
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145588f20

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

FShader * __cdecl TOnePassPointShadowProjectionPS<2,0,0>::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0x128);
  if (this != (FShader *)0x0) {
    FShader::FShader(this);
    *(undefined4 *)&this[1].Bindings.ParameterReferences.AllocatorInstance = 0xffffffff;
    *(undefined2 *)&this[1].Bindings.Parameters.AllocatorInstance = 0;
    *(undefined8 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x2 = 0;
    *(undefined8 *)((longlong)&this[1].Bindings.Parameters.ArrayNum + 2) = 0;
    *(undefined8 *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x2 = 0;
    *(undefined4 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayNum + 2) = 0;
    *(undefined2 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayMax + 2) = 0;
    this[1].Bindings.BindlessResourceParameters.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.BindlessResourceParameters.ArrayNum = 0;
    this[1].Bindings.BindlessResourceParameters.ArrayMax = 0;
    this[1].Bindings.GraphUniformBuffers.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.GraphUniformBuffers.ArrayNum = 0;
    this[1].Bindings.GraphUniformBuffers.ArrayMax = 0;
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145588fb0

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

FShader * __cdecl TOnePassPointShadowProjectionPS<3,1,0>::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0x128);
  if (this != (FShader *)0x0) {
    FShader::FShader(this);
    *(undefined4 *)&this[1].Bindings.ParameterReferences.AllocatorInstance = 0xffffffff;
    *(undefined2 *)&this[1].Bindings.Parameters.AllocatorInstance = 0;
    *(undefined8 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x2 = 0;
    *(undefined8 *)((longlong)&this[1].Bindings.Parameters.ArrayNum + 2) = 0;
    *(undefined8 *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x2 = 0;
    *(undefined4 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayNum + 2) = 0;
    *(undefined2 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayMax + 2) = 0;
    this[1].Bindings.BindlessResourceParameters.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.BindlessResourceParameters.ArrayNum = 0;
    this[1].Bindings.BindlessResourceParameters.ArrayMax = 0;
    this[1].Bindings.GraphUniformBuffers.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.GraphUniformBuffers.ArrayNum = 0;
    this[1].Bindings.GraphUniformBuffers.ArrayMax = 0;
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145589040

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

FShader * __cdecl TOnePassPointShadowProjectionPS<3,0,1>::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0x128);
  if (this != (FShader *)0x0) {
    FShader::FShader(this);
    *(undefined4 *)&this[1].Bindings.ParameterReferences.AllocatorInstance = 0xffffffff;
    *(undefined2 *)&this[1].Bindings.Parameters.AllocatorInstance = 0;
    *(undefined8 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x2 = 0;
    *(undefined8 *)((longlong)&this[1].Bindings.Parameters.ArrayNum + 2) = 0;
    *(undefined8 *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x2 = 0;
    *(undefined4 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayNum + 2) = 0;
    *(undefined2 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayMax + 2) = 0;
    this[1].Bindings.BindlessResourceParameters.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.BindlessResourceParameters.ArrayNum = 0;
    this[1].Bindings.BindlessResourceParameters.ArrayMax = 0;
    this[1].Bindings.GraphUniformBuffers.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.GraphUniformBuffers.ArrayNum = 0;
    this[1].Bindings.GraphUniformBuffers.ArrayMax = 0;
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 1455890d0

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

FShader * __cdecl TOnePassPointShadowProjectionPS<3,0,0>::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0x128);
  if (this != (FShader *)0x0) {
    FShader::FShader(this);
    *(undefined4 *)&this[1].Bindings.ParameterReferences.AllocatorInstance = 0xffffffff;
    *(undefined2 *)&this[1].Bindings.Parameters.AllocatorInstance = 0;
    *(undefined8 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x2 = 0;
    *(undefined8 *)((longlong)&this[1].Bindings.Parameters.ArrayNum + 2) = 0;
    *(undefined8 *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x2 = 0;
    *(undefined4 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayNum + 2) = 0;
    *(undefined2 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayMax + 2) = 0;
    this[1].Bindings.BindlessResourceParameters.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.BindlessResourceParameters.ArrayNum = 0;
    this[1].Bindings.BindlessResourceParameters.ArrayMax = 0;
    this[1].Bindings.GraphUniformBuffers.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.GraphUniformBuffers.ArrayNum = 0;
    this[1].Bindings.GraphUniformBuffers.ArrayMax = 0;
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145589160

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

FShader * __cdecl TOnePassPointShadowProjectionPS<4,1,0>::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0x128);
  if (this != (FShader *)0x0) {
    FShader::FShader(this);
    *(undefined4 *)&this[1].Bindings.ParameterReferences.AllocatorInstance = 0xffffffff;
    *(undefined2 *)&this[1].Bindings.Parameters.AllocatorInstance = 0;
    *(undefined8 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x2 = 0;
    *(undefined8 *)((longlong)&this[1].Bindings.Parameters.ArrayNum + 2) = 0;
    *(undefined8 *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x2 = 0;
    *(undefined4 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayNum + 2) = 0;
    *(undefined2 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayMax + 2) = 0;
    this[1].Bindings.BindlessResourceParameters.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.BindlessResourceParameters.ArrayNum = 0;
    this[1].Bindings.BindlessResourceParameters.ArrayMax = 0;
    this[1].Bindings.GraphUniformBuffers.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.GraphUniformBuffers.ArrayNum = 0;
    this[1].Bindings.GraphUniformBuffers.ArrayMax = 0;
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 1455891f0

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

FShader * __cdecl TOnePassPointShadowProjectionPS<4,0,1>::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0x128);
  if (this != (FShader *)0x0) {
    FShader::FShader(this);
    *(undefined4 *)&this[1].Bindings.ParameterReferences.AllocatorInstance = 0xffffffff;
    *(undefined2 *)&this[1].Bindings.Parameters.AllocatorInstance = 0;
    *(undefined8 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x2 = 0;
    *(undefined8 *)((longlong)&this[1].Bindings.Parameters.ArrayNum + 2) = 0;
    *(undefined8 *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x2 = 0;
    *(undefined4 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayNum + 2) = 0;
    *(undefined2 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayMax + 2) = 0;
    this[1].Bindings.BindlessResourceParameters.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.BindlessResourceParameters.ArrayNum = 0;
    this[1].Bindings.BindlessResourceParameters.ArrayMax = 0;
    this[1].Bindings.GraphUniformBuffers.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.GraphUniformBuffers.ArrayNum = 0;
    this[1].Bindings.GraphUniformBuffers.ArrayMax = 0;
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145589280

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

FShader * __cdecl TOnePassPointShadowProjectionPS<4,0,0>::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0x128);
  if (this != (FShader *)0x0) {
    FShader::FShader(this);
    *(undefined4 *)&this[1].Bindings.ParameterReferences.AllocatorInstance = 0xffffffff;
    *(undefined2 *)&this[1].Bindings.Parameters.AllocatorInstance = 0;
    *(undefined8 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x2 = 0;
    *(undefined8 *)((longlong)&this[1].Bindings.Parameters.ArrayNum + 2) = 0;
    *(undefined8 *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x2 = 0;
    *(undefined4 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayNum + 2) = 0;
    *(undefined2 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayMax + 2) = 0;
    this[1].Bindings.BindlessResourceParameters.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.BindlessResourceParameters.ArrayNum = 0;
    this[1].Bindings.BindlessResourceParameters.ArrayMax = 0;
    this[1].Bindings.GraphUniformBuffers.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.GraphUniformBuffers.ArrayNum = 0;
    this[1].Bindings.GraphUniformBuffers.ArrayMax = 0;
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145589310

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

FShader * __cdecl TOnePassPointShadowProjectionPS<5,1,0>::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0x128);
  if (this != (FShader *)0x0) {
    FShader::FShader(this);
    *(undefined4 *)&this[1].Bindings.ParameterReferences.AllocatorInstance = 0xffffffff;
    *(undefined2 *)&this[1].Bindings.Parameters.AllocatorInstance = 0;
    *(undefined8 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x2 = 0;
    *(undefined8 *)((longlong)&this[1].Bindings.Parameters.ArrayNum + 2) = 0;
    *(undefined8 *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x2 = 0;
    *(undefined4 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayNum + 2) = 0;
    *(undefined2 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayMax + 2) = 0;
    this[1].Bindings.BindlessResourceParameters.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.BindlessResourceParameters.ArrayNum = 0;
    this[1].Bindings.BindlessResourceParameters.ArrayMax = 0;
    this[1].Bindings.GraphUniformBuffers.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.GraphUniformBuffers.ArrayNum = 0;
    this[1].Bindings.GraphUniformBuffers.ArrayMax = 0;
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 1455893a0

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

FShader * __cdecl TOnePassPointShadowProjectionPS<5,0,1>::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0x128);
  if (this != (FShader *)0x0) {
    FShader::FShader(this);
    *(undefined4 *)&this[1].Bindings.ParameterReferences.AllocatorInstance = 0xffffffff;
    *(undefined2 *)&this[1].Bindings.Parameters.AllocatorInstance = 0;
    *(undefined8 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x2 = 0;
    *(undefined8 *)((longlong)&this[1].Bindings.Parameters.ArrayNum + 2) = 0;
    *(undefined8 *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x2 = 0;
    *(undefined4 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayNum + 2) = 0;
    *(undefined2 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayMax + 2) = 0;
    this[1].Bindings.BindlessResourceParameters.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.BindlessResourceParameters.ArrayNum = 0;
    this[1].Bindings.BindlessResourceParameters.ArrayMax = 0;
    this[1].Bindings.GraphUniformBuffers.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.GraphUniformBuffers.ArrayNum = 0;
    this[1].Bindings.GraphUniformBuffers.ArrayMax = 0;
    return this;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145589430

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

FShader * __cdecl TOnePassPointShadowProjectionPS<5,0,0>::ConstructSerializedInstance(void)

{
  FShader *this;
  
  this = ::operator_new(0x128);
  if (this != (FShader *)0x0) {
    FShader::FShader(this);
    *(undefined4 *)&this[1].Bindings.ParameterReferences.AllocatorInstance = 0xffffffff;
    *(undefined2 *)&this[1].Bindings.Parameters.AllocatorInstance = 0;
    *(undefined8 *)&this[1].Bindings.Parameters.AllocatorInstance.field_0x2 = 0;
    *(undefined8 *)((longlong)&this[1].Bindings.Parameters.ArrayNum + 2) = 0;
    *(undefined8 *)&this[1].Bindings.ResourceParameters.AllocatorInstance.field_0x2 = 0;
    *(undefined4 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayNum + 2) = 0;
    *(undefined2 *)((longlong)&this[1].Bindings.ResourceParameters.ArrayMax + 2) = 0;
    this[1].Bindings.BindlessResourceParameters.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.BindlessResourceParameters.ArrayNum = 0;
    this[1].Bindings.BindlessResourceParameters.ArrayMax = 0;
    this[1].Bindings.GraphUniformBuffers.AllocatorInstance = (ForAnyElementType)0x0;
    this[1].Bindings.GraphUniformBuffers.ArrayNum = 0;
    this[1].Bindings.GraphUniformBuffers.ArrayMax = 0;
    return this;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 1455a0bc0

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

FGlobalShaderType * __cdecl TOnePassPointShadowProjectionPS<1,1,0>::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FGlobalShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Global,pFVar4,
                 L"FOnePassPointShadowProjectionPS1truefalse",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"MainOnePassPointLightPS",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x128,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/ShadowProjectionPixelShader.usf");
      pFVar5 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"usf");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (iVar3 != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPaths::GetExtension(InSourceFilename) == L\"usf\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0x5d,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FGlobalShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`TOnePassPointShadowProjectionPS<1,1,0>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a0dc0

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

FGlobalShaderType * __cdecl TOnePassPointShadowProjectionPS<1,0,1>::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FGlobalShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Global,pFVar4,
                 L"FOnePassPointShadowProjectionPS1falsetrue",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"MainOnePassPointLightPS",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x128,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/ShadowProjectionPixelShader.usf");
      pFVar5 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"usf");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (iVar3 != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPaths::GetExtension(InSourceFilename) == L\"usf\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0x5d,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FGlobalShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`TOnePassPointShadowProjectionPS<1,0,1>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a0fc0

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

FGlobalShaderType * __cdecl TOnePassPointShadowProjectionPS<1,0,0>::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FGlobalShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Global,pFVar4,
                 L"FOnePassPointShadowProjectionPS1falsefalse",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"MainOnePassPointLightPS",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x128,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/ShadowProjectionPixelShader.usf");
      pFVar5 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"usf");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (iVar3 != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPaths::GetExtension(InSourceFilename) == L\"usf\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0x5d,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FGlobalShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`TOnePassPointShadowProjectionPS<1,0,0>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a11c0

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

FGlobalShaderType * __cdecl TOnePassPointShadowProjectionPS<2,1,0>::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FGlobalShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Global,pFVar4,
                 L"FOnePassPointShadowProjectionPS2truefalse",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"MainOnePassPointLightPS",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x128,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/ShadowProjectionPixelShader.usf");
      pFVar5 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"usf");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (iVar3 != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPaths::GetExtension(InSourceFilename) == L\"usf\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0x5d,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FGlobalShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`TOnePassPointShadowProjectionPS<2,1,0>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a13c0

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

FGlobalShaderType * __cdecl TOnePassPointShadowProjectionPS<2,0,1>::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FGlobalShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Global,pFVar4,
                 L"FOnePassPointShadowProjectionPS2falsetrue",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"MainOnePassPointLightPS",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x128,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/ShadowProjectionPixelShader.usf");
      pFVar5 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"usf");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (iVar3 != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPaths::GetExtension(InSourceFilename) == L\"usf\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0x5d,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FGlobalShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`TOnePassPointShadowProjectionPS<2,0,1>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a15c0

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

FGlobalShaderType * __cdecl TOnePassPointShadowProjectionPS<2,0,0>::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FGlobalShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Global,pFVar4,
                 L"FOnePassPointShadowProjectionPS2falsefalse",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"MainOnePassPointLightPS",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x128,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/ShadowProjectionPixelShader.usf");
      pFVar5 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"usf");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (iVar3 != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPaths::GetExtension(InSourceFilename) == L\"usf\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0x5d,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FGlobalShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`TOnePassPointShadowProjectionPS<2,0,0>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a17c0

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

FGlobalShaderType * __cdecl TOnePassPointShadowProjectionPS<3,1,0>::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FGlobalShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Global,pFVar4,
                 L"FOnePassPointShadowProjectionPS3truefalse",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"MainOnePassPointLightPS",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x128,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/ShadowProjectionPixelShader.usf");
      pFVar5 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"usf");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (iVar3 != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPaths::GetExtension(InSourceFilename) == L\"usf\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0x5d,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FGlobalShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`TOnePassPointShadowProjectionPS<3,1,0>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a19c0

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

FGlobalShaderType * __cdecl TOnePassPointShadowProjectionPS<3,0,1>::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FGlobalShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Global,pFVar4,
                 L"FOnePassPointShadowProjectionPS3falsetrue",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"MainOnePassPointLightPS",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x128,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/ShadowProjectionPixelShader.usf");
      pFVar5 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"usf");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (iVar3 != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPaths::GetExtension(InSourceFilename) == L\"usf\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0x5d,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FGlobalShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`TOnePassPointShadowProjectionPS<3,0,1>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a1bc0

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

FGlobalShaderType * __cdecl TOnePassPointShadowProjectionPS<3,0,0>::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FGlobalShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Global,pFVar4,
                 L"FOnePassPointShadowProjectionPS3falsefalse",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"MainOnePassPointLightPS",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x128,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/ShadowProjectionPixelShader.usf");
      pFVar5 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"usf");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (iVar3 != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPaths::GetExtension(InSourceFilename) == L\"usf\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0x5d,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FGlobalShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`TOnePassPointShadowProjectionPS<3,0,0>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a1dc0

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

FGlobalShaderType * __cdecl TOnePassPointShadowProjectionPS<4,1,0>::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FGlobalShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Global,pFVar4,
                 L"FOnePassPointShadowProjectionPS4truefalse",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"MainOnePassPointLightPS",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x128,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/ShadowProjectionPixelShader.usf");
      pFVar5 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"usf");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (iVar3 != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPaths::GetExtension(InSourceFilename) == L\"usf\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0x5d,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FGlobalShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`TOnePassPointShadowProjectionPS<4,1,0>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a1fc0

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

FGlobalShaderType * __cdecl TOnePassPointShadowProjectionPS<4,0,1>::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FGlobalShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Global,pFVar4,
                 L"FOnePassPointShadowProjectionPS4falsetrue",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"MainOnePassPointLightPS",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x128,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/ShadowProjectionPixelShader.usf");
      pFVar5 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"usf");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (iVar3 != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPaths::GetExtension(InSourceFilename) == L\"usf\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0x5d,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FGlobalShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`TOnePassPointShadowProjectionPS<4,0,1>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a21c0

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

FGlobalShaderType * __cdecl TOnePassPointShadowProjectionPS<4,0,0>::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FGlobalShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Global,pFVar4,
                 L"FOnePassPointShadowProjectionPS4falsefalse",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"MainOnePassPointLightPS",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x128,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/ShadowProjectionPixelShader.usf");
      pFVar5 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"usf");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (iVar3 != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPaths::GetExtension(InSourceFilename) == L\"usf\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0x5d,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FGlobalShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`TOnePassPointShadowProjectionPS<4,0,0>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a23c0

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

FGlobalShaderType * __cdecl TOnePassPointShadowProjectionPS<5,1,0>::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FGlobalShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Global,pFVar4,
                 L"FOnePassPointShadowProjectionPS5truefalse",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"MainOnePassPointLightPS",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x128,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/ShadowProjectionPixelShader.usf");
      pFVar5 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"usf");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (iVar3 != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPaths::GetExtension(InSourceFilename) == L\"usf\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0x5d,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FGlobalShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`TOnePassPointShadowProjectionPS<5,1,0>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a25c0

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

FGlobalShaderType * __cdecl TOnePassPointShadowProjectionPS<5,0,1>::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FGlobalShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Global,pFVar4,
                 L"FOnePassPointShadowProjectionPS5falsetrue",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"MainOnePassPointLightPS",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x128,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/ShadowProjectionPixelShader.usf");
      pFVar5 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"usf");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (iVar3 != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPaths::GetExtension(InSourceFilename) == L\"usf\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0x5d,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FGlobalShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`TOnePassPointShadowProjectionPS<5,0,1>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a27c0

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

FGlobalShaderType * __cdecl TOnePassPointShadowProjectionPS<5,0,0>::GetStaticType(void)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTypeLayoutDesc *pFVar4;
  FString *pFVar5;
  FGlobalShaderType *pFVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar4 = StaticGetTypeLayout();
      FShaderType::FShaderType
                ((FShaderType *)&::StaticType,Global,pFVar4,
                 L"FOnePassPointShadowProjectionPS5falsefalse",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"MainOnePassPointLightPS",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x128,(FShaderParametersMetadata *)0x0);
      ::StaticType._0_8_ = FGlobalShaderType::vftable;
      ::FString::FString(&local_28,L"/Engine/Private/ShadowProjectionPixelShader.usf");
      pFVar5 = FPaths::GetExtension(&local_18,&local_28,false);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp(pwVar7,L"usf");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (iVar3 != 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPaths::GetExtension(InSourceFilename) == L\"usf\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0x5d,
                           L"Incorrect virtual shader path extension for %s \'%s\': Only .usf files should be compiled."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FGlobalShaderType *)(*pcVar1)();
          return pFVar6;
        }
      }
      atexit(`TOnePassPointShadowProjectionPS<5,0,0>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 1455b0a00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TOnePassPointShadowProjectionPS<1,1,0>::GetTypeLayout(TOnePassPointShadowProjectionPS<1,1,0> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '(';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = ::u_FOnePassPointSh;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TOnePassPointShadowProjectionPS<1,1,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OnePassShadowParameters";
    DAT_15513e1f2 = Freeze::FindFieldNameLength(L"OnePassShadowParameters");
    _DAT_15513e1d0 = FOnePassPointShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e1d8 = ::TypeBuffer[0x10];
    DAT_15513e1d8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e1d8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e1d8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e1d8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e1d8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e1d8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e1d8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e1e0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e1e8 = 0xe0;
    _DAT_15513e1ec = 1;
    _DAT_15513e1f0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetTypeLayout @ 1455b0a10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TOnePassPointShadowProjectionPS<1,0,1>::GetTypeLayout(TOnePassPointShadowProjectionPS<1,0,1> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '(';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = ::u_FOnePassPointSh;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TOnePassPointShadowProjectionPS<1,0,1>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OnePassShadowParameters";
    DAT_15513e3d2 = Freeze::FindFieldNameLength(L"OnePassShadowParameters");
    _DAT_15513e3b0 = FOnePassPointShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e3b8 = ::TypeBuffer[0x10];
    DAT_15513e3b8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e3b8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e3b8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e3b8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e3b8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e3b8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e3b8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e3c0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e3c8 = 0xe0;
    _DAT_15513e3cc = 1;
    _DAT_15513e3d0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetTypeLayout @ 1455b0a20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TOnePassPointShadowProjectionPS<1,0,0>::GetTypeLayout(TOnePassPointShadowProjectionPS<1,0,0> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '(';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = ::u_FOnePassPointSh;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TOnePassPointShadowProjectionPS<1,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OnePassShadowParameters";
    DAT_15513e2e2 = Freeze::FindFieldNameLength(L"OnePassShadowParameters");
    _DAT_15513e2c0 = FOnePassPointShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e2c8 = ::TypeBuffer[0x10];
    DAT_15513e2c8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e2c8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e2c8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e2c8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e2c8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e2c8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e2c8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e2d0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e2d8 = 0xe0;
    _DAT_15513e2dc = 1;
    _DAT_15513e2e0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetTypeLayout @ 1455b0a30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TOnePassPointShadowProjectionPS<2,1,0>::GetTypeLayout(TOnePassPointShadowProjectionPS<2,1,0> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '(';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = ::u_FOnePassPointSh;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TOnePassPointShadowProjectionPS<2,1,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OnePassShadowParameters";
    DAT_15513e1c2 = Freeze::FindFieldNameLength(L"OnePassShadowParameters");
    _DAT_15513e1a0 = FOnePassPointShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e1a8 = ::TypeBuffer[0x10];
    DAT_15513e1a8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e1a8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e1a8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e1a8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e1a8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e1a8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e1a8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e1b0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e1b8 = 0xe0;
    _DAT_15513e1bc = 1;
    _DAT_15513e1c0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetTypeLayout @ 1455b0a40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TOnePassPointShadowProjectionPS<2,0,1>::GetTypeLayout(TOnePassPointShadowProjectionPS<2,0,1> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '(';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = ::u_FOnePassPointSh;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TOnePassPointShadowProjectionPS<2,0,1>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OnePassShadowParameters";
    DAT_15513e3a2 = Freeze::FindFieldNameLength(L"OnePassShadowParameters");
    _DAT_15513e380 = FOnePassPointShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e388 = ::TypeBuffer[0x10];
    DAT_15513e388_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e388_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e388_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e388_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e388_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e388_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e388_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e390 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e398 = 0xe0;
    _DAT_15513e39c = 1;
    _DAT_15513e3a0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetTypeLayout @ 1455b0a50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TOnePassPointShadowProjectionPS<2,0,0>::GetTypeLayout(TOnePassPointShadowProjectionPS<2,0,0> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '(';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = ::u_FOnePassPointSh;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TOnePassPointShadowProjectionPS<2,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OnePassShadowParameters";
    DAT_15513e2b2 = Freeze::FindFieldNameLength(L"OnePassShadowParameters");
    _DAT_15513e290 = FOnePassPointShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e298 = ::TypeBuffer[0x10];
    DAT_15513e298_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e298_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e298_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e298_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e298_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e298_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e298_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e2a0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e2a8 = 0xe0;
    _DAT_15513e2ac = 1;
    _DAT_15513e2b0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetTypeLayout @ 1455b0a60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TOnePassPointShadowProjectionPS<3,1,0>::GetTypeLayout(TOnePassPointShadowProjectionPS<3,1,0> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '(';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = ::u_FOnePassPointSh;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TOnePassPointShadowProjectionPS<3,1,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OnePassShadowParameters";
    DAT_15513e192 = Freeze::FindFieldNameLength(L"OnePassShadowParameters");
    _DAT_15513e170 = FOnePassPointShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e178 = ::TypeBuffer[0x10];
    DAT_15513e178_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e178_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e178_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e178_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e178_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e178_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e178_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e180 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e188 = 0xe0;
    _DAT_15513e18c = 1;
    _DAT_15513e190 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetTypeLayout @ 1455b0a70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TOnePassPointShadowProjectionPS<3,0,1>::GetTypeLayout(TOnePassPointShadowProjectionPS<3,0,1> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '(';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = ::u_FOnePassPointSh;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TOnePassPointShadowProjectionPS<3,0,1>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OnePassShadowParameters";
    DAT_15513e372 = Freeze::FindFieldNameLength(L"OnePassShadowParameters");
    _DAT_15513e350 = FOnePassPointShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e358 = ::TypeBuffer[0x10];
    DAT_15513e358_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e358_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e358_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e358_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e358_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e358_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e358_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e360 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e368 = 0xe0;
    _DAT_15513e36c = 1;
    _DAT_15513e370 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetTypeLayout @ 1455b0a80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TOnePassPointShadowProjectionPS<3,0,0>::GetTypeLayout(TOnePassPointShadowProjectionPS<3,0,0> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '(';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = ::u_FOnePassPointSh;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TOnePassPointShadowProjectionPS<3,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OnePassShadowParameters";
    DAT_15513e282 = Freeze::FindFieldNameLength(L"OnePassShadowParameters");
    _DAT_15513e260 = FOnePassPointShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e268 = ::TypeBuffer[0x10];
    DAT_15513e268_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e268_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e268_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e268_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e268_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e268_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e268_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e270 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e278 = 0xe0;
    _DAT_15513e27c = 1;
    _DAT_15513e280 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetTypeLayout @ 1455b0a90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TOnePassPointShadowProjectionPS<4,1,0>::GetTypeLayout(TOnePassPointShadowProjectionPS<4,1,0> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '(';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = ::u_FOnePassPointSh;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TOnePassPointShadowProjectionPS<4,1,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OnePassShadowParameters";
    DAT_15513e162 = Freeze::FindFieldNameLength(L"OnePassShadowParameters");
    _DAT_15513e140 = FOnePassPointShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e148 = ::TypeBuffer[0x10];
    DAT_15513e148_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e148_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e148_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e148_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e148_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e148_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e148_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e150 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e158 = 0xe0;
    _DAT_15513e15c = 1;
    _DAT_15513e160 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetTypeLayout @ 1455b0aa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TOnePassPointShadowProjectionPS<4,0,1>::GetTypeLayout(TOnePassPointShadowProjectionPS<4,0,1> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '(';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = ::u_FOnePassPointSh;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TOnePassPointShadowProjectionPS<4,0,1>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OnePassShadowParameters";
    DAT_15513e342 = Freeze::FindFieldNameLength(L"OnePassShadowParameters");
    _DAT_15513e320 = FOnePassPointShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e328 = ::TypeBuffer[0x10];
    DAT_15513e328_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e328_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e328_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e328_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e328_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e328_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e328_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e330 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e338 = 0xe0;
    _DAT_15513e33c = 1;
    _DAT_15513e340 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetTypeLayout @ 1455b0ab0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TOnePassPointShadowProjectionPS<4,0,0>::GetTypeLayout(TOnePassPointShadowProjectionPS<4,0,0> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '(';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = ::u_FOnePassPointSh;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TOnePassPointShadowProjectionPS<4,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OnePassShadowParameters";
    DAT_15513e252 = Freeze::FindFieldNameLength(L"OnePassShadowParameters");
    _DAT_15513e230 = FOnePassPointShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e238 = ::TypeBuffer[0x10];
    DAT_15513e238_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e238_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e238_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e238_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e238_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e238_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e238_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e240 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e248 = 0xe0;
    _DAT_15513e24c = 1;
    _DAT_15513e250 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetTypeLayout @ 1455b0ac0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TOnePassPointShadowProjectionPS<5,1,0>::GetTypeLayout(TOnePassPointShadowProjectionPS<5,1,0> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '(';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = ::u_FOnePassPointSh;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TOnePassPointShadowProjectionPS<5,1,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OnePassShadowParameters";
    DAT_15513e132 = Freeze::FindFieldNameLength(L"OnePassShadowParameters");
    _DAT_15513e110 = FOnePassPointShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e118 = ::TypeBuffer[0x10];
    DAT_15513e118_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e118_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e118_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e118_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e118_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e118_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e118_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e120 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e128 = 0xe0;
    _DAT_15513e12c = 1;
    _DAT_15513e130 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetTypeLayout @ 1455b0ad0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TOnePassPointShadowProjectionPS<5,0,1>::GetTypeLayout(TOnePassPointShadowProjectionPS<5,0,1> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '(';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = ::u_FOnePassPointSh;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TOnePassPointShadowProjectionPS<5,0,1>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OnePassShadowParameters";
    DAT_15513e312 = Freeze::FindFieldNameLength(L"OnePassShadowParameters");
    _DAT_15513e2f0 = FOnePassPointShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e2f8 = ::TypeBuffer[0x10];
    DAT_15513e2f8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e2f8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e2f8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e2f8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e2f8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e2f8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e2f8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e300 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e308 = 0xe0;
    _DAT_15513e30c = 1;
    _DAT_15513e310 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// GetTypeLayout @ 1455b0ae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TOnePassPointShadowProjectionPS<5,0,0>::GetTypeLayout(TOnePassPointShadowProjectionPS<5,0,0> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '(';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = ::u_FOnePassPointSh;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TOnePassPointShadowProjectionPS<5,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OnePassShadowParameters";
    DAT_15513e222 = Freeze::FindFieldNameLength(L"OnePassShadowParameters");
    _DAT_15513e200 = FOnePassPointShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e208 = ::TypeBuffer[0x10];
    DAT_15513e208_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e208_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e208_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e208_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e208_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e208_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e208_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e210 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e218 = 0xe0;
    _DAT_15513e21c = 1;
    _DAT_15513e220 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// Initialize @ 1455b2660

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TOnePassPointShadowProjectionPS<1,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,1,0>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "SubstrateGlobalParameters";
  DAT_155142a22 = Freeze::FindFieldNameLength(L"SubstrateGlobalParameters");
  _DAT_155142a00 = FShaderUniformBufferParameter::StaticGetTypeLayout();
  _DAT_155142a18 = 0x122;
  _DAT_155142a10 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142a1c = 1;
  _DAT_155142a20 = 0;
  _DAT_155142a08 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,1,0>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,1,0>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "HairStrandsParameters";
  DAT_155142752 = Freeze::FindFieldNameLength(L"HairStrandsParameters");
  _DAT_155142730 = FShaderUniformBufferParameter::StaticGetTypeLayout();
  _DAT_155142740 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142748 = 0x120;
  _DAT_15514274c = 1;
  _DAT_155142750 = 0;
  _DAT_155142738 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,1,0>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,1,0>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "PointLightProjParameters";
  DAT_155142482 = Freeze::FindFieldNameLength(L"PointLightProjParameters");
  _DAT_155142460 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155142470 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142478 = 0x11a;
  _DAT_15514247c = 1;
  _DAT_155142480 = 0;
  _DAT_155142468 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,1,0>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,1,0>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "PointLightDepthBias";
  DAT_1551421a2 = Freeze::FindFieldNameLength(L"PointLightDepthBias");
  _DAT_155142180 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155142190 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142198 = 0x114;
  _DAT_15514219c = 1;
  _DAT_1551421a0 = 0;
  _DAT_155142188 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,1,0>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,1,0>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowSharpen";
  DAT_155141eca = Freeze::FindFieldNameLength(L"ShadowSharpen");
  _DAT_155141ea8 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155141eb8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155141ec0 = 0x10e;
  _DAT_155141ec4 = 1;
  _DAT_155141ec8 = 0;
  _DAT_155141eb0 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,1,0>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowFadeFraction";
  DAT_155141592 = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
  _DAT_155141570 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155141580 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155141588 = 0x108;
  _DAT_15514158c = 1;
  _DAT_155141590 = 0;
  _DAT_155141578 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "LightPosition";
  DAT_155140d12 = Freeze::FindFieldNameLength(L"LightPosition");
  _DAT_155140cf0 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155140d00 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155140d08 = 0x102;
  _DAT_155140d0c = 1;
  _DAT_155140d10 = 0;
  _DAT_155140cf8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowDepthTextureSampler";
  DAT_15513ebfa = Freeze::FindFieldNameLength(L"ShadowDepthTextureSampler");
  _DAT_15513ebd8 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_15513ebe8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15513ebf0 = 0xfe;
  _DAT_15513ebf4 = 1;
  _DAT_15513ebf8 = 0;
  _DAT_15513ebe0 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// Initialize @ 1455b2980

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TOnePassPointShadowProjectionPS<1,0,1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,1>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "SubstrateGlobalParameters";
  DAT_155142c02 = Freeze::FindFieldNameLength(L"SubstrateGlobalParameters");
  _DAT_155142be0 = FShaderUniformBufferParameter::StaticGetTypeLayout();
  _DAT_155142bf8 = 0x122;
  _DAT_155142bf0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142bfc = 1;
  _DAT_155142c00 = 0;
  _DAT_155142be8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,1>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,1>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "HairStrandsParameters";
  DAT_155142932 = Freeze::FindFieldNameLength(L"HairStrandsParameters");
  _DAT_155142910 = FShaderUniformBufferParameter::StaticGetTypeLayout();
  _DAT_155142920 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142928 = 0x120;
  _DAT_15514292c = 1;
  _DAT_155142930 = 0;
  _DAT_155142918 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,1>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,1>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "PointLightProjParameters";
  DAT_155142662 = Freeze::FindFieldNameLength(L"PointLightProjParameters");
  _DAT_155142640 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155142650 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142658 = 0x11a;
  _DAT_15514265c = 1;
  _DAT_155142660 = 0;
  _DAT_155142648 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,1>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,1>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "PointLightDepthBias";
  DAT_155142382 = Freeze::FindFieldNameLength(L"PointLightDepthBias");
  _DAT_155142360 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155142370 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142378 = 0x114;
  _DAT_15514237c = 1;
  _DAT_155142380 = 0;
  _DAT_155142368 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,1>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,1>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowSharpen";
  DAT_1551420aa = Freeze::FindFieldNameLength(L"ShadowSharpen");
  _DAT_155142088 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155142098 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1551420a0 = 0x10e;
  _DAT_1551420a4 = 1;
  _DAT_1551420a8 = 0;
  _DAT_155142090 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,1>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,1>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowFadeFraction";
  DAT_155141772 = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
  _DAT_155141750 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155141760 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155141768 = 0x108;
  _DAT_15514176c = 1;
  _DAT_155141770 = 0;
  _DAT_155141758 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,1>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,1>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "LightPosition";
  DAT_155140ef2 = Freeze::FindFieldNameLength(L"LightPosition");
  _DAT_155140ed0 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155140ee0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155140ee8 = 0x102;
  _DAT_155140eec = 1;
  _DAT_155140ef0 = 0;
  _DAT_155140ed8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,1>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowDepthTextureSampler";
  DAT_15513edda = Freeze::FindFieldNameLength(L"ShadowDepthTextureSampler");
  _DAT_15513edb8 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_15513edc8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15513edd0 = 0xfe;
  _DAT_15513edd4 = 1;
  _DAT_15513edd8 = 0;
  _DAT_15513edc0 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// Initialize @ 1455b2ca0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TOnePassPointShadowProjectionPS<1,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,0>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "SubstrateGlobalParameters";
  DAT_155142b12 = Freeze::FindFieldNameLength(L"SubstrateGlobalParameters");
  _DAT_155142af0 = FShaderUniformBufferParameter::StaticGetTypeLayout();
  _DAT_155142b08 = 0x122;
  _DAT_155142b00 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142b0c = 1;
  _DAT_155142b10 = 0;
  _DAT_155142af8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,0>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,0>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "HairStrandsParameters";
  DAT_155142842 = Freeze::FindFieldNameLength(L"HairStrandsParameters");
  _DAT_155142820 = FShaderUniformBufferParameter::StaticGetTypeLayout();
  _DAT_155142830 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142838 = 0x120;
  _DAT_15514283c = 1;
  _DAT_155142840 = 0;
  _DAT_155142828 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,0>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,0>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "PointLightProjParameters";
  DAT_155142572 = Freeze::FindFieldNameLength(L"PointLightProjParameters");
  _DAT_155142550 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155142560 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142568 = 0x11a;
  _DAT_15514256c = 1;
  _DAT_155142570 = 0;
  _DAT_155142558 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,0>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,0>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "PointLightDepthBias";
  DAT_155142292 = Freeze::FindFieldNameLength(L"PointLightDepthBias");
  _DAT_155142270 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155142280 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142288 = 0x114;
  _DAT_15514228c = 1;
  _DAT_155142290 = 0;
  _DAT_155142278 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,0>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,0>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowSharpen";
  DAT_155141fba = Freeze::FindFieldNameLength(L"ShadowSharpen");
  _DAT_155141f98 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155141fa8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155141fb0 = 0x10e;
  _DAT_155141fb4 = 1;
  _DAT_155141fb8 = 0;
  _DAT_155141fa0 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,0>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowFadeFraction";
  DAT_155141682 = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
  _DAT_155141660 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155141670 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155141678 = 0x108;
  _DAT_15514167c = 1;
  _DAT_155141680 = 0;
  _DAT_155141668 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "LightPosition";
  DAT_155140e02 = Freeze::FindFieldNameLength(L"LightPosition");
  _DAT_155140de0 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155140df0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155140df8 = 0x102;
  _DAT_155140dfc = 1;
  _DAT_155140e00 = 0;
  _DAT_155140de8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowDepthTextureSampler";
  DAT_15513ecea = Freeze::FindFieldNameLength(L"ShadowDepthTextureSampler");
  _DAT_15513ecc8 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_15513ecd8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15513ece0 = 0xfe;
  _DAT_15513ece4 = 1;
  _DAT_15513ece8 = 0;
  _DAT_15513ecd0 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// Initialize @ 1455b2fc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TOnePassPointShadowProjectionPS<2,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,1,0>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "SubstrateGlobalParameters";
  DAT_1551429f2 = Freeze::FindFieldNameLength(L"SubstrateGlobalParameters");
  _DAT_1551429d0 = FShaderUniformBufferParameter::StaticGetTypeLayout();
  _DAT_1551429e8 = 0x122;
  _DAT_1551429e0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1551429ec = 1;
  _DAT_1551429f0 = 0;
  _DAT_1551429d8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,1,0>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,1,0>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "HairStrandsParameters";
  DAT_155142722 = Freeze::FindFieldNameLength(L"HairStrandsParameters");
  _DAT_155142700 = FShaderUniformBufferParameter::StaticGetTypeLayout();
  _DAT_155142710 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142718 = 0x120;
  _DAT_15514271c = 1;
  _DAT_155142720 = 0;
  _DAT_155142708 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,1,0>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,1,0>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "PointLightProjParameters";
  DAT_155142452 = Freeze::FindFieldNameLength(L"PointLightProjParameters");
  _DAT_155142430 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155142440 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142448 = 0x11a;
  _DAT_15514244c = 1;
  _DAT_155142450 = 0;
  _DAT_155142438 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,1,0>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,1,0>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "PointLightDepthBias";
  DAT_155142172 = Freeze::FindFieldNameLength(L"PointLightDepthBias");
  _DAT_155142150 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155142160 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142168 = 0x114;
  _DAT_15514216c = 1;
  _DAT_155142170 = 0;
  _DAT_155142158 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,1,0>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,1,0>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowSharpen";
  DAT_155141e9a = Freeze::FindFieldNameLength(L"ShadowSharpen");
  _DAT_155141e78 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155141e88 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155141e90 = 0x10e;
  _DAT_155141e94 = 1;
  _DAT_155141e98 = 0;
  _DAT_155141e80 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,1,0>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowFadeFraction";
  DAT_155141562 = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
  _DAT_155141540 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155141550 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155141558 = 0x108;
  _DAT_15514155c = 1;
  _DAT_155141560 = 0;
  _DAT_155141548 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "LightPosition";
  DAT_155140ce2 = Freeze::FindFieldNameLength(L"LightPosition");
  _DAT_155140cc0 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155140cd0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155140cd8 = 0x102;
  _DAT_155140cdc = 1;
  _DAT_155140ce0 = 0;
  _DAT_155140cc8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowDepthTextureSampler";
  DAT_15513ebca = Freeze::FindFieldNameLength(L"ShadowDepthTextureSampler");
  _DAT_15513eba8 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_15513ebb8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15513ebc0 = 0xfe;
  _DAT_15513ebc4 = 1;
  _DAT_15513ebc8 = 0;
  _DAT_15513ebb0 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// Initialize @ 1455b32e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TOnePassPointShadowProjectionPS<2,0,1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,1>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "SubstrateGlobalParameters";
  DAT_155142bd2 = Freeze::FindFieldNameLength(L"SubstrateGlobalParameters");
  _DAT_155142bb0 = FShaderUniformBufferParameter::StaticGetTypeLayout();
  _DAT_155142bc8 = 0x122;
  _DAT_155142bc0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142bcc = 1;
  _DAT_155142bd0 = 0;
  _DAT_155142bb8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,1>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,1>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "HairStrandsParameters";
  DAT_155142902 = Freeze::FindFieldNameLength(L"HairStrandsParameters");
  _DAT_1551428e0 = FShaderUniformBufferParameter::StaticGetTypeLayout();
  _DAT_1551428f0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1551428f8 = 0x120;
  _DAT_1551428fc = 1;
  _DAT_155142900 = 0;
  _DAT_1551428e8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,1>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,1>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "PointLightProjParameters";
  DAT_155142632 = Freeze::FindFieldNameLength(L"PointLightProjParameters");
  _DAT_155142610 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155142620 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142628 = 0x11a;
  _DAT_15514262c = 1;
  _DAT_155142630 = 0;
  _DAT_155142618 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,1>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,1>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "PointLightDepthBias";
  DAT_155142352 = Freeze::FindFieldNameLength(L"PointLightDepthBias");
  _DAT_155142330 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155142340 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142348 = 0x114;
  _DAT_15514234c = 1;
  _DAT_155142350 = 0;
  _DAT_155142338 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,1>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,1>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowSharpen";
  DAT_15514207a = Freeze::FindFieldNameLength(L"ShadowSharpen");
  _DAT_155142058 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155142068 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142070 = 0x10e;
  _DAT_155142074 = 1;
  _DAT_155142078 = 0;
  _DAT_155142060 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,1>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,1>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowFadeFraction";
  DAT_155141742 = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
  _DAT_155141720 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155141730 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155141738 = 0x108;
  _DAT_15514173c = 1;
  _DAT_155141740 = 0;
  _DAT_155141728 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,1>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,1>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "LightPosition";
  DAT_155140ec2 = Freeze::FindFieldNameLength(L"LightPosition");
  _DAT_155140ea0 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155140eb0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155140eb8 = 0x102;
  _DAT_155140ebc = 1;
  _DAT_155140ec0 = 0;
  _DAT_155140ea8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,1>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowDepthTextureSampler";
  DAT_15513edaa = Freeze::FindFieldNameLength(L"ShadowDepthTextureSampler");
  _DAT_15513ed88 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_15513ed98 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15513eda0 = 0xfe;
  _DAT_15513eda4 = 1;
  _DAT_15513eda8 = 0;
  _DAT_15513ed90 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// Initialize @ 1455b3600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TOnePassPointShadowProjectionPS<2,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,0>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "SubstrateGlobalParameters";
  DAT_155142ae2 = Freeze::FindFieldNameLength(L"SubstrateGlobalParameters");
  _DAT_155142ac0 = FShaderUniformBufferParameter::StaticGetTypeLayout();
  _DAT_155142ad8 = 0x122;
  _DAT_155142ad0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142adc = 1;
  _DAT_155142ae0 = 0;
  _DAT_155142ac8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,0>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,0>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "HairStrandsParameters";
  DAT_155142812 = Freeze::FindFieldNameLength(L"HairStrandsParameters");
  _DAT_1551427f0 = FShaderUniformBufferParameter::StaticGetTypeLayout();
  _DAT_155142800 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142808 = 0x120;
  _DAT_15514280c = 1;
  _DAT_155142810 = 0;
  _DAT_1551427f8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,0>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,0>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "PointLightProjParameters";
  DAT_155142542 = Freeze::FindFieldNameLength(L"PointLightProjParameters");
  _DAT_155142520 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155142530 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142538 = 0x11a;
  _DAT_15514253c = 1;
  _DAT_155142540 = 0;
  _DAT_155142528 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,0>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,0>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "PointLightDepthBias";
  DAT_155142262 = Freeze::FindFieldNameLength(L"PointLightDepthBias");
  _DAT_155142240 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155142250 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142258 = 0x114;
  _DAT_15514225c = 1;
  _DAT_155142260 = 0;
  _DAT_155142248 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,0>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,0>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowSharpen";
  DAT_155141f8a = Freeze::FindFieldNameLength(L"ShadowSharpen");
  _DAT_155141f68 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155141f78 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155141f80 = 0x10e;
  _DAT_155141f84 = 1;
  _DAT_155141f88 = 0;
  _DAT_155141f70 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,0>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowFadeFraction";
  DAT_155141652 = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
  _DAT_155141630 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155141640 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155141648 = 0x108;
  _DAT_15514164c = 1;
  _DAT_155141650 = 0;
  _DAT_155141638 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "LightPosition";
  DAT_155140dd2 = Freeze::FindFieldNameLength(L"LightPosition");
  _DAT_155140db0 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155140dc0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155140dc8 = 0x102;
  _DAT_155140dcc = 1;
  _DAT_155140dd0 = 0;
  _DAT_155140db8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowDepthTextureSampler";
  DAT_15513ecba = Freeze::FindFieldNameLength(L"ShadowDepthTextureSampler");
  _DAT_15513ec98 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_15513eca8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15513ecb0 = 0xfe;
  _DAT_15513ecb4 = 1;
  _DAT_15513ecb8 = 0;
  _DAT_15513eca0 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// Initialize @ 1455b3920

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TOnePassPointShadowProjectionPS<3,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,1,0>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "SubstrateGlobalParameters";
  DAT_1551429c2 = Freeze::FindFieldNameLength(L"SubstrateGlobalParameters");
  _DAT_1551429a0 = FShaderUniformBufferParameter::StaticGetTypeLayout();
  _DAT_1551429b8 = 0x122;
  _DAT_1551429b0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1551429bc = 1;
  _DAT_1551429c0 = 0;
  _DAT_1551429a8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,1,0>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,1,0>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "HairStrandsParameters";
  DAT_1551426f2 = Freeze::FindFieldNameLength(L"HairStrandsParameters");
  _DAT_1551426d0 = FShaderUniformBufferParameter::StaticGetTypeLayout();
  _DAT_1551426e0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1551426e8 = 0x120;
  _DAT_1551426ec = 1;
  _DAT_1551426f0 = 0;
  _DAT_1551426d8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,1,0>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,1,0>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "PointLightProjParameters";
  DAT_155142422 = Freeze::FindFieldNameLength(L"PointLightProjParameters");
  _DAT_155142400 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155142410 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142418 = 0x11a;
  _DAT_15514241c = 1;
  _DAT_155142420 = 0;
  _DAT_155142408 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,1,0>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,1,0>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "PointLightDepthBias";
  DAT_155142142 = Freeze::FindFieldNameLength(L"PointLightDepthBias");
  _DAT_155142120 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155142130 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142138 = 0x114;
  _DAT_15514213c = 1;
  _DAT_155142140 = 0;
  _DAT_155142128 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,1,0>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,1,0>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowSharpen";
  DAT_155141e6a = Freeze::FindFieldNameLength(L"ShadowSharpen");
  _DAT_155141e48 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155141e58 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155141e60 = 0x10e;
  _DAT_155141e64 = 1;
  _DAT_155141e68 = 0;
  _DAT_155141e50 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,1,0>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowFadeFraction";
  DAT_155141532 = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
  _DAT_155141510 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155141520 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155141528 = 0x108;
  _DAT_15514152c = 1;
  _DAT_155141530 = 0;
  _DAT_155141518 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "LightPosition";
  DAT_155140cb2 = Freeze::FindFieldNameLength(L"LightPosition");
  _DAT_155140c90 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155140ca0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155140ca8 = 0x102;
  _DAT_155140cac = 1;
  _DAT_155140cb0 = 0;
  _DAT_155140c98 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowDepthTextureSampler";
  DAT_15513eb9a = Freeze::FindFieldNameLength(L"ShadowDepthTextureSampler");
  _DAT_15513eb78 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_15513eb88 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15513eb90 = 0xfe;
  _DAT_15513eb94 = 1;
  _DAT_15513eb98 = 0;
  _DAT_15513eb80 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// Initialize @ 1455b3c40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TOnePassPointShadowProjectionPS<3,0,1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,1>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "SubstrateGlobalParameters";
  DAT_155142ba2 = Freeze::FindFieldNameLength(L"SubstrateGlobalParameters");
  _DAT_155142b80 = FShaderUniformBufferParameter::StaticGetTypeLayout();
  _DAT_155142b98 = 0x122;
  _DAT_155142b90 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142b9c = 1;
  _DAT_155142ba0 = 0;
  _DAT_155142b88 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,1>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,1>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "HairStrandsParameters";
  DAT_1551428d2 = Freeze::FindFieldNameLength(L"HairStrandsParameters");
  _DAT_1551428b0 = FShaderUniformBufferParameter::StaticGetTypeLayout();
  _DAT_1551428c0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1551428c8 = 0x120;
  _DAT_1551428cc = 1;
  _DAT_1551428d0 = 0;
  _DAT_1551428b8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,1>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,1>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "PointLightProjParameters";
  DAT_155142602 = Freeze::FindFieldNameLength(L"PointLightProjParameters");
  _DAT_1551425e0 = FShaderParameter::StaticGetTypeLayout();
  _DAT_1551425f0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1551425f8 = 0x11a;
  _DAT_1551425fc = 1;
  _DAT_155142600 = 0;
  _DAT_1551425e8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,1>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,1>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "PointLightDepthBias";
  DAT_155142322 = Freeze::FindFieldNameLength(L"PointLightDepthBias");
  _DAT_155142300 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155142310 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142318 = 0x114;
  _DAT_15514231c = 1;
  _DAT_155142320 = 0;
  _DAT_155142308 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,1>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,1>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowSharpen";
  DAT_15514204a = Freeze::FindFieldNameLength(L"ShadowSharpen");
  _DAT_155142028 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155142038 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142040 = 0x10e;
  _DAT_155142044 = 1;
  _DAT_155142048 = 0;
  _DAT_155142030 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,1>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,1>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowFadeFraction";
  DAT_155141712 = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
  _DAT_1551416f0 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155141700 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155141708 = 0x108;
  _DAT_15514170c = 1;
  _DAT_155141710 = 0;
  _DAT_1551416f8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,1>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,1>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "LightPosition";
  DAT_155140e92 = Freeze::FindFieldNameLength(L"LightPosition");
  _DAT_155140e70 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155140e80 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155140e88 = 0x102;
  _DAT_155140e8c = 1;
  _DAT_155140e90 = 0;
  _DAT_155140e78 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,1>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowDepthTextureSampler";
  DAT_15513ed7a = Freeze::FindFieldNameLength(L"ShadowDepthTextureSampler");
  _DAT_15513ed58 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_15513ed68 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15513ed70 = 0xfe;
  _DAT_15513ed74 = 1;
  _DAT_15513ed78 = 0;
  _DAT_15513ed60 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// Initialize @ 1455b3f60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TOnePassPointShadowProjectionPS<3,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,0>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "SubstrateGlobalParameters";
  DAT_155142ab2 = Freeze::FindFieldNameLength(L"SubstrateGlobalParameters");
  _DAT_155142a90 = FShaderUniformBufferParameter::StaticGetTypeLayout();
  _DAT_155142aa8 = 0x122;
  _DAT_155142aa0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142aac = 1;
  _DAT_155142ab0 = 0;
  _DAT_155142a98 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,0>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,0>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "HairStrandsParameters";
  DAT_1551427e2 = Freeze::FindFieldNameLength(L"HairStrandsParameters");
  _DAT_1551427c0 = FShaderUniformBufferParameter::StaticGetTypeLayout();
  _DAT_1551427d0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1551427d8 = 0x120;
  _DAT_1551427dc = 1;
  _DAT_1551427e0 = 0;
  _DAT_1551427c8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,0>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,0>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "PointLightProjParameters";
  DAT_155142512 = Freeze::FindFieldNameLength(L"PointLightProjParameters");
  _DAT_1551424f0 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155142500 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142508 = 0x11a;
  _DAT_15514250c = 1;
  _DAT_155142510 = 0;
  _DAT_1551424f8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,0>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,0>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "PointLightDepthBias";
  DAT_155142232 = Freeze::FindFieldNameLength(L"PointLightDepthBias");
  _DAT_155142210 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155142220 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142228 = 0x114;
  _DAT_15514222c = 1;
  _DAT_155142230 = 0;
  _DAT_155142218 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,0>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,0>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowSharpen";
  DAT_155141f5a = Freeze::FindFieldNameLength(L"ShadowSharpen");
  _DAT_155141f38 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155141f48 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155141f50 = 0x10e;
  _DAT_155141f54 = 1;
  _DAT_155141f58 = 0;
  _DAT_155141f40 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,0>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowFadeFraction";
  DAT_155141622 = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
  _DAT_155141600 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155141610 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155141618 = 0x108;
  _DAT_15514161c = 1;
  _DAT_155141620 = 0;
  _DAT_155141608 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "LightPosition";
  DAT_155140da2 = Freeze::FindFieldNameLength(L"LightPosition");
  _DAT_155140d80 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155140d90 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155140d98 = 0x102;
  _DAT_155140d9c = 1;
  _DAT_155140da0 = 0;
  _DAT_155140d88 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowDepthTextureSampler";
  DAT_15513ec8a = Freeze::FindFieldNameLength(L"ShadowDepthTextureSampler");
  _DAT_15513ec68 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_15513ec78 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15513ec80 = 0xfe;
  _DAT_15513ec84 = 1;
  _DAT_15513ec88 = 0;
  _DAT_15513ec70 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// Initialize @ 1455b4280

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TOnePassPointShadowProjectionPS<4,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,1,0>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "SubstrateGlobalParameters";
  DAT_155142992 = Freeze::FindFieldNameLength(L"SubstrateGlobalParameters");
  _DAT_155142970 = FShaderUniformBufferParameter::StaticGetTypeLayout();
  _DAT_155142988 = 0x122;
  _DAT_155142980 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15514298c = 1;
  _DAT_155142990 = 0;
  _DAT_155142978 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,1,0>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,1,0>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "HairStrandsParameters";
  DAT_1551426c2 = Freeze::FindFieldNameLength(L"HairStrandsParameters");
  _DAT_1551426a0 = FShaderUniformBufferParameter::StaticGetTypeLayout();
  _DAT_1551426b0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1551426b8 = 0x120;
  _DAT_1551426bc = 1;
  _DAT_1551426c0 = 0;
  _DAT_1551426a8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,1,0>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,1,0>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "PointLightProjParameters";
  DAT_1551423f2 = Freeze::FindFieldNameLength(L"PointLightProjParameters");
  _DAT_1551423d0 = FShaderParameter::StaticGetTypeLayout();
  _DAT_1551423e0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1551423e8 = 0x11a;
  _DAT_1551423ec = 1;
  _DAT_1551423f0 = 0;
  _DAT_1551423d8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,1,0>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,1,0>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "PointLightDepthBias";
  DAT_155142112 = Freeze::FindFieldNameLength(L"PointLightDepthBias");
  _DAT_1551420f0 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155142100 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142108 = 0x114;
  _DAT_15514210c = 1;
  _DAT_155142110 = 0;
  _DAT_1551420f8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,1,0>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,1,0>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowSharpen";
  DAT_155141e3a = Freeze::FindFieldNameLength(L"ShadowSharpen");
  _DAT_155141e18 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155141e28 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155141e30 = 0x10e;
  _DAT_155141e34 = 1;
  _DAT_155141e38 = 0;
  _DAT_155141e20 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,1,0>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowFadeFraction";
  DAT_155141502 = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
  _DAT_1551414e0 = FShaderParameter::StaticGetTypeLayout();
  _DAT_1551414f0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1551414f8 = 0x108;
  _DAT_1551414fc = 1;
  _DAT_155141500 = 0;
  _DAT_1551414e8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "LightPosition";
  DAT_155140c82 = Freeze::FindFieldNameLength(L"LightPosition");
  _DAT_155140c60 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155140c70 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155140c78 = 0x102;
  _DAT_155140c7c = 1;
  _DAT_155140c80 = 0;
  _DAT_155140c68 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowDepthTextureSampler";
  DAT_15513eb6a = Freeze::FindFieldNameLength(L"ShadowDepthTextureSampler");
  _DAT_15513eb48 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_15513eb58 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15513eb60 = 0xfe;
  _DAT_15513eb64 = 1;
  _DAT_15513eb68 = 0;
  _DAT_15513eb50 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// Initialize @ 1455b45a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TOnePassPointShadowProjectionPS<4,0,1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,1>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "SubstrateGlobalParameters";
  DAT_155142b72 = Freeze::FindFieldNameLength(L"SubstrateGlobalParameters");
  _DAT_155142b50 = FShaderUniformBufferParameter::StaticGetTypeLayout();
  _DAT_155142b68 = 0x122;
  _DAT_155142b60 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142b6c = 1;
  _DAT_155142b70 = 0;
  _DAT_155142b58 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,1>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,1>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "HairStrandsParameters";
  DAT_1551428a2 = Freeze::FindFieldNameLength(L"HairStrandsParameters");
  _DAT_155142880 = FShaderUniformBufferParameter::StaticGetTypeLayout();
  _DAT_155142890 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142898 = 0x120;
  _DAT_15514289c = 1;
  _DAT_1551428a0 = 0;
  _DAT_155142888 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,1>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,1>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "PointLightProjParameters";
  DAT_1551425d2 = Freeze::FindFieldNameLength(L"PointLightProjParameters");
  _DAT_1551425b0 = FShaderParameter::StaticGetTypeLayout();
  _DAT_1551425c0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1551425c8 = 0x11a;
  _DAT_1551425cc = 1;
  _DAT_1551425d0 = 0;
  _DAT_1551425b8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,1>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,1>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "PointLightDepthBias";
  DAT_1551422f2 = Freeze::FindFieldNameLength(L"PointLightDepthBias");
  _DAT_1551422d0 = FShaderParameter::StaticGetTypeLayout();
  _DAT_1551422e0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1551422e8 = 0x114;
  _DAT_1551422ec = 1;
  _DAT_1551422f0 = 0;
  _DAT_1551422d8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,1>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,1>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowSharpen";
  DAT_15514201a = Freeze::FindFieldNameLength(L"ShadowSharpen");
  _DAT_155141ff8 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155142008 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142010 = 0x10e;
  _DAT_155142014 = 1;
  _DAT_155142018 = 0;
  _DAT_155142000 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,1>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,1>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowFadeFraction";
  DAT_1551416e2 = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
  _DAT_1551416c0 = FShaderParameter::StaticGetTypeLayout();
  _DAT_1551416d0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1551416d8 = 0x108;
  _DAT_1551416dc = 1;
  _DAT_1551416e0 = 0;
  _DAT_1551416c8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,1>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,1>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "LightPosition";
  DAT_155140e62 = Freeze::FindFieldNameLength(L"LightPosition");
  _DAT_155140e40 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155140e50 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155140e58 = 0x102;
  _DAT_155140e5c = 1;
  _DAT_155140e60 = 0;
  _DAT_155140e48 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,1>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowDepthTextureSampler";
  DAT_15513ed4a = Freeze::FindFieldNameLength(L"ShadowDepthTextureSampler");
  _DAT_15513ed28 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_15513ed38 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15513ed40 = 0xfe;
  _DAT_15513ed44 = 1;
  _DAT_15513ed48 = 0;
  _DAT_15513ed30 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// Initialize @ 1455b48c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TOnePassPointShadowProjectionPS<4,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,0>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "SubstrateGlobalParameters";
  DAT_155142a82 = Freeze::FindFieldNameLength(L"SubstrateGlobalParameters");
  _DAT_155142a60 = FShaderUniformBufferParameter::StaticGetTypeLayout();
  _DAT_155142a78 = 0x122;
  _DAT_155142a70 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142a7c = 1;
  _DAT_155142a80 = 0;
  _DAT_155142a68 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,0>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,0>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "HairStrandsParameters";
  DAT_1551427b2 = Freeze::FindFieldNameLength(L"HairStrandsParameters");
  _DAT_155142790 = FShaderUniformBufferParameter::StaticGetTypeLayout();
  _DAT_1551427a0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1551427a8 = 0x120;
  _DAT_1551427ac = 1;
  _DAT_1551427b0 = 0;
  _DAT_155142798 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,0>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,0>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "PointLightProjParameters";
  DAT_1551424e2 = Freeze::FindFieldNameLength(L"PointLightProjParameters");
  _DAT_1551424c0 = FShaderParameter::StaticGetTypeLayout();
  _DAT_1551424d0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1551424d8 = 0x11a;
  _DAT_1551424dc = 1;
  _DAT_1551424e0 = 0;
  _DAT_1551424c8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,0>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,0>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "PointLightDepthBias";
  DAT_155142202 = Freeze::FindFieldNameLength(L"PointLightDepthBias");
  _DAT_1551421e0 = FShaderParameter::StaticGetTypeLayout();
  _DAT_1551421f0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1551421f8 = 0x114;
  _DAT_1551421fc = 1;
  _DAT_155142200 = 0;
  _DAT_1551421e8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,0>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,0>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowSharpen";
  DAT_155141f2a = Freeze::FindFieldNameLength(L"ShadowSharpen");
  _DAT_155141f08 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155141f18 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155141f20 = 0x10e;
  _DAT_155141f24 = 1;
  _DAT_155141f28 = 0;
  _DAT_155141f10 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,0>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowFadeFraction";
  DAT_1551415f2 = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
  _DAT_1551415d0 = FShaderParameter::StaticGetTypeLayout();
  _DAT_1551415e0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1551415e8 = 0x108;
  _DAT_1551415ec = 1;
  _DAT_1551415f0 = 0;
  _DAT_1551415d8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "LightPosition";
  DAT_155140d72 = Freeze::FindFieldNameLength(L"LightPosition");
  _DAT_155140d50 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155140d60 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155140d68 = 0x102;
  _DAT_155140d6c = 1;
  _DAT_155140d70 = 0;
  _DAT_155140d58 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowDepthTextureSampler";
  DAT_15513ec5a = Freeze::FindFieldNameLength(L"ShadowDepthTextureSampler");
  _DAT_15513ec38 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_15513ec48 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15513ec50 = 0xfe;
  _DAT_15513ec54 = 1;
  _DAT_15513ec58 = 0;
  _DAT_15513ec40 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// Initialize @ 1455b4be0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TOnePassPointShadowProjectionPS<5,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,1,0>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "SubstrateGlobalParameters";
  DAT_155142962 = Freeze::FindFieldNameLength(L"SubstrateGlobalParameters");
  _DAT_155142940 = FShaderUniformBufferParameter::StaticGetTypeLayout();
  _DAT_155142958 = 0x122;
  _DAT_155142950 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15514295c = 1;
  _DAT_155142960 = 0;
  _DAT_155142948 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,1,0>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,1,0>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "HairStrandsParameters";
  DAT_155142692 = Freeze::FindFieldNameLength(L"HairStrandsParameters");
  _DAT_155142670 = FShaderUniformBufferParameter::StaticGetTypeLayout();
  _DAT_155142680 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142688 = 0x120;
  _DAT_15514268c = 1;
  _DAT_155142690 = 0;
  _DAT_155142678 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,1,0>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,1,0>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "PointLightProjParameters";
  DAT_1551423c2 = Freeze::FindFieldNameLength(L"PointLightProjParameters");
  _DAT_1551423a0 = FShaderParameter::StaticGetTypeLayout();
  _DAT_1551423b0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1551423b8 = 0x11a;
  _DAT_1551423bc = 1;
  _DAT_1551423c0 = 0;
  _DAT_1551423a8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,1,0>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,1,0>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "PointLightDepthBias";
  DAT_1551420e2 = Freeze::FindFieldNameLength(L"PointLightDepthBias");
  _DAT_1551420c0 = FShaderParameter::StaticGetTypeLayout();
  _DAT_1551420d0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1551420d8 = 0x114;
  _DAT_1551420dc = 1;
  _DAT_1551420e0 = 0;
  _DAT_1551420c8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,1,0>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,1,0>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowSharpen";
  DAT_155141e0a = Freeze::FindFieldNameLength(L"ShadowSharpen");
  _DAT_155141de8 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155141df8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155141e00 = 0x10e;
  _DAT_155141e04 = 1;
  _DAT_155141e08 = 0;
  _DAT_155141df0 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,1,0>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowFadeFraction";
  DAT_1551414d2 = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
  _DAT_1551414b0 = FShaderParameter::StaticGetTypeLayout();
  _DAT_1551414c0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1551414c8 = 0x108;
  _DAT_1551414cc = 1;
  _DAT_1551414d0 = 0;
  _DAT_1551414b8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "LightPosition";
  DAT_155140c52 = Freeze::FindFieldNameLength(L"LightPosition");
  _DAT_155140c30 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155140c40 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155140c48 = 0x102;
  _DAT_155140c4c = 1;
  _DAT_155140c50 = 0;
  _DAT_155140c38 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowDepthTextureSampler";
  DAT_15513eb3a = Freeze::FindFieldNameLength(L"ShadowDepthTextureSampler");
  _DAT_15513eb18 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_15513eb28 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15513eb30 = 0xfe;
  _DAT_15513eb34 = 1;
  _DAT_15513eb38 = 0;
  _DAT_15513eb20 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// Initialize @ 1455b4f00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TOnePassPointShadowProjectionPS<5,0,1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,1>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "SubstrateGlobalParameters";
  DAT_155142b42 = Freeze::FindFieldNameLength(L"SubstrateGlobalParameters");
  _DAT_155142b20 = FShaderUniformBufferParameter::StaticGetTypeLayout();
  _DAT_155142b38 = 0x122;
  _DAT_155142b30 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142b3c = 1;
  _DAT_155142b40 = 0;
  _DAT_155142b28 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,1>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,1>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "HairStrandsParameters";
  DAT_155142872 = Freeze::FindFieldNameLength(L"HairStrandsParameters");
  _DAT_155142850 = FShaderUniformBufferParameter::StaticGetTypeLayout();
  _DAT_155142860 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142868 = 0x120;
  _DAT_15514286c = 1;
  _DAT_155142870 = 0;
  _DAT_155142858 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,1>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,1>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "PointLightProjParameters";
  DAT_1551425a2 = Freeze::FindFieldNameLength(L"PointLightProjParameters");
  _DAT_155142580 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155142590 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142598 = 0x11a;
  _DAT_15514259c = 1;
  _DAT_1551425a0 = 0;
  _DAT_155142588 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,1>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,1>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "PointLightDepthBias";
  DAT_1551422c2 = Freeze::FindFieldNameLength(L"PointLightDepthBias");
  _DAT_1551422a0 = FShaderParameter::StaticGetTypeLayout();
  _DAT_1551422b0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1551422b8 = 0x114;
  _DAT_1551422bc = 1;
  _DAT_1551422c0 = 0;
  _DAT_1551422a8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,1>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,1>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowSharpen";
  DAT_155141fea = Freeze::FindFieldNameLength(L"ShadowSharpen");
  _DAT_155141fc8 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155141fd8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155141fe0 = 0x10e;
  _DAT_155141fe4 = 1;
  _DAT_155141fe8 = 0;
  _DAT_155141fd0 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,1>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,1>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowFadeFraction";
  DAT_1551416b2 = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
  _DAT_155141690 = FShaderParameter::StaticGetTypeLayout();
  _DAT_1551416a0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1551416a8 = 0x108;
  _DAT_1551416ac = 1;
  _DAT_1551416b0 = 0;
  _DAT_155141698 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,1>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,1>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "LightPosition";
  DAT_155140e32 = Freeze::FindFieldNameLength(L"LightPosition");
  _DAT_155140e10 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155140e20 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155140e28 = 0x102;
  _DAT_155140e2c = 1;
  _DAT_155140e30 = 0;
  _DAT_155140e18 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,1>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowDepthTextureSampler";
  DAT_15513ed1a = Freeze::FindFieldNameLength(L"ShadowDepthTextureSampler");
  _DAT_15513ecf8 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_15513ed08 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15513ed10 = 0xfe;
  _DAT_15513ed14 = 1;
  _DAT_15513ed18 = 0;
  _DAT_15513ed00 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// Initialize @ 1455b5220

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
TOnePassPointShadowProjectionPS<5,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,0>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "SubstrateGlobalParameters";
  DAT_155142a52 = Freeze::FindFieldNameLength(L"SubstrateGlobalParameters");
  _DAT_155142a30 = FShaderUniformBufferParameter::StaticGetTypeLayout();
  _DAT_155142a48 = 0x122;
  _DAT_155142a40 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142a4c = 1;
  _DAT_155142a50 = 0;
  _DAT_155142a38 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,0>::InternalLinkType<9>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,0>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "HairStrandsParameters";
  DAT_155142782 = Freeze::FindFieldNameLength(L"HairStrandsParameters");
  _DAT_155142760 = FShaderUniformBufferParameter::StaticGetTypeLayout();
  _DAT_155142770 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155142778 = 0x120;
  _DAT_15514277c = 1;
  _DAT_155142780 = 0;
  _DAT_155142768 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,0>::InternalLinkType<8>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,0>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "PointLightProjParameters";
  DAT_1551424b2 = Freeze::FindFieldNameLength(L"PointLightProjParameters");
  _DAT_155142490 = FShaderParameter::StaticGetTypeLayout();
  _DAT_1551424a0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1551424a8 = 0x11a;
  _DAT_1551424ac = 1;
  _DAT_1551424b0 = 0;
  _DAT_155142498 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,0>::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,0>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "PointLightDepthBias";
  DAT_1551421d2 = Freeze::FindFieldNameLength(L"PointLightDepthBias");
  _DAT_1551421b0 = FShaderParameter::StaticGetTypeLayout();
  _DAT_1551421c0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1551421c8 = 0x114;
  _DAT_1551421cc = 1;
  _DAT_1551421d0 = 0;
  _DAT_1551421b8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,0>::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,0>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowSharpen";
  DAT_155141efa = Freeze::FindFieldNameLength(L"ShadowSharpen");
  _DAT_155141ed8 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155141ee8 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155141ef0 = 0x10e;
  _DAT_155141ef4 = 1;
  _DAT_155141ef8 = 0;
  _DAT_155141ee0 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,0>::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowFadeFraction";
  DAT_1551415c2 = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
  _DAT_1551415a0 = FShaderParameter::StaticGetTypeLayout();
  _DAT_1551415b0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1551415b8 = 0x108;
  _DAT_1551415bc = 1;
  _DAT_1551415c0 = 0;
  _DAT_1551415a8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "LightPosition";
  DAT_155140d42 = Freeze::FindFieldNameLength(L"LightPosition");
  _DAT_155140d20 = FShaderParameter::StaticGetTypeLayout();
  _DAT_155140d30 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155140d38 = 0x102;
  _DAT_155140d3c = 1;
  _DAT_155140d40 = 0;
  _DAT_155140d28 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShadowDepthTextureSampler";
  DAT_15513ec2a = Freeze::FindFieldNameLength(L"ShadowDepthTextureSampler");
  _DAT_15513ec08 = FShaderResourceParameter::StaticGetTypeLayout();
  _DAT_15513ec18 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15513ec20 = 0xfe;
  _DAT_15513ec24 = 1;
  _DAT_15513ec28 = 0;
  _DAT_15513ec10 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// InternalDestroy @ 1455b5da0

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

void __cdecl
TOnePassPointShadowProjectionPS<1,1,0>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x128);
  return;
}

// InternalDestroy @ 1455b5de0

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

void __cdecl
TOnePassPointShadowProjectionPS<1,0,1>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x128);
  return;
}

// InternalDestroy @ 1455b5e20

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

void __cdecl
TOnePassPointShadowProjectionPS<1,0,0>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x128);
  return;
}

// InternalDestroy @ 1455b5e60

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

void __cdecl
TOnePassPointShadowProjectionPS<2,1,0>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x128);
  return;
}

// InternalDestroy @ 1455b5ea0

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

void __cdecl
TOnePassPointShadowProjectionPS<2,0,1>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x128);
  return;
}

// InternalDestroy @ 1455b5ee0

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

void __cdecl
TOnePassPointShadowProjectionPS<2,0,0>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x128);
  return;
}

// InternalDestroy @ 1455b5f20

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

void __cdecl
TOnePassPointShadowProjectionPS<3,1,0>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x128);
  return;
}

// InternalDestroy @ 1455b5f60

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

void __cdecl
TOnePassPointShadowProjectionPS<3,0,1>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x128);
  return;
}

// InternalDestroy @ 1455b5fa0

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

void __cdecl
TOnePassPointShadowProjectionPS<3,0,0>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x128);
  return;
}

// InternalDestroy @ 1455b5fe0

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

void __cdecl
TOnePassPointShadowProjectionPS<4,1,0>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x128);
  return;
}

// InternalDestroy @ 1455b6020

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

void __cdecl
TOnePassPointShadowProjectionPS<4,0,1>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x128);
  return;
}

// InternalDestroy @ 1455b6060

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

void __cdecl
TOnePassPointShadowProjectionPS<4,0,0>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x128);
  return;
}

// InternalDestroy @ 1455b60a0

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

void __cdecl
TOnePassPointShadowProjectionPS<5,1,0>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x128);
  return;
}

// InternalDestroy @ 1455b60e0

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

void __cdecl
TOnePassPointShadowProjectionPS<5,0,1>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x128);
  return;
}

// InternalDestroy @ 1455b6120

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

void __cdecl
TOnePassPointShadowProjectionPS<5,0,0>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x128);
  return;
}

// SetParameters @ 1455ca410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TOnePassPointShadowProjectionPS<1,1,0>::SetParameters
          (TOnePassPointShadowProjectionPS<1,1,0> *this,FRHIBatchedShaderParameters *param_1,
          int param_2,FViewInfo *param_3,FProjectedShadowInfo *param_4,FRHIUniformBuffer *param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  TRDGUniformBuffer<FSubstrateGlobalUniformParameters> *this_00;
  TUniformBufferRef<FSubstrateGlobalUniformParameters> TVar11;
  FShaderParametersMetadata *pFVar12;
  FHashedName FVar13;
  FShaderUniformBufferParameter *pFVar14;
  ForElementType<float> FVar15;
  uint uVar16;
  double dVar17;
  float local_res8;
  float local_resc;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FRHIResource *local_res20;
  FHashedName local_a8;
  FHashedName local_a0;
  float local_98;
  float local_94;
  float local_90;
  double local_88;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  
  pFVar9 = param_4;
  dVar5 = (double)param_3->_padding_;
  dVar6 = (double)param_3->_padding_;
  dVar17 = (double)param_3->_padding_;
  FOnePassPointShadowProjectionShaderParameters::Set
            (&this->OnePassShadowParameters,param_1,(FSceneView *)param_3,param_4);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  local_6c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  fVar8 = __real_3f800000;
  uVar1 = (this->LightPosition).NumBytes;
  uVar16 = (uint)uVar1;
  if (0x10 < uVar1) {
    uVar16 = 0x10;
  }
  local_6c = __real_3f800000 / local_6c;
  local_78 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_74 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_70 = (float)(dVar17 + (pFVar2->Position).field0_0x0._s_0.Z);
  local_88 = dVar17;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar16,&local_78);
  }
  uVar16 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar16 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar16 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    pFVar7 = param_4;
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  param_4._4_4_ = (undefined4)((ulonglong)pFVar7 >> 0x20);
  uVar1 = (this->ShadowFadeFraction).NumBytes;
  uVar16 = (uint)uVar1;
  FVar15 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar16 = 4;
  }
  if (uVar16 != 0) {
    if (FVar15 == (ForElementType<float>)0x0) {
      FVar15 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar16,
               (void *)((longlong)FVar15 + (longlong)param_2 * 4));
  }
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar16 = (uint)uVar1;
  if (4 < uVar1) {
    uVar16 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + fVar8;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar16,&param_4);
  }
  dVar17 = __real_3ff0000000000000 / (pFVar9->OnePassShadowFaceProjectionMatrix).M[3][2];
  uVar1 = (this->PointLightDepthBias).NumBytes;
  uVar16 = (uint)uVar1;
  if (0xc < uVar1) {
    uVar16 = 0xc;
  }
  local_res8 = (float)dVar17;
  local_resc = (float)(dVar17 * (pFVar9->OnePassShadowFaceProjectionMatrix).M[2][2]);
  local_98 = pFVar9->ShaderDepthBias;
  local_94 = pFVar9->ShaderSlopeDepthBias;
  local_90 = pFVar9->ShaderMaxSlopeDepthBias;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->PointLightDepthBias).BufferIndex,
               (uint)(this->PointLightDepthBias).BaseIndex,uVar16,&local_98);
  }
  uVar1 = (this->PointLightProjParameters).NumBytes;
  uVar16 = (uint)uVar1;
  if (8 < uVar1) {
    uVar16 = 8;
  }
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->PointLightProjParameters).BufferIndex,
               (uint)(this->PointLightProjParameters).BaseIndex,uVar16,&local_res8);
  }
  if ((this->HairStrandsParameters).BaseIndex != 0xffff) {
    SetUniformBufferParameter(param_1,&this->HairStrandsParameters,param_5);
  }
  if ((this->SubstrateGlobalParameters).BaseIndex != 0xffff) {
    this_00 = Substrate::BindSubstrateGlobalUniformParameters(param_3);
    TVar11 = TRDGUniformBuffer<FSubstrateGlobalUniformParameters>::GetRHIRef(this_00);
    SetUniformBufferParameter
              (param_1,&this->SubstrateGlobalParameters,*(FRHIUniformBuffer **)TVar11);
    if (local_res20 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res20);
    }
  }
  plVar3 = *(longlong **)(param_3->_padding_ + 0x40);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x420))();
  }
  SetSamplerParameter(param_1,&this->ShadowDepthTextureSampler,
                      TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                      ::StaticResource.StateRHI.Reference);
  pFVar12 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_a8,&pFVar12->ShaderVariableHashedName);
  FVar13.Hash = (ulong64)FHashedName::FHashedName(&local_a0,&local_a8);
  pFVar14 = FShader::GetUniformBufferParameter((FShader *)this,FVar13);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar14->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    bVar10 = LightFunctionAtlas::IsEnabled(param_3,DeferredLighting);
    SetDeferredLightParameters
              (param_1,local_res18,pFVar9->LightSceneInfo,(FSceneView *)param_3,bVar10);
  }
  return;
}

// SetParameters @ 1455ca810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TOnePassPointShadowProjectionPS<1,0,1>::SetParameters
          (TOnePassPointShadowProjectionPS<1,0,1> *this,FRHIBatchedShaderParameters *param_1,
          int param_2,FViewInfo *param_3,FProjectedShadowInfo *param_4,FRHIUniformBuffer *param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  TRDGUniformBuffer<FSubstrateGlobalUniformParameters> *this_00;
  TUniformBufferRef<FSubstrateGlobalUniformParameters> TVar11;
  FShaderParametersMetadata *pFVar12;
  FHashedName FVar13;
  FShaderUniformBufferParameter *pFVar14;
  ForElementType<float> FVar15;
  uint uVar16;
  double dVar17;
  float local_res8;
  float local_resc;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FRHIResource *local_res20;
  FHashedName local_a8;
  FHashedName local_a0;
  float local_98;
  float local_94;
  float local_90;
  double local_88;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  
  pFVar9 = param_4;
  dVar5 = (double)param_3->_padding_;
  dVar6 = (double)param_3->_padding_;
  dVar17 = (double)param_3->_padding_;
  FOnePassPointShadowProjectionShaderParameters::Set
            (&this->OnePassShadowParameters,param_1,(FSceneView *)param_3,param_4);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  local_6c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  fVar8 = __real_3f800000;
  uVar1 = (this->LightPosition).NumBytes;
  uVar16 = (uint)uVar1;
  if (0x10 < uVar1) {
    uVar16 = 0x10;
  }
  local_6c = __real_3f800000 / local_6c;
  local_78 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_74 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_70 = (float)(dVar17 + (pFVar2->Position).field0_0x0._s_0.Z);
  local_88 = dVar17;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar16,&local_78);
  }
  uVar16 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar16 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar16 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    pFVar7 = param_4;
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  param_4._4_4_ = (undefined4)((ulonglong)pFVar7 >> 0x20);
  uVar1 = (this->ShadowFadeFraction).NumBytes;
  uVar16 = (uint)uVar1;
  FVar15 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar16 = 4;
  }
  if (uVar16 != 0) {
    if (FVar15 == (ForElementType<float>)0x0) {
      FVar15 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar16,
               (void *)((longlong)FVar15 + (longlong)param_2 * 4));
  }
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar16 = (uint)uVar1;
  if (4 < uVar1) {
    uVar16 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + fVar8;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar16,&param_4);
  }
  dVar17 = __real_3ff0000000000000 / (pFVar9->OnePassShadowFaceProjectionMatrix).M[3][2];
  uVar1 = (this->PointLightDepthBias).NumBytes;
  uVar16 = (uint)uVar1;
  if (0xc < uVar1) {
    uVar16 = 0xc;
  }
  local_res8 = (float)dVar17;
  local_resc = (float)(dVar17 * (pFVar9->OnePassShadowFaceProjectionMatrix).M[2][2]);
  local_98 = pFVar9->ShaderDepthBias;
  local_94 = pFVar9->ShaderSlopeDepthBias;
  local_90 = pFVar9->ShaderMaxSlopeDepthBias;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->PointLightDepthBias).BufferIndex,
               (uint)(this->PointLightDepthBias).BaseIndex,uVar16,&local_98);
  }
  uVar1 = (this->PointLightProjParameters).NumBytes;
  uVar16 = (uint)uVar1;
  if (8 < uVar1) {
    uVar16 = 8;
  }
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->PointLightProjParameters).BufferIndex,
               (uint)(this->PointLightProjParameters).BaseIndex,uVar16,&local_res8);
  }
  if ((this->HairStrandsParameters).BaseIndex != 0xffff) {
    SetUniformBufferParameter(param_1,&this->HairStrandsParameters,param_5);
  }
  if ((this->SubstrateGlobalParameters).BaseIndex != 0xffff) {
    this_00 = Substrate::BindSubstrateGlobalUniformParameters(param_3);
    TVar11 = TRDGUniformBuffer<FSubstrateGlobalUniformParameters>::GetRHIRef(this_00);
    SetUniformBufferParameter
              (param_1,&this->SubstrateGlobalParameters,*(FRHIUniformBuffer **)TVar11);
    if (local_res20 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res20);
    }
  }
  plVar3 = *(longlong **)(param_3->_padding_ + 0x40);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x420))();
  }
  SetSamplerParameter(param_1,&this->ShadowDepthTextureSampler,
                      TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                      ::StaticResource.StateRHI.Reference);
  pFVar12 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_a8,&pFVar12->ShaderVariableHashedName);
  FVar13.Hash = (ulong64)FHashedName::FHashedName(&local_a0,&local_a8);
  pFVar14 = FShader::GetUniformBufferParameter((FShader *)this,FVar13);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar14->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    bVar10 = LightFunctionAtlas::IsEnabled(param_3,DeferredLighting);
    SetDeferredLightParameters
              (param_1,local_res18,pFVar9->LightSceneInfo,(FSceneView *)param_3,bVar10);
  }
  return;
}

// SetParameters @ 1455cac10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TOnePassPointShadowProjectionPS<1,0,0>::SetParameters
          (TOnePassPointShadowProjectionPS<1,0,0> *this,FRHIBatchedShaderParameters *param_1,
          int param_2,FViewInfo *param_3,FProjectedShadowInfo *param_4,FRHIUniformBuffer *param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  TRDGUniformBuffer<FSubstrateGlobalUniformParameters> *this_00;
  TUniformBufferRef<FSubstrateGlobalUniformParameters> TVar11;
  FShaderParametersMetadata *pFVar12;
  FHashedName FVar13;
  FShaderUniformBufferParameter *pFVar14;
  ForElementType<float> FVar15;
  uint uVar16;
  double dVar17;
  float local_res8;
  float local_resc;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FRHIResource *local_res20;
  FHashedName local_a8;
  FHashedName local_a0;
  float local_98;
  float local_94;
  float local_90;
  double local_88;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  
  pFVar9 = param_4;
  dVar5 = (double)param_3->_padding_;
  dVar6 = (double)param_3->_padding_;
  dVar17 = (double)param_3->_padding_;
  FOnePassPointShadowProjectionShaderParameters::Set
            (&this->OnePassShadowParameters,param_1,(FSceneView *)param_3,param_4);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  local_6c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  fVar8 = __real_3f800000;
  uVar1 = (this->LightPosition).NumBytes;
  uVar16 = (uint)uVar1;
  if (0x10 < uVar1) {
    uVar16 = 0x10;
  }
  local_6c = __real_3f800000 / local_6c;
  local_78 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_74 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_70 = (float)(dVar17 + (pFVar2->Position).field0_0x0._s_0.Z);
  local_88 = dVar17;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar16,&local_78);
  }
  uVar16 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar16 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar16 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    pFVar7 = param_4;
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  param_4._4_4_ = (undefined4)((ulonglong)pFVar7 >> 0x20);
  uVar1 = (this->ShadowFadeFraction).NumBytes;
  uVar16 = (uint)uVar1;
  FVar15 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar16 = 4;
  }
  if (uVar16 != 0) {
    if (FVar15 == (ForElementType<float>)0x0) {
      FVar15 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar16,
               (void *)((longlong)FVar15 + (longlong)param_2 * 4));
  }
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar16 = (uint)uVar1;
  if (4 < uVar1) {
    uVar16 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + fVar8;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar16,&param_4);
  }
  dVar17 = __real_3ff0000000000000 / (pFVar9->OnePassShadowFaceProjectionMatrix).M[3][2];
  uVar1 = (this->PointLightDepthBias).NumBytes;
  uVar16 = (uint)uVar1;
  if (0xc < uVar1) {
    uVar16 = 0xc;
  }
  local_res8 = (float)dVar17;
  local_resc = (float)(dVar17 * (pFVar9->OnePassShadowFaceProjectionMatrix).M[2][2]);
  local_98 = pFVar9->ShaderDepthBias;
  local_94 = pFVar9->ShaderSlopeDepthBias;
  local_90 = pFVar9->ShaderMaxSlopeDepthBias;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->PointLightDepthBias).BufferIndex,
               (uint)(this->PointLightDepthBias).BaseIndex,uVar16,&local_98);
  }
  uVar1 = (this->PointLightProjParameters).NumBytes;
  uVar16 = (uint)uVar1;
  if (8 < uVar1) {
    uVar16 = 8;
  }
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->PointLightProjParameters).BufferIndex,
               (uint)(this->PointLightProjParameters).BaseIndex,uVar16,&local_res8);
  }
  if ((this->HairStrandsParameters).BaseIndex != 0xffff) {
    SetUniformBufferParameter(param_1,&this->HairStrandsParameters,param_5);
  }
  if ((this->SubstrateGlobalParameters).BaseIndex != 0xffff) {
    this_00 = Substrate::BindSubstrateGlobalUniformParameters(param_3);
    TVar11 = TRDGUniformBuffer<FSubstrateGlobalUniformParameters>::GetRHIRef(this_00);
    SetUniformBufferParameter
              (param_1,&this->SubstrateGlobalParameters,*(FRHIUniformBuffer **)TVar11);
    if (local_res20 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res20);
    }
  }
  plVar3 = *(longlong **)(param_3->_padding_ + 0x40);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x420))();
  }
  SetSamplerParameter(param_1,&this->ShadowDepthTextureSampler,
                      TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                      ::StaticResource.StateRHI.Reference);
  pFVar12 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_a8,&pFVar12->ShaderVariableHashedName);
  FVar13.Hash = (ulong64)FHashedName::FHashedName(&local_a0,&local_a8);
  pFVar14 = FShader::GetUniformBufferParameter((FShader *)this,FVar13);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar14->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    bVar10 = LightFunctionAtlas::IsEnabled(param_3,DeferredLighting);
    SetDeferredLightParameters
              (param_1,local_res18,pFVar9->LightSceneInfo,(FSceneView *)param_3,bVar10);
  }
  return;
}

// SetParameters @ 1455cb010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TOnePassPointShadowProjectionPS<2,1,0>::SetParameters
          (TOnePassPointShadowProjectionPS<2,1,0> *this,FRHIBatchedShaderParameters *param_1,
          int param_2,FViewInfo *param_3,FProjectedShadowInfo *param_4,FRHIUniformBuffer *param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  TRDGUniformBuffer<FSubstrateGlobalUniformParameters> *this_00;
  TUniformBufferRef<FSubstrateGlobalUniformParameters> TVar11;
  FShaderParametersMetadata *pFVar12;
  FHashedName FVar13;
  FShaderUniformBufferParameter *pFVar14;
  ForElementType<float> FVar15;
  uint uVar16;
  double dVar17;
  float local_res8;
  float local_resc;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FRHIResource *local_res20;
  FHashedName local_a8;
  FHashedName local_a0;
  float local_98;
  float local_94;
  float local_90;
  double local_88;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  
  pFVar9 = param_4;
  dVar5 = (double)param_3->_padding_;
  dVar6 = (double)param_3->_padding_;
  dVar17 = (double)param_3->_padding_;
  FOnePassPointShadowProjectionShaderParameters::Set
            (&this->OnePassShadowParameters,param_1,(FSceneView *)param_3,param_4);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  local_6c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  fVar8 = __real_3f800000;
  uVar1 = (this->LightPosition).NumBytes;
  uVar16 = (uint)uVar1;
  if (0x10 < uVar1) {
    uVar16 = 0x10;
  }
  local_6c = __real_3f800000 / local_6c;
  local_78 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_74 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_70 = (float)(dVar17 + (pFVar2->Position).field0_0x0._s_0.Z);
  local_88 = dVar17;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar16,&local_78);
  }
  uVar16 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar16 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar16 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    pFVar7 = param_4;
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  param_4._4_4_ = (undefined4)((ulonglong)pFVar7 >> 0x20);
  uVar1 = (this->ShadowFadeFraction).NumBytes;
  uVar16 = (uint)uVar1;
  FVar15 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar16 = 4;
  }
  if (uVar16 != 0) {
    if (FVar15 == (ForElementType<float>)0x0) {
      FVar15 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar16,
               (void *)((longlong)FVar15 + (longlong)param_2 * 4));
  }
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar16 = (uint)uVar1;
  if (4 < uVar1) {
    uVar16 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + fVar8;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar16,&param_4);
  }
  dVar17 = __real_3ff0000000000000 / (pFVar9->OnePassShadowFaceProjectionMatrix).M[3][2];
  uVar1 = (this->PointLightDepthBias).NumBytes;
  uVar16 = (uint)uVar1;
  if (0xc < uVar1) {
    uVar16 = 0xc;
  }
  local_res8 = (float)dVar17;
  local_resc = (float)(dVar17 * (pFVar9->OnePassShadowFaceProjectionMatrix).M[2][2]);
  local_98 = pFVar9->ShaderDepthBias;
  local_94 = pFVar9->ShaderSlopeDepthBias;
  local_90 = pFVar9->ShaderMaxSlopeDepthBias;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->PointLightDepthBias).BufferIndex,
               (uint)(this->PointLightDepthBias).BaseIndex,uVar16,&local_98);
  }
  uVar1 = (this->PointLightProjParameters).NumBytes;
  uVar16 = (uint)uVar1;
  if (8 < uVar1) {
    uVar16 = 8;
  }
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->PointLightProjParameters).BufferIndex,
               (uint)(this->PointLightProjParameters).BaseIndex,uVar16,&local_res8);
  }
  if ((this->HairStrandsParameters).BaseIndex != 0xffff) {
    SetUniformBufferParameter(param_1,&this->HairStrandsParameters,param_5);
  }
  if ((this->SubstrateGlobalParameters).BaseIndex != 0xffff) {
    this_00 = Substrate::BindSubstrateGlobalUniformParameters(param_3);
    TVar11 = TRDGUniformBuffer<FSubstrateGlobalUniformParameters>::GetRHIRef(this_00);
    SetUniformBufferParameter
              (param_1,&this->SubstrateGlobalParameters,*(FRHIUniformBuffer **)TVar11);
    if (local_res20 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res20);
    }
  }
  plVar3 = *(longlong **)(param_3->_padding_ + 0x40);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x420))();
  }
  SetSamplerParameter(param_1,&this->ShadowDepthTextureSampler,
                      TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                      ::StaticResource.StateRHI.Reference);
  pFVar12 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_a8,&pFVar12->ShaderVariableHashedName);
  FVar13.Hash = (ulong64)FHashedName::FHashedName(&local_a0,&local_a8);
  pFVar14 = FShader::GetUniformBufferParameter((FShader *)this,FVar13);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar14->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    bVar10 = LightFunctionAtlas::IsEnabled(param_3,DeferredLighting);
    SetDeferredLightParameters
              (param_1,local_res18,pFVar9->LightSceneInfo,(FSceneView *)param_3,bVar10);
  }
  return;
}

// SetParameters @ 1455cb410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TOnePassPointShadowProjectionPS<2,0,1>::SetParameters
          (TOnePassPointShadowProjectionPS<2,0,1> *this,FRHIBatchedShaderParameters *param_1,
          int param_2,FViewInfo *param_3,FProjectedShadowInfo *param_4,FRHIUniformBuffer *param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  TRDGUniformBuffer<FSubstrateGlobalUniformParameters> *this_00;
  TUniformBufferRef<FSubstrateGlobalUniformParameters> TVar11;
  FShaderParametersMetadata *pFVar12;
  FHashedName FVar13;
  FShaderUniformBufferParameter *pFVar14;
  ForElementType<float> FVar15;
  uint uVar16;
  double dVar17;
  float local_res8;
  float local_resc;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FRHIResource *local_res20;
  FHashedName local_a8;
  FHashedName local_a0;
  float local_98;
  float local_94;
  float local_90;
  double local_88;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  
  pFVar9 = param_4;
  dVar5 = (double)param_3->_padding_;
  dVar6 = (double)param_3->_padding_;
  dVar17 = (double)param_3->_padding_;
  FOnePassPointShadowProjectionShaderParameters::Set
            (&this->OnePassShadowParameters,param_1,(FSceneView *)param_3,param_4);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  local_6c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  fVar8 = __real_3f800000;
  uVar1 = (this->LightPosition).NumBytes;
  uVar16 = (uint)uVar1;
  if (0x10 < uVar1) {
    uVar16 = 0x10;
  }
  local_6c = __real_3f800000 / local_6c;
  local_78 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_74 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_70 = (float)(dVar17 + (pFVar2->Position).field0_0x0._s_0.Z);
  local_88 = dVar17;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar16,&local_78);
  }
  uVar16 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar16 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar16 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    pFVar7 = param_4;
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  param_4._4_4_ = (undefined4)((ulonglong)pFVar7 >> 0x20);
  uVar1 = (this->ShadowFadeFraction).NumBytes;
  uVar16 = (uint)uVar1;
  FVar15 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar16 = 4;
  }
  if (uVar16 != 0) {
    if (FVar15 == (ForElementType<float>)0x0) {
      FVar15 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar16,
               (void *)((longlong)FVar15 + (longlong)param_2 * 4));
  }
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar16 = (uint)uVar1;
  if (4 < uVar1) {
    uVar16 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + fVar8;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar16,&param_4);
  }
  dVar17 = __real_3ff0000000000000 / (pFVar9->OnePassShadowFaceProjectionMatrix).M[3][2];
  uVar1 = (this->PointLightDepthBias).NumBytes;
  uVar16 = (uint)uVar1;
  if (0xc < uVar1) {
    uVar16 = 0xc;
  }
  local_res8 = (float)dVar17;
  local_resc = (float)(dVar17 * (pFVar9->OnePassShadowFaceProjectionMatrix).M[2][2]);
  local_98 = pFVar9->ShaderDepthBias;
  local_94 = pFVar9->ShaderSlopeDepthBias;
  local_90 = pFVar9->ShaderMaxSlopeDepthBias;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->PointLightDepthBias).BufferIndex,
               (uint)(this->PointLightDepthBias).BaseIndex,uVar16,&local_98);
  }
  uVar1 = (this->PointLightProjParameters).NumBytes;
  uVar16 = (uint)uVar1;
  if (8 < uVar1) {
    uVar16 = 8;
  }
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->PointLightProjParameters).BufferIndex,
               (uint)(this->PointLightProjParameters).BaseIndex,uVar16,&local_res8);
  }
  if ((this->HairStrandsParameters).BaseIndex != 0xffff) {
    SetUniformBufferParameter(param_1,&this->HairStrandsParameters,param_5);
  }
  if ((this->SubstrateGlobalParameters).BaseIndex != 0xffff) {
    this_00 = Substrate::BindSubstrateGlobalUniformParameters(param_3);
    TVar11 = TRDGUniformBuffer<FSubstrateGlobalUniformParameters>::GetRHIRef(this_00);
    SetUniformBufferParameter
              (param_1,&this->SubstrateGlobalParameters,*(FRHIUniformBuffer **)TVar11);
    if (local_res20 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res20);
    }
  }
  plVar3 = *(longlong **)(param_3->_padding_ + 0x40);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x420))();
  }
  SetSamplerParameter(param_1,&this->ShadowDepthTextureSampler,
                      TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                      ::StaticResource.StateRHI.Reference);
  pFVar12 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_a8,&pFVar12->ShaderVariableHashedName);
  FVar13.Hash = (ulong64)FHashedName::FHashedName(&local_a0,&local_a8);
  pFVar14 = FShader::GetUniformBufferParameter((FShader *)this,FVar13);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar14->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    bVar10 = LightFunctionAtlas::IsEnabled(param_3,DeferredLighting);
    SetDeferredLightParameters
              (param_1,local_res18,pFVar9->LightSceneInfo,(FSceneView *)param_3,bVar10);
  }
  return;
}

// SetParameters @ 1455cb810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TOnePassPointShadowProjectionPS<2,0,0>::SetParameters
          (TOnePassPointShadowProjectionPS<2,0,0> *this,FRHIBatchedShaderParameters *param_1,
          int param_2,FViewInfo *param_3,FProjectedShadowInfo *param_4,FRHIUniformBuffer *param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  TRDGUniformBuffer<FSubstrateGlobalUniformParameters> *this_00;
  TUniformBufferRef<FSubstrateGlobalUniformParameters> TVar11;
  FShaderParametersMetadata *pFVar12;
  FHashedName FVar13;
  FShaderUniformBufferParameter *pFVar14;
  ForElementType<float> FVar15;
  uint uVar16;
  double dVar17;
  float local_res8;
  float local_resc;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FRHIResource *local_res20;
  FHashedName local_a8;
  FHashedName local_a0;
  float local_98;
  float local_94;
  float local_90;
  double local_88;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  
  pFVar9 = param_4;
  dVar5 = (double)param_3->_padding_;
  dVar6 = (double)param_3->_padding_;
  dVar17 = (double)param_3->_padding_;
  FOnePassPointShadowProjectionShaderParameters::Set
            (&this->OnePassShadowParameters,param_1,(FSceneView *)param_3,param_4);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  local_6c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  fVar8 = __real_3f800000;
  uVar1 = (this->LightPosition).NumBytes;
  uVar16 = (uint)uVar1;
  if (0x10 < uVar1) {
    uVar16 = 0x10;
  }
  local_6c = __real_3f800000 / local_6c;
  local_78 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_74 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_70 = (float)(dVar17 + (pFVar2->Position).field0_0x0._s_0.Z);
  local_88 = dVar17;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar16,&local_78);
  }
  uVar16 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar16 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar16 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    pFVar7 = param_4;
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  param_4._4_4_ = (undefined4)((ulonglong)pFVar7 >> 0x20);
  uVar1 = (this->ShadowFadeFraction).NumBytes;
  uVar16 = (uint)uVar1;
  FVar15 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar16 = 4;
  }
  if (uVar16 != 0) {
    if (FVar15 == (ForElementType<float>)0x0) {
      FVar15 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar16,
               (void *)((longlong)FVar15 + (longlong)param_2 * 4));
  }
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar16 = (uint)uVar1;
  if (4 < uVar1) {
    uVar16 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + fVar8;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar16,&param_4);
  }
  dVar17 = __real_3ff0000000000000 / (pFVar9->OnePassShadowFaceProjectionMatrix).M[3][2];
  uVar1 = (this->PointLightDepthBias).NumBytes;
  uVar16 = (uint)uVar1;
  if (0xc < uVar1) {
    uVar16 = 0xc;
  }
  local_res8 = (float)dVar17;
  local_resc = (float)(dVar17 * (pFVar9->OnePassShadowFaceProjectionMatrix).M[2][2]);
  local_98 = pFVar9->ShaderDepthBias;
  local_94 = pFVar9->ShaderSlopeDepthBias;
  local_90 = pFVar9->ShaderMaxSlopeDepthBias;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->PointLightDepthBias).BufferIndex,
               (uint)(this->PointLightDepthBias).BaseIndex,uVar16,&local_98);
  }
  uVar1 = (this->PointLightProjParameters).NumBytes;
  uVar16 = (uint)uVar1;
  if (8 < uVar1) {
    uVar16 = 8;
  }
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->PointLightProjParameters).BufferIndex,
               (uint)(this->PointLightProjParameters).BaseIndex,uVar16,&local_res8);
  }
  if ((this->HairStrandsParameters).BaseIndex != 0xffff) {
    SetUniformBufferParameter(param_1,&this->HairStrandsParameters,param_5);
  }
  if ((this->SubstrateGlobalParameters).BaseIndex != 0xffff) {
    this_00 = Substrate::BindSubstrateGlobalUniformParameters(param_3);
    TVar11 = TRDGUniformBuffer<FSubstrateGlobalUniformParameters>::GetRHIRef(this_00);
    SetUniformBufferParameter
              (param_1,&this->SubstrateGlobalParameters,*(FRHIUniformBuffer **)TVar11);
    if (local_res20 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res20);
    }
  }
  plVar3 = *(longlong **)(param_3->_padding_ + 0x40);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x420))();
  }
  SetSamplerParameter(param_1,&this->ShadowDepthTextureSampler,
                      TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                      ::StaticResource.StateRHI.Reference);
  pFVar12 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_a8,&pFVar12->ShaderVariableHashedName);
  FVar13.Hash = (ulong64)FHashedName::FHashedName(&local_a0,&local_a8);
  pFVar14 = FShader::GetUniformBufferParameter((FShader *)this,FVar13);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar14->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    bVar10 = LightFunctionAtlas::IsEnabled(param_3,DeferredLighting);
    SetDeferredLightParameters
              (param_1,local_res18,pFVar9->LightSceneInfo,(FSceneView *)param_3,bVar10);
  }
  return;
}

// SetParameters @ 1455cbc10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TOnePassPointShadowProjectionPS<3,1,0>::SetParameters
          (TOnePassPointShadowProjectionPS<3,1,0> *this,FRHIBatchedShaderParameters *param_1,
          int param_2,FViewInfo *param_3,FProjectedShadowInfo *param_4,FRHIUniformBuffer *param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  TRDGUniformBuffer<FSubstrateGlobalUniformParameters> *this_00;
  TUniformBufferRef<FSubstrateGlobalUniformParameters> TVar11;
  FShaderParametersMetadata *pFVar12;
  FHashedName FVar13;
  FShaderUniformBufferParameter *pFVar14;
  ForElementType<float> FVar15;
  uint uVar16;
  double dVar17;
  float local_res8;
  float local_resc;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FRHIResource *local_res20;
  FHashedName local_a8;
  FHashedName local_a0;
  float local_98;
  float local_94;
  float local_90;
  double local_88;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  
  pFVar9 = param_4;
  dVar5 = (double)param_3->_padding_;
  dVar6 = (double)param_3->_padding_;
  dVar17 = (double)param_3->_padding_;
  FOnePassPointShadowProjectionShaderParameters::Set
            (&this->OnePassShadowParameters,param_1,(FSceneView *)param_3,param_4);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  local_6c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  fVar8 = __real_3f800000;
  uVar1 = (this->LightPosition).NumBytes;
  uVar16 = (uint)uVar1;
  if (0x10 < uVar1) {
    uVar16 = 0x10;
  }
  local_6c = __real_3f800000 / local_6c;
  local_78 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_74 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_70 = (float)(dVar17 + (pFVar2->Position).field0_0x0._s_0.Z);
  local_88 = dVar17;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar16,&local_78);
  }
  uVar16 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar16 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar16 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    pFVar7 = param_4;
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  param_4._4_4_ = (undefined4)((ulonglong)pFVar7 >> 0x20);
  uVar1 = (this->ShadowFadeFraction).NumBytes;
  uVar16 = (uint)uVar1;
  FVar15 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar16 = 4;
  }
  if (uVar16 != 0) {
    if (FVar15 == (ForElementType<float>)0x0) {
      FVar15 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar16,
               (void *)((longlong)FVar15 + (longlong)param_2 * 4));
  }
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar16 = (uint)uVar1;
  if (4 < uVar1) {
    uVar16 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + fVar8;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar16,&param_4);
  }
  dVar17 = __real_3ff0000000000000 / (pFVar9->OnePassShadowFaceProjectionMatrix).M[3][2];
  uVar1 = (this->PointLightDepthBias).NumBytes;
  uVar16 = (uint)uVar1;
  if (0xc < uVar1) {
    uVar16 = 0xc;
  }
  local_res8 = (float)dVar17;
  local_resc = (float)(dVar17 * (pFVar9->OnePassShadowFaceProjectionMatrix).M[2][2]);
  local_98 = pFVar9->ShaderDepthBias;
  local_94 = pFVar9->ShaderSlopeDepthBias;
  local_90 = pFVar9->ShaderMaxSlopeDepthBias;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->PointLightDepthBias).BufferIndex,
               (uint)(this->PointLightDepthBias).BaseIndex,uVar16,&local_98);
  }
  uVar1 = (this->PointLightProjParameters).NumBytes;
  uVar16 = (uint)uVar1;
  if (8 < uVar1) {
    uVar16 = 8;
  }
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->PointLightProjParameters).BufferIndex,
               (uint)(this->PointLightProjParameters).BaseIndex,uVar16,&local_res8);
  }
  if ((this->HairStrandsParameters).BaseIndex != 0xffff) {
    SetUniformBufferParameter(param_1,&this->HairStrandsParameters,param_5);
  }
  if ((this->SubstrateGlobalParameters).BaseIndex != 0xffff) {
    this_00 = Substrate::BindSubstrateGlobalUniformParameters(param_3);
    TVar11 = TRDGUniformBuffer<FSubstrateGlobalUniformParameters>::GetRHIRef(this_00);
    SetUniformBufferParameter
              (param_1,&this->SubstrateGlobalParameters,*(FRHIUniformBuffer **)TVar11);
    if (local_res20 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res20);
    }
  }
  plVar3 = *(longlong **)(param_3->_padding_ + 0x40);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x420))();
  }
  SetSamplerParameter(param_1,&this->ShadowDepthTextureSampler,
                      TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                      ::StaticResource.StateRHI.Reference);
  pFVar12 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_a8,&pFVar12->ShaderVariableHashedName);
  FVar13.Hash = (ulong64)FHashedName::FHashedName(&local_a0,&local_a8);
  pFVar14 = FShader::GetUniformBufferParameter((FShader *)this,FVar13);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar14->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    bVar10 = LightFunctionAtlas::IsEnabled(param_3,DeferredLighting);
    SetDeferredLightParameters
              (param_1,local_res18,pFVar9->LightSceneInfo,(FSceneView *)param_3,bVar10);
  }
  return;
}

// SetParameters @ 1455cc010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TOnePassPointShadowProjectionPS<3,0,1>::SetParameters
          (TOnePassPointShadowProjectionPS<3,0,1> *this,FRHIBatchedShaderParameters *param_1,
          int param_2,FViewInfo *param_3,FProjectedShadowInfo *param_4,FRHIUniformBuffer *param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  TRDGUniformBuffer<FSubstrateGlobalUniformParameters> *this_00;
  TUniformBufferRef<FSubstrateGlobalUniformParameters> TVar11;
  FShaderParametersMetadata *pFVar12;
  FHashedName FVar13;
  FShaderUniformBufferParameter *pFVar14;
  ForElementType<float> FVar15;
  uint uVar16;
  double dVar17;
  float local_res8;
  float local_resc;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FRHIResource *local_res20;
  FHashedName local_a8;
  FHashedName local_a0;
  float local_98;
  float local_94;
  float local_90;
  double local_88;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  
  pFVar9 = param_4;
  dVar5 = (double)param_3->_padding_;
  dVar6 = (double)param_3->_padding_;
  dVar17 = (double)param_3->_padding_;
  FOnePassPointShadowProjectionShaderParameters::Set
            (&this->OnePassShadowParameters,param_1,(FSceneView *)param_3,param_4);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  local_6c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  fVar8 = __real_3f800000;
  uVar1 = (this->LightPosition).NumBytes;
  uVar16 = (uint)uVar1;
  if (0x10 < uVar1) {
    uVar16 = 0x10;
  }
  local_6c = __real_3f800000 / local_6c;
  local_78 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_74 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_70 = (float)(dVar17 + (pFVar2->Position).field0_0x0._s_0.Z);
  local_88 = dVar17;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar16,&local_78);
  }
  uVar16 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar16 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar16 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    pFVar7 = param_4;
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  param_4._4_4_ = (undefined4)((ulonglong)pFVar7 >> 0x20);
  uVar1 = (this->ShadowFadeFraction).NumBytes;
  uVar16 = (uint)uVar1;
  FVar15 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar16 = 4;
  }
  if (uVar16 != 0) {
    if (FVar15 == (ForElementType<float>)0x0) {
      FVar15 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar16,
               (void *)((longlong)FVar15 + (longlong)param_2 * 4));
  }
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar16 = (uint)uVar1;
  if (4 < uVar1) {
    uVar16 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + fVar8;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar16,&param_4);
  }
  dVar17 = __real_3ff0000000000000 / (pFVar9->OnePassShadowFaceProjectionMatrix).M[3][2];
  uVar1 = (this->PointLightDepthBias).NumBytes;
  uVar16 = (uint)uVar1;
  if (0xc < uVar1) {
    uVar16 = 0xc;
  }
  local_res8 = (float)dVar17;
  local_resc = (float)(dVar17 * (pFVar9->OnePassShadowFaceProjectionMatrix).M[2][2]);
  local_98 = pFVar9->ShaderDepthBias;
  local_94 = pFVar9->ShaderSlopeDepthBias;
  local_90 = pFVar9->ShaderMaxSlopeDepthBias;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->PointLightDepthBias).BufferIndex,
               (uint)(this->PointLightDepthBias).BaseIndex,uVar16,&local_98);
  }
  uVar1 = (this->PointLightProjParameters).NumBytes;
  uVar16 = (uint)uVar1;
  if (8 < uVar1) {
    uVar16 = 8;
  }
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->PointLightProjParameters).BufferIndex,
               (uint)(this->PointLightProjParameters).BaseIndex,uVar16,&local_res8);
  }
  if ((this->HairStrandsParameters).BaseIndex != 0xffff) {
    SetUniformBufferParameter(param_1,&this->HairStrandsParameters,param_5);
  }
  if ((this->SubstrateGlobalParameters).BaseIndex != 0xffff) {
    this_00 = Substrate::BindSubstrateGlobalUniformParameters(param_3);
    TVar11 = TRDGUniformBuffer<FSubstrateGlobalUniformParameters>::GetRHIRef(this_00);
    SetUniformBufferParameter
              (param_1,&this->SubstrateGlobalParameters,*(FRHIUniformBuffer **)TVar11);
    if (local_res20 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res20);
    }
  }
  plVar3 = *(longlong **)(param_3->_padding_ + 0x40);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x420))();
  }
  SetSamplerParameter(param_1,&this->ShadowDepthTextureSampler,
                      TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                      ::StaticResource.StateRHI.Reference);
  pFVar12 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_a8,&pFVar12->ShaderVariableHashedName);
  FVar13.Hash = (ulong64)FHashedName::FHashedName(&local_a0,&local_a8);
  pFVar14 = FShader::GetUniformBufferParameter((FShader *)this,FVar13);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar14->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    bVar10 = LightFunctionAtlas::IsEnabled(param_3,DeferredLighting);
    SetDeferredLightParameters
              (param_1,local_res18,pFVar9->LightSceneInfo,(FSceneView *)param_3,bVar10);
  }
  return;
}

// SetParameters @ 1455cc410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TOnePassPointShadowProjectionPS<3,0,0>::SetParameters
          (TOnePassPointShadowProjectionPS<3,0,0> *this,FRHIBatchedShaderParameters *param_1,
          int param_2,FViewInfo *param_3,FProjectedShadowInfo *param_4,FRHIUniformBuffer *param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  TRDGUniformBuffer<FSubstrateGlobalUniformParameters> *this_00;
  TUniformBufferRef<FSubstrateGlobalUniformParameters> TVar11;
  FShaderParametersMetadata *pFVar12;
  FHashedName FVar13;
  FShaderUniformBufferParameter *pFVar14;
  ForElementType<float> FVar15;
  uint uVar16;
  double dVar17;
  float local_res8;
  float local_resc;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FRHIResource *local_res20;
  FHashedName local_a8;
  FHashedName local_a0;
  float local_98;
  float local_94;
  float local_90;
  double local_88;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  
  pFVar9 = param_4;
  dVar5 = (double)param_3->_padding_;
  dVar6 = (double)param_3->_padding_;
  dVar17 = (double)param_3->_padding_;
  FOnePassPointShadowProjectionShaderParameters::Set
            (&this->OnePassShadowParameters,param_1,(FSceneView *)param_3,param_4);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  local_6c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  fVar8 = __real_3f800000;
  uVar1 = (this->LightPosition).NumBytes;
  uVar16 = (uint)uVar1;
  if (0x10 < uVar1) {
    uVar16 = 0x10;
  }
  local_6c = __real_3f800000 / local_6c;
  local_78 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_74 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_70 = (float)(dVar17 + (pFVar2->Position).field0_0x0._s_0.Z);
  local_88 = dVar17;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar16,&local_78);
  }
  uVar16 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar16 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar16 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    pFVar7 = param_4;
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  param_4._4_4_ = (undefined4)((ulonglong)pFVar7 >> 0x20);
  uVar1 = (this->ShadowFadeFraction).NumBytes;
  uVar16 = (uint)uVar1;
  FVar15 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar16 = 4;
  }
  if (uVar16 != 0) {
    if (FVar15 == (ForElementType<float>)0x0) {
      FVar15 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar16,
               (void *)((longlong)FVar15 + (longlong)param_2 * 4));
  }
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar16 = (uint)uVar1;
  if (4 < uVar1) {
    uVar16 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + fVar8;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar16,&param_4);
  }
  dVar17 = __real_3ff0000000000000 / (pFVar9->OnePassShadowFaceProjectionMatrix).M[3][2];
  uVar1 = (this->PointLightDepthBias).NumBytes;
  uVar16 = (uint)uVar1;
  if (0xc < uVar1) {
    uVar16 = 0xc;
  }
  local_res8 = (float)dVar17;
  local_resc = (float)(dVar17 * (pFVar9->OnePassShadowFaceProjectionMatrix).M[2][2]);
  local_98 = pFVar9->ShaderDepthBias;
  local_94 = pFVar9->ShaderSlopeDepthBias;
  local_90 = pFVar9->ShaderMaxSlopeDepthBias;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->PointLightDepthBias).BufferIndex,
               (uint)(this->PointLightDepthBias).BaseIndex,uVar16,&local_98);
  }
  uVar1 = (this->PointLightProjParameters).NumBytes;
  uVar16 = (uint)uVar1;
  if (8 < uVar1) {
    uVar16 = 8;
  }
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->PointLightProjParameters).BufferIndex,
               (uint)(this->PointLightProjParameters).BaseIndex,uVar16,&local_res8);
  }
  if ((this->HairStrandsParameters).BaseIndex != 0xffff) {
    SetUniformBufferParameter(param_1,&this->HairStrandsParameters,param_5);
  }
  if ((this->SubstrateGlobalParameters).BaseIndex != 0xffff) {
    this_00 = Substrate::BindSubstrateGlobalUniformParameters(param_3);
    TVar11 = TRDGUniformBuffer<FSubstrateGlobalUniformParameters>::GetRHIRef(this_00);
    SetUniformBufferParameter
              (param_1,&this->SubstrateGlobalParameters,*(FRHIUniformBuffer **)TVar11);
    if (local_res20 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res20);
    }
  }
  plVar3 = *(longlong **)(param_3->_padding_ + 0x40);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x420))();
  }
  SetSamplerParameter(param_1,&this->ShadowDepthTextureSampler,
                      TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                      ::StaticResource.StateRHI.Reference);
  pFVar12 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_a8,&pFVar12->ShaderVariableHashedName);
  FVar13.Hash = (ulong64)FHashedName::FHashedName(&local_a0,&local_a8);
  pFVar14 = FShader::GetUniformBufferParameter((FShader *)this,FVar13);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar14->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    bVar10 = LightFunctionAtlas::IsEnabled(param_3,DeferredLighting);
    SetDeferredLightParameters
              (param_1,local_res18,pFVar9->LightSceneInfo,(FSceneView *)param_3,bVar10);
  }
  return;
}

// SetParameters @ 1455cc810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TOnePassPointShadowProjectionPS<4,1,0>::SetParameters
          (TOnePassPointShadowProjectionPS<4,1,0> *this,FRHIBatchedShaderParameters *param_1,
          int param_2,FViewInfo *param_3,FProjectedShadowInfo *param_4,FRHIUniformBuffer *param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  TRDGUniformBuffer<FSubstrateGlobalUniformParameters> *this_00;
  TUniformBufferRef<FSubstrateGlobalUniformParameters> TVar11;
  FShaderParametersMetadata *pFVar12;
  FHashedName FVar13;
  FShaderUniformBufferParameter *pFVar14;
  ForElementType<float> FVar15;
  uint uVar16;
  double dVar17;
  float local_res8;
  float local_resc;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FRHIResource *local_res20;
  FHashedName local_a8;
  FHashedName local_a0;
  float local_98;
  float local_94;
  float local_90;
  double local_88;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  
  pFVar9 = param_4;
  dVar5 = (double)param_3->_padding_;
  dVar6 = (double)param_3->_padding_;
  dVar17 = (double)param_3->_padding_;
  FOnePassPointShadowProjectionShaderParameters::Set
            (&this->OnePassShadowParameters,param_1,(FSceneView *)param_3,param_4);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  local_6c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  fVar8 = __real_3f800000;
  uVar1 = (this->LightPosition).NumBytes;
  uVar16 = (uint)uVar1;
  if (0x10 < uVar1) {
    uVar16 = 0x10;
  }
  local_6c = __real_3f800000 / local_6c;
  local_78 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_74 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_70 = (float)(dVar17 + (pFVar2->Position).field0_0x0._s_0.Z);
  local_88 = dVar17;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar16,&local_78);
  }
  uVar16 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar16 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar16 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    pFVar7 = param_4;
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  param_4._4_4_ = (undefined4)((ulonglong)pFVar7 >> 0x20);
  uVar1 = (this->ShadowFadeFraction).NumBytes;
  uVar16 = (uint)uVar1;
  FVar15 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar16 = 4;
  }
  if (uVar16 != 0) {
    if (FVar15 == (ForElementType<float>)0x0) {
      FVar15 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar16,
               (void *)((longlong)FVar15 + (longlong)param_2 * 4));
  }
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar16 = (uint)uVar1;
  if (4 < uVar1) {
    uVar16 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + fVar8;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar16,&param_4);
  }
  dVar17 = __real_3ff0000000000000 / (pFVar9->OnePassShadowFaceProjectionMatrix).M[3][2];
  uVar1 = (this->PointLightDepthBias).NumBytes;
  uVar16 = (uint)uVar1;
  if (0xc < uVar1) {
    uVar16 = 0xc;
  }
  local_res8 = (float)dVar17;
  local_resc = (float)(dVar17 * (pFVar9->OnePassShadowFaceProjectionMatrix).M[2][2]);
  local_98 = pFVar9->ShaderDepthBias;
  local_94 = pFVar9->ShaderSlopeDepthBias;
  local_90 = pFVar9->ShaderMaxSlopeDepthBias;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->PointLightDepthBias).BufferIndex,
               (uint)(this->PointLightDepthBias).BaseIndex,uVar16,&local_98);
  }
  uVar1 = (this->PointLightProjParameters).NumBytes;
  uVar16 = (uint)uVar1;
  if (8 < uVar1) {
    uVar16 = 8;
  }
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->PointLightProjParameters).BufferIndex,
               (uint)(this->PointLightProjParameters).BaseIndex,uVar16,&local_res8);
  }
  if ((this->HairStrandsParameters).BaseIndex != 0xffff) {
    SetUniformBufferParameter(param_1,&this->HairStrandsParameters,param_5);
  }
  if ((this->SubstrateGlobalParameters).BaseIndex != 0xffff) {
    this_00 = Substrate::BindSubstrateGlobalUniformParameters(param_3);
    TVar11 = TRDGUniformBuffer<FSubstrateGlobalUniformParameters>::GetRHIRef(this_00);
    SetUniformBufferParameter
              (param_1,&this->SubstrateGlobalParameters,*(FRHIUniformBuffer **)TVar11);
    if (local_res20 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res20);
    }
  }
  plVar3 = *(longlong **)(param_3->_padding_ + 0x40);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x420))();
  }
  SetSamplerParameter(param_1,&this->ShadowDepthTextureSampler,
                      TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                      ::StaticResource.StateRHI.Reference);
  pFVar12 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_a8,&pFVar12->ShaderVariableHashedName);
  FVar13.Hash = (ulong64)FHashedName::FHashedName(&local_a0,&local_a8);
  pFVar14 = FShader::GetUniformBufferParameter((FShader *)this,FVar13);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar14->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    bVar10 = LightFunctionAtlas::IsEnabled(param_3,DeferredLighting);
    SetDeferredLightParameters
              (param_1,local_res18,pFVar9->LightSceneInfo,(FSceneView *)param_3,bVar10);
  }
  return;
}

// SetParameters @ 1455ccc10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TOnePassPointShadowProjectionPS<4,0,1>::SetParameters
          (TOnePassPointShadowProjectionPS<4,0,1> *this,FRHIBatchedShaderParameters *param_1,
          int param_2,FViewInfo *param_3,FProjectedShadowInfo *param_4,FRHIUniformBuffer *param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  TRDGUniformBuffer<FSubstrateGlobalUniformParameters> *this_00;
  TUniformBufferRef<FSubstrateGlobalUniformParameters> TVar11;
  FShaderParametersMetadata *pFVar12;
  FHashedName FVar13;
  FShaderUniformBufferParameter *pFVar14;
  ForElementType<float> FVar15;
  uint uVar16;
  double dVar17;
  float local_res8;
  float local_resc;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FRHIResource *local_res20;
  FHashedName local_a8;
  FHashedName local_a0;
  float local_98;
  float local_94;
  float local_90;
  double local_88;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  
  pFVar9 = param_4;
  dVar5 = (double)param_3->_padding_;
  dVar6 = (double)param_3->_padding_;
  dVar17 = (double)param_3->_padding_;
  FOnePassPointShadowProjectionShaderParameters::Set
            (&this->OnePassShadowParameters,param_1,(FSceneView *)param_3,param_4);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  local_6c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  fVar8 = __real_3f800000;
  uVar1 = (this->LightPosition).NumBytes;
  uVar16 = (uint)uVar1;
  if (0x10 < uVar1) {
    uVar16 = 0x10;
  }
  local_6c = __real_3f800000 / local_6c;
  local_78 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_74 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_70 = (float)(dVar17 + (pFVar2->Position).field0_0x0._s_0.Z);
  local_88 = dVar17;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar16,&local_78);
  }
  uVar16 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar16 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar16 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    pFVar7 = param_4;
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  param_4._4_4_ = (undefined4)((ulonglong)pFVar7 >> 0x20);
  uVar1 = (this->ShadowFadeFraction).NumBytes;
  uVar16 = (uint)uVar1;
  FVar15 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar16 = 4;
  }
  if (uVar16 != 0) {
    if (FVar15 == (ForElementType<float>)0x0) {
      FVar15 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar16,
               (void *)((longlong)FVar15 + (longlong)param_2 * 4));
  }
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar16 = (uint)uVar1;
  if (4 < uVar1) {
    uVar16 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + fVar8;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar16,&param_4);
  }
  dVar17 = __real_3ff0000000000000 / (pFVar9->OnePassShadowFaceProjectionMatrix).M[3][2];
  uVar1 = (this->PointLightDepthBias).NumBytes;
  uVar16 = (uint)uVar1;
  if (0xc < uVar1) {
    uVar16 = 0xc;
  }
  local_res8 = (float)dVar17;
  local_resc = (float)(dVar17 * (pFVar9->OnePassShadowFaceProjectionMatrix).M[2][2]);
  local_98 = pFVar9->ShaderDepthBias;
  local_94 = pFVar9->ShaderSlopeDepthBias;
  local_90 = pFVar9->ShaderMaxSlopeDepthBias;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->PointLightDepthBias).BufferIndex,
               (uint)(this->PointLightDepthBias).BaseIndex,uVar16,&local_98);
  }
  uVar1 = (this->PointLightProjParameters).NumBytes;
  uVar16 = (uint)uVar1;
  if (8 < uVar1) {
    uVar16 = 8;
  }
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->PointLightProjParameters).BufferIndex,
               (uint)(this->PointLightProjParameters).BaseIndex,uVar16,&local_res8);
  }
  if ((this->HairStrandsParameters).BaseIndex != 0xffff) {
    SetUniformBufferParameter(param_1,&this->HairStrandsParameters,param_5);
  }
  if ((this->SubstrateGlobalParameters).BaseIndex != 0xffff) {
    this_00 = Substrate::BindSubstrateGlobalUniformParameters(param_3);
    TVar11 = TRDGUniformBuffer<FSubstrateGlobalUniformParameters>::GetRHIRef(this_00);
    SetUniformBufferParameter
              (param_1,&this->SubstrateGlobalParameters,*(FRHIUniformBuffer **)TVar11);
    if (local_res20 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res20);
    }
  }
  plVar3 = *(longlong **)(param_3->_padding_ + 0x40);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x420))();
  }
  SetSamplerParameter(param_1,&this->ShadowDepthTextureSampler,
                      TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                      ::StaticResource.StateRHI.Reference);
  pFVar12 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_a8,&pFVar12->ShaderVariableHashedName);
  FVar13.Hash = (ulong64)FHashedName::FHashedName(&local_a0,&local_a8);
  pFVar14 = FShader::GetUniformBufferParameter((FShader *)this,FVar13);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar14->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    bVar10 = LightFunctionAtlas::IsEnabled(param_3,DeferredLighting);
    SetDeferredLightParameters
              (param_1,local_res18,pFVar9->LightSceneInfo,(FSceneView *)param_3,bVar10);
  }
  return;
}

// SetParameters @ 1455cd010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TOnePassPointShadowProjectionPS<4,0,0>::SetParameters
          (TOnePassPointShadowProjectionPS<4,0,0> *this,FRHIBatchedShaderParameters *param_1,
          int param_2,FViewInfo *param_3,FProjectedShadowInfo *param_4,FRHIUniformBuffer *param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  TRDGUniformBuffer<FSubstrateGlobalUniformParameters> *this_00;
  TUniformBufferRef<FSubstrateGlobalUniformParameters> TVar11;
  FShaderParametersMetadata *pFVar12;
  FHashedName FVar13;
  FShaderUniformBufferParameter *pFVar14;
  ForElementType<float> FVar15;
  uint uVar16;
  double dVar17;
  float local_res8;
  float local_resc;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FRHIResource *local_res20;
  FHashedName local_a8;
  FHashedName local_a0;
  float local_98;
  float local_94;
  float local_90;
  double local_88;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  
  pFVar9 = param_4;
  dVar5 = (double)param_3->_padding_;
  dVar6 = (double)param_3->_padding_;
  dVar17 = (double)param_3->_padding_;
  FOnePassPointShadowProjectionShaderParameters::Set
            (&this->OnePassShadowParameters,param_1,(FSceneView *)param_3,param_4);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  local_6c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  fVar8 = __real_3f800000;
  uVar1 = (this->LightPosition).NumBytes;
  uVar16 = (uint)uVar1;
  if (0x10 < uVar1) {
    uVar16 = 0x10;
  }
  local_6c = __real_3f800000 / local_6c;
  local_78 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_74 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_70 = (float)(dVar17 + (pFVar2->Position).field0_0x0._s_0.Z);
  local_88 = dVar17;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar16,&local_78);
  }
  uVar16 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar16 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar16 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    pFVar7 = param_4;
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  param_4._4_4_ = (undefined4)((ulonglong)pFVar7 >> 0x20);
  uVar1 = (this->ShadowFadeFraction).NumBytes;
  uVar16 = (uint)uVar1;
  FVar15 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar16 = 4;
  }
  if (uVar16 != 0) {
    if (FVar15 == (ForElementType<float>)0x0) {
      FVar15 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar16,
               (void *)((longlong)FVar15 + (longlong)param_2 * 4));
  }
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar16 = (uint)uVar1;
  if (4 < uVar1) {
    uVar16 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + fVar8;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar16,&param_4);
  }
  dVar17 = __real_3ff0000000000000 / (pFVar9->OnePassShadowFaceProjectionMatrix).M[3][2];
  uVar1 = (this->PointLightDepthBias).NumBytes;
  uVar16 = (uint)uVar1;
  if (0xc < uVar1) {
    uVar16 = 0xc;
  }
  local_res8 = (float)dVar17;
  local_resc = (float)(dVar17 * (pFVar9->OnePassShadowFaceProjectionMatrix).M[2][2]);
  local_98 = pFVar9->ShaderDepthBias;
  local_94 = pFVar9->ShaderSlopeDepthBias;
  local_90 = pFVar9->ShaderMaxSlopeDepthBias;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->PointLightDepthBias).BufferIndex,
               (uint)(this->PointLightDepthBias).BaseIndex,uVar16,&local_98);
  }
  uVar1 = (this->PointLightProjParameters).NumBytes;
  uVar16 = (uint)uVar1;
  if (8 < uVar1) {
    uVar16 = 8;
  }
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->PointLightProjParameters).BufferIndex,
               (uint)(this->PointLightProjParameters).BaseIndex,uVar16,&local_res8);
  }
  if ((this->HairStrandsParameters).BaseIndex != 0xffff) {
    SetUniformBufferParameter(param_1,&this->HairStrandsParameters,param_5);
  }
  if ((this->SubstrateGlobalParameters).BaseIndex != 0xffff) {
    this_00 = Substrate::BindSubstrateGlobalUniformParameters(param_3);
    TVar11 = TRDGUniformBuffer<FSubstrateGlobalUniformParameters>::GetRHIRef(this_00);
    SetUniformBufferParameter
              (param_1,&this->SubstrateGlobalParameters,*(FRHIUniformBuffer **)TVar11);
    if (local_res20 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res20);
    }
  }
  plVar3 = *(longlong **)(param_3->_padding_ + 0x40);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x420))();
  }
  SetSamplerParameter(param_1,&this->ShadowDepthTextureSampler,
                      TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                      ::StaticResource.StateRHI.Reference);
  pFVar12 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_a8,&pFVar12->ShaderVariableHashedName);
  FVar13.Hash = (ulong64)FHashedName::FHashedName(&local_a0,&local_a8);
  pFVar14 = FShader::GetUniformBufferParameter((FShader *)this,FVar13);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar14->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    bVar10 = LightFunctionAtlas::IsEnabled(param_3,DeferredLighting);
    SetDeferredLightParameters
              (param_1,local_res18,pFVar9->LightSceneInfo,(FSceneView *)param_3,bVar10);
  }
  return;
}

// SetParameters @ 1455cd410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TOnePassPointShadowProjectionPS<5,1,0>::SetParameters
          (TOnePassPointShadowProjectionPS<5,1,0> *this,FRHIBatchedShaderParameters *param_1,
          int param_2,FViewInfo *param_3,FProjectedShadowInfo *param_4,FRHIUniformBuffer *param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  TRDGUniformBuffer<FSubstrateGlobalUniformParameters> *this_00;
  TUniformBufferRef<FSubstrateGlobalUniformParameters> TVar11;
  FShaderParametersMetadata *pFVar12;
  FHashedName FVar13;
  FShaderUniformBufferParameter *pFVar14;
  ForElementType<float> FVar15;
  uint uVar16;
  double dVar17;
  float local_res8;
  float local_resc;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FRHIResource *local_res20;
  FHashedName local_a8;
  FHashedName local_a0;
  float local_98;
  float local_94;
  float local_90;
  double local_88;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  
  pFVar9 = param_4;
  dVar5 = (double)param_3->_padding_;
  dVar6 = (double)param_3->_padding_;
  dVar17 = (double)param_3->_padding_;
  FOnePassPointShadowProjectionShaderParameters::Set
            (&this->OnePassShadowParameters,param_1,(FSceneView *)param_3,param_4);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  local_6c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  fVar8 = __real_3f800000;
  uVar1 = (this->LightPosition).NumBytes;
  uVar16 = (uint)uVar1;
  if (0x10 < uVar1) {
    uVar16 = 0x10;
  }
  local_6c = __real_3f800000 / local_6c;
  local_78 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_74 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_70 = (float)(dVar17 + (pFVar2->Position).field0_0x0._s_0.Z);
  local_88 = dVar17;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar16,&local_78);
  }
  uVar16 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar16 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar16 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    pFVar7 = param_4;
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  param_4._4_4_ = (undefined4)((ulonglong)pFVar7 >> 0x20);
  uVar1 = (this->ShadowFadeFraction).NumBytes;
  uVar16 = (uint)uVar1;
  FVar15 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar16 = 4;
  }
  if (uVar16 != 0) {
    if (FVar15 == (ForElementType<float>)0x0) {
      FVar15 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar16,
               (void *)((longlong)FVar15 + (longlong)param_2 * 4));
  }
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar16 = (uint)uVar1;
  if (4 < uVar1) {
    uVar16 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + fVar8;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar16,&param_4);
  }
  dVar17 = __real_3ff0000000000000 / (pFVar9->OnePassShadowFaceProjectionMatrix).M[3][2];
  uVar1 = (this->PointLightDepthBias).NumBytes;
  uVar16 = (uint)uVar1;
  if (0xc < uVar1) {
    uVar16 = 0xc;
  }
  local_res8 = (float)dVar17;
  local_resc = (float)(dVar17 * (pFVar9->OnePassShadowFaceProjectionMatrix).M[2][2]);
  local_98 = pFVar9->ShaderDepthBias;
  local_94 = pFVar9->ShaderSlopeDepthBias;
  local_90 = pFVar9->ShaderMaxSlopeDepthBias;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->PointLightDepthBias).BufferIndex,
               (uint)(this->PointLightDepthBias).BaseIndex,uVar16,&local_98);
  }
  uVar1 = (this->PointLightProjParameters).NumBytes;
  uVar16 = (uint)uVar1;
  if (8 < uVar1) {
    uVar16 = 8;
  }
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->PointLightProjParameters).BufferIndex,
               (uint)(this->PointLightProjParameters).BaseIndex,uVar16,&local_res8);
  }
  if ((this->HairStrandsParameters).BaseIndex != 0xffff) {
    SetUniformBufferParameter(param_1,&this->HairStrandsParameters,param_5);
  }
  if ((this->SubstrateGlobalParameters).BaseIndex != 0xffff) {
    this_00 = Substrate::BindSubstrateGlobalUniformParameters(param_3);
    TVar11 = TRDGUniformBuffer<FSubstrateGlobalUniformParameters>::GetRHIRef(this_00);
    SetUniformBufferParameter
              (param_1,&this->SubstrateGlobalParameters,*(FRHIUniformBuffer **)TVar11);
    if (local_res20 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res20);
    }
  }
  plVar3 = *(longlong **)(param_3->_padding_ + 0x40);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x420))();
  }
  SetSamplerParameter(param_1,&this->ShadowDepthTextureSampler,
                      TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                      ::StaticResource.StateRHI.Reference);
  pFVar12 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_a8,&pFVar12->ShaderVariableHashedName);
  FVar13.Hash = (ulong64)FHashedName::FHashedName(&local_a0,&local_a8);
  pFVar14 = FShader::GetUniformBufferParameter((FShader *)this,FVar13);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar14->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    bVar10 = LightFunctionAtlas::IsEnabled(param_3,DeferredLighting);
    SetDeferredLightParameters
              (param_1,local_res18,pFVar9->LightSceneInfo,(FSceneView *)param_3,bVar10);
  }
  return;
}

// SetParameters @ 1455cd810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TOnePassPointShadowProjectionPS<5,0,1>::SetParameters
          (TOnePassPointShadowProjectionPS<5,0,1> *this,FRHIBatchedShaderParameters *param_1,
          int param_2,FViewInfo *param_3,FProjectedShadowInfo *param_4,FRHIUniformBuffer *param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  TRDGUniformBuffer<FSubstrateGlobalUniformParameters> *this_00;
  TUniformBufferRef<FSubstrateGlobalUniformParameters> TVar11;
  FShaderParametersMetadata *pFVar12;
  FHashedName FVar13;
  FShaderUniformBufferParameter *pFVar14;
  ForElementType<float> FVar15;
  uint uVar16;
  double dVar17;
  float local_res8;
  float local_resc;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FRHIResource *local_res20;
  FHashedName local_a8;
  FHashedName local_a0;
  float local_98;
  float local_94;
  float local_90;
  double local_88;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  
  pFVar9 = param_4;
  dVar5 = (double)param_3->_padding_;
  dVar6 = (double)param_3->_padding_;
  dVar17 = (double)param_3->_padding_;
  FOnePassPointShadowProjectionShaderParameters::Set
            (&this->OnePassShadowParameters,param_1,(FSceneView *)param_3,param_4);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  local_6c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  fVar8 = __real_3f800000;
  uVar1 = (this->LightPosition).NumBytes;
  uVar16 = (uint)uVar1;
  if (0x10 < uVar1) {
    uVar16 = 0x10;
  }
  local_6c = __real_3f800000 / local_6c;
  local_78 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_74 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_70 = (float)(dVar17 + (pFVar2->Position).field0_0x0._s_0.Z);
  local_88 = dVar17;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar16,&local_78);
  }
  uVar16 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar16 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar16 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    pFVar7 = param_4;
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  param_4._4_4_ = (undefined4)((ulonglong)pFVar7 >> 0x20);
  uVar1 = (this->ShadowFadeFraction).NumBytes;
  uVar16 = (uint)uVar1;
  FVar15 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar16 = 4;
  }
  if (uVar16 != 0) {
    if (FVar15 == (ForElementType<float>)0x0) {
      FVar15 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar16,
               (void *)((longlong)FVar15 + (longlong)param_2 * 4));
  }
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar16 = (uint)uVar1;
  if (4 < uVar1) {
    uVar16 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + fVar8;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar16,&param_4);
  }
  dVar17 = __real_3ff0000000000000 / (pFVar9->OnePassShadowFaceProjectionMatrix).M[3][2];
  uVar1 = (this->PointLightDepthBias).NumBytes;
  uVar16 = (uint)uVar1;
  if (0xc < uVar1) {
    uVar16 = 0xc;
  }
  local_res8 = (float)dVar17;
  local_resc = (float)(dVar17 * (pFVar9->OnePassShadowFaceProjectionMatrix).M[2][2]);
  local_98 = pFVar9->ShaderDepthBias;
  local_94 = pFVar9->ShaderSlopeDepthBias;
  local_90 = pFVar9->ShaderMaxSlopeDepthBias;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->PointLightDepthBias).BufferIndex,
               (uint)(this->PointLightDepthBias).BaseIndex,uVar16,&local_98);
  }
  uVar1 = (this->PointLightProjParameters).NumBytes;
  uVar16 = (uint)uVar1;
  if (8 < uVar1) {
    uVar16 = 8;
  }
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->PointLightProjParameters).BufferIndex,
               (uint)(this->PointLightProjParameters).BaseIndex,uVar16,&local_res8);
  }
  if ((this->HairStrandsParameters).BaseIndex != 0xffff) {
    SetUniformBufferParameter(param_1,&this->HairStrandsParameters,param_5);
  }
  if ((this->SubstrateGlobalParameters).BaseIndex != 0xffff) {
    this_00 = Substrate::BindSubstrateGlobalUniformParameters(param_3);
    TVar11 = TRDGUniformBuffer<FSubstrateGlobalUniformParameters>::GetRHIRef(this_00);
    SetUniformBufferParameter
              (param_1,&this->SubstrateGlobalParameters,*(FRHIUniformBuffer **)TVar11);
    if (local_res20 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res20);
    }
  }
  plVar3 = *(longlong **)(param_3->_padding_ + 0x40);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x420))();
  }
  SetSamplerParameter(param_1,&this->ShadowDepthTextureSampler,
                      TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                      ::StaticResource.StateRHI.Reference);
  pFVar12 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_a8,&pFVar12->ShaderVariableHashedName);
  FVar13.Hash = (ulong64)FHashedName::FHashedName(&local_a0,&local_a8);
  pFVar14 = FShader::GetUniformBufferParameter((FShader *)this,FVar13);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar14->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    bVar10 = LightFunctionAtlas::IsEnabled(param_3,DeferredLighting);
    SetDeferredLightParameters
              (param_1,local_res18,pFVar9->LightSceneInfo,(FSceneView *)param_3,bVar10);
  }
  return;
}

// SetParameters @ 1455cdc10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TOnePassPointShadowProjectionPS<5,0,0>::SetParameters
          (TOnePassPointShadowProjectionPS<5,0,0> *this,FRHIBatchedShaderParameters *param_1,
          int param_2,FViewInfo *param_3,FProjectedShadowInfo *param_4,FRHIUniformBuffer *param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  TRDGUniformBuffer<FSubstrateGlobalUniformParameters> *this_00;
  TUniformBufferRef<FSubstrateGlobalUniformParameters> TVar11;
  FShaderParametersMetadata *pFVar12;
  FHashedName FVar13;
  FShaderUniformBufferParameter *pFVar14;
  ForElementType<float> FVar15;
  uint uVar16;
  double dVar17;
  float local_res8;
  float local_resc;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FRHIResource *local_res20;
  FHashedName local_a8;
  FHashedName local_a0;
  float local_98;
  float local_94;
  float local_90;
  double local_88;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  
  pFVar9 = param_4;
  dVar5 = (double)param_3->_padding_;
  dVar6 = (double)param_3->_padding_;
  dVar17 = (double)param_3->_padding_;
  FOnePassPointShadowProjectionShaderParameters::Set
            (&this->OnePassShadowParameters,param_1,(FSceneView *)param_3,param_4);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  local_6c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  fVar8 = __real_3f800000;
  uVar1 = (this->LightPosition).NumBytes;
  uVar16 = (uint)uVar1;
  if (0x10 < uVar1) {
    uVar16 = 0x10;
  }
  local_6c = __real_3f800000 / local_6c;
  local_78 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_74 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_70 = (float)(dVar17 + (pFVar2->Position).field0_0x0._s_0.Z);
  local_88 = dVar17;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar16,&local_78);
  }
  uVar16 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar16 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar16 == 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    pFVar7 = param_4;
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  param_4._4_4_ = (undefined4)((ulonglong)pFVar7 >> 0x20);
  uVar1 = (this->ShadowFadeFraction).NumBytes;
  uVar16 = (uint)uVar1;
  FVar15 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar16 = 4;
  }
  if (uVar16 != 0) {
    if (FVar15 == (ForElementType<float>)0x0) {
      FVar15 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar16,
               (void *)((longlong)FVar15 + (longlong)param_2 * 4));
  }
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar16 = (uint)uVar1;
  if (4 < uVar1) {
    uVar16 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + fVar8;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar16,&param_4);
  }
  dVar17 = __real_3ff0000000000000 / (pFVar9->OnePassShadowFaceProjectionMatrix).M[3][2];
  uVar1 = (this->PointLightDepthBias).NumBytes;
  uVar16 = (uint)uVar1;
  if (0xc < uVar1) {
    uVar16 = 0xc;
  }
  local_res8 = (float)dVar17;
  local_resc = (float)(dVar17 * (pFVar9->OnePassShadowFaceProjectionMatrix).M[2][2]);
  local_98 = pFVar9->ShaderDepthBias;
  local_94 = pFVar9->ShaderSlopeDepthBias;
  local_90 = pFVar9->ShaderMaxSlopeDepthBias;
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->PointLightDepthBias).BufferIndex,
               (uint)(this->PointLightDepthBias).BaseIndex,uVar16,&local_98);
  }
  uVar1 = (this->PointLightProjParameters).NumBytes;
  uVar16 = (uint)uVar1;
  if (8 < uVar1) {
    uVar16 = 8;
  }
  if (uVar16 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->PointLightProjParameters).BufferIndex,
               (uint)(this->PointLightProjParameters).BaseIndex,uVar16,&local_res8);
  }
  if ((this->HairStrandsParameters).BaseIndex != 0xffff) {
    SetUniformBufferParameter(param_1,&this->HairStrandsParameters,param_5);
  }
  if ((this->SubstrateGlobalParameters).BaseIndex != 0xffff) {
    this_00 = Substrate::BindSubstrateGlobalUniformParameters(param_3);
    TVar11 = TRDGUniformBuffer<FSubstrateGlobalUniformParameters>::GetRHIRef(this_00);
    SetUniformBufferParameter
              (param_1,&this->SubstrateGlobalParameters,*(FRHIUniformBuffer **)TVar11);
    if (local_res20 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res20);
    }
  }
  plVar3 = *(longlong **)(param_3->_padding_ + 0x40);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x420))();
  }
  SetSamplerParameter(param_1,&this->ShadowDepthTextureSampler,
                      TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                      ::StaticResource.StateRHI.Reference);
  pFVar12 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_a8,&pFVar12->ShaderVariableHashedName);
  FVar13.Hash = (ulong64)FHashedName::FHashedName(&local_a0,&local_a8);
  pFVar14 = FShader::GetUniformBufferParameter((FShader *)this,FVar13);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar14->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    bVar10 = LightFunctionAtlas::IsEnabled(param_3,DeferredLighting);
    SetDeferredLightParameters
              (param_1,local_res18,pFVar9->LightSceneInfo,(FSceneView *)param_3,bVar10);
  }
  return;
}

// ShouldCompilePermutationImpl @ 1455d87e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TOnePassPointShadowProjectionPS<1,1,0>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  return FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel != ES3_1;
}

// ShouldCompilePermutationImpl @ 1455d8840

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TOnePassPointShadowProjectionPS<1,0,1>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1->Platform].bContainsValidPlatformInfo == 0
     ) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return true;
}

// ShouldCompilePermutationImpl @ 1455d8890

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TOnePassPointShadowProjectionPS<1,0,0>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1->Platform].bContainsValidPlatformInfo == 0
     ) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return true;
}

// ShouldCompilePermutationImpl @ 1455d88e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TOnePassPointShadowProjectionPS<2,1,0>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  return FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel != ES3_1;
}

// ShouldCompilePermutationImpl @ 1455d8940

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TOnePassPointShadowProjectionPS<2,0,1>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1->Platform].bContainsValidPlatformInfo == 0
     ) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return true;
}

// ShouldCompilePermutationImpl @ 1455d8990

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TOnePassPointShadowProjectionPS<2,0,0>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1->Platform].bContainsValidPlatformInfo == 0
     ) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return true;
}

// ShouldCompilePermutationImpl @ 1455d89e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TOnePassPointShadowProjectionPS<3,1,0>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  return FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel != ES3_1;
}

// ShouldCompilePermutationImpl @ 1455d8a40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TOnePassPointShadowProjectionPS<3,0,1>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1->Platform].bContainsValidPlatformInfo == 0
     ) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return true;
}

// ShouldCompilePermutationImpl @ 1455d8a90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TOnePassPointShadowProjectionPS<3,0,0>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1->Platform].bContainsValidPlatformInfo == 0
     ) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return true;
}

// ShouldCompilePermutationImpl @ 1455d8ae0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TOnePassPointShadowProjectionPS<4,1,0>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  return FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel != ES3_1;
}

// ShouldCompilePermutationImpl @ 1455d8b40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TOnePassPointShadowProjectionPS<4,0,1>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1->Platform].bContainsValidPlatformInfo == 0
     ) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return true;
}

// ShouldCompilePermutationImpl @ 1455d8b90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TOnePassPointShadowProjectionPS<4,0,0>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1->Platform].bContainsValidPlatformInfo == 0
     ) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return true;
}

// ShouldCompilePermutationImpl @ 1455d8be0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TOnePassPointShadowProjectionPS<5,1,0>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  EShaderPlatform EVar1;
  code *pcVar2;
  bool bVar3;
  
  EVar1 = param_1->Platform;
  if (FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].bContainsValidPlatformInfo == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      bVar3 = (bool)(*pcVar2)();
      return bVar3;
    }
  }
  return FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel != ES3_1;
}

// ShouldCompilePermutationImpl @ 1455d8c40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TOnePassPointShadowProjectionPS<5,0,1>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1->Platform].bContainsValidPlatformInfo == 0
     ) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return true;
}

// ShouldCompilePermutationImpl @ 1455d8c90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TOnePassPointShadowProjectionPS<5,0,0>::ShouldCompilePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (FGenericDataDrivenShaderPlatformInfo::Infos[param_1->Platform].bContainsValidPlatformInfo == 0
     ) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(Platform)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                       ,0xe2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return true;
}

// ShouldPrecachePermutationImpl @ 1455da4d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TOnePassPointShadowProjectionPS<1,1,0>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da4e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TOnePassPointShadowProjectionPS<1,0,1>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da4f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TOnePassPointShadowProjectionPS<1,0,0>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da500

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TOnePassPointShadowProjectionPS<2,1,0>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da510

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TOnePassPointShadowProjectionPS<2,0,1>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da520

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TOnePassPointShadowProjectionPS<2,0,0>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da530

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TOnePassPointShadowProjectionPS<3,1,0>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da540

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TOnePassPointShadowProjectionPS<3,0,1>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da550

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TOnePassPointShadowProjectionPS<3,0,0>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da560

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TOnePassPointShadowProjectionPS<4,1,0>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da570

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TOnePassPointShadowProjectionPS<4,0,1>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da580

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TOnePassPointShadowProjectionPS<4,0,0>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da590

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TOnePassPointShadowProjectionPS<5,1,0>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da5a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TOnePassPointShadowProjectionPS<5,0,1>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da5b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TOnePassPointShadowProjectionPS<5,0,0>::ShouldPrecachePermutationImpl
          (FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 1455dba20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TOnePassPointShadowProjectionPS<1,1,0>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '(';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = ::u_FOnePassPointSh;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TOnePassPointShadowProjectionPS<1,1,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OnePassShadowParameters";
    DAT_15513e1f2 = Freeze::FindFieldNameLength(L"OnePassShadowParameters");
    _DAT_15513e1d0 = FOnePassPointShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e1d8 = ::TypeBuffer[0x10];
    DAT_15513e1d8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e1d8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e1d8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e1d8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e1d8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e1d8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e1d8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e1e0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e1e8 = 0xe0;
    _DAT_15513e1ec = 1;
    _DAT_15513e1f0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// StaticGetTypeLayout @ 1455dbbf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TOnePassPointShadowProjectionPS<1,0,1>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '(';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = ::u_FOnePassPointSh;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TOnePassPointShadowProjectionPS<1,0,1>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OnePassShadowParameters";
    DAT_15513e3d2 = Freeze::FindFieldNameLength(L"OnePassShadowParameters");
    _DAT_15513e3b0 = FOnePassPointShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e3b8 = ::TypeBuffer[0x10];
    DAT_15513e3b8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e3b8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e3b8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e3b8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e3b8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e3b8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e3b8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e3c0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e3c8 = 0xe0;
    _DAT_15513e3cc = 1;
    _DAT_15513e3d0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// StaticGetTypeLayout @ 1455dbdc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TOnePassPointShadowProjectionPS<1,0,0>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '(';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = ::u_FOnePassPointSh;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TOnePassPointShadowProjectionPS<1,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OnePassShadowParameters";
    DAT_15513e2e2 = Freeze::FindFieldNameLength(L"OnePassShadowParameters");
    _DAT_15513e2c0 = FOnePassPointShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e2c8 = ::TypeBuffer[0x10];
    DAT_15513e2c8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e2c8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e2c8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e2c8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e2c8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e2c8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e2c8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<1,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e2d0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e2d8 = 0xe0;
    _DAT_15513e2dc = 1;
    _DAT_15513e2e0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// StaticGetTypeLayout @ 1455dbf90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TOnePassPointShadowProjectionPS<2,1,0>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '(';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = ::u_FOnePassPointSh;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TOnePassPointShadowProjectionPS<2,1,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OnePassShadowParameters";
    DAT_15513e1c2 = Freeze::FindFieldNameLength(L"OnePassShadowParameters");
    _DAT_15513e1a0 = FOnePassPointShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e1a8 = ::TypeBuffer[0x10];
    DAT_15513e1a8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e1a8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e1a8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e1a8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e1a8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e1a8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e1a8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e1b0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e1b8 = 0xe0;
    _DAT_15513e1bc = 1;
    _DAT_15513e1c0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// StaticGetTypeLayout @ 1455dc160

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TOnePassPointShadowProjectionPS<2,0,1>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '(';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = ::u_FOnePassPointSh;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TOnePassPointShadowProjectionPS<2,0,1>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OnePassShadowParameters";
    DAT_15513e3a2 = Freeze::FindFieldNameLength(L"OnePassShadowParameters");
    _DAT_15513e380 = FOnePassPointShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e388 = ::TypeBuffer[0x10];
    DAT_15513e388_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e388_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e388_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e388_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e388_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e388_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e388_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e390 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e398 = 0xe0;
    _DAT_15513e39c = 1;
    _DAT_15513e3a0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// StaticGetTypeLayout @ 1455dc330

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TOnePassPointShadowProjectionPS<2,0,0>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '(';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = ::u_FOnePassPointSh;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TOnePassPointShadowProjectionPS<2,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OnePassShadowParameters";
    DAT_15513e2b2 = Freeze::FindFieldNameLength(L"OnePassShadowParameters");
    _DAT_15513e290 = FOnePassPointShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e298 = ::TypeBuffer[0x10];
    DAT_15513e298_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e298_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e298_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e298_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e298_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e298_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e298_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<2,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e2a0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e2a8 = 0xe0;
    _DAT_15513e2ac = 1;
    _DAT_15513e2b0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// StaticGetTypeLayout @ 1455dc500

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TOnePassPointShadowProjectionPS<3,1,0>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '(';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = ::u_FOnePassPointSh;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TOnePassPointShadowProjectionPS<3,1,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OnePassShadowParameters";
    DAT_15513e192 = Freeze::FindFieldNameLength(L"OnePassShadowParameters");
    _DAT_15513e170 = FOnePassPointShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e178 = ::TypeBuffer[0x10];
    DAT_15513e178_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e178_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e178_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e178_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e178_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e178_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e178_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e180 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e188 = 0xe0;
    _DAT_15513e18c = 1;
    _DAT_15513e190 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// StaticGetTypeLayout @ 1455dc6d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TOnePassPointShadowProjectionPS<3,0,1>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '(';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = ::u_FOnePassPointSh;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TOnePassPointShadowProjectionPS<3,0,1>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OnePassShadowParameters";
    DAT_15513e372 = Freeze::FindFieldNameLength(L"OnePassShadowParameters");
    _DAT_15513e350 = FOnePassPointShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e358 = ::TypeBuffer[0x10];
    DAT_15513e358_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e358_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e358_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e358_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e358_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e358_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e358_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e360 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e368 = 0xe0;
    _DAT_15513e36c = 1;
    _DAT_15513e370 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// StaticGetTypeLayout @ 1455dc8a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TOnePassPointShadowProjectionPS<3,0,0>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '(';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = ::u_FOnePassPointSh;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TOnePassPointShadowProjectionPS<3,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OnePassShadowParameters";
    DAT_15513e282 = Freeze::FindFieldNameLength(L"OnePassShadowParameters");
    _DAT_15513e260 = FOnePassPointShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e268 = ::TypeBuffer[0x10];
    DAT_15513e268_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e268_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e268_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e268_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e268_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e268_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e268_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<3,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e270 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e278 = 0xe0;
    _DAT_15513e27c = 1;
    _DAT_15513e280 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// StaticGetTypeLayout @ 1455dca70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TOnePassPointShadowProjectionPS<4,1,0>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '(';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = ::u_FOnePassPointSh;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TOnePassPointShadowProjectionPS<4,1,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OnePassShadowParameters";
    DAT_15513e162 = Freeze::FindFieldNameLength(L"OnePassShadowParameters");
    _DAT_15513e140 = FOnePassPointShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e148 = ::TypeBuffer[0x10];
    DAT_15513e148_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e148_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e148_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e148_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e148_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e148_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e148_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e150 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e158 = 0xe0;
    _DAT_15513e15c = 1;
    _DAT_15513e160 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// StaticGetTypeLayout @ 1455dcc40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TOnePassPointShadowProjectionPS<4,0,1>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '(';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = ::u_FOnePassPointSh;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TOnePassPointShadowProjectionPS<4,0,1>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OnePassShadowParameters";
    DAT_15513e342 = Freeze::FindFieldNameLength(L"OnePassShadowParameters");
    _DAT_15513e320 = FOnePassPointShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e328 = ::TypeBuffer[0x10];
    DAT_15513e328_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e328_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e328_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e328_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e328_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e328_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e328_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e330 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e338 = 0xe0;
    _DAT_15513e33c = 1;
    _DAT_15513e340 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// StaticGetTypeLayout @ 1455dce10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TOnePassPointShadowProjectionPS<4,0,0>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '(';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = ::u_FOnePassPointSh;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TOnePassPointShadowProjectionPS<4,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OnePassShadowParameters";
    DAT_15513e252 = Freeze::FindFieldNameLength(L"OnePassShadowParameters");
    _DAT_15513e230 = FOnePassPointShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e238 = ::TypeBuffer[0x10];
    DAT_15513e238_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e238_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e238_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e238_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e238_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e238_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e238_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<4,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e240 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e248 = 0xe0;
    _DAT_15513e24c = 1;
    _DAT_15513e250 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// StaticGetTypeLayout @ 1455dcfe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TOnePassPointShadowProjectionPS<5,1,0>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '(';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = ::u_FOnePassPointSh;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TOnePassPointShadowProjectionPS<5,1,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OnePassShadowParameters";
    DAT_15513e132 = Freeze::FindFieldNameLength(L"OnePassShadowParameters");
    _DAT_15513e110 = FOnePassPointShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e118 = ::TypeBuffer[0x10];
    DAT_15513e118_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e118_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e118_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e118_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e118_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e118_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e118_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e120 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e128 = 0xe0;
    _DAT_15513e12c = 1;
    _DAT_15513e130 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// StaticGetTypeLayout @ 1455dd1b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TOnePassPointShadowProjectionPS<5,0,1>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '(';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = ::u_FOnePassPointSh;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TOnePassPointShadowProjectionPS<5,0,1>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OnePassShadowParameters";
    DAT_15513e312 = Freeze::FindFieldNameLength(L"OnePassShadowParameters");
    _DAT_15513e2f0 = FOnePassPointShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e2f8 = ::TypeBuffer[0x10];
    DAT_15513e2f8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e2f8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e2f8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e2f8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e2f8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e2f8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e2f8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e300 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e308 = 0xe0;
    _DAT_15513e30c = 1;
    _DAT_15513e310 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// StaticGetTypeLayout @ 1455dd380

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TOnePassPointShadowProjectionPS<5,0,0>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '(';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer._8_8_ = ::u_FOnePassPointSh;
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TOnePassPointShadowProjectionPS<5,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<2>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    `public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "OnePassShadowParameters";
    DAT_15513e222 = Freeze::FindFieldNameLength(L"OnePassShadowParameters");
    _DAT_15513e200 = FOnePassPointShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e208 = ::TypeBuffer[0x10];
    DAT_15513e208_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e208_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e208_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e208_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e208_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e208_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e208_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TOnePassPointShadowProjectionPS<5,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e210 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e218 = 0xe0;
    _DAT_15513e21c = 1;
    _DAT_15513e220 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FGlobalShader::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

