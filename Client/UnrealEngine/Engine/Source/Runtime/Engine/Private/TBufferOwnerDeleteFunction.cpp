// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FreeBuffer @ 14888a540

void __thiscall
UE::SharedBuffer::Private::
TBufferOwnerDeleteFunction<`FUniqueBuffer::TakeOwnership<`UTexture2DArray::GetMipData'::__l32::<lambda_1>,0>'::__l2::<lambda_1>_>
::FreeBuffer(void *this)

{
  if ((*(ulonglong *)((longlong)this + 0x18) >> 0x3c & 4) == 0) {
    (**(code **)(*(longlong *)this + 8))();
  }
  if ((*(ulonglong *)((longlong)this + 0x18) >> 0x3c & 4) == 0) {
    (**(code **)(*(longlong *)this + 8))(this);
  }
  FMemory::Free(*(void **)((longlong)this + 8));
  return;
}

