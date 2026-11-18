// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// ~IRenderer @ 144f6df10

void __thiscall Nanite::IRenderer::~IRenderer(IRenderer *this)

{
  return;
}

// Create @ 144f8d300

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TUniquePtr<Nanite::IRenderer,TDefaultDelete<Nanite::IRenderer>_> __cdecl
Nanite::IRenderer::Create
          (FRDGBuilder *param_1,FScene *param_2,FViewInfo *param_3,FSceneUniformBuffer *param_4,
          FSharedContext *param_5,FRasterContext *param_6,FConfiguration *param_7,
          TIntRect<int> *param_8,FRDGTexture *param_9,FVirtualShadowMapArray *param_10)

{
  FRenderer *pFVar1;
  TRDGUniformBuffer<FSceneUniformParameters> *local_res8;
  FVirtualShadowMapArray *in_stack_00000058;
  
  local_res8 = FSceneUniformBuffer::GetBuffer((FSceneUniformBuffer *)param_5,(FRDGBuilder *)param_2)
  ;
  pFVar1 = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x290,0x10);
  if (pFVar1 == (FRenderer *)0x0) {
    param_1->_padding_ = 0;
  }
  else {
    pFVar1 = FRenderer::FRenderer
                       (pFVar1,(FRDGBuilder *)param_2,(FScene *)param_3,(FViewInfo *)param_4,
                        &local_res8,(FSharedContext *)param_6,(FRasterContext *)param_7,
                        (FConfiguration *)param_8,(TIntRect<int> *)param_9,(FRDGTexture *)param_10,
                        in_stack_00000058);
    param_1->_padding_ = (longlong)pFVar1;
  }
  return (TUniquePtr<Nanite::IRenderer,TDefaultDelete<Nanite::IRenderer>_>)(IRenderer *)param_1;
}

