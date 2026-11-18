// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWriteQueue
// Functions: 1

// Wait @ 1446efd60

void __thiscall TFutureBase<void>::Wait(TFutureBase<void> *this)

{
  TFutureState<void> *pTVar1;
  longlong *plVar2;
  char cVar3;
  
  if ((this->State).Object != (TFutureState<void> *)0x0) {
    do {
      do {
        pTVar1 = (this->State).Object;
      } while (pTVar1 == (TFutureState<void> *)0x0);
      plVar2 = *(longlong **)&pTVar1->field_0x60;
      cVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,0xffffffff,0);
    } while (cVar3 == '\0');
  }
  return;
}

