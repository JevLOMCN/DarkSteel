// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 35

// FPipelineCacheFileFormatPSO @ 145c458b0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FPipelineCacheFileFormatPSO * __thiscall
FPipelineCacheFileFormatPSO::FPipelineCacheFileFormatPSO
          (FPipelineCacheFileFormatPSO *this,FPipelineCacheFileFormatPSO *param_1)

{
  DescriptorType DVar1;
  code *pcVar2;
  undefined8 uVar3;
  ComputeDescriptor *pCVar4;
  GraphicsDescriptor *pGVar5;
  GraphicsDescriptor *pGVar6;
  bool bVar7;
  FPipelineCacheFileFormatPSO *pFVar8;
  GraphicsDescriptor *pGVar9;
  longlong lVar10;
  GraphicsDescriptor *pGVar11;
  
  this->Type = param_1->Type;
  (this->ComputeDesc).ComputeShader.Hash[0] = '\0';
  (this->ComputeDesc).ComputeShader.Hash[1] = '\0';
  (this->ComputeDesc).ComputeShader.Hash[2] = '\0';
  (this->ComputeDesc).ComputeShader.Hash[3] = '\0';
  (this->ComputeDesc).ComputeShader.Hash[4] = '\0';
  (this->ComputeDesc).ComputeShader.Hash[5] = '\0';
  (this->ComputeDesc).ComputeShader.Hash[6] = '\0';
  (this->ComputeDesc).ComputeShader.Hash[7] = '\0';
  pCVar4 = &this->ComputeDesc;
  (pCVar4->ComputeShader).Hash[8] = '\0';
  (pCVar4->ComputeShader).Hash[9] = '\0';
  (pCVar4->ComputeShader).Hash[10] = '\0';
  (pCVar4->ComputeShader).Hash[0xb] = '\0';
  (pCVar4->ComputeShader).Hash[0xc] = '\0';
  (pCVar4->ComputeShader).Hash[0xd] = '\0';
  (pCVar4->ComputeShader).Hash[0xe] = '\0';
  (pCVar4->ComputeShader).Hash[0xf] = '\0';
  pCVar4 = &this->ComputeDesc;
  (pCVar4->ComputeShader).Hash[0x10] = '\0';
  (pCVar4->ComputeShader).Hash[0x11] = '\0';
  (pCVar4->ComputeShader).Hash[0x12] = '\0';
  (pCVar4->ComputeShader).Hash[0x13] = '\0';
  GraphicsDescriptor::GraphicsDescriptor(&this->GraphicsDesc);
  FPipelineFileCacheRayTracingDesc::FPipelineFileCacheRayTracingDesc(&this->RayTracingDesc);
  DVar1 = this->Type;
  if (DVar1 == Compute) {
    uVar3 = *(undefined8 *)((param_1->ComputeDesc).ComputeShader.Hash + 8);
    *(undefined8 *)(this->ComputeDesc).ComputeShader.Hash =
         *(undefined8 *)(param_1->ComputeDesc).ComputeShader.Hash;
    *(undefined8 *)((this->ComputeDesc).ComputeShader.Hash + 8) = uVar3;
    *(undefined4 *)((this->ComputeDesc).ComputeShader.Hash + 0x10) =
         *(undefined4 *)((param_1->ComputeDesc).ComputeShader.Hash + 0x10);
  }
  else if (DVar1 == Graphics) {
    lVar10 = 3;
    pGVar5 = &param_1->GraphicsDesc;
    pGVar6 = &this->GraphicsDesc;
    do {
      pGVar11 = pGVar6;
      pGVar9 = pGVar5;
      pGVar6 = (GraphicsDescriptor *)
               ((pGVar11->VertexDescriptor).AllocatorInstance.InlineData[3].Pad + 4);
      uVar3 = *(undefined8 *)((pGVar9->VertexShader).Hash + 8);
      pGVar5 = (GraphicsDescriptor *)
               ((pGVar9->VertexDescriptor).AllocatorInstance.InlineData[3].Pad + 4);
      *(undefined8 *)(pGVar11->VertexShader).Hash = *(undefined8 *)(pGVar9->VertexShader).Hash;
      *(undefined8 *)((pGVar11->VertexShader).Hash + 8) = uVar3;
      uVar3 = *(undefined8 *)((pGVar9->FragmentShader).Hash + 4);
      *(undefined8 *)((pGVar11->VertexShader).Hash + 0x10) =
           *(undefined8 *)((pGVar9->VertexShader).Hash + 0x10);
      *(undefined8 *)((pGVar11->FragmentShader).Hash + 4) = uVar3;
      uVar3 = *(undefined8 *)(pGVar9->GeometryShader).Hash;
      *(undefined8 *)((pGVar11->FragmentShader).Hash + 0xc) =
           *(undefined8 *)((pGVar9->FragmentShader).Hash + 0xc);
      *(undefined8 *)(pGVar11->GeometryShader).Hash = uVar3;
      uVar3 = *(undefined8 *)((pGVar9->GeometryShader).Hash + 0x10);
      *(undefined8 *)((pGVar11->GeometryShader).Hash + 8) =
           *(undefined8 *)((pGVar9->GeometryShader).Hash + 8);
      *(undefined8 *)((pGVar11->GeometryShader).Hash + 0x10) = uVar3;
      uVar3 = *(undefined8 *)((pGVar9->MeshShader).Hash + 0xc);
      *(undefined8 *)((pGVar11->MeshShader).Hash + 4) =
           *(undefined8 *)((pGVar9->MeshShader).Hash + 4);
      *(undefined8 *)((pGVar11->MeshShader).Hash + 0xc) = uVar3;
      uVar3 = *(undefined8 *)((pGVar9->AmplificationShader).Hash + 8);
      *(undefined8 *)(pGVar11->AmplificationShader).Hash =
           *(undefined8 *)(pGVar9->AmplificationShader).Hash;
      *(undefined8 *)((pGVar11->AmplificationShader).Hash + 8) = uVar3;
      uVar3 = *(undefined8 *)((pGVar9->VertexDescriptor).AllocatorInstance.InlineData[0].Pad + 4);
      *(undefined8 *)((pGVar11->AmplificationShader).Hash + 0x10) =
           *(undefined8 *)((pGVar9->AmplificationShader).Hash + 0x10);
      *(undefined8 *)((pGVar11->VertexDescriptor).AllocatorInstance.InlineData[0].Pad + 4) = uVar3;
      uVar3 = *(undefined8 *)((pGVar9->VertexDescriptor).AllocatorInstance.InlineData[2].Pad + 4);
      *(undefined8 *)((pGVar11->VertexDescriptor).AllocatorInstance.InlineData[1].Pad + 4) =
           *(undefined8 *)((pGVar9->VertexDescriptor).AllocatorInstance.InlineData[1].Pad + 4);
      *(undefined8 *)((pGVar11->VertexDescriptor).AllocatorInstance.InlineData[2].Pad + 4) = uVar3;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    uVar3 = *(undefined8 *)((pGVar9->VertexDescriptor).AllocatorInstance.InlineData[4].Pad + 4);
    *(undefined8 *)(pGVar6->VertexShader).Hash = *(undefined8 *)(pGVar5->VertexShader).Hash;
    *(undefined8 *)((pGVar11->VertexDescriptor).AllocatorInstance.InlineData[4].Pad + 4) = uVar3;
    uVar3 = *(undefined8 *)((pGVar9->VertexDescriptor).AllocatorInstance.InlineData[6].Pad + 4);
    *(undefined8 *)((pGVar11->VertexDescriptor).AllocatorInstance.InlineData[5].Pad + 4) =
         *(undefined8 *)((pGVar9->VertexDescriptor).AllocatorInstance.InlineData[5].Pad + 4);
    *(undefined8 *)((pGVar11->VertexDescriptor).AllocatorInstance.InlineData[6].Pad + 4) = uVar3;
    uVar3 = *(undefined8 *)((pGVar9->VertexDescriptor).AllocatorInstance.InlineData[8].Pad + 4);
    *(undefined8 *)((pGVar11->VertexDescriptor).AllocatorInstance.InlineData[7].Pad + 4) =
         *(undefined8 *)((pGVar9->VertexDescriptor).AllocatorInstance.InlineData[7].Pad + 4);
    *(undefined8 *)((pGVar11->VertexDescriptor).AllocatorInstance.InlineData[8].Pad + 4) = uVar3;
    uVar3 = *(undefined8 *)((pGVar9->VertexDescriptor).AllocatorInstance.InlineData[10].Pad + 4);
    *(undefined8 *)((pGVar11->VertexDescriptor).AllocatorInstance.InlineData[9].Pad + 4) =
         *(undefined8 *)((pGVar9->VertexDescriptor).AllocatorInstance.InlineData[9].Pad + 4);
    *(undefined8 *)((pGVar11->VertexDescriptor).AllocatorInstance.InlineData[10].Pad + 4) = uVar3;
  }
  else if (DVar1 == RayTracing) {
    uVar3 = *(undefined8 *)((param_1->RayTracingDesc).ShaderHash.Hash + 8);
    *(undefined8 *)(this->RayTracingDesc).ShaderHash.Hash =
         *(undefined8 *)(param_1->RayTracingDesc).ShaderHash.Hash;
    *(undefined8 *)((this->RayTracingDesc).ShaderHash.Hash + 8) = uVar3;
    *(undefined4 *)((this->RayTracingDesc).ShaderHash.Hash + 0x10) =
         *(undefined4 *)((param_1->RayTracingDesc).ShaderHash.Hash + 0x10);
    (this->RayTracingDesc).DeprecatedMaxPayloadSizeInBytes =
         (param_1->RayTracingDesc).DeprecatedMaxPayloadSizeInBytes;
    (this->RayTracingDesc).Frequency = (param_1->RayTracingDesc).Frequency;
    (this->RayTracingDesc).ShaderBindingLayout.Hash =
         (param_1->RayTracingDesc).ShaderBindingLayout.Hash;
    (this->RayTracingDesc).ShaderBindingLayout.Flags =
         (param_1->RayTracingDesc).ShaderBindingLayout.Flags;
    (this->RayTracingDesc).ShaderBindingLayout.NumUniformBufferEntries =
         (param_1->RayTracingDesc).ShaderBindingLayout.NumUniformBufferEntries;
    TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295>::operator=
              (&(this->RayTracingDesc).ShaderBindingLayout.UniformBufferEntries,
               &(param_1->RayTracingDesc).ShaderBindingLayout.UniformBufferEntries);
  }
  else {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                       ,0x68e,L"");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pFVar8 = (FPipelineCacheFileFormatPSO *)(*pcVar2)();
      return pFVar8;
    }
  }
  return this;
}

// FPipelineCacheFileFormatPSO @ 145c45a40

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FPipelineCacheFileFormatPSO * __thiscall
FPipelineCacheFileFormatPSO::FPipelineCacheFileFormatPSO(FPipelineCacheFileFormatPSO *this)

{
  ComputeDescriptor *pCVar1;
  
  (this->ComputeDesc).ComputeShader.Hash[0] = '\0';
  (this->ComputeDesc).ComputeShader.Hash[1] = '\0';
  (this->ComputeDesc).ComputeShader.Hash[2] = '\0';
  (this->ComputeDesc).ComputeShader.Hash[3] = '\0';
  (this->ComputeDesc).ComputeShader.Hash[4] = '\0';
  (this->ComputeDesc).ComputeShader.Hash[5] = '\0';
  (this->ComputeDesc).ComputeShader.Hash[6] = '\0';
  (this->ComputeDesc).ComputeShader.Hash[7] = '\0';
  pCVar1 = &this->ComputeDesc;
  (pCVar1->ComputeShader).Hash[8] = '\0';
  (pCVar1->ComputeShader).Hash[9] = '\0';
  (pCVar1->ComputeShader).Hash[10] = '\0';
  (pCVar1->ComputeShader).Hash[0xb] = '\0';
  (pCVar1->ComputeShader).Hash[0xc] = '\0';
  (pCVar1->ComputeShader).Hash[0xd] = '\0';
  (pCVar1->ComputeShader).Hash[0xe] = '\0';
  (pCVar1->ComputeShader).Hash[0xf] = '\0';
  pCVar1 = &this->ComputeDesc;
  (pCVar1->ComputeShader).Hash[0x10] = '\0';
  (pCVar1->ComputeShader).Hash[0x11] = '\0';
  (pCVar1->ComputeShader).Hash[0x12] = '\0';
  (pCVar1->ComputeShader).Hash[0x13] = '\0';
  GraphicsDescriptor::GraphicsDescriptor(&this->GraphicsDesc);
  FPipelineFileCacheRayTracingDesc::FPipelineFileCacheRayTracingDesc(&this->RayTracingDesc);
  return this;
}

// GraphicsDescriptor @ 145c46990

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

GraphicsDescriptor * __thiscall
FPipelineCacheFileFormatPSO::GraphicsDescriptor::GraphicsDescriptor(GraphicsDescriptor *this)

