// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// FreeBuffer @ 141f2fd60

void __thiscall
UE::SharedBuffer::Private::
TBufferOwnerDeleteFunction<`FSharedBuffer::TakeOwnership<void_(__cdecl&)(void_*),0>'::__l2::<lambda_1>_>
::FreeBuffer(void *this)

{
  if ((*(ulonglong *)((longlong)this + 0x18) >> 0x3c & 4) == 0) {
    (**(code **)(*(longlong *)this + 8))();
  }
  if ((*(ulonglong *)((longlong)this + 0x18) >> 0x3c & 4) == 0) {
    (**(code **)(*(longlong *)this + 8))(this);
  }
                    /* WARNING: Could not recover jumptable at 0x000141f2fd9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)this + 0x20))(*(undefined8 *)((longlong)this + 8));
  return;
}

