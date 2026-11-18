// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// FTranslucentVelocityMeshProcessor @ 14574fbc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FTranslucentVelocityMeshProcessor * __thiscall
FTranslucentVelocityMeshProcessor::FTranslucentVelocityMeshProcessor
          (FTranslucentVelocityMeshProcessor *this,FScene *param_1,Type param_2,FSceneView *param_3,
          FMeshPassProcessorRenderState *param_4,FMeshPassDrawListContext *param_5,Type param_6)

{
  FRHIDepthStencilState *pFVar1;
  FRHIUniformBuffer *pFVar2;
  undefined4 uVar3;
  uint uVar4;
  
  FMeshPassProcessor::FMeshPassProcessor
            ((FMeshPassProcessor *)this,param_6,param_1,param_2,param_3,param_5);
  *(undefined ***)this = &___7FVelocityMeshProcessor__6B_;
  pFVar1 = param_4->DepthStencilState;
  *(FRHIBlendState **)&this->field_0x38 = param_4->BlendState;
  *(FRHIDepthStencilState **)&this->field_0x40 = pFVar1;
  uVar3 = *(undefined4 *)&param_4->field_0x14;
  pFVar2 = param_4->ViewUniformBuffer;
  *(Type *)&this->field_0x48 = param_4->DepthStencilAccess;
  *(undefined4 *)&this->field_0x4c = uVar3;
  *(FRHIUniformBuffer **)&this->field_0x50 = pFVar2;
  pFVar2 = param_4->PassUniformBuffer;
  *(FRHIUniformBuffer **)&this->field_0x58 = param_4->InstancedViewUniformBuffer;
  *(FRHIUniformBuffer **)&this->field_0x60 = pFVar2;
  pFVar2 = param_4->NaniteUniformBuffer;
  uVar4 = param_4->StencilRef;
  uVar3 = *(undefined4 *)&param_4->field_0x3c;
  this->field_0x7c = param_6;
  *(undefined ***)this = &___7FTranslucentVelocityMeshProcessor__6B_;
  *(FRHIUniformBuffer **)&this->field_0x68 = pFVar2;
  *(uint *)&this->field_0x70 = uVar4;
  *(undefined4 *)&this->field_0x74 = uVar3;
  *(undefined4 *)&this->field_0x78 = 0;
  return this;
}

// AddMeshBatch @ 1457574f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FTranslucentVelocityMeshProcessor::AddMeshBatch
          (FTranslucentVelocityMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  ERasterizerFillMode EVar3;
  ERasterizerCullMode EVar4;
  FMaterial *pFVar5;
  FMaterialRenderProxy *pFVar6;
  FStaticShaderPlatform FVar7;
  FMeshDrawingPolicyOverrideSettings local_res8;
  
  if (*(int *)&this->field_0x20 == 5) {
    FVar7.Platform = SP_NumPlatforms;
  }
  else {
    FVar7.Platform = GRHIGlobals.ShaderPlatformForFeatureLevel[*(int *)&this->field_0x20];
  }
  bVar1 = FVelocityRendering::IsVelocityPassSupported(FVar7.Platform);
  if (((bVar1) && (bVar1 = PlatformSupportsVelocityRendering(FVar7), bVar1)) &&
     ((*(FViewInfo **)&this->field_0x28 == (FViewInfo *)0x0 ||
      (bVar1 = FVelocityMeshProcessor::PrimitiveHasVelocityForView
                         (*(FViewInfo **)&this->field_0x28,param_3), bVar1)))) {
    for (pFVar6 = param_1->MaterialRenderProxy; pFVar6 != (FMaterialRenderProxy *)0x0;
        pFVar6 = (FMaterialRenderProxy *)
                 (**(code **)(pFVar6->_padding_ + 0x38))(pFVar6,*(undefined4 *)&this->field_0x20)) {
      pFVar5 = (FMaterial *)
               (**(code **)(pFVar6->_padding_ + 0x30))(pFVar6,*(undefined4 *)&this->field_0x20);
      if (pFVar5 != (FMaterial *)0x0) {
        cVar2 = (**(code **)(pFVar5->_padding_ + 0x68))(pFVar5);
        if (param_1->bUseForMaterial == 0) {
          return;
        }
        if (cVar2 == '\0') {
          return;
        }
        local_res8 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
        EVar3 = FMeshPassProcessor::ComputeMeshFillMode(pFVar5,&local_res8);
        EVar4 = FMeshPassProcessor::ComputeMeshCullMode(pFVar5,&local_res8);
        bVar1 = FVelocityMeshProcessor::Process
                          ((FVelocityMeshProcessor *)this,param_1,param_2,param_4,param_3,pFVar6,
                           pFVar5,EVar3,EVar4);
        if (bVar1) {
          return;
        }
      }
    }
  }
  return;
}

