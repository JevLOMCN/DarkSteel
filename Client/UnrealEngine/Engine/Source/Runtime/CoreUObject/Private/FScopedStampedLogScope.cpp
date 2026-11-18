// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// Deinit @ 142317b10

void __thiscall UE::Trace::Private::FScopedStampedLogScope::Deinit(FScopedStampedLogScope *this)

{
  longlong lVar1;
  ulong64 uVar2;
  FWriteBuffer *pFVar3;
  longlong lVar4;
  
  if (this->bActive != false) {
    uVar2 = TimeGetTimestamp();
    lVar4 = uVar2 - GStartCycle;
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar3 = *(FWriteBuffer **)(lVar1 + 0x20);
    if ((int)pFVar3 - *(int *)&pFVar3->Cursor < 8) {
      pFVar3 = Writer_NextBuffer();
    }
    *(longlong *)pFVar3->Cursor = lVar4 * 0x100 + 0x12;
    pFVar3->Cursor = pFVar3->Cursor + 8;
    pFVar3->Committed = pFVar3->Cursor;
  }
  return;
}

