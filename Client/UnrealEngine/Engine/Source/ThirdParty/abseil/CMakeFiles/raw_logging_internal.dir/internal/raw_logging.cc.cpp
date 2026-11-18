// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 31

// FUN_14f8e82a0 @ 14f8e82a0

undefined1
FUN_14f8e82a0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  FUN_14f8e84b0(param_4,param_5,"[%s : %d] RAW: ",param_2,param_3);
  return 1;
}

// DummyFunction @ 14f8e82d0

/* private: static void __cdecl absl::lts_20240722::base_internal::AtomicHook<void (__cdecl*)(char
   const * __ptr64,int,char const * __ptr64,char const * __ptr64,char const *
   __ptr64)>::DummyFunction(char const * __ptr64,int,char const * __ptr64,char const * __ptr64,char
   const * __ptr64) */

void __cdecl
absl::lts_20240722::base_internal::
AtomicHook<void_(__cdecl*)(char_const*___ptr64,int,char_const*___ptr64,char_const*___ptr64,char_const*___ptr64)>
::DummyFunction(char *param_1,int param_2,char *param_3,char *param_4,char *param_5)

{
  return;
}

// FUN_14f8e82e0 @ 14f8e82e0

void FUN_14f8e82e0(LogSeverity param_1,char *param_2,int param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  
  puVar1 = param_4;
  if (0xf < (ulonglong)param_4[3]) {
    puVar1 = (undefined8 *)*param_4;
  }
                    /* WARNING: Subroutine does not return */
  absl::lts_20240722::raw_log_internal::RawLog
            (param_1,param_2,param_3,"%.*s",*(undefined4 *)(param_4 + 2),puVar1);
}

// operator()<char_const*___ptr64&___ptr64,int&___ptr64,char_(&___ptr64)[3000],char_const*___ptr64_const&___ptr64,char*___ptr64> @ 14f8e8320

/* public: void __cdecl absl::lts_20240722::base_internal::AtomicHook<void (__cdecl*)(char const *
   __ptr64,int,char const * __ptr64,char const * __ptr64,char const * __ptr64)>::operator()<char
   const * __ptr64 & __ptr64,int & __ptr64,char (& __ptr64)[3000],char const * __ptr64 const &
   __ptr64,char * __ptr64>(char const * __ptr64 & __ptr64,int & __ptr64,char (& __ptr64)[3000],char
   const * __ptr64 const & __ptr64,char * __ptr64 && __ptr64)const __ptr64 */

void __thiscall
absl::lts_20240722::base_internal::
AtomicHook<void_(__cdecl*)(char_const*___ptr64,int,char_const*___ptr64,char_const*___ptr64,char_const*___ptr64)>
::
operator()<char_const*___ptr64&___ptr64,int&___ptr64,char_(&___ptr64)[3000],char_const*___ptr64_const&___ptr64,char*___ptr64>
          (AtomicHook<void_(__cdecl*)(char_const*___ptr64,int,char_const*___ptr64,char_const*___ptr64,char_const*___ptr64)>
           *this,char **param_1,int *param_2,char *param_3,char **param_4,char **param_5)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)this;
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(this + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00014f8e835f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_1,*param_2,param_3,*param_4);
  return;
}

// operator()<absl::lts_20240722::LogSeverity&___ptr64,char_const*___ptr64&___ptr64,int&___ptr64,char*___ptr64*___ptr64,int*___ptr64> @ 14f8e8370

/* public: bool __cdecl absl::lts_20240722::base_internal::AtomicHook<bool (__cdecl*)(enum
   absl::lts_20240722::LogSeverity,char const * __ptr64,int,char * __ptr64 * __ptr64,int *
   __ptr64)>::operator()<enum absl::lts_20240722::LogSeverity & __ptr64,char const * __ptr64 &
   __ptr64,int & __ptr64,char * __ptr64 * __ptr64,int * __ptr64>(enum
   absl::lts_20240722::LogSeverity & __ptr64,char const * __ptr64 & __ptr64,int & __ptr64,char *
   __ptr64 * __ptr64 && __ptr64,int * __ptr64 && __ptr64)const __ptr64 */

