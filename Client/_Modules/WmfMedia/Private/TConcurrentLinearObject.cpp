// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WmfMedia
// Functions: 1

// operator_delete @ 14ea983e0

void __cdecl
TConcurrentLinearObject<TGraphTask<TAsyncGraphTask<void>_>,FTaskGraphBlockAllocationTag>::
operator_delete(void *param_1)

{
  TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(param_1);
  return;
}

