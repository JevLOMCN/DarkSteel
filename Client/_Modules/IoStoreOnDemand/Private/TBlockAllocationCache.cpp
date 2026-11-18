// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 1

// Free @ 1445cf8d0

void __cdecl TBlockAllocationCache<4096,FAlignedAllocator>::Free(void *param_1,ulong64 param_2)

{
  longlong lVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  if (param_2 == 0x1000) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(uint *)(lVar1 + 0xe84) & 1) == 0) {
      *(uint *)(lVar1 + 0xe84) = *(uint *)(lVar1 + 0xe84) | 1;
      __tlregdtor(`TBlockAllocationCache<4096,FAlignedAllocator>::SwapBlock'::__l2::
                  _dynamic_atexit_destructor_for__Tls__);
    }
    pvVar2 = *(void **)(lVar1 + 0xe68);
    *(void **)(lVar1 + 0xe68) = param_1;
    if (pvVar2 == (void *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001445cf944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar2);
  return;
}