{
  FBlendStateInitializerRHI *pFVar1;
  
  (this->VertexShader).Hash[0] = '\0';
  (this->VertexShader).Hash[1] = '\0';
  (this->VertexShader).Hash[2] = '\0';
  (this->VertexShader).Hash[3] = '\0';
  (this->VertexShader).Hash[4] = '\0';
  (this->VertexShader).Hash[5] = '\0';
  (this->VertexShader).Hash[6] = '\0';
  (this->VertexShader).Hash[7] = '\0';
  (this->VertexShader).Hash[8] = '\0';
  (this->VertexShader).Hash[9] = '\0';
  (this->VertexShader).Hash[10] = '\0';
  (this->VertexShader).Hash[0xb] = '\0';
  (this->VertexShader).Hash[0xc] = '\0';
  (this->VertexShader).Hash[0xd] = '\0';
  (this->VertexShader).Hash[0xe] = '\0';
  (this->VertexShader).Hash[0xf] = '\0';
  (this->VertexShader).Hash[0x10] = '\0';
  (this->VertexShader).Hash[0x11] = '\0';
  (this->VertexShader).Hash[0x12] = '\0';
  (this->VertexShader).Hash[0x13] = '\0';
  (this->FragmentShader).Hash[0] = '\0';
  (this->FragmentShader).Hash[1] = '\0';
  (this->FragmentShader).Hash[2] = '\0';
  (this->FragmentShader).Hash[3] = '\0';
  (this->FragmentShader).Hash[4] = '\0';
  (this->FragmentShader).Hash[5] = '\0';
  (this->FragmentShader).Hash[6] = '\0';
  (this->FragmentShader).Hash[7] = '\0';
  (this->FragmentShader).Hash[8] = '\0';
  (this->FragmentShader).Hash[9] = '\0';
  (this->FragmentShader).Hash[10] = '\0';
  (this->FragmentShader).Hash[0xb] = '\0';
  (this->FragmentShader).Hash[0xc] = '\0';
  (this->FragmentShader).Hash[0xd] = '\0';
  (this->FragmentShader).Hash[0xe] = '\0';
  (this->FragmentShader).Hash[0xf] = '\0';
  (this->FragmentShader).Hash[0x10] = '\0';
  (this->FragmentShader).Hash[0x11] = '\0';
  (this->FragmentShader).Hash[0x12] = '\0';
  (this->FragmentShader).Hash[0x13] = '\0';
  (this->GeometryShader).Hash[0] = '\0';
  (this->GeometryShader).Hash[1] = '\0';
  (this->GeometryShader).Hash[2] = '\0';
  (this->GeometryShader).Hash[3] = '\0';
  (this->GeometryShader).Hash[4] = '\0';
  (this->GeometryShader).Hash[5] = '\0';
  (this->GeometryShader).Hash[6] = '\0';
  (this->GeometryShader).Hash[7] = '\0';
  (this->GeometryShader).Hash[8] = '\0';
  (this->GeometryShader).Hash[9] = '\0';
  (this->GeometryShader).Hash[10] = '\0';
  (this->GeometryShader).Hash[0xb] = '\0';
  (this->GeometryShader).Hash[0xc] = '\0';
  (this->GeometryShader).Hash[0xd] = '\0';
  (this->GeometryShader).Hash[0xe] = '\0';
  (this->GeometryShader).Hash[0xf] = '\0';
  (this->GeometryShader).Hash[0x10] = '\0';
  (this->GeometryShader).Hash[0x11] = '\0';
  (this->GeometryShader).Hash[0x12] = '\0';
  (this->GeometryShader).Hash[0x13] = '\0';
  (this->MeshShader).Hash[0] = '\0';
  (this->MeshShader).Hash[1] = '\0';
  (this->MeshShader).Hash[2] = '\0';
  (this->MeshShader).Hash[3] = '\0';
  (this->MeshShader).Hash[4] = '\0';
  (this->MeshShader).Hash[5] = '\0';
  (this->MeshShader).Hash[6] = '\0';
  (this->MeshShader).Hash[7] = '\0';
  (this->MeshShader).Hash[8] = '\0';
  (this->MeshShader).Hash[9] = '\0';
  (this->MeshShader).Hash[10] = '\0';
  (this->MeshShader).Hash[0xb] = '\0';
  (this->MeshShader).Hash[0xc] = '\0';
  (this->MeshShader).Hash[0xd] = '\0';
  (this->MeshShader).Hash[0xe] = '\0';
  (this->MeshShader).Hash[0xf] = '\0';
  (this->MeshShader).Hash[0x10] = '\0';
  (this->MeshShader).Hash[0x11] = '\0';
  (this->MeshShader).Hash[0x12] = '\0';
  (this->MeshShader).Hash[0x13] = '\0';
  (this->AmplificationShader).Hash[0] = '\0';
  (this->AmplificationShader).Hash[1] = '\0';
  (this->AmplificationShader).Hash[2] = '\0';
  (this->AmplificationShader).Hash[3] = '\0';
  (this->AmplificationShader).Hash[4] = '\0';
  (this->AmplificationShader).Hash[5] = '\0';
  (this->AmplificationShader).Hash[6] = '\0';
  (this->AmplificationShader).Hash[7] = '\0';
  (this->AmplificationShader).Hash[8] = '\0';
  (this->AmplificationShader).Hash[9] = '\0';
  (this->AmplificationShader).Hash[10] = '\0';
  (this->AmplificationShader).Hash[0xb] = '\0';
  (this->AmplificationShader).Hash[0xc] = '\0';
  (this->AmplificationShader).Hash[0xd] = '\0';
  (this->AmplificationShader).Hash[0xe] = '\0';
  (this->AmplificationShader).Hash[0xf] = '\0';
  (this->AmplificationShader).Hash[0x10] = '\0';
  (this->AmplificationShader).Hash[0x11] = '\0';
  (this->AmplificationShader).Hash[0x12] = '\0';
  (this->AmplificationShader).Hash[0x13] = '\0';
  (this->VertexDescriptor).ArrayNum = 0;
  (this->VertexDescriptor).ArrayMax = 0x11;
  (this->BlendState).RenderTargets.Elements[0].ColorBlendOp = '\0';
  (this->BlendState).RenderTargets.Elements[0].ColorSrcBlend = '\x01';
  (this->BlendState).RenderTargets.Elements[0].ColorDestBlend = '\0';
  (this->BlendState).RenderTargets.Elements[0].AlphaBlendOp = '\0';
  *(undefined4 *)&(this->BlendState).RenderTargets.Elements[0].AlphaSrcBlend = 0xf0001;
  pFVar1 = &this->BlendState;
  (pFVar1->RenderTargets).Elements[1].ColorSrcBlend = '\x01';
  (pFVar1->RenderTargets).Elements[1].ColorDestBlend = '\0';
  (pFVar1->RenderTargets).Elements[1].AlphaBlendOp = '\0';
  (pFVar1->RenderTargets).Elements[1].AlphaSrcBlend = '\x01';
  *(undefined4 *)&(this->BlendState).RenderTargets.Elements[1].AlphaDestBlend = 0x1000f00;
  pFVar1 = &this->BlendState;
  (pFVar1->RenderTargets).Elements[2].ColorDestBlend = '\0';
  (pFVar1->RenderTargets).Elements[2].AlphaBlendOp = '\0';
  (pFVar1->RenderTargets).Elements[2].AlphaSrcBlend = '\x01';
  (pFVar1->RenderTargets).Elements[2].AlphaDestBlend = '\0';
  *(undefined4 *)&(this->BlendState).RenderTargets.Elements[2].ColorWriteMask = 0x1000f;
  pFVar1 = &this->BlendState;
  (pFVar1->RenderTargets).Elements[3].AlphaBlendOp = '\0';
  (pFVar1->RenderTargets).Elements[3].AlphaSrcBlend = '\x01';
  (pFVar1->RenderTargets).Elements[3].AlphaDestBlend = '\0';
  (pFVar1->RenderTargets).Elements[3].ColorWriteMask = '\x0f';
  pFVar1 = &this->BlendState;
  (pFVar1->RenderTargets).Elements[4].ColorBlendOp = '\0';
  (pFVar1->RenderTargets).Elements[4].ColorSrcBlend = '\x01';
  (pFVar1->RenderTargets).Elements[4].ColorDestBlend = '\0';
  (pFVar1->RenderTargets).Elements[4].AlphaBlendOp = '\0';
  *(undefined4 *)&(this->BlendState).RenderTargets.Elements[4].AlphaSrcBlend = 0xf0001;
  pFVar1 = &this->BlendState;
  (pFVar1->RenderTargets).Elements[5].ColorSrcBlend = '\x01';
  (pFVar1->RenderTargets).Elements[5].ColorDestBlend = '\0';
  (pFVar1->RenderTargets).Elements[5].AlphaBlendOp = '\0';
  (pFVar1->RenderTargets).Elements[5].AlphaSrcBlend = '\x01';
  *(undefined4 *)&(this->BlendState).RenderTargets.Elements[5].AlphaDestBlend = 0x1000f00;
  pFVar1 = &this->BlendState;
  (pFVar1->RenderTargets).Elements[6].ColorDestBlend = '\0';
  (pFVar1->RenderTargets).Elements[6].AlphaBlendOp = '\0';
  (pFVar1->RenderTargets).Elements[6].AlphaSrcBlend = '\x01';
  (pFVar1->RenderTargets).Elements[6].AlphaDestBlend = '\0';
  *(undefined4 *)&(this->BlendState).RenderTargets.Elements[6].ColorWriteMask = 0x1000f;
  pFVar1 = &this->BlendState;
  (pFVar1->RenderTargets).Elements[7].AlphaBlendOp = '\0';
  (pFVar1->RenderTargets).Elements[7].AlphaSrcBlend = '\x01';
  (pFVar1->RenderTargets).Elements[7].AlphaDestBlend = '\0';
  (pFVar1->RenderTargets).Elements[7].ColorWriteMask = '\x0f';
  (this->RasterizerState).DepthBias = 0.0;
  (this->RasterizerState).SlopeScaleDepthBias = 0.0;
  (this->RasterizerState).FillMode = '\0';
  (this->RasterizerState).CullMode = '\0';
  (this->RasterizerState).DepthClipMode = DepthClip;
  (this->RasterizerState).bAllowMSAA = false;
  (this->DepthStencilState).bEnableDepthWrite = true;
  (this->DepthStencilState).DepthTest = '\x01';
  (this->DepthStencilState).bEnableFrontFaceStencil = false;
  (this->DepthStencilState).FrontFaceStencilTest = '\a';
  (this->DepthStencilState).FrontFaceStencilFailStencilOp = '\0';
  (this->DepthStencilState).FrontFaceDepthFailStencilOp = '\0';
  (this->DepthStencilState).FrontFacePassStencilOp = '\0';
  (this->DepthStencilState).bEnableBackFaceStencil = false;
  (this->DepthStencilState).BackFaceStencilTest = '\a';
  (this->DepthStencilState).BackFaceStencilFailStencilOp = '\0';
  (this->DepthStencilState).BackFaceDepthFailStencilOp = '\0';
  (this->DepthStencilState).BackFacePassStencilOp = '\0';
  (this->DepthStencilState).StencilReadMask = 0xff;
  (this->DepthStencilState).StencilWriteMask = 0xff;
  return this;
}

// ~FPipelineCacheFileFormatPSO @ 145c47ee0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FPipelineCacheFileFormatPSO::~FPipelineCacheFileFormatPSO(FPipelineCacheFileFormatPSO *this)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FPipelineCacheFileFormatPSO *pFVar3;
  
  pFVar3 = this + 1;
  lVar2 = 8;
  do {
    pFVar1 = pFVar3[-1].RayTracingDesc.ShaderBindingLayout.UniformBufferEntries.Elements[7].
             LayoutName.Data.AllocatorInstance.Data;
    pFVar3 = (FPipelineCacheFileFormatPSO *)
             (pFVar3[-1].RayTracingDesc.ShaderBindingLayout.UniformBufferEntries.Elements + 7);
    lVar2 = lVar2 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar2 != 0);
  return;
}

// operator= @ 145c489d0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FPipelineCacheFileFormatPSO * __thiscall
FPipelineCacheFileFormatPSO::operator=
          (FPipelineCacheFileFormatPSO *this,FPipelineCacheFileFormatPSO *param_1)

{
  DescriptorType DVar1;
  code *pcVar2;
  undefined8 uVar3;
  GraphicsDescriptor *pGVar4;
  GraphicsDescriptor *pGVar5;
  bool bVar6;
  FPipelineCacheFileFormatPSO *pFVar7;
  GraphicsDescriptor *pGVar8;
  GraphicsDescriptor *pGVar9;
  longlong lVar10;
  
  if (this != param_1) {
    DVar1 = param_1->Type;
    this->Type = DVar1;
    if (DVar1 == Compute) {
      uVar3 = *(undefined8 *)((param_1->ComputeDesc).ComputeShader.Hash + 8);
      *(undefined8 *)(this->ComputeDesc).ComputeShader.Hash =
           *(undefined8 *)(param_1->ComputeDesc).ComputeShader.Hash;
      *(undefined8 *)((this->ComputeDesc).ComputeShader.Hash + 8) = uVar3;
      *(undefined4 *)((this->ComputeDesc).ComputeShader.Hash + 0x10) =
           *(undefined4 *)((param_1->ComputeDesc).ComputeShader.Hash + 0x10);
    }
    else {
      if (DVar1 == Graphics) {
        lVar10 = 3;
        pGVar4 = &this->GraphicsDesc;
        pGVar5 = &param_1->GraphicsDesc;
        do {
          pGVar9 = pGVar5;
          pGVar8 = pGVar4;
          pGVar4 = (GraphicsDescriptor *)
                   ((pGVar8->VertexDescriptor).AllocatorInstance.InlineData[3].Pad + 4);
          uVar3 = *(undefined8 *)((pGVar9->VertexShader).Hash + 8);
          pGVar5 = (GraphicsDescriptor *)
                   ((pGVar9->VertexDescriptor).AllocatorInstance.InlineData[3].Pad + 4);
          *(undefined8 *)(pGVar8->VertexShader).Hash = *(undefined8 *)(pGVar9->VertexShader).Hash;
          *(undefined8 *)((pGVar8->VertexShader).Hash + 8) = uVar3;
          uVar3 = *(undefined8 *)((pGVar9->FragmentShader).Hash + 4);
          *(undefined8 *)((pGVar8->VertexShader).Hash + 0x10) =
               *(undefined8 *)((pGVar9->VertexShader).Hash + 0x10);
          *(undefined8 *)((pGVar8->FragmentShader).Hash + 4) = uVar3;
          uVar3 = *(undefined8 *)(pGVar9->GeometryShader).Hash;
          *(undefined8 *)((pGVar8->FragmentShader).Hash + 0xc) =
               *(undefined8 *)((pGVar9->FragmentShader).Hash + 0xc);
          *(undefined8 *)(pGVar8->GeometryShader).Hash = uVar3;
          uVar3 = *(undefined8 *)((pGVar9->GeometryShader).Hash + 0x10);
          *(undefined8 *)((pGVar8->GeometryShader).Hash + 8) =
               *(undefined8 *)((pGVar9->GeometryShader).Hash + 8);
          *(undefined8 *)((pGVar8->GeometryShader).Hash + 0x10) = uVar3;
          uVar3 = *(undefined8 *)((pGVar9->MeshShader).Hash + 0xc);
          *(undefined8 *)((pGVar8->MeshShader).Hash + 4) =
               *(undefined8 *)((pGVar9->MeshShader).Hash + 4);
          *(undefined8 *)((pGVar8->MeshShader).Hash + 0xc) = uVar3;
          uVar3 = *(undefined8 *)((pGVar9->AmplificationShader).Hash + 8);
          *(undefined8 *)(pGVar8->AmplificationShader).Hash =
               *(undefined8 *)(pGVar9->AmplificationShader).Hash;
          *(undefined8 *)((pGVar8->AmplificationShader).Hash + 8) = uVar3;
          uVar3 = *(undefined8 *)
                   ((pGVar9->VertexDescriptor).AllocatorInstance.InlineData[0].Pad + 4);
          *(undefined8 *)((pGVar8->AmplificationShader).Hash + 0x10) =
               *(undefined8 *)((pGVar9->AmplificationShader).Hash + 0x10);
          *(undefined8 *)((pGVar8->VertexDescriptor).AllocatorInstance.InlineData[0].Pad + 4) =
               uVar3;
          uVar3 = *(undefined8 *)
                   ((pGVar9->VertexDescriptor).AllocatorInstance.InlineData[2].Pad + 4);
          *(undefined8 *)((pGVar8->VertexDescriptor).AllocatorInstance.InlineData[1].Pad + 4) =
               *(undefined8 *)((pGVar9->VertexDescriptor).AllocatorInstance.InlineData[1].Pad + 4);
          *(undefined8 *)((pGVar8->VertexDescriptor).AllocatorInstance.InlineData[2].Pad + 4) =
               uVar3;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
        uVar3 = *(undefined8 *)((pGVar9->VertexDescriptor).AllocatorInstance.InlineData[4].Pad + 4);
        *(undefined8 *)(pGVar4->VertexShader).Hash = *(undefined8 *)(pGVar5->VertexShader).Hash;
        *(undefined8 *)((pGVar8->VertexDescriptor).AllocatorInstance.InlineData[4].Pad + 4) = uVar3;
        uVar3 = *(undefined8 *)((pGVar9->VertexDescriptor).AllocatorInstance.InlineData[6].Pad + 4);
        *(undefined8 *)((pGVar8->VertexDescriptor).AllocatorInstance.InlineData[5].Pad + 4) =
             *(undefined8 *)((pGVar9->VertexDescriptor).AllocatorInstance.InlineData[5].Pad + 4);
        *(undefined8 *)((pGVar8->VertexDescriptor).AllocatorInstance.InlineData[6].Pad + 4) = uVar3;
        uVar3 = *(undefined8 *)((pGVar9->VertexDescriptor).AllocatorInstance.InlineData[8].Pad + 4);
        *(undefined8 *)((pGVar8->VertexDescriptor).AllocatorInstance.InlineData[7].Pad + 4) =
             *(undefined8 *)((pGVar9->VertexDescriptor).AllocatorInstance.InlineData[7].Pad + 4);
        *(undefined8 *)((pGVar8->VertexDescriptor).AllocatorInstance.InlineData[8].Pad + 4) = uVar3;
        uVar3 = *(undefined8 *)((pGVar9->VertexDescriptor).AllocatorInstance.InlineData[10].Pad + 4)
        ;
        *(undefined8 *)((pGVar8->VertexDescriptor).AllocatorInstance.InlineData[9].Pad + 4) =
             *(undefined8 *)((pGVar9->VertexDescriptor).AllocatorInstance.InlineData[9].Pad + 4);
        *(undefined8 *)((pGVar8->VertexDescriptor).AllocatorInstance.InlineData[10].Pad + 4) = uVar3
        ;
        return this;
      }
      if (DVar1 == RayTracing) {
        FPipelineFileCacheRayTracingDesc::operator=(&this->RayTracingDesc,&param_1->RayTracingDesc);
        return this;
      }
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                         ,0x6b2,L"");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        pFVar7 = (FPipelineCacheFileFormatPSO *)(*pcVar2)();
        return pFVar7;
      }
    }
  }
  return this;
}

// operator== @ 145c4ad50

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

bool __thiscall
FPipelineCacheFileFormatPSO::operator==
          (FPipelineCacheFileFormatPSO *this,FPipelineCacheFileFormatPSO *param_1)

