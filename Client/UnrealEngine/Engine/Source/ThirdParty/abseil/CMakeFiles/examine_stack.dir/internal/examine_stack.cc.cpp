// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: abseil
// Functions: 9

// FUN_1501d1930 @ 1501d1930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1501d1930(code *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 local_a0;
  char local_98 [112];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8 = 0x12;
  local_a0 = param_3;
  snprintf(local_98,100,"%s@ %*p\n");
  (*param_1)(local_98,param_2);
  return;
}

// FUN_1501d19a0 @ 1501d19a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1501d19a0(code *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 local_b0;
  int local_a8;
  char local_98 [112];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b0 = param_3;
  if (param_4 < 1) {
    local_b8 = 0x12;
    snprintf(local_98,100,"%s@ %*p  (unknown)\n");
  }
  else {
    local_b8 = 0x12;
    local_a8 = param_4;
    snprintf(local_98,100,"%s@ %*p  %9d\n");
  }
  (*param_1)(local_98,param_2);
  return;
}

// FUN_1501d1a40 @ 1501d1a40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1501d1a40(code *param_1,undefined8 param_2,undefined8 param_3,void *param_4,int param_5)

{
  bool bVar1;
  char *pcVar2;
  undefined1 auStack_878 [32];
  undefined4 local_858;
  undefined8 local_850;
  char *local_848;
  char *local_840;
  char local_838 [1024];
  char local_438 [1024];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_878;
  bVar1 = absl::lts_20240722::Symbolize(param_4,local_438,0x400);
  pcVar2 = local_438;
  if (!bVar1) {
    pcVar2 = "(unknown)";
  }
  local_850 = param_3;
  if (param_5 < 1) {
    local_858 = 0x12;
    local_848 = pcVar2;
    snprintf(local_838,0x400,"%s@ %*p  (unknown)  %s\n");
  }
  else {
    local_848 = (char *)CONCAT44(local_848._4_4_,param_5);
    local_858 = 0x12;
    local_840 = pcVar2;
    snprintf(local_838,0x400,"%s@ %*p  %9d  %s\n");
  }
  (*param_1)(local_838,param_2);
  return;
}

// DumpPCAndFrameSizesAndStackTrace @ 1501d1b30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* void __cdecl absl::lts_20240722::debugging_internal::DumpPCAndFrameSizesAndStackTrace(void *
   __ptr64 const,void * __ptr64 const * __ptr64 const,int * __ptr64 const,int,int,bool,void
   (__cdecl*)(char const * __ptr64,void * __ptr64),void * __ptr64) */

void __cdecl
absl::lts_20240722::debugging_internal::DumpPCAndFrameSizesAndStackTrace
          (void *param_1,void **param_2,int *param_3,int param_4,int param_5,bool param_6,
          _func_void_char_ptr_void_ptr *param_7,void *param_8)

