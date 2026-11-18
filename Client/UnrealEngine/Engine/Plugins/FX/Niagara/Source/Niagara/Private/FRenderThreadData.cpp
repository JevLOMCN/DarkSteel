// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// FRenderThreadData @ 1491ab830

FRenderThreadData * __thiscall
FNDIRigidMeshCollisionProxy::FRenderThreadData::FRenderThreadData
          (FRenderThreadData *this,FRenderThreadData *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (param_1->ElementOffsets).SphereOffset;
  uVar2 = (param_1->ElementOffsets).CapsuleOffset;
  uVar3 = (param_1->ElementOffsets).NumElements;
  (this->ElementOffsets).BoxOffset = (param_1->ElementOffsets).BoxOffset;
  (this->ElementOffsets).SphereOffset = uVar1;
  (this->ElementOffsets).CapsuleOffset = uVar2;
  (this->ElementOffsets).NumElements = uVar3;
  (this->WorldTransform).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorldTransform).AllocatorInstance.Data = (param_1->WorldTransform).AllocatorInstance.Data;
  (param_1->WorldTransform).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorldTransform).ArrayNum = (param_1->WorldTransform).ArrayNum;
  (this->WorldTransform).ArrayMax = (param_1->WorldTransform).ArrayMax;
  (param_1->WorldTransform).ArrayNum = 0;
  (param_1->WorldTransform).ArrayMax = 0;
  (this->InverseTransform).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InverseTransform).AllocatorInstance.Data =
       (param_1->InverseTransform).AllocatorInstance.Data;
  (param_1->InverseTransform).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InverseTransform).ArrayNum = (param_1->InverseTransform).ArrayNum;
  (this->InverseTransform).ArrayMax = (param_1->InverseTransform).ArrayMax;
  (param_1->InverseTransform).ArrayNum = 0;
  (param_1->InverseTransform).ArrayMax = 0;
  (this->ElementExtent).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ElementExtent).AllocatorInstance.Data = (param_1->ElementExtent).AllocatorInstance.Data;
  (param_1->ElementExtent).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ElementExtent).ArrayNum = (param_1->ElementExtent).ArrayNum;
  (this->ElementExtent).ArrayMax = (param_1->ElementExtent).ArrayMax;
  (param_1->ElementExtent).ArrayNum = 0;
  (param_1->ElementExtent).ArrayMax = 0;
  (this->MeshScale).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshScale).AllocatorInstance.Data = (param_1->MeshScale).AllocatorInstance.Data;
  (param_1->MeshScale).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshScale).ArrayNum = (param_1->MeshScale).ArrayNum;
  (this->MeshScale).ArrayMax = (param_1->MeshScale).ArrayMax;
  (param_1->MeshScale).ArrayNum = 0;
  (param_1->MeshScale).ArrayMax = 0;
  (this->PhysicsType).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PhysicsType).AllocatorInstance.Data = (param_1->PhysicsType).AllocatorInstance.Data;
  (param_1->PhysicsType).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PhysicsType).ArrayNum = (param_1->PhysicsType).ArrayNum;
  (this->PhysicsType).ArrayMax = (param_1->PhysicsType).ArrayMax;
  (param_1->PhysicsType).ArrayNum = 0;
  (param_1->PhysicsType).ArrayMax = 0;
  (this->ComponentIdIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentIdIndex).AllocatorInstance.Data =
       (param_1->ComponentIdIndex).AllocatorInstance.Data;
  (param_1->ComponentIdIndex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentIdIndex).ArrayNum = (param_1->ComponentIdIndex).ArrayNum;
  (this->ComponentIdIndex).ArrayMax = (param_1->ComponentIdIndex).ArrayMax;
  (param_1->ComponentIdIndex).ArrayNum = 0;
  (param_1->ComponentIdIndex).ArrayMax = 0;
  uVar1 = param_1->MaxPrimitiveCount;
  (this->UniqueComponentIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->MaxPrimitiveCount = uVar1;
  (this->UniqueComponentIds).AllocatorInstance.Data =
       (param_1->UniqueComponentIds).AllocatorInstance.Data;
  (param_1->UniqueComponentIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UniqueComponentIds).ArrayNum = (param_1->UniqueComponentIds).ArrayNum;
  (this->UniqueComponentIds).ArrayMax = (param_1->UniqueComponentIds).ArrayMax;
  (param_1->UniqueComponentIds).ArrayNum = 0;
  (param_1->UniqueComponentIds).ArrayMax = 0;
  this->AssetBuffer = param_1->AssetBuffer;
  *(undefined8 *)&(this->CombinedBBoxWorldMin).field0_0x0 =
       *(undefined8 *)&(param_1->CombinedBBoxWorldMin).field0_0x0;
  (this->CombinedBBoxWorldMin).field0_0x0._s_0.Z = (param_1->CombinedBBoxWorldMin).field0_0x0._s_0.Z
  ;
  *(undefined8 *)&(this->CombinedBBoxWorldMax).field0_0x0 =
       *(undefined8 *)&(param_1->CombinedBBoxWorldMax).field0_0x0;
  (this->CombinedBBoxWorldMax).field0_0x0._s_0.Z = (param_1->CombinedBBoxWorldMax).field0_0x0._s_0.Z
  ;
  return this;
}

