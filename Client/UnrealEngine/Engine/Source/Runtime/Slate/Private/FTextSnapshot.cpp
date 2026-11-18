// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// ~FTextSnapshot @ 1429bf150

void __thiscall FTextSnapshot::~FTextSnapshot(FTextSnapshot *this)

{
  int iVar1;
  TDisplayStringPtr<FString_const_> TVar2;
  ITextData *pIVar3;
  
  TVar2 = this->LocalizedStringPtr;
  if (TVar2 != (TDisplayStringPtr<FString_const_>)0x0) {
    LOCK();
    iVar1 = *(int *)TVar2;
    *(int *)TVar2 = *(int *)TVar2 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      if (*(void **)((longlong)TVar2 + 8) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)TVar2 + 8));
      }
      ::operator_delete((void *)TVar2,0x18);
    }
  }
  pIVar3 = (this->TextDataPtr).Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  return;
}

