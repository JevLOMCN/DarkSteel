// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Malloc @ 1417e2d90

void * __cdecl FAlignedAllocator::Malloc(ulong64 param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  if (UE::Private::GMalloc == (FMalloc *)0x0) {
    pvVar3 = FMemory::Malloc(0,0);
    FMemory::Free(pvVar3);
    if ((UE::Private::GMalloc == (FMalloc *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("UE::Private::GMalloc",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Experimental\\ConcurrentLinearAllocator.h"
                           ,0x31,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001417e2e06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar3 = (void *)(**(code **)((longlong)*UE::Private::GMalloc + 0x28))
                             (UE::Private::GMalloc,param_1,param_2);
  return pvVar3;
}

