// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceLog
// Functions: 104

// `dynamic_initializer_for_'GTlsContext'' @ 140ef5ab0

void __cdecl UE::Trace::Private::_dynamic_initializer_for__GTlsContext__(void)

{
  __tlregdtor(_dynamic_atexit_destructor_for__GTlsContext__);
  return;
}

// Enter<UE::Trace::Private::F$TraceNewTraceFields> @ 14145cc00

FImportantLogScope * __cdecl
UE::Trace::Private::FImportantLogScope::Enter<UE::Trace::Private::F_TraceNewTraceFields>
          (FImportantLogScope *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_UE::Trace::Private::F$TraceNewTraceFields::GetUid(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_UE::Trace::Private::F$TraceNewTraceFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_UE::Trace::Private::F$TraceNewTraceFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_UE::Trace::Private::F$TraceNewTraceFields::GetUid(void)'
      ::__l2::Uid = F$TraceNewTraceFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_UE::Trace::Private::F$TraceNewTraceFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterImpl(__return_storage_ptr__,
            `public:_static_unsigned_int___cdecl_UE::Trace::Private::F$TraceNewTraceFields::GetUid(void)'
            ::__l2::Uid >> 1,0x1b);
  return __return_storage_ptr__;
}

// Enter<UE::Trace::F$TraceThreadGroupBeginFields> @ 14145cc80

FImportantLogScope * __cdecl
UE::Trace::Private::FImportantLogScope::Enter<UE::Trace::F_TraceThreadGroupBeginFields>
          (FImportantLogScope *__return_storage_ptr__,uint param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_UE::Trace::F$TraceThreadGroupBeginFields::GetUid(void)'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_UE::Trace::F$TraceThreadGroupBeginFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_UE::Trace::F$TraceThreadGroupBeginFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_UE::Trace::F$TraceThreadGroupBeginFields::GetUid(void)'::
      __l2::Uid = F$TraceThreadGroupBeginFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_UE::Trace::F$TraceThreadGroupBeginFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterImpl(__return_storage_ptr__,
            `public:_static_unsigned_int___cdecl_UE::Trace::F$TraceThreadGroupBeginFields::GetUid(void)'
            ::__l2::Uid >> 1,param_1 + 5);
  __return_storage_ptr__->Ptr[__return_storage_ptr__->AuxCursor] = '\x03';
  return __return_storage_ptr__;
}

// Enter<UE::Trace::F$TraceThreadGroupEndFields> @ 14145cd20

FImportantLogScope * __cdecl
UE::Trace::Private::FImportantLogScope::Enter<UE::Trace::F_TraceThreadGroupEndFields>
          (FImportantLogScope *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_UE::Trace::F$TraceThreadGroupEndFields::GetUid(void)'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_UE::Trace::F$TraceThreadGroupEndFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_UE::Trace::F$TraceThreadGroupEndFields::GetUid(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_UE::Trace::F$TraceThreadGroupEndFields::GetUid(void)'::
      __l2::Uid = F$TraceThreadGroupEndFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_UE::Trace::F$TraceThreadGroupEndFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterImpl(__return_storage_ptr__,
            `public:_static_unsigned_int___cdecl_UE::Trace::F$TraceThreadGroupEndFields::GetUid(void)'
            ::__l2::Uid >> 1,0);
  return __return_storage_ptr__;
}

// Enter<UE::Trace::F$TraceThreadInfoFields> @ 14145cda0

FImportantLogScope * __cdecl
UE::Trace::Private::FImportantLogScope::Enter<UE::Trace::F_TraceThreadInfoFields>
          (FImportantLogScope *__return_storage_ptr__,uint param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_UE::Trace::F$TraceThreadInfoFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_UE::Trace::F$TraceThreadInfoFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_UE::Trace::F$TraceThreadInfoFields::GetUid(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_UE::Trace::F$TraceThreadInfoFields::GetUid(void)'::__l2::
      Uid = F$TraceThreadInfoFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_UE::Trace::F$TraceThreadInfoFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterImpl(__return_storage_ptr__,
            `public:_static_unsigned_int___cdecl_UE::Trace::F$TraceThreadInfoFields::GetUid(void)'::
            __l2::Uid >> 1,param_1 + 0x11);
  __return_storage_ptr__->AuxCursor = __return_storage_ptr__->AuxCursor + 0xc;
  __return_storage_ptr__->Ptr[__return_storage_ptr__->AuxCursor] = '\x03';
  return __return_storage_ptr__;
}

// Enter<UE::Trace::Private::F$TraceThreadTimingFields> @ 14145ce40

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<UE::Trace::Private::F_TraceThreadTimingFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_UE::Trace::Private::F$TraceThreadTimingFields::GetUid(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_UE::Trace::Private::F$TraceThreadTimingFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_UE::Trace::Private::F$TraceThreadTimingFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_UE::Trace::Private::F$TraceThreadTimingFields::GetUid(void)'
      ::__l2::Uid = F$TraceThreadTimingFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_UE::Trace::Private::F$TraceThreadTimingFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterNoSync((FLogScope *)__return_storage_ptr__,
              `public:_static_unsigned_int___cdecl_UE::Trace::Private::F$TraceThreadTimingFields::GetUid(void)'
              ::__l2::Uid,8);
  return __return_storage_ptr__;
}

// Enter<UE::Trace::Private::F$TraceTraceStallFields> @ 14145cec0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<UE::Trace::Private::F_TraceTraceStallFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_UE::Trace::Private::F$TraceTraceStallFields::GetUid(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_UE::Trace::Private::F$TraceTraceStallFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_UE::Trace::Private::F$TraceTraceStallFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_UE::Trace::Private::F$TraceTraceStallFields::GetUid(void)'
      ::__l2::Uid = F$TraceTraceStallFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_UE::Trace::Private::F$TraceTraceStallFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_UE::Trace::Private::F$TraceTraceStallFields::GetUid(void)'
        ::__l2::Uid,0x10);
  return __return_storage_ptr__;
}

// Field_WriteAuxData<`UE::Trace::Private::Field_WriteAuxData'::__l2::<lambda_1>_&> @ 14145d0a0

void __cdecl
UE::Trace::Private::Field_WriteAuxData<_UE::Trace::Private::Field_WriteAuxData_::__l2::<lambda_1>_&>
          (uint param_1,int param_2,<lambda_1> *param_3)

{
  longlong lVar1;
  uchar *puVar2;
  int iVar3;
  int iVar4;
  FWriteBuffer *pFVar5;
  int iVar6;
  size_t sVar7;
  uchar **ppuVar8;
  bool bVar9;
  
  if (param_2 != 0) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar5 = *(FWriteBuffer **)(lVar1 + 0x20);
    puVar2 = pFVar5->Cursor;
    bVar9 = puVar2 == pFVar5->Committed;
    iVar3 = (int)pFVar5 - (int)puVar2;
    if (iVar3 < 1) {
      if (puVar2 == pFVar5->Committed) {
        pFVar5->Committed = puVar2;
      }
      bVar9 = true;
      pFVar5 = Writer_NextBufferInternal(*(FWriteBuffer **)(lVar1 + 0x20));
      iVar3 = (int)pFVar5 - *(int *)&pFVar5->Cursor;
    }
    ppuVar8 = &pFVar5->Cursor;
    iVar6 = param_2;
    if (iVar3 + 3 < param_2) {
      iVar6 = iVar3 + 3;
    }
    *(uint *)*ppuVar8 = iVar6 << 0xd | param_1 << 8;
    sVar7 = (size_t)iVar6;
    **ppuVar8 = '\x02';
    *ppuVar8 = *ppuVar8 + 4;
    memcpy(*ppuVar8,*param_3->Buffer,sVar7);
    iVar6 = param_2 - iVar6;
    *param_3->Buffer = (FWriteBuffer *)((*param_3->Buffer)->Overflow + sVar7);
    *ppuVar8 = *ppuVar8 + sVar7;
    if (iVar6 < 1) {
      if (!bVar9) {
        return;
      }
    }
    else {
      if (!bVar9) goto LAB_14145d191;
      do {
        pFVar5->Committed = *ppuVar8;
LAB_14145d191:
        pFVar5 = Writer_NextBufferInternal(*(FWriteBuffer **)(lVar1 + 0x20));
        ppuVar8 = &pFVar5->Cursor;
        iVar4 = ((int)pFVar5 - *(int *)&pFVar5->Cursor) + 3;
        iVar3 = iVar6;
        if (iVar4 < iVar6) {
          iVar3 = iVar4;
        }
        sVar7 = (size_t)iVar3;
        *(uint *)*ppuVar8 = iVar3 << 0xd | param_1 << 8;
        **ppuVar8 = '\x02';
        *ppuVar8 = *ppuVar8 + 4;
        memcpy(*ppuVar8,*param_3->Buffer,sVar7);
        iVar6 = iVar6 - iVar3;
        *param_3->Buffer = (FWriteBuffer *)((*param_3->Buffer)->Overflow + sVar7);
        *ppuVar8 = *ppuVar8 + sVar7;
      } while (0 < iVar6);
    }
    pFVar5->Committed = pFVar5->Cursor;
  }
  return;
}

// _Atomic_address_as<char,std::_Atomic_padded<unsigned_char>_> @ 14145d230

char * __cdecl
std::_Atomic_address_as<char,std::_Atomic_padded<unsigned_char>_>
          (_Atomic_padded<unsigned_char> *param_1)

{
  return (char *)param_1;
}

// _Atomic_address_as<char,std::_Atomic_padded<unsigned_char>_> @ 14145d240

char * __cdecl
std::_Atomic_address_as<char,std::_Atomic_padded<unsigned_char>_>
          (_Atomic_padded<unsigned_char> *param_1)

{
  return (char *)param_1;
}

// _Atomic_address_as<char,std::_Atomic_padded<bool>_> @ 14145d250

char * __cdecl
std::_Atomic_address_as<char,std::_Atomic_padded<bool>_>(_Atomic_padded<bool> *param_1)

{
  return &param_1->_Value;
}

// _Atomic_address_as<char,std::_Atomic_padded<bool>_> @ 14145d260

char * __cdecl
std::_Atomic_address_as<char,std::_Atomic_padded<bool>_>(_Atomic_padded<bool> *param_1)

{
  return &param_1->_Value;
}

// _Atomic_address_as<int,std::_Atomic_padded<int>_> @ 14145d270

int * __cdecl std::_Atomic_address_as<int,std::_Atomic_padded<int>_>(_Atomic_padded<int> *param_1)

{
  return &param_1->_Value;
}

// _Atomic_address_as<int,std::_Atomic_padded<int>_> @ 14145d280

int * __cdecl std::_Atomic_address_as<int,std::_Atomic_padded<int>_>(_Atomic_padded<int> *param_1)

{
  return &param_1->_Value;
}

// _Atomic_address_as<int,std::_Atomic_padded<unsigned_int>_> @ 14145d290

int * __cdecl
std::_Atomic_address_as<int,std::_Atomic_padded<unsigned_int>_>
          (_Atomic_padded<unsigned_int> *param_1)

{
  return (int *)param_1;
}

// _Atomic_address_as<int,std::_Atomic_padded<unsigned_int>_> @ 14145d2a0

int * __cdecl
std::_Atomic_address_as<int,std::_Atomic_padded<unsigned_int>_>
          (_Atomic_padded<unsigned_int> *param_1)

{
  return (int *)param_1;
}

// _Atomic_address_as<long,std::_Atomic_padded<int>_> @ 14145d2b0

long * __cdecl std::_Atomic_address_as<long,std::_Atomic_padded<int>_>(_Atomic_padded<int> *param_1)

{
  return &param_1->_Value;
}

// _Atomic_address_as<long,std::_Atomic_padded<unsigned_int>_> @ 14145d2c0

long * __cdecl
std::_Atomic_address_as<long,std::_Atomic_padded<unsigned_int>_>
          (_Atomic_padded<unsigned_int> *param_1)

{
  return (long *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<void_(__cdecl*)(void)>_> @ 14145d2d0

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<void_(__cdecl*)(void)>_>
          (_Atomic_padded<void_(__cdecl*)(void)> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<void_(__cdecl*)(void)>_> @ 14145d2e0

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<void_(__cdecl*)(void)>_>
          (_Atomic_padded<void_(__cdecl*)(void)> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<unsigned_char_*>_> @ 14145d2f0

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<unsigned_char_*>_>
          (_Atomic_padded<unsigned_char_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<unsigned_char_*>_> @ 14145d300

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<unsigned_char_*>_>
          (_Atomic_padded<unsigned_char_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<UE::Trace::Private::FPoolPage_*>_> @ 14145d310

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<UE::Trace::Private::FPoolPage_*>_>
          (_Atomic_padded<UE::Trace::Private::FPoolPage_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<UE::Trace::Private::FSharedBuffer_*>_> @ 14145d320

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<UE::Trace::Private::FSharedBuffer_*>_>
          (_Atomic_padded<UE::Trace::Private::FSharedBuffer_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<UE::Trace::Private::FSharedBuffer_*>_> @ 14145d330

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<UE::Trace::Private::FSharedBuffer_*>_>
          (_Atomic_padded<UE::Trace::Private::FSharedBuffer_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<UE::Trace::Private::FWriteBuffer_*>_> @ 14145d340

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<UE::Trace::Private::FWriteBuffer_*>_>
          (_Atomic_padded<UE::Trace::Private::FWriteBuffer_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<UE::Trace::Private::FWriteBuffer_*>_> @ 14145d350

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<UE::Trace::Private::FWriteBuffer_*>_>
          (_Atomic_padded<UE::Trace::Private::FWriteBuffer_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<UE::Trace::FChannel_*>_> @ 14145d360

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<UE::Trace::FChannel_*>_>
          (_Atomic_padded<UE::Trace::FChannel_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<UE::Trace::FChannel_*>_> @ 14145d370

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<UE::Trace::FChannel_*>_>
          (_Atomic_padded<UE::Trace::FChannel_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<UE::Trace::Private::FEventNode_*>_> @ 14145d380

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<UE::Trace::Private::FEventNode_*>_>
          (_Atomic_padded<UE::Trace::Private::FEventNode_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<UE::Trace::Private::FEventNode_*>_> @ 14145d390

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<UE::Trace::Private::FEventNode_*>_>
          (_Atomic_padded<UE::Trace::Private::FEventNode_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<__int64>_> @ 14145d3a0

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<__int64>_>(_Atomic_padded<__int64> *param_1)

{
  return &param_1->_Value;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<__int64>_> @ 14145d3b0

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<__int64>_>(_Atomic_padded<__int64> *param_1)

{
  return &param_1->_Value;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<unsigned___int64>_> @ 14145d3c0

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<unsigned___int64>_>
          (_Atomic_padded<unsigned___int64> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<unsigned___int64>_> @ 14145d3d0

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<unsigned___int64>_>
          (_Atomic_padded<unsigned___int64> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_reinterpret_as<char,unsigned_char> @ 14145d3e0

char __cdecl std::_Atomic_reinterpret_as<char,unsigned_char>(uchar *param_1)

{
  return *param_1;
}

// _Atomic_reinterpret_as<char,bool> @ 14145d3f0

char __cdecl std::_Atomic_reinterpret_as<char,bool>(bool *param_1)

{
  return *param_1;
}

// _Atomic_reinterpret_as<int,int> @ 14145d400

int __cdecl std::_Atomic_reinterpret_as<int,int>(int *param_1)

{
  return *param_1;
}

// _Atomic_reinterpret_as<int,unsigned_int> @ 14145d410

int __cdecl std::_Atomic_reinterpret_as<int,unsigned_int>(uint *param_1)

{
  return *param_1;
}

// _Atomic_reinterpret_as<long,unsigned_int> @ 14145d420

long __cdecl std::_Atomic_reinterpret_as<long,unsigned_int>(uint *param_1)

{
  return *param_1;
}

// _Atomic_reinterpret_as<__int64,void_(__cdecl*)(void)> @ 14145d430

long64 __cdecl
std::_Atomic_reinterpret_as<__int64,void_(__cdecl*)(void)>(_func___cdecl_void **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,unsigned_char_*> @ 14145d440

long64 __cdecl std::_Atomic_reinterpret_as<__int64,unsigned_char_*>(uchar **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,UE::Trace::Private::FSharedBuffer_*> @ 14145d450

long64 __cdecl
std::_Atomic_reinterpret_as<__int64,UE::Trace::Private::FSharedBuffer_*>(FSharedBuffer **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,UE::Trace::Private::FWriteBuffer_*> @ 14145d460

long64 __cdecl
std::_Atomic_reinterpret_as<__int64,UE::Trace::Private::FWriteBuffer_*>(FWriteBuffer **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,UE::Trace::FChannel_*> @ 14145d470

long64 __cdecl std::_Atomic_reinterpret_as<__int64,UE::Trace::FChannel_*>(FChannel **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,UE::Trace::Private::FEventNode_*> @ 14145d480

long64 __cdecl
std::_Atomic_reinterpret_as<__int64,UE::Trace::Private::FEventNode_*>(FEventNode **param_1)

{
  return (long64)*param_1;
}

// _Atomic_reinterpret_as<__int64,__int64> @ 14145d490

long64 __cdecl std::_Atomic_reinterpret_as<__int64,__int64>(long64 *param_1)

{
  return *param_1;
}

// _Atomic_reinterpret_as<__int64,unsigned___int64> @ 14145d4a0

long64 __cdecl std::_Atomic_reinterpret_as<__int64,unsigned___int64>(ulong64 *param_1)

{
  return *param_1;
}

// _Getvals<wchar_t> @ 14145d4b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
std::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::_Getvals<wchar_t>
          (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *this,
          wchar_t param_1,_Locinfo *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  _Cvtvec *p_Var8;
  wchar_t *pwVar9;
  size_t sVar10;
  char *pcVar11;
  undefined1 auStack_78 [32];
  _Cvtvec local_58;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  p_Var8 = std::_Locinfo::_Getcvt(param_2,&local_58);
  uVar2 = p_Var8->_Mbcurmax;
  iVar3 = p_Var8->_Isclocale;
  uVar4 = p_Var8->_Isleadbyte[0];
  uVar5 = p_Var8->_Isleadbyte[1];
  uVar6 = p_Var8->_Isleadbyte[2];
  uVar7 = p_Var8->_Isleadbyte[3];
  (this->_Cvt)._Page = p_Var8->_Page;
  (this->_Cvt)._Mbcurmax = uVar2;
  (this->_Cvt)._Isclocale = iVar3;
  (this->_Cvt)._Isleadbyte[0] = uVar4;
  (this->_Cvt)._Isleadbyte[1] = uVar5;
  (this->_Cvt)._Isleadbyte[2] = uVar6;
  (this->_Cvt)._Isleadbyte[3] = uVar7;
  uVar1 = *(undefined8 *)(p_Var8->_Isleadbyte + 0xc);
  *(undefined8 *)((this->_Cvt)._Isleadbyte + 4) = *(undefined8 *)(p_Var8->_Isleadbyte + 4);
  *(undefined8 *)((this->_Cvt)._Isleadbyte + 0xc) = uVar1;
  *(undefined8 *)((this->_Cvt)._Isleadbyte + 0x14) = *(undefined8 *)(p_Var8->_Isleadbyte + 0x14);
  *(undefined4 *)((this->_Cvt)._Isleadbyte + 0x1c) = *(undefined4 *)(p_Var8->_Isleadbyte + 0x1c);
  pwVar9 = (wchar_t *)std::_Locinfo::_W_Getdays(param_2);
  sVar10 = wcslen(pwVar9);
  pcVar11 = calloc(sVar10 + 1,2);
  if (pcVar11 == (char *)0x0) {
    _Xbad_alloc();
    return;
  }
  memcpy(pcVar11,pwVar9,(sVar10 + 1) * 2);
  this->_Days = pcVar11;
  pwVar9 = (wchar_t *)std::_Locinfo::_W_Getmonths(param_2);
  sVar10 = wcslen(pwVar9);
  pcVar11 = calloc(sVar10 + 1,2);
  if (pcVar11 != (char *)0x0) {
    memcpy(pcVar11,pwVar9,(sVar10 + 1) * 2);
    this->_Months = pcVar11;
    pcVar11 = calloc(0xd,2);
    uVar1 = _UNK_15060dae8;
    if (pcVar11 != (char *)0x0) {
      *(undefined8 *)pcVar11 = _u__AM_am_PM_pm;
      *(undefined8 *)(pcVar11 + 8) = uVar1;
      *(undefined8 *)(pcVar11 + 0x10) = DAT_15060daf0;
      *(undefined2 *)(pcVar11 + 0x18) = DAT_15060daf8;
      this->_Ampm = pcVar11;
      return;
    }
    _Xbad_alloc();
    return;
  }
  _Xbad_alloc();
  return;
}

// _Getvals<wchar_t> @ 14145d610

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
std::time_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>::
_Getvals<wchar_t>(time_get<wchar_t,std::istreambuf_iterator<wchar_t,std::char_traits<wchar_t>_>_>
                  *this,wchar_t param_1,_Locinfo *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  _Cvtvec *p_Var8;
  wchar_t *pwVar9;
  size_t sVar10;
  wchar_t *pwVar11;
  undefined1 auStack_78 [32];
  _Cvtvec local_58;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_78;
  p_Var8 = std::_Locinfo::_Getcvt(param_2,&local_58);
  uVar2 = p_Var8->_Mbcurmax;
  iVar3 = p_Var8->_Isclocale;
  uVar4 = p_Var8->_Isleadbyte[0];
  uVar5 = p_Var8->_Isleadbyte[1];
  uVar6 = p_Var8->_Isleadbyte[2];
  uVar7 = p_Var8->_Isleadbyte[3];
  (this->_Cvt)._Page = p_Var8->_Page;
  (this->_Cvt)._Mbcurmax = uVar2;
  (this->_Cvt)._Isclocale = iVar3;
  (this->_Cvt)._Isleadbyte[0] = uVar4;
  (this->_Cvt)._Isleadbyte[1] = uVar5;
  (this->_Cvt)._Isleadbyte[2] = uVar6;
  (this->_Cvt)._Isleadbyte[3] = uVar7;
  uVar1 = *(undefined8 *)(p_Var8->_Isleadbyte + 0xc);
  *(undefined8 *)((this->_Cvt)._Isleadbyte + 4) = *(undefined8 *)(p_Var8->_Isleadbyte + 4);
  *(undefined8 *)((this->_Cvt)._Isleadbyte + 0xc) = uVar1;
  *(undefined8 *)((this->_Cvt)._Isleadbyte + 0x14) = *(undefined8 *)(p_Var8->_Isleadbyte + 0x14);
  *(undefined4 *)((this->_Cvt)._Isleadbyte + 0x1c) = *(undefined4 *)(p_Var8->_Isleadbyte + 0x1c);
  pwVar9 = (wchar_t *)std::_Locinfo::_W_Getdays(param_2);
  sVar10 = wcslen(pwVar9);
  pwVar11 = calloc(sVar10 + 1,2);
  if (pwVar11 == (wchar_t *)0x0) {
    _Xbad_alloc();
    return;
  }
  memcpy(pwVar11,pwVar9,(sVar10 + 1) * 2);
  this->_Days = pwVar11;
  pwVar9 = (wchar_t *)std::_Locinfo::_W_Getmonths(param_2);
  sVar10 = wcslen(pwVar9);
  pwVar11 = calloc(sVar10 + 1,2);
  if (pwVar11 != (wchar_t *)0x0) {
    memcpy(pwVar11,pwVar9,(sVar10 + 1) * 2);
    this->_Months = pwVar11;
    pwVar9 = calloc(0xd,2);
    uVar1 = _UNK_15060dae8;
    if (pwVar9 != (wchar_t *)0x0) {
      *(undefined8 *)pwVar9 = _u__AM_am_PM_pm;
      *(undefined8 *)(pwVar9 + 4) = uVar1;
      *(undefined8 *)(pwVar9 + 8) = DAT_15060daf0;
      pwVar9[0xc] = DAT_15060daf8;
      this->_Ampm = pwVar9;
      return;
    }
    _Xbad_alloc();
    return;
  }
  _Xbad_alloc();
  return;
}

// LZ4_attach_dictionary @ 14145fbb0

void __cdecl Trace::LZ4_attach_dictionary(LZ4_stream_u *param_1,LZ4_stream_u *param_2)

{
  if ((param_1->internal_donotuse).dirty == 0) {
    if (((param_1->internal_donotuse).tableType != 0) &&
       (((param_1->internal_donotuse).tableType != 2 ||
        (0x40000000 < (param_1->internal_donotuse).currentOffset)))) {
      memset(param_1,0,0x4000);
      (param_1->internal_donotuse).currentOffset = 0;
      (param_1->internal_donotuse).tableType = 0;
    }
    if ((param_1->internal_donotuse).currentOffset != 0) {
      (param_1->internal_donotuse).currentOffset =
           (param_1->internal_donotuse).currentOffset + 0x10000;
    }
    param_1->table[0x802] = 0;
    param_1->table[0x801] = 0;
    (param_1->internal_donotuse).dictSize = 0;
  }
  else {
    memset(param_1,0,0x4020);
  }
  if (param_2 != (LZ4_stream_u *)0x0) {
    if ((param_1->internal_donotuse).currentOffset == 0) {
      (param_1->internal_donotuse).currentOffset = 0x10000;
    }
    if ((param_2->internal_donotuse).dictSize == 0) {
      param_2 = (LZ4_stream_u *)0x0;
    }
  }
  (param_1->internal_donotuse).dictCtx = (LZ4_stream_t_internal *)param_2;
  return;
}

// LZ4_compress @ 14145fc80

int __cdecl Trace::LZ4_compress(char *param_1,char *param_2,int param_3)

{
  int iVar1;
  
  if ((uint)param_3 < 0x7e000001) {
    iVar1 = param_3 / 0xff + 0x10 + param_3;
  }
  else {
    iVar1 = 0;
  }
  iVar1 = LZ4_compress_fast(param_1,param_2,param_3,iVar1,1);
  return iVar1;
}

// LZ4_compressBound @ 14145fcd0

int __cdecl Trace::LZ4_compressBound(int param_1)

{
  if (0x7e000000 < (uint)param_1) {
    return 0;
  }
  return param_1 / 0xff + 0x10 + param_1;
}

// LZ4_compress_continue @ 14145fd00

int __cdecl
Trace::LZ4_compress_continue(LZ4_stream_u *param_1,char *param_2,char *param_3,int param_4)

{
  int iVar1;
  
  if ((uint)param_4 < 0x7e000001) {
    iVar1 = param_4 / 0xff + 0x10 + param_4;
  }
  else {
    iVar1 = 0;
  }
  iVar1 = LZ4_compress_fast_continue(param_1,param_2,param_3,param_4,iVar1,1);
  return iVar1;
}

// LZ4_compress_default @ 14145fd50

int __cdecl Trace::LZ4_compress_default(char *param_1,char *param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = LZ4_compress_fast(param_1,param_2,param_3,param_4,1);
  return iVar1;
}

// LZ4_compress_destSize @ 14145fd70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl Trace::LZ4_compress_destSize(char *param_1,char *param_2,int *param_3,int param_4)

{
  int iVar1;
  undefined1 auStackY_4068 [32];
  LZ4_stream_u local_4038;
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x14145fd7a;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_4068;
  iVar1 = LZ4_compress_destSize_extState(&local_4038,param_1,param_2,param_3,param_4);
  return iVar1;
}

// LZ4_compress_destSize_extState @ 14145fdd0

int __cdecl
Trace::LZ4_compress_destSize_extState
          (LZ4_stream_u *param_1,char *param_2,char *param_3,int *param_4,int param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  ushort *puVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong *puVar9;
  uint uVar10;
  ulonglong uVar11;
  short *psVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  int iVar18;
  int iVar19;
  char *pcVar20;
  short *psVar21;
  short *psVar22;
  int *piVar23;
  longlong *plVar24;
  ulonglong uVar25;
  int iVar26;
  short sVar27;
  longlong lVar28;
  char *pcVar29;
  int local_res18;
  
  if (param_1 != (LZ4_stream_u *)0x0) {
    memset(param_1,0,0x4020);
  }
  uVar6 = *param_4;
  iVar7 = 0;
  if (uVar6 < 0x7e000001) {
    iVar18 = (int)uVar6 / 0xff + 0x10 + uVar6;
  }
  else {
    iVar18 = 0;
  }
  if (iVar18 <= param_5) {
    iVar7 = LZ4_compress_fast_extState(param_1,param_2,param_3,uVar6,param_5,1);
    return iVar7;
  }
  uVar8 = (param_1->internal_donotuse).currentOffset;
  pcVar20 = param_3 + param_5;
  plVar1 = (longlong *)(param_2 + (longlong)(int)uVar6 + -0xb);
  iVar26 = (int)param_2;
  local_res18 = (int)param_3;
  iVar18 = iVar7;
  if ((int)uVar6 < 0x1000b) {
    lVar28 = (longlong)param_2 - (ulonglong)uVar8;
    iVar18 = 0;
    if ((0 < param_5) && (iVar18 = iVar7, uVar6 < 0x7e000001)) {
      (param_1->internal_donotuse).dictSize = (param_1->internal_donotuse).dictSize + uVar6;
      (param_1->internal_donotuse).currentOffset = uVar8 + uVar6;
      (param_1->internal_donotuse).tableType = 3;
      plVar24 = (longlong *)param_2;
      if (0xc < (int)uVar6) {
        sVar27 = (short)lVar28;
        *(short *)((longlong)param_1 +
                  (ulonglong)((uint)(*(int *)param_2 * -0x61c8864f) >> 0x13) * 2) =
             (short)param_2 - sVar27;
LAB_14145ff3a:
        iVar7 = *(int *)((longlong)plVar24 + 1);
        iVar18 = 1;
        iVar19 = 0x40;
        plVar15 = (longlong *)((longlong)plVar24 + 1);
        do {
          plVar13 = plVar15;
          puVar4 = (ushort *)
                   ((longlong)param_1 + (ulonglong)((uint)(iVar7 * -0x61c8864f) >> 0x13) * 2);
          lVar14 = (longlong)iVar18;
          iVar18 = iVar19 >> 6;
          plVar15 = (longlong *)(lVar14 + (longlong)plVar13);
          iVar19 = iVar19 + 1;
          if (plVar1 < plVar15) goto LAB_1414602da;
          iVar7 = (int)*plVar15;
          uVar5 = *puVar4;
          *puVar4 = (short)plVar13 - sVar27;
          piVar23 = (int *)((ulonglong)uVar5 + lVar28);
        } while (*piVar23 != (int)*plVar13);
        plVar15 = plVar13;
        if (param_2 < piVar23 && plVar24 < plVar13) {
          do {
            piVar2 = (int *)((longlong)piVar23 - 1);
            plVar3 = (longlong *)((longlong)plVar15 - 1);
            if (*(char *)((longlong)plVar15 - 1) != *(char *)((longlong)piVar23 - 1)) break;
            piVar23 = piVar2;
            plVar15 = plVar3;
          } while (plVar24 < plVar3 && param_2 < piVar2);
        }
        uVar8 = (int)plVar15 - (int)plVar24;
        psVar21 = (short *)((longlong)param_3 + 1);
        uVar11 = (ulonglong)uVar8;
        if ((char *)((longlong)psVar21 + uVar11 + (ulonglong)(uVar8 + 0xf0) / 0xff + 0xb) <= pcVar20
           ) {
          if (uVar8 < 0xf) {
            *param_3 = (char)uVar8 << 4;
          }
          else {
            uVar8 = uVar8 - 0xf;
            *param_3 = -0x10;
            if (0xfe < (int)uVar8) {
              uVar25 = (ulonglong)uVar8 / 0xff;
              uVar8 = uVar8 + (int)uVar25 * -0xff;
              psVar12 = (short *)((longlong)param_3 + 2);
              psVar22 = psVar21;
              do {
                psVar21 = psVar12;
                *(char *)psVar22 = -1;
                uVar25 = uVar25 - 1;
                psVar12 = (short *)((longlong)psVar21 + 1);
                psVar22 = psVar21;
              } while (uVar25 != 0);
            }
            *(char *)psVar21 = (char)uVar8;
            psVar21 = (short *)((longlong)psVar21 + 1);
          }
          psVar12 = psVar21;
          do {
            *(undefined8 *)psVar12 =
                 *(undefined8 *)(((longlong)plVar24 - (longlong)psVar21) + (longlong)psVar12);
            psVar12 = psVar12 + 4;
          } while (psVar12 < (short *)((longlong)psVar21 + uVar11));
          psVar21 = (short *)((longlong)psVar21 + uVar11);
          do {
            if (pcVar20 < (char *)((longlong)psVar21 + 0xb)) break;
            puVar16 = (ulonglong *)(piVar23 + 1);
            puVar17 = (ulonglong *)(param_2 + (longlong)(int)uVar6 + -0xc);
            *psVar21 = (short)plVar15 - (short)piVar23;
            puVar9 = (ulonglong *)((longlong)plVar15 + 4);
            psVar21 = psVar21 + 1;
            iVar7 = (int)puVar9;
            if (puVar9 < puVar17) {
              uVar11 = *puVar9 ^ *puVar16;
              if (uVar11 == 0) {
                puVar9 = (ulonglong *)((longlong)plVar15 + 0xc);
                puVar16 = (ulonglong *)(piVar23 + 3);
                if (puVar9 < puVar17) {
LAB_141460110:
                  uVar11 = *puVar9 ^ *puVar16;
                  if (uVar11 == 0) goto code_r0x00014146011c;
                  uVar25 = 0;
                  if (uVar11 != 0) {
                    for (; (uVar11 >> uVar25 & 1) == 0; uVar25 = uVar25 + 1) {
                    }
                  }
                  uVar8 = (((uint)(uVar25 >> 3) & 0x1fffffff) - iVar7) + (int)puVar9;
                  goto LAB_14146016e;
                }
                goto LAB_141460129;
              }
              lVar14 = 0;
              if (uVar11 != 0) {
                for (; (uVar11 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
                }
              }
              uVar8 = (uint)lVar14 >> 3;
            }
            else {
LAB_141460129:
              if ((puVar9 < param_2 + (longlong)(int)uVar6 + -8) && ((int)*puVar16 == (int)*puVar9))
              {
                puVar9 = (ulonglong *)((longlong)puVar9 + 4);
                puVar16 = (ulonglong *)((longlong)puVar16 + 4);
              }
              if ((puVar9 < param_2 + (longlong)(int)uVar6 + -6) &&
                 ((short)*puVar16 == (short)*puVar9)) {
                puVar9 = (ulonglong *)((longlong)puVar9 + 2);
                puVar16 = (ulonglong *)((longlong)puVar16 + 2);
              }
              if ((puVar9 < param_2 + (longlong)(int)uVar6 + -5) &&
                 ((char)*puVar16 == (char)*puVar9)) {
                puVar9 = (ulonglong *)((longlong)puVar9 + 1);
              }
              uVar8 = (int)puVar9 - iVar7;
            }
LAB_14146016e:
            plVar24 = (longlong *)((longlong)plVar15 + (ulonglong)uVar8 + 4);
            uVar10 = uVar8;
            if (pcVar20 < (char *)((ulonglong)(uVar8 + 0xf0) / 0xff + 6 + (longlong)psVar21)) {
              uVar10 = ((int)pcVar20 - (int)psVar21) * 0xff - 0x5ec;
              plVar24 = (longlong *)((longlong)plVar24 - (ulonglong)(uVar8 - uVar10));
              for (plVar15 = plVar24; plVar15 <= plVar13;
                  plVar15 = (longlong *)((longlong)plVar15 + 1)) {
                *(undefined2 *)
                 ((longlong)param_1 + (ulonglong)((uint)((int)*plVar15 * -0x61c8864f) >> 0x13) * 2)
                     = 0;
              }
            }
            if (uVar10 < 0xf) {
              *param_3 = (char)*(short *)param_3 + (char)uVar10;
              param_3 = (char *)psVar21;
            }
            else {
              uVar10 = uVar10 - 0xf;
              *param_3 = (char)*(short *)param_3 + '\x0f';
              psVar21[0] = -1;
              psVar21[1] = -1;
              if (0x3fb < uVar10) {
                uVar11 = (ulonglong)uVar10 / 0x3fc;
                do {
                  psVar21 = psVar21 + 2;
                  uVar10 = uVar10 - 0x3fc;
                  psVar21[0] = -1;
                  psVar21[1] = -1;
                  uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
              }
              pcVar29 = (char *)((ulonglong)uVar10 / 0xff + (longlong)psVar21);
              *pcVar29 = (char)((ulonglong)uVar10 / 0xff) + (char)uVar10;
              param_3 = pcVar29 + 1;
            }
            if (plVar1 <= plVar24) break;
            *(short *)((longlong)param_1 +
                      (ulonglong)((uint)(*(int *)((longlong)plVar24 + -2) * -0x61c8864f) >> 0x13) *
                      2) = ((short)plVar24 + -2) - sVar27;
            uVar11 = (ulonglong)((uint)((int)*plVar24 * -0x61c8864f) >> 0x13);
            uVar5 = *(ushort *)((longlong)param_1 + uVar11 * 2);
            *(short *)((longlong)param_1 + uVar11 * 2) = (short)plVar24 - sVar27;
            piVar23 = (int *)((ulonglong)uVar5 + lVar28);
            if (*piVar23 != (int)*plVar24) goto LAB_14145ff3a;
            psVar21 = (short *)((longlong)param_3 + 1);
            *param_3 = '\0';
            plVar15 = plVar24;
          } while( true );
        }
      }
LAB_1414602da:
      pcVar29 = param_2 + ((longlong)(int)uVar6 - (longlong)plVar24);
      if (pcVar20 < (char *)((longlong)param_3 +
                            (longlong)(pcVar29 + (ulonglong)(pcVar29 + 0xf0) / 0xff + 1))) {
        pcVar29 = pcVar20 + ((-1 - (longlong)param_3) -
                            (ulonglong)(pcVar20 + (0xef - (longlong)param_3)) / 0xff);
      }
      if (pcVar29 < (char *)0xf) {
        *param_3 = (char)pcVar29 << 4;
      }
      else {
        *param_3 = -0x10;
        pcVar20 = pcVar29 + -0xf;
        param_3 = (char *)((longlong)param_3 + 1);
        if ((char *)0xfe < pcVar20) {
          memset(param_3,(int)CONCAT71((int7)((ulonglong)pcVar20 / 0x1fe),0xff),
                 (ulonglong)pcVar20 / 0xff);
          param_3 = (char *)((longlong)param_3 + (ulonglong)pcVar20 / 0xff);
          pcVar20 = (char *)((ulonglong)pcVar20 % 0xff);
        }
        *param_3 = (char)pcVar20;
      }
      memcpy((char *)((longlong)param_3 + 1),plVar24,(size_t)pcVar29);
      iVar7 = ((int)pcVar29 - iVar26) + (int)plVar24;
      pcVar29 = (char *)(ulonglong)(uint)((int)pcVar29 - local_res18);
LAB_1414608a7:
      *param_4 = iVar7;
      iVar18 = (int)param_3 + 1 + (int)pcVar29;
    }
  }
  else {
    lVar28 = (longlong)param_2 - (ulonglong)uVar8;
    if ((0 < param_5) && (uVar6 < 0x7e000001)) {
      (param_1->internal_donotuse).dictSize = (param_1->internal_donotuse).dictSize + uVar6;
      (param_1->internal_donotuse).currentOffset = uVar8 + uVar6;
      plVar24 = (longlong *)(param_2 + 1);
      (param_1->internal_donotuse).tableType = 2;
      iVar7 = (int)lVar28;
      *(int *)((longlong)param_1 +
              ((ulonglong)(*(longlong *)param_2 * -0x30e4432345000000) >> 0x34) * 4) =
           iVar26 - iVar7;
      lVar14 = *plVar24;
      plVar15 = (longlong *)param_2;
LAB_141460400:
      iVar18 = 1;
      iVar19 = 0x40;
      do {
        plVar13 = plVar24;
        uVar11 = (ulonglong)(lVar14 * -0x30e4432345000000) >> 0x34;
        uVar8 = *(uint *)((longlong)param_1 + uVar11 * 4);
        uVar10 = (int)plVar13 - iVar7;
        plVar24 = (longlong *)((longlong)iVar18 + (longlong)plVar13);
        iVar18 = iVar19 >> 6;
        iVar19 = iVar19 + 1;
        if (plVar1 < plVar24) goto LAB_1414607d9;
        lVar14 = *plVar24;
        piVar23 = (int *)((ulonglong)uVar8 + lVar28);
        *(uint *)((longlong)param_1 + uVar11 * 4) = uVar10;
      } while ((uVar8 + 0xffff < uVar10) || (*piVar23 != (int)*plVar13));
      plVar24 = plVar13;
      if (param_2 < piVar23 && plVar15 < plVar13) {
        do {
          piVar2 = (int *)((longlong)piVar23 - 1);
          plVar3 = (longlong *)((longlong)plVar24 - 1);
          if (*(char *)((longlong)plVar24 - 1) != *(char *)((longlong)piVar23 - 1)) break;
          piVar23 = piVar2;
          plVar24 = plVar3;
        } while (param_2 < piVar2 && plVar15 < plVar3);
      }
      uVar8 = (int)plVar24 - (int)plVar15;
      uVar11 = (ulonglong)uVar8;
      psVar21 = (short *)((longlong)param_3 + 1);
      if ((char *)((longlong)psVar21 + uVar11 + (ulonglong)(uVar8 + 0xf0) / 0xff + 0xb) <= pcVar20)
      {
        if (uVar8 < 0xf) {
          *param_3 = (char)uVar8 << 4;
        }
        else {
          uVar8 = uVar8 - 0xf;
          *param_3 = -0x10;
          if (0xfe < (int)uVar8) {
            uVar25 = (ulonglong)uVar8 / 0xff;
            uVar8 = uVar8 + (int)uVar25 * -0xff;
            psVar12 = (short *)((longlong)param_3 + 2);
            psVar22 = psVar21;
            do {
              psVar21 = psVar12;
              *(char *)psVar22 = -1;
              uVar25 = uVar25 - 1;
              psVar12 = (short *)((longlong)psVar21 + 1);
              psVar22 = psVar21;
            } while (uVar25 != 0);
          }
          *(char *)psVar21 = (char)uVar8;
          psVar21 = (short *)((longlong)psVar21 + 1);
        }
        psVar12 = psVar21;
        do {
          *(undefined8 *)psVar12 =
               *(undefined8 *)(((longlong)plVar15 - (longlong)psVar21) + (longlong)psVar12);
          psVar12 = psVar12 + 4;
        } while (psVar12 < (short *)((longlong)psVar21 + uVar11));
        psVar21 = (short *)((longlong)psVar21 + uVar11);
        psVar12 = (short *)param_3;
        do {
          param_3 = (char *)psVar12;
          if (pcVar20 < (char *)((longlong)psVar21 + 0xb)) break;
          puVar16 = (ulonglong *)((longlong)plVar24 + 4);
          puVar17 = (ulonglong *)(piVar23 + 1);
          *psVar21 = (short)plVar24 - (short)piVar23;
          puVar9 = (ulonglong *)(param_2 + (longlong)(int)uVar6 + -0xc);
          param_3 = (char *)(psVar21 + 1);
          iVar18 = (int)puVar16;
          if (puVar16 < puVar9) {
            uVar11 = *puVar16 ^ *puVar17;
            if (uVar11 == 0) {
              puVar16 = (ulonglong *)((longlong)plVar24 + 0xc);
              puVar17 = (ulonglong *)(piVar23 + 3);
              if (puVar16 < puVar9) {
LAB_1414605e0:
                uVar11 = *puVar16 ^ *puVar17;
                if (uVar11 == 0) goto code_r0x0001414605ec;
                uVar25 = 0;
                if (uVar11 != 0) {
                  for (; (uVar11 >> uVar25 & 1) == 0; uVar25 = uVar25 + 1) {
                  }
                }
                uVar8 = (((uint)(uVar25 >> 3) & 0x1fffffff) - iVar18) + (int)puVar16;
                goto LAB_14146063e;
              }
              goto LAB_1414605f9;
            }
            lVar14 = 0;
            if (uVar11 != 0) {
              for (; (uVar11 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
              }
            }
            uVar8 = (uint)lVar14 >> 3;
          }
          else {
LAB_1414605f9:
            if ((puVar16 < param_2 + (longlong)(int)uVar6 + -8) && ((int)*puVar17 == (int)*puVar16))
            {
              puVar16 = (ulonglong *)((longlong)puVar16 + 4);
              puVar17 = (ulonglong *)((longlong)puVar17 + 4);
            }
            if ((puVar16 < param_2 + (longlong)(int)uVar6 + -6) &&
               ((short)*puVar17 == (short)*puVar16)) {
              puVar16 = (ulonglong *)((longlong)puVar16 + 2);
              puVar17 = (ulonglong *)((longlong)puVar17 + 2);
            }
            if ((puVar16 < param_2 + (longlong)(int)uVar6 + -5) &&
               ((char)*puVar17 == (char)*puVar16)) {
              puVar16 = (ulonglong *)((longlong)puVar16 + 1);
            }
            uVar8 = (int)puVar16 - iVar18;
          }
LAB_14146063e:
          plVar15 = (longlong *)((longlong)plVar24 + (ulonglong)uVar8 + 4);
          uVar10 = uVar8;
          if (pcVar20 < (char *)((ulonglong)(uVar8 + 0xf0) / 0xff + 6 + (longlong)param_3)) {
            uVar10 = ((int)pcVar20 - (int)param_3) * 0xff - 0x5ec;
            plVar15 = (longlong *)((longlong)plVar15 - (ulonglong)(uVar8 - uVar10));
            for (plVar24 = plVar15; plVar24 <= plVar13;
                plVar24 = (longlong *)((longlong)plVar24 + 1)) {
              *(undefined4 *)
               ((longlong)param_1 + ((ulonglong)(*plVar24 * -0x30e4432345000000) >> 0x34) * 4) = 0;
            }
          }
          if (uVar10 < 0xf) {
            *(char *)psVar12 = (char)*psVar12 + (char)uVar10;
          }
          else {
            uVar10 = uVar10 - 0xf;
            *(char *)psVar12 = (char)*psVar12 + '\x0f';
            *(short *)((longlong)param_3 + 0) = -1;
            *(short *)((longlong)param_3 + 2) = -1;
            if (0x3fb < uVar10) {
              uVar11 = (ulonglong)uVar10 / 0x3fc;
              do {
                param_3 = (char *)((longlong)param_3 + 4);
                uVar10 = uVar10 - 0x3fc;
                *(short *)((longlong)param_3 + 0) = -1;
                *(short *)((longlong)param_3 + 2) = -1;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            pcVar29 = (char *)((ulonglong)uVar10 / 0xff + (longlong)param_3);
            *pcVar29 = (char)uVar10 + (char)((ulonglong)uVar10 / 0xff);
            param_3 = pcVar29 + 1;
          }
          if (plVar1 <= plVar15) break;
          uVar10 = (int)plVar15 - iVar7;
          *(int *)((longlong)param_1 +
                  ((ulonglong)(*(longlong *)((longlong)plVar15 + -2) * -0x30e4432345000000) >> 0x34)
                  * 4) = ((int)plVar15 + -2) - iVar7;
          uVar11 = (ulonglong)(*plVar15 * -0x30e4432345000000) >> 0x34;
          uVar8 = *(uint *)((longlong)param_1 + uVar11 * 4);
          *(uint *)((longlong)param_1 + uVar11 * 4) = uVar10;
          piVar23 = (int *)((ulonglong)uVar8 + lVar28);
          if ((uVar8 + 0xffff < uVar10) || (*piVar23 != (int)*plVar15)) goto LAB_1414607a6;
          psVar21 = (short *)((longlong)param_3 + 1);
          *param_3 = '\0';
          plVar24 = plVar15;
          psVar12 = (short *)param_3;
        } while( true );
      }
LAB_1414607d9:
      pcVar29 = param_2 + ((longlong)(int)uVar6 - (longlong)plVar15);
      if (pcVar20 < (char *)((longlong)param_3 +
                            (longlong)(pcVar29 + (ulonglong)(pcVar29 + 0xf0) / 0xff + 1))) {
        pcVar29 = pcVar20 + ((-1 - (longlong)param_3) -
                            (ulonglong)(pcVar20 + (0xef - (longlong)param_3)) / 0xff);
      }
      if (pcVar29 < (char *)0xf) {
        *param_3 = (char)pcVar29 << 4;
      }
      else {
        *param_3 = -0x10;
        pcVar20 = pcVar29 + -0xf;
        param_3 = (char *)((longlong)param_3 + 1);
        if ((char *)0xfe < pcVar20) {
          memset(param_3,(int)CONCAT71((int7)((ulonglong)pcVar20 / 0x1fe),0xff),
                 (ulonglong)pcVar20 / 0xff);
          param_3 = (char *)((longlong)param_3 + (ulonglong)pcVar20 / 0xff);
          pcVar20 = (char *)((ulonglong)pcVar20 % 0xff);
        }
        *param_3 = (char)pcVar20;
      }
      memcpy((char *)((longlong)param_3 + 1),plVar15,(size_t)pcVar29);
      iVar7 = ((int)pcVar29 - iVar26) + (int)plVar15;
      param_3 = (char *)(ulonglong)(uint)((int)param_3 - local_res18);
      goto LAB_1414608a7;
    }
  }
  return iVar18;
code_r0x0001414605ec:
  puVar16 = puVar16 + 1;
  puVar17 = puVar17 + 1;
  if (puVar9 <= puVar16) goto LAB_1414605f9;
  goto LAB_1414605e0;
LAB_1414607a6:
  lVar14 = *(longlong *)((longlong)plVar15 + 1);
  plVar24 = (longlong *)((longlong)plVar15 + 1);
  goto LAB_141460400;
code_r0x00014146011c:
  puVar9 = puVar9 + 1;
  puVar16 = puVar16 + 1;
  if (puVar17 <= puVar9) goto LAB_141460129;
  goto LAB_141460110;
}

// LZ4_compress_fast @ 1414608f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
Trace::LZ4_compress_fast(char *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined1 auStackY_4068 [32];
  undefined1 local_4038 [16416];
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x1414608fa;
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_4068;
  iVar1 = LZ4_compress_fast_extState(local_4038,param_1,param_2,param_3,param_4,param_5);
  return iVar1;
}

// LZ4_compress_fast_continue @ 141460950

int __cdecl
Trace::LZ4_compress_fast_continue
          (LZ4_stream_u *param_1,char *param_2,char *param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  LZ4_stream_t_internal *_Src;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  uint uVar10;
  longlong *plVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  int *piVar18;
  int *piVar19;
  short *psVar20;
  char *pcVar21;
  short *psVar22;
  char *pcVar23;
  uint uVar24;
  uint *puVar25;
  ulonglong uVar26;
  ulonglong *puVar27;
  int iVar28;
  int iVar29;
  char *pcVar30;
  char *pcVar31;
  longlong lVar32;
  ulonglong *puVar33;
  longlong *plVar34;
  uint uVar35;
  longlong *local_res10;
  int local_res18;
  int *local_90;
  
  puVar25 = &(param_1->internal_donotuse).dictSize;
  piVar19 = (int *)((param_1->internal_donotuse).dictionary + *puVar25);
  if ((param_1->internal_donotuse).dirty != 0) {
    return 0;
  }
  LZ4_renormDictT(&param_1->internal_donotuse,param_4);
  iVar6 = 1;
  if (0 < param_6) {
    iVar6 = param_6;
  }
  uVar26 = 0;
  uVar8 = (ulonglong)*puVar25;
  if ((*puVar25 - 1 < 3) && (piVar19 != (int *)param_2)) {
    *puVar25 = 0;
    (param_1->internal_donotuse).dictionary = (uchar *)param_2;
    uVar8 = 0;
    piVar19 = (int *)param_2;
  }
  local_90 = (int *)(param_1->internal_donotuse).dictionary;
  piVar18 = (int *)(param_2 + param_4);
  if ((local_90 < piVar18) && (piVar18 < piVar19)) {
    uVar2 = (int)piVar19 - (int)piVar18;
    *puVar25 = uVar2;
    if (uVar2 < 0x10001) {
      uVar8 = (ulonglong)uVar2;
      if (uVar2 < 4) {
        *puVar25 = 0;
        uVar8 = 0;
      }
    }
    else {
      *puVar25 = 0x10000;
      uVar8 = 0x10000;
    }
    local_90 = (int *)((longlong)piVar19 - uVar8);
    (param_1->internal_donotuse).dictionary = (uchar *)local_90;
  }
  uVar2 = (uint)uVar8;
  iVar15 = (int)param_2;
  local_res18 = (int)param_3;
  if (piVar19 == (int *)param_2) {
    if (uVar2 < 0x10000) {
      uVar10 = (param_1->internal_donotuse).currentOffset;
      if (uVar2 < uVar10) {
        pcVar30 = param_3 + param_5;
        lVar32 = (longlong)param_2 - (ulonglong)uVar10;
        uVar26 = 0;
        if ((uint)param_4 < 0x7e000001) {
          piVar19 = (int *)(param_2 + -uVar8);
          *puVar25 = uVar2 + param_4;
          (param_1->internal_donotuse).currentOffset = uVar10 + param_4;
          (param_1->internal_donotuse).tableType = 2;
          if (0xc < param_4) {
            plVar11 = (longlong *)(param_2 + 1);
            iVar7 = (int)lVar32;
            *(int *)((longlong)param_1 +
                    ((ulonglong)(*(longlong *)param_2 * -0x30e4432345000000) >> 0x34) * 4) =
                 iVar15 - iVar7;
            lVar3 = *plVar11;
            local_res10 = (longlong *)param_2;
LAB_141460b40:
            iVar28 = 1;
            iVar15 = iVar6 << 6;
            do {
              plVar34 = plVar11;
              uVar8 = (ulonglong)(lVar3 * -0x30e4432345000000) >> 0x34;
              uVar35 = *(uint *)((longlong)param_1 + uVar8 * 4);
              lVar3 = (longlong)iVar28;
              iVar28 = iVar15 >> 6;
              uVar24 = (int)plVar34 - iVar7;
              plVar11 = (longlong *)((longlong)plVar34 + lVar3);
              iVar15 = iVar15 + 1;
              param_2 = (char *)local_res10;
              if ((longlong *)((longlong)piVar18 - 0xbU) < plVar11) goto LAB_141460ee7;
              lVar3 = *plVar11;
              piVar17 = (int *)((ulonglong)uVar35 + lVar32);
              *(uint *)((longlong)param_1 + uVar8 * 4) = uVar24;
            } while (((uVar35 < uVar10 - uVar2) || (uVar35 + 0xffff < uVar24)) ||
                    (*piVar17 != (int)*plVar34));
            uVar26 = 0;
            param_2 = (char *)plVar34;
            if (local_res10 < plVar34 && piVar19 < piVar17) {
              do {
                piVar16 = (int *)((longlong)piVar17 - 1);
                plVar11 = (longlong *)((longlong)plVar34 - 1);
                param_2 = (char *)plVar34;
                if (*(char *)((longlong)plVar34 - 1) != *(char *)((longlong)piVar17 - 1)) break;
                piVar17 = piVar16;
                plVar34 = plVar11;
                param_2 = (char *)plVar11;
              } while (local_res10 < plVar11 && piVar19 < piVar16);
            }
            uVar35 = (int)param_2 - (int)local_res10;
            uVar8 = (ulonglong)uVar35;
            psVar20 = (short *)((longlong)param_3 + 1);
            if ((char *)(uVar8 / 0xff + 8 + uVar8 + (longlong)psVar20) <= pcVar30) {
              if (uVar35 < 0xf) {
                *param_3 = (char)uVar35 << 4;
              }
              else {
                uVar35 = uVar35 - 0xf;
                *param_3 = -0x10;
                if (0xfe < (int)uVar35) {
                  uVar26 = (ulonglong)uVar35 / 0xff;
                  memset(psVar20,(int)CONCAT71((int7)(uVar26 >> 8),0xff),uVar26);
                  psVar20 = (short *)((longlong)psVar20 + uVar26);
                  uVar35 = uVar35 + (int)uVar26 * -0xff;
                }
                *(char *)psVar20 = (char)uVar35;
                psVar20 = (short *)((longlong)psVar20 + 1);
              }
              psVar22 = (short *)(uVar8 + (longlong)psVar20);
              lVar3 = (longlong)local_res10 - (longlong)psVar20;
              do {
                *(undefined8 *)psVar20 = *(undefined8 *)((longlong)psVar20 + lVar3);
                psVar20 = psVar20 + 4;
              } while (psVar20 < psVar22);
              puVar13 = (ulonglong *)(piVar18 + -3);
              psVar20 = (short *)param_3;
              do {
                puVar9 = (ulonglong *)((longlong)param_2 + 4);
                puVar12 = (ulonglong *)(piVar17 + 1);
                *psVar22 = (short)param_2 - (short)piVar17;
                param_3 = (char *)(psVar22 + 1);
                iVar15 = (int)puVar9;
                if (puVar9 < puVar13) {
                  uVar8 = *puVar9 ^ *puVar12;
                  if (uVar8 == 0) {
                    puVar9 = (ulonglong *)((longlong)param_2 + 0xc);
                    puVar12 = (ulonglong *)(piVar17 + 3);
                    if (puVar9 < puVar13) {
LAB_141460d20:
                      uVar8 = *puVar9 ^ *puVar12;
                      if (uVar8 == 0) goto code_r0x000141460d2c;
                      uVar26 = 0;
                      if (uVar8 != 0) {
                        for (; (uVar8 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
                        }
                      }
                      uVar35 = (int)puVar9 + (((uint)(uVar26 >> 3) & 0x1fffffff) - iVar15);
                      goto LAB_141460d80;
                    }
                    goto LAB_141460d39;
                  }
                  lVar3 = 0;
                  if (uVar8 != 0) {
                    for (; (uVar8 >> lVar3 & 1) == 0; lVar3 = lVar3 + 1) {
                    }
                  }
                  uVar35 = (uint)lVar3 >> 3;
                }
                else {
LAB_141460d39:
                  if ((puVar9 < piVar18 + -2) && ((int)*puVar12 == (int)*puVar9)) {
                    puVar9 = (ulonglong *)((longlong)puVar9 + 4);
                    puVar12 = (ulonglong *)((longlong)puVar12 + 4);
                  }
                  if ((puVar9 < (ulonglong *)((longlong)piVar18 - 6U)) &&
                     ((short)*puVar12 == (short)*puVar9)) {
                    puVar9 = (ulonglong *)((longlong)puVar9 + 2);
                    puVar12 = (ulonglong *)((longlong)puVar12 + 2);
                  }
                  if ((puVar9 < (ulonglong *)((longlong)piVar18 - 5U)) &&
                     ((char)*puVar12 == (char)*puVar9)) {
                    puVar9 = (ulonglong *)((longlong)puVar9 + 1);
                  }
                  uVar35 = (int)puVar9 - iVar15;
                }
LAB_141460d80:
                param_2 = (char *)((longlong)param_2 + (ulonglong)uVar35 + 4);
                if (pcVar30 < (char *)((ulonglong)(uVar35 + 0xf0) / 0xff + 6 + (longlong)param_3))
                goto LAB_141460ed0;
                if (uVar35 < 0xf) {
                  *(char *)psVar20 = (char)uVar35 + (char)*psVar20;
                }
                else {
                  uVar35 = uVar35 - 0xf;
                  uVar8 = (ulonglong)uVar35;
                  *(char *)psVar20 = (char)*psVar20 + '\x0f';
                  *(short *)((longlong)param_3 + 0) = -1;
                  *(short *)((longlong)param_3 + 2) = -1;
                  if (0x3fb < uVar35) {
                    uVar26 = (ulonglong)uVar35 / 0x3fc;
                    do {
                      param_3 = (char *)((longlong)param_3 + 4);
                      uVar8 = (ulonglong)((int)uVar8 - 0x3fc);
                      *(short *)((longlong)param_3 + 0) = -1;
                      *(short *)((longlong)param_3 + 2) = -1;
                      uVar26 = uVar26 - 1;
                    } while (uVar26 != 0);
                  }
                  pcVar21 = (char *)((longlong)param_3 + uVar8 / 0xff);
                  *pcVar21 = (char)(uVar8 / 0xff) + (char)uVar8;
                  param_3 = pcVar21 + 1;
                }
                if ((longlong *)((longlong)piVar18 - 0xbU) <= param_2) goto LAB_141460ee7;
                *(int *)((longlong)param_1 +
                        ((ulonglong)(*(longlong *)((longlong)param_2 + -2) * -0x30e4432345000000) >>
                        0x34) * 4) = ((int)param_2 + -2) - iVar7;
                uVar24 = (int)param_2 - iVar7;
                uVar8 = (ulonglong)(*(longlong *)param_2 * -0x30e4432345000000) >> 0x34;
                uVar35 = *(uint *)((longlong)param_1 + uVar8 * 4);
                *(uint *)((longlong)param_1 + uVar8 * 4) = uVar24;
                piVar17 = (int *)((ulonglong)uVar35 + lVar32);
                if (((uVar35 < uVar10 - uVar2) || (uVar35 + 0xffff < uVar24)) ||
                   (*piVar17 != (int)*(longlong *)param_2)) goto LAB_141460eb5;
                psVar22 = (short *)((longlong)param_3 + 1);
                *param_3 = '\0';
                psVar20 = (short *)param_3;
              } while( true );
            }
            goto LAB_141463015;
          }
LAB_141460ee7:
          uVar26 = 0;
          uVar8 = (longlong)piVar18 - (longlong)param_2;
          if ((char *)((longlong)param_3 + (uVar8 + 0xf0) / 0xff + uVar8 + 1) <= pcVar30) {
            if (uVar8 < 0xf) {
              *param_3 = (char)uVar8 << 4;
            }
            else {
              *param_3 = -0x10;
              uVar26 = uVar8 - 0xf;
              param_3 = (char *)((longlong)param_3 + 1);
              if (0xfe < uVar26) {
                memset(param_3,(int)CONCAT71((int7)(uVar26 / 0x1fe),0xff),uVar26 / 0xff);
                param_3 = (char *)((longlong)param_3 + uVar26 / 0xff);
                uVar26 = uVar26 % 0xff;
              }
              *param_3 = (char)uVar26;
            }
            memcpy((char *)((longlong)param_3 + 1),param_2,uVar8);
            uVar26 = (ulonglong)(uint)((int)param_3 + 1 + ((int)uVar8 - local_res18));
          }
        }
        goto LAB_141463015;
      }
    }
    lVar32 = (longlong)param_2 - (ulonglong)(param_1->internal_donotuse).currentOffset;
    pcVar30 = param_3 + param_5;
    if ((uint)param_4 < 0x7e000001) {
      (param_1->internal_donotuse).dictSize = uVar2 + param_4;
      (param_1->internal_donotuse).currentOffset =
           (param_1->internal_donotuse).currentOffset + param_4;
      (param_1->internal_donotuse).tableType = 2;
      local_res10 = (longlong *)param_2;
      if (0xc < param_4) {
        plVar11 = (longlong *)(param_2 + 1);
        iVar7 = (int)lVar32;
        *(int *)((longlong)param_1 +
                ((ulonglong)(*(longlong *)param_2 * -0x30e4432345000000) >> 0x34) * 4) =
             iVar15 - iVar7;
        lVar3 = *plVar11;
        local_res10 = (longlong *)param_2;
LAB_141461040:
        iVar28 = 1;
        iVar15 = iVar6 << 6;
        do {
          plVar34 = plVar11;
          uVar26 = (ulonglong)(lVar3 * -0x30e4432345000000) >> 0x34;
          uVar2 = *(uint *)((longlong)param_1 + uVar26 * 4);
          uVar10 = (int)plVar34 - iVar7;
          plVar11 = (longlong *)((longlong)iVar28 + (longlong)plVar34);
          iVar28 = iVar15 >> 6;
          iVar15 = iVar15 + 1;
          if ((longlong *)((longlong)piVar18 - 0xbU) < plVar11) goto LAB_1414613c7;
          lVar3 = *plVar11;
          piVar19 = (int *)(lVar32 + (ulonglong)uVar2);
          *(uint *)((longlong)param_1 + uVar26 * 4) = uVar10;
        } while ((uVar2 + 0xffff < uVar10) || (*piVar19 != (int)*plVar34));
        uVar26 = 0;
        if (param_2 + -uVar8 < piVar19 && local_res10 < plVar34) {
          do {
            piVar17 = (int *)((longlong)piVar19 - 1);
            plVar11 = (longlong *)((longlong)plVar34 - 1);
            if (*(char *)((longlong)plVar34 - 1) != *(char *)((longlong)piVar19 - 1)) break;
            piVar19 = piVar17;
            plVar34 = plVar11;
          } while (local_res10 < plVar11 && param_2 + -uVar8 < piVar17);
        }
        uVar2 = (int)plVar34 - (int)local_res10;
        uVar4 = (ulonglong)uVar2;
        psVar20 = (short *)((longlong)param_3 + 1);
        if ((char *)((longlong)psVar20 + uVar4 + uVar4 / 0xff + 8) <= pcVar30) {
          if (uVar2 < 0xf) {
            *param_3 = (char)uVar2 << 4;
          }
          else {
            uVar2 = uVar2 - 0xf;
            *param_3 = -0x10;
            if (0xfe < (int)uVar2) {
              uVar26 = (ulonglong)uVar2 / 0xff;
              memset(psVar20,(int)CONCAT71((int7)(uVar26 >> 8),0xff),uVar26);
              psVar20 = (short *)((longlong)psVar20 + uVar26);
              uVar2 = uVar2 + (int)uVar26 * -0xff;
            }
            *(char *)psVar20 = (char)uVar2;
            psVar20 = (short *)((longlong)psVar20 + 1);
          }
          psVar22 = (short *)((longlong)psVar20 + uVar4);
          lVar3 = (longlong)local_res10 - (longlong)psVar20;
          do {
            *(undefined8 *)psVar20 = *(undefined8 *)(lVar3 + (longlong)psVar20);
            psVar20 = psVar20 + 4;
          } while (psVar20 < psVar22);
          puVar13 = (ulonglong *)(piVar18 + -3);
          psVar20 = (short *)param_3;
          do {
            puVar9 = (ulonglong *)(piVar19 + 1);
            *psVar22 = (short)plVar34 - (short)piVar19;
            puVar12 = (ulonglong *)((longlong)plVar34 + 4);
            param_3 = (char *)(psVar22 + 1);
            iVar15 = (int)puVar12;
            if (puVar12 < puVar13) {
              uVar26 = *puVar12 ^ *puVar9;
              if (uVar26 == 0) {
                puVar12 = (ulonglong *)((longlong)plVar34 + 0xc);
                puVar9 = (ulonglong *)(piVar19 + 3);
                if (puVar12 < puVar13) {
LAB_141461200:
                  uVar26 = *puVar12 ^ *puVar9;
                  if (uVar26 == 0) goto code_r0x00014146120c;
                  uVar4 = 0;
                  if (uVar26 != 0) {
                    for (; (uVar26 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
                    }
                  }
                  uVar2 = (int)puVar12 + (((uint)(uVar4 >> 3) & 0x1fffffff) - iVar15);
                  goto LAB_141461260;
                }
                goto LAB_141461219;
              }
              lVar3 = 0;
              if (uVar26 != 0) {
                for (; (uVar26 >> lVar3 & 1) == 0; lVar3 = lVar3 + 1) {
                }
              }
              uVar2 = (uint)lVar3 >> 3;
            }
            else {
LAB_141461219:
              if ((puVar12 < piVar18 + -2) && ((int)*puVar9 == (int)*puVar12)) {
                puVar12 = (ulonglong *)((longlong)puVar12 + 4);
                puVar9 = (ulonglong *)((longlong)puVar9 + 4);
              }
              if ((puVar12 < (ulonglong *)((longlong)piVar18 - 6U)) &&
                 ((short)*puVar9 == (short)*puVar12)) {
                puVar12 = (ulonglong *)((longlong)puVar12 + 2);
                puVar9 = (ulonglong *)((longlong)puVar9 + 2);
              }
              if ((puVar12 < (ulonglong *)((longlong)piVar18 - 5U)) &&
                 ((char)*puVar9 == (char)*puVar12)) {
                puVar12 = (ulonglong *)((longlong)puVar12 + 1);
              }
              uVar2 = (int)puVar12 - iVar15;
            }
LAB_141461260:
            plVar34 = (longlong *)((longlong)plVar34 + (ulonglong)uVar2 + 4);
            if (pcVar30 < (char *)((ulonglong)(uVar2 + 0xf0) / 0xff + 6 + (longlong)param_3))
            goto LAB_141460ed0;
            if (uVar2 < 0xf) {
              *(char *)psVar20 = (char)*psVar20 + (char)uVar2;
            }
            else {
              uVar2 = uVar2 - 0xf;
              uVar26 = (ulonglong)uVar2;
              *(char *)psVar20 = (char)*psVar20 + '\x0f';
              *(short *)((longlong)param_3 + 0) = -1;
              *(short *)((longlong)param_3 + 2) = -1;
              if (0x3fb < uVar2) {
                uVar4 = (ulonglong)uVar2 / 0x3fc;
                do {
                  param_3 = (char *)((longlong)param_3 + 4);
                  uVar26 = (ulonglong)((int)uVar26 - 0x3fc);
                  *(short *)((longlong)param_3 + 0) = -1;
                  *(short *)((longlong)param_3 + 2) = -1;
                  uVar4 = uVar4 - 1;
                } while (uVar4 != 0);
              }
              pcVar21 = (char *)((longlong)param_3 + uVar26 / 0xff);
              *pcVar21 = (char)(uVar26 / 0xff) + (char)uVar26;
              param_3 = pcVar21 + 1;
            }
            local_res10 = plVar34;
            if ((longlong *)((longlong)piVar18 - 0xbU) <= plVar34) goto LAB_1414613c7;
            *(int *)((longlong)param_1 +
                    ((ulonglong)(*(longlong *)((longlong)plVar34 + -2) * -0x30e4432345000000) >>
                    0x34) * 4) = ((int)plVar34 + -2) - iVar7;
            uVar10 = (int)plVar34 - iVar7;
            uVar26 = (ulonglong)(*plVar34 * -0x30e4432345000000) >> 0x34;
            uVar2 = *(uint *)((longlong)param_1 + uVar26 * 4);
            *(uint *)((longlong)param_1 + uVar26 * 4) = uVar10;
            piVar19 = (int *)(lVar32 + (ulonglong)uVar2);
            if ((uVar2 + 0xffff < uVar10) || (*piVar19 != (int)*plVar34)) goto LAB_141461395;
            psVar22 = (short *)((longlong)param_3 + 1);
            *param_3 = '\0';
            psVar20 = (short *)param_3;
          } while( true );
        }
        goto LAB_141463015;
      }
LAB_1414613c7:
      uVar26 = 0;
      uVar8 = (longlong)piVar18 - (longlong)local_res10;
      if ((char *)((longlong)param_3 + uVar8 + 1 + (uVar8 + 0xf0) / 0xff) <= pcVar30) {
        if (uVar8 < 0xf) {
          *param_3 = (char)uVar8 << 4;
        }
        else {
          *param_3 = -0x10;
          uVar26 = uVar8 - 0xf;
          param_3 = (char *)((longlong)param_3 + 1);
          if (0xfe < uVar26) {
            memset(param_3,(int)CONCAT71((int7)(uVar26 / 0x1fe),0xff),uVar26 / 0xff);
            param_3 = (char *)((longlong)param_3 + uVar26 / 0xff);
            uVar26 = uVar26 % 0xff;
          }
          *param_3 = (char)uVar26;
        }
        memcpy((char *)((longlong)param_3 + 1),local_res10,uVar8);
        uVar26 = (ulonglong)(uint)((int)param_3 + 1 + ((int)uVar8 - local_res18));
      }
    }
    goto LAB_141463015;
  }
  _Src = (param_1->internal_donotuse).dictCtx;
  if (_Src == (LZ4_stream_t_internal *)0x0) {
    if (uVar2 < 0x10000) {
      uVar10 = (param_1->internal_donotuse).currentOffset;
      if (uVar2 < uVar10) {
        lVar32 = (longlong)param_2 - (ulonglong)uVar10;
        pcVar30 = param_3 + param_5;
        lVar3 = (uVar8 - uVar10) + (longlong)local_90;
        if ((uint)param_4 < 0x7e000001) {
          (param_1->internal_donotuse).dictSize = uVar2 + param_4;
          (param_1->internal_donotuse).currentOffset = uVar10 + param_4;
          (param_1->internal_donotuse).tableType = 2;
          puVar13 = (ulonglong *)param_2;
          if (0xc < param_4) {
            puVar9 = (ulonglong *)(param_2 + 1);
            iVar7 = (int)lVar32;
            *(int *)((longlong)param_1 +
                    ((ulonglong)(*(longlong *)param_2 * -0x30e4432345000000) >> 0x34) * 4) =
                 iVar15 - iVar7;
            uVar26 = *puVar9;
            puVar12 = (ulonglong *)param_2;
LAB_141462340:
            iVar28 = 1;
            iVar15 = iVar6 << 6;
            do {
              puVar33 = puVar9;
              uVar4 = uVar26 * -0x30e4432345000000 >> 0x34;
              lVar5 = (longlong)iVar28;
              uVar35 = *(uint *)((longlong)param_1 + uVar4 * 4);
              iVar28 = iVar15 >> 6;
              uVar24 = (int)puVar33 - iVar7;
              puVar9 = (ulonglong *)((longlong)puVar33 + lVar5);
              iVar15 = iVar15 + 1;
              puVar13 = puVar12;
              if ((ulonglong *)((longlong)piVar18 - 0xbU) < puVar9) goto LAB_14146288f;
              piVar19 = (int *)param_2;
              lVar5 = lVar32;
              if (uVar35 < uVar10) {
                piVar19 = local_90;
                lVar5 = lVar3;
              }
              piVar17 = (int *)(lVar5 + (ulonglong)uVar35);
              uVar26 = *puVar9;
              *(uint *)((longlong)param_1 + uVar4 * 4) = uVar24;
            } while (((uVar35 < uVar10 - uVar2) || (uVar35 + 0xffff < uVar24)) ||
                    (*piVar17 != (int)*puVar33));
            uVar26 = 0;
            iVar15 = uVar24 - uVar35;
            puVar13 = puVar33;
            if (puVar12 < puVar33 && piVar19 < piVar17) {
              do {
                piVar16 = (int *)((longlong)piVar17 - 1);
                puVar9 = (ulonglong *)((longlong)puVar33 - 1);
                puVar13 = puVar33;
                if (*(char *)((longlong)puVar33 - 1) != *(char *)((longlong)piVar17 - 1)) break;
                puVar33 = puVar9;
                puVar13 = puVar9;
                piVar17 = piVar16;
              } while (puVar12 < puVar9 && piVar19 < piVar16);
            }
            uVar35 = (int)puVar13 - (int)puVar12;
            uVar4 = (ulonglong)uVar35;
            pcVar21 = param_3 + 1;
            if (pcVar21 + uVar4 + uVar4 / 0xff + 8 <= pcVar30) {
              if (uVar35 < 0xf) {
                *param_3 = (char)uVar35 << 4;
              }
              else {
                uVar35 = uVar35 - 0xf;
                *param_3 = -0x10;
                if (0xfe < (int)uVar35) {
                  uVar26 = (ulonglong)uVar35 / 0xff;
                  memset(pcVar21,(int)CONCAT71((int7)(uVar26 >> 8),0xff),uVar26);
                  pcVar21 = pcVar21 + uVar26;
                  uVar35 = uVar35 + (int)uVar26 * -0xff;
                }
                *pcVar21 = (char)uVar35;
                pcVar21 = pcVar21 + 1;
              }
              pcVar23 = pcVar21 + uVar4;
              lVar5 = (longlong)puVar12 - (longlong)pcVar21;
              do {
                *(undefined8 *)pcVar21 = *(undefined8 *)(pcVar21 + lVar5);
                pcVar21 = pcVar21 + 8;
                pcVar31 = param_3;
              } while (pcVar21 < pcVar23);
              do {
                puVar9 = (ulonglong *)((longlong)puVar13 + 4);
                *(short *)pcVar23 = (short)iVar15;
                puVar12 = (ulonglong *)(piVar17 + 1);
                puVar33 = (ulonglong *)((longlong)piVar18 - 5);
                param_3 = pcVar23 + 2;
                iVar15 = (int)puVar9;
                if (piVar19 == local_90) {
                  puVar27 = (ulonglong *)
                            ((longlong)local_90 +
                            (longlong)((longlong)puVar13 + (uVar8 - (longlong)piVar17)));
                  if (puVar33 < puVar27) {
                    puVar27 = puVar33;
                  }
                  puVar14 = (ulonglong *)((longlong)puVar27 - 7);
                  if (puVar9 < puVar14) {
                    uVar26 = *puVar9 ^ *puVar12;
                    if (uVar26 == 0) {
                      puVar9 = (ulonglong *)((longlong)puVar13 + 0xc);
                      puVar12 = (ulonglong *)(piVar17 + 3);
                      if (puVar9 < puVar14) {
LAB_141462540:
                        uVar26 = *puVar9 ^ *puVar12;
                        if (uVar26 == 0) goto code_r0x00014146254c;
                        uVar4 = 0;
                        if (uVar26 != 0) {
                          for (; (uVar26 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
                          }
                        }
                        uVar35 = (((uint)(uVar4 >> 3) & 0x1fffffff) - iVar15) + (int)puVar9;
                        goto LAB_1414625a0;
                      }
                      goto LAB_141462559;
                    }
                    lVar5 = 0;
                    if (uVar26 != 0) {
                      for (; (uVar26 >> lVar5 & 1) == 0; lVar5 = lVar5 + 1) {
                      }
                    }
                    uVar35 = (uint)lVar5 >> 3;
                  }
                  else {
LAB_141462559:
                    if ((puVar9 < (ulonglong *)((longlong)puVar27 - 3U)) &&
                       ((int)*puVar12 == (int)*puVar9)) {
                      puVar9 = (ulonglong *)((longlong)puVar9 + 4);
                      puVar12 = (ulonglong *)((longlong)puVar12 + 4);
                    }
                    if ((puVar9 < (ulonglong *)((longlong)puVar27 - 1U)) &&
                       ((short)*puVar12 == (short)*puVar9)) {
                      puVar9 = (ulonglong *)((longlong)puVar9 + 2);
                      puVar12 = (ulonglong *)((longlong)puVar12 + 2);
                    }
                    if ((puVar9 < puVar27) && ((char)*puVar12 == (char)*puVar9)) {
                      puVar9 = (ulonglong *)((longlong)puVar9 + 1);
                    }
                    uVar35 = (int)puVar9 - iVar15;
                  }
LAB_1414625a0:
                  puVar13 = (ulonglong *)((longlong)puVar13 + (ulonglong)uVar35 + 4);
                  if (puVar13 == puVar27) {
                    puVar9 = (ulonglong *)(piVar18 + -3);
                    puVar12 = puVar27;
                    puVar14 = (ulonglong *)param_2;
                    if (puVar27 < puVar9) {
                      uVar26 = *(ulonglong *)param_2 ^ *puVar27;
                      if (uVar26 == 0) {
                        puVar12 = puVar27 + 1;
                        puVar14 = (ulonglong *)(param_2 + 8);
                        goto LAB_1414625da;
                      }
                      lVar5 = 0;
                      if (uVar26 != 0) {
                        for (; (uVar26 >> lVar5 & 1) == 0; lVar5 = lVar5 + 1) {
                        }
                      }
                      uVar24 = (uint)lVar5 >> 3;
                    }
                    else {
LAB_1414625da:
                      if (puVar12 < puVar9) {
LAB_1414625e0:
                        uVar26 = *puVar12 ^ *puVar14;
                        if (uVar26 == 0) goto code_r0x0001414625ec;
                        uVar4 = 0;
                        if (uVar26 != 0) {
                          for (; (uVar26 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
                          }
                        }
                        uVar24 = (int)puVar12 + (((uint)(uVar4 >> 3) & 0x1fffffff) - (int)puVar27);
                        goto LAB_14146263b;
                      }
LAB_1414625f9:
                      if ((puVar12 < piVar18 + -2) && ((int)*puVar14 == (int)*puVar12)) {
                        puVar12 = (ulonglong *)((longlong)puVar12 + 4);
                        puVar14 = (ulonglong *)((longlong)puVar14 + 4);
                      }
                      if ((puVar12 < (ulonglong *)((longlong)piVar18 - 6U)) &&
                         ((short)*puVar14 == (short)*puVar12)) {
                        puVar12 = (ulonglong *)((longlong)puVar12 + 2);
                        puVar14 = (ulonglong *)((longlong)puVar14 + 2);
                      }
                      if ((puVar12 < puVar33) && ((char)*puVar14 == (char)*puVar12)) {
                        puVar12 = (ulonglong *)((longlong)puVar12 + 1);
                      }
                      uVar24 = (int)puVar12 - (int)puVar27;
                    }
LAB_14146263b:
                    uVar35 = uVar35 + uVar24;
                    puVar13 = (ulonglong *)((longlong)puVar13 + (ulonglong)uVar24);
                  }
                }
                else {
                  puVar27 = (ulonglong *)(piVar18 + -3);
                  if (puVar9 < puVar27) {
                    uVar26 = *puVar9 ^ *puVar12;
                    if (uVar26 == 0) {
                      puVar9 = (ulonglong *)((longlong)puVar13 + 0xc);
                      puVar12 = (ulonglong *)(piVar17 + 3);
                      if (puVar9 < puVar27) {
LAB_141462740:
                        uVar26 = *puVar9 ^ *puVar12;
                        if (uVar26 == 0) goto code_r0x000141462748;
                        uVar4 = 0;
                        if (uVar26 != 0) {
                          for (; (uVar26 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
                          }
                        }
                        uVar35 = (int)puVar9 + (((uint)(uVar4 >> 3) & 0x1fffffff) - iVar15);
                        goto LAB_141462797;
                      }
                      goto LAB_141462755;
                    }
                    lVar5 = 0;
                    if (uVar26 != 0) {
                      for (; (uVar26 >> lVar5 & 1) == 0; lVar5 = lVar5 + 1) {
                      }
                    }
                    uVar35 = (uint)lVar5 >> 3;
                  }
                  else {
LAB_141462755:
                    if ((puVar9 < piVar18 + -2) && ((int)*puVar12 == (int)*puVar9)) {
                      puVar9 = (ulonglong *)((longlong)puVar9 + 4);
                      puVar12 = (ulonglong *)((longlong)puVar12 + 4);
                    }
                    if ((puVar9 < (ulonglong *)((longlong)piVar18 - 6U)) &&
                       ((short)*puVar12 == (short)*puVar9)) {
                      puVar9 = (ulonglong *)((longlong)puVar9 + 2);
                      puVar12 = (ulonglong *)((longlong)puVar12 + 2);
                    }
                    if ((puVar9 < puVar33) && ((char)*puVar12 == (char)*puVar9)) {
                      puVar9 = (ulonglong *)((longlong)puVar9 + 1);
                    }
                    uVar35 = (int)puVar9 - iVar15;
                  }
LAB_141462797:
                  puVar13 = (ulonglong *)((longlong)puVar13 + (ulonglong)uVar35 + 4);
                }
                if (pcVar30 < param_3 + (ulonglong)(uVar35 + 0xf0) / 0xff + 6) goto LAB_141462991;
                if (uVar35 < 0xf) {
                  *pcVar31 = (char)uVar35 + *pcVar31;
                }
                else {
                  uVar35 = uVar35 - 0xf;
                  *pcVar31 = *pcVar31 + '\x0f';
                  param_3[0] = -1;
                  param_3[1] = -1;
                  param_3[2] = -1;
                  param_3[3] = -1;
                  if (0x3fb < uVar35) {
                    uVar26 = (ulonglong)uVar35 / 0x3fc;
                    do {
                      param_3 = param_3 + 4;
                      uVar35 = uVar35 - 0x3fc;
                      param_3[0] = -1;
                      param_3[1] = -1;
                      param_3[2] = -1;
                      param_3[3] = -1;
                      uVar26 = uVar26 - 1;
                    } while (uVar26 != 0);
                  }
                  param_3[(ulonglong)uVar35 / 0xff] =
                       (char)uVar35 + (char)((ulonglong)uVar35 / 0xff);
                  param_3 = param_3 + (ulonglong)uVar35 / 0xff + 1;
                }
                if ((ulonglong *)((longlong)piVar18 - 0xbU) <= puVar13) goto LAB_14146288f;
                uVar24 = (int)puVar13 - iVar7;
                *(int *)((longlong)param_1 +
                        ((ulonglong)(*(longlong *)((longlong)puVar13 + -2) * -0x30e4432345000000) >>
                        0x34) * 4) = ((int)puVar13 + -2) - iVar7;
                uVar26 = *puVar13 * -0x30e4432345000000 >> 0x34;
                uVar35 = *(uint *)((longlong)param_1 + uVar26 * 4);
                piVar19 = (int *)param_2;
                lVar5 = lVar32;
                if (uVar35 < uVar10) {
                  piVar19 = local_90;
                  lVar5 = lVar3;
                }
                piVar17 = (int *)(lVar5 + (ulonglong)uVar35);
                *(uint *)((longlong)param_1 + uVar26 * 4) = uVar24;
                if (((uVar35 < uVar10 - uVar2) || (uVar35 + 0xffff < uVar24)) ||
                   (*piVar17 != (int)*puVar13)) goto LAB_141462865;
                pcVar23 = param_3 + 1;
                iVar15 = uVar24 - uVar35;
                *param_3 = '\0';
                pcVar31 = param_3;
              } while( true );
            }
            goto LAB_141462ffd;
          }
LAB_14146288f:
          uVar26 = 0;
          uVar8 = (longlong)piVar18 - (longlong)puVar13;
          if (param_3 + uVar8 + 1 + (uVar8 + 0xf0) / 0xff <= pcVar30) {
            if (uVar8 < 0xf) {
              *param_3 = (char)uVar8 << 4;
            }
            else {
              *param_3 = -0x10;
              uVar26 = uVar8 - 0xf;
              param_3 = param_3 + 1;
              if (0xfe < uVar26) {
                memset(param_3,(int)CONCAT71((int7)(uVar26 / 0x1fe),0xff),uVar26 / 0xff);
                param_3 = param_3 + uVar26 / 0xff;
                uVar26 = uVar26 % 0xff;
              }
              *param_3 = (char)uVar26;
            }
            memcpy(param_3 + 1,puVar13,uVar8);
            uVar26 = (ulonglong)(uint)((int)param_3 + 1 + ((int)uVar8 - local_res18));
          }
        }
        goto LAB_141462ffd;
      }
    }
    uVar10 = (param_1->internal_donotuse).currentOffset;
    lVar3 = (longlong)param_2 - (ulonglong)uVar10;
    pcVar30 = param_3 + param_5;
    lVar32 = (uVar8 - uVar10) + (longlong)local_90;
    if ((uint)param_4 < 0x7e000001) {
      (param_1->internal_donotuse).dictSize = uVar2 + param_4;
      (param_1->internal_donotuse).currentOffset = uVar10 + param_4;
      (param_1->internal_donotuse).tableType = 2;
      puVar13 = (ulonglong *)param_2;
      if (0xc < param_4) {
        puVar9 = (ulonglong *)(param_2 + 1);
        iVar7 = (int)lVar3;
        *(int *)((longlong)param_1 +
                ((ulonglong)(*(longlong *)param_2 * -0x30e4432345000000) >> 0x34) * 4) =
             iVar15 - iVar7;
        uVar26 = *puVar9;
        puVar12 = (ulonglong *)param_2;
LAB_141462a00:
        iVar28 = 1;
        iVar15 = iVar6 << 6;
        do {
          puVar33 = puVar9;
          lVar5 = (longlong)iVar28;
          uVar35 = (int)puVar33 - iVar7;
          iVar28 = iVar15 >> 6;
          puVar25 = (uint *)((longlong)param_1 + (uVar26 * -0x30e4432345000000 >> 0x34) * 4);
          uVar2 = *puVar25;
          puVar9 = (ulonglong *)((longlong)puVar33 + lVar5);
          iVar15 = iVar15 + 1;
          puVar13 = puVar12;
          if (param_2 + (longlong)param_4 + -0xb < puVar9) goto LAB_141462f57;
          lVar5 = lVar3;
          piVar19 = (int *)param_2;
          if (uVar2 < uVar10) {
            lVar5 = lVar32;
            piVar19 = local_90;
          }
          uVar26 = *puVar9;
          piVar18 = (int *)(lVar5 + (ulonglong)uVar2);
          *puVar25 = uVar35;
        } while ((uVar2 + 0xffff < uVar35) || (*piVar18 != (int)*puVar33));
        uVar26 = 0;
        iVar15 = uVar35 - uVar2;
        puVar13 = puVar33;
        if (puVar12 < puVar33 && piVar19 < piVar18) {
          do {
            piVar17 = (int *)((longlong)piVar18 - 1);
            puVar9 = (ulonglong *)((longlong)puVar33 - 1);
            puVar13 = puVar33;
            if (*(char *)((longlong)puVar33 - 1) != *(char *)((longlong)piVar18 - 1)) break;
            piVar18 = piVar17;
            puVar33 = puVar9;
            puVar13 = puVar9;
          } while (puVar12 < puVar9 && piVar19 < piVar17);
        }
        uVar2 = (int)puVar13 - (int)puVar12;
        uVar4 = (ulonglong)uVar2;
        pcVar21 = param_3 + 1;
        if (pcVar21 + uVar4 / 0xff + 8 + uVar4 <= pcVar30) {
          if (uVar2 < 0xf) {
            *param_3 = (char)uVar2 << 4;
          }
          else {
            uVar2 = uVar2 - 0xf;
            *param_3 = -0x10;
            if (0xfe < (int)uVar2) {
              uVar26 = (ulonglong)uVar2 / 0xff;
              memset(pcVar21,(int)CONCAT71((int7)(uVar26 >> 8),0xff),uVar26);
              pcVar21 = pcVar21 + uVar26;
              uVar2 = uVar2 + (int)uVar26 * -0xff;
            }
            *pcVar21 = (char)uVar2;
            pcVar21 = pcVar21 + 1;
          }
          pcVar23 = pcVar21;
          do {
            *(undefined8 *)pcVar23 =
                 *(undefined8 *)(pcVar23 + ((longlong)puVar12 - (longlong)pcVar21));
            pcVar23 = pcVar23 + 8;
          } while (pcVar23 < pcVar21 + uVar4);
          pcVar21 = pcVar21 + uVar4;
          do {
            puVar9 = (ulonglong *)((longlong)puVar13 + 4);
            *(short *)pcVar21 = (short)iVar15;
            puVar12 = (ulonglong *)(piVar18 + 1);
            puVar33 = (ulonglong *)(param_2 + (longlong)param_4 + -5);
            pcVar21 = pcVar21 + 2;
            iVar15 = (int)puVar9;
            if (piVar19 == local_90) {
              puVar27 = (ulonglong *)
                        ((longlong)local_90 +
                        (longlong)((longlong)puVar13 + (uVar8 - (longlong)piVar18)));
              if (puVar33 < puVar27) {
                puVar27 = puVar33;
              }
              puVar14 = (ulonglong *)((longlong)puVar27 - 7);
              if (puVar9 < puVar14) {
                uVar26 = *puVar9 ^ *puVar12;
                if (uVar26 == 0) {
                  puVar9 = (ulonglong *)((longlong)puVar13 + 0xc);
                  puVar12 = (ulonglong *)(piVar18 + 3);
                  if (puVar9 < puVar14) {
LAB_141462c10:
                    uVar26 = *puVar9 ^ *puVar12;
                    if (uVar26 == 0) goto code_r0x000141462c1c;
                    uVar4 = 0;
                    if (uVar26 != 0) {
                      for (; (uVar26 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
                      }
                    }
                    uVar2 = (((uint)(uVar4 >> 3) & 0x1fffffff) - iVar15) + (int)puVar9;
                    goto LAB_141462c70;
                  }
                  goto LAB_141462c29;
                }
                lVar5 = 0;
                if (uVar26 != 0) {
                  for (; (uVar26 >> lVar5 & 1) == 0; lVar5 = lVar5 + 1) {
                  }
                }
                uVar2 = (uint)lVar5 >> 3;
              }
              else {
LAB_141462c29:
                if ((puVar9 < (ulonglong *)((longlong)puVar27 - 3U)) &&
                   ((int)*puVar12 == (int)*puVar9)) {
                  puVar9 = (ulonglong *)((longlong)puVar9 + 4);
                  puVar12 = (ulonglong *)((longlong)puVar12 + 4);
                }
                if ((puVar9 < (ulonglong *)((longlong)puVar27 - 1U)) &&
                   ((short)*puVar12 == (short)*puVar9)) {
                  puVar9 = (ulonglong *)((longlong)puVar9 + 2);
                  puVar12 = (ulonglong *)((longlong)puVar12 + 2);
                }
                if ((puVar9 < puVar27) && ((char)*puVar12 == (char)*puVar9)) {
                  puVar9 = (ulonglong *)((longlong)puVar9 + 1);
                }
                uVar2 = (int)puVar9 - iVar15;
              }
LAB_141462c70:
              puVar13 = (ulonglong *)((longlong)puVar13 + (ulonglong)uVar2 + 4);
              if (puVar13 == puVar27) {
                puVar12 = (ulonglong *)(param_2 + (longlong)param_4 + -0xc);
                puVar9 = puVar27;
                puVar14 = (ulonglong *)param_2;
                if (puVar27 < puVar12) {
                  uVar26 = *(ulonglong *)param_2 ^ *puVar27;
                  if (uVar26 == 0) {
                    puVar9 = puVar27 + 1;
                    puVar14 = (ulonglong *)(param_2 + 8);
                    goto LAB_141462cab;
                  }
                  lVar5 = 0;
                  if (uVar26 != 0) {
                    for (; (uVar26 >> lVar5 & 1) == 0; lVar5 = lVar5 + 1) {
                    }
                  }
                  uVar35 = (uint)lVar5 >> 3;
                }
                else {
LAB_141462cab:
                  if (puVar9 < puVar12) {
LAB_141462cb0:
                    uVar26 = *puVar9 ^ *puVar14;
                    if (uVar26 == 0) goto code_r0x000141462cbc;
                    uVar4 = 0;
                    if (uVar26 != 0) {
                      for (; (uVar26 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
                      }
                    }
                    uVar35 = (int)puVar9 + (((uint)(uVar4 >> 3) & 0x1fffffff) - (int)puVar27);
                    goto LAB_141462d0d;
                  }
LAB_141462cc9:
                  if ((puVar9 < param_2 + (longlong)param_4 + -8) && ((int)*puVar14 == (int)*puVar9)
                     ) {
                    puVar9 = (ulonglong *)((longlong)puVar9 + 4);
                    puVar14 = (ulonglong *)((longlong)puVar14 + 4);
                  }
                  if ((puVar9 < param_2 + (longlong)param_4 + -6) &&
                     ((short)*puVar14 == (short)*puVar9)) {
                    puVar9 = (ulonglong *)((longlong)puVar9 + 2);
                    puVar14 = (ulonglong *)((longlong)puVar14 + 2);
                  }
                  if ((puVar9 < puVar33) && ((char)*puVar14 == (char)*puVar9)) {
                    puVar9 = (ulonglong *)((longlong)puVar9 + 1);
                  }
                  uVar35 = (int)puVar9 - (int)puVar27;
                }
LAB_141462d0d:
                uVar2 = uVar2 + uVar35;
                puVar13 = (ulonglong *)((longlong)puVar13 + (ulonglong)uVar35);
              }
            }
            else {
              puVar27 = (ulonglong *)(param_2 + (longlong)param_4 + -0xc);
              if (puVar9 < puVar27) {
                uVar26 = *puVar12 ^ *puVar9;
                if (uVar26 == 0) {
                  puVar9 = (ulonglong *)((longlong)puVar13 + 0xc);
                  puVar12 = (ulonglong *)(piVar18 + 3);
                  if (puVar9 < puVar27) {
LAB_141462e10:
                    uVar26 = *puVar12 ^ *puVar9;
                    if (uVar26 == 0) goto code_r0x000141462e18;
                    uVar4 = 0;
                    if (uVar26 != 0) {
                      for (; (uVar26 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
                      }
                    }
                    uVar2 = (int)puVar9 + (((uint)(uVar4 >> 3) & 0x1fffffff) - iVar15);
                    goto LAB_141462e69;
                  }
                  goto LAB_141462e25;
                }
                lVar5 = 0;
                if (uVar26 != 0) {
                  for (; (uVar26 >> lVar5 & 1) == 0; lVar5 = lVar5 + 1) {
                  }
                }
                uVar2 = (uint)lVar5 >> 3;
              }
              else {
LAB_141462e25:
                if ((puVar9 < param_2 + (longlong)param_4 + -8) && ((int)*puVar12 == (int)*puVar9))
                {
                  puVar9 = (ulonglong *)((longlong)puVar9 + 4);
                  puVar12 = (ulonglong *)((longlong)puVar12 + 4);
                }
                if ((puVar9 < param_2 + (longlong)param_4 + -6) &&
                   ((short)*puVar12 == (short)*puVar9)) {
                  puVar9 = (ulonglong *)((longlong)puVar9 + 2);
                  puVar12 = (ulonglong *)((longlong)puVar12 + 2);
                }
                if ((puVar9 < puVar33) && ((char)*puVar12 == (char)*puVar9)) {
                  puVar9 = (ulonglong *)((longlong)puVar9 + 1);
                }
                uVar2 = (int)puVar9 - iVar15;
              }
LAB_141462e69:
              puVar13 = (ulonglong *)((longlong)puVar13 + (ulonglong)uVar2 + 4);
            }
            if (pcVar30 < pcVar21 + (ulonglong)(uVar2 + 0xf0) / 0xff + 6) goto LAB_141462991;
            if (uVar2 < 0xf) {
              *param_3 = *param_3 + (char)uVar2;
              param_3 = pcVar21;
            }
            else {
              uVar2 = uVar2 - 0xf;
              *param_3 = *param_3 + '\x0f';
              pcVar21[0] = -1;
              pcVar21[1] = -1;
              pcVar21[2] = -1;
              pcVar21[3] = -1;
              if (0x3fb < uVar2) {
                uVar26 = (ulonglong)uVar2 / 0x3fc;
                do {
                  pcVar21 = pcVar21 + 4;
                  uVar2 = uVar2 - 0x3fc;
                  pcVar21[0] = -1;
                  pcVar21[1] = -1;
                  pcVar21[2] = -1;
                  pcVar21[3] = -1;
                  uVar26 = uVar26 - 1;
                } while (uVar26 != 0);
              }
              pcVar21[(ulonglong)uVar2 / 0xff] = (char)((ulonglong)uVar2 / 0xff) + (char)uVar2;
              param_3 = pcVar21 + (ulonglong)uVar2 / 0xff + 1;
            }
            if (param_2 + (longlong)param_4 + -0xb <= puVar13) goto LAB_141462f57;
            uVar35 = (int)puVar13 - iVar7;
            *(int *)((longlong)param_1 +
                    ((ulonglong)(*(longlong *)((longlong)puVar13 + -2) * -0x30e4432345000000) >>
                    0x34) * 4) = ((int)puVar13 + -2) - iVar7;
            uVar26 = *puVar13 * -0x30e4432345000000 >> 0x34;
            uVar2 = *(uint *)((longlong)param_1 + uVar26 * 4);
            piVar19 = (int *)param_2;
            lVar5 = lVar3;
            if (uVar2 < uVar10) {
              piVar19 = local_90;
              lVar5 = lVar32;
            }
            piVar18 = (int *)(lVar5 + (ulonglong)uVar2);
            *(uint *)((longlong)param_1 + uVar26 * 4) = uVar35;
            if ((uVar2 + 0xffff < uVar35) || (*piVar18 != (int)*puVar13)) goto LAB_141462f2f;
            pcVar21 = param_3 + 1;
            iVar15 = uVar35 - uVar2;
            *param_3 = '\0';
          } while( true );
        }
        goto LAB_141462ffd;
      }
LAB_141462f57:
      pcVar21 = param_2 + ((longlong)param_4 - (longlong)puVar13);
      if (param_3 + (longlong)(pcVar21 + (ulonglong)(pcVar21 + 0xf0) / 0xff + 1) <= pcVar30) {
        if (pcVar21 < (char *)0xf) {
          *param_3 = (char)pcVar21 << 4;
        }
        else {
          *param_3 = -0x10;
          pcVar30 = pcVar21 + -0xf;
          param_3 = param_3 + 1;
          if ((char *)0xfe < pcVar30) {
            memset(param_3,(int)CONCAT71((int7)((ulonglong)pcVar30 / 0x1fe),0xff),
                   (ulonglong)pcVar30 / 0xff);
            param_3 = param_3 + (ulonglong)pcVar30 / 0xff;
            pcVar30 = (char *)((ulonglong)pcVar30 % 0xff);
          }
          *param_3 = (char)pcVar30;
        }
        memcpy(param_3 + 1,puVar13,(size_t)pcVar21);
        uVar26 = (ulonglong)(uint)((int)pcVar21 + (((int)param_3 + 1) - local_res18));
        goto LAB_141462ffd;
      }
    }
LAB_141462991:
    uVar26 = 0;
  }
  else {
    if (0x1000 < param_4) {
      memcpy(param_1,_Src,0x4020);
      uVar2 = (param_1->internal_donotuse).currentOffset;
      piVar19 = (int *)(param_1->internal_donotuse).dictionary;
      lVar3 = (longlong)param_2 - (ulonglong)uVar2;
      uVar10 = (param_1->internal_donotuse).dictSize;
      lVar32 = ((ulonglong)uVar10 - (ulonglong)uVar2) + (longlong)piVar19;
      pcVar30 = param_3 + param_5;
      if ((uint)param_4 < 0x7e000001) {
        (param_1->internal_donotuse).dictSize = uVar10 + param_4;
        iVar7 = (int)lVar3;
        (param_1->internal_donotuse).currentOffset = uVar2 + param_4;
        puVar13 = (ulonglong *)(param_2 + 1);
        (param_1->internal_donotuse).tableType = 2;
        *(int *)((longlong)param_1 +
                ((ulonglong)(*(longlong *)param_2 * -0x30e4432345000000) >> 0x34) * 4) =
             iVar15 - iVar7;
        uVar8 = *puVar13;
        puVar9 = (ulonglong *)param_2;
LAB_141461560:
        iVar28 = 1;
        iVar15 = iVar6 << 6;
        do {
          puVar12 = puVar13;
          lVar5 = (longlong)iVar28;
          puVar25 = (uint *)((uVar8 * -0x30e4432345000000 >> 0x34) * 4 + (longlong)param_1);
          uVar24 = (int)puVar12 - iVar7;
          iVar28 = iVar15 >> 6;
          uVar35 = *puVar25;
          puVar13 = (ulonglong *)((longlong)puVar12 + lVar5);
          iVar15 = iVar15 + 1;
          if ((ulonglong *)((longlong)piVar18 - 0xbU) < puVar13) goto LAB_141461ac7;
          lVar5 = lVar32;
          piVar17 = piVar19;
          if (uVar2 <= uVar35) {
            lVar5 = lVar3;
            piVar17 = (int *)param_2;
          }
          uVar8 = *puVar13;
          piVar16 = (int *)(lVar5 + (ulonglong)uVar35);
          *puVar25 = uVar24;
        } while ((uVar35 + 0xffff < uVar24) || (*piVar16 != (int)*puVar12));
        uVar26 = 0;
        iVar15 = uVar24 - uVar35;
        if (puVar9 < puVar12 && piVar17 < piVar16) {
          do {
            piVar1 = (int *)((longlong)piVar16 - 1);
            puVar13 = (ulonglong *)((longlong)puVar12 - 1);
            if (*(char *)((longlong)puVar12 - 1) != *(char *)((longlong)piVar16 - 1)) break;
            piVar16 = piVar1;
            puVar12 = puVar13;
          } while (piVar17 < piVar1 && puVar9 < puVar13);
        }
        uVar35 = (int)puVar12 - (int)puVar9;
        uVar8 = (ulonglong)uVar35;
        pcVar21 = param_3 + 1;
        if (pcVar21 + uVar8 / 0xff + 8 + uVar8 <= pcVar30) {
          if (uVar35 < 0xf) {
            *param_3 = (char)uVar35 << 4;
          }
          else {
            uVar35 = uVar35 - 0xf;
            *param_3 = -0x10;
            if (0xfe < (int)uVar35) {
              uVar26 = (ulonglong)uVar35 / 0xff;
              memset(pcVar21,(int)CONCAT71((int7)(uVar26 >> 8),0xff),uVar26);
              pcVar21 = pcVar21 + uVar26;
              uVar35 = uVar35 + (int)uVar26 * -0xff;
            }
            *pcVar21 = (char)uVar35;
            pcVar21 = pcVar21 + 1;
          }
          pcVar23 = pcVar21 + uVar8;
          lVar5 = (longlong)puVar9 - (longlong)pcVar21;
          do {
            *(undefined8 *)pcVar21 = *(undefined8 *)(pcVar21 + lVar5);
            pcVar21 = pcVar21 + 8;
          } while (pcVar21 < pcVar23);
          do {
            *(short *)pcVar23 = (short)iVar15;
            puVar13 = (ulonglong *)((longlong)puVar12 + 4);
            puVar9 = (ulonglong *)(piVar16 + 1);
            pcVar23 = pcVar23 + 2;
            puVar33 = (ulonglong *)((longlong)piVar18 - 5);
            iVar15 = (int)puVar13;
            if (piVar17 == piVar19) {
              puVar27 = (ulonglong *)
                        ((longlong)piVar19 + ((ulonglong)uVar10 - (longlong)piVar16) +
                        (longlong)puVar12);
              if (puVar33 < puVar27) {
                puVar27 = puVar33;
              }
              puVar14 = (ulonglong *)((longlong)puVar27 - 7);
              if (puVar13 < puVar14) {
                uVar8 = *puVar9 ^ *puVar13;
                if (uVar8 == 0) {
                  puVar13 = (ulonglong *)((longlong)puVar12 + 0xc);
                  puVar9 = (ulonglong *)(piVar16 + 3);
                  if (puVar13 < puVar14) {
LAB_141461780:
                    uVar8 = *puVar9 ^ *puVar13;
                    if (uVar8 == 0) goto code_r0x00014146178c;
                    uVar26 = 0;
                    if (uVar8 != 0) {
                      for (; (uVar8 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
                      }
                    }
                    uVar35 = (((uint)(uVar26 >> 3) & 0x1fffffff) - iVar15) + (int)puVar13;
                    goto LAB_1414617e0;
                  }
                  goto LAB_141461799;
                }
                lVar5 = 0;
                if (uVar8 != 0) {
                  for (; (uVar8 >> lVar5 & 1) == 0; lVar5 = lVar5 + 1) {
                  }
                }
                uVar35 = (uint)lVar5 >> 3;
              }
              else {
LAB_141461799:
                if ((puVar13 < (ulonglong *)((longlong)puVar27 - 3U)) &&
                   ((int)*puVar9 == (int)*puVar13)) {
                  puVar13 = (ulonglong *)((longlong)puVar13 + 4);
                  puVar9 = (ulonglong *)((longlong)puVar9 + 4);
                }
                if ((puVar13 < (ulonglong *)((longlong)puVar27 - 1U)) &&
                   ((short)*puVar9 == (short)*puVar13)) {
                  puVar13 = (ulonglong *)((longlong)puVar13 + 2);
                  puVar9 = (ulonglong *)((longlong)puVar9 + 2);
                }
                if ((puVar13 < puVar27) && ((char)*puVar9 == (char)*puVar13)) {
                  puVar13 = (ulonglong *)((longlong)puVar13 + 1);
                }
                uVar35 = (int)puVar13 - iVar15;
              }
LAB_1414617e0:
              puVar12 = (ulonglong *)((longlong)puVar12 + (ulonglong)uVar35 + 4);
              if (puVar12 == puVar27) {
                puVar13 = (ulonglong *)(piVar18 + -3);
                puVar9 = puVar27;
                puVar14 = (ulonglong *)param_2;
                if (puVar27 < puVar13) {
                  uVar8 = *puVar27 ^ *(ulonglong *)param_2;
                  if (uVar8 == 0) {
                    puVar9 = puVar27 + 1;
                    puVar14 = (ulonglong *)(param_2 + 8);
                    goto LAB_14146181a;
                  }
                  lVar5 = 0;
                  if (uVar8 != 0) {
                    for (; (uVar8 >> lVar5 & 1) == 0; lVar5 = lVar5 + 1) {
                    }
                  }
                  uVar24 = (uint)lVar5 >> 3;
                }
                else {
LAB_14146181a:
                  if (puVar9 < puVar13) {
LAB_141461820:
                    uVar8 = *puVar14 ^ *puVar9;
                    if (uVar8 == 0) goto code_r0x00014146182c;
                    uVar26 = 0;
                    if (uVar8 != 0) {
                      for (; (uVar8 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
                      }
                    }
                    uVar24 = (int)puVar9 + (((uint)(uVar26 >> 3) & 0x1fffffff) - (int)puVar27);
                    goto LAB_14146187b;
                  }
LAB_141461839:
                  if ((puVar9 < piVar18 + -2) && ((int)*puVar14 == (int)*puVar9)) {
                    puVar9 = (ulonglong *)((longlong)puVar9 + 4);
                    puVar14 = (ulonglong *)((longlong)puVar14 + 4);
                  }
                  if ((puVar9 < (ulonglong *)((longlong)piVar18 - 6U)) &&
                     ((short)*puVar14 == (short)*puVar9)) {
                    puVar9 = (ulonglong *)((longlong)puVar9 + 2);
                    puVar14 = (ulonglong *)((longlong)puVar14 + 2);
                  }
                  if ((puVar9 < puVar33) && ((char)*puVar14 == (char)*puVar9)) {
                    puVar9 = (ulonglong *)((longlong)puVar9 + 1);
                  }
                  uVar24 = (int)puVar9 - (int)puVar27;
                }
LAB_14146187b:
                uVar35 = uVar35 + uVar24;
                puVar12 = (ulonglong *)((longlong)puVar12 + (ulonglong)uVar24);
              }
            }
            else {
              puVar27 = (ulonglong *)(piVar18 + -3);
              if (puVar13 < puVar27) {
                uVar8 = *puVar13 ^ *puVar9;
                if (uVar8 == 0) {
                  puVar13 = (ulonglong *)((longlong)puVar12 + 0xc);
                  puVar9 = (ulonglong *)(piVar16 + 3);
                  if (puVar13 < puVar27) {
LAB_141461980:
                    uVar8 = *puVar13 ^ *puVar9;
                    if (uVar8 == 0) goto code_r0x000141461988;
                    uVar26 = 0;
                    if (uVar8 != 0) {
                      for (; (uVar8 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
                      }
                    }
                    uVar35 = (int)puVar13 + (((uint)(uVar26 >> 3) & 0x1fffffff) - iVar15);
                    goto LAB_1414619d7;
                  }
                  goto LAB_141461995;
                }
                lVar5 = 0;
                if (uVar8 != 0) {
                  for (; (uVar8 >> lVar5 & 1) == 0; lVar5 = lVar5 + 1) {
                  }
                }
                uVar35 = (uint)lVar5 >> 3;
              }
              else {
LAB_141461995:
                if ((puVar13 < piVar18 + -2) && ((int)*puVar9 == (int)*puVar13)) {
                  puVar13 = (ulonglong *)((longlong)puVar13 + 4);
                  puVar9 = (ulonglong *)((longlong)puVar9 + 4);
                }
                if ((puVar13 < (ulonglong *)((longlong)piVar18 - 6U)) &&
                   ((short)*puVar9 == (short)*puVar13)) {
                  puVar13 = (ulonglong *)((longlong)puVar13 + 2);
                  puVar9 = (ulonglong *)((longlong)puVar9 + 2);
                }
                if ((puVar13 < puVar33) && ((char)*puVar9 == (char)*puVar13)) {
                  puVar13 = (ulonglong *)((longlong)puVar13 + 1);
                }
                uVar35 = (int)puVar13 - iVar15;
              }
LAB_1414619d7:
              puVar12 = (ulonglong *)((longlong)puVar12 + (ulonglong)uVar35 + 4);
            }
            if (pcVar30 < pcVar23 + (ulonglong)(uVar35 + 0xf0) / 0xff + 6) goto LAB_141462991;
            if (uVar35 < 0xf) {
              *param_3 = *param_3 + (char)uVar35;
              param_3 = pcVar23;
            }
            else {
              uVar35 = uVar35 - 0xf;
              *param_3 = *param_3 + '\x0f';
              pcVar23[0] = -1;
              pcVar23[1] = -1;
              pcVar23[2] = -1;
              pcVar23[3] = -1;
              if (0x3fb < uVar35) {
                uVar8 = (ulonglong)uVar35 / 0x3fc;
                do {
                  pcVar23 = pcVar23 + 4;
                  uVar35 = uVar35 - 0x3fc;
                  pcVar23[0] = -1;
                  pcVar23[1] = -1;
                  pcVar23[2] = -1;
                  pcVar23[3] = -1;
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
              }
              pcVar23[(ulonglong)uVar35 / 0xff] = (char)uVar35 + (char)((ulonglong)uVar35 / 0xff);
              param_3 = pcVar23 + (ulonglong)uVar35 / 0xff + 1;
            }
            puVar9 = puVar12;
            if ((ulonglong *)((longlong)piVar18 - 0xbU) <= puVar12) goto LAB_141461ac7;
            uVar24 = (int)puVar12 - iVar7;
            *(int *)((longlong)param_1 +
                    ((ulonglong)(*(longlong *)((longlong)puVar12 + -2) * -0x30e4432345000000) >>
                    0x34) * 4) = ((int)puVar12 + -2) - iVar7;
            uVar8 = *puVar12 * -0x30e4432345000000 >> 0x34;
            uVar35 = *(uint *)((longlong)param_1 + uVar8 * 4);
            piVar17 = (int *)param_2;
            lVar5 = lVar3;
            if (uVar35 < uVar2) {
              piVar17 = piVar19;
              lVar5 = lVar32;
            }
            piVar16 = (int *)(lVar5 + (ulonglong)uVar35);
            *(uint *)((longlong)param_1 + uVar8 * 4) = uVar24;
            if ((uVar35 + 0xffff < uVar24) || (*piVar16 != (int)*puVar12)) goto LAB_141461aa3;
            pcVar23 = param_3 + 1;
            iVar15 = uVar24 - uVar35;
            *param_3 = '\0';
          } while( true );
        }
        goto LAB_141462ffd;
      }
      goto LAB_141462991;
    }
    uVar2 = (param_1->internal_donotuse).currentOffset;
    piVar19 = (int *)_Src->dictionary;
    lVar3 = (longlong)param_2 - (ulonglong)uVar2;
    uVar10 = _Src->dictSize;
    iVar7 = uVar2 - _Src->currentOffset;
    lVar32 = (ulonglong)uVar10 - (ulonglong)_Src->currentOffset;
    pcVar30 = param_3 + param_5;
    if ((uint)param_4 < 0x7e000001) {
      param_1->table[0x802] = 0;
      (param_1->internal_donotuse).dictSize = param_4;
      (param_1->internal_donotuse).currentOffset = uVar2 + param_4;
      (param_1->internal_donotuse).tableType = 2;
      puVar13 = (ulonglong *)param_2;
      if (0xc < param_4) {
        puVar9 = (ulonglong *)(param_2 + 1);
        iVar28 = (int)lVar3;
        *(int *)((longlong)param_1 +
                ((ulonglong)(*(longlong *)param_2 * -0x30e4432345000000) >> 0x34) * 4) =
             iVar15 - iVar28;
        uVar8 = *puVar9;
LAB_141461c40:
        iVar29 = 1;
        iVar15 = iVar6 << 6;
        do {
          puVar12 = puVar9;
          uVar26 = uVar8 * -0x30e4432345000000 >> 0x34;
          uVar35 = *(uint *)((longlong)param_1 + uVar26 * 4);
          uVar24 = (int)puVar12 - iVar28;
          lVar5 = (longlong)iVar29;
          iVar29 = iVar15 >> 6;
          iVar15 = iVar15 + 1;
          puVar9 = (ulonglong *)((longlong)puVar12 + lVar5);
          if ((ulonglong *)((longlong)piVar18 - 0xbU) < puVar9) goto LAB_1414621b4;
          if (uVar35 < uVar2) {
            piVar17 = (int *)((longlong)piVar19 + (ulonglong)_Src->hashTable[uVar26] + lVar32);
            uVar35 = iVar7 + _Src->hashTable[uVar26];
            piVar16 = piVar19;
          }
          else {
            piVar17 = (int *)((ulonglong)uVar35 + lVar3);
            piVar16 = (int *)param_2;
          }
          uVar8 = *puVar9;
          *(uint *)((longlong)param_1 + uVar26 * 4) = uVar24;
        } while ((uVar35 + 0xffff < uVar24) || (*piVar17 != (int)*puVar12));
        uVar26 = 0;
        iVar15 = uVar24 - uVar35;
        if (piVar16 < piVar17 && puVar13 < puVar12) {
          do {
            piVar1 = (int *)((longlong)piVar17 - 1);
            puVar9 = (ulonglong *)((longlong)puVar12 - 1);
            if (*(char *)((longlong)puVar12 - 1) != *(char *)((longlong)piVar17 - 1)) break;
            piVar17 = piVar1;
            puVar12 = puVar9;
          } while (puVar13 < puVar9 && piVar16 < piVar1);
        }
        uVar35 = (int)puVar12 - (int)puVar13;
        uVar8 = (ulonglong)uVar35;
        pcVar21 = param_3 + 1;
        if (pcVar21 + uVar8 + uVar8 / 0xff + 8 <= pcVar30) {
          if (uVar35 < 0xf) {
            *param_3 = (char)uVar35 << 4;
          }
          else {
            uVar35 = uVar35 - 0xf;
            *param_3 = -0x10;
            if (0xfe < (int)uVar35) {
              uVar26 = (ulonglong)uVar35 / 0xff;
              memset(pcVar21,(int)CONCAT71((int7)(uVar26 >> 8),0xff),uVar26);
              pcVar21 = pcVar21 + uVar26;
              uVar35 = uVar35 + (int)uVar26 * -0xff;
            }
            *pcVar21 = (char)uVar35;
            pcVar21 = pcVar21 + 1;
          }
          pcVar23 = pcVar21 + uVar8;
          lVar5 = (longlong)puVar13 - (longlong)pcVar21;
          do {
            *(undefined8 *)pcVar21 = *(undefined8 *)(pcVar21 + lVar5);
            pcVar21 = pcVar21 + 8;
          } while (pcVar21 < pcVar23);
          do {
            *(short *)pcVar23 = (short)iVar15;
            puVar13 = (ulonglong *)((longlong)puVar12 + 4);
            puVar9 = (ulonglong *)(piVar17 + 1);
            pcVar23 = pcVar23 + 2;
            puVar33 = (ulonglong *)((longlong)piVar18 - 5);
            iVar15 = (int)puVar13;
            if (piVar16 == piVar19) {
              puVar27 = (ulonglong *)
                        ((longlong)piVar19 + ((ulonglong)uVar10 - (longlong)piVar17) +
                        (longlong)puVar12);
              if (puVar33 < puVar27) {
                puVar27 = puVar33;
              }
              puVar14 = (ulonglong *)((longlong)puVar27 - 7);
              if (puVar13 < puVar14) {
                uVar8 = *puVar13 ^ *puVar9;
                if (uVar8 == 0) {
                  puVar13 = (ulonglong *)((longlong)puVar12 + 0xc);
                  puVar9 = (ulonglong *)(piVar17 + 3);
                  if (puVar13 < puVar14) {
LAB_141461e60:
                    uVar8 = *puVar13 ^ *puVar9;
                    if (uVar8 == 0) goto code_r0x000141461e6c;
                    uVar26 = 0;
                    if (uVar8 != 0) {
                      for (; (uVar8 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
                      }
                    }
                    uVar35 = (((uint)(uVar26 >> 3) & 0x1fffffff) - iVar15) + (int)puVar13;
                    goto LAB_141461ec0;
                  }
                  goto LAB_141461e79;
                }
                lVar5 = 0;
                if (uVar8 != 0) {
                  for (; (uVar8 >> lVar5 & 1) == 0; lVar5 = lVar5 + 1) {
                  }
                }
                uVar35 = (uint)lVar5 >> 3;
              }
              else {
LAB_141461e79:
                if ((puVar13 < (ulonglong *)((longlong)puVar27 - 3U)) &&
                   ((int)*puVar9 == (int)*puVar13)) {
                  puVar13 = (ulonglong *)((longlong)puVar13 + 4);
                  puVar9 = (ulonglong *)((longlong)puVar9 + 4);
                }
                if ((puVar13 < (ulonglong *)((longlong)puVar27 - 1U)) &&
                   ((short)*puVar9 == (short)*puVar13)) {
                  puVar13 = (ulonglong *)((longlong)puVar13 + 2);
                  puVar9 = (ulonglong *)((longlong)puVar9 + 2);
                }
                if ((puVar13 < puVar27) && ((char)*puVar9 == (char)*puVar13)) {
                  puVar13 = (ulonglong *)((longlong)puVar13 + 1);
                }
                uVar35 = (int)puVar13 - iVar15;
              }
LAB_141461ec0:
              puVar12 = (ulonglong *)((longlong)puVar12 + (ulonglong)uVar35 + 4);
              if (puVar12 == puVar27) {
                puVar9 = (ulonglong *)(piVar18 + -3);
                puVar13 = puVar27;
                puVar14 = (ulonglong *)param_2;
                if (puVar27 < puVar9) {
                  uVar8 = *(ulonglong *)param_2 ^ *puVar27;
                  if (uVar8 == 0) {
                    puVar13 = puVar27 + 1;
                    puVar14 = (ulonglong *)(param_2 + 8);
                    goto LAB_141461efb;
                  }
                  lVar5 = 0;
                  if (uVar8 != 0) {
                    for (; (uVar8 >> lVar5 & 1) == 0; lVar5 = lVar5 + 1) {
                    }
                  }
                  uVar24 = (uint)lVar5 >> 3;
                }
                else {
LAB_141461efb:
                  if (puVar13 < puVar9) {
LAB_141461f00:
                    uVar8 = *puVar14 ^ *puVar13;
                    if (uVar8 == 0) goto code_r0x000141461f0c;
                    uVar26 = 0;
                    if (uVar8 != 0) {
                      for (; (uVar8 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
                      }
                    }
                    uVar24 = (int)puVar13 + (((uint)(uVar26 >> 3) & 0x1fffffff) - (int)puVar27);
                    goto LAB_141461f5d;
                  }
LAB_141461f19:
                  if ((puVar13 < piVar18 + -2) && ((int)*puVar14 == (int)*puVar13)) {
                    puVar13 = (ulonglong *)((longlong)puVar13 + 4);
                    puVar14 = (ulonglong *)((longlong)puVar14 + 4);
                  }
                  if ((puVar13 < (ulonglong *)((longlong)piVar18 - 6U)) &&
                     ((short)*puVar14 == (short)*puVar13)) {
                    puVar13 = (ulonglong *)((longlong)puVar13 + 2);
                    puVar14 = (ulonglong *)((longlong)puVar14 + 2);
                  }
                  if ((puVar13 < puVar33) && ((char)*puVar14 == (char)*puVar13)) {
                    puVar13 = (ulonglong *)((longlong)puVar13 + 1);
                  }
                  uVar24 = (int)puVar13 - (int)puVar27;
                }
LAB_141461f5d:
                uVar35 = uVar35 + uVar24;
                puVar12 = (ulonglong *)((longlong)puVar12 + (ulonglong)uVar24);
              }
            }
            else {
              puVar27 = (ulonglong *)(piVar18 + -3);
              if (puVar13 < puVar27) {
                uVar8 = *puVar13 ^ *puVar9;
                if (uVar8 == 0) {
                  puVar13 = (ulonglong *)((longlong)puVar12 + 0xc);
                  puVar9 = (ulonglong *)(piVar17 + 3);
                  if (puVar13 < puVar27) {
LAB_141462060:
                    uVar8 = *puVar13 ^ *puVar9;
                    if (uVar8 == 0) goto code_r0x000141462068;
                    uVar26 = 0;
                    if (uVar8 != 0) {
                      for (; (uVar8 >> uVar26 & 1) == 0; uVar26 = uVar26 + 1) {
                      }
                    }
                    uVar35 = (int)puVar13 + (((uint)(uVar26 >> 3) & 0x1fffffff) - iVar15);
                    goto LAB_1414620b9;
                  }
                  goto LAB_141462075;
                }
                lVar5 = 0;
                if (uVar8 != 0) {
                  for (; (uVar8 >> lVar5 & 1) == 0; lVar5 = lVar5 + 1) {
                  }
                }
                uVar35 = (uint)lVar5 >> 3;
              }
              else {
LAB_141462075:
                if ((puVar13 < piVar18 + -2) && ((int)*puVar9 == (int)*puVar13)) {
                  puVar13 = (ulonglong *)((longlong)puVar13 + 4);
                  puVar9 = (ulonglong *)((longlong)puVar9 + 4);
                }
                if ((puVar13 < (ulonglong *)((longlong)piVar18 - 6U)) &&
                   ((short)*puVar9 == (short)*puVar13)) {
                  puVar13 = (ulonglong *)((longlong)puVar13 + 2);
                  puVar9 = (ulonglong *)((longlong)puVar9 + 2);
                }
                if ((puVar13 < puVar33) && ((char)*puVar9 == (char)*puVar13)) {
                  puVar13 = (ulonglong *)((longlong)puVar13 + 1);
                }
                uVar35 = (int)puVar13 - iVar15;
              }
LAB_1414620b9:
              puVar12 = (ulonglong *)((longlong)puVar12 + (ulonglong)uVar35 + 4);
            }
            if (pcVar30 < pcVar23 + (ulonglong)(uVar35 + 0xf0) / 0xff + 6) goto LAB_141462991;
            if (uVar35 < 0xf) {
              *param_3 = (char)uVar35 + *param_3;
              param_3 = pcVar23;
            }
            else {
              uVar35 = uVar35 - 0xf;
              *param_3 = *param_3 + '\x0f';
              pcVar23[0] = -1;
              pcVar23[1] = -1;
              pcVar23[2] = -1;
              pcVar23[3] = -1;
              if (0x3fb < uVar35) {
                uVar8 = (ulonglong)uVar35 / 0x3fc;
                do {
                  pcVar23 = pcVar23 + 4;
                  uVar35 = uVar35 - 0x3fc;
                  pcVar23[0] = -1;
                  pcVar23[1] = -1;
                  pcVar23[2] = -1;
                  pcVar23[3] = -1;
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
              }
              pcVar23[(ulonglong)uVar35 / 0xff] = (char)((ulonglong)uVar35 / 0xff) + (char)uVar35;
              param_3 = pcVar23 + (ulonglong)uVar35 / 0xff + 1;
            }
            puVar13 = puVar12;
            if ((ulonglong *)((longlong)piVar18 - 0xbU) <= puVar12) goto LAB_1414621b4;
            uVar24 = (int)puVar12 - iVar28;
            *(int *)((longlong)param_1 +
                    ((ulonglong)(*(longlong *)((longlong)puVar12 + -2) * -0x30e4432345000000) >>
                    0x34) * 4) = ((int)puVar12 + -2) - iVar28;
            uVar8 = *puVar12 * -0x30e4432345000000 >> 0x34;
            uVar35 = *(uint *)((longlong)param_1 + uVar8 * 4);
            if (uVar35 < uVar2) {
              piVar17 = (int *)((longlong)piVar19 + (ulonglong)_Src->hashTable[uVar8] + lVar32);
              uVar35 = iVar7 + _Src->hashTable[uVar8];
              piVar16 = piVar19;
            }
            else {
              piVar17 = (int *)(lVar3 + (ulonglong)uVar35);
              piVar16 = (int *)param_2;
            }
            *(uint *)((longlong)param_1 + uVar8 * 4) = uVar24;
            if ((uVar35 + 0xffff < uVar24) || (*piVar17 != (int)*puVar12)) goto LAB_141462191;
            pcVar23 = param_3 + 1;
            iVar15 = uVar24 - uVar35;
            *param_3 = '\0';
          } while( true );
        }
        goto LAB_141462ffd;
      }
LAB_1414621b4:
      uVar26 = 0;
      uVar8 = (longlong)piVar18 - (longlong)puVar13;
      if (param_3 + (uVar8 + 0xf0) / 0xff + uVar8 + 1 <= pcVar30) {
        if (uVar8 < 0xf) {
          *param_3 = (char)uVar8 << 4;
        }
        else {
          *param_3 = -0x10;
          uVar26 = uVar8 - 0xf;
          param_3 = param_3 + 1;
          if (0xfe < uVar26) {
            memset(param_3,(int)CONCAT71((int7)(uVar26 / 0x1fe),0xff),uVar26 / 0xff);
            param_3 = param_3 + uVar26 / 0xff;
            uVar26 = uVar26 % 0xff;
          }
          *param_3 = (char)uVar26;
        }
        memcpy(param_3 + 1,puVar13,uVar8);
        uVar26 = (ulonglong)(uint)((int)param_3 + 1 + ((int)uVar8 - local_res18));
      }
    }
  }
LAB_141462ffd:
  (param_1->internal_donotuse).dictionary = (uchar *)param_2;
  (param_1->internal_donotuse).dictSize = param_4;
LAB_141463015:
  return (int)uVar26;
code_r0x000141462748:
  puVar9 = puVar9 + 1;
  puVar12 = puVar12 + 1;
  if (puVar27 <= puVar9) goto LAB_141462755;
  goto LAB_141462740;
code_r0x00014146254c:
  puVar9 = puVar9 + 1;
  puVar12 = puVar12 + 1;
  if (puVar14 <= puVar9) goto LAB_141462559;
  goto LAB_141462540;
code_r0x0001414625ec:
  puVar12 = puVar12 + 1;
  puVar14 = puVar14 + 1;
  if (puVar9 <= puVar12) goto LAB_1414625f9;
  goto LAB_1414625e0;
LAB_141462865:
  uVar26 = *(ulonglong *)((longlong)puVar13 + 1);
  puVar9 = (ulonglong *)((longlong)puVar13 + 1);
  puVar12 = puVar13;
  goto LAB_141462340;
code_r0x000141462e18:
  puVar9 = puVar9 + 1;
  puVar12 = puVar12 + 1;
  if (puVar27 <= puVar9) goto LAB_141462e25;
  goto LAB_141462e10;
code_r0x000141462c1c:
  puVar9 = puVar9 + 1;
  puVar12 = puVar12 + 1;
  if (puVar14 <= puVar9) goto LAB_141462c29;
  goto LAB_141462c10;
code_r0x000141462cbc:
  puVar9 = puVar9 + 1;
  puVar14 = puVar14 + 1;
  if (puVar12 <= puVar9) goto LAB_141462cc9;
  goto LAB_141462cb0;
LAB_141462f2f:
  uVar26 = *(ulonglong *)((longlong)puVar13 + 1);
  puVar9 = (ulonglong *)((longlong)puVar13 + 1);
  puVar12 = puVar13;
  goto LAB_141462a00;
code_r0x000141461988:
  puVar13 = puVar13 + 1;
  puVar9 = puVar9 + 1;
  if (puVar27 <= puVar13) goto LAB_141461995;
  goto LAB_141461980;
code_r0x00014146178c:
  puVar13 = puVar13 + 1;
  puVar9 = puVar9 + 1;
  if (puVar14 <= puVar13) goto LAB_141461799;
  goto LAB_141461780;
code_r0x00014146182c:
  puVar9 = puVar9 + 1;
  puVar14 = puVar14 + 1;
  if (puVar13 <= puVar9) goto LAB_141461839;
  goto LAB_141461820;
LAB_141461ac7:
  uVar8 = (longlong)piVar18 - (longlong)puVar9;
  if (param_3 + (uVar8 + 0xf0) / 0xff + uVar8 + 1 <= pcVar30) {
    if (uVar8 < 0xf) {
      *param_3 = (char)uVar8 << 4;
    }
    else {
      *param_3 = -0x10;
      uVar26 = uVar8 - 0xf;
      param_3 = param_3 + 1;
      if (0xfe < uVar26) {
        memset(param_3,(int)CONCAT71((int7)(uVar26 / 0x1fe),0xff),uVar26 / 0xff);
        param_3 = param_3 + uVar26 / 0xff;
        uVar26 = uVar26 % 0xff;
      }
      *param_3 = (char)uVar26;
    }
    memcpy(param_3 + 1,puVar9,uVar8);
    uVar26 = (ulonglong)(uint)((int)param_3 + 1 + ((int)uVar8 - local_res18));
    goto LAB_141462ffd;
  }
  goto LAB_141462991;
LAB_141461aa3:
  uVar8 = *(ulonglong *)((longlong)puVar12 + 1);
  puVar13 = (ulonglong *)((longlong)puVar12 + 1);
  goto LAB_141461560;
code_r0x000141462068:
  puVar13 = puVar13 + 1;
  puVar9 = puVar9 + 1;
  if (puVar27 <= puVar13) goto LAB_141462075;
  goto LAB_141462060;
code_r0x000141461e6c:
  puVar13 = puVar13 + 1;
  puVar9 = puVar9 + 1;
  if (puVar14 <= puVar13) goto LAB_141461e79;
  goto LAB_141461e60;
code_r0x000141461f0c:
  puVar13 = puVar13 + 1;
  puVar14 = puVar14 + 1;
  if (puVar9 <= puVar13) goto LAB_141461f19;
  goto LAB_141461f00;
LAB_141462191:
  uVar8 = *(ulonglong *)((longlong)puVar12 + 1);
  puVar9 = (ulonglong *)((longlong)puVar12 + 1);
  goto LAB_141461c40;
code_r0x000141460d2c:
  puVar9 = puVar9 + 1;
  puVar12 = puVar12 + 1;
  if (puVar13 <= puVar9) goto LAB_141460d39;
  goto LAB_141460d20;
LAB_141460eb5:
  lVar3 = *(longlong *)((longlong)param_2 + 1);
  plVar11 = (longlong *)((longlong)param_2 + 1);
  local_res10 = (longlong *)param_2;
  goto LAB_141460b40;
code_r0x00014146120c:
  puVar12 = puVar12 + 1;
  puVar9 = puVar9 + 1;
  if (puVar13 <= puVar12) goto LAB_141461219;
  goto LAB_141461200;
LAB_141460ed0:
  uVar26 = 0;
  goto LAB_141463015;
LAB_141461395:
  lVar3 = *(longlong *)((longlong)plVar34 + 1);
  plVar11 = (longlong *)((longlong)plVar34 + 1);
  goto LAB_141461040;
}

// LZ4_compress_fast_extState @ 141463040

int __cdecl
Trace::LZ4_compress_fast_extState
          (void *param_1,char *param_2,char *param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  ulonglong *puVar2;
  ushort *puVar3;
  ushort uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  int *piVar8;
  short *psVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  int iVar12;
  uint uVar13;
  longlong *plVar14;
  int iVar15;
  int *piVar16;
  char *pcVar17;
  int *piVar18;
  short *psVar19;
  char *pcVar20;
  longlong *plVar21;
  int iVar22;
  int iVar23;
  short sVar24;
  uint uVar25;
  longlong lVar26;
  int iVar27;
  int *piVar28;
  longlong *plVar29;
  int *piVar30;
  void *local_res8;
  
  if (param_1 == (void *)0x0) {
    local_res8 = (void *)0x0;
  }
  else {
    memset(param_1,0,0x4020);
    local_res8 = param_1;
  }
  iVar12 = 0;
  iVar15 = 1;
  if (0 < param_6) {
    iVar15 = param_6;
  }
  if ((uint)param_4 < 0x7e000001) {
    iVar12 = param_4 / 0xff + 0x10 + param_4;
  }
  uVar13 = *(uint *)((longlong)local_res8 + 0x4000);
  lVar26 = (longlong)param_2 - (ulonglong)uVar13;
  sVar24 = (short)lVar26;
  iVar23 = (int)lVar26;
  iVar27 = (int)param_3;
  if (iVar12 <= param_5) {
    if (0x1000a < param_4) {
      if (0x7e000000 < (uint)param_4) {
        return 0;
      }
      plVar21 = (longlong *)(param_2 + 1);
      *(int *)((longlong)local_res8 + 0x4018) = *(int *)((longlong)local_res8 + 0x4018) + param_4;
      *(uint *)((longlong)local_res8 + 0x4000) = uVar13 + param_4;
      *(undefined2 *)((longlong)local_res8 + 0x4006) = 2;
      *(int *)((longlong)local_res8 +
              ((ulonglong)(*(longlong *)param_2 * -0x30e4432345000000) >> 0x34) * 4) =
           (int)param_2 - iVar23;
      lVar7 = *plVar21;
      plVar29 = (longlong *)param_2;
LAB_141463570:
      iVar22 = 1;
      iVar12 = iVar15 << 6;
      do {
        plVar14 = plVar21;
        uVar10 = (ulonglong)(lVar7 * -0x30e4432345000000) >> 0x34;
        uVar13 = *(uint *)((longlong)local_res8 + uVar10 * 4);
        uVar25 = (int)plVar14 - iVar23;
        plVar21 = (longlong *)((longlong)iVar22 + (longlong)plVar14);
        iVar22 = iVar12 >> 6;
        iVar12 = iVar12 + 1;
        if (param_2 + (longlong)param_4 + -0xb < plVar21) goto LAB_14146389e;
        lVar7 = *plVar21;
        piVar28 = (int *)(lVar26 + (ulonglong)uVar13);
        *(uint *)((longlong)local_res8 + uVar10 * 4) = uVar25;
      } while ((uVar13 + 0xffff < uVar25) || (*piVar28 != (int)*plVar14));
      if (param_2 < piVar28 && plVar29 < plVar14) {
        do {
          piVar8 = (int *)((longlong)piVar28 - 1);
          plVar21 = (longlong *)((longlong)plVar14 - 1);
          if (*(char *)((longlong)plVar14 - 1) != *(char *)((longlong)piVar28 - 1)) break;
          piVar28 = piVar8;
          plVar14 = plVar21;
        } while (plVar29 < plVar21 && param_2 < piVar8);
      }
      uVar13 = (int)plVar14 - (int)plVar29;
      psVar19 = (short *)((longlong)param_3 + 1);
      if (uVar13 < 0xf) {
        *param_3 = (char)uVar13 << 4;
      }
      else {
        uVar25 = uVar13 - 0xf;
        *param_3 = -0x10;
        if (0xfe < (int)uVar25) {
          uVar10 = (ulonglong)uVar25 / 0xff;
          memset(psVar19,(int)CONCAT71((int7)(uVar10 >> 8),0xff),uVar10);
          psVar19 = (short *)((longlong)psVar19 + uVar10);
          uVar25 = uVar25 + (int)uVar10 * -0xff;
        }
        *(char *)psVar19 = (char)uVar25;
        psVar19 = (short *)((longlong)psVar19 + 1);
      }
      psVar9 = (short *)((ulonglong)uVar13 + (longlong)psVar19);
      lVar7 = (longlong)plVar29 - (longlong)psVar19;
      do {
        *(undefined8 *)psVar19 = *(undefined8 *)((longlong)psVar19 + lVar7);
        psVar19 = psVar19 + 4;
      } while (psVar19 < psVar9);
      puVar2 = (ulonglong *)(param_2 + (longlong)param_4 + -0xc);
      psVar19 = (short *)param_3;
      plVar29 = plVar14;
      do {
        puVar11 = (ulonglong *)((longlong)plVar29 + 4);
        puVar5 = (ulonglong *)(piVar28 + 1);
        *psVar9 = (short)plVar29 - (short)piVar28;
        param_3 = (char *)(psVar9 + 1);
        iVar12 = (int)puVar11;
        if (puVar11 < puVar2) {
          uVar10 = *puVar11 ^ *puVar5;
          if (uVar10 == 0) {
            puVar11 = (ulonglong *)((longlong)plVar29 + 0xc);
            puVar5 = (ulonglong *)(piVar28 + 3);
            if (puVar11 < puVar2) {
LAB_141463720:
              uVar10 = *puVar11 ^ *puVar5;
              if (uVar10 == 0) goto code_r0x00014146372c;
              uVar6 = 0;
              if (uVar10 != 0) {
                for (; (uVar10 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
                }
              }
              uVar13 = (int)puVar11 + (((uint)(uVar6 >> 3) & 0x1fffffff) - iVar12);
              goto LAB_14146377b;
            }
            goto LAB_141463739;
          }
          lVar7 = 0;
          if (uVar10 != 0) {
            for (; (uVar10 >> lVar7 & 1) == 0; lVar7 = lVar7 + 1) {
            }
          }
          uVar13 = (uint)lVar7 >> 3;
        }
        else {
LAB_141463739:
          if ((puVar11 < param_2 + (longlong)param_4 + -8) && ((int)*puVar5 == (int)*puVar11)) {
            puVar11 = (ulonglong *)((longlong)puVar11 + 4);
            puVar5 = (ulonglong *)((longlong)puVar5 + 4);
          }
          if ((puVar11 < param_2 + (longlong)param_4 + -6) && ((short)*puVar5 == (short)*puVar11)) {
            puVar11 = (ulonglong *)((longlong)puVar11 + 2);
            puVar5 = (ulonglong *)((longlong)puVar5 + 2);
          }
          if ((puVar11 < param_2 + (longlong)param_4 + -5) && ((char)*puVar5 == (char)*puVar11)) {
            puVar11 = (ulonglong *)((longlong)puVar11 + 1);
          }
          uVar13 = (int)puVar11 - iVar12;
        }
LAB_14146377b:
        plVar29 = (longlong *)((longlong)plVar29 + (ulonglong)uVar13 + 4);
        if (uVar13 < 0xf) {
          *(char *)psVar19 = (char)uVar13 + (char)*psVar19;
        }
        else {
          uVar13 = uVar13 - 0xf;
          *(char *)psVar19 = (char)*psVar19 + '\x0f';
          *(short *)((longlong)param_3 + 0) = -1;
          *(short *)((longlong)param_3 + 2) = -1;
          if (0x3fb < uVar13) {
            uVar10 = (ulonglong)uVar13 / 0x3fc;
            do {
              param_3 = (char *)((longlong)param_3 + 4);
              uVar13 = uVar13 - 0x3fc;
              *(short *)((longlong)param_3 + 0) = -1;
              *(short *)((longlong)param_3 + 2) = -1;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          pcVar20 = (char *)((longlong)param_3 + (ulonglong)uVar13 / 0xff);
          *pcVar20 = (char)uVar13 + (char)((ulonglong)uVar13 / 0xff);
          param_3 = pcVar20 + 1;
        }
        if (param_2 + (longlong)param_4 + -0xb <= plVar29) {
LAB_14146389e:
          pcVar20 = param_2 + ((longlong)param_4 - (longlong)plVar29);
          if (pcVar20 < (char *)0xf) {
            *param_3 = (char)pcVar20 << 4;
          }
          else {
            *param_3 = -0x10;
            pcVar17 = pcVar20 + -0xf;
            param_3 = (char *)((longlong)param_3 + 1);
            if ((char *)0xfe < pcVar17) {
              memset(param_3,(int)CONCAT71((int7)((ulonglong)pcVar17 / 0x1fe),0xff),
                     (ulonglong)pcVar17 / 0xff);
              param_3 = (char *)((longlong)param_3 + (ulonglong)pcVar17 / 0xff);
              pcVar17 = (char *)((ulonglong)pcVar17 % 0xff);
            }
            *param_3 = (char)pcVar17;
          }
          memcpy((char *)((longlong)param_3 + 1),plVar29,(size_t)pcVar20);
          return (int)param_3 + 1 + ((int)pcVar20 - iVar27);
        }
        *(int *)((longlong)local_res8 +
                ((ulonglong)(*(longlong *)((longlong)plVar29 + -2) * -0x30e4432345000000) >> 0x34) *
                4) = ((int)plVar29 + -2) - iVar23;
        uVar25 = (int)plVar29 - iVar23;
        uVar10 = (ulonglong)(*plVar29 * -0x30e4432345000000) >> 0x34;
        uVar13 = *(uint *)((longlong)local_res8 + uVar10 * 4);
        *(uint *)((longlong)local_res8 + uVar10 * 4) = uVar25;
        piVar28 = (int *)(lVar26 + (ulonglong)uVar13);
        if ((uVar13 + 0xffff < uVar25) || (*piVar28 != (int)*plVar29)) goto LAB_14146387a;
        psVar9 = (short *)((longlong)param_3 + 1);
        *param_3 = '\0';
        psVar19 = (short *)param_3;
      } while( true );
    }
    if (0x7e000000 < (uint)param_4) {
      return 0;
    }
    *(int *)((longlong)local_res8 + 0x4018) = *(int *)((longlong)local_res8 + 0x4018) + param_4;
    *(uint *)((longlong)local_res8 + 0x4000) = uVar13 + param_4;
    *(undefined2 *)((longlong)local_res8 + 0x4006) = 3;
    piVar28 = (int *)param_2;
    if (param_4 < 0xd) {
LAB_14146347f:
      pcVar20 = param_2 + ((longlong)param_4 - (longlong)piVar28);
      if (pcVar20 < (char *)0xf) {
        *param_3 = (char)pcVar20 << 4;
      }
      else {
        *param_3 = -0x10;
        pcVar17 = pcVar20 + -0xf;
        param_3 = (char *)((longlong)param_3 + 1);
        if ((char *)0xfe < pcVar17) {
          memset(param_3,(int)CONCAT71((int7)((ulonglong)pcVar17 / 0x1fe),0xff),
                 (ulonglong)pcVar17 / 0xff);
          param_3 = (char *)((longlong)param_3 + (ulonglong)pcVar17 / 0xff);
          pcVar17 = (char *)((ulonglong)pcVar17 % 0xff);
        }
        *param_3 = (char)pcVar17;
      }
      memcpy((char *)((longlong)param_3 + 1),piVar28,(size_t)pcVar20);
      return (int)param_3 + 1 + ((int)pcVar20 - iVar27);
    }
    piVar8 = (int *)(param_2 + 1);
    *(short *)((longlong)local_res8 + (ulonglong)((uint)(*(int *)param_2 * -0x61c8864f) >> 0x13) * 2
              ) = (short)param_2 - sVar24;
    iVar12 = *piVar8;
    piVar30 = (int *)param_2;
LAB_141463180:
    iVar22 = 1;
    iVar23 = iVar15 << 6;
    do {
      piVar18 = piVar8;
      uVar10 = (ulonglong)((uint)(iVar12 * -0x61c8864f) >> 0x13);
      lVar7 = (longlong)iVar22;
      iVar22 = iVar23 >> 6;
      piVar8 = (int *)(lVar7 + (longlong)piVar18);
      iVar23 = iVar23 + 1;
      piVar28 = piVar30;
      if (param_2 + (longlong)param_4 + -0xb < piVar8) goto LAB_14146347f;
      iVar12 = *piVar8;
      piVar16 = (int *)((ulonglong)*(ushort *)((longlong)local_res8 + uVar10 * 2) + lVar26);
      *(short *)((longlong)local_res8 + uVar10 * 2) = (short)piVar18 - sVar24;
    } while (*piVar16 != *piVar18);
    piVar28 = piVar18;
    if (param_2 < piVar16 && piVar30 < piVar18) {
      do {
        piVar8 = (int *)((longlong)piVar16 - 1);
        piVar1 = (int *)((longlong)piVar18 - 1);
        piVar28 = piVar18;
        if (*(char *)((longlong)piVar18 - 1) != *(char *)((longlong)piVar16 - 1)) break;
        piVar16 = piVar8;
        piVar28 = piVar1;
        piVar18 = piVar1;
      } while (param_2 < piVar8 && piVar30 < piVar1);
    }
    uVar13 = (int)piVar28 - (int)piVar30;
    psVar19 = (short *)((longlong)param_3 + 1);
    if (uVar13 < 0xf) {
      *param_3 = (char)uVar13 << 4;
    }
    else {
      uVar25 = uVar13 - 0xf;
      *param_3 = -0x10;
      if (0xfe < (int)uVar25) {
        uVar10 = (ulonglong)uVar25 / 0xff;
        memset(psVar19,(int)CONCAT71((int7)(uVar10 >> 8),0xff),uVar10);
        psVar19 = (short *)((longlong)psVar19 + uVar10);
        uVar25 = uVar25 + (int)uVar10 * -0xff;
      }
      *(char *)psVar19 = (char)uVar25;
      psVar19 = (short *)((longlong)psVar19 + 1);
    }
    psVar9 = (short *)((ulonglong)uVar13 + (longlong)psVar19);
    lVar7 = (longlong)piVar30 - (longlong)psVar19;
    do {
      *(undefined8 *)psVar19 = *(undefined8 *)(lVar7 + (longlong)psVar19);
      psVar19 = psVar19 + 4;
    } while (psVar19 < psVar9);
    puVar2 = (ulonglong *)(param_2 + (longlong)param_4 + -0xc);
    psVar19 = (short *)param_3;
    do {
      puVar11 = (ulonglong *)(piVar16 + 1);
      *psVar9 = (short)piVar28 - (short)piVar16;
      puVar5 = (ulonglong *)(piVar28 + 1);
      param_3 = (char *)(psVar9 + 1);
      iVar12 = (int)puVar5;
      if (puVar5 < puVar2) {
        uVar10 = *puVar5 ^ *puVar11;
        if (uVar10 == 0) {
          puVar5 = (ulonglong *)(piVar28 + 3);
          puVar11 = (ulonglong *)(piVar16 + 3);
          if (puVar5 < puVar2) {
LAB_141463310:
            uVar10 = *puVar5 ^ *puVar11;
            if (uVar10 == 0) goto code_r0x00014146331c;
            uVar6 = 0;
            if (uVar10 != 0) {
              for (; (uVar10 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
              }
            }
            uVar13 = (((uint)(uVar6 >> 3) & 0x1fffffff) - iVar12) + (int)puVar5;
            goto LAB_14146336d;
          }
          goto LAB_141463329;
        }
        lVar7 = 0;
        if (uVar10 != 0) {
          for (; (uVar10 >> lVar7 & 1) == 0; lVar7 = lVar7 + 1) {
          }
        }
        uVar13 = (uint)lVar7 >> 3;
      }
      else {
LAB_141463329:
        if ((puVar5 < param_2 + (longlong)param_4 + -8) && ((int)*puVar11 == (int)*puVar5)) {
          puVar5 = (ulonglong *)((longlong)puVar5 + 4);
          puVar11 = (ulonglong *)((longlong)puVar11 + 4);
        }
        if ((puVar5 < param_2 + (longlong)param_4 + -6) && ((short)*puVar11 == (short)*puVar5)) {
          puVar5 = (ulonglong *)((longlong)puVar5 + 2);
          puVar11 = (ulonglong *)((longlong)puVar11 + 2);
        }
        if ((puVar5 < param_2 + (longlong)param_4 + -5) && ((char)*puVar11 == (char)*puVar5)) {
          puVar5 = (ulonglong *)((longlong)puVar5 + 1);
        }
        uVar13 = (int)puVar5 - iVar12;
      }
LAB_14146336d:
      piVar28 = (int *)((longlong)piVar28 + (ulonglong)uVar13 + 4);
      if (uVar13 < 0xf) {
        *(char *)psVar19 = (char)uVar13 + (char)*psVar19;
      }
      else {
        uVar13 = uVar13 - 0xf;
        *(char *)psVar19 = (char)*psVar19 + '\x0f';
        *(short *)((longlong)param_3 + 0) = -1;
        *(short *)((longlong)param_3 + 2) = -1;
        if (0x3fb < uVar13) {
          uVar10 = (ulonglong)uVar13 / 0x3fc;
          do {
            param_3 = (char *)((longlong)param_3 + 4);
            uVar13 = uVar13 - 0x3fc;
            *(short *)((longlong)param_3 + 0) = -1;
            *(short *)((longlong)param_3 + 2) = -1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
        pcVar20 = (char *)((longlong)param_3 + (ulonglong)uVar13 / 0xff);
        *pcVar20 = (char)((ulonglong)uVar13 / 0xff) + (char)uVar13;
        param_3 = pcVar20 + 1;
      }
      if (param_2 + (longlong)param_4 + -0xb <= piVar28) goto LAB_14146347f;
      *(short *)((longlong)local_res8 +
                (ulonglong)((uint)(*(int *)((longlong)piVar28 + -2) * -0x61c8864f) >> 0x13) * 2) =
           ((short)piVar28 + -2) - sVar24;
      uVar10 = (ulonglong)((uint)(*piVar28 * -0x61c8864f) >> 0x13);
      uVar4 = *(ushort *)((longlong)local_res8 + uVar10 * 2);
      *(short *)((longlong)local_res8 + uVar10 * 2) = (short)piVar28 - sVar24;
      piVar16 = (int *)((ulonglong)uVar4 + lVar26);
      if (*piVar16 != *piVar28) goto LAB_14146345d;
      psVar9 = (short *)((longlong)param_3 + 1);
      *param_3 = '\0';
      psVar19 = (short *)param_3;
    } while( true );
  }
  pcVar20 = param_3 + param_5;
  if (param_4 < 0x1000b) {
    if ((uint)param_4 < 0x7e000001) {
      *(int *)((longlong)local_res8 + 0x4018) = *(int *)((longlong)local_res8 + 0x4018) + param_4;
      *(uint *)((longlong)local_res8 + 0x4000) = uVar13 + param_4;
      *(undefined2 *)((longlong)local_res8 + 0x4006) = 3;
      piVar28 = (int *)param_2;
      if (0xc < param_4) {
        piVar8 = (int *)(param_2 + 1);
        *(short *)((longlong)local_res8 +
                  (ulonglong)((uint)(*(int *)param_2 * -0x61c8864f) >> 0x13) * 2) =
             (short)param_2 - sVar24;
        iVar12 = *piVar8;
LAB_1414639c0:
        iVar22 = 1;
        iVar23 = iVar15 << 6;
        do {
          piVar30 = piVar8;
          piVar8 = (int *)((longlong)iVar22 + (longlong)piVar30);
          iVar22 = iVar23 >> 6;
          iVar23 = iVar23 + 1;
          puVar3 = (ushort *)
                   ((longlong)local_res8 + (ulonglong)((uint)(iVar12 * -0x61c8864f) >> 0x13) * 2);
          if (param_2 + (longlong)param_4 + -0xb < piVar8) goto LAB_141463d03;
          iVar12 = *piVar8;
          uVar4 = *puVar3;
          *puVar3 = (short)piVar30 - sVar24;
          piVar18 = (int *)((ulonglong)uVar4 + lVar26);
        } while (*piVar18 != *piVar30);
        if (param_2 < piVar18 && piVar28 < piVar30) {
          do {
            piVar8 = (int *)((longlong)piVar18 - 1);
            piVar16 = (int *)((longlong)piVar30 - 1);
            if (*(char *)((longlong)piVar30 - 1) != *(char *)((longlong)piVar18 - 1)) break;
            piVar18 = piVar8;
            piVar30 = piVar16;
          } while (piVar28 < piVar16 && param_2 < piVar8);
        }
        uVar13 = (int)piVar30 - (int)piVar28;
        uVar10 = (ulonglong)uVar13;
        psVar19 = (short *)((longlong)param_3 + 1);
        if (pcVar20 < (char *)(uVar10 / 0xff + 8 + uVar10 + (longlong)psVar19)) {
          return 0;
        }
        if (uVar13 < 0xf) {
          *param_3 = (char)uVar13 << 4;
        }
        else {
          uVar13 = uVar13 - 0xf;
          *param_3 = -0x10;
          if (0xfe < (int)uVar13) {
            uVar6 = (ulonglong)uVar13 / 0xff;
            memset(psVar19,(int)CONCAT71((int7)(uVar6 >> 8),0xff),uVar6);
            psVar19 = (short *)((longlong)psVar19 + uVar6);
            uVar13 = uVar13 + (int)uVar6 * -0xff;
          }
          *(char *)psVar19 = (char)uVar13;
          psVar19 = (short *)((longlong)psVar19 + 1);
        }
        psVar9 = (short *)((longlong)psVar19 + uVar10);
        lVar7 = (longlong)piVar28 - (longlong)psVar19;
        do {
          *(undefined8 *)psVar19 = *(undefined8 *)(lVar7 + (longlong)psVar19);
          psVar19 = psVar19 + 4;
        } while (psVar19 < psVar9);
        puVar2 = (ulonglong *)(param_2 + (longlong)param_4 + -0xc);
        psVar19 = (short *)param_3;
        do {
          puVar11 = (ulonglong *)(piVar30 + 1);
          puVar5 = (ulonglong *)(piVar18 + 1);
          *psVar9 = (short)piVar30 - (short)piVar18;
          param_3 = (char *)(psVar9 + 1);
          iVar12 = (int)puVar11;
          if (puVar11 < puVar2) {
            uVar10 = *puVar11 ^ *puVar5;
            if (uVar10 == 0) {
              puVar11 = (ulonglong *)(piVar30 + 3);
              puVar5 = (ulonglong *)(piVar18 + 3);
              if (puVar11 < puVar2) {
LAB_141463b60:
                uVar10 = *puVar11 ^ *puVar5;
                if (uVar10 == 0) goto code_r0x000141463b6c;
                uVar6 = 0;
                if (uVar10 != 0) {
                  for (; (uVar10 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
                  }
                }
                uVar13 = (int)puVar11 + (((uint)(uVar6 >> 3) & 0x1fffffff) - iVar12);
                goto LAB_141463bbe;
              }
              goto LAB_141463b79;
            }
            lVar7 = 0;
            if (uVar10 != 0) {
              for (; (uVar10 >> lVar7 & 1) == 0; lVar7 = lVar7 + 1) {
              }
            }
            uVar13 = (uint)lVar7 >> 3;
          }
          else {
LAB_141463b79:
            if ((puVar11 < param_2 + (longlong)param_4 + -8) && ((int)*puVar5 == (int)*puVar11)) {
              puVar11 = (ulonglong *)((longlong)puVar11 + 4);
              puVar5 = (ulonglong *)((longlong)puVar5 + 4);
            }
            if ((puVar11 < param_2 + (longlong)param_4 + -6) && ((short)*puVar5 == (short)*puVar11))
            {
              puVar11 = (ulonglong *)((longlong)puVar11 + 2);
              puVar5 = (ulonglong *)((longlong)puVar5 + 2);
            }
            if ((puVar11 < param_2 + (longlong)param_4 + -5) && ((char)*puVar5 == (char)*puVar11)) {
              puVar11 = (ulonglong *)((longlong)puVar11 + 1);
            }
            uVar13 = (int)puVar11 - iVar12;
          }
LAB_141463bbe:
          piVar30 = (int *)((longlong)piVar30 + (ulonglong)uVar13 + 4);
          if (pcVar20 < (char *)((ulonglong)(uVar13 + 0xf0) / 0xff + 6 + (longlong)param_3)) {
            return 0;
          }
          if (uVar13 < 0xf) {
            *(char *)psVar19 = (char)uVar13 + (char)*psVar19;
          }
          else {
            uVar13 = uVar13 - 0xf;
            uVar10 = (ulonglong)uVar13;
            *(char *)psVar19 = (char)*psVar19 + '\x0f';
            *(short *)((longlong)param_3 + 0) = -1;
            *(short *)((longlong)param_3 + 2) = -1;
            if (0x3fb < uVar13) {
              uVar6 = (ulonglong)uVar13 / 0x3fc;
              do {
                param_3 = (char *)((longlong)param_3 + 4);
                uVar10 = (ulonglong)((int)uVar10 - 0x3fc);
                *(short *)((longlong)param_3 + 0) = -1;
                *(short *)((longlong)param_3 + 2) = -1;
                uVar6 = uVar6 - 1;
              } while (uVar6 != 0);
            }
            pcVar17 = (char *)((longlong)param_3 + uVar10 / 0xff);
            *pcVar17 = (char)uVar10 + (char)(uVar10 / 0xff);
            param_3 = pcVar17 + 1;
          }
          piVar28 = piVar30;
          if (param_2 + (longlong)param_4 + -0xb <= piVar30) break;
          *(short *)((longlong)local_res8 +
                    (ulonglong)((uint)(*(int *)((longlong)piVar30 + -2) * -0x61c8864f) >> 0x13) * 2)
               = ((short)piVar30 + -2) - sVar24;
          uVar10 = (ulonglong)((uint)(*piVar30 * -0x61c8864f) >> 0x13);
          uVar4 = *(ushort *)((longlong)local_res8 + uVar10 * 2);
          *(short *)((longlong)local_res8 + uVar10 * 2) = (short)piVar30 - sVar24;
          piVar18 = (int *)((ulonglong)uVar4 + lVar26);
          if (*piVar18 != *piVar30) goto LAB_141463cdc;
          psVar9 = (short *)((longlong)param_3 + 1);
          *param_3 = '\0';
          psVar19 = (short *)param_3;
        } while( true );
      }
LAB_141463d03:
      pcVar17 = param_2 + ((longlong)param_4 - (longlong)piVar28);
      if ((char *)((longlong)param_3 + (longlong)(pcVar17 + (ulonglong)(pcVar17 + 0xf0) / 0xff + 1))
          <= pcVar20) {
        if (pcVar17 < (char *)0xf) {
          *param_3 = (char)pcVar17 << 4;
        }
        else {
          *param_3 = -0x10;
          pcVar20 = pcVar17 + -0xf;
          param_3 = (char *)((longlong)param_3 + 1);
          if ((char *)0xfe < pcVar20) {
            memset(param_3,(int)CONCAT71((int7)((ulonglong)pcVar20 / 0x1fe),0xff),
                   (ulonglong)pcVar20 / 0xff);
            param_3 = (char *)((longlong)param_3 + (ulonglong)pcVar20 / 0xff);
            pcVar20 = (char *)((ulonglong)pcVar20 % 0xff);
          }
          *param_3 = (char)pcVar20;
        }
        memcpy((char *)((longlong)param_3 + 1),piVar28,(size_t)pcVar17);
        return (int)param_3 + 1 + ((int)pcVar17 - iVar27);
      }
    }
    return 0;
  }
  if (0x7e000000 < (uint)param_4) {
    return 0;
  }
  plVar21 = (longlong *)(param_2 + 1);
  *(int *)((longlong)local_res8 + 0x4018) = *(int *)((longlong)local_res8 + 0x4018) + param_4;
  *(uint *)((longlong)local_res8 + 0x4000) = uVar13 + param_4;
  *(undefined2 *)((longlong)local_res8 + 0x4006) = 2;
  *(int *)((longlong)local_res8 +
          ((ulonglong)(*(longlong *)param_2 * -0x30e4432345000000) >> 0x34) * 4) =
       (int)param_2 - iVar23;
  lVar7 = *plVar21;
  plVar29 = (longlong *)param_2;
LAB_141463e20:
  iVar22 = 1;
  iVar12 = iVar15 << 6;
  do {
    plVar14 = plVar21;
    uVar10 = (ulonglong)(lVar7 * -0x30e4432345000000) >> 0x34;
    uVar13 = *(uint *)((longlong)local_res8 + uVar10 * 4);
    uVar25 = (int)plVar14 - iVar23;
    plVar21 = (longlong *)((longlong)iVar22 + (longlong)plVar14);
    iVar22 = iVar12 >> 6;
    iVar12 = iVar12 + 1;
    if (param_2 + (longlong)param_4 + -0xb < plVar21) goto LAB_1414641a5;
    lVar7 = *plVar21;
    piVar28 = (int *)(lVar26 + (ulonglong)uVar13);
    *(uint *)((longlong)local_res8 + uVar10 * 4) = uVar25;
  } while ((uVar13 + 0xffff < uVar25) || (*piVar28 != (int)*plVar14));
  if (plVar29 < plVar14 && param_2 < piVar28) {
    do {
      piVar8 = (int *)((longlong)piVar28 - 1);
      plVar21 = (longlong *)((longlong)plVar14 - 1);
      if (*(char *)((longlong)plVar14 - 1) != *(char *)((longlong)piVar28 - 1)) break;
      plVar14 = plVar21;
      piVar28 = piVar8;
    } while (plVar29 < plVar21 && param_2 < piVar8);
  }
  uVar13 = (int)plVar14 - (int)plVar29;
  uVar10 = (ulonglong)uVar13;
  psVar19 = (short *)((longlong)param_3 + 1);
  if (pcVar20 < (char *)(uVar10 / 0xff + 8 + uVar10 + (longlong)psVar19)) {
    return 0;
  }
  if (uVar13 < 0xf) {
    *param_3 = (char)uVar13 << 4;
  }
  else {
    uVar13 = uVar13 - 0xf;
    *param_3 = -0x10;
    if (0xfe < (int)uVar13) {
      uVar6 = (ulonglong)uVar13 / 0xff;
      memset(psVar19,(int)CONCAT71((int7)(uVar6 >> 8),0xff),uVar6);
      psVar19 = (short *)((longlong)psVar19 + uVar6);
      uVar13 = uVar13 + (int)uVar6 * -0xff;
    }
    *(char *)psVar19 = (char)uVar13;
    psVar19 = (short *)((longlong)psVar19 + 1);
  }
  psVar9 = (short *)(uVar10 + (longlong)psVar19);
  lVar7 = (longlong)plVar29 - (longlong)psVar19;
  do {
    *(undefined8 *)psVar19 = *(undefined8 *)(lVar7 + (longlong)psVar19);
    psVar19 = psVar19 + 4;
  } while (psVar19 < psVar9);
  puVar2 = (ulonglong *)(param_2 + (longlong)param_4 + -0xc);
  psVar19 = (short *)param_3;
  do {
    puVar11 = (ulonglong *)((longlong)plVar14 + 4);
    puVar5 = (ulonglong *)(piVar28 + 1);
    *psVar9 = (short)plVar14 - (short)piVar28;
    param_3 = (char *)(psVar9 + 1);
    iVar12 = (int)puVar11;
    if (puVar11 < puVar2) {
      uVar10 = *puVar11 ^ *puVar5;
      if (uVar10 == 0) {
        puVar11 = (ulonglong *)((longlong)plVar14 + 0xc);
        puVar5 = (ulonglong *)(piVar28 + 3);
        if (puVar11 < puVar2) {
LAB_141463fe0:
          uVar10 = *puVar11 ^ *puVar5;
          if (uVar10 == 0) goto code_r0x000141463fec;
          uVar6 = 0;
          if (uVar10 != 0) {
            for (; (uVar10 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
            }
          }
          uVar13 = (int)puVar11 + (((uint)(uVar6 >> 3) & 0x1fffffff) - iVar12);
          goto LAB_14146403e;
        }
        goto LAB_141463ff9;
      }
      lVar7 = 0;
      if (uVar10 != 0) {
        for (; (uVar10 >> lVar7 & 1) == 0; lVar7 = lVar7 + 1) {
        }
      }
      uVar13 = (uint)lVar7 >> 3;
    }
    else {
LAB_141463ff9:
      if ((puVar11 < param_2 + (longlong)param_4 + -8) && ((int)*puVar5 == (int)*puVar11)) {
        puVar11 = (ulonglong *)((longlong)puVar11 + 4);
        puVar5 = (ulonglong *)((longlong)puVar5 + 4);
      }
      if ((puVar11 < param_2 + (longlong)param_4 + -6) && ((short)*puVar5 == (short)*puVar11)) {
        puVar11 = (ulonglong *)((longlong)puVar11 + 2);
        puVar5 = (ulonglong *)((longlong)puVar5 + 2);
      }
      if ((puVar11 < param_2 + (longlong)param_4 + -5) && ((char)*puVar5 == (char)*puVar11)) {
        puVar11 = (ulonglong *)((longlong)puVar11 + 1);
      }
      uVar13 = (int)puVar11 - iVar12;
    }
LAB_14146403e:
    plVar14 = (longlong *)((longlong)plVar14 + (ulonglong)uVar13 + 4);
    if (pcVar20 < (char *)((ulonglong)(uVar13 + 0xf0) / 0xff + 6 + (longlong)param_3)) {
      return 0;
    }
    if (uVar13 < 0xf) {
      *(char *)psVar19 = (char)*psVar19 + (char)uVar13;
    }
    else {
      uVar13 = uVar13 - 0xf;
      uVar10 = (ulonglong)uVar13;
      *(char *)psVar19 = (char)*psVar19 + '\x0f';
      *(short *)((longlong)param_3 + 0) = -1;
      *(short *)((longlong)param_3 + 2) = -1;
      if (0x3fb < uVar13) {
        uVar6 = (ulonglong)uVar13 / 0x3fc;
        do {
          param_3 = (char *)((longlong)param_3 + 4);
          uVar10 = (ulonglong)((int)uVar10 - 0x3fc);
          *(short *)((longlong)param_3 + 0) = -1;
          *(short *)((longlong)param_3 + 2) = -1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      pcVar17 = (char *)((longlong)param_3 + uVar10 / 0xff);
      *pcVar17 = (char)(uVar10 / 0xff) + (char)uVar10;
      param_3 = pcVar17 + 1;
    }
    plVar29 = plVar14;
    if (param_2 + (longlong)param_4 + -0xb <= plVar14) {
LAB_1414641a5:
      pcVar17 = param_2 + ((longlong)param_4 - (longlong)plVar29);
      if (pcVar20 < (char *)((longlong)param_3 +
                            (longlong)(pcVar17 + (ulonglong)(pcVar17 + 0xf0) / 0xff + 1))) {
        return 0;
      }
      if (pcVar17 < (char *)0xf) {
        *param_3 = (char)pcVar17 << 4;
      }
      else {
        *param_3 = -0x10;
        pcVar20 = pcVar17 + -0xf;
        param_3 = (char *)((longlong)param_3 + 1);
        if ((char *)0xfe < pcVar20) {
          memset(param_3,(int)CONCAT71((int7)((ulonglong)pcVar20 / 0x1fe),0xff),
                 (ulonglong)pcVar20 / 0xff);
          param_3 = (char *)((longlong)param_3 + (ulonglong)pcVar20 / 0xff);
          pcVar20 = (char *)((ulonglong)pcVar20 % 0xff);
        }
        *param_3 = (char)pcVar20;
      }
      memcpy((char *)((longlong)param_3 + 1),plVar29,(size_t)pcVar17);
      return (int)pcVar17 + (((int)param_3 + 1) - iVar27);
    }
    *(int *)((longlong)local_res8 +
            ((ulonglong)(*(longlong *)((longlong)plVar14 + -2) * -0x30e4432345000000) >> 0x34) * 4)
         = ((int)plVar14 + -2) - iVar23;
    uVar25 = (int)plVar14 - iVar23;
    uVar10 = (ulonglong)(*plVar14 * -0x30e4432345000000) >> 0x34;
    uVar13 = *(uint *)((longlong)local_res8 + uVar10 * 4);
    *(uint *)((longlong)local_res8 + uVar10 * 4) = uVar25;
    piVar28 = (int *)(lVar26 + (ulonglong)uVar13);
    if ((uVar13 + 0xffff < uVar25) || (*piVar28 != (int)*plVar14)) goto LAB_141464177;
    psVar9 = (short *)((longlong)param_3 + 1);
    *param_3 = '\0';
    psVar19 = (short *)param_3;
  } while( true );
code_r0x00014146372c:
  puVar11 = puVar11 + 1;
  puVar5 = puVar5 + 1;
  if (puVar2 <= puVar11) goto LAB_141463739;
  goto LAB_141463720;
LAB_14146387a:
  lVar7 = *(longlong *)((longlong)plVar29 + 1);
  plVar21 = (longlong *)((longlong)plVar29 + 1);
  goto LAB_141463570;
code_r0x00014146331c:
  puVar5 = puVar5 + 1;
  puVar11 = puVar11 + 1;
  if (puVar2 <= puVar5) goto LAB_141463329;
  goto LAB_141463310;
LAB_14146345d:
  iVar12 = *(int *)((longlong)piVar28 + 1);
  piVar8 = (int *)((longlong)piVar28 + 1);
  piVar30 = piVar28;
  goto LAB_141463180;
code_r0x000141463b6c:
  puVar11 = puVar11 + 1;
  puVar5 = puVar5 + 1;
  if (puVar2 <= puVar11) goto LAB_141463b79;
  goto LAB_141463b60;
LAB_141463cdc:
  iVar12 = *(int *)((longlong)piVar30 + 1);
  piVar8 = (int *)((longlong)piVar30 + 1);
  goto LAB_1414639c0;
code_r0x000141463fec:
  puVar11 = puVar11 + 1;
  puVar5 = puVar5 + 1;
  if (puVar2 <= puVar11) goto LAB_141463ff9;
  goto LAB_141463fe0;
LAB_141464177:
  lVar7 = *(longlong *)((longlong)plVar14 + 1);
  plVar21 = (longlong *)((longlong)plVar14 + 1);
  goto LAB_141463e20;
}

// LZ4_compress_fast_extState_fastReset @ 141464280

int __cdecl
Trace::LZ4_compress_fast_extState_fastReset
          (void *param_1,char *param_2,char *param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  ulonglong *puVar2;
  ushort *puVar3;
  ushort uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  short *psVar7;
  ulonglong *puVar8;
  longlong lVar9;
  ulonglong *puVar10;
  int iVar11;
  uint uVar12;
  short sVar13;
  int *piVar14;
  int *piVar15;
  char *pcVar16;
  int *piVar17;
  int *piVar18;
  int *piVar19;
  short *psVar20;
  char *pcVar21;
  longlong *plVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  short sVar26;
  longlong lVar27;
  int *piVar28;
  int iVar29;
  uint uVar30;
  longlong *plVar31;
  longlong *plVar32;
  int local_res18;
  
  iVar29 = 1;
  if (0 < param_6) {
    iVar29 = param_6;
  }
  if ((uint)param_4 < 0x7e000001) {
    iVar11 = param_4 / 0xff + 0x10 + param_4;
  }
  else {
    iVar11 = 0;
  }
  sVar26 = *(short *)((longlong)param_1 + 0x4004);
  sVar13 = (short)param_2;
  local_res18 = (int)param_3;
  if (iVar11 <= param_5) {
    if (0x1000a < param_4) {
      if (sVar26 == 0) {
        if (*(short *)((longlong)param_1 + 0x4006) != 0) {
          memset(param_1,0,0x4000);
          *(undefined4 *)((longlong)param_1 + 0x4000) = 0;
          *(short *)((longlong)param_1 + 0x4006) = 0;
        }
        if (*(int *)((longlong)param_1 + 0x4000) != 0) {
          *(int *)((longlong)param_1 + 0x4000) = *(int *)((longlong)param_1 + 0x4000) + 0x10000;
        }
        *(undefined8 *)((longlong)param_1 + 0x4010) = 0;
        *(undefined8 *)((longlong)param_1 + 0x4008) = 0;
        *(undefined4 *)((longlong)param_1 + 0x4018) = 0;
      }
      else {
        memset(param_1,0,0x4020);
      }
      lVar27 = (longlong)param_2 - (ulonglong)*(uint *)((longlong)param_1 + 0x4000);
      if (0x7e000000 < (uint)param_4) {
        return 0;
      }
      *(int *)((longlong)param_1 + 0x4018) = param_4;
      *(uint *)((longlong)param_1 + 0x4000) = *(uint *)((longlong)param_1 + 0x4000) + param_4;
      iVar11 = (int)lVar27;
      *(undefined2 *)((longlong)param_1 + 0x4006) = 2;
      plVar22 = (longlong *)(param_2 + 1);
      *(int *)((longlong)param_1 +
              ((ulonglong)(*(longlong *)param_2 * -0x30e4432345000000) >> 0x34) * 4) =
           (int)param_2 - iVar11;
      lVar9 = *plVar22;
      plVar31 = (longlong *)param_2;
LAB_141464cf0:
      iVar23 = 1;
      iVar24 = iVar29 << 6;
      do {
        plVar32 = plVar22;
        uVar5 = (ulonglong)(lVar9 * -0x30e4432345000000) >> 0x34;
        uVar12 = *(uint *)((longlong)param_1 + uVar5 * 4);
        uVar30 = (int)plVar32 - iVar11;
        plVar22 = (longlong *)((longlong)iVar23 + (longlong)plVar32);
        iVar23 = iVar24 >> 6;
        iVar24 = iVar24 + 1;
        if (param_2 + (longlong)param_4 + -0xb < plVar22) goto LAB_141465025;
        lVar9 = *plVar22;
        piVar19 = (int *)((ulonglong)uVar12 + lVar27);
        *(uint *)((longlong)param_1 + uVar5 * 4) = uVar30;
      } while ((uVar12 + 0xffff < uVar30) || (*piVar19 != (int)*plVar32));
      if (param_2 < piVar19 && plVar31 < plVar32) {
        do {
          piVar15 = (int *)((longlong)piVar19 - 1);
          plVar22 = (longlong *)((longlong)plVar32 - 1);
          if (*(char *)((longlong)plVar32 - 1) != *(char *)((longlong)piVar19 - 1)) break;
          piVar19 = piVar15;
          plVar32 = plVar22;
        } while (plVar31 < plVar22 && param_2 < piVar15);
      }
      uVar12 = (int)plVar32 - (int)plVar31;
      psVar20 = (short *)((longlong)param_3 + 1);
      if (uVar12 < 0xf) {
        *param_3 = (char)uVar12 << 4;
      }
      else {
        uVar30 = uVar12 - 0xf;
        *param_3 = -0x10;
        if (0xfe < (int)uVar30) {
          uVar5 = (ulonglong)uVar30 / 0xff;
          memset(psVar20,(int)CONCAT71((int7)(uVar5 >> 8),0xff),uVar5);
          psVar20 = (short *)((longlong)psVar20 + uVar5);
          uVar30 = uVar30 + (int)uVar5 * -0xff;
        }
        *(char *)psVar20 = (char)uVar30;
        psVar20 = (short *)((longlong)psVar20 + 1);
      }
      psVar7 = (short *)((ulonglong)uVar12 + (longlong)psVar20);
      lVar9 = (longlong)plVar31 - (longlong)psVar20;
      do {
        *(undefined8 *)psVar20 = *(undefined8 *)(lVar9 + (longlong)psVar20);
        psVar20 = psVar20 + 4;
      } while (psVar20 < psVar7);
      puVar2 = (ulonglong *)(param_2 + (longlong)param_4 + -0xc);
      psVar20 = (short *)param_3;
      plVar31 = plVar32;
      do {
        puVar8 = (ulonglong *)((longlong)plVar31 + 4);
        puVar10 = (ulonglong *)(piVar19 + 1);
        *psVar7 = (short)plVar31 - (short)piVar19;
        param_3 = (char *)(psVar7 + 1);
        iVar24 = (int)puVar8;
        if (puVar8 < puVar2) {
          uVar5 = *puVar8 ^ *puVar10;
          if (uVar5 == 0) {
            puVar8 = (ulonglong *)((longlong)plVar31 + 0xc);
            puVar10 = (ulonglong *)(piVar19 + 3);
            if (puVar8 < puVar2) {
LAB_141464ea0:
              uVar5 = *puVar8 ^ *puVar10;
              if (uVar5 == 0) goto code_r0x000141464eac;
              uVar6 = 0;
              if (uVar5 != 0) {
                for (; (uVar5 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
                }
              }
              uVar12 = (int)puVar8 + (((uint)(uVar6 >> 3) & 0x1fffffff) - iVar24);
              goto LAB_141464efd;
            }
            goto LAB_141464eb9;
          }
          lVar9 = 0;
          if (uVar5 != 0) {
            for (; (uVar5 >> lVar9 & 1) == 0; lVar9 = lVar9 + 1) {
            }
          }
          uVar12 = (uint)lVar9 >> 3;
        }
        else {
LAB_141464eb9:
          if ((puVar8 < param_2 + (longlong)param_4 + -8) && ((int)*puVar10 == (int)*puVar8)) {
            puVar8 = (ulonglong *)((longlong)puVar8 + 4);
            puVar10 = (ulonglong *)((longlong)puVar10 + 4);
          }
          if ((puVar8 < param_2 + (longlong)param_4 + -6) && ((short)*puVar10 == (short)*puVar8)) {
            puVar8 = (ulonglong *)((longlong)puVar8 + 2);
            puVar10 = (ulonglong *)((longlong)puVar10 + 2);
          }
          if ((puVar8 < param_2 + (longlong)param_4 + -5) && ((char)*puVar10 == (char)*puVar8)) {
            puVar8 = (ulonglong *)((longlong)puVar8 + 1);
          }
          uVar12 = (int)puVar8 - iVar24;
        }
LAB_141464efd:
        plVar31 = (longlong *)((longlong)plVar31 + (ulonglong)uVar12 + 4);
        if (uVar12 < 0xf) {
          *(char *)psVar20 = (char)uVar12 + (char)*psVar20;
        }
        else {
          uVar12 = uVar12 - 0xf;
          *(char *)psVar20 = (char)*psVar20 + '\x0f';
          *(short *)((longlong)param_3 + 0) = -1;
          *(short *)((longlong)param_3 + 2) = -1;
          if (0x3fb < uVar12) {
            uVar5 = (ulonglong)uVar12 / 0x3fc;
            do {
              param_3 = (char *)((longlong)param_3 + 4);
              uVar12 = uVar12 - 0x3fc;
              *(short *)((longlong)param_3 + 0) = -1;
              *(short *)((longlong)param_3 + 2) = -1;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          pcVar21 = (char *)((longlong)param_3 + (ulonglong)uVar12 / 0xff);
          *pcVar21 = (char)((ulonglong)uVar12 / 0xff) + (char)uVar12;
          param_3 = pcVar21 + 1;
        }
        if (param_2 + (longlong)param_4 + -0xb <= plVar31) {
LAB_141465025:
          pcVar21 = param_2 + ((longlong)param_4 - (longlong)plVar31);
          if (pcVar21 < (char *)0xf) {
            *param_3 = (char)pcVar21 << 4;
          }
          else {
            *param_3 = -0x10;
            pcVar16 = pcVar21 + -0xf;
            param_3 = (char *)((longlong)param_3 + 1);
            if ((char *)0xfe < pcVar16) {
              memset(param_3,(int)CONCAT71((int7)((ulonglong)pcVar16 / 0x1fe),0xff),
                     (ulonglong)pcVar16 / 0xff);
              param_3 = (char *)((longlong)param_3 + (ulonglong)pcVar16 / 0xff);
              pcVar16 = (char *)((ulonglong)pcVar16 % 0xff);
            }
            *param_3 = (char)pcVar16;
          }
          memcpy((char *)((longlong)param_3 + 1),plVar31,(size_t)pcVar21);
          return (int)param_3 + 1 + ((int)pcVar21 - local_res18);
        }
        *(int *)((longlong)param_1 +
                ((ulonglong)(*(longlong *)((longlong)plVar31 + -2) * -0x30e4432345000000) >> 0x34) *
                4) = ((int)plVar31 + -2) - iVar11;
        uVar30 = (int)plVar31 - iVar11;
        uVar5 = (ulonglong)(*plVar31 * -0x30e4432345000000) >> 0x34;
        uVar12 = *(uint *)((longlong)param_1 + uVar5 * 4);
        *(uint *)((longlong)param_1 + uVar5 * 4) = uVar30;
        piVar19 = (int *)((ulonglong)uVar12 + lVar27);
        if ((uVar12 + 0xffff < uVar30) || (*piVar19 != (int)*plVar31)) goto LAB_141464ffb;
        psVar7 = (short *)((longlong)param_3 + 1);
        *param_3 = '\0';
        psVar20 = (short *)param_3;
      } while( true );
    }
    if (sVar26 == 0) {
      if ((*(short *)((longlong)param_1 + 0x4006) != 0) &&
         (((*(short *)((longlong)param_1 + 0x4006) != 3 ||
           (0xfffe < (uint)(*(int *)((longlong)param_1 + 0x4000) + param_4))) || (0xfff < param_4)))
         ) {
        memset(param_1,0,0x4000);
        *(undefined4 *)((longlong)param_1 + 0x4000) = 0;
        *(undefined2 *)((longlong)param_1 + 0x4006) = 0;
      }
      *(undefined8 *)((longlong)param_1 + 0x4010) = 0;
      *(undefined8 *)((longlong)param_1 + 0x4008) = 0;
      *(undefined4 *)((longlong)param_1 + 0x4018) = 0;
    }
    else {
      memset(param_1,0,0x4020);
    }
    uVar12 = *(uint *)((longlong)param_1 + 0x4000);
    lVar27 = (longlong)param_2 - (ulonglong)uVar12;
    piVar19 = (int *)(param_2 + (longlong)param_4 + -0xb);
    sVar26 = (short)lVar27;
    if (uVar12 == 0) {
      if (0x7e000000 < (uint)param_4) {
        return 0;
      }
      *(int *)((longlong)param_1 + 0x4018) = param_4;
      *(int *)((longlong)param_1 + 0x4000) = param_4;
      *(undefined2 *)((longlong)param_1 + 0x4006) = 3;
      piVar15 = (int *)param_2;
      if (param_4 < 0xd) {
LAB_141464b40:
        pcVar21 = param_2 + ((longlong)param_4 - (longlong)piVar15);
        if (pcVar21 < (char *)0xf) {
          *param_3 = (char)pcVar21 << 4;
        }
        else {
          *param_3 = -0x10;
          pcVar16 = pcVar21 + -0xf;
          param_3 = (char *)((longlong)param_3 + 1);
          if ((char *)0xfe < pcVar16) {
            memset(param_3,(int)CONCAT71((int7)((ulonglong)pcVar16 / 0x1fe),0xff),
                   (ulonglong)pcVar16 / 0xff);
            param_3 = (char *)((longlong)param_3 + (ulonglong)pcVar16 / 0xff);
            pcVar16 = (char *)((ulonglong)pcVar16 % 0xff);
          }
          *param_3 = (char)pcVar16;
        }
        memcpy((char *)((longlong)param_3 + 1),piVar15,(size_t)pcVar21);
        return (int)param_3 + 1 + ((int)pcVar21 - local_res18);
      }
      piVar14 = (int *)(param_2 + 1);
      *(short *)((longlong)param_1 + (ulonglong)((uint)(*(int *)param_2 * -0x61c8864f) >> 0x13) * 2)
           = sVar13 - sVar26;
      iVar11 = *piVar14;
      piVar28 = (int *)param_2;
LAB_141464850:
      iVar23 = 1;
      iVar24 = iVar29 << 6;
      do {
        piVar18 = piVar14;
        piVar14 = (int *)((longlong)iVar23 + (longlong)piVar18);
        iVar23 = iVar24 >> 6;
        iVar24 = iVar24 + 1;
        puVar3 = (ushort *)
                 ((longlong)param_1 + (ulonglong)((uint)(iVar11 * -0x61c8864f) >> 0x13) * 2);
        piVar15 = piVar28;
        if (piVar19 < piVar14) goto LAB_141464b40;
        iVar11 = *piVar14;
        uVar4 = *puVar3;
        *puVar3 = (short)piVar18 - sVar26;
        piVar17 = (int *)((ulonglong)uVar4 + lVar27);
      } while (*piVar17 != *piVar18);
      piVar15 = piVar18;
      if (param_2 < piVar17 && piVar28 < piVar18) {
        do {
          piVar14 = (int *)((longlong)piVar17 - 1);
          piVar1 = (int *)((longlong)piVar18 - 1);
          piVar15 = piVar18;
          if (*(char *)((longlong)piVar18 - 1) != *(char *)((longlong)piVar17 - 1)) break;
          piVar17 = piVar14;
          piVar18 = piVar1;
          piVar15 = piVar1;
        } while (piVar28 < piVar1 && param_2 < piVar14);
      }
      uVar12 = (int)piVar15 - (int)piVar28;
      psVar20 = (short *)((longlong)param_3 + 1);
      if (uVar12 < 0xf) {
        *param_3 = (char)uVar12 << 4;
      }
      else {
        uVar30 = uVar12 - 0xf;
        *param_3 = -0x10;
        if (0xfe < (int)uVar30) {
          uVar5 = (ulonglong)uVar30 / 0xff;
          memset(psVar20,(int)CONCAT71((int7)(uVar5 >> 8),0xff),uVar5);
          psVar20 = (short *)((longlong)psVar20 + uVar5);
          uVar30 = uVar30 + (int)uVar5 * -0xff;
        }
        *(char *)psVar20 = (char)uVar30;
        psVar20 = (short *)((longlong)psVar20 + 1);
      }
      psVar7 = (short *)((ulonglong)uVar12 + (longlong)psVar20);
      lVar9 = (longlong)piVar28 - (longlong)psVar20;
      do {
        *(undefined8 *)psVar20 = *(undefined8 *)(lVar9 + (longlong)psVar20);
        psVar20 = psVar20 + 4;
      } while (psVar20 < psVar7);
      puVar2 = (ulonglong *)(param_2 + (longlong)param_4 + -0xc);
      psVar20 = (short *)param_3;
      do {
        puVar8 = (ulonglong *)(piVar17 + 1);
        *psVar7 = (short)piVar15 - (short)piVar17;
        puVar10 = (ulonglong *)(piVar15 + 1);
        param_3 = (char *)(psVar7 + 1);
        iVar11 = (int)puVar10;
        if (puVar10 < puVar2) {
          uVar5 = *puVar10 ^ *puVar8;
          if (uVar5 == 0) {
            puVar10 = (ulonglong *)(piVar15 + 3);
            puVar8 = (ulonglong *)(piVar17 + 3);
            if (puVar10 < puVar2) {
LAB_1414649d0:
              uVar5 = *puVar10 ^ *puVar8;
              if (uVar5 == 0) goto code_r0x0001414649dc;
              uVar6 = 0;
              if (uVar5 != 0) {
                for (; (uVar5 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
                }
              }
              uVar12 = (((uint)(uVar6 >> 3) & 0x1fffffff) - iVar11) + (int)puVar10;
              goto LAB_141464a2d;
            }
            goto LAB_1414649e9;
          }
          lVar9 = 0;
          if (uVar5 != 0) {
            for (; (uVar5 >> lVar9 & 1) == 0; lVar9 = lVar9 + 1) {
            }
          }
          uVar12 = (uint)lVar9 >> 3;
        }
        else {
LAB_1414649e9:
          if ((puVar10 < param_2 + (longlong)param_4 + -8) && ((int)*puVar8 == (int)*puVar10)) {
            puVar10 = (ulonglong *)((longlong)puVar10 + 4);
            puVar8 = (ulonglong *)((longlong)puVar8 + 4);
          }
          if ((puVar10 < param_2 + (longlong)param_4 + -6) && ((short)*puVar8 == (short)*puVar10)) {
            puVar10 = (ulonglong *)((longlong)puVar10 + 2);
            puVar8 = (ulonglong *)((longlong)puVar8 + 2);
          }
          if ((puVar10 < param_2 + (longlong)param_4 + -5) && ((char)*puVar8 == (char)*puVar10)) {
            puVar10 = (ulonglong *)((longlong)puVar10 + 1);
          }
          uVar12 = (int)puVar10 - iVar11;
        }
LAB_141464a2d:
        piVar15 = (int *)((longlong)piVar15 + (ulonglong)uVar12 + 4);
        if (uVar12 < 0xf) {
          *(char *)psVar20 = (char)*psVar20 + (char)uVar12;
        }
        else {
          uVar12 = uVar12 - 0xf;
          *(char *)psVar20 = (char)*psVar20 + '\x0f';
          *(short *)((longlong)param_3 + 0) = -1;
          *(short *)((longlong)param_3 + 2) = -1;
          if (0x3fb < uVar12) {
            uVar5 = (ulonglong)uVar12 / 0x3fc;
            do {
              param_3 = (char *)((longlong)param_3 + 4);
              uVar12 = uVar12 - 0x3fc;
              *(short *)((longlong)param_3 + 0) = -1;
              *(short *)((longlong)param_3 + 2) = -1;
              uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
          }
          pcVar21 = (char *)((longlong)param_3 + (ulonglong)uVar12 / 0xff);
          *pcVar21 = (char)((ulonglong)uVar12 / 0xff) + (char)uVar12;
          param_3 = pcVar21 + 1;
        }
        if (piVar19 <= piVar15) goto LAB_141464b40;
        *(short *)((longlong)param_1 +
                  (ulonglong)((uint)(*(int *)((longlong)piVar15 + -2) * -0x61c8864f) >> 0x13) * 2) =
             ((short)piVar15 + -2) - sVar26;
        uVar5 = (ulonglong)((uint)(*piVar15 * -0x61c8864f) >> 0x13);
        uVar4 = *(ushort *)((longlong)param_1 + uVar5 * 2);
        *(short *)((longlong)param_1 + uVar5 * 2) = (short)piVar15 - sVar26;
        piVar17 = (int *)((ulonglong)uVar4 + lVar27);
        if (*piVar17 != *piVar15) goto LAB_141464b26;
        psVar7 = (short *)((longlong)param_3 + 1);
        *param_3 = '\0';
        psVar20 = (short *)param_3;
      } while( true );
    }
    if (0x7e000000 < (uint)param_4) {
      return 0;
    }
    *(int *)((longlong)param_1 + 0x4018) = param_4;
    *(uint *)((longlong)param_1 + 0x4000) = uVar12 + param_4;
    *(undefined2 *)((longlong)param_1 + 0x4006) = 3;
    piVar15 = (int *)param_2;
    if (param_4 < 0xd) {
LAB_141464757:
      pcVar21 = param_2 + ((longlong)param_4 - (longlong)piVar15);
      if (pcVar21 < (char *)0xf) {
        *param_3 = (char)pcVar21 << 4;
      }
      else {
        *param_3 = -0x10;
        pcVar16 = pcVar21 + -0xf;
        param_3 = (char *)((longlong)param_3 + 1);
        if ((char *)0xfe < pcVar16) {
          memset(param_3,(int)CONCAT71((int7)((ulonglong)pcVar16 / 0x1fe),0xff),
                 (ulonglong)pcVar16 / 0xff);
          param_3 = (char *)((longlong)param_3 + (ulonglong)pcVar16 / 0xff);
          pcVar16 = (char *)((ulonglong)pcVar16 % 0xff);
        }
        *param_3 = (char)pcVar16;
      }
      memcpy((char *)((longlong)param_3 + 1),piVar15,(size_t)pcVar21);
      return (int)param_3 + 1 + ((int)pcVar21 - local_res18);
    }
    piVar14 = (int *)(param_2 + 1);
    *(short *)((longlong)param_1 + (ulonglong)((uint)(*(int *)param_2 * -0x61c8864f) >> 0x13) * 2) =
         sVar13 - sVar26;
    iVar11 = *piVar14;
    piVar28 = (int *)param_2;
LAB_141464450:
    uVar5 = (ulonglong)((uint)(iVar11 * -0x61c8864f) >> 0x13);
    iVar24 = 1;
    iVar11 = iVar29 << 6;
    do {
      piVar18 = piVar14;
      uVar4 = *(ushort *)((longlong)param_1 + uVar5 * 2);
      lVar9 = (longlong)iVar24;
      iVar24 = iVar11 >> 6;
      piVar14 = (int *)(lVar9 + (longlong)piVar18);
      iVar11 = iVar11 + 1;
      piVar15 = piVar28;
      if (piVar19 < piVar14) goto LAB_141464757;
      iVar23 = *piVar14;
      piVar17 = (int *)((ulonglong)uVar4 + lVar27);
      *(short *)((longlong)param_1 + uVar5 * 2) = (short)piVar18 - sVar26;
      uVar5 = (ulonglong)((uint)(iVar23 * -0x61c8864f) >> 0x13);
    } while ((uVar4 < uVar12) || (*piVar17 != *piVar18));
    piVar15 = piVar18;
    if (param_2 < piVar17 && piVar28 < piVar18) {
      do {
        piVar14 = (int *)((longlong)piVar17 - 1);
        piVar1 = (int *)((longlong)piVar18 - 1);
        piVar15 = piVar18;
        if (*(char *)((longlong)piVar18 - 1) != *(char *)((longlong)piVar17 - 1)) break;
        piVar17 = piVar14;
        piVar18 = piVar1;
        piVar15 = piVar1;
      } while (param_2 < piVar14 && piVar28 < piVar1);
    }
    uVar30 = (int)piVar15 - (int)piVar28;
    psVar20 = (short *)((longlong)param_3 + 1);
    if (uVar30 < 0xf) {
      *param_3 = (char)uVar30 << 4;
    }
    else {
      uVar25 = uVar30 - 0xf;
      *param_3 = -0x10;
      if (0xfe < (int)uVar25) {
        uVar5 = (ulonglong)uVar25 / 0xff;
        memset(psVar20,(int)CONCAT71((int7)(uVar5 >> 8),0xff),uVar5);
        psVar20 = (short *)((longlong)psVar20 + uVar5);
        uVar25 = uVar25 + (int)uVar5 * -0xff;
      }
      *(char *)psVar20 = (char)uVar25;
      psVar20 = (short *)((longlong)psVar20 + 1);
    }
    psVar7 = (short *)((ulonglong)uVar30 + (longlong)psVar20);
    lVar9 = (longlong)piVar28 - (longlong)psVar20;
    do {
      *(undefined8 *)psVar20 = *(undefined8 *)((longlong)psVar20 + lVar9);
      psVar20 = psVar20 + 4;
    } while (psVar20 < psVar7);
    puVar2 = (ulonglong *)(param_2 + (longlong)param_4 + -0xc);
    psVar20 = (short *)param_3;
    do {
      puVar8 = (ulonglong *)(piVar15 + 1);
      puVar10 = (ulonglong *)(piVar17 + 1);
      *psVar7 = (short)piVar15 - (short)piVar17;
      param_3 = (char *)(psVar7 + 1);
      iVar11 = (int)puVar8;
      if (puVar8 < puVar2) {
        uVar5 = *puVar8 ^ *puVar10;
        if (uVar5 == 0) {
          puVar8 = (ulonglong *)(piVar15 + 3);
          puVar10 = (ulonglong *)(piVar17 + 3);
          if (puVar8 < puVar2) {
LAB_1414645e0:
            uVar5 = *puVar8 ^ *puVar10;
            if (uVar5 == 0) goto code_r0x0001414645ec;
            uVar6 = 0;
            if (uVar5 != 0) {
              for (; (uVar5 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
              }
            }
            uVar30 = (int)puVar8 + (((uint)(uVar6 >> 3) & 0x1fffffff) - iVar11);
            goto LAB_14146463b;
          }
          goto LAB_1414645f9;
        }
        lVar9 = 0;
        if (uVar5 != 0) {
          for (; (uVar5 >> lVar9 & 1) == 0; lVar9 = lVar9 + 1) {
          }
        }
        uVar30 = (uint)lVar9 >> 3;
      }
      else {
LAB_1414645f9:
        if ((puVar8 < param_2 + (longlong)param_4 + -8) && ((int)*puVar10 == (int)*puVar8)) {
          puVar8 = (ulonglong *)((longlong)puVar8 + 4);
          puVar10 = (ulonglong *)((longlong)puVar10 + 4);
        }
        if ((puVar8 < param_2 + (longlong)param_4 + -6) && ((short)*puVar10 == (short)*puVar8)) {
          puVar8 = (ulonglong *)((longlong)puVar8 + 2);
          puVar10 = (ulonglong *)((longlong)puVar10 + 2);
        }
        if ((puVar8 < param_2 + (longlong)param_4 + -5) && ((char)*puVar10 == (char)*puVar8)) {
          puVar8 = (ulonglong *)((longlong)puVar8 + 1);
        }
        uVar30 = (int)puVar8 - iVar11;
      }
LAB_14146463b:
      piVar15 = (int *)((longlong)piVar15 + (ulonglong)uVar30 + 4);
      if (uVar30 < 0xf) {
        *(char *)psVar20 = (char)*psVar20 + (char)uVar30;
      }
      else {
        uVar30 = uVar30 - 0xf;
        *(char *)psVar20 = (char)*psVar20 + '\x0f';
        *(short *)((longlong)param_3 + 0) = -1;
        *(short *)((longlong)param_3 + 2) = -1;
        if (0x3fb < uVar30) {
          uVar5 = (ulonglong)uVar30 / 0x3fc;
          do {
            param_3 = (char *)((longlong)param_3 + 4);
            uVar30 = uVar30 - 0x3fc;
            *(short *)((longlong)param_3 + 0) = -1;
            *(short *)((longlong)param_3 + 2) = -1;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        pcVar21 = (char *)((longlong)param_3 + (ulonglong)uVar30 / 0xff);
        *pcVar21 = (char)uVar30 + (char)((ulonglong)uVar30 / 0xff);
        param_3 = pcVar21 + 1;
      }
      if (piVar19 <= piVar15) goto LAB_141464757;
      *(short *)((longlong)param_1 +
                (ulonglong)((uint)(*(int *)((longlong)piVar15 + -2) * -0x61c8864f) >> 0x13) * 2) =
           ((short)piVar15 + -2) - sVar26;
      uVar5 = (ulonglong)((uint)(*piVar15 * -0x61c8864f) >> 0x13);
      uVar4 = *(ushort *)((longlong)param_1 + uVar5 * 2);
      *(short *)((longlong)param_1 + uVar5 * 2) = (short)piVar15 - sVar26;
      piVar17 = (int *)((ulonglong)uVar4 + lVar27);
      if ((uVar4 < uVar12) || (*piVar17 != *piVar15)) goto LAB_141464739;
      psVar7 = (short *)((longlong)param_3 + 1);
      *param_3 = '\0';
      psVar20 = (short *)param_3;
    } while( true );
  }
  if (param_4 < 0x1000b) {
    if (sVar26 == 0) {
      if ((*(short *)((longlong)param_1 + 0x4006) != 0) &&
         (((*(short *)((longlong)param_1 + 0x4006) != 3 ||
           (0xfffe < (uint)(*(int *)((longlong)param_1 + 0x4000) + param_4))) || (0xfff < param_4)))
         ) {
        memset(param_1,0,0x4000);
        *(undefined4 *)((longlong)param_1 + 0x4000) = 0;
        *(undefined2 *)((longlong)param_1 + 0x4006) = 0;
      }
      *(undefined8 *)((longlong)param_1 + 0x4010) = 0;
      *(undefined8 *)((longlong)param_1 + 0x4008) = 0;
      *(undefined4 *)((longlong)param_1 + 0x4018) = 0;
    }
    else {
      memset(param_1,0,0x4020);
    }
    uVar12 = *(uint *)((longlong)param_1 + 0x4000);
    pcVar21 = param_3 + param_5;
    lVar27 = (longlong)param_2 - (ulonglong)uVar12;
    piVar19 = (int *)(param_2 + (longlong)param_4 + -0xb);
    sVar26 = (short)lVar27;
    if (uVar12 == 0) {
      if ((uint)param_4 < 0x7e000001) {
        *(int *)((longlong)param_1 + 0x4018) = param_4;
        *(int *)((longlong)param_1 + 0x4000) = param_4;
        *(undefined2 *)((longlong)param_1 + 0x4006) = 3;
        piVar15 = (int *)param_2;
        if (0xc < param_4) {
          piVar14 = (int *)(param_2 + 1);
          *(short *)((longlong)param_1 +
                    (ulonglong)((uint)(*(int *)param_2 * -0x61c8864f) >> 0x13) * 2) =
               sVar13 - sVar26;
          iVar11 = *piVar14;
LAB_141465682:
          iVar23 = 1;
          iVar24 = iVar29 << 6;
          do {
            piVar28 = piVar14;
            puVar3 = (ushort *)
                     ((longlong)param_1 + (ulonglong)((uint)(iVar11 * -0x61c8864f) >> 0x13) * 2);
            lVar9 = (longlong)iVar23;
            iVar23 = iVar24 >> 6;
            piVar14 = (int *)(lVar9 + (longlong)piVar28);
            iVar24 = iVar24 + 1;
            if (piVar19 < piVar14) goto LAB_1414659dc;
            iVar11 = *piVar14;
            uVar4 = *puVar3;
            *puVar3 = (short)piVar28 - sVar26;
            piVar18 = (int *)((ulonglong)uVar4 + lVar27);
          } while (*piVar18 != *piVar28);
          if (piVar15 < piVar28 && param_2 < piVar18) {
            do {
              piVar14 = (int *)((longlong)piVar18 - 1);
              piVar17 = (int *)((longlong)piVar28 - 1);
              if (*(char *)((longlong)piVar28 - 1) != *(char *)((longlong)piVar18 - 1)) break;
              piVar18 = piVar14;
              piVar28 = piVar17;
            } while (param_2 < piVar14 && piVar15 < piVar17);
          }
          uVar12 = (int)piVar28 - (int)piVar15;
          uVar5 = (ulonglong)uVar12;
          psVar20 = (short *)((longlong)param_3 + 1);
          if (pcVar21 < (char *)((longlong)psVar20 + uVar5 + uVar5 / 0xff + 8)) {
            return 0;
          }
          if (uVar12 < 0xf) {
            *param_3 = (char)uVar12 << 4;
          }
          else {
            uVar12 = uVar12 - 0xf;
            *param_3 = -0x10;
            if (0xfe < (int)uVar12) {
              uVar6 = (ulonglong)uVar12 / 0xff;
              memset(psVar20,(int)CONCAT71((int7)(uVar6 >> 8),0xff),uVar6);
              psVar20 = (short *)((longlong)psVar20 + uVar6);
              uVar12 = uVar12 + (int)uVar6 * -0xff;
            }
            *(char *)psVar20 = (char)uVar12;
            psVar20 = (short *)((longlong)psVar20 + 1);
          }
          psVar7 = (short *)((longlong)psVar20 + uVar5);
          lVar9 = (longlong)piVar15 - (longlong)psVar20;
          do {
            *(undefined8 *)psVar20 = *(undefined8 *)((longlong)psVar20 + lVar9);
            psVar20 = psVar20 + 4;
          } while (psVar20 < psVar7);
          puVar2 = (ulonglong *)(param_2 + (longlong)param_4 + -0xc);
          psVar20 = (short *)param_3;
          piVar15 = piVar28;
          do {
            puVar8 = (ulonglong *)(piVar15 + 1);
            puVar10 = (ulonglong *)(piVar18 + 1);
            *psVar7 = (short)piVar15 - (short)piVar18;
            param_3 = (char *)(psVar7 + 1);
            iVar11 = (int)puVar8;
            if (puVar8 < puVar2) {
              uVar5 = *puVar10 ^ *puVar8;
              if (uVar5 == 0) {
                puVar8 = (ulonglong *)(piVar15 + 3);
                puVar10 = (ulonglong *)(piVar18 + 3);
                if (puVar8 < puVar2) {
LAB_141465840:
                  uVar5 = *puVar10 ^ *puVar8;
                  if (uVar5 == 0) goto code_r0x00014146584c;
                  uVar6 = 0;
                  if (uVar5 != 0) {
                    for (; (uVar5 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
                    }
                  }
                  uVar12 = (int)puVar8 + (((uint)(uVar6 >> 3) & 0x1fffffff) - iVar11);
                  goto LAB_14146589e;
                }
                goto LAB_141465859;
              }
              lVar9 = 0;
              if (uVar5 != 0) {
                for (; (uVar5 >> lVar9 & 1) == 0; lVar9 = lVar9 + 1) {
                }
              }
              uVar12 = (uint)lVar9 >> 3;
            }
            else {
LAB_141465859:
              if ((puVar8 < param_2 + (longlong)param_4 + -8) && ((int)*puVar10 == (int)*puVar8)) {
                puVar8 = (ulonglong *)((longlong)puVar8 + 4);
                puVar10 = (ulonglong *)((longlong)puVar10 + 4);
              }
              if ((puVar8 < param_2 + (longlong)param_4 + -6) && ((short)*puVar10 == (short)*puVar8)
                 ) {
                puVar8 = (ulonglong *)((longlong)puVar8 + 2);
                puVar10 = (ulonglong *)((longlong)puVar10 + 2);
              }
              if ((puVar8 < param_2 + (longlong)param_4 + -5) && ((char)*puVar10 == (char)*puVar8))
              {
                puVar8 = (ulonglong *)((longlong)puVar8 + 1);
              }
              uVar12 = (int)puVar8 - iVar11;
            }
LAB_14146589e:
            piVar15 = (int *)((longlong)piVar15 + (ulonglong)uVar12 + 4);
            if (pcVar21 < (char *)((ulonglong)(uVar12 + 0xf0) / 0xff + 6 + (longlong)param_3)) {
              return 0;
            }
            if (uVar12 < 0xf) {
              *(char *)psVar20 = (char)*psVar20 + (char)uVar12;
            }
            else {
              uVar12 = uVar12 - 0xf;
              uVar5 = (ulonglong)uVar12;
              *(char *)psVar20 = (char)*psVar20 + '\x0f';
              *(short *)((longlong)param_3 + 0) = -1;
              *(short *)((longlong)param_3 + 2) = -1;
              if (0x3fb < uVar12) {
                uVar6 = (ulonglong)uVar12 / 0x3fc;
                do {
                  param_3 = (char *)((longlong)param_3 + 4);
                  uVar5 = (ulonglong)((int)uVar5 - 0x3fc);
                  *(short *)((longlong)param_3 + 0) = -1;
                  *(short *)((longlong)param_3 + 2) = -1;
                  uVar6 = uVar6 - 1;
                } while (uVar6 != 0);
              }
              pcVar16 = (char *)((longlong)param_3 + uVar5 / 0xff);
              *pcVar16 = (char)uVar5 + (char)(uVar5 / 0xff);
              param_3 = pcVar16 + 1;
            }
            if (piVar19 <= piVar15) break;
            *(short *)((longlong)param_1 +
                      (ulonglong)((uint)(*(int *)((longlong)piVar15 + -2) * -0x61c8864f) >> 0x13) *
                      2) = ((short)piVar15 + -2) - sVar26;
            uVar5 = (ulonglong)((uint)(*piVar15 * -0x61c8864f) >> 0x13);
            uVar4 = *(ushort *)((longlong)param_1 + uVar5 * 2);
            *(short *)((longlong)param_1 + uVar5 * 2) = (short)piVar15 - sVar26;
            piVar18 = (int *)((ulonglong)uVar4 + lVar27);
            if (*piVar18 != *piVar15) goto LAB_1414659b5;
            psVar7 = (short *)((longlong)param_3 + 1);
            *param_3 = '\0';
            psVar20 = (short *)param_3;
          } while( true );
        }
LAB_1414659dc:
        pcVar16 = param_2 + ((longlong)param_4 - (longlong)piVar15);
        if ((char *)((longlong)param_3 +
                    (longlong)(pcVar16 + (ulonglong)(pcVar16 + 0xf0) / 0xff + 1)) <= pcVar21) {
          if (pcVar16 < (char *)0xf) {
            *param_3 = (char)pcVar16 << 4;
          }
          else {
            *param_3 = -0x10;
            pcVar21 = pcVar16 + -0xf;
            param_3 = (char *)((longlong)param_3 + 1);
            if ((char *)0xfe < pcVar21) {
              memset(param_3,(int)CONCAT71((int7)((ulonglong)pcVar21 / 0x1fe),0xff),
                     (ulonglong)pcVar21 / 0xff);
              param_3 = (char *)((longlong)param_3 + (ulonglong)pcVar21 / 0xff);
              pcVar21 = (char *)((ulonglong)pcVar21 % 0xff);
            }
            *param_3 = (char)pcVar21;
          }
          memcpy((char *)((longlong)param_3 + 1),piVar15,(size_t)pcVar16);
          return (int)param_3 + 1 + ((int)pcVar16 - local_res18);
        }
      }
      return 0;
    }
    if ((uint)param_4 < 0x7e000001) {
      *(int *)((longlong)param_1 + 0x4018) = param_4;
      *(uint *)((longlong)param_1 + 0x4000) = uVar12 + param_4;
      *(undefined2 *)((longlong)param_1 + 0x4006) = 3;
      piVar15 = (int *)param_2;
      if (0xc < param_4) {
        piVar14 = (int *)(param_2 + 1);
        *(short *)((longlong)param_1 +
                  (ulonglong)((uint)(*(int *)param_2 * -0x61c8864f) >> 0x13) * 2) = sVar13 - sVar26;
        iVar11 = *piVar14;
LAB_1414651f0:
        uVar5 = (ulonglong)((uint)(iVar11 * -0x61c8864f) >> 0x13);
        iVar24 = 1;
        iVar11 = iVar29 << 6;
        do {
          piVar28 = piVar14;
          uVar4 = *(ushort *)((longlong)param_1 + uVar5 * 2);
          lVar9 = (longlong)iVar24;
          iVar24 = iVar11 >> 6;
          piVar14 = (int *)(lVar9 + (longlong)piVar28);
          iVar11 = iVar11 + 1;
          if (piVar19 < piVar14) goto LAB_141465566;
          iVar23 = *piVar14;
          piVar18 = (int *)((ulonglong)uVar4 + lVar27);
          *(short *)((longlong)param_1 + uVar5 * 2) = (short)piVar28 - sVar26;
          uVar5 = (ulonglong)((uint)(iVar23 * -0x61c8864f) >> 0x13);
        } while ((uVar4 < uVar12) || (*piVar18 != *piVar28));
        if (piVar15 < piVar28 && param_2 < piVar18) {
          do {
            piVar14 = (int *)((longlong)piVar18 - 1);
            piVar17 = (int *)((longlong)piVar28 - 1);
            if (*(char *)((longlong)piVar28 - 1) != *(char *)((longlong)piVar18 - 1)) break;
            piVar18 = piVar14;
            piVar28 = piVar17;
          } while (piVar15 < piVar17 && param_2 < piVar14);
        }
        uVar30 = (int)piVar28 - (int)piVar15;
        uVar5 = (ulonglong)uVar30;
        psVar20 = (short *)((longlong)param_3 + 1);
        if (pcVar21 < (char *)(uVar5 / 0xff + 8 + uVar5 + (longlong)psVar20)) {
          return 0;
        }
        if (uVar30 < 0xf) {
          *param_3 = (char)uVar30 << 4;
        }
        else {
          uVar30 = uVar30 - 0xf;
          *param_3 = -0x10;
          if (0xfe < (int)uVar30) {
            uVar6 = (ulonglong)uVar30 / 0xff;
            memset(psVar20,(int)CONCAT71((int7)(uVar6 >> 8),0xff),uVar6);
            psVar20 = (short *)((longlong)psVar20 + uVar6);
            uVar30 = uVar30 + (int)uVar6 * -0xff;
          }
          *(char *)psVar20 = (char)uVar30;
          psVar20 = (short *)((longlong)psVar20 + 1);
        }
        psVar7 = (short *)(uVar5 + (longlong)psVar20);
        lVar9 = (longlong)piVar15 - (longlong)psVar20;
        do {
          *(undefined8 *)psVar20 = *(undefined8 *)((longlong)psVar20 + lVar9);
          psVar20 = psVar20 + 4;
        } while (psVar20 < psVar7);
        puVar2 = (ulonglong *)(param_2 + (longlong)param_4 + -0xc);
        psVar20 = (short *)param_3;
        piVar15 = piVar28;
        do {
          puVar8 = (ulonglong *)(piVar15 + 1);
          puVar10 = (ulonglong *)(piVar18 + 1);
          *psVar7 = (short)piVar15 - (short)piVar18;
          param_3 = (char *)(psVar7 + 1);
          iVar11 = (int)puVar8;
          if (puVar8 < puVar2) {
            uVar5 = *puVar8 ^ *puVar10;
            if (uVar5 == 0) {
              puVar8 = (ulonglong *)(piVar15 + 3);
              puVar10 = (ulonglong *)(piVar18 + 3);
              if (puVar8 < puVar2) {
LAB_1414653b0:
                uVar5 = *puVar8 ^ *puVar10;
                if (uVar5 == 0) goto code_r0x0001414653bc;
                uVar6 = 0;
                if (uVar5 != 0) {
                  for (; (uVar5 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
                  }
                }
                uVar30 = (int)puVar8 + (((uint)(uVar6 >> 3) & 0x1fffffff) - iVar11);
                goto LAB_14146540e;
              }
              goto LAB_1414653c9;
            }
            lVar9 = 0;
            if (uVar5 != 0) {
              for (; (uVar5 >> lVar9 & 1) == 0; lVar9 = lVar9 + 1) {
              }
            }
            uVar30 = (uint)lVar9 >> 3;
          }
          else {
LAB_1414653c9:
            if ((puVar8 < param_2 + (longlong)param_4 + -8) && ((int)*puVar10 == (int)*puVar8)) {
              puVar8 = (ulonglong *)((longlong)puVar8 + 4);
              puVar10 = (ulonglong *)((longlong)puVar10 + 4);
            }
            if ((puVar8 < param_2 + (longlong)param_4 + -6) && ((short)*puVar10 == (short)*puVar8))
            {
              puVar8 = (ulonglong *)((longlong)puVar8 + 2);
              puVar10 = (ulonglong *)((longlong)puVar10 + 2);
            }
            if ((puVar8 < param_2 + (longlong)param_4 + -5) && ((char)*puVar10 == (char)*puVar8)) {
              puVar8 = (ulonglong *)((longlong)puVar8 + 1);
            }
            uVar30 = (int)puVar8 - iVar11;
          }
LAB_14146540e:
          piVar15 = (int *)((longlong)piVar15 + (ulonglong)uVar30 + 4);
          if (pcVar21 < (char *)((ulonglong)(uVar30 + 0xf0) / 0xff + 6 + (longlong)param_3)) {
            return 0;
          }
          if (uVar30 < 0xf) {
            *(char *)psVar20 = (char)*psVar20 + (char)uVar30;
          }
          else {
            uVar30 = uVar30 - 0xf;
            uVar5 = (ulonglong)uVar30;
            *(char *)psVar20 = (char)*psVar20 + '\x0f';
            *(short *)((longlong)param_3 + 0) = -1;
            *(short *)((longlong)param_3 + 2) = -1;
            if (0x3fb < uVar30) {
              uVar6 = (ulonglong)uVar30 / 0x3fc;
              do {
                param_3 = (char *)((longlong)param_3 + 4);
                uVar5 = (ulonglong)((int)uVar5 - 0x3fc);
                *(short *)((longlong)param_3 + 0) = -1;
                *(short *)((longlong)param_3 + 2) = -1;
                uVar6 = uVar6 - 1;
              } while (uVar6 != 0);
            }
            pcVar16 = (char *)((longlong)param_3 + uVar5 / 0xff);
            *pcVar16 = (char)(uVar5 / 0xff) + (char)uVar5;
            param_3 = pcVar16 + 1;
          }
          if (piVar19 <= piVar15) break;
          *(short *)((longlong)param_1 +
                    (ulonglong)((uint)(*(int *)((longlong)piVar15 + -2) * -0x61c8864f) >> 0x13) * 2)
               = ((short)piVar15 + -2) - sVar26;
          uVar5 = (ulonglong)((uint)(*piVar15 * -0x61c8864f) >> 0x13);
          uVar4 = *(ushort *)((longlong)param_1 + uVar5 * 2);
          *(short *)((longlong)param_1 + uVar5 * 2) = (short)piVar15 - sVar26;
          piVar18 = (int *)((ulonglong)uVar4 + lVar27);
          if ((uVar4 < uVar12) || (*piVar18 != *piVar15)) goto LAB_141465537;
          psVar7 = (short *)((longlong)param_3 + 1);
          *param_3 = '\0';
          psVar20 = (short *)param_3;
        } while( true );
      }
LAB_141465566:
      pcVar16 = param_2 + ((longlong)param_4 - (longlong)piVar15);
      if ((char *)((longlong)param_3 + (longlong)(pcVar16 + (ulonglong)(pcVar16 + 0xf0) / 0xff + 1))
          <= pcVar21) {
        if (pcVar16 < (char *)0xf) {
          *param_3 = (char)pcVar16 << 4;
        }
        else {
          *param_3 = -0x10;
          pcVar21 = pcVar16 + -0xf;
          param_3 = (char *)((longlong)param_3 + 1);
          if ((char *)0xfe < pcVar21) {
            memset(param_3,(int)CONCAT71((int7)((ulonglong)pcVar21 / 0x1fe),0xff),
                   (ulonglong)pcVar21 / 0xff);
            param_3 = (char *)((longlong)param_3 + (ulonglong)pcVar21 / 0xff);
            pcVar21 = (char *)((ulonglong)pcVar21 % 0xff);
          }
          *param_3 = (char)pcVar21;
        }
        memcpy((char *)((longlong)param_3 + 1),piVar15,(size_t)pcVar16);
        return (int)pcVar16 + (((int)param_3 + 1) - local_res18);
      }
    }
    return 0;
  }
  if (sVar26 == 0) {
    if (*(short *)((longlong)param_1 + 0x4006) != 0) {
      memset(param_1,0,0x4000);
      *(undefined4 *)((longlong)param_1 + 0x4000) = 0;
      *(short *)((longlong)param_1 + 0x4006) = 0;
    }
    if (*(int *)((longlong)param_1 + 0x4000) != 0) {
      *(int *)((longlong)param_1 + 0x4000) = *(int *)((longlong)param_1 + 0x4000) + 0x10000;
    }
    *(undefined8 *)((longlong)param_1 + 0x4010) = 0;
    *(undefined8 *)((longlong)param_1 + 0x4008) = 0;
    *(undefined4 *)((longlong)param_1 + 0x4018) = 0;
  }
  else {
    memset(param_1,0,0x4020);
  }
  lVar27 = (longlong)param_2 - (ulonglong)*(uint *)((longlong)param_1 + 0x4000);
  pcVar21 = param_3 + param_5;
  if (0x7e000000 < (uint)param_4) {
    return 0;
  }
  *(int *)((longlong)param_1 + 0x4018) = param_4;
  *(uint *)((longlong)param_1 + 0x4000) = *(uint *)((longlong)param_1 + 0x4000) + param_4;
  iVar11 = (int)lVar27;
  *(undefined2 *)((longlong)param_1 + 0x4006) = 2;
  plVar22 = (longlong *)(param_2 + 1);
  *(int *)((longlong)param_1 + ((ulonglong)(*(longlong *)param_2 * -0x30e4432345000000) >> 0x34) * 4
          ) = (int)param_2 - iVar11;
  lVar9 = *plVar22;
  plVar31 = (longlong *)param_2;
LAB_141465bc2:
  iVar23 = 1;
  iVar24 = iVar29 << 6;
  do {
    plVar32 = plVar22;
    uVar5 = (ulonglong)(lVar9 * -0x30e4432345000000) >> 0x34;
    uVar12 = *(uint *)((longlong)param_1 + uVar5 * 4);
    uVar30 = (int)plVar32 - iVar11;
    plVar22 = (longlong *)((longlong)iVar23 + (longlong)plVar32);
    iVar23 = iVar24 >> 6;
    iVar24 = iVar24 + 1;
    if (param_2 + (longlong)param_4 + -0xb < plVar22) goto LAB_141465f4f;
    lVar9 = *plVar22;
    piVar19 = (int *)((ulonglong)uVar12 + lVar27);
    *(uint *)((longlong)param_1 + uVar5 * 4) = uVar30;
  } while ((uVar12 + 0xffff < uVar30) || (*piVar19 != (int)*plVar32));
  if (plVar31 < plVar32 && param_2 < piVar19) {
    do {
      piVar15 = (int *)((longlong)piVar19 - 1);
      plVar22 = (longlong *)((longlong)plVar32 - 1);
      if (*(char *)((longlong)plVar32 - 1) != *(char *)((longlong)piVar19 - 1)) break;
      piVar19 = piVar15;
      plVar32 = plVar22;
    } while (param_2 < piVar15 && plVar31 < plVar22);
  }
  uVar12 = (int)plVar32 - (int)plVar31;
  uVar5 = (ulonglong)uVar12;
  psVar20 = (short *)((longlong)param_3 + 1);
  if (pcVar21 < (char *)(uVar5 / 0xff + 8 + uVar5 + (longlong)psVar20)) {
    return 0;
  }
  if (uVar12 < 0xf) {
    *param_3 = (char)uVar12 << 4;
  }
  else {
    uVar12 = uVar12 - 0xf;
    *param_3 = -0x10;
    if (0xfe < (int)uVar12) {
      uVar6 = (ulonglong)uVar12 / 0xff;
      memset(psVar20,(int)CONCAT71((int7)(uVar6 >> 8),0xff),uVar6);
      psVar20 = (short *)((longlong)psVar20 + uVar6);
      uVar12 = uVar12 + (int)uVar6 * -0xff;
    }
    *(char *)psVar20 = (char)uVar12;
    psVar20 = (short *)((longlong)psVar20 + 1);
  }
  psVar7 = (short *)((longlong)psVar20 + uVar5);
  lVar9 = (longlong)plVar31 - (longlong)psVar20;
  do {
    *(undefined8 *)psVar20 = *(undefined8 *)(lVar9 + (longlong)psVar20);
    psVar20 = psVar20 + 4;
  } while (psVar20 < psVar7);
  puVar2 = (ulonglong *)(param_2 + (longlong)param_4 + -0xc);
  psVar20 = (short *)param_3;
  plVar31 = plVar32;
  do {
    puVar8 = (ulonglong *)((longlong)plVar31 + 4);
    puVar10 = (ulonglong *)(piVar19 + 1);
    *psVar7 = (short)plVar31 - (short)piVar19;
    param_3 = (char *)(psVar7 + 1);
    iVar24 = (int)puVar8;
    if (puVar8 < puVar2) {
      uVar5 = *puVar10 ^ *puVar8;
      if (uVar5 == 0) {
        puVar8 = (ulonglong *)((longlong)plVar31 + 0xc);
        puVar10 = (ulonglong *)(piVar19 + 3);
        if (puVar8 < puVar2) {
LAB_141465da0:
          uVar5 = *puVar10 ^ *puVar8;
          if (uVar5 == 0) goto code_r0x000141465dac;
          uVar6 = 0;
          if (uVar5 != 0) {
            for (; (uVar5 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
            }
          }
          uVar12 = (int)puVar8 + (((uint)(uVar6 >> 3) & 0x1fffffff) - iVar24);
          goto LAB_141465e00;
        }
        goto LAB_141465db9;
      }
      lVar9 = 0;
      if (uVar5 != 0) {
        for (; (uVar5 >> lVar9 & 1) == 0; lVar9 = lVar9 + 1) {
        }
      }
      uVar12 = (uint)lVar9 >> 3;
    }
    else {
LAB_141465db9:
      if ((puVar8 < param_2 + (longlong)param_4 + -8) && ((int)*puVar10 == (int)*puVar8)) {
        puVar8 = (ulonglong *)((longlong)puVar8 + 4);
        puVar10 = (ulonglong *)((longlong)puVar10 + 4);
      }
      if ((puVar8 < param_2 + (longlong)param_4 + -6) && ((short)*puVar10 == (short)*puVar8)) {
        puVar8 = (ulonglong *)((longlong)puVar8 + 2);
        puVar10 = (ulonglong *)((longlong)puVar10 + 2);
      }
      if ((puVar8 < param_2 + (longlong)param_4 + -5) && ((char)*puVar10 == (char)*puVar8)) {
        puVar8 = (ulonglong *)((longlong)puVar8 + 1);
      }
      uVar12 = (int)puVar8 - iVar24;
    }
LAB_141465e00:
    plVar31 = (longlong *)((longlong)plVar31 + (ulonglong)uVar12 + 4);
    if (pcVar21 < (char *)((ulonglong)(uVar12 + 0xf0) / 0xff + 6 + (longlong)param_3)) {
      return 0;
    }
    if (uVar12 < 0xf) {
      *(char *)psVar20 = (char)uVar12 + (char)*psVar20;
    }
    else {
      uVar12 = uVar12 - 0xf;
      uVar5 = (ulonglong)uVar12;
      *(char *)psVar20 = (char)*psVar20 + '\x0f';
      *(short *)((longlong)param_3 + 0) = -1;
      *(short *)((longlong)param_3 + 2) = -1;
      if (0x3fb < uVar12) {
        uVar6 = (ulonglong)uVar12 / 0x3fc;
        do {
          param_3 = (char *)((longlong)param_3 + 4);
          uVar5 = (ulonglong)((int)uVar5 - 0x3fc);
          *(short *)((longlong)param_3 + 0) = -1;
          *(short *)((longlong)param_3 + 2) = -1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      pcVar16 = (char *)((longlong)param_3 + uVar5 / 0xff);
      *pcVar16 = (char)uVar5 + (char)(uVar5 / 0xff);
      param_3 = pcVar16 + 1;
    }
    if (param_2 + (longlong)param_4 + -0xb <= plVar31) {
LAB_141465f4f:
      pcVar16 = param_2 + ((longlong)param_4 - (longlong)plVar31);
      if (pcVar21 < (char *)((longlong)param_3 +
                            (longlong)(pcVar16 + (ulonglong)(pcVar16 + 0xf0) / 0xff + 1))) {
        return 0;
      }
      if (pcVar16 < (char *)0xf) {
        *param_3 = (char)pcVar16 << 4;
      }
      else {
        *param_3 = -0x10;
        pcVar21 = pcVar16 + -0xf;
        param_3 = (char *)((longlong)param_3 + 1);
        if ((char *)0xfe < pcVar21) {
          memset(param_3,(int)CONCAT71((int7)((ulonglong)pcVar21 / 0x1fe),0xff),
                 (ulonglong)pcVar21 / 0xff);
          param_3 = (char *)((longlong)param_3 + (ulonglong)pcVar21 / 0xff);
          pcVar21 = (char *)((ulonglong)pcVar21 % 0xff);
        }
        *param_3 = (char)pcVar21;
      }
      memcpy((char *)((longlong)param_3 + 1),plVar31,(size_t)pcVar16);
      return (int)param_3 + 1 + ((int)pcVar16 - local_res18);
    }
    *(int *)((longlong)param_1 +
            ((ulonglong)(*(longlong *)((longlong)plVar31 + -2) * -0x30e4432345000000) >> 0x34) * 4)
         = ((int)plVar31 + -2) - iVar11;
    uVar30 = (int)plVar31 - iVar11;
    uVar5 = (ulonglong)(*plVar31 * -0x30e4432345000000) >> 0x34;
    uVar12 = *(uint *)((longlong)param_1 + uVar5 * 4);
    *(uint *)((longlong)param_1 + uVar5 * 4) = uVar30;
    piVar19 = (int *)((ulonglong)uVar12 + lVar27);
    if ((uVar12 + 0xffff < uVar30) || (*piVar19 != (int)*plVar31)) goto LAB_141465f25;
    psVar7 = (short *)((longlong)param_3 + 1);
    *param_3 = '\0';
    psVar20 = (short *)param_3;
  } while( true );
code_r0x000141464eac:
  puVar8 = puVar8 + 1;
  puVar10 = puVar10 + 1;
  if (puVar2 <= puVar8) goto LAB_141464eb9;
  goto LAB_141464ea0;
LAB_141464ffb:
  lVar9 = *(longlong *)((longlong)plVar31 + 1);
  plVar22 = (longlong *)((longlong)plVar31 + 1);
  goto LAB_141464cf0;
code_r0x0001414649dc:
  puVar10 = puVar10 + 1;
  puVar8 = puVar8 + 1;
  if (puVar2 <= puVar10) goto LAB_1414649e9;
  goto LAB_1414649d0;
LAB_141464b26:
  iVar11 = *(int *)((longlong)piVar15 + 1);
  piVar14 = (int *)((longlong)piVar15 + 1);
  piVar28 = piVar15;
  goto LAB_141464850;
code_r0x0001414645ec:
  puVar8 = puVar8 + 1;
  puVar10 = puVar10 + 1;
  if (puVar2 <= puVar8) goto LAB_1414645f9;
  goto LAB_1414645e0;
LAB_141464739:
  iVar11 = *(int *)((longlong)piVar15 + 1);
  piVar14 = (int *)((longlong)piVar15 + 1);
  piVar28 = piVar15;
  goto LAB_141464450;
code_r0x00014146584c:
  puVar8 = puVar8 + 1;
  puVar10 = puVar10 + 1;
  if (puVar2 <= puVar8) goto LAB_141465859;
  goto LAB_141465840;
LAB_1414659b5:
  iVar11 = *(int *)((longlong)piVar15 + 1);
  piVar14 = (int *)((longlong)piVar15 + 1);
  goto LAB_141465682;
code_r0x0001414653bc:
  puVar8 = puVar8 + 1;
  puVar10 = puVar10 + 1;
  if (puVar2 <= puVar8) goto LAB_1414653c9;
  goto LAB_1414653b0;
LAB_141465537:
  iVar11 = *(int *)((longlong)piVar15 + 1);
  piVar14 = (int *)((longlong)piVar15 + 1);
  goto LAB_1414651f0;
code_r0x000141465dac:
  puVar8 = puVar8 + 1;
  puVar10 = puVar10 + 1;
  if (puVar2 <= puVar8) goto LAB_141465db9;
  goto LAB_141465da0;
LAB_141465f25:
  lVar9 = *(longlong *)((longlong)plVar31 + 1);
  plVar22 = (longlong *)((longlong)plVar31 + 1);
  goto LAB_141465bc2;
}

// LZ4_compress_fast_force @ 141466030

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
Trace::LZ4_compress_fast_force(char *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong *puVar7;
  longlong lVar8;
  int *piVar9;
  int *piVar10;
  short *psVar11;
  char *pcVar12;
  short *psVar13;
  longlong *plVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  longlong *plVar19;
  longlong *plVar20;
  undefined1 auStack_40d8 [32];
  int local_40b8;
  char *local_40b0;
  char *local_40a8;
  longlong *local_4098;
  char *local_4090;
  int *local_4088;
  uint local_4078 [4096];
  int local_78;
  undefined2 local_72;
  int local_60;
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x141466047;
  local_58 = __security_cookie.value ^ (ulonglong)auStack_40d8;
  local_4090 = param_2;
  local_4088 = (int *)param_1;
  memset(local_4078,0,0x4020);
  local_40b0 = param_1 + param_3;
  local_4098 = (longlong *)(local_40b0 + -0xb);
  local_40a8 = param_2 + param_4;
  local_60 = param_3;
  if (param_3 < 0x1000b) {
    iVar17 = 0;
    if ((uint)param_3 < 0x7e000001) {
      local_78 = local_78 + param_3;
      local_72 = 3;
      pcVar12 = param_2;
      if (0xc < param_3) {
        plVar14 = (longlong *)(param_1 + 1);
        *(undefined2 *)
         ((longlong)local_4078 + (ulonglong)((uint)(*(int *)param_1 * -0x61c8864f) >> 0x13) * 2) = 0
        ;
        iVar17 = (int)*plVar14;
        local_40b8 = param_5 << 6;
        piVar10 = (int *)param_1;
LAB_141466120:
        iVar15 = 1;
        iVar16 = local_40b8;
        do {
          plVar20 = plVar14;
          uVar5 = (ulonglong)((uint)(iVar17 * -0x61c8864f) >> 0x13);
          plVar14 = (longlong *)((longlong)iVar15 + (longlong)plVar20);
          iVar15 = iVar16 >> 6;
          iVar16 = iVar16 + 1;
          pcVar12 = local_4090;
          if (local_4098 < plVar14) goto LAB_14146644c;
          iVar17 = (int)*plVar14;
          piVar9 = (int *)((ulonglong)*(ushort *)((longlong)local_4078 + uVar5 * 2) +
                          (longlong)piVar10);
          lVar8 = *plVar20;
          *(short *)((longlong)local_4078 + uVar5 * 2) = (short)plVar20 - (short)piVar10;
        } while (*piVar9 != (int)lVar8);
        if (param_1 < plVar20 && piVar10 < piVar9) {
          do {
            piVar1 = (int *)((longlong)piVar9 - 1);
            plVar14 = (longlong *)((longlong)plVar20 - 1);
            if (*(char *)((longlong)plVar20 - 1) != *(char *)((longlong)piVar9 - 1)) break;
            piVar9 = piVar1;
            plVar20 = plVar14;
          } while (piVar10 < piVar1 && param_1 < plVar14);
        }
        uVar18 = (int)plVar20 - (int)param_1;
        uVar5 = (ulonglong)uVar18;
        psVar11 = (short *)((longlong)param_2 + 1);
        if (local_40a8 < (char *)(uVar5 / 0xff + 8 + uVar5 + (longlong)psVar11)) {
          return 0;
        }
        if (uVar18 < 0xf) {
          *param_2 = (char)uVar18 << 4;
        }
        else {
          uVar18 = uVar18 - 0xf;
          *param_2 = -0x10;
          if (0xfe < (int)uVar18) {
            uVar4 = (ulonglong)uVar18 / 0xff;
            memset(psVar11,(int)CONCAT71((int7)(uVar4 >> 8),0xff),uVar4);
            psVar11 = (short *)((longlong)psVar11 + uVar4);
            uVar18 = uVar18 + (int)uVar4 * -0xff;
          }
          *(char *)psVar11 = (char)uVar18;
          psVar11 = (short *)((longlong)psVar11 + 1);
        }
        psVar13 = (short *)(uVar5 + (longlong)psVar11);
        lVar8 = (longlong)param_1 - (longlong)psVar11;
        do {
          *(undefined8 *)psVar11 = *(undefined8 *)((longlong)psVar11 + lVar8);
          psVar11 = psVar11 + 4;
        } while (psVar11 < psVar13);
        puVar2 = (ulonglong *)(local_40b0 + -0xc);
        psVar11 = (short *)param_2;
        param_1 = (char *)plVar20;
        do {
          puVar7 = (ulonglong *)(piVar9 + 1);
          *psVar13 = (short)param_1 - (short)piVar9;
          puVar3 = (ulonglong *)((longlong)param_1 + 4);
          param_2 = (char *)(psVar13 + 1);
          iVar17 = (int)puVar3;
          if (puVar3 < puVar2) {
            uVar5 = *puVar7 ^ *puVar3;
            if (uVar5 == 0) {
              puVar3 = (ulonglong *)((longlong)param_1 + 0xc);
              puVar7 = (ulonglong *)(piVar9 + 3);
              if (puVar3 < puVar2) {
LAB_1414662b0:
                uVar5 = *puVar7 ^ *puVar3;
                if (uVar5 == 0) goto code_r0x0001414662bc;
                uVar4 = 0;
                if (uVar5 != 0) {
                  for (; (uVar5 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
                  }
                }
                uVar18 = (int)puVar3 + (((uint)(uVar4 >> 3) & 0x1fffffff) - iVar17);
                goto LAB_14146630e;
              }
              goto LAB_1414662c9;
            }
            lVar8 = 0;
            if (uVar5 != 0) {
              for (; (uVar5 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
              }
            }
            uVar18 = (uint)lVar8 >> 3;
          }
          else {
LAB_1414662c9:
            if ((puVar3 < local_40b0 + -8) && ((int)*puVar7 == (int)*puVar3)) {
              puVar3 = (ulonglong *)((longlong)puVar3 + 4);
              puVar7 = (ulonglong *)((longlong)puVar7 + 4);
            }
            if ((puVar3 < local_40b0 + -6) && ((short)*puVar7 == (short)*puVar3)) {
              puVar3 = (ulonglong *)((longlong)puVar3 + 2);
              puVar7 = (ulonglong *)((longlong)puVar7 + 2);
            }
            if ((puVar3 < local_40b0 + -5) && ((char)*puVar7 == (char)*puVar3)) {
              puVar3 = (ulonglong *)((longlong)puVar3 + 1);
            }
            uVar18 = (int)puVar3 - iVar17;
          }
LAB_14146630e:
          param_1 = (char *)((longlong)param_1 + (ulonglong)uVar18 + 4);
          if (local_40a8 < (char *)((ulonglong)(uVar18 + 0xf0) / 0xff + 6 + (longlong)param_2)) {
            return 0;
          }
          if (uVar18 < 0xf) {
            *(char *)psVar11 = (char)*psVar11 + (char)uVar18;
          }
          else {
            uVar18 = uVar18 - 0xf;
            uVar5 = (ulonglong)uVar18;
            *(char *)psVar11 = (char)*psVar11 + '\x0f';
            *(short *)((longlong)param_2 + 0) = -1;
            *(short *)((longlong)param_2 + 2) = -1;
            if (0x3fb < uVar18) {
              uVar4 = (ulonglong)uVar18 / 0x3fc;
              do {
                param_2 = (char *)((longlong)param_2 + 4);
                uVar5 = (ulonglong)((int)uVar5 - 0x3fc);
                *(short *)((longlong)param_2 + 0) = -1;
                *(short *)((longlong)param_2 + 2) = -1;
                uVar4 = uVar4 - 1;
              } while (uVar4 != 0);
            }
            pcVar12 = (char *)((longlong)param_2 + uVar5 / 0xff);
            *pcVar12 = (char)(uVar5 / 0xff) + (char)uVar5;
            param_2 = pcVar12 + 1;
          }
          pcVar12 = local_4090;
          if (local_4098 <= param_1) break;
          *(short *)((longlong)local_4078 +
                    (ulonglong)((uint)(*(int *)((longlong)param_1 + -2) * -0x61c8864f) >> 0x13) * 2)
               = ((short)param_1 + -2) - (short)local_4088;
          lVar8 = *(longlong *)param_1;
          uVar5 = (ulonglong)((uint)((int)lVar8 * -0x61c8864f) >> 0x13);
          piVar9 = (int *)((ulonglong)*(ushort *)((longlong)local_4078 + uVar5 * 2) +
                          (longlong)local_4088);
          *(short *)((longlong)local_4078 + uVar5 * 2) = (short)param_1 - (short)local_4088;
          if (*piVar9 != (int)lVar8) goto LAB_141466426;
          psVar13 = (short *)((longlong)param_2 + 1);
          *param_2 = '\0';
          psVar11 = (short *)param_2;
        } while( true );
      }
LAB_14146644c:
      iVar17 = 0;
      uVar5 = (longlong)local_40b0 - (longlong)param_1;
      if ((char *)((longlong)param_2 + (uVar5 + 0xf0) / 0xff + uVar5 + 1) <= local_40a8) {
        if (uVar5 < 0xf) {
          *param_2 = (char)uVar5 << 4;
        }
        else {
          *param_2 = -0x10;
          uVar4 = uVar5 - 0xf;
          param_2 = (char *)((longlong)param_2 + 1);
          if (0xfe < uVar4) {
            memset(param_2,(int)CONCAT71((int7)(uVar4 / 0x1fe),0xff),uVar4 / 0xff);
            param_2 = (char *)((longlong)param_2 + uVar4 / 0xff);
            uVar4 = uVar4 % 0xff;
          }
          *param_2 = (char)uVar4;
        }
        memcpy((char *)((longlong)param_2 + 1),param_1,uVar5);
        iVar17 = (((int)param_2 + 1) - (int)pcVar12) + (int)uVar5;
      }
    }
  }
  else {
    if ((uint)param_3 < 0x7e000001) {
      local_78 = local_78 + param_3;
      plVar14 = (longlong *)(param_1 + 1);
      local_72 = 2;
      local_4078[(ulonglong)(*(longlong *)param_1 * -0x30e4432345000000) >> 0x34] = 0;
      lVar8 = *plVar14;
      local_40b8 = param_5 << 6;
      plVar20 = (longlong *)param_1;
LAB_141466560:
      uVar5 = (ulonglong)(lVar8 * -0x30e4432345000000) >> 0x34;
      iVar16 = 1;
      iVar17 = local_40b8;
      do {
        plVar19 = plVar14;
        uVar18 = local_4078[uVar5];
        uVar6 = (int)plVar19 - (int)param_1;
        lVar8 = (longlong)iVar16;
        iVar16 = iVar17 >> 6;
        plVar14 = (longlong *)(lVar8 + (longlong)plVar19);
        iVar17 = iVar17 + 1;
        if (local_4098 < plVar14) goto LAB_1414668d2;
        lVar8 = *plVar14;
        piVar10 = (int *)((ulonglong)uVar18 + (longlong)param_1);
        local_4078[uVar5] = uVar6;
        uVar5 = (ulonglong)(lVar8 * -0x30e4432345000000) >> 0x34;
      } while ((uVar18 + 0xffff < uVar6) || (*piVar10 != (int)*plVar19));
      if (plVar20 < plVar19 && param_1 < piVar10) {
        do {
          piVar9 = (int *)((longlong)piVar10 - 1);
          plVar14 = (longlong *)((longlong)plVar19 - 1);
          if (*(char *)((longlong)plVar19 - 1) != *(char *)((longlong)piVar10 - 1)) break;
          piVar10 = piVar9;
          plVar19 = plVar14;
        } while (param_1 < piVar9 && plVar20 < plVar14);
      }
      uVar18 = (int)plVar19 - (int)plVar20;
      uVar5 = (ulonglong)uVar18;
      psVar11 = (short *)((longlong)param_2 + 1);
      if (local_40a8 < (char *)((longlong)psVar11 + uVar5 + uVar5 / 0xff + 8)) {
        return 0;
      }
      if (uVar18 < 0xf) {
        *param_2 = (char)uVar18 << 4;
      }
      else {
        uVar18 = uVar18 - 0xf;
        *param_2 = -0x10;
        if (0xfe < (int)uVar18) {
          uVar4 = (ulonglong)uVar18 / 0xff;
          memset(psVar11,(int)CONCAT71((int7)(uVar4 >> 8),0xff),uVar4);
          psVar11 = (short *)((longlong)psVar11 + uVar4);
          uVar18 = uVar18 + (int)uVar4 * -0xff;
        }
        *(char *)psVar11 = (char)uVar18;
        psVar11 = (short *)((longlong)psVar11 + 1);
      }
      psVar13 = (short *)((longlong)psVar11 + uVar5);
      lVar8 = (longlong)plVar20 - (longlong)psVar11;
      do {
        *(undefined8 *)psVar11 = *(undefined8 *)(lVar8 + (longlong)psVar11);
        psVar11 = psVar11 + 4;
      } while (psVar11 < psVar13);
      puVar2 = (ulonglong *)(local_40b0 + -0xc);
      psVar11 = (short *)param_2;
      plVar20 = plVar19;
      do {
        puVar7 = (ulonglong *)((longlong)plVar20 + 4);
        puVar3 = (ulonglong *)(piVar10 + 1);
        *psVar13 = (short)plVar20 - (short)piVar10;
        param_2 = (char *)(psVar13 + 1);
        iVar17 = (int)puVar7;
        if (puVar7 < puVar2) {
          uVar5 = *puVar7 ^ *puVar3;
          if (uVar5 == 0) {
            puVar7 = (ulonglong *)((longlong)plVar20 + 0xc);
            puVar3 = (ulonglong *)(piVar10 + 3);
            if (puVar7 < puVar2) {
LAB_141466720:
              uVar5 = *puVar7 ^ *puVar3;
              if (uVar5 == 0) goto code_r0x00014146672c;
              uVar4 = 0;
              if (uVar5 != 0) {
                for (; (uVar5 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
                }
              }
              uVar18 = (int)puVar7 + (((uint)(uVar4 >> 3) & 0x1fffffff) - iVar17);
              goto LAB_14146677e;
            }
            goto LAB_141466739;
          }
          lVar8 = 0;
          if (uVar5 != 0) {
            for (; (uVar5 >> lVar8 & 1) == 0; lVar8 = lVar8 + 1) {
            }
          }
          uVar18 = (uint)lVar8 >> 3;
        }
        else {
LAB_141466739:
          if ((puVar7 < local_40b0 + -8) && ((int)*puVar3 == (int)*puVar7)) {
            puVar7 = (ulonglong *)((longlong)puVar7 + 4);
            puVar3 = (ulonglong *)((longlong)puVar3 + 4);
          }
          if ((puVar7 < local_40b0 + -6) && ((short)*puVar3 == (short)*puVar7)) {
            puVar7 = (ulonglong *)((longlong)puVar7 + 2);
            puVar3 = (ulonglong *)((longlong)puVar3 + 2);
          }
          if ((puVar7 < local_40b0 + -5) && ((char)*puVar3 == (char)*puVar7)) {
            puVar7 = (ulonglong *)((longlong)puVar7 + 1);
          }
          uVar18 = (int)puVar7 - iVar17;
        }
LAB_14146677e:
        plVar20 = (longlong *)((longlong)plVar20 + (ulonglong)uVar18 + 4);
        if (local_40a8 < (char *)((ulonglong)(uVar18 + 0xf0) / 0xff + 6 + (longlong)param_2)) {
          return 0;
        }
        if (uVar18 < 0xf) {
          *(char *)psVar11 = (char)*psVar11 + (char)uVar18;
        }
        else {
          uVar18 = uVar18 - 0xf;
          uVar5 = (ulonglong)uVar18;
          *(char *)psVar11 = (char)*psVar11 + '\x0f';
          *(short *)((longlong)param_2 + 0) = -1;
          *(short *)((longlong)param_2 + 2) = -1;
          if (0x3fb < uVar18) {
            uVar4 = (ulonglong)uVar18 / 0x3fc;
            do {
              param_2 = (char *)((longlong)param_2 + 4);
              uVar5 = (ulonglong)((int)uVar5 - 0x3fc);
              *(short *)((longlong)param_2 + 0) = -1;
              *(short *)((longlong)param_2 + 2) = -1;
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
          }
          pcVar12 = (char *)((longlong)param_2 + uVar5 / 0xff);
          *pcVar12 = (char)(uVar5 / 0xff) + (char)uVar5;
          param_2 = pcVar12 + 1;
        }
        if (local_4098 <= plVar20) {
LAB_1414668d2:
          local_40b0 = (char *)((longlong)local_40b0 - (longlong)plVar20);
          if (local_40a8 <
              (char *)((longlong)param_2 +
                      (longlong)local_40b0 + 1U + ((longlong)local_40b0 + 0xf0U) / 0xff)) {
            return 0;
          }
          if (local_40b0 < 0xf) {
            *param_2 = (char)local_40b0 << 4;
          }
          else {
            *param_2 = -0x10;
            uVar5 = (longlong)local_40b0 - 0xf;
            param_2 = (char *)((longlong)param_2 + 1);
            if (0xfe < uVar5) {
              memset(param_2,(int)CONCAT71((int7)(uVar5 / 0x1fe),0xff),uVar5 / 0xff);
              param_2 = (char *)((longlong)param_2 + uVar5 / 0xff);
              uVar5 = uVar5 % 0xff;
            }
            *param_2 = (char)uVar5;
          }
          pcVar12 = local_40b0;
          memcpy((char *)((longlong)param_2 + 1),plVar20,(size_t)local_40b0);
          return ((int)pcVar12 - (int)local_4090) + (int)param_2 + 1;
        }
        lVar8 = *plVar20;
        local_4078[(ulonglong)(*(longlong *)((longlong)plVar20 + -2) * -0x30e4432345000000) >> 0x34]
             = ((int)plVar20 + -2) - (int)local_4088;
        uVar5 = (ulonglong)(lVar8 * -0x30e4432345000000) >> 0x34;
        uVar6 = (int)plVar20 - (int)local_4088;
        uVar18 = local_4078[uVar5];
        local_4078[uVar5] = uVar6;
        piVar10 = (int *)((ulonglong)uVar18 + (longlong)local_4088);
        if ((uVar18 + 0xffff < uVar6) || (*piVar10 != (int)*plVar20)) goto LAB_1414668a5;
        psVar13 = (short *)((longlong)param_2 + 1);
        *param_2 = '\0';
        psVar11 = (short *)param_2;
      } while( true );
    }
    iVar17 = 0;
  }
  return iVar17;
code_r0x00014146672c:
  puVar7 = puVar7 + 1;
  puVar3 = puVar3 + 1;
  if (puVar2 <= puVar7) goto LAB_141466739;
  goto LAB_141466720;
LAB_1414668a5:
  lVar8 = *(longlong *)((longlong)plVar20 + 1);
  plVar14 = (longlong *)((longlong)plVar20 + 1);
  param_1 = (char *)local_4088;
  goto LAB_141466560;
code_r0x0001414662bc:
  puVar3 = puVar3 + 1;
  puVar7 = puVar7 + 1;
  if (puVar2 <= puVar3) goto LAB_1414662c9;
  goto LAB_1414662b0;
LAB_141466426:
  iVar17 = *(int *)((longlong)param_1 + 1);
  plVar14 = (longlong *)((longlong)param_1 + 1);
  piVar10 = local_4088;
  goto LAB_141466120;
}

// LZ4_compress_forceExtDict @ 1414669b0

int __cdecl
Trace::LZ4_compress_forceExtDict(LZ4_stream_u *param_1,char *param_2,char *param_3,int param_4)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int *piVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char *pcVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  longlong lVar14;
  int *piVar15;
  uint uVar16;
  char *pcVar17;
  ulonglong *puVar18;
  int iVar19;
  ulonglong *puVar20;
  int iVar21;
  char *pcVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  int *piVar26;
  longlong lVar27;
  int local_res18;
  
  LZ4_renormDictT(&param_1->internal_donotuse,param_4);
  puVar2 = &(param_1->internal_donotuse).dictSize;
  uVar24 = *puVar2;
  uVar12 = (ulonglong)uVar24;
  local_res18 = (int)param_3;
  if (uVar24 < 0x10000) {
    uVar3 = (param_1->internal_donotuse).currentOffset;
    if (uVar3 <= uVar24) goto LAB_14146709e;
    piVar4 = (int *)(param_1->internal_donotuse).dictionary;
    puVar10 = (ulonglong *)(param_2 + (longlong)param_4 + -5);
    lVar14 = (uVar12 - uVar3) + (longlong)piVar4;
    lVar25 = (longlong)param_2 - (ulonglong)uVar3;
    if ((uint)param_4 < 0x7e000001) {
      (param_1->internal_donotuse).tableType = 2;
      *puVar2 = uVar24 + param_4;
      (param_1->internal_donotuse).currentOffset = uVar3 + param_4;
      puVar8 = (ulonglong *)param_2;
      if (0xc < param_4) {
        puVar18 = (ulonglong *)(param_2 + 1);
        iVar11 = (int)lVar25;
        *(int *)((longlong)param_1 +
                ((ulonglong)(*(longlong *)param_2 * -0x30e4432345000000) >> 0x34) * 4) =
             (int)param_2 - iVar11;
        uVar5 = *puVar18;
LAB_141466aca:
        iVar19 = 1;
        iVar21 = 0x40;
        do {
          puVar13 = puVar18;
          uVar6 = uVar5 * -0x30e4432345000000 >> 0x34;
          uVar23 = *(uint *)((longlong)param_1 + uVar6 * 4);
          puVar18 = (ulonglong *)((longlong)puVar13 + (longlong)iVar19);
          iVar19 = iVar21 >> 6;
          uVar16 = (int)puVar13 - iVar11;
          iVar21 = iVar21 + 1;
          if (param_2 + (longlong)param_4 + -0xb < puVar18) goto LAB_141467015;
          piVar26 = (int *)param_2;
          lVar27 = lVar25;
          if (uVar23 < uVar3) {
            piVar26 = piVar4;
            lVar27 = lVar14;
          }
          piVar15 = (int *)(lVar27 + (ulonglong)uVar23);
          uVar5 = *puVar18;
          *(uint *)((longlong)param_1 + uVar6 * 4) = uVar16;
        } while (((uVar23 < uVar3 - uVar24) || (uVar23 + 0xffff < uVar16)) ||
                (*piVar15 != (int)*puVar13));
        iVar19 = uVar16 - uVar23;
        if (puVar8 < puVar13 && piVar26 < piVar15) {
          do {
            piVar1 = (int *)((longlong)piVar15 - 1);
            puVar18 = (ulonglong *)((longlong)puVar13 - 1);
            if (*(char *)((longlong)puVar13 - 1) != *(char *)((longlong)piVar15 - 1)) break;
            puVar13 = puVar18;
            piVar15 = piVar1;
          } while (puVar8 < puVar18 && piVar26 < piVar1);
        }
        uVar23 = (int)puVar13 - (int)puVar8;
        pcVar17 = param_3 + 1;
        if (uVar23 < 0xf) {
          *param_3 = (char)uVar23 << 4;
        }
        else {
          uVar16 = uVar23 - 0xf;
          *param_3 = -0x10;
          if (0xfe < (int)uVar16) {
            uVar5 = (ulonglong)uVar16 / 0xff;
            memset(pcVar17,(int)CONCAT71((int7)(uVar5 >> 8),0xff),uVar5);
            pcVar17 = pcVar17 + uVar5;
            uVar16 = uVar16 + (int)uVar5 * -0xff;
          }
          *pcVar17 = (char)uVar16;
          pcVar17 = pcVar17 + 1;
        }
        pcVar7 = pcVar17 + uVar23;
        lVar27 = (longlong)puVar8 - (longlong)pcVar17;
        do {
          *(undefined8 *)pcVar17 = *(undefined8 *)(pcVar17 + lVar27);
          pcVar17 = pcVar17 + 8;
          pcVar22 = param_3;
        } while (pcVar17 < pcVar7);
        do {
          *(short *)pcVar7 = (short)iVar19;
          puVar8 = (ulonglong *)((longlong)puVar13 + 4);
          param_3 = pcVar7 + 2;
          puVar18 = (ulonglong *)(piVar15 + 1);
          iVar19 = (int)puVar8;
          if (piVar26 == piVar4) {
            puVar20 = (ulonglong *)
                      ((longlong)piVar4 + (uVar12 - (longlong)piVar15) + (longlong)puVar13);
            if (puVar10 < puVar20) {
              puVar20 = puVar10;
            }
            puVar9 = (ulonglong *)((longlong)puVar20 - 7);
            if (puVar8 < puVar9) {
              uVar5 = *puVar8 ^ *puVar18;
              if (uVar5 == 0) {
                puVar8 = (ulonglong *)((longlong)puVar13 + 0xc);
                puVar18 = (ulonglong *)(piVar15 + 3);
                if (puVar8 < puVar9) {
LAB_141466cc0:
                  uVar5 = *puVar8 ^ *puVar18;
                  if (uVar5 == 0) goto code_r0x000141466ccc;
                  uVar6 = 0;
                  if (uVar5 != 0) {
                    for (; (uVar5 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
                    }
                  }
                  uVar23 = (((uint)(uVar6 >> 3) & 0x1fffffff) - iVar19) + (int)puVar8;
                  goto LAB_141466d23;
                }
                goto LAB_141466cd9;
              }
              lVar27 = 0;
              if (uVar5 != 0) {
                for (; (uVar5 >> lVar27 & 1) == 0; lVar27 = lVar27 + 1) {
                }
              }
              uVar23 = (uint)lVar27 >> 3;
            }
            else {
LAB_141466cd9:
              if ((puVar8 < (ulonglong *)((longlong)puVar20 - 3U)) &&
                 ((int)*puVar18 == (int)*puVar8)) {
                puVar8 = (ulonglong *)((longlong)puVar8 + 4);
                puVar18 = (ulonglong *)((longlong)puVar18 + 4);
              }
              if ((puVar8 < (ulonglong *)((longlong)puVar20 - 1U)) &&
                 ((short)*puVar18 == (short)*puVar8)) {
                puVar8 = (ulonglong *)((longlong)puVar8 + 2);
                puVar18 = (ulonglong *)((longlong)puVar18 + 2);
              }
              if ((puVar8 < puVar20) && ((char)*puVar18 == (char)*puVar8)) {
                puVar8 = (ulonglong *)((longlong)puVar8 + 1);
              }
              uVar23 = (int)puVar8 - iVar19;
            }
LAB_141466d23:
            puVar13 = (ulonglong *)((longlong)puVar13 + (ulonglong)uVar23 + 4);
            if (puVar13 == puVar20) {
              puVar18 = (ulonglong *)(param_2 + (longlong)param_4 + -0xc);
              puVar8 = puVar20;
              puVar9 = (ulonglong *)param_2;
              if (puVar20 < puVar18) {
                uVar5 = *(ulonglong *)param_2 ^ *puVar20;
                if (uVar5 == 0) {
                  puVar8 = puVar20 + 1;
                  puVar9 = (ulonglong *)(param_2 + 8);
                  goto LAB_141466d62;
                }
                lVar27 = 0;
                if (uVar5 != 0) {
                  for (; (uVar5 >> lVar27 & 1) == 0; lVar27 = lVar27 + 1) {
                  }
                }
                uVar16 = (uint)lVar27 >> 3;
              }
              else {
LAB_141466d62:
                if (puVar8 < puVar18) {
LAB_141466d70:
                  uVar5 = *puVar9 ^ *puVar8;
                  if (uVar5 == 0) goto code_r0x000141466d7c;
                  uVar6 = 0;
                  if (uVar5 != 0) {
                    for (; (uVar5 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
                    }
                  }
                  uVar16 = (int)puVar8 + (((uint)(uVar6 >> 3) & 0x1fffffff) - (int)puVar20);
                  goto LAB_141466dcd;
                }
LAB_141466d89:
                if ((puVar8 < param_2 + (longlong)param_4 + -8) && ((int)*puVar9 == (int)*puVar8)) {
                  puVar8 = (ulonglong *)((longlong)puVar8 + 4);
                  puVar9 = (ulonglong *)((longlong)puVar9 + 4);
                }
                if ((puVar8 < param_2 + (longlong)param_4 + -6) &&
                   ((short)*puVar9 == (short)*puVar8)) {
                  puVar8 = (ulonglong *)((longlong)puVar8 + 2);
                  puVar9 = (ulonglong *)((longlong)puVar9 + 2);
                }
                if ((puVar8 < puVar10) && ((char)*puVar9 == (char)*puVar8)) {
                  puVar8 = (ulonglong *)((longlong)puVar8 + 1);
                }
                uVar16 = (int)puVar8 - (int)puVar20;
              }
LAB_141466dcd:
              uVar23 = uVar23 + uVar16;
              puVar13 = (ulonglong *)((longlong)puVar13 + (ulonglong)uVar16);
            }
          }
          else {
            puVar20 = (ulonglong *)(param_2 + (longlong)param_4 + -0xc);
            if (puVar8 < puVar20) {
              uVar5 = *puVar8 ^ *puVar18;
              if (uVar5 == 0) {
                puVar8 = (ulonglong *)((longlong)puVar13 + 0xc);
                puVar18 = (ulonglong *)(piVar15 + 3);
                if (puVar8 < puVar20) {
LAB_141466ec0:
                  uVar5 = *puVar8 ^ *puVar18;
                  if (uVar5 == 0) goto code_r0x000141466ec8;
                  uVar6 = 0;
                  if (uVar5 != 0) {
                    for (; (uVar5 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
                    }
                  }
                  uVar23 = (int)puVar8 + (((uint)(uVar6 >> 3) & 0x1fffffff) - iVar19);
                  goto LAB_141466f19;
                }
                goto LAB_141466ed5;
              }
              lVar27 = 0;
              if (uVar5 != 0) {
                for (; (uVar5 >> lVar27 & 1) == 0; lVar27 = lVar27 + 1) {
                }
              }
              uVar23 = (uint)lVar27 >> 3;
            }
            else {
LAB_141466ed5:
              if ((puVar8 < param_2 + (longlong)param_4 + -8) && ((int)*puVar18 == (int)*puVar8)) {
                puVar8 = (ulonglong *)((longlong)puVar8 + 4);
                puVar18 = (ulonglong *)((longlong)puVar18 + 4);
              }
              if ((puVar8 < param_2 + (longlong)param_4 + -6) && ((short)*puVar18 == (short)*puVar8)
                 ) {
                puVar8 = (ulonglong *)((longlong)puVar8 + 2);
                puVar18 = (ulonglong *)((longlong)puVar18 + 2);
              }
              if ((puVar8 < puVar10) && ((char)*puVar18 == (char)*puVar8)) {
                puVar8 = (ulonglong *)((longlong)puVar8 + 1);
              }
              uVar23 = (int)puVar8 - iVar19;
            }
LAB_141466f19:
            puVar13 = (ulonglong *)((longlong)puVar13 + (ulonglong)uVar23 + 4);
          }
          if (uVar23 < 0xf) {
            *pcVar22 = *pcVar22 + (char)uVar23;
          }
          else {
            uVar23 = uVar23 - 0xf;
            *pcVar22 = *pcVar22 + '\x0f';
            param_3[0] = -1;
            param_3[1] = -1;
            param_3[2] = -1;
            param_3[3] = -1;
            if (0x3fb < uVar23) {
              uVar5 = (ulonglong)uVar23 / 0x3fc;
              do {
                param_3 = param_3 + 4;
                uVar23 = uVar23 - 0x3fc;
                param_3[0] = -1;
                param_3[1] = -1;
                param_3[2] = -1;
                param_3[3] = -1;
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
            }
            param_3[(ulonglong)uVar23 / 0xff] = (char)((ulonglong)uVar23 / 0xff) + (char)uVar23;
            param_3 = param_3 + (ulonglong)uVar23 / 0xff + 1;
          }
          puVar8 = puVar13;
          if (param_2 + (longlong)param_4 + -0xb <= puVar13) break;
          uVar16 = (int)puVar13 - iVar11;
          *(int *)((longlong)param_1 +
                  ((ulonglong)(*(longlong *)((longlong)puVar13 + -2) * -0x30e4432345000000) >> 0x34)
                  * 4) = ((int)puVar13 + -2) - iVar11;
          uVar5 = *puVar13 * -0x30e4432345000000 >> 0x34;
          uVar23 = *(uint *)((longlong)param_1 + uVar5 * 4);
          piVar26 = (int *)param_2;
          lVar27 = lVar25;
          if (uVar23 < uVar3) {
            piVar26 = piVar4;
            lVar27 = lVar14;
          }
          piVar15 = (int *)(lVar27 + (ulonglong)uVar23);
          *(uint *)((longlong)param_1 + uVar5 * 4) = uVar16;
          if (((uVar23 < uVar3 - uVar24) || (uVar23 + 0xffff < uVar16)) ||
             (*piVar15 != (int)*puVar13)) goto LAB_141466ff6;
          pcVar7 = param_3 + 1;
          iVar19 = uVar16 - uVar23;
          *param_3 = '\0';
          pcVar22 = param_3;
        } while( true );
      }
LAB_141467015:
      pcVar17 = param_2 + ((longlong)param_4 - (longlong)puVar8);
      if (pcVar17 < (char *)0xf) {
        *param_3 = (char)pcVar17 << 4;
      }
      else {
        *param_3 = -0x10;
        pcVar7 = pcVar17 + -0xf;
        param_3 = param_3 + 1;
        if ((char *)0xfe < pcVar7) {
          memset(param_3,(int)CONCAT71((int7)((ulonglong)pcVar7 / 0x1fe),0xff),
                 (ulonglong)pcVar7 / 0xff);
          param_3 = param_3 + (ulonglong)pcVar7 / 0xff;
          pcVar7 = (char *)((ulonglong)pcVar7 % 0xff);
        }
        *param_3 = (char)pcVar7;
      }
      memcpy(param_3 + 1,puVar8,(size_t)pcVar17);
      iVar11 = ((int)pcVar17 - local_res18) + (int)param_3 + 1;
      goto LAB_141467740;
    }
  }
  else {
LAB_14146709e:
    piVar4 = (int *)(param_1->internal_donotuse).dictionary;
    uVar3 = (param_1->internal_donotuse).currentOffset;
    lVar25 = (longlong)param_2 - (ulonglong)uVar3;
    lVar14 = (longlong)piVar4 + (uVar12 - uVar3);
    if ((uint)param_4 < 0x7e000001) {
      (param_1->internal_donotuse).tableType = 2;
      *puVar2 = uVar24 + param_4;
      (param_1->internal_donotuse).currentOffset = uVar3 + param_4;
      puVar10 = (ulonglong *)param_2;
      if (0xc < param_4) {
        puVar8 = (ulonglong *)(param_2 + 1);
        iVar11 = (int)lVar25;
        *(int *)((longlong)param_1 +
                ((ulonglong)(*(longlong *)param_2 * -0x30e4432345000000) >> 0x34) * 4) =
             (int)param_2 - iVar11;
        uVar5 = *puVar8;
LAB_141467154:
        iVar19 = 1;
        iVar21 = 0x40;
        do {
          puVar18 = puVar8;
          uVar6 = uVar5 * -0x30e4432345000000 >> 0x34;
          uVar24 = *(uint *)((longlong)param_1 + uVar6 * 4);
          lVar27 = (longlong)iVar19;
          iVar19 = iVar21 >> 6;
          uVar23 = (int)puVar18 - iVar11;
          puVar8 = (ulonglong *)((longlong)puVar18 + lVar27);
          iVar21 = iVar21 + 1;
          if (param_2 + (longlong)param_4 + -0xb < puVar8) goto LAB_1414676b8;
          piVar26 = (int *)param_2;
          lVar27 = lVar25;
          if (uVar24 < uVar3) {
            piVar26 = piVar4;
            lVar27 = lVar14;
          }
          piVar15 = (int *)(lVar27 + (ulonglong)uVar24);
          uVar5 = *puVar8;
          *(uint *)((longlong)param_1 + uVar6 * 4) = uVar23;
        } while ((uVar24 + 0xffff < uVar23) || (*piVar15 != (int)*puVar18));
        iVar19 = uVar23 - uVar24;
        if (piVar26 < piVar15 && puVar10 < puVar18) {
          do {
            piVar1 = (int *)((longlong)piVar15 - 1);
            puVar8 = (ulonglong *)((longlong)puVar18 - 1);
            if (*(char *)((longlong)puVar18 - 1) != *(char *)((longlong)piVar15 - 1)) break;
            piVar15 = piVar1;
            puVar18 = puVar8;
          } while (puVar10 < puVar8 && piVar26 < piVar1);
        }
        uVar24 = (int)puVar18 - (int)puVar10;
        pcVar17 = param_3 + 1;
        if (uVar24 < 0xf) {
          *param_3 = (char)uVar24 << 4;
        }
        else {
          uVar23 = uVar24 - 0xf;
          *param_3 = -0x10;
          if (0xfe < (int)uVar23) {
            uVar5 = (ulonglong)uVar23 / 0xff;
            memset(pcVar17,(int)CONCAT71((int7)(uVar5 >> 8),0xff),uVar5);
            pcVar17 = pcVar17 + uVar5;
            uVar23 = uVar23 + (int)uVar5 * -0xff;
          }
          *pcVar17 = (char)uVar23;
          pcVar17 = pcVar17 + 1;
        }
        pcVar7 = pcVar17;
        do {
          *(undefined8 *)pcVar7 = *(undefined8 *)(pcVar7 + ((longlong)puVar10 - (longlong)pcVar17));
          pcVar7 = pcVar7 + 8;
        } while (pcVar7 < pcVar17 + uVar24);
        pcVar17 = pcVar17 + uVar24;
        pcVar7 = param_3;
        do {
          *(short *)pcVar17 = (short)iVar19;
          puVar10 = (ulonglong *)(piVar15 + 1);
          param_3 = pcVar17 + 2;
          puVar8 = (ulonglong *)(param_2 + (longlong)param_4 + -5);
          if (piVar26 == piVar4) {
            puVar13 = (ulonglong *)((longlong)puVar18 + 4);
            puVar20 = (ulonglong *)
                      ((longlong)piVar4 + (uVar12 - (longlong)piVar15) + (longlong)puVar18);
            if (puVar8 < puVar20) {
              puVar20 = puVar8;
            }
            puVar9 = (ulonglong *)((longlong)puVar20 - 7);
            iVar19 = (int)puVar13;
            if (puVar13 < puVar9) {
              uVar5 = *puVar13 ^ *puVar10;
              if (uVar5 == 0) {
                puVar13 = (ulonglong *)((longlong)puVar18 + 0xc);
                puVar10 = (ulonglong *)(piVar15 + 3);
                if (puVar13 < puVar9) {
LAB_141467360:
                  uVar5 = *puVar13 ^ *puVar10;
                  if (uVar5 == 0) goto code_r0x00014146736c;
                  uVar6 = 0;
                  if (uVar5 != 0) {
                    for (; (uVar5 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
                    }
                  }
                  uVar24 = (((uint)(uVar6 >> 3) & 0x1fffffff) - iVar19) + (int)puVar13;
                  goto LAB_1414673c3;
                }
                goto LAB_141467379;
              }
              lVar27 = 0;
              if (uVar5 != 0) {
                for (; (uVar5 >> lVar27 & 1) == 0; lVar27 = lVar27 + 1) {
                }
              }
              uVar24 = (uint)lVar27 >> 3;
            }
            else {
LAB_141467379:
              if ((puVar13 < (ulonglong *)((longlong)puVar20 - 3U)) &&
                 ((int)*puVar10 == (int)*puVar13)) {
                puVar13 = (ulonglong *)((longlong)puVar13 + 4);
                puVar10 = (ulonglong *)((longlong)puVar10 + 4);
              }
              if ((puVar13 < (ulonglong *)((longlong)puVar20 - 1U)) &&
                 ((short)*puVar10 == (short)*puVar13)) {
                puVar13 = (ulonglong *)((longlong)puVar13 + 2);
                puVar10 = (ulonglong *)((longlong)puVar10 + 2);
              }
              if ((puVar13 < puVar20) && ((char)*puVar10 == (char)*puVar13)) {
                puVar13 = (ulonglong *)((longlong)puVar13 + 1);
              }
              uVar24 = (int)puVar13 - iVar19;
            }
LAB_1414673c3:
            puVar18 = (ulonglong *)((longlong)puVar18 + (ulonglong)uVar24 + 4);
            if (puVar18 == puVar20) {
              puVar10 = (ulonglong *)(param_2 + (longlong)param_4 + -0xc);
              puVar13 = puVar20;
              puVar9 = (ulonglong *)param_2;
              if (puVar20 < puVar10) {
                uVar5 = *(ulonglong *)param_2 ^ *puVar20;
                if (uVar5 != 0) {
                  uVar6 = 0;
                  if (uVar5 != 0) {
                    for (; (uVar5 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
                    }
                  }
                  uVar5 = uVar6 >> 3 & 0x1fffffff;
                  uVar24 = uVar24 + (int)uVar5;
                  goto LAB_14146756a;
                }
                puVar13 = puVar20 + 1;
                puVar9 = (ulonglong *)(param_2 + 8);
              }
              if (puVar13 < puVar10) {
LAB_141467410:
                uVar5 = *puVar13 ^ *puVar9;
                if (uVar5 == 0) goto code_r0x00014146741c;
                uVar6 = 0;
                if (uVar5 != 0) {
                  for (; (uVar5 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
                  }
                }
                uVar23 = (int)puVar13 + (((uint)(uVar6 >> 3) & 0x1fffffff) - (int)puVar20);
                uVar24 = uVar24 + uVar23;
                uVar5 = (ulonglong)uVar23;
                goto LAB_14146756a;
              }
LAB_141467429:
              if ((puVar13 < param_2 + (longlong)param_4 + -8) && ((int)*puVar9 == (int)*puVar13)) {
                puVar13 = (ulonglong *)((longlong)puVar13 + 4);
                puVar9 = (ulonglong *)((longlong)puVar9 + 4);
              }
              if ((puVar13 < param_2 + (longlong)param_4 + -6) &&
                 ((short)*puVar9 == (short)*puVar13)) {
                puVar13 = (ulonglong *)((longlong)puVar13 + 2);
                puVar9 = (ulonglong *)((longlong)puVar9 + 2);
              }
              if ((puVar13 < puVar8) && ((char)*puVar9 == (char)*puVar13)) {
                puVar13 = (ulonglong *)((longlong)puVar13 + 1);
              }
              uVar23 = (int)puVar13 - (int)puVar20;
              uVar24 = uVar24 + uVar23;
              uVar5 = (ulonglong)uVar23;
              goto LAB_14146756a;
            }
          }
          else {
            puVar20 = (ulonglong *)((longlong)puVar18 + 4);
            puVar13 = (ulonglong *)(param_2 + (longlong)param_4 + -0xc);
            iVar19 = (int)puVar20;
            if (puVar20 < puVar13) {
              uVar5 = *puVar20 ^ *puVar10;
              if (uVar5 == 0) {
                puVar20 = (ulonglong *)((longlong)puVar18 + 0xc);
                puVar10 = (ulonglong *)(piVar15 + 3);
                if (puVar20 < puVar13) {
LAB_141467500:
                  uVar5 = *puVar20 ^ *puVar10;
                  if (uVar5 == 0) goto code_r0x00014146750c;
                  uVar6 = 0;
                  if (uVar5 != 0) {
                    for (; (uVar5 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
                    }
                  }
                  uVar5 = (ulonglong)((int)puVar20 + (((uint)(uVar6 >> 3) & 0x1fffffff) - iVar19));
                  goto LAB_14146755b;
                }
                goto LAB_141467519;
              }
              uVar6 = 0;
              if (uVar5 != 0) {
                for (; (uVar5 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
                }
              }
              uVar5 = uVar6 >> 3 & 0x1fffffff;
            }
            else {
LAB_141467519:
              if ((puVar20 < param_2 + (longlong)param_4 + -8) && ((int)*puVar10 == (int)*puVar20))
              {
                puVar20 = (ulonglong *)((longlong)puVar20 + 4);
                puVar10 = (ulonglong *)((longlong)puVar10 + 4);
              }
              if ((puVar20 < param_2 + (longlong)param_4 + -6) &&
                 ((short)*puVar10 == (short)*puVar20)) {
                puVar20 = (ulonglong *)((longlong)puVar20 + 2);
                puVar10 = (ulonglong *)((longlong)puVar10 + 2);
              }
              if ((puVar20 < puVar8) && ((char)*puVar10 == (char)*puVar20)) {
                puVar20 = (ulonglong *)((longlong)puVar20 + 1);
              }
              uVar5 = (ulonglong)(uint)((int)puVar20 - iVar19);
            }
LAB_14146755b:
            uVar24 = (uint)uVar5;
            puVar18 = (ulonglong *)((longlong)puVar18 + 4);
LAB_14146756a:
            puVar18 = (ulonglong *)((longlong)puVar18 + uVar5);
          }
          if (uVar24 < 0xf) {
            *pcVar7 = *pcVar7 + (char)uVar24;
          }
          else {
            uVar24 = uVar24 - 0xf;
            *pcVar7 = *pcVar7 + '\x0f';
            param_3[0] = -1;
            param_3[1] = -1;
            param_3[2] = -1;
            param_3[3] = -1;
            if (0x3fb < uVar24) {
              uVar5 = (ulonglong)uVar24 / 0x3fc;
              do {
                param_3 = param_3 + 4;
                uVar24 = uVar24 - 0x3fc;
                param_3[0] = -1;
                param_3[1] = -1;
                param_3[2] = -1;
                param_3[3] = -1;
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
            }
            param_3[(ulonglong)uVar24 / 0xff] = (char)uVar24 + (char)((ulonglong)uVar24 / 0xff);
            param_3 = param_3 + (ulonglong)uVar24 / 0xff + 1;
          }
          puVar10 = puVar18;
          if (param_2 + (longlong)param_4 + -0xb <= puVar18) break;
          uVar23 = (int)puVar18 - iVar11;
          *(int *)((longlong)param_1 +
                  ((ulonglong)(*(longlong *)((longlong)puVar18 + -2) * -0x30e4432345000000) >> 0x34)
                  * 4) = ((int)puVar18 + -2) - iVar11;
          uVar5 = *puVar18 * -0x30e4432345000000 >> 0x34;
          uVar24 = *(uint *)((longlong)param_1 + uVar5 * 4);
          piVar26 = (int *)param_2;
          lVar27 = lVar25;
          if (uVar24 < uVar3) {
            piVar26 = piVar4;
            lVar27 = lVar14;
          }
          piVar15 = (int *)(lVar27 + (ulonglong)uVar24);
          *(uint *)((longlong)param_1 + uVar5 * 4) = uVar23;
          if ((uVar24 + 0xffff < uVar23) || (*piVar15 != (int)*puVar18)) goto LAB_141467698;
          pcVar17 = param_3 + 1;
          iVar19 = uVar23 - uVar24;
          *param_3 = '\0';
          pcVar7 = param_3;
        } while( true );
      }
LAB_1414676b8:
      pcVar17 = param_2 + ((longlong)param_4 - (longlong)puVar10);
      if (pcVar17 < (char *)0xf) {
        *param_3 = (char)pcVar17 << 4;
      }
      else {
        *param_3 = -0x10;
        pcVar7 = pcVar17 + -0xf;
        param_3 = param_3 + 1;
        if ((char *)0xfe < pcVar7) {
          memset(param_3,(int)CONCAT71((int7)((ulonglong)pcVar7 / 0x1fe),0xff),
                 (ulonglong)pcVar7 / 0xff);
          param_3 = param_3 + (ulonglong)pcVar7 / 0xff;
          pcVar7 = (char *)((ulonglong)pcVar7 % 0xff);
        }
        *param_3 = (char)pcVar7;
      }
      memcpy(param_3 + 1,puVar10,(size_t)pcVar17);
      iVar11 = (((int)param_3 + 1) - local_res18) + (int)pcVar17;
      goto LAB_141467740;
    }
  }
  iVar11 = 0;
LAB_141467740:
  (param_1->internal_donotuse).dictionary = (uchar *)param_2;
  (param_1->internal_donotuse).dictSize = param_4;
  return iVar11;
code_r0x00014146750c:
  puVar20 = puVar20 + 1;
  puVar10 = puVar10 + 1;
  if (puVar13 <= puVar20) goto LAB_141467519;
  goto LAB_141467500;
code_r0x00014146736c:
  puVar13 = puVar13 + 1;
  puVar10 = puVar10 + 1;
  if (puVar9 <= puVar13) goto LAB_141467379;
  goto LAB_141467360;
code_r0x00014146741c:
  puVar13 = puVar13 + 1;
  puVar9 = puVar9 + 1;
  if (puVar10 <= puVar13) goto LAB_141467429;
  goto LAB_141467410;
LAB_141467698:
  uVar5 = *(ulonglong *)((longlong)puVar18 + 1);
  puVar8 = (ulonglong *)((longlong)puVar18 + 1);
  goto LAB_141467154;
code_r0x000141466ec8:
  puVar8 = puVar8 + 1;
  puVar18 = puVar18 + 1;
  if (puVar20 <= puVar8) goto LAB_141466ed5;
  goto LAB_141466ec0;
code_r0x000141466ccc:
  puVar8 = puVar8 + 1;
  puVar18 = puVar18 + 1;
  if (puVar9 <= puVar8) goto LAB_141466cd9;
  goto LAB_141466cc0;
code_r0x000141466d7c:
  puVar8 = puVar8 + 1;
  puVar9 = puVar9 + 1;
  if (puVar18 <= puVar8) goto LAB_141466d89;
  goto LAB_141466d70;
LAB_141466ff6:
  uVar5 = *(ulonglong *)((longlong)puVar13 + 1);
  puVar18 = (ulonglong *)((longlong)puVar13 + 1);
  goto LAB_141466aca;
}

// LZ4_compress_limitedOutput @ 141467780

int __cdecl Trace::LZ4_compress_limitedOutput(char *param_1,char *param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = LZ4_compress_fast(param_1,param_2,param_3,param_4,1);
  return iVar1;
}

// LZ4_compress_limitedOutput_continue @ 1414677a0

int __cdecl
Trace::LZ4_compress_limitedOutput_continue
          (LZ4_stream_u *param_1,char *param_2,char *param_3,int param_4,int param_5)

{
  int iVar1;
  
  iVar1 = LZ4_compress_fast_continue(param_1,param_2,param_3,param_4,param_5,1);
  return iVar1;
}

// LZ4_compress_limitedOutput_withState @ 1414677d0

int __cdecl
Trace::LZ4_compress_limitedOutput_withState
          (void *param_1,char *param_2,char *param_3,int param_4,int param_5)

{
  int iVar1;
  
  iVar1 = LZ4_compress_fast_extState(param_1,param_2,param_3,param_4,param_5,1);
  return iVar1;
}

// LZ4_compress_withState @ 141467800

int __cdecl Trace::LZ4_compress_withState(void *param_1,char *param_2,char *param_3,int param_4)

{
  int iVar1;
  
  if ((uint)param_4 < 0x7e000001) {
    iVar1 = param_4 / 0xff + 0x10 + param_4;
  }
  else {
    iVar1 = 0;
  }
  iVar1 = LZ4_compress_fast_extState(param_1,param_2,param_3,param_4,iVar1,1);
  return iVar1;
}

// LZ4_create @ 141467850

void * __cdecl Trace::LZ4_create(char *param_1)

{
  void *_Dst;
  
  _Dst = malloc(0x4020);
  if (_Dst == (void *)0x0) {
    return (void *)0x0;
  }
  memset(_Dst,0,0x4020);
  return _Dst;
}

// LZ4_createStream @ 141467890

LZ4_stream_u * __cdecl Trace::LZ4_createStream(void)

{
  LZ4_stream_u *_Dst;
  
  _Dst = malloc(0x4020);
  if (_Dst == (LZ4_stream_u *)0x0) {
    return (LZ4_stream_u *)0x0;
  }
  memset(_Dst,0,0x4020);
  return _Dst;
}

// LZ4_createStreamDecode @ 1414678d0

LZ4_streamDecode_u * __cdecl Trace::LZ4_createStreamDecode(void)

{
  LZ4_streamDecode_u *pLVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001414678da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pLVar1 = calloc(1,0x20);
  return pLVar1;
}

// LZ4_decoderRingBufferSize @ 1414678f0

int __cdecl Trace::LZ4_decoderRingBufferSize(int param_1)

{
  int iVar1;
  
  if (0x7e000000 < (uint)param_1) {
    return 0;
  }
  iVar1 = 0x10;
  if (0xf < param_1) {
    iVar1 = param_1;
  }
  return iVar1 + 0x1000e;
}

// LZ4_decompress_fast @ 141467920

int __cdecl Trace::LZ4_decompress_fast(char *param_1,char *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  ushort *_Src;
  char *pcVar9;
  size_t _Size;
  ulonglong uVar10;
  char *pcVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  if (param_1 == (char *)0x0) {
    return -1;
  }
  pcVar9 = param_2 + param_3;
  _Src = (ushort *)param_1;
  if (param_3 == 0) {
    iVar4 = -1;
    if (*param_1 == '\0') {
      iVar4 = 1;
    }
    return iVar4;
  }
  do {
    while( true ) {
      bVar1 = (byte)*_Src;
      _Src = (ushort *)((longlong)_Src + 1);
      _Size = (size_t)(bVar1 >> 4);
      if (8 < _Size) break;
      if (pcVar9 + -0x1a < param_2) goto LAB_141467a26;
      uVar10 = (ulonglong)(bVar1 & 0xf);
      *(undefined8 *)param_2 = *(undefined8 *)_Src;
      pcVar5 = param_2 + _Size;
      uVar14 = (ulonglong)*(ushort *)((longlong)_Src + _Size);
      _Src = (ushort *)((longlong)_Src + _Size) + 1;
      pcVar7 = pcVar5 + -uVar14;
      if (uVar10 == 0xf) {
LAB_141467a6b:
        uVar13 = 0;
        do {
          uVar3 = *_Src;
          _Src = (ushort *)((longlong)_Src + 1);
          uVar13 = (ulonglong)((int)uVar13 + (uint)(byte)uVar3);
        } while ((byte)uVar3 == 0xff);
        uVar10 = uVar10 + uVar13;
        goto LAB_141467a87;
      }
      if (uVar14 < 8) {
        uVar10 = uVar10 + 4;
        param_2 = pcVar5 + uVar10;
        goto LAB_141467a95;
      }
      *(undefined8 *)pcVar5 = *(undefined8 *)pcVar7;
      *(undefined8 *)(pcVar5 + 8) = *(undefined8 *)(pcVar7 + 8);
      *(undefined2 *)(pcVar5 + 0x10) = *(undefined2 *)(pcVar7 + 0x10);
      param_2 = pcVar5 + uVar10 + 4;
    }
    if (_Size == 0xf) {
      uVar6 = 0;
      do {
        uVar3 = *_Src;
        _Src = (ushort *)((longlong)_Src + 1);
        uVar6 = uVar6 + (byte)uVar3;
      } while ((byte)uVar3 == 0xff);
      _Size = (ulonglong)uVar6 + 0xf;
    }
LAB_141467a26:
    pcVar5 = param_2 + _Size;
    if (pcVar9 + -8 < pcVar5) {
      if (pcVar5 == pcVar9) {
        memmove(param_2,_Src,_Size);
        return (int)_Src + ((int)_Size - (int)param_1);
      }
LAB_141467b93:
      return ((int)param_1 - (int)_Src) + -1;
    }
    lVar12 = (longlong)_Src - (longlong)param_2;
    do {
      *(undefined8 *)param_2 = *(undefined8 *)(param_2 + lVar12);
      param_2 = param_2 + 8;
    } while (param_2 < pcVar5);
    uVar14 = (ulonglong)*(ushort *)((longlong)_Src + _Size);
    _Src = (ushort *)((longlong)_Src + _Size) + 1;
    pcVar7 = pcVar5 + -uVar14;
    uVar10 = (ulonglong)(bVar1 & 0xf);
    if (uVar10 == 0xf) goto LAB_141467a6b;
LAB_141467a87:
    uVar10 = uVar10 + 4;
    param_2 = pcVar5 + uVar10;
    if (uVar14 < 8) {
LAB_141467a95:
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
      *pcVar5 = *pcVar7;
      pcVar5[1] = pcVar7[1];
      pcVar5[2] = pcVar7[2];
      pcVar5[3] = pcVar7[3];
      uVar6 = inc32table[uVar14];
      *(undefined4 *)(pcVar5 + 4) = *(undefined4 *)(pcVar7 + uVar6);
      pcVar8 = pcVar7 + uVar6 + -(longlong)dec64table[uVar14];
    }
    else {
      pcVar8 = pcVar7 + 8;
      *(undefined8 *)pcVar5 = *(undefined8 *)pcVar7;
    }
    pcVar7 = pcVar5 + 8;
    if (pcVar9 + -0xc < param_2) {
      pcVar5 = pcVar9 + -7;
      if (pcVar9 + -5 < param_2) goto LAB_141467b93;
      if (pcVar7 < pcVar5) {
        pcVar11 = pcVar7;
        do {
          *(undefined8 *)pcVar11 = *(undefined8 *)(pcVar11 + ((longlong)pcVar8 - (longlong)pcVar7));
          pcVar11 = pcVar11 + 8;
        } while (pcVar11 < pcVar5);
        pcVar8 = pcVar8 + ((longlong)pcVar5 - (longlong)pcVar7);
        pcVar7 = pcVar5;
      }
      for (; pcVar7 < param_2; pcVar7 = pcVar7 + 1) {
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        *pcVar7 = cVar2;
      }
    }
    else {
      *(undefined8 *)pcVar7 = *(undefined8 *)pcVar8;
      if (0x10 < uVar10) {
        pcVar7 = pcVar5 + 0x10;
        do {
          *(undefined8 *)pcVar7 =
               *(undefined8 *)(pcVar7 + (longlong)(pcVar8 + (8 - (longlong)(pcVar5 + 0x10))));
          pcVar7 = pcVar7 + 8;
        } while (pcVar7 < param_2);
      }
    }
  } while( true );
}

// LZ4_decompress_fast_continue @ 141467bd0

int __cdecl
Trace::LZ4_decompress_fast_continue
          (LZ4_streamDecode_u *param_1,char *param_2,char *param_3,int param_4)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  longlong lVar9;
  char *pcVar10;
  char *pcVar11;
  ulong64 uVar12;
  size_t _Size;
  ushort *_Src;
  uchar *puVar13;
  char *_Src_00;
  ulonglong uVar14;
  ulonglong uVar15;
  int local_res10;
  
  uVar15 = param_1->table[3];
  uVar12 = (ulong64)param_4;
  if (uVar15 == 0) {
    iVar5 = LZ4_decompress_fast(param_2,param_3,param_4);
  }
  else {
    if ((param_1->internal_donotuse).prefixEnd == (uchar *)param_3) {
      if ((uVar15 < 0xffff) && (param_1->table[1] != 0)) {
        _Src_00 = param_3 + -uVar15;
        if (param_2 == (char *)0x0) {
          iVar5 = -1;
        }
        else {
          pcVar1 = param_3 + uVar12;
          puVar13 = (uchar *)0x0;
          if ((param_1->internal_donotuse).externalDict != (uchar *)0x0) {
            puVar13 = (param_1->internal_donotuse).externalDict + param_1->table[1];
          }
          _Src = (ushort *)param_2;
          if (param_4 != 0) {
LAB_141467cb0:
            bVar2 = (byte)*_Src;
            _Src = (ushort *)((longlong)_Src + 1);
            _Size = (size_t)(bVar2 >> 4);
            local_res10 = (int)param_2;
            if (_Size < 9) {
              if (pcVar1 + -0x1a < param_3) goto LAB_141467d45;
              uVar14 = (ulonglong)(bVar2 & 0xf);
              *(undefined8 *)param_3 = *(undefined8 *)_Src;
              pcVar11 = param_3 + _Size;
              uVar15 = (ulonglong)*(ushort *)((longlong)_Src + _Size);
              _Src = (ushort *)((longlong)_Src + _Size) + 1;
              pcVar6 = pcVar11 + -uVar15;
              if (uVar14 != 0xf) {
                if ((uVar15 < 8) || (pcVar6 < _Src_00)) goto LAB_141467d85;
                *(undefined8 *)pcVar11 = *(undefined8 *)pcVar6;
                *(undefined8 *)(pcVar11 + 8) = *(undefined8 *)(pcVar6 + 8);
                *(undefined2 *)(pcVar11 + 0x10) = *(undefined2 *)(pcVar6 + 0x10);
                param_3 = pcVar11 + uVar14 + 4;
                goto LAB_141467cb0;
              }
LAB_141467d8b:
              uVar8 = 0;
              do {
                uVar4 = *_Src;
                _Src = (ushort *)((longlong)_Src + 1);
                uVar8 = uVar8 + (byte)uVar4;
              } while ((byte)uVar4 == 0xff);
              uVar14 = (ulonglong)uVar8 + 0xf;
            }
            else {
              if (_Size == 0xf) {
                uVar8 = 0;
                do {
                  uVar4 = *_Src;
                  _Src = (ushort *)((longlong)_Src + 1);
                  uVar8 = uVar8 + (byte)uVar4;
                } while ((byte)uVar4 == 0xff);
                _Size = (ulonglong)uVar8 + 0xf;
              }
LAB_141467d45:
              pcVar11 = param_3 + _Size;
              if (pcVar1 + -8 < pcVar11) {
                if (pcVar11 == pcVar1) {
                  memmove(param_3,_Src,_Size);
                  iVar5 = ((int)_Size - local_res10) + (int)_Src;
                  goto LAB_141467fbb;
                }
LAB_141467f7b:
                iVar5 = (local_res10 - (int)_Src) + -1;
                goto LAB_141467fbb;
              }
              lVar9 = (longlong)_Src - (longlong)param_3;
              do {
                *(undefined8 *)param_3 = *(undefined8 *)(param_3 + lVar9);
                param_3 = param_3 + 8;
              } while (param_3 < pcVar11);
              uVar15 = (ulonglong)*(ushort *)((longlong)_Src + _Size);
              _Src = (ushort *)((longlong)_Src + _Size) + 1;
              pcVar6 = pcVar11 + -uVar15;
              uVar14 = (ulonglong)(bVar2 & 0xf);
LAB_141467d85:
              if (uVar14 == 0xf) goto LAB_141467d8b;
            }
            uVar14 = uVar14 + 4;
            param_3 = pcVar11 + uVar14;
            if (pcVar6 < _Src_00) {
              if (pcVar1 + -5 < param_3) goto LAB_141467f7b;
              uVar15 = (longlong)_Src_00 - (longlong)pcVar6;
              if (uVar15 < uVar14) {
                uVar14 = uVar14 - uVar15;
                memcpy(pcVar11,puVar13 + -uVar15,uVar15);
                param_3 = pcVar11 + uVar15;
                pcVar11 = param_3 + uVar14;
                pcVar6 = _Src_00;
                if ((ulonglong)((longlong)param_3 - (longlong)_Src_00) < uVar14) {
                  for (; param_3 < pcVar11; param_3 = param_3 + 1) {
                    *param_3 = *pcVar6;
                    pcVar6 = pcVar6 + 1;
                  }
                }
                else {
                  memcpy(param_3,_Src_00,uVar14);
                  param_3 = pcVar11;
                }
              }
              else {
                memmove(pcVar11,pcVar6 + ((longlong)puVar13 - (longlong)_Src_00),uVar14);
              }
            }
            else {
              if (uVar15 < 8) {
                pcVar11[0] = '\0';
                pcVar11[1] = '\0';
                pcVar11[2] = '\0';
                pcVar11[3] = '\0';
                *pcVar11 = *pcVar6;
                pcVar11[1] = pcVar6[1];
                pcVar11[2] = pcVar6[2];
                pcVar11[3] = pcVar6[3];
                uVar8 = inc32table[uVar15];
                *(undefined4 *)(pcVar11 + 4) = *(undefined4 *)(pcVar6 + uVar8);
                pcVar7 = pcVar6 + uVar8 + -(longlong)dec64table[uVar15];
              }
              else {
                pcVar7 = pcVar6 + 8;
                *(undefined8 *)pcVar11 = *(undefined8 *)pcVar6;
              }
              pcVar6 = pcVar11 + 8;
              if (pcVar1 + -0xc < param_3) {
                pcVar11 = pcVar1 + -7;
                if (pcVar1 + -5 < param_3) goto LAB_141467f7b;
                if (pcVar6 < pcVar11) {
                  pcVar10 = pcVar6;
                  do {
                    *(undefined8 *)pcVar10 =
                         *(undefined8 *)(pcVar10 + ((longlong)pcVar7 - (longlong)pcVar6));
                    pcVar10 = pcVar10 + 8;
                  } while (pcVar10 < pcVar11);
                  pcVar7 = pcVar7 + ((longlong)pcVar11 - (longlong)pcVar6);
                  pcVar6 = pcVar11;
                }
                for (; pcVar6 < param_3; pcVar6 = pcVar6 + 1) {
                  cVar3 = *pcVar7;
                  pcVar7 = pcVar7 + 1;
                  *pcVar6 = cVar3;
                }
              }
              else {
                *(undefined8 *)pcVar6 = *(undefined8 *)pcVar7;
                if (0x10 < uVar14) {
                  pcVar6 = pcVar11 + 0x10;
                  do {
                    *(undefined8 *)pcVar6 =
                         *(undefined8 *)
                          (pcVar6 + (longlong)(pcVar7 + (8 - (longlong)(pcVar11 + 0x10))));
                    pcVar6 = pcVar6 + 8;
                  } while (pcVar6 < param_3);
                }
              }
            }
            goto LAB_141467cb0;
          }
          iVar5 = -1;
          if (*param_2 == '\0') {
            iVar5 = 1;
          }
        }
      }
      else {
        iVar5 = LZ4_decompress_fast(param_2,param_3,param_4);
      }
LAB_141467fbb:
      if (iVar5 < 1) {
        return iVar5;
      }
      param_1->table[3] = param_1->table[3] + uVar12;
      (param_1->internal_donotuse).prefixEnd = (param_1->internal_donotuse).prefixEnd + uVar12;
      return iVar5;
    }
    puVar13 = (param_1->internal_donotuse).prefixEnd + -uVar15;
    param_1->table[1] = uVar15;
    (param_1->internal_donotuse).externalDict = puVar13;
    iVar5 = LZ4_decompress_fast_extDict(param_2,param_3,param_4,puVar13,uVar15);
  }
  if (0 < iVar5) {
    param_1->table[3] = uVar12;
    (param_1->internal_donotuse).prefixEnd = (uchar *)(param_3 + uVar12);
  }
  return iVar5;
}

// LZ4_decompress_fast_extDict @ 141468020

int __cdecl
Trace::LZ4_decompress_fast_extDict
          (char *param_1,char *param_2,int param_3,void *param_4,ulong64 param_5)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  longlong lVar8;
  char *pcVar9;
  char *pcVar10;
  char *_Dst;
  ulonglong uVar11;
  ushort *_Src;
  longlong lVar12;
  char *pcVar13;
  size_t _Size;
  ulonglong uVar14;
  
  if (param_1 == (char *)0x0) {
    return -1;
  }
  pcVar13 = param_2 + param_3;
  lVar12 = 0;
  if (param_4 != (void *)0x0) {
    lVar12 = param_5 + (longlong)param_4;
  }
  _Dst = param_2;
  _Src = (ushort *)param_1;
  if (param_3 == 0) {
    iVar4 = -1;
    if (*param_1 == '\0') {
      iVar4 = 1;
    }
    return iVar4;
  }
  do {
    while( true ) {
      bVar1 = (byte)*_Src;
      _Src = (ushort *)((longlong)_Src + 1);
      _Size = (size_t)(bVar1 >> 4);
      if (8 < _Size) break;
      if (pcVar13 + -0x1a < _Dst) goto LAB_141468146;
      uVar11 = (ulonglong)(bVar1 & 0xf);
      *(undefined8 *)_Dst = *(undefined8 *)_Src;
      pcVar10 = _Dst + _Size;
      uVar14 = (ulonglong)*(ushort *)((longlong)_Src + _Size);
      _Src = (ushort *)((longlong)_Src + _Size) + 1;
      pcVar5 = pcVar10 + -uVar14;
      if (uVar11 == 0xf) goto LAB_14146818a;
      if ((uVar14 < 8) || (pcVar5 < param_2)) goto LAB_141468184;
      *(undefined8 *)pcVar10 = *(undefined8 *)pcVar5;
      *(undefined8 *)(pcVar10 + 8) = *(undefined8 *)(pcVar5 + 8);
      *(undefined2 *)(pcVar10 + 0x10) = *(undefined2 *)(pcVar5 + 0x10);
      _Dst = pcVar10 + uVar11 + 4;
    }
    if (_Size == 0xf) {
      uVar7 = 0;
      do {
        uVar3 = *_Src;
        _Src = (ushort *)((longlong)_Src + 1);
        uVar7 = uVar7 + (byte)uVar3;
      } while ((byte)uVar3 == 0xff);
      _Size = (ulonglong)uVar7 + 0xf;
    }
LAB_141468146:
    pcVar10 = _Dst + _Size;
    if (pcVar13 + -8 < pcVar10) {
      if (pcVar10 == pcVar13) {
        memmove(_Dst,_Src,_Size);
        return (int)_Src + ((int)_Size - (int)param_1);
      }
LAB_141468389:
      return ((int)param_1 - (int)_Src) + -1;
    }
    lVar8 = (longlong)_Src - (longlong)_Dst;
    do {
      *(undefined8 *)_Dst = *(undefined8 *)(_Dst + lVar8);
      _Dst = _Dst + 8;
    } while (_Dst < pcVar10);
    uVar14 = (ulonglong)*(ushort *)((longlong)_Src + _Size);
    _Src = (ushort *)((longlong)_Src + _Size) + 1;
    pcVar5 = pcVar10 + -uVar14;
    uVar11 = (ulonglong)(bVar1 & 0xf);
LAB_141468184:
    if (uVar11 == 0xf) {
LAB_14146818a:
      uVar7 = 0;
      do {
        uVar3 = *_Src;
        _Src = (ushort *)((longlong)_Src + 1);
        uVar7 = uVar7 + (byte)uVar3;
      } while ((byte)uVar3 == 0xff);
      uVar11 = (ulonglong)uVar7 + 0xf;
    }
    uVar11 = uVar11 + 4;
    _Dst = pcVar10 + uVar11;
    if (pcVar5 < param_2) {
      if (pcVar13 + -5 < _Dst) goto LAB_141468389;
      uVar14 = (longlong)param_2 - (longlong)pcVar5;
      if (uVar14 < uVar11) {
        uVar11 = uVar11 - uVar14;
        memcpy(pcVar10,(void *)(lVar12 - uVar14),uVar14);
        _Dst = pcVar10 + uVar14;
        pcVar10 = _Dst + uVar11;
        pcVar5 = param_2;
        if ((ulonglong)((longlong)_Dst - (longlong)param_2) < uVar11) {
          for (; _Dst < pcVar10; _Dst = _Dst + 1) {
            *_Dst = *pcVar5;
            pcVar5 = pcVar5 + 1;
          }
        }
        else {
          memcpy(_Dst,param_2,uVar11);
          _Dst = pcVar10;
        }
      }
      else {
        memmove(pcVar10,pcVar5 + (lVar12 - (longlong)param_2),uVar11);
      }
    }
    else {
      if (uVar14 < 8) {
        pcVar10[0] = '\0';
        pcVar10[1] = '\0';
        pcVar10[2] = '\0';
        pcVar10[3] = '\0';
        *pcVar10 = *pcVar5;
        pcVar10[1] = pcVar5[1];
        pcVar10[2] = pcVar5[2];
        pcVar10[3] = pcVar5[3];
        uVar7 = inc32table[uVar14];
        *(undefined4 *)(pcVar10 + 4) = *(undefined4 *)(pcVar5 + uVar7);
        pcVar6 = pcVar5 + uVar7 + -(longlong)dec64table[uVar14];
      }
      else {
        pcVar6 = pcVar5 + 8;
        *(undefined8 *)pcVar10 = *(undefined8 *)pcVar5;
      }
      pcVar5 = pcVar10 + 8;
      if (pcVar13 + -0xc < _Dst) {
        pcVar10 = pcVar13 + -7;
        if (pcVar13 + -5 < _Dst) goto LAB_141468389;
        if (pcVar5 < pcVar10) {
          pcVar9 = pcVar5;
          do {
            *(undefined8 *)pcVar9 = *(undefined8 *)(pcVar9 + ((longlong)pcVar6 - (longlong)pcVar5));
            pcVar9 = pcVar9 + 8;
          } while (pcVar9 < pcVar10);
          pcVar6 = pcVar6 + ((longlong)pcVar10 - (longlong)pcVar5);
          pcVar5 = pcVar10;
        }
        for (; pcVar5 < _Dst; pcVar5 = pcVar5 + 1) {
          cVar2 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          *pcVar5 = cVar2;
        }
      }
      else {
        *(undefined8 *)pcVar5 = *(undefined8 *)pcVar6;
        if (0x10 < uVar11) {
          pcVar5 = pcVar10 + 0x10;
          do {
            *(undefined8 *)pcVar5 =
                 *(undefined8 *)(pcVar5 + (longlong)(pcVar6 + (8 - (longlong)(pcVar10 + 0x10))));
            pcVar5 = pcVar5 + 8;
          } while (pcVar5 < _Dst);
        }
      }
    }
  } while( true );
}

// LZ4_decompress_fast_usingDict @ 1414683c0

int __cdecl
Trace::LZ4_decompress_fast_usingDict
          (char *param_1,char *param_2,int param_3,char *param_4,int param_5)

{
  int iVar1;
  
  if ((param_5 != 0) && (param_4 + param_5 != param_2)) {
    iVar1 = LZ4_decompress_fast_extDict(param_1,param_2,param_3,param_4,(longlong)param_5);
    return iVar1;
  }
  iVar1 = LZ4_decompress_fast(param_1,param_2,param_3);
  return iVar1;
}

// LZ4_decompress_fast_withPrefix64k @ 1414683f0

int __cdecl Trace::LZ4_decompress_fast_withPrefix64k(char *param_1,char *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  ushort *_Src;
  char *pcVar9;
  size_t _Size;
  ulonglong uVar10;
  char *pcVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  if (param_1 == (char *)0x0) {
    return -1;
  }
  pcVar9 = param_2 + param_3;
  _Src = (ushort *)param_1;
  if (param_3 == 0) {
    iVar4 = -1;
    if (*param_1 == '\0') {
      iVar4 = 1;
    }
    return iVar4;
  }
  do {
    while( true ) {
      bVar1 = (byte)*_Src;
      _Src = (ushort *)((longlong)_Src + 1);
      _Size = (size_t)(bVar1 >> 4);
      if (8 < _Size) break;
      if (pcVar9 + -0x1a < param_2) goto LAB_141467a26;
      uVar10 = (ulonglong)(bVar1 & 0xf);
      *(undefined8 *)param_2 = *(undefined8 *)_Src;
      pcVar5 = param_2 + _Size;
      uVar14 = (ulonglong)*(ushort *)((longlong)_Src + _Size);
      _Src = (ushort *)((longlong)_Src + _Size) + 1;
      pcVar7 = pcVar5 + -uVar14;
      if (uVar10 == 0xf) {
LAB_141467a6b:
        uVar13 = 0;
        do {
          uVar3 = *_Src;
          _Src = (ushort *)((longlong)_Src + 1);
          uVar13 = (ulonglong)((int)uVar13 + (uint)(byte)uVar3);
        } while ((byte)uVar3 == 0xff);
        uVar10 = uVar10 + uVar13;
        goto LAB_141467a87;
      }
      if (uVar14 < 8) {
        uVar10 = uVar10 + 4;
        param_2 = pcVar5 + uVar10;
        goto LAB_141467a95;
      }
      *(undefined8 *)pcVar5 = *(undefined8 *)pcVar7;
      *(undefined8 *)(pcVar5 + 8) = *(undefined8 *)(pcVar7 + 8);
      *(undefined2 *)(pcVar5 + 0x10) = *(undefined2 *)(pcVar7 + 0x10);
      param_2 = pcVar5 + uVar10 + 4;
    }
    if (_Size == 0xf) {
      uVar6 = 0;
      do {
        uVar3 = *_Src;
        _Src = (ushort *)((longlong)_Src + 1);
        uVar6 = uVar6 + (byte)uVar3;
      } while ((byte)uVar3 == 0xff);
      _Size = (ulonglong)uVar6 + 0xf;
    }
LAB_141467a26:
    pcVar5 = param_2 + _Size;
    if (pcVar9 + -8 < pcVar5) {
      if (pcVar5 == pcVar9) {
        memmove(param_2,_Src,_Size);
        return (int)_Src + ((int)_Size - (int)param_1);
      }
LAB_141467b93:
      return ((int)param_1 - (int)_Src) + -1;
    }
    lVar12 = (longlong)_Src - (longlong)param_2;
    do {
      *(undefined8 *)param_2 = *(undefined8 *)(param_2 + lVar12);
      param_2 = param_2 + 8;
    } while (param_2 < pcVar5);
    uVar14 = (ulonglong)*(ushort *)((longlong)_Src + _Size);
    _Src = (ushort *)((longlong)_Src + _Size) + 1;
    pcVar7 = pcVar5 + -uVar14;
    uVar10 = (ulonglong)(bVar1 & 0xf);
    if (uVar10 == 0xf) goto LAB_141467a6b;
LAB_141467a87:
    uVar10 = uVar10 + 4;
    param_2 = pcVar5 + uVar10;
    if (uVar14 < 8) {
LAB_141467a95:
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
      *pcVar5 = *pcVar7;
      pcVar5[1] = pcVar7[1];
      pcVar5[2] = pcVar7[2];
      pcVar5[3] = pcVar7[3];
      uVar6 = inc32table[uVar14];
      *(undefined4 *)(pcVar5 + 4) = *(undefined4 *)(pcVar7 + uVar6);
      pcVar8 = pcVar7 + uVar6 + -(longlong)dec64table[uVar14];
    }
    else {
      pcVar8 = pcVar7 + 8;
      *(undefined8 *)pcVar5 = *(undefined8 *)pcVar7;
    }
    pcVar7 = pcVar5 + 8;
    if (pcVar9 + -0xc < param_2) {
      pcVar5 = pcVar9 + -7;
      if (pcVar9 + -5 < param_2) goto LAB_141467b93;
      if (pcVar7 < pcVar5) {
        pcVar11 = pcVar7;
        do {
          *(undefined8 *)pcVar11 = *(undefined8 *)(pcVar11 + ((longlong)pcVar8 - (longlong)pcVar7));
          pcVar11 = pcVar11 + 8;
        } while (pcVar11 < pcVar5);
        pcVar8 = pcVar8 + ((longlong)pcVar5 - (longlong)pcVar7);
        pcVar7 = pcVar5;
      }
      for (; pcVar7 < param_2; pcVar7 = pcVar7 + 1) {
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        *pcVar7 = cVar2;
      }
    }
    else {
      *(undefined8 *)pcVar7 = *(undefined8 *)pcVar8;
      if (0x10 < uVar10) {
        pcVar7 = pcVar5 + 0x10;
        do {
          *(undefined8 *)pcVar7 =
               *(undefined8 *)(pcVar7 + (longlong)(pcVar8 + (8 - (longlong)(pcVar5 + 0x10))));
          pcVar7 = pcVar7 + 8;
        } while (pcVar7 < param_2);
      }
    }
  } while( true );
}

// LZ4_decompress_safe @ 141468400

int __cdecl Trace::LZ4_decompress_safe(char *param_1,char *param_2,int param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  ushort uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  ushort *puVar8;
  ushort *_Src;
  longlong lVar9;
  char *pcVar10;
  char *_Dst;
  char *pcVar11;
  size_t _Size;
  ulonglong uVar12;
  ulonglong uVar13;
  char *pcVar14;
  ulonglong uVar15;
  byte *pbVar16;
  
  if (param_1 == (char *)0x0) {
    return -1;
  }
  pbVar16 = (byte *)(param_1 + param_3);
  pcVar11 = param_2 + param_4;
  if (param_4 == 0) {
    if ((param_3 == 1) && (*param_1 == '\0')) {
      return 0;
    }
  }
  else if (param_3 != 0) {
    puVar8 = (ushort *)param_1;
    _Dst = param_2;
    do {
      while( true ) {
        bVar1 = (byte)*puVar8;
        _Src = (ushort *)((longlong)puVar8 + 1);
        _Size = (size_t)(bVar1 >> 4);
        if (_Size == 0xf) break;
        if (pbVar16 + -0x10 <= _Src || pcVar11 + -0x20 < _Dst) goto LAB_141468561;
        uVar3 = *(undefined8 *)((longlong)puVar8 + 9);
        uVar13 = (ulonglong)(bVar1 & 0xf);
        *(undefined8 *)_Dst = *(undefined8 *)_Src;
        *(undefined8 *)(_Dst + 8) = uVar3;
        pcVar10 = _Dst + _Size;
        uVar15 = (ulonglong)*(ushort *)((longlong)_Src + _Size);
        pcVar6 = pcVar10 + -uVar15;
        _Src = (ushort *)((longlong)_Src + _Size) + 1;
        if (uVar13 == 0xf) {
LAB_1414685b8:
          uVar12 = 0;
          do {
            uVar4 = *_Src;
            _Src = (ushort *)((longlong)_Src + 1);
            uVar12 = (ulonglong)((int)uVar12 + (uint)(byte)uVar4);
            if (pbVar16 + -4 <= _Src) goto LAB_14146870f;
          } while ((byte)uVar4 == 0xff);
          uVar13 = uVar12 + uVar13;
          if (pcVar10 <= pcVar10 + uVar13) goto LAB_1414685ef;
          goto LAB_14146870f;
        }
        if ((uVar15 < 8) || (pcVar6 < param_2)) goto LAB_1414685ef;
        *(undefined8 *)pcVar10 = *(undefined8 *)pcVar6;
        *(undefined8 *)(pcVar10 + 8) = *(undefined8 *)(pcVar6 + 8);
        *(undefined2 *)(pcVar10 + 0x10) = *(undefined2 *)(pcVar6 + 0x10);
        puVar8 = _Src;
        _Dst = pcVar10 + uVar13 + 4;
      }
      uVar13 = 0;
      if (pbVar16 + -0xf <= _Src) goto LAB_14146870f;
      do {
        uVar4 = *_Src;
        _Src = (ushort *)((longlong)_Src + 1);
        uVar5 = (int)uVar13 + (uint)(byte)uVar4;
        if (pbVar16 + -0xf <= _Src) break;
        uVar13 = (ulonglong)uVar5;
      } while ((byte)uVar4 == 0xff);
      _Size = (ulonglong)uVar5 + 0xf;
      if ((_Dst + _Size < _Dst) || ((ushort *)(_Size + (longlong)_Src) < _Src)) goto LAB_14146870f;
LAB_141468561:
      pcVar10 = _Dst + _Size;
      if ((pcVar11 + -0xc < pcVar10) ||
         (puVar8 = (ushort *)(_Size + (longlong)_Src), pbVar16 + -8 < puVar8)) {
        if (((byte *)(_Size + (longlong)_Src) == pbVar16) && (pcVar10 <= pcVar11)) {
          memmove(_Dst,_Src,_Size);
          return (int)_Size + ((int)_Dst - (int)param_2);
        }
LAB_14146870f:
        return ((int)param_1 - (int)_Src) + -1;
      }
      lVar9 = (longlong)_Src - (longlong)_Dst;
      do {
        *(undefined8 *)_Dst = *(undefined8 *)(_Dst + lVar9);
        _Dst = _Dst + 8;
      } while (_Dst < pcVar10);
      uVar15 = (ulonglong)*puVar8;
      _Src = puVar8 + 1;
      pcVar6 = pcVar10 + -uVar15;
      uVar13 = (ulonglong)(bVar1 & 0xf);
      if (uVar13 == 0xf) goto LAB_1414685b8;
LAB_1414685ef:
      if (pcVar6 < param_2) goto LAB_14146870f;
      _Dst = pcVar10 + uVar13 + 4;
      if (uVar15 < 8) {
        pcVar10[0] = '\0';
        pcVar10[1] = '\0';
        pcVar10[2] = '\0';
        pcVar10[3] = '\0';
        *pcVar10 = *pcVar6;
        pcVar10[1] = pcVar6[1];
        pcVar10[2] = pcVar6[2];
        pcVar10[3] = pcVar6[3];
        uVar5 = inc32table[uVar15];
        *(undefined4 *)(pcVar10 + 4) = *(undefined4 *)(pcVar6 + uVar5);
        pcVar7 = pcVar6 + uVar5 + -(longlong)dec64table[uVar15];
      }
      else {
        pcVar7 = pcVar6 + 8;
        *(undefined8 *)pcVar10 = *(undefined8 *)pcVar6;
      }
      pcVar6 = pcVar10 + 8;
      puVar8 = _Src;
      if (pcVar11 + -0xc < _Dst) {
        pcVar10 = pcVar11 + -7;
        if (pcVar11 + -5 < _Dst) goto LAB_14146870f;
        if (pcVar6 < pcVar10) {
          pcVar14 = pcVar6;
          do {
            *(undefined8 *)pcVar14 =
                 *(undefined8 *)(pcVar14 + ((longlong)pcVar7 - (longlong)pcVar6));
            pcVar14 = pcVar14 + 8;
          } while (pcVar14 < pcVar10);
          pcVar7 = pcVar7 + ((longlong)pcVar10 - (longlong)pcVar6);
          pcVar6 = pcVar10;
        }
        for (; pcVar6 < _Dst; pcVar6 = pcVar6 + 1) {
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          *pcVar6 = cVar2;
        }
      }
      else {
        *(undefined8 *)pcVar6 = *(undefined8 *)pcVar7;
        if (0x10 < uVar13 + 4) {
          pcVar6 = pcVar10 + 0x10;
          do {
            *(undefined8 *)pcVar6 =
                 *(undefined8 *)(pcVar6 + (longlong)(pcVar7 + (8 - (longlong)(pcVar10 + 0x10))));
            pcVar6 = pcVar6 + 8;
          } while (pcVar6 < _Dst);
        }
      }
    } while( true );
  }
  return -1;
}

// LZ4_decompress_safe_continue @ 141468750

int __cdecl
Trace::LZ4_decompress_safe_continue
          (LZ4_streamDecode_u *param_1,char *param_2,char *param_3,int param_4,int param_5)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  char cVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  char *pcVar11;
  uchar *puVar12;
  char *pcVar13;
  char *_Dst;
  ulonglong uVar14;
  ulonglong uVar15;
  ushort *puVar16;
  ushort *_Src;
  longlong lVar17;
  char *pcVar18;
  char *pcVar19;
  char *_Src_00;
  size_t _Size;
  uchar *puVar20;
  int local_res18;
  uchar *puVar10;
  
  uVar15 = param_1->table[3];
  if (uVar15 == 0) {
    iVar8 = LZ4_decompress_safe(param_2,param_3,param_4,param_5);
  }
  else {
    if ((param_1->internal_donotuse).prefixEnd == (uchar *)param_3) {
      if (uVar15 < 0xffff) {
        uVar5 = param_1->table[1];
        if (uVar5 == 0) {
          iVar8 = LZ4_decompress_safe_withSmallPrefix(param_2,param_3,param_4,param_5,uVar15);
        }
        else {
          _Src_00 = param_3 + -uVar15;
          if (param_2 == (char *)0x0) {
            iVar8 = -1;
          }
          else {
            puVar20 = (uchar *)0x0;
            iVar8 = 0;
            pbVar1 = (byte *)(param_2 + param_4);
            puVar12 = puVar20;
            if ((param_1->internal_donotuse).externalDict != (uchar *)0x0) {
              puVar12 = (param_1->internal_donotuse).externalDict + uVar5;
            }
            pcVar2 = param_3 + param_5;
            if (param_5 == 0) {
              if ((param_4 == 1) && (*param_2 == '\0')) goto LAB_141468c6f;
            }
            else {
              _Dst = param_3;
              puVar16 = (ushort *)param_2;
              if (param_4 != 0) {
LAB_1414688b0:
                while( true ) {
                  bVar3 = (byte)*puVar16;
                  _Src = (ushort *)((longlong)puVar16 + 1);
                  _Size = (size_t)(bVar3 >> 4);
                  if (_Size == 0xf) break;
                  if (pbVar1 + -0x10 <= _Src || pcVar2 + -0x20 < _Dst) goto LAB_141468982;
                  uVar6 = *(undefined8 *)((longlong)puVar16 + 9);
                  uVar15 = (ulonglong)(bVar3 & 0xf);
                  *(undefined8 *)_Dst = *(undefined8 *)_Src;
                  *(undefined8 *)(_Dst + 8) = uVar6;
                  pcVar13 = _Dst + _Size;
                  uVar14 = (ulonglong)*(ushort *)((longlong)_Src + _Size);
                  pcVar18 = pcVar13 + -uVar14;
                  _Src = (ushort *)((longlong)_Src + _Size) + 1;
                  if (uVar15 == 0xf) goto LAB_1414689d7;
                  if ((uVar14 < 8) || (pcVar18 < _Src_00)) goto LAB_141468a0f;
                  *(undefined8 *)pcVar13 = *(undefined8 *)pcVar18;
                  *(undefined8 *)(pcVar13 + 8) = *(undefined8 *)(pcVar18 + 8);
                  *(undefined2 *)(pcVar13 + 0x10) = *(undefined2 *)(pcVar18 + 0x10);
                  _Dst = pcVar13 + uVar15 + 4;
                  puVar16 = _Src;
                }
                puVar10 = puVar20;
                if (pbVar1 + -0xf <= _Src) goto LAB_141468c3d;
                do {
                  uVar7 = *_Src;
                  _Src = (ushort *)((longlong)_Src + 1);
                  uVar9 = (int)puVar10 + (uint)(byte)uVar7;
                  if (pbVar1 + -0xf <= _Src) break;
                  puVar10 = (uchar *)(ulonglong)uVar9;
                } while ((byte)uVar7 == 0xff);
                _Size = (ulonglong)uVar9 + 0xf;
                if ((_Dst + _Size < _Dst) || ((ushort *)(_Size + (longlong)_Src) < _Src))
                goto LAB_141468c3d;
LAB_141468982:
                pcVar13 = _Dst + _Size;
                if ((pcVar13 <= pcVar2 + -0xc) &&
                   (puVar16 = (ushort *)(_Size + (longlong)_Src), puVar16 <= pbVar1 + -8)) {
                  lVar17 = (longlong)_Src - (longlong)_Dst;
                  do {
                    *(undefined8 *)_Dst = *(undefined8 *)(_Dst + lVar17);
                    _Dst = _Dst + 8;
                  } while (_Dst < pcVar13);
                  uVar14 = (ulonglong)*puVar16;
                  _Src = puVar16 + 1;
                  pcVar18 = pcVar13 + -uVar14;
                  uVar15 = (ulonglong)(bVar3 & 0xf);
                  if (uVar15 == 0xf) {
LAB_1414689d7:
                    puVar10 = puVar20;
                    do {
                      uVar7 = *_Src;
                      _Src = (ushort *)((longlong)_Src + 1);
                      uVar9 = (int)puVar10 + (uint)(byte)uVar7;
                      puVar10 = (uchar *)(ulonglong)uVar9;
                      if (pbVar1 + -4 <= _Src) goto LAB_141468c3d;
                    } while ((byte)uVar7 == 0xff);
                    uVar15 = uVar9 + uVar15;
                    if (pcVar13 + uVar15 < pcVar13) goto LAB_141468c3d;
                  }
LAB_141468a0f:
                  uVar15 = uVar15 + 4;
                  if ((uVar5 < 0x10000) && (pcVar18 + uVar5 < _Src_00)) goto LAB_141468c3d;
                  puVar16 = _Src;
                  if (_Src_00 <= pcVar18) {
                    _Dst = pcVar13 + uVar15;
                    if (uVar14 < 8) {
                      pcVar13[0] = '\0';
                      pcVar13[1] = '\0';
                      pcVar13[2] = '\0';
                      pcVar13[3] = '\0';
                      *pcVar13 = *pcVar18;
                      pcVar13[1] = pcVar18[1];
                      pcVar13[2] = pcVar18[2];
                      pcVar13[3] = pcVar18[3];
                      uVar9 = inc32table[uVar14];
                      *(undefined4 *)(pcVar13 + 4) = *(undefined4 *)(pcVar18 + uVar9);
                      pcVar19 = pcVar18 + uVar9 + -(longlong)dec64table[uVar14];
                    }
                    else {
                      pcVar19 = pcVar18 + 8;
                      *(undefined8 *)pcVar13 = *(undefined8 *)pcVar18;
                    }
                    pcVar18 = pcVar13 + 8;
                    if (pcVar2 + -0xc < _Dst) {
                      pcVar13 = pcVar2 + -7;
                      if (pcVar2 + -5 < _Dst) goto LAB_141468c3d;
                      if (pcVar18 < pcVar13) {
                        pcVar11 = pcVar18;
                        do {
                          *(undefined8 *)pcVar11 =
                               *(undefined8 *)(pcVar11 + ((longlong)pcVar19 - (longlong)pcVar18));
                          pcVar11 = pcVar11 + 8;
                        } while (pcVar11 < pcVar13);
                        pcVar19 = pcVar19 + ((longlong)pcVar13 - (longlong)pcVar18);
                        pcVar18 = pcVar13;
                      }
                      for (; pcVar18 < _Dst; pcVar18 = pcVar18 + 1) {
                        cVar4 = *pcVar19;
                        pcVar19 = pcVar19 + 1;
                        *pcVar18 = cVar4;
                      }
                    }
                    else {
                      *(undefined8 *)pcVar18 = *(undefined8 *)pcVar19;
                      if (0x10 < uVar15) {
                        pcVar18 = pcVar13 + 0x10;
                        do {
                          *(undefined8 *)pcVar18 =
                               *(undefined8 *)
                                (pcVar18 + (longlong)(pcVar19 + (8 - (longlong)(pcVar13 + 0x10))));
                          pcVar18 = pcVar18 + 8;
                        } while (pcVar18 < _Dst);
                      }
                    }
                    goto LAB_1414688b0;
                  }
                  if (pcVar2 + -5 < pcVar13 + uVar15) goto LAB_141468c3d;
                  uVar14 = (longlong)_Src_00 - (longlong)pcVar18;
                  if (uVar14 < uVar15) {
                    uVar15 = uVar15 - uVar14;
                    memcpy(pcVar13,puVar12 + -uVar14,uVar14);
                    pcVar13 = pcVar13 + uVar14;
                    if ((ulonglong)((longlong)pcVar13 - (longlong)_Src_00) < uVar15) {
                      pcVar18 = _Src_00;
                      for (_Dst = pcVar13; _Dst < pcVar13 + uVar15; _Dst = _Dst + 1) {
                        cVar4 = *pcVar18;
                        pcVar18 = pcVar18 + 1;
                        *_Dst = cVar4;
                      }
                      goto LAB_1414688b0;
                    }
                    memcpy(pcVar13,_Src_00,uVar15);
                  }
                  else {
                    memmove(pcVar13,pcVar18 + ((longlong)puVar12 - (longlong)_Src_00),uVar15);
                  }
                  _Dst = pcVar13 + uVar15;
                  goto LAB_1414688b0;
                }
                if (((byte *)(_Size + (longlong)_Src) == pbVar1) && (pcVar13 <= pcVar2)) {
                  memmove(_Dst,_Src,_Size);
                  local_res18 = (int)param_3;
                  iVar8 = (int)_Size + ((int)_Dst - local_res18);
                  goto LAB_141468c6f;
                }
LAB_141468c3d:
                iVar8 = ((int)param_2 - (int)_Src) + -1;
                goto LAB_141468c6f;
              }
            }
            iVar8 = -1;
          }
        }
      }
      else {
        iVar8 = LZ4_decompress_safe_withPrefix64k(param_2,param_3,param_4,param_5);
      }
LAB_141468c6f:
      if (iVar8 < 1) {
        return iVar8;
      }
      param_1->table[3] = param_1->table[3] + (longlong)iVar8;
      (param_1->internal_donotuse).prefixEnd = (param_1->internal_donotuse).prefixEnd + iVar8;
      return iVar8;
    }
    puVar12 = (param_1->internal_donotuse).prefixEnd + -uVar15;
    (param_1->internal_donotuse).externalDict = puVar12;
    param_1->table[1] = uVar15;
    iVar8 = LZ4_decompress_safe_forceExtDict(param_2,param_3,param_4,param_5,puVar12,uVar15);
  }
  if (0 < iVar8) {
    param_1->table[3] = (longlong)iVar8;
    (param_1->internal_donotuse).prefixEnd = (uchar *)(param_3 + iVar8);
  }
  return iVar8;
}

// LZ4_decompress_safe_forceExtDict @ 141468cf0

int __cdecl
Trace::LZ4_decompress_safe_forceExtDict
          (char *param_1,char *param_2,int param_3,int param_4,void *param_5,ulong64 param_6)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  ushort uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *_Dst;
  ulonglong uVar8;
  ulonglong uVar9;
  ushort *puVar10;
  ushort *_Src;
  longlong lVar11;
  char *pcVar12;
  char *pcVar13;
  longlong lVar14;
  byte *pbVar15;
  char *pcVar16;
  size_t _Size;
  
  if (param_1 == (char *)0x0) {
    return -1;
  }
  pcVar16 = param_2 + param_4;
  pbVar15 = (byte *)(param_1 + param_3);
  lVar14 = 0;
  if (param_5 != (void *)0x0) {
    lVar14 = (longlong)param_5 + param_6;
  }
  if (param_4 == 0) {
    if ((param_3 == 1) && (*param_1 == '\0')) {
      return 0;
    }
  }
  else {
    _Dst = param_2;
    puVar10 = (ushort *)param_1;
    if (param_3 != 0) {
LAB_141468dc0:
      while( true ) {
        bVar1 = (byte)*puVar10;
        uVar5 = 0;
        _Src = (ushort *)((longlong)puVar10 + 1);
        _Size = (size_t)(bVar1 >> 4);
        if (_Size == 0xf) break;
        if (pbVar15 + -0x10 <= _Src || pcVar16 + -0x20 < _Dst) goto LAB_141468e92;
        uVar3 = *(undefined8 *)((longlong)puVar10 + 9);
        uVar9 = (ulonglong)(bVar1 & 0xf);
        *(undefined8 *)_Dst = *(undefined8 *)_Src;
        *(undefined8 *)(_Dst + 8) = uVar3;
        pcVar7 = _Dst + _Size;
        uVar8 = (ulonglong)*(ushort *)((longlong)_Src + _Size);
        pcVar12 = pcVar7 + -uVar8;
        _Src = (ushort *)((longlong)_Src + _Size) + 1;
        if (uVar9 == 0xf) {
LAB_141468ee7:
          uVar5 = 0;
          do {
            uVar4 = *_Src;
            _Src = (ushort *)((longlong)_Src + 1);
            uVar5 = uVar5 + (byte)uVar4;
            if (pbVar15 + -4 <= _Src) goto LAB_141469157;
          } while ((byte)uVar4 == 0xff);
          uVar9 = uVar5 + uVar9;
          if (pcVar7 <= pcVar7 + uVar9) goto LAB_141468f1d;
          goto LAB_141469157;
        }
        if ((uVar8 < 8) || (pcVar12 < param_2)) goto LAB_141468f1d;
        *(undefined8 *)pcVar7 = *(undefined8 *)pcVar12;
        *(undefined8 *)(pcVar7 + 8) = *(undefined8 *)(pcVar12 + 8);
        *(undefined2 *)(pcVar7 + 0x10) = *(undefined2 *)(pcVar12 + 0x10);
        _Dst = pcVar7 + uVar9 + 4;
        puVar10 = _Src;
      }
      if (pbVar15 + -0xf <= _Src) goto LAB_141469157;
      do {
        uVar4 = *_Src;
        _Src = (ushort *)((longlong)_Src + 1);
        uVar5 = uVar5 + (byte)uVar4;
        if (pbVar15 + -0xf <= _Src) break;
      } while ((byte)uVar4 == 0xff);
      _Size = (ulonglong)uVar5 + 0xf;
      if ((_Dst + _Size < _Dst) || ((ushort *)(_Size + (longlong)_Src) < _Src)) goto LAB_141469157;
LAB_141468e92:
      pcVar7 = _Dst + _Size;
      if ((pcVar16 + -0xc < pcVar7) ||
         (puVar10 = (ushort *)(_Size + (longlong)_Src), pbVar15 + -8 < puVar10)) {
        if (((byte *)(_Size + (longlong)_Src) == pbVar15) && (pcVar7 <= pcVar16)) {
          memmove(_Dst,_Src,_Size);
          return (int)_Size + ((int)_Dst - (int)param_2);
        }
LAB_141469157:
        return ((int)param_1 - (int)_Src) + -1;
      }
      lVar11 = (longlong)_Src - (longlong)_Dst;
      do {
        *(undefined8 *)_Dst = *(undefined8 *)(_Dst + lVar11);
        _Dst = _Dst + 8;
      } while (_Dst < pcVar7);
      uVar8 = (ulonglong)*puVar10;
      _Src = puVar10 + 1;
      pcVar12 = pcVar7 + -uVar8;
      uVar9 = (ulonglong)(bVar1 & 0xf);
      if (uVar9 == 0xf) goto LAB_141468ee7;
LAB_141468f1d:
      uVar9 = uVar9 + 4;
      if ((param_6 < 0x10000) && (pcVar12 + param_6 < param_2)) goto LAB_141469157;
      puVar10 = _Src;
      if (param_2 <= pcVar12) {
        _Dst = pcVar7 + uVar9;
        if (uVar8 < 8) {
          pcVar7[0] = '\0';
          pcVar7[1] = '\0';
          pcVar7[2] = '\0';
          pcVar7[3] = '\0';
          *pcVar7 = *pcVar12;
          pcVar7[1] = pcVar12[1];
          pcVar7[2] = pcVar12[2];
          pcVar7[3] = pcVar12[3];
          uVar5 = inc32table[uVar8];
          *(undefined4 *)(pcVar7 + 4) = *(undefined4 *)(pcVar12 + uVar5);
          pcVar13 = pcVar12 + uVar5 + -(longlong)dec64table[uVar8];
        }
        else {
          pcVar13 = pcVar12 + 8;
          *(undefined8 *)pcVar7 = *(undefined8 *)pcVar12;
        }
        pcVar12 = pcVar7 + 8;
        if (pcVar16 + -0xc < _Dst) {
          pcVar7 = pcVar16 + -7;
          if (pcVar16 + -5 < _Dst) goto LAB_141469157;
          if (pcVar12 < pcVar7) {
            pcVar6 = pcVar12;
            do {
              *(undefined8 *)pcVar6 =
                   *(undefined8 *)(pcVar6 + ((longlong)pcVar13 - (longlong)pcVar12));
              pcVar6 = pcVar6 + 8;
            } while (pcVar6 < pcVar7);
            pcVar13 = pcVar13 + ((longlong)pcVar7 - (longlong)pcVar12);
            pcVar12 = pcVar7;
          }
          for (; pcVar12 < _Dst; pcVar12 = pcVar12 + 1) {
            cVar2 = *pcVar13;
            pcVar13 = pcVar13 + 1;
            *pcVar12 = cVar2;
          }
        }
        else {
          *(undefined8 *)pcVar12 = *(undefined8 *)pcVar13;
          if (0x10 < uVar9) {
            pcVar12 = pcVar7 + 0x10;
            do {
              *(undefined8 *)pcVar12 =
                   *(undefined8 *)(pcVar12 + (longlong)(pcVar13 + (8 - (longlong)(pcVar7 + 0x10))));
              pcVar12 = pcVar12 + 8;
            } while (pcVar12 < _Dst);
          }
        }
        goto LAB_141468dc0;
      }
      if (pcVar16 + -5 < pcVar7 + uVar9) goto LAB_141469157;
      uVar8 = (longlong)param_2 - (longlong)pcVar12;
      if (uVar8 < uVar9) {
        uVar9 = uVar9 - uVar8;
        memcpy(pcVar7,(void *)(lVar14 - uVar8),uVar8);
        pcVar7 = pcVar7 + uVar8;
        if ((ulonglong)((longlong)pcVar7 - (longlong)param_2) < uVar9) {
          pcVar12 = param_2;
          for (_Dst = pcVar7; _Dst < pcVar7 + uVar9; _Dst = _Dst + 1) {
            cVar2 = *pcVar12;
            pcVar12 = pcVar12 + 1;
            *_Dst = cVar2;
          }
          goto LAB_141468dc0;
        }
        memcpy(pcVar7,param_2,uVar9);
      }
      else {
        memmove(pcVar7,pcVar12 + (lVar14 - (longlong)param_2),uVar9);
      }
      _Dst = pcVar7 + uVar9;
      goto LAB_141468dc0;
    }
  }
  return -1;
}

// LZ4_decompress_safe_partial @ 141469190

int __cdecl
Trace::LZ4_decompress_safe_partial(char *param_1,char *param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  ushort uVar4;
  char *pcVar5;
  char *pcVar6;
  uint uVar7;
  char *_Dst;
  char *_Dst_00;
  size_t _Size;
  ushort *_Src;
  longlong lVar8;
  ushort *puVar9;
  ulonglong uVar10;
  ushort *puVar11;
  ulonglong uVar12;
  char *pcVar13;
  int local_res10;
  
  if (param_4 < param_5) {
    param_5 = param_4;
  }
  if (param_1 == (char *)0x0) {
    return -1;
  }
  pcVar13 = param_2 + param_5;
  puVar11 = (ushort *)(param_1 + param_3);
  if (param_5 == 0) {
    local_res10 = 0;
  }
  else if (param_3 == 0) {
    local_res10 = -1;
  }
  else {
    _Dst_00 = param_2;
    puVar9 = (ushort *)param_1;
LAB_141469221:
    do {
      bVar1 = (byte)*puVar9;
      _Src = (ushort *)((longlong)puVar9 + 1);
      _Size = (size_t)(bVar1 >> 4);
      if (_Size == 0xf) {
        uVar7 = 0;
        if ((ushort *)((longlong)puVar11 - 0xfU) <= _Src) goto LAB_1414694d9;
        do {
          uVar4 = *_Src;
          _Src = (ushort *)((longlong)_Src + 1);
          uVar7 = uVar7 + (byte)uVar4;
          if ((ushort *)((longlong)puVar11 - 0xfU) <= _Src) break;
        } while ((byte)uVar4 == 0xff);
        _Size = (ulonglong)uVar7 + 0xf;
        if ((_Dst_00 + _Size < _Dst_00) || ((ushort *)(_Size + (longlong)_Src) < _Src))
        goto LAB_1414694d9;
LAB_1414692f1:
        _Dst = _Dst_00 + _Size;
        if ((pcVar13 + -0xc < _Dst) ||
           (puVar9 = (ushort *)(_Size + (longlong)_Src), puVar11 + -4 < puVar9)) {
          if ((puVar11 + -4 < (ushort *)(_Size + (longlong)_Src)) &&
             ((ushort *)(_Size + (longlong)_Src) != puVar11)) goto LAB_1414694d9;
          if (pcVar13 < _Dst) {
            _Size = (longlong)pcVar13 - (longlong)_Dst_00;
            _Dst = pcVar13;
          }
          memmove(_Dst_00,_Src,_Size);
          puVar9 = (ushort *)((longlong)_Src + _Size);
          _Dst_00 = _Dst_00 + _Size;
          if ((_Dst == pcVar13) || (_Dst = _Dst_00, puVar9 == puVar11)) break;
        }
        else {
          lVar8 = (longlong)_Src - (longlong)_Dst_00;
          do {
            *(undefined8 *)_Dst_00 = *(undefined8 *)(_Dst_00 + lVar8);
            _Dst_00 = _Dst_00 + 8;
          } while (_Dst_00 < _Dst);
        }
        uVar10 = (ulonglong)*puVar9;
        pcVar5 = _Dst + -uVar10;
        _Src = puVar9 + 1;
        uVar12 = (ulonglong)(bVar1 & 0xf);
        if (uVar12 == 0xf) {
LAB_14146938f:
          uVar7 = 0;
          do {
            uVar4 = *_Src;
            _Src = (ushort *)((longlong)_Src + 1);
            uVar7 = uVar7 + (byte)uVar4;
            if (puVar11 + -2 <= _Src) goto LAB_1414694d9;
          } while ((byte)uVar4 == 0xff);
          uVar12 = uVar7 + uVar12;
          if (_Dst + uVar12 < _Dst) goto LAB_1414694d9;
        }
      }
      else {
        if (puVar11 + -8 <= _Src || pcVar13 + -0x20 < _Dst_00) goto LAB_1414692f1;
        uVar3 = *(undefined8 *)((longlong)puVar9 + 9);
        uVar12 = (ulonglong)(bVar1 & 0xf);
        *(undefined8 *)_Dst_00 = *(undefined8 *)_Src;
        *(undefined8 *)(_Dst_00 + 8) = uVar3;
        _Dst = _Dst_00 + _Size;
        uVar10 = (ulonglong)*(ushort *)((longlong)_Src + _Size);
        pcVar5 = _Dst + -uVar10;
        _Src = (ushort *)((longlong)_Src + _Size) + 1;
        if (uVar12 == 0xf) goto LAB_14146938f;
        if ((7 < uVar10) && (param_2 <= pcVar5)) {
          *(undefined8 *)_Dst = *(undefined8 *)pcVar5;
          *(undefined8 *)(_Dst + 8) = *(undefined8 *)(pcVar5 + 8);
          *(undefined2 *)(_Dst + 0x10) = *(undefined2 *)(pcVar5 + 0x10);
          _Dst_00 = _Dst + uVar12 + 4;
          puVar9 = _Src;
          goto LAB_141469221;
        }
      }
      uVar12 = uVar12 + 4;
      if (pcVar5 < param_2) {
LAB_1414694d9:
        return ((int)param_1 - (int)_Src) + -1;
      }
      _Dst_00 = _Dst + uVar12;
      puVar9 = _Src;
      if (_Dst_00 <= pcVar13 + -0xc) {
        if (uVar10 < 8) {
          _Dst[0] = '\0';
          _Dst[1] = '\0';
          _Dst[2] = '\0';
          _Dst[3] = '\0';
          *_Dst = *pcVar5;
          _Dst[1] = pcVar5[1];
          _Dst[2] = pcVar5[2];
          _Dst[3] = pcVar5[3];
          uVar7 = inc32table[uVar10];
          *(undefined4 *)(_Dst + 4) = *(undefined4 *)(pcVar5 + uVar7);
          pcVar6 = pcVar5 + uVar7 + -(longlong)dec64table[uVar10];
        }
        else {
          pcVar6 = pcVar5 + 8;
          *(undefined8 *)_Dst = *(undefined8 *)pcVar5;
        }
        *(undefined8 *)(_Dst + 8) = *(undefined8 *)pcVar6;
        if (0x10 < uVar12) {
          pcVar5 = _Dst + 0x10;
          do {
            *(undefined8 *)pcVar5 =
                 *(undefined8 *)(pcVar5 + (longlong)(pcVar6 + (8 - (longlong)(_Dst + 0x10))));
            pcVar5 = pcVar5 + 8;
          } while (pcVar5 < _Dst_00);
        }
        goto LAB_141469221;
      }
      uVar10 = (longlong)pcVar13 - (longlong)_Dst;
      if (uVar12 < (ulonglong)((longlong)pcVar13 - (longlong)_Dst)) {
        uVar10 = uVar12;
      }
      _Dst_00 = _Dst + uVar10;
      if (_Dst < pcVar5 + uVar10) {
        for (; _Dst < _Dst_00; _Dst = _Dst + 1) {
          cVar2 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          *_Dst = cVar2;
        }
      }
      else {
        memcpy(_Dst,pcVar5,uVar10);
      }
    } while (_Dst_00 != pcVar13);
    local_res10 = (int)param_2;
    local_res10 = (int)_Dst_00 - local_res10;
  }
  return local_res10;
}

// LZ4_decompress_safe_usingDict @ 141469520

int __cdecl
Trace::LZ4_decompress_safe_usingDict
          (char *param_1,char *param_2,int param_3,int param_4,char *param_5,int param_6)

{
  int iVar1;
  ulong64 uVar2;
  
  uVar2 = (ulong64)param_6;
  if (param_6 == 0) {
    iVar1 = LZ4_decompress_safe(param_1,param_2,param_3,param_4);
    return iVar1;
  }
  if (param_5 + uVar2 == param_2) {
    if (0xfffe < param_6) {
      iVar1 = LZ4_decompress_safe_withPrefix64k(param_1,param_2,param_3,param_4);
      return iVar1;
    }
    iVar1 = LZ4_decompress_safe_withSmallPrefix(param_1,param_2,param_3,param_4,uVar2);
    return iVar1;
  }
  iVar1 = LZ4_decompress_safe_forceExtDict(param_1,param_2,param_3,param_4,param_5,uVar2);
  return iVar1;
}

// LZ4_decompress_safe_withPrefix64k @ 1414695a0

int __cdecl
Trace::LZ4_decompress_safe_withPrefix64k(char *param_1,char *param_2,int param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  ushort uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  ushort *puVar8;
  ushort *_Src;
  longlong lVar9;
  char *pcVar10;
  char *_Dst;
  char *pcVar11;
  size_t _Size;
  ulonglong uVar12;
  ulonglong uVar13;
  char *pcVar14;
  ulonglong uVar15;
  byte *pbVar16;
  
  if (param_1 == (char *)0x0) {
    return -1;
  }
  pbVar16 = (byte *)(param_1 + param_3);
  pcVar11 = param_2 + param_4;
  if (param_4 == 0) {
    if ((param_3 == 1) && (*param_1 == '\0')) {
      return 0;
    }
  }
  else if (param_3 != 0) {
    puVar8 = (ushort *)param_1;
    _Dst = param_2;
    do {
      while( true ) {
        bVar1 = (byte)*puVar8;
        _Src = (ushort *)((longlong)puVar8 + 1);
        _Size = (size_t)(bVar1 >> 4);
        if (_Size == 0xf) break;
        if (pbVar16 + -0x10 <= _Src || pcVar11 + -0x20 < _Dst) goto LAB_141469701;
        uVar3 = *(undefined8 *)((longlong)puVar8 + 9);
        uVar13 = (ulonglong)(bVar1 & 0xf);
        *(undefined8 *)_Dst = *(undefined8 *)_Src;
        *(undefined8 *)(_Dst + 8) = uVar3;
        pcVar10 = _Dst + _Size;
        uVar15 = (ulonglong)*(ushort *)((longlong)_Src + _Size);
        pcVar6 = pcVar10 + -uVar15;
        _Src = (ushort *)((longlong)_Src + _Size) + 1;
        if (uVar13 == 0xf) {
LAB_141469758:
          uVar12 = 0;
          do {
            uVar4 = *_Src;
            _Src = (ushort *)((longlong)_Src + 1);
            uVar12 = (ulonglong)((int)uVar12 + (uint)(byte)uVar4);
            if (pbVar16 + -4 <= _Src) goto LAB_1414698c2;
          } while ((byte)uVar4 == 0xff);
          uVar13 = uVar12 + uVar13;
          if (pcVar10 <= pcVar10 + uVar13) goto LAB_14146978f;
          goto LAB_1414698c2;
        }
        if (uVar15 < 8) goto LAB_14146978f;
        *(undefined8 *)pcVar10 = *(undefined8 *)pcVar6;
        *(undefined8 *)(pcVar10 + 8) = *(undefined8 *)(pcVar6 + 8);
        *(undefined2 *)(pcVar10 + 0x10) = *(undefined2 *)(pcVar6 + 0x10);
        puVar8 = _Src;
        _Dst = pcVar10 + uVar13 + 4;
      }
      uVar13 = 0;
      if (pbVar16 + -0xf <= _Src) goto LAB_1414698c2;
      do {
        uVar4 = *_Src;
        _Src = (ushort *)((longlong)_Src + 1);
        uVar5 = (int)uVar13 + (uint)(byte)uVar4;
        if (pbVar16 + -0xf <= _Src) break;
        uVar13 = (ulonglong)uVar5;
      } while ((byte)uVar4 == 0xff);
      _Size = (ulonglong)uVar5 + 0xf;
      if ((_Dst + _Size < _Dst) || ((ushort *)(_Size + (longlong)_Src) < _Src)) goto LAB_1414698c2;
LAB_141469701:
      pcVar10 = _Dst + _Size;
      if ((pcVar11 + -0xc < pcVar10) ||
         (puVar8 = (ushort *)(_Size + (longlong)_Src), pbVar16 + -8 < puVar8)) {
        if (((byte *)(_Size + (longlong)_Src) == pbVar16) && (pcVar10 <= pcVar11)) {
          memmove(_Dst,_Src,_Size);
          return (int)_Size + ((int)_Dst - (int)param_2);
        }
LAB_1414698c2:
        return ((int)param_1 - (int)_Src) + -1;
      }
      lVar9 = (longlong)_Src - (longlong)_Dst;
      do {
        *(undefined8 *)_Dst = *(undefined8 *)(_Dst + lVar9);
        _Dst = _Dst + 8;
      } while (_Dst < pcVar10);
      uVar15 = (ulonglong)*puVar8;
      _Src = puVar8 + 1;
      pcVar6 = pcVar10 + -uVar15;
      uVar13 = (ulonglong)(bVar1 & 0xf);
      if (uVar13 == 0xf) goto LAB_141469758;
LAB_14146978f:
      if (pcVar6 < param_2 + -0x10000) goto LAB_1414698c2;
      _Dst = pcVar10 + uVar13 + 4;
      if (uVar15 < 8) {
        pcVar10[0] = '\0';
        pcVar10[1] = '\0';
        pcVar10[2] = '\0';
        pcVar10[3] = '\0';
        *pcVar10 = *pcVar6;
        pcVar10[1] = pcVar6[1];
        pcVar10[2] = pcVar6[2];
        pcVar10[3] = pcVar6[3];
        uVar5 = inc32table[uVar15];
        *(undefined4 *)(pcVar10 + 4) = *(undefined4 *)(pcVar6 + uVar5);
        pcVar7 = pcVar6 + uVar5 + -(longlong)dec64table[uVar15];
      }
      else {
        pcVar7 = pcVar6 + 8;
        *(undefined8 *)pcVar10 = *(undefined8 *)pcVar6;
      }
      pcVar6 = pcVar10 + 8;
      puVar8 = _Src;
      if (pcVar11 + -0xc < _Dst) {
        pcVar10 = pcVar11 + -7;
        if (pcVar11 + -5 < _Dst) goto LAB_1414698c2;
        if (pcVar6 < pcVar10) {
          pcVar14 = pcVar6;
          do {
            *(undefined8 *)pcVar14 =
                 *(undefined8 *)(pcVar14 + ((longlong)pcVar7 - (longlong)pcVar6));
            pcVar14 = pcVar14 + 8;
          } while (pcVar14 < pcVar10);
          pcVar7 = pcVar7 + ((longlong)pcVar10 - (longlong)pcVar6);
          pcVar6 = pcVar10;
        }
        for (; pcVar6 < _Dst; pcVar6 = pcVar6 + 1) {
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          *pcVar6 = cVar2;
        }
      }
      else {
        *(undefined8 *)pcVar6 = *(undefined8 *)pcVar7;
        if (0x10 < uVar13 + 4) {
          pcVar6 = pcVar10 + 0x10;
          do {
            *(undefined8 *)pcVar6 =
                 *(undefined8 *)(pcVar6 + (longlong)(pcVar7 + (8 - (longlong)(pcVar10 + 0x10))));
            pcVar6 = pcVar6 + 8;
          } while (pcVar6 < _Dst);
        }
      }
    } while( true );
  }
  return -1;
}

// LZ4_decompress_safe_withSmallPrefix @ 141469900

int __cdecl
Trace::LZ4_decompress_safe_withSmallPrefix
          (char *param_1,char *param_2,int param_3,int param_4,ulong64 param_5)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  ushort uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  ushort *puVar8;
  ushort *_Src;
  longlong lVar9;
  char *pcVar10;
  char *_Dst;
  char *pcVar11;
  size_t _Size;
  ulonglong uVar12;
  ulonglong uVar13;
  char *pcVar14;
  ulonglong uVar15;
  byte *pbVar16;
  
  if (param_1 == (char *)0x0) {
    return -1;
  }
  pbVar16 = (byte *)(param_1 + param_3);
  pcVar11 = param_2 + param_4;
  if (param_4 == 0) {
    if ((param_3 == 1) && (*param_1 == '\0')) {
      return 0;
    }
  }
  else if (param_3 != 0) {
    puVar8 = (ushort *)param_1;
    _Dst = param_2;
    do {
      while( true ) {
        bVar1 = (byte)*puVar8;
        _Src = (ushort *)((longlong)puVar8 + 1);
        _Size = (size_t)(bVar1 >> 4);
        if (_Size == 0xf) break;
        if (pbVar16 + -0x10 <= _Src || pcVar11 + -0x20 < _Dst) goto LAB_141469a71;
        uVar3 = *(undefined8 *)((longlong)puVar8 + 9);
        uVar13 = (ulonglong)(bVar1 & 0xf);
        *(undefined8 *)_Dst = *(undefined8 *)_Src;
        *(undefined8 *)(_Dst + 8) = uVar3;
        pcVar10 = _Dst + _Size;
        uVar15 = (ulonglong)*(ushort *)((longlong)_Src + _Size);
        pcVar6 = pcVar10 + -uVar15;
        _Src = (ushort *)((longlong)_Src + _Size) + 1;
        if (uVar13 == 0xf) {
LAB_141469ac8:
          uVar12 = 0;
          do {
            uVar4 = *_Src;
            _Src = (ushort *)((longlong)_Src + 1);
            uVar12 = (ulonglong)((int)uVar12 + (uint)(byte)uVar4);
            if (pbVar16 + -4 <= _Src) goto LAB_141469c32;
          } while ((byte)uVar4 == 0xff);
          uVar13 = uVar12 + uVar13;
          if (pcVar10 <= pcVar10 + uVar13) goto LAB_141469aff;
          goto LAB_141469c32;
        }
        if ((uVar15 < 8) || (pcVar6 < param_2 + -param_5)) goto LAB_141469aff;
        *(undefined8 *)pcVar10 = *(undefined8 *)pcVar6;
        *(undefined8 *)(pcVar10 + 8) = *(undefined8 *)(pcVar6 + 8);
        *(undefined2 *)(pcVar10 + 0x10) = *(undefined2 *)(pcVar6 + 0x10);
        puVar8 = _Src;
        _Dst = pcVar10 + uVar13 + 4;
      }
      uVar13 = 0;
      if (pbVar16 + -0xf <= _Src) goto LAB_141469c32;
      do {
        uVar4 = *_Src;
        _Src = (ushort *)((longlong)_Src + 1);
        uVar5 = (int)uVar13 + (uint)(byte)uVar4;
        uVar13 = (ulonglong)uVar5;
        if (pbVar16 + -0xf <= _Src) break;
      } while ((byte)uVar4 == 0xff);
      _Size = (ulonglong)uVar5 + 0xf;
      if ((_Dst + _Size < _Dst) || ((ushort *)(_Size + (longlong)_Src) < _Src)) goto LAB_141469c32;
LAB_141469a71:
      pcVar10 = _Dst + _Size;
      if ((pcVar11 + -0xc < pcVar10) ||
         (puVar8 = (ushort *)(_Size + (longlong)_Src), pbVar16 + -8 < puVar8)) {
        if (((byte *)(_Size + (longlong)_Src) == pbVar16) && (pcVar10 <= pcVar11)) {
          memmove(_Dst,_Src,_Size);
          return (int)_Size + ((int)_Dst - (int)param_2);
        }
LAB_141469c32:
        return ((int)param_1 - (int)_Src) + -1;
      }
      lVar9 = (longlong)_Src - (longlong)_Dst;
      do {
        *(undefined8 *)_Dst = *(undefined8 *)(_Dst + lVar9);
        _Dst = _Dst + 8;
      } while (_Dst < pcVar10);
      uVar15 = (ulonglong)*puVar8;
      _Src = puVar8 + 1;
      pcVar6 = pcVar10 + -uVar15;
      uVar13 = (ulonglong)(bVar1 & 0xf);
      if (uVar13 == 0xf) goto LAB_141469ac8;
LAB_141469aff:
      if (pcVar6 < param_2 + -param_5) goto LAB_141469c32;
      _Dst = pcVar10 + uVar13 + 4;
      if (uVar15 < 8) {
        pcVar10[0] = '\0';
        pcVar10[1] = '\0';
        pcVar10[2] = '\0';
        pcVar10[3] = '\0';
        *pcVar10 = *pcVar6;
        pcVar10[1] = pcVar6[1];
        pcVar10[2] = pcVar6[2];
        pcVar10[3] = pcVar6[3];
        uVar5 = inc32table[uVar15];
        *(undefined4 *)(pcVar10 + 4) = *(undefined4 *)(pcVar6 + uVar5);
        pcVar7 = pcVar6 + uVar5 + -(longlong)dec64table[uVar15];
      }
      else {
        pcVar7 = pcVar6 + 8;
        *(undefined8 *)pcVar10 = *(undefined8 *)pcVar6;
      }
      pcVar6 = pcVar10 + 8;
      puVar8 = _Src;
      if (pcVar11 + -0xc < _Dst) {
        pcVar10 = pcVar11 + -7;
        if (pcVar11 + -5 < _Dst) goto LAB_141469c32;
        if (pcVar6 < pcVar10) {
          pcVar14 = pcVar6;
          do {
            *(undefined8 *)pcVar14 =
                 *(undefined8 *)(pcVar14 + ((longlong)pcVar7 - (longlong)pcVar6));
            pcVar14 = pcVar14 + 8;
          } while (pcVar14 < pcVar10);
          pcVar7 = pcVar7 + ((longlong)pcVar10 - (longlong)pcVar6);
          pcVar6 = pcVar10;
        }
        for (; pcVar6 < _Dst; pcVar6 = pcVar6 + 1) {
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          *pcVar6 = cVar2;
        }
      }
      else {
        *(undefined8 *)pcVar6 = *(undefined8 *)pcVar7;
        if (0x10 < uVar13 + 4) {
          pcVar6 = pcVar10 + 0x10;
          do {
            *(undefined8 *)pcVar6 =
                 *(undefined8 *)(pcVar6 + (longlong)(pcVar7 + (8 - (longlong)(pcVar10 + 0x10))));
            pcVar6 = pcVar6 + 8;
          } while (pcVar6 < _Dst);
        }
      }
    } while( true );
  }
  return -1;
}

// LZ4_freeStream @ 141469c70

int __cdecl Trace::LZ4_freeStream(LZ4_stream_u *param_1)

{
  if (param_1 != (LZ4_stream_u *)0x0) {
    free(param_1);
  }
  return 0;
}

// LZ4_freeStreamDecode @ 141469c90

int __cdecl Trace::LZ4_freeStreamDecode(LZ4_streamDecode_u *param_1)

{
  if (param_1 != (LZ4_streamDecode_u *)0x0) {
    free(param_1);
  }
  return 0;
}

// LZ4_initStream @ 141469cb0

LZ4_stream_u * __cdecl Trace::LZ4_initStream(void *param_1,ulong64 param_2)

{
  if ((param_1 != (void *)0x0) && (0x401f < param_2)) {
    memset(param_1,0,0x4020);
    return param_1;
  }
  return (LZ4_stream_u *)0x0;
}

// LZ4_loadDict @ 141469cf0

int __cdecl Trace::LZ4_loadDict(LZ4_stream_u *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  uint uVar2;
  
  pcVar1 = param_2 + param_3;
  memset(param_1,0,0x4020);
  (param_1->internal_donotuse).currentOffset = 0x10000;
  if (param_3 < 8) {
    uVar2 = 0;
  }
  else {
    (param_1->internal_donotuse).tableType = 2;
    if (0x10000 < (longlong)param_3) {
      param_2 = pcVar1 + -0x10000;
    }
    param_1->table[0x801] = (ulong64)param_2;
    (param_1->internal_donotuse).dictSize = (int)pcVar1 - (int)param_2;
    for (; param_2 <= pcVar1 + -8; param_2 = (char *)((longlong)param_2 + 3)) {
      *(int *)((longlong)param_1 +
              ((ulonglong)(*(longlong *)param_2 * -0x30e4432345000000) >> 0x34) * 4) =
           (int)param_2 - (int)(pcVar1 + -0x10000);
    }
    uVar2 = (param_1->internal_donotuse).dictSize;
  }
  return uVar2;
}

// LZ4_renormDictT @ 141469dd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl Trace::LZ4_renormDictT(LZ4_stream_t_internal *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uchar *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  LZ4_stream_t_internal *pLVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  
  uVar10 = _UNK_15060db2c;
  uVar9 = _UNK_15060db28;
  uVar8 = _UNK_15060db24;
  uVar11 = ___xmm_ffffffffffffffffffffffffffffffff;
  uVar15 = param_1->currentOffset;
  if (0x80000000 < uVar15 + param_2) {
    uVar15 = uVar15 - 0x10000;
    puVar1 = &param_1->dictSize;
    uVar2 = *puVar1;
    puVar3 = param_1->dictionary;
    if (__isa_available < 2) {
      lVar12 = 0x1000;
      pLVar14 = param_1;
      do {
        uVar11 = 0;
        if (uVar15 <= pLVar14->hashTable[0]) {
          uVar11 = pLVar14->hashTable[0] - uVar15;
        }
        pLVar14->hashTable[0] = uVar11;
        lVar12 = lVar12 + -1;
        pLVar14 = (LZ4_stream_t_internal *)(pLVar14->hashTable + 1);
      } while (lVar12 != 0);
    }
    else {
      lVar12 = 0x400;
      pLVar14 = param_1;
      do {
        uVar4 = pLVar14->hashTable[0];
        uVar5 = pLVar14->hashTable[1];
        uVar6 = pLVar14->hashTable[2];
        uVar7 = pLVar14->hashTable[3];
        uVar16 = ~-(uint)(((uVar4 < uVar15) * uVar15 | (uVar4 >= uVar15) * uVar4) == uVar4) & uVar11
        ;
        uVar17 = ~-(uint)(((uVar5 < uVar15) * uVar15 | (uVar5 >= uVar15) * uVar5) == uVar5) & uVar8;
        uVar18 = ~-(uint)(((uVar6 < uVar15) * uVar15 | (uVar6 >= uVar15) * uVar6) == uVar6) & uVar9;
        uVar19 = ~-(uint)(((uVar7 < uVar15) * uVar15 | (uVar7 >= uVar15) * uVar7) == uVar7) & uVar10
        ;
        pLVar14->hashTable[0] = ~uVar16 & (~uVar16 & uVar4) - uVar15 | ~uVar16 & uVar4 & uVar16;
        pLVar14->hashTable[1] = ~uVar17 & (~uVar17 & uVar5) - uVar15 | ~uVar17 & uVar5 & uVar17;
        pLVar14->hashTable[2] = ~uVar18 & (~uVar18 & uVar6) - uVar15 | ~uVar18 & uVar6 & uVar18;
        pLVar14->hashTable[3] = ~uVar19 & (~uVar19 & uVar7) - uVar15 | ~uVar19 & uVar7 & uVar19;
        lVar12 = lVar12 + -1;
        pLVar14 = (LZ4_stream_t_internal *)(pLVar14->hashTable + 4);
      } while (lVar12 != 0);
    }
    uVar13 = (ulonglong)*puVar1;
    param_1->currentOffset = 0x10000;
    if (0x10000 < *puVar1) {
      *puVar1 = 0x10000;
      uVar13 = 0x10000;
    }
    param_1->dictionary = puVar3 + (uVar2 - uVar13);
  }
  return;
}

// LZ4_resetStream @ 141469ed0

void __cdecl Trace::LZ4_resetStream(LZ4_stream_u *param_1)

{
  memset(param_1,0,0x4020);
  return;
}

// LZ4_resetStreamState @ 141469ef0

int __cdecl Trace::LZ4_resetStreamState(void *param_1,char *param_2)

{
  memset(param_1,0,0x4020);
  return 0;
}

// LZ4_resetStream_fast @ 141469f10

void __cdecl Trace::LZ4_resetStream_fast(LZ4_stream_u *param_1)

{
  if ((param_1->internal_donotuse).dirty != 0) {
    memset(param_1,0,0x4020);
    return;
  }
  if (((param_1->internal_donotuse).tableType != 0) &&
     (((param_1->internal_donotuse).tableType != 2 ||
      (0x40000000 < (param_1->internal_donotuse).currentOffset)))) {
    memset(param_1,0,0x4000);
    (param_1->internal_donotuse).currentOffset = 0;
    (param_1->internal_donotuse).tableType = 0;
  }
  if ((param_1->internal_donotuse).currentOffset != 0) {
    (param_1->internal_donotuse).currentOffset =
         (param_1->internal_donotuse).currentOffset + 0x10000;
  }
  param_1->table[0x802] = 0;
  param_1->table[0x801] = 0;
  (param_1->internal_donotuse).dictSize = 0;
  return;
}

// LZ4_saveDict @ 141469fb0

int __cdecl Trace::LZ4_saveDict(LZ4_stream_u *param_1,char *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (param_1->internal_donotuse).dictSize;
  uVar2 = 0x10000;
  if ((uint)param_3 < 0x10001) {
    uVar2 = param_3;
  }
  if (uVar1 < uVar2) {
    uVar2 = uVar1;
  }
  memmove(param_2,(param_1->internal_donotuse).dictionary +
                  ((ulonglong)uVar1 - (longlong)(int)uVar2),(longlong)(int)uVar2);
  (param_1->internal_donotuse).dictSize = uVar2;
  (param_1->internal_donotuse).dictionary = (uchar *)param_2;
  return uVar2;
}

// LZ4_setStreamDecode @ 14146a020

int __cdecl Trace::LZ4_setStreamDecode(LZ4_streamDecode_u *param_1,char *param_2,int param_3)

{
  param_1->table[3] = (longlong)param_3;
  (param_1->internal_donotuse).prefixEnd = (uchar *)(param_2 + param_3);
  param_1->table[0] = 0;
  param_1->table[1] = 0;
  return 1;
}

// LZ4_sizeofState @ 14146a050

int __cdecl Trace::LZ4_sizeofState(void)

{
  return 0x4020;
}

// LZ4_sizeofStreamState @ 14146a060

int __cdecl Trace::LZ4_sizeofStreamState(void)

{
  return 0x4020;
}

// LZ4_slideInputBuffer @ 14146a070

char * __cdecl Trace::LZ4_slideInputBuffer(void *param_1)

{
  return *(char **)((longlong)param_1 + 0x4008);
}

// LZ4_uncompress @ 14146a080

int __cdecl Trace::LZ4_uncompress(char *param_1,char *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  ushort *_Src;
  char *pcVar9;
  size_t _Size;
  ulonglong uVar10;
  char *pcVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  if (param_1 == (char *)0x0) {
    return -1;
  }
  pcVar9 = param_2 + param_3;
  _Src = (ushort *)param_1;
  if (param_3 == 0) {
    iVar4 = -1;
    if (*param_1 == '\0') {
      iVar4 = 1;
    }
    return iVar4;
  }
  do {
    while( true ) {
      bVar1 = (byte)*_Src;
      _Src = (ushort *)((longlong)_Src + 1);
      _Size = (size_t)(bVar1 >> 4);
      if (8 < _Size) break;
      if (pcVar9 + -0x1a < param_2) goto LAB_141467a26;
      uVar10 = (ulonglong)(bVar1 & 0xf);
      *(undefined8 *)param_2 = *(undefined8 *)_Src;
      pcVar5 = param_2 + _Size;
      uVar14 = (ulonglong)*(ushort *)((longlong)_Src + _Size);
      _Src = (ushort *)((longlong)_Src + _Size) + 1;
      pcVar7 = pcVar5 + -uVar14;
      if (uVar10 == 0xf) {
LAB_141467a6b:
        uVar13 = 0;
        do {
          uVar3 = *_Src;
          _Src = (ushort *)((longlong)_Src + 1);
          uVar13 = (ulonglong)((int)uVar13 + (uint)(byte)uVar3);
        } while ((byte)uVar3 == 0xff);
        uVar10 = uVar10 + uVar13;
        goto LAB_141467a87;
      }
      if (uVar14 < 8) {
        uVar10 = uVar10 + 4;
        param_2 = pcVar5 + uVar10;
        goto LAB_141467a95;
      }
      *(undefined8 *)pcVar5 = *(undefined8 *)pcVar7;
      *(undefined8 *)(pcVar5 + 8) = *(undefined8 *)(pcVar7 + 8);
      *(undefined2 *)(pcVar5 + 0x10) = *(undefined2 *)(pcVar7 + 0x10);
      param_2 = pcVar5 + uVar10 + 4;
    }
    if (_Size == 0xf) {
      uVar6 = 0;
      do {
        uVar3 = *_Src;
        _Src = (ushort *)((longlong)_Src + 1);
        uVar6 = uVar6 + (byte)uVar3;
      } while ((byte)uVar3 == 0xff);
      _Size = (ulonglong)uVar6 + 0xf;
    }
LAB_141467a26:
    pcVar5 = param_2 + _Size;
    if (pcVar9 + -8 < pcVar5) {
      if (pcVar5 == pcVar9) {
        memmove(param_2,_Src,_Size);
        return (int)_Src + ((int)_Size - (int)param_1);
      }
LAB_141467b93:
      return ((int)param_1 - (int)_Src) + -1;
    }
    lVar12 = (longlong)_Src - (longlong)param_2;
    do {
      *(undefined8 *)param_2 = *(undefined8 *)(param_2 + lVar12);
      param_2 = param_2 + 8;
    } while (param_2 < pcVar5);
    uVar14 = (ulonglong)*(ushort *)((longlong)_Src + _Size);
    _Src = (ushort *)((longlong)_Src + _Size) + 1;
    pcVar7 = pcVar5 + -uVar14;
    uVar10 = (ulonglong)(bVar1 & 0xf);
    if (uVar10 == 0xf) goto LAB_141467a6b;
LAB_141467a87:
    uVar10 = uVar10 + 4;
    param_2 = pcVar5 + uVar10;
    if (uVar14 < 8) {
LAB_141467a95:
      pcVar5[0] = '\0';
      pcVar5[1] = '\0';
      pcVar5[2] = '\0';
      pcVar5[3] = '\0';
      *pcVar5 = *pcVar7;
      pcVar5[1] = pcVar7[1];
      pcVar5[2] = pcVar7[2];
      pcVar5[3] = pcVar7[3];
      uVar6 = inc32table[uVar14];
      *(undefined4 *)(pcVar5 + 4) = *(undefined4 *)(pcVar7 + uVar6);
      pcVar8 = pcVar7 + uVar6 + -(longlong)dec64table[uVar14];
    }
    else {
      pcVar8 = pcVar7 + 8;
      *(undefined8 *)pcVar5 = *(undefined8 *)pcVar7;
    }
    pcVar7 = pcVar5 + 8;
    if (pcVar9 + -0xc < param_2) {
      pcVar5 = pcVar9 + -7;
      if (pcVar9 + -5 < param_2) goto LAB_141467b93;
      if (pcVar7 < pcVar5) {
        pcVar11 = pcVar7;
        do {
          *(undefined8 *)pcVar11 = *(undefined8 *)(pcVar11 + ((longlong)pcVar8 - (longlong)pcVar7));
          pcVar11 = pcVar11 + 8;
        } while (pcVar11 < pcVar5);
        pcVar8 = pcVar8 + ((longlong)pcVar5 - (longlong)pcVar7);
        pcVar7 = pcVar5;
      }
      for (; pcVar7 < param_2; pcVar7 = pcVar7 + 1) {
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        *pcVar7 = cVar2;
      }
    }
    else {
      *(undefined8 *)pcVar7 = *(undefined8 *)pcVar8;
      if (0x10 < uVar10) {
        pcVar7 = pcVar5 + 0x10;
        do {
          *(undefined8 *)pcVar7 =
               *(undefined8 *)(pcVar7 + (longlong)(pcVar8 + (8 - (longlong)(pcVar5 + 0x10))));
          pcVar7 = pcVar7 + 8;
        } while (pcVar7 < param_2);
      }
    }
  } while( true );
}

// LZ4_uncompress_unknownOutputSize @ 14146a090

int __cdecl
Trace::LZ4_uncompress_unknownOutputSize(char *param_1,char *param_2,int param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  ushort uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  ushort *puVar8;
  ushort *_Src;
  longlong lVar9;
  char *pcVar10;
  char *_Dst;
  char *pcVar11;
  size_t _Size;
  ulonglong uVar12;
  ulonglong uVar13;
  char *pcVar14;
  ulonglong uVar15;
  byte *pbVar16;
  
  if (param_1 == (char *)0x0) {
    return -1;
  }
  pbVar16 = (byte *)(param_1 + param_3);
  pcVar11 = param_2 + param_4;
  if (param_4 == 0) {
    if ((param_3 == 1) && (*param_1 == '\0')) {
      return 0;
    }
  }
  else if (param_3 != 0) {
    puVar8 = (ushort *)param_1;
    _Dst = param_2;
    do {
      while( true ) {
        bVar1 = (byte)*puVar8;
        _Src = (ushort *)((longlong)puVar8 + 1);
        _Size = (size_t)(bVar1 >> 4);
        if (_Size == 0xf) break;
        if (pbVar16 + -0x10 <= _Src || pcVar11 + -0x20 < _Dst) goto LAB_141468561;
        uVar3 = *(undefined8 *)((longlong)puVar8 + 9);
        uVar13 = (ulonglong)(bVar1 & 0xf);
        *(undefined8 *)_Dst = *(undefined8 *)_Src;
        *(undefined8 *)(_Dst + 8) = uVar3;
        pcVar10 = _Dst + _Size;
        uVar15 = (ulonglong)*(ushort *)((longlong)_Src + _Size);
        pcVar6 = pcVar10 + -uVar15;
        _Src = (ushort *)((longlong)_Src + _Size) + 1;
        if (uVar13 == 0xf) {
LAB_1414685b8:
          uVar12 = 0;
          do {
            uVar4 = *_Src;
            _Src = (ushort *)((longlong)_Src + 1);
            uVar12 = (ulonglong)((int)uVar12 + (uint)(byte)uVar4);
            if (pbVar16 + -4 <= _Src) goto LAB_14146870f;
          } while ((byte)uVar4 == 0xff);
          uVar13 = uVar12 + uVar13;
          if (pcVar10 <= pcVar10 + uVar13) goto LAB_1414685ef;
          goto LAB_14146870f;
        }
        if ((uVar15 < 8) || (pcVar6 < param_2)) goto LAB_1414685ef;
        *(undefined8 *)pcVar10 = *(undefined8 *)pcVar6;
        *(undefined8 *)(pcVar10 + 8) = *(undefined8 *)(pcVar6 + 8);
        *(undefined2 *)(pcVar10 + 0x10) = *(undefined2 *)(pcVar6 + 0x10);
        puVar8 = _Src;
        _Dst = pcVar10 + uVar13 + 4;
      }
      uVar13 = 0;
      if (pbVar16 + -0xf <= _Src) goto LAB_14146870f;
      do {
        uVar4 = *_Src;
        _Src = (ushort *)((longlong)_Src + 1);
        uVar5 = (int)uVar13 + (uint)(byte)uVar4;
        if (pbVar16 + -0xf <= _Src) break;
        uVar13 = (ulonglong)uVar5;
      } while ((byte)uVar4 == 0xff);
      _Size = (ulonglong)uVar5 + 0xf;
      if ((_Dst + _Size < _Dst) || ((ushort *)(_Size + (longlong)_Src) < _Src)) goto LAB_14146870f;
LAB_141468561:
      pcVar10 = _Dst + _Size;
      if ((pcVar11 + -0xc < pcVar10) ||
         (puVar8 = (ushort *)(_Size + (longlong)_Src), pbVar16 + -8 < puVar8)) {
        if (((byte *)(_Size + (longlong)_Src) == pbVar16) && (pcVar10 <= pcVar11)) {
          memmove(_Dst,_Src,_Size);
          return (int)_Size + ((int)_Dst - (int)param_2);
        }
LAB_14146870f:
        return ((int)param_1 - (int)_Src) + -1;
      }
      lVar9 = (longlong)_Src - (longlong)_Dst;
      do {
        *(undefined8 *)_Dst = *(undefined8 *)(_Dst + lVar9);
        _Dst = _Dst + 8;
      } while (_Dst < pcVar10);
      uVar15 = (ulonglong)*puVar8;
      _Src = puVar8 + 1;
      pcVar6 = pcVar10 + -uVar15;
      uVar13 = (ulonglong)(bVar1 & 0xf);
      if (uVar13 == 0xf) goto LAB_1414685b8;
LAB_1414685ef:
      if (pcVar6 < param_2) goto LAB_14146870f;
      _Dst = pcVar10 + uVar13 + 4;
      if (uVar15 < 8) {
        pcVar10[0] = '\0';
        pcVar10[1] = '\0';
        pcVar10[2] = '\0';
        pcVar10[3] = '\0';
        *pcVar10 = *pcVar6;
        pcVar10[1] = pcVar6[1];
        pcVar10[2] = pcVar6[2];
        pcVar10[3] = pcVar6[3];
        uVar5 = inc32table[uVar15];
        *(undefined4 *)(pcVar10 + 4) = *(undefined4 *)(pcVar6 + uVar5);
        pcVar7 = pcVar6 + uVar5 + -(longlong)dec64table[uVar15];
      }
      else {
        pcVar7 = pcVar6 + 8;
        *(undefined8 *)pcVar10 = *(undefined8 *)pcVar6;
      }
      pcVar6 = pcVar10 + 8;
      puVar8 = _Src;
      if (pcVar11 + -0xc < _Dst) {
        pcVar10 = pcVar11 + -7;
        if (pcVar11 + -5 < _Dst) goto LAB_14146870f;
        if (pcVar6 < pcVar10) {
          pcVar14 = pcVar6;
          do {
            *(undefined8 *)pcVar14 =
                 *(undefined8 *)(pcVar14 + ((longlong)pcVar7 - (longlong)pcVar6));
            pcVar14 = pcVar14 + 8;
          } while (pcVar14 < pcVar10);
          pcVar7 = pcVar7 + ((longlong)pcVar10 - (longlong)pcVar6);
          pcVar6 = pcVar10;
        }
        for (; pcVar6 < _Dst; pcVar6 = pcVar6 + 1) {
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          *pcVar6 = cVar2;
        }
      }
      else {
        *(undefined8 *)pcVar6 = *(undefined8 *)pcVar7;
        if (0x10 < uVar13 + 4) {
          pcVar6 = pcVar10 + 0x10;
          do {
            *(undefined8 *)pcVar6 =
                 *(undefined8 *)(pcVar6 + (longlong)(pcVar7 + (8 - (longlong)(pcVar10 + 0x10))));
            pcVar6 = pcVar6 + 8;
          } while (pcVar6 < _Dst);
        }
      }
    } while( true );
  }
  return -1;
}

// LZ4_versionNumber @ 14146a0a0

int __cdecl Trace::LZ4_versionNumber(void)

{
  return 0x2a96;
}

// LZ4_versionString @ 14146a0b0

char * __cdecl Trace::LZ4_versionString(void)

{
  return "1.9.2";
}

// __local_stdio_printf_options @ 14146fd10

ulong64 * __cdecl __local_stdio_printf_options(void)

{
  return &`__local_stdio_printf_options'::__l2::_OptionsStorage;
}

// snprintf @ 14146fd20

int __cdecl snprintf(char *param_1,ulong64 param_2,char *param_3)

{
  int iVar1;
  ulong64 *puVar2;
  undefined1 local_res20 [8];
  
  puVar2 = __local_stdio_printf_options();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 2,param_1,param_2,param_3,0,local_res20);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

// `dynamic_atexit_destructor_for_'GTlsContext'' @ 1503371f0

void __cdecl UE::Trace::Private::_dynamic_atexit_destructor_for__GTlsContext__(void)

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

// `dynamic_atexit_destructor_for_'Initializer'' @ 150337240

void __cdecl
`UE::Trace::Private::Writer_InternalInitialize'::__l2::_dynamic_atexit_destructor_for__Initializer__
          (void)

{
  bool bVar1;
  
  if (UE::Trace::Private::GWorkerThread != 0) {
    UE::Trace::Private::GWorkerThreadQuit = true;
    WaitForSingleObject((HANDLE)UE::Trace::Private::GWorkerThread,0xffffffff);
    CloseHandle((HANDLE)UE::Trace::Private::GWorkerThread);
    LOCK();
    bVar1 = UE::Trace::Private::GUpdateInProgress == 0;
    if (bVar1) {
      UE::Trace::Private::GUpdateInProgress = 1;
    }
    UNLOCK();
    if (bVar1) {
      UE::Trace::Private::Writer_WorkerUpdateInternal();
      LOCK();
      UE::Trace::Private::GUpdateInProgress = 0;
      UNLOCK();
    }
    UE::Trace::Private::GWorkerThread = 0;
  }
  return;
}