{
  bool bVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined1 auStack_8f8 [32];
  char *local_8d8;
  char *local_8d0;
  char *local_8c8;
  char local_8b8 [112];
  char local_848 [1024];
  char local_448 [1024];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_8f8;
  if (param_1 != (void *)0x0) {
    if (param_6) {
      bVar1 = Symbolize(param_1,local_848,0x400);
      local_8c8 = local_848;
      if (!bVar1) {
        local_8c8 = "(unknown)";
      }
      local_8d8 = (char *)CONCAT44(local_8d8._4_4_,0x12);
      local_8d0 = param_1;
      snprintf(local_448,0x400,"%s@ %*p  (unknown)  %s\n");
      (*param_7)(local_448,param_8);
    }
    else {
      local_8d8 = "PC: ";
      FUN_1501d19a0(param_7,param_8,param_1,0);
    }
  }
  if (0 < param_4) {
    if (param_6) {
      uVar2 = (ulonglong)(uint)param_4;
      do {
        local_8d0 = "    ";
        local_8d8 = (char *)CONCAT44(local_8d8._4_4_,*param_3);
        FUN_1501d1a40(param_7,param_8,*param_2,(longlong)*param_2 + -1);
        param_3 = param_3 + 1;
        param_2 = param_2 + 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    else if (param_4 != 0) {
      lVar3 = 0;
      do {
        local_8d0 = param_2[lVar3];
        if (param_3[lVar3] < 1) {
          local_8d8 = (char *)CONCAT44(local_8d8._4_4_,0x12);
          snprintf(local_8b8,100,"%s@ %*p  (unknown)\n");
        }
        else {
          local_8c8 = (char *)CONCAT44(local_8c8._4_4_,param_3[lVar3]);
          local_8d8 = (char *)CONCAT44(local_8d8._4_4_,0x12);
          snprintf(local_8b8,100,"%s@ %*p  %9d\n");
        }
        (*param_7)(local_8b8,param_8);
        lVar3 = lVar3 + 1;
      } while (lVar3 < param_4);
    }
  }
  if (0 < param_5) {
    snprintf(local_8b8,100,"    @ ... and at least %d more frames\n");
    (*param_7)(local_8b8,param_8);
  }
  return;
}

// FUN_1501d1d30 @ 1501d1d30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1501d1d30(code *param_1,undefined8 param_2,void *param_3)

{
  bool bVar1;
  char *pcVar2;
  undefined1 auStack_878 [32];
  undefined4 local_858;
  void *local_850;
  char *local_848;
  char local_838 [1024];
  char local_438 [1024];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_878;
  pcVar2 = "(unknown)";
  bVar1 = absl::lts_20240722::Symbolize((void *)((longlong)param_3 + -1),local_838,0x400);
  if (!bVar1) {
    bVar1 = absl::lts_20240722::Symbolize(param_3,local_838,0x400);
    if (!bVar1) goto LAB_1501d1d97;
  }
  pcVar2 = local_838;
LAB_1501d1d97:
  local_858 = 0x12;
  local_850 = param_3;
  local_848 = pcVar2;
  snprintf(local_438,0x400,"%s@ %*p  %s\n");
  (*param_1)(local_438,param_2);
  return;
}

// DumpStackTrace @ 1501d1e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* void __cdecl absl::lts_20240722::debugging_internal::DumpStackTrace(int,int,bool,void
   (__cdecl*)(char const * __ptr64,void * __ptr64),void * __ptr64) */

void __cdecl
absl::lts_20240722::debugging_internal::DumpStackTrace
          (int param_1,int param_2,bool param_3,_func_void_char_ptr_void_ptr *param_4,void *param_5)

{
  void *pvVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  void **ppvVar5;
  char *pcVar6;
  ulonglong uVar7;
  undefined1 auStack_af8 [32];
  undefined4 local_ad8;
  void *local_ad0;
  char *local_ac8;
  void *local_ab8 [64];
  char local_8b8 [112];
  char local_848 [1024];
  char local_448 [1024];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_af8;
  if (0x40 < param_2) {
    param_2 = 0x40;
  }
  uVar3 = GetStackTrace(local_ab8,param_2,param_1 + 1);
  if (0 < (int)uVar3) {
    if (param_3) {
      ppvVar5 = local_ab8;
      uVar7 = (ulonglong)uVar3;
      do {
        pvVar1 = *ppvVar5;
        pcVar6 = "(unknown)";
        bVar2 = Symbolize((void *)((longlong)pvVar1 + -1),local_848,0x400);
        if ((bVar2) || (bVar2 = Symbolize(pvVar1,local_848,0x400), bVar2)) {
          pcVar6 = local_848;
        }
        local_ad8 = 0x12;
        local_ad0 = pvVar1;
        local_ac8 = pcVar6;
        snprintf(local_448,0x400,"%s@ %*p  %s\n");
        (*param_4)(local_448,param_5);
        ppvVar5 = ppvVar5 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    else if (0 < (int)uVar3) {
      lVar4 = 0;
      do {
        local_ad0 = local_ab8[lVar4];
        local_ad8 = 0x12;
        snprintf(local_8b8,100,"%s@ %*p\n");
        (*param_4)(local_8b8,param_5);
        lVar4 = lVar4 + 1;
      } while (lVar4 < (int)uVar3);
    }
  }
  if (DAT_1554076f0 != (code *)0x0) {
    (*DAT_1554076f0)(local_ab8,uVar3,param_4,param_5);
  }
  return;
}

// GetDebugStackTraceHook @ 1501d1fd0

/* void (__cdecl*__cdecl absl::lts_20240722::debugging_internal::GetDebugStackTraceHook(void))(void
   * __ptr64 const * __ptr64 const,int,void (__cdecl*)(char const * __ptr64,void * __ptr64),void *
   __ptr64) */

_func_void_void_ptr_ptr_int__func_void_char_ptr_void_ptr_ptr_void_ptr * __cdecl
absl::lts_20240722::debugging_internal::GetDebugStackTraceHook(void)

{
  return DAT_1554076f0;
}

// GetProgramCounter @ 1501d1fe0

/* void * __ptr64 __cdecl absl::lts_20240722::debugging_internal::GetProgramCounter(void * __ptr64
   const) */

void * __cdecl absl::lts_20240722::debugging_internal::GetProgramCounter(void *param_1)

{
  return (void *)0x0;
}

// RegisterDebugStackTraceHook @ 1501d1ff0

/* void __cdecl absl::lts_20240722::debugging_internal::RegisterDebugStackTraceHook(void
   (__cdecl*)(void * __ptr64 const * __ptr64 const,int,void (__cdecl*)(char const * __ptr64,void *
   __ptr64),void * __ptr64)) */

void __cdecl
absl::lts_20240722::debugging_internal::RegisterDebugStackTraceHook
          (_func_void_void_ptr_ptr_int__func_void_char_ptr_void_ptr_ptr_void_ptr *param_1)

{
  DAT_1554076f0 = param_1;
  return;
}

