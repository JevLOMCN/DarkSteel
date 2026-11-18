// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 305

// TShadowProjectionPS<1,1,0,1,0> @ 145572e40

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

TShadowProjectionPS<1,1,0,1,0> * __thiscall
TShadowProjectionPS<1,1,0,1,0>::TShadowProjectionPS<1,1,0,1,0>
          (TShadowProjectionPS<1,1,0,1,0> *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShadowProjectionShaderParameters *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->ProjectionParameters;
  (this_00->ScreenToShadowMatrix).BufferIndex = 0;
  (this_00->ScreenToShadowMatrix).BaseIndex = 0;
  (this_00->ScreenToShadowMatrix).NumBytes = 0;
  (this_00->SoftTransitionScale).BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  FShadowProjectionShaderParameters::Bind(this_00,param_1);
  FShaderParameter::Bind
            (&this->ShadowFadeFraction,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(&this->ShadowSharpen,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind
            (&this->LightPosition,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  return this;
}

// TShadowProjectionPS<1,1,0,1,0> @ 145572f30

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

TShadowProjectionPS<1,1,0,1,0> * __thiscall
TShadowProjectionPS<1,1,0,1,0>::TShadowProjectionPS<1,1,0,1,0>(TShadowProjectionPS<1,1,0,1,0> *this)

{
  memset(this,0,0xe0);
  FShader::FShader((FShader *)this);
  (this->ProjectionParameters).ScreenToShadowMatrix.BufferIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.BaseIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.NumBytes = 0;
  (this->ProjectionParameters).SoftTransitionScale.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  return this;
}

// TShadowProjectionPS<1,1,0,0,0> @ 145572fc0

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

TShadowProjectionPS<1,1,0,0,0> * __thiscall
TShadowProjectionPS<1,1,0,0,0>::TShadowProjectionPS<1,1,0,0,0>
          (TShadowProjectionPS<1,1,0,0,0> *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShadowProjectionShaderParameters *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->ProjectionParameters;
  (this_00->ScreenToShadowMatrix).BufferIndex = 0;
  (this_00->ScreenToShadowMatrix).BaseIndex = 0;
  (this_00->ScreenToShadowMatrix).NumBytes = 0;
  (this_00->SoftTransitionScale).BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  FShadowProjectionShaderParameters::Bind(this_00,param_1);
  FShaderParameter::Bind
            (&this->ShadowFadeFraction,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(&this->ShadowSharpen,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind
            (&this->LightPosition,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  return this;
}

// TShadowProjectionPS<1,1,0,0,0> @ 1455730b0

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

TShadowProjectionPS<1,1,0,0,0> * __thiscall
TShadowProjectionPS<1,1,0,0,0>::TShadowProjectionPS<1,1,0,0,0>(TShadowProjectionPS<1,1,0,0,0> *this)

{
  memset(this,0,0xe0);
  FShader::FShader((FShader *)this);
  (this->ProjectionParameters).ScreenToShadowMatrix.BufferIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.BaseIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.NumBytes = 0;
  (this->ProjectionParameters).SoftTransitionScale.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  return this;
}

// TShadowProjectionPS<1,0,1,0,0> @ 145573140

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

TShadowProjectionPS<1,0,1,0,0> * __thiscall
TShadowProjectionPS<1,0,1,0,0>::TShadowProjectionPS<1,0,1,0,0>
          (TShadowProjectionPS<1,0,1,0,0> *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShadowProjectionShaderParameters *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->ProjectionParameters;
  (this_00->ScreenToShadowMatrix).BufferIndex = 0;
  (this_00->ScreenToShadowMatrix).BaseIndex = 0;
  (this_00->ScreenToShadowMatrix).NumBytes = 0;
  (this_00->SoftTransitionScale).BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  FShadowProjectionShaderParameters::Bind(this_00,param_1);
  FShaderParameter::Bind
            (&this->ShadowFadeFraction,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(&this->ShadowSharpen,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind
            (&this->LightPosition,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  return this;
}

// TShadowProjectionPS<1,0,1,0,0> @ 145573230

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

TShadowProjectionPS<1,0,1,0,0> * __thiscall
TShadowProjectionPS<1,0,1,0,0>::TShadowProjectionPS<1,0,1,0,0>(TShadowProjectionPS<1,0,1,0,0> *this)

{
  memset(this,0,0xe0);
  FShader::FShader((FShader *)this);
  (this->ProjectionParameters).ScreenToShadowMatrix.BufferIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.BaseIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.NumBytes = 0;
  (this->ProjectionParameters).SoftTransitionScale.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  return this;
}

// TShadowProjectionPS<1,0,0,1,0> @ 1455732c0

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

TShadowProjectionPS<1,0,0,1,0> * __thiscall
TShadowProjectionPS<1,0,0,1,0>::TShadowProjectionPS<1,0,0,1,0>
          (TShadowProjectionPS<1,0,0,1,0> *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShadowProjectionShaderParameters *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->ProjectionParameters;
  (this_00->ScreenToShadowMatrix).BufferIndex = 0;
  (this_00->ScreenToShadowMatrix).BaseIndex = 0;
  (this_00->ScreenToShadowMatrix).NumBytes = 0;
  (this_00->SoftTransitionScale).BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  FShadowProjectionShaderParameters::Bind(this_00,param_1);
  FShaderParameter::Bind
            (&this->ShadowFadeFraction,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(&this->ShadowSharpen,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind
            (&this->LightPosition,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  return this;
}

// TShadowProjectionPS<1,0,0,1,0> @ 1455733b0

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

TShadowProjectionPS<1,0,0,1,0> * __thiscall
TShadowProjectionPS<1,0,0,1,0>::TShadowProjectionPS<1,0,0,1,0>(TShadowProjectionPS<1,0,0,1,0> *this)

{
  memset(this,0,0xe0);
  FShader::FShader((FShader *)this);
  (this->ProjectionParameters).ScreenToShadowMatrix.BufferIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.BaseIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.NumBytes = 0;
  (this->ProjectionParameters).SoftTransitionScale.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  return this;
}

// TShadowProjectionPS<1,0,0,0,1> @ 145573440

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

TShadowProjectionPS<1,0,0,0,1> * __thiscall
TShadowProjectionPS<1,0,0,0,1>::TShadowProjectionPS<1,0,0,0,1>
          (TShadowProjectionPS<1,0,0,0,1> *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShadowProjectionShaderParameters *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->ProjectionParameters;
  (this_00->ScreenToShadowMatrix).BufferIndex = 0;
  (this_00->ScreenToShadowMatrix).BaseIndex = 0;
  (this_00->ScreenToShadowMatrix).NumBytes = 0;
  (this_00->SoftTransitionScale).BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  FShadowProjectionShaderParameters::Bind(this_00,param_1);
  FShaderParameter::Bind
            (&this->ShadowFadeFraction,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(&this->ShadowSharpen,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind
            (&this->LightPosition,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  return this;
}

// TShadowProjectionPS<1,0,0,0,1> @ 145573530

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

TShadowProjectionPS<1,0,0,0,1> * __thiscall
TShadowProjectionPS<1,0,0,0,1>::TShadowProjectionPS<1,0,0,0,1>(TShadowProjectionPS<1,0,0,0,1> *this)

{
  memset(this,0,0xe0);
  FShader::FShader((FShader *)this);
  (this->ProjectionParameters).ScreenToShadowMatrix.BufferIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.BaseIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.NumBytes = 0;
  (this->ProjectionParameters).SoftTransitionScale.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  return this;
}

// TShadowProjectionPS<1,0,0,0,0> @ 1455735c0

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

TShadowProjectionPS<1,0,0,0,0> * __thiscall
TShadowProjectionPS<1,0,0,0,0>::TShadowProjectionPS<1,0,0,0,0>
          (TShadowProjectionPS<1,0,0,0,0> *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShadowProjectionShaderParameters *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->ProjectionParameters;
  (this_00->ScreenToShadowMatrix).BufferIndex = 0;
  (this_00->ScreenToShadowMatrix).BaseIndex = 0;
  (this_00->ScreenToShadowMatrix).NumBytes = 0;
  (this_00->SoftTransitionScale).BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  FShadowProjectionShaderParameters::Bind(this_00,param_1);
  FShaderParameter::Bind
            (&this->ShadowFadeFraction,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(&this->ShadowSharpen,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind
            (&this->LightPosition,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  return this;
}

// TShadowProjectionPS<1,0,0,0,0> @ 1455736b0

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

TShadowProjectionPS<1,0,0,0,0> * __thiscall
TShadowProjectionPS<1,0,0,0,0>::TShadowProjectionPS<1,0,0,0,0>(TShadowProjectionPS<1,0,0,0,0> *this)

{
  memset(this,0,0xe0);
  FShader::FShader((FShader *)this);
  (this->ProjectionParameters).ScreenToShadowMatrix.BufferIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.BaseIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.NumBytes = 0;
  (this->ProjectionParameters).SoftTransitionScale.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  return this;
}

// TShadowProjectionPS<2,1,0,1,0> @ 145573740

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

TShadowProjectionPS<2,1,0,1,0> * __thiscall
TShadowProjectionPS<2,1,0,1,0>::TShadowProjectionPS<2,1,0,1,0>
          (TShadowProjectionPS<2,1,0,1,0> *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShadowProjectionShaderParameters *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->ProjectionParameters;
  (this_00->ScreenToShadowMatrix).BufferIndex = 0;
  (this_00->ScreenToShadowMatrix).BaseIndex = 0;
  (this_00->ScreenToShadowMatrix).NumBytes = 0;
  (this_00->SoftTransitionScale).BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  FShadowProjectionShaderParameters::Bind(this_00,param_1);
  FShaderParameter::Bind
            (&this->ShadowFadeFraction,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(&this->ShadowSharpen,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind
            (&this->LightPosition,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  return this;
}

// TShadowProjectionPS<2,1,0,1,0> @ 145573830

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

TShadowProjectionPS<2,1,0,1,0> * __thiscall
TShadowProjectionPS<2,1,0,1,0>::TShadowProjectionPS<2,1,0,1,0>(TShadowProjectionPS<2,1,0,1,0> *this)

{
  memset(this,0,0xe0);
  FShader::FShader((FShader *)this);
  (this->ProjectionParameters).ScreenToShadowMatrix.BufferIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.BaseIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.NumBytes = 0;
  (this->ProjectionParameters).SoftTransitionScale.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  return this;
}

// TShadowProjectionPS<2,1,0,0,0> @ 1455738c0

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

TShadowProjectionPS<2,1,0,0,0> * __thiscall
TShadowProjectionPS<2,1,0,0,0>::TShadowProjectionPS<2,1,0,0,0>
          (TShadowProjectionPS<2,1,0,0,0> *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShadowProjectionShaderParameters *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->ProjectionParameters;
  (this_00->ScreenToShadowMatrix).BufferIndex = 0;
  (this_00->ScreenToShadowMatrix).BaseIndex = 0;
  (this_00->ScreenToShadowMatrix).NumBytes = 0;
  (this_00->SoftTransitionScale).BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  FShadowProjectionShaderParameters::Bind(this_00,param_1);
  FShaderParameter::Bind
            (&this->ShadowFadeFraction,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(&this->ShadowSharpen,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind
            (&this->LightPosition,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  return this;
}

// TShadowProjectionPS<2,1,0,0,0> @ 1455739b0

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

TShadowProjectionPS<2,1,0,0,0> * __thiscall
TShadowProjectionPS<2,1,0,0,0>::TShadowProjectionPS<2,1,0,0,0>(TShadowProjectionPS<2,1,0,0,0> *this)

{
  memset(this,0,0xe0);
  FShader::FShader((FShader *)this);
  (this->ProjectionParameters).ScreenToShadowMatrix.BufferIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.BaseIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.NumBytes = 0;
  (this->ProjectionParameters).SoftTransitionScale.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  return this;
}

// TShadowProjectionPS<2,0,1,0,0> @ 145573a40

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

TShadowProjectionPS<2,0,1,0,0> * __thiscall
TShadowProjectionPS<2,0,1,0,0>::TShadowProjectionPS<2,0,1,0,0>
          (TShadowProjectionPS<2,0,1,0,0> *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShadowProjectionShaderParameters *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->ProjectionParameters;
  (this_00->ScreenToShadowMatrix).BufferIndex = 0;
  (this_00->ScreenToShadowMatrix).BaseIndex = 0;
  (this_00->ScreenToShadowMatrix).NumBytes = 0;
  (this_00->SoftTransitionScale).BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  FShadowProjectionShaderParameters::Bind(this_00,param_1);
  FShaderParameter::Bind
            (&this->ShadowFadeFraction,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(&this->ShadowSharpen,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind
            (&this->LightPosition,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  return this;
}

// TShadowProjectionPS<2,0,1,0,0> @ 145573b30

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

TShadowProjectionPS<2,0,1,0,0> * __thiscall
TShadowProjectionPS<2,0,1,0,0>::TShadowProjectionPS<2,0,1,0,0>(TShadowProjectionPS<2,0,1,0,0> *this)

{
  memset(this,0,0xe0);
  FShader::FShader((FShader *)this);
  (this->ProjectionParameters).ScreenToShadowMatrix.BufferIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.BaseIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.NumBytes = 0;
  (this->ProjectionParameters).SoftTransitionScale.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  return this;
}

// TShadowProjectionPS<2,0,0,1,0> @ 145573bc0

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

TShadowProjectionPS<2,0,0,1,0> * __thiscall
TShadowProjectionPS<2,0,0,1,0>::TShadowProjectionPS<2,0,0,1,0>
          (TShadowProjectionPS<2,0,0,1,0> *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShadowProjectionShaderParameters *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->ProjectionParameters;
  (this_00->ScreenToShadowMatrix).BufferIndex = 0;
  (this_00->ScreenToShadowMatrix).BaseIndex = 0;
  (this_00->ScreenToShadowMatrix).NumBytes = 0;
  (this_00->SoftTransitionScale).BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  FShadowProjectionShaderParameters::Bind(this_00,param_1);
  FShaderParameter::Bind
            (&this->ShadowFadeFraction,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(&this->ShadowSharpen,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind
            (&this->LightPosition,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  return this;
}

// TShadowProjectionPS<2,0,0,1,0> @ 145573cb0

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

TShadowProjectionPS<2,0,0,1,0> * __thiscall
TShadowProjectionPS<2,0,0,1,0>::TShadowProjectionPS<2,0,0,1,0>(TShadowProjectionPS<2,0,0,1,0> *this)

{
  memset(this,0,0xe0);
  FShader::FShader((FShader *)this);
  (this->ProjectionParameters).ScreenToShadowMatrix.BufferIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.BaseIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.NumBytes = 0;
  (this->ProjectionParameters).SoftTransitionScale.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  return this;
}

// TShadowProjectionPS<2,0,0,0,1> @ 145573d40

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

TShadowProjectionPS<2,0,0,0,1> * __thiscall
TShadowProjectionPS<2,0,0,0,1>::TShadowProjectionPS<2,0,0,0,1>
          (TShadowProjectionPS<2,0,0,0,1> *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShadowProjectionShaderParameters *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->ProjectionParameters;
  (this_00->ScreenToShadowMatrix).BufferIndex = 0;
  (this_00->ScreenToShadowMatrix).BaseIndex = 0;
  (this_00->ScreenToShadowMatrix).NumBytes = 0;
  (this_00->SoftTransitionScale).BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  FShadowProjectionShaderParameters::Bind(this_00,param_1);
  FShaderParameter::Bind
            (&this->ShadowFadeFraction,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(&this->ShadowSharpen,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind
            (&this->LightPosition,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  return this;
}

// TShadowProjectionPS<2,0,0,0,1> @ 145573e30

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

TShadowProjectionPS<2,0,0,0,1> * __thiscall
TShadowProjectionPS<2,0,0,0,1>::TShadowProjectionPS<2,0,0,0,1>(TShadowProjectionPS<2,0,0,0,1> *this)

{
  memset(this,0,0xe0);
  FShader::FShader((FShader *)this);
  (this->ProjectionParameters).ScreenToShadowMatrix.BufferIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.BaseIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.NumBytes = 0;
  (this->ProjectionParameters).SoftTransitionScale.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  return this;
}

// TShadowProjectionPS<2,0,0,0,0> @ 145573ec0

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

TShadowProjectionPS<2,0,0,0,0> * __thiscall
TShadowProjectionPS<2,0,0,0,0>::TShadowProjectionPS<2,0,0,0,0>
          (TShadowProjectionPS<2,0,0,0,0> *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShadowProjectionShaderParameters *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->ProjectionParameters;
  (this_00->ScreenToShadowMatrix).BufferIndex = 0;
  (this_00->ScreenToShadowMatrix).BaseIndex = 0;
  (this_00->ScreenToShadowMatrix).NumBytes = 0;
  (this_00->SoftTransitionScale).BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  FShadowProjectionShaderParameters::Bind(this_00,param_1);
  FShaderParameter::Bind
            (&this->ShadowFadeFraction,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(&this->ShadowSharpen,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind
            (&this->LightPosition,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  return this;
}

// TShadowProjectionPS<2,0,0,0,0> @ 145573fb0

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

TShadowProjectionPS<2,0,0,0,0> * __thiscall
TShadowProjectionPS<2,0,0,0,0>::TShadowProjectionPS<2,0,0,0,0>(TShadowProjectionPS<2,0,0,0,0> *this)

{
  memset(this,0,0xe0);
  FShader::FShader((FShader *)this);
  (this->ProjectionParameters).ScreenToShadowMatrix.BufferIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.BaseIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.NumBytes = 0;
  (this->ProjectionParameters).SoftTransitionScale.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  return this;
}

// TShadowProjectionPS<3,1,0,1,0> @ 145574040

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

TShadowProjectionPS<3,1,0,1,0> * __thiscall
TShadowProjectionPS<3,1,0,1,0>::TShadowProjectionPS<3,1,0,1,0>
          (TShadowProjectionPS<3,1,0,1,0> *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShadowProjectionShaderParameters *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->ProjectionParameters;
  (this_00->ScreenToShadowMatrix).BufferIndex = 0;
  (this_00->ScreenToShadowMatrix).BaseIndex = 0;
  (this_00->ScreenToShadowMatrix).NumBytes = 0;
  (this_00->SoftTransitionScale).BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  FShadowProjectionShaderParameters::Bind(this_00,param_1);
  FShaderParameter::Bind
            (&this->ShadowFadeFraction,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(&this->ShadowSharpen,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind
            (&this->LightPosition,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  return this;
}

// TShadowProjectionPS<3,1,0,1,0> @ 145574130

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

TShadowProjectionPS<3,1,0,1,0> * __thiscall
TShadowProjectionPS<3,1,0,1,0>::TShadowProjectionPS<3,1,0,1,0>(TShadowProjectionPS<3,1,0,1,0> *this)

{
  memset(this,0,0xe0);
  FShader::FShader((FShader *)this);
  (this->ProjectionParameters).ScreenToShadowMatrix.BufferIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.BaseIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.NumBytes = 0;
  (this->ProjectionParameters).SoftTransitionScale.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  return this;
}

// TShadowProjectionPS<3,1,0,0,0> @ 1455741c0

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

TShadowProjectionPS<3,1,0,0,0> * __thiscall
TShadowProjectionPS<3,1,0,0,0>::TShadowProjectionPS<3,1,0,0,0>
          (TShadowProjectionPS<3,1,0,0,0> *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShadowProjectionShaderParameters *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->ProjectionParameters;
  (this_00->ScreenToShadowMatrix).BufferIndex = 0;
  (this_00->ScreenToShadowMatrix).BaseIndex = 0;
  (this_00->ScreenToShadowMatrix).NumBytes = 0;
  (this_00->SoftTransitionScale).BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  FShadowProjectionShaderParameters::Bind(this_00,param_1);
  FShaderParameter::Bind
            (&this->ShadowFadeFraction,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(&this->ShadowSharpen,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind
            (&this->LightPosition,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  return this;
}

// TShadowProjectionPS<3,1,0,0,0> @ 1455742b0

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

TShadowProjectionPS<3,1,0,0,0> * __thiscall
TShadowProjectionPS<3,1,0,0,0>::TShadowProjectionPS<3,1,0,0,0>(TShadowProjectionPS<3,1,0,0,0> *this)

{
  memset(this,0,0xe0);
  FShader::FShader((FShader *)this);
  (this->ProjectionParameters).ScreenToShadowMatrix.BufferIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.BaseIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.NumBytes = 0;
  (this->ProjectionParameters).SoftTransitionScale.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  return this;
}

// TShadowProjectionPS<3,0,1,0,0> @ 145574340

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

TShadowProjectionPS<3,0,1,0,0> * __thiscall
TShadowProjectionPS<3,0,1,0,0>::TShadowProjectionPS<3,0,1,0,0>
          (TShadowProjectionPS<3,0,1,0,0> *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShadowProjectionShaderParameters *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->ProjectionParameters;
  (this_00->ScreenToShadowMatrix).BufferIndex = 0;
  (this_00->ScreenToShadowMatrix).BaseIndex = 0;
  (this_00->ScreenToShadowMatrix).NumBytes = 0;
  (this_00->SoftTransitionScale).BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  FShadowProjectionShaderParameters::Bind(this_00,param_1);
  FShaderParameter::Bind
            (&this->ShadowFadeFraction,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(&this->ShadowSharpen,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind
            (&this->LightPosition,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  return this;
}

// TShadowProjectionPS<3,0,1,0,0> @ 145574430

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

TShadowProjectionPS<3,0,1,0,0> * __thiscall
TShadowProjectionPS<3,0,1,0,0>::TShadowProjectionPS<3,0,1,0,0>(TShadowProjectionPS<3,0,1,0,0> *this)

{
  memset(this,0,0xe0);
  FShader::FShader((FShader *)this);
  (this->ProjectionParameters).ScreenToShadowMatrix.BufferIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.BaseIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.NumBytes = 0;
  (this->ProjectionParameters).SoftTransitionScale.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  return this;
}

// TShadowProjectionPS<3,0,0,1,0> @ 1455744c0

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

TShadowProjectionPS<3,0,0,1,0> * __thiscall
TShadowProjectionPS<3,0,0,1,0>::TShadowProjectionPS<3,0,0,1,0>
          (TShadowProjectionPS<3,0,0,1,0> *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShadowProjectionShaderParameters *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->ProjectionParameters;
  (this_00->ScreenToShadowMatrix).BufferIndex = 0;
  (this_00->ScreenToShadowMatrix).BaseIndex = 0;
  (this_00->ScreenToShadowMatrix).NumBytes = 0;
  (this_00->SoftTransitionScale).BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  FShadowProjectionShaderParameters::Bind(this_00,param_1);
  FShaderParameter::Bind
            (&this->ShadowFadeFraction,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(&this->ShadowSharpen,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind
            (&this->LightPosition,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  return this;
}

// TShadowProjectionPS<3,0,0,1,0> @ 1455745b0

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

TShadowProjectionPS<3,0,0,1,0> * __thiscall
TShadowProjectionPS<3,0,0,1,0>::TShadowProjectionPS<3,0,0,1,0>(TShadowProjectionPS<3,0,0,1,0> *this)

{
  memset(this,0,0xe0);
  FShader::FShader((FShader *)this);
  (this->ProjectionParameters).ScreenToShadowMatrix.BufferIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.BaseIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.NumBytes = 0;
  (this->ProjectionParameters).SoftTransitionScale.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  return this;
}

// TShadowProjectionPS<3,0,0,0,1> @ 145574640

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

TShadowProjectionPS<3,0,0,0,1> * __thiscall
TShadowProjectionPS<3,0,0,0,1>::TShadowProjectionPS<3,0,0,0,1>
          (TShadowProjectionPS<3,0,0,0,1> *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShadowProjectionShaderParameters *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->ProjectionParameters;
  (this_00->ScreenToShadowMatrix).BufferIndex = 0;
  (this_00->ScreenToShadowMatrix).BaseIndex = 0;
  (this_00->ScreenToShadowMatrix).NumBytes = 0;
  (this_00->SoftTransitionScale).BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  FShadowProjectionShaderParameters::Bind(this_00,param_1);
  FShaderParameter::Bind
            (&this->ShadowFadeFraction,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(&this->ShadowSharpen,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind
            (&this->LightPosition,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  return this;
}

// TShadowProjectionPS<3,0,0,0,1> @ 145574730

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

TShadowProjectionPS<3,0,0,0,1> * __thiscall
TShadowProjectionPS<3,0,0,0,1>::TShadowProjectionPS<3,0,0,0,1>(TShadowProjectionPS<3,0,0,0,1> *this)

{
  memset(this,0,0xe0);
  FShader::FShader((FShader *)this);
  (this->ProjectionParameters).ScreenToShadowMatrix.BufferIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.BaseIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.NumBytes = 0;
  (this->ProjectionParameters).SoftTransitionScale.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  return this;
}

// TShadowProjectionPS<3,0,0,0,0> @ 1455747c0

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

TShadowProjectionPS<3,0,0,0,0> * __thiscall
TShadowProjectionPS<3,0,0,0,0>::TShadowProjectionPS<3,0,0,0,0>
          (TShadowProjectionPS<3,0,0,0,0> *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShadowProjectionShaderParameters *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->ProjectionParameters;
  (this_00->ScreenToShadowMatrix).BufferIndex = 0;
  (this_00->ScreenToShadowMatrix).BaseIndex = 0;
  (this_00->ScreenToShadowMatrix).NumBytes = 0;
  (this_00->SoftTransitionScale).BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  FShadowProjectionShaderParameters::Bind(this_00,param_1);
  FShaderParameter::Bind
            (&this->ShadowFadeFraction,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(&this->ShadowSharpen,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind
            (&this->LightPosition,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  return this;
}

// TShadowProjectionPS<3,0,0,0,0> @ 1455748b0

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

TShadowProjectionPS<3,0,0,0,0> * __thiscall
TShadowProjectionPS<3,0,0,0,0>::TShadowProjectionPS<3,0,0,0,0>(TShadowProjectionPS<3,0,0,0,0> *this)

{
  memset(this,0,0xe0);
  FShader::FShader((FShader *)this);
  (this->ProjectionParameters).ScreenToShadowMatrix.BufferIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.BaseIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.NumBytes = 0;
  (this->ProjectionParameters).SoftTransitionScale.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  return this;
}

// TShadowProjectionPS<4,1,0,1,0> @ 145574940

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

TShadowProjectionPS<4,1,0,1,0> * __thiscall
TShadowProjectionPS<4,1,0,1,0>::TShadowProjectionPS<4,1,0,1,0>
          (TShadowProjectionPS<4,1,0,1,0> *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShadowProjectionShaderParameters *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->ProjectionParameters;
  (this_00->ScreenToShadowMatrix).BufferIndex = 0;
  (this_00->ScreenToShadowMatrix).BaseIndex = 0;
  (this_00->ScreenToShadowMatrix).NumBytes = 0;
  (this_00->SoftTransitionScale).BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  FShadowProjectionShaderParameters::Bind(this_00,param_1);
  FShaderParameter::Bind
            (&this->ShadowFadeFraction,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(&this->ShadowSharpen,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind
            (&this->LightPosition,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  return this;
}

// TShadowProjectionPS<4,1,0,1,0> @ 145574a30

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

TShadowProjectionPS<4,1,0,1,0> * __thiscall
TShadowProjectionPS<4,1,0,1,0>::TShadowProjectionPS<4,1,0,1,0>(TShadowProjectionPS<4,1,0,1,0> *this)

{
  memset(this,0,0xe0);
  FShader::FShader((FShader *)this);
  (this->ProjectionParameters).ScreenToShadowMatrix.BufferIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.BaseIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.NumBytes = 0;
  (this->ProjectionParameters).SoftTransitionScale.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  return this;
}

// TShadowProjectionPS<4,1,0,0,0> @ 145574ac0

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

TShadowProjectionPS<4,1,0,0,0> * __thiscall
TShadowProjectionPS<4,1,0,0,0>::TShadowProjectionPS<4,1,0,0,0>
          (TShadowProjectionPS<4,1,0,0,0> *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShadowProjectionShaderParameters *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->ProjectionParameters;
  (this_00->ScreenToShadowMatrix).BufferIndex = 0;
  (this_00->ScreenToShadowMatrix).BaseIndex = 0;
  (this_00->ScreenToShadowMatrix).NumBytes = 0;
  (this_00->SoftTransitionScale).BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  FShadowProjectionShaderParameters::Bind(this_00,param_1);
  FShaderParameter::Bind
            (&this->ShadowFadeFraction,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(&this->ShadowSharpen,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind
            (&this->LightPosition,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  return this;
}

// TShadowProjectionPS<4,1,0,0,0> @ 145574bb0

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

TShadowProjectionPS<4,1,0,0,0> * __thiscall
TShadowProjectionPS<4,1,0,0,0>::TShadowProjectionPS<4,1,0,0,0>(TShadowProjectionPS<4,1,0,0,0> *this)

{
  memset(this,0,0xe0);
  FShader::FShader((FShader *)this);
  (this->ProjectionParameters).ScreenToShadowMatrix.BufferIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.BaseIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.NumBytes = 0;
  (this->ProjectionParameters).SoftTransitionScale.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  return this;
}

// TShadowProjectionPS<4,0,1,0,0> @ 145574c40

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

TShadowProjectionPS<4,0,1,0,0> * __thiscall
TShadowProjectionPS<4,0,1,0,0>::TShadowProjectionPS<4,0,1,0,0>
          (TShadowProjectionPS<4,0,1,0,0> *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShadowProjectionShaderParameters *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->ProjectionParameters;
  (this_00->ScreenToShadowMatrix).BufferIndex = 0;
  (this_00->ScreenToShadowMatrix).BaseIndex = 0;
  (this_00->ScreenToShadowMatrix).NumBytes = 0;
  (this_00->SoftTransitionScale).BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  FShadowProjectionShaderParameters::Bind(this_00,param_1);
  FShaderParameter::Bind
            (&this->ShadowFadeFraction,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(&this->ShadowSharpen,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind
            (&this->LightPosition,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  return this;
}

// TShadowProjectionPS<4,0,1,0,0> @ 145574d30

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

TShadowProjectionPS<4,0,1,0,0> * __thiscall
TShadowProjectionPS<4,0,1,0,0>::TShadowProjectionPS<4,0,1,0,0>(TShadowProjectionPS<4,0,1,0,0> *this)

{
  memset(this,0,0xe0);
  FShader::FShader((FShader *)this);
  (this->ProjectionParameters).ScreenToShadowMatrix.BufferIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.BaseIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.NumBytes = 0;
  (this->ProjectionParameters).SoftTransitionScale.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  return this;
}

// TShadowProjectionPS<4,0,0,1,0> @ 145574dc0

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

TShadowProjectionPS<4,0,0,1,0> * __thiscall
TShadowProjectionPS<4,0,0,1,0>::TShadowProjectionPS<4,0,0,1,0>
          (TShadowProjectionPS<4,0,0,1,0> *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShadowProjectionShaderParameters *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->ProjectionParameters;
  (this_00->ScreenToShadowMatrix).BufferIndex = 0;
  (this_00->ScreenToShadowMatrix).BaseIndex = 0;
  (this_00->ScreenToShadowMatrix).NumBytes = 0;
  (this_00->SoftTransitionScale).BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  FShadowProjectionShaderParameters::Bind(this_00,param_1);
  FShaderParameter::Bind
            (&this->ShadowFadeFraction,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(&this->ShadowSharpen,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind
            (&this->LightPosition,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  return this;
}

// TShadowProjectionPS<4,0,0,1,0> @ 145574eb0

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

TShadowProjectionPS<4,0,0,1,0> * __thiscall
TShadowProjectionPS<4,0,0,1,0>::TShadowProjectionPS<4,0,0,1,0>(TShadowProjectionPS<4,0,0,1,0> *this)

{
  memset(this,0,0xe0);
  FShader::FShader((FShader *)this);
  (this->ProjectionParameters).ScreenToShadowMatrix.BufferIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.BaseIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.NumBytes = 0;
  (this->ProjectionParameters).SoftTransitionScale.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  return this;
}

// TShadowProjectionPS<4,0,0,0,1> @ 145574f40

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

TShadowProjectionPS<4,0,0,0,1> * __thiscall
TShadowProjectionPS<4,0,0,0,1>::TShadowProjectionPS<4,0,0,0,1>
          (TShadowProjectionPS<4,0,0,0,1> *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShadowProjectionShaderParameters *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->ProjectionParameters;
  (this_00->ScreenToShadowMatrix).BufferIndex = 0;
  (this_00->ScreenToShadowMatrix).BaseIndex = 0;
  (this_00->ScreenToShadowMatrix).NumBytes = 0;
  (this_00->SoftTransitionScale).BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  FShadowProjectionShaderParameters::Bind(this_00,param_1);
  FShaderParameter::Bind
            (&this->ShadowFadeFraction,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(&this->ShadowSharpen,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind
            (&this->LightPosition,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  return this;
}

// TShadowProjectionPS<4,0,0,0,1> @ 145575030

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

TShadowProjectionPS<4,0,0,0,1> * __thiscall
TShadowProjectionPS<4,0,0,0,1>::TShadowProjectionPS<4,0,0,0,1>(TShadowProjectionPS<4,0,0,0,1> *this)

{
  memset(this,0,0xe0);
  FShader::FShader((FShader *)this);
  (this->ProjectionParameters).ScreenToShadowMatrix.BufferIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.BaseIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.NumBytes = 0;
  (this->ProjectionParameters).SoftTransitionScale.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  return this;
}

// TShadowProjectionPS<4,0,0,0,0> @ 1455750c0

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

TShadowProjectionPS<4,0,0,0,0> * __thiscall
TShadowProjectionPS<4,0,0,0,0>::TShadowProjectionPS<4,0,0,0,0>
          (TShadowProjectionPS<4,0,0,0,0> *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShadowProjectionShaderParameters *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->ProjectionParameters;
  (this_00->ScreenToShadowMatrix).BufferIndex = 0;
  (this_00->ScreenToShadowMatrix).BaseIndex = 0;
  (this_00->ScreenToShadowMatrix).NumBytes = 0;
  (this_00->SoftTransitionScale).BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  FShadowProjectionShaderParameters::Bind(this_00,param_1);
  FShaderParameter::Bind
            (&this->ShadowFadeFraction,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(&this->ShadowSharpen,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind
            (&this->LightPosition,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  return this;
}

// TShadowProjectionPS<4,0,0,0,0> @ 1455751b0

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

TShadowProjectionPS<4,0,0,0,0> * __thiscall
TShadowProjectionPS<4,0,0,0,0>::TShadowProjectionPS<4,0,0,0,0>(TShadowProjectionPS<4,0,0,0,0> *this)

{
  memset(this,0,0xe0);
  FShader::FShader((FShader *)this);
  (this->ProjectionParameters).ScreenToShadowMatrix.BufferIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.BaseIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.NumBytes = 0;
  (this->ProjectionParameters).SoftTransitionScale.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  return this;
}

// TShadowProjectionPS<5,1,0,1,0> @ 145575240

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

TShadowProjectionPS<5,1,0,1,0> * __thiscall
TShadowProjectionPS<5,1,0,1,0>::TShadowProjectionPS<5,1,0,1,0>
          (TShadowProjectionPS<5,1,0,1,0> *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShadowProjectionShaderParameters *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->ProjectionParameters;
  (this_00->ScreenToShadowMatrix).BufferIndex = 0;
  (this_00->ScreenToShadowMatrix).BaseIndex = 0;
  (this_00->ScreenToShadowMatrix).NumBytes = 0;
  (this_00->SoftTransitionScale).BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  FShadowProjectionShaderParameters::Bind(this_00,param_1);
  FShaderParameter::Bind
            (&this->ShadowFadeFraction,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(&this->ShadowSharpen,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind
            (&this->LightPosition,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  return this;
}

// TShadowProjectionPS<5,1,0,1,0> @ 145575330

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

TShadowProjectionPS<5,1,0,1,0> * __thiscall
TShadowProjectionPS<5,1,0,1,0>::TShadowProjectionPS<5,1,0,1,0>(TShadowProjectionPS<5,1,0,1,0> *this)

{
  memset(this,0,0xe0);
  FShader::FShader((FShader *)this);
  (this->ProjectionParameters).ScreenToShadowMatrix.BufferIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.BaseIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.NumBytes = 0;
  (this->ProjectionParameters).SoftTransitionScale.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  return this;
}

// TShadowProjectionPS<5,1,0,0,0> @ 1455753c0

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

TShadowProjectionPS<5,1,0,0,0> * __thiscall
TShadowProjectionPS<5,1,0,0,0>::TShadowProjectionPS<5,1,0,0,0>
          (TShadowProjectionPS<5,1,0,0,0> *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShadowProjectionShaderParameters *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->ProjectionParameters;
  (this_00->ScreenToShadowMatrix).BufferIndex = 0;
  (this_00->ScreenToShadowMatrix).BaseIndex = 0;
  (this_00->ScreenToShadowMatrix).NumBytes = 0;
  (this_00->SoftTransitionScale).BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  FShadowProjectionShaderParameters::Bind(this_00,param_1);
  FShaderParameter::Bind
            (&this->ShadowFadeFraction,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(&this->ShadowSharpen,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind
            (&this->LightPosition,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  return this;
}

// TShadowProjectionPS<5,1,0,0,0> @ 1455754b0

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

TShadowProjectionPS<5,1,0,0,0> * __thiscall
TShadowProjectionPS<5,1,0,0,0>::TShadowProjectionPS<5,1,0,0,0>(TShadowProjectionPS<5,1,0,0,0> *this)

{
  memset(this,0,0xe0);
  FShader::FShader((FShader *)this);
  (this->ProjectionParameters).ScreenToShadowMatrix.BufferIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.BaseIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.NumBytes = 0;
  (this->ProjectionParameters).SoftTransitionScale.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  return this;
}

// TShadowProjectionPS<5,0,1,0,0> @ 145575540

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

TShadowProjectionPS<5,0,1,0,0> * __thiscall
TShadowProjectionPS<5,0,1,0,0>::TShadowProjectionPS<5,0,1,0,0>
          (TShadowProjectionPS<5,0,1,0,0> *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShadowProjectionShaderParameters *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->ProjectionParameters;
  (this_00->ScreenToShadowMatrix).BufferIndex = 0;
  (this_00->ScreenToShadowMatrix).BaseIndex = 0;
  (this_00->ScreenToShadowMatrix).NumBytes = 0;
  (this_00->SoftTransitionScale).BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  FShadowProjectionShaderParameters::Bind(this_00,param_1);
  FShaderParameter::Bind
            (&this->ShadowFadeFraction,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(&this->ShadowSharpen,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind
            (&this->LightPosition,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  return this;
}

// TShadowProjectionPS<5,0,1,0,0> @ 145575630

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

TShadowProjectionPS<5,0,1,0,0> * __thiscall
TShadowProjectionPS<5,0,1,0,0>::TShadowProjectionPS<5,0,1,0,0>(TShadowProjectionPS<5,0,1,0,0> *this)

{
  memset(this,0,0xe0);
  FShader::FShader((FShader *)this);
  (this->ProjectionParameters).ScreenToShadowMatrix.BufferIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.BaseIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.NumBytes = 0;
  (this->ProjectionParameters).SoftTransitionScale.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  return this;
}

// TShadowProjectionPS<5,0,0,1,0> @ 1455756c0

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

TShadowProjectionPS<5,0,0,1,0> * __thiscall
TShadowProjectionPS<5,0,0,1,0>::TShadowProjectionPS<5,0,0,1,0>
          (TShadowProjectionPS<5,0,0,1,0> *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShadowProjectionShaderParameters *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->ProjectionParameters;
  (this_00->ScreenToShadowMatrix).BufferIndex = 0;
  (this_00->ScreenToShadowMatrix).BaseIndex = 0;
  (this_00->ScreenToShadowMatrix).NumBytes = 0;
  (this_00->SoftTransitionScale).BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  FShadowProjectionShaderParameters::Bind(this_00,param_1);
  FShaderParameter::Bind
            (&this->ShadowFadeFraction,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(&this->ShadowSharpen,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind
            (&this->LightPosition,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  return this;
}

// TShadowProjectionPS<5,0,0,1,0> @ 1455757b0

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

TShadowProjectionPS<5,0,0,1,0> * __thiscall
TShadowProjectionPS<5,0,0,1,0>::TShadowProjectionPS<5,0,0,1,0>(TShadowProjectionPS<5,0,0,1,0> *this)

{
  memset(this,0,0xe0);
  FShader::FShader((FShader *)this);
  (this->ProjectionParameters).ScreenToShadowMatrix.BufferIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.BaseIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.NumBytes = 0;
  (this->ProjectionParameters).SoftTransitionScale.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  return this;
}

// TShadowProjectionPS<5,0,0,0,1> @ 145575840

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

TShadowProjectionPS<5,0,0,0,1> * __thiscall
TShadowProjectionPS<5,0,0,0,1>::TShadowProjectionPS<5,0,0,0,1>
          (TShadowProjectionPS<5,0,0,0,1> *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShadowProjectionShaderParameters *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->ProjectionParameters;
  (this_00->ScreenToShadowMatrix).BufferIndex = 0;
  (this_00->ScreenToShadowMatrix).BaseIndex = 0;
  (this_00->ScreenToShadowMatrix).NumBytes = 0;
  (this_00->SoftTransitionScale).BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  FShadowProjectionShaderParameters::Bind(this_00,param_1);
  FShaderParameter::Bind
            (&this->ShadowFadeFraction,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(&this->ShadowSharpen,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind
            (&this->LightPosition,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  return this;
}

// TShadowProjectionPS<5,0,0,0,1> @ 145575930

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

TShadowProjectionPS<5,0,0,0,1> * __thiscall
TShadowProjectionPS<5,0,0,0,1>::TShadowProjectionPS<5,0,0,0,1>(TShadowProjectionPS<5,0,0,0,1> *this)

{
  memset(this,0,0xe0);
  FShader::FShader((FShader *)this);
  (this->ProjectionParameters).ScreenToShadowMatrix.BufferIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.BaseIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.NumBytes = 0;
  (this->ProjectionParameters).SoftTransitionScale.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  return this;
}

// TShadowProjectionPS<5,0,0,0,0> @ 1455759c0

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

TShadowProjectionPS<5,0,0,0,0> * __thiscall
TShadowProjectionPS<5,0,0,0,0>::TShadowProjectionPS<5,0,0,0,0>
          (TShadowProjectionPS<5,0,0,0,0> *this,FShaderCompiledShaderInitializerType *param_1)

{
  FShadowProjectionShaderParameters *this_00;
  
  FGlobalShader::FGlobalShader((FGlobalShader *)this,param_1);
  this_00 = &this->ProjectionParameters;
  (this_00->ScreenToShadowMatrix).BufferIndex = 0;
  (this_00->ScreenToShadowMatrix).BaseIndex = 0;
  (this_00->ScreenToShadowMatrix).NumBytes = 0;
  (this_00->SoftTransitionScale).BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  FShadowProjectionShaderParameters::Bind(this_00,param_1);
  FShaderParameter::Bind
            (&this->ShadowFadeFraction,param_1->ParameterMap,L"ShadowFadeFraction",SPF_Optional);
  FShaderParameter::Bind(&this->ShadowSharpen,param_1->ParameterMap,L"ShadowSharpen",SPF_Optional);
  FShaderParameter::Bind
            (&this->LightPosition,param_1->ParameterMap,L"LightPositionAndInvRadius",SPF_Optional);
  return this;
}

// TShadowProjectionPS<5,0,0,0,0> @ 145575ab0

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

TShadowProjectionPS<5,0,0,0,0> * __thiscall
TShadowProjectionPS<5,0,0,0,0>::TShadowProjectionPS<5,0,0,0,0>(TShadowProjectionPS<5,0,0,0,0> *this)

{
  memset(this,0,0xe0);
  FShader::FShader((FShader *)this);
  (this->ProjectionParameters).ScreenToShadowMatrix.BufferIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.BaseIndex = 0;
  (this->ProjectionParameters).ScreenToShadowMatrix.NumBytes = 0;
  (this->ProjectionParameters).SoftTransitionScale.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).SoftTransitionScale.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowBufferSize.NumBytes = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowDepthTextureSampler.NumResources = 0;
  (this->ProjectionParameters).FadePlaneOffset.BufferIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.BaseIndex = 0;
  (this->ProjectionParameters).FadePlaneOffset.NumBytes = 0;
  (this->ProjectionParameters).InvFadePlaneLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvFadePlaneLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowTileOffsetAndSizeParam.NumBytes = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BufferIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.BaseIndex = 0;
  (this->ProjectionParameters).PerObjectShadowFadeStart.NumBytes = 0;
  (this->ProjectionParameters).InvPerObjectShadowFadeLength.BufferIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).InvPerObjectShadowFadeLength.BaseIndex = 0;
  *(undefined8 *)&(this->ProjectionParameters).ShadowNearAndFarDepth.NumBytes = 0;
  (this->ShadowFadeFraction).BufferIndex = 0;
  (this->ShadowFadeFraction).BaseIndex = 0;
  (this->ShadowFadeFraction).NumBytes = 0;
  (this->ShadowSharpen).BufferIndex = 0;
  *(undefined8 *)&(this->ShadowSharpen).BaseIndex = 0;
  (this->LightPosition).NumBytes = 0;
  return this;
}

// ConstructCompiledInstance @ 145587220

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
TShadowProjectionPS<1,1,0,1,0>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TShadowProjectionPS<1,1,0,1,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<1,1,0,1,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<1,1,0,1,0>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 145587260

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
TShadowProjectionPS<1,1,0,0,0>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TShadowProjectionPS<1,1,0,0,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<1,1,0,0,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<1,1,0,0,0>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 1455872a0

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
TShadowProjectionPS<1,0,0,1,0>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TShadowProjectionPS<1,0,0,1,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<1,0,0,1,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<1,0,0,1,0>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 1455872e0

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
TShadowProjectionPS<1,0,0,0,1>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TShadowProjectionPS<1,0,0,0,1> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<1,0,0,0,1> *)0x0) {
    pTVar1 = TShadowProjectionPS<1,0,0,0,1>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 145587320

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
TShadowProjectionPS<1,0,0,0,0>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TShadowProjectionPS<1,0,0,0,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<1,0,0,0,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<1,0,0,0,0>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 145587360

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
TShadowProjectionPS<2,1,0,1,0>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TShadowProjectionPS<2,1,0,1,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<2,1,0,1,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<2,1,0,1,0>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 1455873a0

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
TShadowProjectionPS<2,1,0,0,0>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TShadowProjectionPS<2,1,0,0,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<2,1,0,0,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<2,1,0,0,0>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 1455873e0

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
TShadowProjectionPS<2,0,0,1,0>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TShadowProjectionPS<2,0,0,1,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<2,0,0,1,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<2,0,0,1,0>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 145587420

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
TShadowProjectionPS<2,0,0,0,1>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TShadowProjectionPS<2,0,0,0,1> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<2,0,0,0,1> *)0x0) {
    pTVar1 = TShadowProjectionPS<2,0,0,0,1>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 145587460

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
TShadowProjectionPS<2,0,0,0,0>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TShadowProjectionPS<2,0,0,0,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<2,0,0,0,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<2,0,0,0,0>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 1455874a0

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
TShadowProjectionPS<3,1,0,1,0>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TShadowProjectionPS<3,1,0,1,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<3,1,0,1,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<3,1,0,1,0>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 1455874e0

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
TShadowProjectionPS<3,1,0,0,0>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TShadowProjectionPS<3,1,0,0,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<3,1,0,0,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<3,1,0,0,0>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 145587520

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
TShadowProjectionPS<3,0,0,1,0>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TShadowProjectionPS<3,0,0,1,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<3,0,0,1,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<3,0,0,1,0>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 145587560

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
TShadowProjectionPS<3,0,0,0,1>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TShadowProjectionPS<3,0,0,0,1> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<3,0,0,0,1> *)0x0) {
    pTVar1 = TShadowProjectionPS<3,0,0,0,1>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 1455875a0

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
TShadowProjectionPS<3,0,0,0,0>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TShadowProjectionPS<3,0,0,0,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<3,0,0,0,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<3,0,0,0,0>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 1455875e0

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
TShadowProjectionPS<4,1,0,1,0>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TShadowProjectionPS<4,1,0,1,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<4,1,0,1,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<4,1,0,1,0>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 145587620

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
TShadowProjectionPS<4,1,0,0,0>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TShadowProjectionPS<4,1,0,0,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<4,1,0,0,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<4,1,0,0,0>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 145587660

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
TShadowProjectionPS<4,0,0,1,0>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TShadowProjectionPS<4,0,0,1,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<4,0,0,1,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<4,0,0,1,0>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 1455876a0

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
TShadowProjectionPS<4,0,0,0,1>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TShadowProjectionPS<4,0,0,0,1> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<4,0,0,0,1> *)0x0) {
    pTVar1 = TShadowProjectionPS<4,0,0,0,1>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 1455876e0

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
TShadowProjectionPS<4,0,0,0,0>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TShadowProjectionPS<4,0,0,0,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<4,0,0,0,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<4,0,0,0,0>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 145587720

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
TShadowProjectionPS<5,1,0,1,0>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TShadowProjectionPS<5,1,0,1,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<5,1,0,1,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<5,1,0,1,0>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 145587760

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
TShadowProjectionPS<5,1,0,0,0>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TShadowProjectionPS<5,1,0,0,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<5,1,0,0,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<5,1,0,0,0>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 1455877a0

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
TShadowProjectionPS<5,0,0,1,0>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TShadowProjectionPS<5,0,0,1,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<5,0,0,1,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<5,0,0,1,0>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 1455877e0

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
TShadowProjectionPS<5,0,0,0,1>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TShadowProjectionPS<5,0,0,0,1> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<5,0,0,0,1> *)0x0) {
    pTVar1 = TShadowProjectionPS<5,0,0,0,1>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructCompiledInstance @ 145587820

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
TShadowProjectionPS<5,0,0,0,0>::ConstructCompiledInstance
          (FShaderCompiledShaderInitializerType *param_1)

{
  TShadowProjectionPS<5,0,0,0,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<5,0,0,0,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<5,0,0,0,0>(pTVar1,param_1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145589ce0

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

FShader * __cdecl TShadowProjectionPS<1,1,0,1,0>::ConstructSerializedInstance(void)

{
  TShadowProjectionPS<1,1,0,1,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<1,1,0,1,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<1,1,0,1,0>(pTVar1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145589d10

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

FShader * __cdecl TShadowProjectionPS<1,1,0,0,0>::ConstructSerializedInstance(void)

{
  TShadowProjectionPS<1,1,0,0,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<1,1,0,0,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<1,1,0,0,0>(pTVar1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145589d40

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

FShader * __cdecl TShadowProjectionPS<1,0,0,1,0>::ConstructSerializedInstance(void)

{
  TShadowProjectionPS<1,0,0,1,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<1,0,0,1,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<1,0,0,1,0>(pTVar1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145589d70

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

FShader * __cdecl TShadowProjectionPS<1,0,0,0,1>::ConstructSerializedInstance(void)

{
  TShadowProjectionPS<1,0,0,0,1> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<1,0,0,0,1> *)0x0) {
    pTVar1 = TShadowProjectionPS<1,0,0,0,1>(pTVar1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145589da0

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

FShader * __cdecl TShadowProjectionPS<1,0,0,0,0>::ConstructSerializedInstance(void)

{
  TShadowProjectionPS<1,0,0,0,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<1,0,0,0,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<1,0,0,0,0>(pTVar1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145589dd0

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

FShader * __cdecl TShadowProjectionPS<2,1,0,1,0>::ConstructSerializedInstance(void)

{
  TShadowProjectionPS<2,1,0,1,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<2,1,0,1,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<2,1,0,1,0>(pTVar1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145589e00

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

FShader * __cdecl TShadowProjectionPS<2,1,0,0,0>::ConstructSerializedInstance(void)

{
  TShadowProjectionPS<2,1,0,0,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<2,1,0,0,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<2,1,0,0,0>(pTVar1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145589e30

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

FShader * __cdecl TShadowProjectionPS<2,0,0,1,0>::ConstructSerializedInstance(void)

{
  TShadowProjectionPS<2,0,0,1,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<2,0,0,1,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<2,0,0,1,0>(pTVar1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145589e60

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

FShader * __cdecl TShadowProjectionPS<2,0,0,0,1>::ConstructSerializedInstance(void)

{
  TShadowProjectionPS<2,0,0,0,1> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<2,0,0,0,1> *)0x0) {
    pTVar1 = TShadowProjectionPS<2,0,0,0,1>(pTVar1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145589e90

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

FShader * __cdecl TShadowProjectionPS<2,0,0,0,0>::ConstructSerializedInstance(void)

{
  TShadowProjectionPS<2,0,0,0,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<2,0,0,0,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<2,0,0,0,0>(pTVar1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145589ec0

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

FShader * __cdecl TShadowProjectionPS<3,1,0,1,0>::ConstructSerializedInstance(void)

{
  TShadowProjectionPS<3,1,0,1,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<3,1,0,1,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<3,1,0,1,0>(pTVar1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145589ef0

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

FShader * __cdecl TShadowProjectionPS<3,1,0,0,0>::ConstructSerializedInstance(void)

{
  TShadowProjectionPS<3,1,0,0,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<3,1,0,0,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<3,1,0,0,0>(pTVar1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145589f20

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

FShader * __cdecl TShadowProjectionPS<3,0,0,1,0>::ConstructSerializedInstance(void)

{
  TShadowProjectionPS<3,0,0,1,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<3,0,0,1,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<3,0,0,1,0>(pTVar1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145589f50

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

FShader * __cdecl TShadowProjectionPS<3,0,0,0,1>::ConstructSerializedInstance(void)

{
  TShadowProjectionPS<3,0,0,0,1> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<3,0,0,0,1> *)0x0) {
    pTVar1 = TShadowProjectionPS<3,0,0,0,1>(pTVar1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145589f80

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

FShader * __cdecl TShadowProjectionPS<3,0,0,0,0>::ConstructSerializedInstance(void)

{
  TShadowProjectionPS<3,0,0,0,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<3,0,0,0,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<3,0,0,0,0>(pTVar1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145589fb0

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

FShader * __cdecl TShadowProjectionPS<4,1,0,1,0>::ConstructSerializedInstance(void)

{
  TShadowProjectionPS<4,1,0,1,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<4,1,0,1,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<4,1,0,1,0>(pTVar1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 145589fe0

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

FShader * __cdecl TShadowProjectionPS<4,1,0,0,0>::ConstructSerializedInstance(void)

{
  TShadowProjectionPS<4,1,0,0,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<4,1,0,0,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<4,1,0,0,0>(pTVar1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 14558a010

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

FShader * __cdecl TShadowProjectionPS<4,0,0,1,0>::ConstructSerializedInstance(void)

{
  TShadowProjectionPS<4,0,0,1,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<4,0,0,1,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<4,0,0,1,0>(pTVar1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 14558a040

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

FShader * __cdecl TShadowProjectionPS<4,0,0,0,1>::ConstructSerializedInstance(void)

{
  TShadowProjectionPS<4,0,0,0,1> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<4,0,0,0,1> *)0x0) {
    pTVar1 = TShadowProjectionPS<4,0,0,0,1>(pTVar1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 14558a070

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

FShader * __cdecl TShadowProjectionPS<4,0,0,0,0>::ConstructSerializedInstance(void)

{
  TShadowProjectionPS<4,0,0,0,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<4,0,0,0,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<4,0,0,0,0>(pTVar1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 14558a0a0

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

FShader * __cdecl TShadowProjectionPS<5,1,0,1,0>::ConstructSerializedInstance(void)

{
  TShadowProjectionPS<5,1,0,1,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<5,1,0,1,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<5,1,0,1,0>(pTVar1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 14558a0d0

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

FShader * __cdecl TShadowProjectionPS<5,1,0,0,0>::ConstructSerializedInstance(void)

{
  TShadowProjectionPS<5,1,0,0,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<5,1,0,0,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<5,1,0,0,0>(pTVar1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 14558a100

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

FShader * __cdecl TShadowProjectionPS<5,0,0,1,0>::ConstructSerializedInstance(void)

{
  TShadowProjectionPS<5,0,0,1,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<5,0,0,1,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<5,0,0,1,0>(pTVar1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 14558a130

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

FShader * __cdecl TShadowProjectionPS<5,0,0,0,1>::ConstructSerializedInstance(void)

{
  TShadowProjectionPS<5,0,0,0,1> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<5,0,0,0,1> *)0x0) {
    pTVar1 = TShadowProjectionPS<5,0,0,0,1>(pTVar1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// ConstructSerializedInstance @ 14558a160

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

FShader * __cdecl TShadowProjectionPS<5,0,0,0,0>::ConstructSerializedInstance(void)

{
  TShadowProjectionPS<5,0,0,0,0> *pTVar1;
  
  pTVar1 = ::operator_new(0x148);
  if (pTVar1 != (TShadowProjectionPS<5,0,0,0,0> *)0x0) {
    pTVar1 = TShadowProjectionPS<5,0,0,0,0>(pTVar1);
    return (FShader *)pTVar1;
  }
  return (FShader *)0x0;
}

// GetStaticType @ 1455a5000

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

FGlobalShaderType * __cdecl TShadowProjectionPS<1,1,0,1,0>::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FShadowProjectionPS1truetruefalse",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x148,(FShaderParametersMetadata *)0x0);
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
      atexit(`TShadowProjectionPS<1,1,0,1,0>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a5200

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

FGlobalShaderType * __cdecl TShadowProjectionPS<1,1,0,0,0>::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FShadowProjectionPS1truefalsefalse",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x148,(FShaderParametersMetadata *)0x0);
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
      atexit(`TShadowProjectionPS<1,1,0,0,0>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a5400

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

FGlobalShaderType * __cdecl TShadowProjectionPS<1,0,0,1,0>::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FShadowProjectionPS1falsetruefalse",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x148,(FShaderParametersMetadata *)0x0);
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
      atexit(`TShadowProjectionPS<1,0,0,1,0>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a5600

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

FGlobalShaderType * __cdecl TShadowProjectionPS<1,0,0,0,1>::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FShadowProjectionPS1falsefalsetrue",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x148,(FShaderParametersMetadata *)0x0);
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
      atexit(`TShadowProjectionPS<1,0,0,0,1>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a5800

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

FGlobalShaderType * __cdecl TShadowProjectionPS<1,0,0,0,0>::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FShadowProjectionPS1falsefalsefalse",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x148,(FShaderParametersMetadata *)0x0);
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
      atexit(`TShadowProjectionPS<1,0,0,0,0>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a5a00

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

FGlobalShaderType * __cdecl TShadowProjectionPS<2,1,0,1,0>::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FShadowProjectionPS2truetruefalse",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x148,(FShaderParametersMetadata *)0x0);
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
      atexit(`TShadowProjectionPS<2,1,0,1,0>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a5c00

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

FGlobalShaderType * __cdecl TShadowProjectionPS<2,1,0,0,0>::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FShadowProjectionPS2truefalsefalse",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x148,(FShaderParametersMetadata *)0x0);
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
      atexit(`TShadowProjectionPS<2,1,0,0,0>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a5e00

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

FGlobalShaderType * __cdecl TShadowProjectionPS<2,0,0,1,0>::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FShadowProjectionPS2falsetruefalse",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x148,(FShaderParametersMetadata *)0x0);
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
      atexit(`TShadowProjectionPS<2,0,0,1,0>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a6000

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

FGlobalShaderType * __cdecl TShadowProjectionPS<2,0,0,0,1>::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FShadowProjectionPS2falsefalsetrue",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x148,(FShaderParametersMetadata *)0x0);
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
      atexit(`TShadowProjectionPS<2,0,0,0,1>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a6200

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

FGlobalShaderType * __cdecl TShadowProjectionPS<2,0,0,0,0>::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FShadowProjectionPS2falsefalsefalse",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x148,(FShaderParametersMetadata *)0x0);
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
      atexit(`TShadowProjectionPS<2,0,0,0,0>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a6400

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

FGlobalShaderType * __cdecl TShadowProjectionPS<3,1,0,1,0>::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FShadowProjectionPS3truetruefalse",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x148,(FShaderParametersMetadata *)0x0);
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
      atexit(`TShadowProjectionPS<3,1,0,1,0>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a6600

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

FGlobalShaderType * __cdecl TShadowProjectionPS<3,1,0,0,0>::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FShadowProjectionPS3truefalsefalse",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x148,(FShaderParametersMetadata *)0x0);
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
      atexit(`TShadowProjectionPS<3,1,0,0,0>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a6800

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

FGlobalShaderType * __cdecl TShadowProjectionPS<3,0,0,1,0>::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FShadowProjectionPS3falsetruefalse",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x148,(FShaderParametersMetadata *)0x0);
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
      atexit(`TShadowProjectionPS<3,0,0,1,0>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a6a00

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

FGlobalShaderType * __cdecl TShadowProjectionPS<3,0,0,0,1>::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FShadowProjectionPS3falsefalsetrue",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x148,(FShaderParametersMetadata *)0x0);
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
      atexit(`TShadowProjectionPS<3,0,0,0,1>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a6c00

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

FGlobalShaderType * __cdecl TShadowProjectionPS<3,0,0,0,0>::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FShadowProjectionPS3falsefalsefalse",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x148,(FShaderParametersMetadata *)0x0);
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
      atexit(`TShadowProjectionPS<3,0,0,0,0>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a6e00

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

FGlobalShaderType * __cdecl TShadowProjectionPS<4,1,0,1,0>::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FShadowProjectionPS4truetruefalse",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x148,(FShaderParametersMetadata *)0x0);
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
      atexit(`TShadowProjectionPS<4,1,0,1,0>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a7000

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

FGlobalShaderType * __cdecl TShadowProjectionPS<4,1,0,0,0>::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FShadowProjectionPS4truefalsefalse",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x148,(FShaderParametersMetadata *)0x0);
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
      atexit(`TShadowProjectionPS<4,1,0,0,0>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a7200

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

FGlobalShaderType * __cdecl TShadowProjectionPS<4,0,0,1,0>::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FShadowProjectionPS4falsetruefalse",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x148,(FShaderParametersMetadata *)0x0);
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
      atexit(`TShadowProjectionPS<4,0,0,1,0>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a7400

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

FGlobalShaderType * __cdecl TShadowProjectionPS<4,0,0,0,1>::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FShadowProjectionPS4falsefalsetrue",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x148,(FShaderParametersMetadata *)0x0);
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
      atexit(`TShadowProjectionPS<4,0,0,0,1>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a7600

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

FGlobalShaderType * __cdecl TShadowProjectionPS<4,0,0,0,0>::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FShadowProjectionPS4falsefalsefalse",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x148,(FShaderParametersMetadata *)0x0);
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
      atexit(`TShadowProjectionPS<4,0,0,0,0>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a7800

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

FGlobalShaderType * __cdecl TShadowProjectionPS<5,1,0,1,0>::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FShadowProjectionPS5truetruefalse",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x148,(FShaderParametersMetadata *)0x0);
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
      atexit(`TShadowProjectionPS<5,1,0,1,0>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a7a00

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

FGlobalShaderType * __cdecl TShadowProjectionPS<5,1,0,0,0>::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FShadowProjectionPS5truefalsefalse",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x148,(FShaderParametersMetadata *)0x0);
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
      atexit(`TShadowProjectionPS<5,1,0,0,0>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a7c00

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

FGlobalShaderType * __cdecl TShadowProjectionPS<5,0,0,1,0>::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FShadowProjectionPS5falsetruefalse",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x148,(FShaderParametersMetadata *)0x0);
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
      atexit(`TShadowProjectionPS<5,0,0,1,0>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a7e00

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

FGlobalShaderType * __cdecl TShadowProjectionPS<5,0,0,0,1>::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FShadowProjectionPS5falsefalsetrue",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x148,(FShaderParametersMetadata *)0x0);
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
      atexit(`TShadowProjectionPS<5,0,0,0,1>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetStaticType @ 1455a8000

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

FGlobalShaderType * __cdecl TShadowProjectionPS<5,0,0,0,0>::GetStaticType(void)

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
                ((FShaderType *)&::StaticType,Global,pFVar4,L"FShadowProjectionPS5falsefalsefalse",
                 L"/Engine/Private/ShadowProjectionPixelShader.usf",L"Main",3,1,
                 ConstructSerializedInstance,ConstructCompiledInstance,ShouldCompilePermutationImpl,
                 ShouldPrecachePermutationImpl,FShader::GetRayTracingPayloadType,
                 FShader::GetShaderBindingLayout,0x148,(FShaderParametersMetadata *)0x0);
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
      atexit(`TShadowProjectionPS<5,0,0,0,0>::GetStaticType'::__l2::
             _dynamic_atexit_destructor_for__StaticType__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticType;
    }
  }
  return &::StaticType;
}

// GetTypeLayout @ 1455b0c20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TShadowProjectionPS<1,1,0,1,0>::GetTypeLayout(TShadowProjectionPS<1,1,0,1,0> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<1,1,0,1,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<1,1,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141a42 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141a20 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141a28 = ::TypeBuffer[0x10];
    DAT_155141a28_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141a28_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141a28_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141a28_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141a28_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141a28_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141a28_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,1,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141a30 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141a38 = 0x13c;
    _DAT_155141a3c = 1;
    _DAT_155141a40 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<1,1,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_1551411c2 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_1551411a0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1551411a8 = ::TypeBuffer[0x10];
    DAT_1551411a8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551411a8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551411a8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551411a8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551411a8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551411a8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551411a8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,1,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1551411b0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1551411b8 = 0x136;
    _DAT_1551411bc = 1;
    _DAT_1551411c0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<1,1,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f19a = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f178 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f180 = ::TypeBuffer[0x10];
    DAT_15513f180_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f180_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f180_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f180_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f180_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f180_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f180_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,1,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f188 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f190 = 0x130;
    _DAT_15513f194 = 1;
    _DAT_15513f198 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<1,1,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e792 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e770 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e778 = ::TypeBuffer[0x10];
    DAT_15513e778_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e778_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e778_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e778_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e778_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e778_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e778_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,1,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e780 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e788 = 0xe0;
    _DAT_15513e78c = 1;
    _DAT_15513e790 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// GetTypeLayout @ 1455b0c30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TShadowProjectionPS<1,1,0,0,0>::GetTypeLayout(TShadowProjectionPS<1,1,0,0,0> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<1,1,0,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<1,1,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141b32 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141b10 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141b18 = ::TypeBuffer[0x10];
    DAT_155141b18_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141b18_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141b18_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141b18_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141b18_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141b18_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141b18_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,1,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141b20 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141b28 = 0x13c;
    _DAT_155141b2c = 1;
    _DAT_155141b30 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<1,1,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_1551412b2 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155141290 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141298 = ::TypeBuffer[0x10];
    DAT_155141298_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141298_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141298_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141298_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141298_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141298_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141298_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,1,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1551412a0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1551412a8 = 0x136;
    _DAT_1551412ac = 1;
    _DAT_1551412b0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<1,1,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f28a = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f268 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f270 = ::TypeBuffer[0x10];
    DAT_15513f270_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f270_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f270_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f270_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f270_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f270_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f270_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,1,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f278 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f280 = 0x130;
    _DAT_15513f284 = 1;
    _DAT_15513f288 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<1,1,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e882 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e860 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e868 = ::TypeBuffer[0x10];
    DAT_15513e868_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e868_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e868_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e868_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e868_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e868_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e868_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,1,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e870 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e878 = 0xe0;
    _DAT_15513e87c = 1;
    _DAT_15513e880 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// GetTypeLayout @ 1455b0c40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TShadowProjectionPS<1,0,1,0,0>::GetTypeLayout(TShadowProjectionPS<1,0,1,0,0> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FShadowModulate;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<1,0,1,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<1,0,1,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141862 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141840 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141848 = ::TypeBuffer[0x10];
    DAT_155141848_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141848_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141848_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141848_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141848_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141848_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141848_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,0,1,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141850 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141858 = 0x13c;
    _DAT_15514185c = 1;
    _DAT_155141860 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<1,0,1,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155140fe2 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155140fc0 = FShaderParameter::StaticGetTypeLayout();
    DAT_155140fc8 = ::TypeBuffer[0x10];
    DAT_155140fc8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155140fc8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155140fc8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155140fc8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155140fc8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155140fc8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155140fc8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,0,1,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155140fd0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155140fd8 = 0x136;
    _DAT_155140fdc = 1;
    _DAT_155140fe0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<1,0,1,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513efba = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513ef98 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513efa0 = ::TypeBuffer[0x10];
    DAT_15513efa0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513efa0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513efa0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513efa0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513efa0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513efa0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513efa0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,0,1,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513efa8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513efb0 = 0x130;
    _DAT_15513efb4 = 1;
    _DAT_15513efb8 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<1,0,1,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e5b2 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e590 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e598 = ::TypeBuffer[0x10];
    DAT_15513e598_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e598_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e598_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e598_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e598_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e598_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e598_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,0,1,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e5a0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e5a8 = 0xe0;
    _DAT_15513e5ac = 1;
    _DAT_15513e5b0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// GetTypeLayout @ 1455b0c50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TShadowProjectionPS<1,0,0,1,0>::GetTypeLayout(TShadowProjectionPS<1,0,0,1,0> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<1,0,0,1,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<1,0,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141c22 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141c00 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141c08 = ::TypeBuffer[0x10];
    DAT_155141c08_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141c08_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141c08_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141c08_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141c08_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141c08_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141c08_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,0,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141c10 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141c18 = 0x13c;
    _DAT_155141c1c = 1;
    _DAT_155141c20 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<1,0,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_1551413a2 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155141380 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141388 = ::TypeBuffer[0x10];
    DAT_155141388_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141388_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141388_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141388_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141388_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141388_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141388_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,0,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141390 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141398 = 0x136;
    _DAT_15514139c = 1;
    _DAT_1551413a0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<1,0,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f37a = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f358 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f360 = ::TypeBuffer[0x10];
    DAT_15513f360_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f360_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f360_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f360_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f360_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f360_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f360_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,0,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f368 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f370 = 0x130;
    _DAT_15513f374 = 1;
    _DAT_15513f378 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<1,0,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e972 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e950 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e958 = ::TypeBuffer[0x10];
    DAT_15513e958_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e958_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e958_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e958_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e958_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e958_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e958_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,0,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e960 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e968 = 0xe0;
    _DAT_15513e96c = 1;
    _DAT_15513e970 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// GetTypeLayout @ 1455b0c60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TShadowProjectionPS<1,0,0,0,1>::GetTypeLayout(TShadowProjectionPS<1,0,0,0,1> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<1,0,0,0,1>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<1,0,0,0,1>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141952 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141930 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141938 = ::TypeBuffer[0x10];
    DAT_155141938_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141938_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141938_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141938_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141938_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141938_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141938_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,0,0,0,1>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141940 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141948 = 0x13c;
    _DAT_15514194c = 1;
    _DAT_155141950 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<1,0,0,0,1>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_1551410d2 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_1551410b0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1551410b8 = ::TypeBuffer[0x10];
    DAT_1551410b8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551410b8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551410b8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551410b8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551410b8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551410b8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551410b8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,0,0,0,1>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1551410c0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1551410c8 = 0x136;
    _DAT_1551410cc = 1;
    _DAT_1551410d0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<1,0,0,0,1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f0aa = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f088 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f090 = ::TypeBuffer[0x10];
    DAT_15513f090_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f090_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f090_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f090_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f090_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f090_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f090_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,0,0,0,1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f098 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f0a0 = 0x130;
    _DAT_15513f0a4 = 1;
    _DAT_15513f0a8 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<1,0,0,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e6a2 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e680 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e688 = ::TypeBuffer[0x10];
    DAT_15513e688_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e688_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e688_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e688_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e688_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e688_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e688_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,0,0,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e690 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e698 = 0xe0;
    _DAT_15513e69c = 1;
    _DAT_15513e6a0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// GetTypeLayout @ 1455b0c70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TShadowProjectionPS<1,0,0,0,0>::GetTypeLayout(TShadowProjectionPS<1,0,0,0,0> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<1,0,0,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<1,0,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141d12 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141cf0 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141cf8 = ::TypeBuffer[0x10];
    DAT_155141cf8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141cf8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141cf8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141cf8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141cf8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141cf8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141cf8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,0,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141d00 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141d08 = 0x13c;
    _DAT_155141d0c = 1;
    _DAT_155141d10 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<1,0,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155141492 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155141470 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141478 = ::TypeBuffer[0x10];
    DAT_155141478_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141478_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141478_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141478_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141478_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141478_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141478_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,0,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141480 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141488 = 0x136;
    _DAT_15514148c = 1;
    _DAT_155141490 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<1,0,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f46a = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f448 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f450 = ::TypeBuffer[0x10];
    DAT_15513f450_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f450_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f450_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f450_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f450_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f450_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f450_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,0,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f458 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f460 = 0x130;
    _DAT_15513f464 = 1;
    _DAT_15513f468 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<1,0,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513ea62 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513ea40 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513ea48 = ::TypeBuffer[0x10];
    DAT_15513ea48_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513ea48_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513ea48_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513ea48_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513ea48_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513ea48_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513ea48_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,0,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513ea50 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513ea58 = 0xe0;
    _DAT_15513ea5c = 1;
    _DAT_15513ea60 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// GetTypeLayout @ 1455b0c80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TShadowProjectionPS<2,1,0,1,0>::GetTypeLayout(TShadowProjectionPS<2,1,0,1,0> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<2,1,0,1,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<2,1,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141a12 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_1551419f0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1551419f8 = ::TypeBuffer[0x10];
    DAT_1551419f8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551419f8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551419f8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551419f8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551419f8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551419f8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551419f8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,1,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141a00 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141a08 = 0x13c;
    _DAT_155141a0c = 1;
    _DAT_155141a10 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<2,1,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155141192 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155141170 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141178 = ::TypeBuffer[0x10];
    DAT_155141178_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141178_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141178_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141178_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141178_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141178_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141178_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,1,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141180 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141188 = 0x136;
    _DAT_15514118c = 1;
    _DAT_155141190 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<2,1,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f16a = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f148 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f150 = ::TypeBuffer[0x10];
    DAT_15513f150_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f150_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f150_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f150_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f150_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f150_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f150_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,1,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f158 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f160 = 0x130;
    _DAT_15513f164 = 1;
    _DAT_15513f168 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<2,1,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e762 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e740 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e748 = ::TypeBuffer[0x10];
    DAT_15513e748_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e748_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e748_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e748_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e748_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e748_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e748_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,1,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e750 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e758 = 0xe0;
    _DAT_15513e75c = 1;
    _DAT_15513e760 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// GetTypeLayout @ 1455b0c90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TShadowProjectionPS<2,1,0,0,0>::GetTypeLayout(TShadowProjectionPS<2,1,0,0,0> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<2,1,0,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<2,1,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141b02 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141ae0 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141ae8 = ::TypeBuffer[0x10];
    DAT_155141ae8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141ae8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141ae8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141ae8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141ae8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141ae8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141ae8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,1,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141af0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141af8 = 0x13c;
    _DAT_155141afc = 1;
    _DAT_155141b00 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<2,1,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155141282 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155141260 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141268 = ::TypeBuffer[0x10];
    DAT_155141268_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141268_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141268_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141268_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141268_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141268_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141268_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,1,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141270 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141278 = 0x136;
    _DAT_15514127c = 1;
    _DAT_155141280 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<2,1,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f25a = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f238 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f240 = ::TypeBuffer[0x10];
    DAT_15513f240_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f240_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f240_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f240_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f240_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f240_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f240_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,1,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f248 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f250 = 0x130;
    _DAT_15513f254 = 1;
    _DAT_15513f258 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<2,1,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e852 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e830 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e838 = ::TypeBuffer[0x10];
    DAT_15513e838_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e838_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e838_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e838_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e838_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e838_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e838_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,1,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e840 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e848 = 0xe0;
    _DAT_15513e84c = 1;
    _DAT_15513e850 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// GetTypeLayout @ 1455b0ca0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TShadowProjectionPS<2,0,1,0,0>::GetTypeLayout(TShadowProjectionPS<2,0,1,0,0> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FShadowModulate;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<2,0,1,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<2,0,1,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141832 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141810 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141818 = ::TypeBuffer[0x10];
    DAT_155141818_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141818_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141818_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141818_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141818_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141818_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141818_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,0,1,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141820 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141828 = 0x13c;
    _DAT_15514182c = 1;
    _DAT_155141830 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<2,0,1,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155140fb2 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155140f90 = FShaderParameter::StaticGetTypeLayout();
    DAT_155140f98 = ::TypeBuffer[0x10];
    DAT_155140f98_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155140f98_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155140f98_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155140f98_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155140f98_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155140f98_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155140f98_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,0,1,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155140fa0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155140fa8 = 0x136;
    _DAT_155140fac = 1;
    _DAT_155140fb0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<2,0,1,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513ef5a = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513ef38 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513ef40 = ::TypeBuffer[0x10];
    DAT_15513ef40_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513ef40_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513ef40_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513ef40_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513ef40_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513ef40_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513ef40_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,0,1,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513ef48 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513ef50 = 0x130;
    _DAT_15513ef54 = 1;
    _DAT_15513ef58 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<2,0,1,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e552 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e530 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e538 = ::TypeBuffer[0x10];
    DAT_15513e538_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e538_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e538_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e538_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e538_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e538_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e538_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,0,1,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e540 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e548 = 0xe0;
    _DAT_15513e54c = 1;
    _DAT_15513e550 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// GetTypeLayout @ 1455b0cb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TShadowProjectionPS<2,0,0,1,0>::GetTypeLayout(TShadowProjectionPS<2,0,0,1,0> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<2,0,0,1,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<2,0,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141bf2 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141bd0 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141bd8 = ::TypeBuffer[0x10];
    DAT_155141bd8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141bd8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141bd8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141bd8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141bd8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141bd8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141bd8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,0,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141be0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141be8 = 0x13c;
    _DAT_155141bec = 1;
    _DAT_155141bf0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<2,0,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155141372 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155141350 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141358 = ::TypeBuffer[0x10];
    DAT_155141358_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141358_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141358_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141358_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141358_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141358_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141358_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,0,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141360 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141368 = 0x136;
    _DAT_15514136c = 1;
    _DAT_155141370 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<2,0,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f34a = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f328 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f330 = ::TypeBuffer[0x10];
    DAT_15513f330_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f330_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f330_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f330_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f330_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f330_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f330_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,0,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f338 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f340 = 0x130;
    _DAT_15513f344 = 1;
    _DAT_15513f348 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<2,0,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e942 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e920 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e928 = ::TypeBuffer[0x10];
    DAT_15513e928_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e928_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e928_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e928_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e928_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e928_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e928_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,0,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e930 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e938 = 0xe0;
    _DAT_15513e93c = 1;
    _DAT_15513e940 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// GetTypeLayout @ 1455b0cc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TShadowProjectionPS<2,0,0,0,1>::GetTypeLayout(TShadowProjectionPS<2,0,0,0,1> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<2,0,0,0,1>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<2,0,0,0,1>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141922 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141900 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141908 = ::TypeBuffer[0x10];
    DAT_155141908_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141908_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141908_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141908_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141908_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141908_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141908_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,0,0,0,1>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141910 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141918 = 0x13c;
    _DAT_15514191c = 1;
    _DAT_155141920 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<2,0,0,0,1>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_1551410a2 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155141080 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141088 = ::TypeBuffer[0x10];
    DAT_155141088_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141088_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141088_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141088_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141088_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141088_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141088_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,0,0,0,1>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141090 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141098 = 0x136;
    _DAT_15514109c = 1;
    _DAT_1551410a0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<2,0,0,0,1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f07a = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f058 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f060 = ::TypeBuffer[0x10];
    DAT_15513f060_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f060_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f060_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f060_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f060_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f060_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f060_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,0,0,0,1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f068 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f070 = 0x130;
    _DAT_15513f074 = 1;
    _DAT_15513f078 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<2,0,0,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e672 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e650 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e658 = ::TypeBuffer[0x10];
    DAT_15513e658_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e658_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e658_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e658_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e658_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e658_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e658_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,0,0,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e660 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e668 = 0xe0;
    _DAT_15513e66c = 1;
    _DAT_15513e670 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// GetTypeLayout @ 1455b0cd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TShadowProjectionPS<2,0,0,0,0>::GetTypeLayout(TShadowProjectionPS<2,0,0,0,0> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<2,0,0,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<2,0,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141ce2 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141cc0 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141cc8 = ::TypeBuffer[0x10];
    DAT_155141cc8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141cc8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141cc8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141cc8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141cc8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141cc8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141cc8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,0,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141cd0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141cd8 = 0x13c;
    _DAT_155141cdc = 1;
    _DAT_155141ce0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<2,0,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155141462 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155141440 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141448 = ::TypeBuffer[0x10];
    DAT_155141448_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141448_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141448_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141448_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141448_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141448_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141448_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,0,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141450 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141458 = 0x136;
    _DAT_15514145c = 1;
    _DAT_155141460 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<2,0,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f43a = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f418 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f420 = ::TypeBuffer[0x10];
    DAT_15513f420_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f420_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f420_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f420_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f420_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f420_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f420_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,0,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f428 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f430 = 0x130;
    _DAT_15513f434 = 1;
    _DAT_15513f438 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<2,0,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513ea32 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513ea10 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513ea18 = ::TypeBuffer[0x10];
    DAT_15513ea18_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513ea18_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513ea18_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513ea18_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513ea18_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513ea18_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513ea18_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,0,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513ea20 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513ea28 = 0xe0;
    _DAT_15513ea2c = 1;
    _DAT_15513ea30 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// GetTypeLayout @ 1455b0ce0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TShadowProjectionPS<3,1,0,1,0>::GetTypeLayout(TShadowProjectionPS<3,1,0,1,0> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<3,1,0,1,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<3,1,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_1551419e2 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_1551419c0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1551419c8 = ::TypeBuffer[0x10];
    DAT_1551419c8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551419c8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551419c8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551419c8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551419c8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551419c8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551419c8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,1,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1551419d0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1551419d8 = 0x13c;
    _DAT_1551419dc = 1;
    _DAT_1551419e0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<3,1,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155141162 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155141140 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141148 = ::TypeBuffer[0x10];
    DAT_155141148_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141148_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141148_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141148_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141148_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141148_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141148_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,1,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141150 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141158 = 0x136;
    _DAT_15514115c = 1;
    _DAT_155141160 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<3,1,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f13a = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f118 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f120 = ::TypeBuffer[0x10];
    DAT_15513f120_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f120_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f120_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f120_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f120_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f120_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f120_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,1,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f128 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f130 = 0x130;
    _DAT_15513f134 = 1;
    _DAT_15513f138 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<3,1,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e732 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e710 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e718 = ::TypeBuffer[0x10];
    DAT_15513e718_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e718_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e718_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e718_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e718_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e718_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e718_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,1,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e720 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e728 = 0xe0;
    _DAT_15513e72c = 1;
    _DAT_15513e730 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// GetTypeLayout @ 1455b0cf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TShadowProjectionPS<3,1,0,0,0>::GetTypeLayout(TShadowProjectionPS<3,1,0,0,0> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<3,1,0,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<3,1,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141ad2 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141ab0 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141ab8 = ::TypeBuffer[0x10];
    DAT_155141ab8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141ab8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141ab8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141ab8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141ab8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141ab8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141ab8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,1,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141ac0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141ac8 = 0x13c;
    _DAT_155141acc = 1;
    _DAT_155141ad0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<3,1,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155141252 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155141230 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141238 = ::TypeBuffer[0x10];
    DAT_155141238_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141238_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141238_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141238_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141238_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141238_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141238_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,1,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141240 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141248 = 0x136;
    _DAT_15514124c = 1;
    _DAT_155141250 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<3,1,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f22a = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f208 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f210 = ::TypeBuffer[0x10];
    DAT_15513f210_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f210_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f210_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f210_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f210_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f210_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f210_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,1,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f218 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f220 = 0x130;
    _DAT_15513f224 = 1;
    _DAT_15513f228 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<3,1,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e822 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e800 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e808 = ::TypeBuffer[0x10];
    DAT_15513e808_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e808_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e808_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e808_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e808_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e808_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e808_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,1,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e810 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e818 = 0xe0;
    _DAT_15513e81c = 1;
    _DAT_15513e820 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// GetTypeLayout @ 1455b0d00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TShadowProjectionPS<3,0,1,0,0>::GetTypeLayout(TShadowProjectionPS<3,0,1,0,0> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FShadowModulate;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<3,0,1,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<3,0,1,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141802 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_1551417e0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1551417e8 = ::TypeBuffer[0x10];
    DAT_1551417e8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551417e8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551417e8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551417e8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551417e8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551417e8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551417e8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,0,1,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1551417f0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1551417f8 = 0x13c;
    _DAT_1551417fc = 1;
    _DAT_155141800 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<3,0,1,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155140f82 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155140f60 = FShaderParameter::StaticGetTypeLayout();
    DAT_155140f68 = ::TypeBuffer[0x10];
    DAT_155140f68_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155140f68_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155140f68_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155140f68_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155140f68_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155140f68_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155140f68_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,0,1,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155140f70 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155140f78 = 0x136;
    _DAT_155140f7c = 1;
    _DAT_155140f80 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<3,0,1,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513eefa = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513eed8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513eee0 = ::TypeBuffer[0x10];
    DAT_15513eee0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513eee0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513eee0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513eee0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513eee0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513eee0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513eee0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,0,1,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513eee8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513eef0 = 0x130;
    _DAT_15513eef4 = 1;
    _DAT_15513eef8 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<3,0,1,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e4f2 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e4d0 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e4d8 = ::TypeBuffer[0x10];
    DAT_15513e4d8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e4d8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e4d8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e4d8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e4d8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e4d8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e4d8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,0,1,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e4e0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e4e8 = 0xe0;
    _DAT_15513e4ec = 1;
    _DAT_15513e4f0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// GetTypeLayout @ 1455b0d10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TShadowProjectionPS<3,0,0,1,0>::GetTypeLayout(TShadowProjectionPS<3,0,0,1,0> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<3,0,0,1,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<3,0,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141bc2 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141ba0 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141ba8 = ::TypeBuffer[0x10];
    DAT_155141ba8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141ba8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141ba8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141ba8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141ba8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141ba8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141ba8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,0,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141bb0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141bb8 = 0x13c;
    _DAT_155141bbc = 1;
    _DAT_155141bc0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<3,0,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155141342 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155141320 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141328 = ::TypeBuffer[0x10];
    DAT_155141328_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141328_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141328_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141328_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141328_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141328_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141328_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,0,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141330 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141338 = 0x136;
    _DAT_15514133c = 1;
    _DAT_155141340 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<3,0,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f31a = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f2f8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f300 = ::TypeBuffer[0x10];
    DAT_15513f300_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f300_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f300_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f300_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f300_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f300_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f300_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,0,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f308 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f310 = 0x130;
    _DAT_15513f314 = 1;
    _DAT_15513f318 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<3,0,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e912 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e8f0 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e8f8 = ::TypeBuffer[0x10];
    DAT_15513e8f8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e8f8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e8f8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e8f8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e8f8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e8f8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e8f8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,0,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e900 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e908 = 0xe0;
    _DAT_15513e90c = 1;
    _DAT_15513e910 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// GetTypeLayout @ 1455b0d20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TShadowProjectionPS<3,0,0,0,1>::GetTypeLayout(TShadowProjectionPS<3,0,0,0,1> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<3,0,0,0,1>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<3,0,0,0,1>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_1551418f2 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_1551418d0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1551418d8 = ::TypeBuffer[0x10];
    DAT_1551418d8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551418d8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551418d8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551418d8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551418d8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551418d8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551418d8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,0,0,0,1>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1551418e0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1551418e8 = 0x13c;
    _DAT_1551418ec = 1;
    _DAT_1551418f0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<3,0,0,0,1>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155141072 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155141050 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141058 = ::TypeBuffer[0x10];
    DAT_155141058_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141058_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141058_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141058_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141058_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141058_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141058_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,0,0,0,1>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141060 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141068 = 0x136;
    _DAT_15514106c = 1;
    _DAT_155141070 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<3,0,0,0,1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f04a = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f028 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f030 = ::TypeBuffer[0x10];
    DAT_15513f030_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f030_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f030_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f030_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f030_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f030_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f030_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,0,0,0,1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f038 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f040 = 0x130;
    _DAT_15513f044 = 1;
    _DAT_15513f048 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<3,0,0,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e642 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e620 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e628 = ::TypeBuffer[0x10];
    DAT_15513e628_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e628_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e628_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e628_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e628_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e628_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e628_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,0,0,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e630 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e638 = 0xe0;
    _DAT_15513e63c = 1;
    _DAT_15513e640 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// GetTypeLayout @ 1455b0d30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TShadowProjectionPS<3,0,0,0,0>::GetTypeLayout(TShadowProjectionPS<3,0,0,0,0> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<3,0,0,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<3,0,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141cb2 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141c90 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141c98 = ::TypeBuffer[0x10];
    DAT_155141c98_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141c98_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141c98_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141c98_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141c98_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141c98_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141c98_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,0,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141ca0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141ca8 = 0x13c;
    _DAT_155141cac = 1;
    _DAT_155141cb0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<3,0,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155141432 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155141410 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141418 = ::TypeBuffer[0x10];
    DAT_155141418_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141418_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141418_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141418_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141418_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141418_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141418_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,0,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141420 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141428 = 0x136;
    _DAT_15514142c = 1;
    _DAT_155141430 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<3,0,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f40a = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f3e8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f3f0 = ::TypeBuffer[0x10];
    DAT_15513f3f0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f3f0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f3f0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f3f0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f3f0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f3f0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f3f0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,0,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f3f8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f400 = 0x130;
    _DAT_15513f404 = 1;
    _DAT_15513f408 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<3,0,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513ea02 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e9e0 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e9e8 = ::TypeBuffer[0x10];
    DAT_15513e9e8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e9e8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e9e8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e9e8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e9e8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e9e8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e9e8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,0,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e9f0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e9f8 = 0xe0;
    _DAT_15513e9fc = 1;
    _DAT_15513ea00 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// GetTypeLayout @ 1455b0d40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TShadowProjectionPS<4,1,0,1,0>::GetTypeLayout(TShadowProjectionPS<4,1,0,1,0> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<4,1,0,1,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<4,1,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_1551419b2 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141990 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141998 = ::TypeBuffer[0x10];
    DAT_155141998_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141998_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141998_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141998_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141998_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141998_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141998_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,1,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1551419a0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1551419a8 = 0x13c;
    _DAT_1551419ac = 1;
    _DAT_1551419b0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<4,1,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155141132 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155141110 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141118 = ::TypeBuffer[0x10];
    DAT_155141118_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141118_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141118_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141118_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141118_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141118_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141118_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,1,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141120 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141128 = 0x136;
    _DAT_15514112c = 1;
    _DAT_155141130 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<4,1,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f10a = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f0e8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f0f0 = ::TypeBuffer[0x10];
    DAT_15513f0f0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f0f0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f0f0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f0f0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f0f0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f0f0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f0f0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,1,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f0f8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f100 = 0x130;
    _DAT_15513f104 = 1;
    _DAT_15513f108 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<4,1,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e702 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e6e0 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e6e8 = ::TypeBuffer[0x10];
    DAT_15513e6e8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e6e8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e6e8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e6e8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e6e8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e6e8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e6e8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,1,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e6f0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e6f8 = 0xe0;
    _DAT_15513e6fc = 1;
    _DAT_15513e700 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// GetTypeLayout @ 1455b0d50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TShadowProjectionPS<4,1,0,0,0>::GetTypeLayout(TShadowProjectionPS<4,1,0,0,0> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<4,1,0,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<4,1,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141aa2 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141a80 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141a88 = ::TypeBuffer[0x10];
    DAT_155141a88_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141a88_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141a88_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141a88_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141a88_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141a88_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141a88_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,1,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141a90 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141a98 = 0x13c;
    _DAT_155141a9c = 1;
    _DAT_155141aa0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<4,1,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155141222 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155141200 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141208 = ::TypeBuffer[0x10];
    DAT_155141208_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141208_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141208_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141208_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141208_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141208_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141208_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,1,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141210 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141218 = 0x136;
    _DAT_15514121c = 1;
    _DAT_155141220 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<4,1,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f1fa = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f1d8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f1e0 = ::TypeBuffer[0x10];
    DAT_15513f1e0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f1e0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f1e0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f1e0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f1e0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f1e0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f1e0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,1,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f1e8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f1f0 = 0x130;
    _DAT_15513f1f4 = 1;
    _DAT_15513f1f8 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<4,1,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e7f2 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e7d0 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e7d8 = ::TypeBuffer[0x10];
    DAT_15513e7d8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e7d8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e7d8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e7d8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e7d8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e7d8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e7d8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,1,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e7e0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e7e8 = 0xe0;
    _DAT_15513e7ec = 1;
    _DAT_15513e7f0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// GetTypeLayout @ 1455b0d60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TShadowProjectionPS<4,0,1,0,0>::GetTypeLayout(TShadowProjectionPS<4,0,1,0,0> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FShadowModulate;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<4,0,1,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<4,0,1,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_1551417d2 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_1551417b0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1551417b8 = ::TypeBuffer[0x10];
    DAT_1551417b8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551417b8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551417b8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551417b8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551417b8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551417b8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551417b8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,0,1,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1551417c0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1551417c8 = 0x13c;
    _DAT_1551417cc = 1;
    _DAT_1551417d0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<4,0,1,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155140f52 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155140f30 = FShaderParameter::StaticGetTypeLayout();
    DAT_155140f38 = ::TypeBuffer[0x10];
    DAT_155140f38_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155140f38_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155140f38_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155140f38_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155140f38_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155140f38_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155140f38_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,0,1,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155140f40 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155140f48 = 0x136;
    _DAT_155140f4c = 1;
    _DAT_155140f50 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<4,0,1,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513ee9a = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513ee78 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513ee80 = ::TypeBuffer[0x10];
    DAT_15513ee80_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513ee80_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513ee80_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513ee80_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513ee80_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513ee80_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513ee80_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,0,1,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513ee88 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513ee90 = 0x130;
    _DAT_15513ee94 = 1;
    _DAT_15513ee98 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<4,0,1,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e492 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e470 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e478 = ::TypeBuffer[0x10];
    DAT_15513e478_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e478_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e478_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e478_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e478_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e478_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e478_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,0,1,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e480 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e488 = 0xe0;
    _DAT_15513e48c = 1;
    _DAT_15513e490 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// GetTypeLayout @ 1455b0d70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TShadowProjectionPS<4,0,0,1,0>::GetTypeLayout(TShadowProjectionPS<4,0,0,1,0> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<4,0,0,1,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<4,0,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141b92 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141b70 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141b78 = ::TypeBuffer[0x10];
    DAT_155141b78_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141b78_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141b78_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141b78_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141b78_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141b78_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141b78_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,0,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141b80 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141b88 = 0x13c;
    _DAT_155141b8c = 1;
    _DAT_155141b90 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<4,0,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155141312 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_1551412f0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1551412f8 = ::TypeBuffer[0x10];
    DAT_1551412f8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551412f8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551412f8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551412f8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551412f8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551412f8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551412f8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,0,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141300 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141308 = 0x136;
    _DAT_15514130c = 1;
    _DAT_155141310 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<4,0,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f2ea = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f2c8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f2d0 = ::TypeBuffer[0x10];
    DAT_15513f2d0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f2d0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f2d0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f2d0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f2d0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f2d0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f2d0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,0,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f2d8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f2e0 = 0x130;
    _DAT_15513f2e4 = 1;
    _DAT_15513f2e8 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<4,0,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e8e2 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e8c0 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e8c8 = ::TypeBuffer[0x10];
    DAT_15513e8c8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e8c8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e8c8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e8c8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e8c8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e8c8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e8c8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,0,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e8d0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e8d8 = 0xe0;
    _DAT_15513e8dc = 1;
    _DAT_15513e8e0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// GetTypeLayout @ 1455b0d80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TShadowProjectionPS<4,0,0,0,1>::GetTypeLayout(TShadowProjectionPS<4,0,0,0,1> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<4,0,0,0,1>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<4,0,0,0,1>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_1551418c2 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_1551418a0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1551418a8 = ::TypeBuffer[0x10];
    DAT_1551418a8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551418a8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551418a8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551418a8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551418a8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551418a8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551418a8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,0,0,0,1>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1551418b0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1551418b8 = 0x13c;
    _DAT_1551418bc = 1;
    _DAT_1551418c0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<4,0,0,0,1>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155141042 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155141020 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141028 = ::TypeBuffer[0x10];
    DAT_155141028_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141028_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141028_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141028_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141028_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141028_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141028_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,0,0,0,1>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141030 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141038 = 0x136;
    _DAT_15514103c = 1;
    _DAT_155141040 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<4,0,0,0,1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f01a = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513eff8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f000 = ::TypeBuffer[0x10];
    DAT_15513f000_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f000_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f000_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f000_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f000_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f000_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f000_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,0,0,0,1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f008 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f010 = 0x130;
    _DAT_15513f014 = 1;
    _DAT_15513f018 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<4,0,0,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e612 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e5f0 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e5f8 = ::TypeBuffer[0x10];
    DAT_15513e5f8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e5f8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e5f8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e5f8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e5f8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e5f8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e5f8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,0,0,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e600 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e608 = 0xe0;
    _DAT_15513e60c = 1;
    _DAT_15513e610 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// GetTypeLayout @ 1455b0d90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TShadowProjectionPS<4,0,0,0,0>::GetTypeLayout(TShadowProjectionPS<4,0,0,0,0> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<4,0,0,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<4,0,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141c82 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141c60 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141c68 = ::TypeBuffer[0x10];
    DAT_155141c68_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141c68_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141c68_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141c68_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141c68_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141c68_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141c68_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,0,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141c70 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141c78 = 0x13c;
    _DAT_155141c7c = 1;
    _DAT_155141c80 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<4,0,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155141402 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_1551413e0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1551413e8 = ::TypeBuffer[0x10];
    DAT_1551413e8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551413e8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551413e8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551413e8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551413e8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551413e8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551413e8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,0,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1551413f0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1551413f8 = 0x136;
    _DAT_1551413fc = 1;
    _DAT_155141400 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<4,0,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f3da = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f3b8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f3c0 = ::TypeBuffer[0x10];
    DAT_15513f3c0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f3c0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f3c0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f3c0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f3c0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f3c0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f3c0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,0,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f3c8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f3d0 = 0x130;
    _DAT_15513f3d4 = 1;
    _DAT_15513f3d8 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<4,0,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e9d2 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e9b0 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e9b8 = ::TypeBuffer[0x10];
    DAT_15513e9b8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e9b8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e9b8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e9b8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e9b8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e9b8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e9b8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,0,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e9c0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e9c8 = 0xe0;
    _DAT_15513e9cc = 1;
    _DAT_15513e9d0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// GetTypeLayout @ 1455b0da0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TShadowProjectionPS<5,1,0,1,0>::GetTypeLayout(TShadowProjectionPS<5,1,0,1,0> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<5,1,0,1,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<5,1,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141982 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141960 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141968 = ::TypeBuffer[0x10];
    DAT_155141968_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141968_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141968_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141968_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141968_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141968_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141968_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,1,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141970 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141978 = 0x13c;
    _DAT_15514197c = 1;
    _DAT_155141980 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<5,1,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155141102 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_1551410e0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1551410e8 = ::TypeBuffer[0x10];
    DAT_1551410e8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551410e8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551410e8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551410e8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551410e8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551410e8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551410e8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,1,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1551410f0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1551410f8 = 0x136;
    _DAT_1551410fc = 1;
    _DAT_155141100 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<5,1,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f0da = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f0b8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f0c0 = ::TypeBuffer[0x10];
    DAT_15513f0c0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f0c0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f0c0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f0c0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f0c0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f0c0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f0c0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,1,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f0c8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f0d0 = 0x130;
    _DAT_15513f0d4 = 1;
    _DAT_15513f0d8 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<5,1,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e6d2 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e6b0 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e6b8 = ::TypeBuffer[0x10];
    DAT_15513e6b8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e6b8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e6b8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e6b8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e6b8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e6b8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e6b8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,1,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e6c0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e6c8 = 0xe0;
    _DAT_15513e6cc = 1;
    _DAT_15513e6d0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// GetTypeLayout @ 1455b0db0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TShadowProjectionPS<5,1,0,0,0>::GetTypeLayout(TShadowProjectionPS<5,1,0,0,0> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<5,1,0,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<5,1,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141a72 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141a50 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141a58 = ::TypeBuffer[0x10];
    DAT_155141a58_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141a58_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141a58_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141a58_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141a58_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141a58_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141a58_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,1,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141a60 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141a68 = 0x13c;
    _DAT_155141a6c = 1;
    _DAT_155141a70 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<5,1,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_1551411f2 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_1551411d0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1551411d8 = ::TypeBuffer[0x10];
    DAT_1551411d8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551411d8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551411d8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551411d8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551411d8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551411d8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551411d8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,1,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1551411e0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1551411e8 = 0x136;
    _DAT_1551411ec = 1;
    _DAT_1551411f0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<5,1,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f1ca = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f1a8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f1b0 = ::TypeBuffer[0x10];
    DAT_15513f1b0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f1b0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f1b0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f1b0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f1b0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f1b0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f1b0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,1,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f1b8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f1c0 = 0x130;
    _DAT_15513f1c4 = 1;
    _DAT_15513f1c8 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<5,1,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e7c2 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e7a0 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e7a8 = ::TypeBuffer[0x10];
    DAT_15513e7a8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e7a8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e7a8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e7a8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e7a8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e7a8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e7a8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,1,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e7b0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e7b8 = 0xe0;
    _DAT_15513e7bc = 1;
    _DAT_15513e7c0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// GetTypeLayout @ 1455b0dc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TShadowProjectionPS<5,0,1,0,0>::GetTypeLayout(TShadowProjectionPS<5,0,1,0,0> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FShadowModulate;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<5,0,1,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<5,0,1,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_1551417a2 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141780 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141788 = ::TypeBuffer[0x10];
    DAT_155141788_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141788_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141788_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141788_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141788_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141788_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141788_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,0,1,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141790 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141798 = 0x13c;
    _DAT_15514179c = 1;
    _DAT_1551417a0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<5,0,1,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155140f22 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155140f00 = FShaderParameter::StaticGetTypeLayout();
    DAT_155140f08 = ::TypeBuffer[0x10];
    DAT_155140f08_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155140f08_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155140f08_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155140f08_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155140f08_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155140f08_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155140f08_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,0,1,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155140f10 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155140f18 = 0x136;
    _DAT_155140f1c = 1;
    _DAT_155140f20 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<5,0,1,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513ee3a = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513ee18 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513ee20 = ::TypeBuffer[0x10];
    DAT_15513ee20_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513ee20_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513ee20_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513ee20_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513ee20_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513ee20_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513ee20_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,0,1,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513ee28 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513ee30 = 0x130;
    _DAT_15513ee34 = 1;
    _DAT_15513ee38 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<5,0,1,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e432 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e410 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e418 = ::TypeBuffer[0x10];
    DAT_15513e418_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e418_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e418_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e418_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e418_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e418_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e418_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,0,1,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e420 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e428 = 0xe0;
    _DAT_15513e42c = 1;
    _DAT_15513e430 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// GetTypeLayout @ 1455b0dd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TShadowProjectionPS<5,0,0,1,0>::GetTypeLayout(TShadowProjectionPS<5,0,0,1,0> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<5,0,0,1,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<5,0,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141b62 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141b40 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141b48 = ::TypeBuffer[0x10];
    DAT_155141b48_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141b48_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141b48_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141b48_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141b48_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141b48_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141b48_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,0,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141b50 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141b58 = 0x13c;
    _DAT_155141b5c = 1;
    _DAT_155141b60 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<5,0,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_1551412e2 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_1551412c0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1551412c8 = ::TypeBuffer[0x10];
    DAT_1551412c8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551412c8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551412c8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551412c8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551412c8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551412c8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551412c8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,0,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1551412d0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1551412d8 = 0x136;
    _DAT_1551412dc = 1;
    _DAT_1551412e0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<5,0,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f2ba = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f298 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f2a0 = ::TypeBuffer[0x10];
    DAT_15513f2a0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f2a0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f2a0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f2a0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f2a0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f2a0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f2a0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,0,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f2a8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f2b0 = 0x130;
    _DAT_15513f2b4 = 1;
    _DAT_15513f2b8 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<5,0,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e8b2 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e890 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e898 = ::TypeBuffer[0x10];
    DAT_15513e898_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e898_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e898_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e898_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e898_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e898_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e898_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,0,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e8a0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e8a8 = 0xe0;
    _DAT_15513e8ac = 1;
    _DAT_15513e8b0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// GetTypeLayout @ 1455b0de0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TShadowProjectionPS<5,0,0,0,1>::GetTypeLayout(TShadowProjectionPS<5,0,0,0,1> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<5,0,0,0,1>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<5,0,0,0,1>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141892 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141870 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141878 = ::TypeBuffer[0x10];
    DAT_155141878_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141878_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141878_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141878_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141878_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141878_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141878_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,0,0,0,1>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141880 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141888 = 0x13c;
    _DAT_15514188c = 1;
    _DAT_155141890 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<5,0,0,0,1>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155141012 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155140ff0 = FShaderParameter::StaticGetTypeLayout();
    DAT_155140ff8 = ::TypeBuffer[0x10];
    DAT_155140ff8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155140ff8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155140ff8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155140ff8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155140ff8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155140ff8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155140ff8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,0,0,0,1>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141000 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141008 = 0x136;
    _DAT_15514100c = 1;
    _DAT_155141010 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<5,0,0,0,1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513efea = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513efc8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513efd0 = ::TypeBuffer[0x10];
    DAT_15513efd0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513efd0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513efd0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513efd0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513efd0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513efd0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513efd0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,0,0,0,1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513efd8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513efe0 = 0x130;
    _DAT_15513efe4 = 1;
    _DAT_15513efe8 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<5,0,0,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e5e2 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e5c0 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e5c8 = ::TypeBuffer[0x10];
    DAT_15513e5c8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e5c8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e5c8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e5c8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e5c8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e5c8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e5c8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,0,0,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e5d0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e5d8 = 0xe0;
    _DAT_15513e5dc = 1;
    _DAT_15513e5e0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// GetTypeLayout @ 1455b0df0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
TShadowProjectionPS<5,0,0,0,0>::GetTypeLayout(TShadowProjectionPS<5,0,0,0,0> *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<5,0,0,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<5,0,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141c52 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141c30 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141c38 = ::TypeBuffer[0x10];
    DAT_155141c38_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141c38_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141c38_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141c38_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141c38_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141c38_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141c38_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,0,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141c40 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141c48 = 0x13c;
    _DAT_155141c4c = 1;
    _DAT_155141c50 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<5,0,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_1551413d2 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_1551413b0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1551413b8 = ::TypeBuffer[0x10];
    DAT_1551413b8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551413b8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551413b8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551413b8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551413b8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551413b8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551413b8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,0,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1551413c0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1551413c8 = 0x136;
    _DAT_1551413cc = 1;
    _DAT_1551413d0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<5,0,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f3aa = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f388 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f390 = ::TypeBuffer[0x10];
    DAT_15513f390_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f390_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f390_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f390_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f390_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f390_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f390_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,0,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f398 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f3a0 = 0x130;
    _DAT_15513f3a4 = 1;
    _DAT_15513f3a8 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<5,0,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e9a2 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e980 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e988 = ::TypeBuffer[0x10];
    DAT_15513e988_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e988_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e988_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e988_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e988_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e988_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e988_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,0,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e990 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e998 = 0xe0;
    _DAT_15513e99c = 1;
    _DAT_15513e9a0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// InternalDestroy @ 1455b6620

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
TShadowProjectionPS<1,1,0,1,0>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x148);
  return;
}

// InternalDestroy @ 1455b6660

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
TShadowProjectionPS<1,1,0,0,0>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x148);
  return;
}

// InternalDestroy @ 1455b66a0

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
TShadowProjectionPS<1,0,1,0,0>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x148);
  return;
}

// InternalDestroy @ 1455b66e0

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
TShadowProjectionPS<1,0,0,1,0>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x148);
  return;
}

// InternalDestroy @ 1455b6720

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
TShadowProjectionPS<1,0,0,0,1>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x148);
  return;
}

// InternalDestroy @ 1455b6760

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
TShadowProjectionPS<1,0,0,0,0>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x148);
  return;
}

// InternalDestroy @ 1455b67a0

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
TShadowProjectionPS<2,1,0,1,0>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x148);
  return;
}

// InternalDestroy @ 1455b67e0

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
TShadowProjectionPS<2,1,0,0,0>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x148);
  return;
}

// InternalDestroy @ 1455b6820

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
TShadowProjectionPS<2,0,1,0,0>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x148);
  return;
}

// InternalDestroy @ 1455b6860

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
TShadowProjectionPS<2,0,0,1,0>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x148);
  return;
}

// InternalDestroy @ 1455b68a0

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
TShadowProjectionPS<2,0,0,0,1>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x148);
  return;
}

// InternalDestroy @ 1455b68e0

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
TShadowProjectionPS<2,0,0,0,0>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x148);
  return;
}

// InternalDestroy @ 1455b6920

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
TShadowProjectionPS<3,1,0,1,0>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x148);
  return;
}

// InternalDestroy @ 1455b6960

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
TShadowProjectionPS<3,1,0,0,0>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x148);
  return;
}

// InternalDestroy @ 1455b69a0

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
TShadowProjectionPS<3,0,1,0,0>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x148);
  return;
}

// InternalDestroy @ 1455b69e0

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
TShadowProjectionPS<3,0,0,1,0>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x148);
  return;
}

// InternalDestroy @ 1455b6a20

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
TShadowProjectionPS<3,0,0,0,1>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x148);
  return;
}

// InternalDestroy @ 1455b6a60

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
TShadowProjectionPS<3,0,0,0,0>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x148);
  return;
}

// InternalDestroy @ 1455b6aa0

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
TShadowProjectionPS<4,1,0,1,0>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x148);
  return;
}

// InternalDestroy @ 1455b6ae0

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
TShadowProjectionPS<4,1,0,0,0>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x148);
  return;
}

// InternalDestroy @ 1455b6b20

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
TShadowProjectionPS<4,0,1,0,0>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x148);
  return;
}

// InternalDestroy @ 1455b6b60

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
TShadowProjectionPS<4,0,0,1,0>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x148);
  return;
}

// InternalDestroy @ 1455b6ba0

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
TShadowProjectionPS<4,0,0,0,1>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x148);
  return;
}

// InternalDestroy @ 1455b6be0

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
TShadowProjectionPS<4,0,0,0,0>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x148);
  return;
}

// InternalDestroy @ 1455b6c20

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
TShadowProjectionPS<5,1,0,1,0>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x148);
  return;
}

// InternalDestroy @ 1455b6c60

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
TShadowProjectionPS<5,1,0,0,0>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x148);
  return;
}

// InternalDestroy @ 1455b6ca0

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
TShadowProjectionPS<5,0,1,0,0>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x148);
  return;
}

// InternalDestroy @ 1455b6ce0

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
TShadowProjectionPS<5,0,0,1,0>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x148);
  return;
}

// InternalDestroy @ 1455b6d20

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
TShadowProjectionPS<5,0,0,0,1>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x148);
  return;
}

// InternalDestroy @ 1455b6d60

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
TShadowProjectionPS<5,0,0,0,0>::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FShader::~FShader(param_1);
  }
  memset(param_1,0xfe,0x148);
  return;
}

// SetParameters @ 1455ce010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TShadowProjectionPS<1,1,0,1,0>::SetParameters
          (TShadowProjectionPS<1,1,0,1,0> *this,FRHIBatchedShaderParameters *param_1,int param_2,
          FSceneView *param_3,FProjectedShadowInfo *param_4,bool param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  FSceneInterface *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  FShaderParametersMetadata *pFVar11;
  FHashedName FVar12;
  FShaderUniformBufferParameter *pFVar13;
  ForElementType<float> FVar14;
  uint uVar15;
  FHashedName local_res8;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FHashedName local_res20;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  double local_68;
  
  pFVar9 = param_4;
  local_68 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Z;
  dVar5 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.X;
  dVar6 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Y;
  FShadowProjectionShaderParameters::Set
            (&this->ProjectionParameters,param_1,param_3,param_4,false,
             0.0 < (param_4->CascadeSettings).FadePlaneLength,false);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  uVar15 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar15 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar15 == 0) {
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
  uVar15 = (uint)uVar1;
  FVar14 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  if (uVar15 != 0) {
    if (FVar14 == (ForElementType<float>)0x0) {
      FVar14 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar15,
               (void *)((longlong)FVar14 + (longlong)param_2 * 4));
  }
  fVar8 = __real_3f800000;
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar15 = (uint)uVar1;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + __real_3f800000;
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar15,&param_4);
  }
  local_7c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  uVar1 = (this->LightPosition).NumBytes;
  uVar15 = (uint)uVar1;
  local_7c = fVar8 / local_7c;
  if (0x10 < uVar1) {
    uVar15 = 0x10;
  }
  local_88 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_84 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_80 = (float)(local_68 + (pFVar2->Position).field0_0x0._s_0.Z);
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar15,&local_88);
  }
  pFVar11 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_res8,&pFVar11->ShaderVariableHashedName);
  FVar12.Hash = (ulong64)FHashedName::FHashedName(&local_res20,&local_res8);
  pFVar13 = FShader::GetUniformBufferParameter((FShader *)this,FVar12);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar13->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    SetDeferredLightParameters(param_1,local_res18,pFVar9->LightSceneInfo,param_3,param_5);
  }
  pFVar3 = param_3->Family->Scene;
  if (pFVar3 != (FSceneInterface *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x420))();
  }
  return;
}

// SetParameters @ 1455ce2e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
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
TShadowProjectionPS<1,1,0,0,0>::SetParameters
          (TShadowProjectionPS<1,1,0,0,0> *this,FRHIBatchedShaderParameters *param_1,int param_2,
          FSceneView *param_3,FProjectedShadowInfo *param_4,bool param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  FSceneInterface *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  FShaderParametersMetadata *pFVar11;
  FHashedName FVar12;
  FShaderUniformBufferParameter *pFVar13;
  ForElementType<float> FVar14;
  uint uVar15;
  FHashedName local_res8;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FHashedName local_res20;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  double local_68;
  
  pFVar9 = param_4;
  local_68 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Z;
  dVar5 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.X;
  dVar6 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Y;
  FShadowProjectionShaderParameters::Set
            (&this->ProjectionParameters,param_1,param_3,param_4,false,
             0.0 < (param_4->CascadeSettings).FadePlaneLength,false);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  uVar15 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar15 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar15 == 0) {
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
  uVar15 = (uint)uVar1;
  FVar14 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  if (uVar15 != 0) {
    if (FVar14 == (ForElementType<float>)0x0) {
      FVar14 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar15,
               (void *)((longlong)FVar14 + (longlong)param_2 * 4));
  }
  fVar8 = __real_3f800000;
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar15 = (uint)uVar1;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + __real_3f800000;
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar15,&param_4);
  }
  local_7c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  uVar1 = (this->LightPosition).NumBytes;
  uVar15 = (uint)uVar1;
  local_7c = fVar8 / local_7c;
  if (0x10 < uVar1) {
    uVar15 = 0x10;
  }
  local_88 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_84 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_80 = (float)(local_68 + (pFVar2->Position).field0_0x0._s_0.Z);
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar15,&local_88);
  }
  pFVar11 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_res8,&pFVar11->ShaderVariableHashedName);
  FVar12.Hash = (ulong64)FHashedName::FHashedName(&local_res20,&local_res8);
  pFVar13 = FShader::GetUniformBufferParameter((FShader *)this,FVar12);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar13->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    SetDeferredLightParameters(param_1,local_res18,pFVar9->LightSceneInfo,param_3,param_5);
  }
  pFVar3 = param_3->Family->Scene;
  if (pFVar3 != (FSceneInterface *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x420))();
  }
  return;
}

// SetParameters @ 1455ce5b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
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
TShadowProjectionPS<1,0,1,0,0>::SetParameters
          (TShadowProjectionPS<1,0,1,0,0> *this,FRHIBatchedShaderParameters *param_1,int param_2,
          FSceneView *param_3,FProjectedShadowInfo *param_4,bool param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  FSceneInterface *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  FShaderParametersMetadata *pFVar11;
  FHashedName FVar12;
  FShaderUniformBufferParameter *pFVar13;
  ForElementType<float> FVar14;
  uint uVar15;
  FHashedName local_res8;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FHashedName local_res20;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  double local_68;
  
  pFVar9 = param_4;
  local_68 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Z;
  dVar5 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.X;
  dVar6 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Y;
  FShadowProjectionShaderParameters::Set
            (&this->ProjectionParameters,param_1,param_3,param_4,true,
             0.0 < (param_4->CascadeSettings).FadePlaneLength,false);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  uVar15 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar15 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar15 == 0) {
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
  uVar15 = (uint)uVar1;
  FVar14 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  if (uVar15 != 0) {
    if (FVar14 == (ForElementType<float>)0x0) {
      FVar14 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar15,
               (void *)((longlong)FVar14 + (longlong)param_2 * 4));
  }
  fVar8 = __real_3f800000;
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar15 = (uint)uVar1;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + __real_3f800000;
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar15,&param_4);
  }
  local_7c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  uVar1 = (this->LightPosition).NumBytes;
  uVar15 = (uint)uVar1;
  local_7c = fVar8 / local_7c;
  if (0x10 < uVar1) {
    uVar15 = 0x10;
  }
  local_88 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_84 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_80 = (float)(local_68 + (pFVar2->Position).field0_0x0._s_0.Z);
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar15,&local_88);
  }
  pFVar11 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_res8,&pFVar11->ShaderVariableHashedName);
  FVar12.Hash = (ulong64)FHashedName::FHashedName(&local_res20,&local_res8);
  pFVar13 = FShader::GetUniformBufferParameter((FShader *)this,FVar12);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar13->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    SetDeferredLightParameters(param_1,local_res18,pFVar9->LightSceneInfo,param_3,param_5);
  }
  pFVar3 = param_3->Family->Scene;
  if (pFVar3 != (FSceneInterface *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x420))();
  }
  return;
}

// SetParameters @ 1455ce880

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
TShadowProjectionPS<1,0,0,1,0>::SetParameters
          (TShadowProjectionPS<1,0,0,1,0> *this,FRHIBatchedShaderParameters *param_1,int param_2,
          FSceneView *param_3,FProjectedShadowInfo *param_4,bool param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  FSceneInterface *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  FShaderParametersMetadata *pFVar11;
  FHashedName FVar12;
  FShaderUniformBufferParameter *pFVar13;
  ForElementType<float> FVar14;
  uint uVar15;
  FHashedName local_res8;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FHashedName local_res20;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  double local_68;
  
  pFVar9 = param_4;
  local_68 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Z;
  dVar5 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.X;
  dVar6 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Y;
  FShadowProjectionShaderParameters::Set
            (&this->ProjectionParameters,param_1,param_3,param_4,false,
             0.0 < (param_4->CascadeSettings).FadePlaneLength,false);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  uVar15 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar15 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar15 == 0) {
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
  uVar15 = (uint)uVar1;
  FVar14 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  if (uVar15 != 0) {
    if (FVar14 == (ForElementType<float>)0x0) {
      FVar14 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar15,
               (void *)((longlong)FVar14 + (longlong)param_2 * 4));
  }
  fVar8 = __real_3f800000;
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar15 = (uint)uVar1;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + __real_3f800000;
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar15,&param_4);
  }
  local_7c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  uVar1 = (this->LightPosition).NumBytes;
  uVar15 = (uint)uVar1;
  local_7c = fVar8 / local_7c;
  if (0x10 < uVar1) {
    uVar15 = 0x10;
  }
  local_88 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_84 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_80 = (float)(local_68 + (pFVar2->Position).field0_0x0._s_0.Z);
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar15,&local_88);
  }
  pFVar11 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_res8,&pFVar11->ShaderVariableHashedName);
  FVar12.Hash = (ulong64)FHashedName::FHashedName(&local_res20,&local_res8);
  pFVar13 = FShader::GetUniformBufferParameter((FShader *)this,FVar12);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar13->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    SetDeferredLightParameters(param_1,local_res18,pFVar9->LightSceneInfo,param_3,param_5);
  }
  pFVar3 = param_3->Family->Scene;
  if (pFVar3 != (FSceneInterface *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x420))();
  }
  return;
}

// SetParameters @ 1455ceb50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TShadowProjectionPS<1,0,0,0,1>::SetParameters
          (TShadowProjectionPS<1,0,0,0,1> *this,FRHIBatchedShaderParameters *param_1,int param_2,
          FSceneView *param_3,FProjectedShadowInfo *param_4,bool param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  FSceneInterface *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  FShaderParametersMetadata *pFVar11;
  FHashedName FVar12;
  FShaderUniformBufferParameter *pFVar13;
  ForElementType<float> FVar14;
  uint uVar15;
  FHashedName local_res8;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FHashedName local_res20;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  double local_68;
  
  pFVar9 = param_4;
  local_68 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Z;
  dVar5 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.X;
  dVar6 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Y;
  FShadowProjectionShaderParameters::Set
            (&this->ProjectionParameters,param_1,param_3,param_4,false,
             0.0 < (param_4->CascadeSettings).FadePlaneLength,true);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  uVar15 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar15 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar15 == 0) {
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
  uVar15 = (uint)uVar1;
  FVar14 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  if (uVar15 != 0) {
    if (FVar14 == (ForElementType<float>)0x0) {
      FVar14 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar15,
               (void *)((longlong)FVar14 + (longlong)param_2 * 4));
  }
  fVar8 = __real_3f800000;
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar15 = (uint)uVar1;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + __real_3f800000;
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar15,&param_4);
  }
  local_7c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  uVar1 = (this->LightPosition).NumBytes;
  uVar15 = (uint)uVar1;
  local_7c = fVar8 / local_7c;
  if (0x10 < uVar1) {
    uVar15 = 0x10;
  }
  local_88 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_84 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_80 = (float)(local_68 + (pFVar2->Position).field0_0x0._s_0.Z);
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar15,&local_88);
  }
  pFVar11 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_res8,&pFVar11->ShaderVariableHashedName);
  FVar12.Hash = (ulong64)FHashedName::FHashedName(&local_res20,&local_res8);
  pFVar13 = FShader::GetUniformBufferParameter((FShader *)this,FVar12);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar13->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    SetDeferredLightParameters(param_1,local_res18,pFVar9->LightSceneInfo,param_3,param_5);
  }
  pFVar3 = param_3->Family->Scene;
  if (pFVar3 != (FSceneInterface *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x420))();
  }
  return;
}

// SetParameters @ 1455cee20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
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
TShadowProjectionPS<1,0,0,0,0>::SetParameters
          (TShadowProjectionPS<1,0,0,0,0> *this,FRHIBatchedShaderParameters *param_1,int param_2,
          FSceneView *param_3,FProjectedShadowInfo *param_4,bool param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  FSceneInterface *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  FShaderParametersMetadata *pFVar11;
  FHashedName FVar12;
  FShaderUniformBufferParameter *pFVar13;
  ForElementType<float> FVar14;
  uint uVar15;
  FHashedName local_res8;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FHashedName local_res20;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  double local_68;
  
  pFVar9 = param_4;
  local_68 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Z;
  dVar5 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.X;
  dVar6 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Y;
  FShadowProjectionShaderParameters::Set
            (&this->ProjectionParameters,param_1,param_3,param_4,false,
             0.0 < (param_4->CascadeSettings).FadePlaneLength,false);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  uVar15 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar15 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar15 == 0) {
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
  uVar15 = (uint)uVar1;
  FVar14 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  if (uVar15 != 0) {
    if (FVar14 == (ForElementType<float>)0x0) {
      FVar14 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar15,
               (void *)((longlong)FVar14 + (longlong)param_2 * 4));
  }
  fVar8 = __real_3f800000;
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar15 = (uint)uVar1;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + __real_3f800000;
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar15,&param_4);
  }
  local_7c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  uVar1 = (this->LightPosition).NumBytes;
  uVar15 = (uint)uVar1;
  local_7c = fVar8 / local_7c;
  if (0x10 < uVar1) {
    uVar15 = 0x10;
  }
  local_88 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_84 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_80 = (float)(local_68 + (pFVar2->Position).field0_0x0._s_0.Z);
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar15,&local_88);
  }
  pFVar11 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_res8,&pFVar11->ShaderVariableHashedName);
  FVar12.Hash = (ulong64)FHashedName::FHashedName(&local_res20,&local_res8);
  pFVar13 = FShader::GetUniformBufferParameter((FShader *)this,FVar12);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar13->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    SetDeferredLightParameters(param_1,local_res18,pFVar9->LightSceneInfo,param_3,param_5);
  }
  pFVar3 = param_3->Family->Scene;
  if (pFVar3 != (FSceneInterface *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x420))();
  }
  return;
}

// SetParameters @ 1455cf0f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TShadowProjectionPS<2,1,0,1,0>::SetParameters
          (TShadowProjectionPS<2,1,0,1,0> *this,FRHIBatchedShaderParameters *param_1,int param_2,
          FSceneView *param_3,FProjectedShadowInfo *param_4,bool param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  FSceneInterface *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  FShaderParametersMetadata *pFVar11;
  FHashedName FVar12;
  FShaderUniformBufferParameter *pFVar13;
  ForElementType<float> FVar14;
  uint uVar15;
  FHashedName local_res8;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FHashedName local_res20;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  double local_68;
  
  pFVar9 = param_4;
  local_68 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Z;
  dVar5 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.X;
  dVar6 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Y;
  FShadowProjectionShaderParameters::Set
            (&this->ProjectionParameters,param_1,param_3,param_4,false,
             0.0 < (param_4->CascadeSettings).FadePlaneLength,false);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  uVar15 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar15 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar15 == 0) {
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
  uVar15 = (uint)uVar1;
  FVar14 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  if (uVar15 != 0) {
    if (FVar14 == (ForElementType<float>)0x0) {
      FVar14 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar15,
               (void *)((longlong)FVar14 + (longlong)param_2 * 4));
  }
  fVar8 = __real_3f800000;
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar15 = (uint)uVar1;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + __real_3f800000;
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar15,&param_4);
  }
  local_7c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  uVar1 = (this->LightPosition).NumBytes;
  uVar15 = (uint)uVar1;
  local_7c = fVar8 / local_7c;
  if (0x10 < uVar1) {
    uVar15 = 0x10;
  }
  local_88 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_84 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_80 = (float)(local_68 + (pFVar2->Position).field0_0x0._s_0.Z);
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar15,&local_88);
  }
  pFVar11 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_res8,&pFVar11->ShaderVariableHashedName);
  FVar12.Hash = (ulong64)FHashedName::FHashedName(&local_res20,&local_res8);
  pFVar13 = FShader::GetUniformBufferParameter((FShader *)this,FVar12);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar13->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    SetDeferredLightParameters(param_1,local_res18,pFVar9->LightSceneInfo,param_3,param_5);
  }
  pFVar3 = param_3->Family->Scene;
  if (pFVar3 != (FSceneInterface *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x420))();
  }
  return;
}

// SetParameters @ 1455cf3c0

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
TShadowProjectionPS<2,1,0,0,0>::SetParameters
          (TShadowProjectionPS<2,1,0,0,0> *this,FRHIBatchedShaderParameters *param_1,int param_2,
          FSceneView *param_3,FProjectedShadowInfo *param_4,bool param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  FSceneInterface *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  FShaderParametersMetadata *pFVar11;
  FHashedName FVar12;
  FShaderUniformBufferParameter *pFVar13;
  ForElementType<float> FVar14;
  uint uVar15;
  FHashedName local_res8;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FHashedName local_res20;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  double local_68;
  
  pFVar9 = param_4;
  local_68 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Z;
  dVar5 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.X;
  dVar6 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Y;
  FShadowProjectionShaderParameters::Set
            (&this->ProjectionParameters,param_1,param_3,param_4,false,
             0.0 < (param_4->CascadeSettings).FadePlaneLength,false);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  uVar15 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar15 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar15 == 0) {
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
  uVar15 = (uint)uVar1;
  FVar14 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  if (uVar15 != 0) {
    if (FVar14 == (ForElementType<float>)0x0) {
      FVar14 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar15,
               (void *)((longlong)FVar14 + (longlong)param_2 * 4));
  }
  fVar8 = __real_3f800000;
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar15 = (uint)uVar1;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + __real_3f800000;
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar15,&param_4);
  }
  local_7c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  uVar1 = (this->LightPosition).NumBytes;
  uVar15 = (uint)uVar1;
  local_7c = fVar8 / local_7c;
  if (0x10 < uVar1) {
    uVar15 = 0x10;
  }
  local_88 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_84 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_80 = (float)(local_68 + (pFVar2->Position).field0_0x0._s_0.Z);
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar15,&local_88);
  }
  pFVar11 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_res8,&pFVar11->ShaderVariableHashedName);
  FVar12.Hash = (ulong64)FHashedName::FHashedName(&local_res20,&local_res8);
  pFVar13 = FShader::GetUniformBufferParameter((FShader *)this,FVar12);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar13->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    SetDeferredLightParameters(param_1,local_res18,pFVar9->LightSceneInfo,param_3,param_5);
  }
  pFVar3 = param_3->Family->Scene;
  if (pFVar3 != (FSceneInterface *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x420))();
  }
  return;
}

// SetParameters @ 1455cf690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TShadowProjectionPS<2,0,1,0,0>::SetParameters
          (TShadowProjectionPS<2,0,1,0,0> *this,FRHIBatchedShaderParameters *param_1,int param_2,
          FSceneView *param_3,FProjectedShadowInfo *param_4,bool param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  FSceneInterface *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  FShaderParametersMetadata *pFVar11;
  FHashedName FVar12;
  FShaderUniformBufferParameter *pFVar13;
  ForElementType<float> FVar14;
  uint uVar15;
  FHashedName local_res8;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FHashedName local_res20;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  double local_68;
  
  pFVar9 = param_4;
  local_68 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Z;
  dVar5 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.X;
  dVar6 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Y;
  FShadowProjectionShaderParameters::Set
            (&this->ProjectionParameters,param_1,param_3,param_4,true,
             0.0 < (param_4->CascadeSettings).FadePlaneLength,false);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  uVar15 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar15 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar15 == 0) {
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
  uVar15 = (uint)uVar1;
  FVar14 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  if (uVar15 != 0) {
    if (FVar14 == (ForElementType<float>)0x0) {
      FVar14 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar15,
               (void *)((longlong)FVar14 + (longlong)param_2 * 4));
  }
  fVar8 = __real_3f800000;
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar15 = (uint)uVar1;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + __real_3f800000;
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar15,&param_4);
  }
  local_7c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  uVar1 = (this->LightPosition).NumBytes;
  uVar15 = (uint)uVar1;
  local_7c = fVar8 / local_7c;
  if (0x10 < uVar1) {
    uVar15 = 0x10;
  }
  local_88 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_84 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_80 = (float)(local_68 + (pFVar2->Position).field0_0x0._s_0.Z);
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar15,&local_88);
  }
  pFVar11 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_res8,&pFVar11->ShaderVariableHashedName);
  FVar12.Hash = (ulong64)FHashedName::FHashedName(&local_res20,&local_res8);
  pFVar13 = FShader::GetUniformBufferParameter((FShader *)this,FVar12);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar13->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    SetDeferredLightParameters(param_1,local_res18,pFVar9->LightSceneInfo,param_3,param_5);
  }
  pFVar3 = param_3->Family->Scene;
  if (pFVar3 != (FSceneInterface *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x420))();
  }
  return;
}

// SetParameters @ 1455cf960

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
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
TShadowProjectionPS<2,0,0,1,0>::SetParameters
          (TShadowProjectionPS<2,0,0,1,0> *this,FRHIBatchedShaderParameters *param_1,int param_2,
          FSceneView *param_3,FProjectedShadowInfo *param_4,bool param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  FSceneInterface *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  FShaderParametersMetadata *pFVar11;
  FHashedName FVar12;
  FShaderUniformBufferParameter *pFVar13;
  ForElementType<float> FVar14;
  uint uVar15;
  FHashedName local_res8;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FHashedName local_res20;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  double local_68;
  
  pFVar9 = param_4;
  local_68 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Z;
  dVar5 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.X;
  dVar6 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Y;
  FShadowProjectionShaderParameters::Set
            (&this->ProjectionParameters,param_1,param_3,param_4,false,
             0.0 < (param_4->CascadeSettings).FadePlaneLength,false);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  uVar15 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar15 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar15 == 0) {
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
  uVar15 = (uint)uVar1;
  FVar14 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  if (uVar15 != 0) {
    if (FVar14 == (ForElementType<float>)0x0) {
      FVar14 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar15,
               (void *)((longlong)FVar14 + (longlong)param_2 * 4));
  }
  fVar8 = __real_3f800000;
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar15 = (uint)uVar1;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + __real_3f800000;
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar15,&param_4);
  }
  local_7c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  uVar1 = (this->LightPosition).NumBytes;
  uVar15 = (uint)uVar1;
  local_7c = fVar8 / local_7c;
  if (0x10 < uVar1) {
    uVar15 = 0x10;
  }
  local_88 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_84 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_80 = (float)(local_68 + (pFVar2->Position).field0_0x0._s_0.Z);
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar15,&local_88);
  }
  pFVar11 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_res8,&pFVar11->ShaderVariableHashedName);
  FVar12.Hash = (ulong64)FHashedName::FHashedName(&local_res20,&local_res8);
  pFVar13 = FShader::GetUniformBufferParameter((FShader *)this,FVar12);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar13->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    SetDeferredLightParameters(param_1,local_res18,pFVar9->LightSceneInfo,param_3,param_5);
  }
  pFVar3 = param_3->Family->Scene;
  if (pFVar3 != (FSceneInterface *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x420))();
  }
  return;
}

// SetParameters @ 1455cfc30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
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
TShadowProjectionPS<2,0,0,0,1>::SetParameters
          (TShadowProjectionPS<2,0,0,0,1> *this,FRHIBatchedShaderParameters *param_1,int param_2,
          FSceneView *param_3,FProjectedShadowInfo *param_4,bool param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  FSceneInterface *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  FShaderParametersMetadata *pFVar11;
  FHashedName FVar12;
  FShaderUniformBufferParameter *pFVar13;
  ForElementType<float> FVar14;
  uint uVar15;
  FHashedName local_res8;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FHashedName local_res20;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  double local_68;
  
  pFVar9 = param_4;
  local_68 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Z;
  dVar5 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.X;
  dVar6 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Y;
  FShadowProjectionShaderParameters::Set
            (&this->ProjectionParameters,param_1,param_3,param_4,false,
             0.0 < (param_4->CascadeSettings).FadePlaneLength,true);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  uVar15 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar15 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar15 == 0) {
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
  uVar15 = (uint)uVar1;
  FVar14 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  if (uVar15 != 0) {
    if (FVar14 == (ForElementType<float>)0x0) {
      FVar14 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar15,
               (void *)((longlong)FVar14 + (longlong)param_2 * 4));
  }
  fVar8 = __real_3f800000;
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar15 = (uint)uVar1;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + __real_3f800000;
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar15,&param_4);
  }
  local_7c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  uVar1 = (this->LightPosition).NumBytes;
  uVar15 = (uint)uVar1;
  local_7c = fVar8 / local_7c;
  if (0x10 < uVar1) {
    uVar15 = 0x10;
  }
  local_88 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_84 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_80 = (float)(local_68 + (pFVar2->Position).field0_0x0._s_0.Z);
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar15,&local_88);
  }
  pFVar11 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_res8,&pFVar11->ShaderVariableHashedName);
  FVar12.Hash = (ulong64)FHashedName::FHashedName(&local_res20,&local_res8);
  pFVar13 = FShader::GetUniformBufferParameter((FShader *)this,FVar12);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar13->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    SetDeferredLightParameters(param_1,local_res18,pFVar9->LightSceneInfo,param_3,param_5);
  }
  pFVar3 = param_3->Family->Scene;
  if (pFVar3 != (FSceneInterface *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x420))();
  }
  return;
}

// SetParameters @ 1455cff00

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
TShadowProjectionPS<2,0,0,0,0>::SetParameters
          (TShadowProjectionPS<2,0,0,0,0> *this,FRHIBatchedShaderParameters *param_1,int param_2,
          FSceneView *param_3,FProjectedShadowInfo *param_4,bool param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  FSceneInterface *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  FShaderParametersMetadata *pFVar11;
  FHashedName FVar12;
  FShaderUniformBufferParameter *pFVar13;
  ForElementType<float> FVar14;
  uint uVar15;
  FHashedName local_res8;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FHashedName local_res20;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  double local_68;
  
  pFVar9 = param_4;
  local_68 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Z;
  dVar5 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.X;
  dVar6 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Y;
  FShadowProjectionShaderParameters::Set
            (&this->ProjectionParameters,param_1,param_3,param_4,false,
             0.0 < (param_4->CascadeSettings).FadePlaneLength,false);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  uVar15 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar15 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar15 == 0) {
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
  uVar15 = (uint)uVar1;
  FVar14 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  if (uVar15 != 0) {
    if (FVar14 == (ForElementType<float>)0x0) {
      FVar14 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar15,
               (void *)((longlong)FVar14 + (longlong)param_2 * 4));
  }
  fVar8 = __real_3f800000;
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar15 = (uint)uVar1;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + __real_3f800000;
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar15,&param_4);
  }
  local_7c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  uVar1 = (this->LightPosition).NumBytes;
  uVar15 = (uint)uVar1;
  local_7c = fVar8 / local_7c;
  if (0x10 < uVar1) {
    uVar15 = 0x10;
  }
  local_88 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_84 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_80 = (float)(local_68 + (pFVar2->Position).field0_0x0._s_0.Z);
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar15,&local_88);
  }
  pFVar11 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_res8,&pFVar11->ShaderVariableHashedName);
  FVar12.Hash = (ulong64)FHashedName::FHashedName(&local_res20,&local_res8);
  pFVar13 = FShader::GetUniformBufferParameter((FShader *)this,FVar12);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar13->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    SetDeferredLightParameters(param_1,local_res18,pFVar9->LightSceneInfo,param_3,param_5);
  }
  pFVar3 = param_3->Family->Scene;
  if (pFVar3 != (FSceneInterface *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x420))();
  }
  return;
}

// SetParameters @ 1455d01d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TShadowProjectionPS<3,1,0,1,0>::SetParameters
          (TShadowProjectionPS<3,1,0,1,0> *this,FRHIBatchedShaderParameters *param_1,int param_2,
          FSceneView *param_3,FProjectedShadowInfo *param_4,bool param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  FSceneInterface *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  FShaderParametersMetadata *pFVar11;
  FHashedName FVar12;
  FShaderUniformBufferParameter *pFVar13;
  ForElementType<float> FVar14;
  uint uVar15;
  FHashedName local_res8;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FHashedName local_res20;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  double local_68;
  
  pFVar9 = param_4;
  local_68 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Z;
  dVar5 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.X;
  dVar6 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Y;
  FShadowProjectionShaderParameters::Set
            (&this->ProjectionParameters,param_1,param_3,param_4,false,
             0.0 < (param_4->CascadeSettings).FadePlaneLength,false);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  uVar15 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar15 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar15 == 0) {
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
  uVar15 = (uint)uVar1;
  FVar14 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  if (uVar15 != 0) {
    if (FVar14 == (ForElementType<float>)0x0) {
      FVar14 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar15,
               (void *)((longlong)FVar14 + (longlong)param_2 * 4));
  }
  fVar8 = __real_3f800000;
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar15 = (uint)uVar1;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + __real_3f800000;
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar15,&param_4);
  }
  local_7c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  uVar1 = (this->LightPosition).NumBytes;
  uVar15 = (uint)uVar1;
  local_7c = fVar8 / local_7c;
  if (0x10 < uVar1) {
    uVar15 = 0x10;
  }
  local_88 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_84 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_80 = (float)(local_68 + (pFVar2->Position).field0_0x0._s_0.Z);
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar15,&local_88);
  }
  pFVar11 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_res8,&pFVar11->ShaderVariableHashedName);
  FVar12.Hash = (ulong64)FHashedName::FHashedName(&local_res20,&local_res8);
  pFVar13 = FShader::GetUniformBufferParameter((FShader *)this,FVar12);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar13->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    SetDeferredLightParameters(param_1,local_res18,pFVar9->LightSceneInfo,param_3,param_5);
  }
  pFVar3 = param_3->Family->Scene;
  if (pFVar3 != (FSceneInterface *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x420))();
  }
  return;
}

// SetParameters @ 1455d04a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
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
TShadowProjectionPS<3,1,0,0,0>::SetParameters
          (TShadowProjectionPS<3,1,0,0,0> *this,FRHIBatchedShaderParameters *param_1,int param_2,
          FSceneView *param_3,FProjectedShadowInfo *param_4,bool param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  FSceneInterface *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  FShaderParametersMetadata *pFVar11;
  FHashedName FVar12;
  FShaderUniformBufferParameter *pFVar13;
  ForElementType<float> FVar14;
  uint uVar15;
  FHashedName local_res8;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FHashedName local_res20;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  double local_68;
  
  pFVar9 = param_4;
  local_68 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Z;
  dVar5 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.X;
  dVar6 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Y;
  FShadowProjectionShaderParameters::Set
            (&this->ProjectionParameters,param_1,param_3,param_4,false,
             0.0 < (param_4->CascadeSettings).FadePlaneLength,false);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  uVar15 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar15 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar15 == 0) {
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
  uVar15 = (uint)uVar1;
  FVar14 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  if (uVar15 != 0) {
    if (FVar14 == (ForElementType<float>)0x0) {
      FVar14 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar15,
               (void *)((longlong)FVar14 + (longlong)param_2 * 4));
  }
  fVar8 = __real_3f800000;
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar15 = (uint)uVar1;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + __real_3f800000;
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar15,&param_4);
  }
  local_7c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  uVar1 = (this->LightPosition).NumBytes;
  uVar15 = (uint)uVar1;
  local_7c = fVar8 / local_7c;
  if (0x10 < uVar1) {
    uVar15 = 0x10;
  }
  local_88 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_84 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_80 = (float)(local_68 + (pFVar2->Position).field0_0x0._s_0.Z);
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar15,&local_88);
  }
  pFVar11 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_res8,&pFVar11->ShaderVariableHashedName);
  FVar12.Hash = (ulong64)FHashedName::FHashedName(&local_res20,&local_res8);
  pFVar13 = FShader::GetUniformBufferParameter((FShader *)this,FVar12);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar13->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    SetDeferredLightParameters(param_1,local_res18,pFVar9->LightSceneInfo,param_3,param_5);
  }
  pFVar3 = param_3->Family->Scene;
  if (pFVar3 != (FSceneInterface *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x420))();
  }
  return;
}

// SetParameters @ 1455d0770

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
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
TShadowProjectionPS<3,0,1,0,0>::SetParameters
          (TShadowProjectionPS<3,0,1,0,0> *this,FRHIBatchedShaderParameters *param_1,int param_2,
          FSceneView *param_3,FProjectedShadowInfo *param_4,bool param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  FSceneInterface *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  FShaderParametersMetadata *pFVar11;
  FHashedName FVar12;
  FShaderUniformBufferParameter *pFVar13;
  ForElementType<float> FVar14;
  uint uVar15;
  FHashedName local_res8;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FHashedName local_res20;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  double local_68;
  
  pFVar9 = param_4;
  local_68 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Z;
  dVar5 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.X;
  dVar6 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Y;
  FShadowProjectionShaderParameters::Set
            (&this->ProjectionParameters,param_1,param_3,param_4,true,
             0.0 < (param_4->CascadeSettings).FadePlaneLength,false);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  uVar15 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar15 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar15 == 0) {
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
  uVar15 = (uint)uVar1;
  FVar14 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  if (uVar15 != 0) {
    if (FVar14 == (ForElementType<float>)0x0) {
      FVar14 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar15,
               (void *)((longlong)FVar14 + (longlong)param_2 * 4));
  }
  fVar8 = __real_3f800000;
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar15 = (uint)uVar1;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + __real_3f800000;
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar15,&param_4);
  }
  local_7c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  uVar1 = (this->LightPosition).NumBytes;
  uVar15 = (uint)uVar1;
  local_7c = fVar8 / local_7c;
  if (0x10 < uVar1) {
    uVar15 = 0x10;
  }
  local_88 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_84 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_80 = (float)(local_68 + (pFVar2->Position).field0_0x0._s_0.Z);
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar15,&local_88);
  }
  pFVar11 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_res8,&pFVar11->ShaderVariableHashedName);
  FVar12.Hash = (ulong64)FHashedName::FHashedName(&local_res20,&local_res8);
  pFVar13 = FShader::GetUniformBufferParameter((FShader *)this,FVar12);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar13->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    SetDeferredLightParameters(param_1,local_res18,pFVar9->LightSceneInfo,param_3,param_5);
  }
  pFVar3 = param_3->Family->Scene;
  if (pFVar3 != (FSceneInterface *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x420))();
  }
  return;
}

// SetParameters @ 1455d0a40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TShadowProjectionPS<3,0,0,1,0>::SetParameters
          (TShadowProjectionPS<3,0,0,1,0> *this,FRHIBatchedShaderParameters *param_1,int param_2,
          FSceneView *param_3,FProjectedShadowInfo *param_4,bool param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  FSceneInterface *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  FShaderParametersMetadata *pFVar11;
  FHashedName FVar12;
  FShaderUniformBufferParameter *pFVar13;
  ForElementType<float> FVar14;
  uint uVar15;
  FHashedName local_res8;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FHashedName local_res20;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  double local_68;
  
  pFVar9 = param_4;
  local_68 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Z;
  dVar5 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.X;
  dVar6 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Y;
  FShadowProjectionShaderParameters::Set
            (&this->ProjectionParameters,param_1,param_3,param_4,false,
             0.0 < (param_4->CascadeSettings).FadePlaneLength,false);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  uVar15 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar15 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar15 == 0) {
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
  uVar15 = (uint)uVar1;
  FVar14 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  if (uVar15 != 0) {
    if (FVar14 == (ForElementType<float>)0x0) {
      FVar14 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar15,
               (void *)((longlong)FVar14 + (longlong)param_2 * 4));
  }
  fVar8 = __real_3f800000;
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar15 = (uint)uVar1;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + __real_3f800000;
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar15,&param_4);
  }
  local_7c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  uVar1 = (this->LightPosition).NumBytes;
  uVar15 = (uint)uVar1;
  local_7c = fVar8 / local_7c;
  if (0x10 < uVar1) {
    uVar15 = 0x10;
  }
  local_88 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_84 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_80 = (float)(local_68 + (pFVar2->Position).field0_0x0._s_0.Z);
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar15,&local_88);
  }
  pFVar11 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_res8,&pFVar11->ShaderVariableHashedName);
  FVar12.Hash = (ulong64)FHashedName::FHashedName(&local_res20,&local_res8);
  pFVar13 = FShader::GetUniformBufferParameter((FShader *)this,FVar12);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar13->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    SetDeferredLightParameters(param_1,local_res18,pFVar9->LightSceneInfo,param_3,param_5);
  }
  pFVar3 = param_3->Family->Scene;
  if (pFVar3 != (FSceneInterface *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x420))();
  }
  return;
}

// SetParameters @ 1455d0d10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TShadowProjectionPS<3,0,0,0,1>::SetParameters
          (TShadowProjectionPS<3,0,0,0,1> *this,FRHIBatchedShaderParameters *param_1,int param_2,
          FSceneView *param_3,FProjectedShadowInfo *param_4,bool param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  FSceneInterface *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  FShaderParametersMetadata *pFVar11;
  FHashedName FVar12;
  FShaderUniformBufferParameter *pFVar13;
  ForElementType<float> FVar14;
  uint uVar15;
  FHashedName local_res8;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FHashedName local_res20;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  double local_68;
  
  pFVar9 = param_4;
  local_68 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Z;
  dVar5 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.X;
  dVar6 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Y;
  FShadowProjectionShaderParameters::Set
            (&this->ProjectionParameters,param_1,param_3,param_4,false,
             0.0 < (param_4->CascadeSettings).FadePlaneLength,true);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  uVar15 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar15 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar15 == 0) {
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
  uVar15 = (uint)uVar1;
  FVar14 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  if (uVar15 != 0) {
    if (FVar14 == (ForElementType<float>)0x0) {
      FVar14 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar15,
               (void *)((longlong)FVar14 + (longlong)param_2 * 4));
  }
  fVar8 = __real_3f800000;
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar15 = (uint)uVar1;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + __real_3f800000;
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar15,&param_4);
  }
  local_7c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  uVar1 = (this->LightPosition).NumBytes;
  uVar15 = (uint)uVar1;
  local_7c = fVar8 / local_7c;
  if (0x10 < uVar1) {
    uVar15 = 0x10;
  }
  local_88 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_84 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_80 = (float)(local_68 + (pFVar2->Position).field0_0x0._s_0.Z);
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar15,&local_88);
  }
  pFVar11 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_res8,&pFVar11->ShaderVariableHashedName);
  FVar12.Hash = (ulong64)FHashedName::FHashedName(&local_res20,&local_res8);
  pFVar13 = FShader::GetUniformBufferParameter((FShader *)this,FVar12);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar13->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    SetDeferredLightParameters(param_1,local_res18,pFVar9->LightSceneInfo,param_3,param_5);
  }
  pFVar3 = param_3->Family->Scene;
  if (pFVar3 != (FSceneInterface *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x420))();
  }
  return;
}

// SetParameters @ 1455d0fe0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
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
TShadowProjectionPS<3,0,0,0,0>::SetParameters
          (TShadowProjectionPS<3,0,0,0,0> *this,FRHIBatchedShaderParameters *param_1,int param_2,
          FSceneView *param_3,FProjectedShadowInfo *param_4,bool param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  FSceneInterface *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  FShaderParametersMetadata *pFVar11;
  FHashedName FVar12;
  FShaderUniformBufferParameter *pFVar13;
  ForElementType<float> FVar14;
  uint uVar15;
  FHashedName local_res8;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FHashedName local_res20;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  double local_68;
  
  pFVar9 = param_4;
  local_68 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Z;
  dVar5 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.X;
  dVar6 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Y;
  FShadowProjectionShaderParameters::Set
            (&this->ProjectionParameters,param_1,param_3,param_4,false,
             0.0 < (param_4->CascadeSettings).FadePlaneLength,false);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  uVar15 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar15 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar15 == 0) {
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
  uVar15 = (uint)uVar1;
  FVar14 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  if (uVar15 != 0) {
    if (FVar14 == (ForElementType<float>)0x0) {
      FVar14 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar15,
               (void *)((longlong)FVar14 + (longlong)param_2 * 4));
  }
  fVar8 = __real_3f800000;
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar15 = (uint)uVar1;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + __real_3f800000;
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar15,&param_4);
  }
  local_7c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  uVar1 = (this->LightPosition).NumBytes;
  uVar15 = (uint)uVar1;
  local_7c = fVar8 / local_7c;
  if (0x10 < uVar1) {
    uVar15 = 0x10;
  }
  local_88 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_84 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_80 = (float)(local_68 + (pFVar2->Position).field0_0x0._s_0.Z);
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar15,&local_88);
  }
  pFVar11 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_res8,&pFVar11->ShaderVariableHashedName);
  FVar12.Hash = (ulong64)FHashedName::FHashedName(&local_res20,&local_res8);
  pFVar13 = FShader::GetUniformBufferParameter((FShader *)this,FVar12);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar13->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    SetDeferredLightParameters(param_1,local_res18,pFVar9->LightSceneInfo,param_3,param_5);
  }
  pFVar3 = param_3->Family->Scene;
  if (pFVar3 != (FSceneInterface *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x420))();
  }
  return;
}

// SetParameters @ 1455d12b0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
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
TShadowProjectionPS<4,1,0,1,0>::SetParameters
          (TShadowProjectionPS<4,1,0,1,0> *this,FRHIBatchedShaderParameters *param_1,int param_2,
          FSceneView *param_3,FProjectedShadowInfo *param_4,bool param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  FSceneInterface *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  FShaderParametersMetadata *pFVar11;
  FHashedName FVar12;
  FShaderUniformBufferParameter *pFVar13;
  ForElementType<float> FVar14;
  uint uVar15;
  FHashedName local_res8;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FHashedName local_res20;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  double local_68;
  
  pFVar9 = param_4;
  local_68 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Z;
  dVar5 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.X;
  dVar6 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Y;
  FShadowProjectionShaderParameters::Set
            (&this->ProjectionParameters,param_1,param_3,param_4,false,
             0.0 < (param_4->CascadeSettings).FadePlaneLength,false);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  uVar15 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar15 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar15 == 0) {
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
  uVar15 = (uint)uVar1;
  FVar14 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  if (uVar15 != 0) {
    if (FVar14 == (ForElementType<float>)0x0) {
      FVar14 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar15,
               (void *)((longlong)FVar14 + (longlong)param_2 * 4));
  }
  fVar8 = __real_3f800000;
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar15 = (uint)uVar1;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + __real_3f800000;
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar15,&param_4);
  }
  local_7c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  uVar1 = (this->LightPosition).NumBytes;
  uVar15 = (uint)uVar1;
  local_7c = fVar8 / local_7c;
  if (0x10 < uVar1) {
    uVar15 = 0x10;
  }
  local_88 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_84 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_80 = (float)(local_68 + (pFVar2->Position).field0_0x0._s_0.Z);
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar15,&local_88);
  }
  pFVar11 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_res8,&pFVar11->ShaderVariableHashedName);
  FVar12.Hash = (ulong64)FHashedName::FHashedName(&local_res20,&local_res8);
  pFVar13 = FShader::GetUniformBufferParameter((FShader *)this,FVar12);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar13->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    SetDeferredLightParameters(param_1,local_res18,pFVar9->LightSceneInfo,param_3,param_5);
  }
  pFVar3 = param_3->Family->Scene;
  if (pFVar3 != (FSceneInterface *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x420))();
  }
  return;
}

// SetParameters @ 1455d1580

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
TShadowProjectionPS<4,1,0,0,0>::SetParameters
          (TShadowProjectionPS<4,1,0,0,0> *this,FRHIBatchedShaderParameters *param_1,int param_2,
          FSceneView *param_3,FProjectedShadowInfo *param_4,bool param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  FSceneInterface *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  FShaderParametersMetadata *pFVar11;
  FHashedName FVar12;
  FShaderUniformBufferParameter *pFVar13;
  ForElementType<float> FVar14;
  uint uVar15;
  FHashedName local_res8;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FHashedName local_res20;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  double local_68;
  
  pFVar9 = param_4;
  local_68 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Z;
  dVar5 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.X;
  dVar6 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Y;
  FShadowProjectionShaderParameters::Set
            (&this->ProjectionParameters,param_1,param_3,param_4,false,
             0.0 < (param_4->CascadeSettings).FadePlaneLength,false);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  uVar15 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar15 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar15 == 0) {
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
  uVar15 = (uint)uVar1;
  FVar14 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  if (uVar15 != 0) {
    if (FVar14 == (ForElementType<float>)0x0) {
      FVar14 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar15,
               (void *)((longlong)FVar14 + (longlong)param_2 * 4));
  }
  fVar8 = __real_3f800000;
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar15 = (uint)uVar1;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + __real_3f800000;
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar15,&param_4);
  }
  local_7c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  uVar1 = (this->LightPosition).NumBytes;
  uVar15 = (uint)uVar1;
  local_7c = fVar8 / local_7c;
  if (0x10 < uVar1) {
    uVar15 = 0x10;
  }
  local_88 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_84 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_80 = (float)(local_68 + (pFVar2->Position).field0_0x0._s_0.Z);
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar15,&local_88);
  }
  pFVar11 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_res8,&pFVar11->ShaderVariableHashedName);
  FVar12.Hash = (ulong64)FHashedName::FHashedName(&local_res20,&local_res8);
  pFVar13 = FShader::GetUniformBufferParameter((FShader *)this,FVar12);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar13->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    SetDeferredLightParameters(param_1,local_res18,pFVar9->LightSceneInfo,param_3,param_5);
  }
  pFVar3 = param_3->Family->Scene;
  if (pFVar3 != (FSceneInterface *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x420))();
  }
  return;
}

// SetParameters @ 1455d1850

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TShadowProjectionPS<4,0,1,0,0>::SetParameters
          (TShadowProjectionPS<4,0,1,0,0> *this,FRHIBatchedShaderParameters *param_1,int param_2,
          FSceneView *param_3,FProjectedShadowInfo *param_4,bool param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  FSceneInterface *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  FShaderParametersMetadata *pFVar11;
  FHashedName FVar12;
  FShaderUniformBufferParameter *pFVar13;
  ForElementType<float> FVar14;
  uint uVar15;
  FHashedName local_res8;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FHashedName local_res20;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  double local_68;
  
  pFVar9 = param_4;
  local_68 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Z;
  dVar5 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.X;
  dVar6 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Y;
  FShadowProjectionShaderParameters::Set
            (&this->ProjectionParameters,param_1,param_3,param_4,true,
             0.0 < (param_4->CascadeSettings).FadePlaneLength,false);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  uVar15 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar15 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar15 == 0) {
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
  uVar15 = (uint)uVar1;
  FVar14 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  if (uVar15 != 0) {
    if (FVar14 == (ForElementType<float>)0x0) {
      FVar14 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar15,
               (void *)((longlong)FVar14 + (longlong)param_2 * 4));
  }
  fVar8 = __real_3f800000;
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar15 = (uint)uVar1;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + __real_3f800000;
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar15,&param_4);
  }
  local_7c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  uVar1 = (this->LightPosition).NumBytes;
  uVar15 = (uint)uVar1;
  local_7c = fVar8 / local_7c;
  if (0x10 < uVar1) {
    uVar15 = 0x10;
  }
  local_88 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_84 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_80 = (float)(local_68 + (pFVar2->Position).field0_0x0._s_0.Z);
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar15,&local_88);
  }
  pFVar11 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_res8,&pFVar11->ShaderVariableHashedName);
  FVar12.Hash = (ulong64)FHashedName::FHashedName(&local_res20,&local_res8);
  pFVar13 = FShader::GetUniformBufferParameter((FShader *)this,FVar12);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar13->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    SetDeferredLightParameters(param_1,local_res18,pFVar9->LightSceneInfo,param_3,param_5);
  }
  pFVar3 = param_3->Family->Scene;
  if (pFVar3 != (FSceneInterface *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x420))();
  }
  return;
}

// SetParameters @ 1455d1b20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
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
TShadowProjectionPS<4,0,0,1,0>::SetParameters
          (TShadowProjectionPS<4,0,0,1,0> *this,FRHIBatchedShaderParameters *param_1,int param_2,
          FSceneView *param_3,FProjectedShadowInfo *param_4,bool param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  FSceneInterface *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  FShaderParametersMetadata *pFVar11;
  FHashedName FVar12;
  FShaderUniformBufferParameter *pFVar13;
  ForElementType<float> FVar14;
  uint uVar15;
  FHashedName local_res8;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FHashedName local_res20;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  double local_68;
  
  pFVar9 = param_4;
  local_68 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Z;
  dVar5 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.X;
  dVar6 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Y;
  FShadowProjectionShaderParameters::Set
            (&this->ProjectionParameters,param_1,param_3,param_4,false,
             0.0 < (param_4->CascadeSettings).FadePlaneLength,false);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  uVar15 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar15 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar15 == 0) {
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
  uVar15 = (uint)uVar1;
  FVar14 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  if (uVar15 != 0) {
    if (FVar14 == (ForElementType<float>)0x0) {
      FVar14 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar15,
               (void *)((longlong)FVar14 + (longlong)param_2 * 4));
  }
  fVar8 = __real_3f800000;
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar15 = (uint)uVar1;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + __real_3f800000;
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar15,&param_4);
  }
  local_7c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  uVar1 = (this->LightPosition).NumBytes;
  uVar15 = (uint)uVar1;
  local_7c = fVar8 / local_7c;
  if (0x10 < uVar1) {
    uVar15 = 0x10;
  }
  local_88 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_84 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_80 = (float)(local_68 + (pFVar2->Position).field0_0x0._s_0.Z);
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar15,&local_88);
  }
  pFVar11 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_res8,&pFVar11->ShaderVariableHashedName);
  FVar12.Hash = (ulong64)FHashedName::FHashedName(&local_res20,&local_res8);
  pFVar13 = FShader::GetUniformBufferParameter((FShader *)this,FVar12);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar13->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    SetDeferredLightParameters(param_1,local_res18,pFVar9->LightSceneInfo,param_3,param_5);
  }
  pFVar3 = param_3->Family->Scene;
  if (pFVar3 != (FSceneInterface *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x420))();
  }
  return;
}

// SetParameters @ 1455d1df0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
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
TShadowProjectionPS<4,0,0,0,1>::SetParameters
          (TShadowProjectionPS<4,0,0,0,1> *this,FRHIBatchedShaderParameters *param_1,int param_2,
          FSceneView *param_3,FProjectedShadowInfo *param_4,bool param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  FSceneInterface *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  FShaderParametersMetadata *pFVar11;
  FHashedName FVar12;
  FShaderUniformBufferParameter *pFVar13;
  ForElementType<float> FVar14;
  uint uVar15;
  FHashedName local_res8;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FHashedName local_res20;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  double local_68;
  
  pFVar9 = param_4;
  local_68 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Z;
  dVar5 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.X;
  dVar6 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Y;
  FShadowProjectionShaderParameters::Set
            (&this->ProjectionParameters,param_1,param_3,param_4,false,
             0.0 < (param_4->CascadeSettings).FadePlaneLength,true);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  uVar15 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar15 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar15 == 0) {
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
  uVar15 = (uint)uVar1;
  FVar14 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  if (uVar15 != 0) {
    if (FVar14 == (ForElementType<float>)0x0) {
      FVar14 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar15,
               (void *)((longlong)FVar14 + (longlong)param_2 * 4));
  }
  fVar8 = __real_3f800000;
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar15 = (uint)uVar1;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + __real_3f800000;
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar15,&param_4);
  }
  local_7c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  uVar1 = (this->LightPosition).NumBytes;
  uVar15 = (uint)uVar1;
  local_7c = fVar8 / local_7c;
  if (0x10 < uVar1) {
    uVar15 = 0x10;
  }
  local_88 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_84 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_80 = (float)(local_68 + (pFVar2->Position).field0_0x0._s_0.Z);
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar15,&local_88);
  }
  pFVar11 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_res8,&pFVar11->ShaderVariableHashedName);
  FVar12.Hash = (ulong64)FHashedName::FHashedName(&local_res20,&local_res8);
  pFVar13 = FShader::GetUniformBufferParameter((FShader *)this,FVar12);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar13->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    SetDeferredLightParameters(param_1,local_res18,pFVar9->LightSceneInfo,param_3,param_5);
  }
  pFVar3 = param_3->Family->Scene;
  if (pFVar3 != (FSceneInterface *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x420))();
  }
  return;
}

// SetParameters @ 1455d20c0

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
TShadowProjectionPS<4,0,0,0,0>::SetParameters
          (TShadowProjectionPS<4,0,0,0,0> *this,FRHIBatchedShaderParameters *param_1,int param_2,
          FSceneView *param_3,FProjectedShadowInfo *param_4,bool param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  FSceneInterface *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  FShaderParametersMetadata *pFVar11;
  FHashedName FVar12;
  FShaderUniformBufferParameter *pFVar13;
  ForElementType<float> FVar14;
  uint uVar15;
  FHashedName local_res8;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FHashedName local_res20;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  double local_68;
  
  pFVar9 = param_4;
  local_68 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Z;
  dVar5 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.X;
  dVar6 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Y;
  FShadowProjectionShaderParameters::Set
            (&this->ProjectionParameters,param_1,param_3,param_4,false,
             0.0 < (param_4->CascadeSettings).FadePlaneLength,false);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  uVar15 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar15 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar15 == 0) {
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
  uVar15 = (uint)uVar1;
  FVar14 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  if (uVar15 != 0) {
    if (FVar14 == (ForElementType<float>)0x0) {
      FVar14 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar15,
               (void *)((longlong)FVar14 + (longlong)param_2 * 4));
  }
  fVar8 = __real_3f800000;
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar15 = (uint)uVar1;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + __real_3f800000;
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar15,&param_4);
  }
  local_7c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  uVar1 = (this->LightPosition).NumBytes;
  uVar15 = (uint)uVar1;
  local_7c = fVar8 / local_7c;
  if (0x10 < uVar1) {
    uVar15 = 0x10;
  }
  local_88 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_84 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_80 = (float)(local_68 + (pFVar2->Position).field0_0x0._s_0.Z);
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar15,&local_88);
  }
  pFVar11 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_res8,&pFVar11->ShaderVariableHashedName);
  FVar12.Hash = (ulong64)FHashedName::FHashedName(&local_res20,&local_res8);
  pFVar13 = FShader::GetUniformBufferParameter((FShader *)this,FVar12);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar13->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    SetDeferredLightParameters(param_1,local_res18,pFVar9->LightSceneInfo,param_3,param_5);
  }
  pFVar3 = param_3->Family->Scene;
  if (pFVar3 != (FSceneInterface *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x420))();
  }
  return;
}

// SetParameters @ 1455d2390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TShadowProjectionPS<5,1,0,1,0>::SetParameters
          (TShadowProjectionPS<5,1,0,1,0> *this,FRHIBatchedShaderParameters *param_1,int param_2,
          FSceneView *param_3,FProjectedShadowInfo *param_4,bool param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  FSceneInterface *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  FShaderParametersMetadata *pFVar11;
  FHashedName FVar12;
  FShaderUniformBufferParameter *pFVar13;
  ForElementType<float> FVar14;
  uint uVar15;
  FHashedName local_res8;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FHashedName local_res20;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  double local_68;
  
  pFVar9 = param_4;
  local_68 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Z;
  dVar5 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.X;
  dVar6 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Y;
  FShadowProjectionShaderParameters::Set
            (&this->ProjectionParameters,param_1,param_3,param_4,false,
             0.0 < (param_4->CascadeSettings).FadePlaneLength,false);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  uVar15 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar15 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar15 == 0) {
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
  uVar15 = (uint)uVar1;
  FVar14 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  if (uVar15 != 0) {
    if (FVar14 == (ForElementType<float>)0x0) {
      FVar14 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar15,
               (void *)((longlong)FVar14 + (longlong)param_2 * 4));
  }
  fVar8 = __real_3f800000;
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar15 = (uint)uVar1;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + __real_3f800000;
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar15,&param_4);
  }
  local_7c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  uVar1 = (this->LightPosition).NumBytes;
  uVar15 = (uint)uVar1;
  local_7c = fVar8 / local_7c;
  if (0x10 < uVar1) {
    uVar15 = 0x10;
  }
  local_88 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_84 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_80 = (float)(local_68 + (pFVar2->Position).field0_0x0._s_0.Z);
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar15,&local_88);
  }
  pFVar11 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_res8,&pFVar11->ShaderVariableHashedName);
  FVar12.Hash = (ulong64)FHashedName::FHashedName(&local_res20,&local_res8);
  pFVar13 = FShader::GetUniformBufferParameter((FShader *)this,FVar12);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar13->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    SetDeferredLightParameters(param_1,local_res18,pFVar9->LightSceneInfo,param_3,param_5);
  }
  pFVar3 = param_3->Family->Scene;
  if (pFVar3 != (FSceneInterface *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x420))();
  }
  return;
}

// SetParameters @ 1455d2660

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
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
TShadowProjectionPS<5,1,0,0,0>::SetParameters
          (TShadowProjectionPS<5,1,0,0,0> *this,FRHIBatchedShaderParameters *param_1,int param_2,
          FSceneView *param_3,FProjectedShadowInfo *param_4,bool param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  FSceneInterface *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  FShaderParametersMetadata *pFVar11;
  FHashedName FVar12;
  FShaderUniformBufferParameter *pFVar13;
  ForElementType<float> FVar14;
  uint uVar15;
  FHashedName local_res8;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FHashedName local_res20;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  double local_68;
  
  pFVar9 = param_4;
  local_68 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Z;
  dVar5 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.X;
  dVar6 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Y;
  FShadowProjectionShaderParameters::Set
            (&this->ProjectionParameters,param_1,param_3,param_4,false,
             0.0 < (param_4->CascadeSettings).FadePlaneLength,false);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  uVar15 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar15 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar15 == 0) {
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
  uVar15 = (uint)uVar1;
  FVar14 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  if (uVar15 != 0) {
    if (FVar14 == (ForElementType<float>)0x0) {
      FVar14 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar15,
               (void *)((longlong)FVar14 + (longlong)param_2 * 4));
  }
  fVar8 = __real_3f800000;
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar15 = (uint)uVar1;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + __real_3f800000;
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar15,&param_4);
  }
  local_7c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  uVar1 = (this->LightPosition).NumBytes;
  uVar15 = (uint)uVar1;
  local_7c = fVar8 / local_7c;
  if (0x10 < uVar1) {
    uVar15 = 0x10;
  }
  local_88 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_84 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_80 = (float)(local_68 + (pFVar2->Position).field0_0x0._s_0.Z);
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar15,&local_88);
  }
  pFVar11 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_res8,&pFVar11->ShaderVariableHashedName);
  FVar12.Hash = (ulong64)FHashedName::FHashedName(&local_res20,&local_res8);
  pFVar13 = FShader::GetUniformBufferParameter((FShader *)this,FVar12);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar13->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    SetDeferredLightParameters(param_1,local_res18,pFVar9->LightSceneInfo,param_3,param_5);
  }
  pFVar3 = param_3->Family->Scene;
  if (pFVar3 != (FSceneInterface *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x420))();
  }
  return;
}

// SetParameters @ 1455d2930

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
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
TShadowProjectionPS<5,0,1,0,0>::SetParameters
          (TShadowProjectionPS<5,0,1,0,0> *this,FRHIBatchedShaderParameters *param_1,int param_2,
          FSceneView *param_3,FProjectedShadowInfo *param_4,bool param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  FSceneInterface *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  FShaderParametersMetadata *pFVar11;
  FHashedName FVar12;
  FShaderUniformBufferParameter *pFVar13;
  ForElementType<float> FVar14;
  uint uVar15;
  FHashedName local_res8;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FHashedName local_res20;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  double local_68;
  
  pFVar9 = param_4;
  local_68 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Z;
  dVar5 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.X;
  dVar6 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Y;
  FShadowProjectionShaderParameters::Set
            (&this->ProjectionParameters,param_1,param_3,param_4,true,
             0.0 < (param_4->CascadeSettings).FadePlaneLength,false);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  uVar15 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar15 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar15 == 0) {
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
  uVar15 = (uint)uVar1;
  FVar14 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  if (uVar15 != 0) {
    if (FVar14 == (ForElementType<float>)0x0) {
      FVar14 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar15,
               (void *)((longlong)FVar14 + (longlong)param_2 * 4));
  }
  fVar8 = __real_3f800000;
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar15 = (uint)uVar1;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + __real_3f800000;
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar15,&param_4);
  }
  local_7c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  uVar1 = (this->LightPosition).NumBytes;
  uVar15 = (uint)uVar1;
  local_7c = fVar8 / local_7c;
  if (0x10 < uVar1) {
    uVar15 = 0x10;
  }
  local_88 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_84 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_80 = (float)(local_68 + (pFVar2->Position).field0_0x0._s_0.Z);
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar15,&local_88);
  }
  pFVar11 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_res8,&pFVar11->ShaderVariableHashedName);
  FVar12.Hash = (ulong64)FHashedName::FHashedName(&local_res20,&local_res8);
  pFVar13 = FShader::GetUniformBufferParameter((FShader *)this,FVar12);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar13->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    SetDeferredLightParameters(param_1,local_res18,pFVar9->LightSceneInfo,param_3,param_5);
  }
  pFVar3 = param_3->Family->Scene;
  if (pFVar3 != (FSceneInterface *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x420))();
  }
  return;
}

// SetParameters @ 1455d2c00

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
TShadowProjectionPS<5,0,0,1,0>::SetParameters
          (TShadowProjectionPS<5,0,0,1,0> *this,FRHIBatchedShaderParameters *param_1,int param_2,
          FSceneView *param_3,FProjectedShadowInfo *param_4,bool param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  FSceneInterface *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  FShaderParametersMetadata *pFVar11;
  FHashedName FVar12;
  FShaderUniformBufferParameter *pFVar13;
  ForElementType<float> FVar14;
  uint uVar15;
  FHashedName local_res8;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FHashedName local_res20;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  double local_68;
  
  pFVar9 = param_4;
  local_68 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Z;
  dVar5 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.X;
  dVar6 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Y;
  FShadowProjectionShaderParameters::Set
            (&this->ProjectionParameters,param_1,param_3,param_4,false,
             0.0 < (param_4->CascadeSettings).FadePlaneLength,false);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  uVar15 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar15 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar15 == 0) {
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
  uVar15 = (uint)uVar1;
  FVar14 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  if (uVar15 != 0) {
    if (FVar14 == (ForElementType<float>)0x0) {
      FVar14 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar15,
               (void *)((longlong)FVar14 + (longlong)param_2 * 4));
  }
  fVar8 = __real_3f800000;
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar15 = (uint)uVar1;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + __real_3f800000;
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar15,&param_4);
  }
  local_7c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  uVar1 = (this->LightPosition).NumBytes;
  uVar15 = (uint)uVar1;
  local_7c = fVar8 / local_7c;
  if (0x10 < uVar1) {
    uVar15 = 0x10;
  }
  local_88 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_84 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_80 = (float)(local_68 + (pFVar2->Position).field0_0x0._s_0.Z);
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar15,&local_88);
  }
  pFVar11 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_res8,&pFVar11->ShaderVariableHashedName);
  FVar12.Hash = (ulong64)FHashedName::FHashedName(&local_res20,&local_res8);
  pFVar13 = FShader::GetUniformBufferParameter((FShader *)this,FVar12);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar13->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    SetDeferredLightParameters(param_1,local_res18,pFVar9->LightSceneInfo,param_3,param_5);
  }
  pFVar3 = param_3->Family->Scene;
  if (pFVar3 != (FSceneInterface *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x420))();
  }
  return;
}

// SetParameters @ 1455d2ed0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TShadowProjectionPS<5,0,0,0,1>::SetParameters
          (TShadowProjectionPS<5,0,0,0,1> *this,FRHIBatchedShaderParameters *param_1,int param_2,
          FSceneView *param_3,FProjectedShadowInfo *param_4,bool param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  FSceneInterface *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  FShaderParametersMetadata *pFVar11;
  FHashedName FVar12;
  FShaderUniformBufferParameter *pFVar13;
  ForElementType<float> FVar14;
  uint uVar15;
  FHashedName local_res8;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FHashedName local_res20;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  double local_68;
  
  pFVar9 = param_4;
  local_68 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Z;
  dVar5 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.X;
  dVar6 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Y;
  FShadowProjectionShaderParameters::Set
            (&this->ProjectionParameters,param_1,param_3,param_4,false,
             0.0 < (param_4->CascadeSettings).FadePlaneLength,true);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  uVar15 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar15 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar15 == 0) {
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
  uVar15 = (uint)uVar1;
  FVar14 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  if (uVar15 != 0) {
    if (FVar14 == (ForElementType<float>)0x0) {
      FVar14 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar15,
               (void *)((longlong)FVar14 + (longlong)param_2 * 4));
  }
  fVar8 = __real_3f800000;
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar15 = (uint)uVar1;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + __real_3f800000;
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar15,&param_4);
  }
  local_7c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  uVar1 = (this->LightPosition).NumBytes;
  uVar15 = (uint)uVar1;
  local_7c = fVar8 / local_7c;
  if (0x10 < uVar1) {
    uVar15 = 0x10;
  }
  local_88 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_84 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_80 = (float)(local_68 + (pFVar2->Position).field0_0x0._s_0.Z);
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar15,&local_88);
  }
  pFVar11 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_res8,&pFVar11->ShaderVariableHashedName);
  FVar12.Hash = (ulong64)FHashedName::FHashedName(&local_res20,&local_res8);
  pFVar13 = FShader::GetUniformBufferParameter((FShader *)this,FVar12);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar13->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    SetDeferredLightParameters(param_1,local_res18,pFVar9->LightSceneInfo,param_3,param_5);
  }
  pFVar3 = param_3->Family->Scene;
  if (pFVar3 != (FSceneInterface *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x420))();
  }
  return;
}

// SetParameters @ 1455d31a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
TShadowProjectionPS<5,0,0,0,0>::SetParameters
          (TShadowProjectionPS<5,0,0,0,0> *this,FRHIBatchedShaderParameters *param_1,int param_2,
          FSceneView *param_3,FProjectedShadowInfo *param_4,bool param_5)

{
  ushort uVar1;
  FLightSceneProxy *pFVar2;
  FSceneInterface *pFVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  FProjectedShadowInfo *pFVar7;
  float fVar8;
  FProjectedShadowInfo *pFVar9;
  bool bVar10;
  FShaderParametersMetadata *pFVar11;
  FHashedName FVar12;
  FShaderUniformBufferParameter *pFVar13;
  ForElementType<float> FVar14;
  uint uVar15;
  FHashedName local_res8;
  TShaderUniformBufferParameter<FDeferredLightUniformStruct> local_res18 [4];
  FHashedName local_res20;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  double local_68;
  
  pFVar9 = param_4;
  local_68 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Z;
  dVar5 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.X;
  dVar6 = (param_3->ViewMatrices).PreViewTranslation.field0_0x0._s_0.Y;
  FShadowProjectionShaderParameters::Set
            (&this->ProjectionParameters,param_1,param_3,param_4,false,
             0.0 < (param_4->CascadeSettings).FadePlaneLength,false);
  pFVar2 = pFVar9->LightSceneInfo->Proxy;
  uVar15 = 0;
  if (param_2 < (pFVar9->FadeAlphas).ArrayNum) {
    uVar15 = (uint)~param_2 >> 0x1f;
  }
  pFVar7 = param_4;
  if (uVar15 == 0) {
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
  uVar15 = (uint)uVar1;
  FVar14 = (pFVar9->FadeAlphas).AllocatorInstance.SecondaryData;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  if (uVar15 != 0) {
    if (FVar14 == (ForElementType<float>)0x0) {
      FVar14 = (ForElementType<float>)&pFVar9->FadeAlphas;
    }
    param_4 = pFVar7;
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowFadeFraction).BufferIndex,
               (uint)(this->ShadowFadeFraction).BaseIndex,uVar15,
               (void *)((longlong)FVar14 + (longlong)param_2 * 4));
  }
  fVar8 = __real_3f800000;
  uVar1 = (this->ShadowSharpen).NumBytes;
  uVar15 = (uint)uVar1;
  if (4 < uVar1) {
    uVar15 = 4;
  }
  param_4._0_4_ = pFVar2->ShadowSharpen * __real_40e00000 + __real_3f800000;
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->ShadowSharpen).BufferIndex,(uint)(this->ShadowSharpen).BaseIndex
               ,uVar15,&param_4);
  }
  local_7c = (float)(**(code **)(pFVar2->_padding_ + 0x18))(pFVar2);
  uVar1 = (this->LightPosition).NumBytes;
  uVar15 = (uint)uVar1;
  local_7c = fVar8 / local_7c;
  if (0x10 < uVar1) {
    uVar15 = 0x10;
  }
  local_88 = (float)(dVar5 + (pFVar2->Position).field0_0x0._s_0.X);
  local_84 = (float)(dVar6 + (pFVar2->Position).field0_0x0._s_0.Y);
  local_80 = (float)(local_68 + (pFVar2->Position).field0_0x0._s_0.Z);
  if (uVar15 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (param_1,(uint)(this->LightPosition).BufferIndex,(uint)(this->LightPosition).BaseIndex
               ,uVar15,&local_88);
  }
  pFVar11 = FDeferredLightUniformStruct::GetStructMetadata();
  FHashedName::FHashedName(&local_res8,&pFVar11->ShaderVariableHashedName);
  FVar12.Hash = (ulong64)FHashedName::FHashedName(&local_res20,&local_res8);
  pFVar13 = FShader::GetUniformBufferParameter((FShader *)this,FVar12);
  local_res18[0] = (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)pFVar13->BaseIndex;
  if (local_res18[0] != (TShaderUniformBufferParameter<FDeferredLightUniformStruct>)0xffff) {
    SetDeferredLightParameters(param_1,local_res18,pFVar9->LightSceneInfo,param_3,param_5);
  }
  pFVar3 = param_3->Family->Scene;
  if (pFVar3 != (FSceneInterface *)0x0) {
    (**(code **)(pFVar3->_padding_ + 0x420))();
  }
  return;
}

// ShouldCompilePermutationImpl @ 1455d94e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TShadowProjectionPS<1,1,0,1,0>::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

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
  return 2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel;
}

// ShouldCompilePermutationImpl @ 1455d9540

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TShadowProjectionPS<1,1,0,0,0>::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

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

// ShouldCompilePermutationImpl @ 1455d9590

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TShadowProjectionPS<1,0,0,1,0>::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

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
  return 2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel;
}

// ShouldCompilePermutationImpl @ 1455d95f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TShadowProjectionPS<1,0,0,0,1>::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

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
  return 2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel;
}

// ShouldCompilePermutationImpl @ 1455d9650

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TShadowProjectionPS<1,0,0,0,0>::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

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

// ShouldCompilePermutationImpl @ 1455d96a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TShadowProjectionPS<2,1,0,1,0>::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

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
  return 2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel;
}

// ShouldCompilePermutationImpl @ 1455d9700

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TShadowProjectionPS<2,1,0,0,0>::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

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

// ShouldCompilePermutationImpl @ 1455d9750

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TShadowProjectionPS<2,0,0,1,0>::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

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
  return 2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel;
}

// ShouldCompilePermutationImpl @ 1455d97b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TShadowProjectionPS<2,0,0,0,1>::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

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
  return 2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel;
}

// ShouldCompilePermutationImpl @ 1455d9810

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TShadowProjectionPS<2,0,0,0,0>::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

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

// ShouldCompilePermutationImpl @ 1455d9860

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TShadowProjectionPS<3,1,0,1,0>::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

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
  return 2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel;
}

// ShouldCompilePermutationImpl @ 1455d98c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TShadowProjectionPS<3,1,0,0,0>::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

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

// ShouldCompilePermutationImpl @ 1455d9910

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TShadowProjectionPS<3,0,0,1,0>::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

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
  return 2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel;
}

// ShouldCompilePermutationImpl @ 1455d9970

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TShadowProjectionPS<3,0,0,0,1>::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

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
  return 2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel;
}

// ShouldCompilePermutationImpl @ 1455d99d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TShadowProjectionPS<3,0,0,0,0>::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

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

// ShouldCompilePermutationImpl @ 1455d9a20

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TShadowProjectionPS<4,1,0,1,0>::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

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
  return 2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel;
}

// ShouldCompilePermutationImpl @ 1455d9a80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TShadowProjectionPS<4,1,0,0,0>::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

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

// ShouldCompilePermutationImpl @ 1455d9ad0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TShadowProjectionPS<4,0,0,1,0>::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

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
  return 2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel;
}

// ShouldCompilePermutationImpl @ 1455d9b30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TShadowProjectionPS<4,0,0,0,1>::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

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
  return 2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel;
}

// ShouldCompilePermutationImpl @ 1455d9b90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TShadowProjectionPS<4,0,0,0,0>::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

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

// ShouldCompilePermutationImpl @ 1455d9be0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TShadowProjectionPS<5,1,0,1,0>::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

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
  return 2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel;
}

// ShouldCompilePermutationImpl @ 1455d9c40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TShadowProjectionPS<5,1,0,0,0>::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

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

// ShouldCompilePermutationImpl @ 1455d9c90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TShadowProjectionPS<5,0,0,1,0>::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

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
  return 2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel;
}

// ShouldCompilePermutationImpl @ 1455d9cf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TShadowProjectionPS<5,0,0,0,1>::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

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
  return 2 < (int)FGenericDataDrivenShaderPlatformInfo::Infos[EVar1].MaxFeatureLevel;
}

// ShouldCompilePermutationImpl @ 1455d9d50

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __cdecl
TShadowProjectionPS<5,0,0,0,0>::ShouldCompilePermutationImpl(FShaderPermutationParameters *param_1)

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

// ShouldPrecachePermutationImpl @ 1455da6f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TShadowProjectionPS<1,1,0,1,0>::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da700

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TShadowProjectionPS<1,1,0,0,0>::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da710

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TShadowProjectionPS<1,0,0,1,0>::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da720

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TShadowProjectionPS<1,0,0,0,1>::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da730

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TShadowProjectionPS<1,0,0,0,0>::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da740

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TShadowProjectionPS<2,1,0,1,0>::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da750

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TShadowProjectionPS<2,1,0,0,0>::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da760

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TShadowProjectionPS<2,0,0,1,0>::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da770

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TShadowProjectionPS<2,0,0,0,1>::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da780

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TShadowProjectionPS<2,0,0,0,0>::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da790

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TShadowProjectionPS<3,1,0,1,0>::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da7a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TShadowProjectionPS<3,1,0,0,0>::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da7b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TShadowProjectionPS<3,0,0,1,0>::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da7c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TShadowProjectionPS<3,0,0,0,1>::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da7d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TShadowProjectionPS<3,0,0,0,0>::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da7e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TShadowProjectionPS<4,1,0,1,0>::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da7f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TShadowProjectionPS<4,1,0,0,0>::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da800

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TShadowProjectionPS<4,0,0,1,0>::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da810

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TShadowProjectionPS<4,0,0,0,1>::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da820

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TShadowProjectionPS<4,0,0,0,0>::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da830

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TShadowProjectionPS<5,1,0,1,0>::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da840

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TShadowProjectionPS<5,1,0,0,0>::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da850

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TShadowProjectionPS<5,0,0,1,0>::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da860

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TShadowProjectionPS<5,0,0,0,1>::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// ShouldPrecachePermutationImpl @ 1455da870

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

EShaderPermutationPrecacheRequest __cdecl
TShadowProjectionPS<5,0,0,0,0>::ShouldPrecachePermutationImpl(FShaderPermutationParameters *param_1)

{
  return Precached;
}

// StaticGetTypeLayout @ 1455dee40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TShadowProjectionPS<1,1,0,1,0>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<1,1,0,1,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<1,1,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141a42 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141a20 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141a28 = ::TypeBuffer[0x10];
    DAT_155141a28_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141a28_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141a28_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141a28_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141a28_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141a28_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141a28_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,1,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141a30 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141a38 = 0x13c;
    _DAT_155141a3c = 1;
    _DAT_155141a40 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<1,1,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_1551411c2 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_1551411a0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1551411a8 = ::TypeBuffer[0x10];
    DAT_1551411a8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551411a8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551411a8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551411a8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551411a8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551411a8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551411a8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,1,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1551411b0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1551411b8 = 0x136;
    _DAT_1551411bc = 1;
    _DAT_1551411c0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<1,1,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f19a = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f178 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f180 = ::TypeBuffer[0x10];
    DAT_15513f180_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f180_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f180_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f180_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f180_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f180_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f180_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,1,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f188 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f190 = 0x130;
    _DAT_15513f194 = 1;
    _DAT_15513f198 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<1,1,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e792 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e770 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e778 = ::TypeBuffer[0x10];
    DAT_15513e778_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e778_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e778_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e778_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e778_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e778_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e778_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,1,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e780 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e788 = 0xe0;
    _DAT_15513e78c = 1;
    _DAT_15513e790 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// StaticGetTypeLayout @ 1455df130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TShadowProjectionPS<1,1,0,0,0>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<1,1,0,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<1,1,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141b32 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141b10 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141b18 = ::TypeBuffer[0x10];
    DAT_155141b18_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141b18_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141b18_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141b18_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141b18_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141b18_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141b18_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,1,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141b20 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141b28 = 0x13c;
    _DAT_155141b2c = 1;
    _DAT_155141b30 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<1,1,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_1551412b2 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155141290 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141298 = ::TypeBuffer[0x10];
    DAT_155141298_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141298_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141298_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141298_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141298_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141298_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141298_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,1,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1551412a0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1551412a8 = 0x136;
    _DAT_1551412ac = 1;
    _DAT_1551412b0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<1,1,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f28a = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f268 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f270 = ::TypeBuffer[0x10];
    DAT_15513f270_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f270_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f270_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f270_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f270_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f270_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f270_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,1,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f278 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f280 = 0x130;
    _DAT_15513f284 = 1;
    _DAT_15513f288 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<1,1,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e882 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e860 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e868 = ::TypeBuffer[0x10];
    DAT_15513e868_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e868_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e868_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e868_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e868_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e868_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e868_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,1,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e870 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e878 = 0xe0;
    _DAT_15513e87c = 1;
    _DAT_15513e880 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// StaticGetTypeLayout @ 1455df420

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TShadowProjectionPS<1,0,1,0,0>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FShadowModulate;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<1,0,1,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<1,0,1,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141862 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141840 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141848 = ::TypeBuffer[0x10];
    DAT_155141848_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141848_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141848_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141848_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141848_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141848_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141848_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,0,1,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141850 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141858 = 0x13c;
    _DAT_15514185c = 1;
    _DAT_155141860 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<1,0,1,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155140fe2 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155140fc0 = FShaderParameter::StaticGetTypeLayout();
    DAT_155140fc8 = ::TypeBuffer[0x10];
    DAT_155140fc8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155140fc8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155140fc8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155140fc8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155140fc8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155140fc8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155140fc8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,0,1,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155140fd0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155140fd8 = 0x136;
    _DAT_155140fdc = 1;
    _DAT_155140fe0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<1,0,1,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513efba = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513ef98 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513efa0 = ::TypeBuffer[0x10];
    DAT_15513efa0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513efa0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513efa0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513efa0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513efa0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513efa0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513efa0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,0,1,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513efa8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513efb0 = 0x130;
    _DAT_15513efb4 = 1;
    _DAT_15513efb8 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<1,0,1,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e5b2 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e590 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e598 = ::TypeBuffer[0x10];
    DAT_15513e598_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e598_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e598_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e598_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e598_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e598_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e598_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,0,1,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e5a0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e5a8 = 0xe0;
    _DAT_15513e5ac = 1;
    _DAT_15513e5b0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// StaticGetTypeLayout @ 1455df710

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TShadowProjectionPS<1,0,0,1,0>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<1,0,0,1,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<1,0,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141c22 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141c00 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141c08 = ::TypeBuffer[0x10];
    DAT_155141c08_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141c08_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141c08_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141c08_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141c08_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141c08_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141c08_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,0,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141c10 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141c18 = 0x13c;
    _DAT_155141c1c = 1;
    _DAT_155141c20 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<1,0,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_1551413a2 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155141380 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141388 = ::TypeBuffer[0x10];
    DAT_155141388_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141388_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141388_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141388_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141388_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141388_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141388_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,0,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141390 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141398 = 0x136;
    _DAT_15514139c = 1;
    _DAT_1551413a0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<1,0,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f37a = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f358 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f360 = ::TypeBuffer[0x10];
    DAT_15513f360_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f360_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f360_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f360_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f360_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f360_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f360_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,0,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f368 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f370 = 0x130;
    _DAT_15513f374 = 1;
    _DAT_15513f378 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<1,0,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e972 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e950 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e958 = ::TypeBuffer[0x10];
    DAT_15513e958_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e958_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e958_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e958_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e958_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e958_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e958_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,0,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e960 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e968 = 0xe0;
    _DAT_15513e96c = 1;
    _DAT_15513e970 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// StaticGetTypeLayout @ 1455dfa00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TShadowProjectionPS<1,0,0,0,1>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<1,0,0,0,1>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<1,0,0,0,1>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141952 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141930 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141938 = ::TypeBuffer[0x10];
    DAT_155141938_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141938_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141938_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141938_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141938_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141938_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141938_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,0,0,0,1>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141940 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141948 = 0x13c;
    _DAT_15514194c = 1;
    _DAT_155141950 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<1,0,0,0,1>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_1551410d2 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_1551410b0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1551410b8 = ::TypeBuffer[0x10];
    DAT_1551410b8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551410b8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551410b8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551410b8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551410b8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551410b8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551410b8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,0,0,0,1>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1551410c0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1551410c8 = 0x136;
    _DAT_1551410cc = 1;
    _DAT_1551410d0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<1,0,0,0,1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f0aa = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f088 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f090 = ::TypeBuffer[0x10];
    DAT_15513f090_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f090_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f090_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f090_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f090_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f090_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f090_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,0,0,0,1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f098 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f0a0 = 0x130;
    _DAT_15513f0a4 = 1;
    _DAT_15513f0a8 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<1,0,0,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e6a2 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e680 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e688 = ::TypeBuffer[0x10];
    DAT_15513e688_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e688_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e688_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e688_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e688_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e688_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e688_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,0,0,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e690 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e698 = 0xe0;
    _DAT_15513e69c = 1;
    _DAT_15513e6a0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// StaticGetTypeLayout @ 1455dfcf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TShadowProjectionPS<1,0,0,0,0>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<1,0,0,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<1,0,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141d12 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141cf0 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141cf8 = ::TypeBuffer[0x10];
    DAT_155141cf8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141cf8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141cf8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141cf8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141cf8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141cf8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141cf8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,0,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141d00 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141d08 = 0x13c;
    _DAT_155141d0c = 1;
    _DAT_155141d10 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<1,0,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155141492 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155141470 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141478 = ::TypeBuffer[0x10];
    DAT_155141478_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141478_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141478_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141478_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141478_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141478_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141478_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,0,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141480 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141488 = 0x136;
    _DAT_15514148c = 1;
    _DAT_155141490 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<1,0,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f46a = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f448 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f450 = ::TypeBuffer[0x10];
    DAT_15513f450_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f450_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f450_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f450_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f450_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f450_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f450_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,0,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f458 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f460 = 0x130;
    _DAT_15513f464 = 1;
    _DAT_15513f468 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<1,0,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513ea62 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513ea40 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513ea48 = ::TypeBuffer[0x10];
    DAT_15513ea48_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513ea48_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513ea48_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513ea48_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513ea48_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513ea48_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513ea48_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<1,0,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513ea50 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513ea58 = 0xe0;
    _DAT_15513ea5c = 1;
    _DAT_15513ea60 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// StaticGetTypeLayout @ 1455dffe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TShadowProjectionPS<2,1,0,1,0>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<2,1,0,1,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<2,1,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141a12 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_1551419f0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1551419f8 = ::TypeBuffer[0x10];
    DAT_1551419f8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551419f8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551419f8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551419f8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551419f8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551419f8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551419f8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,1,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141a00 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141a08 = 0x13c;
    _DAT_155141a0c = 1;
    _DAT_155141a10 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<2,1,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155141192 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155141170 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141178 = ::TypeBuffer[0x10];
    DAT_155141178_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141178_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141178_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141178_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141178_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141178_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141178_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,1,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141180 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141188 = 0x136;
    _DAT_15514118c = 1;
    _DAT_155141190 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<2,1,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f16a = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f148 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f150 = ::TypeBuffer[0x10];
    DAT_15513f150_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f150_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f150_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f150_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f150_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f150_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f150_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,1,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f158 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f160 = 0x130;
    _DAT_15513f164 = 1;
    _DAT_15513f168 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<2,1,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e762 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e740 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e748 = ::TypeBuffer[0x10];
    DAT_15513e748_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e748_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e748_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e748_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e748_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e748_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e748_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,1,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e750 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e758 = 0xe0;
    _DAT_15513e75c = 1;
    _DAT_15513e760 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// StaticGetTypeLayout @ 1455e02d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TShadowProjectionPS<2,1,0,0,0>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<2,1,0,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<2,1,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141b02 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141ae0 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141ae8 = ::TypeBuffer[0x10];
    DAT_155141ae8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141ae8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141ae8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141ae8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141ae8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141ae8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141ae8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,1,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141af0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141af8 = 0x13c;
    _DAT_155141afc = 1;
    _DAT_155141b00 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<2,1,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155141282 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155141260 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141268 = ::TypeBuffer[0x10];
    DAT_155141268_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141268_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141268_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141268_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141268_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141268_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141268_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,1,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141270 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141278 = 0x136;
    _DAT_15514127c = 1;
    _DAT_155141280 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<2,1,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f25a = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f238 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f240 = ::TypeBuffer[0x10];
    DAT_15513f240_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f240_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f240_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f240_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f240_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f240_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f240_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,1,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f248 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f250 = 0x130;
    _DAT_15513f254 = 1;
    _DAT_15513f258 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<2,1,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e852 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e830 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e838 = ::TypeBuffer[0x10];
    DAT_15513e838_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e838_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e838_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e838_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e838_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e838_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e838_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,1,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e840 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e848 = 0xe0;
    _DAT_15513e84c = 1;
    _DAT_15513e850 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// StaticGetTypeLayout @ 1455e05c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TShadowProjectionPS<2,0,1,0,0>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FShadowModulate;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<2,0,1,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<2,0,1,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141832 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141810 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141818 = ::TypeBuffer[0x10];
    DAT_155141818_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141818_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141818_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141818_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141818_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141818_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141818_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,0,1,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141820 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141828 = 0x13c;
    _DAT_15514182c = 1;
    _DAT_155141830 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<2,0,1,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155140fb2 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155140f90 = FShaderParameter::StaticGetTypeLayout();
    DAT_155140f98 = ::TypeBuffer[0x10];
    DAT_155140f98_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155140f98_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155140f98_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155140f98_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155140f98_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155140f98_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155140f98_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,0,1,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155140fa0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155140fa8 = 0x136;
    _DAT_155140fac = 1;
    _DAT_155140fb0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<2,0,1,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513ef5a = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513ef38 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513ef40 = ::TypeBuffer[0x10];
    DAT_15513ef40_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513ef40_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513ef40_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513ef40_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513ef40_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513ef40_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513ef40_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,0,1,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513ef48 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513ef50 = 0x130;
    _DAT_15513ef54 = 1;
    _DAT_15513ef58 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<2,0,1,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e552 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e530 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e538 = ::TypeBuffer[0x10];
    DAT_15513e538_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e538_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e538_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e538_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e538_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e538_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e538_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,0,1,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e540 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e548 = 0xe0;
    _DAT_15513e54c = 1;
    _DAT_15513e550 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// StaticGetTypeLayout @ 1455e08b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TShadowProjectionPS<2,0,0,1,0>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<2,0,0,1,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<2,0,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141bf2 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141bd0 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141bd8 = ::TypeBuffer[0x10];
    DAT_155141bd8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141bd8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141bd8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141bd8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141bd8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141bd8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141bd8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,0,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141be0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141be8 = 0x13c;
    _DAT_155141bec = 1;
    _DAT_155141bf0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<2,0,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155141372 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155141350 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141358 = ::TypeBuffer[0x10];
    DAT_155141358_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141358_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141358_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141358_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141358_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141358_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141358_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,0,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141360 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141368 = 0x136;
    _DAT_15514136c = 1;
    _DAT_155141370 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<2,0,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f34a = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f328 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f330 = ::TypeBuffer[0x10];
    DAT_15513f330_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f330_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f330_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f330_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f330_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f330_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f330_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,0,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f338 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f340 = 0x130;
    _DAT_15513f344 = 1;
    _DAT_15513f348 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<2,0,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e942 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e920 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e928 = ::TypeBuffer[0x10];
    DAT_15513e928_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e928_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e928_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e928_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e928_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e928_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e928_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,0,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e930 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e938 = 0xe0;
    _DAT_15513e93c = 1;
    _DAT_15513e940 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// StaticGetTypeLayout @ 1455e0ba0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TShadowProjectionPS<2,0,0,0,1>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<2,0,0,0,1>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<2,0,0,0,1>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141922 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141900 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141908 = ::TypeBuffer[0x10];
    DAT_155141908_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141908_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141908_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141908_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141908_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141908_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141908_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,0,0,0,1>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141910 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141918 = 0x13c;
    _DAT_15514191c = 1;
    _DAT_155141920 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<2,0,0,0,1>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_1551410a2 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155141080 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141088 = ::TypeBuffer[0x10];
    DAT_155141088_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141088_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141088_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141088_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141088_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141088_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141088_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,0,0,0,1>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141090 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141098 = 0x136;
    _DAT_15514109c = 1;
    _DAT_1551410a0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<2,0,0,0,1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f07a = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f058 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f060 = ::TypeBuffer[0x10];
    DAT_15513f060_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f060_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f060_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f060_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f060_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f060_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f060_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,0,0,0,1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f068 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f070 = 0x130;
    _DAT_15513f074 = 1;
    _DAT_15513f078 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<2,0,0,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e672 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e650 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e658 = ::TypeBuffer[0x10];
    DAT_15513e658_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e658_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e658_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e658_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e658_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e658_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e658_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,0,0,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e660 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e668 = 0xe0;
    _DAT_15513e66c = 1;
    _DAT_15513e670 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// StaticGetTypeLayout @ 1455e0e90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TShadowProjectionPS<2,0,0,0,0>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<2,0,0,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<2,0,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141ce2 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141cc0 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141cc8 = ::TypeBuffer[0x10];
    DAT_155141cc8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141cc8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141cc8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141cc8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141cc8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141cc8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141cc8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,0,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141cd0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141cd8 = 0x13c;
    _DAT_155141cdc = 1;
    _DAT_155141ce0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<2,0,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155141462 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155141440 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141448 = ::TypeBuffer[0x10];
    DAT_155141448_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141448_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141448_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141448_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141448_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141448_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141448_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,0,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141450 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141458 = 0x136;
    _DAT_15514145c = 1;
    _DAT_155141460 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<2,0,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f43a = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f418 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f420 = ::TypeBuffer[0x10];
    DAT_15513f420_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f420_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f420_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f420_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f420_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f420_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f420_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,0,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f428 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f430 = 0x130;
    _DAT_15513f434 = 1;
    _DAT_15513f438 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<2,0,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513ea32 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513ea10 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513ea18 = ::TypeBuffer[0x10];
    DAT_15513ea18_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513ea18_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513ea18_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513ea18_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513ea18_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513ea18_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513ea18_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<2,0,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513ea20 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513ea28 = 0xe0;
    _DAT_15513ea2c = 1;
    _DAT_15513ea30 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// StaticGetTypeLayout @ 1455e1180

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TShadowProjectionPS<3,1,0,1,0>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<3,1,0,1,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<3,1,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_1551419e2 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_1551419c0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1551419c8 = ::TypeBuffer[0x10];
    DAT_1551419c8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551419c8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551419c8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551419c8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551419c8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551419c8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551419c8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,1,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1551419d0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1551419d8 = 0x13c;
    _DAT_1551419dc = 1;
    _DAT_1551419e0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<3,1,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155141162 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155141140 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141148 = ::TypeBuffer[0x10];
    DAT_155141148_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141148_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141148_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141148_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141148_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141148_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141148_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,1,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141150 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141158 = 0x136;
    _DAT_15514115c = 1;
    _DAT_155141160 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<3,1,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f13a = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f118 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f120 = ::TypeBuffer[0x10];
    DAT_15513f120_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f120_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f120_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f120_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f120_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f120_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f120_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,1,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f128 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f130 = 0x130;
    _DAT_15513f134 = 1;
    _DAT_15513f138 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<3,1,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e732 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e710 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e718 = ::TypeBuffer[0x10];
    DAT_15513e718_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e718_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e718_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e718_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e718_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e718_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e718_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,1,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e720 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e728 = 0xe0;
    _DAT_15513e72c = 1;
    _DAT_15513e730 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// StaticGetTypeLayout @ 1455e1470

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TShadowProjectionPS<3,1,0,0,0>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<3,1,0,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<3,1,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141ad2 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141ab0 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141ab8 = ::TypeBuffer[0x10];
    DAT_155141ab8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141ab8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141ab8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141ab8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141ab8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141ab8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141ab8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,1,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141ac0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141ac8 = 0x13c;
    _DAT_155141acc = 1;
    _DAT_155141ad0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<3,1,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155141252 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155141230 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141238 = ::TypeBuffer[0x10];
    DAT_155141238_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141238_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141238_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141238_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141238_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141238_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141238_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,1,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141240 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141248 = 0x136;
    _DAT_15514124c = 1;
    _DAT_155141250 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<3,1,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f22a = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f208 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f210 = ::TypeBuffer[0x10];
    DAT_15513f210_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f210_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f210_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f210_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f210_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f210_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f210_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,1,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f218 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f220 = 0x130;
    _DAT_15513f224 = 1;
    _DAT_15513f228 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<3,1,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e822 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e800 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e808 = ::TypeBuffer[0x10];
    DAT_15513e808_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e808_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e808_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e808_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e808_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e808_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e808_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,1,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e810 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e818 = 0xe0;
    _DAT_15513e81c = 1;
    _DAT_15513e820 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// StaticGetTypeLayout @ 1455e1760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TShadowProjectionPS<3,0,1,0,0>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FShadowModulate;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<3,0,1,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<3,0,1,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141802 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_1551417e0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1551417e8 = ::TypeBuffer[0x10];
    DAT_1551417e8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551417e8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551417e8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551417e8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551417e8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551417e8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551417e8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,0,1,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1551417f0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1551417f8 = 0x13c;
    _DAT_1551417fc = 1;
    _DAT_155141800 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<3,0,1,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155140f82 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155140f60 = FShaderParameter::StaticGetTypeLayout();
    DAT_155140f68 = ::TypeBuffer[0x10];
    DAT_155140f68_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155140f68_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155140f68_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155140f68_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155140f68_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155140f68_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155140f68_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,0,1,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155140f70 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155140f78 = 0x136;
    _DAT_155140f7c = 1;
    _DAT_155140f80 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<3,0,1,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513eefa = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513eed8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513eee0 = ::TypeBuffer[0x10];
    DAT_15513eee0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513eee0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513eee0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513eee0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513eee0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513eee0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513eee0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,0,1,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513eee8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513eef0 = 0x130;
    _DAT_15513eef4 = 1;
    _DAT_15513eef8 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<3,0,1,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e4f2 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e4d0 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e4d8 = ::TypeBuffer[0x10];
    DAT_15513e4d8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e4d8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e4d8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e4d8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e4d8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e4d8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e4d8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,0,1,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e4e0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e4e8 = 0xe0;
    _DAT_15513e4ec = 1;
    _DAT_15513e4f0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// StaticGetTypeLayout @ 1455e1a50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TShadowProjectionPS<3,0,0,1,0>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<3,0,0,1,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<3,0,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141bc2 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141ba0 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141ba8 = ::TypeBuffer[0x10];
    DAT_155141ba8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141ba8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141ba8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141ba8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141ba8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141ba8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141ba8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,0,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141bb0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141bb8 = 0x13c;
    _DAT_155141bbc = 1;
    _DAT_155141bc0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<3,0,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155141342 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155141320 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141328 = ::TypeBuffer[0x10];
    DAT_155141328_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141328_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141328_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141328_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141328_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141328_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141328_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,0,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141330 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141338 = 0x136;
    _DAT_15514133c = 1;
    _DAT_155141340 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<3,0,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f31a = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f2f8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f300 = ::TypeBuffer[0x10];
    DAT_15513f300_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f300_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f300_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f300_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f300_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f300_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f300_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,0,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f308 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f310 = 0x130;
    _DAT_15513f314 = 1;
    _DAT_15513f318 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<3,0,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e912 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e8f0 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e8f8 = ::TypeBuffer[0x10];
    DAT_15513e8f8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e8f8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e8f8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e8f8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e8f8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e8f8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e8f8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,0,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e900 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e908 = 0xe0;
    _DAT_15513e90c = 1;
    _DAT_15513e910 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// StaticGetTypeLayout @ 1455e1d40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TShadowProjectionPS<3,0,0,0,1>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<3,0,0,0,1>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<3,0,0,0,1>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_1551418f2 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_1551418d0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1551418d8 = ::TypeBuffer[0x10];
    DAT_1551418d8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551418d8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551418d8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551418d8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551418d8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551418d8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551418d8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,0,0,0,1>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1551418e0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1551418e8 = 0x13c;
    _DAT_1551418ec = 1;
    _DAT_1551418f0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<3,0,0,0,1>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155141072 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155141050 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141058 = ::TypeBuffer[0x10];
    DAT_155141058_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141058_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141058_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141058_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141058_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141058_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141058_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,0,0,0,1>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141060 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141068 = 0x136;
    _DAT_15514106c = 1;
    _DAT_155141070 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<3,0,0,0,1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f04a = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f028 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f030 = ::TypeBuffer[0x10];
    DAT_15513f030_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f030_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f030_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f030_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f030_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f030_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f030_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,0,0,0,1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f038 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f040 = 0x130;
    _DAT_15513f044 = 1;
    _DAT_15513f048 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<3,0,0,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e642 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e620 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e628 = ::TypeBuffer[0x10];
    DAT_15513e628_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e628_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e628_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e628_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e628_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e628_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e628_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,0,0,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e630 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e638 = 0xe0;
    _DAT_15513e63c = 1;
    _DAT_15513e640 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// StaticGetTypeLayout @ 1455e2030

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TShadowProjectionPS<3,0,0,0,0>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<3,0,0,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<3,0,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141cb2 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141c90 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141c98 = ::TypeBuffer[0x10];
    DAT_155141c98_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141c98_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141c98_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141c98_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141c98_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141c98_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141c98_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,0,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141ca0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141ca8 = 0x13c;
    _DAT_155141cac = 1;
    _DAT_155141cb0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<3,0,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155141432 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155141410 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141418 = ::TypeBuffer[0x10];
    DAT_155141418_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141418_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141418_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141418_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141418_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141418_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141418_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,0,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141420 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141428 = 0x136;
    _DAT_15514142c = 1;
    _DAT_155141430 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<3,0,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f40a = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f3e8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f3f0 = ::TypeBuffer[0x10];
    DAT_15513f3f0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f3f0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f3f0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f3f0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f3f0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f3f0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f3f0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,0,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f3f8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f400 = 0x130;
    _DAT_15513f404 = 1;
    _DAT_15513f408 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<3,0,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513ea02 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e9e0 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e9e8 = ::TypeBuffer[0x10];
    DAT_15513e9e8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e9e8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e9e8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e9e8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e9e8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e9e8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e9e8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<3,0,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e9f0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e9f8 = 0xe0;
    _DAT_15513e9fc = 1;
    _DAT_15513ea00 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// StaticGetTypeLayout @ 1455e2320

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TShadowProjectionPS<4,1,0,1,0>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<4,1,0,1,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<4,1,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_1551419b2 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141990 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141998 = ::TypeBuffer[0x10];
    DAT_155141998_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141998_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141998_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141998_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141998_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141998_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141998_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,1,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1551419a0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1551419a8 = 0x13c;
    _DAT_1551419ac = 1;
    _DAT_1551419b0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<4,1,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155141132 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155141110 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141118 = ::TypeBuffer[0x10];
    DAT_155141118_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141118_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141118_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141118_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141118_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141118_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141118_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,1,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141120 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141128 = 0x136;
    _DAT_15514112c = 1;
    _DAT_155141130 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<4,1,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f10a = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f0e8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f0f0 = ::TypeBuffer[0x10];
    DAT_15513f0f0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f0f0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f0f0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f0f0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f0f0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f0f0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f0f0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,1,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f0f8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f100 = 0x130;
    _DAT_15513f104 = 1;
    _DAT_15513f108 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<4,1,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e702 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e6e0 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e6e8 = ::TypeBuffer[0x10];
    DAT_15513e6e8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e6e8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e6e8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e6e8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e6e8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e6e8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e6e8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,1,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e6f0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e6f8 = 0xe0;
    _DAT_15513e6fc = 1;
    _DAT_15513e700 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// StaticGetTypeLayout @ 1455e2610

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TShadowProjectionPS<4,1,0,0,0>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<4,1,0,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<4,1,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141aa2 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141a80 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141a88 = ::TypeBuffer[0x10];
    DAT_155141a88_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141a88_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141a88_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141a88_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141a88_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141a88_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141a88_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,1,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141a90 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141a98 = 0x13c;
    _DAT_155141a9c = 1;
    _DAT_155141aa0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<4,1,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155141222 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155141200 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141208 = ::TypeBuffer[0x10];
    DAT_155141208_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141208_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141208_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141208_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141208_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141208_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141208_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,1,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141210 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141218 = 0x136;
    _DAT_15514121c = 1;
    _DAT_155141220 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<4,1,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f1fa = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f1d8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f1e0 = ::TypeBuffer[0x10];
    DAT_15513f1e0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f1e0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f1e0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f1e0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f1e0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f1e0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f1e0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,1,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f1e8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f1f0 = 0x130;
    _DAT_15513f1f4 = 1;
    _DAT_15513f1f8 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<4,1,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e7f2 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e7d0 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e7d8 = ::TypeBuffer[0x10];
    DAT_15513e7d8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e7d8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e7d8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e7d8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e7d8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e7d8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e7d8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,1,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e7e0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e7e8 = 0xe0;
    _DAT_15513e7ec = 1;
    _DAT_15513e7f0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// StaticGetTypeLayout @ 1455e2900

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TShadowProjectionPS<4,0,1,0,0>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FShadowModulate;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<4,0,1,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<4,0,1,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_1551417d2 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_1551417b0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1551417b8 = ::TypeBuffer[0x10];
    DAT_1551417b8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551417b8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551417b8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551417b8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551417b8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551417b8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551417b8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,0,1,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1551417c0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1551417c8 = 0x13c;
    _DAT_1551417cc = 1;
    _DAT_1551417d0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<4,0,1,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155140f52 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155140f30 = FShaderParameter::StaticGetTypeLayout();
    DAT_155140f38 = ::TypeBuffer[0x10];
    DAT_155140f38_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155140f38_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155140f38_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155140f38_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155140f38_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155140f38_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155140f38_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,0,1,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155140f40 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155140f48 = 0x136;
    _DAT_155140f4c = 1;
    _DAT_155140f50 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<4,0,1,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513ee9a = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513ee78 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513ee80 = ::TypeBuffer[0x10];
    DAT_15513ee80_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513ee80_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513ee80_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513ee80_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513ee80_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513ee80_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513ee80_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,0,1,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513ee88 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513ee90 = 0x130;
    _DAT_15513ee94 = 1;
    _DAT_15513ee98 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<4,0,1,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e492 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e470 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e478 = ::TypeBuffer[0x10];
    DAT_15513e478_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e478_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e478_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e478_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e478_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e478_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e478_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,0,1,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e480 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e488 = 0xe0;
    _DAT_15513e48c = 1;
    _DAT_15513e490 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// StaticGetTypeLayout @ 1455e2bf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TShadowProjectionPS<4,0,0,1,0>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<4,0,0,1,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<4,0,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141b92 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141b70 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141b78 = ::TypeBuffer[0x10];
    DAT_155141b78_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141b78_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141b78_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141b78_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141b78_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141b78_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141b78_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,0,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141b80 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141b88 = 0x13c;
    _DAT_155141b8c = 1;
    _DAT_155141b90 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<4,0,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155141312 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_1551412f0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1551412f8 = ::TypeBuffer[0x10];
    DAT_1551412f8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551412f8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551412f8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551412f8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551412f8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551412f8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551412f8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,0,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141300 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141308 = 0x136;
    _DAT_15514130c = 1;
    _DAT_155141310 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<4,0,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f2ea = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f2c8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f2d0 = ::TypeBuffer[0x10];
    DAT_15513f2d0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f2d0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f2d0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f2d0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f2d0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f2d0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f2d0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,0,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f2d8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f2e0 = 0x130;
    _DAT_15513f2e4 = 1;
    _DAT_15513f2e8 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<4,0,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e8e2 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e8c0 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e8c8 = ::TypeBuffer[0x10];
    DAT_15513e8c8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e8c8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e8c8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e8c8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e8c8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e8c8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e8c8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,0,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e8d0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e8d8 = 0xe0;
    _DAT_15513e8dc = 1;
    _DAT_15513e8e0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// StaticGetTypeLayout @ 1455e2ee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TShadowProjectionPS<4,0,0,0,1>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<4,0,0,0,1>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<4,0,0,0,1>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_1551418c2 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_1551418a0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1551418a8 = ::TypeBuffer[0x10];
    DAT_1551418a8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551418a8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551418a8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551418a8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551418a8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551418a8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551418a8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,0,0,0,1>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1551418b0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1551418b8 = 0x13c;
    _DAT_1551418bc = 1;
    _DAT_1551418c0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<4,0,0,0,1>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155141042 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155141020 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141028 = ::TypeBuffer[0x10];
    DAT_155141028_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141028_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141028_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141028_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141028_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141028_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141028_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,0,0,0,1>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141030 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141038 = 0x136;
    _DAT_15514103c = 1;
    _DAT_155141040 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<4,0,0,0,1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f01a = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513eff8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f000 = ::TypeBuffer[0x10];
    DAT_15513f000_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f000_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f000_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f000_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f000_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f000_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f000_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,0,0,0,1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f008 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f010 = 0x130;
    _DAT_15513f014 = 1;
    _DAT_15513f018 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<4,0,0,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e612 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e5f0 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e5f8 = ::TypeBuffer[0x10];
    DAT_15513e5f8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e5f8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e5f8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e5f8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e5f8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e5f8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e5f8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,0,0,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e600 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e608 = 0xe0;
    _DAT_15513e60c = 1;
    _DAT_15513e610 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// StaticGetTypeLayout @ 1455e31d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TShadowProjectionPS<4,0,0,0,0>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<4,0,0,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<4,0,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141c82 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141c60 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141c68 = ::TypeBuffer[0x10];
    DAT_155141c68_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141c68_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141c68_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141c68_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141c68_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141c68_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141c68_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,0,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141c70 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141c78 = 0x13c;
    _DAT_155141c7c = 1;
    _DAT_155141c80 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<4,0,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155141402 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_1551413e0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1551413e8 = ::TypeBuffer[0x10];
    DAT_1551413e8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551413e8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551413e8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551413e8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551413e8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551413e8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551413e8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,0,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1551413f0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1551413f8 = 0x136;
    _DAT_1551413fc = 1;
    _DAT_155141400 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<4,0,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f3da = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f3b8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f3c0 = ::TypeBuffer[0x10];
    DAT_15513f3c0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f3c0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f3c0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f3c0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f3c0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f3c0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f3c0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,0,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f3c8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f3d0 = 0x130;
    _DAT_15513f3d4 = 1;
    _DAT_15513f3d8 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<4,0,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e9d2 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e9b0 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e9b8 = ::TypeBuffer[0x10];
    DAT_15513e9b8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e9b8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e9b8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e9b8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e9b8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e9b8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e9b8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<4,0,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e9c0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e9c8 = 0xe0;
    _DAT_15513e9cc = 1;
    _DAT_15513e9d0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// StaticGetTypeLayout @ 1455e34c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TShadowProjectionPS<5,1,0,1,0>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<5,1,0,1,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<5,1,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141982 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141960 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141968 = ::TypeBuffer[0x10];
    DAT_155141968_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141968_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141968_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141968_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141968_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141968_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141968_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,1,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141970 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141978 = 0x13c;
    _DAT_15514197c = 1;
    _DAT_155141980 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<5,1,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155141102 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_1551410e0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1551410e8 = ::TypeBuffer[0x10];
    DAT_1551410e8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551410e8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551410e8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551410e8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551410e8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551410e8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551410e8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,1,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1551410f0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1551410f8 = 0x136;
    _DAT_1551410fc = 1;
    _DAT_155141100 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<5,1,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f0da = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f0b8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f0c0 = ::TypeBuffer[0x10];
    DAT_15513f0c0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f0c0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f0c0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f0c0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f0c0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f0c0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f0c0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,1,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f0c8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f0d0 = 0x130;
    _DAT_15513f0d4 = 1;
    _DAT_15513f0d8 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<5,1,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e6d2 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e6b0 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e6b8 = ::TypeBuffer[0x10];
    DAT_15513e6b8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e6b8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e6b8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e6b8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e6b8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e6b8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e6b8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,1,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e6c0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e6c8 = 0xe0;
    _DAT_15513e6cc = 1;
    _DAT_15513e6d0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// StaticGetTypeLayout @ 1455e37b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TShadowProjectionPS<5,1,0,0,0>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<5,1,0,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<5,1,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141a72 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141a50 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141a58 = ::TypeBuffer[0x10];
    DAT_155141a58_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141a58_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141a58_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141a58_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141a58_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141a58_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141a58_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,1,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141a60 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141a68 = 0x13c;
    _DAT_155141a6c = 1;
    _DAT_155141a70 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<5,1,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_1551411f2 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_1551411d0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1551411d8 = ::TypeBuffer[0x10];
    DAT_1551411d8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551411d8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551411d8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551411d8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551411d8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551411d8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551411d8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,1,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1551411e0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1551411e8 = 0x136;
    _DAT_1551411ec = 1;
    _DAT_1551411f0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<5,1,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f1ca = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f1a8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f1b0 = ::TypeBuffer[0x10];
    DAT_15513f1b0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f1b0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f1b0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f1b0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f1b0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f1b0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f1b0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,1,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f1b8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f1c0 = 0x130;
    _DAT_15513f1c4 = 1;
    _DAT_15513f1c8 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<5,1,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e7c2 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e7a0 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e7a8 = ::TypeBuffer[0x10];
    DAT_15513e7a8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e7a8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e7a8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e7a8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e7a8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e7a8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e7a8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,1,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e7b0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e7b8 = 0xe0;
    _DAT_15513e7bc = 1;
    _DAT_15513e7c0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// StaticGetTypeLayout @ 1455e3aa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TShadowProjectionPS<5,0,1,0,0>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FShadowModulate;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<5,0,1,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<5,0,1,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_1551417a2 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141780 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141788 = ::TypeBuffer[0x10];
    DAT_155141788_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141788_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141788_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141788_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141788_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141788_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141788_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,0,1,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141790 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141798 = 0x13c;
    _DAT_15514179c = 1;
    _DAT_1551417a0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<5,0,1,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155140f22 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155140f00 = FShaderParameter::StaticGetTypeLayout();
    DAT_155140f08 = ::TypeBuffer[0x10];
    DAT_155140f08_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155140f08_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155140f08_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155140f08_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155140f08_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155140f08_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155140f08_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,0,1,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155140f10 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155140f18 = 0x136;
    _DAT_155140f1c = 1;
    _DAT_155140f20 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<5,0,1,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513ee3a = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513ee18 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513ee20 = ::TypeBuffer[0x10];
    DAT_15513ee20_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513ee20_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513ee20_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513ee20_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513ee20_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513ee20_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513ee20_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,0,1,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513ee28 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513ee30 = 0x130;
    _DAT_15513ee34 = 1;
    _DAT_15513ee38 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<5,0,1,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e432 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e410 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e418 = ::TypeBuffer[0x10];
    DAT_15513e418_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e418_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e418_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e418_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e418_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e418_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e418_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,0,1,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e420 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e428 = 0xe0;
    _DAT_15513e42c = 1;
    _DAT_15513e430 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// StaticGetTypeLayout @ 1455e3d90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TShadowProjectionPS<5,0,0,1,0>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<5,0,0,1,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<5,0,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141b62 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141b40 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141b48 = ::TypeBuffer[0x10];
    DAT_155141b48_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141b48_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141b48_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141b48_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141b48_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141b48_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141b48_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,0,0,1,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141b50 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141b58 = 0x13c;
    _DAT_155141b5c = 1;
    _DAT_155141b60 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<5,0,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_1551412e2 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_1551412c0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1551412c8 = ::TypeBuffer[0x10];
    DAT_1551412c8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551412c8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551412c8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551412c8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551412c8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551412c8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551412c8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,0,0,1,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1551412d0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1551412d8 = 0x136;
    _DAT_1551412dc = 1;
    _DAT_1551412e0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<5,0,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f2ba = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f298 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f2a0 = ::TypeBuffer[0x10];
    DAT_15513f2a0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f2a0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f2a0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f2a0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f2a0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f2a0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f2a0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,0,0,1,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f2a8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f2b0 = 0x130;
    _DAT_15513f2b4 = 1;
    _DAT_15513f2b8 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<5,0,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e8b2 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e890 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e898 = ::TypeBuffer[0x10];
    DAT_15513e898_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e898_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e898_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e898_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e898_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e898_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e898_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,0,0,1,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e8a0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e8a8 = 0xe0;
    _DAT_15513e8ac = 1;
    _DAT_15513e8b0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// StaticGetTypeLayout @ 1455e4080

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TShadowProjectionPS<5,0,0,0,1>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<5,0,0,0,1>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<5,0,0,0,1>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141892 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141870 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141878 = ::TypeBuffer[0x10];
    DAT_155141878_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141878_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141878_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141878_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141878_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141878_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141878_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,0,0,0,1>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141880 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141888 = 0x13c;
    _DAT_15514188c = 1;
    _DAT_155141890 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<5,0,0,0,1>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_155141012 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_155140ff0 = FShaderParameter::StaticGetTypeLayout();
    DAT_155140ff8 = ::TypeBuffer[0x10];
    DAT_155140ff8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155140ff8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155140ff8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155140ff8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155140ff8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155140ff8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155140ff8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,0,0,0,1>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141000 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141008 = 0x136;
    _DAT_15514100c = 1;
    _DAT_155141010 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<5,0,0,0,1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513efea = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513efc8 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513efd0 = ::TypeBuffer[0x10];
    DAT_15513efd0_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513efd0_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513efd0_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513efd0_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513efd0_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513efd0_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513efd0_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,0,0,0,1>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513efd8 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513efe0 = 0x130;
    _DAT_15513efe4 = 1;
    _DAT_15513efe8 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<5,0,0,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e5e2 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e5c0 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e5c8 = ::TypeBuffer[0x10];
    DAT_15513e5c8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e5c8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e5c8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e5c8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e5c8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e5c8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e5c8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,0,0,0,1>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e5d0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e5d8 = 0xe0;
    _DAT_15513e5dc = 1;
    _DAT_15513e5e0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

// StaticGetTypeLayout @ 1455e4370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl TShadowProjectionPS<5,0,0,0,0>::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\x01';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = ::u_FShadowProjecti;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<TShadowProjectionPS<5,0,0,0,0>,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_TShadowProjectionPS<5,0,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "LightPosition";
    DAT_155141c52 = Freeze::FindFieldNameLength(L"LightPosition");
    _DAT_155141c30 = FShaderParameter::StaticGetTypeLayout();
    DAT_155141c38 = ::TypeBuffer[0x10];
    DAT_155141c38_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155141c38_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155141c38_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155141c38_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155141c38_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155141c38_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155141c38_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,0,0,0,0>::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155141c40 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155141c48 = 0x13c;
    _DAT_155141c4c = 1;
    _DAT_155141c50 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<5,0,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowSharpen";
    DAT_1551413d2 = Freeze::FindFieldNameLength(L"ShadowSharpen");
    _DAT_1551413b0 = FShaderParameter::StaticGetTypeLayout();
    DAT_1551413b8 = ::TypeBuffer[0x10];
    DAT_1551413b8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_1551413b8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_1551413b8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_1551413b8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_1551413b8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_1551413b8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_1551413b8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,0,0,0,0>::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_1551413c0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1551413c8 = 0x136;
    _DAT_1551413cc = 1;
    _DAT_1551413d0 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<5,0,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShadowFadeFraction";
    DAT_15513f3aa = Freeze::FindFieldNameLength(L"ShadowFadeFraction");
    _DAT_15513f388 = FShaderParameter::StaticGetTypeLayout();
    DAT_15513f390 = ::TypeBuffer[0x10];
    DAT_15513f390_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513f390_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513f390_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513f390_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513f390_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513f390_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513f390_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,0,0,0,0>::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15513f398 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513f3a0 = 0x130;
    _DAT_15513f3a4 = 1;
    _DAT_15513f3a8 = 0;
    `public:_static_void___cdecl_TShadowProjectionPS<5,0,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ProjectionParameters";
    DAT_15513e9a2 = Freeze::FindFieldNameLength(L"ProjectionParameters");
    _DAT_15513e980 = FShadowProjectionShaderParameters::StaticGetTypeLayout();
    DAT_15513e988 = ::TypeBuffer[0x10];
    DAT_15513e988_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15513e988_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15513e988_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15513e988_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15513e988_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15513e988_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15513e988_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_TShadowProjectionPS<5,0,0,0,0>::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    ::FieldBuffer._0_8_ = u_BASE;
    _DAT_15513e990 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15513e998 = 0xe0;
    _DAT_15513e99c = 1;
    _DAT_15513e9a0 = 0;
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._8_8_ = FShadowProjectionPixelShaderInterface::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
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