bool __thiscall
absl::lts_20240722::base_internal::
AtomicHook<bool_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,char*___ptr64*___ptr64,int*___ptr64)>
::
operator()<absl::lts_20240722::LogSeverity&___ptr64,char_const*___ptr64&___ptr64,int&___ptr64,char*___ptr64*___ptr64,int*___ptr64>
          (AtomicHook<bool_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,char*___ptr64*___ptr64,int*___ptr64)>
           *this,LogSeverity *param_1,char **param_2,int *param_3,char ***param_4,int **param_5)

{
  undefined1 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)this;
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(this + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00014f8e83af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(*param_1,*param_2,*param_3,*param_4);
  return (bool)uVar1;
}

// addressof<__int64> @ 14f8e83c0

/* __int64 * __ptr64 __cdecl std::addressof<__int64>(__int64 & __ptr64) */

__int64 * __cdecl std::addressof<__int64>(__int64 *param_1)

{
  return param_1;
}

// forward<char_(&___ptr64)[3000]> @ 14f8e83d0

/* char (& __ptr64 __cdecl std::forward<char (& __ptr64)[3000]>(char (& __ptr64)[3000]))[3000] */

char * __cdecl std::forward<char_(&___ptr64)[3000]>(char *param_1)

{
  return param_1;
}

// forward<char*___ptr64> @ 14f8e83e0

/* char * __ptr64 && __ptr64 __cdecl std::forward<char * __ptr64>(char * __ptr64 & __ptr64) */

char ** __cdecl std::forward<char*___ptr64>(char **param_1)

{
  return param_1;
}

// forward<int*___ptr64> @ 14f8e83f0

/* int * __ptr64 && __ptr64 __cdecl std::forward<int * __ptr64>(int * __ptr64 & __ptr64) */

int ** __cdecl std::forward<int*___ptr64>(int **param_1)

{
  return param_1;
}

// forward<char*___ptr64*___ptr64> @ 14f8e8400

/* char * __ptr64 * __ptr64 && __ptr64 __cdecl std::forward<char * __ptr64 * __ptr64>(char * __ptr64
   * __ptr64 & __ptr64) */

char *** __cdecl std::forward<char*___ptr64*___ptr64>(char ***param_1)

{
  return param_1;
}

// AsyncSignalSafeWriteError @ 14f8e8410

/* void __cdecl absl::lts_20240722::raw_log_internal::AsyncSignalSafeWriteError(char const *
   __ptr64,unsigned __int64) */

void __cdecl
absl::lts_20240722::raw_log_internal::AsyncSignalSafeWriteError(char *param_1,__uint64 param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 != 0) {
    piVar2 = _errno();
    iVar1 = *piVar2;
    _write(2,param_1,(uint)param_2);
    piVar2 = _errno();
    *piVar2 = iVar1;
  }
  return;
}

// DoLoad @ 14f8e8470

/* private: void (__cdecl*__cdecl absl::lts_20240722::base_internal::AtomicHook<void (__cdecl*)(char
   const * __ptr64,int,char const * __ptr64,char const * __ptr64,char const *
   __ptr64)>::DoLoad(void)const __ptr64)(char const * __ptr64,int,char const * __ptr64,char const *
   __ptr64,char const * __ptr64) */

_func_void_char_ptr_int_char_ptr_char_ptr_char_ptr * __thiscall
absl::lts_20240722::base_internal::
AtomicHook<void_(__cdecl*)(char_const*___ptr64,int,char_const*___ptr64,char_const*___ptr64,char_const*___ptr64)>
::DoLoad(AtomicHook<void_(__cdecl*)(char_const*___ptr64,int,char_const*___ptr64,char_const*___ptr64,char_const*___ptr64)>
         *this)

{
  _func_void_char_ptr_int_char_ptr_char_ptr_char_ptr *p_Var1;
  
  p_Var1 = *(_func_void_char_ptr_int_char_ptr_char_ptr_char_ptr **)this;
  if (p_Var1 == (_func_void_char_ptr_int_char_ptr_char_ptr_char_ptr *)0x0) {
    p_Var1 = *(_func_void_char_ptr_int_char_ptr_char_ptr_char_ptr **)(this + 8);
  }
  return p_Var1;
}

