// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 9

// _Compressed_pair<void_(__cdecl*)(void*___ptr64),absl::lts_20240722::base_internal::ThreadIdentity*___ptr64,0><void_(__cdecl*const&___ptr64)(void*___ptr64),absl::lts_20240722::base_internal::ThreadIdentity*___ptr64&___ptr64> @ 150244c00

/* public: __cdecl std::_Compressed_pair<void (__cdecl*)(void * __ptr64),struct
   absl::lts_20240722::base_internal::ThreadIdentity * __ptr64,0>::_Compressed_pair<void
   (__cdecl*)(void * __ptr64),struct absl::lts_20240722::base_internal::ThreadIdentity *
   __ptr64,0><void (__cdecl*const & __ptr64)(void * __ptr64),struct
   absl::lts_20240722::base_internal::ThreadIdentity * __ptr64 & __ptr64>(struct
   std::_One_then_variadic_args_t,void (__cdecl*const & __ptr64)(void * __ptr64),struct
   absl::lts_20240722::base_internal::ThreadIdentity * __ptr64 & __ptr64) __ptr64 */

_Compressed_pair<void_(__cdecl*)(void*___ptr64),absl::lts_20240722::base_internal::ThreadIdentity*___ptr64,0>
* __thiscall
std::
_Compressed_pair<void_(__cdecl*)(void*___ptr64),absl::lts_20240722::base_internal::ThreadIdentity*___ptr64,0>
::
_Compressed_pair<void_(__cdecl*)(void*___ptr64),absl::lts_20240722::base_internal::ThreadIdentity*___ptr64,0><void_(__cdecl*const&___ptr64)(void*___ptr64),absl::lts_20240722::base_internal::ThreadIdentity*___ptr64&___ptr64>
          (_Compressed_pair<void_(__cdecl*)(void*___ptr64),absl::lts_20240722::base_internal::ThreadIdentity*___ptr64,0>
           *this,_One_then_variadic_args_t param_1,_func_void_void_ptr **param_2,
          ThreadIdentity **param_3)

{
  *(_func_void_void_ptr **)this = *param_2;
  *(ThreadIdentity **)(this + 8) = *param_3;
  return this;
}

// unique_ptr<absl::lts_20240722::base_internal::ThreadIdentity,void_(__cdecl*)(void*___ptr64)><void_(__cdecl*)(void*___ptr64),0> @ 150244c20

/* public: __cdecl std::unique_ptr<struct absl::lts_20240722::base_internal::ThreadIdentity,void
   (__cdecl*)(void * __ptr64)>::unique_ptr<struct
   absl::lts_20240722::base_internal::ThreadIdentity,void (__cdecl*)(void * __ptr64)><void
   (__cdecl*)(void * __ptr64),0>(struct absl::lts_20240722::base_internal::ThreadIdentity *
   __ptr64,void (__cdecl*const & __ptr64)(void * __ptr64)) __ptr64 */

unique_ptr<absl::lts_20240722::base_internal::ThreadIdentity,void_(__cdecl*)(void*___ptr64)> *
__thiscall
std::unique_ptr<absl::lts_20240722::base_internal::ThreadIdentity,void_(__cdecl*)(void*___ptr64)>::
unique_ptr<absl::lts_20240722::base_internal::ThreadIdentity,void_(__cdecl*)(void*___ptr64)><void_(__cdecl*)(void*___ptr64),0>
          (unique_ptr<absl::lts_20240722::base_internal::ThreadIdentity,void_(__cdecl*)(void*___ptr64)>
           *this,ThreadIdentity *param_1,_func_void_void_ptr **param_2)

{
  *(_func_void_void_ptr **)this = *param_2;
  *(ThreadIdentity **)(this + 8) = param_1;
  return this;
}

// forward<absl::lts_20240722::base_internal::ThreadIdentity*___ptr64&___ptr64> @ 150244c40

/* struct absl::lts_20240722::base_internal::ThreadIdentity * __ptr64 & __ptr64 __cdecl
   std::forward<struct absl::lts_20240722::base_internal::ThreadIdentity * __ptr64 & __ptr64>(struct
   absl::lts_20240722::base_internal::ThreadIdentity * __ptr64 & __ptr64) */

