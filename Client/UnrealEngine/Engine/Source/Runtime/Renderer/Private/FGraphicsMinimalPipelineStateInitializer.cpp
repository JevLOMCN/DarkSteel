// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// AsGraphicsPipelineStateInitializer @ 14473fa00

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FGraphicsPipelineStateInitializer * __thiscall
FGraphicsMinimalPipelineStateInitializer::AsGraphicsPipelineStateInitializer
          (FGraphicsMinimalPipelineStateInitializer *this,
          FGraphicsPipelineStateInitializer *__return_storage_ptr__)

{
  FRHIWorkGraphShader *pFVar1;
  EVRSShadingRate EVar2;
  bool bVar3;
  EPrimitiveType EVar4;
  FRHIDepthStencilState *pFVar5;
  FRHIRasterizerState *pFVar6;
  FRHIBlendState *pFVar7;
  FRHISamplerState *pFVar8;
  FRHISamplerState *pFVar9;
  FRHIVertexShader *pFVar10;
  FRHIPixelShader *pFVar11;
  FRHIMeshShader *pFVar12;
  FRHIAmplificationShader *pFVar13;
  FRHIGeometryShader *pFVar14;
  bool bVar15;
  FBoundShaderStateInput *pFVar16;
  ulong64 uVar17;
  FBoundShaderStateInput local_78;
  
  pFVar8 = (this->ImmutableSamplerState).ImmutableSamplers.Elements[0];
  pFVar9 = (this->ImmutableSamplerState).ImmutableSamplers.Elements[1];
  EVar2 = this->DrawShadingRate;
  bVar15 = this->bAllowVariableRateShading;
  bVar3 = this->bDepthBounds;
  EVar4 = this->PrimitiveType;
  pFVar5 = this->DepthStencilState;
  pFVar6 = this->RasterizerState;
  pFVar7 = this->BlendState;
  pFVar16 = FMinimalBoundShaderStateInput::AsBoundShaderState(&this->BoundShaderState,&local_78);
  pFVar1 = pFVar16->WorkGraphMeshShaderRHI;
  pFVar10 = pFVar16->VertexShaderRHI;
  pFVar11 = pFVar16->PixelShaderRHI;
  pFVar12 = pFVar16->MeshShaderRHI;
  pFVar13 = pFVar16->AmplificationShaderRHI;
  pFVar14 = pFVar16->GeometryShaderRHI;
  (__return_storage_ptr__->BoundShaderState).VertexDeclarationRHI = pFVar16->VertexDeclarationRHI;
  (__return_storage_ptr__->BoundShaderState).VertexShaderRHI = pFVar10;
  __return_storage_ptr__->BlendState = pFVar7;
  (__return_storage_ptr__->BoundShaderState).PixelShaderRHI = pFVar11;
  (__return_storage_ptr__->BoundShaderState).MeshShaderRHI = pFVar12;
  __return_storage_ptr__->RasterizerState = pFVar6;
  (__return_storage_ptr__->BoundShaderState).AmplificationShaderRHI = pFVar13;
  (__return_storage_ptr__->BoundShaderState).GeometryShaderRHI = pFVar14;
  __return_storage_ptr__->DepthStencilState = pFVar5;
  (__return_storage_ptr__->BoundShaderState).WorkGraphMeshShaderRHI = pFVar1;
  __return_storage_ptr__->PrimitiveType = EVar4;
  __return_storage_ptr__->RenderTargetsEnabled = 0;
  (__return_storage_ptr__->ImmutableSamplerState).ImmutableSamplers.Elements[0] = pFVar8;
  (__return_storage_ptr__->ImmutableSamplerState).ImmutableSamplers.Elements[1] = pFVar9;
  *(undefined8 *)(__return_storage_ptr__->RenderTargetFormats).Elements = 0;
  (__return_storage_ptr__->RenderTargetFlags).Elements[0] = None;
  (__return_storage_ptr__->RenderTargetFlags).Elements[1] = None;
  (__return_storage_ptr__->RenderTargetFlags).Elements[2] = None;
  (__return_storage_ptr__->RenderTargetFlags).Elements[3] = None;
  (__return_storage_ptr__->RenderTargetFlags).Elements[4] = None;
  (__return_storage_ptr__->RenderTargetFlags).Elements[5] = None;
  (__return_storage_ptr__->RenderTargetFlags).Elements[6] = None;
  (__return_storage_ptr__->RenderTargetFlags).Elements[7] = None;
  __return_storage_ptr__->DepthStencilTargetFormat = PF_Unknown;
  __return_storage_ptr__->DepthStencilTargetFlag = None;
  __return_storage_ptr__->DepthTargetLoadAction = ENoAction;
  __return_storage_ptr__->DepthTargetStoreAction = ENoAction;
  __return_storage_ptr__->StencilTargetLoadAction = ENoAction;
  __return_storage_ptr__->StencilTargetStoreAction = ENoAction;
  __return_storage_ptr__->DepthStencilAccess = DepthNop;
  __return_storage_ptr__->NumSamples = 0;
  __return_storage_ptr__->SubpassHint = None;
  __return_storage_ptr__->SubpassIndex = '\0';
  __return_storage_ptr__->ConservativeRasterization = Disabled;
  __return_storage_ptr__->bDepthBounds = bVar3;
  __return_storage_ptr__->MultiViewCount = '\0';
  __return_storage_ptr__->bHasFragmentDensityAttachment = false;
  __return_storage_ptr__->bAllowVariableRateShading = bVar15;
  __return_storage_ptr__->ShadingRate = EVar2;
  (__return_storage_ptr__->field25_0xd2).Flags = 0;
  __return_storage_ptr__->StatePrecachePSOHash = 0;
  bVar15 = PipelineStateCache::IsPSOPrecachingEnabled();
  if (bVar15) {
    uVar17 = this->StatePrecachePSOHash;
    if (uVar17 == 0) {
      uVar17 = (**(code **)(GDynamicRHI->_padding_ + 0x2d0))(GDynamicRHI,__return_storage_ptr__);
    }
    __return_storage_ptr__->StatePrecachePSOHash = uVar17;
  }
  return __return_storage_ptr__;
}

