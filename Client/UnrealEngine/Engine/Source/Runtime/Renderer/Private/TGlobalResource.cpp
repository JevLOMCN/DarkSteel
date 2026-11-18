// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 62

// ~TGlobalResource<FDFDummyByteAddress,1> @ 14485d8c0

void __thiscall
TGlobalResource<FDFDummyByteAddress,1>::~TGlobalResource<FDFDummyByteAddress,1>
          (TGlobalResource<FDFDummyByteAddress,1> *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this = &___7__TGlobalResource_VFDFDummyByteAddress___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  puVar3 = *(undefined8 **)&this->field_0x20;
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FFogVertexDeclaration,1> @ 14485d920

void __thiscall
TGlobalResource<FFogVertexDeclaration,1>::~TGlobalResource<FFogVertexDeclaration,1>
          (TGlobalResource<FFogVertexDeclaration,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFFogVertexDeclaration___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7FFogVertexDeclaration__6B_;
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FVertexThroughputDeclaration,1> @ 1448edf40

void __thiscall
TGlobalResource<FVertexThroughputDeclaration,1>::~TGlobalResource<FVertexThroughputDeclaration,1>
          (TGlobalResource<FVertexThroughputDeclaration,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_UFVertexThroughputDeclaration___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<IESAtlas::FIESTextureManager,1> @ 144afc310

void __thiscall
TGlobalResource<IESAtlas::FIESTextureManager,1>::~TGlobalResource<IESAtlas::FIESTextureManager,1>
          (TGlobalResource<IESAtlas::FIESTextureManager,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_UFIESTextureManager_IESAtlas___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  IESAtlas::FIESTextureManager::~FIESTextureManager((FIESTextureManager *)this);
  return;
}

// ~TGlobalResource<StencilingGeometry::TStencilSphereIndexBuffer<4,4>,1> @ 144b98c90

void __thiscall
TGlobalResource<StencilingGeometry::TStencilSphereIndexBuffer<4,4>,1>::
~TGlobalResource<StencilingGeometry::TStencilSphereIndexBuffer<4,4>,1>
          (TGlobalResource<StencilingGeometry::TStencilSphereIndexBuffer<4,4>,1> *this)

{
  *(undefined ***)this =
       &___7__TGlobalResource_V__TStencilSphereIndexBuffer__03_03_StencilingGeometry___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)this);
  return;
}

// ~TGlobalResource<StencilingGeometry::TStencilSphereIndexBuffer<18,12>,1> @ 144b98cc0

void __thiscall
TGlobalResource<StencilingGeometry::TStencilSphereIndexBuffer<18,12>,1>::
~TGlobalResource<StencilingGeometry::TStencilSphereIndexBuffer<18,12>,1>
          (TGlobalResource<StencilingGeometry::TStencilSphereIndexBuffer<18,12>,1> *this)

{
  *(undefined ***)this =
       &___7__TGlobalResource_V__TStencilSphereIndexBuffer__0BC__0M__StencilingGeometry___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)this);
  return;
}

// ~TGlobalResource<StencilingGeometry::TStencilSphereVertexBuffer<4,4,UE::Math::TVector4<float>_>,1> @ 144b98cf0

void __thiscall
TGlobalResource<StencilingGeometry::TStencilSphereVertexBuffer<4,4,UE::Math::TVector4<float>_>,1>::
~TGlobalResource<StencilingGeometry::TStencilSphereVertexBuffer<4,4,UE::Math::TVector4<float>_>,1>
          (TGlobalResource<StencilingGeometry::TStencilSphereVertexBuffer<4,4,UE::Math::TVector4<float>_>,1>
           *this)

