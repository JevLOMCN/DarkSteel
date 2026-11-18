// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// Enter<FAnimationNameFields> @ 147527060

FImportantLogScope * __cdecl
UE::Trace::Private::FImportantLogScope::Enter<FAnimationNameFields>
          (FImportantLogScope *__return_storage_ptr__,uint param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FAnimationNameFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FAnimationNameFields::GetUid(void)'::
                         __l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FAnimationNameFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FAnimationNameFields::GetUid(void)'::__l2::Uid =
           FAnimationNameFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FAnimationNameFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterImpl(__return_storage_ptr__,
            `public:_static_unsigned_int___cdecl_FAnimationNameFields::GetUid(void)'::__l2::Uid >> 1
            ,param_1 + 9);
  __return_storage_ptr__->AuxCursor = __return_storage_ptr__->AuxCursor + 4;
  __return_storage_ptr__->Ptr[__return_storage_ptr__->AuxCursor] = '\x03';
  return __return_storage_ptr__;
}

// Enter<FAnimationSkeletalMesh3Fields> @ 147527200

FImportantLogScope * __cdecl
UE::Trace::Private::FImportantLogScope::Enter<FAnimationSkeletalMesh3Fields>
          (FImportantLogScope *__return_storage_ptr__,uint param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FAnimationSkeletalMesh3Fields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FAnimationSkeletalMesh3Fields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FAnimationSkeletalMesh3Fields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FAnimationSkeletalMesh3Fields::GetUid(void)'::__l2::Uid =
           FAnimationSkeletalMesh3Fields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FAnimationSkeletalMesh3Fields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterImpl(__return_storage_ptr__,
            `public:_static_unsigned_int___cdecl_FAnimationSkeletalMesh3Fields::GetUid(void)'::__l2
            ::Uid >> 1,param_1 + 0x15);
  __return_storage_ptr__->AuxCursor = __return_storage_ptr__->AuxCursor + 0x10;
  __return_storage_ptr__->Ptr[__return_storage_ptr__->AuxCursor] = '\x03';
  return __return_storage_ptr__;
}

// Enter<FObjectClassPropertyStringIdFields> @ 14807eca0

FImportantLogScope * __cdecl
UE::Trace::Private::FImportantLogScope::Enter<FObjectClassPropertyStringIdFields>
          (FImportantLogScope *__return_storage_ptr__,uint param_1)

{
  FNextSharedBuffer *pFVar1;
  int iVar2;
  undefined4 *puVar3;
  FSharedBuffer *pFVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_res10;
  FNextSharedBuffer local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FObjectClassPropertyStringIdFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FObjectClassPropertyStringIdFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FObjectClassPropertyStringIdFields::GetUid(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FObjectClassPropertyStringIdFields::GetUid(void)'::__l2::
      Uid = FObjectClassPropertyStringIdFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FObjectClassPropertyStringIdFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pFVar4 = GSharedBuffer;
  uVar5 = `public:_static_unsigned_int___cdecl_FObjectClassPropertyStringIdFields::GetUid(void)'::
          __l2::Uid >> 1;
  iVar6 = -((param_1 + 0xd) * 0x400 | 1);
  LOCK();
  iVar2 = GSharedBuffer->Cursor;
  GSharedBuffer->Cursor = GSharedBuffer->Cursor + iVar6;
  UNLOCK();
  if (iVar6 + iVar2 < 0) {
    pFVar1 = Writer_NextSharedBuffer(&local_18,pFVar4,iVar2,iVar6);
    pFVar4 = pFVar1->Buffer;
    iVar2 = pFVar1->RegionStart;
  }
  puVar3 = (undefined4 *)((longlong)pFVar4 - ((longlong)iVar2 >> 10));
  local_res10 = CONCAT22((short)param_1 + 9,(short)uVar5);
  *puVar3 = local_res10;
  __return_storage_ptr__->Ptr = (uchar *)(puVar3 + 1);
  __return_storage_ptr__->BufferOffset = ((int)pFVar4 - (int)puVar3) + -4;
  __return_storage_ptr__->AuxCursor = 4;
  *(undefined1 *)(puVar3 + 2) = 3;
  return __return_storage_ptr__;
}