// FGraphicsMinimalPipelineStateInitializer @ 144eee7c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

FGraphicsMinimalPipelineStateInitializer * __thiscall
FGraphicsMinimalPipelineStateInitializer::FGraphicsMinimalPipelineStateInitializer
          (FGraphicsMinimalPipelineStateInitializer *this,
          FGraphicsMinimalPipelineStateInitializer *param_1)

{
  FShaderMapResource *pFVar1;
  FRHISamplerState *pFVar2;
  
  (this->BoundShaderState).VertexDeclarationRHI = (param_1->BoundShaderState).VertexDeclarationRHI;
  (this->BoundShaderState).CachedVertexShader = (param_1->BoundShaderState).CachedVertexShader;
  (this->BoundShaderState).CachedPixelShader = (param_1->BoundShaderState).CachedPixelShader;
  (this->BoundShaderState).bAllShaderAreLoaded = (param_1->BoundShaderState).bAllShaderAreLoaded;
  (this->BoundShaderState).CachedGeometryShader = (param_1->BoundShaderState).CachedGeometryShader;
  (this->BoundShaderState).CachedMeshShader = (param_1->BoundShaderState).CachedMeshShader;
  (this->BoundShaderState).VertexShaderResource.Reference = (FShaderMapResource *)0x0;
  pFVar1 = (param_1->BoundShaderState).VertexShaderResource.Reference;
  (this->BoundShaderState).VertexShaderResource.Reference = pFVar1;
  if (pFVar1 != (FShaderMapResource *)0x0) {
    FShaderMapResource::AddRef(pFVar1);
  }
  (this->BoundShaderState).PixelShaderResource.Reference = (FShaderMapResource *)0x0;
  pFVar1 = (param_1->BoundShaderState).PixelShaderResource.Reference;
  (this->BoundShaderState).PixelShaderResource.Reference = pFVar1;
  if (pFVar1 != (FShaderMapResource *)0x0) {
    FShaderMapResource::AddRef(pFVar1);
  }
  (this->BoundShaderState).GeometryShaderResource.Reference = (FShaderMapResource *)0x0;
  pFVar1 = (param_1->BoundShaderState).GeometryShaderResource.Reference;
  (this->BoundShaderState).GeometryShaderResource.Reference = pFVar1;
  if (pFVar1 != (FShaderMapResource *)0x0) {
    FShaderMapResource::AddRef(pFVar1);
  }
  (this->BoundShaderState).MeshShaderResource.Reference = (FShaderMapResource *)0x0;
  pFVar1 = (param_1->BoundShaderState).MeshShaderResource.Reference;
  (this->BoundShaderState).MeshShaderResource.Reference = pFVar1;
  if (pFVar1 != (FShaderMapResource *)0x0) {
    FShaderMapResource::AddRef(pFVar1);
  }
  (this->BoundShaderState).VertexShaderIndex = (param_1->BoundShaderState).VertexShaderIndex;
  (this->BoundShaderState).PixelShaderIndex = (param_1->BoundShaderState).PixelShaderIndex;
  (this->BoundShaderState).GeometryShaderIndex = (param_1->BoundShaderState).GeometryShaderIndex;
  (this->BoundShaderState).MeshShaderIndex = (param_1->BoundShaderState).MeshShaderIndex;
  this->BlendState = param_1->BlendState;
  this->RasterizerState = param_1->RasterizerState;
  this->DepthStencilState = param_1->DepthStencilState;
  pFVar2 = (param_1->ImmutableSamplerState).ImmutableSamplers.Elements[1];
  (this->ImmutableSamplerState).ImmutableSamplers.Elements[0] =
       (param_1->ImmutableSamplerState).ImmutableSamplers.Elements[0];
  (this->ImmutableSamplerState).ImmutableSamplers.Elements[1] = pFVar2;
  this->bDepthBounds = param_1->bDepthBounds;
  this->bAllowVariableRateShading = param_1->bAllowVariableRateShading;
  this->DrawShadingRate = param_1->DrawShadingRate;
  this->PrimitiveType = param_1->PrimitiveType;
  this->StatePrecachePSOHash = param_1->StatePrecachePSOHash;
  this->PSOPrecacheState = param_1->PSOPrecacheState;
  return this;
}

