// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 3

// ~FGenericAccessibleUser @ 1423c6810

void __thiscall FGenericAccessibleUser::~FGenericAccessibleUser(FGenericAccessibleUser *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->FocusedAccessibleWidget).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x0001423c6830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      return;
    }
  }
  return;
}

// OnRegistered @ 1423f1290

void __thiscall FGenericAccessibleUser::OnRegistered(FGenericAccessibleUser *this)

{
  return;
}

// OnUnregistered @ 1423f1b30

void __thiscall FGenericAccessibleUser::OnUnregistered(FGenericAccessibleUser *this)

{
  return;
}

