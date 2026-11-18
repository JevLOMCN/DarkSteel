// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FreeBuffer @ 141823a40

void __thiscall UE::SharedBuffer::Private::FBufferOwnerHeap::FreeBuffer(FBufferOwnerHeap *this)

{
  if ((*(ulonglong *)&this->field_0x18 >> 0x3c & 4) == 0) {
    (**(code **)(*(longlong *)this + 8))();
  }
  FMemory::Free(*(void **)&this->field_0x8);
  return;
}

