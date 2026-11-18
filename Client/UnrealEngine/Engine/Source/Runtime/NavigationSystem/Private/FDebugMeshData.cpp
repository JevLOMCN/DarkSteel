// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 1

// FDebugMeshData @ 146dd39a0

FDebugMeshData * __thiscall
FNavMeshSceneProxyData::FDebugMeshData::FDebugMeshData(FDebugMeshData *this,FDebugMeshData *param_1)

{
  int *piVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  piVar1 = &(this->Vertices).ArrayMax;
  (this->Vertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Vertices).ArrayNum;
  pFVar4 = (param_1->Vertices).AllocatorInstance.Data;
  (this->Vertices).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,4,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    memcpy((this->Vertices).AllocatorInstance.Data,pFVar4,(longlong)iVar3 * 0x58);
  }
  pTVar2 = &this->Indices;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Indices).ArrayMax;
  iVar3 = (param_1->Indices).ArrayNum;
  pFVar4 = (param_1->Indices).AllocatorInstance.Data;
  (this->Indices).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((pTVar2->AllocatorInstance).Data,pFVar4,(longlong)iVar3 << 2);
  }
  (this->ClusterColor).field0_0x0 = (param_1->ClusterColor).field0_0x0;
  return this;
}

