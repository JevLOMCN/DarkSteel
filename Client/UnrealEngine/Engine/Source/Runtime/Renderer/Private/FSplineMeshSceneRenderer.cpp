// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// UpdateSceneUniformBuffer @ 145726aa0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSplineMeshSceneRenderer::UpdateSceneUniformBuffer
          (FSplineMeshSceneRenderer *this,FRDGBuilder *param_1,FSceneUniformBuffer *param_2)

{
  char cVar1;
  FSplineMeshSceneExtension *pFVar2;
  FRDGTexture *pFVar3;
  FRDGTexture *pFVar4;
  longlong lVar5;
  FShaderParametersMetadata *pFVar6;
  float fVar7;
  float fVar8;
  FRDGTextureSRVDesc local_78;
  float local_58;
  float local_54;
  FRDGTextureSRV *local_50;
  FRDGTextureSRV *local_48;
  FRHISamplerState *local_40;
  
  pFVar2 = this->SceneData;
  if (*(int *)&(pFVar2->RegisteredPrimitives).field_0x8 !=
      *(int *)&(pFVar2->RegisteredPrimitives).field_0x34) {
    pFVar3 = FRDGBuilder::RegisterExternalTexture(param_1,&pFVar2->SavedPosTexture,None);
    pFVar4 = FRDGBuilder::RegisterExternalTexture(param_1,&this->SceneData->SavedRotTexture,None);
    lVar5 = (**(code **)(((this->SceneData->SavedPosTexture).Reference)->_padding_ + 0x10))();
    local_78._padding_._0_2_ = 0;
    local_78._padding_._3_1_ = 0;
    local_78._padding_._2_1_ = (pFVar3->Desc).field_0x30;
    cVar1 = (pFVar3->Desc).field_0x32;
    local_78._padding_._4_4_ = 0;
    local_78._padding_._0_1_ = 0;
    local_78._padding_._2_1_ = 0;
    fVar8 = __real_3f800000 / (float)(int)*(undefined8 *)(lVar5 + 0x2c);
    fVar7 = __real_3f800000 / (float)(int)((ulonglong)*(undefined8 *)(lVar5 + 0x2c) >> 0x20);
    if ((cVar1 == '\x01') || (cVar1 == '\x04')) {
      local_78._padding_._4_4_ = (uint)*(ushort *)&(pFVar3->Desc).field_0x2e << 0x10;
    }
    local_78.Texture = pFVar3;
    local_50 = FRDGBuilder::CreateSRV(param_1,&local_78);
    local_78._padding_._2_1_ = (pFVar4->Desc).field_0x30;
    cVar1 = (pFVar4->Desc).field_0x32;
    local_78._padding_._0_2_ = 0;
    local_78._padding_._3_1_ = 0;
    local_78._padding_._4_4_ = 0;
    local_78._padding_._0_1_ = 0;
    local_78._padding_._2_1_ = 0;
    if ((cVar1 == '\x01') || (cVar1 == '\x04')) {
      local_78._padding_._4_4_ = (uint)*(ushort *)&(pFVar4->Desc).field_0x2e << 0x10;
    }
    local_78.Texture = pFVar4;
    local_48 = FRDGBuilder::CreateSRV(param_1,&local_78);
    local_40 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
               ::StaticResource.StateRHI.Reference;
    local_58 = fVar8;
    local_54 = fVar7;
    pFVar6 = FSplineMeshSceneResourceParameters::FTypeInfo::GetStructMetadata();
    FSceneUniformBuffer::Set(param_2,SceneUB::SplineMesh._32_4_,&local_58,pFVar6->Size);
  }
  return;
}