{
  *(undefined ***)this =
       &
       ___7__TGlobalResource_V__TStencilSphereVertexBuffer__03_03U__TVector4_M_Math_UE___StencilingGeometry___00__6B_
  ;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// ~TGlobalResource<StencilingGeometry::TStencilSphereVertexBuffer<18,12,UE::Math::TVector4<float>_>,1> @ 144b98d20

void __thiscall
TGlobalResource<StencilingGeometry::TStencilSphereVertexBuffer<18,12,UE::Math::TVector4<float>_>,1>
::
~TGlobalResource<StencilingGeometry::TStencilSphereVertexBuffer<18,12,UE::Math::TVector4<float>_>,1>
          (TGlobalResource<StencilingGeometry::TStencilSphereVertexBuffer<18,12,UE::Math::TVector4<float>_>,1>
           *this)

{
  *(undefined ***)this =
       &
       ___7__TGlobalResource_V__TStencilSphereVertexBuffer__0BC__0M_U__TVector4_M_Math_UE___StencilingGeometry___00__6B_
  ;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// ~TGlobalResource<StencilingGeometry::TStencilSphereVertexBuffer<18,12,UE::Math::TVector<float>_>,1> @ 144b98d50

void __thiscall
TGlobalResource<StencilingGeometry::TStencilSphereVertexBuffer<18,12,UE::Math::TVector<float>_>,1>::
~TGlobalResource<StencilingGeometry::TStencilSphereVertexBuffer<18,12,UE::Math::TVector<float>_>,1>
          (TGlobalResource<StencilingGeometry::TStencilSphereVertexBuffer<18,12,UE::Math::TVector<float>_>,1>
           *this)

{
  *(undefined ***)this =
       &
       ___7__TGlobalResource_V__TStencilSphereVertexBuffer__0BC__0M_U__TVector_M_Math_UE___StencilingGeometry___00__6B_
  ;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// ~TGlobalResource<FEmptyIndirectLightingCacheUniformBuffer,1> @ 144b98d80

void __thiscall
TGlobalResource<FEmptyIndirectLightingCacheUniformBuffer,1>::
~TGlobalResource<FEmptyIndirectLightingCacheUniformBuffer,1>
          (TGlobalResource<FEmptyIndirectLightingCacheUniformBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFEmptyIndirectLightingCacheUniformBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7__TUniformBuffer_VFIndirectLightingCacheUniformParameters____6B_;
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FEmptyPrecomputedLightingUniformBuffer,1> @ 144b98de0

void __thiscall
TGlobalResource<FEmptyPrecomputedLightingUniformBuffer,1>::
~TGlobalResource<FEmptyPrecomputedLightingUniformBuffer,1>
          (TGlobalResource<FEmptyPrecomputedLightingUniformBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFEmptyPrecomputedLightingUniformBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7__TUniformBuffer_VFPrecomputedLightingUniformParameters____6B_;
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FInstanceCullingOcclusionQueryBox,1> @ 144b98e40

void __thiscall
TGlobalResource<FInstanceCullingOcclusionQueryBox,1>::
~TGlobalResource<FInstanceCullingOcclusionQueryBox,1>
          (TGlobalResource<FInstanceCullingOcclusionQueryBox,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFInstanceCullingOcclusionQueryBox___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7FInstanceCullingOcclusionQueryBox__6B_;
  if (*(FRHIResource **)&this->field_0x30 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x30);
  }
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FLightGridFeedbackStatus,1> @ 144b98ea0

void __thiscall
TGlobalResource<FLightGridFeedbackStatus,1>::~TGlobalResource<FLightGridFeedbackStatus,1>
          (TGlobalResource<FLightGridFeedbackStatus,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFLightGridFeedbackStatus___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7FLightGridFeedbackStatus__6B_;
  GPUMessage::FSocket::Reset((FSocket *)&this->field_0x20);
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FStencilConeIndexBuffer,1> @ 144b98ee0

void __thiscall
TGlobalResource<FStencilConeIndexBuffer,1>::~TGlobalResource<FStencilConeIndexBuffer,1>
          (TGlobalResource<FStencilConeIndexBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFStencilConeIndexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)this);
  return;
}

// ~TGlobalResource<FStencilConeVertexBuffer,1> @ 144b98f10

void __thiscall
TGlobalResource<FStencilConeVertexBuffer,1>::~TGlobalResource<FStencilConeVertexBuffer,1>
          (TGlobalResource<FStencilConeVertexBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFStencilConeVertexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// ~TGlobalResource<FVisualizeTracesVertexDeclaration,1> @ 144e73e20

void __thiscall
TGlobalResource<FVisualizeTracesVertexDeclaration,1>::
~TGlobalResource<FVisualizeTracesVertexDeclaration,1>
          (TGlobalResource<FVisualizeTracesVertexDeclaration,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFVisualizeTracesVertexDeclaration___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7FVisualizeTracesVertexDeclaration__6B_;
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FDynamicBatchedPrimitiveLayout,1> @ 144eefb00

void __thiscall
TGlobalResource<FDynamicBatchedPrimitiveLayout,1>::
~TGlobalResource<FDynamicBatchedPrimitiveLayout,1>
          (TGlobalResource<FDynamicBatchedPrimitiveLayout,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFDynamicBatchedPrimitiveLayout___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FPrimitiveIdVertexBufferPool,1> @ 144eefb40

void __thiscall
TGlobalResource<FPrimitiveIdVertexBufferPool,1>::~TGlobalResource<FPrimitiveIdVertexBufferPool,1>
          (TGlobalResource<FPrimitiveIdVertexBufferPool,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFPrimitiveIdVertexBufferPool___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FPrimitiveIdVertexBufferPool::~FPrimitiveIdVertexBufferPool((FPrimitiveIdVertexBufferPool *)this);
  return;
}

// ~TGlobalResource<FMobileDirLightShaderParamsRenderResource,1> @ 144f6cd00

void __thiscall
TGlobalResource<FMobileDirLightShaderParamsRenderResource,1>::
~TGlobalResource<FMobileDirLightShaderParamsRenderResource,1>
          (TGlobalResource<FMobileDirLightShaderParamsRenderResource,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFMobileDirLightShaderParamsRenderResource___00__6B_
  ;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<Nanite::FTessellationTableResources,1> @ 144f6cd40

void __thiscall
TGlobalResource<Nanite::FTessellationTableResources,1>::
~TGlobalResource<Nanite::FTessellationTableResources,1>
          (TGlobalResource<Nanite::FTessellationTableResources,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFTessellationTableResources_Nanite___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(FRHIResource **)&this->field_0x40 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x40);
  }
  if (*(FRHIResource **)&this->field_0x38 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x38);
  }
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FSpriteIndexBuffer<64>,1> @ 1450379b0

void __thiscall
TGlobalResource<FSpriteIndexBuffer<64>,1>::~TGlobalResource<FSpriteIndexBuffer<64>,1>
          (TGlobalResource<FSpriteIndexBuffer<64>,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_V__FSpriteIndexBuffer__0EA____00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)this);
  return;
}

// ~TGlobalResource<Nanite::FGlobalResources,1> @ 1450379e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TGlobalResource<Nanite::FGlobalResources,1>::~TGlobalResource<Nanite::FGlobalResources,1>
          (TGlobalResource<Nanite::FGlobalResources,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFGlobalResources_Nanite___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  Nanite::FGlobalResources::~FGlobalResources((FGlobalResources *)this);
  return;
}

// ~TGlobalResource<Nanite::FRayTracingManager,1> @ 145037a10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
TGlobalResource<Nanite::FRayTracingManager,1>::~TGlobalResource<Nanite::FRayTracingManager,1>
          (TGlobalResource<Nanite::FRayTracingManager,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFRayTracingManager_Nanite___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  Nanite::FRayTracingManager::~FRayTracingManager((FRayTracingManager *)this);
  return;
}

// ~TGlobalResource<UE::Color::ACES::FGamutCuspTable,1> @ 145127700

void __thiscall
TGlobalResource<UE::Color::ACES::FGamutCuspTable,1>::
~TGlobalResource<UE::Color::ACES::FGamutCuspTable,1>
          (TGlobalResource<UE::Color::ACES::FGamutCuspTable,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFGamutCuspTable_ACES_Color_UE___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(void **)&this->field_0x60 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x60);
  }
  FTextureWithSRV::~FTextureWithSRV((FTextureWithSRV *)this);
  return;
}

// ~TGlobalResource<UE::Color::ACES::FReachMTable,1> @ 145127740

void __thiscall
TGlobalResource<UE::Color::ACES::FReachMTable,1>::~TGlobalResource<UE::Color::ACES::FReachMTable,1>
          (TGlobalResource<UE::Color::ACES::FReachMTable,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFReachMTable_ACES_Color_UE___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(void **)&this->field_0x60 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x60);
  }
  FTextureWithSRV::~FTextureWithSRV((FTextureWithSRV *)this);
  return;
}

