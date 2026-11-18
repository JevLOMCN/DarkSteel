// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Release @ 1486e5e30

void __cdecl
TSkeletalMeshDynamicData<FDynamicSkelMeshObjectDataNanite>::Release
          (FDynamicSkelMeshObjectDataNanite *param_1)

{
  int *piVar1;
  int iVar2;
  FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataNanite,0,1> *this;
  int iVar3;
  
  if (param_1 != (FDynamicSkelMeshObjectDataNanite *)0x0) {
    (param_1->ComponentSpaceTransforms).ArrayNum = 0;
    if ((param_1->ComponentSpaceTransforms).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,0,&(param_1->ComponentSpaceTransforms).AllocatorInstance,0,
                 &(param_1->ComponentSpaceTransforms).ArrayMax);
    }
    iVar3 = (param_1->ComponentSpaceTransforms).ArrayMax;
    piVar1 = &(param_1->PreviousReferenceToLocal).ArrayMax;
    (param_1->PreviousReferenceToLocal).ArrayNum = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,0x10,0,&(param_1->PreviousReferenceToLocal).AllocatorInstance,0,piVar1);
    }
    iVar2 = (param_1->PreviousReferenceToLocal).ArrayMax;
    (param_1->ReferenceToLocal).ArrayNum = 0;
    if ((param_1->ReferenceToLocal).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,0x10,0,&(param_1->ReferenceToLocal).AllocatorInstance,0,
                 &(param_1->ReferenceToLocal).ArrayMax);
    }
    iVar3 = ((param_1->ReferenceToLocal).ArrayMax + iVar2) * 0x40 + iVar3 * 0x60 + 0x78;
    *(int *)((longlong)&param_1->_padding_ + 4) = iVar3;
    LOCK();
    Pool.NumFreeBytes = Pool.NumFreeBytes + (longlong)iVar3;
    UNLOCK();
    FSkeletalMeshDynamicDataPool::AddStatsMemory
              ((FSkeletalMeshDynamicDataPool *)&Pool,(int)param_1->_padding_,iVar3);
    this = (FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataNanite,0,1> *)
           TSkeletalMeshDynamicDataPool<FDynamicSkelMeshObjectDataNanite>::GetBucket
                     ((int)param_1->_padding_);
    FLockFreePointerFIFOBase<FDynamicSkelMeshObjectDataNanite,0,1>::Push(this,param_1);
  }
  return;
}

