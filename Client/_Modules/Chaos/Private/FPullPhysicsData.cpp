// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// Reset @ 143e46460

void __thiscall Chaos::FPullPhysicsData::Reset(FPullPhysicsData *this)

{
  int *piVar1;
  int iVar2;
  FDirtyRigidParticleData *pFVar3;
  FDirtyGeometryCollectionData *pFVar4;
  FDirtyClusterUnionData *pFVar5;
  FDirtyJointConstraintData *pFVar6;
  FDirtyCharacterGroundConstraintData *pFVar7;
  
  piVar1 = &(this->DirtyRigids).ArrayMax;
  pFVar3 = (FDirtyRigidParticleData *)(this->DirtyRigids).AllocatorInstance.Data;
  iVar2 = (this->DirtyRigids).ArrayNum;
  if ((this->DirtyRigids).ArrayMax < 0) {
    DestructItems<Chaos::FDirtyRigidParticleData,int>(pFVar3,iVar2);
    (this->DirtyRigids).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x90,0x10,0,(ForAnyElementType *)this,0,piVar1);
    }
  }
  else {
    DestructItems<Chaos::FDirtyRigidParticleData,int>(pFVar3,iVar2);
    (this->DirtyRigids).ArrayNum = 0;
  }
  TSet<TTuple<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_const_*,Chaos::FDirtyRigidParticleReplicationErrorData,0>,FDefaultSetAllocator>
           *)&this->DirtyRigidErrors);
  piVar1 = &(this->DirtyGeometryCollections).ArrayMax;
  pFVar4 = (FDirtyGeometryCollectionData *)(this->DirtyGeometryCollections).AllocatorInstance.Data;
  iVar2 = (this->DirtyGeometryCollections).ArrayNum;
  if ((this->DirtyGeometryCollections).ArrayMax < 0) {
    DestructItems<Chaos::FDirtyGeometryCollectionData,int>(pFVar4,iVar2);
    (this->DirtyGeometryCollections).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->DirtyGeometryCollections).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<Chaos::FDirtyGeometryCollectionData,int>(pFVar4,iVar2);
    (this->DirtyGeometryCollections).ArrayNum = 0;
  }
  piVar1 = &(this->DirtyClusterUnions).ArrayMax;
  pFVar5 = (FDirtyClusterUnionData *)(this->DirtyClusterUnions).AllocatorInstance.Data;
  iVar2 = (this->DirtyClusterUnions).ArrayNum;
  if ((this->DirtyClusterUnions).ArrayMax < 0) {
    DestructItems<Chaos::FDirtyClusterUnionData,int>(pFVar5,iVar2);
    (this->DirtyClusterUnions).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xf0,0x10,0,&(this->DirtyClusterUnions).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<Chaos::FDirtyClusterUnionData,int>(pFVar5,iVar2);
    (this->DirtyClusterUnions).ArrayNum = 0;
  }
  piVar1 = &(this->DirtyJointConstraints).ArrayMax;
  pFVar6 = (FDirtyJointConstraintData *)(this->DirtyJointConstraints).AllocatorInstance.Data;
  iVar2 = (this->DirtyJointConstraints).ArrayNum;
  if ((this->DirtyJointConstraints).ArrayMax < 0) {
    DestructItems<Chaos::FDirtyJointConstraintData,int>(pFVar6,iVar2);
    (this->DirtyJointConstraints).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,0,&(this->DirtyJointConstraints).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<Chaos::FDirtyJointConstraintData,int>(pFVar6,iVar2);
    (this->DirtyJointConstraints).ArrayNum = 0;
  }
  pFVar7 = (FDirtyCharacterGroundConstraintData *)
           (this->DirtyCharacterGroundConstraints).AllocatorInstance.Data;
  piVar1 = &(this->DirtyCharacterGroundConstraints).ArrayMax;
  iVar2 = (this->DirtyCharacterGroundConstraints).ArrayNum;
  if (-1 < (this->DirtyCharacterGroundConstraints).ArrayMax) {
    DestructItems<Chaos::FDirtyCharacterGroundConstraintData,int>(pFVar7,iVar2);
    (this->DirtyCharacterGroundConstraints).ArrayNum = 0;
    return;
  }
  DestructItems<Chaos::FDirtyCharacterGroundConstraintData,int>(pFVar7,iVar2);
  (this->DirtyCharacterGroundConstraints).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x118,8,0,&(this->DirtyCharacterGroundConstraints).AllocatorInstance,0,piVar1);
  }
  return;
}