// DoLoad @ 14f8e8490

/* private: bool (__cdecl*__cdecl absl::lts_20240722::base_internal::AtomicHook<bool (__cdecl*)(enum
   absl::lts_20240722::LogSeverity,char const * __ptr64,int,char * __ptr64 * __ptr64,int *
   __ptr64)>::DoLoad(void)const __ptr64)(enum absl::lts_20240722::LogSeverity,char const *
   __ptr64,int,char * __ptr64 * __ptr64,int * __ptr64) */

_func_bool_LogSeverity_char_ptr_int_char_ptr_ptr_int_ptr * __thiscall
absl::lts_20240722::base_internal::
AtomicHook<bool_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,char*___ptr64*___ptr64,int*___ptr64)>
::DoLoad(AtomicHook<bool_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,char*___ptr64*___ptr64,int*___ptr64)>
         *this)

{
  _func_bool_LogSeverity_char_ptr_int_char_ptr_ptr_int_ptr *p_Var1;
  
  p_Var1 = *(_func_bool_LogSeverity_char_ptr_int_char_ptr_ptr_int_ptr **)this;
  if (p_Var1 == (_func_bool_LogSeverity_char_ptr_int_char_ptr_ptr_int_ptr *)0x0) {
    p_Var1 = *(_func_bool_LogSeverity_char_ptr_int_char_ptr_ptr_int_ptr **)(this + 8);
  }
  return p_Var1;
}

// FUN_14f8e84b0 @ 14f8e84b0

ulonglong FUN_14f8e84b0(longlong *param_1,int *param_2,char *param_3,undefined8 param_4)

{
  int iVar1;
  ulonglong _MaxCount;
  undefined4 extraout_var;
  undefined8 local_res20;
  
  _MaxCount = (ulonglong)*param_2;
  if (-1 < *param_2) {
    local_res20 = param_4;
    iVar1 = vsnprintf((char *)*param_1,_MaxCount,param_3,(va_list)&local_res20);
    _MaxCount = CONCAT44(extraout_var,iVar1);
    if ((-1 < iVar1) && (iVar1 <= *param_2)) {
      *param_2 = *param_2 - iVar1;
      *param_1 = *param_1 + (longlong)iVar1;
      return CONCAT71((int7)(int3)((uint)iVar1 >> 8),1);
    }
  }
  return _MaxCount & 0xffffffffffffff00;
}

// DoStore @ 14f8e8510

/* private: bool __cdecl absl::lts_20240722::base_internal::AtomicHook<void (__cdecl*)(char const *
   __ptr64,int,char const * __ptr64,char const * __ptr64,char const * __ptr64)>::DoStore(void
   (__cdecl*)(char const * __ptr64,int,char const * __ptr64,char const * __ptr64,char const *
   __ptr64)) __ptr64 */

bool __thiscall
absl::lts_20240722::base_internal::
AtomicHook<void_(__cdecl*)(char_const*___ptr64,int,char_const*___ptr64,char_const*___ptr64,char_const*___ptr64)>
::DoStore(AtomicHook<void_(__cdecl*)(char_const*___ptr64,int,char_const*___ptr64,char_const*___ptr64,char_const*___ptr64)>
          *this,_func_void_char_ptr_int_char_ptr_char_ptr_char_ptr *param_1)

{
  _func_void_char_ptr_int_char_ptr_char_ptr_char_ptr *p_Var1;
  bool bVar2;
  
  LOCK();
  p_Var1 = *(_func_void_char_ptr_int_char_ptr_char_ptr_char_ptr **)this;
  bVar2 = p_Var1 == (_func_void_char_ptr_int_char_ptr_char_ptr_char_ptr *)0x0;
  if (bVar2) {
    *(_func_void_char_ptr_int_char_ptr_char_ptr_char_ptr **)this = param_1;
    p_Var1 = (_func_void_char_ptr_int_char_ptr_char_ptr_char_ptr *)0x0;
  }
  UNLOCK();
  if ((!bVar2) && (p_Var1 != param_1)) {
    return false;
  }
  return true;
}