// CollectPSOInitializers @ 14575bd20

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
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FTranslucentVelocityMeshProcessor::CollectPSOInitializers
          (FTranslucentVelocityMeshProcessor *this,FSceneTexturesConfig *param_1,FMaterial *param_2,
          FPSOPrecacheVertexFactoryData *param_3,FPSOPrecacheParams *param_4,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_5)

{
  bool bVar1;
  char cVar2;
  ERasterizerFillMode EVar3;
  ERasterizerCullMode EVar4;
  FStaticShaderPlatform FVar5;
  FMeshDrawingPolicyOverrideSettings local_res8;
  
  if (*(int *)&this->field_0x20 == 5) {
    FVar5.Platform = SP_NumPlatforms;
  }
  else {
    FVar5.Platform = GRHIGlobals.ShaderPlatformForFeatureLevel[*(int *)&this->field_0x20];
  }
  bVar1 = FVelocityRendering::IsVelocityPassSupported(FVar5.Platform);
  if (bVar1) {
    bVar1 = PlatformSupportsVelocityRendering(FVar5);
    if (bVar1) {
      cVar2 = (**(code **)(param_2->_padding_ + 0x68))(param_2);
      if (((*(uint *)&param_4->field0_0x0 >> 10 & 1) != 0) && (cVar2 != '\0')) {
        local_res8 = FMeshPassProcessor::ComputeMeshOverrideSettings(param_4);
        EVar3 = FMeshPassProcessor::ComputeMeshFillMode(param_2,&local_res8);
        EVar4 = FMeshPassProcessor::ComputeMeshCullMode(param_2,&local_res8);
        FVelocityMeshProcessor::CollectPSOInitializersInternal
                  ((FVelocityMeshProcessor *)this,param_1,param_3,param_2,EVar3,EVar4,param_5);
      }
    }
  }
  return;
}

// PrimitiveCanHaveVelocity @ 145782d80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __cdecl
FTranslucentVelocityMeshProcessor::PrimitiveCanHaveVelocity
          (EShaderPlatform param_1,FPrimitiveSceneProxy *param_2)

{
  bool bVar1;
  
  bVar1 = FVelocityRendering::IsVelocityPassSupported(param_1);
  if (bVar1) {
    bVar1 = PlatformSupportsVelocityRendering((FStaticShaderPlatform)param_1);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// PrimitiveHasVelocityForFrame @ 145783060

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __cdecl
FTranslucentVelocityMeshProcessor::PrimitiveHasVelocityForFrame(FPrimitiveSceneProxy *param_1)

{
  return true;
}

// TryAddMeshBatch @ 145793be0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

bool __thiscall
FTranslucentVelocityMeshProcessor::TryAddMeshBatch
          (FTranslucentVelocityMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
          )

{
  FMaterial *pFVar1;
  char cVar2;
  bool bVar3;
  ERasterizerFillMode EVar4;
  ERasterizerCullMode EVar5;
  
  pFVar1 = param_6;
  cVar2 = (**(code **)(param_6->_padding_ + 0x68))(param_6);
  if ((param_1->bUseForMaterial == 0) || (cVar2 == '\0')) {
    bVar3 = true;
  }
  else {
    param_6 = (FMaterial *)FMeshPassProcessor::ComputeMeshOverrideSettings(param_1);
    EVar4 = FMeshPassProcessor::ComputeMeshFillMode
                      (pFVar1,(FMeshDrawingPolicyOverrideSettings *)&param_6);
    EVar5 = FMeshPassProcessor::ComputeMeshCullMode
                      (pFVar1,(FMeshDrawingPolicyOverrideSettings *)&param_6);
    bVar3 = FVelocityMeshProcessor::Process
                      ((FVelocityMeshProcessor *)this,param_1,param_2,param_4,param_3,param_5,pFVar1
                       ,EVar4,EVar5);
  }
  return bVar3;
}

