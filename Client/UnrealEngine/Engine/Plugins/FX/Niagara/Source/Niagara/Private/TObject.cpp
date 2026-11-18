// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// ~TObject<FNiagaraRendererMeshes::FGPUSceneUpdateResource> @ 149335ab0

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FNiagaraRendererMeshes::FGPUSceneUpdateResource>::
~TObject<FNiagaraRendererMeshes::FGPUSceneUpdateResource>
          (TObject<FNiagaraRendererMeshes::FGPUSceneUpdateResource> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFGPUSceneUpdateResource_FNiagaraRendererMeshes_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  *(undefined ***)(this + 1) = &___7FOneFrameResource__6B_;
  return;
}

// ~TObject<FNiagaraRendererMeshes::FMeshCollectorResources> @ 149335ad0

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FNiagaraRendererMeshes::FMeshCollectorResources>::
~TObject<FNiagaraRendererMeshes::FMeshCollectorResources>
          (TObject<FNiagaraRendererMeshes::FMeshCollectorResources> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFMeshCollectorResources_FNiagaraRendererMeshes_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  *(undefined ***)(this + 1) = &___7FMeshCollectorResources_FNiagaraRendererMeshes__6B_;
  (**(code **)(*(longlong *)&this[1].field_0x8 + 0x20))(&this[1].field_0x8);
  if (*(FRHIResource **)&this[0x22].field_0x8 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this[0x22].field_0x8);
  }
  FVertexFactory::~FVertexFactory((FVertexFactory *)&this[1].field_0x8);
  *(undefined ***)(this + 1) = &___7FOneFrameResource__6B_;
  return;
}

// ~TObject<FNiagaraRibbonMeshCollectorResources> @ 149335b40

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FNiagaraRibbonMeshCollectorResources>::~TObject<FNiagaraRibbonMeshCollectorResources>
          (TObject<FNiagaraRibbonMeshCollectorResources> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFNiagaraRibbonMeshCollectorResources_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)(this + 2));
  *(undefined ***)(this + 1) = &___7FOneFrameResource__6B_;
  return;
}

// ~TObject<NiagaraRendererVolumesLocal::FHeterogeneousVolumeInstances> @ 149389bf0

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<NiagaraRendererVolumesLocal::FHeterogeneousVolumeInstances>::
~TObject<NiagaraRendererVolumesLocal::FHeterogeneousVolumeInstances>
          (TObject<NiagaraRendererVolumesLocal::FHeterogeneousVolumeInstances> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)this =
       &
       ___7__TObject_UFHeterogeneousVolumeInstances_NiagaraRendererVolumesLocal_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  pvVar1 = *(void **)(this + 1);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// ~TObject<FHeterogeneousVolumeData> @ 149389c10

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FHeterogeneousVolumeData>::~TObject<FHeterogeneousVolumeData>
          (TObject<FHeterogeneousVolumeData> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFHeterogeneousVolumeData_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  *(undefined ***)(this + 1) =
       &FHeterogeneousVolumeData::_vftable__for__IHeterogeneousVolumeInterface__;
  *(undefined ***)&this[1].field_0x8 = &FHeterogeneousVolumeData::_vftable__for__FOneFrameResource__
  ;
  if (*(void **)&this[0xd].field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this[0xd].field_0x8);
  }
  *(undefined ***)&this[1].field_0x8 = &___7FOneFrameResource__6B_;
  *(undefined ***)(this + 1) = &___7IHeterogeneousVolumeInterface__6B_;
  return;
}

// ~TObject<FNiagaraRendererSprites::FMeshCollectorResources> @ 149389c70

void __thiscall
TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::
TObject<FNiagaraRendererSprites::FMeshCollectorResources>::
~TObject<FNiagaraRendererSprites::FMeshCollectorResources>
          (TObject<FNiagaraRendererSprites::FMeshCollectorResources> *this)

{
  *(undefined ***)this =
       &
       ___7__TObject_VFMeshCollectorResources_FNiagaraRendererSprites_____TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  FNiagaraRendererSprites::FMeshCollectorResources::~FMeshCollectorResources
            ((FMeshCollectorResources *)(this + 1));
  return;
}

