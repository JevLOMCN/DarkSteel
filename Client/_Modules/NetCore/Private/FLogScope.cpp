// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 20

// Enter<FNetTraceConnectionClosedEventFields> @ 1441cc7e0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FNetTraceConnectionClosedEventFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FNetTraceConnectionClosedEventFields::GetUid(void)'::__l2
      ::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FNetTraceConnectionClosedEventFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FNetTraceConnectionClosedEventFields::GetUid(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FNetTraceConnectionClosedEventFields::GetUid(void)'::__l2
      ::Uid = FNetTraceConnectionClosedEventFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FNetTraceConnectionClosedEventFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FNetTraceConnectionClosedEventFields::GetUid(void)'::
        __l2::Uid,3);
  return __return_storage_ptr__;
}

// Enter<FNetTraceConnectionCreatedEventFields> @ 1441cc860

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FNetTraceConnectionCreatedEventFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FNetTraceConnectionCreatedEventFields::GetUid(void)'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FNetTraceConnectionCreatedEventFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FNetTraceConnectionCreatedEventFields::GetUid(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FNetTraceConnectionCreatedEventFields::GetUid(void)'::
      __l2::Uid = FNetTraceConnectionCreatedEventFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FNetTraceConnectionCreatedEventFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FNetTraceConnectionCreatedEventFields::GetUid(void)'::
        __l2::Uid,3);
  return __return_storage_ptr__;
}

// Enter<FNetTraceConnectionStateUpdatedEventFields> @ 1441cc8e0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FNetTraceConnectionStateUpdatedEventFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FNetTraceConnectionStateUpdatedEventFields::GetUid(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FNetTraceConnectionStateUpdatedEventFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FNetTraceConnectionStateUpdatedEventFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FNetTraceConnectionStateUpdatedEventFields::GetUid(void)'
      ::__l2::Uid = FNetTraceConnectionStateUpdatedEventFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FNetTraceConnectionStateUpdatedEventFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FNetTraceConnectionStateUpdatedEventFields::GetUid(void)'
        ::__l2::Uid,4);
  return __return_storage_ptr__;
}

// Enter<FNetTraceConnectionUpdatedEventFields> @ 1441cc960

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FNetTraceConnectionUpdatedEventFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FNetTraceConnectionUpdatedEventFields::GetUid(void)'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FNetTraceConnectionUpdatedEventFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FNetTraceConnectionUpdatedEventFields::GetUid(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FNetTraceConnectionUpdatedEventFields::GetUid(void)'::
      __l2::Uid = FNetTraceConnectionUpdatedEventFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FNetTraceConnectionUpdatedEventFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FNetTraceConnectionUpdatedEventFields::GetUid(void)'::
        __l2::Uid,3);
  return __return_storage_ptr__;
}

// Enter<FNetTraceFrameStatsCounterEventFields> @ 1441cc9e0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FNetTraceFrameStatsCounterEventFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FNetTraceFrameStatsCounterEventFields::GetUid(void)'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FNetTraceFrameStatsCounterEventFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FNetTraceFrameStatsCounterEventFields::GetUid(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FNetTraceFrameStatsCounterEventFields::GetUid(void)'::
      __l2::Uid = FNetTraceFrameStatsCounterEventFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FNetTraceFrameStatsCounterEventFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FNetTraceFrameStatsCounterEventFields::GetUid(void)'::
        __l2::Uid,0x11);
  return __return_storage_ptr__;
}

// Enter<FNetTraceInitEventFields> @ 1441cca60

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FNetTraceInitEventFields>(TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FNetTraceInitEventFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FNetTraceInitEventFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FNetTraceInitEventFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FNetTraceInitEventFields::GetUid(void)'::__l2::Uid =
           FNetTraceInitEventFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FNetTraceInitEventFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FNetTraceInitEventFields::GetUid(void)'::__l2::Uid,0x10
       );
  return __return_storage_ptr__;
}