// ~FRenderThreadData @ 1491ad470

void __thiscall
FNDIRigidMeshCollisionProxy::FRenderThreadData::~FRenderThreadData(FRenderThreadData *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->UniqueComponentIds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ComponentIdIndex).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PhysicsType).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MeshScale).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ElementExtent).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InverseTransform).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WorldTransform).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator= @ 1491ad8b0

FRenderThreadData * __thiscall
FNDIRigidMeshCollisionProxy::FRenderThreadData::operator=
          (FRenderThreadData *this,FRenderThreadData *param_1)

{
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar6 = (param_1->ElementOffsets).SphereOffset;
  uVar7 = (param_1->ElementOffsets).CapsuleOffset;
  uVar8 = (param_1->ElementOffsets).NumElements;
  (this->ElementOffsets).BoxOffset = (param_1->ElementOffsets).BoxOffset;
  (this->ElementOffsets).SphereOffset = uVar6;
  (this->ElementOffsets).CapsuleOffset = uVar7;
  (this->ElementOffsets).NumElements = uVar8;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::operator=
            (&this->WorldTransform,&param_1->WorldTransform);
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::operator=
            (&this->InverseTransform,&param_1->InverseTransform);
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::operator=
            (&this->ElementExtent,&param_1->ElementExtent);
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>::operator=
            (&this->MeshScale,&param_1->MeshScale);
  pTVar1 = &this->PhysicsType;
  if (pTVar1 != &param_1->PhysicsType) {
    iVar4 = (param_1->PhysicsType).ArrayNum;
    piVar2 = &(this->PhysicsType).ArrayMax;
    pFVar5 = (param_1->PhysicsType).AllocatorInstance.Data;
    (this->PhysicsType).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar4,*piVar2,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 2);
      }
    }
  }
  pTVar3 = &this->ComponentIdIndex;
  if (pTVar3 != &param_1->ComponentIdIndex) {
    iVar4 = (param_1->ComponentIdIndex).ArrayNum;
    piVar2 = &(this->ComponentIdIndex).ArrayMax;
    pFVar5 = (param_1->ComponentIdIndex).AllocatorInstance.Data;
    (this->ComponentIdIndex).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar4,*piVar2,&pTVar3->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar3->AllocatorInstance).Data,pFVar5,(longlong)iVar4 << 2);
      }
    }
  }
  this->MaxPrimitiveCount = param_1->MaxPrimitiveCount;
  TArray<FPrimitiveComponentId,TSizedDefaultAllocator<32>_>::operator=
            (&this->UniqueComponentIds,&param_1->UniqueComponentIds);
  this->AssetBuffer = param_1->AssetBuffer;
  *(undefined8 *)&(this->CombinedBBoxWorldMin).field0_0x0 =
       *(undefined8 *)&(param_1->CombinedBBoxWorldMin).field0_0x0;
  (this->CombinedBBoxWorldMin).field0_0x0._s_0.Z = (param_1->CombinedBBoxWorldMin).field0_0x0._s_0.Z
  ;
  *(undefined8 *)&(this->CombinedBBoxWorldMax).field0_0x0 =
       *(undefined8 *)&(param_1->CombinedBBoxWorldMax).field0_0x0;
  (this->CombinedBBoxWorldMax).field0_0x0._s_0.Z = (param_1->CombinedBBoxWorldMax).field0_0x0._s_0.Z
  ;
  return this;
}