ThreadIdentity ** __cdecl
std::forward<absl::lts_20240722::base_internal::ThreadIdentity*___ptr64&___ptr64>
          (ThreadIdentity **param_1)

{
  return param_1;
}

// forward<void_(__cdecl*const&___ptr64)(void*___ptr64)> @ 150244c50

/* void (__cdecl*const & __ptr64 __cdecl std::forward<void (__cdecl*const & __ptr64)(void *
   __ptr64)>(void (__cdecl*const & __ptr64)(void * __ptr64)))(void * __ptr64) */

_func_void_void_ptr ** __cdecl
std::forward<void_(__cdecl*const&___ptr64)(void*___ptr64)>(_func_void_void_ptr **param_1)

{
  return param_1;
}

// ~unique_ptr<absl::lts_20240722::base_internal::ThreadIdentity,void_(__cdecl*)(void*___ptr64)> @ 150244c60

/* public: __cdecl std::unique_ptr<struct absl::lts_20240722::base_internal::ThreadIdentity,void
   (__cdecl*)(void * __ptr64)>::~unique_ptr<struct
   absl::lts_20240722::base_internal::ThreadIdentity,void (__cdecl*)(void * __ptr64)>(void) __ptr64
    */

void __thiscall
std::unique_ptr<absl::lts_20240722::base_internal::ThreadIdentity,void_(__cdecl*)(void*___ptr64)>::
~unique_ptr<absl::lts_20240722::base_internal::ThreadIdentity,void_(__cdecl*)(void*___ptr64)>
          (unique_ptr<absl::lts_20240722::base_internal::ThreadIdentity,void_(__cdecl*)(void*___ptr64)>
           *this)

{
  if (*(longlong *)(this + 8) != 0) {
    (**(code **)this)();
  }
  return;
}

// ClearCurrentThreadIdentity @ 150244c80

/* void __cdecl absl::lts_20240722::base_internal::ClearCurrentThreadIdentity(void) */

void __cdecl absl::lts_20240722::base_internal::ClearCurrentThreadIdentity(void)

{
  *(undefined8 *)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9e78) = 0;
  return;
}

// SetCurrentThreadIdentity @ 150244cb0

/* void __cdecl absl::lts_20240722::base_internal::SetCurrentThreadIdentity(struct
   absl::lts_20240722::base_internal::ThreadIdentity * __ptr64,void (__cdecl*)(void * __ptr64)) */

void __cdecl
absl::lts_20240722::base_internal::SetCurrentThreadIdentity
          (ThreadIdentity *param_1,_func_void_void_ptr *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(uint *)(lVar1 + 0x9e90) & 1) == 0) {
    *(uint *)(lVar1 + 0x9e90) = *(uint *)(lVar1 + 0x9e90) | 1;
    *(_func_void_void_ptr **)(lVar1 + 0x9e80) = param_2;
    *(ThreadIdentity **)(lVar1 + 0x9e88) = param_1;
    __tlregdtor(FUN_150476e30);
  }
  *(ThreadIdentity **)(lVar1 + 0x9e78) = param_1;
  return;
}

// _Get_first @ 150244d20

/* public: void (__cdecl*& __ptr64 __cdecl std::_Compressed_pair<void (__cdecl*)(void *
   __ptr64),struct absl::lts_20240722::base_internal::ThreadIdentity * __ptr64,0>::_Get_first(void)
   __ptr64)(void * __ptr64) */

_func_void_void_ptr ** __thiscall
std::
_Compressed_pair<void_(__cdecl*)(void*___ptr64),absl::lts_20240722::base_internal::ThreadIdentity*___ptr64,0>
::_Get_first(_Compressed_pair<void_(__cdecl*)(void*___ptr64),absl::lts_20240722::base_internal::ThreadIdentity*___ptr64,0>
             *this)

{
  return (_func_void_void_ptr **)this;
}

// FUN_150476e30 @ 150476e30

void FUN_150476e30(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(longlong *)(lVar1 + 0x9e88) != 0) {
    (**(code **)(lVar1 + 0x9e80))();
  }
  return;
}