{
  int iVar1;
  short sVar2;
  short sVar3;
  DescriptorType DVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  code *pcVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  bool bVar18;
  
  if (this == param_1) {
    return true;
  }
  DVar4 = this->Type;
  bVar18 = DVar4 == param_1->Type;
  if (bVar18) {
    if (DVar4 == Compute) {
      lVar16 = *(longlong *)(this->ComputeDesc).ComputeShader.Hash -
               *(longlong *)(param_1->ComputeDesc).ComputeShader.Hash;
      if ((lVar16 == 0) &&
         (lVar16 = *(longlong *)((this->ComputeDesc).ComputeShader.Hash + 8) -
                   *(longlong *)((param_1->ComputeDesc).ComputeShader.Hash + 8), lVar16 == 0)) {
        lVar16 = (ulonglong)*(uint *)((this->ComputeDesc).ComputeShader.Hash + 0x10) -
                 (ulonglong)*(uint *)((param_1->ComputeDesc).ComputeShader.Hash + 0x10);
      }
      return lVar16 == 0;
    }
    if (DVar4 == Graphics) {
      iVar14 = (param_1->GraphicsDesc).VertexDescriptor.ArrayNum;
      iVar5 = (this->GraphicsDesc).VertexDescriptor.ArrayNum;
      bVar18 = iVar5 == iVar14;
      uVar17 = 0;
      if (iVar5 < iVar14) {
        iVar14 = iVar5;
      }
      if (iVar14 != 0) {
        do {
          uVar13 = 0;
          if ((int)uVar17 < (param_1->GraphicsDesc).VertexDescriptor.ArrayNum) {
            uVar13 = ~uVar17 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar10 = (code *)swi(3);
            uVar12 = (*pcVar10)();
            return (bool)uVar12;
          }
          uVar13 = 0;
          if ((int)uVar17 < (this->GraphicsDesc).VertexDescriptor.ArrayNum) {
            uVar13 = ~uVar17 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar10 = (code *)swi(3);
            uVar12 = (*pcVar10)();
            return (bool)uVar12;
          }
          lVar16 = (longlong)(int)uVar17;
          lVar15 = (longlong)(int)uVar17;
          uVar13 = (param_1->GraphicsDesc).VertexDescriptor.ArrayNum;
          uVar17 = uVar17 + 1;
          bVar18 = (bool)(bVar18 & *(longlong *)
                                    (this->GraphicsDesc).VertexDescriptor.AllocatorInstance.
                                    InlineData[lVar16].Pad ==
                                   *(longlong *)
                                    (param_1->GraphicsDesc).VertexDescriptor.AllocatorInstance.
                                    InlineData[lVar15].Pad);
          uVar6 = (this->GraphicsDesc).VertexDescriptor.ArrayNum;
          if ((int)uVar6 < (int)uVar13) {
            uVar13 = uVar6;
          }
        } while (uVar17 < uVar13);
      }
      if ((((((((this->GraphicsDesc).PrimitiveType == (param_1->GraphicsDesc).PrimitiveType) &&
              (*(longlong *)(this->GraphicsDesc).VertexShader.Hash ==
               *(longlong *)(param_1->GraphicsDesc).VertexShader.Hash)) &&
             (*(longlong *)((this->GraphicsDesc).VertexShader.Hash + 8) ==
              *(longlong *)((param_1->GraphicsDesc).VertexShader.Hash + 8))) &&
            ((*(int *)((this->GraphicsDesc).VertexShader.Hash + 0x10) ==
              *(int *)((param_1->GraphicsDesc).VertexShader.Hash + 0x10) &&
             (*(longlong *)(this->GraphicsDesc).FragmentShader.Hash ==
              *(longlong *)(param_1->GraphicsDesc).FragmentShader.Hash)))) &&
           ((*(longlong *)((this->GraphicsDesc).FragmentShader.Hash + 8) ==
             *(longlong *)((param_1->GraphicsDesc).FragmentShader.Hash + 8) &&
            ((*(int *)((this->GraphicsDesc).FragmentShader.Hash + 0x10) ==
              *(int *)((param_1->GraphicsDesc).FragmentShader.Hash + 0x10) &&
             (*(longlong *)(this->GraphicsDesc).GeometryShader.Hash ==
              *(longlong *)(param_1->GraphicsDesc).GeometryShader.Hash)))))) &&
          ((*(longlong *)((this->GraphicsDesc).GeometryShader.Hash + 8) ==
            *(longlong *)((param_1->GraphicsDesc).GeometryShader.Hash + 8) &&
           ((((((*(int *)((this->GraphicsDesc).GeometryShader.Hash + 0x10) ==
                 *(int *)((param_1->GraphicsDesc).GeometryShader.Hash + 0x10) &&
                (*(longlong *)(this->GraphicsDesc).MeshShader.Hash ==
                 *(longlong *)(param_1->GraphicsDesc).MeshShader.Hash)) &&
               (*(longlong *)((this->GraphicsDesc).MeshShader.Hash + 8) ==
                *(longlong *)((param_1->GraphicsDesc).MeshShader.Hash + 8))) &&
              (((*(int *)((this->GraphicsDesc).MeshShader.Hash + 0x10) ==
                 *(int *)((param_1->GraphicsDesc).MeshShader.Hash + 0x10) &&
                (*(longlong *)(this->GraphicsDesc).AmplificationShader.Hash ==
                 *(longlong *)(param_1->GraphicsDesc).AmplificationShader.Hash)) &&
               ((*(longlong *)((this->GraphicsDesc).AmplificationShader.Hash + 8) ==
                 *(longlong *)((param_1->GraphicsDesc).AmplificationShader.Hash + 8) &&
                ((*(int *)((this->GraphicsDesc).AmplificationShader.Hash + 0x10) ==
                  *(int *)((param_1->GraphicsDesc).AmplificationShader.Hash + 0x10) &&
                 ((this->GraphicsDesc).RenderTargetsActive ==
                  (param_1->GraphicsDesc).RenderTargetsActive)))))))) &&
             ((this->GraphicsDesc).MSAASamples == (param_1->GraphicsDesc).MSAASamples)) &&
            ((((this->GraphicsDesc).DepthStencilFormat == (param_1->GraphicsDesc).DepthStencilFormat
              && ((this->GraphicsDesc).DepthStencilFlags ==
                  (param_1->GraphicsDesc).DepthStencilFlags)) &&
             ((this->GraphicsDesc).DepthLoad == (param_1->GraphicsDesc).DepthLoad)))))))) &&
         (((((this->GraphicsDesc).DepthStore == (param_1->GraphicsDesc).DepthStore &&
            ((this->GraphicsDesc).StencilLoad == (param_1->GraphicsDesc).StencilLoad)) &&
           ((((this->GraphicsDesc).StencilStore == (param_1->GraphicsDesc).StencilStore &&
             (((this->GraphicsDesc).SubpassHint == (param_1->GraphicsDesc).SubpassHint &&
              ((this->GraphicsDesc).SubpassIndex == (param_1->GraphicsDesc).SubpassIndex)))) &&
            ((this->GraphicsDesc).MultiViewCount == (param_1->GraphicsDesc).MultiViewCount)))) &&
          (((((((this->GraphicsDesc).bHasFragmentDensityAttachment ==
                (param_1->GraphicsDesc).bHasFragmentDensityAttachment &&
               ((this->GraphicsDesc).bAllowVariableRateShading ==
                (param_1->GraphicsDesc).bAllowVariableRateShading)) &&
              ((this->GraphicsDesc).ShadingRate == (param_1->GraphicsDesc).ShadingRate)) &&
             (((this->GraphicsDesc).bDepthBounds == (param_1->GraphicsDesc).bDepthBounds &&
              (iVar14 = memcmp(&(this->GraphicsDesc).BlendState,&(param_1->GraphicsDesc).BlendState,
                               0x3a), iVar14 == 0)))) &&
            (lVar16._0_4_ = (this->GraphicsDesc).RasterizerState.DepthBias,
            lVar16._4_4_ = (this->GraphicsDesc).RasterizerState.SlopeScaleDepthBias,
            lVar15._0_4_ = (param_1->GraphicsDesc).RasterizerState.DepthBias,
            lVar15._4_4_ = (param_1->GraphicsDesc).RasterizerState.SlopeScaleDepthBias,
            lVar16 == lVar15)) &&
           (((iVar5._0_1_ = (this->GraphicsDesc).RasterizerState.FillMode,
             iVar5._1_1_ = (this->GraphicsDesc).RasterizerState.CullMode,
             iVar5._2_1_ = (this->GraphicsDesc).RasterizerState.DepthClipMode,
             iVar5._3_1_ = (this->GraphicsDesc).RasterizerState.bAllowMSAA,
             iVar14._0_1_ = (param_1->GraphicsDesc).RasterizerState.FillMode,
             iVar14._1_1_ = (param_1->GraphicsDesc).RasterizerState.CullMode,
             iVar14._2_1_ = (param_1->GraphicsDesc).RasterizerState.DepthClipMode,
             iVar14._3_1_ = (param_1->GraphicsDesc).RasterizerState.bAllowMSAA, iVar5 == iVar14 &&
             (lVar8._0_1_ = (this->GraphicsDesc).DepthStencilState.bEnableDepthWrite,
             lVar8._1_1_ = (this->GraphicsDesc).DepthStencilState.DepthTest,
             lVar8._2_1_ = (this->GraphicsDesc).DepthStencilState.bEnableFrontFaceStencil,
             lVar8._3_1_ = (this->GraphicsDesc).DepthStencilState.FrontFaceStencilTest,
             lVar8._4_1_ = (this->GraphicsDesc).DepthStencilState.FrontFaceStencilFailStencilOp,
             lVar8._5_1_ = (this->GraphicsDesc).DepthStencilState.FrontFaceDepthFailStencilOp,
             lVar8._6_1_ = (this->GraphicsDesc).DepthStencilState.FrontFacePassStencilOp,
             lVar8._7_1_ = (this->GraphicsDesc).DepthStencilState.bEnableBackFaceStencil,
             lVar9._0_1_ = (param_1->GraphicsDesc).DepthStencilState.bEnableDepthWrite,
             lVar9._1_1_ = (param_1->GraphicsDesc).DepthStencilState.DepthTest,
             lVar9._2_1_ = (param_1->GraphicsDesc).DepthStencilState.bEnableFrontFaceStencil,
             lVar9._3_1_ = (param_1->GraphicsDesc).DepthStencilState.FrontFaceStencilTest,
             lVar9._4_1_ = (param_1->GraphicsDesc).DepthStencilState.FrontFaceStencilFailStencilOp,
             lVar9._5_1_ = (param_1->GraphicsDesc).DepthStencilState.FrontFaceDepthFailStencilOp,
             lVar9._6_1_ = (param_1->GraphicsDesc).DepthStencilState.FrontFacePassStencilOp,
             lVar9._7_1_ = (param_1->GraphicsDesc).DepthStencilState.bEnableBackFaceStencil,
             lVar8 == lVar9)) &&
            ((iVar7._0_1_ = (this->GraphicsDesc).DepthStencilState.BackFaceStencilTest,
             iVar7._1_1_ = (this->GraphicsDesc).DepthStencilState.BackFaceStencilFailStencilOp,
             iVar7._2_1_ = (this->GraphicsDesc).DepthStencilState.BackFaceDepthFailStencilOp,
             iVar7._3_1_ = (this->GraphicsDesc).DepthStencilState.BackFacePassStencilOp,
             iVar1._0_1_ = (param_1->GraphicsDesc).DepthStencilState.BackFaceStencilTest,
             iVar1._1_1_ = (param_1->GraphicsDesc).DepthStencilState.BackFaceStencilFailStencilOp,
             iVar1._2_1_ = (param_1->GraphicsDesc).DepthStencilState.BackFaceDepthFailStencilOp,
             iVar1._3_1_ = (param_1->GraphicsDesc).DepthStencilState.BackFacePassStencilOp,
             iVar7 == iVar1 &&
             (((sVar2._0_1_ = (this->GraphicsDesc).DepthStencilState.StencilReadMask,
               sVar2._1_1_ = (this->GraphicsDesc).DepthStencilState.StencilWriteMask,
               sVar3._0_1_ = (param_1->GraphicsDesc).DepthStencilState.StencilReadMask,
               sVar3._1_1_ = (param_1->GraphicsDesc).DepthStencilState.StencilWriteMask,
               sVar2 == sVar3 &&
               (*(longlong *)(this->GraphicsDesc).RenderTargetFormats ==
                *(longlong *)(param_1->GraphicsDesc).RenderTargetFormats)) &&
              (iVar14 = memcmp((this->GraphicsDesc).RenderTargetFlags,
                               (param_1->GraphicsDesc).RenderTargetFlags,0x40), iVar14 == 0)))))))))
          ))) {
        return bVar18;
      }
      return false;
    }
    if (DVar4 == RayTracing) {
      if ((((*(longlong *)(this->RayTracingDesc).ShaderHash.Hash !=
             *(longlong *)(param_1->RayTracingDesc).ShaderHash.Hash) ||
           (*(longlong *)((this->RayTracingDesc).ShaderHash.Hash + 8) !=
            *(longlong *)((param_1->RayTracingDesc).ShaderHash.Hash + 8))) ||
          ((*(int *)((this->RayTracingDesc).ShaderHash.Hash + 0x10) !=
            *(int *)((param_1->RayTracingDesc).ShaderHash.Hash + 0x10) ||
           (((this->RayTracingDesc).Frequency != (param_1->RayTracingDesc).Frequency ||
            ((this->RayTracingDesc).ShaderBindingLayout.Hash !=
             (param_1->RayTracingDesc).ShaderBindingLayout.Hash)))))) ||
         (((this->RayTracingDesc).ShaderBindingLayout.Flags !=
           (param_1->RayTracingDesc).ShaderBindingLayout.Flags ||
          (((this->RayTracingDesc).ShaderBindingLayout.NumUniformBufferEntries !=
            (param_1->RayTracingDesc).ShaderBindingLayout.NumUniformBufferEntries ||
           (bVar11 = TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295>::operator==
                               (&(this->RayTracingDesc).ShaderBindingLayout.UniformBufferEntries,
                                &(param_1->RayTracingDesc).ShaderBindingLayout.UniformBufferEntries)
           , !bVar11)))))) {
        return false;
      }
    }
    else {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                          ,0x669,L"");
      if (bVar11) {
        pcVar10 = (code *)swi(3);
        uVar12 = (*pcVar10)();
        return (bool)uVar12;
      }
    }
  }
  return bVar18;
}

// operator() @ 145c4b9a0

void __thiscall
`FPipelineCacheFileFormatPSO::GraphicsDescriptor::ShadersFromString'::__l2::<lambda_1>::operator()
          (void *this,TStringView<wchar_t> *param_1)

{
  undefined8 *puVar1;
  ForElementType<TStringView<wchar_t>_> FVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  ForElementType<TStringView<wchar_t>_> FVar7;
  
  FVar2 = *(ForElementType<TStringView<wchar_t>_> *)this;
  FVar7 = *(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0x50);
  if (*(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0x50) ==
      (ForElementType<TStringView<wchar_t>_>)0x0) {
    FVar7 = FVar2;
  }
  if (((ulonglong)FVar7 <= param_1) &&
     (param_1 < (TStringView<wchar_t> *)
                ((longlong)*(int *)((longlong)FVar2 + 0x5c) * 0x10 + (longlong)FVar7))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = *(int *)((longlong)FVar2 + 0x58);
  if (iVar6 == *(int *)((longlong)FVar2 + 0x5c)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>_>
                      (0x810,(ForElementType<TStringView<wchar_t>_> *)FVar2,
                       (int *)((longlong)FVar2 + 0x5c));
  }
  *(int *)((longlong)FVar2 + 0x58) = iVar6 + 1;
  uVar4 = *(undefined8 *)&param_1->Size;
  FVar7 = *(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0x50);
  if (*(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0x50) ==
      (ForElementType<TStringView<wchar_t>_>)0x0) {
    FVar7 = FVar2;
  }
  puVar1 = (undefined8 *)((longlong)FVar7 + (longlong)iVar6 * 0x10);
  *puVar1 = param_1->DataPtr;
  puVar1[1] = uVar4;
  return;
}

// operator() @ 145c4ba70

void __thiscall
`FPipelineCacheFileFormatPSO::GraphicsDescriptor::StateFromString'::__l2::<lambda_1>::operator()
          (void *this,TStringView<wchar_t> *param_1)

{
  undefined8 *puVar1;
  ForElementType<TStringView<wchar_t>_> FVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  ForElementType<TStringView<wchar_t>_> FVar7;
  
  FVar2 = *(ForElementType<TStringView<wchar_t>_> *)this;
  FVar7 = *(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0x430);
  if (*(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0x430) ==
      (ForElementType<TStringView<wchar_t>_>)0x0) {
    FVar7 = FVar2;
  }
  if (((ulonglong)FVar7 <= param_1) &&
     (param_1 < (TStringView<wchar_t> *)
                ((longlong)*(int *)((longlong)FVar2 + 0x43c) * 0x10 + (longlong)FVar7))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar6 = *(int *)((longlong)FVar2 + 0x438);
  if (iVar6 == *(int *)((longlong)FVar2 + 0x43c)) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<67,32,TSizedDefaultAllocator<32>_>::ForElementType<TStringView<wchar_t>_>_>
                      (0x810,(ForElementType<TStringView<wchar_t>_> *)FVar2,
                       (int *)((longlong)FVar2 + 0x43c));
  }
  *(int *)((longlong)FVar2 + 0x438) = iVar6 + 1;
  uVar4 = *(undefined8 *)&param_1->Size;
  FVar7 = *(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0x430);
  if (*(ForElementType<TStringView<wchar_t>_> *)((longlong)FVar2 + 0x430) ==
      (ForElementType<TStringView<wchar_t>_>)0x0) {
    FVar7 = FVar2;
  }
  puVar1 = (undefined8 *)((longlong)FVar7 + (longlong)iVar6 * 0x10);
  *puVar1 = param_1->DataPtr;
  puVar1[1] = uVar4;
  return;
}

// AddShadersToReadableString @ 145c4e050

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
FPipelineCacheFileFormatPSO::GraphicsDescriptor::AddShadersToReadableString
          (GraphicsDescriptor *this,TStringBuilderWithBuffer<wchar_t,1024> *param_1)

{
  TArrayView<unsigned_char_const_,int> local_18;
  
  if (((*(longlong *)(this->VertexShader).Hash != 0) ||
      (*(longlong *)((this->VertexShader).Hash + 8) != 0)) ||
     (*(int *)((this->VertexShader).Hash + 0x10) != 0)) {
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)param_1,L" VS:",4)
    ;
    local_18.ArrayNum = 0x14;
    local_18.DataPtr = (uchar *)this;
    UE::String::BytesToHex(&local_18,(TStringBuilderBase<wchar_t> *)param_1);
  }
  if (((*(longlong *)(this->MeshShader).Hash != 0) ||
      (*(longlong *)((this->MeshShader).Hash + 8) != 0)) ||
     (*(int *)((this->MeshShader).Hash + 0x10) != 0)) {
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)param_1,L" MS:",4)
    ;
    local_18.ArrayNum = 0x14;
    local_18.DataPtr = (this->MeshShader).Hash;
    UE::String::BytesToHex(&local_18,(TStringBuilderBase<wchar_t> *)param_1);
  }
  if (((*(longlong *)(this->GeometryShader).Hash != 0) ||
      (*(longlong *)((this->GeometryShader).Hash + 8) != 0)) ||
     (*(int *)((this->GeometryShader).Hash + 0x10) != 0)) {
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)param_1,L" GS:",4)
    ;
    local_18.ArrayNum = 0x14;
    local_18.DataPtr = (this->GeometryShader).Hash;
    UE::String::BytesToHex(&local_18,(TStringBuilderBase<wchar_t> *)param_1);
  }
  if (((*(longlong *)(this->AmplificationShader).Hash != 0) ||
      (*(longlong *)((this->AmplificationShader).Hash + 8) != 0)) ||
     (*(int *)((this->AmplificationShader).Hash + 0x10) != 0)) {
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)param_1,L" AS:",4)
    ;
    local_18.ArrayNum = 0x14;
    local_18.DataPtr = (this->AmplificationShader).Hash;
    UE::String::BytesToHex(&local_18,(TStringBuilderBase<wchar_t> *)param_1);
  }
  if (((*(longlong *)(this->FragmentShader).Hash != 0) ||
      (*(longlong *)((this->FragmentShader).Hash + 8) != 0)) ||
     (*(int *)((this->FragmentShader).Hash + 0x10) != 0)) {
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)param_1,L" PS:",4)
    ;
    local_18.ArrayNum = 0x14;
    local_18.DataPtr = (this->FragmentShader).Hash;
    UE::String::BytesToHex(&local_18,(TStringBuilderBase<wchar_t> *)param_1);
  }
  return;
}

