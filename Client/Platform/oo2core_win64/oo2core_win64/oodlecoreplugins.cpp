// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 19

// OodleCore_Plugin_MallocAligned_Default @ 14f327120

void * __cdecl OodleCore_Plugin_MallocAligned_Default(long64 param_1,int param_2)

{
  HANDLE hHeap;
  LPVOID pvVar1;
  void *pvVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_2;
  hHeap = GetProcessHeap();
  pvVar1 = HeapAlloc(hHeap,0,param_1 + 7 + lVar3);
  if (pvVar1 == (LPVOID)0x0) {
    return (void *)0x0;
  }
  pvVar2 = (void *)(lVar3 + 7 + (longlong)pvVar1 & -lVar3);
  *(LPVOID *)((longlong)pvVar2 + -8) = pvVar1;
  return pvVar2;
}

// OodleCore_Plugin_Free_Default @ 14f327180

void __cdecl OodleCore_Plugin_Free_Default(void *param_1)

{
  HANDLE hHeap;
  
  hHeap = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x00014f3271a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(hHeap,0,*(LPVOID *)((longlong)param_1 + -8));
  return;
}

// OodleCore_Plugin_Printf_Default @ 14f3271c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl OodleCore_Plugin_Printf_Default(int param_1,char *param_2,int param_3,char *param_4)

{
  undefined1 auStack_1038 [32];
  char local_1018 [4096];
  ulonglong local_18;
  undefined8 uStack_8;
  
  if (param_1 < 2) {
    uStack_8 = 0x14f3271d4;
    local_18 = __security_cookie.value ^ (ulonglong)auStack_1038;
    oo2::rrvsnprintf(local_1018,0x1000,param_4,&stack0x00000028);
    OutputDebugStringA(local_1018);
  }
  return;
}

// OodleCore_Plugin_DisplayAssertion_Default @ 14f327240

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
OodleCore_Plugin_DisplayAssertion_Default(char *param_1,int param_2,char *param_3,char *param_4)

{
  undefined1 auStack_1048 [32];
  int local_1028;
  char *local_1020;
  char local_1018 [4096];
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x14f32724a;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1048;
  local_1028 = param_2;
  local_1020 = param_4;
  oo2::rrsnprintf(local_1018,0x1000,"%s (%d) : %s\n");
  OutputDebugStringA(local_1018);
  return 1;
}

// OodleCore_Plugin_RunJob_Default @ 14f3272c0

ulong64 __cdecl
OodleCore_Plugin_RunJob_Default
          (_func___cdecl_void_void_ptr *param_1,void *param_2,ulong64 *param_3,int param_4,
          void *param_5)

{
  (*param_1)(param_2);
  return 0;
}

// OodleCore_Plugin_WaitJob_Default @ 14f3272e0

void __cdecl OodleCore_Plugin_WaitJob_Default(ulong64 param_1,void *param_2)

{
  return;
}

// rrAlignUpPointer<char> @ 14f3272f0

char * __cdecl oo2::rrAlignUpPointer<char>(char *param_1,long64 param_2)

{
  return (char *)((ulonglong)(param_1 + param_2 + -1) & ~(param_2 - 1U));
}

// OodleCore_Plugin_GetJobTargetParallelism @ 14f327320

int __cdecl oo2::OodleCore_Plugin_GetJobTargetParallelism(void)

{
  int iVar1;
  
  if (g_fp_OodleCore_Plugin_RunJob == OodleCore_Plugin_RunJob_Default) {
    return 1;
  }
  iVar1 = g_OodleCore_Plugin_job_target_parallelism;
  if (g_OodleCore_Plugin_job_target_parallelism < 1) {
    iVar1 = 0x20;
  }
  return iVar1;
}

// rrAlignUp64 @ 14f327350

ulong64 __cdecl oo2::rrAlignUp64(ulong64 param_1,long64 param_2)

{
  return (param_1 - 1) + param_2 & ~(param_2 - 1U);
}

// rrAlignUpA @ 14f327370

ulong64 __cdecl oo2::rrAlignUpA(ulong64 param_1,long64 param_2)

{
  return (param_1 - 1) + param_2 & ~(param_2 - 1U);
}

// rrPrintf_nop @ 14f327390

void __cdecl oo2::rrPrintf_nop(void)

{
  return;
}

// OodleCore_Plugin_Free_None @ 14f3273a0

void __cdecl OodleCore_Plugin_Free_None(void *param_1)

{
  return;
}

// OodleCore_Plugin_MallocAligned_None @ 14f3273c0

void * __cdecl OodleCore_Plugin_MallocAligned_None(long64 param_1,int param_2)

{
  if (oo2::g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*oo2::g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\oodlecoreplugins_gen.inc",0x3c,
               "Oodle wants to allocate memory but memory allocations are disabled!\n");
  }
  return (void *)0x0;
}

// OodleCore_Plugin_Printf_Verbose @ 14f327400

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl OodleCore_Plugin_Printf_Verbose(int param_1,char *param_2,int param_3,char *param_4)

