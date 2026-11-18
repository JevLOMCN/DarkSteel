// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 1

// FreeBuffer @ 145e9bc60

void __thiscall
UE::SharedBuffer::Private::TBufferOwnerTArray<unsigned_char,TSizedDefaultAllocator<64>_>::FreeBuffer
          (TBufferOwnerTArray<unsigned_char,TSizedDefaultAllocator<64>_> *this)

{
  long64 *plVar1;
  
  plVar1 = &(this->Array).ArrayMax;
  (this->Array).ArrayNum = 0;
  if (*plVar1 != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,0,&(this->Array).AllocatorInstance,0,plVar1);
  }
  return;
}

