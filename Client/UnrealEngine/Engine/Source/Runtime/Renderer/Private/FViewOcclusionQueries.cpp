// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// FViewOcclusionQueries @ 144f6c900

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

FViewOcclusionQueries * __thiscall
FViewOcclusionQueries::FViewOcclusionQueries
          (FViewOcclusionQueries *this,FViewOcclusionQueries *param_1)

{
  (this->LocalLightQueryInfos).AllocatorInstance.Data = (FProjectedShadowInfo **)0x0;
  (this->LocalLightQueryInfos).AllocatorInstance.Data =
       (param_1->LocalLightQueryInfos).AllocatorInstance.Data;
  (param_1->LocalLightQueryInfos).AllocatorInstance.Data = (FProjectedShadowInfo **)0x0;
  (this->LocalLightQueryInfos).ArrayNum = (param_1->LocalLightQueryInfos).ArrayNum;
  (this->LocalLightQueryInfos).ArrayMax = (param_1->LocalLightQueryInfos).ArrayMax;
  (param_1->LocalLightQueryInfos).ArrayNum = 0;
  (param_1->LocalLightQueryInfos).ArrayMax = 0;
  (this->CSMQueryInfos).AllocatorInstance.Data = (FProjectedShadowInfo **)0x0;
  (this->CSMQueryInfos).AllocatorInstance.Data = (param_1->CSMQueryInfos).AllocatorInstance.Data;
  (param_1->CSMQueryInfos).AllocatorInstance.Data = (FProjectedShadowInfo **)0x0;
  (this->CSMQueryInfos).ArrayNum = (param_1->CSMQueryInfos).ArrayNum;
  (this->CSMQueryInfos).ArrayMax = (param_1->CSMQueryInfos).ArrayMax;
  (param_1->CSMQueryInfos).ArrayNum = 0;
  (param_1->CSMQueryInfos).ArrayMax = 0;
  (this->ShadowQueryInfos).AllocatorInstance.Data = (FProjectedShadowInfo **)0x0;
  (this->ShadowQueryInfos).AllocatorInstance.Data =
       (param_1->ShadowQueryInfos).AllocatorInstance.Data;
  (param_1->ShadowQueryInfos).AllocatorInstance.Data = (FProjectedShadowInfo **)0x0;
  (this->ShadowQueryInfos).ArrayNum = (param_1->ShadowQueryInfos).ArrayNum;
  (this->ShadowQueryInfos).ArrayMax = (param_1->ShadowQueryInfos).ArrayMax;
  (param_1->ShadowQueryInfos).ArrayNum = 0;
  (param_1->ShadowQueryInfos).ArrayMax = 0;
  (this->ReflectionQueryInfos).AllocatorInstance.Data = (FPlanarReflectionSceneProxy **)0x0;
  (this->ReflectionQueryInfos).AllocatorInstance.Data =
       (param_1->ReflectionQueryInfos).AllocatorInstance.Data;
  (param_1->ReflectionQueryInfos).AllocatorInstance.Data = (FPlanarReflectionSceneProxy **)0x0;
  (this->ReflectionQueryInfos).ArrayNum = (param_1->ReflectionQueryInfos).ArrayNum;
  (this->ReflectionQueryInfos).ArrayMax = (param_1->ReflectionQueryInfos).ArrayMax;
  (param_1->ReflectionQueryInfos).ArrayNum = 0;
  (param_1->ReflectionQueryInfos).ArrayMax = 0;
  (this->LocalLightQueries).AllocatorInstance.Data = (FRHIRenderQuery **)0x0;
  (this->LocalLightQueries).AllocatorInstance.Data =
       (param_1->LocalLightQueries).AllocatorInstance.Data;
  (param_1->LocalLightQueries).AllocatorInstance.Data = (FRHIRenderQuery **)0x0;
  (this->LocalLightQueries).ArrayNum = (param_1->LocalLightQueries).ArrayNum;
  (this->LocalLightQueries).ArrayMax = (param_1->LocalLightQueries).ArrayMax;
  (param_1->LocalLightQueries).ArrayNum = 0;
  (param_1->LocalLightQueries).ArrayMax = 0;
  (this->CSMQueries).AllocatorInstance.Data = (FRHIRenderQuery **)0x0;
  (this->CSMQueries).AllocatorInstance.Data = (param_1->CSMQueries).AllocatorInstance.Data;
  (param_1->CSMQueries).AllocatorInstance.Data = (FRHIRenderQuery **)0x0;
  (this->CSMQueries).ArrayNum = (param_1->CSMQueries).ArrayNum;
  (this->CSMQueries).ArrayMax = (param_1->CSMQueries).ArrayMax;
  (param_1->CSMQueries).ArrayNum = 0;
  (param_1->CSMQueries).ArrayMax = 0;
  (this->ShadowQueries).AllocatorInstance.Data = (FRHIRenderQuery **)0x0;
  (this->ShadowQueries).AllocatorInstance.Data = (param_1->ShadowQueries).AllocatorInstance.Data;
  (param_1->ShadowQueries).AllocatorInstance.Data = (FRHIRenderQuery **)0x0;
  (this->ShadowQueries).ArrayNum = (param_1->ShadowQueries).ArrayNum;
  (this->ShadowQueries).ArrayMax = (param_1->ShadowQueries).ArrayMax;
  (param_1->ShadowQueries).ArrayNum = 0;
  (param_1->ShadowQueries).ArrayMax = 0;
  (this->ReflectionQueries).AllocatorInstance.Data = (FRHIRenderQuery **)0x0;
  (this->ReflectionQueries).AllocatorInstance.Data =
       (param_1->ReflectionQueries).AllocatorInstance.Data;
  (param_1->ReflectionQueries).AllocatorInstance.Data = (FRHIRenderQuery **)0x0;
  (this->ReflectionQueries).ArrayNum = (param_1->ReflectionQueries).ArrayNum;
  (this->ReflectionQueries).ArrayMax = (param_1->ReflectionQueries).ArrayMax;
  (param_1->ReflectionQueries).ArrayNum = 0;
  (param_1->ReflectionQueries).ArrayMax = 0;
  this->bFlushQueries = param_1->bFlushQueries;
  return this;
}

