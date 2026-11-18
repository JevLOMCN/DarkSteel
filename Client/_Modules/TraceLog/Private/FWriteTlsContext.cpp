// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceLog
// Functions: 2

// ~FWriteTlsContext @ 14145d770

void __thiscall UE::Trace::Private::FWriteTlsContext::~FWriteTlsContext(FWriteTlsContext *this)

{
  FWriteBuffer *pFVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (GInitialized) {
    plVar3 = (longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x20)
    ;
    pFVar1 = (FWriteBuffer *)*plVar3;
    if (pFVar1 != &GNullWriteBuffer) {
      lVar2 = *plVar3;
      *(uint *)(lVar2 + 0x38) = (int)lVar2 - (uint)*pFVar1->Cursor;
    }
  }
  return;
}

// GetThreadId @ 14145e8d0

uint __thiscall UE::Trace::Private::FWriteTlsContext::GetThreadId(FWriteTlsContext *this)

{
  uint uVar1;
  
  uVar1 = this->ThreadId;
  if (uVar1 == 0) {
    LOCK();
    UNLOCK();
    uVar1 = ::Counter + 2;
    ::Counter = ::Counter + 1;
    this->ThreadId = uVar1;
  }
  return uVar1;
}

