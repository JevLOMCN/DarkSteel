// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// operator() @ 145751980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
`FTranslucentLightingMaterialPSOCollector::CollectPSOInitializers'::__l2::<lambda_1>::operator()
          (void *this,bool param_1,bool param_2,bool param_3,bool param_4,bool param_5)

{
  int *piVar1;
  FShaderMapBase *pFVar2;
  ForAnyElementType *pFVar3;
  FPSOPrecacheData *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FMaterialShaderType *pFVar8;
  longlong lVar9;
  undefined1 auStack_348 [32];
  FPSOPrecacheData *local_328;
  FPSOPrecacheData *local_320;
  longlong local_318;
  longlong local_310;
  undefined8 local_308;
  TShaderRefBase<FTranslucentLightingInjectPS,FShaderMapPointerTable> local_2f8;
  TShaderRefBase<FWriteToSliceVS,FShaderMapPointerTable> local_2e8;
  TShaderRefBase<FWriteToSliceGS,FShaderMapPointerTable> local_2d8;
  FPSOPrecacheData local_2c8;
  FGraphicsPipelineRenderTargetsInfo local_188;
  FGraphicsPipelineStateInitializer local_118;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_348;
  pFVar2 = (FShaderMapBase *)**(longlong **)this;
  pFVar8 = FTranslucentLightingInjectPS::GetStaticType();
  local_2f8.ShaderContent =
       (FTranslucentLightingInjectPS *)
       FShaderMapContent::GetShader
                 ((pFVar2->Content).Object,(FHashedName *)&pFVar8->field_0x28,
                  (param_1 ^ 1) +
                  ((uint)param_2 + ((uint)param_3 + ((uint)param_4 + (uint)param_5 * 2) * 2) * 2) *
                  2);
  local_118.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_118.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_118.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_118.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_118.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
  local_2f8.ShaderMap = pFVar2;
  if (local_2f8.ShaderContent == (FTranslucentLightingInjectPS *)0x0) {
    local_2f8.ShaderMap = (FShaderMapBase *)0x0;
  }
  local_118.RenderTargetsEnabled = 0;
  local_118.RenderTargetFormats.Elements[0] = '\0';
  local_118.RenderTargetFormats.Elements[1] = '\0';
  local_118.RenderTargetFormats.Elements[2] = '\0';
  local_118.RenderTargetFormats.Elements[3] = '\0';
  local_118.RenderTargetFormats.Elements[4] = '\0';
  local_118.RenderTargetFormats.Elements[5] = '\0';
  local_118.RenderTargetFormats.Elements[6] = '\0';
  local_118.RenderTargetFormats.Elements[7] = '\0';
  local_118.RenderTargetFlags.Elements[0] = None;
  local_118.RenderTargetFlags.Elements[1] = None;
  local_118.RenderTargetFlags.Elements[2] = None;
  local_118.RenderTargetFlags.Elements[3] = None;
  local_118.RenderTargetFlags.Elements[4] = None;
  local_118.RenderTargetFlags.Elements[5] = None;
  local_118.RenderTargetFlags.Elements[6] = None;
  local_118.RenderTargetFlags.Elements[7] = None;
  local_118.DepthStencilTargetFormat = PF_Unknown;
  local_118.DepthStencilTargetFlag = None;
  local_118.DepthTargetLoadAction = ENoAction;
  local_118.DepthTargetStoreAction = ENoAction;
  local_118.StencilTargetLoadAction = ENoAction;
  local_118.StencilTargetStoreAction = ENoAction;
  local_118.DepthStencilAccess.Value = DepthNop;
  local_118.NumSamples = 0;
  local_118.SubpassHint = None;
  local_118.SubpassIndex = '\0';
  local_118.ConservativeRasterization = Disabled;
  local_118.bDepthBounds = false;
  local_118.MultiViewCount = '\0';
  local_118.bHasFragmentDensityAttachment = false;
  local_118.bAllowVariableRateShading = true;
  local_118.ShadingRate = VRSSR_1x1;
  local_118.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_118.StatePrecachePSOHash = 0;
  local_118.BoundShaderState.PixelShaderRHI =
       TShaderRefBase<FTranslucentLightingInjectPS,FShaderMapPointerTable>::GetPixelShader
                 (&local_2f8,true);
  local_2d8.ShaderContent = (FWriteToSliceGS *)**(undefined8 **)((longlong)this + 0x10);
  local_2d8.ShaderMap = (FShaderMapBase *)(*(undefined8 **)((longlong)this + 0x10))[1];
  local_2e8.ShaderContent = (FWriteToSliceVS *)**(undefined8 **)((longlong)this + 8);
  local_2e8.ShaderMap = (FShaderMapBase *)(*(undefined8 **)((longlong)this + 8))[1];
  local_118.RasterizerState =
       TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
       ::StaticResource.StateRHI.Reference;
  local_118.DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  local_118.BlendState =
       TStaticStateRHI<TStaticBlendState<7,0,1,1,0,0,1,7,0,1,1,0,0,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  if (param_1) {
    local_118.BlendState =
         TStaticStateRHI<TStaticBlendState<15,0,1,1,0,1,1,7,0,1,1,0,1,1,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
         ::StaticResource.StateRHI.Reference;
  }
  local_118.PrimitiveType = PT_TriangleStrip;
  local_118.BoundShaderState.VertexDeclarationRHI =
       (FRHIVertexDeclaration *)GScreenVertexDeclaration._32_8_;
  local_118.BoundShaderState.VertexShaderRHI =
       TShaderRefBase<FWriteToSliceVS,FShaderMapPointerTable>::GetVertexShader(&local_2e8,true);
  local_118.BoundShaderState.GeometryShaderRHI =
       TShaderRefBase<FWriteToSliceGS,FShaderMapPointerTable>::GetGeometryShader(&local_2d8);
  local_188.RenderTargetFlags.Elements[0] = None;
  local_188.RenderTargetFlags.Elements[1] = None;
  local_188.RenderTargetFlags.Elements[2] = None;
  local_188.RenderTargetFlags.Elements[3] = None;
  local_188.RenderTargetFlags.Elements[4] = None;
  local_188.RenderTargetFlags.Elements[5] = None;
  local_188.RenderTargetFlags.Elements[6] = None;
  local_188.RenderTargetFlags.Elements[7] = None;
  local_188.RenderTargetsEnabled = 0;
  local_188.RenderTargetFormats.Elements[0] = '\0';
  local_188.RenderTargetFormats.Elements[1] = '\0';
  local_188.RenderTargetFormats.Elements[2] = '\0';
  local_188.RenderTargetFormats.Elements[3] = '\0';
  local_188.RenderTargetFormats.Elements[4] = '\0';
  local_188.RenderTargetFormats.Elements[5] = '\0';
  local_188.RenderTargetFormats.Elements[6] = '\0';
  local_188.RenderTargetFormats.Elements[7] = '\0';
  local_188.DepthStencilTargetFormat = PF_Unknown;
  local_188.DepthStencilTargetFlag = None;
  local_188.DepthTargetLoadAction = ENoAction;
  local_188.DepthTargetStoreAction = ENoAction;
  local_188.StencilTargetLoadAction = ENoAction;
  local_188.StencilTargetStoreAction = ENoAction;
  local_188.DepthStencilAccess.Value = DepthNop;
  local_188.NumSamples = 1;
  local_188.MultiViewCount = '\0';
  local_188.bHasFragmentDensityAttachment = false;
  AddRenderTargetInfo(**(EPixelFormat **)((longlong)this + 0x18),
                      **(ETextureCreateFlags **)((longlong)this + 0x20),&local_188);
  AddRenderTargetInfo(**(EPixelFormat **)((longlong)this + 0x18),
                      **(ETextureCreateFlags **)((longlong)this + 0x20),&local_188);
  local_118.StatePrecachePSOHash =
       (**(code **)(GDynamicRHI->_padding_ + 0x2d0))(GDynamicRHI,&local_118);
  ApplyTargetsInfo(&local_118,&local_188);
  pFVar3 = *(ForAnyElementType **)((longlong)this + 0x30);
  local_2c8.ShaderPreloadData.Shaders.AllocatorInstance.SecondaryData =
       (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0;
  local_2c8.ShaderPreloadData.Shaders.ArrayNum = 0;
  local_2c8.ShaderPreloadData.Shaders.ArrayMax = 3;
  local_2c8.Type = Graphics;
  local_2c8.bRequired = true;
  local_2c8.field2_0x8.GraphicsPSOInitializer.BoundShaderState.VertexDeclarationRHI =
       local_118.BoundShaderState.VertexDeclarationRHI;
  local_2c8.field2_0x8.GraphicsPSOInitializer.BoundShaderState.VertexShaderRHI =
       local_118.BoundShaderState.VertexShaderRHI;
  local_2c8.field2_0x8.GraphicsPSOInitializer.BoundShaderState.PixelShaderRHI =
       local_118.BoundShaderState.PixelShaderRHI;
  local_2c8.field2_0x8.GraphicsPSOInitializer.BoundShaderState.MeshShaderRHI =
       local_118.BoundShaderState.MeshShaderRHI;
  local_2c8.field2_0x8.GraphicsPSOInitializer.BoundShaderState.AmplificationShaderRHI =
       local_118.BoundShaderState.AmplificationShaderRHI;
  local_2c8.field2_0x8.GraphicsPSOInitializer.BoundShaderState.GeometryShaderRHI =
       local_118.BoundShaderState.GeometryShaderRHI;
  local_2c8.field2_0x8.GraphicsPSOInitializer.BoundShaderState.WorkGraphMeshShaderRHI =
       local_118.BoundShaderState.WorkGraphMeshShaderRHI;
  local_2c8.field2_0x8.GraphicsPSOInitializer.BlendState = local_118.BlendState;
  local_2c8.field2_0x8.GraphicsPSOInitializer.RasterizerState = local_118.RasterizerState;
  local_2c8.field2_0x8.GraphicsPSOInitializer.DepthStencilState = local_118.DepthStencilState;
  local_2c8.field2_0x8._96_8_ = CONCAT44(local_118.RenderTargetsEnabled,local_118.PrimitiveType);
  local_2c8.field2_0x8._108_1_ = local_118.RenderTargetFormats.Elements[4];
  local_2c8.field2_0x8._109_1_ = local_118.RenderTargetFormats.Elements[5];
  local_2c8.field2_0x8._110_1_ = local_118.RenderTargetFormats.Elements[6];
  local_2c8.field2_0x8._111_1_ = local_118.RenderTargetFormats.Elements[7];
  local_2c8.field2_0x8._104_1_ = local_118.RenderTargetFormats.Elements[0];
  local_2c8.field2_0x8._105_1_ = local_118.RenderTargetFormats.Elements[1];
  local_2c8.field2_0x8._106_1_ = local_118.RenderTargetFormats.Elements[2];
  local_2c8.field2_0x8._107_1_ = local_118.RenderTargetFormats.Elements[3];
  local_2c8.field2_0x8.GraphicsPSOInitializer.ImmutableSamplerState.ImmutableSamplers.Elements[0] =
       local_118.ImmutableSamplerState.ImmutableSamplers.Elements[0];
  local_2c8.field2_0x8.GraphicsPSOInitializer.ImmutableSamplerState.ImmutableSamplers.Elements[1] =
       local_118.ImmutableSamplerState.ImmutableSamplers.Elements[1];
  local_2c8.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[0] =
       local_118.RenderTargetFlags.Elements[0];
  local_2c8.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[1] =
       local_118.RenderTargetFlags.Elements[1];
  local_2c8.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[2] =
       local_118.RenderTargetFlags.Elements[2];
  local_2c8.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[3] =
       local_118.RenderTargetFlags.Elements[3];
  local_2c8.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[4] =
       local_118.RenderTargetFlags.Elements[4];
  local_2c8.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[5] =
       local_118.RenderTargetFlags.Elements[5];
  local_2c8.field2_0x8._176_8_ = CONCAT71(local_118._177_7_,local_118.DepthStencilTargetFormat);
  local_2c8.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[6] =
       local_118.RenderTargetFlags.Elements[6];
  local_2c8.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[7] =
       local_118.RenderTargetFlags.Elements[7];
  local_2c8.field2_0x8.GraphicsPSOInitializer.DepthStencilTargetFlag =
       local_118.DepthStencilTargetFlag;
  local_2c8.field2_0x8._208_8_ = CONCAT44(local_118._212_4_,local_118._208_4_);
  local_2c8.field2_0x8.GraphicsPSOInitializer.DepthTargetLoadAction =
       local_118.DepthTargetLoadAction;
  local_2c8.field2_0x8.GraphicsPSOInitializer.DepthTargetStoreAction =
       local_118.DepthTargetStoreAction;
  local_2c8.field2_0x8.GraphicsPSOInitializer.StencilTargetLoadAction =
       local_118.StencilTargetLoadAction;
  local_2c8.field2_0x8.GraphicsPSOInitializer.StencilTargetStoreAction =
       local_118.StencilTargetStoreAction;
  local_2c8.field2_0x8.GraphicsPSOInitializer.DepthStencilAccess.Value =
       (FExclusiveDepthStencil)local_118.DepthStencilAccess.Value;
  local_2c8.field2_0x8.GraphicsPSOInitializer.NumSamples = local_118.NumSamples;
  local_2c8.field2_0x8.GraphicsPSOInitializer.SubpassHint = local_118.SubpassHint;
  local_2c8.field2_0x8.GraphicsPSOInitializer.SubpassIndex = local_118.SubpassIndex;
  local_2c8.field2_0x8.GraphicsPSOInitializer.ConservativeRasterization =
       local_118.ConservativeRasterization;
  local_2c8.field2_0x8.GraphicsPSOInitializer.bDepthBounds = local_118.bDepthBounds;
  local_2c8.field2_0x8.GraphicsPSOInitializer.MultiViewCount = local_118.MultiViewCount;
  local_2c8.field2_0x8.GraphicsPSOInitializer.bHasFragmentDensityAttachment =
       local_118.bHasFragmentDensityAttachment;
  local_2c8.field2_0x8.GraphicsPSOInitializer.StatePrecachePSOHash = local_118.StatePrecachePSOHash;
  local_2c8.bDefaultMaterial = 0;
  local_2c8.PSOCollectorIndex = *(uint *)(*(longlong *)((longlong)this + 0x28) + 8);
  local_2c8.VertexFactoryType = (FVertexFactoryType *)0x0;
  pFVar4 = (FPSOPrecacheData *)pFVar3->Data;
  if ((pFVar4 <= &local_2c8) &&
     (lVar9 = (longlong)*(int *)((longlong)&pFVar3[1].Data + 4), &local_2c8 < pFVar4 + lVar9)) {
    local_310 = (longlong)*(int *)&pFVar3[1].Data;
    local_308 = 0x138;
    local_328 = &local_2c8;
    local_320 = pFVar4;
    local_318 = lVar9;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = *(int *)&pFVar3[1].Data;
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x138,8,pFVar3,piVar1);
  }
  *(int *)&pFVar3[1].Data = iVar7 + 1;
  FPSOPrecacheData::FPSOPrecacheData
            ((FPSOPrecacheData *)(pFVar3->Data + (longlong)iVar7 * 0x138),&local_2c8);
  if (local_2c8.ShaderPreloadData.Shaders.AllocatorInstance.SecondaryData !=
      (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0) {
    FMemory::Free((void *)local_2c8.ShaderPreloadData.Shaders.AllocatorInstance.SecondaryData);
  }
  return;
}

// CollectPSOInitializers @ 14575bb10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FTranslucentLightingMaterialPSOCollector::CollectPSOInitializers
          (FTranslucentLightingMaterialPSOCollector *this,FSceneTexturesConfig *param_1,
          FMaterial *param_2,FPSOPrecacheVertexFactoryData *param_3,FPSOPrecacheParams *param_4,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_5)

{
  char cVar1;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar2;
  TShaderRefBase<FShader,FShaderMapPointerTable> *pTVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 local_res18 [8];
  int local_a8;
  FMaterialShaderMap *local_a0;
  undefined8 local_98;
  FShader *local_90;
  FShaderMapBase *local_88;
  FMaterialShaderMap **local_80;
  TShaderMapRef<FWriteToSliceVS> *local_78;
  FShader **local_70;
  undefined1 *local_68;
  undefined8 *local_60;
  FTranslucentLightingMaterialPSOCollector *local_58;
  TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *local_50;
  TShaderMapRef<FWriteToSliceVS> local_48;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_38;
  
  cVar1 = (**(code **)(param_2->_padding_ + 0xd0))(param_2);
  if ((cVar1 != '\0') && (GTranslucencyLightingVolumeMaterialPSOPrecache != 0)) {
    this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)this->FeatureLevel])
    ;
    TShaderMapRef<FWriteToSliceVS>::TShaderMapRef<FWriteToSliceVS>(&local_48,this_00);
    pFVar2 = (FShaderType *)FWriteToSliceGS::GetStaticType();
    pTVar3 = FGlobalShaderMap::GetShader(this_00,&local_38,pFVar2,0);
    local_88 = pTVar3->ShaderMap;
    local_90 = pTVar3->ShaderContent;
    local_a0 = (param_2->GameThreadShaderMap).Reference;
    local_98 = 0x80020809;
    local_80 = &local_a0;
    local_78 = &local_48;
    local_70 = &local_90;
    local_68 = local_res18;
    local_60 = &local_98;
    local_50 = param_5;
    local_a8 = 0;
    local_res18[0] = 10;
    local_58 = this;
    do {
      iVar7 = 0;
      do {
        iVar6 = 0;
        do {
          iVar5 = 0;
          do {
            iVar4 = 0;
            do {
              `FTranslucentLightingMaterialPSOCollector::CollectPSOInitializers'::__l2::<lambda_1>::
              operator()(&local_80,local_a8 != 0,iVar7 != 0,iVar6 != 0,iVar5 != 0,iVar4 != 0);
              iVar4 = iVar4 + 1;
            } while (iVar4 < 2);
            iVar5 = iVar5 + 1;
          } while (iVar5 < 2);
          iVar6 = iVar6 + 1;
        } while (iVar6 < 2);
        iVar7 = iVar7 + 1;
      } while (iVar7 < 2);
      local_a8 = local_a8 + 1;
    } while (local_a8 < 2);
  }
  return;
}

