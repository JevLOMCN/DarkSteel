// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 4

// FOpenGLContextState @ 145be07d0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */

FOpenGLContextState * __thiscall FOpenGLContextState::FOpenGLContextState(FOpenGLContextState *this)

{
  FOpenGLCachedAttr *pFVar1;
  FOpenGLStream *pFVar2;
  longlong lVar3;
  longlong lVar4;
  
  (this->RasterizerState).FillMode = 0x1b02;
  (this->RasterizerState).CullMode = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOpenGLContextState__6B_;
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
  lVar3 = 0x10;
  this->Framebuffer = 0;
  lVar4 = 0x10;
  this->Program = 0;
  (this->CachedSamplerStates).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pFVar1 = this->VertexAttrs;
  (this->CachedSamplerStates).ArrayNum = 0;
  (this->CachedSamplerStates).ArrayMax = 0;
  this->ActiveTexture = 0x84c0;
  this->bScissorEnabled = false;
  this->DepthMinZ = 0.0;
  this->DepthMaxZ = 1.0;
  this->ArrayBufferBound = 0;
  this->ElementArrayBufferBound = 0;
  this->StorageBufferBound = 0;
  this->PixelUnpackBufferBound = 0;
  this->UniformBufferBound = 0;
  (this->ClearColor).field0_0x0._s_0.R = -1.0;
  (this->ClearColor).field0_0x0._s_0.G = -1.0;
  (this->ClearColor).field0_0x0._s_0.B = -1.0;
  (this->ClearColor).field0_0x0._s_0.A = -1.0;
  this->ClearStencil = 0xffff;
  this->ClearDepth = -1.0;
  this->FirstNonzeroRenderTarget = 0;
  this->bAlphaToCoverageEnabled = false;
  this->bNonCoherentFramebufferFetchEnabled = false;
  this->VertexDecl = (FOpenGLVertexDeclaration *)0x0;
  do {
    pFVar1->Size = 0;
    pFVar1->Type = 0;
    pFVar1->StreamOffset = 0;
    pFVar1->StreamIndex = 0xffffffff;
    pFVar1->bNormalized = '\0';
    pFVar1->bShouldConvertToFloat = '\0';
    pFVar1 = pFVar1 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  pFVar2 = this->VertexStreams;
  do {
    pFVar2->VertexBufferResource = 0;
    pFVar2->Stride = 0;
    pFVar2->Offset = 0;
    pFVar2->Divisor = 0;
    pFVar2 = pFVar2 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  this->ActiveStreamMask = 0;
  this->VertexAttrs_EnabledBits = 0;
  this->ActiveUAVMask = 0;
  (this->Scissor).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->Scissor).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->Viewport).field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->Viewport).field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>_u_0)0x0;
  memset(this->UniformBuffers,0,0x120);
  memset(this->UniformBufferOffsets,0,0x120);
  return this;
}

// ~FOpenGLContextState @ 145be96c0

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */

void __thiscall FOpenGLContextState::~FOpenGLContextState(FOpenGLContextState *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->CachedSamplerStates).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
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

// CleanupResources @ 145bf5b40

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */

void __thiscall FOpenGLContextState::CleanupResources(FOpenGLContextState *this)

{
  int *piVar1;
  
  piVar1 = &(this->CachedSamplerStates).ArrayMax;
  (this->CachedSamplerStates).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->CachedSamplerStates).AllocatorInstance,0,piVar1);
  }
  FOpenGLCommonState::CleanupResources((FOpenGLCommonState *)this);
  return;
}

// InitializeResources @ 145c09340

/* WARNING: Enum "ERasterizerDepthClipMode": Some values do not have unique names */

void __thiscall
FOpenGLContextState::InitializeResources(FOpenGLContextState *this,int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  FOpenGLCommonState::InitializeResources((FOpenGLCommonState *)this,param_1,param_2);
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &(this->CachedSamplerStates).ArrayMax;
  piVar2 = &(this->CachedSamplerStates).ArrayNum;
  *piVar2 = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,param_1,&(this->CachedSamplerStates).AllocatorInstance,0,piVar1);
  }
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,param_1,&(this->CachedSamplerStates).AllocatorInstance,piVar2,piVar1);
  memset((this->CachedSamplerStates).AllocatorInstance.Data + (longlong)iVar5 * 8,0,
         (longlong)param_1 << 3);
  if (0x20 < (uint)param_2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumCombinedUAVUnits <= sizeof(ActiveUAVMask) * 8",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLState.h"
                       ,0x19a,L"Not enough bits in ActiveUAVMask to store %d UAV units");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

