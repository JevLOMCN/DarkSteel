// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 3

// FD3D12GraphicsPipelineState @ 1459ee450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

FD3D12GraphicsPipelineState * __thiscall
FD3D12GraphicsPipelineState::FD3D12GraphicsPipelineState
          (FD3D12GraphicsPipelineState *this,FGraphicsPipelineStateInitializer *param_1,
          FD3D12RootSignature *param_2,FD3D12PipelineState *param_3)

{
  FRHIResource *pFVar1;
  FRHIDepthStencilState *pFVar2;
  FRHIVertexDeclaration *pFVar3;
  FRHIVertexShader *pFVar4;
  FRHIMeshShader *pFVar5;
  FRHIAmplificationShader *pFVar6;
  FRHIPixelShader *pFVar7;
  FRHIGeometryShader *pFVar8;
  FRHIBlendState *pFVar9;
  FRHISamplerState *pFVar10;
  undefined8 uVar11;
  ETextureCreateFlags EVar12;
  ulong64 uVar13;
  uint uVar14;
  undefined7 uVar15;
  ERenderTargetStoreAction EVar16;
  ERenderTargetLoadAction EVar17;
  ERenderTargetStoreAction EVar18;
  FExclusiveDepthStencil FVar19;
  ushort uVar20;
  ESubpassHint EVar21;
  uchar uVar22;
  EConservativeRasterization EVar23;
  uchar uVar24;
  bool bVar25;
  EVRSShadingRate EVar26;
  FGraphicsPipelineStateInitializer_u_210 FVar27;
  undefined4 uVar28;
  undefined2 uVar29;
  undefined2 uVar30;
  undefined2 uVar31;
  undefined2 uVar32;
  undefined2 uVar33;
  undefined2 uVar34;
  undefined2 uVar35;
  bool bVar36;
  
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_GraphicsPipelineState);
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)param_2;
  this->_padding_ = (longlong)param_3;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FD3D12GraphicsPipelineState__6B_;
  pFVar4 = (param_1->BoundShaderState).VertexShaderRHI;
  (this->PipelineStateInitializer).BoundShaderState.VertexDeclarationRHI =
       (param_1->BoundShaderState).VertexDeclarationRHI;
  (this->PipelineStateInitializer).BoundShaderState.VertexShaderRHI = pFVar4;
  pFVar5 = (param_1->BoundShaderState).MeshShaderRHI;
  (this->PipelineStateInitializer).BoundShaderState.PixelShaderRHI =
       (param_1->BoundShaderState).PixelShaderRHI;
  (this->PipelineStateInitializer).BoundShaderState.MeshShaderRHI = pFVar5;
  pFVar8 = (param_1->BoundShaderState).GeometryShaderRHI;
  (this->PipelineStateInitializer).BoundShaderState.AmplificationShaderRHI =
       (param_1->BoundShaderState).AmplificationShaderRHI;
  (this->PipelineStateInitializer).BoundShaderState.GeometryShaderRHI = pFVar8;
  pFVar9 = param_1->BlendState;
  (this->PipelineStateInitializer).BoundShaderState.WorkGraphMeshShaderRHI =
       (param_1->BoundShaderState).WorkGraphMeshShaderRHI;
  (this->PipelineStateInitializer).BlendState = pFVar9;
  pFVar2 = param_1->DepthStencilState;
  (this->PipelineStateInitializer).RasterizerState = param_1->RasterizerState;
  (this->PipelineStateInitializer).DepthStencilState = pFVar2;
  pFVar10 = (param_1->ImmutableSamplerState).ImmutableSamplers.Elements[1];
  (this->PipelineStateInitializer).ImmutableSamplerState.ImmutableSamplers.Elements[0] =
       (param_1->ImmutableSamplerState).ImmutableSamplers.Elements[0];
  (this->PipelineStateInitializer).ImmutableSamplerState.ImmutableSamplers.Elements[1] = pFVar10;
  uVar14 = param_1->RenderTargetsEnabled;
  uVar11 = *(undefined8 *)(param_1->RenderTargetFormats).Elements;
  (this->PipelineStateInitializer).PrimitiveType = param_1->PrimitiveType;
  (this->PipelineStateInitializer).RenderTargetsEnabled = uVar14;
  *(undefined8 *)(this->PipelineStateInitializer).RenderTargetFormats.Elements = uVar11;
  EVar12 = (param_1->RenderTargetFlags).Elements[1];
  (this->PipelineStateInitializer).RenderTargetFlags.Elements[0] =
       (param_1->RenderTargetFlags).Elements[0];
  (this->PipelineStateInitializer).RenderTargetFlags.Elements[1] = EVar12;
  EVar12 = (param_1->RenderTargetFlags).Elements[3];
  (this->PipelineStateInitializer).RenderTargetFlags.Elements[2] =
       (param_1->RenderTargetFlags).Elements[2];
  (this->PipelineStateInitializer).RenderTargetFlags.Elements[3] = EVar12;
  EVar12 = (param_1->RenderTargetFlags).Elements[5];
  (this->PipelineStateInitializer).RenderTargetFlags.Elements[4] =
       (param_1->RenderTargetFlags).Elements[4];
  (this->PipelineStateInitializer).RenderTargetFlags.Elements[5] = EVar12;
  EVar12 = (param_1->RenderTargetFlags).Elements[7];
  (this->PipelineStateInitializer).RenderTargetFlags.Elements[6] =
       (param_1->RenderTargetFlags).Elements[6];
  (this->PipelineStateInitializer).RenderTargetFlags.Elements[7] = EVar12;
  uVar15 = *(undefined7 *)&param_1->field_0xb1;
  EVar12 = param_1->DepthStencilTargetFlag;
  (this->PipelineStateInitializer).DepthStencilTargetFormat = param_1->DepthStencilTargetFormat;
  *(undefined7 *)&(this->PipelineStateInitializer).field_0xb1 = uVar15;
  (this->PipelineStateInitializer).DepthStencilTargetFlag = EVar12;
  EVar16 = param_1->DepthTargetStoreAction;
  EVar17 = param_1->StencilTargetLoadAction;
  EVar18 = param_1->StencilTargetStoreAction;
  FVar19.Value = (param_1->DepthStencilAccess).Value;
  uVar20 = param_1->NumSamples;
  EVar21 = param_1->SubpassHint;
  uVar22 = param_1->SubpassIndex;
  EVar23 = param_1->ConservativeRasterization;
  bVar36 = param_1->bDepthBounds;
  uVar24 = param_1->MultiViewCount;
  bVar25 = param_1->bHasFragmentDensityAttachment;
  (this->PipelineStateInitializer).DepthTargetLoadAction = param_1->DepthTargetLoadAction;
  (this->PipelineStateInitializer).DepthTargetStoreAction = EVar16;
  (this->PipelineStateInitializer).StencilTargetLoadAction = EVar17;
  (this->PipelineStateInitializer).StencilTargetStoreAction = EVar18;
  (this->PipelineStateInitializer).DepthStencilAccess = (FExclusiveDepthStencil)FVar19.Value;
  (this->PipelineStateInitializer).NumSamples = uVar20;
  (this->PipelineStateInitializer).SubpassHint = EVar21;
  (this->PipelineStateInitializer).SubpassIndex = uVar22;
  (this->PipelineStateInitializer).ConservativeRasterization = EVar23;
  (this->PipelineStateInitializer).bDepthBounds = bVar36;
  (this->PipelineStateInitializer).MultiViewCount = uVar24;
  (this->PipelineStateInitializer).bHasFragmentDensityAttachment = bVar25;
  EVar26 = param_1->ShadingRate;
  FVar27 = param_1->field25_0xd2;
  uVar28 = *(undefined4 *)&param_1->field_0xd4;
  uVar13 = param_1->StatePrecachePSOHash;
  (this->PipelineStateInitializer).bAllowVariableRateShading = param_1->bAllowVariableRateShading;
  (this->PipelineStateInitializer).ShadingRate = EVar26;
  (this->PipelineStateInitializer).field25_0xd2 = FVar27;
  *(undefined4 *)&(this->PipelineStateInitializer).field_0xd4 = uVar28;
  (this->PipelineStateInitializer).StatePrecachePSOHash = uVar13;
  (this->StreamStrides).Elements[0] = 0;
  (this->StreamStrides).Elements[1] = 0;
  (this->StreamStrides).Elements[2] = 0;
  (this->StreamStrides).Elements[3] = 0;
  (this->StreamStrides).Elements[4] = 0;
  (this->StreamStrides).Elements[5] = 0;
  (this->StreamStrides).Elements[6] = 0;
  (this->StreamStrides).Elements[7] = 0;
  (this->StreamStrides).Elements[8] = 0;
  (this->StreamStrides).Elements[9] = 0;
  (this->StreamStrides).Elements[10] = 0;
  (this->StreamStrides).Elements[0xb] = 0;
  (this->StreamStrides).Elements[0xc] = 0;
  (this->StreamStrides).Elements[0xd] = 0;
  (this->StreamStrides).Elements[0xe] = 0;
  (this->StreamStrides).Elements[0xf] = 0;
  (this->StreamStrides).Elements[0x10] = 0;
  FBoundShaderStateInput::AddRefResources(&(this->PipelineStateInitializer).BoundShaderState);
  pFVar1 = (FRHIResource *)(this->PipelineStateInitializer).BlendState;
  if (pFVar1 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(pFVar1);
  }
  pFVar1 = (FRHIResource *)(this->PipelineStateInitializer).RasterizerState;
  if (pFVar1 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(pFVar1);
  }
  pFVar2 = (this->PipelineStateInitializer).DepthStencilState;
  if (pFVar2 != (FRHIDepthStencilState *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar2);
  }
  pFVar3 = (param_1->BoundShaderState).VertexDeclarationRHI;
  if (pFVar3 != (FRHIVertexDeclaration *)0x0) {
    uVar29 = *(undefined2 *)&pFVar3[0x18].field_0x2;
    uVar30 = *(undefined2 *)&pFVar3[0x18].field_0x4;
    uVar31 = *(undefined2 *)&pFVar3[0x18].field_0x6;
    uVar32 = *(undefined2 *)&pFVar3[0x18].field_0x8;
    uVar33 = *(undefined2 *)&pFVar3[0x18].field_0xa;
    uVar34 = *(undefined2 *)&pFVar3[0x18].field_0xc;
    uVar35 = *(undefined2 *)&pFVar3[0x18].field_0xe;
    (this->StreamStrides).Elements[0] = *(undefined2 *)&pFVar3[0x18].field_0x0;
    (this->StreamStrides).Elements[1] = uVar29;
    (this->StreamStrides).Elements[2] = uVar30;
    (this->StreamStrides).Elements[3] = uVar31;
    (this->StreamStrides).Elements[4] = uVar32;
    (this->StreamStrides).Elements[5] = uVar33;
    (this->StreamStrides).Elements[6] = uVar34;
    (this->StreamStrides).Elements[7] = uVar35;
    uVar29 = *(undefined2 *)&pFVar3[0x18].field_0x12;
    uVar30 = *(undefined2 *)&pFVar3[0x18].field_0x14;
    uVar31 = *(undefined2 *)&pFVar3[0x18].field_0x16;
    uVar32 = *(undefined2 *)&pFVar3[0x19].field_0x0;
    uVar33 = *(undefined2 *)&pFVar3[0x19].field_0x2;
    uVar34 = *(undefined2 *)&pFVar3[0x19].field_0x4;
    uVar35 = *(undefined2 *)&pFVar3[0x19].field_0x6;
    (this->StreamStrides).Elements[8] = *(undefined2 *)&pFVar3[0x18].field_0x10;
    (this->StreamStrides).Elements[9] = uVar29;
    (this->StreamStrides).Elements[10] = uVar30;
    (this->StreamStrides).Elements[0xb] = uVar31;
    (this->StreamStrides).Elements[0xc] = uVar32;
    (this->StreamStrides).Elements[0xd] = uVar33;
    (this->StreamStrides).Elements[0xe] = uVar34;
    (this->StreamStrides).Elements[0xf] = uVar35;
    (this->StreamStrides).Elements[0x10] = *(ushort *)&pFVar3[0x19].field_0x8;
  }
  pFVar4 = (this->PipelineStateInitializer).BoundShaderState.VertexShaderRHI;
  if ((pFVar4 == (FRHIVertexShader *)0x0) || ((pFVar4[1].field_0x10 & 1) == 0)) {
    bVar36 = false;
  }
  else {
    bVar36 = true;
  }
  this->bShaderNeedsGlobalConstantBuffer[0] = bVar36;
  pFVar5 = (this->PipelineStateInitializer).BoundShaderState.MeshShaderRHI;
  if ((pFVar5 == (FRHIMeshShader *)0x0) || ((pFVar5[1].field_0x10 & 1) == 0)) {
    bVar36 = false;
  }
  else {
    bVar36 = true;
  }
  this->bShaderNeedsGlobalConstantBuffer[1] = bVar36;
  pFVar6 = (this->PipelineStateInitializer).BoundShaderState.AmplificationShaderRHI;
  if ((pFVar6 == (FRHIAmplificationShader *)0x0) || ((pFVar6[1].field_0x10 & 1) == 0)) {
    bVar36 = false;
  }
  else {
    bVar36 = true;
  }
  this->bShaderNeedsGlobalConstantBuffer[2] = bVar36;
  pFVar7 = (this->PipelineStateInitializer).BoundShaderState.PixelShaderRHI;
  if ((pFVar7 == (FRHIPixelShader *)0x0) || ((pFVar7[1].field_0x10 & 1) == 0)) {
    bVar36 = false;
  }
  else {
    bVar36 = true;
  }
  this->bShaderNeedsGlobalConstantBuffer[3] = bVar36;
  pFVar8 = (this->PipelineStateInitializer).BoundShaderState.GeometryShaderRHI;
  if ((pFVar8 == (FRHIGeometryShader *)0x0) || ((pFVar8[1].field_0x10 & 1) == 0)) {
    bVar36 = false;
  }
  else {
    bVar36 = true;
  }
  this->bShaderNeedsGlobalConstantBuffer[4] = bVar36;
  this->_padding_ = param_3->ContextSortKey;
  return this;
}

