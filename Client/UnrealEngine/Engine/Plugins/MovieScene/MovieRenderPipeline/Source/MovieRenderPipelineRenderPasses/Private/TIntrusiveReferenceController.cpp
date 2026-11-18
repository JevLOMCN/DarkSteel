// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineRenderPasses
// Functions: 10

// TIntrusiveReferenceController<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1><TSharedPtr<FImageOverlappedAccumulator,1>_&> @ 14ddbb940

TIntrusiveReferenceController<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1>
* __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1>
::
TIntrusiveReferenceController<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1><TSharedPtr<FImageOverlappedAccumulator,1>_&>
          (TIntrusiveReferenceController<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1>
           *this,TSharedPtr<FImageOverlappedAccumulator,1> *param_1)

{
  TTypeCompatibleBytes<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance> *pTVar1;
  uchar *puVar2;
  int *piVar3;
  int iVar4;
  undefined8 *puVar5;
  TReferenceControllerBase<1> *pTVar6;
  longlong local_38;
  FImageOverlappedAccumulator *local_30;
  TReferenceControllerBase<1> *local_28;
  
  *(undefined4 *)&this->_padding_ = 1;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  this->_padding_ =
       (longlong)
       &
       ___7__TIntrusiveReferenceController_UFInstance_FSurfaceAccumulatorPool_DefaultRenderer_MovieGraph_UE___00_SharedPointerInternals__6B_
  ;
  pTVar1 = &this->ObjectStorage;
  local_30 = param_1->Object;
  local_28 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_28 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_28->SharedReferenceCount = (atomic<int>)((int)local_28->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1->Pad[0] = '\0';
  pTVar1->Pad[1] = '\0';
  pTVar1->Pad[2] = '\0';
  pTVar1->Pad[3] = '\0';
  pTVar1->Pad[4] = '\0';
  pTVar1->Pad[5] = '\0';
  pTVar1->Pad[6] = '\0';
  pTVar1->Pad[7] = '\0';
  (this->ObjectStorage).Pad[8] = '\0';
  (this->ObjectStorage).Pad[9] = '\0';
  (this->ObjectStorage).Pad[10] = '\0';
  (this->ObjectStorage).Pad[0xb] = '\0';
  (this->ObjectStorage).Pad[0xc] = '\0';
  (this->ObjectStorage).Pad[0xd] = '\0';
  (this->ObjectStorage).Pad[0xe] = '\0';
  (this->ObjectStorage).Pad[0xf] = '\0';
  (this->ObjectStorage).Pad[0x18] = '\0';
  (this->ObjectStorage).Pad[0x19] = '\0';
  (this->ObjectStorage).Pad[0x1a] = '\0';
  (this->ObjectStorage).Pad[0x1b] = '\0';
  (this->ObjectStorage).Pad[0x1c] = '\0';
  (this->ObjectStorage).Pad[0x1d] = '\0';
  (this->ObjectStorage).Pad[0x1e] = '\0';
  (this->ObjectStorage).Pad[0x1f] = '\0';
  (this->ObjectStorage).Pad[0x20] = '\0';
  (this->ObjectStorage).Pad[0x21] = '\0';
  (this->ObjectStorage).Pad[0x22] = '\0';
  (this->ObjectStorage).Pad[0x23] = '\0';
  (this->ObjectStorage).Pad[0x24] = '\0';
  (this->ObjectStorage).Pad[0x25] = '\0';
  (this->ObjectStorage).Pad[0x26] = '\0';
  (this->ObjectStorage).Pad[0x27] = '\0';
  (this->ObjectStorage).Pad[0x28] = '\0';
  (this->ObjectStorage).Pad[0x29] = '\0';
  (this->ObjectStorage).Pad[0x2a] = '\0';
  (this->ObjectStorage).Pad[0x2b] = '\0';
  (this->ObjectStorage).Pad[0x2c] = '\0';
  (this->ObjectStorage).Pad[0x2d] = '\0';
  (this->ObjectStorage).Pad[0x2e] = '\0';
  (this->ObjectStorage).Pad[0x2f] = '\0';
  (this->ObjectStorage).Pad[0x30] = '\0';
  (this->ObjectStorage).Pad[0x31] = '\0';
  (this->ObjectStorage).Pad[0x32] = '\0';
  (this->ObjectStorage).Pad[0x33] = '\0';
  (this->ObjectStorage).Pad[0x34] = '\0';
  (this->ObjectStorage).Pad[0x35] = '\0';
  (this->ObjectStorage).Pad[0x36] = '\0';
  (this->ObjectStorage).Pad[0x37] = '\0';
  (this->ObjectStorage).Pad[0x38] = '\0';
  (this->ObjectStorage).Pad[0x39] = '\0';
  (this->ObjectStorage).Pad[0x3a] = '\0';
  (this->ObjectStorage).Pad[0x3b] = '\0';
  (this->ObjectStorage).Pad[0x3c] = '\0';
  (this->ObjectStorage).Pad[0x3d] = '\0';
  (this->ObjectStorage).Pad[0x3e] = '\0';
  (this->ObjectStorage).Pad[0x3f] = '\0';
  (this->ObjectStorage).Pad[0x40] = '\0';
  (this->ObjectStorage).Pad[0x41] = '\0';
  (this->ObjectStorage).Pad[0x42] = '\0';
  (this->ObjectStorage).Pad[0x43] = '\0';
  (this->ObjectStorage).Pad[0x44] = '\0';
  (this->ObjectStorage).Pad[0x45] = '\0';
  (this->ObjectStorage).Pad[0x46] = '\0';
  (this->ObjectStorage).Pad[0x47] = '\0';
  (this->ObjectStorage).Pad[0x48] = '\0';
  (this->ObjectStorage).Pad[0x49] = '\0';
  (this->ObjectStorage).Pad[0x4a] = '\0';
  (this->ObjectStorage).Pad[0x4b] = '\0';
  (this->ObjectStorage).Pad[0x4c] = '\0';
  (this->ObjectStorage).Pad[0x4d] = '\0';
  (this->ObjectStorage).Pad[0x4e] = '\0';
  (this->ObjectStorage).Pad[0x4f] = '\0';
  (this->ObjectStorage).Pad[0x50] = '\0';
  (this->ObjectStorage).Pad[0x51] = '\0';
  (this->ObjectStorage).Pad[0x52] = '\0';
  (this->ObjectStorage).Pad[0x53] = '\0';
  (this->ObjectStorage).Pad[0x54] = '\0';
  (this->ObjectStorage).Pad[0x55] = '\0';
  (this->ObjectStorage).Pad[0x56] = '\0';
  (this->ObjectStorage).Pad[0x57] = '\0';
  (this->ObjectStorage).Pad[0x58] = '\0';
  (this->ObjectStorage).Pad[0x59] = '\0';
  (this->ObjectStorage).Pad[0x5a] = '\0';
  (this->ObjectStorage).Pad[0x5b] = '\0';
  (this->ObjectStorage).Pad[0x5c] = '\0';
  (this->ObjectStorage).Pad[0x5d] = '\0';
  (this->ObjectStorage).Pad[0x5e] = '\0';
  (this->ObjectStorage).Pad[0x5f] = '\0';
  puVar2 = (this->ObjectStorage).Pad + 0x60;
  puVar2[0] = '\0';
  puVar2[1] = '\0';
  puVar2[2] = '\0';
  puVar2[3] = '\0';
  puVar2[4] = '\0';
  puVar2[5] = '\0';
  puVar2[6] = '\0';
  puVar2[7] = '\0';
  (this->ObjectStorage).Pad[0x68] = '\0';
  (this->ObjectStorage).Pad[0x69] = '\0';
  (this->ObjectStorage).Pad[0x6a] = '\0';
  (this->ObjectStorage).Pad[0x6b] = '\0';
  if (local_28 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_28->SharedReferenceCount = (atomic<int>)((int)local_28->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = *(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 8);
  *(FImageOverlappedAccumulator **)pTVar1->Pad = local_30;
  *(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 8) = local_28;
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  LOCK();
  (this->ObjectStorage).Pad[0x68] = '\0';
  (this->ObjectStorage).Pad[0x69] = '\0';
  (this->ObjectStorage).Pad[0x6a] = '\0';
  (this->ObjectStorage).Pad[0x6b] = '\0';
  UNLOCK();
  (this->ObjectStorage).Pad[0x10] = 0xff;
  (this->ObjectStorage).Pad[0x11] = 0xff;
  (this->ObjectStorage).Pad[0x12] = 0xff;
  (this->ObjectStorage).Pad[0x13] = 0xff;
  if ((longlong *)puVar2 != &local_38) {
    puVar5 = *(undefined8 **)puVar2;
    puVar2[0] = '\0';
    puVar2[1] = '\0';
    puVar2[2] = '\0';
    puVar2[3] = '\0';
    puVar2[4] = '\0';
    puVar2[5] = '\0';
    puVar2[6] = '\0';
    puVar2[7] = '\0';
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      piVar3 = (int *)(puVar5 + 6);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
  }
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_28);
  return this;
}

// DestroyObject @ 14dddb300

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TAccumulatorPool<FImageOverlappedAccumulator>,1>::DestroyObject
          (TIntrusiveReferenceController<TAccumulatorPool<FImageOverlappedAccumulator>,1> *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)((this->ObjectStorage).Pad + 0x28));
  DestructItems<TSharedPtr<FAccumulatorPool::FAccumulatorInstance,1>,int>
            (*(TSharedPtr<FAccumulatorPool::FAccumulatorInstance,1> **)
              ((this->ObjectStorage).Pad + 0x18),*(int *)((this->ObjectStorage).Pad + 0x20));
  pvVar3 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  plVar4 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014dddb355. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 14dddb370

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FAccumulatorPool::FAccumulatorInstance,1>::
DestroyObject(TIntrusiveReferenceController<FAccumulatorPool::FAccumulatorInstance,1> *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  void *pvVar4;
  
  puVar3 = *(undefined8 **)((this->ObjectStorage).Pad + 0x40);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  pvVar4 = *(void **)((this->ObjectStorage).Pad + 0x28);
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  pvVar4 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 8));
  return;
}

