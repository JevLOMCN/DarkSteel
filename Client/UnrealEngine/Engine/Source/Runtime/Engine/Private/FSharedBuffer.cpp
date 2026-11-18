// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// GetData @ 148529680

void * __thiscall FSharedBuffer::GetData(FSharedBuffer *this)

{
  FBufferOwner *pFVar1;
  
  pFVar1 = (this->Owner).Owner;
  if (pFVar1 != (FBufferOwner *)0x0) {
    if (((ulonglong)pFVar1->ReferenceCountsAndFlags >> 0x3c & 4) == 0) {
      (**(code **)(pFVar1->_padding_ + 8))(pFVar1);
    }
    return pFVar1->Data;
  }
  return (void *)0x0;
}