// ~TGlobalResource<UE::Color::ACES::FUpperHullGammaTable,1> @ 145127780

void __thiscall
TGlobalResource<UE::Color::ACES::FUpperHullGammaTable,1>::
~TGlobalResource<UE::Color::ACES::FUpperHullGammaTable,1>
          (TGlobalResource<UE::Color::ACES::FUpperHullGammaTable,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFUpperHullGammaTable_ACES_Color_UE___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(void **)&this->field_0x60 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x60);
  }
  FTextureWithSRV::~FTextureWithSRV((FTextureWithSRV *)this);
  return;
}

// ~TGlobalResource<FDistortionVertexDeclaration,1> @ 1451959b0

void __thiscall
TGlobalResource<FDistortionVertexDeclaration,1>::~TGlobalResource<FDistortionVertexDeclaration,1>
          (TGlobalResource<FDistortionVertexDeclaration,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFDistortionVertexDeclaration___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7FDistortionVertexDeclaration__6B_;
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FLensFlareTransitionBuffer,0> @ 145195a00

void __thiscall
TGlobalResource<FLensFlareTransitionBuffer,0>::~TGlobalResource<FLensFlareTransitionBuffer,0>
          (TGlobalResource<FLensFlareTransitionBuffer,0> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFLensFlareTransitionBuffer___0A___6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// ~TGlobalResource<FSpriteIndexBuffer<8>,1> @ 1452114a0

void __thiscall
TGlobalResource<FSpriteIndexBuffer<8>,1>::~TGlobalResource<FSpriteIndexBuffer<8>,1>
          (TGlobalResource<FSpriteIndexBuffer<8>,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_V__FSpriteIndexBuffer__07___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)this);
  return;
}

