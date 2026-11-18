// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 1

// operator= @ 1441fa330

TWeakPtr<FTSTicker::FElement,1> * __thiscall
TWeakPtr<FTSTicker::FElement,1>::operator=
          (TWeakPtr<FTSTicker::FElement,1> *this,TWeakPtr<FTSTicker::FElement,1> *param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (FElement *)0x0;
    pTVar3 = (this->WeakReferenceCount).ReferenceController;
    (this->WeakReferenceCount).ReferenceController =
         (param_1->WeakReferenceCount).ReferenceController;
    (param_1->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar3->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
      }
    }
  }
  return this;
}

