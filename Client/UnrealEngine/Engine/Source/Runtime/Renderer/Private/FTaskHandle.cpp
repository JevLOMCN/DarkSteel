// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// operator= @ 145521ae0

FTaskHandle * __thiscall
UE::Tasks::Private::FTaskHandle::operator=(FTaskHandle *this,FTaskHandle *param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *pFVar3;
  FTaskBase *pFVar4;
  
  pFVar3 = (param_1->Pimpl).Reference;
  pFVar4 = (this->Pimpl).Reference;
  if (pFVar4 != pFVar3) {
    (this->Pimpl).Reference = pFVar3;
    if (pFVar3 != (FTaskBase *)0x0) {
      LOCK();
      pFVar3->RefCount = (atomic<unsigned_int>)((int)pFVar3->RefCount + 1);
      UNLOCK();
    }
    if (pFVar4 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &pFVar4->RefCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar4->_padding_)(pFVar4,1);
      }
    }
  }
  return this;
}

