// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// Enter<FMetadataIoStoreTagFields> @ 144856cb0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FMetadataIoStoreTagFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  longlong lVar1;
  ushort *puVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  FWriteBuffer *pFVar6;
  TLogScope<0> *pTVar7;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar1 + 0x9d4c) <
      `public:_static_unsigned_int___cdecl_FMetadataIoStoreTagFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FMetadataIoStoreTagFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FMetadataIoStoreTagFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FMetadataIoStoreTagFields::GetUid(void)'::__l2::Uid =
           FMetadataIoStoreTagFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FMetadataIoStoreTagFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  uVar4 = `public:_static_unsigned_int___cdecl_FMetadataIoStoreTagFields::GetUid(void)'::__l2::Uid;
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pFVar6 = *(FWriteBuffer **)(lVar1 + 0x20);
  *(FWriteBuffer **)&__return_storage_ptr__->field_0x8 = pFVar6;
  if (pFVar6 < (FWriteBuffer *)(pFVar6->Cursor + 9)) {
    pFVar6 = Writer_NextBuffer();
    *(FWriteBuffer **)&__return_storage_ptr__->field_0x8 = pFVar6;
  }
  if (pFVar6->Size < 10) {
    pcVar3 = (code *)swi(3);
    pTVar7 = (TLogScope<0> *)(*pcVar3)();
    return pTVar7;
  }
  puVar2 = *(ushort **)(*(longlong *)&__return_storage_ptr__->field_0x8 + 0x20);
  *(longlong *)(*(longlong *)&__return_storage_ptr__->field_0x8 + 0x20) = (longlong)puVar2 + 9;
  *(longlong *)__return_storage_ptr__ = (longlong)puVar2 + 5;
  LOCK();
  UNLOCK();
  uVar5 = GLogSerial + 1;
  *(uint *)(puVar2 + 1) = GLogSerial;
  GLogSerial = uVar5;
  *puVar2 = (ushort)uVar4 | 1;
  return __return_storage_ptr__;
}

// ScopedEnter<FMetadataIoStoreTagFields> @ 144859d80

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::ScopedEnter<FMetadataIoStoreTagFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  longlong lVar1;
  FWriteBuffer *pFVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0x9d48) == '\0') {
    __dyn_tls_on_demand_init();
  }
  pFVar2 = *(FWriteBuffer **)(lVar1 + 0x20);
  if ((int)pFVar2 - *(int *)&pFVar2->Cursor < 10) {
    pFVar2 = Writer_NextBuffer();
  }
  *pFVar2->Cursor = '\b';
  pFVar2->Cursor = pFVar2->Cursor + 1;
  pFVar2->Committed = pFVar2->Cursor;
  Enter<FMetadataIoStoreTagFields>(__return_storage_ptr__);
  return __return_storage_ptr__;
}