// AddStateToReadableString @ 145c4e270

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
FPipelineCacheFileFormatPSO::GraphicsDescriptor::AddStateToReadableString
          (GraphicsDescriptor *this,TStringBuilderWithBuffer<wchar_t,1024> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  size_t sVar6;
  uint uVar7;
  wchar_t *pwVar8;
  uint uVar9;
  wchar_t *_Str;
  int iVar10;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)param_1,L" BS:",4);
  pFVar5 = FBlendStateInitializerRHI::ToString(&this->BlendState,&local_48);
  uVar7 = 0;
  iVar1 = (pFVar5->Data).ArrayNum;
  uVar4 = 0;
  uVar9 = iVar1 - 1;
  if (iVar1 == 0) {
    uVar9 = uVar4;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            ((TStringBuilderBase<wchar_t> *)param_1,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data
             ,uVar9);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)param_1,L" RS:",4);
  ::FString::PrintfImpl(&local_58,L"<%f %f %u %u %u %u>");
  uVar9 = local_58.Data.ArrayNum - 1;
  if (local_58.Data.ArrayNum == 0) {
    uVar9 = uVar4;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            ((TStringBuilderBase<wchar_t> *)param_1,(wchar_t *)local_58.Data.AllocatorInstance.Data,
             uVar9);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)param_1,L" DSS:",5);
  pFVar5 = FDepthStencilStateInitializerRHI::ToString(&this->DepthStencilState,&local_38);
  iVar1 = (pFVar5->Data).ArrayNum;
  iVar10 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar10 = 0;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            ((TStringBuilderBase<wchar_t> *)param_1,(wchar_t *)(pFVar5->Data).AllocatorInstance.Data
             ,iVar10);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)param_1,L"\n",1);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            ((TStringBuilderBase<wchar_t> *)param_1,L" NumMSAA:",9);
  TStringBuilderBase<wchar_t>::AppendfImpl((TStringBuilderBase<wchar_t> *)param_1,L"%u");
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            ((TStringBuilderBase<wchar_t> *)param_1,L" DSfmt:",7);
  TStringBuilderBase<wchar_t>::AppendfImpl((TStringBuilderBase<wchar_t> *)param_1,L"%u");
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            ((TStringBuilderBase<wchar_t> *)param_1,L" DSflags:",9);
  TStringBuilderBase<wchar_t>::AppendfImpl((TStringBuilderBase<wchar_t> *)param_1,L"%llu");
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)param_1,L"\n",1);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)param_1,L" DL:",4);
  TStringBuilderBase<wchar_t>::AppendfImpl((TStringBuilderBase<wchar_t> *)param_1,L"%u");
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)param_1,L" SL:",4);
  TStringBuilderBase<wchar_t>::AppendfImpl((TStringBuilderBase<wchar_t> *)param_1,L"%u");
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)param_1,L" DS:",4);
  TStringBuilderBase<wchar_t>::AppendfImpl((TStringBuilderBase<wchar_t> *)param_1,L"%u");
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)param_1,L" SS:",4);
  TStringBuilderBase<wchar_t>::AppendfImpl((TStringBuilderBase<wchar_t> *)param_1,L"%u");
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)param_1,L" PT:",4);
  TStringBuilderBase<wchar_t>::AppendfImpl((TStringBuilderBase<wchar_t> *)param_1,L"%u");
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)param_1,L"\n",1);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)param_1,L" RTA ",5);
  TStringBuilderBase<wchar_t>::AppendfImpl((TStringBuilderBase<wchar_t> *)param_1,L"%u");
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)param_1,L"\n",1);
  if (this->RenderTargetsActive != 0) {
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)param_1,L"    ",4)
    ;
    uVar9 = uVar7;
    if (this->RenderTargetsActive != 0) {
      do {
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  ((TStringBuilderBase<wchar_t> *)param_1,L" RT",3);
        TStringBuilderBase<wchar_t>::AppendfImpl((TStringBuilderBase<wchar_t> *)param_1,L"%u");
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  ((TStringBuilderBase<wchar_t> *)param_1,L":fmt=",5);
        TStringBuilderBase<wchar_t>::AppendfImpl((TStringBuilderBase<wchar_t> *)param_1,L"%u");
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                  ((TStringBuilderBase<wchar_t> *)param_1,L" flg=",5);
        TStringBuilderBase<wchar_t>::AppendfImpl((TStringBuilderBase<wchar_t> *)param_1,L"%llu");
        uVar9 = uVar9 + 1;
      } while (uVar9 < this->RenderTargetsActive);
    }
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)param_1,L"\n",1);
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)param_1,L" SuH:",5);
  TStringBuilderBase<wchar_t>::AppendfImpl((TStringBuilderBase<wchar_t> *)param_1,L"%u");
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)param_1,L" SuI:",5);
  TStringBuilderBase<wchar_t>::AppendfImpl((TStringBuilderBase<wchar_t> *)param_1,L"%u");
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)param_1,L"\n",1);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)param_1,L" MVC:",5);
  TStringBuilderBase<wchar_t>::AppendfImpl((TStringBuilderBase<wchar_t> *)param_1,L"%u");
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            ((TStringBuilderBase<wchar_t> *)param_1,L" HasFDM:",8);
  _Str = L"false";
  pwVar8 = L"false";
  if (this->bHasFragmentDensityAttachment != false) {
    pwVar8 = L"true";
  }
  sVar6 = wcslen(pwVar8);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            ((TStringBuilderBase<wchar_t> *)param_1,pwVar8,(int)sVar6);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)param_1,L"\n",1);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            ((TStringBuilderBase<wchar_t> *)param_1,L" AllowVRS:",10);
  pwVar8 = L"false";
  if (this->bAllowVariableRateShading != false) {
    pwVar8 = L"true";
  }
  sVar6 = wcslen(pwVar8);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            ((TStringBuilderBase<wchar_t> *)param_1,pwVar8,(int)sVar6);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)param_1,L" SR:",4);
  TStringBuilderBase<wchar_t>::AppendfImpl((TStringBuilderBase<wchar_t> *)param_1,L"%u");
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)param_1,L"\n",1);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)param_1,L" DB:",4);
  if (this->bDepthBounds != false) {
    _Str = L"true";
  }
  sVar6 = wcslen(_Str);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            ((TStringBuilderBase<wchar_t> *)param_1,_Str,(int)sVar6);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)param_1,L"\n",1);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            ((TStringBuilderBase<wchar_t> *)param_1,L" NumVE ",7);
  TStringBuilderBase<wchar_t>::AppendfImpl((TStringBuilderBase<wchar_t> *)param_1,L"%d");
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)param_1,L"\n",1);
  if (0 < (this->VertexDescriptor).ArrayNum) {
    do {
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)param_1,L" ",1);
      TStringBuilderBase<wchar_t>::AppendfImpl((TStringBuilderBase<wchar_t> *)param_1,L"%d");
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)param_1,L":",1);
      uVar9 = uVar4;
      if ((int)uVar7 < (this->VertexDescriptor).ArrayNum) {
        uVar9 = ~uVar7 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar5 = FVertexElement::ToString
                         ((FVertexElement *)
                          ((this->VertexDescriptor).AllocatorInstance.InlineData + (int)uVar7),
                          &local_28);
      iVar1 = (pFVar5->Data).ArrayNum;
      uVar9 = iVar1 - 1;
      if (iVar1 == 0) {
        uVar9 = uVar4;
      }
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                ((TStringBuilderBase<wchar_t> *)param_1,
                 (wchar_t *)(pFVar5->Data).AllocatorInstance.Data,uVar9);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (this->VertexDescriptor).ArrayNum);
  }
  return;
}

// AddToReadableString @ 145c4ed20

void __thiscall
FPipelineCacheFileFormatPSO::ComputeDescriptor::AddToReadableString
          (ComputeDescriptor *this,TStringBuilderWithBuffer<wchar_t,1024> *param_1)

{
  int iVar1;
  FString local_18;
  
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)param_1,L" CS:",4);
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  BytesToHex((uchar *)this,0x14,&local_18);
  iVar1 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            ((TStringBuilderBase<wchar_t> *)param_1,(wchar_t *)local_18.Data.AllocatorInstance.Data,
             iVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// AddToReadableString @ 145c4ee90

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
FPipelineCacheFileFormatPSO::GraphicsDescriptor::AddToReadableString
          (GraphicsDescriptor *this,TStringBuilderWithBuffer<wchar_t,1024> *param_1)

{
  AddShadersToReadableString(this,param_1);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)param_1,L"\n",1);
  AddStateToReadableString(this,param_1);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>((TStringBuilderBase<wchar_t> *)param_1,L"\n",1);
  return;
}

// CommonFromString @ 145c54380

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FPipelineCacheFileFormatPSO::CommonFromString
          (FPipelineCacheFileFormatPSO *this,TStringView<wchar_t> *param_1)

{
  return;
}

// CommonHeaderLine @ 145c54390

FString * __cdecl FPipelineCacheFileFormatPSO::CommonHeaderLine(FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"BindCount,UsageMask");
  return __return_storage_ptr__;
}

// CommonToString @ 145c543c0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FString * __thiscall
FPipelineCacheFileFormatPSO::CommonToString
          (FPipelineCacheFileFormatPSO *this,FString *__return_storage_ptr__)

{
  ::FString::PrintfImpl(__return_storage_ptr__,L"\"%lld,%llu\"");
  return __return_storage_ptr__;
}

// FromString @ 145c588b0