// DoStore @ 14f8e8530

/* private: bool __cdecl absl::lts_20240722::base_internal::AtomicHook<void (__cdecl*)(enum
   absl::lts_20240722::LogSeverity,char const * __ptr64,int,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64)>::DoStore(void
   (__cdecl*)(enum absl::lts_20240722::LogSeverity,char const * __ptr64,int,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64)) __ptr64 */

bool __thiscall
absl::lts_20240722::base_internal::
AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
::DoStore(AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
          *this,_func_void_LogSeverity_char_ptr_int_basic_string<char,std::char_traits<char>,std::allocator<char>_>_ptr
                *param_1)

{
  _func_void_LogSeverity_char_ptr_int_basic_string<char,std::char_traits<char>,std::allocator<char>_>_ptr
  *p_Var1;
  bool bVar2;
  
  LOCK();
  p_Var1 = *(_func_void_LogSeverity_char_ptr_int_basic_string<char,std::char_traits<char>,std::allocator<char>_>_ptr
             **)this;
  bVar2 = p_Var1 == (_func_void_LogSeverity_char_ptr_int_basic_string<char,std::char_traits<char>,std::allocator<char>_>_ptr
                     *)0x0;
  if (bVar2) {
    *(_func_void_LogSeverity_char_ptr_int_basic_string<char,std::char_traits<char>,std::allocator<char>_>_ptr
      **)this = param_1;
    p_Var1 = (_func_void_LogSeverity_char_ptr_int_basic_string<char,std::char_traits<char>,std::allocator<char>_>_ptr
              *)0x0;
  }
  UNLOCK();
  if ((!bVar2) && (p_Var1 != param_1)) {
    return false;
  }
  return true;
}

// DoStore @ 14f8e8550

/* private: bool __cdecl absl::lts_20240722::base_internal::AtomicHook<bool (__cdecl*)(enum
   absl::lts_20240722::LogSeverity,char const * __ptr64,int,char * __ptr64 * __ptr64,int *
   __ptr64)>::DoStore(bool (__cdecl*)(enum absl::lts_20240722::LogSeverity,char const *
   __ptr64,int,char * __ptr64 * __ptr64,int * __ptr64)) __ptr64 */

bool __thiscall
absl::lts_20240722::base_internal::
AtomicHook<bool_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,char*___ptr64*___ptr64,int*___ptr64)>
::DoStore(AtomicHook<bool_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,char*___ptr64*___ptr64,int*___ptr64)>
          *this,_func_bool_LogSeverity_char_ptr_int_char_ptr_ptr_int_ptr *param_1)

{
  _func_bool_LogSeverity_char_ptr_int_char_ptr_ptr_int_ptr *p_Var1;
  bool bVar2;
  
  LOCK();
  p_Var1 = *(_func_bool_LogSeverity_char_ptr_int_char_ptr_ptr_int_ptr **)this;
  bVar2 = p_Var1 == (_func_bool_LogSeverity_char_ptr_int_char_ptr_ptr_int_ptr *)0x0;
  if (bVar2) {
    *(_func_bool_LogSeverity_char_ptr_int_char_ptr_ptr_int_ptr **)this = param_1;
    p_Var1 = (_func_bool_LogSeverity_char_ptr_int_char_ptr_ptr_int_ptr *)0x0;
  }
  UNLOCK();
  if ((!bVar2) && (p_Var1 != param_1)) {
    return false;
  }
  return true;
}

// RawLog @ 14f8e8570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* void __cdecl absl::lts_20240722::raw_log_internal::RawLog(enum
   absl::lts_20240722::LogSeverity,char const * __ptr64,int,char const * __ptr64,...) */