// ~TGlobalResource<FTesselatedScreenRectangleIndexBuffer,1> @ 145295f80

void __thiscall
TGlobalResource<FTesselatedScreenRectangleIndexBuffer,1>::
~TGlobalResource<FTesselatedScreenRectangleIndexBuffer,1>
          (TGlobalResource<FTesselatedScreenRectangleIndexBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFTesselatedScreenRectangleIndexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)this);
  return;
}

// ~TGlobalResource<FRayTracingDebugResources,1> @ 1452feee0

void __thiscall
TGlobalResource<FRayTracingDebugResources,1>::~TGlobalResource<FRayTracingDebugResources,1>
          (TGlobalResource<FRayTracingDebugResources,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_UFRayTracingDebugResources___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(void **)&this->field_0x50 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x50);
  }
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FRayTracingDebugLineAABBIndexBuffer,1> @ 1452fef30

void __thiscall
TGlobalResource<FRayTracingDebugLineAABBIndexBuffer,1>::
~TGlobalResource<FRayTracingDebugLineAABBIndexBuffer,1>
          (TGlobalResource<FRayTracingDebugLineAABBIndexBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFRayTracingDebugLineAABBIndexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)this);
  return;
}

// ~TGlobalResource<RectLightAtlas::FRectLightTextureManager,1> @ 145363610

void __thiscall
TGlobalResource<RectLightAtlas::FRectLightTextureManager,1>::
~TGlobalResource<RectLightAtlas::FRectLightTextureManager,1>
          (TGlobalResource<RectLightAtlas::FRectLightTextureManager,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_UFRectLightTextureManager_RectLightAtlas___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  RectLightAtlas::FRectLightTextureManager::~FRectLightTextureManager
            ((FRectLightTextureManager *)this);
  return;
}

// ~TGlobalResource<FGlobalDistanceCullFadeUniformBuffer,1> @ 145403340

void __thiscall
TGlobalResource<FGlobalDistanceCullFadeUniformBuffer,1>::
~TGlobalResource<FGlobalDistanceCullFadeUniformBuffer,1>
          (TGlobalResource<FGlobalDistanceCullFadeUniformBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFGlobalDistanceCullFadeUniformBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7__TUniformBuffer_VFDistanceCullFadeUniformShaderParameters____6B_;
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FGlobalDitherUniformBuffer,1> @ 1454033a0

void __thiscall
TGlobalResource<FGlobalDitherUniformBuffer,1>::~TGlobalResource<FGlobalDitherUniformBuffer,1>
          (TGlobalResource<FGlobalDitherUniformBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFGlobalDitherUniformBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7__TUniformBuffer_VFDitherUniformShaderParameters____6B_;
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FTileIndexBuffer,1> @ 145403400

void __thiscall
TGlobalResource<FTileIndexBuffer,1>::~TGlobalResource<FTileIndexBuffer,1>
          (TGlobalResource<FTileIndexBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFTileIndexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)this);
  return;
}

// ~TGlobalResource<FTileTexCoordVertexBuffer,1> @ 145403430

