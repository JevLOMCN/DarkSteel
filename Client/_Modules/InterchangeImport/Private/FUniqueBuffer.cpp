// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeImport
// Functions: 1

// ~FUniqueBuffer @ 14e691bc0

void __thiscall FUniqueBuffer::~FUniqueBuffer(FUniqueBuffer *this)

{
  atomic<unsigned___int64> *paVar1;
  atomic<unsigned___int64> aVar2;
  FBufferOwner *pFVar3;
  
  pFVar3 = (this->Owner).Owner;
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
                    /* WARNING: Could not recover jumptable at 0x00014e691c23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)pFVar3->_padding_)(pFVar3,1);
        return;
      }
    }
  }
  return;
}

