// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 2

// ~TSortableMapBase<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>_> @ 14e15ee50

void __thiscall
TSortableMapBase<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>_>
::
~TSortableMapBase<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>_>
          (TSortableMapBase<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo,0>_>
           *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UComputeDataInterface_const_,FWeakObjectPtr>,FOptimusDataInterfacePropertyOverrideInfo>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// ~TSortableMapBase<FOptimusInstancedPin,FOptimusInstancedPin,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,FOptimusInstancedPin,0>_> @ 14e15ee90

void __thiscall
TSortableMapBase<FOptimusInstancedPin,FOptimusInstancedPin,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,FOptimusInstancedPin,0>_>
::
~TSortableMapBase<FOptimusInstancedPin,FOptimusInstancedPin,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,FOptimusInstancedPin,0>_>
          (TSortableMapBase<FOptimusInstancedPin,FOptimusInstancedPin,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOptimusInstancedPin,FOptimusInstancedPin,0>_>
           *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FOptimusInstancedPin,FOptimusInstancedPin>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FOptimusInstancedPin,FOptimusInstancedPin>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FOptimusInstancedPin,FOptimusInstancedPin>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

