// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FInstancedStaticMeshSceneProxyDesc @ 147cc5780

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FInstancedStaticMeshSceneProxyDesc * __thiscall
FInstancedStaticMeshSceneProxyDesc::FInstancedStaticMeshSceneProxyDesc
          (FInstancedStaticMeshSceneProxyDesc *this,UInstancedStaticMeshComponent *param_1)

{
  TSharedPtr<FInstanceDataSceneProxy,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FInstancedStaticMeshSceneProxyDesc *pFVar4;
  FISMCInstanceDataSceneProxy *local_18;
  FSharedReferencer<1> local_10;
  
  memset(this,0,0x1b8);
  FStaticMeshSceneProxyDesc::FStaticMeshSceneProxyDesc((FStaticMeshSceneProxyDesc *)this);
  pTVar1 = &this->InstanceDataSceneProxy;
  pTVar1->Object = (FInstanceDataSceneProxy *)0x0;
  (this->InstanceDataSceneProxy).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->InstanceMinDrawDistance = 0;
  this->InstanceStartCullDistance = 0;
  this->InstanceEndCullDistance = 0;
  this->InstanceLODDistanceScale = 1.0;
  this->bUseGpuLodSelection = false;
  this->_padding_ = (longlong)&___7FInstancedStaticMeshSceneProxyDesc__6B_;
  FStaticMeshSceneProxyDesc::InitializeFromStaticMeshComponent
            ((FStaticMeshSceneProxyDesc *)this,(UStaticMeshComponent *)param_1);
  local_10.ReferenceController =
       (param_1->PrimitiveInstanceDataManager).Proxy.SharedReferenceCount.ReferenceController;
  local_18 = (param_1->PrimitiveInstanceDataManager).Proxy.Object;
  if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pTVar1 != (TSharedPtr<FInstanceDataSceneProxy,1> *)&local_18) {
    pTVar1->Object = (FInstanceDataSceneProxy *)local_18;
    local_18 = (FISMCInstanceDataSceneProxy *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->InstanceDataSceneProxy).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  if ((this->_padding_ != 0) && (pTVar1->Object == (FInstanceDataSceneProxy *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GetScene() || InstanceDataSceneProxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                       ,0x5a3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FInstancedStaticMeshSceneProxyDesc *)(*pcVar2)();
      return pFVar4;
    }
  }
  this->InstanceMinDrawDistance = param_1->InstanceMinDrawDistance;
  this->InstanceStartCullDistance = param_1->InstanceStartCullDistance;
  this->InstanceEndCullDistance = param_1->InstanceEndCullDistance;
  this->InstanceLODDistanceScale = param_1->InstanceLODDistanceScale;
  this->bUseGpuLodSelection = param_1->bUseGpuLodSelection;
  return this;
}

// InitializeFromInstancedStaticMeshComponent @ 147d19b30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FInstancedStaticMeshSceneProxyDesc::InitializeFromInstancedStaticMeshComponent
          (FInstancedStaticMeshSceneProxyDesc *this,UInstancedStaticMeshComponent *param_1)

{
  TSharedPtr<FInstanceDataSceneProxy,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FISMCInstanceDataSceneProxy *local_18;
  FSharedReferencer<1> local_10;
  
  FStaticMeshSceneProxyDesc::InitializeFromStaticMeshComponent
            ((FStaticMeshSceneProxyDesc *)this,(UStaticMeshComponent *)param_1);
  local_10.ReferenceController =
       (param_1->PrimitiveInstanceDataManager).Proxy.SharedReferenceCount.ReferenceController;
  local_18 = (param_1->PrimitiveInstanceDataManager).Proxy.Object;
  if (local_10.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_10.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_10.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->InstanceDataSceneProxy;
  if (pTVar1 != (TSharedPtr<FInstanceDataSceneProxy,1> *)&local_18) {
    pTVar1->Object = (FInstanceDataSceneProxy *)local_18;
    local_18 = (FISMCInstanceDataSceneProxy *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->InstanceDataSceneProxy).SharedReferenceCount,&local_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_10.ReferenceController);
  if ((this->_padding_ != 0) && (pTVar1->Object == (FInstanceDataSceneProxy *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!GetScene() || InstanceDataSceneProxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\InstancedStaticMesh.cpp"
                       ,0x5a3,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->InstanceMinDrawDistance = param_1->InstanceMinDrawDistance;
  this->InstanceStartCullDistance = param_1->InstanceStartCullDistance;
  this->InstanceEndCullDistance = param_1->InstanceEndCullDistance;
  this->InstanceLODDistanceScale = param_1->InstanceLODDistanceScale;
  this->bUseGpuLodSelection = param_1->bUseGpuLodSelection;
  return;
}