// operator== @ 144ef2110

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

bool __thiscall
FGraphicsMinimalPipelineStateInitializer::operator==
          (FGraphicsMinimalPipelineStateInitializer *this,
          FGraphicsMinimalPipelineStateInitializer *param_1)

{
  if ((((((this->BoundShaderState).VertexDeclarationRHI ==
          (param_1->BoundShaderState).VertexDeclarationRHI) &&
        ((this->BoundShaderState).VertexShaderResource.Reference ==
         (param_1->BoundShaderState).VertexShaderResource.Reference)) &&
       ((this->BoundShaderState).PixelShaderResource.Reference ==
        (param_1->BoundShaderState).PixelShaderResource.Reference)) &&
      ((((this->BoundShaderState).VertexShaderIndex == (param_1->BoundShaderState).VertexShaderIndex
        && ((this->BoundShaderState).PixelShaderIndex ==
            (param_1->BoundShaderState).PixelShaderIndex)) &&
       (((this->BoundShaderState).GeometryShaderResource.Reference ==
         (param_1->BoundShaderState).GeometryShaderResource.Reference &&
        (((this->BoundShaderState).GeometryShaderIndex ==
          (param_1->BoundShaderState).GeometryShaderIndex &&
         (this->BlendState == param_1->BlendState)))))))) &&
     ((this->RasterizerState == param_1->RasterizerState &&
      (((((this->DepthStencilState == param_1->DepthStencilState &&
          ((this->ImmutableSamplerState).ImmutableSamplers.Elements[0] ==
           (param_1->ImmutableSamplerState).ImmutableSamplers.Elements[0])) &&
         ((this->ImmutableSamplerState).ImmutableSamplers.Elements[1] ==
          (param_1->ImmutableSamplerState).ImmutableSamplers.Elements[1])) &&
        ((this->bDepthBounds == param_1->bDepthBounds &&
         (this->bAllowVariableRateShading == param_1->bAllowVariableRateShading)))) &&
       (this->DrawShadingRate == param_1->DrawShadingRate)))))) {
    return this->PrimitiveType == param_1->PrimitiveType;
  }
  return false;
}

