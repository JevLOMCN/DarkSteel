// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 2

// FMeshBuffer @ 14aa92e50

FMeshBuffer * __thiscall
UE::Mutable::Private::FMeshBuffer::FMeshBuffer(FMeshBuffer *this,FMeshBuffer *param_1)

{
  int *piVar1;
  TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FMeshMemoryCounter>_>
  *pTVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  void *_Src_00;
  
  piVar1 = &(this->Channels).ArrayMax;
  (this->Channels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (param_1->Channels).ArrayNum;
  _Src = (param_1->Channels).AllocatorInstance.Data;
  (this->Channels).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar3,0,(ForAnyElementType *)this,iVar3,piVar1);
    memcpy((this->Channels).AllocatorInstance.Data,_Src,(longlong)iVar3 << 4);
  }
  pTVar2 = &this->Data;
  (pTVar2->AllocatorInstance)._padding_ = 0;
  piVar1 = &(this->Data).ArrayMax;
  (this->Data).AllocatorInstance.AllocSize = 0;
  iVar3 = (param_1->Data).ArrayNum;
  _Src_00 = (void *)(param_1->Data).AllocatorInstance._padding_;
  (this->Data).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::
    ReallocForCopy<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FMeshMemoryCounter>::ForAnyElementType>
              (1,1,iVar3,0,&pTVar2->AllocatorInstance,iVar3,piVar1);
    memcpy((void *)(pTVar2->AllocatorInstance)._padding_,_Src_00,(longlong)iVar3);
  }
  this->ElementSize = param_1->ElementSize;
  return this;
}

// Serialise @ 14aaf4990

void __thiscall
UE::Mutable::Private::FMeshBuffer::Serialise(FMeshBuffer *this,FOutputArchive *param_1)

{
  uint local_res8 [2];
  
  local_res8[0] = (this->Channels).ArrayNum;
  Private::operator<<(param_1,local_res8);
  if (local_res8[0] != 0) {
    (**(code **)((longlong)*param_1->Stream + 8))
              (param_1->Stream,(this->Channels).AllocatorInstance.Data,(ulonglong)local_res8[0] << 4
              );
  }
  local_res8[0] = (this->Data).ArrayNum;
  Private::operator<<(param_1,local_res8);
  if (local_res8[0] != 0) {
    (**(code **)((longlong)*param_1->Stream + 8))
              (param_1->Stream,(this->Data).AllocatorInstance._padding_,local_res8[0]);
  }
  Private::operator<<(param_1,&this->ElementSize);
  return;
}

