// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 2

// FGraphicsState @ 145a468f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FGraphicsState * __thiscall
FD3D12StateCache::<unnamed-type-PipelineState>::FGraphicsState::FGraphicsState(FGraphicsState *this)

{
  TStaticArray<EVRSRateCombiner,2,4294967295> *_Dst;
  size_t _Size;
  
  (this->CurrentPipelineStateObject).Reference = (FD3D12GraphicsPipelineState *)0x0;
  this->CurrentReferenceStencil = 0;
  this->CurrentBlendFactor[0] = 1.0;
  this->CurrentBlendFactor[1] = 1.0;
  this->CurrentBlendFactor[2] = 1.0;
  *(undefined8 *)(this->CurrentBlendFactor + 3) = 0x3f800000;
  memset(this->CurrentViewport,0,0x180);
  memset(&this->VBCache,0,0x200);
  memset((this->VBCache).CurrentVertexBufferResources,0,0x100);
  memset((this->VBCache).Resources,0,0x100);
  (this->VBCache).MaxBoundVertexBufferIndex = -1;
  (this->VBCache).BoundVBMask = 0;
  (this->IBCache).CurrentIndexBufferView.BufferLocation = 0;
  (this->IBCache).CurrentIndexBufferView.SizeInBytes = 0;
  (this->IBCache).CurrentIndexBufferView.Format = DXGI_FORMAT_UNKNOWN;
  this->CurrentPrimitiveType = PT_Num;
  this->CurrentPrimitiveTopology = D3D10_PRIMITIVE_TOPOLOGY_UNDEFINED;
  memset(this->CurrentScissorRects,0,0x100);
  this->CurrentNumberOfScissorRects = 0;
  this->RenderTargetArray[0] = (FD3D12RenderTargetView *)0x0;
  this->RenderTargetArray[1] = (FD3D12RenderTargetView *)0x0;
  _Dst = &this->Combiners;
  this->RenderTargetArray[2] = (FD3D12RenderTargetView *)0x0;
  this->RenderTargetArray[3] = (FD3D12RenderTargetView *)0x0;
  this->RenderTargetArray[4] = (FD3D12RenderTargetView *)0x0;
  this->RenderTargetArray[5] = (FD3D12RenderTargetView *)0x0;
  this->RenderTargetArray[6] = (FD3D12RenderTargetView *)0x0;
  this->RenderTargetArray[7] = (FD3D12RenderTargetView *)0x0;
  _Size = 2;
  if (&this->field_0x753 < _Dst) {
    _Size = 0;
  }
  this->CurrentNumberOfRenderTargets = 0;
  this->CurrentDepthStencilTarget = (FD3D12DepthStencilView *)0x0;
  this->MinDepth = 0.0;
  this->MaxDepth = 1.0;
  this->DrawShadingRate = VRSSR_1x1;
  this->ShadingRateImage = (FD3D12Resource *)0x0;
  if (_Dst <= &this->field_0x753) {
    memset(_Dst,0,_Size);
  }
  return this;
}

// operator= @ 145a49230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FGraphicsState * __thiscall
FD3D12StateCache::<unnamed-type-PipelineState>::FGraphicsState::operator=
          (FGraphicsState *this,FGraphicsState *param_1)

