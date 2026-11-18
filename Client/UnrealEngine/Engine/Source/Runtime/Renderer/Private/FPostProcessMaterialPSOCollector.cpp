// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// operator() @ 145198ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
`FPostProcessMaterialPSOCollector::CollectPSOInitializers'::__l2::<lambda_1>::operator()
          (void *this,bool param_1)

{
  int *piVar1;
  longlong *plVar2;
  FShaderMapResource *pFVar3;
  ForAnyElementType *pFVar4;
  code *pcVar5;
  TConsoleVariableData<int> *pTVar6;
  FPostProcessMaterialVS *this_00;
  FShaderMapBase *pFVar7;
  FPostProcessMaterialPS *this_01;
  bool bVar8;
  char cVar9;
  int iVar10;
  atomic<FRHIShader_*> aVar11;
  TRefCountPtr<FRHIBlendState> TVar12;
  atomic<FRHIShader_*> aVar13;
  undefined1 auStackY_338 [32];
  TShaderRefBase<_anonymous_namespace_::FPostProcessMaterialVS,FShaderMapPointerTable> local_2e8;
  TShaderRefBase<_anonymous_namespace_::FPostProcessMaterialPS,FShaderMapPointerTable> local_2d8;
  FGraphicsPipelineStateInitializer local_2c8;
  FPSOPrecacheData local_1e8;
  FGraphicsPipelineRenderTargetsInfo local_a8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_338;
  local_2e8.ShaderContent = (FPostProcessMaterialVS *)0x0;
  local_2e8.ShaderMap = (FShaderMapBase *)0x0;
  local_2d8.ShaderContent = (FPostProcessMaterialPS *)0x0;
  local_2d8.ShaderMap = (FShaderMapBase *)0x0;
  bVar8 = ::`anonymous_namespace'::GetMaterialShaders
                    (*(FMaterial **)this,
                     *(EShaderPlatform *)(*(longlong *)((longlong)this + 8) + 0xc),param_1,false,
                     false,&local_2e8,&local_2d8);
  TVar12 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI;
  if (!bVar8) {
    return;
  }
  plVar2 = *(longlong **)this;
  if ((plVar2 == (longlong *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Material",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\PostProcessMaterial.cpp"
                         ,0x83,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  cVar9 = (**(code **)(*plVar2 + 0x440))(plVar2);
  pTVar6 = CVarPostProcessAllowBlendModes.Ref;
  aVar13 = (atomic<FRHIShader_*>)0x0;
  if (cVar9 == '\0') goto LAB_1451990f8;
  bVar8 = IsInParallelGameThread();
  if (bVar8) {
LAB_1451990e4:
    aVar11 = aVar13;
  }
  else {
    bVar8 = IsInGameThread();
    aVar11 = (atomic<FRHIShader_*>)0x4;
    if (bVar8) goto LAB_1451990e4;
  }
  if (*(int *)((longlong)pTVar6->ShadowedValue + (longlong)aVar11) != 0) {
    TVar12.Reference = ::`anonymous_namespace'::GetMaterialBlendState(*(FMaterial **)this);
  }
LAB_1451990f8:
  local_2c8.DepthStencilState =
       TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
       ::StaticResource.StateRHI.Reference;
  if (param_1) {
    local_2c8.DepthStencilState =
         ::`anonymous_namespace'::GetMaterialStencilState(*(FMaterial **)this);
  }
  pFVar7 = local_2e8.ShaderMap;
  this_00 = local_2e8.ShaderContent;
  local_2c8.RasterizerState =
       TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
       ::StaticResource.StateRHI.Reference;
  local_2c8.BoundShaderState.VertexDeclarationRHI =
       (FRHIVertexDeclaration *)GFilterVertexDeclaration._32_8_;
  local_2c8.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_2c8.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_2c8.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_2c8.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_2c8.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
  local_2c8.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
  local_2c8.RenderTargetsEnabled = 0;
  local_2c8.RenderTargetFormats.Elements[0] = '\0';
  local_2c8.RenderTargetFormats.Elements[1] = '\0';
  local_2c8.RenderTargetFormats.Elements[2] = '\0';
  local_2c8.RenderTargetFormats.Elements[3] = '\0';
  local_2c8.RenderTargetFormats.Elements[4] = '\0';
  local_2c8.RenderTargetFormats.Elements[5] = '\0';
  local_2c8.RenderTargetFormats.Elements[6] = '\0';
  local_2c8.RenderTargetFormats.Elements[7] = '\0';
  local_2c8.RenderTargetFlags.Elements[0] = None;
  local_2c8.RenderTargetFlags.Elements[1] = None;
  local_2c8.RenderTargetFlags.Elements[2] = None;
  local_2c8.RenderTargetFlags.Elements[3] = None;
  local_2c8.RenderTargetFlags.Elements[4] = None;
  local_2c8.RenderTargetFlags.Elements[5] = None;
  local_2c8.RenderTargetFlags.Elements[6] = None;
  local_2c8.RenderTargetFlags.Elements[7] = None;
  local_2c8.DepthStencilTargetFormat = PF_Unknown;
  local_2c8.DepthStencilTargetFlag = None;
  local_2c8.DepthTargetLoadAction = ENoAction;
  local_2c8.DepthTargetStoreAction = ENoAction;
  local_2c8.StencilTargetLoadAction = ENoAction;
  local_2c8.StencilTargetStoreAction = ENoAction;
  local_2c8.DepthStencilAccess.Value = DepthNop;
  local_2c8.NumSamples = 0;
  local_2c8.SubpassHint = None;
  local_2c8.SubpassIndex = '\0';
  local_2c8.ConservativeRasterization = Disabled;
  local_2c8.bDepthBounds = false;
  local_2c8.MultiViewCount = '\0';
  local_2c8.bHasFragmentDensityAttachment = false;
  local_2c8.bAllowVariableRateShading = true;
  local_2c8.ShadingRate = VRSSR_1x1;
  local_2c8.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
  local_2c8.StatePrecachePSOHash = 0;
  local_2c8.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)aVar13;
  local_2c8.BlendState = TVar12.Reference;
  if (local_2e8.ShaderContent != (FPostProcessMaterialVS *)0x0) {
    pFVar3 = ((local_2e8.ShaderMap)->Resource).Reference;
    if ((pFVar3 == (FShaderMapResource *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar10 = *(int *)&this_00->field_0xd4;
    local_2c8.BoundShaderState.VertexShaderRHI =
         *(FRHIVertexShader **)((pFVar3->RHIShaders).Ptr + iVar10);
    if (((atomic<FRHIShader_*>)local_2c8.BoundShaderState.VertexShaderRHI ==
         (atomic<FRHIShader_*>)0x0) &&
       (local_2c8.BoundShaderState.VertexShaderRHI =
             (FRHIVertexShader *)FShaderMapResource::CreateShaderOrCrash(pFVar3,iVar10,true),
       (atomic<FRHIShader_*>)local_2c8.BoundShaderState.VertexShaderRHI == (atomic<FRHIShader_*>)0x0
       )) {
      if (4 < (byte)LogShaders._0_1_) {
        if ((pFVar7->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FShader::GetType((FShader *)this_00,pFVar7->PointerTable);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)&PTR_u_Failed_to_creat_150f3f590,
                   (FLogCategoryBase *)&LogShaders);
      }
      local_2c8.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
    }
  }
  pFVar7 = local_2d8.ShaderMap;
  this_01 = local_2d8.ShaderContent;
  if (local_2d8.ShaderContent != (FPostProcessMaterialPS *)0x0) {
    pFVar3 = ((local_2d8.ShaderMap)->Resource).Reference;
    if ((pFVar3 == (FShaderMapResource *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                           ,0x426,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar10 = *(int *)&this_01->field_0xd4;
    aVar13 = (pFVar3->RHIShaders).Ptr[iVar10];
    if ((aVar13 == (atomic<FRHIShader_*>)0x0) &&
       (aVar13 = (atomic<FRHIShader_*>)FShaderMapResource::CreateShaderOrCrash(pFVar3,iVar10,true),
       aVar13 == (atomic<FRHIShader_*>)0x0)) {
      if (4 < (byte)LogShaders._0_1_) {
        if ((pFVar7->PointerTable == (FShaderMapPointerTable *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("PointerTable",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                               ,0x9b4,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FShader::GetType((FShader *)this_01,pFVar7->PointerTable);
        UE::Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)&PTR_u_Failed_to_creat_150f3f570,
                   (FLogCategoryBase *)&LogShaders);
      }
      aVar13 = (atomic<FRHIShader_*>)0x0;
    }
  }
  local_2c8.PrimitiveType = PT_TriangleList;
  local_a8.RenderTargetsEnabled = 0;
  local_a8.RenderTargetFormats.Elements[0] = '\0';
  local_a8.RenderTargetFormats.Elements[1] = '\0';
  local_a8.RenderTargetFormats.Elements[2] = '\0';
  local_a8.RenderTargetFormats.Elements[3] = '\0';
  local_a8.RenderTargetFormats.Elements[4] = '\0';
  local_a8.RenderTargetFormats.Elements[5] = '\0';
  local_a8.RenderTargetFormats.Elements[6] = '\0';
  local_a8.RenderTargetFormats.Elements[7] = '\0';
  local_a8.RenderTargetFlags.Elements[0] = None;
  local_a8.RenderTargetFlags.Elements[1] = None;
  local_a8.RenderTargetFlags.Elements[2] = None;
  local_a8.RenderTargetFlags.Elements[3] = None;
  local_a8.RenderTargetFlags.Elements[4] = None;
  local_a8.RenderTargetFlags.Elements[5] = None;
  local_a8.RenderTargetFlags.Elements[6] = None;
  local_a8.RenderTargetFlags.Elements[7] = None;
  local_a8.DepthStencilTargetFormat = PF_Unknown;
  local_a8.DepthStencilTargetFlag = None;
  local_a8.DepthTargetLoadAction = ENoAction;
  local_a8.DepthTargetStoreAction = ENoAction;
  local_a8.StencilTargetLoadAction = ENoAction;
  local_a8.StencilTargetStoreAction = ENoAction;
  local_a8.DepthStencilAccess.Value = DepthNop;
  local_a8.NumSamples = 1;
  local_a8.MultiViewCount = '\0';
  local_a8.bHasFragmentDensityAttachment = false;
  local_2c8.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)aVar13;
  AddRenderTargetInfo(*(EPixelFormat *)(*(longlong *)((longlong)this + 8) + 0x24),
                      *(ETextureCreateFlags *)(*(longlong *)((longlong)this + 8) + 0x28),&local_a8);
  local_2c8.StatePrecachePSOHash =
       (**(code **)(GDynamicRHI->_padding_ + 0x2d0))(GDynamicRHI,&local_2c8);
  ApplyTargetsInfo(&local_2c8,&local_a8);
  pFVar4 = *(ForAnyElementType **)((longlong)this + 0x18);
  local_1e8.ShaderPreloadData.Shaders.AllocatorInstance.SecondaryData =
       (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0;
  local_1e8.ShaderPreloadData.Shaders.ArrayNum = 0;
  local_1e8.ShaderPreloadData.Shaders.ArrayMax = 3;
  local_1e8.Type = Graphics;
  local_1e8.bRequired = true;
  local_1e8.field2_0x8.GraphicsPSOInitializer.BoundShaderState.VertexDeclarationRHI =
       local_2c8.BoundShaderState.VertexDeclarationRHI;
  local_1e8.field2_0x8.GraphicsPSOInitializer.BoundShaderState.VertexShaderRHI =
       local_2c8.BoundShaderState.VertexShaderRHI;
  local_1e8.field2_0x8.GraphicsPSOInitializer.BoundShaderState.PixelShaderRHI =
       local_2c8.BoundShaderState.PixelShaderRHI;
  local_1e8.field2_0x8.GraphicsPSOInitializer.BoundShaderState.MeshShaderRHI =
       local_2c8.BoundShaderState.MeshShaderRHI;
  local_1e8.field2_0x8.GraphicsPSOInitializer.BoundShaderState.AmplificationShaderRHI =
       local_2c8.BoundShaderState.AmplificationShaderRHI;
  local_1e8.field2_0x8.GraphicsPSOInitializer.BoundShaderState.GeometryShaderRHI =
       local_2c8.BoundShaderState.GeometryShaderRHI;
  local_1e8.field2_0x8.GraphicsPSOInitializer.BoundShaderState.WorkGraphMeshShaderRHI =
       local_2c8.BoundShaderState.WorkGraphMeshShaderRHI;
  local_1e8.field2_0x8.GraphicsPSOInitializer.BlendState = local_2c8.BlendState;
  local_1e8.field2_0x8.GraphicsPSOInitializer.RasterizerState = local_2c8.RasterizerState;
  local_1e8.field2_0x8.GraphicsPSOInitializer.DepthStencilState = local_2c8.DepthStencilState;
  local_1e8.field2_0x8._96_8_ = CONCAT44(local_2c8.RenderTargetsEnabled,local_2c8.PrimitiveType);
  local_1e8.field2_0x8._108_1_ = local_2c8.RenderTargetFormats.Elements[4];
  local_1e8.field2_0x8._109_1_ = local_2c8.RenderTargetFormats.Elements[5];
  local_1e8.field2_0x8._110_1_ = local_2c8.RenderTargetFormats.Elements[6];
  local_1e8.field2_0x8._111_1_ = local_2c8.RenderTargetFormats.Elements[7];
  local_1e8.field2_0x8._104_1_ = local_2c8.RenderTargetFormats.Elements[0];
  local_1e8.field2_0x8._105_1_ = local_2c8.RenderTargetFormats.Elements[1];
  local_1e8.field2_0x8._106_1_ = local_2c8.RenderTargetFormats.Elements[2];
  local_1e8.field2_0x8._107_1_ = local_2c8.RenderTargetFormats.Elements[3];
  local_1e8.field2_0x8.GraphicsPSOInitializer.ImmutableSamplerState.ImmutableSamplers.Elements[0] =
       local_2c8.ImmutableSamplerState.ImmutableSamplers.Elements[0];
  local_1e8.field2_0x8.GraphicsPSOInitializer.ImmutableSamplerState.ImmutableSamplers.Elements[1] =
       local_2c8.ImmutableSamplerState.ImmutableSamplers.Elements[1];
  local_1e8.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[0] =
       local_2c8.RenderTargetFlags.Elements[0];
  local_1e8.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[1] =
       local_2c8.RenderTargetFlags.Elements[1];
  local_1e8.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[2] =
       local_2c8.RenderTargetFlags.Elements[2];
  local_1e8.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[3] =
       local_2c8.RenderTargetFlags.Elements[3];
  local_1e8.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[4] =
       local_2c8.RenderTargetFlags.Elements[4];
  local_1e8.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[5] =
       local_2c8.RenderTargetFlags.Elements[5];
  local_1e8.field2_0x8._176_8_ = CONCAT71(local_2c8._177_7_,local_2c8.DepthStencilTargetFormat);
  local_1e8.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[6] =
       local_2c8.RenderTargetFlags.Elements[6];
  local_1e8.field2_0x8.GraphicsPSOInitializer.RenderTargetFlags.Elements[7] =
       local_2c8.RenderTargetFlags.Elements[7];
  local_1e8.field2_0x8.GraphicsPSOInitializer.DepthStencilTargetFlag =
       local_2c8.DepthStencilTargetFlag;
  local_1e8.field2_0x8._208_8_ = CONCAT44(local_2c8._212_4_,local_2c8._208_4_);
  local_1e8.field2_0x8.GraphicsPSOInitializer.DepthTargetLoadAction =
       local_2c8.DepthTargetLoadAction;
  local_1e8.field2_0x8.GraphicsPSOInitializer.DepthTargetStoreAction =
       local_2c8.DepthTargetStoreAction;
  local_1e8.field2_0x8.GraphicsPSOInitializer.StencilTargetLoadAction =
       local_2c8.StencilTargetLoadAction;
  local_1e8.field2_0x8.GraphicsPSOInitializer.StencilTargetStoreAction =
       local_2c8.StencilTargetStoreAction;
  local_1e8.field2_0x8.GraphicsPSOInitializer.DepthStencilAccess.Value =
       (FExclusiveDepthStencil)local_2c8.DepthStencilAccess.Value;
  local_1e8.field2_0x8.GraphicsPSOInitializer.NumSamples = local_2c8.NumSamples;
  local_1e8.field2_0x8.GraphicsPSOInitializer.SubpassHint = local_2c8.SubpassHint;
  local_1e8.field2_0x8.GraphicsPSOInitializer.SubpassIndex = local_2c8.SubpassIndex;
  local_1e8.field2_0x8.GraphicsPSOInitializer.ConservativeRasterization =
       local_2c8.ConservativeRasterization;
  local_1e8.field2_0x8.GraphicsPSOInitializer.bDepthBounds = local_2c8.bDepthBounds;
  local_1e8.field2_0x8.GraphicsPSOInitializer.MultiViewCount = local_2c8.MultiViewCount;
  local_1e8.field2_0x8.GraphicsPSOInitializer.bHasFragmentDensityAttachment =
       local_2c8.bHasFragmentDensityAttachment;
  local_1e8.field2_0x8.GraphicsPSOInitializer.StatePrecachePSOHash = local_2c8.StatePrecachePSOHash;
  local_1e8.bDefaultMaterial = 0;
  local_1e8.PSOCollectorIndex = *(uint *)(*(longlong *)((longlong)this + 0x10) + 8);
  local_1e8.VertexFactoryType = (FVertexFactoryType *)0x0;
  if ((((FPSOPrecacheData *)pFVar4->Data <= &local_1e8) &&
      (&local_1e8 < (FPSOPrecacheData *)pFVar4->Data + *(int *)((longlong)&pFVar4[1].Data + 4))) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar10 = *(int *)&pFVar4[1].Data;
  piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x138,8,pFVar4,piVar1);
  }
  *(int *)&pFVar4[1].Data = iVar10 + 1;
  FPSOPrecacheData::FPSOPrecacheData
            ((FPSOPrecacheData *)(pFVar4->Data + (longlong)iVar10 * 0x138),&local_1e8);
  if (local_1e8.ShaderPreloadData.Shaders.AllocatorInstance.SecondaryData !=
      (ForElementType<TShaderRefBase<FShader,FShaderMapPointerTable>_>)0x0) {
    FMemory::Free((void *)local_1e8.ShaderPreloadData.Shaders.AllocatorInstance.SecondaryData);
  }
  return;
}

// CollectPSOInitializers @ 1451c11b0

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

void __thiscall
FPostProcessMaterialPSOCollector::CollectPSOInitializers
          (FPostProcessMaterialPSOCollector *this,FSceneTexturesConfig *param_1,FMaterial *param_2,
          FPSOPrecacheVertexFactoryData *param_3,FPSOPrecacheParams *param_4,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_5)

{
  char cVar1;
  FMaterial *local_28;
  FSceneTexturesConfig *local_20;
  FPostProcessMaterialPSOCollector *local_18;
  TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *local_10;
  
  cVar1 = (**(code **)(param_2->_padding_ + 0x100))(param_2);
  if ((cVar1 != '\0') && (GPostProcessingMaterialPSOPrecache != 0)) {
    local_10 = param_5;
    local_28 = param_2;
    local_20 = param_1;
    local_18 = this;
    `FPostProcessMaterialPSOCollector::CollectPSOInitializers'::__l2::<lambda_1>::operator()
              (&local_28,false);
    cVar1 = (**(code **)(param_2->_padding_ + 0x450))(param_2);
    if (cVar1 != '\0') {
      `FPostProcessMaterialPSOCollector::CollectPSOInitializers'::__l2::<lambda_1>::operator()
                (&local_28,true);
    }
  }
  return;
}

