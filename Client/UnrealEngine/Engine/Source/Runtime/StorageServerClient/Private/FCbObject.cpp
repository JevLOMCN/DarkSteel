// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 1

// FCbObject<FCbFieldView> @ 148cac790

FCbObject * __thiscall
FCbObject::FCbObject<FCbFieldView>
          (FCbObject *this,FCbObjectView *param_1,TCbBuffer<FCbFieldView> *param_2)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FBufferOwner *pFVar3;
  FBufferOwner *local_res8;
  
  local_res8 = (param_2->Buffer).Owner.Owner;
  (param_2->Buffer).Owner.Owner = (FBufferOwner *)0x0;
  TCbBuffer<FCbObjectView>::TCbBuffer<FCbObjectView>
            ((TCbBuffer<FCbObjectView> *)this,param_1,(FSharedBuffer)&local_res8);
  pFVar3 = (param_2->Buffer).Owner.Owner;
  if (pFVar3 != (FBufferOwner *)0x0) {
    LOCK();
    paVar1 = &pFVar3->ReferenceCountsAndFlags;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -1);
    UNLOCK();
    if ((aVar2._0_4_ & 0x3fffffff) == 1) {
      (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3);
      pFVar3->Data = (void *)0x0;
      pFVar3->Size = 0;
      LOCK();
      paVar1 = &pFVar3->ReferenceCountsAndFlags;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned___int64>)((longlong)*paVar1 + -0x40000000);
      UNLOCK();
      if (((uint)((ulonglong)aVar2 >> 0x1e) & 0x3fffffff) == 1) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
  }
  return this;
}

