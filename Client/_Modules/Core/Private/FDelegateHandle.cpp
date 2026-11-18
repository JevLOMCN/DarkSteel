// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// GenerateNewID @ 1415c4af0

ulong64 __cdecl FDelegateHandle::GenerateNewID(void)

{
  TAtomic<unsigned___int64> TVar1;
  ulong64 uVar2;
  
  LOCK();
  UNLOCK();
  uVar2 = (longlong)UE::Delegates::Private::GNextID + 1;
  TVar1 = (TAtomic<unsigned___int64>)((longlong)UE::Delegates::Private::GNextID + 1);
  if (uVar2 == 0) {
    LOCK();
    UNLOCK();
    uVar2 = (longlong)UE::Delegates::Private::GNextID + 2;
    TVar1 = (TAtomic<unsigned___int64>)((longlong)UE::Delegates::Private::GNextID + 2);
  }
  UE::Delegates::Private::GNextID = TVar1;
  return uVar2;
}

