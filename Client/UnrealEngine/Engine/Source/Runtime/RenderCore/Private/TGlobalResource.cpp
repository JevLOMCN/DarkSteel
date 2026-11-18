// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 50

// ~TGlobalResource<TDynamicBufferPool<TDynamicBuffer<FIndexBuffer>_>,0> @ 145d0b230

void __thiscall
TGlobalResource<TDynamicBufferPool<TDynamicBuffer<FIndexBuffer>_>,0>::
~TGlobalResource<TDynamicBufferPool<TDynamicBuffer<FIndexBuffer>_>,0>
          (TGlobalResource<TDynamicBufferPool<TDynamicBuffer<FIndexBuffer>_>,0> *this)

{
  *(undefined ***)this =
       &___7__TGlobalResource_U__TDynamicBufferPool_V__TDynamicBuffer_VFIndexBuffer_______0A___6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(void **)&this->field_0x58 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x58);
  }
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  if (*(void **)&this->field_0x38 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x38);
  }
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<TDynamicBufferPool<TDynamicBuffer<FVertexBuffer>_>,0> @ 145d0b2a0

void __thiscall
TGlobalResource<TDynamicBufferPool<TDynamicBuffer<FVertexBuffer>_>,0>::
~TGlobalResource<TDynamicBufferPool<TDynamicBuffer<FVertexBuffer>_>,0>
          (TGlobalResource<TDynamicBufferPool<TDynamicBuffer<FVertexBuffer>_>,0> *this)

{
  *(undefined ***)this =
       &___7__TGlobalResource_U__TDynamicBufferPool_V__TDynamicBuffer_VFVertexBuffer_______0A___6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(void **)&this->field_0x58 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x58);
  }
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  if (*(void **)&this->field_0x38 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x38);
  }
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FBlackVolumeTexture<2,0>,0> @ 145d0b310

void __thiscall
TGlobalResource<FBlackVolumeTexture<2,0>,0>::~TGlobalResource<FBlackVolumeTexture<2,0>,0>
          (TGlobalResource<FBlackVolumeTexture<2,0>,0> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_V__FBlackVolumeTexture__01_0A____0A___6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FTexture::~FTexture((FTexture *)this);
  return;
}

// ~TGlobalResource<FBlackVolumeTexture<2,255>,0> @ 145d0b340

void __thiscall
TGlobalResource<FBlackVolumeTexture<2,255>,0>::~TGlobalResource<FBlackVolumeTexture<2,255>,0>
          (TGlobalResource<FBlackVolumeTexture<2,255>,0> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_V__FBlackVolumeTexture__01_0PP____0A___6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FTexture::~FTexture((FTexture *)this);
  return;
}

// ~TGlobalResource<FBlackVolumeTexture<60,0>,0> @ 145d0b370

void __thiscall
TGlobalResource<FBlackVolumeTexture<60,0>,0>::~TGlobalResource<FBlackVolumeTexture<60,0>,0>
          (TGlobalResource<FBlackVolumeTexture<60,0>,0> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_V__FBlackVolumeTexture__0DM__0A____0A___6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FTexture::~FTexture((FTexture *)this);
  return;
}

// ~TGlobalResource<FColoredTexture<0,0,0,0>,0> @ 145d0b3a0

void __thiscall
TGlobalResource<FColoredTexture<0,0,0,0>,0>::~TGlobalResource<FColoredTexture<0,0,0,0>,0>
          (TGlobalResource<FColoredTexture<0,0,0,0>,0> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_V__FColoredTexture__0A__0A__0A__0A____0A___6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FTextureWithSRV::~FTextureWithSRV((FTextureWithSRV *)this);
  return;
}

// ~TGlobalResource<FColoredTexture<255,255,255,255>,0> @ 145d0b3d0

void __thiscall
TGlobalResource<FColoredTexture<255,255,255,255>,0>::
~TGlobalResource<FColoredTexture<255,255,255,255>,0>
          (TGlobalResource<FColoredTexture<255,255,255,255>,0> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_V__FColoredTexture__0PP__0PP__0PP__0PP____0A___6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FTextureWithSRV::~FTextureWithSRV((FTextureWithSRV *)this);
  return;
}

// ~TGlobalResource<FBlackArrayTexture,0> @ 145d0b400

