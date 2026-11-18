// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2net_win64
// Functions: 19

// OodleNet_Plugin_MallocAligned_Default @ 14ff61340

void * __cdecl OodleNet_Plugin_MallocAligned_Default(long64 param_1,int param_2)

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

// OodleNet_Plugin_Free_Default @ 14ff613a0

void __cdecl OodleNet_Plugin_Free_Default(void *param_1)

{
  HANDLE hHeap;
  
  hHeap = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x00014ff613c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(hHeap,0,*(LPVOID *)((longlong)param_1 + -8));
  return;
}

// OodleNet_Plugin_Printf_Default @ 14ff613e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl OodleNet_Plugin_Printf_Default(int param_1,char *param_2,int param_3,char *param_4)

{
  undefined1 auStack_1038 [32];
  char local_1018 [4096];
  ulonglong local_18;
  undefined8 uStack_8;
  
  if (param_1 < 2) {
    uStack_8 = 0x14ff613f4;
    local_18 = __security_cookie.value ^ (ulonglong)auStack_1038;
    oo2net::rrvsnprintf(local_1018,0x1000,param_4,&stack0x00000028);
    OutputDebugStringA(local_1018);
  }
  return;
}

// OodleNet_Plugin_DisplayAssertion_Default @ 14ff61460

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __cdecl
OodleNet_Plugin_DisplayAssertion_Default(char *param_1,int param_2,char *param_3,char *param_4)

{
  undefined1 auStack_1048 [32];
  int local_1028;
  char *local_1020;
  char local_1018 [4096];
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x14ff6146a;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1048;
  local_1028 = param_2;
  local_1020 = param_4;
  oo2net::rrsnprintf(local_1018,0x1000,"%s (%d) : %s\n");
  OutputDebugStringA(local_1018);
  return 1;
}

// OodleNet_Plugin_RunJob_Default @ 14ff614e0

ulong64 __cdecl
OodleNet_Plugin_RunJob_Default
          (_func___cdecl_void_void_ptr *param_1,void *param_2,ulong64 *param_3,int param_4,
          void *param_5)

{
  (*param_1)(param_2);
  return 0;
}

// OodleNet_Plugin_WaitJob_Default @ 14ff61500

void __cdecl OodleNet_Plugin_WaitJob_Default(ulong64 param_1,void *param_2)

{
  return;
}

// rrAlignUpPointer<char> @ 14ff61510

char * __cdecl oo2net::rrAlignUpPointer<char>(char *param_1,long64 param_2)

{
  return (char *)((ulonglong)(param_1 + param_2 + -1) & ~(param_2 - 1U));
}

// OodleNet_Plugin_GetJobTargetParallelism @ 14ff61540

int __cdecl oo2net::OodleNet_Plugin_GetJobTargetParallelism(void)

{
  int iVar1;
  
  if (g_fp_OodleNet_Plugin_RunJob == OodleNet_Plugin_RunJob_Default) {
    return 1;
  }
  iVar1 = g_OodleNet_Plugin_job_target_parallelism;
  if (g_OodleNet_Plugin_job_target_parallelism < 1) {
    iVar1 = 0x20;
  }
  return iVar1;
}

// rrAlignUp64 @ 14ff61570

ulong64 __cdecl oo2net::rrAlignUp64(ulong64 param_1,long64 param_2)

{
  return (param_1 - 1) + param_2 & ~(param_2 - 1U);
}

// rrAlignUpA @ 14ff61590

ulong64 __cdecl oo2net::rrAlignUpA(ulong64 param_1,long64 param_2)

{
  return (param_1 - 1) + param_2 & ~(param_2 - 1U);
}

// rrPrintf_nop @ 14ff615b0

void __cdecl oo2net::rrPrintf_nop(void)

{
  return;
}

// OodleNet_Plugin_Free_None @ 14ff615c0

void __cdecl OodleNet_Plugin_Free_None(void *param_1)

{
  return;
}

// OodleNet_Plugin_MallocAligned_None @ 14ff615e0

void * __cdecl OodleNet_Plugin_MallocAligned_None(long64 param_1,int param_2)

{
  if (oo2net::g_fp_OodleNet_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*oo2net::g_fp_OodleNet_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\../network/oodlenetplugins_gen.inc",0x3c,
               "Oodle wants to allocate memory but memory allocations are disabled!\n");
  }
  return (void *)0x0;
}

// OodleNet_Plugin_Printf_Verbose @ 14ff61620

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl OodleNet_Plugin_Printf_Verbose(int param_1,char *param_2,int param_3,char *param_4)

{
  undefined1 auStack_1038 [32];
  char local_1018 [4096];
  ulonglong local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x14ff6162f;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1038;
  oo2net::rrvsnprintf(local_1018,0x1000,param_4,&stack0x00000028);
  OutputDebugStringA(local_1018);
  return;
}

