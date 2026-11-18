// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 18

// FUN_14145a860 @ 14145a860

void FUN_14145a860(void)

{
  HMODULE hModule;
  
  hModule = GetModuleHandleA("ntdll.dll");
  DAT_155407758 = GetProcAddress(hModule,"RtlCaptureStackBackTrace");
  return;
}

// FUN_1501d9260 @ 1501d9260

ushort FUN_1501d9260(undefined8 param_1,void *param_2,int param_3,int param_4,undefined8 param_5,
                    undefined4 *param_6)

{
  ushort uVar1;
  
  uVar1 = 0;
  if (((DAT_155407758 != (code *)0x0) && (-1 < param_4)) && (uVar1 = 0, -1 < param_3)) {
    uVar1 = (*DAT_155407758)(param_4 + 2,param_3,param_1,0);
  }
  memset(param_2,0,(ulonglong)uVar1 << 2);
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
  }
  return uVar1;
}

// FUN_1501d92e0 @ 1501d92e0

ushort FUN_1501d92e0(undefined8 param_1,void *param_2,int param_3,int param_4,undefined8 param_5,
                    undefined4 *param_6)

{
  ushort uVar1;
  
  uVar1 = 0;
  if (((DAT_155407758 != (code *)0x0) && (-1 < param_4)) && (uVar1 = 0, -1 < param_3)) {
    uVar1 = (*DAT_155407758)(param_4 + 2,param_3,param_1,0);
  }
  memset(param_2,0,(ulonglong)uVar1 << 2);
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
  }
  return uVar1;
}

// FUN_1501d9360 @ 1501d9360

undefined2
FUN_1501d9360(undefined8 param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5,
             undefined4 *param_6)

{
  undefined2 uVar1;
  
  uVar1 = 0;
  if (((DAT_155407758 != (code *)0x0) && (-1 < param_4)) && (-1 < param_3)) {
    uVar1 = (*DAT_155407758)(param_4 + 2,param_3,param_1,0);
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
  }
  return uVar1;
}

// FUN_1501d93b0 @ 1501d93b0

undefined2
FUN_1501d93b0(undefined8 param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5,
             undefined4 *param_6)

