// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 1

// FInstancedStaticMeshSceneProxyDesc @ 14da19890

FInstancedStaticMeshSceneProxyDesc * __thiscall
FInstancedStaticMeshSceneProxyDesc::FInstancedStaticMeshSceneProxyDesc
          (FInstancedStaticMeshSceneProxyDesc *this,FInstancedStaticMeshSceneProxyDesc *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  FStaticMeshSceneProxyDesc::FStaticMeshSceneProxyDesc
            ((FStaticMeshSceneProxyDesc *)this,(FStaticMeshSceneProxyDesc *)param_1);
  this->_padding_ = (longlong)&___7FInstancedStaticMeshSceneProxyDesc__6B_;
  (this->InstanceDataSceneProxy).Object = (param_1->InstanceDataSceneProxy).Object;
  pTVar1 = (param_1->InstanceDataSceneProxy).SharedReferenceCount.ReferenceController;
  (this->InstanceDataSceneProxy).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->InstanceMinDrawDistance = param_1->InstanceMinDrawDistance;
  this->InstanceStartCullDistance = param_1->InstanceStartCullDistance;
  this->InstanceEndCullDistance = param_1->InstanceEndCullDistance;
  this->InstanceLODDistanceScale = param_1->InstanceLODDistanceScale;
  this->bUseGpuLodSelection = param_1->bUseGpuLodSelection;
  return this;
}

