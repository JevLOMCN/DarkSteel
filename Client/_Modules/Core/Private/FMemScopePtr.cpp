// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FMemScopePtr @ 141986a50

FMemScopePtr * __thiscall
FMemScopePtr::FMemScopePtr(FMemScopePtr *this,ulong64 param_1,uint param_2)

{
  ulong64 *local_18;
  longlong local_10;
  
  (this->Inner).bActive = false;
  if ((param_1 != 0) && (-1 < MemAllocChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMemoryMemoryScopePtrFields>
              ((TLogScope<0> *)&local_18);
    if ((this->Inner).bActive == false) {
      (this->Inner).bActive = true;
    }
    *local_18 = param_1;
    *(char *)(local_18 + 1) = (char)param_2;
    *(undefined8 *)(local_10 + 0x28) = *(undefined8 *)(local_10 + 0x20);
  }
  return this;
}

// ~FMemScopePtr @ 141987ff0

void __thiscall FMemScopePtr::~FMemScopePtr(FMemScopePtr *this)

{
  longlong lVar1;
  FWriteBuffer *pFVar2;
  
  if ((this->Inner).bActive != false) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar2 = *(FWriteBuffer **)(lVar1 + 0x20);
    if ((int)pFVar2 - *(int *)&pFVar2->Cursor < 1) {
      pFVar2 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar2->Cursor = '\n';
    pFVar2->Cursor = pFVar2->Cursor + 1;
    pFVar2->Committed = pFVar2->Cursor;
  }
  return;
}