void __thiscall
TGlobalResource<FTileTexCoordVertexBuffer,1>::~TGlobalResource<FTileTexCoordVertexBuffer,1>
          (TGlobalResource<FTileTexCoordVertexBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFTileTexCoordVertexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// ~TGlobalResource<FOcclusionQueryIndexBuffer,1> @ 145478b70

void __thiscall
TGlobalResource<FOcclusionQueryIndexBuffer,1>::~TGlobalResource<FOcclusionQueryIndexBuffer,1>
          (TGlobalResource<FOcclusionQueryIndexBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFOcclusionQueryIndexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)this);
  return;
}

// TGlobalResource<FGlobalDynamicReadBuffer,1> @ 1454d06f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TGlobalResource<FGlobalDynamicReadBuffer,1> * __thiscall
TGlobalResource<FGlobalDynamicReadBuffer,1>::TGlobalResource<FGlobalDynamicReadBuffer,1>
          (TGlobalResource<FGlobalDynamicReadBuffer,1> *this)

{
  code *pcVar1;
  bool bVar2;
  TGlobalResource<FGlobalDynamicReadBuffer,1> *pTVar3;
  FRHICommandListBase *pFVar4;
  
  FGlobalDynamicReadBuffer::FGlobalDynamicReadBuffer((FGlobalDynamicReadBuffer *)this);
  *(undefined ***)this = &___7__TGlobalResource_VFGlobalDynamicReadBuffer___00__6B_;
  if (*(int *)&this->field_0x18 != -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderResource.h"
                       ,0xb9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TGlobalResource<FGlobalDynamicReadBuffer,1> *)(*pcVar1)();
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

// ~TGlobalResource<FDummySceneColorResolveBuffer,1> @ 1454d6780

void __thiscall
TGlobalResource<FDummySceneColorResolveBuffer,1>::~TGlobalResource<FDummySceneColorResolveBuffer,1>
          (TGlobalResource<FDummySceneColorResolveBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFDummySceneColorResolveBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// ~TGlobalResource<FGlobalDynamicReadBuffer,1> @ 1454d67b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TGlobalResource<FGlobalDynamicReadBuffer,1>::~TGlobalResource<FGlobalDynamicReadBuffer,1>
          (TGlobalResource<FGlobalDynamicReadBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFGlobalDynamicReadBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FGlobalDynamicReadBuffer::~FGlobalDynamicReadBuffer((FGlobalDynamicReadBuffer *)this);
  return;
}

// ~TGlobalResource<FSceneTextureExtracts,1> @ 1454d67e0

void __thiscall
TGlobalResource<FSceneTextureExtracts,1>::~TGlobalResource<FSceneTextureExtracts,1>
          (TGlobalResource<FSceneTextureExtracts,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFSceneTextureExtracts___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(FRHIResource **)&this->field_0x40 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x40);
  }
  if (*(FRHIResource **)&this->field_0x38 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x38);
  }
  if (*(longlong **)&this->field_0x30 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&this->field_0x30 + 0x38))();
  }
  if (*(longlong **)&this->field_0x28 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&this->field_0x28 + 0x38))();
  }
  if (*(longlong **)&this->field_0x20 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&this->field_0x20 + 0x38))();
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FDummyWholeSceneDirectionalShadowStencilVertexBuffer,1> @ 145576b30

void __thiscall
TGlobalResource<FDummyWholeSceneDirectionalShadowStencilVertexBuffer,1>::
~TGlobalResource<FDummyWholeSceneDirectionalShadowStencilVertexBuffer,1>
          (TGlobalResource<FDummyWholeSceneDirectionalShadowStencilVertexBuffer,1> *this)