{
  undefined1 auStack_1038 [32];
  char local_1018 [4096];
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x14f32740f;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1038;
  oo2::rrvsnprintf(local_1018,0x1000,param_4,&stack0x00000028);
  OutputDebugStringA(local_1018);
  return;
}

// OodleCore_Plugins_SetAllocators @ 14f327470

void __cdecl
OodleCore_Plugins_SetAllocators
          (_func___cdecl_void_ptr_long64_int *param_1,_func___cdecl_void_void_ptr *param_2)

{
  if ((param_1 != (_func___cdecl_void_ptr_long64_int *)0x0) &&
     (param_2 != (_func___cdecl_void_void_ptr *)0x0)) {
    oo2::g_fp_OodleCore_Plugin_MallocAligned = param_1;
    oo2::g_fp_OodleCore_Plugin_Free = param_2;
    return;
  }
  oo2::g_fp_OodleCore_Plugin_MallocAligned = OodleCore_Plugin_MallocAligned_None;
  oo2::g_fp_OodleCore_Plugin_Free = OodleCore_Plugin_Free_None;
  return;
}

// OodleCore_Plugins_SetAssertion @ 14f3274b0

_func___cdecl_int_char_ptr_int_char_ptr_char_ptr * __cdecl
OodleCore_Plugins_SetAssertion(_func___cdecl_int_char_ptr_int_char_ptr_char_ptr *param_1)

{
  _func___cdecl_int_char_ptr_int_char_ptr_char_ptr *p_Var1;
  
  p_Var1 = oo2::g_fp_OodleCore_Plugin_DisplayAssertion;
  oo2::g_fp_OodleCore_Plugin_DisplayAssertion = param_1;
  return p_Var1;
}

// OodleCore_Plugins_SetJobSystem @ 14f3274d0

void __cdecl
OodleCore_Plugins_SetJobSystem
          (_func___cdecl_ulong64__func___cdecl_void_void_ptr_ptr_void_ptr_ulong64_ptr_int_void_ptr
           *param_1,_func___cdecl_void_ulong64_void_ptr *param_2)

{
  code *pcVar1;
  
  oo2::g_OodleCore_Plugin_job_target_parallelism = 0;
  pcVar1 = OodleCore_Plugin_RunJob_Default;
  if (param_1 !=
      (_func___cdecl_ulong64__func___cdecl_void_void_ptr_ptr_void_ptr_ulong64_ptr_int_void_ptr *)0x0
     ) {
    pcVar1 = param_1;
  }
  oo2::g_fp_OodleCore_Plugin_RunJob = pcVar1;
  pcVar1 = OodleCore_Plugin_WaitJob_Default;
  if (param_1 !=
      (_func___cdecl_ulong64__func___cdecl_void_void_ptr_ptr_void_ptr_ulong64_ptr_int_void_ptr *)0x0
     ) {
    pcVar1 = param_2;
  }
  oo2::g_fp_OodleCore_Plugin_WaitJob = pcVar1;
  return;
}

// OodleCore_Plugins_SetJobSystemAndCount @ 14f327510

void __cdecl
OodleCore_Plugins_SetJobSystemAndCount
          (_func___cdecl_ulong64__func___cdecl_void_void_ptr_ptr_void_ptr_ulong64_ptr_int_void_ptr
           *param_1,_func___cdecl_void_ulong64_void_ptr *param_2,int param_3)

{
  code *pcVar1;
  
  pcVar1 = OodleCore_Plugin_RunJob_Default;
  if (param_1 !=
      (_func___cdecl_ulong64__func___cdecl_void_void_ptr_ptr_void_ptr_ulong64_ptr_int_void_ptr *)0x0
     ) {
    pcVar1 = param_1;
  }
  oo2::g_fp_OodleCore_Plugin_RunJob = pcVar1;
  pcVar1 = OodleCore_Plugin_WaitJob_Default;
  if (param_1 !=
      (_func___cdecl_ulong64__func___cdecl_void_void_ptr_ptr_void_ptr_ulong64_ptr_int_void_ptr *)0x0
     ) {
    pcVar1 = param_2;
  }
  oo2::g_fp_OodleCore_Plugin_WaitJob = pcVar1;
  oo2::g_OodleCore_Plugin_job_target_parallelism = 0;
  if (param_1 !=
      (_func___cdecl_ulong64__func___cdecl_void_void_ptr_ptr_void_ptr_ulong64_ptr_int_void_ptr *)0x0
     ) {
    oo2::g_OodleCore_Plugin_job_target_parallelism = param_3;
  }
  return;
}

// OodleCore_Plugins_SetPrintf @ 14f327550

_func___cdecl_void_int_char_ptr_int_char_ptr * __cdecl
OodleCore_Plugins_SetPrintf(_func___cdecl_void_int_char_ptr_int_char_ptr *param_1)

{
  _func___cdecl_void_int_char_ptr_int_char_ptr *p_Var1;
  
  p_Var1 = oo2::g_fp_OodleCore_Plugin_Printf;
  oo2::g_fp_OodleCore_Plugin_Printf = param_1;
  return p_Var1;
}