void __cdecl
absl::lts_20240722::raw_log_internal::RawLog
          (LogSeverity param_1,char *param_2,int param_3,char *param_4,...)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  longlong lVar6;
  undefined1 auStackY_c58 [32];
  uint local_c28 [2];
  char *local_c20;
  int local_c18 [2];
  va_list local_c10;
  char *local_c08;
  char *local_c00;
  char local_bf8 [3000];
  char local_40 [8];
  ulonglong local_38;
  longlong lVar7;
  
  local_c18[0] = (int)_param_3;
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c58;
  local_c10 = &stack0x00000028;
  local_c20 = local_bf8;
  local_c28[0] = 3000;
  pcVar4 = DAT_154e167f0;
  if (DAT_154e167f0 == (code *)0x0) {
    pcVar4 = (code *)PTR_FUN_154e167f8;
  }
  local_c00 = param_2;
  cVar2 = (*pcVar4)(param_1,param_2,_param_3,&local_c20);
  local_c08 = local_c20;
  if (cVar2 == '\0') goto LAB_14f8e86cf;
  if ((int)local_c28[0] < 0) {
LAB_14f8e866d:
    FUN_14f8e84b0(&local_c20,local_c28,"%s"," ... (message truncated)\n");
  }
  else {
    iVar3 = vsnprintf(local_c20,(longlong)(int)local_c28[0],param_4,local_c10);
    if ((iVar3 < 0) || ((int)local_c28[0] < iVar3)) {
      if (0x1a < local_c28[0]) {
        iVar3 = local_c28[0] - 0x1a;
        local_c28[0] = local_c28[0] - iVar3;
        local_c20 = local_c20 + iVar3;
      }
      goto LAB_14f8e866d;
    }
    local_c28[0] = local_c28[0] - iVar3;
    local_c20 = local_c20 + iVar3;
    FUN_14f8e84b0(&local_c20,local_c28,"\n");
  }
  lVar7 = -1;
  do {
    lVar6 = lVar7 + 1;
    lVar1 = lVar7 + 1;
    lVar7 = lVar6;
  } while (local_bf8[lVar1] != '\0');
  if (lVar6 != 0) {
    piVar5 = _errno();
    iVar3 = *piVar5;
    _write(2,local_bf8,(uint)lVar6);
    piVar5 = _errno();
    *piVar5 = iVar3;
  }
LAB_14f8e86cf:
  if (param_1 != kFatal) {
    return;
  }
  local_c10 = local_40;
  base_internal::
  AtomicHook<void_(__cdecl*)(char_const*___ptr64,int,char_const*___ptr64,char_const*___ptr64,char_const*___ptr64)>
  ::
  operator()<char_const*___ptr64&___ptr64,int&___ptr64,char_(&___ptr64)[3000],char_const*___ptr64_const&___ptr64,char*___ptr64>
            ((AtomicHook<void_(__cdecl*)(char_const*___ptr64,int,char_const*___ptr64,char_const*___ptr64,char_const*___ptr64)>
              *)&DAT_154e16800,&local_c00,local_c18,local_bf8,&local_c08,&local_c10);
                    /* WARNING: Subroutine does not return */
  abort();
}