// ComputeStatePrecachePSOHash @ 144efdab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FGraphicsMinimalPipelineStateInitializer::ComputeStatePrecachePSOHash
          (FGraphicsMinimalPipelineStateInitializer *this)

{
  ulong64 uVar1;
  code *pcVar2;
  bool bVar3;
  FGraphicsPipelineStateInitializer *pFVar4;
  undefined1 auStack_118 [32];
  FGraphicsPipelineStateInitializer local_f8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  if (this->StatePrecachePSOHash == 0) {
    pFVar4 = AsGraphicsPipelineStateInitializer(this,&local_f8);
    uVar1 = pFVar4->StatePrecachePSOHash;
    this->StatePrecachePSOHash = uVar1;
    if (uVar1 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StatePrecachePSOHash",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                         ,0x37f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// SetupBoundShaderState @ 144f2ac40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
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

void __thiscall
FGraphicsMinimalPipelineStateInitializer::SetupBoundShaderState
          (FGraphicsMinimalPipelineStateInitializer *this,FRHIVertexDeclaration *param_1,
          FMeshProcessorShaders *param_2)

{
  TRefCountPtr<FShaderMapResource> *pTVar1;
  TRefCountPtr<FShaderMapResource> *pTVar2;
  TRefCountPtr<FShaderMapResource> *pTVar3;
  TRefCountPtr<FShaderMapResource> *pTVar4;
  uint uVar5;
  FShaderMapResource *pFVar6;
  FShaderMapResource *pFVar7;
  code *pcVar8;
  bool bVar9;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  undefined8 local_30 [3];
  
  (this->BoundShaderState).bAllShaderAreLoaded = true;
  pTVar1 = &(this->BoundShaderState).VertexShaderResource;
  (this->BoundShaderState).VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  (this->BoundShaderState).CachedVertexShader = (FRHIVertexShader *)0x0;
  (this->BoundShaderState).CachedPixelShader = (FRHIPixelShader *)0x0;
  (this->BoundShaderState).CachedGeometryShader = (FRHIGeometryShader *)0x0;
  (this->BoundShaderState).CachedMeshShader = (FRHIMeshShader *)0x0;
  if (pTVar1 != (TRefCountPtr<FShaderMapResource> *)&local_48) {
    pFVar6 = pTVar1->Reference;
    pTVar1->Reference = (FShaderMapResource *)0x0;
    if (pFVar6 != (FShaderMapResource *)0x0) {
      FShaderMapResource::Release(pFVar6);
    }
  }
  pTVar2 = &(this->BoundShaderState).PixelShaderResource;
  if (pTVar2 != (TRefCountPtr<FShaderMapResource> *)&local_40) {
    pFVar6 = pTVar2->Reference;
    pTVar2->Reference = (FShaderMapResource *)0x0;
    if (pFVar6 != (FShaderMapResource *)0x0) {
      FShaderMapResource::Release(pFVar6);
    }
  }
  pTVar3 = &(this->BoundShaderState).GeometryShaderResource;
  if (pTVar3 != (TRefCountPtr<FShaderMapResource> *)&local_38) {
    pFVar6 = pTVar3->Reference;
    pTVar3->Reference = (FShaderMapResource *)0x0;
    if (pFVar6 != (FShaderMapResource *)0x0) {
      FShaderMapResource::Release(pFVar6);
    }
  }
  pTVar4 = &(this->BoundShaderState).MeshShaderResource;
  if (pTVar4 != (TRefCountPtr<FShaderMapResource> *)local_30) {
    pFVar6 = pTVar4->Reference;
    pTVar4->Reference = (FShaderMapResource *)0x0;
    if (pFVar6 != (FShaderMapResource *)0x0) {
      FShaderMapResource::Release(pFVar6);
    }
  }
  (this->BoundShaderState).VertexShaderIndex = -1;
  (this->BoundShaderState).PixelShaderIndex = -1;
  (this->BoundShaderState).GeometryShaderIndex = -1;
  (this->BoundShaderState).MeshShaderIndex = -1;
  (this->BoundShaderState).VertexDeclarationRHI = param_1;
  if ((param_2->VertexShader).ShaderContent == (FShader *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shaders.VertexShader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                       ,0x35f,L"Can\'t render without a vertex shader");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((param_2->VertexShader).ShaderContent == (FShader *)0x0) goto LAB_144f2ada9;
  }
  pFVar6 = pTVar1->Reference;
  pFVar7 = (((param_2->VertexShader).ShaderMap)->Resource).Reference;
  if (pFVar6 != pFVar7) {
    pTVar1->Reference = pFVar7;
    if (pFVar7 != (FShaderMapResource *)0x0) {
      FShaderMapResource::AddRef(pFVar7);
    }
    if (pFVar6 != (FShaderMapResource *)0x0) {
      FShaderMapResource::Release(pFVar6);
    }
  }
  uVar5 = ((param_2->VertexShader).ShaderContent)->ResourceIndex;
  pFVar6 = pTVar1->Reference;
  (this->BoundShaderState).VertexShaderIndex = uVar5;
  if (pFVar6->NumRHIShaders <= uVar5) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("BoundShaderState.VertexShaderResource->IsValidShaderIndex(BoundShaderState.VertexShaderIndex)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                       ,0x366,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
LAB_144f2ada9:
  if ((param_2->PixelShader).ShaderContent != (FShader *)0x0) {
    pFVar6 = pTVar2->Reference;
    pFVar7 = (((param_2->PixelShader).ShaderMap)->Resource).Reference;
    if (pFVar6 != pFVar7) {
      pTVar2->Reference = pFVar7;
      if (pFVar7 != (FShaderMapResource *)0x0) {
        FShaderMapResource::AddRef(pFVar7);
      }
      if (pFVar6 != (FShaderMapResource *)0x0) {
        FShaderMapResource::Release(pFVar6);
      }
    }
    uVar5 = ((param_2->PixelShader).ShaderContent)->ResourceIndex;
    pFVar6 = pTVar2->Reference;
    (this->BoundShaderState).PixelShaderIndex = uVar5;
    if (pFVar6->NumRHIShaders <= uVar5) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("BoundShaderState.PixelShaderResource->IsValidShaderIndex(BoundShaderState.PixelShaderIndex)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                         ,0x36d,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
  }
  if ((param_2->GeometryShader).ShaderContent != (FShader *)0x0) {
    pFVar6 = pTVar3->Reference;
    pFVar7 = (((param_2->GeometryShader).ShaderMap)->Resource).Reference;
    if (pFVar6 != pFVar7) {
      pTVar3->Reference = pFVar7;
      if (pFVar7 != (FShaderMapResource *)0x0) {
        FShaderMapResource::AddRef(pFVar7);
      }
      if (pFVar6 != (FShaderMapResource *)0x0) {
        FShaderMapResource::Release(pFVar6);
      }
    }
    uVar5 = ((param_2->GeometryShader).ShaderContent)->ResourceIndex;
    pFVar6 = pTVar3->Reference;
    (this->BoundShaderState).GeometryShaderIndex = uVar5;
    if (pFVar6->NumRHIShaders <= uVar5) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("BoundShaderState.GeometryShaderResource->IsValidShaderIndex(BoundShaderState.GeometryShaderIndex)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\MeshPassProcessor.cpp"
                         ,0x375,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
  }
  return;
}

