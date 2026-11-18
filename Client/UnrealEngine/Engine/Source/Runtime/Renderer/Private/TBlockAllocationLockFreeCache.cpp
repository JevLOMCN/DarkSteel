// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// Free @ 144facaa0

void __cdecl
TBlockAllocationLockFreeCache<65536,FAlignedAllocator>::Free(void *param_1,ulong64 param_2)

{
  FPageAllocator *this;
  
  if (param_2 == 0x10000) {
    this = FPageAllocator::Get();
    FPageAllocator::Free(this,param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000144facad9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,param_1);
  return;
}