{
  *(undefined ***)this =
       &___7__TGlobalResource_VFDummyWholeSceneDirectionalShadowStencilVertexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// ~TGlobalResource<ShaderPrint::FEmptyBuffer,1> @ 145576b60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TGlobalResource<ShaderPrint::FEmptyBuffer,1>::~TGlobalResource<ShaderPrint::FEmptyBuffer,1>
          (TGlobalResource<ShaderPrint::FEmptyBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFEmptyBuffer_ShaderPrint___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FBufferWithRDG::~FBufferWithRDG((FBufferWithRDG *)this);
  return;
}

// ~TGlobalResource<FEmptyTranslucentSelfShadowUniformBuffer,1> @ 145576b90

void __thiscall
TGlobalResource<FEmptyTranslucentSelfShadowUniformBuffer,1>::
~TGlobalResource<FEmptyTranslucentSelfShadowUniformBuffer,1>
          (TGlobalResource<FEmptyTranslucentSelfShadowUniformBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFEmptyTranslucentSelfShadowUniformBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7__TUniformBuffer_VFTranslucentSelfShadowUniformParameters____6B_;
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FFrustumVertexBuffer,1> @ 145576bf0

void __thiscall
TGlobalResource<FFrustumVertexBuffer,1>::~TGlobalResource<FFrustumVertexBuffer,1>
          (TGlobalResource<FFrustumVertexBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFFrustumVertexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// ~TGlobalResource<ShaderPrint::FLineIndexBuffer,0> @ 145576c20

void __thiscall
TGlobalResource<ShaderPrint::FLineIndexBuffer,0>::~TGlobalResource<ShaderPrint::FLineIndexBuffer,0>
          (TGlobalResource<ShaderPrint::FLineIndexBuffer,0> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFLineIndexBuffer_ShaderPrint___0A___6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)this);
  return;
}

// ~TGlobalResource<FShadingEnergyConservationResources,1> @ 145576c50

void __thiscall
TGlobalResource<FShadingEnergyConservationResources,1>::
~TGlobalResource<FShadingEnergyConservationResources,1>
          (TGlobalResource<FShadingEnergyConservationResources,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFShadingEnergyConservationResources___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  if (*(longlong **)&this->field_0x40 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&this->field_0x40 + 0x38))();
  }
  if (*(longlong **)&this->field_0x38 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&this->field_0x38 + 0x38))();
  }
  if (*(longlong **)&this->field_0x30 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&this->field_0x30 + 0x38))();
  }
  if (*(longlong **)&this->field_0x28 != (longlong *)0x0) {
    (**(code **)(**(longlong **)&this->field_0x28 + 0x38))();
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<ShaderPrint::FTriangleIndexBuffer,0> @ 145576cc0

void __thiscall
TGlobalResource<ShaderPrint::FTriangleIndexBuffer,0>::
~TGlobalResource<ShaderPrint::FTriangleIndexBuffer,0>
          (TGlobalResource<ShaderPrint::FTriangleIndexBuffer,0> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFTriangleIndexBuffer_ShaderPrint___0A___6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)this);
  return;
}

// ~TGlobalResource<FUniformSphereSamplesBuffer,1> @ 145666bf0

void __thiscall
TGlobalResource<FUniformSphereSamplesBuffer,1>::~TGlobalResource<FUniformSphereSamplesBuffer,1>
          (TGlobalResource<FUniformSphereSamplesBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFUniformSphereSamplesBuffer___00__6B_;
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

// ~TGlobalResource<FSystemTextures,1> @ 1456dda30

void __thiscall
TGlobalResource<FSystemTextures,1>::~TGlobalResource<FSystemTextures,1>
          (TGlobalResource<FSystemTextures,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFSystemTextures___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FSystemTextures::~FSystemTextures((FSystemTextures *)this);
  return;
}

// ~TGlobalResource<FVariableRateShadingImageManager,1> @ 145750260

void __thiscall
TGlobalResource<FVariableRateShadingImageManager,1>::
~TGlobalResource<FVariableRateShadingImageManager,1>
          (TGlobalResource<FVariableRateShadingImageManager,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFVariableRateShadingImageManager___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVariableRateShadingImageManager::~FVariableRateShadingImageManager
            ((FVariableRateShadingImageManager *)this);
  return;
}

// ~TGlobalResource<FSpriteIndexBuffer<1>,1> @ 145859910

void __thiscall
TGlobalResource<FSpriteIndexBuffer<1>,1>::~TGlobalResource<FSpriteIndexBuffer<1>,1>
          (TGlobalResource<FSpriteIndexBuffer<1>,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_V__FSpriteIndexBuffer__00___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)this);
  return;
}

// ~TGlobalResource<FCircleRasterizeIndexBuffer,1> @ 145859940

void __thiscall
TGlobalResource<FCircleRasterizeIndexBuffer,1>::~TGlobalResource<FCircleRasterizeIndexBuffer,1>
          (TGlobalResource<FCircleRasterizeIndexBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFCircleRasterizeIndexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FIndexBuffer::~FIndexBuffer((FIndexBuffer *)this);
  return;
}

// ~TGlobalResource<FCircleRasterizeVertexBuffer,1> @ 145859970

