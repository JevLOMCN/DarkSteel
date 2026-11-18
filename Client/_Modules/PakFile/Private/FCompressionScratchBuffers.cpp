// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 1

// EnsureBufferSpace @ 142a6be10

void __thiscall
FCompressionScratchBuffers::EnsureBufferSpace
          (FCompressionScratchBuffers *this,long64 param_1,long64 param_2)

{
  uchar *puVar1;
  uchar *puVar2;
  TUniquePtr<unsigned_char_[0],TDefaultDelete<unsigned_char_[0]>_> *pTVar3;
  undefined8 local_18;
  undefined8 local_10;
  
  if (this->TempBufferSize < param_1) {
    this->TempBufferSize = param_1;
    puVar2 = operator_new__(param_1);
    if (puVar2 == (uchar *)0x0) {
      puVar2 = (uchar *)0x0;
    }
    else {
      memset(puVar2,0,param_1);
    }
    pTVar3 = &this->TempBuffer;
    if (pTVar3 != (TUniquePtr<unsigned_char_[0],TDefaultDelete<unsigned_char_[0]>_> *)&local_18) {
      puVar1 = pTVar3->Ptr;
      pTVar3->Ptr = puVar2;
      puVar2 = (uchar *)0x0;
      operator_delete__(puVar1);
    }
    operator_delete__(puVar2);
  }
  if (this->ScratchBufferSize < param_2) {
    this->ScratchBufferSize = param_2;
    puVar2 = operator_new__(param_2);
    if (puVar2 == (uchar *)0x0) {
      puVar2 = (uchar *)0x0;
    }
    else {
      memset(puVar2,0,param_2);
    }
    pTVar3 = &this->ScratchBuffer;
    if (pTVar3 != (TUniquePtr<unsigned_char_[0],TDefaultDelete<unsigned_char_[0]>_> *)&local_10) {
      puVar1 = pTVar3->Ptr;
      pTVar3->Ptr = puVar2;
      puVar2 = (uchar *)0x0;
      operator_delete__(puVar1);
    }
    operator_delete__(puVar2);
  }
  return;
}