void __thiscall
FPipelineCacheFileFormatPSO::ComputeDescriptor::FromString
          (ComputeDescriptor *this,TStringView<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  wchar_t *pwVar6;
  int iVar7;
  longlong lVar8;
  undefined4 uStack_1c;
  TStringView<wchar_t> local_18;
  
  pwVar6 = param_1->DataPtr;
  iVar7 = 0;
  pwVar1 = pwVar6 + param_1->Size;
  while ((pwVar6 != pwVar1 && (iVar4 = iswspace(*pwVar6), iVar4 != 0))) {
    iVar7 = iVar7 + 1;
    pwVar6 = pwVar6 + 1;
  }
  pwVar1 = param_1->DataPtr;
  iVar4 = param_1->Size - iVar7;
  if (iVar4 != 0) {
    lVar8 = (longlong)iVar4;
    do {
      iVar5 = iswspace((pwVar1 + iVar7)[lVar8 + -1]);
      if (iVar5 == 0) break;
      iVar4 = iVar4 + -1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  if ((iVar4 != 0x28) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Src.Len() == GetStringLen()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\SecureHash.h"
                         ,0x109,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_18._12_4_ = uStack_1c;
  local_18.Size = iVar4;
  local_18.DataPtr = pwVar1 + iVar7;
  UE::String::HexToBytes(&local_18,(uchar *)this);
  return;
}

// FromString @ 145c59510

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

bool __thiscall
FPipelineCacheFileFormatPSO::GraphicsDescriptor::FromString
          (GraphicsDescriptor *this,TStringView<wchar_t> *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uStack_4c;
  TStringView<wchar_t> local_48;
  TStringView<wchar_t> local_38;
  TStringView<wchar_t> local_28;
  
  iVar4 = param_1->Size;
  iVar6 = 0;
  if (0 < iVar4) {
    iVar6 = iVar4;
  }
  local_48.DataPtr = param_1->DataPtr + ((longlong)iVar4 - (longlong)iVar6);
  local_48._12_4_ = uStack_4c;
  local_48.Size = iVar6;
  iVar4 = UE::String::FindFirstChar(&local_48,L',',CaseSensitive);
  if (iVar4 == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FoundComma",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                       ,0x3a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  iVar6 = param_1->Size;
  iVar5 = iVar6 - (iVar4 + 1);
  iVar7 = iVar6;
  if (iVar5 < iVar6) {
    iVar7 = iVar5;
  }
  iVar5 = 0;
  if (0 < iVar7) {
    iVar5 = iVar7;
  }
  local_48.DataPtr = param_1->DataPtr + ((longlong)iVar6 - (longlong)iVar5);
  local_48.Size = iVar5;
  iVar6 = UE::String::FindFirstChar(&local_48,L',',CaseSensitive);
  if (iVar6 == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FoundComma",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                       ,0x3a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  iVar7 = param_1->Size;
  iVar5 = iVar4 + 1 + iVar6 + 1;
  iVar6 = iVar7 - iVar5;
  iVar4 = iVar7;
  if (iVar6 < iVar7) {
    iVar4 = iVar6;
  }
  iVar6 = 0;
  if (0 < iVar4) {
    iVar6 = iVar4;
  }
  local_48.DataPtr = param_1->DataPtr + ((longlong)iVar7 - (longlong)iVar6);
  local_48.Size = iVar6;
  iVar4 = UE::String::FindFirstChar(&local_48,L',',CaseSensitive);
  if (iVar4 == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FoundComma",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                       ,0x3a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  iVar6 = param_1->Size;
  iVar5 = iVar5 + iVar4 + 1;
  iVar7 = iVar6 - iVar5;
  iVar4 = iVar6;
  if (iVar7 < iVar6) {
    iVar4 = iVar7;
  }
  iVar7 = 0;
  if (0 < iVar4) {
    iVar7 = iVar4;
  }
  local_48.DataPtr = param_1->DataPtr + ((longlong)iVar6 - (longlong)iVar7);
  local_48.Size = iVar7;
  iVar4 = UE::String::FindFirstChar(&local_48,L',',CaseSensitive);
  if (iVar4 == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FoundComma",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                       ,0x3a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  iVar6 = param_1->Size;
  iVar4 = iVar5 + 1 + iVar4;
  iVar5 = iVar6 - iVar4;
  iVar7 = iVar6;
  if (iVar5 < iVar6) {
    iVar7 = iVar5;
  }
  iVar5 = 0;
  if (0 < iVar7) {
    iVar5 = iVar7;
  }
  local_48.DataPtr = param_1->DataPtr + ((longlong)iVar6 - (longlong)iVar5);
  local_48.Size = iVar5;
  iVar6 = UE::String::FindFirstChar(&local_48,L',',CaseSensitive);
  if (iVar6 == -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FoundComma",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                       ,0x3a0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_38.DataPtr = param_1->DataPtr;
  iVar4 = iVar4 + iVar6;
  iVar6 = param_1->Size;
  if (iVar4 < param_1->Size) {
    iVar6 = iVar4;
  }
  local_38.Size = 0;
  if (0 < iVar6) {
    local_38.Size = iVar6;
  }
  ShadersFromString(this,&local_38);
  iVar6 = param_1->Size;
  iVar7 = (iVar6 - iVar4) + -1;
  iVar4 = iVar6;
  if (iVar7 < iVar6) {
    iVar4 = iVar7;
  }
  local_28.Size = 0;
  if (0 < iVar4) {
    local_28.Size = iVar4;
  }
  local_28.DataPtr = param_1->DataPtr + ((longlong)iVar6 - (longlong)local_28.Size);
  bVar2 = StateFromString(this,&local_28);
  return bVar2;
}

// HeaderLine @ 145c5d0e0

FString * __cdecl
FPipelineCacheFileFormatPSO::ComputeDescriptor::HeaderLine(FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"ComputeShader");
  return __return_storage_ptr__;
}

// HeaderLine @ 145c5d220

FString * __cdecl
FPipelineCacheFileFormatPSO::GraphicsDescriptor::HeaderLine(FString *__return_storage_ptr__)

{
  FString local_28;
  FString local_18;
  
  StateHeaderLine(&local_18);
  ::FString::FString(&local_28,
                     L"VertexShader,FragmentShader,GeometryShader,MeshShader,AmplificationShader");
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s,%s");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Init @ 145c5d340

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

bool __cdecl
FPipelineCacheFileFormatPSO::Init
          (FPipelineCacheFileFormatPSO *param_1,FPipelineFileCacheRayTracingDesc *param_2)

{
  undefined8 uVar1;
  
  param_1->Type = RayTracing;
  uVar1 = *(undefined8 *)((param_2->ShaderHash).Hash + 8);
  *(undefined8 *)(param_1->RayTracingDesc).ShaderHash.Hash =
       *(undefined8 *)(param_2->ShaderHash).Hash;
  *(undefined8 *)((param_1->RayTracingDesc).ShaderHash.Hash + 8) = uVar1;
  *(undefined4 *)((param_1->RayTracingDesc).ShaderHash.Hash + 0x10) =
       *(undefined4 *)((param_2->ShaderHash).Hash + 0x10);
  (param_1->RayTracingDesc).DeprecatedMaxPayloadSizeInBytes =
       param_2->DeprecatedMaxPayloadSizeInBytes;
  (param_1->RayTracingDesc).Frequency = param_2->Frequency;
  (param_1->RayTracingDesc).ShaderBindingLayout.Hash = (param_2->ShaderBindingLayout).Hash;
  (param_1->RayTracingDesc).ShaderBindingLayout.Flags = (param_2->ShaderBindingLayout).Flags;
  (param_1->RayTracingDesc).ShaderBindingLayout.NumUniformBufferEntries =
       (param_2->ShaderBindingLayout).NumUniformBufferEntries;
  TStaticArray<FRHIUniformBufferShaderBindingLayout,8,4294967295>::operator=
            (&(param_1->RayTracingDesc).ShaderBindingLayout.UniformBufferEntries,
             &(param_2->ShaderBindingLayout).UniformBufferEntries);
  return true;
}

// Init @ 145c5d3b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

bool __cdecl
FPipelineCacheFileFormatPSO::Init
          (FPipelineCacheFileFormatPSO *param_1,FGraphicsPipelineStateInitializer *param_2)

{
  uint uVar1;
  FRHIVertexDeclaration *pFVar2;
  FRHIVertexShader *pFVar3;
  FRHIMeshShader *pFVar4;
  FRHIAmplificationShader *pFVar5;
  FRHIPixelShader *pFVar6;
  FRHIGeometryShader *pFVar7;
  code *pcVar8;
  GraphicsDescriptor *pGVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  bool bVar24;
  undefined1 uVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  FIdentityFunctor local_res8 [16];
  undefined2 local_28;
  undefined8 local_24;
  undefined2 local_1c;
  
  param_1->Type = Graphics;
  bVar26 = 1;
  memset(&param_1->GraphicsDesc,0,0x1c0);
  if ((param_2->BoundShaderState).VertexShaderRHI == (FRHIVertexShader *)0x0) {
    if ((param_2->BoundShaderState).MeshShaderRHI == (FRHIMeshShader *)0x0) {
      bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("Init.BoundShaderState.GetVertexShader() || Init.BoundShaderState.GetMeshShader()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                          ,0x5ab,
                          L"A graphics pipeline must always have either a vertex or a mesh shader");
      if (bVar24) {
        pcVar8 = (code *)swi(3);
        uVar25 = (*pcVar8)();
        return (bool)uVar25;
      }
    }
    if ((param_2->BoundShaderState).VertexShaderRHI == (FRHIVertexShader *)0x0) goto LAB_145c5d502;
  }
  if ((param_2->BoundShaderState).VertexDeclarationRHI == (FRHIVertexDeclaration *)0x0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("Init.BoundShaderState.VertexDeclarationRHI",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                        ,0x5b1,L"");
    if (bVar24) {
      pcVar8 = (code *)swi(3);
      uVar25 = (*pcVar8)();
      return (bool)uVar25;
    }
  }
  uVar1 = *(uint *)&((param_2->BoundShaderState).VertexDeclarationRHI)->field_0x8;
  if (((uVar1 >> 0x1e & 1) != 0) || ((uVar1 & 0x3fffffff) == 0)) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("Init.BoundShaderState.VertexDeclarationRHI->IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                        ,0x5b2,L"");
    if (bVar24) {
      pcVar8 = (code *)swi(3);
      uVar25 = (*pcVar8)();
      return (bool)uVar25;
    }
  }
  pFVar2 = (param_2->BoundShaderState).VertexDeclarationRHI;
  bVar26 = (**(code **)(*(longlong *)pFVar2 + 0x10))
                     (pFVar2,&(param_1->GraphicsDesc).VertexDescriptor);
  bVar26 = bVar26 & 1;
  if (bVar26 == 0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("bOK",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                        ,0x5b5,L"");
    if (bVar24) {
      pcVar8 = (code *)swi(3);
      uVar25 = (*pcVar8)();
      return (bool)uVar25;
    }
  }
  AlgoImpl::
  IntroSortInternal<FVertexElement,int,FIdentityFunctor,TDereferenceWrapper<FVertexElement,_FPipelineCacheFileFormatPSO::SortVertexElements_::__l2::<lambda_1>_>_>
            ((FVertexElement *)&(param_1->GraphicsDesc).VertexDescriptor,
             (param_1->GraphicsDesc).VertexDescriptor.ArrayNum,local_res8[0],
             (<lambda_1> *)local_res8);
  pFVar3 = (param_2->BoundShaderState).VertexShaderRHI;
  uVar25 = pFVar3->field_0xf1;
  uVar10 = pFVar3->field_0xf2;
  uVar11 = pFVar3->field_0xf3;
  uVar12 = pFVar3->field_0xf4;
  uVar13 = pFVar3->field_0xf5;
  uVar14 = pFVar3->field_0xf6;
  uVar15 = pFVar3->field_0xf7;
  uVar16 = pFVar3->field_0xf8;
  uVar17 = pFVar3->field_0xf9;
  uVar18 = pFVar3->field_0xfa;
  uVar19 = pFVar3->field_0xfb;
  uVar20 = pFVar3->field_0xfc;
  uVar21 = pFVar3->field_0xfd;
  uVar22 = pFVar3->field_0xfe;
  uVar23 = pFVar3->field_0xff;
  (param_1->GraphicsDesc).VertexShader.Hash[0] = pFVar3->field_0xf0;
  (param_1->GraphicsDesc).VertexShader.Hash[1] = uVar25;
  (param_1->GraphicsDesc).VertexShader.Hash[2] = uVar10;
  (param_1->GraphicsDesc).VertexShader.Hash[3] = uVar11;
  (param_1->GraphicsDesc).VertexShader.Hash[4] = uVar12;
  (param_1->GraphicsDesc).VertexShader.Hash[5] = uVar13;
  (param_1->GraphicsDesc).VertexShader.Hash[6] = uVar14;
  (param_1->GraphicsDesc).VertexShader.Hash[7] = uVar15;
  pGVar9 = &param_1->GraphicsDesc;
  (pGVar9->VertexShader).Hash[8] = uVar16;
  (pGVar9->VertexShader).Hash[9] = uVar17;
  (pGVar9->VertexShader).Hash[10] = uVar18;
  (pGVar9->VertexShader).Hash[0xb] = uVar19;
  (pGVar9->VertexShader).Hash[0xc] = uVar20;
  (pGVar9->VertexShader).Hash[0xd] = uVar21;
  (pGVar9->VertexShader).Hash[0xe] = uVar22;
  (pGVar9->VertexShader).Hash[0xf] = uVar23;
  uVar25 = pFVar3->field_0x101;
  uVar10 = pFVar3->field_0x102;
  uVar11 = pFVar3->field_0x103;
  pGVar9 = &param_1->GraphicsDesc;
  (pGVar9->VertexShader).Hash[0x10] = pFVar3->field_0x100;
  (pGVar9->VertexShader).Hash[0x11] = uVar25;
  (pGVar9->VertexShader).Hash[0x12] = uVar10;
  (pGVar9->VertexShader).Hash[0x13] = uVar11;
LAB_145c5d502:
  pFVar4 = (param_2->BoundShaderState).MeshShaderRHI;
  if (pFVar4 != (FRHIMeshShader *)0x0) {
    uVar25 = pFVar4->field_0xf1;
    uVar10 = pFVar4->field_0xf2;
    uVar11 = pFVar4->field_0xf3;
    uVar12 = pFVar4->field_0xf4;
    uVar13 = pFVar4->field_0xf5;
    uVar14 = pFVar4->field_0xf6;
    uVar15 = pFVar4->field_0xf7;
    uVar16 = pFVar4->field_0xf8;
    uVar17 = pFVar4->field_0xf9;
    uVar18 = pFVar4->field_0xfa;
    uVar19 = pFVar4->field_0xfb;
    uVar20 = pFVar4->field_0xfc;
    uVar21 = pFVar4->field_0xfd;
    uVar22 = pFVar4->field_0xfe;
    uVar23 = pFVar4->field_0xff;
    (param_1->GraphicsDesc).MeshShader.Hash[0] = pFVar4->field_0xf0;
    (param_1->GraphicsDesc).MeshShader.Hash[1] = uVar25;
    (param_1->GraphicsDesc).MeshShader.Hash[2] = uVar10;
    (param_1->GraphicsDesc).MeshShader.Hash[3] = uVar11;
    (param_1->GraphicsDesc).MeshShader.Hash[4] = uVar12;
    (param_1->GraphicsDesc).MeshShader.Hash[5] = uVar13;
    (param_1->GraphicsDesc).MeshShader.Hash[6] = uVar14;
    (param_1->GraphicsDesc).MeshShader.Hash[7] = uVar15;
    pGVar9 = &param_1->GraphicsDesc;
    (pGVar9->MeshShader).Hash[8] = uVar16;
    (pGVar9->MeshShader).Hash[9] = uVar17;
    (pGVar9->MeshShader).Hash[10] = uVar18;
    (pGVar9->MeshShader).Hash[0xb] = uVar19;
    (pGVar9->MeshShader).Hash[0xc] = uVar20;
    (pGVar9->MeshShader).Hash[0xd] = uVar21;
    (pGVar9->MeshShader).Hash[0xe] = uVar22;
    (pGVar9->MeshShader).Hash[0xf] = uVar23;
    uVar25 = pFVar4->field_0x101;
    uVar10 = pFVar4->field_0x102;
    uVar11 = pFVar4->field_0x103;
    pGVar9 = &param_1->GraphicsDesc;
    (pGVar9->MeshShader).Hash[0x10] = pFVar4->field_0x100;
    (pGVar9->MeshShader).Hash[0x11] = uVar25;
    (pGVar9->MeshShader).Hash[0x12] = uVar10;
    (pGVar9->MeshShader).Hash[0x13] = uVar11;
  }
  pFVar5 = (param_2->BoundShaderState).AmplificationShaderRHI;
  if (pFVar5 != (FRHIAmplificationShader *)0x0) {
    uVar25 = pFVar5->field_0xf1;
    uVar10 = pFVar5->field_0xf2;
    uVar11 = pFVar5->field_0xf3;
    uVar12 = pFVar5->field_0xf4;
    uVar13 = pFVar5->field_0xf5;
    uVar14 = pFVar5->field_0xf6;
    uVar15 = pFVar5->field_0xf7;
    uVar16 = pFVar5->field_0xf8;
    uVar17 = pFVar5->field_0xf9;
    uVar18 = pFVar5->field_0xfa;
    uVar19 = pFVar5->field_0xfb;
    uVar20 = pFVar5->field_0xfc;
    uVar21 = pFVar5->field_0xfd;
    uVar22 = pFVar5->field_0xfe;
    uVar23 = pFVar5->field_0xff;
    (param_1->GraphicsDesc).AmplificationShader.Hash[0] = pFVar5->field_0xf0;
    (param_1->GraphicsDesc).AmplificationShader.Hash[1] = uVar25;
    (param_1->GraphicsDesc).AmplificationShader.Hash[2] = uVar10;
    (param_1->GraphicsDesc).AmplificationShader.Hash[3] = uVar11;
    (param_1->GraphicsDesc).AmplificationShader.Hash[4] = uVar12;
    (param_1->GraphicsDesc).AmplificationShader.Hash[5] = uVar13;
    (param_1->GraphicsDesc).AmplificationShader.Hash[6] = uVar14;
    (param_1->GraphicsDesc).AmplificationShader.Hash[7] = uVar15;
    pGVar9 = &param_1->GraphicsDesc;
    (pGVar9->AmplificationShader).Hash[8] = uVar16;
    (pGVar9->AmplificationShader).Hash[9] = uVar17;
    (pGVar9->AmplificationShader).Hash[10] = uVar18;
    (pGVar9->AmplificationShader).Hash[0xb] = uVar19;
    (pGVar9->AmplificationShader).Hash[0xc] = uVar20;
    (pGVar9->AmplificationShader).Hash[0xd] = uVar21;
    (pGVar9->AmplificationShader).Hash[0xe] = uVar22;
    (pGVar9->AmplificationShader).Hash[0xf] = uVar23;
    uVar25 = pFVar5->field_0x101;
    uVar10 = pFVar5->field_0x102;
    uVar11 = pFVar5->field_0x103;
    pGVar9 = &param_1->GraphicsDesc;
    (pGVar9->AmplificationShader).Hash[0x10] = pFVar5->field_0x100;
    (pGVar9->AmplificationShader).Hash[0x11] = uVar25;
    (pGVar9->AmplificationShader).Hash[0x12] = uVar10;
    (pGVar9->AmplificationShader).Hash[0x13] = uVar11;
  }
  pFVar6 = (param_2->BoundShaderState).PixelShaderRHI;
  if (pFVar6 != (FRHIPixelShader *)0x0) {
    uVar25 = pFVar6->field_0xf1;
    uVar10 = pFVar6->field_0xf2;
    uVar11 = pFVar6->field_0xf3;
    uVar12 = pFVar6->field_0xf4;
    uVar13 = pFVar6->field_0xf5;
    uVar14 = pFVar6->field_0xf6;
    uVar15 = pFVar6->field_0xf7;
    uVar16 = pFVar6->field_0xf8;
    uVar17 = pFVar6->field_0xf9;
    uVar18 = pFVar6->field_0xfa;
    uVar19 = pFVar6->field_0xfb;
    uVar20 = pFVar6->field_0xfc;
    uVar21 = pFVar6->field_0xfd;
    uVar22 = pFVar6->field_0xfe;
    uVar23 = pFVar6->field_0xff;
    (param_1->GraphicsDesc).FragmentShader.Hash[0] = pFVar6->field_0xf0;
    (param_1->GraphicsDesc).FragmentShader.Hash[1] = uVar25;
    (param_1->GraphicsDesc).FragmentShader.Hash[2] = uVar10;
    (param_1->GraphicsDesc).FragmentShader.Hash[3] = uVar11;
    (param_1->GraphicsDesc).FragmentShader.Hash[4] = uVar12;
    (param_1->GraphicsDesc).FragmentShader.Hash[5] = uVar13;
    (param_1->GraphicsDesc).FragmentShader.Hash[6] = uVar14;
    (param_1->GraphicsDesc).FragmentShader.Hash[7] = uVar15;
    pGVar9 = &param_1->GraphicsDesc;
    (pGVar9->FragmentShader).Hash[8] = uVar16;
    (pGVar9->FragmentShader).Hash[9] = uVar17;
    (pGVar9->FragmentShader).Hash[10] = uVar18;
    (pGVar9->FragmentShader).Hash[0xb] = uVar19;
    (pGVar9->FragmentShader).Hash[0xc] = uVar20;
    (pGVar9->FragmentShader).Hash[0xd] = uVar21;
    (pGVar9->FragmentShader).Hash[0xe] = uVar22;
    (pGVar9->FragmentShader).Hash[0xf] = uVar23;
    uVar25 = pFVar6->field_0x101;
    uVar10 = pFVar6->field_0x102;
    uVar11 = pFVar6->field_0x103;
    pGVar9 = &param_1->GraphicsDesc;
    (pGVar9->FragmentShader).Hash[0x10] = pFVar6->field_0x100;
    (pGVar9->FragmentShader).Hash[0x11] = uVar25;
    (pGVar9->FragmentShader).Hash[0x12] = uVar10;
    (pGVar9->FragmentShader).Hash[0x13] = uVar11;
  }
  pFVar7 = (param_2->BoundShaderState).GeometryShaderRHI;
  if (pFVar7 != (FRHIGeometryShader *)0x0) {
    uVar25 = pFVar7->field_0xf1;
    uVar10 = pFVar7->field_0xf2;
    uVar11 = pFVar7->field_0xf3;
    uVar12 = pFVar7->field_0xf4;
    uVar13 = pFVar7->field_0xf5;
    uVar14 = pFVar7->field_0xf6;
    uVar15 = pFVar7->field_0xf7;
    uVar16 = pFVar7->field_0xf8;
    uVar17 = pFVar7->field_0xf9;
    uVar18 = pFVar7->field_0xfa;
    uVar19 = pFVar7->field_0xfb;
    uVar20 = pFVar7->field_0xfc;
    uVar21 = pFVar7->field_0xfd;
    uVar22 = pFVar7->field_0xfe;
    uVar23 = pFVar7->field_0xff;
    (param_1->GraphicsDesc).GeometryShader.Hash[0] = pFVar7->field_0xf0;
    (param_1->GraphicsDesc).GeometryShader.Hash[1] = uVar25;
    (param_1->GraphicsDesc).GeometryShader.Hash[2] = uVar10;
    (param_1->GraphicsDesc).GeometryShader.Hash[3] = uVar11;
    (param_1->GraphicsDesc).GeometryShader.Hash[4] = uVar12;
    (param_1->GraphicsDesc).GeometryShader.Hash[5] = uVar13;
    (param_1->GraphicsDesc).GeometryShader.Hash[6] = uVar14;
    (param_1->GraphicsDesc).GeometryShader.Hash[7] = uVar15;
    pGVar9 = &param_1->GraphicsDesc;
    (pGVar9->GeometryShader).Hash[8] = uVar16;
    (pGVar9->GeometryShader).Hash[9] = uVar17;
    (pGVar9->GeometryShader).Hash[10] = uVar18;
    (pGVar9->GeometryShader).Hash[0xb] = uVar19;
    (pGVar9->GeometryShader).Hash[0xc] = uVar20;
    (pGVar9->GeometryShader).Hash[0xd] = uVar21;
    (pGVar9->GeometryShader).Hash[0xe] = uVar22;
    (pGVar9->GeometryShader).Hash[0xf] = uVar23;
    uVar25 = pFVar7->field_0x101;
    uVar10 = pFVar7->field_0x102;
    uVar11 = pFVar7->field_0x103;
    pGVar9 = &param_1->GraphicsDesc;
    (pGVar9->GeometryShader).Hash[0x10] = pFVar7->field_0x100;
    (pGVar9->GeometryShader).Hash[0x11] = uVar25;
    (pGVar9->GeometryShader).Hash[0x12] = uVar10;
    (pGVar9->GeometryShader).Hash[0x13] = uVar11;
  }
  if (param_2->BlendState == (FRHIBlendState *)0x0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("Init.BlendState",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                        ,0x5d0,L"");
    if (bVar24) {
      pcVar8 = (code *)swi(3);
      uVar25 = (*pcVar8)();
      return (bool)uVar25;
    }
  }
  bVar27 = (**(code **)(*(longlong *)param_2->BlendState + 0x10))
                     (param_2->BlendState,&(param_1->GraphicsDesc).BlendState);
  if ((bVar26 & bVar27) == 0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("bOK",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                        ,0x5d3,L"");
    if (bVar24) {
      pcVar8 = (code *)swi(3);
      uVar25 = (*pcVar8)();
      return (bool)uVar25;
    }
  }
  if (param_2->RasterizerState == (FRHIRasterizerState *)0x0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("Init.RasterizerState",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                        ,0x5d6,L"");
    if (bVar24) {
      pcVar8 = (code *)swi(3);
      uVar25 = (*pcVar8)();
      return (bool)uVar25;
    }
  }
  local_28 = 0;
  local_24 = 0;
  local_1c = 0;
  bVar28 = (**(code **)(*(longlong *)param_2->RasterizerState + 0x10))
                     (param_2->RasterizerState,&local_28);
  bVar28 = bVar26 & bVar27 & bVar28;
  if (bVar28 == 0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("bOK",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                        ,0x5da,L"");
    if (bVar24) {
      pcVar8 = (code *)swi(3);
      uVar25 = (*pcVar8)();
      return (bool)uVar25;
    }
  }
  (param_1->GraphicsDesc).RasterizerState.FillMode.Value = (uchar)local_28;
  (param_1->GraphicsDesc).RasterizerState.CullMode.Value = local_28._1_1_;
  (param_1->GraphicsDesc).RasterizerState.DepthClipMode = (ERasterizerDepthClipMode)local_1c;
  (param_1->GraphicsDesc).RasterizerState.bAllowMSAA = local_1c._1_1_;
  (param_1->GraphicsDesc).RasterizerState.DepthBias = (float)local_24;
  (param_1->GraphicsDesc).RasterizerState.SlopeScaleDepthBias = local_24._4_4_;
  if (param_2->DepthStencilState == (FRHIDepthStencilState *)0x0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("Init.DepthStencilState",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                        ,0x5df,L"");
    if (bVar24) {
      pcVar8 = (code *)swi(3);
      uVar25 = (*pcVar8)();
      return (bool)uVar25;
    }
  }
  bVar26 = (**(code **)(param_2->DepthStencilState->_padding_ + 0x10))
                     (param_2->DepthStencilState,&(param_1->GraphicsDesc).DepthStencilState);
  bVar28 = bVar28 & bVar26;
  if (bVar28 == 0) {
    bVar24 = ::FDebug::CheckVerifyFailedImpl2
                       ("bOK",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                        ,0x5e2,L"");
    if (bVar24) {
      pcVar8 = (code *)swi(3);
      uVar25 = (*pcVar8)();
      return (bool)uVar25;
    }
  }
  (param_1->GraphicsDesc).RenderTargetFormats[0] = (param_2->RenderTargetFormats).Elements[0];
  (param_1->GraphicsDesc).RenderTargetFlags[0] =
       (ulonglong)(uint)((int)(param_2->RenderTargetFlags).Elements[0] & (Shared|SRGB));
  (param_1->GraphicsDesc).RenderTargetFormats[1] = (param_2->RenderTargetFormats).Elements[1];
  (param_1->GraphicsDesc).RenderTargetFlags[1] =
       (ulonglong)(uint)((int)(param_2->RenderTargetFlags).Elements[1] & (Shared|SRGB));
  (param_1->GraphicsDesc).RenderTargetFormats[2] = (param_2->RenderTargetFormats).Elements[2];
  (param_1->GraphicsDesc).RenderTargetFlags[2] =
       (ulonglong)(uint)((int)(param_2->RenderTargetFlags).Elements[2] & (Shared|SRGB));
  (param_1->GraphicsDesc).RenderTargetFormats[3] = (param_2->RenderTargetFormats).Elements[3];
  (param_1->GraphicsDesc).RenderTargetFlags[3] =
       (ulonglong)(uint)((int)(param_2->RenderTargetFlags).Elements[3] & (Shared|SRGB));
  (param_1->GraphicsDesc).RenderTargetFormats[4] = (param_2->RenderTargetFormats).Elements[4];
  (param_1->GraphicsDesc).RenderTargetFlags[4] =
       (ulonglong)(uint)((int)(param_2->RenderTargetFlags).Elements[4] & (Shared|SRGB));
  (param_1->GraphicsDesc).RenderTargetFormats[5] = (param_2->RenderTargetFormats).Elements[5];
  (param_1->GraphicsDesc).RenderTargetFlags[5] =
       (ulonglong)(uint)((int)(param_2->RenderTargetFlags).Elements[5] & (Shared|SRGB));
  (param_1->GraphicsDesc).RenderTargetFormats[6] = (param_2->RenderTargetFormats).Elements[6];
  (param_1->GraphicsDesc).RenderTargetFlags[6] =
       (ulonglong)(uint)((int)(param_2->RenderTargetFlags).Elements[6] & (Shared|SRGB));
  (param_1->GraphicsDesc).RenderTargetFormats[7] = (param_2->RenderTargetFormats).Elements[7];
  (param_1->GraphicsDesc).RenderTargetFlags[7] =
       (ulonglong)(uint)((int)(param_2->RenderTargetFlags).Elements[7] & (Shared|SRGB));
  (param_1->GraphicsDesc).RenderTargetsActive = param_2->RenderTargetsEnabled;
  (param_1->GraphicsDesc).MSAASamples = (uint)param_2->NumSamples;
  (param_1->GraphicsDesc).DepthStencilFormat = param_2->DepthStencilTargetFormat;
  (param_1->GraphicsDesc).DepthStencilFlags =
       (ulonglong)
       (uint)((int)param_2->DepthStencilTargetFlag & (Shared|SRGB|DepthStencilTargetable));
  (param_1->GraphicsDesc).DepthLoad = param_2->DepthTargetLoadAction;
  (param_1->GraphicsDesc).StencilLoad = param_2->StencilTargetLoadAction;
  (param_1->GraphicsDesc).DepthStore = param_2->DepthTargetStoreAction;
  (param_1->GraphicsDesc).StencilStore = param_2->StencilTargetStoreAction;
  (param_1->GraphicsDesc).PrimitiveType = param_2->PrimitiveType;
  (param_1->GraphicsDesc).SubpassHint = param_2->SubpassHint;
  (param_1->GraphicsDesc).SubpassIndex = param_2->SubpassIndex;
  (param_1->GraphicsDesc).MultiViewCount = param_2->MultiViewCount;
  (param_1->GraphicsDesc).bHasFragmentDensityAttachment = param_2->bHasFragmentDensityAttachment;
  (param_1->GraphicsDesc).bAllowVariableRateShading = param_2->bAllowVariableRateShading;
  (param_1->GraphicsDesc).ShadingRate = param_2->ShadingRate;
  (param_1->GraphicsDesc).bDepthBounds = param_2->bDepthBounds;
  if (bVar28 != 0) {
    bVar24 = Verify(param_1);
    if (bVar24) {
      return true;
    }
  }
  return false;
}

// Init @ 145c5d8f0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

bool __cdecl
FPipelineCacheFileFormatPSO::Init(FPipelineCacheFileFormatPSO *param_1,FRHIComputeShader *param_2)

{
  code *pcVar1;
  longlong lVar2;
  ComputeDescriptor *pCVar3;
  bool bVar4;
  undefined1 uVar5;
  
  if (param_2 == (FRHIComputeShader *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Init",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                       ,0x587,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      uVar5 = (*pcVar1)();
      return (bool)uVar5;
    }
  }
  param_1->Type = Compute;
  (param_1->ComputeDesc).ComputeShader.Hash[0] = '\0';
  (param_1->ComputeDesc).ComputeShader.Hash[1] = '\0';
  (param_1->ComputeDesc).ComputeShader.Hash[2] = '\0';
  (param_1->ComputeDesc).ComputeShader.Hash[3] = '\0';
  (param_1->ComputeDesc).ComputeShader.Hash[4] = '\0';
  (param_1->ComputeDesc).ComputeShader.Hash[5] = '\0';
  (param_1->ComputeDesc).ComputeShader.Hash[6] = '\0';
  (param_1->ComputeDesc).ComputeShader.Hash[7] = '\0';
  pCVar3 = &param_1->ComputeDesc;
  (pCVar3->ComputeShader).Hash[8] = '\0';
  (pCVar3->ComputeShader).Hash[9] = '\0';
  (pCVar3->ComputeShader).Hash[10] = '\0';
  (pCVar3->ComputeShader).Hash[0xb] = '\0';
  (pCVar3->ComputeShader).Hash[0xc] = '\0';
  (pCVar3->ComputeShader).Hash[0xd] = '\0';
  (pCVar3->ComputeShader).Hash[0xe] = '\0';
  (pCVar3->ComputeShader).Hash[0xf] = '\0';
  pCVar3 = &param_1->ComputeDesc;
  (pCVar3->ComputeShader).Hash[0x10] = '\0';
  (pCVar3->ComputeShader).Hash[0x11] = '\0';
  (pCVar3->ComputeShader).Hash[0x12] = '\0';
  (pCVar3->ComputeShader).Hash[0x13] = '\0';
  lVar2 = param_2->_padding_;
  *(longlong *)(param_1->ComputeDesc).ComputeShader.Hash = param_2->_padding_;
  *(longlong *)((param_1->ComputeDesc).ComputeShader.Hash + 8) = lVar2;
  *(int *)((param_1->ComputeDesc).ComputeShader.Hash + 0x10) = (int)param_2->_padding_;
  bVar4 = Verify(param_1);
  return bVar4;
}

// ReduceDSFlags @ 145c71cf0

ETextureCreateFlags __cdecl
FPipelineCacheFileFormatPSO::GraphicsDescriptor::ReduceDSFlags(ETextureCreateFlags param_1)

{
  return (ulonglong)((uint)param_1 & 0x2000014);
}

// ReduceRTFlags @ 145c71d00

ETextureCreateFlags __cdecl
FPipelineCacheFileFormatPSO::GraphicsDescriptor::ReduceRTFlags(ETextureCreateFlags param_1)

{
  return (ulonglong)((uint)param_1 & 0x2000010);
}

// ShaderHeaderLine @ 145c79070

FString * __cdecl
FPipelineCacheFileFormatPSO::GraphicsDescriptor::ShaderHeaderLine(FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,
                     L"VertexShader,FragmentShader,GeometryShader,MeshShader,AmplificationShader");
  return __return_storage_ptr__;
}

// ShadersFromString @ 145c790a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
FPipelineCacheFileFormatPSO::GraphicsDescriptor::ShadersFromString
          (GraphicsDescriptor *this,TStringView<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  wchar_t *pwVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined1 auStack_138 [32];
  TStringView<wchar_t> local_118;
  undefined8 *local_108;
  code *local_100;
  undefined8 **local_f8;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  undefined8 local_98 [10];
  undefined8 *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  pwVar7 = param_1->DataPtr;
  local_108 = local_98;
  local_f8 = &local_108;
  local_48 = (undefined8 *)0x0;
  iVar8 = 0;
  local_40 = 0;
  local_100 = UE::Core::Private::Function::
              TFunctionRefCaller<`FPipelineCacheFileFormatPSO::GraphicsDescriptor::ShadersFromString'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
              ::Call;
  local_3c = 5;
  pwVar1 = pwVar7 + param_1->Size;
  while ((pwVar7 != pwVar1 && (iVar4 = iswspace(*pwVar7), iVar4 != 0))) {
    iVar8 = iVar8 + 1;
    pwVar7 = pwVar7 + 1;
  }
  pwVar1 = param_1->DataPtr;
  iVar4 = param_1->Size - iVar8;
  if (iVar4 != 0) {
    lVar9 = (longlong)iVar4;
    do {
      iVar5 = iswspace((pwVar1 + iVar8)[lVar9 + -1]);
      if (iVar5 == 0) break;
      iVar4 = iVar4 + -1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  local_118.Size = iVar4;
  local_118.DataPtr = pwVar1 + iVar8;
  UE::String::ParseTokens
            (&local_118,L',',(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)&local_100,None);
  if ((local_40 != 5) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parts.Num() == PartCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                         ,0x218,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  puVar10 = local_98;
  if (local_48 != (undefined8 *)0x0) {
    puVar10 = local_48;
  }
  if ((*(int *)(puVar10 + 1) != 0x28) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Src.Len() == GetStringLen()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\SecureHash.h"
                         ,0x109,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_e8.DataPtr = (wchar_t *)*puVar10;
  local_e8._8_8_ = puVar10[1];
  UE::String::HexToBytes(&local_e8,(uchar *)this);
  if ((*(int *)(puVar10 + 3) != 0x28) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Src.Len() == GetStringLen()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\SecureHash.h"
                         ,0x109,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_d8.DataPtr = (wchar_t *)puVar10[2];
  local_d8._8_8_ = puVar10[3];
  UE::String::HexToBytes(&local_d8,(this->FragmentShader).Hash);
  if ((*(int *)(puVar10 + 5) != 0x28) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Src.Len() == GetStringLen()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\SecureHash.h"
                         ,0x109,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_c8.DataPtr = (wchar_t *)puVar10[4];
  local_c8._8_8_ = puVar10[5];
  UE::String::HexToBytes(&local_c8,(this->GeometryShader).Hash);
  if ((*(int *)(puVar10 + 7) != 0x28) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Src.Len() == GetStringLen()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\SecureHash.h"
                         ,0x109,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_b8.DataPtr = (wchar_t *)puVar10[6];
  local_b8._8_8_ = puVar10[7];
  UE::String::HexToBytes(&local_b8,(this->MeshShader).Hash);
  if ((*(int *)(puVar10 + 9) != 0x28) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Src.Len() == GetStringLen()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\SecureHash.h"
                         ,0x109,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_a8.DataPtr = (wchar_t *)puVar10[8];
  local_a8._8_8_ = puVar10[9];
  UE::String::HexToBytes(&local_a8,(this->AmplificationShader).Hash);
  puVar6 = local_98;
  if (local_48 != (undefined8 *)0x0) {
    puVar6 = local_48;
  }
  if ((puVar6 != puVar10) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parts.GetData() + PartCount == PartIt",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                         ,0x221,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (local_48 != (undefined8 *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// ShadersToString @ 145c79380

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

FString * __thiscall
FPipelineCacheFileFormatPSO::GraphicsDescriptor::ShadersToString
          (GraphicsDescriptor *this,FString *__return_storage_ptr__)

{
  int iVar1;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  BytesToHex((this->AmplificationShader).Hash,0x14,&local_48);
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  BytesToHex((this->MeshShader).Hash,0x14,&local_58);
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  BytesToHex((this->GeometryShader).Hash,0x14,&local_68);
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  BytesToHex((this->FragmentShader).Hash,0x14,&local_78);
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  BytesToHex((uchar *)this,0x14,&local_88);
  ::FString::PrintfImpl(&local_38,L"%s,%s,%s,%s,%s");
  iVar1 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AppendChars
            (__return_storage_ptr__,(wchar_t *)local_38.Data.AllocatorInstance.Data,iVar1);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// SortVertexElements @ 145c7a1b0

void __cdecl
FPipelineCacheFileFormatPSO::SortVertexElements
          (TArray<FVertexElement,TFixedAllocator<17>_> *param_1)

{
  FIdentityFunctor local_res8 [32];
  
  AlgoImpl::
  IntroSortInternal<FVertexElement,int,FIdentityFunctor,TDereferenceWrapper<FVertexElement,_FPipelineCacheFileFormatPSO::SortVertexElements_::__l2::<lambda_1>_>_>
            ((FVertexElement *)param_1,param_1->ArrayNum,local_res8[0],(<lambda_1> *)local_res8);
  return;
}

// StateFromString @ 145c7a330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

bool __thiscall
FPipelineCacheFileFormatPSO::GraphicsDescriptor::StateFromString
          (GraphicsDescriptor *this,TStringView<wchar_t> *param_1)

{
  int *piVar1;
  int *piVar2;
  wchar_t *pwVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  TStringView<wchar_t> *pTVar9;
  wchar_t *pwVar10;
  TStringView<wchar_t> *pTVar11;
  TStringView<wchar_t> *pTVar12;
  TArray<FVertexElement,TFixedAllocator<17>_> *pTVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 auStackY_528 [32];
  uchar local_4f8;
  uchar local_4f7 [7];
  TStringView<wchar_t> *local_4f0;
  FIdentityFunctor local_4e8 [4];
  uint local_4e4;
  uint local_4e0;
  uint local_4dc;
  uint local_4d8;
  uint local_4d4;
  uint local_4d0;
  uint local_4cc;
  uint local_4c8 [2];
  TStringView<wchar_t> *local_4c0;
  TStringView<wchar_t> *local_4b8;
  int iStack_4b0;
  undefined4 uStack_4ac;
  code *local_4a8;
  TStringView<wchar_t> **local_4a0;
  TStringView<wchar_t> local_498;
  TStringView<wchar_t> local_488 [67];
  TStringView<wchar_t> *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_528;
  pwVar10 = param_1->DataPtr;
  local_4c0 = local_488;
  uVar15 = 0;
  local_4a0 = &local_4c0;
  local_58 = (TStringView<wchar_t> *)0x0;
  iVar14 = 0;
  local_50 = 0;
  local_4a8 = UE::Core::Private::Function::
              TFunctionRefCaller<`FPipelineCacheFileFormatPSO::GraphicsDescriptor::StateFromString'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
              ::Call;
  local_4c = 0x43;
  pwVar3 = pwVar10 + param_1->Size;
  while ((pwVar10 != pwVar3 && (iVar7 = iswspace(*pwVar10), iVar7 != 0))) {
    iVar14 = iVar14 + 1;
    pwVar10 = pwVar10 + 1;
  }
  pTVar9 = (TStringView<wchar_t> *)(param_1->DataPtr + iVar14);
  iVar14 = param_1->Size - iVar14;
  if (iVar14 != 0) {
    lVar16 = (longlong)iVar14;
    do {
      iVar7 = iswspace(*(wchar_t *)((longlong)pTVar9 + (lVar16 + -1) * 2));
      if (iVar7 == 0) break;
      iVar14 = iVar14 + -1;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  local_498._12_4_ = uStack_4ac;
  local_498.Size = iVar14;
  local_4b8 = pTVar9;
  iStack_4b0 = iVar14;
  local_498.DataPtr = (wchar_t *)pTVar9;
  UE::String::ParseTokens
            (&local_498,L',',(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)&local_4a8,None);
  if (local_50 == 0x43) {
    pTVar9 = local_488;
    if (local_58 != (TStringView<wchar_t> *)0x0) {
      pTVar9 = local_58;
    }
    FBlendStateInitializerRHI::FromString(&this->BlendState,pTVar9);
    FPipelineFileCacheRasterizerState::FromString(&this->RasterizerState,pTVar9 + 1);
    FDepthStencilStateInitializerRHI::FromString(&this->DepthStencilState,pTVar9 + 2);
    ::LexFromString(&this->MSAASamples,pTVar9 + 3);
    ::LexFromString((uint *)&this->DepthStencilFormat,pTVar9 + 4);
    local_4b8 = local_4c0;
    ::LexFromString((ulong64 *)&local_4b8,pTVar9 + 5);
    this->DepthStencilFlags = (ulonglong)((uint)local_4b8 & 0x2000014);
    if (((longlong)((longlong)pTVar9 + (0x430 - (longlong)(pTVar9 + 6)) & 0xfffffffffffffff0U) <
         0x50) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PartEnd - PartIt >= 5",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                           ,0x2f0,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    ::LexFromString((uint *)&this->DepthLoad,pTVar9 + 6);
    ::LexFromString((uint *)&this->StencilLoad,pTVar9 + 7);
    ::LexFromString((uint *)&this->DepthStore,pTVar9 + 8);
    ::LexFromString((uint *)&this->StencilStore,pTVar9 + 9);
    ::LexFromString(&this->PrimitiveType,pTVar9 + 10);
    if (((longlong)((longlong)pTVar9 + (0x430 - (longlong)(pTVar9 + 0xb)) & 0xfffffffffffffff0U) <
         0x10) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PartEnd - PartIt >= 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                           ,0x2f7,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    ::LexFromString(&this->RenderTargetsActive,pTVar9 + 0xb);
    if (((longlong)((longlong)pTVar9 + (0x430 - (longlong)(pTVar9 + 0xc)) & 0xfffffffffffffff0U) <
         0x40) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PartEnd - PartIt >= 4",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                           ,0x2fc,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    ::LexFromString(this->RenderTargetFormats,pTVar9 + 0xc);
    local_4f0 = local_4c0;
    ::LexFromString((ulong64 *)&local_4f0,pTVar9 + 0xd);
    pTVar12 = local_4f0;
    this->RenderTargetFlags[0] = (ulonglong)((uint)local_4f0 & 0x2000010);
    ::LexFromString(&local_4f8,pTVar9 + 0xe);
    ::LexFromString(local_4f7,pTVar9 + 0xf);
    if (((longlong)((longlong)pTVar9 + (0x430 - (longlong)(pTVar9 + 0x10)) & 0xfffffffffffffff0U) <
         0x40) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PartEnd - PartIt >= 4",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                           ,0x2fc,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    ::LexFromString(this->RenderTargetFormats + 1,pTVar9 + 0x10);
    local_4f0 = pTVar12;
    ::LexFromString((ulong64 *)&local_4f0,pTVar9 + 0x11);
    pTVar12 = local_4f0;
    this->RenderTargetFlags[1] = (ulonglong)((uint)local_4f0 & 0x2000010);
    ::LexFromString(&local_4f8,pTVar9 + 0x12);
    ::LexFromString(local_4f7,pTVar9 + 0x13);
    if (((longlong)((longlong)pTVar9 + (0x430 - (longlong)(pTVar9 + 0x14)) & 0xfffffffffffffff0U) <
         0x40) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PartEnd - PartIt >= 4",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                           ,0x2fc,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    ::LexFromString(this->RenderTargetFormats + 2,pTVar9 + 0x14);
    local_4f0 = pTVar12;
    ::LexFromString((ulong64 *)&local_4f0,pTVar9 + 0x15);
    pTVar12 = local_4f0;
    this->RenderTargetFlags[2] = (ulonglong)((uint)local_4f0 & 0x2000010);
    ::LexFromString(&local_4f8,pTVar9 + 0x16);
    ::LexFromString(local_4f7,pTVar9 + 0x17);
    if (((longlong)((longlong)pTVar9 + (0x430 - (longlong)(pTVar9 + 0x18)) & 0xfffffffffffffff0U) <
         0x40) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PartEnd - PartIt >= 4",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                           ,0x2fc,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    ::LexFromString(this->RenderTargetFormats + 3,pTVar9 + 0x18);
    local_4f0 = pTVar12;
    ::LexFromString((ulong64 *)&local_4f0,pTVar9 + 0x19);
    pTVar12 = local_4f0;
    this->RenderTargetFlags[3] = (ulonglong)((uint)local_4f0 & 0x2000010);
    ::LexFromString(&local_4f8,pTVar9 + 0x1a);
    ::LexFromString(local_4f7,pTVar9 + 0x1b);
    if (((longlong)((longlong)pTVar9 + (0x430 - (longlong)(pTVar9 + 0x1c)) & 0xfffffffffffffff0U) <
         0x40) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PartEnd - PartIt >= 4",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                           ,0x2fc,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    ::LexFromString(this->RenderTargetFormats + 4,pTVar9 + 0x1c);
    local_4f0 = pTVar12;
    ::LexFromString((ulong64 *)&local_4f0,pTVar9 + 0x1d);
    pTVar12 = local_4f0;
    this->RenderTargetFlags[4] = (ulonglong)((uint)local_4f0 & 0x2000010);
    ::LexFromString(&local_4f8,pTVar9 + 0x1e);
    ::LexFromString(local_4f7,pTVar9 + 0x1f);
    if (((longlong)((longlong)pTVar9 + (0x430 - (longlong)(pTVar9 + 0x20)) & 0xfffffffffffffff0U) <
         0x40) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PartEnd - PartIt >= 4",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                           ,0x2fc,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    ::LexFromString(this->RenderTargetFormats + 5,pTVar9 + 0x20);
    local_4f0 = pTVar12;
    ::LexFromString((ulong64 *)&local_4f0,pTVar9 + 0x21);
    pTVar12 = local_4f0;
    this->RenderTargetFlags[5] = (ulonglong)((uint)local_4f0 & 0x2000010);
    ::LexFromString(&local_4f8,pTVar9 + 0x22);
    ::LexFromString(local_4f7,pTVar9 + 0x23);
    if (((longlong)((longlong)pTVar9 + (0x430 - (longlong)(pTVar9 + 0x24)) & 0xfffffffffffffff0U) <
         0x40) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PartEnd - PartIt >= 4",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                           ,0x2fc,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    ::LexFromString(this->RenderTargetFormats + 6,pTVar9 + 0x24);
    local_4f0 = pTVar12;
    ::LexFromString((ulong64 *)&local_4f0,pTVar9 + 0x25);
    pTVar12 = local_4f0;
    this->RenderTargetFlags[6] = (ulonglong)((uint)local_4f0 & 0x2000010);
    ::LexFromString(&local_4f8,pTVar9 + 0x26);
    ::LexFromString(local_4f7,pTVar9 + 0x27);
    if (((longlong)((longlong)pTVar9 + (0x430 - (longlong)(pTVar9 + 0x28)) & 0xfffffffffffffff0U) <
         0x40) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PartEnd - PartIt >= 4",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                           ,0x2fc,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    ::LexFromString(this->RenderTargetFormats + 7,pTVar9 + 0x28);
    local_4f0 = pTVar12;
    ::LexFromString((ulong64 *)&local_4f0,pTVar9 + 0x29);
    this->RenderTargetFlags[7] = (ulonglong)((uint)local_4f0 & 0x2000010);
    ::LexFromString(&local_4f8,pTVar9 + 0x2a);
    ::LexFromString(local_4f7,pTVar9 + 0x2b);
    local_4e0 = 0;
    local_4dc = 0;
    if (((longlong)((longlong)pTVar9 + (0x430 - (longlong)(pTVar9 + 0x2c)) & 0xfffffffffffffff0U) <
         0x20) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PartEnd - PartIt >= 2",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                           ,0x30b,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    ::LexFromString(&local_4e0,pTVar9 + 0x2c);
    ::LexFromString(&local_4dc,pTVar9 + 0x2d);
    this->SubpassHint = (uchar)local_4e0;
    this->SubpassIndex = (uchar)local_4dc;
    local_4d8 = 0;
    local_4d4 = 0;
    if (((longlong)((longlong)pTVar9 + (0x430 - (longlong)(pTVar9 + 0x2e)) & 0xfffffffffffffff0U) <
         0x20) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PartEnd - PartIt >= 2",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                           ,0x316,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    ::LexFromString(&local_4d8,pTVar9 + 0x2e);
    ::LexFromString(&local_4d4,pTVar9 + 0x2f);
    this->MultiViewCount = (uchar)local_4d8;
    local_4d0 = 0;
    this->bHasFragmentDensityAttachment = local_4d4 != 0;
    local_4cc = 0;
    if (((longlong)((longlong)pTVar9 + (0x430 - (longlong)(pTVar9 + 0x30)) & 0xfffffffffffffff0U) <
         0x20) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PartEnd - PartIt >= 2",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                           ,0x321,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    ::LexFromString(&local_4d0,pTVar9 + 0x30);
    ::LexFromString(&local_4cc,pTVar9 + 0x31);
    local_4c8[0] = 0;
    this->bAllowVariableRateShading = local_4d0 != 0;
    this->ShadingRate = (EVRSShadingRate)local_4cc;
    if (((longlong)((longlong)pTVar9 + (0x430 - (longlong)(pTVar9 + 0x32)) & 0xfffffffffffffff0U) <
         0x10) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PartEnd - PartIt >= 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                           ,0x32b,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    ::LexFromString(local_4c8,pTVar9 + 0x32);
    this->bDepthBounds = local_4c8[0] != 0;
    if (((longlong)((longlong)pTVar9 + (0x430 - (longlong)(pTVar9 + 0x33)) & 0xfffffffffffffff0U) <
         0x10) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PartEnd - PartIt >= 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                           ,0x330,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    local_4e4 = 0;
    pTVar12 = pTVar9 + 0x34;
    ::LexFromString((int *)&local_4e4,pTVar9 + 0x33);
    if ((0x11 < local_4e4) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("VertDescNum >= 0 && VertDescNum <= MaxVertexElementCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                           ,0x333,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pTVar13 = &this->VertexDescriptor;
    if ((int)local_4e4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_4e4);
    }
    piVar1 = &(this->VertexDescriptor).ArrayNum;
    piVar2 = &(this->VertexDescriptor).ArrayMax;
    *piVar1 = 0;
    if (*piVar2 != local_4e4) {
      UE::Core::Private::ReallocTo<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                (8,2,local_4e4,&pTVar13->AllocatorInstance,0,piVar2);
    }
    lVar16 = (longlong)(int)local_4e4;
    iVar14 = UE::Core::Private::ReallocGrow<0,TFixedAllocator<17>::ForElementType<FVertexElement>_>
                       (8,2,local_4e4,&pTVar13->AllocatorInstance,piVar1,piVar2);
    memset((pTVar13->AllocatorInstance).InlineData + iVar14,0,lVar16 << 3);
    if ((((longlong)pTVar9 + (0x430 - (longlong)pTVar12) & 0xfffffffffffffff0U) != 0x110) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PartEnd - PartIt == MaxVertexElementCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                           ,0x338,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    pTVar11 = pTVar12;
    if (0 < (int)local_4e4) {
      do {
        uVar8 = 0;
        if ((int)uVar15 < *piVar1) {
          uVar8 = ~uVar15 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        pTVar12 = pTVar11 + 1;
        FVertexElement::FromString
                  ((FVertexElement *)((pTVar13->AllocatorInstance).InlineData + (int)uVar15),pTVar11
                  );
        uVar15 = uVar15 + 1;
        pTVar11 = pTVar12;
      } while ((int)uVar15 < (int)local_4e4);
    }
    if ((pTVar12 + 0x11 != pTVar9 + (longlong)(int)local_4e4 + 0x43) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PartIt + MaxVertexElementCount == PartEnd + VertDescNum",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                           ,0x33e,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    AlgoImpl::
    IntroSortInternal<FVertexElement,int,FIdentityFunctor,TDereferenceWrapper<FVertexElement,_FPipelineCacheFileFormatPSO::SortVertexElements_::__l2::<lambda_1>_>_>
              ((FVertexElement *)pTVar13,*piVar1,local_4e8[0],(<lambda_1> *)local_4e8);
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (local_58 != (TStringView<wchar_t> *)0x0) {
    FMemory::Free(local_58);
  }
  return bVar5;
}

// StateHeaderLine @ 145c7ae10

FString * __cdecl
FPipelineCacheFileFormatPSO::GraphicsDescriptor::StateHeaderLine(FString *__return_storage_ptr__)

{
  ForAnyElementType FVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  FString local_38;
  FString local_28;
  
  iVar3 = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  ::FString::PrintfImpl(&local_28,L"%s,%s,%s,");
  iVar4 = 0;
  iVar2 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar2 = iVar4;
  }
  ::FString::AppendChars(&local_38,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar2);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_28,L"%s,%s,%s,");
  iVar2 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar2 = iVar4;
  }
  ::FString::AppendChars(&local_38,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar2);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_28,L"%s,%s,%s,%s,%s,");
  iVar2 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar2 = iVar4;
  }
  ::FString::AppendChars(&local_38,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar2);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_28,L"%s,");
  iVar2 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar2 = iVar4;
  }
  ::FString::AppendChars(&local_38,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar2);
  iVar2 = iVar3;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  do {
    ::FString::PrintfImpl(&local_28,L"%s%d,%s%d,%s%d,%s%d,");
    iVar5 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(&local_38,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar5);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  ::FString::PrintfImpl(&local_28,L"%s,%s,");
  iVar5 = 0;
  iVar2 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar2 = iVar5;
  }
  ::FString::AppendChars(&local_38,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar2);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_28,L"%s,%s,");
  iVar2 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar2 = iVar5;
  }
  ::FString::AppendChars(&local_38,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar2);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_28,L"%s,");
  iVar2 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar2 = iVar5;
  }
  ::FString::AppendChars(&local_38,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar2);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  do {
    ::FString::PrintfImpl(&local_28,L"%s%d,");
    iVar2 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar2 = iVar5;
    }
    ::FString::AppendChars(&local_38,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar2);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x11);
  iVar2 = local_38.Data.ArrayNum + -2;
  iVar3 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar2 = -1;
    iVar3 = iVar4;
  }
  if (iVar2 < iVar3) {
    iVar3 = iVar2;
  }
  iVar2 = 0;
  if (0 < iVar3) {
    iVar2 = iVar3;
  }
  FVar1.Data = (FScriptContainerElement *)L"";
  if (local_38.Data.ArrayNum != 0) {
    FVar1.Data = local_38.Data.AllocatorInstance.Data;
  }
  ::FString::ConstructFromPtrSize(__return_storage_ptr__,(wchar_t *)FVar1.Data,iVar2);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// StateToString @ 145c7b1b0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

FString * __thiscall
FPipelineCacheFileFormatPSO::GraphicsDescriptor::StateToString
          (GraphicsDescriptor *this,FString *__return_storage_ptr__)

{
  int iVar1;
  ForAnyElementType FVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar6;
  int iVar7;
  FVertexElement local_res8;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  ulonglong uVar5;
  
  uVar5 = 0;
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  FDepthStencilStateInitializerRHI::ToString(&this->DepthStencilState,&local_38);
  ::FString::PrintfImpl(&local_58,L"<%f %f %u %u %u %u>");
  FBlendStateInitializerRHI::ToString(&this->BlendState,&local_48);
  ::FString::PrintfImpl(&local_68,L"%s,%s,%s,");
  iVar6 = local_68.Data.ArrayNum + -1;
  if (local_68.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  ::FString::AppendChars(&local_78,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar6);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_58,L"%d,%d,%lld,");
  iVar7 = 0;
  iVar6 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar6 = iVar7;
  }
  ::FString::AppendChars(&local_78,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar6);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_58,L"%d,%d,%d,%d,%d,");
  iVar6 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar6 = iVar7;
  }
  ::FString::AppendChars(&local_78,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar6);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_58,L"%d,");
  iVar6 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar6 = iVar7;
  }
  ::FString::AppendChars(&local_78,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar6);
  uVar4 = uVar5;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  do {
    ::FString::PrintfImpl(&local_58,L"%d,%lld,%d,%d,");
    iVar6 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar6 = iVar7;
    }
    ::FString::AppendChars(&local_78,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar6);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    uVar4 = uVar4 + 1;
  } while ((longlong)uVar4 < 8);
  ::FString::PrintfImpl(&local_58,L"%d,%d,");
  iVar6 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar6 = iVar7;
  }
  ::FString::AppendChars(&local_78,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar6);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_58,L"%d,%d,");
  iVar6 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar6 = iVar7;
  }
  ::FString::AppendChars(&local_78,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar6);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_58,L"%d,%d,");
  iVar6 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar6 = iVar7;
  }
  ::FString::AppendChars(&local_78,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar6);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&local_58,L"%d,");
  iVar6 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar6 = iVar7;
  }
  ::FString::AppendChars(&local_78,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar6);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  local_res8.StreamIndex = '\0';
  local_res8.Offset = '\0';
  local_res8.Type.Value = '\0';
  local_res8.AttributeIndex = '\0';
  local_res8.Stride = 0;
  local_res8.bUseInstanceIndex = 0;
  ::FString::PrintfImpl(&local_58,L"%d,");
  iVar6 = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    iVar6 = iVar7;
  }
  ::FString::AppendChars(&local_78,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar6);
  uVar4 = uVar5;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  do {
    if ((int)uVar5 < (this->VertexDescriptor).ArrayNum) {
      FVertexElement::ToString
                ((FVertexElement *)
                 ((this->VertexDescriptor).AllocatorInstance.InlineData[0].Pad + uVar4),&local_38);
      ::FString::PrintfImpl(&local_58,L"%s,");
      iVar6 = local_58.Data.ArrayNum + -1;
      if (local_58.Data.ArrayNum == 0) {
        iVar6 = iVar7;
      }
      ::FString::AppendChars(&local_78,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar6);
      FVar2.Data = local_38.Data.AllocatorInstance.Data;
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
        FVar2.Data = local_38.Data.AllocatorInstance.Data;
      }
    }
    else {
      FVertexElement::ToString(&local_res8,&local_48);
      ::FString::PrintfImpl(&local_68,L"%s,");
      iVar6 = local_68.Data.ArrayNum + -1;
      if (local_68.Data.ArrayNum == 0) {
        iVar6 = iVar7;
      }
      ::FString::AppendChars(&local_78,(wchar_t *)local_68.Data.AllocatorInstance.Data,iVar6);
      FVar2.Data = local_48.Data.AllocatorInstance.Data;
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
        FVar2.Data = local_48.Data.AllocatorInstance.Data;
      }
    }
    if (FVar2.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar2.Data);
    }
    uVar3 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar3;
    uVar4 = uVar4 + 8;
  } while ((int)uVar3 < 0x11);
  iVar6 = local_78.Data.ArrayNum + -2;
  iVar1 = local_78.Data.ArrayNum + -1;
  if (local_78.Data.ArrayNum == 0) {
    iVar6 = -1;
    iVar1 = iVar7;
  }
  if (iVar6 < iVar1) {
    iVar1 = iVar6;
  }
  iVar6 = 0;
  if (0 < iVar1) {
    iVar6 = iVar1;
  }
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_78.Data.ArrayNum != 0) {
    FVar2.Data = local_78.Data.AllocatorInstance.Data;
  }
  ::FString::ConstructFromPtrSize(__return_storage_ptr__,(wchar_t *)FVar2.Data,iVar6);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToString @ 145c7bdf0