// Enter<FNetTraceInstanceDestroyedEventFields> @ 1441ccae0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FNetTraceInstanceDestroyedEventFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FNetTraceInstanceDestroyedEventFields::GetUid(void)'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FNetTraceInstanceDestroyedEventFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FNetTraceInstanceDestroyedEventFields::GetUid(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FNetTraceInstanceDestroyedEventFields::GetUid(void)'::
      __l2::Uid = FNetTraceInstanceDestroyedEventFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FNetTraceInstanceDestroyedEventFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FNetTraceInstanceDestroyedEventFields::GetUid(void)'::
        __l2::Uid,1);
  return __return_storage_ptr__;
}

// Enter<FNetTraceInstanceUpdatedEventFields> @ 1441ccb60

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FNetTraceInstanceUpdatedEventFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FNetTraceInstanceUpdatedEventFields::GetUid(void)'::__l2
      ::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FNetTraceInstanceUpdatedEventFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FNetTraceInstanceUpdatedEventFields::GetUid(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FNetTraceInstanceUpdatedEventFields::GetUid(void)'::__l2
      ::Uid = FNetTraceInstanceUpdatedEventFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FNetTraceInstanceUpdatedEventFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FNetTraceInstanceUpdatedEventFields::GetUid(void)'::
        __l2::Uid,2);
  return __return_storage_ptr__;
}

// Enter<FNetTraceNameEventFields> @ 1441ccbe0

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FNetTraceNameEventFields>(TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FNetTraceNameEventFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FNetTraceNameEventFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FNetTraceNameEventFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FNetTraceNameEventFields::GetUid(void)'::__l2::Uid =
           FNetTraceNameEventFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FNetTraceNameEventFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterNoSync((FLogScope *)__return_storage_ptr__,
              `public:_static_unsigned_int___cdecl_FNetTraceNameEventFields::GetUid(void)'::__l2::
              Uid,4);
  return __return_storage_ptr__;
}

// Enter<FNetTraceObjectCreatedEventFields> @ 1441ccc60

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FNetTraceObjectCreatedEventFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FNetTraceObjectCreatedEventFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FNetTraceObjectCreatedEventFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FNetTraceObjectCreatedEventFields::GetUid(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FNetTraceObjectCreatedEventFields::GetUid(void)'::__l2::
      Uid = FNetTraceObjectCreatedEventFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FNetTraceObjectCreatedEventFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FNetTraceObjectCreatedEventFields::GetUid(void)'::__l2
        ::Uid,0x19);
  return __return_storage_ptr__;
}

// Enter<FNetTraceObjectDestroyedEventFields> @ 1441ccce0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FNetTraceObjectDestroyedEventFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FNetTraceObjectDestroyedEventFields::GetUid(void)'::__l2
      ::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FNetTraceObjectDestroyedEventFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FNetTraceObjectDestroyedEventFields::GetUid(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FNetTraceObjectDestroyedEventFields::GetUid(void)'::__l2
      ::Uid = FNetTraceObjectDestroyedEventFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FNetTraceObjectDestroyedEventFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FNetTraceObjectDestroyedEventFields::GetUid(void)'::
        __l2::Uid,9);
  return __return_storage_ptr__;
}

// Enter<FNetTraceObjectExistsEventFields> @ 1441ccd60

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FNetTraceObjectExistsEventFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FNetTraceObjectExistsEventFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FNetTraceObjectExistsEventFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FNetTraceObjectExistsEventFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FNetTraceObjectExistsEventFields::GetUid(void)'::__l2::
      Uid = FNetTraceObjectExistsEventFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FNetTraceObjectExistsEventFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterNoSync((FLogScope *)__return_storage_ptr__,
              `public:_static_unsigned_int___cdecl_FNetTraceObjectExistsEventFields::GetUid(void)'::
              __l2::Uid,0x19);
  return __return_storage_ptr__;
}

