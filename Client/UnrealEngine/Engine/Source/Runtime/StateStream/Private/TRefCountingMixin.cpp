// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateStream
// Functions: 1

// StaticDestroyMixin @ 143128ef0

void __cdecl
TRefCountingMixin<FTransformObject,1>::StaticDestroyMixin
          (TTransactionalAtomicRefCount<unsigned_int> *param_1)

{
  TTransactionalAtomicRefCount<unsigned_int> *pTVar1;
  
  pTVar1 = param_1 + -6;
  if (param_1 == (TTransactionalAtomicRefCount<unsigned_int> *)0x0) {
    pTVar1 = (TTransactionalAtomicRefCount<unsigned_int> *)0x0;
  }
  if (pTVar1 != (TTransactionalAtomicRefCount<unsigned_int> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143128f0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pTVar1 + 8))(pTVar1,1);
    return;
  }
  return;
}