void __thiscall
TGlobalResource<FCircleRasterizeVertexBuffer,1>::~TGlobalResource<FCircleRasterizeVertexBuffer,1>
          (TGlobalResource<FCircleRasterizeVertexBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFCircleRasterizeVertexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)this);
  return;
}

// ~TGlobalResource<FQuadMeshVertexBuffer,1> @ 1458599a0

void __thiscall
TGlobalResource<FQuadMeshVertexBuffer,1>::~TGlobalResource<FQuadMeshVertexBuffer,1>
          (TGlobalResource<FQuadMeshVertexBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFQuadMeshVertexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FColorVertexBuffer::~FColorVertexBuffer((FColorVertexBuffer *)&this->field_0x128);
  FPositionVertexBuffer::~FPositionVertexBuffer((FPositionVertexBuffer *)&this->field_0xd8);
  FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer((FStaticMeshVertexBuffer *)&this->field_0x20);
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FSingleTriangleMeshVertexBuffer,1> @ 145859a00

void __thiscall
TGlobalResource<FSingleTriangleMeshVertexBuffer,1>::
~TGlobalResource<FSingleTriangleMeshVertexBuffer,1>
          (TGlobalResource<FSingleTriangleMeshVertexBuffer,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFSingleTriangleMeshVertexBuffer___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FColorVertexBuffer::~FColorVertexBuffer((FColorVertexBuffer *)&this->field_0x128);
  FPositionVertexBuffer::~FPositionVertexBuffer((FPositionVertexBuffer *)&this->field_0xd8);
  FStaticMeshVertexBuffer::~FStaticMeshVertexBuffer((FStaticMeshVertexBuffer *)&this->field_0x20);
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// TGlobalResource<FVirtualTextureFeedback,1> @ 1458ca520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TGlobalResource<FVirtualTextureFeedback,1> * __thiscall
TGlobalResource<FVirtualTextureFeedback,1>::TGlobalResource<FVirtualTextureFeedback,1>
          (TGlobalResource<FVirtualTextureFeedback,1> *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ForAnyElementType *pFVar4;
  int *piVar5;
  TGlobalResource<FVirtualTextureFeedback,1> *pTVar6;
  FRHICommandListBase *pFVar7;
  ForAnyElementType *pFVar8;
  
  FRenderResource::FRenderResource((FRenderResource *)this);
  pFVar8 = (ForAnyElementType *)0x0;
  *(undefined ***)this = &___7FVirtualTextureFeedback__6B_;
  *(undefined4 *)&this->field_0x20 = 0;
  *(undefined2 *)&this->field_0x24 = 0;
  *(undefined4 *)&this->field_0x28 = 1;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined4 *)&this->field_0x38 = 0;
  *(undefined2 *)&this->field_0x3c = 0;
  *(undefined4 *)&this->field_0x40 = 1;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined4 *)&this->field_0x50 = 0;
  *(undefined2 *)&this->field_0x54 = 0;
  *(undefined4 *)&this->field_0x58 = 1;
  *(undefined8 *)&this->field_0x60 = 0;
  *(undefined4 *)&this->field_0x68 = 0;
  *(undefined2 *)&this->field_0x6c = 0;
  *(undefined4 *)&this->field_0x70 = 1;
  *(undefined8 *)&this->field_0x78 = 0;
  *(undefined4 *)&this->field_0x80 = 0;
  *(undefined2 *)&this->field_0x84 = 0;
  *(undefined4 *)&this->field_0x88 = 1;
  *(undefined8 *)&this->field_0x90 = 0;
  *(undefined4 *)&this->field_0x98 = 0;
  *(undefined2 *)&this->field_0x9c = 0;
  *(undefined4 *)&this->field_0xa0 = 1;
  *(undefined8 *)&this->field_0xa8 = 0;
  *(undefined4 *)&this->field_0xb0 = 0;
  *(undefined2 *)&this->field_0xb4 = 0;
  *(undefined4 *)&this->field_0xb8 = 1;
  *(undefined8 *)&this->field_0xc0 = 0;
  *(undefined4 *)&this->field_0xc8 = 0;
  *(undefined2 *)&this->field_0xcc = 0;
  *(undefined4 *)&this->field_0xd0 = 1;
  *(undefined8 *)&this->field_0xd8 = 0;
  *(undefined8 *)&this->field_0xe8 = 0;
  *(undefined4 *)&this->field_0xf0 = 0;
  *(undefined8 *)&this->field_0xf8 = 0;
  *(undefined8 *)&this->field_0x100 = 0;
  *(undefined8 *)&this->field_0x108 = 0;
  *(undefined8 *)&this->field_0x110 = 0;
  pFVar4 = ::operator_new(0x10);
  if (pFVar4 != (ForAnyElementType *)0x0) {
    pFVar4->Data = (FScriptContainerElement *)0x0;
    piVar5 = (int *)((longlong)&pFVar4[1].Data + 4);
    *(int *)&pFVar4[1].Data = 0;
    *piVar5 = 0;
    iVar3 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,8,pFVar4,(int *)(pFVar4 + 1),piVar5);
    DefaultConstructItems<TRefCountPtr<FRHIGPUFence>,int>(pFVar4->Data + (longlong)iVar3 * 8,8);
    pFVar8 = pFVar4;
  }
  *(undefined ***)this = &___7__TGlobalResource_VFVirtualTextureFeedback___00__6B_;
  *(ForAnyElementType **)&this->field_0xe0 = pFVar8;
  if ((*(int *)&this->field_0x18 != -1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderResource.h"
                         ,0xb9,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar6 = (TGlobalResource<FVirtualTextureFeedback,1> *)(*pcVar1)();
    return pTVar6;
  }
  this->field_0x1d = 1;
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    BeginInitResource((FRenderResource *)this,(FRenderCommandPipe *)0x0);
    return this;
  }
  pcVar1 = *(code **)(*(longlong *)this + 0x18);
  pFVar7 = FRenderResource::GetImmediateCommandList();
  (*pcVar1)(this,pFVar7);
  return this;
}