// ~FD3D12GraphicsPipelineState @ 1459f80e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12GraphicsPipelineState::~FD3D12GraphicsPipelineState(FD3D12GraphicsPipelineState *this)

{
  int *piVar1;
  FD3D12RootSignature *pFVar2;
  FRHIResource *pFVar3;
  FRHIDepthStencilState *this_00;
  code *pcVar4;
  ID3D12RootSignature *pIVar5;
  void *pvVar6;
  ulong64 uVar7;
  void *pvVar8;
  ulong64 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  D3D12_BLEND DVar14;
  D3D12_BLEND DVar15;
  D3D12_BLEND_OP DVar16;
  D3D12_BLEND DVar17;
  bool bVar18;
  int iVar19;
  FD3D12Adapter *pFVar20;
  FD3D12LowLevelGraphicsPipelineStateDesc *pFVar21;
  ushort uVar22;
  FD3D12LowLevelGraphicsPipelineStateDesc *pFVar23;
  longlong lVar24;
  undefined8 *puVar25;
  FD3D12LowLevelGraphicsPipelineStateDesc local_628;
  FD3D12LowLevelGraphicsPipelineStateDesc local_328;
  
  this->_padding_ = (longlong)&___7FD3D12GraphicsPipelineState__6B_;
  bVar18 = PipelineStateCache::IsPSOPrecachingEnabled();
  if ((((!bVar18) || (GLowLevelCacheKeepPrecachedPSOs != false)) &&
      (GLowLevelCacheKeepUsedPSOs != false)) ||
     (puVar25 = (undefined8 *)this->_padding_, puVar25 == (undefined8 *)0x0)) goto LAB_1459f83da;
  piVar1 = (int *)(puVar25 + 1);
  LOCK();
  iVar19 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar19 == 1) {
    if (piVar1 != (int *)0x0) {
      (**(code **)*puVar25)(puVar25,1);
    }
LAB_1459f816a:
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("RefCount > 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Pipelinestate.cpp"
                        ,0x1b6,L"");
    if (bVar18) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (iVar19 == 1) goto LAB_1459f816a;
  uVar22 = (this->PipelineStateInitializer).field25_0xd2.Flags & 0x800;
  bVar18 = true;
  if ((uVar22 == 0) || (GLowLevelCacheKeepPrecachedPSOs != false)) {
    bVar10 = false;
    if ((uVar22 != 0) || (GLowLevelCacheKeepUsedPSOs != false)) goto LAB_1459f81b3;
  }
  else {
    bVar10 = true;
LAB_1459f81b3:
    bVar18 = false;
  }
  if ((iVar19 == 2) && ((bVar18 || (bVar10)))) {
    pFVar20 = FD3D12DynamicRHI::GetAdapter(FD3D12DynamicRHI::SingleD3DRHI,0);
    pFVar2 = (FD3D12RootSignature *)this->_padding_;
    puVar25 = (undefined8 *)this->_padding_;
    bVar18 = PipelineStateCache::IsPSOPrecachingEnabled();
    if (((bVar18) && (GLowLevelCacheKeepPrecachedPSOs == false)) ||
       (GLowLevelCacheKeepUsedPSOs == false)) {
      AcquireSRWLockExclusive((PSRWLOCK)&(pFVar20->PipelineStateCache)._padding_);
      piVar1 = (int *)(puVar25 + 1);
      LOCK();
      iVar19 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar19 == 1) {
        if (piVar1 == (int *)0x0) {
          puVar25 = (undefined8 *)0x0;
        }
        if (puVar25 != (undefined8 *)0x0) {
          (**(code **)*puVar25)(puVar25,1);
        }
      }
      if (iVar19 == 1) {
        pFVar21 = GetLowLevelGraphicsPipelineStateDesc
                            (&local_328,&this->PipelineStateInitializer,pFVar2);
        lVar24 = 6;
        pFVar23 = &local_628;
        do {
          pIVar5 = (pFVar21->Desc).pRootSignature;
          pvVar6 = (pFVar21->Desc).VS.pShaderBytecode;
          uVar7 = (pFVar21->Desc).VS.BytecodeLength;
          pFVar23->pRootSignature = pFVar21->pRootSignature;
          (pFVar23->Desc).pRootSignature = pIVar5;
          pvVar8 = (pFVar21->Desc).MS.pShaderBytecode;
          uVar9 = (pFVar21->Desc).MS.BytecodeLength;
          (pFVar23->Desc).VS.pShaderBytecode = pvVar6;
          (pFVar23->Desc).VS.BytecodeLength = uVar7;
          pvVar6 = (pFVar21->Desc).AS.pShaderBytecode;
          uVar7 = (pFVar21->Desc).AS.BytecodeLength;
          (pFVar23->Desc).MS.pShaderBytecode = pvVar8;
          (pFVar23->Desc).MS.BytecodeLength = uVar9;
          pvVar8 = (pFVar21->Desc).PS.pShaderBytecode;
          uVar9 = (pFVar21->Desc).PS.BytecodeLength;
          (pFVar23->Desc).AS.pShaderBytecode = pvVar6;
          (pFVar23->Desc).AS.BytecodeLength = uVar7;
          pvVar6 = (pFVar21->Desc).GS.pShaderBytecode;
          uVar7 = (pFVar21->Desc).GS.BytecodeLength;
          (pFVar23->Desc).PS.pShaderBytecode = pvVar8;
          (pFVar23->Desc).PS.BytecodeLength = uVar9;
          iVar19 = (pFVar21->Desc).BlendState.AlphaToCoverageEnable;
          iVar11 = (pFVar21->Desc).BlendState.IndependentBlendEnable;
          iVar12 = (pFVar21->Desc).BlendState.RenderTarget[0].BlendEnable;
          iVar13 = (pFVar21->Desc).BlendState.RenderTarget[0].LogicOpEnable;
          (pFVar23->Desc).GS.pShaderBytecode = pvVar6;
          (pFVar23->Desc).GS.BytecodeLength = uVar7;
          DVar14 = (pFVar21->Desc).BlendState.RenderTarget[0].SrcBlend;
          DVar15 = (pFVar21->Desc).BlendState.RenderTarget[0].DestBlend;
          DVar16 = (pFVar21->Desc).BlendState.RenderTarget[0].BlendOp;
          DVar17 = (pFVar21->Desc).BlendState.RenderTarget[0].SrcBlendAlpha;
          (pFVar23->Desc).BlendState.AlphaToCoverageEnable = iVar19;
          (pFVar23->Desc).BlendState.IndependentBlendEnable = iVar11;
          (pFVar23->Desc).BlendState.RenderTarget[0].BlendEnable = iVar12;
          (pFVar23->Desc).BlendState.RenderTarget[0].LogicOpEnable = iVar13;
          (pFVar23->Desc).BlendState.RenderTarget[0].SrcBlend = DVar14;
          (pFVar23->Desc).BlendState.RenderTarget[0].DestBlend = DVar15;
          (pFVar23->Desc).BlendState.RenderTarget[0].BlendOp = DVar16;
          (pFVar23->Desc).BlendState.RenderTarget[0].SrcBlendAlpha = DVar17;
          lVar24 = lVar24 + -1;
          pFVar21 = (FD3D12LowLevelGraphicsPipelineStateDesc *)
                    &(pFVar21->Desc).BlendState.RenderTarget[0].DestBlendAlpha;
          pFVar23 = (FD3D12LowLevelGraphicsPipelineStateDesc *)
                    &(pFVar23->Desc).BlendState.RenderTarget[0].DestBlendAlpha;
        } while (lVar24 != 0);
        local_628.Desc.NodeMask = 1;
        if (GVirtualMGPU == 0) {
          local_628.Desc.NodeMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
        }
        local_628.CombinedHash = FD3D12PipelineStateCacheBase::HashPSODesc(&local_628);
        iVar19 = TSet<TTuple<FD3D12LowLevelGraphicsPipelineStateDesc,FD3D12PipelineState_*>,FD3D12PipelineStateCacheBase::TStateCacheKeyFuncs<FD3D12LowLevelGraphicsPipelineStateDesc,FD3D12PipelineState_*>,FDefaultSetAllocator>
                 ::Remove((TSet<TTuple<FD3D12LowLevelGraphicsPipelineStateDesc,FD3D12PipelineState_*>,FD3D12PipelineStateCacheBase::TStateCacheKeyFuncs<FD3D12LowLevelGraphicsPipelineStateDesc,FD3D12PipelineState_*>,FDefaultSetAllocator>
                           *)&(pFVar20->PipelineStateCache)._padding_,&local_628);
        if ((iVar19 != 1) &&
           (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<3462060828205777534>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Pipelinestate.cpp"
                                ,0x27e,"ElementsRemoved == 1"), bVar18)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&(pFVar20->PipelineStateCache)._padding_);
    }
    else {
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Pipelinestate.cpp"
                          ,0x272,L"");
      if (bVar18) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
LAB_1459f83da:
  FBoundShaderStateInput::ReleaseResources(&(this->PipelineStateInitializer).BoundShaderState);
  pFVar3 = (FRHIResource *)(this->PipelineStateInitializer).BlendState;
  if (pFVar3 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFVar3);
  }
  pFVar3 = (FRHIResource *)(this->PipelineStateInitializer).RasterizerState;
  if (pFVar3 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFVar3);
  }
  this_00 = (this->PipelineStateInitializer).DepthStencilState;
  if (this_00 != (FRHIDepthStencilState *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

// GetShader @ 145a1b470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FRHIGraphicsShader * __thiscall
FD3D12GraphicsPipelineState::GetShader(FD3D12GraphicsPipelineState *this,EShaderFrequency param_1)

{
  if (param_1 == SF_Vertex) {
    return (FRHIGraphicsShader *)(this->PipelineStateInitializer).BoundShaderState.VertexShaderRHI;
  }
  if (param_1 == SF_Mesh) {
    return (FRHIGraphicsShader *)(this->PipelineStateInitializer).BoundShaderState.MeshShaderRHI;
  }
  if (param_1 == SF_Amplification) {
    return (FRHIGraphicsShader *)
           (this->PipelineStateInitializer).BoundShaderState.AmplificationShaderRHI;
  }
  if (param_1 != SF_Pixel) {
    if (param_1 != SF_Geometry) {
      return (FRHIGraphicsShader *)0x0;
    }
    return (FRHIGraphicsShader *)(this->PipelineStateInitializer).BoundShaderState.GeometryShaderRHI
    ;
  }
  return (FRHIGraphicsShader *)(this->PipelineStateInitializer).BoundShaderState.PixelShaderRHI;
}

