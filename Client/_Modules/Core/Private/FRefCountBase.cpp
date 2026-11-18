// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// ~FRefCountBase @ 14158a0d0

void __thiscall FRefCountBase::~FRefCountBase(FRefCountBase *this)

{
  return;
}

// DeleteThis @ 1415bceb0

void __cdecl FRefCountBase::DeleteThis(TTransactionalAtomicRefCount<unsigned_int> *param_1)

{
  TTransactionalAtomicRefCount<unsigned_int> *pTVar1;
  
  pTVar1 = param_1 + -2;
  if (param_1 == (TTransactionalAtomicRefCount<unsigned_int> *)0x0) {
    pTVar1 = (TTransactionalAtomicRefCount<unsigned_int> *)0x0;
  }
  if (pTVar1 != (TTransactionalAtomicRefCount<unsigned_int> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001415bcecd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pTVar1)(pTVar1,1);
    return;
  }
  return;
}

