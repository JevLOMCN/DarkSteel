// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 1

// GenerateNewHandle @ 14d4fac90

FScheduledTickHandle __cdecl UE::StateTree::FScheduledTickHandle::GenerateNewHandle(void)

{
  int *in_RCX;
  int iVar1;
  
  LOCK();
  UNLOCK();
  iVar1 = (int)::Value + 1;
  if (iVar1 == 0) {
    LOCK();
    UNLOCK();
    iVar1 = (int)::Value + 2;
    ::Value = (atomic<unsigned_int>)((int)::Value + 2);
    *in_RCX = iVar1;
    return (FScheduledTickHandle)(uint)in_RCX;
  }
  ::Value = (atomic<unsigned_int>)((int)::Value + 1);
  *in_RCX = iVar1;
  return (FScheduledTickHandle)(uint)in_RCX;
}

