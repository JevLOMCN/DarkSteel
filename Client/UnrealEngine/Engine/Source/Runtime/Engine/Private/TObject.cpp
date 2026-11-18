// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// ~TObject<FMeshBuilderOneFrameResources> @ 147b3bda0

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FMeshBuilderOneFrameResources>::~TObject<FMeshBuilderOneFrameResources>
          (TObject<FMeshBuilderOneFrameResources> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFMeshBuilderOneFrameResources_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  FMeshBuilderOneFrameResources::~FMeshBuilderOneFrameResources
            ((FMeshBuilderOneFrameResources *)(this + 1));
  return;
}

// ~TObject<FFoliageCullInstanceParams> @ 147cc7c70

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FFoliageCullInstanceParams>::~TObject<FFoliageCullInstanceParams>
          (TObject<FFoliageCullInstanceParams> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_UFFoliageCullInstanceParams_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  if (*(void **)(this + 0x34) != (void *)0x0) {
    FMemory::Free(*(void **)(this + 0x34));
  }
  if (*(void **)(this + 0x22) != (void *)0x0) {
    FMemory::Free(*(void **)(this + 0x22));
  }
  FFoliageRenderInstanceParams::~FFoliageRenderInstanceParams
            ((FFoliageRenderInstanceParams *)(this + 1));
  return;
}

// ~TObject<FFoliageRenderInstanceParams> @ 147cc7cc0

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FFoliageRenderInstanceParams>::~TObject<FFoliageRenderInstanceParams>
          (TObject<FFoliageRenderInstanceParams> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_UFFoliageRenderInstanceParams_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  FFoliageRenderInstanceParams::~FFoliageRenderInstanceParams
            ((FFoliageRenderInstanceParams *)(this + 1));
  return;
}

// ~TObject<FGPUSpriteMeshDataUserData> @ 1480f60c0

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FGPUSpriteMeshDataUserData>::~TObject<FGPUSpriteMeshDataUserData>
          (TObject<FGPUSpriteMeshDataUserData> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_UFGPUSpriteMeshDataUserData_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  if (*(FRHIResource **)(this + 2) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)(this + 2));
  }
  *(undefined ***)(this + 1) = &___7FOneFrameResource__6B_;
  return;
}

// ~TObject<FGPUSpriteCollectorResources> @ 1480f6100

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FGPUSpriteCollectorResources>::~TObject<FGPUSpriteCollectorResources>
          (TObject<FGPUSpriteCollectorResources> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFGPUSpriteCollectorResources_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  FGPUSpriteCollectorResources::~FGPUSpriteCollectorResources
            ((FGPUSpriteCollectorResources *)(this + 1));
  return;
}

// ~TObject<FDynamicBeamTrailCollectorResources> @ 1481c8aa0

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FDynamicBeamTrailCollectorResources>::~TObject<FDynamicBeamTrailCollectorResources>
          (TObject<FDynamicBeamTrailCollectorResources> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFDynamicBeamTrailCollectorResources_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  *(undefined ***)(this + 1) = &___7FDynamicBeamTrailCollectorResources__6B_;
  (**(code **)(*(longlong *)&this[1].field_0x8 + 0x20))(&this[1].field_0x8);
  if (*(FRHIResource **)(this + 0x16) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)(this + 0x16));
  }
  FVertexFactory::~FVertexFactory((FVertexFactory *)&this[1].field_0x8);
  *(undefined ***)(this + 1) = &___7FOneFrameResource__6B_;
  return;
}

// ~TObject<FDynamicMeshEmitterCollectorResources> @ 1481c8b10

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FDynamicMeshEmitterCollectorResources>::~TObject<FDynamicMeshEmitterCollectorResources>
          (TObject<FDynamicMeshEmitterCollectorResources> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFDynamicMeshEmitterCollectorResources_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  *(undefined ***)(this + 1) = &___7FDynamicMeshEmitterCollectorResources__6B_;
  (**(code **)(*(longlong *)&this[1].field_0x8 + 0x20))(&this[1].field_0x8);
  if (*(FRHIResource **)(this + 0x2e) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)(this + 0x2e));
  }
  FDynamicReadBuffer::~FDynamicReadBuffer((FDynamicReadBuffer *)(this + 0x2b));
  FVertexFactory::~FVertexFactory((FVertexFactory *)&this[1].field_0x8);
  *(undefined ***)(this + 1) = &___7FOneFrameResource__6B_;
  return;
}

// ~TObject<FDynamicSpriteCollectorResources> @ 1481c8b80

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FDynamicSpriteCollectorResources>::~TObject<FDynamicSpriteCollectorResources>
          (TObject<FDynamicSpriteCollectorResources> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFDynamicSpriteCollectorResources_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  FDynamicSpriteCollectorResources::~FDynamicSpriteCollectorResources
            ((FDynamicSpriteCollectorResources *)(this + 1));
  return;
}

// ~TObject<FVectorFieldVisualizationUserData> @ 14890c980

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FVectorFieldVisualizationUserData>::~TObject<FVectorFieldVisualizationUserData>
          (TObject<FVectorFieldVisualizationUserData> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_UFVectorFieldVisualizationUserData_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  if (*(FRHIResource **)(this + 2) != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)(this + 2));
  }
  if (*(FRHIResource **)&this[1].field_0x8 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this[1].field_0x8);
  }
  *(undefined ***)(this + 1) = &___7FOneFrameResource__6B_;
  return;
}

// ~TObject<FVectorFieldCollectorResources> @ 14890c9d0

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FVectorFieldCollectorResources>::~TObject<FVectorFieldCollectorResources>
          (TObject<FVectorFieldCollectorResources> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFVectorFieldCollectorResources_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  *(undefined ***)(this + 1) = &___7FVectorFieldCollectorResources__6B_;
  (**(code **)(*(longlong *)&this[1].field_0x8 + 0x20))(&this[1].field_0x8);
  FVertexFactory::~FVertexFactory((FVertexFactory *)&this[1].field_0x8);
  *(undefined ***)(this + 1) = &___7FOneFrameResource__6B_;
  return;
}