void __thiscall
TGlobalResource<FBlackArrayTexture,0>::~TGlobalResource<FBlackArrayTexture,0>
          (TGlobalResource<FBlackArrayTexture,0> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFBlackArrayTexture___0A___6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FTexture::~FTexture((FTexture *)this);
  return;
}

// ~TGlobalResource<FBlackCubeArrayTexture,0> @ 145d0b430

void __thiscall
TGlobalResource<FBlackCubeArrayTexture,0>::~TGlobalResource<FBlackCubeArrayTexture,0>
          (TGlobalResource<FBlackCubeArrayTexture,0> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFBlackCubeArrayTexture___0A___6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FTexture::~FTexture((FTexture *)this);
  return;
}

// ~TGlobalResource<FBlackFloat4StructuredBufferWithSRV,0> @ 145d0b460

void __thiscall
TGlobalResource<FBlackFloat4StructuredBufferWithSRV,0>::
~TGlobalResource<FBlackFloat4StructuredBufferWithSRV,0>
          (TGlobalResource<FBlackFloat4StructuredBufferWithSRV,0> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFBlackFloat4StructuredBufferWithSRV___0A___6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexBufferWithSRV::~FVertexBufferWithSRV((FVertexBufferWithSRV *)this);
  return;
}

// ~TGlobalResource<FBlackFloat4VertexBuffer,0> @ 145d0b490

void __thiscall
TGlobalResource<FBlackFloat4VertexBuffer,0>::~TGlobalResource<FBlackFloat4VertexBuffer,0>
          (TGlobalResource<FBlackFloat4VertexBuffer,0> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFBlackFloat4VertexBuffer___0A___6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexBufferWithSRV::~FVertexBufferWithSRV((FVertexBufferWithSRV *)this);
  return;
}

// ~TGlobalResource<FBlackTextureWithSRV,0> @ 145d0b4c0

void __thiscall
TGlobalResource<FBlackTextureWithSRV,0>::~TGlobalResource<FBlackTextureWithSRV,0>
          (TGlobalResource<FBlackTextureWithSRV,0> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFBlackTextureWithSRV___0A___6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FTextureWithSRV::~FTextureWithSRV((FTextureWithSRV *)this);
  return;
}

// ~TGlobalResource<FBlackUintTexture,0> @ 145d0b4f0

void __thiscall
TGlobalResource<FBlackUintTexture,0>::~TGlobalResource<FBlackUintTexture,0>
          (TGlobalResource<FBlackUintTexture,0> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFBlackUintTexture___0A___6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FTextureWithSRV::~FTextureWithSRV((FTextureWithSRV *)this);
  return;
}

// ~TGlobalResource<FBlackVertexBuffer,0> @ 145d0b520

void __thiscall
TGlobalResource<FBlackVertexBuffer,0>::~TGlobalResource<FBlackVertexBuffer,0>
          (TGlobalResource<FBlackVertexBuffer,0> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFBlackVertexBuffer___0A___6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexBufferWithSRV::~FVertexBufferWithSRV((FVertexBufferWithSRV *)this);
  return;
}

// ~TGlobalResource<FClearVertexBuffer,1> @ 145d0b550

void __thiscall
TGlobalResource<FClearVertexBuffer,1>::~TGlobalResource<FClearVertexBuffer,1>
          (TGlobalResource<FClearVertexBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFClearVertexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// ~TGlobalResource<FCubeIndexBuffer,0> @ 145d0b580

void __thiscall
TGlobalResource<FCubeIndexBuffer,0>::~TGlobalResource<FCubeIndexBuffer,0>
          (TGlobalResource<FCubeIndexBuffer,0> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFCubeIndexBuffer___0A___6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)this);
  return;
}

// ~TGlobalResource<FDummyTransitionTexture,0> @ 145d0b5b0

void __thiscall
TGlobalResource<FDummyTransitionTexture,0>::~TGlobalResource<FDummyTransitionTexture,0>
          (TGlobalResource<FDummyTransitionTexture,0> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFDummyTransitionTexture___0A___6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FTexture::~FTexture((FTexture *)this);
  return;
}

// ~TGlobalResource<FEmptyResourceCollection,0> @ 145d0b5e0

