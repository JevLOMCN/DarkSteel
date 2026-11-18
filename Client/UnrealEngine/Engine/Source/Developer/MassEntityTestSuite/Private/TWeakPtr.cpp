// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 3

// TWeakPtr<int,1><int> @ 1470cf800

TWeakPtr<int,1> * __thiscall
TWeakPtr<int,1>::TWeakPtr<int,1><int>(TWeakPtr<int,1> *this,TSharedPtr<int,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  
  this->Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->WeakReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->WeakReferenceCount = (atomic<int>)((int)pTVar1->WeakReferenceCount + 1);
    UNLOCK();
  }
  return this;
}

// TWeakPtr<int,1> @ 1470f22d0

TWeakPtr<int,1> * __thiscall
TWeakPtr<int,1>::TWeakPtr<int,1>(TWeakPtr<int,1> *this,TWeakPtr<int,1> *param_1)

{
  this->Object = param_1->Object;
  (this->WeakReferenceCount).ReferenceController = (param_1->WeakReferenceCount).ReferenceController
  ;
  (param_1->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (int *)0x0;
  return this;
}

// ~TWeakPtr<int,1> @ 1470f7e90

void __thiscall TWeakPtr<int,1>::~TWeakPtr<int,1>(TWeakPtr<int,1> *this)

{
  SharedPointerInternals::FWeakReferencer<1>::~FWeakReferencer<1>(&this->WeakReferenceCount);
  return;
}