// FUN_14f8e8750 @ 14f8e8750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14f8e8750(int param_1,char *param_2,int param_3,char *param_4,va_list param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  longlong lVar6;
  undefined1 auStackY_c58 [32];
  uint local_c28 [2];
  char *local_c20;
  int local_c18 [2];
  char *local_c10;
  char *local_c08;
  char *local_c00;
  char local_bf8 [3000];
  char local_40 [8];
  ulonglong local_38;
  longlong lVar7;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c58;
  local_c20 = local_bf8;
  local_c28[0] = 3000;
  pcVar4 = DAT_154e167f0;
  if (DAT_154e167f0 == (code *)0x0) {
    pcVar4 = (code *)PTR_FUN_154e167f8;
  }
  local_c18[0] = param_3;
  local_c10 = param_2;
  cVar2 = (*pcVar4)(param_1,param_2,param_3,&local_c20);
  local_c00 = local_c20;
  if (cVar2 == '\0') goto LAB_14f8e8898;
  if ((int)local_c28[0] < 0) {
LAB_14f8e883e:
    FUN_14f8e84b0(&local_c20,local_c28,"%s"," ... (message truncated)\n");
  }
  else {
    iVar3 = vsnprintf(local_c20,(longlong)(int)local_c28[0],param_4,param_5);
    if ((iVar3 < 0) || ((int)local_c28[0] < iVar3)) {
      if (0x1a < local_c28[0]) {
        iVar3 = local_c28[0] - 0x1a;
        local_c28[0] = local_c28[0] - iVar3;
        local_c20 = local_c20 + iVar3;
      }
      goto LAB_14f8e883e;
    }
    local_c28[0] = local_c28[0] - iVar3;
    local_c20 = local_c20 + iVar3;
    FUN_14f8e84b0(&local_c20,local_c28,"\n");
  }
  lVar7 = -1;
  do {
    lVar6 = lVar7 + 1;
    lVar1 = lVar7 + 1;
    lVar7 = lVar6;
  } while (local_bf8[lVar1] != '\0');
  if (lVar6 != 0) {
    piVar5 = _errno();
    iVar3 = *piVar5;
    _write(2,local_bf8,(uint)lVar6);
    piVar5 = _errno();
    *piVar5 = iVar3;
  }
LAB_14f8e8898:
  if (param_1 == 3) {
    local_c08 = local_40;
    absl::lts_20240722::base_internal::
    AtomicHook<void_(__cdecl*)(char_const*___ptr64,int,char_const*___ptr64,char_const*___ptr64,char_const*___ptr64)>
    ::
    operator()<char_const*___ptr64&___ptr64,int&___ptr64,char_(&___ptr64)[3000],char_const*___ptr64_const&___ptr64,char*___ptr64>
              ((AtomicHook<void_(__cdecl*)(char_const*___ptr64,int,char_const*___ptr64,char_const*___ptr64,char_const*___ptr64)>
                *)&DAT_154e16800,&local_c10,local_c18,local_bf8,&local_c00,&local_c08);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return;
}

// RawLoggingFullySupported @ 14f8e8900

/* bool __cdecl absl::lts_20240722::raw_log_internal::RawLoggingFullySupported(void) */

bool __cdecl absl::lts_20240722::raw_log_internal::RawLoggingFullySupported(void)

{
  return true;
}

// RegisterAbortHook @ 14f8e8910

/* void __cdecl absl::lts_20240722::raw_log_internal::RegisterAbortHook(void (__cdecl*)(char const *
   __ptr64,int,char const * __ptr64,char const * __ptr64,char const * __ptr64)) */

void __cdecl
absl::lts_20240722::raw_log_internal::RegisterAbortHook
          (_func_void_char_ptr_int_char_ptr_char_ptr_char_ptr *param_1)

{
  _func_void_char_ptr_int_char_ptr_char_ptr_char_ptr *p_Var1;
  
  LOCK();
  p_Var1 = param_1;
  if (DAT_154e16800 != (_func_void_char_ptr_int_char_ptr_char_ptr_char_ptr *)0x0) {
    p_Var1 = DAT_154e16800;
  }
  DAT_154e16800 = p_Var1;
  UNLOCK();
  return;
}

// RegisterInternalLogFunction @ 14f8e8930

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void __cdecl absl::lts_20240722::raw_log_internal::RegisterInternalLogFunction(void
   (__cdecl*)(enum absl::lts_20240722::LogSeverity,char const * __ptr64,int,class
   std::basic_string<char,struct std::char_traits<char>,class std::allocator<char> > const &
   __ptr64)) */

void __cdecl
absl::lts_20240722::raw_log_internal::RegisterInternalLogFunction
          (_func_void_LogSeverity_char_ptr_int_basic_string<char,std::char_traits<char>,std::allocator<char>_>_ptr
           *param_1)

{
  _func_void_LogSeverity_char_ptr_int_basic_string<char,std::char_traits<char>,std::allocator<char>_>_ptr
  *p_Var1;
  
  LOCK();
  p_Var1 = param_1;
  if (_internal_log_function !=
      (_func_void_LogSeverity_char_ptr_int_basic_string<char,std::char_traits<char>,std::allocator<char>_>_ptr
       *)0x0) {
    p_Var1 = _internal_log_function;
  }
  _internal_log_function = p_Var1;
  UNLOCK();
  return;
}

