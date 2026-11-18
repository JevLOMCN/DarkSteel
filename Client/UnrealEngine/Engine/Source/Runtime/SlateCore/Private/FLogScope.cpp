// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 10

// Enter<FSlateTraceAddWidgetFields> @ 1425b46a0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FSlateTraceAddWidgetFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FSlateTraceAddWidgetFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FSlateTraceAddWidgetFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FSlateTraceAddWidgetFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FSlateTraceAddWidgetFields::GetUid(void)'::__l2::Uid =
           FSlateTraceAddWidgetFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FSlateTraceAddWidgetFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FSlateTraceAddWidgetFields::GetUid(void)'::__l2::Uid,
        0x10);
  return __return_storage_ptr__;
}

// Enter<FSlateTraceApplicationTickAndDrawWidgetsFields> @ 1425b4720

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FSlateTraceApplicationTickAndDrawWidgetsFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FSlateTraceApplicationTickAndDrawWidgetsFields::GetUid(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FSlateTraceApplicationTickAndDrawWidgetsFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FSlateTraceApplicationTickAndDrawWidgetsFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FSlateTraceApplicationTickAndDrawWidgetsFields::GetUid(void)'
      ::__l2::Uid = FSlateTraceApplicationTickAndDrawWidgetsFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FSlateTraceApplicationTickAndDrawWidgetsFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FSlateTraceApplicationTickAndDrawWidgetsFields::GetUid(void)'
        ::__l2::Uid,0x2d);
  return __return_storage_ptr__;
}

// Enter<FSlateTraceInvalidationCallstackFields> @ 1425b47a0

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FSlateTraceInvalidationCallstackFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FSlateTraceInvalidationCallstackFields::GetUid(void)'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FSlateTraceInvalidationCallstackFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FSlateTraceInvalidationCallstackFields::GetUid(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FSlateTraceInvalidationCallstackFields::GetUid(void)'::
      __l2::Uid = FSlateTraceInvalidationCallstackFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FSlateTraceInvalidationCallstackFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FSlateTraceInvalidationCallstackFields::GetUid(void)'::
        __l2::Uid,8);
  return __return_storage_ptr__;
}

// Enter<FSlateTraceRemoveWidgetFields> @ 1425b4820

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FSlateTraceRemoveWidgetFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FSlateTraceRemoveWidgetFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FSlateTraceRemoveWidgetFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FSlateTraceRemoveWidgetFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FSlateTraceRemoveWidgetFields::GetUid(void)'::__l2::Uid =
           FSlateTraceRemoveWidgetFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FSlateTraceRemoveWidgetFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FSlateTraceRemoveWidgetFields::GetUid(void)'::__l2::Uid
        ,0x10);
  return __return_storage_ptr__;
}

// Enter<FSlateTraceRootChildOrderInvalidatedFields> @ 1425b48a0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FSlateTraceRootChildOrderInvalidatedFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FSlateTraceRootChildOrderInvalidatedFields::GetUid(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FSlateTraceRootChildOrderInvalidatedFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FSlateTraceRootChildOrderInvalidatedFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FSlateTraceRootChildOrderInvalidatedFields::GetUid(void)'
      ::__l2::Uid = FSlateTraceRootChildOrderInvalidatedFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FSlateTraceRootChildOrderInvalidatedFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FSlateTraceRootChildOrderInvalidatedFields::GetUid(void)'
        ::__l2::Uid,0x18);
  return __return_storage_ptr__;
}

// Enter<FSlateTraceRootInvalidatedFields> @ 1425b4920

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FSlateTraceRootInvalidatedFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FSlateTraceRootInvalidatedFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FSlateTraceRootInvalidatedFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FSlateTraceRootInvalidatedFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FSlateTraceRootInvalidatedFields::GetUid(void)'::__l2::
      Uid = FSlateTraceRootInvalidatedFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FSlateTraceRootInvalidatedFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FSlateTraceRootInvalidatedFields::GetUid(void)'::__l2::
        Uid,0x18);
  return __return_storage_ptr__;
}

// Enter<FSlateTraceWidgetInfoFields> @ 1425b49a0

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FSlateTraceWidgetInfoFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::GetUid(void)'::__l2::Uid =
           FSlateTraceWidgetInfoFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FSlateTraceWidgetInfoFields::GetUid(void)'::__l2::Uid,
        0x10);
  return __return_storage_ptr__;
}

// Enter<FSlateTraceWidgetInvalidatedFields> @ 1425b4a20

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FSlateTraceWidgetInvalidatedFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FSlateTraceWidgetInvalidatedFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInvalidatedFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInvalidatedFields::GetUid(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FSlateTraceWidgetInvalidatedFields::GetUid(void)'::__l2::
      Uid = FSlateTraceWidgetInvalidatedFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FSlateTraceWidgetInvalidatedFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FSlateTraceWidgetInvalidatedFields::GetUid(void)'::__l2
        ::Uid,0x19);
  return __return_storage_ptr__;
}

// Enter<FSlateTraceWidgetUpdateStepsFields> @ 1425b4aa0

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FSlateTraceWidgetUpdateStepsFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FSlateTraceWidgetUpdateStepsFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FSlateTraceWidgetUpdateStepsFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FSlateTraceWidgetUpdateStepsFields::GetUid(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FSlateTraceWidgetUpdateStepsFields::GetUid(void)'::__l2::
      Uid = FSlateTraceWidgetUpdateStepsFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FSlateTraceWidgetUpdateStepsFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FSlateTraceWidgetUpdateStepsFields::GetUid(void)'::__l2
        ::Uid,0);
  return __return_storage_ptr__;
}

// Enter<FSlateTraceWidgetUpdatedFields> @ 1425b4b20

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FSlateTraceWidgetUpdatedFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FSlateTraceWidgetUpdatedFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FSlateTraceWidgetUpdatedFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FSlateTraceWidgetUpdatedFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FSlateTraceWidgetUpdatedFields::GetUid(void)'::__l2::Uid
           = FSlateTraceWidgetUpdatedFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FSlateTraceWidgetUpdatedFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FSlateTraceWidgetUpdatedFields::GetUid(void)'::__l2::
        Uid,0x1d);
  return __return_storage_ptr__;
}

