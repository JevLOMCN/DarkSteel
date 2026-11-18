// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// MeshPipelineStateStream @ 145aafd80

FD3D12_MESH_PIPELINE_STATE_STREAM * __thiscall
FD3D12_GRAPHICS_PIPELINE_STATE_DESC::MeshPipelineStateStream
          (FD3D12_GRAPHICS_PIPELINE_STATE_DESC *this,
          FD3D12_MESH_PIPELINE_STATE_STREAM *__return_storage_ptr__)

{
  D3D12_CONSERVATIVE_RASTERIZATION_MODE DVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  D3D12_DEPTH_WRITE_MASK DVar10;
  D3D12_COMPARISON_FUNC DVar11;
  int iVar12;
  uchar uVar13;
  uchar uVar14;
  undefined2 uVar15;
  D3D12_STENCIL_OP DVar16;
  D3D12_STENCIL_OP DVar17;
  D3D12_STENCIL_OP DVar18;
  D3D12_STENCIL_OP DVar19;
  D3D12_STENCIL_OP DVar20;
  D3D12_FILL_MODE DVar21;
  D3D12_CULL_MODE DVar22;
  float fVar23;
  float fVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  undefined8 *puVar29;
  D3D12_BLEND_DESC *pDVar30;
  CD3DX12_BLEND_DESC *pCVar31;
  bool bVar32;
  FD3D12_MESH_PIPELINE_STATE_STREAM *pFVar33;
  D3D12_BLEND_DESC *pDVar34;
  undefined8 *puVar35;
  CD3DX12_BLEND_DESC *pCVar36;
  longlong lVar37;
  longlong lVar38;
  undefined8 local_158 [42];
  
  (__return_storage_ptr__->NodeMask).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_NODE_MASK;
  (__return_storage_ptr__->NodeMask).pssInner = 0;
  (__return_storage_ptr__->PrimitiveTopologyType).pssType =
       D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_PRIMITIVE_TOPOLOGY;
  (__return_storage_ptr__->PrimitiveTopologyType).pssInner = D3D12_PRIMITIVE_TOPOLOGY_TYPE_UNDEFINED
  ;
  (__return_storage_ptr__->pRootSignature).pssType =
       D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_ROOT_SIGNATURE;
  (__return_storage_ptr__->pRootSignature).pssInner = (ID3D12RootSignature *)0x0;
  (__return_storage_ptr__->MS).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_MS;
  lVar38 = 2;
  (__return_storage_ptr__->MS).pssInner.pShaderBytecode = (void *)0x0;
  (__return_storage_ptr__->MS).pssInner.BytecodeLength = 0;
  (__return_storage_ptr__->AS).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_AS;
  (__return_storage_ptr__->AS).pssInner.pShaderBytecode = (void *)0x0;
  (__return_storage_ptr__->AS).pssInner.BytecodeLength = 0;
  (__return_storage_ptr__->PS).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_PS;
  (__return_storage_ptr__->PS).pssInner.pShaderBytecode = (void *)0x0;
  (__return_storage_ptr__->PS).pssInner.BytecodeLength = 0;
  CD3DX12_PIPELINE_STATE_STREAM_SUBOBJECT<CD3DX12_BLEND_DESC,8,CD3DX12_DEFAULT>::
  CD3DX12_PIPELINE_STATE_STREAM_SUBOBJECT<CD3DX12_BLEND_DESC,8,CD3DX12_DEFAULT>
            (&__return_storage_ptr__->BlendState);
  (__return_storage_ptr__->DepthStencilState).pssType =
       D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_DEPTH_STENCIL1;
  *(undefined4 *)&(__return_storage_ptr__->DepthStencilState).pssInner = 1;
  *(undefined4 *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x4 = 1;
  *(undefined8 *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x8 = 2;
  *(undefined2 *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x10 = 0xffff;
  *(undefined4 *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x14 = 1;
  *(undefined4 *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x18 = 1;
  *(undefined4 *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x1c = 1;
  *(undefined4 *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x20 = 8;
  *(undefined4 *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x24 = 1;
  *(undefined4 *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x28 = 1;
  *(undefined4 *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x2c = 1;
  *(undefined8 *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x30 = 8;
  (__return_storage_ptr__->DSVFormat).pssType =
       D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_DEPTH_STENCIL_FORMAT;
  (__return_storage_ptr__->DSVFormat).pssInner = DXGI_FORMAT_UNKNOWN;
  (__return_storage_ptr__->RasterizerState).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_RASTERIZER
  ;
  *(undefined4 *)&(__return_storage_ptr__->RasterizerState).pssInner = 3;
  *(undefined8 *)&(__return_storage_ptr__->RasterizerState).pssInner.field_0x4 = 3;
  *(undefined8 *)&(__return_storage_ptr__->RasterizerState).pssInner.field_0xc = 0;
  *(undefined4 *)&(__return_storage_ptr__->RasterizerState).pssInner.field_0x14 = 0;
  *(undefined8 *)&(__return_storage_ptr__->RasterizerState).pssInner.field_0x18 = 1;
  *(undefined8 *)&(__return_storage_ptr__->RasterizerState).pssInner.field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->RasterizerState).pssInner.field_0x28 = 0;
  (__return_storage_ptr__->RTVFormats).pssType =
       D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_RENDER_TARGET_FORMATS;
  (__return_storage_ptr__->RTVFormats).pssInner.RTFormats[0] = DXGI_FORMAT_UNKNOWN;
  (__return_storage_ptr__->RTVFormats).pssInner.RTFormats[1] = DXGI_FORMAT_UNKNOWN;
  (__return_storage_ptr__->RTVFormats).pssInner.RTFormats[2] = DXGI_FORMAT_UNKNOWN;
  (__return_storage_ptr__->RTVFormats).pssInner.RTFormats[3] = DXGI_FORMAT_UNKNOWN;
  (__return_storage_ptr__->RTVFormats).pssInner.RTFormats[4] = DXGI_FORMAT_UNKNOWN;
  (__return_storage_ptr__->RTVFormats).pssInner.RTFormats[5] = DXGI_FORMAT_UNKNOWN;
  (__return_storage_ptr__->RTVFormats).pssInner.RTFormats[6] = DXGI_FORMAT_UNKNOWN;
  (__return_storage_ptr__->RTVFormats).pssInner.RTFormats[7] = DXGI_FORMAT_UNKNOWN;
  (__return_storage_ptr__->RTVFormats).pssInner.NumRenderTargets = 0;
  (__return_storage_ptr__->SampleDesc).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_SAMPLE_DESC;
  (__return_storage_ptr__->SampleDesc).pssInner.Count = 1;
  (__return_storage_ptr__->SampleDesc).pssInner.Quality = 0;
  (__return_storage_ptr__->SampleMask).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_SAMPLE_MASK;
  (__return_storage_ptr__->SampleMask).pssInner = 0xffffffff;
  (__return_storage_ptr__->CachedPSO).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_CACHED_PSO;
  (__return_storage_ptr__->CachedPSO).pssInner.pCachedBlob = (void *)0x0;
  (__return_storage_ptr__->CachedPSO).pssInner.CachedBlobSizeInBytes = 0;
  if (this->Flags != D3D12_PIPELINE_STATE_FLAG_NONE) {
    bVar32 = ::FDebug::CheckVerifyFailedImpl2
                       ("this->Flags == D3D12_PIPELINE_STATE_FLAG_NONE",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
                        ,0x4d,L"");
    if (bVar32) {
      pcVar3 = (code *)swi(3);
      pFVar33 = (FD3D12_MESH_PIPELINE_STATE_STREAM *)(*pcVar3)();
      return pFVar33;
    }
  }
  (__return_storage_ptr__->NodeMask).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_NODE_MASK;
  lVar37 = 2;
  (__return_storage_ptr__->NodeMask).pssInner = this->NodeMask;
  (__return_storage_ptr__->pRootSignature).pssType =
       D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_ROOT_SIGNATURE;
  (__return_storage_ptr__->pRootSignature).pssInner = this->pRootSignature;
  (__return_storage_ptr__->PrimitiveTopologyType).pssType =
       D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_PRIMITIVE_TOPOLOGY;
  (__return_storage_ptr__->PrimitiveTopologyType).pssInner = this->PrimitiveTopologyType;
  (__return_storage_ptr__->MS).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_MS;
  uVar4 = (this->MS).BytecodeLength;
  (__return_storage_ptr__->MS).pssInner.pShaderBytecode = (this->MS).pShaderBytecode;
  (__return_storage_ptr__->MS).pssInner.BytecodeLength = uVar4;
  (__return_storage_ptr__->AS).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_AS;
  uVar4 = (this->AS).BytecodeLength;
  (__return_storage_ptr__->AS).pssInner.pShaderBytecode = (this->AS).pShaderBytecode;
  (__return_storage_ptr__->AS).pssInner.BytecodeLength = uVar4;
  (__return_storage_ptr__->PS).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_PS;
  uVar4 = (this->PS).BytecodeLength;
  (__return_storage_ptr__->PS).pssInner.pShaderBytecode = (this->PS).pShaderBytecode;
  (__return_storage_ptr__->PS).pssInner.BytecodeLength = uVar4;
  pDVar30 = &this->BlendState;
  puVar29 = local_158;
  do {
    puVar35 = puVar29;
    pDVar34 = pDVar30;
    uVar2 = *(undefined8 *)pDVar34->RenderTarget;
    uVar5 = *(undefined8 *)&pDVar34->RenderTarget[0].SrcBlend;
    uVar6 = *(undefined8 *)&pDVar34->RenderTarget[0].BlendOp;
    *puVar35 = *(undefined8 *)pDVar34;
    puVar35[1] = uVar2;
    uVar2 = *(undefined8 *)&pDVar34->RenderTarget[0].DestBlendAlpha;
    uVar7 = *(undefined8 *)&pDVar34->RenderTarget[0].LogicOp;
    puVar35[2] = uVar5;
    puVar35[3] = uVar6;
    uVar5 = *(undefined8 *)(pDVar34->RenderTarget + 1);
    uVar6 = *(undefined8 *)&pDVar34->RenderTarget[1].SrcBlend;
    puVar35[4] = uVar2;
    puVar35[5] = uVar7;
    uVar2 = *(undefined8 *)&pDVar34->RenderTarget[1].BlendOp;
    uVar7 = *(undefined8 *)&pDVar34->RenderTarget[1].DestBlendAlpha;
    puVar35[6] = uVar5;
    puVar35[7] = uVar6;
    uVar5 = *(undefined8 *)&pDVar34->RenderTarget[1].LogicOp;
    uVar6 = *(undefined8 *)(pDVar34->RenderTarget + 2);
    puVar35[8] = uVar2;
    puVar35[9] = uVar7;
    uVar2 = *(undefined8 *)&pDVar34->RenderTarget[2].SrcBlend;
    uVar7 = *(undefined8 *)&pDVar34->RenderTarget[2].BlendOp;
    puVar35[10] = uVar5;
    puVar35[0xb] = uVar6;
    uVar5 = *(undefined8 *)&pDVar34->RenderTarget[2].DestBlendAlpha;
    uVar6 = *(undefined8 *)&pDVar34->RenderTarget[2].LogicOp;
    puVar35[0xc] = uVar2;
    puVar35[0xd] = uVar7;
    puVar35[0xe] = uVar5;
    puVar35[0xf] = uVar6;
    lVar37 = lVar37 + -1;
    pDVar30 = (D3D12_BLEND_DESC *)(pDVar34->RenderTarget + 3);
    puVar29 = puVar35 + 0x10;
  } while (lVar37 != 0);
  uVar2 = *(undefined8 *)&pDVar34->RenderTarget[3].SrcBlend;
  uVar5 = *(undefined8 *)&pDVar34->RenderTarget[3].BlendOp;
  uVar6 = *(undefined8 *)&pDVar34->RenderTarget[3].DestBlendAlpha;
  puVar35[0x10] = *(undefined8 *)(pDVar34->RenderTarget + 3);
  puVar35[0x11] = uVar2;
  uVar7 = *(undefined8 *)&pDVar34->RenderTarget[3].LogicOp;
  uVar8 = *(undefined8 *)(pDVar34->RenderTarget + 4);
  puVar35[0x12] = uVar5;
  puVar35[0x13] = uVar6;
  uVar5 = *(undefined8 *)&pDVar34->RenderTarget[4].SrcBlend;
  uVar6 = *(undefined8 *)&pDVar34->RenderTarget[4].BlendOp;
  uVar2 = *(undefined8 *)&pDVar34->RenderTarget[4].DestBlendAlpha;
  puVar35[0x14] = uVar7;
  puVar35[0x15] = uVar8;
  (__return_storage_ptr__->BlendState).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_BLEND;
  puVar35[0x16] = uVar5;
  puVar35[0x17] = uVar6;
  puVar35[0x18] = uVar2;
  puVar29 = local_158;
  pCVar31 = &(__return_storage_ptr__->BlendState).pssInner;
  do {
    pCVar36 = pCVar31;
    puVar35 = puVar29;
    uVar2 = puVar35[1];
    uVar5 = puVar35[2];
    uVar6 = puVar35[3];
    *(undefined8 *)pCVar36 = *puVar35;
    *(undefined8 *)&pCVar36->field_0x8 = uVar2;
    uVar2 = puVar35[4];
    uVar7 = puVar35[5];
    *(undefined8 *)&pCVar36->field_0x10 = uVar5;
    *(undefined8 *)&pCVar36->field_0x18 = uVar6;
    uVar5 = puVar35[6];
    uVar6 = puVar35[7];
    *(undefined8 *)&pCVar36->field_0x20 = uVar2;
    *(undefined8 *)&pCVar36->field_0x28 = uVar7;
    uVar2 = puVar35[8];
    uVar7 = puVar35[9];
    *(undefined8 *)&pCVar36->field_0x30 = uVar5;
    *(undefined8 *)&pCVar36->field_0x38 = uVar6;
    uVar5 = puVar35[10];
    uVar6 = puVar35[0xb];
    *(undefined8 *)&pCVar36->field_0x40 = uVar2;
    *(undefined8 *)&pCVar36->field_0x48 = uVar7;
    uVar2 = puVar35[0xc];
    uVar7 = puVar35[0xd];
    *(undefined8 *)&pCVar36->field_0x50 = uVar5;
    *(undefined8 *)&pCVar36->field_0x58 = uVar6;
    uVar5 = puVar35[0xe];
    uVar6 = puVar35[0xf];
    *(undefined8 *)&pCVar36->field_0x60 = uVar2;
    *(undefined8 *)&pCVar36->field_0x68 = uVar7;
    *(undefined8 *)&pCVar36->field_0x70 = uVar5;
    *(undefined8 *)&pCVar36->field_0x78 = uVar6;
    lVar38 = lVar38 + -1;
    puVar29 = puVar35 + 0x10;
    pCVar31 = (CD3DX12_BLEND_DESC *)&pCVar36->field_0x80;
  } while (lVar38 != 0);
  uVar2 = puVar35[0x11];
  uVar5 = puVar35[0x12];
  uVar6 = puVar35[0x13];
  *(undefined8 *)&pCVar36->field_0x80 = puVar35[0x10];
  *(undefined8 *)&pCVar36->field_0x88 = uVar2;
  *(undefined8 *)&pCVar36->field_0x90 = uVar5;
  *(undefined8 *)&pCVar36->field_0x98 = uVar6;
  uVar5 = puVar35[0x15];
  uVar6 = puVar35[0x16];
  uVar7 = puVar35[0x17];
  uVar2 = puVar35[0x18];
  *(undefined8 *)&pCVar36->field_0xa0 = puVar35[0x14];
  *(undefined8 *)&pCVar36->field_0xa8 = uVar5;
  *(undefined8 *)&pCVar36->field_0xb0 = uVar6;
  *(undefined8 *)&pCVar36->field_0xb8 = uVar7;
  *(undefined8 *)&pCVar36->field_0xc0 = uVar2;
  iVar9 = (this->DepthStencilState).DepthEnable;
  DVar10 = (this->DepthStencilState).DepthWriteMask;
  DVar11 = (this->DepthStencilState).DepthFunc;
  iVar12 = (this->DepthStencilState).StencilEnable;
  uVar13 = (this->DepthStencilState).StencilReadMask;
  uVar14 = (this->DepthStencilState).StencilWriteMask;
  uVar15 = *(undefined2 *)&(this->DepthStencilState).field_0x12;
  DVar16 = (this->DepthStencilState).FrontFace.StencilFailOp;
  DVar17 = (this->DepthStencilState).FrontFace.StencilDepthFailOp;
  DVar18 = (this->DepthStencilState).FrontFace.StencilPassOp;
  uVar2 = *(undefined8 *)&(this->DepthStencilState).BackFace.StencilFunc;
  uVar5 = *(undefined8 *)&(this->DepthStencilState).FrontFace.StencilFunc;
  DVar19 = (this->DepthStencilState).BackFace.StencilDepthFailOp;
  DVar20 = (this->DepthStencilState).BackFace.StencilPassOp;
  (__return_storage_ptr__->DepthStencilState).pssType =
       D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_DEPTH_STENCIL1;
  *(int *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x0 = iVar9;
  *(D3D12_DEPTH_WRITE_MASK *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x4 =
       DVar10;
  *(D3D12_COMPARISON_FUNC *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x8 = DVar11
  ;
  *(int *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0xc = iVar12;
  (__return_storage_ptr__->DepthStencilState).pssInner.field_0x10 = uVar13;
  (__return_storage_ptr__->DepthStencilState).pssInner.field_0x11 = uVar14;
  *(undefined2 *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x12 = uVar15;
  *(D3D12_STENCIL_OP *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x14 = DVar16;
  *(D3D12_STENCIL_OP *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x18 = DVar17;
  *(D3D12_STENCIL_OP *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x1c = DVar18;
  *(undefined8 *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x20 = uVar5;
  *(D3D12_STENCIL_OP *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x28 = DVar19;
  *(D3D12_STENCIL_OP *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x2c = DVar20;
  *(undefined8 *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x30 = uVar2;
  (__return_storage_ptr__->DSVFormat).pssType =
       D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_DEPTH_STENCIL_FORMAT;
  (__return_storage_ptr__->DSVFormat).pssInner = this->DSVFormat;
  DVar1 = (this->RasterizerState).ConservativeRaster;
  DVar21 = (this->RasterizerState).FillMode;
  DVar22 = (this->RasterizerState).CullMode;
  iVar9 = (this->RasterizerState).FrontCounterClockwise;
  iVar12 = (this->RasterizerState).DepthBias;
  iVar27 = (this->RasterizerState).AntialiasedLineEnable;
  uVar28 = (this->RasterizerState).ForcedSampleCount;
  fVar23 = (this->RasterizerState).DepthBiasClamp;
  fVar24 = (this->RasterizerState).SlopeScaledDepthBias;
  iVar25 = (this->RasterizerState).DepthClipEnable;
  iVar26 = (this->RasterizerState).MultisampleEnable;
  (__return_storage_ptr__->RasterizerState).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_RASTERIZER
  ;
  *(D3D12_FILL_MODE *)&(__return_storage_ptr__->RasterizerState).pssInner.field_0x0 = DVar21;
  *(D3D12_CULL_MODE *)&(__return_storage_ptr__->RasterizerState).pssInner.field_0x4 = DVar22;
  *(int *)&(__return_storage_ptr__->RasterizerState).pssInner.field_0x8 = iVar9;
  *(int *)&(__return_storage_ptr__->RasterizerState).pssInner.field_0xc = iVar12;
  *(float *)&(__return_storage_ptr__->RasterizerState).pssInner.field_0x10 = fVar23;
  *(float *)&(__return_storage_ptr__->RasterizerState).pssInner.field_0x14 = fVar24;
  *(int *)&(__return_storage_ptr__->RasterizerState).pssInner.field_0x18 = iVar25;
  *(int *)&(__return_storage_ptr__->RasterizerState).pssInner.field_0x1c = iVar26;
  *(int *)&(__return_storage_ptr__->RasterizerState).pssInner.field_0x20 = iVar27;
  *(uint *)&(__return_storage_ptr__->RasterizerState).pssInner.field_0x24 = uVar28;
  *(D3D12_CONSERVATIVE_RASTERIZATION_MODE *)
   &(__return_storage_ptr__->RasterizerState).pssInner.field_0x28 = DVar1;
  (__return_storage_ptr__->RTVFormats).pssType =
       D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_RENDER_TARGET_FORMATS;
  uVar2 = *(undefined8 *)((this->RTFormatArray).RTFormats + 2);
  *(undefined8 *)(__return_storage_ptr__->RTVFormats).pssInner.RTFormats =
       *(undefined8 *)(this->RTFormatArray).RTFormats;
  *(undefined8 *)((__return_storage_ptr__->RTVFormats).pssInner.RTFormats + 2) = uVar2;
  uVar2 = *(undefined8 *)((this->RTFormatArray).RTFormats + 6);
  *(undefined8 *)((__return_storage_ptr__->RTVFormats).pssInner.RTFormats + 4) =
       *(undefined8 *)((this->RTFormatArray).RTFormats + 4);
  *(undefined8 *)((__return_storage_ptr__->RTVFormats).pssInner.RTFormats + 6) = uVar2;
  (__return_storage_ptr__->RTVFormats).pssInner.NumRenderTargets =
       (this->RTFormatArray).NumRenderTargets;
  (__return_storage_ptr__->SampleDesc).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_SAMPLE_DESC;
  (__return_storage_ptr__->SampleDesc).pssInner = this->SampleDesc;
  (__return_storage_ptr__->SampleMask).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_SAMPLE_MASK;
  (__return_storage_ptr__->SampleMask).pssInner = this->SampleMask;
  (__return_storage_ptr__->CachedPSO).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_CACHED_PSO;
  uVar4 = (this->CachedPSO).CachedBlobSizeInBytes;
  (__return_storage_ptr__->CachedPSO).pssInner.pCachedBlob = (this->CachedPSO).pCachedBlob;
  (__return_storage_ptr__->CachedPSO).pssInner.CachedBlobSizeInBytes = uVar4;
  return __return_storage_ptr__;
}

// PipelineStateStream @ 145ab0ae0

FD3D12_GRAPHICS_PIPELINE_STATE_STREAM * __thiscall
FD3D12_GRAPHICS_PIPELINE_STATE_DESC::PipelineStateStream
          (FD3D12_GRAPHICS_PIPELINE_STATE_DESC *this,
          FD3D12_GRAPHICS_PIPELINE_STATE_STREAM *__return_storage_ptr__)

{
  D3D12_CONSERVATIVE_RASTERIZATION_MODE DVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulong64 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  D3D12_DEPTH_WRITE_MASK DVar12;
  D3D12_COMPARISON_FUNC DVar13;
  int iVar14;
  uchar uVar15;
  uchar uVar16;
  undefined2 uVar17;
  D3D12_STENCIL_OP DVar18;
  D3D12_STENCIL_OP DVar19;
  D3D12_STENCIL_OP DVar20;
  D3D12_STENCIL_OP DVar21;
  D3D12_STENCIL_OP DVar22;
  D3D12_FILL_MODE DVar23;
  D3D12_CULL_MODE DVar24;
  float fVar25;
  float fVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  undefined8 *puVar30;
  D3D12_BLEND_DESC *pDVar31;
  CD3DX12_BLEND_DESC *pCVar32;
  bool bVar33;
  FD3D12_GRAPHICS_PIPELINE_STATE_STREAM *pFVar34;
  D3D12_BLEND_DESC *pDVar35;
  undefined8 *puVar36;
  CD3DX12_BLEND_DESC *pCVar37;
  longlong lVar38;
  longlong lVar39;
  undefined8 local_158 [42];
  
  (__return_storage_ptr__->NodeMask).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_NODE_MASK;
  (__return_storage_ptr__->NodeMask).pssInner = 0;
  (__return_storage_ptr__->InputLayout).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_INPUT_LAYOUT;
  (__return_storage_ptr__->pRootSignature).pssType =
       D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_ROOT_SIGNATURE;
  (__return_storage_ptr__->pRootSignature).pssInner = (ID3D12RootSignature *)0x0;
  (__return_storage_ptr__->InputLayout).pssInner.pInputElementDescs =
       (D3D12_INPUT_ELEMENT_DESC *)0x0;
  *(undefined8 *)&(__return_storage_ptr__->InputLayout).pssInner.NumElements = 0;
  (__return_storage_ptr__->IBStripCutValue).pssType =
       D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_IB_STRIP_CUT_VALUE;
  (__return_storage_ptr__->IBStripCutValue).pssInner = D3D12_INDEX_BUFFER_STRIP_CUT_VALUE_DISABLED;
  lVar39 = 2;
  (__return_storage_ptr__->PrimitiveTopologyType).pssType =
       D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_PRIMITIVE_TOPOLOGY;
  (__return_storage_ptr__->PrimitiveTopologyType).pssInner = D3D12_PRIMITIVE_TOPOLOGY_TYPE_UNDEFINED
  ;
  (__return_storage_ptr__->VS).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_VS;
  (__return_storage_ptr__->VS).pssInner.pShaderBytecode = (void *)0x0;
  (__return_storage_ptr__->VS).pssInner.BytecodeLength = 0;
  (__return_storage_ptr__->GS).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_GS;
  (__return_storage_ptr__->GS).pssInner.pShaderBytecode = (void *)0x0;
  (__return_storage_ptr__->GS).pssInner.BytecodeLength = 0;
  (__return_storage_ptr__->HS).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_HS;
  (__return_storage_ptr__->HS).pssInner.pShaderBytecode = (void *)0x0;
  (__return_storage_ptr__->HS).pssInner.BytecodeLength = 0;
  (__return_storage_ptr__->DS).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_DS;
  (__return_storage_ptr__->DS).pssInner.pShaderBytecode = (void *)0x0;
  (__return_storage_ptr__->DS).pssInner.BytecodeLength = 0;
  (__return_storage_ptr__->PS).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_PS;
  (__return_storage_ptr__->PS).pssInner.pShaderBytecode = (void *)0x0;
  (__return_storage_ptr__->PS).pssInner.BytecodeLength = 0;
  CD3DX12_PIPELINE_STATE_STREAM_SUBOBJECT<CD3DX12_BLEND_DESC,8,CD3DX12_DEFAULT>::
  CD3DX12_PIPELINE_STATE_STREAM_SUBOBJECT<CD3DX12_BLEND_DESC,8,CD3DX12_DEFAULT>
            (&__return_storage_ptr__->BlendState);
  (__return_storage_ptr__->DepthStencilState).pssType =
       D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_DEPTH_STENCIL1;
  *(undefined4 *)&(__return_storage_ptr__->DepthStencilState).pssInner = 1;
  *(undefined4 *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x4 = 1;
  *(undefined8 *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x8 = 2;
  *(undefined2 *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x10 = 0xffff;
  *(undefined4 *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x14 = 1;
  *(undefined4 *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x18 = 1;
  *(undefined4 *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x1c = 1;
  *(undefined4 *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x20 = 8;
  *(undefined4 *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x24 = 1;
  *(undefined4 *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x28 = 1;
  *(undefined4 *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x2c = 1;
  *(undefined8 *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x30 = 8;
  (__return_storage_ptr__->DSVFormat).pssType =
       D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_DEPTH_STENCIL_FORMAT;
  (__return_storage_ptr__->DSVFormat).pssInner = DXGI_FORMAT_UNKNOWN;
  (__return_storage_ptr__->RasterizerState).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_RASTERIZER
  ;
  *(undefined4 *)&(__return_storage_ptr__->RasterizerState).pssInner = 3;
  *(undefined8 *)&(__return_storage_ptr__->RasterizerState).pssInner.field_0x4 = 3;
  *(undefined8 *)&(__return_storage_ptr__->RasterizerState).pssInner.field_0xc = 0;
  *(undefined4 *)&(__return_storage_ptr__->RasterizerState).pssInner.field_0x14 = 0;
  *(undefined8 *)&(__return_storage_ptr__->RasterizerState).pssInner.field_0x18 = 1;
  *(undefined8 *)&(__return_storage_ptr__->RasterizerState).pssInner.field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->RasterizerState).pssInner.field_0x28 = 0;
  (__return_storage_ptr__->RTVFormats).pssType =
       D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_RENDER_TARGET_FORMATS;
  (__return_storage_ptr__->RTVFormats).pssInner.RTFormats[0] = DXGI_FORMAT_UNKNOWN;
  (__return_storage_ptr__->RTVFormats).pssInner.RTFormats[1] = DXGI_FORMAT_UNKNOWN;
  (__return_storage_ptr__->RTVFormats).pssInner.RTFormats[2] = DXGI_FORMAT_UNKNOWN;
  (__return_storage_ptr__->RTVFormats).pssInner.RTFormats[3] = DXGI_FORMAT_UNKNOWN;
  (__return_storage_ptr__->RTVFormats).pssInner.RTFormats[4] = DXGI_FORMAT_UNKNOWN;
  (__return_storage_ptr__->RTVFormats).pssInner.RTFormats[5] = DXGI_FORMAT_UNKNOWN;
  (__return_storage_ptr__->RTVFormats).pssInner.RTFormats[6] = DXGI_FORMAT_UNKNOWN;
  (__return_storage_ptr__->RTVFormats).pssInner.RTFormats[7] = DXGI_FORMAT_UNKNOWN;
  (__return_storage_ptr__->RTVFormats).pssInner.NumRenderTargets = 0;
  (__return_storage_ptr__->SampleDesc).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_SAMPLE_DESC;
  (__return_storage_ptr__->SampleDesc).pssInner.Count = 1;
  (__return_storage_ptr__->SampleDesc).pssInner.Quality = 0;
  (__return_storage_ptr__->SampleMask).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_SAMPLE_MASK;
  (__return_storage_ptr__->SampleMask).pssInner = 0xffffffff;
  (__return_storage_ptr__->CachedPSO).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_CACHED_PSO;
  (__return_storage_ptr__->CachedPSO).pssInner.pCachedBlob = (void *)0x0;
  (__return_storage_ptr__->CachedPSO).pssInner.CachedBlobSizeInBytes = 0;
  if (this->Flags != D3D12_PIPELINE_STATE_FLAG_NONE) {
    bVar33 = ::FDebug::CheckVerifyFailedImpl2
                       ("this->Flags == D3D12_PIPELINE_STATE_FLAG_NONE",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\Windows\\WindowsD3D12PipelineState.cpp"
                        ,0x35,L"");
    if (bVar33) {
      pcVar3 = (code *)swi(3);
      pFVar34 = (FD3D12_GRAPHICS_PIPELINE_STATE_STREAM *)(*pcVar3)();
      return pFVar34;
    }
  }
  (__return_storage_ptr__->NodeMask).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_NODE_MASK;
  lVar38 = 2;
  (__return_storage_ptr__->NodeMask).pssInner = this->NodeMask;
  (__return_storage_ptr__->pRootSignature).pssType =
       D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_ROOT_SIGNATURE;
  (__return_storage_ptr__->pRootSignature).pssInner = this->pRootSignature;
  (__return_storage_ptr__->InputLayout).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_INPUT_LAYOUT;
  uVar9 = (this->InputLayout).NumElements;
  uVar10 = *(undefined4 *)&(this->InputLayout).field_0xc;
  (__return_storage_ptr__->InputLayout).pssInner.pInputElementDescs =
       (this->InputLayout).pInputElementDescs;
  (__return_storage_ptr__->InputLayout).pssInner.NumElements = uVar9;
  *(undefined4 *)&(__return_storage_ptr__->InputLayout).pssInner.field_0xc = uVar10;
  (__return_storage_ptr__->IBStripCutValue).pssType =
       D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_IB_STRIP_CUT_VALUE;
  (__return_storage_ptr__->IBStripCutValue).pssInner = this->IBStripCutValue;
  (__return_storage_ptr__->PrimitiveTopologyType).pssType =
       D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_PRIMITIVE_TOPOLOGY;
  (__return_storage_ptr__->PrimitiveTopologyType).pssInner = this->PrimitiveTopologyType;
  (__return_storage_ptr__->VS).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_VS;
  uVar4 = (this->VS).BytecodeLength;
  (__return_storage_ptr__->VS).pssInner.pShaderBytecode = (this->VS).pShaderBytecode;
  (__return_storage_ptr__->VS).pssInner.BytecodeLength = uVar4;
  (__return_storage_ptr__->GS).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_GS;
  uVar4 = (this->GS).BytecodeLength;
  (__return_storage_ptr__->GS).pssInner.pShaderBytecode = (this->GS).pShaderBytecode;
  (__return_storage_ptr__->GS).pssInner.BytecodeLength = uVar4;
  (__return_storage_ptr__->PS).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_PS;
  uVar4 = (this->PS).BytecodeLength;
  (__return_storage_ptr__->PS).pssInner.pShaderBytecode = (this->PS).pShaderBytecode;
  (__return_storage_ptr__->PS).pssInner.BytecodeLength = uVar4;
  pDVar31 = &this->BlendState;
  puVar30 = local_158;
  do {
    puVar36 = puVar30;
    pDVar35 = pDVar31;
    uVar2 = *(undefined8 *)pDVar35->RenderTarget;
    uVar5 = *(undefined8 *)&pDVar35->RenderTarget[0].SrcBlend;
    uVar6 = *(undefined8 *)&pDVar35->RenderTarget[0].BlendOp;
    *puVar36 = *(undefined8 *)pDVar35;
    puVar36[1] = uVar2;
    uVar2 = *(undefined8 *)&pDVar35->RenderTarget[0].DestBlendAlpha;
    uVar7 = *(undefined8 *)&pDVar35->RenderTarget[0].LogicOp;
    puVar36[2] = uVar5;
    puVar36[3] = uVar6;
    uVar5 = *(undefined8 *)(pDVar35->RenderTarget + 1);
    uVar6 = *(undefined8 *)&pDVar35->RenderTarget[1].SrcBlend;
    puVar36[4] = uVar2;
    puVar36[5] = uVar7;
    uVar2 = *(undefined8 *)&pDVar35->RenderTarget[1].BlendOp;
    uVar7 = *(undefined8 *)&pDVar35->RenderTarget[1].DestBlendAlpha;
    puVar36[6] = uVar5;
    puVar36[7] = uVar6;
    uVar5 = *(undefined8 *)&pDVar35->RenderTarget[1].LogicOp;
    uVar6 = *(undefined8 *)(pDVar35->RenderTarget + 2);
    puVar36[8] = uVar2;
    puVar36[9] = uVar7;
    uVar2 = *(undefined8 *)&pDVar35->RenderTarget[2].SrcBlend;
    uVar7 = *(undefined8 *)&pDVar35->RenderTarget[2].BlendOp;
    puVar36[10] = uVar5;
    puVar36[0xb] = uVar6;
    uVar5 = *(undefined8 *)&pDVar35->RenderTarget[2].DestBlendAlpha;
    uVar6 = *(undefined8 *)&pDVar35->RenderTarget[2].LogicOp;
    puVar36[0xc] = uVar2;
    puVar36[0xd] = uVar7;
    puVar36[0xe] = uVar5;
    puVar36[0xf] = uVar6;
    lVar38 = lVar38 + -1;
    pDVar31 = (D3D12_BLEND_DESC *)(pDVar35->RenderTarget + 3);
    puVar30 = puVar36 + 0x10;
  } while (lVar38 != 0);
  uVar2 = *(undefined8 *)&pDVar35->RenderTarget[3].SrcBlend;
  uVar5 = *(undefined8 *)&pDVar35->RenderTarget[3].BlendOp;
  uVar6 = *(undefined8 *)&pDVar35->RenderTarget[3].DestBlendAlpha;
  puVar36[0x10] = *(undefined8 *)(pDVar35->RenderTarget + 3);
  puVar36[0x11] = uVar2;
  uVar7 = *(undefined8 *)&pDVar35->RenderTarget[3].LogicOp;
  uVar8 = *(undefined8 *)(pDVar35->RenderTarget + 4);
  puVar36[0x12] = uVar5;
  puVar36[0x13] = uVar6;
  uVar5 = *(undefined8 *)&pDVar35->RenderTarget[4].SrcBlend;
  uVar6 = *(undefined8 *)&pDVar35->RenderTarget[4].BlendOp;
  uVar2 = *(undefined8 *)&pDVar35->RenderTarget[4].DestBlendAlpha;
  puVar36[0x14] = uVar7;
  puVar36[0x15] = uVar8;
  (__return_storage_ptr__->BlendState).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_BLEND;
  puVar36[0x16] = uVar5;
  puVar36[0x17] = uVar6;
  puVar36[0x18] = uVar2;
  puVar30 = local_158;
  pCVar32 = &(__return_storage_ptr__->BlendState).pssInner;
  do {
    pCVar37 = pCVar32;
    puVar36 = puVar30;
    uVar2 = puVar36[1];
    uVar5 = puVar36[2];
    uVar6 = puVar36[3];
    *(undefined8 *)pCVar37 = *puVar36;
    *(undefined8 *)&pCVar37->field_0x8 = uVar2;
    uVar2 = puVar36[4];
    uVar7 = puVar36[5];
    *(undefined8 *)&pCVar37->field_0x10 = uVar5;
    *(undefined8 *)&pCVar37->field_0x18 = uVar6;
    uVar5 = puVar36[6];
    uVar6 = puVar36[7];
    *(undefined8 *)&pCVar37->field_0x20 = uVar2;
    *(undefined8 *)&pCVar37->field_0x28 = uVar7;
    uVar2 = puVar36[8];
    uVar7 = puVar36[9];
    *(undefined8 *)&pCVar37->field_0x30 = uVar5;
    *(undefined8 *)&pCVar37->field_0x38 = uVar6;
    uVar5 = puVar36[10];
    uVar6 = puVar36[0xb];
    *(undefined8 *)&pCVar37->field_0x40 = uVar2;
    *(undefined8 *)&pCVar37->field_0x48 = uVar7;
    uVar2 = puVar36[0xc];
    uVar7 = puVar36[0xd];
    *(undefined8 *)&pCVar37->field_0x50 = uVar5;
    *(undefined8 *)&pCVar37->field_0x58 = uVar6;
    uVar5 = puVar36[0xe];
    uVar6 = puVar36[0xf];
    *(undefined8 *)&pCVar37->field_0x60 = uVar2;
    *(undefined8 *)&pCVar37->field_0x68 = uVar7;
    *(undefined8 *)&pCVar37->field_0x70 = uVar5;
    *(undefined8 *)&pCVar37->field_0x78 = uVar6;
    lVar39 = lVar39 + -1;
    puVar30 = puVar36 + 0x10;
    pCVar32 = (CD3DX12_BLEND_DESC *)&pCVar37->field_0x80;
  } while (lVar39 != 0);
  uVar2 = puVar36[0x11];
  uVar5 = puVar36[0x12];
  uVar6 = puVar36[0x13];
  *(undefined8 *)&pCVar37->field_0x80 = puVar36[0x10];
  *(undefined8 *)&pCVar37->field_0x88 = uVar2;
  *(undefined8 *)&pCVar37->field_0x90 = uVar5;
  *(undefined8 *)&pCVar37->field_0x98 = uVar6;
  uVar5 = puVar36[0x15];
  uVar6 = puVar36[0x16];
  uVar7 = puVar36[0x17];
  uVar2 = puVar36[0x18];
  *(undefined8 *)&pCVar37->field_0xa0 = puVar36[0x14];
  *(undefined8 *)&pCVar37->field_0xa8 = uVar5;
  *(undefined8 *)&pCVar37->field_0xb0 = uVar6;
  *(undefined8 *)&pCVar37->field_0xb8 = uVar7;
  *(undefined8 *)&pCVar37->field_0xc0 = uVar2;
  iVar11 = (this->DepthStencilState).DepthEnable;
  DVar12 = (this->DepthStencilState).DepthWriteMask;
  DVar13 = (this->DepthStencilState).DepthFunc;
  iVar14 = (this->DepthStencilState).StencilEnable;
  uVar15 = (this->DepthStencilState).StencilReadMask;
  uVar16 = (this->DepthStencilState).StencilWriteMask;
  uVar17 = *(undefined2 *)&(this->DepthStencilState).field_0x12;
  DVar18 = (this->DepthStencilState).FrontFace.StencilFailOp;
  DVar19 = (this->DepthStencilState).FrontFace.StencilDepthFailOp;
  DVar20 = (this->DepthStencilState).FrontFace.StencilPassOp;
  uVar2 = *(undefined8 *)&(this->DepthStencilState).BackFace.StencilFunc;
  uVar5 = *(undefined8 *)&(this->DepthStencilState).FrontFace.StencilFunc;
  DVar21 = (this->DepthStencilState).BackFace.StencilDepthFailOp;
  DVar22 = (this->DepthStencilState).BackFace.StencilPassOp;
  (__return_storage_ptr__->DepthStencilState).pssType =
       D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_DEPTH_STENCIL1;
  *(int *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x0 = iVar11;
  *(D3D12_DEPTH_WRITE_MASK *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x4 =
       DVar12;
  *(D3D12_COMPARISON_FUNC *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x8 = DVar13
  ;
  *(int *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0xc = iVar14;
  (__return_storage_ptr__->DepthStencilState).pssInner.field_0x10 = uVar15;
  (__return_storage_ptr__->DepthStencilState).pssInner.field_0x11 = uVar16;
  *(undefined2 *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x12 = uVar17;
  *(D3D12_STENCIL_OP *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x14 = DVar18;
  *(D3D12_STENCIL_OP *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x18 = DVar19;
  *(D3D12_STENCIL_OP *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x1c = DVar20;
  *(undefined8 *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x20 = uVar5;
  *(D3D12_STENCIL_OP *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x28 = DVar21;
  *(D3D12_STENCIL_OP *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x2c = DVar22;
  *(undefined8 *)&(__return_storage_ptr__->DepthStencilState).pssInner.field_0x30 = uVar2;
  (__return_storage_ptr__->DSVFormat).pssType =
       D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_DEPTH_STENCIL_FORMAT;
  (__return_storage_ptr__->DSVFormat).pssInner = this->DSVFormat;
  DVar1 = (this->RasterizerState).ConservativeRaster;
  DVar23 = (this->RasterizerState).FillMode;
  DVar24 = (this->RasterizerState).CullMode;
  iVar11 = (this->RasterizerState).FrontCounterClockwise;
  iVar14 = (this->RasterizerState).DepthBias;
  iVar29 = (this->RasterizerState).AntialiasedLineEnable;
  uVar9 = (this->RasterizerState).ForcedSampleCount;
  fVar25 = (this->RasterizerState).DepthBiasClamp;
  fVar26 = (this->RasterizerState).SlopeScaledDepthBias;
  iVar27 = (this->RasterizerState).DepthClipEnable;
  iVar28 = (this->RasterizerState).MultisampleEnable;
  (__return_storage_ptr__->RasterizerState).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_RASTERIZER
  ;
  *(D3D12_FILL_MODE *)&(__return_storage_ptr__->RasterizerState).pssInner.field_0x0 = DVar23;
  *(D3D12_CULL_MODE *)&(__return_storage_ptr__->RasterizerState).pssInner.field_0x4 = DVar24;
  *(int *)&(__return_storage_ptr__->RasterizerState).pssInner.field_0x8 = iVar11;
  *(int *)&(__return_storage_ptr__->RasterizerState).pssInner.field_0xc = iVar14;
  *(float *)&(__return_storage_ptr__->RasterizerState).pssInner.field_0x10 = fVar25;
  *(float *)&(__return_storage_ptr__->RasterizerState).pssInner.field_0x14 = fVar26;
  *(int *)&(__return_storage_ptr__->RasterizerState).pssInner.field_0x18 = iVar27;
  *(int *)&(__return_storage_ptr__->RasterizerState).pssInner.field_0x1c = iVar28;
  *(int *)&(__return_storage_ptr__->RasterizerState).pssInner.field_0x20 = iVar29;
  *(uint *)&(__return_storage_ptr__->RasterizerState).pssInner.field_0x24 = uVar9;
  *(D3D12_CONSERVATIVE_RASTERIZATION_MODE *)
   &(__return_storage_ptr__->RasterizerState).pssInner.field_0x28 = DVar1;
  (__return_storage_ptr__->RTVFormats).pssType =
       D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_RENDER_TARGET_FORMATS;
  uVar2 = *(undefined8 *)((this->RTFormatArray).RTFormats + 2);
  *(undefined8 *)(__return_storage_ptr__->RTVFormats).pssInner.RTFormats =
       *(undefined8 *)(this->RTFormatArray).RTFormats;
  *(undefined8 *)((__return_storage_ptr__->RTVFormats).pssInner.RTFormats + 2) = uVar2;
  uVar2 = *(undefined8 *)((this->RTFormatArray).RTFormats + 6);
  *(undefined8 *)((__return_storage_ptr__->RTVFormats).pssInner.RTFormats + 4) =
       *(undefined8 *)((this->RTFormatArray).RTFormats + 4);
  *(undefined8 *)((__return_storage_ptr__->RTVFormats).pssInner.RTFormats + 6) = uVar2;
  (__return_storage_ptr__->RTVFormats).pssInner.NumRenderTargets =
       (this->RTFormatArray).NumRenderTargets;
  (__return_storage_ptr__->SampleDesc).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_SAMPLE_DESC;
  (__return_storage_ptr__->SampleDesc).pssInner = this->SampleDesc;
  (__return_storage_ptr__->SampleMask).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_SAMPLE_MASK;
  (__return_storage_ptr__->SampleMask).pssInner = this->SampleMask;
  (__return_storage_ptr__->CachedPSO).pssType = D3D12_PIPELINE_STATE_SUBOBJECT_TYPE_CACHED_PSO;
  uVar4 = (this->CachedPSO).CachedBlobSizeInBytes;
  (__return_storage_ptr__->CachedPSO).pssInner.pCachedBlob = (this->CachedPSO).pCachedBlob;
  (__return_storage_ptr__->CachedPSO).pssInner.CachedBlobSizeInBytes = uVar4;
  return __return_storage_ptr__;
}

