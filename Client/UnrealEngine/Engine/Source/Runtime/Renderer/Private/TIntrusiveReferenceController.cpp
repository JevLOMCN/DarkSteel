// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// DestroyObject @ 1447528e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FRHIBreadcrumbAllocator,1>::DestroyObject
          (TIntrusiveReferenceController<FRHIBreadcrumbAllocator,1> *this)

{
  FRHIBreadcrumbAllocator::~FRHIBreadcrumbAllocator((FRHIBreadcrumbAllocator *)&this->ObjectStorage)
  ;
  return;
}

// DestroyObject @ 144f01cf0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMeshEdgesViewFamilyData,1>::DestroyObject
          (TIntrusiveReferenceController<FMeshEdgesViewFamilyData,1> *this)

{
  FMeshEdgesViewFamilyData::~FMeshEdgesViewFamilyData
            ((FMeshEdgesViewFamilyData *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 145051ca0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Nanite::FNaniteShadingPassIntermediates,1>::
DestroyObject(TIntrusiveReferenceController<Nanite::FNaniteShadingPassIntermediates,1> *this)

{
  void *pvVar1;
  FRHIResource *this_00;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar1 != (void *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pvVar1);
  }
  this_00 = *(FRHIResource **)(this->ObjectStorage).Pad;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
    return;
  }
  return;
}

// DestroyObject @ 145051ce0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FNaniteShadingPipeline,1>::DestroyObject
          (TIntrusiveReferenceController<FNaniteShadingPipeline,1> *this)

{
  FNaniteShadingPipeline::~FNaniteShadingPipeline((FNaniteShadingPipeline *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 145429ed0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FRHIGPUBufferReadback,1>::DestroyObject
          (TIntrusiveReferenceController<FRHIGPUBufferReadback,1> *this)

{
  FRHIGPUBufferReadback::~FRHIGPUBufferReadback((FRHIGPUBufferReadback *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1457e3030

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FVirtualShadowMapPerLightCacheEntry,1>::
DestroyObject(TIntrusiveReferenceController<FVirtualShadowMapPerLightCacheEntry,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x48);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x38);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x28);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

