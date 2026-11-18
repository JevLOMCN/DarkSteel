// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 3

// DoesChunkExist @ 142138230

bool __thiscall
IIoDispatcherBackend::DoesChunkExist
          (IIoDispatcherBackend *this,FIoChunkId *param_1,FIoOffsetAndLength *param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142138233. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*this + 0x38))();
  return (bool)uVar1;
}

// GetSizeForChunk @ 14213ec30

TIoStatusOr<unsigned___int64> * __thiscall
IIoDispatcherBackend::GetSizeForChunk
          (IIoDispatcherBackend *this,TIoStatusOr<unsigned___int64> *__return_storage_ptr__,
          FIoChunkId *param_1,FIoOffsetAndLength *param_2,ulong64 *param_3)

{
  (**(code **)((longlong)*this + 0x48))();
  if ((__return_storage_ptr__->StatusValue).ErrorCode == Ok) {
    *param_3 = *(ulong64 *)(__return_storage_ptr__->Value).Pad;
    return __return_storage_ptr__;
  }
  *param_3 = 0;
  return __return_storage_ptr__;
}

// Shutdown @ 142151930

void __thiscall IIoDispatcherBackend::Shutdown(IIoDispatcherBackend *this)

{
  return;
}