// RegisterLogFilterAndPrefixHook @ 14f8e8950

/* void __cdecl absl::lts_20240722::raw_log_internal::RegisterLogFilterAndPrefixHook(bool
   (__cdecl*)(enum absl::lts_20240722::LogSeverity,char const * __ptr64,int,char * __ptr64 *
   __ptr64,int * __ptr64)) */

void __cdecl
absl::lts_20240722::raw_log_internal::RegisterLogFilterAndPrefixHook
          (_func_bool_LogSeverity_char_ptr_int_char_ptr_ptr_int_ptr *param_1)

{
  _func_bool_LogSeverity_char_ptr_int_char_ptr_ptr_int_ptr *p_Var1;
  
  LOCK();
  p_Var1 = param_1;
  if (DAT_154e167f0 != (_func_bool_LogSeverity_char_ptr_int_char_ptr_ptr_int_ptr *)0x0) {
    p_Var1 = DAT_154e167f0;
  }
  DAT_154e167f0 = p_Var1;
  UNLOCK();
  return;
}

// Store @ 14f8e8970

/* public: void __cdecl absl::lts_20240722::base_internal::AtomicHook<void (__cdecl*)(char const *
   __ptr64,int,char const * __ptr64,char const * __ptr64,char const * __ptr64)>::Store(void
   (__cdecl*)(char const * __ptr64,int,char const * __ptr64,char const * __ptr64,char const *
   __ptr64)) __ptr64 */

void __thiscall
absl::lts_20240722::base_internal::
AtomicHook<void_(__cdecl*)(char_const*___ptr64,int,char_const*___ptr64,char_const*___ptr64,char_const*___ptr64)>
::Store(AtomicHook<void_(__cdecl*)(char_const*___ptr64,int,char_const*___ptr64,char_const*___ptr64,char_const*___ptr64)>
        *this,_func_void_char_ptr_int_char_ptr_char_ptr_char_ptr *param_1)

{
  LOCK();
  if (*(longlong *)this == 0) {
    *(_func_void_char_ptr_int_char_ptr_char_ptr_char_ptr **)this = param_1;
  }
  UNLOCK();
  return;
}

// Store @ 14f8e8980

/* public: void __cdecl absl::lts_20240722::base_internal::AtomicHook<void (__cdecl*)(enum
   absl::lts_20240722::LogSeverity,char const * __ptr64,int,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64)>::Store(void (__cdecl*)(enum
   absl::lts_20240722::LogSeverity,char const * __ptr64,int,class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64)) __ptr64 */

void __thiscall
absl::lts_20240722::base_internal::
AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
::Store(AtomicHook<void_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const&___ptr64)>
        *this,_func_void_LogSeverity_char_ptr_int_basic_string<char,std::char_traits<char>,std::allocator<char>_>_ptr
              *param_1)

{
  LOCK();
  if (*(longlong *)this == 0) {
    *(_func_void_LogSeverity_char_ptr_int_basic_string<char,std::char_traits<char>,std::allocator<char>_>_ptr
      **)this = param_1;
  }
  UNLOCK();
  return;
}

// Store @ 14f8e8990

/* public: void __cdecl absl::lts_20240722::base_internal::AtomicHook<bool (__cdecl*)(enum
   absl::lts_20240722::LogSeverity,char const * __ptr64,int,char * __ptr64 * __ptr64,int *
   __ptr64)>::Store(bool (__cdecl*)(enum absl::lts_20240722::LogSeverity,char const *
   __ptr64,int,char * __ptr64 * __ptr64,int * __ptr64)) __ptr64 */