// Enter<FNetTraceObjectPolledEventFields> @ 1441ccde0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FNetTraceObjectPolledEventFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FNetTraceObjectPolledEventFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FNetTraceObjectPolledEventFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FNetTraceObjectPolledEventFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FNetTraceObjectPolledEventFields::GetUid(void)'::__l2::
      Uid = FNetTraceObjectPolledEventFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FNetTraceObjectPolledEventFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterNoSync((FLogScope *)__return_storage_ptr__,
              `public:_static_unsigned_int___cdecl_FNetTraceObjectPolledEventFields::GetUid(void)'::
              __l2::Uid,0x12);
  return __return_storage_ptr__;
}

// Enter<FNetTraceObjectQuantizedEventFields> @ 1441cce60

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FNetTraceObjectQuantizedEventFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FNetTraceObjectQuantizedEventFields::GetUid(void)'::__l2
      ::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FNetTraceObjectQuantizedEventFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FNetTraceObjectQuantizedEventFields::GetUid(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FNetTraceObjectQuantizedEventFields::GetUid(void)'::__l2
      ::Uid = FNetTraceObjectQuantizedEventFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FNetTraceObjectQuantizedEventFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FNetTraceObjectQuantizedEventFields::GetUid(void)'::
        __l2::Uid,0x11);
  return __return_storage_ptr__;
}

// Enter<FNetTraceObjectWrittenEventFields> @ 1441ccee0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FNetTraceObjectWrittenEventFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FNetTraceObjectWrittenEventFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FNetTraceObjectWrittenEventFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FNetTraceObjectWrittenEventFields::GetUid(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FNetTraceObjectWrittenEventFields::GetUid(void)'::__l2::
      Uid = FNetTraceObjectWrittenEventFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FNetTraceObjectWrittenEventFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FNetTraceObjectWrittenEventFields::GetUid(void)'::__l2
        ::Uid,0x11);
  return __return_storage_ptr__;
}

// Enter<FNetTracePacketContentEventFields> @ 1441ccf60

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FNetTracePacketContentEventFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FNetTracePacketContentEventFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FNetTracePacketContentEventFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FNetTracePacketContentEventFields::GetUid(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FNetTracePacketContentEventFields::GetUid(void)'::__l2::
      Uid = FNetTracePacketContentEventFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FNetTracePacketContentEventFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FNetTracePacketContentEventFields::GetUid(void)'::__l2
        ::Uid,4);
  return __return_storage_ptr__;
}

// Enter<FNetTracePacketDroppedEventFields> @ 1441ccfe0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FNetTracePacketDroppedEventFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FNetTracePacketDroppedEventFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FNetTracePacketDroppedEventFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FNetTracePacketDroppedEventFields::GetUid(void)'::__l2
        ::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FNetTracePacketDroppedEventFields::GetUid(void)'::__l2::
      Uid = FNetTracePacketDroppedEventFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FNetTracePacketDroppedEventFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FNetTracePacketDroppedEventFields::GetUid(void)'::__l2
        ::Uid,0x10);
  return __return_storage_ptr__;
}

// Enter<FNetTracePacketEventFields> @ 1441cd060

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FNetTracePacketEventFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FNetTracePacketEventFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FNetTracePacketEventFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FNetTracePacketEventFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FNetTracePacketEventFields::GetUid(void)'::__l2::Uid =
           FNetTracePacketEventFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FNetTracePacketEventFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FNetTracePacketEventFields::GetUid(void)'::__l2::Uid,
        0x14);
  return __return_storage_ptr__;
}

// Enter<FNetTracePacketStatsCounterEventFields> @ 1441cd0e0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FNetTracePacketStatsCounterEventFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FNetTracePacketStatsCounterEventFields::GetUid(void)'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FNetTracePacketStatsCounterEventFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FNetTracePacketStatsCounterEventFields::GetUid(void)'::
        __l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FNetTracePacketStatsCounterEventFields::GetUid(void)'::
      __l2::Uid = FNetTracePacketStatsCounterEventFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FNetTracePacketStatsCounterEventFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FNetTracePacketStatsCounterEventFields::GetUid(void)'::
        __l2::Uid,0xb);
  return __return_storage_ptr__;
}

// Enter<FNetTraceSubObjectEventFields> @ 1441cd160

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FNetTraceSubObjectEventFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FNetTraceSubObjectEventFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FNetTraceSubObjectEventFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FNetTraceSubObjectEventFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FNetTraceSubObjectEventFields::GetUid(void)'::__l2::Uid =
           FNetTraceSubObjectEventFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FNetTraceSubObjectEventFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterNoSync((FLogScope *)__return_storage_ptr__,
              `public:_static_unsigned_int___cdecl_FNetTraceSubObjectEventFields::GetUid(void)'::
              __l2::Uid,0x11);
  return __return_storage_ptr__;
}

