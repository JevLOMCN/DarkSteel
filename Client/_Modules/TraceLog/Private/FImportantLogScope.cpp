// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceLog
// Functions: 3

// Enter<UE::Trace::FTraceChannelAnnounceFields> @ 14145cf40

FImportantLogScope * __cdecl
UE::Trace::Private::FImportantLogScope::Enter<UE::Trace::FTraceChannelAnnounceFields>
          (FImportantLogScope *__return_storage_ptr__,uint param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_UE::Trace::FTraceChannelAnnounceFields::GetUid(void)'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_UE::Trace::FTraceChannelAnnounceFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_UE::Trace::FTraceChannelAnnounceFields::GetUid(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_UE::Trace::FTraceChannelAnnounceFields::GetUid(void)'::
      __l2::Uid = FTraceChannelAnnounceFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_UE::Trace::FTraceChannelAnnounceFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterImpl(__return_storage_ptr__,
            `public:_static_unsigned_int___cdecl_UE::Trace::FTraceChannelAnnounceFields::GetUid(void)'
            ::__l2::Uid >> 1,param_1 + 0xb);
  __return_storage_ptr__->AuxCursor = __return_storage_ptr__->AuxCursor + 6;
  __return_storage_ptr__->Ptr[__return_storage_ptr__->AuxCursor] = '\x03';
  return __return_storage_ptr__;
}

// Enter<UE::Trace::FTraceChannelToggleFields> @ 14145cfe0

FImportantLogScope * __cdecl
UE::Trace::Private::FImportantLogScope::Enter<UE::Trace::FTraceChannelToggleFields>
          (FImportantLogScope *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_UE::Trace::FTraceChannelToggleFields::GetUid(void)'::__l2
      ::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_UE::Trace::FTraceChannelToggleFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_UE::Trace::FTraceChannelToggleFields::GetUid(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_UE::Trace::FTraceChannelToggleFields::GetUid(void)'::__l2
      ::Uid = FTraceChannelToggleFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_UE::Trace::FTraceChannelToggleFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterImpl(__return_storage_ptr__,
            `public:_static_unsigned_int___cdecl_UE::Trace::FTraceChannelToggleFields::GetUid(void)'
            ::__l2::Uid >> 1,5);
  return __return_storage_ptr__;
}

// EnterImpl @ 14145de60

FImportantLogScope * __cdecl
UE::Trace::Private::FImportantLogScope::EnterImpl
          (FImportantLogScope *__return_storage_ptr__,uint param_1,uint param_2)

{
  FSharedBuffer *pFVar1;
  uchar *puVar2;
  int iVar3;
  FSharedBuffer *pFVar4;
  void *pvVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  pFVar4 = GSharedBuffer;
  uVar10 = (param_2 + 4) * 0x400 | 1;
  iVar9 = -uVar10;
  LOCK();
  iVar3 = GSharedBuffer->Cursor;
  GSharedBuffer->Cursor = GSharedBuffer->Cursor + iVar9;
  UNLOCK();
  while (iVar3 + iVar9 < 0) {
    if (iVar3 < 0) {
      do {
      } while (GSharedBuffer == pFVar4);
    }
    else {
      uVar8 = 0x400;
      iVar6 = (int)uVar10 >> 10;
      if (0x400 < iVar6 + 0x1cU) {
        uVar8 = iVar6 + 0x41bU & 0xfffffc00;
      }
      pvVar5 = Writer_MemoryAllocate((ulonglong)uVar8,8);
      LOCK();
      GTraceStatistics.SharedBufferAllocated = GTraceStatistics.SharedBufferAllocated + uVar8;
      UNLOCK();
      *(undefined8 *)((longlong)pvVar5 + ((ulonglong)uVar8 - 8)) = 0;
      *(uint *)((longlong)pvVar5 + ((ulonglong)uVar8 - 0x14)) = uVar8 - 0x1c;
      pFVar1 = (FSharedBuffer *)((longlong)pvVar5 + ((ulonglong)uVar8 - 0x18));
      *(undefined4 *)((longlong)pvVar5 + ((ulonglong)uVar8 - 0x10)) = 0;
      pFVar1->Cursor = (uVar8 - 0x1c) * 0x400 | 0x3ff;
      GSharedBuffer = (FSharedBuffer *)((longlong)pvVar5 + ((ulonglong)uVar8 - 0x18));
      pFVar4->Next = pFVar1;
      pFVar4->Final = iVar3 >> 10;
    }
    pFVar1 = GSharedBuffer;
    LOCK();
    GTraceStatistics.BytesEmitted =
         GTraceStatistics.BytesEmitted + (longlong)(-pFVar4->Cursor >> 10);
    UNLOCK();
    LOCK();
    pFVar4->Cursor = pFVar4->Cursor + 1;
    UNLOCK();
    LOCK();
    iVar3 = pFVar1->Cursor;
    pFVar1->Cursor = pFVar1->Cursor + iVar9;
    UNLOCK();
    pFVar4 = pFVar1;
  }
  puVar7 = (undefined4 *)((longlong)pFVar4 - ((longlong)iVar3 >> 10));
  __return_storage_ptr__->AuxCursor = 0;
  *puVar7 = CONCAT22((short)param_2,(short)param_1);
  puVar2 = (uchar *)(puVar7 + 1);
  __return_storage_ptr__->Ptr = puVar2;
  __return_storage_ptr__->BufferOffset = (int)pFVar4 - (int)puVar2;
  return __return_storage_ptr__;
}