// OodleNet_Plugins_SetAllocators @ 14ff61690

void __cdecl
OodleNet_Plugins_SetAllocators
          (_func___cdecl_void_ptr_long64_int *param_1,_func___cdecl_void_void_ptr *param_2)

{
  if ((param_1 != (_func___cdecl_void_ptr_long64_int *)0x0) &&
     (param_2 != (_func___cdecl_void_void_ptr *)0x0)) {
    oo2net::g_fp_OodleNet_Plugin_MallocAligned = param_1;
    oo2net::g_fp_OodleNet_Plugin_Free = param_2;
    return;
  }
  oo2net::g_fp_OodleNet_Plugin_MallocAligned = OodleNet_Plugin_MallocAligned_None;
  oo2net::g_fp_OodleNet_Plugin_Free = OodleNet_Plugin_Free_None;
  return;
}

// OodleNet_Plugins_SetAssertion @ 14ff616d0

_func___cdecl_int_char_ptr_int_char_ptr_char_ptr * __cdecl
OodleNet_Plugins_SetAssertion(_func___cdecl_int_char_ptr_int_char_ptr_char_ptr *param_1)

{
  _func___cdecl_int_char_ptr_int_char_ptr_char_ptr *p_Var1;
  
  p_Var1 = oo2net::g_fp_OodleNet_Plugin_DisplayAssertion;
  oo2net::g_fp_OodleNet_Plugin_DisplayAssertion = param_1;
  return p_Var1;
}

// OodleNet_Plugins_SetJobSystem @ 14ff616f0

void __cdecl
OodleNet_Plugins_SetJobSystem
          (_func___cdecl_ulong64__func___cdecl_void_void_ptr_ptr_void_ptr_ulong64_ptr_int_void_ptr
           *param_1,_func___cdecl_void_ulong64_void_ptr *param_2)

{
  code *pcVar1;
  
  oo2net::g_OodleNet_Plugin_job_target_parallelism = 0;
  pcVar1 = OodleNet_Plugin_RunJob_Default;
  if (param_1 !=
      (_func___cdecl_ulong64__func___cdecl_void_void_ptr_ptr_void_ptr_ulong64_ptr_int_void_ptr *)0x0
     ) {
    pcVar1 = param_1;
  }
  oo2net::g_fp_OodleNet_Plugin_RunJob = pcVar1;
  pcVar1 = OodleNet_Plugin_WaitJob_Default;
  if (param_1 !=
      (_func___cdecl_ulong64__func___cdecl_void_void_ptr_ptr_void_ptr_ulong64_ptr_int_void_ptr *)0x0
     ) {
    pcVar1 = param_2;
  }
  oo2net::g_fp_OodleNet_Plugin_WaitJob = pcVar1;
  return;
}

// OodleNet_Plugins_SetJobSystemAndCount @ 14ff61730

void __cdecl
OodleNet_Plugins_SetJobSystemAndCount
          (_func___cdecl_ulong64__func___cdecl_void_void_ptr_ptr_void_ptr_ulong64_ptr_int_void_ptr
           *param_1,_func___cdecl_void_ulong64_void_ptr *param_2,int param_3)

{
  code *pcVar1;
  
  pcVar1 = OodleNet_Plugin_RunJob_Default;
  if (param_1 !=
      (_func___cdecl_ulong64__func___cdecl_void_void_ptr_ptr_void_ptr_ulong64_ptr_int_void_ptr *)0x0
     ) {
    pcVar1 = param_1;
  }
  oo2net::g_fp_OodleNet_Plugin_RunJob = pcVar1;
  pcVar1 = OodleNet_Plugin_WaitJob_Default;
  if (param_1 !=
      (_func___cdecl_ulong64__func___cdecl_void_void_ptr_ptr_void_ptr_ulong64_ptr_int_void_ptr *)0x0
     ) {
    pcVar1 = param_2;
  }
  oo2net::g_fp_OodleNet_Plugin_WaitJob = pcVar1;
  oo2net::g_OodleNet_Plugin_job_target_parallelism = 0;
  if (param_1 !=
      (_func___cdecl_ulong64__func___cdecl_void_void_ptr_ptr_void_ptr_ulong64_ptr_int_void_ptr *)0x0
     ) {
    oo2net::g_OodleNet_Plugin_job_target_parallelism = param_3;
  }
  return;
}

// OodleNet_Plugins_SetPrintf @ 14ff61770

_func___cdecl_void_int_char_ptr_int_char_ptr * __cdecl
OodleNet_Plugins_SetPrintf(_func___cdecl_void_int_char_ptr_int_char_ptr *param_1)

{
  _func___cdecl_void_int_char_ptr_int_char_ptr *p_Var1;
  
  p_Var1 = oo2net::g_fp_OodleNet_Plugin_Printf;
  oo2net::g_fp_OodleNet_Plugin_Printf = param_1;
  return p_Var1;
}