FString * __thiscall
FPipelineCacheFileFormatPSO::ComputeDescriptor::ToString
          (ComputeDescriptor *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  BytesToHex((uchar *)this,0x14,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ToString @ 145c7c090

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

FString * __thiscall
FPipelineCacheFileFormatPSO::GraphicsDescriptor::ToString
          (GraphicsDescriptor *this,FString *__return_storage_ptr__)

{
  int iVar1;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  StateToString(this,&local_38);
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  BytesToHex((this->AmplificationShader).Hash,0x14,&local_68);
  local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.Data.ArrayNum = 0;
  local_78.Data.ArrayMax = 0;
  BytesToHex((this->MeshShader).Hash,0x14,&local_78);
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  BytesToHex((this->GeometryShader).Hash,0x14,&local_88);
  local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98.Data.ArrayNum = 0;
  local_98.Data.ArrayMax = 0;
  BytesToHex((this->FragmentShader).Hash,0x14,&local_98);
  local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.Data.ArrayNum = 0;
  local_a8.Data.ArrayMax = 0;
  BytesToHex((uchar *)this,0x14,&local_a8);
  ::FString::PrintfImpl(&local_48,L"%s,%s,%s,%s,%s");
  iVar1 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AppendChars(&local_58,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar1);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"%s,%s");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ToStringReadable @ 145c7c7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FString * __thiscall
FPipelineCacheFileFormatPSO::ToStringReadable
          (FPipelineCacheFileFormatPSO *this,FString *__return_storage_ptr__)

{
  EShaderFrequency EVar1;
  DescriptorType DVar2;
  FScriptContainerElement *pFVar3;
  ForAnyElementType FVar4;
  void *pvVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  int iVar8;
  ulong64 uVar9;
  undefined1 auStack_888 [32];
  FString local_868;
  TStringBuilderWithBuffer<wchar_t,1024> local_858;
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_888;
  local_858._padding_ = (longlong)local_858.StringBuffer;
  local_858._padding_ = (longlong)local_858.StringBuffer;
  local_858._padding_ = (longlong)local_38;
  local_858._padding_._0_2_ = 0;
  pvVar5 = FGenericPlatformString::Memcpy(local_858.StringBuffer,L"PSO hash ",0x12);
  local_858._padding_ = (longlong)pvVar5 + 0x12;
  ::GetTypeHash(this);
  TStringBuilderBase<wchar_t>::AppendfImpl((TStringBuilderBase<wchar_t> *)&local_858,L"%u");
  if ((ulonglong)local_858._padding_ < (ulonglong *)(local_858._padding_ + 2U)) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_858,1);
  }
  pvVar5 = FGenericPlatformString::Memcpy((void *)local_858._padding_,L"\n",2);
  local_858._padding_ = (longlong)pvVar5 + 2;
  DVar2 = this->Type;
  if (DVar2 == Graphics) {
    GraphicsDescriptor::AddShadersToReadableString(&this->GraphicsDesc,&local_858);
    if ((ulonglong)local_858._padding_ < (ulonglong *)(local_858._padding_ + 2U)) {
      TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_858,1);
    }
    pvVar5 = FGenericPlatformString::Memcpy((void *)local_858._padding_,L"\n",2);
    local_858._padding_ = (longlong)pvVar5 + 2;
    GraphicsDescriptor::AddStateToReadableString(&this->GraphicsDesc,&local_858);
    if ((ulonglong)local_858._padding_ < (ulonglong *)(local_858._padding_ + 2U)) {
      TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_858,1);
    }
    pvVar5 = FGenericPlatformString::Memcpy((void *)local_858._padding_,L"\n",2);
    local_858._padding_ = (longlong)pvVar5 + 2;
    goto LAB_145c7cc74;
  }
  if (DVar2 == Compute) {
    if ((ulonglong)local_858._padding_ < (ulonglong *)((longlong)pvVar5 + 10U)) {
      TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_858,4);
    }
    pvVar5 = FGenericPlatformString::Memcpy((void *)local_858._padding_,L" CS:",8);
    local_858._padding_ = (longlong)pvVar5 + 8;
    local_868.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_868.Data.ArrayNum = 0;
    local_868.Data.ArrayMax = 0;
    BytesToHex((uchar *)&this->ComputeDesc,0x14,&local_868);
    FVar4.Data = local_868.Data.AllocatorInstance.Data;
    iVar8 = local_868.Data.ArrayNum + -1;
    if (local_868.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    uVar9 = (ulong64)iVar8;
    if ((ulonglong)local_858._padding_ < (ulonglong *)(local_858._padding_ + uVar9 * 2)) {
      TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_858,uVar9);
    }
    if (iVar8 != 0) {
      pvVar5 = FGenericPlatformString::Memcpy((void *)local_858._padding_,FVar4.Data,uVar9 * 2);
      local_858._padding_ = (longlong)pvVar5 + uVar9 * 2;
    }
    if (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_868.Data.AllocatorInstance.Data);
    }
    goto LAB_145c7cc74;
  }
  if (DVar2 != RayTracing) {
    if ((ulonglong)local_858._padding_ < (ulonglong *)((longlong)pvVar5 + 0x26U)) {
      TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_858,0x12);
    }
    pvVar5 = FGenericPlatformString::Memcpy((void *)local_858._padding_,L" Unknown PSO type ",0x24);
    local_858._padding_ = (longlong)pvVar5 + 0x24;
    TStringBuilderBase<wchar_t>::AppendfImpl((TStringBuilderBase<wchar_t> *)&local_858,L"%d");
    goto LAB_145c7cc74;
  }
  EVar1 = (this->RayTracingDesc).Frequency;
  if (EVar1 == SF_NumStandardFrequencies) {
    if ((ulonglong)local_858._padding_ < (ulonglong *)((longlong)pvVar5 + 0xcU)) {
      TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_858,5);
    }
    pwVar7 = L" RGS:";
