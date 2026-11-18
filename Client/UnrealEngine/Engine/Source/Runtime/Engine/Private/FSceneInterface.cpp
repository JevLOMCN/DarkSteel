// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// FSceneInterface @ 1484bc280

FSceneInterface * __thiscall FSceneInterface::FSceneInterface(FSceneInterface *this,Type param_1)

{
  this->FeatureLevel = param_1;
  this->_padding_ = (longlong)&___7FSceneInterface__6B_;
  return this;
}

// GetShaderPlatform @ 1484db3d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

EShaderPlatform __thiscall FSceneInterface::GetShaderPlatform(FSceneInterface *this)

{
  return GRHIGlobals.ShaderPlatformForFeatureLevel[(int)this->FeatureLevel];
}

// GetShadingPath @ 1484db3f0

EShadingPath __cdecl FSceneInterface::GetShadingPath(Type param_1)

{
  return (EShadingPath)(2 < (int)param_1);
}

// ProcessAndRenderIlluminanceMeter @ 1484e62f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
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
FSceneInterface::ProcessAndRenderIlluminanceMeter
          (FSceneInterface *this,FRDGBuilder *param_1,TArrayView<FViewInfo,int> *param_2,
          FRDGTexture *param_3)

{
  return;
}

// UpdateAllPrimitiveSceneInfos @ 1484febd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */

void __thiscall
FSceneInterface::UpdateAllPrimitiveSceneInfos
          (FSceneInterface *this,FRHICommandListImmediate *param_1)

{
  EShaderPlatform EVar1;
  FRDGEventName *pFVar2;
  undefined1 auStackY_838 [32];
  FRDGEventName local_808;
  FRDGBuilder local_7e8;
  ulonglong local_18;
  
  EVar1 = GMaxRHIShaderPlatform;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_838;
  pFVar2 = FRDGEventName::FRDGEventName(&local_808,L"UpdateAllPrimitiveSceneInfos");
  FRDGBuilder::FRDGBuilder(&local_7e8,param_1,pFVar2,None,EVar1);
  (**(code **)(this->_padding_ + 0x68))(this,&local_7e8,0);
  FRDGBuilder::Execute(&local_7e8);
  FRDGBuilder::~FRDGBuilder(&local_7e8);
  return;
}