void __thiscall
TGlobalResource<FEmptyResourceCollection,0>::~TGlobalResource<FEmptyResourceCollection,0>
          (TGlobalResource<FEmptyResourceCollection,0> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFEmptyResourceCollection___0A___6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FEmptyStructuredBuffer,0> @ 145d0b620

void __thiscall
TGlobalResource<FEmptyStructuredBuffer,0>::~TGlobalResource<FEmptyStructuredBuffer,0>
          (TGlobalResource<FEmptyStructuredBuffer,0> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFEmptyStructuredBuffer___0A___6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexBufferWithSRV::~FVertexBufferWithSRV((FVertexBufferWithSRV *)this);
  return;
}

// ~TGlobalResource<FEmptyUInt4VertexBuffer,0> @ 145d0b650

void __thiscall
TGlobalResource<FEmptyUInt4VertexBuffer,0>::~TGlobalResource<FEmptyUInt4VertexBuffer,0>
          (TGlobalResource<FEmptyUInt4VertexBuffer,0> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFEmptyUInt4VertexBuffer___0A___6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexBufferWithSRV::~FVertexBufferWithSRV((FVertexBufferWithSRV *)this);
  return;
}

// ~TGlobalResource<FEmptyVertexBuffer,0> @ 145d0b680

void __thiscall
TGlobalResource<FEmptyVertexBuffer,0>::~TGlobalResource<FEmptyVertexBuffer,0>
          (TGlobalResource<FEmptyVertexBuffer,0> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFEmptyVertexBuffer___0A___6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexBufferWithSRV::~FVertexBufferWithSRV((FVertexBufferWithSRV *)this);
  return;
}

// ~TGlobalResource<FEmptyVertexDeclaration,0> @ 145d0b6b0

void __thiscall
TGlobalResource<FEmptyVertexDeclaration,0>::~TGlobalResource<FEmptyVertexDeclaration,0>
          (TGlobalResource<FEmptyVertexDeclaration,0> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFEmptyVertexDeclaration___0A___6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7FEmptyVertexDeclaration__6B_;
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FFilterVertexDeclaration,0> @ 145d0b700

void __thiscall
TGlobalResource<FFilterVertexDeclaration,0>::~TGlobalResource<FFilterVertexDeclaration,0>
          (TGlobalResource<FFilterVertexDeclaration,0> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFFilterVertexDeclaration___0A___6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7FFilterVertexDeclaration__6B_;
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FMediaVertexDeclaration,1> @ 145d0b750

void __thiscall
TGlobalResource<FMediaVertexDeclaration,1>::~TGlobalResource<FMediaVertexDeclaration,1>
          (TGlobalResource<FMediaVertexDeclaration,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFMediaVertexDeclaration___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7FMediaVertexDeclaration__6B_;
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FNullColorVertexBuffer,0> @ 145d0b7a0

void __thiscall
TGlobalResource<FNullColorVertexBuffer,0>::~TGlobalResource<FNullColorVertexBuffer,0>
          (TGlobalResource<FNullColorVertexBuffer,0> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFNullColorVertexBuffer___0A___6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7FNullColorVertexBuffer__6B_;
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// ~TGlobalResource<FNullVertexBuffer,0> @ 145d0b7f0

void __thiscall
TGlobalResource<FNullVertexBuffer,0>::~TGlobalResource<FNullVertexBuffer,0>
          (TGlobalResource<FNullVertexBuffer,0> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFNullVertexBuffer___0A___6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7FNullVertexBuffer__6B_;
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// ~TGlobalResource<FScreenRectangleIndexBuffer,0> @ 145d0b840

void __thiscall
TGlobalResource<FScreenRectangleIndexBuffer,0>::~TGlobalResource<FScreenRectangleIndexBuffer,0>
          (TGlobalResource<FScreenRectangleIndexBuffer,0> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFScreenRectangleIndexBuffer___0A___6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)this);
  return;
}

// ~TGlobalResource<FScreenRectangleVertexBuffer,0> @ 145d0b870

void __thiscall
TGlobalResource<FScreenRectangleVertexBuffer,0>::~TGlobalResource<FScreenRectangleVertexBuffer,0>
          (TGlobalResource<FScreenRectangleVertexBuffer,0> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFScreenRectangleVertexBuffer___0A___6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// ~TGlobalResource<FScreenSpaceVertexBuffer,0> @ 145d0b8a0

void __thiscall
TGlobalResource<FScreenSpaceVertexBuffer,0>::~TGlobalResource<FScreenSpaceVertexBuffer,0>
          (TGlobalResource<FScreenSpaceVertexBuffer,0> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFScreenSpaceVertexBuffer___0A___6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// ~TGlobalResource<FSolidColorTextureCube,0> @ 145d0b8d0

void __thiscall
TGlobalResource<FSolidColorTextureCube,0>::~TGlobalResource<FSolidColorTextureCube,0>
          (TGlobalResource<FSolidColorTextureCube,0> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFSolidColorTextureCube___0A___6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FTexture::~FTexture((FTexture *)this);
  return;
}

// ~TGlobalResource<GPUMessage::FSystem,1> @ 145d0b900

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TGlobalResource<GPUMessage::FSystem,1>::~TGlobalResource<GPUMessage::FSystem,1>
          (TGlobalResource<GPUMessage::FSystem,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFSystem_GPUMessage___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  GPUMessage::FSystem::~FSystem((FSystem *)this);
  return;
}

// ~TGlobalResource<FTileVertexDeclaration,0> @ 145d0b930

void __thiscall
TGlobalResource<FTileVertexDeclaration,0>::~TGlobalResource<FTileVertexDeclaration,0>
          (TGlobalResource<FTileVertexDeclaration,0> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFTileVertexDeclaration___0A___6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7FTileVertexDeclaration__6B_;
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FTwoTrianglesIndexBuffer,0> @ 145d0b980

void __thiscall
TGlobalResource<FTwoTrianglesIndexBuffer,0>::~TGlobalResource<FTwoTrianglesIndexBuffer,0>
          (TGlobalResource<FTwoTrianglesIndexBuffer,0> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFTwoTrianglesIndexBuffer___0A___6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)this);
  return;
}

// ~TGlobalResource<FWhiteVertexBuffer,0> @ 145d0b9b0

void __thiscall
TGlobalResource<FWhiteVertexBuffer,0>::~TGlobalResource<FWhiteVertexBuffer,0>
          (TGlobalResource<FWhiteVertexBuffer,0> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFWhiteVertexBuffer___0A___6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexBufferWithSRV::~FVertexBufferWithSRV((FVertexBufferWithSRV *)this);
  return;
}

// ~TGlobalResource<FWhiteVertexBufferWithRDG,0> @ 145d0b9e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TGlobalResource<FWhiteVertexBufferWithRDG,0>::~TGlobalResource<FWhiteVertexBufferWithRDG,0>
          (TGlobalResource<FWhiteVertexBufferWithRDG,0> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFWhiteVertexBufferWithRDG___0A___6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FBufferWithRDG::~FBufferWithRDG((FBufferWithRDG *)this);
  return;
}

// InitGlobalResource @ 145d416b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TGlobalResource<FSolidColorTextureCube,0>::InitGlobalResource
          (TGlobalResource<FSolidColorTextureCube,0> *this)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  FRHICommandListBase *pFVar2;
  
  if (*(int *)&this->field_0x18 != -1) {
    bVar1 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderResource.h"
                       ,0xb9,L"");
    if (bVar1) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  this->field_0x1d = 0;
  bVar1 = IsInRenderingThread();
  if (bVar1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)this + 0x18);
    pFVar2 = FRenderResource::GetImmediateCommandList();
                    /* WARNING: Could not recover jumptable at 0x000145d41716. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(this,pFVar2);
    return;
  }
  BeginInitResource((FRenderResource *)this,(FRenderCommandPipe *)0x0);
  return;
}

// ~TGlobalResource<FRDGBufferPool,1> @ 145d8f1c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TGlobalResource<FRDGBufferPool,1>::~TGlobalResource<FRDGBufferPool,1>
          (TGlobalResource<FRDGBufferPool,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFRDGBufferPool___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(void **)&this->field_0x38 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x38);
  }
  DestructItems<TRefCountPtr<FRDGPooledBuffer>,int>
            (*(TRefCountPtr<FRDGPooledBuffer> **)&this->field_0x28,*(int *)&this->field_0x30);
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FRDGTimingPool,1> @ 145d8f220

void __thiscall
TGlobalResource<FRDGTimingPool,1>::~TGlobalResource<FRDGTimingPool,1>
          (TGlobalResource<FRDGTimingPool,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFRDGTimingPool___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(void **)&this->field_0x250 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x250);
  }
  if (*(void **)&this->field_0x140 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x140);
  }
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FRDGTransientResourceAllocator,0> @ 145d8f280

void __thiscall
TGlobalResource<FRDGTransientResourceAllocator,0>::
~TGlobalResource<FRDGTransientResourceAllocator,0>
          (TGlobalResource<FRDGTransientResourceAllocator,0> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFRDGTransientResourceAllocator___0A___6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(void **)&this->field_0x70 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x70);
  }
  if (*(void **)&this->field_0x60 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x60);
  }
  if (*(void **)&this->field_0x50 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x50);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->field_0x28);
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FRenderTargetPool,1> @ 145df0470

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TGlobalResource<FRenderTargetPool,1>::~TGlobalResource<FRenderTargetPool,1>
          (TGlobalResource<FRenderTargetPool,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFRenderTargetPool___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  DestructItems<TRefCountPtr<FPooledRenderTarget>,int>
            (*(TRefCountPtr<FPooledRenderTarget> **)&this->field_0x48,*(int *)&this->field_0x50);
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  DestructItems<TRefCountPtr<FPooledRenderTarget>,int>
            (*(TRefCountPtr<FPooledRenderTarget> **)&this->field_0x38,*(int *)&this->field_0x40);
  if (*(void **)&this->field_0x38 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x38);
  }
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FTextureSamplerStateCache,1> @ 145df04e0

void __thiscall
TGlobalResource<FTextureSamplerStateCache,1>::~TGlobalResource<FTextureSamplerStateCache,1>
          (TGlobalResource<FTextureSamplerStateCache,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFTextureSamplerStateCache___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined4 *)&this->field_0x68 = 0;
  if (*(void **)&this->field_0x60 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x60);
  }
  TSparseArray<TSparseSetElement<TTuple<FSamplerStateInitializerRHI,FRHISamplerState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FSamplerStateInitializerRHI,FRHISamplerState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FSamplerStateInitializerRHI,FRHISamplerState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x20);
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FUnitCubeAABBVertexBuffer,1> @ 145df0540

void __thiscall
TGlobalResource<FUnitCubeAABBVertexBuffer,1>::~TGlobalResource<FUnitCubeAABBVertexBuffer,1>
          (TGlobalResource<FUnitCubeAABBVertexBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFUnitCubeAABBVertexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7FVertexBuffer__6B_;
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FUnitCubeIndexBuffer,1> @ 145df0590

void __thiscall
TGlobalResource<FUnitCubeIndexBuffer,1>::~TGlobalResource<FUnitCubeIndexBuffer,1>
          (TGlobalResource<FUnitCubeIndexBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFUnitCubeIndexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7FIndexBuffer__6B_;
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FUnitCubeVertexBuffer,1> @ 145df05e0

void __thiscall
TGlobalResource<FUnitCubeVertexBuffer,1>::~TGlobalResource<FUnitCubeVertexBuffer,1>
          (TGlobalResource<FUnitCubeVertexBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFUnitCubeVertexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7FVertexBuffer__6B_;
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FVector2VertexDeclaration,1> @ 145df0630

void __thiscall
TGlobalResource<FVector2VertexDeclaration,1>::~TGlobalResource<FVector2VertexDeclaration,1>
          (TGlobalResource<FVector2VertexDeclaration,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFVector2VertexDeclaration___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FVector3VertexDeclaration,1> @ 145df0670

void __thiscall
TGlobalResource<FVector3VertexDeclaration,1>::~TGlobalResource<FVector3VertexDeclaration,1>
          (TGlobalResource<FVector3VertexDeclaration,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFVector3VertexDeclaration___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FVector4VertexDeclaration,1> @ 145df06b0

void __thiscall
TGlobalResource<FVector4VertexDeclaration,1>::~TGlobalResource<FVector4VertexDeclaration,1>
          (TGlobalResource<FVector4VertexDeclaration,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFVector4VertexDeclaration___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// TGlobalResource<FVisualizeTexture,1> @ 145ec3e90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TGlobalResource<FVisualizeTexture,1> * __thiscall
TGlobalResource<FVisualizeTexture,1>::TGlobalResource<FVisualizeTexture,1>
          (TGlobalResource<FVisualizeTexture,1> *this)

{
  code *pcVar1;
  bool bVar2;
  TGlobalResource<FVisualizeTexture,1> *pTVar3;
  FRHICommandListBase *pFVar4;
  
  FRenderResource::FRenderResource((FRenderResource *)this);
  *(undefined ***)this = &___7FVisualizeTexture__6B_;
  *(undefined8 *)&this->field_0x20 = 0x3f800000;
  *(undefined4 *)&this->field_0x28 = 0xffffffff;
  *(undefined8 *)&this->field_0x2c = 0;
  *(undefined8 *)&this->field_0x34 = 3;
  *(undefined8 *)&this->field_0x3c = 0;
  this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined4 *)&this->field_0x78 = 0;
  *(undefined8 *)&this->field_0x80 = 0;
  *(undefined8 *)&this->field_0x88 = 0;
  *(undefined8 *)&this->field_0x90 = 0;
  *(undefined8 *)&this->field_0x98 = 0;
  this->field_0xa4 = 0;
  *(undefined8 *)&this->field_0xa8 = 0;
  *(undefined8 *)&this->field_0xc0 = 1;
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined4 *)&this->field_0x44 = 0;
  *(undefined2 *)&this->field_0x60 = 0;
  this->field_0x62 = 0;
  *(wchar_t **)&this->field_0xb8 = L"UnknownTexture";
  *(undefined8 *)&this->field_0xc8 = 0;
  *(undefined4 *)&this->field_0xd0 = 0;
  *(undefined8 *)&this->field_0xd8 = 0;
  *(undefined2 *)&this->field_0xe0 = 0;
  *(TIntPoint<int>_u_0 *)&this->field_0xe4 =
       (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
  *(undefined4 *)&this->field_0xec = 0x10000;
  *(undefined2 *)&this->field_0xf0 = 0x100;
  *(undefined8 *)&this->field_0x100 = 0;
  this->field_0xf2 = 0xff;
  *(undefined4 *)&this->field_0x108 = 0;
  *(undefined4 *)&this->field_0x10c = 1;
  this->field_0x110 = 0;
  *(wchar_t **)&this->field_0xb8 = L"VisualizeTexture";
  *(undefined8 *)&this->field_0x118 = 0;
  *(undefined8 *)&this->field_0x128 = 0;
  *(undefined8 *)&this->field_0x130 = 0;
  *(undefined8 *)&this->field_0x140 = 0;
  *(undefined8 *)&this->field_0x148 = 0;
  *(undefined8 *)&this->field_0x160 = 0;
  *(undefined4 *)&this->field_0x138 = 3;
  *(undefined4 *)&this->field_0x168 = 0;
  *(undefined4 *)&this->field_0x16c = 0x80;
  *(undefined4 *)&this->field_0x170 = 0xffffffff;
  *(undefined4 *)&this->field_0x174 = 0;
  *(undefined8 *)&this->field_0x180 = 0;
  *(undefined4 *)&this->field_0x188 = 0;
  *(undefined8 *)&this->field_0x190 = 0;
  *(undefined8 *)&this->field_0x198 = 0;
  *(undefined8 *)&this->field_0x1b0 = 0;
  *(undefined4 *)&this->field_0x1b8 = 0;
  *(undefined4 *)&this->field_0x1bc = 0x80;
  *(undefined4 *)&this->field_0x1c0 = 0xffffffff;
  *(undefined4 *)&this->field_0x1c4 = 0;
  *(undefined8 *)&this->field_0x1d0 = 0;
  *(undefined4 *)&this->field_0x1d8 = 0;
  *(undefined ***)this = &___7__TGlobalResource_VFVisualizeTexture___00__6B_;
  if (*(int *)&this->field_0x18 != -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderResource.h"
                       ,0xb9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TGlobalResource<FVisualizeTexture,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  this->field_0x1d = 1;
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    pcVar1 = *(code **)(*(longlong *)this + 0x18);
    pFVar4 = FRenderResource::GetImmediateCommandList();
    (*pcVar1)(this,pFVar4);
    return this;
  }
  BeginInitResource((FRenderResource *)this,(FRenderCommandPipe *)0x0);
  return this;
}

// ~TGlobalResource<FPrimitiveIdDummyBuffer,1> @ 145ec45b0

void __thiscall
TGlobalResource<FPrimitiveIdDummyBuffer,1>::~TGlobalResource<FPrimitiveIdDummyBuffer,1>
          (TGlobalResource<FPrimitiveIdDummyBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFPrimitiveIdDummyBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// ~TGlobalResource<FVisualizeTexture,1> @ 145ec45f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TGlobalResource<FVisualizeTexture,1>::~TGlobalResource<FVisualizeTexture,1>
          (TGlobalResource<FVisualizeTexture,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFVisualizeTexture___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVisualizeTexture::~FVisualizeTexture((FVisualizeTexture *)this);
  return;
}