LAB_145c7cb34:
    pvVar5 = FGenericPlatformString::Memcpy((void *)local_858._padding_,pwVar7,10);
    local_858._padding_ = (longlong)pvVar5 + 10;
  }
  else {
    if (EVar1 == SF_RayMiss) {
      if ((ulonglong)local_858._padding_ < (ulonglong *)((longlong)pvVar5 + 0xcU)) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_858,5);
      }
      pwVar7 = L" RMS:";
      goto LAB_145c7cb34;
    }
    if (EVar1 == SF_RayHitGroup) {
      if ((ulonglong)local_858._padding_ < (ulonglong *)((longlong)pvVar5 + 0xeU)) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_858,6);
      }
      pvVar5 = FGenericPlatformString::Memcpy((void *)local_858._padding_,L" RHGS:",0xc);
      local_858._padding_ = (longlong)pvVar5 + 0xc;
    }
    else if (EVar1 == SF_RayCallable) {
      if ((ulonglong)local_858._padding_ < (ulonglong *)((longlong)pvVar5 + 0xcU)) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_858,5);
      }
      pwVar7 = L" RCS:";
      goto LAB_145c7cb34;
    }
  }
  local_868.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_868.Data.ArrayNum = 0;
  local_868.Data.ArrayMax = 0;
  BytesToHex((uchar *)&this->RayTracingDesc,0x14,&local_868);
  FVar4.Data = local_868.Data.AllocatorInstance.Data;
  iVar8 = local_868.Data.ArrayNum + -1;
  if (local_868.Data.ArrayNum == 0) {
    iVar8 = 0;
  }
  uVar9 = (ulong64)iVar8;
  if ((ulonglong)local_858._padding_ < (ulonglong *)(local_858._padding_ + uVar9 * 2)) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_858,uVar9);
  }
  if (iVar8 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy((void *)local_858._padding_,FVar4.Data,uVar9 * 2);
    local_858._padding_ = (longlong)pvVar5 + uVar9 * 2;
  }
  if (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_868.Data.AllocatorInstance.Data);
  }
  if ((ulonglong)local_858._padding_ < (ulonglong *)(local_858._padding_ + 0xcU)) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_858,6);
  }
  pvVar5 = FGenericPlatformString::Memcpy((void *)local_858._padding_,L" AHGI ",0xc);
  local_858._padding_ = (longlong)pvVar5 + 0xc;
