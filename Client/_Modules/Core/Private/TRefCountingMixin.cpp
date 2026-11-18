// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// StaticDestroyMixin @ 14177e990

void __cdecl
TRefCountingMixin<UE::Text::Private::FRefCountedDisplayString,1>::StaticDestroyMixin
          (TTransactionalAtomicRefCount<unsigned_int> *param_1)

{
  if (param_1 != (TTransactionalAtomicRefCount<unsigned_int> *)0x0) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      FMemory::Free(*(void **)(param_1 + 2));
    }
    ::operator_delete(param_1,0x18);
  }
  return;
}

// StaticDestroyMixin @ 14177e9d0

void __cdecl
TRefCountingMixin<FTextHistory,1>::StaticDestroyMixin
          (TTransactionalAtomicRefCount<unsigned_int> *param_1)

{
  TTransactionalAtomicRefCount<unsigned_int> *pTVar1;
  
  pTVar1 = param_1 + -2;
  if (param_1 == (TTransactionalAtomicRefCount<unsigned_int> *)0x0) {
    pTVar1 = (TTransactionalAtomicRefCount<unsigned_int> *)0x0;
  }
  if (pTVar1 != (TTransactionalAtomicRefCount<unsigned_int> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014177e9ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pTVar1)(pTVar1,1);
    return;
  }
  return;
}

