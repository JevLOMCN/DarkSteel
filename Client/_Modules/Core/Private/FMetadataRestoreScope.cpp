// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// FMetadataRestoreScope @ 141986ad0

FMetadataRestoreScope * __thiscall
FMetadataRestoreScope::FMetadataRestoreScope(FMetadataRestoreScope *this,uint param_1)

{
  uint uVar1;
  uint *local_18;
  longlong local_10;
  
  (this->Inner).bActive = false;
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = (uint)~MetadataChannel->Enabled >> 0x1f;
  }
  if (uVar1 != 0) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackRestoreStackFields>
              ((TLogScope<0> *)&local_18);
    if ((this->Inner).bActive == false) {
      (this->Inner).bActive = true;
    }
    *local_18 = param_1;
    *(undefined8 *)(local_10 + 0x28) = *(undefined8 *)(local_10 + 0x20);
  }
  return this;
}

// ~FMetadataRestoreScope @ 141988000

void __thiscall FMetadataRestoreScope::~FMetadataRestoreScope(FMetadataRestoreScope *this)

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

// ActivateScope @ 14198a0e0

void __thiscall FMetadataRestoreScope::ActivateScope(FMetadataRestoreScope *this,uint param_1)

{
  uint *local_18;
  longlong local_10;
  
  UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackRestoreStackFields>
            ((TLogScope<0> *)&local_18);
  if ((this->Inner).bActive == false) {
    (this->Inner).bActive = true;
  }
  *local_18 = param_1;
  *(undefined8 *)(local_10 + 0x28) = *(undefined8 *)(local_10 + 0x20);
  return;
}

