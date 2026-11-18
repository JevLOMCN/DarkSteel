// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// Free @ 1414963c0

void __cdecl TBlockAllocationCache<65536,FAlignedAllocator>::Free(void *param_1,ulong64 param_2)

{
  longlong lVar1;
  void *pvVar2;
  
  pvVar2 = param_1;
  if (param_2 == 0x10000) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(uint *)(lVar1 + 0x84) & 1) == 0) {
      *(uint *)(lVar1 + 0x84) = *(uint *)(lVar1 + 0x84) | 1;
      __tlregdtor(`TBlockAllocationCache<65536,FAlignedAllocator>::SwapBlock'::__l2::
                  _dynamic_atexit_destructor_for__Tls__);
    }
    pvVar2 = *(void **)(lVar1 + 0x68);
    *(void **)(lVar1 + 0x68) = param_1;
    if (pvVar2 == (void *)0x0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000141496434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar2);
  return;
}

// Malloc @ 1414a3ea0

void * __cdecl TBlockAllocationCache<65536,FAlignedAllocator>::Malloc(ulong64 param_1,uint param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  if (param_1 == 0x10000) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if ((*(uint *)(lVar1 + 0x84) & 1) == 0) {
      *(uint *)(lVar1 + 0x84) = *(uint *)(lVar1 + 0x84) | 1;
      __tlregdtor(`TBlockAllocationCache<65536,FAlignedAllocator>::SwapBlock'::__l2::
                  _dynamic_atexit_destructor_for__Tls__);
    }
    pvVar4 = *(void **)(lVar1 + 0x68);
    *(undefined8 *)(lVar1 + 0x68) = 0;
    if (pvVar4 != (void *)0x0) {
      return pvVar4;
    }
  }
  if (UE::Private::GMalloc == (FMalloc *)0x0) {
    pvVar4 = FMemory::Malloc(0,0);
    FMemory::Free(pvVar4);
    if ((UE::Private::GMalloc == (FMalloc *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("UE::Private::GMalloc",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Experimental\\ConcurrentLinearAllocator.h"
                           ,0x31,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  pvVar4 = (void *)(**(code **)((longlong)*UE::Private::GMalloc + 0x28))
                             (UE::Private::GMalloc,param_1,param_2);
  return pvVar4;
}

