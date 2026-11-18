// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// ResetInputIterationData @ 149c335b0

void __thiscall
FPCGSkinnedMeshSpawnerContext::ResetInputIterationData(FPCGSkinnedMeshSpawnerContext *this)

{
  int *piVar1;
  int iVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  FPCGSoftSkinnedMeshComponentDescriptor *pFVar4;
  
  this->bCurrentInputSetup = false;
  this->bSelectionDone = false;
  this->CurrentPointData = (UPCGPointData *)0x0;
  this->CurrentOutputPointData = (UPCGPointData *)0x0;
  this->bPartitionDone = false;
  FPCGMeshMaterialOverrideHelper::Reset(&this->MaterialOverrideHelper);
  this->CurrentPointIndex = 0;
  TSet<TTuple<TSoftObjectPtr<USkinnedAsset>,int>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<USkinnedAsset>,int,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TSoftObjectPtr<USkinnedAsset>,int>,TDefaultMapHashableKeyFuncs<TSoftObjectPtr<USkinnedAsset>,int,0>,FDefaultSetAllocator>
           *)&this->MeshToValueKey);
  piVar1 = &(this->AttributeOverridePartition).ArrayMax;
  pTVar3 = (TArray<int,TSizedDefaultAllocator<32>_> *)
           (this->AttributeOverridePartition).AllocatorInstance.Data;
  iVar2 = (this->AttributeOverridePartition).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar3,iVar2);
    (this->AttributeOverridePartition).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->AttributeOverridePartition).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTVar3,iVar2);
    (this->AttributeOverridePartition).ArrayNum = 0;
  }
  piVar1 = &(this->OverriddenDescriptors).ArrayMax;
  pFVar4 = (FPCGSoftSkinnedMeshComponentDescriptor *)
           (this->OverriddenDescriptors).AllocatorInstance.Data;
  iVar2 = (this->OverriddenDescriptors).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<FPCGSoftSkinnedMeshComponentDescriptor,int>(pFVar4,iVar2);
    (this->OverriddenDescriptors).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xd8,8,0,&(this->OverriddenDescriptors).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FPCGSoftSkinnedMeshComponentDescriptor,int>(pFVar4,iVar2);
    (this->OverriddenDescriptors).ArrayNum = 0;
  }
  return;
}

