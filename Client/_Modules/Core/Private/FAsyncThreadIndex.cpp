// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// GetNext @ 1414995c0

int __cdecl FAsyncThreadIndex::GetNext(void)

{
  FThreadSafeCounter FVar1;
  
  FVar1.Counter = ThreadIndex.Counter;
  LOCK();
  ThreadIndex.Counter = ThreadIndex.Counter + 1;
  UNLOCK();
  return FVar1.Counter;
}