void __thiscall
absl::lts_20240722::base_internal::
AtomicHook<bool_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,char*___ptr64*___ptr64,int*___ptr64)>
::Store(AtomicHook<bool_(__cdecl*)(absl::lts_20240722::LogSeverity,char_const*___ptr64,int,char*___ptr64*___ptr64,int*___ptr64)>
        *this,_func_bool_LogSeverity_char_ptr_int_char_ptr_ptr_int_ptr *param_1)

{
  LOCK();
  if (*(longlong *)this == 0) {
    *(_func_bool_LogSeverity_char_ptr_int_char_ptr_ptr_int_ptr **)this = param_1;
  }
  UNLOCK();
  return;
}

// FUN_14f8e89a0 @ 14f8e89a0

longlong FUN_14f8e89a0(longlong *param_1,uint *param_2,char *param_3,va_list param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = *param_2;
  if ((int)uVar2 < 0) {
    return (ulonglong)(uint7)(int7)(int3)(uVar2 >> 8) << 8;
  }
  iVar1 = vsnprintf((char *)*param_1,(longlong)(int)uVar2,param_3,param_4);
  lVar3 = 1;
  if ((iVar1 < 0) || (uVar2 = *param_2, (int)uVar2 < iVar1)) {
    uVar2 = *param_2;
    lVar3 = 0;
    if (uVar2 < 0x1b) {
      iVar1 = 0;
    }
    else {
      iVar1 = uVar2 - 0x1a;
    }
  }
  *param_2 = uVar2 - iVar1;
  *param_1 = *param_1 + (longlong)iVar1;
  return lVar3;
}

// _Check_load_memory_order @ 14f8e8a10

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* void __cdecl std::_Check_load_memory_order(enum std::memory_order) */

void __cdecl std::_Check_load_memory_order(memory_order param_1)

{
  return;
}

// _Combine_cas_memory_orders @ 14f8e8a20

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* enum std::memory_order __cdecl std::_Combine_cas_memory_orders(enum std::memory_order,enum
   std::memory_order) */

memory_order __cdecl std::_Combine_cas_memory_orders(memory_order param_1,memory_order param_2)

{
  return *(memory_order *)
          ((longlong)
           &`enum_std::memory_order___cdecl_std::_Combine_cas_memory_orders(std::memory_order,std::memory_order)'
            ::__l2::_Combined_memory_orders +
          ((longlong)(int)param_2 + (longlong)(int)param_1 * 6) * 4);
}

// compare_exchange_strong @ 14f8e8a40

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: bool __cdecl std::_Atomic_storage<__int64,8>::compare_exchange_strong(__int64 &
   __ptr64,__int64,enum std::memory_order) __ptr64 */

bool __thiscall
std::_Atomic_storage<__int64,8>::compare_exchange_strong
          (_Atomic_storage<__int64,8> *this,__int64 *param_1,__int64 param_2,memory_order param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar1 = *param_1;
  LOCK();
  lVar2 = (this->_Storage)._Value;
  bVar3 = lVar1 == lVar2;
  if (bVar3) {
    (this->_Storage)._Value = param_2;
    lVar2 = lVar1;
  }
  UNLOCK();
  if (!bVar3) {
    *param_1 = lVar2;
    return false;
  }
  return true;
}

// compare_exchange_strong @ 14f8e8a60

/* WARNING: Enum "memory_order": Some values do not have unique names */
/* public: bool __cdecl std::atomic<__int64>::compare_exchange_strong(__int64 & __ptr64,__int64,enum
   std::memory_order,enum std::memory_order) __ptr64 */

bool __thiscall
std::atomic<__int64>::compare_exchange_strong
          (atomic<__int64> *this,__int64 *param_1,__int64 param_2,memory_order param_3,
          memory_order param_4)

{
  atomic<__int64> aVar1;
  atomic<__int64> aVar2;
  bool bVar3;
  
  aVar1 = (atomic<__int64>)*param_1;
  LOCK();
  aVar2 = *this;
  bVar3 = aVar1 == aVar2;
  if (bVar3) {
    *this = (atomic<__int64>)param_2;
    aVar2 = aVar1;
  }
  UNLOCK();
  if (!bVar3) {
    *param_1 = (__int64)aVar2;
    return false;
  }
  return true;
}