LAB_145c7cc74:
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar6 = ::FString::ConstructFromPtrSize
                     (&local_868,(wchar_t *)local_858._padding_,
                      (int)(local_858._padding_ - local_858._padding_ >> 1));
  if (__return_storage_ptr__ != pFVar6) {
    pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar6->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
  }
  if (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_868.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)&local_858);
  return __return_storage_ptr__;
}

// Verify @ 145c7eec0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FPipelineCacheFileFormatPSO::Verify(FPipelineCacheFileFormatPSO *this)

{
  DescriptorType DVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  TEnumAsByte<EBlendOperation> *pTVar7;
  uint uVar8;
  ulonglong uVar9;
  EPixelFormat *pEVar10;
  
  DVar1 = this->Type;
  if (DVar1 == Compute) {
    uVar9 = *(ulonglong *)(this->ComputeDesc).ComputeShader.Hash;
    if ((uVar9 == 0) &&
       (uVar9 = *(ulonglong *)((this->ComputeDesc).ComputeShader.Hash + 8), uVar9 == 0)) {
      uVar9 = (ulonglong)*(uint *)((this->ComputeDesc).ComputeShader.Hash + 0x10);
    }
    return uVar9 != 0;
  }
  if (DVar1 == Graphics) {
    if ((((((*(longlong *)(this->GraphicsDesc).VertexShader.Hash != 0) ||
           (*(longlong *)((this->GraphicsDesc).VertexShader.Hash + 8) != 0)) ||
          ((*(int *)((this->GraphicsDesc).VertexShader.Hash + 0x10) != 0 ||
           ((*(longlong *)(this->GraphicsDesc).MeshShader.Hash != 0 ||
            (*(longlong *)((this->GraphicsDesc).MeshShader.Hash + 8) != 0)))))) ||
         (*(int *)((this->GraphicsDesc).MeshShader.Hash + 0x10) != 0)) &&
        ((((*(longlong *)(this->GraphicsDesc).MeshShader.Hash == 0 &&
           (*(longlong *)((this->GraphicsDesc).MeshShader.Hash + 8) == 0)) &&
          (*(int *)((this->GraphicsDesc).MeshShader.Hash + 0x10) == 0)) ||
         ((((PRIVATE_GIsRunningCommandlet || (GRHIGlobals.SupportsMeshShadersTier0)) &&
           ((*(longlong *)(this->GraphicsDesc).VertexShader.Hash == 0 &&
            ((*(longlong *)((this->GraphicsDesc).VertexShader.Hash + 8) == 0 &&
             (*(int *)((this->GraphicsDesc).VertexShader.Hash + 0x10) == 0)))))) &&
          ((this->GraphicsDesc).VertexDescriptor.ArrayNum < 1)))))) &&
       ((((uVar2 = (this->GraphicsDesc).RenderTargetsActive, uVar2 < 9 &&
          ((this->GraphicsDesc).MSAASamples < 0x11)) &&
         ((this->GraphicsDesc).PrimitiveType < PT_Num)) &&
        ((((this->GraphicsDesc).DepthStencilFormat < PF_MAX &&
          ((this->GraphicsDesc).DepthLoad < Num)) &&
         (((this->GraphicsDesc).StencilLoad < Num &&
          (((this->GraphicsDesc).DepthStore < Num && ((this->GraphicsDesc).StencilStore < Num)))))))
        ))) {
      uVar8 = 0;
      if (uVar2 != 0) {
        pEVar10 = (this->GraphicsDesc).RenderTargetFormats;
        pTVar7 = &(this->GraphicsDesc).BlendState.RenderTargets.Elements[0].AlphaBlendOp;
        do {
          if (PF_R8G8B8 < *pEVar10) {
            return false;
          }
          if (4 < (((FRenderTarget *)(pTVar7 + -3))->ColorBlendOp).Value) {
            return false;
          }
          if (4 < pTVar7->Value) {
            return false;
          }
          if (0xf < ((TEnumAsByte<EBlendFactor> *)(pTVar7 + -2))->Value) {
            return false;
          }
          if (0xf < ((TEnumAsByte<EBlendFactor> *)(pTVar7 + -1))->Value) {
            return false;
          }
          if (0xf < ((TEnumAsByte<EBlendFactor> *)(pTVar7 + 1))->Value) {
            return false;
          }
          if (0xf < ((TEnumAsByte<EBlendFactor> *)(pTVar7 + 2))->Value) {
            return false;
          }
          if (0xf < ((TEnumAsByte<EColorWriteMask> *)(pTVar7 + 3))->Value) {
            return false;
          }
          uVar8 = uVar8 + 1;
          pEVar10 = pEVar10 + 1;
          pTVar7 = pTVar7 + 7;
        } while (uVar8 < uVar2);
      }
      if (((((((this->GraphicsDesc).RasterizerState.FillMode.Value < 3) &&
             ((this->GraphicsDesc).RasterizerState.CullMode.Value < 3)) &&
            ((this->GraphicsDesc).DepthStencilState.DepthTest.Value < 8)) &&
           (((this->GraphicsDesc).DepthStencilState.FrontFaceStencilTest.Value < 8 &&
            ((this->GraphicsDesc).DepthStencilState.BackFaceStencilTest.Value < 8)))) &&
          (((this->GraphicsDesc).DepthStencilState.FrontFaceStencilFailStencilOp.Value < 8 &&
           (((this->GraphicsDesc).DepthStencilState.FrontFaceDepthFailStencilOp.Value < 8 &&
            ((this->GraphicsDesc).DepthStencilState.FrontFacePassStencilOp.Value < 8)))))) &&
         (((this->GraphicsDesc).DepthStencilState.BackFaceStencilFailStencilOp.Value < 8 &&
          (((this->GraphicsDesc).DepthStencilState.BackFaceDepthFailStencilOp.Value < 8 &&
           ((this->GraphicsDesc).DepthStencilState.BackFacePassStencilOp.Value < 8)))))) {
        uVar2 = (this->GraphicsDesc).VertexDescriptor.ArrayNum;
        uVar8 = 0;
        if (uVar2 != 0) {
          do {
            uVar6 = 0;
            if ((int)uVar8 < (this->GraphicsDesc).VertexDescriptor.ArrayNum) {
              uVar6 = ~uVar8 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              uVar5 = (*pcVar3)();
              return (bool)uVar5;
            }
            if (0x14 < (((TArray<FVertexElement,TFixedAllocator<17>_> *)
                        (&(this->GraphicsDesc).AmplificationShader + 1))->AllocatorInstance).
                       InlineData[(int)uVar8].Pad[2]) {
              return false;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar2);
        }
        return true;
      }
    }
  }
  else if (DVar1 == RayTracing) {
    if ((((*(longlong *)(this->RayTracingDesc).ShaderHash.Hash != 0) ||
         (*(longlong *)((this->RayTracingDesc).ShaderHash.Hash + 8) != 0)) ||
        (*(int *)((this->RayTracingDesc).ShaderHash.Hash + 0x10) != 0)) &&
       ((byte)((this->RayTracingDesc).Frequency - SF_NumStandardFrequencies) < 4)) {
      return true;
    }
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineFileCache.cpp"
                       ,0x463,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return false;
}

