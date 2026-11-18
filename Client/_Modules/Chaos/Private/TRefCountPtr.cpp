// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// operator= @ 143a3afe0

TRefCountPtr<Chaos::FImplicitObject> * __thiscall
TRefCountPtr<Chaos::FImplicitObject>::operator=
          (TRefCountPtr<Chaos::FImplicitObject> *this,TRefCountPtr<Chaos::FImplicitObject> *param_1)

{
  longlong *plVar1;
  FImplicitObject *pFVar2;
  longlong lVar3;
  
  if (this != param_1) {
    pFVar2 = this->Reference;
    this->Reference = param_1->Reference;
    param_1->Reference = (FImplicitObject *)0x0;
    if (pFVar2 != (FImplicitObject *)0x0) {
      LOCK();
      plVar1 = &pFVar2->_padding_;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar3 == 1) && (*(int *)((longlong)&pFVar2->_padding_ + 4) == 0)) {
        (**(code **)pFVar2->_padding_)(pFVar2,1);
      }
    }
  }
  return this;
}

// operator= @ 144013160

TRefCountPtr<Chaos::FConvex> * __thiscall
TRefCountPtr<Chaos::FConvex>::operator=
          (TRefCountPtr<Chaos::FConvex> *this,TRefCountPtr<Chaos::FConvex> *param_1)

{
  longlong *plVar1;
  FConvex *pFVar2;
  longlong lVar3;
  
  if (this != param_1) {
    pFVar2 = this->Reference;
    this->Reference = param_1->Reference;
    param_1->Reference = (FConvex *)0x0;
    if (pFVar2 != (FConvex *)0x0) {
      LOCK();
      plVar1 = &pFVar2->_padding_;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar3 == 1) && (*(int *)((longlong)&pFVar2->_padding_ + 4) == 0)) {
        (**(code **)pFVar2->_padding_)(pFVar2,1);
      }
    }
  }
  return this;
}

