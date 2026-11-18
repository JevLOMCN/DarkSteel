// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// FInstancedSkinnedMeshData @ 147cc4f00

FInstancedSkinnedMeshData * __thiscall
FInstancedSkinnedMeshData::FInstancedSkinnedMeshData
          (FInstancedSkinnedMeshData *this,FInstancedSkinnedMeshSceneProxyDesc *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FInstanceDataSceneProxy *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  this->InstanceStartCullDistance = 0;
  this->InstanceEndCullDistance = 0;
  (this->InstanceDataSceneProxy).Object = (FInstanceDataSceneProxy *)0x0;
  (this->InstanceDataSceneProxy).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->AnimationMinScreenSize = 0.0;
  this->InstanceMinDrawDistance = 0;
  this->InstanceMinDrawDistance = param_1->InstanceMinDrawDistance;
  this->InstanceStartCullDistance = param_1->InstanceStartCullDistance;
  this->InstanceEndCullDistance = param_1->InstanceEndCullDistance;
  pTVar1 = (param_1->InstanceDataSceneProxy).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->InstanceDataSceneProxy).Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (this->InstanceDataSceneProxy).SharedReferenceCount.ReferenceController;
  (this->InstanceDataSceneProxy).Object = pFVar2;
  (this->InstanceDataSceneProxy).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  this->AnimationMinScreenSize = param_1->AnimationMinScreenSize;
  return this;
}

// GetInstanceDrawDistanceMinMax @ 147d06320

bool __thiscall
FInstancedSkinnedMeshData::GetInstanceDrawDistanceMinMax
          (FInstancedSkinnedMeshData *this,TVector2<float> *param_1)

{
  undefined8 local_res8;
  
  if (this->InstanceEndCullDistance != 0) {
    local_res8._4_4_ = (float)this->InstanceEndCullDistance;
    local_res8._0_4_ = (float)this->InstanceMinDrawDistance;
    param_1->field0_0x0 = local_res8;
    return true;
  }
  param_1->field0_0x0 = (TVector2<float>_u_0)0x0;
  return false;
}

// SetInstanceCullDistance_RenderThread @ 147d29e70

void __thiscall
FInstancedSkinnedMeshData::SetInstanceCullDistance_RenderThread
          (FInstancedSkinnedMeshData *this,float param_1,float param_2)

{
  this->InstanceStartCullDistance = (uint)(longlong)param_1;
  this->InstanceEndCullDistance = (uint)(longlong)param_2;
  return;
}

