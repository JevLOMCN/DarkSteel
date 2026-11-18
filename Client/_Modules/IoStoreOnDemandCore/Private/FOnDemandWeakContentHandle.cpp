// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemandCore
// Functions: 1

// FromUnsafeHandle @ 14458c100

FOnDemandWeakContentHandle * __cdecl
UE::IoStore::FOnDemandWeakContentHandle::FromUnsafeHandle
          (FOnDemandWeakContentHandle *__return_storage_ptr__,ulong64 param_1)

{
  wchar_t *pwVar1;
  
  __return_storage_ptr__->HandleId = param_1;
  pwVar1 = *(wchar_t **)param_1;
  (__return_storage_ptr__->DebugName).Chars = pwVar1;
  if (pwVar1 != (wchar_t *)0x0) {
    LOCK();
    *(int *)(pwVar1 + -4) = *(int *)(pwVar1 + -4) + 1;
    UNLOCK();
  }
  return __return_storage_ptr__;
}

