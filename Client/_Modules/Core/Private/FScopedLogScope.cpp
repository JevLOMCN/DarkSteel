// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Deinit @ 141990fa0

void __thiscall UE::Trace::Private::FScopedLogScope::Deinit(FScopedLogScope *this)

{
  longlong lVar1;
  FWriteBuffer *pFVar2;
  
  if (this->bActive != false) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar2 = *(FWriteBuffer **)(lVar1 + 0x20);
    if ((int)pFVar2 - *(int *)&pFVar2->Cursor < 1) {
      pFVar2 = Writer_NextBuffer();
    }
    *pFVar2->Cursor = '\n';
    pFVar2->Cursor = pFVar2->Cursor + 1;
    pFVar2->Committed = pFVar2->Cursor;
  }
  return;
}

