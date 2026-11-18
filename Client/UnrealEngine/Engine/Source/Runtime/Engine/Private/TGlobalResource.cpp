// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 54

// ~TGlobalResource<FSimpleElementVertexDeclaration,1> @ 147689430

void __thiscall
TGlobalResource<FSimpleElementVertexDeclaration,1>::
~TGlobalResource<FSimpleElementVertexDeclaration,1>
          (TGlobalResource<FSimpleElementVertexDeclaration,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFSimpleElementVertexDeclaration___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7FSimpleElementVertexDeclaration__6B_;
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FMaterialSpriteVertexBuffer,1> @ 1478ab390

void __thiscall
TGlobalResource<FMaterialSpriteVertexBuffer,1>::~TGlobalResource<FMaterialSpriteVertexBuffer,1>
          (TGlobalResource<FMaterialSpriteVertexBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFMaterialSpriteVertexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// TGlobalResource<FLandscapeTextureAtlas,1><enum_FLandscapeTextureAtlas::ESubAllocType> @ 147aaa290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TGlobalResource<FLandscapeTextureAtlas,1> * __thiscall
TGlobalResource<FLandscapeTextureAtlas,1>::
TGlobalResource<FLandscapeTextureAtlas,1><enum_FLandscapeTextureAtlas::ESubAllocType>
          (TGlobalResource<FLandscapeTextureAtlas,1> *this,ESubAllocType param_1)

{
  code *pcVar1;
  bool bVar2;
  TGlobalResource<FLandscapeTextureAtlas,1> *pTVar3;
  FRHICommandListBase *pFVar4;
  
  FRenderResource::FRenderResource((FRenderResource *)this);
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined4 *)&this->field_0x60 = 0;
  *(undefined4 *)&this->field_0x64 = 0x80;
  *(undefined8 *)&this->field_0x88 = 0;
  *(undefined4 *)&this->field_0x90 = 0;
  *(undefined4 *)&this->field_0x94 = 8;
  *(undefined8 *)&this->field_0x98 = 0;
  *(undefined8 *)&this->field_0xa0 = 0;
  *(undefined8 *)&this->field_0xb8 = 0;
  *(undefined4 *)&this->field_0xc0 = 0;
  *(undefined4 *)&this->field_0xc4 = 0x80;
  *(undefined4 *)&this->field_0xcc = 0;
  *(undefined4 *)&this->field_0xc8 = 0xffffffff;
  *(undefined8 *)&this->field_0xd0 = 0;
  *(undefined8 *)&this->field_0xd8 = 0;
  *(undefined8 *)&this->field_0xf0 = 0;
  *(undefined4 *)&this->field_0xf8 = 0;
  *(undefined4 *)&this->field_0xfc = 0x80;
  *(undefined4 *)&this->field_0x104 = 0;
  *(undefined4 *)&this->field_0x100 = 0xffffffff;
  *(undefined8 *)&this->field_0x110 = 0;
  *(undefined4 *)&this->field_0x118 = 0;
  *(undefined8 *)&this->field_0x120 = 0;
  *(undefined8 *)&this->field_0x128 = 0;
  *(undefined8 *)&this->field_0x140 = 0;
  *(undefined4 *)&this->field_0x148 = 0;
  *(undefined4 *)&this->field_0x14c = 0x80;
  *(undefined4 *)&this->field_0x154 = 0;
  *(undefined4 *)&this->field_0x150 = 0xffffffff;
  *(undefined8 *)&this->field_0x160 = 0;
  *(undefined4 *)&this->field_0x168 = 0;
  *(undefined8 *)&this->field_0x170 = 0;
  *(undefined8 *)&this->field_0x178 = 0;
  *(undefined8 *)&this->field_0x190 = 0;
  *(undefined4 *)&this->field_0x198 = 0;
  *(undefined4 *)&this->field_0x19c = 0x80;
  *(undefined4 *)&this->field_0x1a4 = 0;
  *(undefined4 *)&this->field_0x1a0 = 0xffffffff;
  *(undefined8 *)&this->field_0x1b0 = 0;
  *(undefined4 *)&this->field_0x1b8 = 0;
  *(undefined8 *)&this->field_0x1c0 = 0;
  *(undefined8 *)&this->field_0x1c8 = 0;
  *(undefined8 *)&this->field_0x1d0 = 0;
  *(undefined8 *)&this->field_0x1d8 = 0;
  *(undefined ***)this = &___7__TGlobalResource_VFLandscapeTextureAtlas___00__6B_;
  *(ESubAllocType *)&this->field_0x1e0 = param_1;
  if (*(int *)&this->field_0x18 != -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderResource.h"
                       ,0xb9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TGlobalResource<FLandscapeTextureAtlas,1> *)(*pcVar1)();
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

// ~TGlobalResource<FLandscapeTextureAtlas,1> @ 147abe230

void __thiscall
TGlobalResource<FLandscapeTextureAtlas,1>::~TGlobalResource<FLandscapeTextureAtlas,1>
          (TGlobalResource<FLandscapeTextureAtlas,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFLandscapeTextureAtlas___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FLandscapeTextureAtlas::~FLandscapeTextureAtlas((FLandscapeTextureAtlas *)this);
  return;
}

// ~TGlobalResource<FGlobalDynamicMeshIndexPool,1> @ 147b3bca0

void __thiscall
TGlobalResource<FGlobalDynamicMeshIndexPool,1>::~TGlobalResource<FGlobalDynamicMeshIndexPool,1>
          (TGlobalResource<FGlobalDynamicMeshIndexPool,1> *this)

{
  *(undefined ***)this =
       &
       _vftable__for__TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>__
  ;
  *(undefined ***)&this->field_0x148 = &_vftable__for__FTickableObjectRenderThread__;
  *(undefined ***)&this->field_0x158 = &_vftable__for__FRenderResource__;
  FRenderResource::ReleaseResource((FRenderResource *)&this->field_0x158);
  *(undefined ***)this =
       &FGlobalDynamicMeshIndexPool::
        _vftable__for__TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>__
  ;
  *(undefined ***)&this->field_0x148 =
       &FGlobalDynamicMeshIndexPool::_vftable__for__FTickableObjectRenderThread__;
  *(undefined ***)&this->field_0x158 =
       &FGlobalDynamicMeshIndexPool::_vftable__for__FRenderResource__;
  TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>::
  ~TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>
            ((TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshIndexPolicy,unsigned_int>
              *)this);
  return;
}

// ~TGlobalResource<FGlobalDynamicMeshVertexPool,1> @ 147b3bd20

void __thiscall
TGlobalResource<FGlobalDynamicMeshVertexPool,1>::~TGlobalResource<FGlobalDynamicMeshVertexPool,1>
          (TGlobalResource<FGlobalDynamicMeshVertexPool,1> *this)

{
  *(undefined ***)this =
       &
       _vftable__for__TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>__
  ;
  *(undefined ***)&this->field_0x148 = &_vftable__for__FTickableObjectRenderThread__;
  *(undefined ***)&this->field_0x158 = &_vftable__for__FRenderResource__;
  FRenderResource::ReleaseResource((FRenderResource *)&this->field_0x158);
  *(undefined ***)this =
       &FGlobalDynamicMeshVertexPool::
        _vftable__for__TResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>__
  ;
  *(undefined ***)&this->field_0x148 =
       &FGlobalDynamicMeshVertexPool::_vftable__for__FTickableObjectRenderThread__;
  *(undefined ***)&this->field_0x158 =
       &FGlobalDynamicMeshVertexPool::_vftable__for__FRenderResource__;
  TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>::
  ~TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>
            ((TRenderResourcePool<TRefCountPtr<FRHIBuffer>,FGlobalDynamicMeshVertexPolicy,unsigned_int>
              *)this);
  return;
}

// ~TGlobalResource<FDefaultGeometryCacheVertexBuffer,1> @ 147c30930

void __thiscall
TGlobalResource<FDefaultGeometryCacheVertexBuffer,1>::
~TGlobalResource<FDefaultGeometryCacheVertexBuffer,1>
          (TGlobalResource<FDefaultGeometryCacheVertexBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFDefaultGeometryCacheVertexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// ~TGlobalResource<FDummyTangentBuffer,1> @ 147c30970

void __thiscall
TGlobalResource<FDummyTangentBuffer,1>::~TGlobalResource<FDummyTangentBuffer,1>
          (TGlobalResource<FDummyTangentBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFDummyTangentBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// TGlobalResource<FGPUSortDummyUAV,1> @ 147cc2960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TGlobalResource<FGPUSortDummyUAV,1> * __thiscall
TGlobalResource<FGPUSortDummyUAV,1>::TGlobalResource<FGPUSortDummyUAV,1>
          (TGlobalResource<FGPUSortDummyUAV,1> *this)

{
  code *pcVar1;
  bool bVar2;
  TGlobalResource<FGPUSortDummyUAV,1> *pTVar3;
  FRHICommandListBase *pFVar4;
  
  FRenderResource::FRenderResource((FRenderResource *)this);
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  *(undefined ***)this = &___7__TGlobalResource_VFGPUSortDummyUAV___00__6B_;
  if (*(int *)&this->field_0x18 != -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderResource.h"
                       ,0xb9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TGlobalResource<FGPUSortDummyUAV,1> *)(*pcVar1)();
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

// ~TGlobalResource<FBoneBufferPool,1> @ 147cc78d0

void __thiscall
TGlobalResource<FBoneBufferPool,1>::~TGlobalResource<FBoneBufferPool,1>
          (TGlobalResource<FBoneBufferPool,1> *this)

{
  *(undefined ***)this =
       &_vftable__for__TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>__;
  *(undefined ***)&this->field_0x178 = &_vftable__for__FTickableObjectRenderThread__;
  *(undefined ***)&this->field_0x188 = &_vftable__for__FRenderResource__;
  FRenderResource::ReleaseResource((FRenderResource *)&this->field_0x188);
  *(undefined ***)this =
       &FBoneBufferPool::
        _vftable__for__TResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>__;
  *(undefined ***)&this->field_0x178 =
       &FBoneBufferPool::_vftable__for__FTickableObjectRenderThread__;
  *(undefined ***)&this->field_0x188 = &FBoneBufferPool::_vftable__for__FRenderResource__;
  TRenderResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>::
  ~TRenderResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int>
            ((TRenderResourcePool<FVertexBufferAndSRV,FBoneBufferPoolPolicy,unsigned_int> *)this);
  return;
}

// ~TGlobalResource<FClothBufferPool,1> @ 147cc7950

void __thiscall
TGlobalResource<FClothBufferPool,1>::~TGlobalResource<FClothBufferPool,1>
          (TGlobalResource<FClothBufferPool,1> *this)

{
  *(undefined ***)this =
       &_vftable__for__TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>__;
  *(undefined ***)&this->field_0x178 = &_vftable__for__FTickableObjectRenderThread__;
  *(undefined ***)&this->field_0x188 = &_vftable__for__FRenderResource__;
  FRenderResource::ReleaseResource((FRenderResource *)&this->field_0x188);
  *(undefined ***)this =
       &FClothBufferPool::
        _vftable__for__TResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>__;
  *(undefined ***)&this->field_0x178 =
       &FClothBufferPool::_vftable__for__FTickableObjectRenderThread__;
  *(undefined ***)&this->field_0x188 = &FClothBufferPool::_vftable__for__FRenderResource__;
  TRenderResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>::
  ~TRenderResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int>
            ((TRenderResourcePool<FVertexBufferAndSRV,FClothBufferPoolPolicy,unsigned_int> *)this);
  return;
}

// ~TGlobalResource<FDummyFloatBuffer,1> @ 147cc79d0

void __thiscall
TGlobalResource<FDummyFloatBuffer,1>::~TGlobalResource<FDummyFloatBuffer,1>
          (TGlobalResource<FDummyFloatBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFDummyFloatBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexBufferWithSRV::~FVertexBufferWithSRV((FVertexBufferWithSRV *)this);
  return;
}

// ~TGlobalResource<FGPUSortDummyUAV,1> @ 147cc7a00

void __thiscall
TGlobalResource<FGPUSortDummyUAV,1>::~TGlobalResource<FGPUSortDummyUAV,1>
          (TGlobalResource<FGPUSortDummyUAV,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFGPUSortDummyUAV___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FRWBuffer::~FRWBuffer((FRWBuffer *)&this->field_0x20);
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FInstancedStaticMeshVFUniformsCache,1> @ 147cc7a40

void __thiscall
TGlobalResource<FInstancedStaticMeshVFUniformsCache,1>::
~TGlobalResource<FInstancedStaticMeshVFUniformsCache,1>
          (TGlobalResource<FInstancedStaticMeshVFUniformsCache,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFInstancedStaticMeshVFUniformsCache___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined4 *)&this->field_0x68 = 0;
  if (*(void **)&this->field_0x60 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x60);
  }
  TSparseArray<TSparseSetElement<TTuple<FInstancedStaticMeshVFLooseUniformShaderParameters,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FInstancedStaticMeshVFLooseUniformShaderParameters,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FInstancedStaticMeshVFLooseUniformShaderParameters,TUniformBufferRef<FInstancedStaticMeshVFLooseUniformShaderParameters>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x20);
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FNullMorphVertexBuffer,0> @ 147cc7aa0

void __thiscall
TGlobalResource<FNullMorphVertexBuffer,0>::~TGlobalResource<FNullMorphVertexBuffer,0>
          (TGlobalResource<FNullMorphVertexBuffer,0> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFNullMorphVertexBuffer___0A___6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// ~TGlobalResource<FRadixSortParametersBuffer,1> @ 147cc7ad0

void __thiscall
TGlobalResource<FRadixSortParametersBuffer,1>::~TGlobalResource<FRadixSortParametersBuffer,1>
          (TGlobalResource<FRadixSortParametersBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFRadixSortParametersBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FSortOffsetBuffers,1> @ 147cc7b20

void __thiscall
TGlobalResource<FSortOffsetBuffers,1>::~TGlobalResource<FSortOffsetBuffers,1>
          (TGlobalResource<FSortOffsetBuffers,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFSortOffsetBuffers___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FSortOffsetBuffers::~FSortOffsetBuffers((FSortOffsetBuffers *)this);
  return;
}

// ~TGlobalResource<FInstancedStaticMeshComponentHelper::FDummyStaticMeshInstanceBuffer,1> @ 147d7b000

void __thiscall
TGlobalResource<FInstancedStaticMeshComponentHelper::FDummyStaticMeshInstanceBuffer,1>::
~TGlobalResource<FInstancedStaticMeshComponentHelper::FDummyStaticMeshInstanceBuffer,1>
          (TGlobalResource<FInstancedStaticMeshComponentHelper::FDummyStaticMeshInstanceBuffer,1>
           *this)

{
  *(undefined ***)this =
       &
       ___7__TGlobalResource_VFDummyStaticMeshInstanceBuffer_FInstancedStaticMeshComponentHelper___00__6B_
  ;
  FStaticMeshInstanceBuffer::ReleaseResource((FStaticMeshInstanceBuffer *)this);
  FStaticMeshInstanceBuffer::~FStaticMeshInstanceBuffer((FStaticMeshInstanceBuffer *)this);
  return;
}

// ~TGlobalResource<FGPUSkinPassThroughFactoryNullUniformBuffer,1> @ 147ea7d80

void __thiscall
TGlobalResource<FGPUSkinPassThroughFactoryNullUniformBuffer,1>::
~TGlobalResource<FGPUSkinPassThroughFactoryNullUniformBuffer,1>
          (TGlobalResource<FGPUSkinPassThroughFactoryNullUniformBuffer,1> *this)

{
  *(undefined ***)this =
       &___7__TGlobalResource_VFGPUSkinPassThroughFactoryNullUniformBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7__TUniformBuffer_VFGPUSkinPassThroughFactoryLooseParameters____6B_;
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FSpeedTreeWindNullUniformBuffer,1> @ 147ea7de0

void __thiscall
TGlobalResource<FSpeedTreeWindNullUniformBuffer,1>::
~TGlobalResource<FSpeedTreeWindNullUniformBuffer,1>
          (TGlobalResource<FSpeedTreeWindNullUniformBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFSpeedTreeWindNullUniformBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7__TUniformBuffer_VFSpeedTreeUniformParameters____6B_;
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FDummyPrevTransformBuffer,1> @ 147fa7990

void __thiscall
TGlobalResource<FDummyPrevTransformBuffer,1>::~TGlobalResource<FDummyPrevTransformBuffer,1>
          (TGlobalResource<FDummyPrevTransformBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFDummyPrevTransformBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7FDummyPrevTransformBuffer__6B_;
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FGPUSpriteVertexDeclaration,1> @ 1480f5dc0

void __thiscall
TGlobalResource<FGPUSpriteVertexDeclaration,1>::~TGlobalResource<FGPUSpriteVertexDeclaration,1>
          (TGlobalResource<FGPUSpriteVertexDeclaration,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFGPUSpriteVertexDeclaration___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FInstancedParticleTileVertexDeclaration,1> @ 1480f5e00

void __thiscall
TGlobalResource<FInstancedParticleTileVertexDeclaration,1>::
~TGlobalResource<FInstancedParticleTileVertexDeclaration,1>
          (TGlobalResource<FInstancedParticleTileVertexDeclaration,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFInstancedParticleTileVertexDeclaration___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FParticleBeamTrailVertexDeclaration,1> @ 1480f5e40

void __thiscall
TGlobalResource<FParticleBeamTrailVertexDeclaration,1>::
~TGlobalResource<FParticleBeamTrailVertexDeclaration,1>
          (TGlobalResource<FParticleBeamTrailVertexDeclaration,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFParticleBeamTrailVertexDeclaration___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7FParticleBeamTrailVertexDeclaration__6B_;
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FParticleCurveInjectionVertexDeclaration,1> @ 1480f5e90

void __thiscall
TGlobalResource<FParticleCurveInjectionVertexDeclaration,1>::
~TGlobalResource<FParticleCurveInjectionVertexDeclaration,1>
          (TGlobalResource<FParticleCurveInjectionVertexDeclaration,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFParticleCurveInjectionVertexDeclaration___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FParticleCurveTexture,1> @ 1480f5ed0

void __thiscall
TGlobalResource<FParticleCurveTexture,1>::~TGlobalResource<FParticleCurveTexture,1>
          (TGlobalResource<FParticleCurveTexture,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFParticleCurveTexture___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(void **)&this->field_0x50 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x50);
  }
  FTexelAllocator::~FTexelAllocator((FTexelAllocator *)&this->field_0x28);
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FParticleInjectionVertexDeclaration,1> @ 1480f5f20

void __thiscall
TGlobalResource<FParticleInjectionVertexDeclaration,1>::
~TGlobalResource<FParticleInjectionVertexDeclaration,1>
          (TGlobalResource<FParticleInjectionVertexDeclaration,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFParticleInjectionVertexDeclaration___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FParticleSimVisualizeVertexDeclaration,1> @ 1480f5f60

void __thiscall
TGlobalResource<FParticleSimVisualizeVertexDeclaration,1>::
~TGlobalResource<FParticleSimVisualizeVertexDeclaration,1>
          (TGlobalResource<FParticleSimVisualizeVertexDeclaration,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFParticleSimVisualizeVertexDeclaration___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FParticleTileVertexDeclaration,1> @ 1480f5fa0

void __thiscall
TGlobalResource<FParticleTileVertexDeclaration,1>::
~TGlobalResource<FParticleTileVertexDeclaration,1>
          (TGlobalResource<FParticleTileVertexDeclaration,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFParticleTileVertexDeclaration___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FParticleEightTexCoordVertexBuffer,1> @ 14815f8a0

void __thiscall
TGlobalResource<FParticleEightTexCoordVertexBuffer,1>::
~TGlobalResource<FParticleEightTexCoordVertexBuffer,1>
          (TGlobalResource<FParticleEightTexCoordVertexBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFParticleEightTexCoordVertexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// ~TGlobalResource<FParticleIndexBuffer,1> @ 14815f8d0

void __thiscall
TGlobalResource<FParticleIndexBuffer,1>::~TGlobalResource<FParticleIndexBuffer,1>
          (TGlobalResource<FParticleIndexBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFParticleIndexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)this);
  return;
}

// ~TGlobalResource<FParticleScratchVertexBuffer,1> @ 14815f900

void __thiscall
TGlobalResource<FParticleScratchVertexBuffer,1>::~TGlobalResource<FParticleScratchVertexBuffer,1>
          (TGlobalResource<FParticleScratchVertexBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFParticleScratchVertexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// ~TGlobalResource<FParticleTexCoordVertexBuffer,1> @ 14815f940

void __thiscall
TGlobalResource<FParticleTexCoordVertexBuffer,1>::~TGlobalResource<FParticleTexCoordVertexBuffer,1>
          (TGlobalResource<FParticleTexCoordVertexBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFParticleTexCoordVertexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// ~TGlobalResource<FSixTriangleParticleIndexBuffer,1> @ 14815f970

void __thiscall
TGlobalResource<FSixTriangleParticleIndexBuffer,1>::
~TGlobalResource<FSixTriangleParticleIndexBuffer,1>
          (TGlobalResource<FSixTriangleParticleIndexBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFSixTriangleParticleIndexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)this);
  return;
}

// ~TGlobalResource<FNullDynamicParameterVertexBuffer,1> @ 1481c89e0

void __thiscall
TGlobalResource<FNullDynamicParameterVertexBuffer,1>::
~TGlobalResource<FNullDynamicParameterVertexBuffer,1>
          (TGlobalResource<FNullDynamicParameterVertexBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFNullDynamicParameterVertexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// ~TGlobalResource<FNullSubUVCutoutVertexBuffer,1> @ 1481c8a10

void __thiscall
TGlobalResource<FNullSubUVCutoutVertexBuffer,1>::~TGlobalResource<FNullSubUVCutoutVertexBuffer,1>
          (TGlobalResource<FNullSubUVCutoutVertexBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFNullSubUVCutoutVertexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// ~TGlobalResource<FParticleSpriteVertexDeclaration,1> @ 1481c8a50

void __thiscall
TGlobalResource<FParticleSpriteVertexDeclaration,1>::
~TGlobalResource<FParticleSpriteVertexDeclaration,1>
          (TGlobalResource<FParticleSpriteVertexDeclaration,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFParticleSpriteVertexDeclaration___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7FParticleSpriteVertexDeclaration__6B_;
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FVolumetricLightmapBrickAtlas,1> @ 14834cbd0

void __thiscall
TGlobalResource<FVolumetricLightmapBrickAtlas,1>::~TGlobalResource<FVolumetricLightmapBrickAtlas,1>
          (TGlobalResource<FVolumetricLightmapBrickAtlas,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFVolumetricLightmapBrickAtlas___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(void **)&this->field_0x228 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x228);
  }
  FVolumetricLightmapBasicBrickDataLayers::~FVolumetricLightmapBasicBrickDataLayers
            ((FVolumetricLightmapBasicBrickDataLayers *)&this->field_0x20);
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FSinglePrimitiveStructured,1> @ 1483e8040

void __thiscall
TGlobalResource<FSinglePrimitiveStructured,1>::~TGlobalResource<FSinglePrimitiveStructured,1>
          (TGlobalResource<FSinglePrimitiveStructured,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFSinglePrimitiveStructured___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(FRHIResource **)&this->field_0x40 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x40);
  }
  if (*(FRHIResource **)&this->field_0x38 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x38);
  }
  if (*(FRHIResource **)&this->field_0x30 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x30);
  }
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<Nanite::FVertexFactoryResource,1> @ 1483e80b0

void __thiscall
TGlobalResource<Nanite::FVertexFactoryResource,1>::
~TGlobalResource<Nanite::FVertexFactoryResource,1>
          (TGlobalResource<Nanite::FVertexFactoryResource,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFVertexFactoryResource_Nanite___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// TGlobalResource<FSubsurfaceProfileTexture,1> @ 148441450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TGlobalResource<FSubsurfaceProfileTexture,1> * __thiscall
TGlobalResource<FSubsurfaceProfileTexture,1>::TGlobalResource<FSubsurfaceProfileTexture,1>
          (TGlobalResource<FSubsurfaceProfileTexture,1> *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TGlobalResource<FSubsurfaceProfileTexture,1> *pTVar4;
  FRHICommandListBase *pFVar5;
  undefined8 *puVar6;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  FLinearColor_u_0 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FRenderResource::FRenderResource((FRenderResource *)this);
  *(undefined ***)this = &___7FSubsurfaceProfileTexture__6B_;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Rendering\\SubsurfaceProfile.cpp"
                       ,0x81,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TGlobalResource<FSubsurfaceProfileTexture,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  FSubsurfaceProfileStruct::FSubsurfaceProfileStruct((FSubsurfaceProfileStruct *)&local_a8._s_0);
  UpgradeSubsurfaceProfileParameters((FSubsurfaceProfileStruct *)&local_a8._s_0);
  local_158 = local_a8._0_8_;
  uStack_150 = local_a8._8_8_;
  local_148 = local_98;
  uStack_140 = uStack_90;
  local_138 = local_88;
  uStack_130 = uStack_80;
  local_128 = local_78;
  uStack_120 = uStack_70;
  local_118 = local_68;
  uStack_110 = uStack_60;
  local_108 = local_58;
  uStack_100 = uStack_50;
  local_f8 = local_48;
  uStack_f0 = uStack_40;
  local_e8 = local_38;
  uStack_e0 = uStack_30;
  local_d8 = local_28;
  uStack_d0 = uStack_20;
  local_c8 = local_18;
  uStack_c0 = uStack_10;
  local_b8 = 0;
  if ((*(undefined8 **)&this->field_0x20 <= &local_158) &&
     (&local_158 < *(undefined8 **)&this->field_0x20 + (longlong)*(int *)&this->field_0x2c * 0x15))
  {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TGlobalResource<FSubsurfaceProfileTexture,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  iVar3 = *(int *)&this->field_0x28;
  if (iVar3 == *(int *)&this->field_0x2c) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8a8,(ForAnyElementType *)&this->field_0x20,(int *)&this->field_0x2c);
  }
  *(int *)&this->field_0x28 = iVar3 + 1;
  puVar6 = (undefined8 *)((longlong)iVar3 * 0xa8 + *(longlong *)&this->field_0x20);
  *puVar6 = local_158;
  puVar6[1] = uStack_150;
  puVar6[2] = local_148;
  puVar6[3] = uStack_140;
  puVar6[4] = local_138;
  puVar6[5] = uStack_130;
  puVar6[6] = local_128;
  puVar6[7] = uStack_120;
  puVar6[8] = local_118;
  puVar6[9] = uStack_110;
  puVar6[10] = local_108;
  puVar6[0xb] = uStack_100;
  puVar6[0xc] = local_f8;
  puVar6[0xd] = uStack_f0;
  puVar6[0xe] = local_e8;
  puVar6[0xf] = uStack_e0;
  puVar6[0x10] = local_d8;
  puVar6[0x11] = uStack_d0;
  puVar6[0x12] = local_c8;
  puVar6[0x13] = uStack_c0;
  puVar6[0x14] = local_b8;
  *(undefined ***)this = &___7__TGlobalResource_VFSubsurfaceProfileTexture___00__6B_;
  if (*(int *)&this->field_0x18 != -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderResource.h"
                       ,0xb9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TGlobalResource<FSubsurfaceProfileTexture,1> *)(*pcVar1)();
      return pTVar4;
    }
  }
  this->field_0x1d = 1;
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    pcVar1 = *(code **)(*(longlong *)this + 0x18);
    pFVar5 = FRenderResource::GetImmediateCommandList();
    (*pcVar1)(this,pFVar5);
  }
  else {
    BeginInitResource((FRenderResource *)this,(FRenderCommandPipe *)0x0);
  }
  return this;
}

// ~TGlobalResource<FNeuralProfileModelTextureManager,1> @ 1484449d0

void __thiscall
TGlobalResource<FNeuralProfileModelTextureManager,1>::
~TGlobalResource<FNeuralProfileModelTextureManager,1>
          (TGlobalResource<FNeuralProfileModelTextureManager,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFNeuralProfileModelTextureManager___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7FNeuralProfileModelTextureManager__6B_;
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FSpecularProfileTextureManager,1> @ 148444a20

void __thiscall
TGlobalResource<FSpecularProfileTextureManager,1>::
~TGlobalResource<FSpecularProfileTextureManager,1>
          (TGlobalResource<FSpecularProfileTextureManager,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFSpecularProfileTextureManager___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7FSpecularProfileTextureManager__6B_;
  DestructItems<FSpecularProfileTextureManager::FProfileEntry,int>
            (*(FProfileEntry **)&this->field_0x20,*(int *)&this->field_0x28);
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<Nanite::FStreamingManager,1> @ 148444a70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TGlobalResource<Nanite::FStreamingManager,1>::~TGlobalResource<Nanite::FStreamingManager,1>
          (TGlobalResource<Nanite::FStreamingManager,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFStreamingManager_Nanite___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  Nanite::FStreamingManager::~FStreamingManager((FStreamingManager *)this);
  return;
}

// ~TGlobalResource<FSubsurfaceProfileTexture,1> @ 148444aa0

void __thiscall
TGlobalResource<FSubsurfaceProfileTexture,1>::~TGlobalResource<FSubsurfaceProfileTexture,1>
          (TGlobalResource<FSubsurfaceProfileTexture,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFSubsurfaceProfileTexture___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7FSubsurfaceProfileTexture__6B_;
  if (*(void **)&this->field_0x20 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FDefaultLightmapResourceClusterUniformBuffer,1> @ 1484bd2c0

void __thiscall
TGlobalResource<FDefaultLightmapResourceClusterUniformBuffer,1>::
~TGlobalResource<FDefaultLightmapResourceClusterUniformBuffer,1>
          (TGlobalResource<FDefaultLightmapResourceClusterUniformBuffer,1> *this)

{
  *(undefined ***)this =
       &___7__TGlobalResource_VFDefaultLightmapResourceClusterUniformBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7__TUniformBuffer_VFLightmapResourceClusterShaderParameters____6B_;
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FDefaultMobileReflectionCaptureUniformBuffer,1> @ 1484bd320

void __thiscall
TGlobalResource<FDefaultMobileReflectionCaptureUniformBuffer,1>::
~TGlobalResource<FDefaultMobileReflectionCaptureUniformBuffer,1>
          (TGlobalResource<FDefaultMobileReflectionCaptureUniformBuffer,1> *this)

{
  *(undefined ***)this =
       &___7__TGlobalResource_VFDefaultMobileReflectionCaptureUniformBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7__TUniformBuffer_VFMobileReflectionCaptureShaderParameters____6B_;
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FDefaultWorkingColorSpaceUniformBuffer,1> @ 1484bd380

void __thiscall
TGlobalResource<FDefaultWorkingColorSpaceUniformBuffer,1>::
~TGlobalResource<FDefaultWorkingColorSpaceUniformBuffer,1>
          (TGlobalResource<FDefaultWorkingColorSpaceUniformBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFDefaultWorkingColorSpaceUniformBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7__TUniformBuffer_VFWorkingColorSpaceShaderParameters____6B_;
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FIdentityPrimitiveUniformBuffer,1> @ 148510270

void __thiscall
TGlobalResource<FIdentityPrimitiveUniformBuffer,1>::
~TGlobalResource<FIdentityPrimitiveUniformBuffer,1>
          (TGlobalResource<FIdentityPrimitiveUniformBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFIdentityPrimitiveUniformBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7__TUniformBuffer_VFPrimitiveUniformShaderParameters____6B_;
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FScreenVertexDeclaration,1> @ 1485102d0

void __thiscall
TGlobalResource<FScreenVertexDeclaration,1>::~TGlobalResource<FScreenVertexDeclaration,1>
          (TGlobalResource<FScreenVertexDeclaration,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFScreenVertexDeclaration___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7FScreenVertexDeclaration__6B_;
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<UE::SVT::FStreamingManager,1> @ 148713a70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TGlobalResource<UE::SVT::FStreamingManager,1>::~TGlobalResource<UE::SVT::FStreamingManager,1>
          (TGlobalResource<UE::SVT::FStreamingManager,1> *this)

{
  *(undefined ***)this = &_vftable__for__FRenderResource__;
  *(undefined ***)&this->field_0x20 = &_vftable__for__UE__SVT__IStreamingManager__;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  UE::SVT::FStreamingManager::~FStreamingManager((FStreamingManager *)this);
  return;
}

// ~TGlobalResource<FDummyVertexBuffer,1> @ 14890c910

void __thiscall
TGlobalResource<FDummyVertexBuffer,1>::~TGlobalResource<FDummyVertexBuffer,1>
          (TGlobalResource<FDummyVertexBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFDummyVertexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// ~TGlobalResource<FVectorFieldVisualizationVertexDeclaration,1> @ 14890c940

void __thiscall
TGlobalResource<FVectorFieldVisualizationVertexDeclaration,1>::
~TGlobalResource<FVectorFieldVisualizationVertexDeclaration,1>
          (TGlobalResource<FVectorFieldVisualizationVertexDeclaration,1> *this)

{
  *(undefined ***)this =
       &___7__TGlobalResource_VFVectorFieldVisualizationVertexDeclaration___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FVolumeRasterizeVertexBuffer,1> @ 1489b8770

void __thiscall
TGlobalResource<FVolumeRasterizeVertexBuffer,1>::~TGlobalResource<FVolumeRasterizeVertexBuffer,1>
          (TGlobalResource<FVolumeRasterizeVertexBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFVolumeRasterizeVertexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

