// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 1

// FGeneratedMeshKey @ 14ab5e970

FGeneratedMeshKey * __thiscall
UE::Mutable::Private::FGeneratedMeshKey::FGeneratedMeshKey
          (FGeneratedMeshKey *this,FGeneratedMeshKey *param_1)

{
  TArray<unsigned_char,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  
  pTVar1 = &this->ParameterValuesBlob;
  this->Address = param_1->Address;
  piVar2 = &(this->ParameterValuesBlob).ArrayMax;
  (pTVar1->AllocatorInstance)._padding_ = 0;
  (this->ParameterValuesBlob).AllocatorInstance.AllocSize = 0;
  iVar3 = (param_1->ParameterValuesBlob).ArrayNum;
  _Src = (void *)(param_1->ParameterValuesBlob).AllocatorInstance._padding_;
  (this->ParameterValuesBlob).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    Core::Private::
    ReallocForCopy<3,UE::Mutable::Private::TMemoryTrackingAllocatorWrapper<TSizedDefaultAllocator<32>,UE::Mutable::Private::MemoryCounters::FInternalMemoryCounter>::ForAnyElementType>
              (1,1,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    memcpy((void *)(pTVar1->AllocatorInstance)._padding_,_Src,(longlong)iVar3);
  }
  return this;
}

