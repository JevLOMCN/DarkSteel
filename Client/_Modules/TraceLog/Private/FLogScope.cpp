// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceLog
// Functions: 4

// EnterImpl<4> @ 14145d060

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::EnterImpl<4>
          (TLogScope<0> *__return_storage_ptr__,uint param_1,uint param_2)

{
  EnterNoSync((FLogScope *)__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// EnterImpl<0> @ 14145d080

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::EnterImpl<0>
          (TLogScope<0> *__return_storage_ptr__,uint param_1,uint param_2)

{
  Enter((FLogScope *)__return_storage_ptr__,param_1,param_2);
  return __return_storage_ptr__;
}

// Enter @ 14145dd90

void __thiscall UE::Trace::Private::FLogScope::Enter(FLogScope *this,uint param_1,uint param_2)

{
  uchar **ppuVar1;
  longlong lVar2;
  code *pcVar3;
  FWriteBuffer *pFVar4;
  uint uVar5;
  
  uVar5 = param_2 + 5;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pFVar4 = *(FWriteBuffer **)(lVar2 + 0x20);
  this->Buffer = pFVar4;
  if (pFVar4 < (FWriteBuffer *)(pFVar4->Cursor + uVar5)) {
    pFVar4 = Writer_NextBuffer();
    this->Buffer = pFVar4;
  }
  if (pFVar4->Size <= uVar5) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this->Ptr = this->Buffer->Cursor + 5;
  ppuVar1 = &this->Buffer->Cursor;
  *ppuVar1 = *ppuVar1 + uVar5;
  LOCK();
  UNLOCK();
  uVar5 = GLogSerial + 1;
  *(uint *)(this->Ptr + -3) = GLogSerial;
  GLogSerial = uVar5;
  *(ushort *)(this->Ptr + -5) = (ushort)param_1 | 1;
  return;
}

// EnterNoSync @ 14145dfe0

void __thiscall
UE::Trace::Private::FLogScope::EnterNoSync(FLogScope *this,uint param_1,uint param_2)

{
  uchar **ppuVar1;
  longlong lVar2;
  code *pcVar3;
  FWriteBuffer *pFVar4;
  uint uVar5;
  
  uVar5 = param_2 + 2;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pFVar4 = *(FWriteBuffer **)(lVar2 + 0x20);
  this->Buffer = pFVar4;
  if (pFVar4 < (FWriteBuffer *)(pFVar4->Cursor + uVar5)) {
    pFVar4 = Writer_NextBuffer();
    this->Buffer = pFVar4;
  }
  if (pFVar4->Size <= uVar5) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this->Ptr = this->Buffer->Cursor + 2;
  ppuVar1 = &this->Buffer->Cursor;
  *ppuVar1 = *ppuVar1 + uVar5;
  *(ushort *)(this->Ptr + -2) = (ushort)param_1 | 1;
  return;
}

