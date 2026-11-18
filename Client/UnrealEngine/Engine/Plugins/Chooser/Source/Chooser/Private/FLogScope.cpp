// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chooser
// Functions: 2

// Enter<FChooserChooserEvaluationFields> @ 14a877650

TLogScope<0> * __cdecl
UE::Trace::Private::FLogScope::Enter<FChooserChooserEvaluationFields>
          (TLogScope<0> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FChooserChooserEvaluationFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FChooserChooserEvaluationFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FChooserChooserEvaluationFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FChooserChooserEvaluationFields::GetUid(void)'::__l2::Uid
           = FChooserChooserEvaluationFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FChooserChooserEvaluationFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FChooserChooserEvaluationFields::GetUid(void)'::__l2::
        Uid,0x1c);
  return __return_storage_ptr__;
}

// Enter<FChooserChooserValueFields> @ 14a8776d0

TLogScope<1> * __cdecl
UE::Trace::Private::FLogScope::Enter<FChooserChooserValueFields>
          (TLogScope<1> *__return_storage_ptr__)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_unsigned_int___cdecl_FChooserChooserValueFields::GetUid(void)'::__l2::
      _thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_unsigned_int___cdecl_FChooserChooserValueFields::GetUid(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_unsigned_int___cdecl_FChooserChooserValueFields::GetUid(void)'::__l2::
        _thread_safe_static_guard_0__ == -1) {
      `public:_static_unsigned_int___cdecl_FChooserChooserValueFields::GetUid(void)'::__l2::Uid =
           FChooserChooserValueFields::Initialize();
      _Init_thread_footer(&`public:_static_unsigned_int___cdecl_FChooserChooserValueFields::GetUid(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  Enter((FLogScope *)__return_storage_ptr__,
        `public:_static_unsigned_int___cdecl_FChooserChooserValueFields::GetUid(void)'::__l2::Uid,
        0x18);
  return __return_storage_ptr__;
}