{
  undefined2 uVar1;
  
  uVar1 = 0;
  if (((DAT_155407758 != (code *)0x0) && (-1 < param_4)) && (-1 < param_3)) {
    uVar1 = (*DAT_155407758)(param_4 + 2,param_3,param_1,0);
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
  }
  return uVar1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<int_(__cdecl*)(void*___ptr64*___ptr64,int*___ptr64,int,int,void_const*___ptr64,int*___ptr64)>_> @ 1501d9400

/* __int64 volatile * __ptr64 __cdecl std::_Atomic_address_as<__int64,struct std::_Atomic_padded<int
   (__cdecl*)(void * __ptr64 * __ptr64,int * __ptr64,int,int,void const * __ptr64,int * __ptr64)>
   >(struct std::_Atomic_padded<int (__cdecl*)(void * __ptr64 * __ptr64,int * __ptr64,int,int,void
   const * __ptr64,int * __ptr64)> & __ptr64) */

__int64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<int_(__cdecl*)(void*___ptr64*___ptr64,int*___ptr64,int,int,void_const*___ptr64,int*___ptr64)>_>
          (_Atomic_padded<int_(__cdecl*)(void*___ptr64*___ptr64,int*___ptr64,int,int,void_const*___ptr64,int*___ptr64)>
           *param_1)

{
  return (__int64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<int_(__cdecl*)(void*___ptr64*___ptr64,int*___ptr64,int,int,void_const*___ptr64,int*___ptr64)>_> @ 1501d9410

/* __int64 const volatile * __ptr64 __cdecl std::_Atomic_address_as<__int64,struct
   std::_Atomic_padded<int (__cdecl*)(void * __ptr64 * __ptr64,int * __ptr64,int,int,void const *
   __ptr64,int * __ptr64)> >(struct std::_Atomic_padded<int (__cdecl*)(void * __ptr64 * __ptr64,int
   * __ptr64,int,int,void const * __ptr64,int * __ptr64)> const & __ptr64) */

__int64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<int_(__cdecl*)(void*___ptr64*___ptr64,int*___ptr64,int,int,void_const*___ptr64,int*___ptr64)>_>
          (_Atomic_padded<int_(__cdecl*)(void*___ptr64*___ptr64,int*___ptr64,int,int,void_const*___ptr64,int*___ptr64)>
           *param_1)

{
  return (__int64 *)param_1;
}

// _Atomic_reinterpret_as<__int64,int_(__cdecl*)(void*___ptr64*___ptr64,int*___ptr64,int,int,void_const*___ptr64,int*___ptr64)> @ 1501d9420

/* __int64 __cdecl std::_Atomic_reinterpret_as<__int64,int (__cdecl*)(void * __ptr64 * __ptr64,int *
   __ptr64,int,int,void const * __ptr64,int * __ptr64)>(int (__cdecl*const & __ptr64)(void * __ptr64
   * __ptr64,int * __ptr64,int,int,void const * __ptr64,int * __ptr64)) */

__int64 __cdecl
std::
_Atomic_reinterpret_as<__int64,int_(__cdecl*)(void*___ptr64*___ptr64,int*___ptr64,int,int,void_const*___ptr64,int*___ptr64)>
          (_func_int_void_ptr_ptr_int_ptr_int_int_void_ptr_int_ptr **param_1)

{
  return (__int64)*param_1;
}

// DefaultStackUnwinder @ 1501d9430

/* int __cdecl absl::lts_20240722::DefaultStackUnwinder(void * __ptr64 * __ptr64,int *
   __ptr64,int,int,void const * __ptr64,int * __ptr64) */

int __cdecl
absl::lts_20240722::DefaultStackUnwinder
          (void **param_1,int *param_2,int param_3,int param_4,void *param_5,int *param_6)

{
  int iVar1;
  code *pcVar2;
  
  if (param_2 == (int *)0x0) {
    pcVar2 = FUN_1501d93b0;
    if (param_5 != (void *)0x0) {
      pcVar2 = FUN_1501d9360;
    }
  }
  else {
    pcVar2 = FUN_1501d9260;
    if (param_5 == (void *)0x0) {
      pcVar2 = FUN_1501d92e0;
    }
  }
  iVar1 = (*pcVar2)();
  return iVar1;
}

// GetStackFrames @ 1501d94a0

/* int __cdecl absl::lts_20240722::GetStackFrames(void * __ptr64 * __ptr64,int * __ptr64,int,int) */

int __cdecl absl::lts_20240722::GetStackFrames(void **param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  code *pcVar2;
  
  pcVar2 = FUN_1501d92e0;
  if (DAT_155407760 != (code *)0x0) {
    pcVar2 = DAT_155407760;
  }
  iVar1 = (*pcVar2)();
  return iVar1;
}

// GetStackFramesWithContext @ 1501d94e0

/* int __cdecl absl::lts_20240722::GetStackFramesWithContext(void * __ptr64 * __ptr64,int *
   __ptr64,int,int,void const * __ptr64,int * __ptr64) */

int __cdecl
absl::lts_20240722::GetStackFramesWithContext
          (void **param_1,int *param_2,int param_3,int param_4,void *param_5,int *param_6)

{
  int iVar1;
  code *pcVar2;
  
  pcVar2 = FUN_1501d9260;
  if (DAT_155407760 != (code *)0x0) {
    pcVar2 = DAT_155407760;
  }
  iVar1 = (*pcVar2)();
  return iVar1;
}

// GetStackTrace @ 1501d9510

/* int __cdecl absl::lts_20240722::GetStackTrace(void * __ptr64 * __ptr64,int,int) */

int __cdecl absl::lts_20240722::GetStackTrace(void **param_1,int param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  
  pcVar2 = FUN_1501d93b0;
  if (DAT_155407760 != (code *)0x0) {
    pcVar2 = DAT_155407760;
  }
  iVar1 = (*pcVar2)(param_1,0,param_2,param_3 + 1,0,0);
  return iVar1;
}

// GetStackTraceWithContext @ 1501d9550

/* int __cdecl absl::lts_20240722::GetStackTraceWithContext(void * __ptr64 * __ptr64,int,int,void
   const * __ptr64,int * __ptr64) */

int __cdecl
absl::lts_20240722::GetStackTraceWithContext
          (void **param_1,int param_2,int param_3,void *param_4,int *param_5)

{
  int iVar1;
  code *pcVar2;
  
  pcVar2 = FUN_1501d9360;
  if (DAT_155407760 != (code *)0x0) {
    pcVar2 = DAT_155407760;
  }
  iVar1 = (*pcVar2)(param_1,0,param_2,param_3 + 1,param_4,param_5);
  return iVar1;
}

// SetStackUnwinder @ 1501d95a0

/* void __cdecl absl::lts_20240722::SetStackUnwinder(int (__cdecl*)(void * __ptr64 * __ptr64,int *
   __ptr64,int,int,void const * __ptr64,int * __ptr64)) */

void __cdecl
absl::lts_20240722::SetStackUnwinder
          (_func_int_void_ptr_ptr_int_ptr_int_int_void_ptr_int_ptr *param_1)

{
  DAT_155407760 = param_1;
  return;
}

// StackTraceWorksForTest @ 1501d95c0

/* bool __cdecl absl::lts_20240722::debugging_internal::StackTraceWorksForTest(void) */

bool __cdecl absl::lts_20240722::debugging_internal::StackTraceWorksForTest(void)

{
  return false;
}

// load @ 1501d95d0

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: int (__cdecl*__cdecl std::_Atomic_storage<int (__cdecl*)(void * __ptr64 * __ptr64,int *
   __ptr64,int,int,void const * __ptr64,int * __ptr64),8>::load(enum std::memory_order)const
   __ptr64)(void * __ptr64 * __ptr64,int * __ptr64,int,int,void const * __ptr64,int * __ptr64) */

_func_int_void_ptr_ptr_int_ptr_int_int_void_ptr_int_ptr * __thiscall
std::
_Atomic_storage<int_(__cdecl*)(void*___ptr64*___ptr64,int*___ptr64,int,int,void_const*___ptr64,int*___ptr64),8>
::load(_Atomic_storage<int_(__cdecl*)(void*___ptr64*___ptr64,int*___ptr64,int,int,void_const*___ptr64,int*___ptr64),8>
       *this,memory_order param_1)

{
  return *(_func_int_void_ptr_ptr_int_ptr_int_int_void_ptr_int_ptr **)this;
}

// store @ 1501d95f0

/* public: void __cdecl std::_Atomic_storage<int (__cdecl*)(void * __ptr64 * __ptr64,int *
   __ptr64,int,int,void const * __ptr64,int * __ptr64),8>::store(int (__cdecl*const)(void * __ptr64
   * __ptr64,int * __ptr64,int,int,void const * __ptr64,int * __ptr64)) __ptr64 */

void __thiscall
std::
_Atomic_storage<int_(__cdecl*)(void*___ptr64*___ptr64,int*___ptr64,int,int,void_const*___ptr64,int*___ptr64),8>
::store(_Atomic_storage<int_(__cdecl*)(void*___ptr64*___ptr64,int*___ptr64,int,int,void_const*___ptr64,int*___ptr64),8>
        *this,_func_int_void_ptr_ptr_int_ptr_int_int_void_ptr_int_ptr *param_1)

{
  LOCK();
  *(_func_int_void_ptr_ptr_int_ptr_int_int_void_ptr_int_ptr **)this = param_1;
  UNLOCK();
  return;
}

// store @ 1501d9600

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: void __cdecl std::_Atomic_storage<int (__cdecl*)(void * __ptr64 * __ptr64,int *
   __ptr64,int,int,void const * __ptr64,int * __ptr64),8>::store(int (__cdecl*const)(void * __ptr64
   * __ptr64,int * __ptr64,int,int,void const * __ptr64,int * __ptr64),enum std::memory_order)
   __ptr64 */

void __thiscall
std::
_Atomic_storage<int_(__cdecl*)(void*___ptr64*___ptr64,int*___ptr64,int,int,void_const*___ptr64,int*___ptr64),8>
::store(_Atomic_storage<int_(__cdecl*)(void*___ptr64*___ptr64,int*___ptr64,int,int,void_const*___ptr64,int*___ptr64),8>
        *this,_func_int_void_ptr_ptr_int_ptr_int_int_void_ptr_int_ptr *param_1,memory_order param_2)

{
  switch(param_2) {
  case memory_order_relaxed:
    *(_func_int_void_ptr_ptr_int_ptr_int_int_void_ptr_int_ptr **)this = param_1;
    return;
  default:
    LOCK();
    *(_func_int_void_ptr_ptr_int_ptr_int_int_void_ptr_int_ptr **)this = param_1;
    UNLOCK();
    return;
  case memory_order_release:
    *(_func_int_void_ptr_ptr_int_ptr_int_int_void_ptr_int_ptr **)this = param_1;
    return;
  }
}