// ~FViewOcclusionQueries @ 144f6de80

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

void __thiscall FViewOcclusionQueries::~FViewOcclusionQueries(FViewOcclusionQueries *this)

{
  FRHIRenderQuery **ppFVar1;
  FPlanarReflectionSceneProxy **ppFVar2;
  FProjectedShadowInfo **ppFVar3;
  
  ppFVar1 = (this->ReflectionQueries).AllocatorInstance.Data;
  if (ppFVar1 != (FRHIRenderQuery **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar1);
  }
  ppFVar1 = (this->ShadowQueries).AllocatorInstance.Data;
  if (ppFVar1 != (FRHIRenderQuery **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar1);
  }
  ppFVar1 = (this->CSMQueries).AllocatorInstance.Data;
  if (ppFVar1 != (FRHIRenderQuery **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar1);
  }
  ppFVar1 = (this->LocalLightQueries).AllocatorInstance.Data;
  if (ppFVar1 != (FRHIRenderQuery **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar1);
  }
  ppFVar2 = (this->ReflectionQueryInfos).AllocatorInstance.Data;
  if (ppFVar2 != (FPlanarReflectionSceneProxy **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar2);
  }
  ppFVar3 = (this->ShadowQueryInfos).AllocatorInstance.Data;
  if (ppFVar3 != (FProjectedShadowInfo **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar3);
  }
  ppFVar3 = (this->CSMQueryInfos).AllocatorInstance.Data;
  if (ppFVar3 != (FProjectedShadowInfo **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar3);
  }
  ppFVar3 = (this->LocalLightQueryInfos).AllocatorInstance.Data;
  if (ppFVar3 != (FProjectedShadowInfo **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(ppFVar3);
    return;
  }
  return;
}