{
  FD3D12GraphicsPipelineState *this_00;
  undefined8 uVar1;
  D3D12_VERTEX_BUFFER_VIEW *pDVar2;
  D3D12_VERTEX_BUFFER_VIEW *pDVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  DXGI_FORMAT DVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  FD3D12VertexBufferCache *pFVar13;
  FD3D12VertexBufferCache *pFVar14;
  longlong lVar15;
  
  if (this != param_1) {
    this_00 = (this->CurrentPipelineStateObject).Reference;
    (this->CurrentPipelineStateObject).Reference = (param_1->CurrentPipelineStateObject).Reference;
    (param_1->CurrentPipelineStateObject).Reference = (FD3D12GraphicsPipelineState *)0x0;
    if (this_00 != (FD3D12GraphicsPipelineState *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  this->bNeedSetRootSignature = param_1->bNeedSetRootSignature;
  lVar15 = 8;
  this->CurrentReferenceStencil = param_1->CurrentReferenceStencil;
  this->CurrentBlendFactor[0] = param_1->CurrentBlendFactor[0];
  this->CurrentBlendFactor[1] = param_1->CurrentBlendFactor[1];
  this->CurrentBlendFactor[2] = param_1->CurrentBlendFactor[2];
  this->CurrentBlendFactor[3] = param_1->CurrentBlendFactor[3];
  this->CurrentNumberOfViewports = param_1->CurrentNumberOfViewports;
  fVar4 = param_1->CurrentViewport[0].TopLeftY;
  fVar5 = param_1->CurrentViewport[0].Width;
  fVar6 = param_1->CurrentViewport[0].Height;
  this->CurrentViewport[0].TopLeftX = param_1->CurrentViewport[0].TopLeftX;
  this->CurrentViewport[0].TopLeftY = fVar4;
  this->CurrentViewport[0].Width = fVar5;
  this->CurrentViewport[0].Height = fVar6;
  fVar4 = param_1->CurrentViewport[0].MaxDepth;
  this->CurrentViewport[0].MinDepth = param_1->CurrentViewport[0].MinDepth;
  this->CurrentViewport[0].MaxDepth = fVar4;
  fVar4 = param_1->CurrentViewport[1].TopLeftY;
  fVar5 = param_1->CurrentViewport[1].Width;
  fVar6 = param_1->CurrentViewport[1].Height;
  this->CurrentViewport[1].TopLeftX = param_1->CurrentViewport[1].TopLeftX;
  this->CurrentViewport[1].TopLeftY = fVar4;
  this->CurrentViewport[1].Width = fVar5;
  this->CurrentViewport[1].Height = fVar6;
  fVar4 = param_1->CurrentViewport[1].MaxDepth;
  this->CurrentViewport[1].MinDepth = param_1->CurrentViewport[1].MinDepth;
  this->CurrentViewport[1].MaxDepth = fVar4;
  fVar4 = param_1->CurrentViewport[2].TopLeftY;
  fVar5 = param_1->CurrentViewport[2].Width;
  fVar6 = param_1->CurrentViewport[2].Height;
  this->CurrentViewport[2].TopLeftX = param_1->CurrentViewport[2].TopLeftX;
  this->CurrentViewport[2].TopLeftY = fVar4;
  this->CurrentViewport[2].Width = fVar5;
  this->CurrentViewport[2].Height = fVar6;
  fVar4 = param_1->CurrentViewport[2].MaxDepth;
  this->CurrentViewport[2].MinDepth = param_1->CurrentViewport[2].MinDepth;
  this->CurrentViewport[2].MaxDepth = fVar4;
  fVar4 = param_1->CurrentViewport[3].TopLeftY;
  fVar5 = param_1->CurrentViewport[3].Width;
  fVar6 = param_1->CurrentViewport[3].Height;
  this->CurrentViewport[3].TopLeftX = param_1->CurrentViewport[3].TopLeftX;
  this->CurrentViewport[3].TopLeftY = fVar4;
  this->CurrentViewport[3].Width = fVar5;
  this->CurrentViewport[3].Height = fVar6;
  fVar4 = param_1->CurrentViewport[3].MaxDepth;
  this->CurrentViewport[3].MinDepth = param_1->CurrentViewport[3].MinDepth;
  this->CurrentViewport[3].MaxDepth = fVar4;
  fVar4 = param_1->CurrentViewport[4].TopLeftY;
  fVar5 = param_1->CurrentViewport[4].Width;
  fVar6 = param_1->CurrentViewport[4].Height;
  this->CurrentViewport[4].TopLeftX = param_1->CurrentViewport[4].TopLeftX;
  this->CurrentViewport[4].TopLeftY = fVar4;
  this->CurrentViewport[4].Width = fVar5;
  this->CurrentViewport[4].Height = fVar6;
  fVar4 = param_1->CurrentViewport[4].MaxDepth;
  this->CurrentViewport[4].MinDepth = param_1->CurrentViewport[4].MinDepth;
  this->CurrentViewport[4].MaxDepth = fVar4;
  fVar4 = param_1->CurrentViewport[5].TopLeftY;
  fVar5 = param_1->CurrentViewport[5].Width;
  fVar6 = param_1->CurrentViewport[5].Height;
  this->CurrentViewport[5].TopLeftX = param_1->CurrentViewport[5].TopLeftX;
  this->CurrentViewport[5].TopLeftY = fVar4;
  this->CurrentViewport[5].Width = fVar5;
  this->CurrentViewport[5].Height = fVar6;
  fVar4 = param_1->CurrentViewport[5].MaxDepth;
  this->CurrentViewport[5].MinDepth = param_1->CurrentViewport[5].MinDepth;
  this->CurrentViewport[5].MaxDepth = fVar4;
  fVar4 = param_1->CurrentViewport[6].TopLeftY;
  fVar5 = param_1->CurrentViewport[6].Width;
  fVar6 = param_1->CurrentViewport[6].Height;
  this->CurrentViewport[6].TopLeftX = param_1->CurrentViewport[6].TopLeftX;
  this->CurrentViewport[6].TopLeftY = fVar4;
  this->CurrentViewport[6].Width = fVar5;
  this->CurrentViewport[6].Height = fVar6;
  fVar4 = param_1->CurrentViewport[6].MaxDepth;
  this->CurrentViewport[6].MinDepth = param_1->CurrentViewport[6].MinDepth;
  this->CurrentViewport[6].MaxDepth = fVar4;
  fVar4 = param_1->CurrentViewport[7].TopLeftY;
  fVar5 = param_1->CurrentViewport[7].Width;
  fVar6 = param_1->CurrentViewport[7].Height;
  this->CurrentViewport[7].TopLeftX = param_1->CurrentViewport[7].TopLeftX;
  this->CurrentViewport[7].TopLeftY = fVar4;
  this->CurrentViewport[7].Width = fVar5;
  this->CurrentViewport[7].Height = fVar6;
  fVar4 = param_1->CurrentViewport[7].MaxDepth;
  this->CurrentViewport[7].MinDepth = param_1->CurrentViewport[7].MinDepth;
  this->CurrentViewport[7].MaxDepth = fVar4;
  fVar4 = param_1->CurrentViewport[8].TopLeftY;
  fVar5 = param_1->CurrentViewport[8].Width;
  fVar6 = param_1->CurrentViewport[8].Height;
  this->CurrentViewport[8].TopLeftX = param_1->CurrentViewport[8].TopLeftX;
  this->CurrentViewport[8].TopLeftY = fVar4;
  this->CurrentViewport[8].Width = fVar5;
  this->CurrentViewport[8].Height = fVar6;
  fVar4 = param_1->CurrentViewport[8].MaxDepth;
  this->CurrentViewport[8].MinDepth = param_1->CurrentViewport[8].MinDepth;
  this->CurrentViewport[8].MaxDepth = fVar4;
  fVar4 = param_1->CurrentViewport[9].TopLeftY;
  fVar5 = param_1->CurrentViewport[9].Width;
  fVar6 = param_1->CurrentViewport[9].Height;
  this->CurrentViewport[9].TopLeftX = param_1->CurrentViewport[9].TopLeftX;
  this->CurrentViewport[9].TopLeftY = fVar4;
  this->CurrentViewport[9].Width = fVar5;
  this->CurrentViewport[9].Height = fVar6;
  fVar4 = param_1->CurrentViewport[9].MaxDepth;
  this->CurrentViewport[9].MinDepth = param_1->CurrentViewport[9].MinDepth;
  this->CurrentViewport[9].MaxDepth = fVar4;
  fVar4 = param_1->CurrentViewport[10].TopLeftY;
  fVar5 = param_1->CurrentViewport[10].Width;
  fVar6 = param_1->CurrentViewport[10].Height;
  this->CurrentViewport[10].TopLeftX = param_1->CurrentViewport[10].TopLeftX;
  this->CurrentViewport[10].TopLeftY = fVar4;
  this->CurrentViewport[10].Width = fVar5;
  this->CurrentViewport[10].Height = fVar6;
  fVar4 = param_1->CurrentViewport[10].MaxDepth;
  this->CurrentViewport[10].MinDepth = param_1->CurrentViewport[10].MinDepth;
  this->CurrentViewport[10].MaxDepth = fVar4;
  fVar4 = param_1->CurrentViewport[0xb].TopLeftY;
  fVar5 = param_1->CurrentViewport[0xb].Width;
  fVar6 = param_1->CurrentViewport[0xb].Height;
  this->CurrentViewport[0xb].TopLeftX = param_1->CurrentViewport[0xb].TopLeftX;
  this->CurrentViewport[0xb].TopLeftY = fVar4;
  this->CurrentViewport[0xb].Width = fVar5;
  this->CurrentViewport[0xb].Height = fVar6;
  fVar4 = param_1->CurrentViewport[0xb].MaxDepth;
  this->CurrentViewport[0xb].MinDepth = param_1->CurrentViewport[0xb].MinDepth;
  this->CurrentViewport[0xb].MaxDepth = fVar4;
  fVar4 = param_1->CurrentViewport[0xc].TopLeftY;
  fVar5 = param_1->CurrentViewport[0xc].Width;
  fVar6 = param_1->CurrentViewport[0xc].Height;
  this->CurrentViewport[0xc].TopLeftX = param_1->CurrentViewport[0xc].TopLeftX;
  this->CurrentViewport[0xc].TopLeftY = fVar4;
  this->CurrentViewport[0xc].Width = fVar5;
  this->CurrentViewport[0xc].Height = fVar6;
  fVar4 = param_1->CurrentViewport[0xc].MaxDepth;
  this->CurrentViewport[0xc].MinDepth = param_1->CurrentViewport[0xc].MinDepth;
  this->CurrentViewport[0xc].MaxDepth = fVar4;
  fVar4 = param_1->CurrentViewport[0xd].TopLeftY;
  fVar5 = param_1->CurrentViewport[0xd].Width;
  fVar6 = param_1->CurrentViewport[0xd].Height;
  this->CurrentViewport[0xd].TopLeftX = param_1->CurrentViewport[0xd].TopLeftX;
  this->CurrentViewport[0xd].TopLeftY = fVar4;
  this->CurrentViewport[0xd].Width = fVar5;
  this->CurrentViewport[0xd].Height = fVar6;
  fVar4 = param_1->CurrentViewport[0xd].MaxDepth;
  this->CurrentViewport[0xd].MinDepth = param_1->CurrentViewport[0xd].MinDepth;
  this->CurrentViewport[0xd].MaxDepth = fVar4;
  fVar4 = param_1->CurrentViewport[0xe].TopLeftY;
  fVar5 = param_1->CurrentViewport[0xe].Width;
  fVar6 = param_1->CurrentViewport[0xe].Height;
  this->CurrentViewport[0xe].TopLeftX = param_1->CurrentViewport[0xe].TopLeftX;
  this->CurrentViewport[0xe].TopLeftY = fVar4;
  this->CurrentViewport[0xe].Width = fVar5;
  this->CurrentViewport[0xe].Height = fVar6;
  fVar4 = param_1->CurrentViewport[0xe].MaxDepth;
  this->CurrentViewport[0xe].MinDepth = param_1->CurrentViewport[0xe].MinDepth;
  this->CurrentViewport[0xe].MaxDepth = fVar4;
  fVar4 = param_1->CurrentViewport[0xf].TopLeftY;
  fVar5 = param_1->CurrentViewport[0xf].Width;
  fVar6 = param_1->CurrentViewport[0xf].Height;
  this->CurrentViewport[0xf].TopLeftX = param_1->CurrentViewport[0xf].TopLeftX;
  this->CurrentViewport[0xf].TopLeftY = fVar4;
  this->CurrentViewport[0xf].Width = fVar5;
  this->CurrentViewport[0xf].Height = fVar6;
  fVar4 = param_1->CurrentViewport[0xf].MaxDepth;
  this->CurrentViewport[0xf].MinDepth = param_1->CurrentViewport[0xf].MinDepth;
  this->CurrentViewport[0xf].MaxDepth = fVar4;
  pFVar13 = &param_1->VBCache;
  pFVar14 = &this->VBCache;
  do {
    pDVar2 = pFVar14->CurrentVertexBufferViews;
    uVar7 = pFVar13->CurrentVertexBufferViews[0].SizeInBytes;
    uVar8 = pFVar13->CurrentVertexBufferViews[0].StrideInBytes;
    pDVar3 = pFVar13->CurrentVertexBufferViews;
    pFVar14->CurrentVertexBufferViews[0].BufferLocation =
         pFVar13->CurrentVertexBufferViews[0].BufferLocation;
    pFVar14->CurrentVertexBufferViews[0].SizeInBytes = uVar7;
    pFVar14->CurrentVertexBufferViews[0].StrideInBytes = uVar8;
    uVar7 = pFVar13->CurrentVertexBufferViews[1].SizeInBytes;
    uVar8 = pFVar13->CurrentVertexBufferViews[1].StrideInBytes;
    pFVar14->CurrentVertexBufferViews[1].BufferLocation =
         pFVar13->CurrentVertexBufferViews[1].BufferLocation;
    pFVar14->CurrentVertexBufferViews[1].SizeInBytes = uVar7;
    pFVar14->CurrentVertexBufferViews[1].StrideInBytes = uVar8;
    uVar7 = pFVar13->CurrentVertexBufferViews[2].SizeInBytes;
    uVar8 = pFVar13->CurrentVertexBufferViews[2].StrideInBytes;
    pFVar14->CurrentVertexBufferViews[2].BufferLocation =
         pFVar13->CurrentVertexBufferViews[2].BufferLocation;
    pFVar14->CurrentVertexBufferViews[2].SizeInBytes = uVar7;
    pFVar14->CurrentVertexBufferViews[2].StrideInBytes = uVar8;
    uVar7 = pFVar13->CurrentVertexBufferViews[3].SizeInBytes;
    uVar8 = pFVar13->CurrentVertexBufferViews[3].StrideInBytes;
    pFVar14->CurrentVertexBufferViews[3].BufferLocation =
         pFVar13->CurrentVertexBufferViews[3].BufferLocation;
    pFVar14->CurrentVertexBufferViews[3].SizeInBytes = uVar7;
    pFVar14->CurrentVertexBufferViews[3].StrideInBytes = uVar8;
    uVar7 = pFVar13->CurrentVertexBufferViews[4].SizeInBytes;
    uVar8 = pFVar13->CurrentVertexBufferViews[4].StrideInBytes;
    pFVar14->CurrentVertexBufferViews[4].BufferLocation =
         pFVar13->CurrentVertexBufferViews[4].BufferLocation;
    pFVar14->CurrentVertexBufferViews[4].SizeInBytes = uVar7;
    pFVar14->CurrentVertexBufferViews[4].StrideInBytes = uVar8;
    uVar7 = pFVar13->CurrentVertexBufferViews[5].SizeInBytes;
    uVar8 = pFVar13->CurrentVertexBufferViews[5].StrideInBytes;
    pFVar14->CurrentVertexBufferViews[5].BufferLocation =
         pFVar13->CurrentVertexBufferViews[5].BufferLocation;
    pFVar14->CurrentVertexBufferViews[5].SizeInBytes = uVar7;
    pFVar14->CurrentVertexBufferViews[5].StrideInBytes = uVar8;
    uVar7 = pFVar13->CurrentVertexBufferViews[6].SizeInBytes;
    uVar8 = pFVar13->CurrentVertexBufferViews[6].StrideInBytes;
    pFVar14->CurrentVertexBufferViews[6].BufferLocation =
         pFVar13->CurrentVertexBufferViews[6].BufferLocation;
    pFVar14->CurrentVertexBufferViews[6].SizeInBytes = uVar7;
    pFVar14->CurrentVertexBufferViews[6].StrideInBytes = uVar8;
    uVar7 = pFVar13->CurrentVertexBufferViews[7].SizeInBytes;
    uVar8 = pFVar13->CurrentVertexBufferViews[7].StrideInBytes;
    pFVar14->CurrentVertexBufferViews[7].BufferLocation =
         pFVar13->CurrentVertexBufferViews[7].BufferLocation;
    pFVar14->CurrentVertexBufferViews[7].SizeInBytes = uVar7;
    pFVar14->CurrentVertexBufferViews[7].StrideInBytes = uVar8;
    lVar15 = lVar15 + -1;
    pFVar13 = (FD3D12VertexBufferCache *)(pDVar3 + 8);
    pFVar14 = (FD3D12VertexBufferCache *)(pDVar2 + 8);
  } while (lVar15 != 0);
  ((FD3D12VertexBufferCache *)(pDVar2 + 8))->CurrentVertexBufferViews[0].BufferLocation =
       ((FD3D12VertexBufferCache *)(pDVar3 + 8))->CurrentVertexBufferViews[0].BufferLocation;
  uVar7 = (param_1->IBCache).CurrentIndexBufferView.SizeInBytes;
  DVar9 = (param_1->IBCache).CurrentIndexBufferView.Format;
  (this->IBCache).CurrentIndexBufferView.BufferLocation =
       (param_1->IBCache).CurrentIndexBufferView.BufferLocation;
  (this->IBCache).CurrentIndexBufferView.SizeInBytes = uVar7;
  (this->IBCache).CurrentIndexBufferView.Format = DVar9;
  this->CurrentPrimitiveType = param_1->CurrentPrimitiveType;
  this->CurrentPrimitiveTopology = param_1->CurrentPrimitiveTopology;
  this->PrimitiveTypeFactor = param_1->PrimitiveTypeFactor;
  this->PrimitiveTypeOffset = param_1->PrimitiveTypeOffset;
  lVar10 = param_1->CurrentScissorRects[0].top;
  lVar11 = param_1->CurrentScissorRects[0].right;
  lVar12 = param_1->CurrentScissorRects[0].bottom;
  this->CurrentScissorRects[0].left = param_1->CurrentScissorRects[0].left;
  this->CurrentScissorRects[0].top = lVar10;
  this->CurrentScissorRects[0].right = lVar11;
  this->CurrentScissorRects[0].bottom = lVar12;
  lVar10 = param_1->CurrentScissorRects[1].top;
  lVar11 = param_1->CurrentScissorRects[1].right;
  lVar12 = param_1->CurrentScissorRects[1].bottom;
  this->CurrentScissorRects[1].left = param_1->CurrentScissorRects[1].left;
  this->CurrentScissorRects[1].top = lVar10;
  this->CurrentScissorRects[1].right = lVar11;
  this->CurrentScissorRects[1].bottom = lVar12;
  lVar10 = param_1->CurrentScissorRects[2].top;
  lVar11 = param_1->CurrentScissorRects[2].right;
  lVar12 = param_1->CurrentScissorRects[2].bottom;
  this->CurrentScissorRects[2].left = param_1->CurrentScissorRects[2].left;
  this->CurrentScissorRects[2].top = lVar10;
  this->CurrentScissorRects[2].right = lVar11;
  this->CurrentScissorRects[2].bottom = lVar12;
  lVar10 = param_1->CurrentScissorRects[3].top;
  lVar11 = param_1->CurrentScissorRects[3].right;
  lVar12 = param_1->CurrentScissorRects[3].bottom;
  this->CurrentScissorRects[3].left = param_1->CurrentScissorRects[3].left;
  this->CurrentScissorRects[3].top = lVar10;
  this->CurrentScissorRects[3].right = lVar11;
  this->CurrentScissorRects[3].bottom = lVar12;
  lVar10 = param_1->CurrentScissorRects[4].top;
  lVar11 = param_1->CurrentScissorRects[4].right;
  lVar12 = param_1->CurrentScissorRects[4].bottom;
  this->CurrentScissorRects[4].left = param_1->CurrentScissorRects[4].left;
  this->CurrentScissorRects[4].top = lVar10;
  this->CurrentScissorRects[4].right = lVar11;
  this->CurrentScissorRects[4].bottom = lVar12;
  lVar10 = param_1->CurrentScissorRects[5].top;
  lVar11 = param_1->CurrentScissorRects[5].right;
  lVar12 = param_1->CurrentScissorRects[5].bottom;
  this->CurrentScissorRects[5].left = param_1->CurrentScissorRects[5].left;
  this->CurrentScissorRects[5].top = lVar10;
  this->CurrentScissorRects[5].right = lVar11;
  this->CurrentScissorRects[5].bottom = lVar12;
  lVar10 = param_1->CurrentScissorRects[6].top;
  lVar11 = param_1->CurrentScissorRects[6].right;
  lVar12 = param_1->CurrentScissorRects[6].bottom;
  this->CurrentScissorRects[6].left = param_1->CurrentScissorRects[6].left;
  this->CurrentScissorRects[6].top = lVar10;
  this->CurrentScissorRects[6].right = lVar11;
  this->CurrentScissorRects[6].bottom = lVar12;
  lVar10 = param_1->CurrentScissorRects[7].top;
  lVar11 = param_1->CurrentScissorRects[7].right;
  lVar12 = param_1->CurrentScissorRects[7].bottom;
  this->CurrentScissorRects[7].left = param_1->CurrentScissorRects[7].left;
  this->CurrentScissorRects[7].top = lVar10;
  this->CurrentScissorRects[7].right = lVar11;
  this->CurrentScissorRects[7].bottom = lVar12;
  lVar10 = param_1->CurrentScissorRects[8].top;
  lVar11 = param_1->CurrentScissorRects[8].right;
  lVar12 = param_1->CurrentScissorRects[8].bottom;
  this->CurrentScissorRects[8].left = param_1->CurrentScissorRects[8].left;
  this->CurrentScissorRects[8].top = lVar10;
  this->CurrentScissorRects[8].right = lVar11;
  this->CurrentScissorRects[8].bottom = lVar12;
  lVar10 = param_1->CurrentScissorRects[9].top;
  lVar11 = param_1->CurrentScissorRects[9].right;
  lVar12 = param_1->CurrentScissorRects[9].bottom;
  this->CurrentScissorRects[9].left = param_1->CurrentScissorRects[9].left;
  this->CurrentScissorRects[9].top = lVar10;
  this->CurrentScissorRects[9].right = lVar11;
  this->CurrentScissorRects[9].bottom = lVar12;
  lVar10 = param_1->CurrentScissorRects[10].top;
  lVar11 = param_1->CurrentScissorRects[10].right;
  lVar12 = param_1->CurrentScissorRects[10].bottom;
  this->CurrentScissorRects[10].left = param_1->CurrentScissorRects[10].left;
  this->CurrentScissorRects[10].top = lVar10;
  this->CurrentScissorRects[10].right = lVar11;
  this->CurrentScissorRects[10].bottom = lVar12;
  lVar10 = param_1->CurrentScissorRects[0xb].top;
  lVar11 = param_1->CurrentScissorRects[0xb].right;
  lVar12 = param_1->CurrentScissorRects[0xb].bottom;
  this->CurrentScissorRects[0xb].left = param_1->CurrentScissorRects[0xb].left;
  this->CurrentScissorRects[0xb].top = lVar10;
  this->CurrentScissorRects[0xb].right = lVar11;
  this->CurrentScissorRects[0xb].bottom = lVar12;
  lVar10 = param_1->CurrentScissorRects[0xc].top;
  lVar11 = param_1->CurrentScissorRects[0xc].right;
  lVar12 = param_1->CurrentScissorRects[0xc].bottom;
  this->CurrentScissorRects[0xc].left = param_1->CurrentScissorRects[0xc].left;
  this->CurrentScissorRects[0xc].top = lVar10;
  this->CurrentScissorRects[0xc].right = lVar11;
  this->CurrentScissorRects[0xc].bottom = lVar12;
  lVar10 = param_1->CurrentScissorRects[0xd].top;
  lVar11 = param_1->CurrentScissorRects[0xd].right;
  lVar12 = param_1->CurrentScissorRects[0xd].bottom;
  this->CurrentScissorRects[0xd].left = param_1->CurrentScissorRects[0xd].left;
  this->CurrentScissorRects[0xd].top = lVar10;
  this->CurrentScissorRects[0xd].right = lVar11;
  this->CurrentScissorRects[0xd].bottom = lVar12;
  lVar10 = param_1->CurrentScissorRects[0xe].top;
  lVar11 = param_1->CurrentScissorRects[0xe].right;
  lVar12 = param_1->CurrentScissorRects[0xe].bottom;
  this->CurrentScissorRects[0xe].left = param_1->CurrentScissorRects[0xe].left;
  this->CurrentScissorRects[0xe].top = lVar10;
  this->CurrentScissorRects[0xe].right = lVar11;
  this->CurrentScissorRects[0xe].bottom = lVar12;
  lVar10 = param_1->CurrentScissorRects[0xf].top;
  lVar11 = param_1->CurrentScissorRects[0xf].right;
  lVar12 = param_1->CurrentScissorRects[0xf].bottom;
  this->CurrentScissorRects[0xf].left = param_1->CurrentScissorRects[0xf].left;
  this->CurrentScissorRects[0xf].top = lVar10;
  this->CurrentScissorRects[0xf].right = lVar11;
  this->CurrentScissorRects[0xf].bottom = lVar12;
  this->CurrentNumberOfScissorRects = param_1->CurrentNumberOfScissorRects;
  uVar1 = *(undefined8 *)((param_1->StreamStrides).Elements + 4);
  *(undefined8 *)(this->StreamStrides).Elements = *(undefined8 *)(param_1->StreamStrides).Elements;
  *(undefined8 *)((this->StreamStrides).Elements + 4) = uVar1;
  uVar1 = *(undefined8 *)((param_1->StreamStrides).Elements + 0xc);
  *(undefined8 *)((this->StreamStrides).Elements + 8) =
       *(undefined8 *)((param_1->StreamStrides).Elements + 8);
  *(undefined8 *)((this->StreamStrides).Elements + 0xc) = uVar1;
  (this->StreamStrides).Elements[0x10] = (param_1->StreamStrides).Elements[0x10];
  this->RenderTargetArray[0] = param_1->RenderTargetArray[0];
  this->RenderTargetArray[1] = param_1->RenderTargetArray[1];
  this->RenderTargetArray[2] = param_1->RenderTargetArray[2];
  this->RenderTargetArray[3] = param_1->RenderTargetArray[3];
  this->RenderTargetArray[4] = param_1->RenderTargetArray[4];
  this->RenderTargetArray[5] = param_1->RenderTargetArray[5];
  this->RenderTargetArray[6] = param_1->RenderTargetArray[6];
  this->RenderTargetArray[7] = param_1->RenderTargetArray[7];
  this->CurrentNumberOfRenderTargets = param_1->CurrentNumberOfRenderTargets;
  this->CurrentDepthStencilTarget = param_1->CurrentDepthStencilTarget;
  this->MinDepth = param_1->MinDepth;
  this->MaxDepth = param_1->MaxDepth;
  this->DrawShadingRate = param_1->DrawShadingRate;
  *(undefined2 *)(this->Combiners).Elements = *(undefined2 *)(param_1->Combiners).Elements;
  this->ShadingRateImage = param_1->ShadingRateImage;
  return this;
}

