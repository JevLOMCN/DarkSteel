// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_WorldUtils
// Functions: 1

// Reset @ 14a039450

void __thiscall
TOptional<TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>_>
::Reset(TOptional<TSet<FPrimitiveComponentId,DefaultKeyFuncs<FPrimitiveComponentId,0>,FDefaultSetAllocator>_>
        *this)

{
  void *pvVar1;
  
  if (*(int *)((longlong)&this->field0_0x0 + 0xc) != -1) {
    (this->field0_0x0).TypedValue.HashSize = 0;
    pvVar1 = *(void **)((longlong)&this->field0_0x0 + 0x40);
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<FPrimitiveComponentId>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this);
    *(undefined8 *)&this->field0_0x0 = 0;
    *(undefined4 *)((longlong)&this->field0_0x0 + 8) = 0;
    *(undefined8 *)((longlong)&this->field0_0x0 + 0x20) = 0;
    *(undefined4 *)((longlong)&this->field0_0x0 + 0xc) = 0xffffffff;
    *(undefined4 *)((longlong)&this->field0_0x0 + 0x28) = 0;
    *(undefined4 *)((longlong)&this->field0_0x0 + 0x2c) = 0x80;
    *(undefined4 *)((longlong)&this->field0_0x0 + 0x34) = 0;
    *(undefined4 *)((longlong)&this->field0_0x0 + 0x30) = 0xffffffff;
    *(undefined8 *)((longlong)&this->field0_0x0 + 0x40) = 0;
    (this->field0_0x0).TypedValue.HashSize = 0;
  }
  return;
}