// ~TGlobalResource<RuntimeVirtualTexture::FAstcParametersUniformBuffer,1> @ 1458cec10

void __thiscall
TGlobalResource<RuntimeVirtualTexture::FAstcParametersUniformBuffer,1>::
~TGlobalResource<RuntimeVirtualTexture::FAstcParametersUniformBuffer,1>
          (TGlobalResource<RuntimeVirtualTexture::FAstcParametersUniformBuffer,1> *this)

{
  *(undefined ***)this =
       &___7__TGlobalResource_VFAstcParametersUniformBuffer_RuntimeVirtualTexture___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7__TUniformBuffer_VFAstcParameters_RuntimeVirtualTexture____6B_;
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<RuntimeVirtualTexture::FEtcParametersUniformBuffer,1> @ 1458cec70

void __thiscall
TGlobalResource<RuntimeVirtualTexture::FEtcParametersUniformBuffer,1>::
~TGlobalResource<RuntimeVirtualTexture::FEtcParametersUniformBuffer,1>
          (TGlobalResource<RuntimeVirtualTexture::FEtcParametersUniformBuffer,1> *this)

{
  *(undefined ***)this =
       &___7__TGlobalResource_VFEtcParametersUniformBuffer_RuntimeVirtualTexture___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  *(undefined ***)this = &___7__TUniformBuffer_VFEtcParameters_RuntimeVirtualTexture____6B_;
  if (*(void **)&this->field_0x30 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x30);
  }
  if (*(FRHIResource **)&this->field_0x28 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x28);
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// ~TGlobalResource<FVirtualTextureFeedback,1> @ 1458cecd0

void __thiscall
TGlobalResource<FVirtualTextureFeedback,1>::~TGlobalResource<FVirtualTextureFeedback,1>
          (TGlobalResource<FVirtualTextureFeedback,1> *this)

{
  *(undefined ***)this = &___7__TGlobalResource_VFVirtualTextureFeedback___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  FVirtualTextureFeedback::~FVirtualTextureFeedback((FVirtualTextureFeedback *)this);
  return;
}

// ~TGlobalResource<FVirtualTextureFeedbackBufferResource,1> @ 1458ced00

void __thiscall
TGlobalResource<FVirtualTextureFeedbackBufferResource,1>::
~TGlobalResource<FVirtualTextureFeedbackBufferResource,1>
          (TGlobalResource<FVirtualTextureFeedbackBufferResource,1> *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  *(undefined ***)this = &___7__TGlobalResource_VFVirtualTextureFeedbackBufferResource___00__6B_;
  FRenderResource::ReleaseResource((FRenderResource *)this);
  puVar3 = *(undefined8 **)&this->field_0x30;
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

