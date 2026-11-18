// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FNaniteVirtualShadowMapRenderPass @ 145609b60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
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

FNaniteVirtualShadowMapRenderPass * __thiscall
FNaniteVirtualShadowMapRenderPass::FNaniteVirtualShadowMapRenderPass
          (FNaniteVirtualShadowMapRenderPass *this,FNaniteVirtualShadowMapRenderPass *param_1)

{
  TArray<FProjectedShadowInfo_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  FProjectedShadowInfo **_Src;
  
  pTVar1 = &this->Shadows;
  this->SceneInstanceCullingQuery = param_1->SceneInstanceCullingQuery;
  piVar2 = &(this->Shadows).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FProjectedShadowInfo **)0x0;
  iVar3 = (param_1->Shadows).ArrayNum;
  _Src = (param_1->Shadows).AllocatorInstance.Data;
  (this->Shadows).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FProjectedShadowInfo_*>_>
              (8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src,(longlong)iVar3 << 3);
  }
  this->TotalPrimaryViews = param_1->TotalPrimaryViews;
  this->MaxCullingViews = param_1->MaxCullingViews;
  this->VirtualShadowMapViews = param_1->VirtualShadowMapViews;
  this->ExplicitChunkDrawInfo = param_1->ExplicitChunkDrawInfo;
  return this;
}

