// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 18

// Enter<FChaosLockAcquireBeginFields> @ 1436f3b60

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FChaosLockAcquireBeginFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FChaosLockAcquireBeginFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FChaosLockAcquireBeginFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FChaosLockAcquireBeginFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FChaosLockAcquireBeginFields::GetUid(void)'::__l2::Uid =
           FChaosLockAcquireBeginFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FChaosLockAcquireBeginFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterImpl<0>(__return_storage_ptr__,
               `public:_static_unsigned_int___cdecl_FChaosLockAcquireBeginFields::GetUid(void)'::
               __l2::Uid,9);
  return __return_storage_ptr__;
}

// Enter<FChaosLockAcquireEndFields> @ 1436f3be0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FChaosLockAcquireEndFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FChaosLockAcquireEndFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FChaosLockAcquireEndFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FChaosLockAcquireEndFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FChaosLockAcquireEndFields::GetUid(void)'::__l2::Uid =
           FChaosLockAcquireEndFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FChaosLockAcquireEndFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterImpl<0>(__return_storage_ptr__,
               `public:_static_unsigned_int___cdecl_FChaosLockAcquireEndFields::GetUid(void)'::__l2
               ::Uid,8);
  return __return_storage_ptr__;
}

// Enter<FChaosLockAcquiredFields> @ 1436f3c60

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FChaosLockAcquiredFields>(TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FChaosLockAcquiredFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FChaosLockAcquiredFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FChaosLockAcquiredFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FChaosLockAcquiredFields::GetUid(void)'::__l2::Uid =
           FChaosLockAcquiredFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FChaosLockAcquiredFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  EnterImpl<0>(__return_storage_ptr__,
               `public:_static_unsigned_int___cdecl_FChaosLockAcquiredFields::GetUid(void)'::__l2::
               Uid,8);
  return __return_storage_ptr__;
}

// Enter<FChaosVDLoggerChaosVDBinaryDataContentFields> @ 143711bb0

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FChaosVDLoggerChaosVDBinaryDataContentFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDBinaryDataContentFields::GetUid(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDBinaryDataContentFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDBinaryDataContentFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDBinaryDataContentFields::GetUid(void)'
      ::__l2::Uid = FChaosVDLoggerChaosVDBinaryDataContentFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDBinaryDataContentFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDBinaryDataContentFields::GetUid(void)'
        ::__l2::Uid,0xc);
  return __return_storage_ptr__;
}

// Enter<FChaosVDLoggerChaosVDBinaryDataEndFields> @ 143711c30

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FChaosVDLoggerChaosVDBinaryDataEndFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDBinaryDataEndFields::GetUid(void)'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDBinaryDataEndFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDBinaryDataEndFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDBinaryDataEndFields::GetUid(void)'::
      __l2::Uid = FChaosVDLoggerChaosVDBinaryDataEndFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDBinaryDataEndFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDBinaryDataEndFields::GetUid(void)'
        ::__l2::Uid,0xc);
  return __return_storage_ptr__;
}

// Enter<FChaosVDLoggerChaosVDBinaryDataStartFields> @ 143711cb0

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FChaosVDLoggerChaosVDBinaryDataStartFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDBinaryDataStartFields::GetUid(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDBinaryDataStartFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDBinaryDataStartFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDBinaryDataStartFields::GetUid(void)'
      ::__l2::Uid = FChaosVDLoggerChaosVDBinaryDataStartFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDBinaryDataStartFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDBinaryDataStartFields::GetUid(void)'
        ::__l2::Uid,0x15);
  return __return_storage_ptr__;
}

// Enter<FChaosVDLoggerChaosVDNetworkTickOffsetFields> @ 143711d30

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FChaosVDLoggerChaosVDNetworkTickOffsetFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNetworkTickOffsetFields::GetUid(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNetworkTickOffsetFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNetworkTickOffsetFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNetworkTickOffsetFields::GetUid(void)'
      ::__l2::Uid = FChaosVDLoggerChaosVDNetworkTickOffsetFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNetworkTickOffsetFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNetworkTickOffsetFields::GetUid(void)'
        ::__l2::Uid,8);
  return __return_storage_ptr__;
}

// Enter<FChaosVDLoggerChaosVDNonSolverLocationFields> @ 143711db0

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FChaosVDLoggerChaosVDNonSolverLocationFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNonSolverLocationFields::GetUid(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNonSolverLocationFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNonSolverLocationFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNonSolverLocationFields::GetUid(void)'
      ::__l2::Uid = FChaosVDLoggerChaosVDNonSolverLocationFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNonSolverLocationFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNonSolverLocationFields::GetUid(void)'
        ::__l2::Uid,0x20);
  return __return_storage_ptr__;
}

// Enter<FChaosVDLoggerChaosVDNonSolverTransformFields> @ 143711e30

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FChaosVDLoggerChaosVDNonSolverTransformFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNonSolverTransformFields::GetUid(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNonSolverTransformFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNonSolverTransformFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNonSolverTransformFields::GetUid(void)'
      ::__l2::Uid = FChaosVDLoggerChaosVDNonSolverTransformFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNonSolverTransformFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDNonSolverTransformFields::GetUid(void)'
        ::__l2::Uid,0x58);
  return __return_storage_ptr__;
}

// Enter<FChaosVDLoggerChaosVDParticleDestroyedFields> @ 143711eb0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FChaosVDLoggerChaosVDParticleDestroyedFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDParticleDestroyedFields::GetUid(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDParticleDestroyedFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDParticleDestroyedFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDParticleDestroyedFields::GetUid(void)'
      ::__l2::Uid = FChaosVDLoggerChaosVDParticleDestroyedFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDParticleDestroyedFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDParticleDestroyedFields::GetUid(void)'
        ::__l2::Uid,0x10);
  return __return_storage_ptr__;
}

// Enter<FChaosVDLoggerChaosVDRolledBackDataIDFields> @ 143711f30

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FChaosVDLoggerChaosVDRolledBackDataIDFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDRolledBackDataIDFields::GetUid(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDRolledBackDataIDFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDRolledBackDataIDFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDRolledBackDataIDFields::GetUid(void)'
      ::__l2::Uid = FChaosVDLoggerChaosVDRolledBackDataIDFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDRolledBackDataIDFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDRolledBackDataIDFields::GetUid(void)'
        ::__l2::Uid,4);
  return __return_storage_ptr__;
}

// Enter<FChaosVDLoggerChaosVDSolverFrameEndFields> @ 143711fb0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FChaosVDLoggerChaosVDSolverFrameEndFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverFrameEndFields::GetUid(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverFrameEndFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverFrameEndFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverFrameEndFields::GetUid(void)'
      ::__l2::Uid = FChaosVDLoggerChaosVDSolverFrameEndFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverFrameEndFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverFrameEndFields::GetUid(void)'
        ::__l2::Uid,0xc);
  return __return_storage_ptr__;
}

// Enter<FChaosVDLoggerChaosVDSolverFrameStartFields> @ 143712030

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FChaosVDLoggerChaosVDSolverFrameStartFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverFrameStartFields::GetUid(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverFrameStartFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverFrameStartFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverFrameStartFields::GetUid(void)'
      ::__l2::Uid = FChaosVDLoggerChaosVDSolverFrameStartFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverFrameStartFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverFrameStartFields::GetUid(void)'
        ::__l2::Uid,0x12);
  return __return_storage_ptr__;
}

// Enter<FChaosVDLoggerChaosVDSolverSimulationSpaceFields> @ 1437120b0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FChaosVDLoggerChaosVDSolverSimulationSpaceFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::GetUid(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::GetUid(void)'
      ::__l2::Uid = FChaosVDLoggerChaosVDSolverSimulationSpaceFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverSimulationSpaceFields::GetUid(void)'
        ::__l2::Uid,0x44);
  return __return_storage_ptr__;
}

// Enter<FChaosVDLoggerChaosVDSolverStepEndFields> @ 143712130

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FChaosVDLoggerChaosVDSolverStepEndFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverStepEndFields::GetUid(void)'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverStepEndFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverStepEndFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverStepEndFields::GetUid(void)'::
      __l2::Uid = FChaosVDLoggerChaosVDSolverStepEndFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverStepEndFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverStepEndFields::GetUid(void)'
        ::__l2::Uid,0x10);
  return __return_storage_ptr__;
}

// Enter<FChaosVDLoggerChaosVDSolverStepStartFields> @ 1437121b0

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FChaosVDLoggerChaosVDSolverStepStartFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverStepStartFields::GetUid(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverStepStartFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverStepStartFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverStepStartFields::GetUid(void)'
      ::__l2::Uid = FChaosVDLoggerChaosVDSolverStepStartFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverStepStartFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDSolverStepStartFields::GetUid(void)'
        ::__l2::Uid,0xc);
  return __return_storage_ptr__;
}

// Enter<FChaosVDLoggerChaosVDTraceRelevancyVolumeFields> @ 143712230

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FChaosVDLoggerChaosVDTraceRelevancyVolumeFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDTraceRelevancyVolumeFields::GetUid(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDTraceRelevancyVolumeFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDTraceRelevancyVolumeFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDTraceRelevancyVolumeFields::GetUid(void)'
      ::__l2::Uid = FChaosVDLoggerChaosVDTraceRelevancyVolumeFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDTraceRelevancyVolumeFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDTraceRelevancyVolumeFields::GetUid(void)'
        ::__l2::Uid,0x30);
  return __return_storage_ptr__;
}

// Enter<FChaosVDLoggerChaosVDUsesAutoRTFMFields> @ 1437122b0

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FChaosVDLoggerChaosVDUsesAutoRTFMFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDUsesAutoRTFMFields::GetUid(void)'::
      __l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDUsesAutoRTFMFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDUsesAutoRTFMFields::GetUid(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDUsesAutoRTFMFields::GetUid(void)'::
      __l2::Uid = FChaosVDLoggerChaosVDUsesAutoRTFMFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDUsesAutoRTFMFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FChaosVDLoggerChaosVDUsesAutoRTFMFields::GetUid(void)'
        ::__l2::Uid,1);
  return __return_storage_ptr__;
}

