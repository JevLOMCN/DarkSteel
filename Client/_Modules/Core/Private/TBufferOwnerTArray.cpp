// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FreeBuffer @ 1419fb7f0

void __thiscall
UE::SharedBuffer::Private::
TBufferOwnerTArray<enum_ECbFieldType,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::
FreeBuffer(void *this)

{
  *(undefined4 *)((longlong)this + 0x30) = 0;
  if (*(int *)((longlong)this + 0x34) != 0) {
    Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_ECbFieldType>_>
              (1,1,0,(ForElementType<ECbFieldType> *)((longlong)this + 0x20),0,
               (int *)((longlong)this + 0x34));
  }
  return;
}

// FreeBuffer @ 141c93f80

void __thiscall
UE::SharedBuffer::Private::TBufferOwnerTArray<unsigned_short,TSizedDefaultAllocator<32>_>::
FreeBuffer(TBufferOwnerTArray<unsigned_short,TSizedDefaultAllocator<32>_> *this)

{
  int *piVar1;
  
  piVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*piVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,0,&(this->Array).AllocatorInstance,0,piVar1);
  }
  return;
}