// DestroyObject @ 14dddb3d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FImageOverlappedAccumulator,1>::DestroyObject
          (TIntrusiveReferenceController<FImageOverlappedAccumulator,1> *this)

{
  FImageOverlappedAccumulator::~FImageOverlappedAccumulator
            ((FImageOverlappedAccumulator *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14dddb3e0

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1>
::DestroyObject(TIntrusiveReferenceController<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1>
                *this)

{
  UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance::~FInstance
            ((FInstance *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14dddb3f0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieGraph::Rendering::FMovieGraphPanoSampleState,1>::
DestroyObject(TIntrusiveReferenceController<UE::MovieGraph::Rendering::FMovieGraphPanoSampleState,1>
              *this)

{
  UE::MovieGraph::FMovieGraphSampleState::~FMovieGraphSampleState
            ((FMovieGraphSampleState *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14dddb400

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieGraph::Rendering::FMovieGraphRenderDataAccumulationArgs,1>::
DestroyObject(TIntrusiveReferenceController<UE::MovieGraph::Rendering::FMovieGraphRenderDataAccumulationArgs,1>
              *this)

{
  UE::MovieGraph::Rendering::FMovieGraphRenderDataAccumulationArgs::
  ~FMovieGraphRenderDataAccumulationArgs
            ((FMovieGraphRenderDataAccumulationArgs *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14dddb410

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>::
DestroyObject(TIntrusiveReferenceController<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool,1>
              *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)((this->ObjectStorage).Pad + 0x20));
  DestructItems<TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1>,int>
            (*(TSharedPtr<UE::MovieGraph::DefaultRenderer::FSurfaceAccumulatorPool::FInstance,1> **)
              ((this->ObjectStorage).Pad + 0x10),*(int *)((this->ObjectStorage).Pad + 0x18));
  pvVar3 = *(void **)((this->ObjectStorage).Pad + 0x10);
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  plVar4 = *(longlong **)((this->ObjectStorage).Pad + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014dddb465. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 14dddb480

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender,1>::
DestroyObject(TIntrusiveReferenceController<UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender,1>
              *this)

{
  UE::MovieGraph::Rendering::FMovieGraphPanoramicBlender::~FMovieGraphPanoramicBlender
            ((FMovieGraphPanoramicBlender *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14dddb490

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSceneViewFamilyContext,1>::DestroyObject
          (TIntrusiveReferenceController<FSceneViewFamilyContext,1> *this)

{
  FSceneViewFamilyContext::~FSceneViewFamilyContext((FSceneViewFamilyContext *)&this->ObjectStorage)
  ;
  return;
}

