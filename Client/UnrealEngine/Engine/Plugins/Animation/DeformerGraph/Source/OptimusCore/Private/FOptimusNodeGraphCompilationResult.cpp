// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 1

// ~FOptimusNodeGraphCompilationResult @ 14e1619f0

void __thiscall
FOptimusNodeGraphCompilationResult::~FOptimusNodeGraphCompilationResult
          (FOptimusNodeGraphCompilationResult *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->ValueMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ValueMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FOptimusValueIdentifier,FOptimusValueDescription>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ValueMap);
  *(undefined4 *)&(this->DataInterfacePropertyOverrideMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DataInterfacePropertyOverrideMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DataInterfacePropertyOverrideMap);
  pFVar2 = (this->ComputeGraphInfos).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

