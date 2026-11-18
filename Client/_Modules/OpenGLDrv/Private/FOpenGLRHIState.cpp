// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 4

// FOpenGLRHIState @ 145be33f0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FOpenGLRHIState * __thiscall FOpenGLRHIState::FOpenGLRHIState(FOpenGLRHIState *this)

{
  FOpenGLStream *pFVar1;
  longlong lVar2;
  
  (this->RasterizerState).FillMode = 0x1b02;
  (this->RasterizerState).CullMode = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOpenGLRHIState__6B_;
  (this->RasterizerState).DepthBias = 0.0;
  (this->RasterizerState).SlopeScaleDepthBias = 0.0;
  (this->RasterizerState).DepthClipMode = DepthClip;
  (this->DepthStencilState).bStencilEnable = false;
  (this->DepthStencilState).bTwoSidedStencilMode = false;
  this->StencilRef = 0;
  (this->DepthStencilState).bZEnable = false;
  (this->DepthStencilState).bZWriteEnable = true;
  (this->DepthStencilState).ZFunc = 0x201;
  (this->DepthStencilState).StencilFunc = 0x207;
  (this->DepthStencilState).StencilFail = 0x1e00;
  (this->DepthStencilState).StencilZFail = 0x1e00;
  (this->DepthStencilState).StencilPass = 0x1e00;
  (this->DepthStencilState).CCWStencilFunc = 0x207;
  (this->DepthStencilState).CCWStencilFail = 0x1e00;
  (this->DepthStencilState).CCWStencilZFail = 0x1e00;
  (this->DepthStencilState).CCWStencilPass = 0x1e00;
  (this->DepthStencilState).StencilReadMask = 0xffffffff;
  (this->DepthStencilState).StencilWriteMask = 0xffffffff;
  FOpenGLBlendStateData::FOpenGLBlendStateData(&this->BlendState);
  pFVar1 = this->Streams;
  this->Framebuffer = 0;
  lVar2 = 0x10;
  this->bScissorEnabled = false;
  this->DepthMinZ = 0.0;
  this->DepthMaxZ = 1.0;
  this->ZeroFilledDummyUniformBuffer = 0;
  this->RenderTargetWidth = 0;
  this->RenderTargetHeight = 0;
  this->bAlphaToCoverageEnabled = false;
  this->NumRenderingSamples = 1;
  this->FirstNonzeroRenderTarget = -1;
  this->DepthStencil = (FOpenGLTexture *)0x0;
  this->StencilStoreAction = ENoAction;
  this->DepthTargetWidth = 0;
  this->DepthTargetHeight = 0;
  this->bFramebufferSetupInvalid = true;
  (this->DynamicVertexStream).VertexBufferResource = 0;
  (this->DynamicVertexStream).Stride = 0;
  (this->DynamicVertexStream).Offset = 0;
  (this->DynamicVertexStream).Divisor = 0;
  this->NumVertices = 0;
  this->PrimitiveType = 0;
  this->NumPrimitives = 0;
  this->MinVertexIndex = 0;
  this->IndexDataStride = 0;
  do {
    pFVar1->VertexBufferResource = 0;
    pFVar1->Stride = 0;
    pFVar1->Offset = 0;
    pFVar1->Divisor = 0;
    pFVar1 = pFVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  this->LinkedProgramAndDirtyFlag = (FOpenGLLinkedProgram *)0x0;
  this->ShaderParameters = (FOpenGLShaderParameterCache *)0x0;
  (this->BoundShaderState).Reference = (FOpenGLBoundShaderState *)0x0;
  (this->CurrentComputeShader).Reference = (FOpenGLComputeShader *)0x0;
  this->UpVertexBufferBytes = 0;
  this->UpIndexBufferBytes = 0;
  this->UpVertexBuffer = (void *)0x0;
  this->UpIndexBuffer = (void *)0x0;
  (this->Scissor).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->Scissor).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->Viewport).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->Viewport).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  this->RenderTargets[0] = (FOpenGLTexture *)0x0;
  this->RenderTargets[1] = (FOpenGLTexture *)0x0;
  this->RenderTargets[2] = (FOpenGLTexture *)0x0;
  this->RenderTargets[3] = (FOpenGLTexture *)0x0;
  this->RenderTargets[4] = (FOpenGLTexture *)0x0;
  this->RenderTargets[5] = (FOpenGLTexture *)0x0;
  this->RenderTargets[6] = (FOpenGLTexture *)0x0;
  this->RenderTargets[7] = (FOpenGLTexture *)0x0;
  this->RenderTargetMipmapLevels[0] = 0;
  this->RenderTargetMipmapLevels[1] = 0;
  this->RenderTargetMipmapLevels[2] = 0;
  this->RenderTargetMipmapLevels[3] = 0;
  this->RenderTargetMipmapLevels[4] = 0;
  this->RenderTargetMipmapLevels[5] = 0;
  this->RenderTargetMipmapLevels[6] = 0;
  this->RenderTargetMipmapLevels[7] = 0;
  this->RenderTargetArrayIndex[0] = 0;
  this->RenderTargetArrayIndex[1] = 0;
  this->RenderTargetArrayIndex[2] = 0;
  this->RenderTargetArrayIndex[3] = 0;
  this->RenderTargetArrayIndex[4] = 0;
  this->RenderTargetArrayIndex[5] = 0;
  this->RenderTargetArrayIndex[6] = 0;
  this->RenderTargetArrayIndex[7] = 0;
  memset(this->BoundUniformBuffers,0,0x2a0);
  memset(this->BoundUniformBuffersDynamicOffset,0,0x150);
  return this;
}

// ~FOpenGLRHIState @ 145be9b60

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FOpenGLRHIState::~FOpenGLRHIState(FOpenGLRHIState *this)

{
  FOpenGLComputeShader *this_00;
  FOpenGLBoundShaderState *this_01;
  
  this->_padding_ = (longlong)&___7FOpenGLRHIState__6B_;
  CleanupResources(this);
  this_00 = (this->CurrentComputeShader).Reference;
  if (this_00 != (FOpenGLComputeShader *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->BoundShaderState).Reference;
  if (this_01 != (FOpenGLBoundShaderState *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  this->_padding_ = (longlong)&___7FOpenGLCommonState__6B_;
  FOpenGLCommonState::CleanupResources((FOpenGLCommonState *)this);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// CleanupResources @ 145bf5b90

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FOpenGLRHIState::CleanupResources(FOpenGLRHIState *this)

{
  FOpenGLShaderParameterCache *pFVar1;
  FOpenGLShaderParameterCache *pFVar2;
  FOpenGLShaderParameterCache *pFVar3;
  longlong lVar4;
  
  pFVar2 = this->ShaderParameters;
  if (pFVar2 != (FOpenGLShaderParameterCache *)0x0) {
    lVar4 = *(longlong *)&pFVar2[-1].GlobalUniformArraySize;
    pFVar3 = pFVar2 + lVar4;
    while (lVar4 != 0) {
      lVar4 = lVar4 + -1;
      pFVar1 = pFVar3 + -1;
      if (0 < pFVar3[-1].GlobalUniformArraySize) {
        FMemory::Free(pFVar3[-1].PackedUniformsScratch[0]);
        FMemory::Free(pFVar1->PackedGlobalUniforms[0]);
      }
      pFVar3[-1].PackedUniformsScratch[0] = (uchar *)0x0;
      pFVar3[-1].PackedUniformsScratch[1] = (uchar *)0x0;
      pFVar3[-1].PackedUniformsScratch[2] = (uchar *)0x0;
      pFVar3[-1].PackedUniformsScratch[3] = (uchar *)0x0;
      pFVar3[-1].PackedUniformsScratch[4] = (uchar *)0x0;
      pFVar3[-1].PackedUniformsScratch[5] = (uchar *)0x0;
      pFVar3[-1].PackedUniformsScratch[6] = (uchar *)0x0;
      pFVar1->PackedGlobalUniforms[0] = (uchar *)0x0;
      pFVar3[-1].PackedGlobalUniforms[1] = (uchar *)0x0;
      pFVar3[-1].PackedGlobalUniforms[2] = (uchar *)0x0;
      pFVar3[-1].PackedGlobalUniforms[3] = (uchar *)0x0;
      pFVar3[-1].PackedGlobalUniforms[4] = (uchar *)0x0;
      pFVar3[-1].PackedGlobalUniforms[5] = (uchar *)0x0;
      pFVar3[-1].PackedGlobalUniforms[6] = (uchar *)0x0;
      pFVar3[-1].GlobalUniformArraySize = -1;
      pFVar3 = pFVar1;
    }
    operator_delete__(&pFVar2[-1].GlobalUniformArraySize,
                      *(longlong *)&pFVar2[-1].GlobalUniformArraySize * 0xb0 + 8);
  }
  this->ShaderParameters = (FOpenGLShaderParameterCache *)0x0;
  memset(this->BoundUniformBuffers,0,0x2a0);
  memset(this->BoundUniformBuffersDynamicOffset,0,0x150);
  FOpenGLCommonState::CleanupResources((FOpenGLCommonState *)this);
  return;
}

// InitializeResources @ 145c09440

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FOpenGLRHIState::InitializeResources(FOpenGLRHIState *this,int param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  FOpenGLShaderParameterCache *pFVar5;
  
  if ((this->ShaderParameters != (FOpenGLShaderParameterCache *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ShaderParameters",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLState.cpp"
                         ,0x1b7,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FOpenGLCommonState::InitializeResources((FOpenGLCommonState *)this,param_1,param_2);
  puVar3 = operator_new__(0x428);
  pFVar5 = (FOpenGLShaderParameterCache *)0x0;
  if (puVar3 != (undefined8 *)0x0) {
    lVar4 = 6;
    pFVar5 = (FOpenGLShaderParameterCache *)(puVar3 + 1);
    *puVar3 = 6;
    puVar3 = puVar3 + 8;
    do {
      *(undefined4 *)(puVar3 + 0xe) = 0xffffffff;
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3 = puVar3 + 0x16;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  this->ShaderParameters = pFVar5;
  if ((FOpenGLBase::MaxVertexUniformComponents == -1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaxVertexUniformComponents != -1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBase.h"
                         ,0x91,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FOpenGLShaderParameterCache::InitializeResources
            (pFVar5,FOpenGLBase::MaxVertexUniformComponents << 4);
  pFVar5 = this->ShaderParameters;
  if ((FOpenGLBase::MaxPixelUniformComponents == -1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaxPixelUniformComponents != -1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBase.h"
                         ,0x90,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FOpenGLShaderParameterCache::InitializeResources
            (pFVar5 + 1,FOpenGLBase::MaxPixelUniformComponents << 4);
  pFVar5 = this->ShaderParameters;
  if ((FOpenGLBase::MaxGeometryUniformComponents == -1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaxGeometryUniformComponents != -1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBase.h"
                         ,0x92,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FOpenGLShaderParameterCache::InitializeResources
            (pFVar5 + 2,FOpenGLBase::MaxGeometryUniformComponents << 4);
  this->LinkedProgramAndDirtyFlag = (FOpenGLLinkedProgram *)0x0;
  pFVar5 = this->ShaderParameters;
  if ((FOpenGL4::MaxComputeUniformComponents == -1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("MaxComputeUniformComponents != -1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGL4.h"
                         ,0x68,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FOpenGLShaderParameterCache::InitializeResources
            (pFVar5 + 5,FOpenGL4::MaxComputeUniformComponents << 4);
  this->DirtyUniformBuffers[0] = 0xffff;
  this->DirtyUniformBuffers[1] = 0xffff;
  this->DirtyUniformBuffers[2] = 0xffff;
  this->DirtyUniformBuffers[3] = 0xffff;
  this->bAnyDirtyRealUniformBuffers[0] = true;
  this->bAnyDirtyRealUniformBuffers[1] = true;
  this->bAnyDirtyRealUniformBuffers[2] = true;
  this->bAnyDirtyRealUniformBuffers[3] = true;
  this->DirtyUniformBuffers[4] = 0xffff;
  this->DirtyUniformBuffers[5] = 0xffff;
  this->bAnyDirtyRealUniformBuffers[4] = true;
  this->bAnyDirtyRealUniformBuffers[5] = true;
  this->bAnyDirtyGraphicsUniformBuffers = true;
  return;
}

