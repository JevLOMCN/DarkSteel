// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Intel
// Functions: 194

// strnlen_s @ 14f3ddf90

ulong64 __cdecl strnlen_s(char *param_1,ulong64 param_2)

{
  size_t sVar1;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  sVar1 = strnlen(param_1,param_2);
  return sVar1;
}

// __itt_interlocked_compare_exchange @ 14f3ddfb0

long __cdecl __itt_interlocked_compare_exchange(long *param_1,long param_2,long param_3)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  if (param_3 == iVar1) {
    *param_1 = param_2;
    iVar1 = param_3;
  }
  UNLOCK();
  return iVar1;
}

// __itt_mark_pt_region_begin @ 14f3ddfc0

/* WARNING: Removing unreachable block (ram,0x00014f3e4f7c) */
/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_mark_pt_region_begin(uchar param_1)

{
  if (__itt__ittapi_global.ipt_collect_events == 1) {
    __itt_pt_event();
    __itt_pt_mark();
    return;
  }
  __itt_pt_mark();
  return;
}

// __itt_mark_pt_region_end @ 14f3ddfe0

/* WARNING: Removing unreachable block (ram,0x00014f3e4f69) */
/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_mark_pt_region_end(uchar param_1)

{
  if (__itt__ittapi_global.ipt_collect_events == 1) {
    __itt_pt_mark();
    __itt_pt_event();
    return;
  }
  __itt_pt_mark();
  return;
}

// __itt_get_collection_state @ 14f3de000

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

__itt_collection_state __cdecl __itt_get_collection_state(void)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  return __itt__ittapi_global.state;
}

// __itt_release_resources @ 14f3de040

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_release_resources(void)

{
  bool bVar1;
  
  if (__itt__ittapi_global.mutex_initialized == 0) {
    LOCK();
    bVar1 = __itt__ittapi_global.atomic_counter == 0;
    if (bVar1) {
      __itt__ittapi_global.atomic_counter = 1;
    }
    UNLOCK();
    if (bVar1) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
      __itt__ittapi_global.mutex_initialized = 1;
    }
    else {
      bVar1 = true;
      while (bVar1) {
        SwitchToThread();
        bVar1 = __itt__ittapi_global.mutex_initialized == 0;
      }
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
  __itt_free_allocated_resources();
  LeaveCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
  if (__itt__ittapi_global.mutex_initialized != 0) {
    LOCK();
    bVar1 = __itt__ittapi_global.atomic_counter == 1;
    if (bVar1) {
      __itt__ittapi_global.atomic_counter = 0;
    }
    UNLOCK();
    if (bVar1) {
      DeleteCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
      __itt__ittapi_global.mutex_initialized = 0;
    }
  }
  return;
}

// __itt_set_error_handler @ 14f3de0f0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

_func___cdecl_void___itt_error_code_char_ptr * __cdecl
__itt_set_error_handler(_func___cdecl_void___itt_error_code_char_ptr *param_1)

{
  _func___cdecl_void___itt_error_code_char_ptr *p_Var1;
  
  p_Var1 = __itt__ittapi_global.error_handler;
  __itt__ittapi_global.error_handler = param_1;
  return p_Var1;
}

// __itt_init_ittlib @ 14f3de110

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

int __cdecl __itt_init_ittlib(char *param_1,___itt_group_id param_2)

{
  undefined8 *puVar1;
  ___itt_api_info *p_Var2;
  longlong lVar3;
  longlong *plVar4;
  char *pcVar5;
  ___itt_group_id _Var6;
  HMODULE hModule;
  FARPROC pFVar7;
  longlong lVar8;
  longlong lVar9;
  ___itt_group_id _Var10;
  bool bVar11;
  char cVar12;
  
  lVar8 = 0;
  _Var10 = __itt_group_legacy;
  if (__itt__ittapi_global.api_initialized == 0) {
    if (__itt__ittapi_global.mutex_initialized == 0) {
      LOCK();
      bVar11 = __itt__ittapi_global.atomic_counter == 0;
      if (bVar11) {
        __itt__ittapi_global.atomic_counter = 1;
      }
      UNLOCK();
      if (bVar11) {
        InitializeCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
        __itt__ittapi_global.mutex_initialized = 1;
      }
      else {
        bVar11 = true;
        while (bVar11) {
          SwitchToThread();
          bVar11 = __itt__ittapi_global.mutex_initialized == 0;
        }
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
    if ((__itt__ittapi_global.api_initialized == 0) && (current_thread == 0)) {
      current_thread = GetCurrentThreadId();
      if (param_1 == (char *)0x0) {
        param_1 = __itt_get_lib_name();
      }
      _Var6 = __itt_get_groups();
      cVar12 = '\0';
      if ((_Var6 == __itt_group_none) && (param_1 == (char *)0x0)) {
        __itt__ittapi_global.state = __itt_collection_collector_absent;
        __itt_nullify_all_pointers();
      }
      else {
        if (param_1 == (char *)0x0) {
          param_1 = ittnotify_lib_name;
        }
        hModule = LoadLibraryA(param_1);
        __itt__ittapi_global.lib = (HINSTANCE__ *)hModule;
        if (hModule == (HMODULE)0x0) {
          __itt__ittapi_global.state = __itt_collection_init_fail;
          __itt_free_allocated_resources();
          __itt_nullify_all_pointers();
          GetLastError();
          __itt_report_error(1);
        }
        else {
          __itt__ittapi_global.state = __itt_collection_init_successful;
          if (hModule != (HMODULE)0x0) {
            pFVar7 = GetProcAddress(hModule,s___itt_api_init_154df2be0);
            if (pFVar7 == (FARPROC)0x0) {
              pFVar7 = GetProcAddress(hModule,s___itt_api_version_154df2bf0);
              cVar12 = pFVar7 != (FARPROC)0x0;
            }
            else {
              cVar12 = '\x02';
            }
          }
          if ((cVar12 == '\0') || (_Var10 = _Var6, cVar12 == '\x01')) {
            pcVar5 = (__itt__ittapi_global.api_list_ptr)->name;
            lVar9 = lVar8;
            lVar3 = lVar8;
            while (pcVar5 != (char *)0x0) {
              puVar1 = (undefined8 *)((longlong)&(__itt__ittapi_global.api_list_ptr)->name + lVar3);
              if ((param_2 &
                  *(___itt_group_id *)
                   ((longlong)&(__itt__ittapi_global.api_list_ptr)->group + lVar3) & _Var10) ==
                  __itt_group_none) {
                *(undefined8 *)puVar1[1] = puVar1[3];
              }
              else {
                pFVar7 = GetProcAddress((HMODULE)__itt__ittapi_global.lib,(LPCSTR)*puVar1);
                **(undefined8 **)((longlong)&(__itt__ittapi_global.api_list_ptr)->func_ptr + lVar3)
                     = pFVar7;
                plVar4 = *(longlong **)
                          ((longlong)&(__itt__ittapi_global.api_list_ptr)->func_ptr + lVar3);
                if (*plVar4 == 0) {
                  *plVar4 = *(longlong *)
                             ((longlong)&(__itt__ittapi_global.api_list_ptr)->null_func + lVar3);
                  __itt_report_error(2);
                }
              }
              lVar9 = lVar9 + 1;
              lVar3 = lVar9 * 0x28;
              pcVar5 = __itt__ittapi_global.api_list_ptr[lVar9].name;
            }
            if (_Var10 == __itt_group_legacy) {
              __itt_sync_createA_ptr__3_0 = __itt_sync_set_nameA_ptr__3_0;
              __itt_sync_createW_ptr__3_0 = __itt_sync_set_nameW_ptr__3_0;
              __itt_sync_prepare_ptr__3_0 = __itt_notify_sync_prepare_ptr__3_0;
              __itt_sync_cancel_ptr__3_0 = __itt_notify_sync_cancel_ptr__3_0;
              __itt_sync_acquired_ptr__3_0 = __itt_notify_sync_acquired_ptr__3_0;
              __itt_sync_releasing_ptr__3_0 = __itt_notify_sync_releasing_ptr__3_0;
              __itt_thread_ignore_ptr__3_0 = __itt_thr_ignore_ptr__3_0;
            }
          }
          else if ((cVar12 == '\x02') &&
                  (pFVar7 = GetProcAddress((HMODULE)__itt__ittapi_global.lib,
                                           s___itt_api_init_154df2c18), pFVar7 != (FARPROC)0x0)) {
            (*pFVar7)(&__itt__ittapi_global,(ulonglong)param_2);
          }
        }
      }
      __itt__ittapi_global.api_initialized = 1;
      current_thread = 0;
      if (__itt_fini_ittlib_ptr == __itt_fini_ittlib) {
        current_thread = 0;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
  }
  pcVar5 = (__itt__ittapi_global.api_list_ptr)->name;
  p_Var2 = __itt__ittapi_global.api_list_ptr;
  while( true ) {
    if (pcVar5 == (char *)0x0) {
      return 0;
    }
    if ((*p_Var2->func_ptr != p_Var2->null_func) && ((p_Var2->group & param_2) != __itt_group_none))
    break;
    lVar8 = lVar8 + 1;
    pcVar5 = __itt__ittapi_global.api_list_ptr[lVar8].name;
    p_Var2 = __itt__ittapi_global.api_list_ptr + lVar8;
  }
  return 1;
}

// __itt_fini_ittlib @ 14f3de4a0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_fini_ittlib(void)

{
  ___itt_api_info *p_Var1;
  char *pcVar2;
  FARPROC pFVar3;
  longlong lVar4;
  bool bVar5;
  
  if (__itt__ittapi_global.api_initialized == 0) {
    return;
  }
  if (__itt__ittapi_global.mutex_initialized == 0) {
    LOCK();
    bVar5 = __itt__ittapi_global.atomic_counter == 0;
    if (bVar5) {
      __itt__ittapi_global.atomic_counter = 1;
    }
    UNLOCK();
    if (bVar5) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
      __itt__ittapi_global.mutex_initialized = 1;
    }
    else {
      bVar5 = true;
      while (bVar5) {
        SwitchToThread();
        bVar5 = __itt__ittapi_global.mutex_initialized == 0;
      }
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
  if ((__itt__ittapi_global.api_initialized != 0) && (current_thread == 0)) {
    current_thread = GetCurrentThreadId();
    if ((__itt__ittapi_global.lib != (HINSTANCE__ *)0x0) &&
       (pFVar3 = GetProcAddress((HMODULE)__itt__ittapi_global.lib,s___itt_api_fini_154df2c08),
       pFVar3 != (FARPROC)0x0)) {
      (*pFVar3)(&__itt__ittapi_global);
    }
    lVar4 = 0;
    pcVar2 = (__itt__ittapi_global.api_list_ptr)->name;
    p_Var1 = __itt__ittapi_global.api_list_ptr;
    while (pcVar2 != (char *)0x0) {
      lVar4 = lVar4 + 1;
      *p_Var1->func_ptr = p_Var1->null_func;
      p_Var1 = __itt__ittapi_global.api_list_ptr + lVar4;
      pcVar2 = __itt__ittapi_global.api_list_ptr[lVar4].name;
    }
    __itt__ittapi_global.api_initialized = 0;
    current_thread = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f3de5ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
  return;
}

// __itt_detach_init_3_0 @ 14f3de5c0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_detach_init_3_0(void)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_detach_ptr__3_0 != (_func___cdecl_void *)0x0) &&
     (__itt_detach_ptr__3_0 != __itt_detach_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3de5ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_detach_ptr__3_0)();
    return;
  }
  return;
}

// __itt_sync_createA_init_3_0 @ 14f3de610

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_sync_createA_init_3_0(void *param_1,char *param_2,char *param_3,int param_4)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_sync_createA_ptr__3_0 != (_func___cdecl_void_void_ptr_char_ptr_char_ptr_int *)0x0) &&
     (__itt_sync_createA_ptr__3_0 != __itt_sync_createA_init_3_0)) {
    (*__itt_sync_createA_ptr__3_0)(param_1,param_2,param_3,param_4);
  }
  return;
}

// __itt_sync_createW_init_3_0 @ 14f3de690

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl
__itt_sync_createW_init_3_0(void *param_1,wchar_t *param_2,wchar_t *param_3,int param_4)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_sync_createW_ptr__3_0 != (_func___cdecl_void_void_ptr_wchar_t_ptr_wchar_t_ptr_int *)0x0
      ) && (__itt_sync_createW_ptr__3_0 != __itt_sync_createW_init_3_0)) {
    (*__itt_sync_createW_ptr__3_0)(param_1,param_2,param_3,param_4);
  }
  return;
}

// __itt_sync_renameA_init_3_0 @ 14f3de710

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_sync_renameA_init_3_0(void *param_1,char *param_2)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_sync_renameA_ptr__3_0 != (_func___cdecl_void_void_ptr_char_ptr *)0x0) &&
     (__itt_sync_renameA_ptr__3_0 != __itt_sync_renameA_init_3_0)) {
    (*__itt_sync_renameA_ptr__3_0)(param_1,param_2);
  }
  return;
}

// __itt_sync_renameW_init_3_0 @ 14f3de770

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_sync_renameW_init_3_0(void *param_1,wchar_t *param_2)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_sync_renameW_ptr__3_0 != (_func___cdecl_void_void_ptr_wchar_t_ptr *)0x0) &&
     (__itt_sync_renameW_ptr__3_0 != __itt_sync_renameW_init_3_0)) {
    (*__itt_sync_renameW_ptr__3_0)(param_1,param_2);
  }
  return;
}

// __itt_sync_destroy_init_3_0 @ 14f3de7d0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_sync_destroy_init_3_0(void *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_sync_destroy_ptr__3_0 != (_func___cdecl_void_void_ptr *)0x0) &&
     (__itt_sync_destroy_ptr__3_0 != __itt_sync_destroy_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3de818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_sync_destroy_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_sync_prepare_init_3_0 @ 14f3de830

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_sync_prepare_init_3_0(void *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_sync_prepare_ptr__3_0 != (_func___cdecl_void_void_ptr *)0x0) &&
     (__itt_sync_prepare_ptr__3_0 != __itt_sync_prepare_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3de878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_sync_prepare_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_sync_cancel_init_3_0 @ 14f3de890

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_sync_cancel_init_3_0(void *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_sync_cancel_ptr__3_0 != (_func___cdecl_void_void_ptr *)0x0) &&
     (__itt_sync_cancel_ptr__3_0 != __itt_sync_cancel_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3de8d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_sync_cancel_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_sync_acquired_init_3_0 @ 14f3de8f0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_sync_acquired_init_3_0(void *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_sync_acquired_ptr__3_0 != (_func___cdecl_void_void_ptr *)0x0) &&
     (__itt_sync_acquired_ptr__3_0 != __itt_sync_acquired_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3de938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_sync_acquired_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_sync_releasing_init_3_0 @ 14f3de950

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_sync_releasing_init_3_0(void *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_sync_releasing_ptr__3_0 != (_func___cdecl_void_void_ptr *)0x0) &&
     (__itt_sync_releasing_ptr__3_0 != __itt_sync_releasing_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3de998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_sync_releasing_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_suppress_push_init_3_0 @ 14f3de9b0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_suppress_push_init_3_0(uint param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_suppress_push_ptr__3_0 != (_func___cdecl_void_uint *)0x0) &&
     (__itt_suppress_push_ptr__3_0 != __itt_suppress_push_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3de9f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_suppress_push_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_suppress_pop_init_3_0 @ 14f3dea10

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_suppress_pop_init_3_0(void)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_suppress_pop_ptr__3_0 != (_func___cdecl_void *)0x0) &&
     (__itt_suppress_pop_ptr__3_0 != __itt_suppress_pop_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3dea4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_suppress_pop_ptr__3_0)();
    return;
  }
  return;
}

// __itt_suppress_mark_range_init_3_0 @ 14f3dea60

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl
__itt_suppress_mark_range_init_3_0
          (__itt_suppress_mode param_1,uint param_2,void *param_3,ulong64 param_4)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_suppress_mark_range_ptr__3_0 !=
       (_func___cdecl_void___itt_suppress_mode_uint_void_ptr_ulong64 *)0x0) &&
     (__itt_suppress_mark_range_ptr__3_0 != __itt_suppress_mark_range_init_3_0)) {
    (*__itt_suppress_mark_range_ptr__3_0)(param_1,param_2,param_3,param_4);
  }
  return;
}

// __itt_suppress_clear_range_init_3_0 @ 14f3deae0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl
__itt_suppress_clear_range_init_3_0
          (__itt_suppress_mode param_1,uint param_2,void *param_3,ulong64 param_4)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_suppress_clear_range_ptr__3_0 !=
       (_func___cdecl_void___itt_suppress_mode_uint_void_ptr_ulong64 *)0x0) &&
     (__itt_suppress_clear_range_ptr__3_0 != __itt_suppress_clear_range_init_3_0)) {
    (*__itt_suppress_clear_range_ptr__3_0)(param_1,param_2,param_3,param_4);
  }
  return;
}

// __itt_fsync_prepare_init_3_0 @ 14f3deb60

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_fsync_prepare_init_3_0(void *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_fsync_prepare_ptr__3_0 != (_func___cdecl_void_void_ptr *)0x0) &&
     (__itt_fsync_prepare_ptr__3_0 != __itt_fsync_prepare_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3deba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_fsync_prepare_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_fsync_cancel_init_3_0 @ 14f3debc0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_fsync_cancel_init_3_0(void *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_fsync_cancel_ptr__3_0 != (_func___cdecl_void_void_ptr *)0x0) &&
     (__itt_fsync_cancel_ptr__3_0 != __itt_fsync_cancel_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3dec08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_fsync_cancel_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_fsync_acquired_init_3_0 @ 14f3dec20

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_fsync_acquired_init_3_0(void *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_fsync_acquired_ptr__3_0 != (_func___cdecl_void_void_ptr *)0x0) &&
     (__itt_fsync_acquired_ptr__3_0 != __itt_fsync_acquired_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3dec68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_fsync_acquired_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_fsync_releasing_init_3_0 @ 14f3dec80

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_fsync_releasing_init_3_0(void *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_fsync_releasing_ptr__3_0 != (_func___cdecl_void_void_ptr *)0x0) &&
     (__itt_fsync_releasing_ptr__3_0 != __itt_fsync_releasing_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3decc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_fsync_releasing_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_model_site_begin_init_3_0 @ 14f3dece0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_model_site_begin_init_3_0(void **param_1,void **param_2,char *param_3)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_model_site_begin_ptr__3_0 !=
       (_func___cdecl_void_void_ptr_ptr_void_ptr_ptr_char_ptr *)0x0) &&
     (__itt_model_site_begin_ptr__3_0 != __itt_model_site_begin_init_3_0)) {
    (*__itt_model_site_begin_ptr__3_0)(param_1,param_2,param_3);
  }
  return;
}

// __itt_model_site_end_init_3_0 @ 14f3ded50

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_model_site_end_init_3_0(void **param_1,void **param_2)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_model_site_end_ptr__3_0 != (_func___cdecl_void_void_ptr_ptr_void_ptr_ptr *)0x0) &&
     (__itt_model_site_end_ptr__3_0 != __itt_model_site_end_init_3_0)) {
    (*__itt_model_site_end_ptr__3_0)(param_1,param_2);
  }
  return;
}

// __itt_model_task_begin_init_3_0 @ 14f3dedb0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_model_task_begin_init_3_0(void **param_1,void **param_2,char *param_3)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_model_task_begin_ptr__3_0 !=
       (_func___cdecl_void_void_ptr_ptr_void_ptr_ptr_char_ptr *)0x0) &&
     (__itt_model_task_begin_ptr__3_0 != __itt_model_task_begin_init_3_0)) {
    (*__itt_model_task_begin_ptr__3_0)(param_1,param_2,param_3);
  }
  return;
}

// __itt_model_task_end_init_3_0 @ 14f3dee20

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_model_task_end_init_3_0(void **param_1,void **param_2)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_model_task_end_ptr__3_0 != (_func___cdecl_void_void_ptr_ptr_void_ptr_ptr *)0x0) &&
     (__itt_model_task_end_ptr__3_0 != __itt_model_task_end_init_3_0)) {
    (*__itt_model_task_end_ptr__3_0)(param_1,param_2);
  }
  return;
}

// __itt_model_lock_acquire_init_3_0 @ 14f3dee80

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_model_lock_acquire_init_3_0(void *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_model_lock_acquire_ptr__3_0 != (_func___cdecl_void_void_ptr *)0x0) &&
     (__itt_model_lock_acquire_ptr__3_0 != __itt_model_lock_acquire_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3deec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_model_lock_acquire_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_model_lock_release_init_3_0 @ 14f3deee0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_model_lock_release_init_3_0(void *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_model_lock_release_ptr__3_0 != (_func___cdecl_void_void_ptr *)0x0) &&
     (__itt_model_lock_release_ptr__3_0 != __itt_model_lock_release_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3def28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_model_lock_release_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_model_record_allocation_init_3_0 @ 14f3def40

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_model_record_allocation_init_3_0(void *param_1,ulong64 param_2)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_model_record_allocation_ptr__3_0 != (_func___cdecl_void_void_ptr_ulong64 *)0x0) &&
     (__itt_model_record_allocation_ptr__3_0 != __itt_model_record_allocation_init_3_0)) {
    (*__itt_model_record_allocation_ptr__3_0)(param_1,param_2);
  }
  return;
}

// __itt_model_record_deallocation_init_3_0 @ 14f3defa0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_model_record_deallocation_init_3_0(void *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_model_record_deallocation_ptr__3_0 != (_func___cdecl_void_void_ptr *)0x0) &&
     (__itt_model_record_deallocation_ptr__3_0 != __itt_model_record_deallocation_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3defe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_model_record_deallocation_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_model_induction_uses_init_3_0 @ 14f3df000

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_model_induction_uses_init_3_0(void *param_1,ulong64 param_2)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_model_induction_uses_ptr__3_0 != (_func___cdecl_void_void_ptr_ulong64 *)0x0) &&
     (__itt_model_induction_uses_ptr__3_0 != __itt_model_induction_uses_init_3_0)) {
    (*__itt_model_induction_uses_ptr__3_0)(param_1,param_2);
  }
  return;
}

// __itt_model_reduction_uses_init_3_0 @ 14f3df060

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_model_reduction_uses_init_3_0(void *param_1,ulong64 param_2)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_model_reduction_uses_ptr__3_0 != (_func___cdecl_void_void_ptr_ulong64 *)0x0) &&
     (__itt_model_reduction_uses_ptr__3_0 != __itt_model_reduction_uses_init_3_0)) {
    (*__itt_model_reduction_uses_ptr__3_0)(param_1,param_2);
  }
  return;
}

// __itt_model_observe_uses_init_3_0 @ 14f3df0c0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_model_observe_uses_init_3_0(void *param_1,ulong64 param_2)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_model_observe_uses_ptr__3_0 != (_func___cdecl_void_void_ptr_ulong64 *)0x0) &&
     (__itt_model_observe_uses_ptr__3_0 != __itt_model_observe_uses_init_3_0)) {
    (*__itt_model_observe_uses_ptr__3_0)(param_1,param_2);
  }
  return;
}

// __itt_model_clear_uses_init_3_0 @ 14f3df120

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_model_clear_uses_init_3_0(void *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_model_clear_uses_ptr__3_0 != (_func___cdecl_void_void_ptr *)0x0) &&
     (__itt_model_clear_uses_ptr__3_0 != __itt_model_clear_uses_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3df168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_model_clear_uses_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_model_site_beginW_init_3_0 @ 14f3df180

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_model_site_beginW_init_3_0(wchar_t *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_model_site_beginW_ptr__3_0 != (_func___cdecl_void_wchar_t_ptr *)0x0) &&
     (__itt_model_site_beginW_ptr__3_0 != __itt_model_site_beginW_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3df1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_model_site_beginW_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_model_task_beginW_init_3_0 @ 14f3df1e0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_model_task_beginW_init_3_0(wchar_t *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_model_task_beginW_ptr__3_0 != (_func___cdecl_void_wchar_t_ptr *)0x0) &&
     (__itt_model_task_beginW_ptr__3_0 != __itt_model_task_beginW_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3df228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_model_task_beginW_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_model_iteration_taskW_init_3_0 @ 14f3df240

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_model_iteration_taskW_init_3_0(wchar_t *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_model_iteration_taskW_ptr__3_0 != (_func___cdecl_void_wchar_t_ptr *)0x0) &&
     (__itt_model_iteration_taskW_ptr__3_0 != __itt_model_iteration_taskW_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3df288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_model_iteration_taskW_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_model_site_beginA_init_3_0 @ 14f3df2a0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_model_site_beginA_init_3_0(char *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_model_site_beginA_ptr__3_0 != (_func___cdecl_void_char_ptr *)0x0) &&
     (__itt_model_site_beginA_ptr__3_0 != __itt_model_site_beginA_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3df2e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_model_site_beginA_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_model_site_beginAL_init_3_0 @ 14f3df300

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_model_site_beginAL_init_3_0(char *param_1,ulong64 param_2)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_model_site_beginAL_ptr__3_0 != (_func___cdecl_void_char_ptr_ulong64 *)0x0) &&
     (__itt_model_site_beginAL_ptr__3_0 != __itt_model_site_beginAL_init_3_0)) {
    (*__itt_model_site_beginAL_ptr__3_0)(param_1,param_2);
  }
  return;
}

// __itt_model_task_beginA_init_3_0 @ 14f3df360

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_model_task_beginA_init_3_0(char *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_model_task_beginA_ptr__3_0 != (_func___cdecl_void_char_ptr *)0x0) &&
     (__itt_model_task_beginA_ptr__3_0 != __itt_model_task_beginA_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3df3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_model_task_beginA_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_model_task_beginAL_init_3_0 @ 14f3df3c0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_model_task_beginAL_init_3_0(char *param_1,ulong64 param_2)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_model_task_beginAL_ptr__3_0 != (_func___cdecl_void_char_ptr_ulong64 *)0x0) &&
     (__itt_model_task_beginAL_ptr__3_0 != __itt_model_task_beginAL_init_3_0)) {
    (*__itt_model_task_beginAL_ptr__3_0)(param_1,param_2);
  }
  return;
}

// __itt_model_iteration_taskA_init_3_0 @ 14f3df420

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_model_iteration_taskA_init_3_0(char *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_model_iteration_taskA_ptr__3_0 != (_func___cdecl_void_char_ptr *)0x0) &&
     (__itt_model_iteration_taskA_ptr__3_0 != __itt_model_iteration_taskA_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3df468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_model_iteration_taskA_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_model_iteration_taskAL_init_3_0 @ 14f3df480

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_model_iteration_taskAL_init_3_0(char *param_1,ulong64 param_2)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_model_iteration_taskAL_ptr__3_0 != (_func___cdecl_void_char_ptr_ulong64 *)0x0) &&
     (__itt_model_iteration_taskAL_ptr__3_0 != __itt_model_iteration_taskAL_init_3_0)) {
    (*__itt_model_iteration_taskAL_ptr__3_0)(param_1,param_2);
  }
  return;
}

// __itt_model_site_end_2_init_3_0 @ 14f3df4e0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_model_site_end_2_init_3_0(void)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_model_site_end_2_ptr__3_0 != (_func___cdecl_void *)0x0) &&
     (__itt_model_site_end_2_ptr__3_0 != __itt_model_site_end_2_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3df51f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_model_site_end_2_ptr__3_0)();
    return;
  }
  return;
}

// __itt_model_task_end_2_init_3_0 @ 14f3df530

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_model_task_end_2_init_3_0(void)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_model_task_end_2_ptr__3_0 != (_func___cdecl_void *)0x0) &&
     (__itt_model_task_end_2_ptr__3_0 != __itt_model_task_end_2_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3df56f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_model_task_end_2_ptr__3_0)();
    return;
  }
  return;
}

// __itt_model_lock_acquire_2_init_3_0 @ 14f3df580

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_model_lock_acquire_2_init_3_0(void *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_model_lock_acquire_2_ptr__3_0 != (_func___cdecl_void_void_ptr *)0x0) &&
     (__itt_model_lock_acquire_2_ptr__3_0 != __itt_model_lock_acquire_2_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3df5c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_model_lock_acquire_2_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_model_lock_release_2_init_3_0 @ 14f3df5e0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_model_lock_release_2_init_3_0(void *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_model_lock_release_2_ptr__3_0 != (_func___cdecl_void_void_ptr *)0x0) &&
     (__itt_model_lock_release_2_ptr__3_0 != __itt_model_lock_release_2_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3df628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_model_lock_release_2_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_model_aggregate_task_init_3_0 @ 14f3df640

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_model_aggregate_task_init_3_0(ulong64 param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_model_aggregate_task_ptr__3_0 != (_func___cdecl_void_ulong64 *)0x0) &&
     (__itt_model_aggregate_task_ptr__3_0 != __itt_model_aggregate_task_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3df688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_model_aggregate_task_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_model_disable_push_init_3_0 @ 14f3df6a0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_model_disable_push_init_3_0(__itt_model_disable param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_model_disable_push_ptr__3_0 != (_func___cdecl_void___itt_model_disable *)0x0) &&
     (__itt_model_disable_push_ptr__3_0 != __itt_model_disable_push_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3df6e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_model_disable_push_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_model_disable_pop_init_3_0 @ 14f3df700

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_model_disable_pop_init_3_0(void)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_model_disable_pop_ptr__3_0 != (_func___cdecl_void *)0x0) &&
     (__itt_model_disable_pop_ptr__3_0 != __itt_model_disable_pop_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3df73f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_model_disable_pop_ptr__3_0)();
    return;
  }
  return;
}

// __itt_heap_function_createA_init_3_0 @ 14f3df750

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void * __cdecl __itt_heap_function_createA_init_3_0(char *param_1,char *param_2)

{
  void *pvVar1;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_heap_function_createA_ptr__3_0 != (_func___cdecl_void_ptr_char_ptr_char_ptr *)0x0) &&
     (__itt_heap_function_createA_ptr__3_0 != __itt_heap_function_createA_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3df7a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (*__itt_heap_function_createA_ptr__3_0)(param_1,param_2);
    return pvVar1;
  }
  return (void *)0x0;
}

// __itt_heap_function_createW_init_3_0 @ 14f3df7c0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void * __cdecl __itt_heap_function_createW_init_3_0(wchar_t *param_1,wchar_t *param_2)

{
  void *pvVar1;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_heap_function_createW_ptr__3_0 != (_func___cdecl_void_ptr_wchar_t_ptr_wchar_t_ptr *)0x0
      ) && (__itt_heap_function_createW_ptr__3_0 != __itt_heap_function_createW_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3df817. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = (*__itt_heap_function_createW_ptr__3_0)(param_1,param_2);
    return pvVar1;
  }
  return (void *)0x0;
}

// __itt_heap_allocate_begin_init_3_0 @ 14f3df830

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_heap_allocate_begin_init_3_0(void *param_1,ulong64 param_2,int param_3)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_heap_allocate_begin_ptr__3_0 != (_func___cdecl_void_void_ptr_ulong64_int *)0x0) &&
     (__itt_heap_allocate_begin_ptr__3_0 != __itt_heap_allocate_begin_init_3_0)) {
    (*__itt_heap_allocate_begin_ptr__3_0)(param_1,param_2,param_3);
  }
  return;
}

// __itt_heap_allocate_end_init_3_0 @ 14f3df8a0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl
__itt_heap_allocate_end_init_3_0(void *param_1,void **param_2,ulong64 param_3,int param_4)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_heap_allocate_end_ptr__3_0 !=
       (_func___cdecl_void_void_ptr_void_ptr_ptr_ulong64_int *)0x0) &&
     (__itt_heap_allocate_end_ptr__3_0 != __itt_heap_allocate_end_init_3_0)) {
    (*__itt_heap_allocate_end_ptr__3_0)(param_1,param_2,param_3,param_4);
  }
  return;
}

// __itt_heap_free_begin_init_3_0 @ 14f3df920

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_heap_free_begin_init_3_0(void *param_1,void *param_2)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_heap_free_begin_ptr__3_0 != (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (__itt_heap_free_begin_ptr__3_0 != __itt_heap_free_begin_init_3_0)) {
    (*__itt_heap_free_begin_ptr__3_0)(param_1,param_2);
  }
  return;
}

// __itt_heap_free_end_init_3_0 @ 14f3df980

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_heap_free_end_init_3_0(void *param_1,void *param_2)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_heap_free_end_ptr__3_0 != (_func___cdecl_void_void_ptr_void_ptr *)0x0) &&
     (__itt_heap_free_end_ptr__3_0 != __itt_heap_free_end_init_3_0)) {
    (*__itt_heap_free_end_ptr__3_0)(param_1,param_2);
  }
  return;
}

// __itt_heap_reallocate_begin_init_3_0 @ 14f3df9e0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl
__itt_heap_reallocate_begin_init_3_0(void *param_1,void *param_2,ulong64 param_3,int param_4)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_heap_reallocate_begin_ptr__3_0 !=
       (_func___cdecl_void_void_ptr_void_ptr_ulong64_int *)0x0) &&
     (__itt_heap_reallocate_begin_ptr__3_0 != __itt_heap_reallocate_begin_init_3_0)) {
    (*__itt_heap_reallocate_begin_ptr__3_0)(param_1,param_2,param_3,param_4);
  }
  return;
}

// __itt_heap_reallocate_end_init_3_0 @ 14f3dfa60

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl
__itt_heap_reallocate_end_init_3_0
          (void *param_1,void *param_2,void **param_3,ulong64 param_4,int param_5)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_heap_reallocate_end_ptr__3_0 !=
       (_func___cdecl_void_void_ptr_void_ptr_void_ptr_ptr_ulong64_int *)0x0) &&
     (__itt_heap_reallocate_end_ptr__3_0 != __itt_heap_reallocate_end_init_3_0)) {
    (*__itt_heap_reallocate_end_ptr__3_0)(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}

// __itt_heap_internal_access_begin_init_3_0 @ 14f3dfaf0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_heap_internal_access_begin_init_3_0(void)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_heap_internal_access_begin_ptr__3_0 != (_func___cdecl_void *)0x0) &&
     (__itt_heap_internal_access_begin_ptr__3_0 != __itt_heap_internal_access_begin_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3dfb2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_heap_internal_access_begin_ptr__3_0)();
    return;
  }
  return;
}

// __itt_heap_internal_access_end_init_3_0 @ 14f3dfb40

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_heap_internal_access_end_init_3_0(void)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_heap_internal_access_end_ptr__3_0 != (_func___cdecl_void *)0x0) &&
     (__itt_heap_internal_access_end_ptr__3_0 != __itt_heap_internal_access_end_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3dfb7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_heap_internal_access_end_ptr__3_0)();
    return;
  }
  return;
}

// __itt_heap_record_memory_growth_begin_init_3_0 @ 14f3dfb90

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_heap_record_memory_growth_begin_init_3_0(void)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_heap_record_memory_growth_begin_ptr__3_0 != (_func___cdecl_void *)0x0) &&
     (__itt_heap_record_memory_growth_begin_ptr__3_0 !=
      __itt_heap_record_memory_growth_begin_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3dfbcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_heap_record_memory_growth_begin_ptr__3_0)();
    return;
  }
  return;
}

// __itt_heap_record_memory_growth_end_init_3_0 @ 14f3dfbe0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_heap_record_memory_growth_end_init_3_0(void)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_heap_record_memory_growth_end_ptr__3_0 != (_func___cdecl_void *)0x0) &&
     (__itt_heap_record_memory_growth_end_ptr__3_0 != __itt_heap_record_memory_growth_end_init_3_0))
  {
                    /* WARNING: Could not recover jumptable at 0x00014f3dfc1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_heap_record_memory_growth_end_ptr__3_0)();
    return;
  }
  return;
}

// __itt_heap_reset_detection_init_3_0 @ 14f3dfc30

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_heap_reset_detection_init_3_0(uint param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_heap_reset_detection_ptr__3_0 != (_func___cdecl_void_uint *)0x0) &&
     (__itt_heap_reset_detection_ptr__3_0 != __itt_heap_reset_detection_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3dfc76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_heap_reset_detection_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_heap_record_init_3_0 @ 14f3dfc90

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_heap_record_init_3_0(uint param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_heap_record_ptr__3_0 != (_func___cdecl_void_uint *)0x0) &&
     (__itt_heap_record_ptr__3_0 != __itt_heap_record_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3dfcd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_heap_record_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_id_create_init_3_0 @ 14f3dfcf0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_id_create_init_3_0(___itt_domain *param_1,___itt_id *param_2)

{
  ___itt_id local_28;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_id_create_ptr__3_0 != (_func___cdecl_void____itt_domain_ptr____itt_id *)0x0) &&
     (__itt_id_create_ptr__3_0 != __itt_id_create_init_3_0)) {
    local_28.d1._0_4_ = (undefined4)param_2->d1;
    local_28.d1._4_4_ = *(undefined4 *)((longlong)&param_2->d1 + 4);
    local_28.d2._0_4_ = (undefined4)param_2->d2;
    local_28.d2._4_4_ = *(undefined4 *)((longlong)&param_2->d2 + 4);
    local_28.d3 = param_2->d3;
    (*__itt_id_create_ptr__3_0)(param_1,&local_28);
  }
  return;
}

// __itt_id_destroy_init_3_0 @ 14f3dfd70

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_id_destroy_init_3_0(___itt_domain *param_1,___itt_id *param_2)

{
  ___itt_id local_28;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_id_destroy_ptr__3_0 != (_func___cdecl_void____itt_domain_ptr____itt_id *)0x0) &&
     (__itt_id_destroy_ptr__3_0 != __itt_id_destroy_init_3_0)) {
    local_28.d1._0_4_ = (undefined4)param_2->d1;
    local_28.d1._4_4_ = *(undefined4 *)((longlong)&param_2->d1 + 4);
    local_28.d2._0_4_ = (undefined4)param_2->d2;
    local_28.d2._4_4_ = *(undefined4 *)((longlong)&param_2->d2 + 4);
    local_28.d3 = param_2->d3;
    (*__itt_id_destroy_ptr__3_0)(param_1,&local_28);
  }
  return;
}

// __itt_get_timestamp_init_3_0 @ 14f3dfdf0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

ulong64 __cdecl __itt_get_timestamp_init_3_0(void)

{
  ulong64 uVar1;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_get_timestamp_ptr__3_0 != (_func___cdecl_ulong64 *)0x0) &&
     (__itt_get_timestamp_ptr__3_0 != __itt_get_timestamp_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3dfe2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*__itt_get_timestamp_ptr__3_0)();
    return uVar1;
  }
  return 0;
}

// __itt_region_begin_init_3_0 @ 14f3dfe40

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl
__itt_region_begin_init_3_0
          (___itt_domain *param_1,___itt_id *param_2,___itt_id *param_3,
          ___itt_string_handle *param_4)

{
  ___itt_id local_48;
  ___itt_id local_28;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_region_begin_ptr__3_0 !=
       (_func___cdecl_void____itt_domain_ptr____itt_id____itt_id____itt_string_handle_ptr *)0x0) &&
     (__itt_region_begin_ptr__3_0 != __itt_region_begin_init_3_0)) {
    local_48.d1 = param_3->d1;
    local_48.d2 = param_3->d2;
    local_48.d3 = param_3->d3;
    local_28.d1._0_4_ = (undefined4)param_2->d1;
    local_28.d1._4_4_ = *(undefined4 *)((longlong)&param_2->d1 + 4);
    local_28.d2._0_4_ = (undefined4)param_2->d2;
    local_28.d2._4_4_ = *(undefined4 *)((longlong)&param_2->d2 + 4);
    local_28.d3 = param_2->d3;
    (*__itt_region_begin_ptr__3_0)(param_1,&local_28,&local_48,param_4);
  }
  return;
}

// __itt_region_end_init_3_0 @ 14f3dfef0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_region_end_init_3_0(___itt_domain *param_1,___itt_id *param_2)

{
  ___itt_id local_28;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_region_end_ptr__3_0 != (_func___cdecl_void____itt_domain_ptr____itt_id *)0x0) &&
     (__itt_region_end_ptr__3_0 != __itt_region_end_init_3_0)) {
    local_28.d1._0_4_ = (undefined4)param_2->d1;
    local_28.d1._4_4_ = *(undefined4 *)((longlong)&param_2->d1 + 4);
    local_28.d2._0_4_ = (undefined4)param_2->d2;
    local_28.d2._4_4_ = *(undefined4 *)((longlong)&param_2->d2 + 4);
    local_28.d3 = param_2->d3;
    (*__itt_region_end_ptr__3_0)(param_1,&local_28);
  }
  return;
}

// __itt_frame_begin_v3_init_3_0 @ 14f3dff70

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_frame_begin_v3_init_3_0(___itt_domain *param_1,___itt_id *param_2)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_frame_begin_v3_ptr__3_0 != (_func___cdecl_void____itt_domain_ptr____itt_id_ptr *)0x0)
     && (__itt_frame_begin_v3_ptr__3_0 != __itt_frame_begin_v3_init_3_0)) {
    (*__itt_frame_begin_v3_ptr__3_0)(param_1,param_2);
  }
  return;
}

// __itt_frame_end_v3_init_3_0 @ 14f3dffd0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_frame_end_v3_init_3_0(___itt_domain *param_1,___itt_id *param_2)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_frame_end_v3_ptr__3_0 != (_func___cdecl_void____itt_domain_ptr____itt_id_ptr *)0x0) &&
     (__itt_frame_end_v3_ptr__3_0 != __itt_frame_end_v3_init_3_0)) {
    (*__itt_frame_end_v3_ptr__3_0)(param_1,param_2);
  }
  return;
}

// __itt_frame_submit_v3_init_3_0 @ 14f3e0030

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl
__itt_frame_submit_v3_init_3_0
          (___itt_domain *param_1,___itt_id *param_2,ulong64 param_3,ulong64 param_4)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_frame_submit_v3_ptr__3_0 !=
       (_func___cdecl_void____itt_domain_ptr____itt_id_ptr_ulong64_ulong64 *)0x0) &&
     (__itt_frame_submit_v3_ptr__3_0 != __itt_frame_submit_v3_init_3_0)) {
    (*__itt_frame_submit_v3_ptr__3_0)(param_1,param_2,param_3,param_4);
  }
  return;
}

// __itt_task_group_init_3_0 @ 14f3e00b0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl
__itt_task_group_init_3_0
          (___itt_domain *param_1,___itt_id *param_2,___itt_id *param_3,
          ___itt_string_handle *param_4)

{
  ___itt_id local_48;
  ___itt_id local_28;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_task_group_ptr__3_0 !=
       (_func___cdecl_void____itt_domain_ptr____itt_id____itt_id____itt_string_handle_ptr *)0x0) &&
     (__itt_task_group_ptr__3_0 != __itt_task_group_init_3_0)) {
    local_48.d1 = param_3->d1;
    local_48.d2 = param_3->d2;
    local_48.d3 = param_3->d3;
    local_28.d1._0_4_ = (undefined4)param_2->d1;
    local_28.d1._4_4_ = *(undefined4 *)((longlong)&param_2->d1 + 4);
    local_28.d2._0_4_ = (undefined4)param_2->d2;
    local_28.d2._4_4_ = *(undefined4 *)((longlong)&param_2->d2 + 4);
    local_28.d3 = param_2->d3;
    (*__itt_task_group_ptr__3_0)(param_1,&local_28,&local_48,param_4);
  }
  return;
}

// __itt_task_begin_init_3_0 @ 14f3e0160

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl
__itt_task_begin_init_3_0
          (___itt_domain *param_1,___itt_id *param_2,___itt_id *param_3,
          ___itt_string_handle *param_4)

{
  ___itt_id local_48;
  ___itt_id local_28;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_task_begin_ptr__3_0 !=
       (_func___cdecl_void____itt_domain_ptr____itt_id____itt_id____itt_string_handle_ptr *)0x0) &&
     (__itt_task_begin_ptr__3_0 != __itt_task_begin_init_3_0)) {
    local_48.d1 = param_3->d1;
    local_48.d2 = param_3->d2;
    local_48.d3 = param_3->d3;
    local_28.d1._0_4_ = (undefined4)param_2->d1;
    local_28.d1._4_4_ = *(undefined4 *)((longlong)&param_2->d1 + 4);
    local_28.d2._0_4_ = (undefined4)param_2->d2;
    local_28.d2._4_4_ = *(undefined4 *)((longlong)&param_2->d2 + 4);
    local_28.d3 = param_2->d3;
    (*__itt_task_begin_ptr__3_0)(param_1,&local_28,&local_48,param_4);
  }
  return;
}

// __itt_task_begin_fn_init_3_0 @ 14f3e0210

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl
__itt_task_begin_fn_init_3_0
          (___itt_domain *param_1,___itt_id *param_2,___itt_id *param_3,void *param_4)

{
  ___itt_id local_48;
  ___itt_id local_28;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_task_begin_fn_ptr__3_0 !=
       (_func___cdecl_void____itt_domain_ptr____itt_id____itt_id_void_ptr *)0x0) &&
     (__itt_task_begin_fn_ptr__3_0 != __itt_task_begin_fn_init_3_0)) {
    local_48.d1 = param_3->d1;
    local_48.d2 = param_3->d2;
    local_48.d3 = param_3->d3;
    local_28.d1._0_4_ = (undefined4)param_2->d1;
    local_28.d1._4_4_ = *(undefined4 *)((longlong)&param_2->d1 + 4);
    local_28.d2._0_4_ = (undefined4)param_2->d2;
    local_28.d2._4_4_ = *(undefined4 *)((longlong)&param_2->d2 + 4);
    local_28.d3 = param_2->d3;
    (*__itt_task_begin_fn_ptr__3_0)(param_1,&local_28,&local_48,param_4);
  }
  return;
}

// __itt_task_end_init_3_0 @ 14f3e02c0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_task_end_init_3_0(___itt_domain *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_task_end_ptr__3_0 != (_func___cdecl_void____itt_domain_ptr *)0x0) &&
     (__itt_task_end_ptr__3_0 != __itt_task_end_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e0308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_task_end_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_counter_inc_v3_init_3_0 @ 14f3e0320

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_counter_inc_v3_init_3_0(___itt_domain *param_1,___itt_string_handle *param_2)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_counter_inc_v3_ptr__3_0 !=
       (_func___cdecl_void____itt_domain_ptr____itt_string_handle_ptr *)0x0) &&
     (__itt_counter_inc_v3_ptr__3_0 != __itt_counter_inc_v3_init_3_0)) {
    (*__itt_counter_inc_v3_ptr__3_0)(param_1,param_2);
  }
  return;
}

// __itt_counter_inc_delta_v3_init_3_0 @ 14f3e0380

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl
__itt_counter_inc_delta_v3_init_3_0
          (___itt_domain *param_1,___itt_string_handle *param_2,ulong64 param_3)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_counter_inc_delta_v3_ptr__3_0 !=
       (_func___cdecl_void____itt_domain_ptr____itt_string_handle_ptr_ulong64 *)0x0) &&
     (__itt_counter_inc_delta_v3_ptr__3_0 != __itt_counter_inc_delta_v3_init_3_0)) {
    (*__itt_counter_inc_delta_v3_ptr__3_0)(param_1,param_2,param_3);
  }
  return;
}

// __itt_counter_dec_v3_init_3_0 @ 14f3e03f0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_counter_dec_v3_init_3_0(___itt_domain *param_1,___itt_string_handle *param_2)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_counter_dec_v3_ptr__3_0 !=
       (_func___cdecl_void____itt_domain_ptr____itt_string_handle_ptr *)0x0) &&
     (__itt_counter_dec_v3_ptr__3_0 != __itt_counter_dec_v3_init_3_0)) {
    (*__itt_counter_dec_v3_ptr__3_0)(param_1,param_2);
  }
  return;
}

// __itt_counter_dec_delta_v3_init_3_0 @ 14f3e0450

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl
__itt_counter_dec_delta_v3_init_3_0
          (___itt_domain *param_1,___itt_string_handle *param_2,ulong64 param_3)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_counter_dec_delta_v3_ptr__3_0 !=
       (_func___cdecl_void____itt_domain_ptr____itt_string_handle_ptr_ulong64 *)0x0) &&
     (__itt_counter_dec_delta_v3_ptr__3_0 != __itt_counter_dec_delta_v3_init_3_0)) {
    (*__itt_counter_dec_delta_v3_ptr__3_0)(param_1,param_2,param_3);
  }
  return;
}

// __itt_marker_init_3_0 @ 14f3e04c0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl
__itt_marker_init_3_0
          (___itt_domain *param_1,___itt_id *param_2,___itt_string_handle *param_3,
          __itt_scope param_4)

{
  ___itt_id local_28;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_marker_ptr__3_0 !=
       (_func___cdecl_void____itt_domain_ptr____itt_id____itt_string_handle_ptr___itt_scope *)0x0)
     && (__itt_marker_ptr__3_0 != __itt_marker_init_3_0)) {
    local_28.d1._0_4_ = (undefined4)param_2->d1;
    local_28.d1._4_4_ = *(undefined4 *)((longlong)&param_2->d1 + 4);
    local_28.d2._0_4_ = (undefined4)param_2->d2;
    local_28.d2._4_4_ = *(undefined4 *)((longlong)&param_2->d2 + 4);
    local_28.d3 = param_2->d3;
    (*__itt_marker_ptr__3_0)(param_1,&local_28,param_3,param_4);
  }
  return;
}

// __itt_metadata_add_init_3_0 @ 14f3e0560

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl
__itt_metadata_add_init_3_0
          (___itt_domain *param_1,___itt_id *param_2,___itt_string_handle *param_3,
          __itt_metadata_type param_4,ulong64 param_5,void *param_6)

{
  ___itt_id local_28;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_metadata_add_ptr__3_0 !=
       (_func___cdecl_void____itt_domain_ptr____itt_id____itt_string_handle_ptr___itt_metadata_type_ulong64_void_ptr
        *)0x0) && (__itt_metadata_add_ptr__3_0 != __itt_metadata_add_init_3_0)) {
    local_28.d1._0_4_ = (undefined4)param_2->d1;
    local_28.d1._4_4_ = *(undefined4 *)((longlong)&param_2->d1 + 4);
    local_28.d2._0_4_ = (undefined4)param_2->d2;
    local_28.d2._4_4_ = *(undefined4 *)((longlong)&param_2->d2 + 4);
    local_28.d3 = param_2->d3;
    (*__itt_metadata_add_ptr__3_0)(param_1,&local_28,param_3,param_4,param_5,param_6);
  }
  return;
}

// __itt_metadata_str_addA_init_3_0 @ 14f3e0610

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl
__itt_metadata_str_addA_init_3_0
          (___itt_domain *param_1,___itt_id *param_2,___itt_string_handle *param_3,char *param_4,
          ulong64 param_5)

{
  ___itt_id local_28;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_metadata_str_addA_ptr__3_0 !=
       (_func___cdecl_void____itt_domain_ptr____itt_id____itt_string_handle_ptr_char_ptr_ulong64 *)
       0x0) && (__itt_metadata_str_addA_ptr__3_0 != __itt_metadata_str_addA_init_3_0)) {
    local_28.d1._0_4_ = (undefined4)param_2->d1;
    local_28.d1._4_4_ = *(undefined4 *)((longlong)&param_2->d1 + 4);
    local_28.d2._0_4_ = (undefined4)param_2->d2;
    local_28.d2._4_4_ = *(undefined4 *)((longlong)&param_2->d2 + 4);
    local_28.d3 = param_2->d3;
    (*__itt_metadata_str_addA_ptr__3_0)(param_1,&local_28,param_3,param_4,param_5);
  }
  return;
}

// __itt_metadata_str_addW_init_3_0 @ 14f3e06c0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl
__itt_metadata_str_addW_init_3_0
          (___itt_domain *param_1,___itt_id *param_2,___itt_string_handle *param_3,wchar_t *param_4,
          ulong64 param_5)

{
  ___itt_id local_28;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_metadata_str_addW_ptr__3_0 !=
       (_func___cdecl_void____itt_domain_ptr____itt_id____itt_string_handle_ptr_wchar_t_ptr_ulong64
        *)0x0) && (__itt_metadata_str_addW_ptr__3_0 != __itt_metadata_str_addW_init_3_0)) {
    local_28.d1._0_4_ = (undefined4)param_2->d1;
    local_28.d1._4_4_ = *(undefined4 *)((longlong)&param_2->d1 + 4);
    local_28.d2._0_4_ = (undefined4)param_2->d2;
    local_28.d2._4_4_ = *(undefined4 *)((longlong)&param_2->d2 + 4);
    local_28.d3 = param_2->d3;
    (*__itt_metadata_str_addW_ptr__3_0)(param_1,&local_28,param_3,param_4,param_5);
  }
  return;
}

// __itt_relation_add_to_current_init_3_0 @ 14f3e0770

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl
__itt_relation_add_to_current_init_3_0
          (___itt_domain *param_1,__itt_relation param_2,___itt_id *param_3)

{
  ___itt_id local_28;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_relation_add_to_current_ptr__3_0 !=
       (_func___cdecl_void____itt_domain_ptr___itt_relation____itt_id *)0x0) &&
     (__itt_relation_add_to_current_ptr__3_0 != __itt_relation_add_to_current_init_3_0)) {
    local_28.d1._0_4_ = (undefined4)param_3->d1;
    local_28.d1._4_4_ = *(undefined4 *)((longlong)&param_3->d1 + 4);
    local_28.d2._0_4_ = (undefined4)param_3->d2;
    local_28.d2._4_4_ = *(undefined4 *)((longlong)&param_3->d2 + 4);
    local_28.d3 = param_3->d3;
    (*__itt_relation_add_to_current_ptr__3_0)(param_1,param_2,&local_28);
  }
  return;
}

// __itt_relation_add_init_3_0 @ 14f3e0800

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl
__itt_relation_add_init_3_0
          (___itt_domain *param_1,___itt_id *param_2,__itt_relation param_3,___itt_id *param_4)

{
  ___itt_id local_48;
  ___itt_id local_28;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_relation_add_ptr__3_0 !=
       (_func___cdecl_void____itt_domain_ptr____itt_id___itt_relation____itt_id *)0x0) &&
     (__itt_relation_add_ptr__3_0 != __itt_relation_add_init_3_0)) {
    local_48.d1 = param_4->d1;
    local_48.d2 = param_4->d2;
    local_48.d3 = param_4->d3;
    local_28.d1._0_4_ = (undefined4)param_2->d1;
    local_28.d1._4_4_ = *(undefined4 *)((longlong)&param_2->d1 + 4);
    local_28.d2._0_4_ = (undefined4)param_2->d2;
    local_28.d2._4_4_ = *(undefined4 *)((longlong)&param_2->d2 + 4);
    local_28.d3 = param_2->d3;
    (*__itt_relation_add_ptr__3_0)(param_1,&local_28,param_3,&local_48);
  }
  return;
}

// __itt_event_createA_init_3_0 @ 14f3e08b0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

int __cdecl __itt_event_createA_init_3_0(char *param_1,int param_2)

{
  int iVar1;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_event_createA_ptr__3_0 != (_func___cdecl_int_char_ptr_int *)0x0) &&
     (__itt_event_createA_ptr__3_0 != __itt_event_createA_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e0905. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*__itt_event_createA_ptr__3_0)(param_1,param_2);
    return iVar1;
  }
  return 0;
}

// __itt_event_createW_init_3_0 @ 14f3e0920

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

int __cdecl __itt_event_createW_init_3_0(wchar_t *param_1,int param_2)

{
  int iVar1;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_event_createW_ptr__3_0 != (_func___cdecl_int_wchar_t_ptr_int *)0x0) &&
     (__itt_event_createW_ptr__3_0 != __itt_event_createW_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e0975. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*__itt_event_createW_ptr__3_0)(param_1,param_2);
    return iVar1;
  }
  return 0;
}

// __itt_event_start_init_3_0 @ 14f3e0990

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

int __cdecl __itt_event_start_init_3_0(int param_1)

{
  int iVar1;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_event_start_ptr__3_0 != (_func___cdecl_int_int *)0x0) &&
     (__itt_event_start_ptr__3_0 != __itt_event_start_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e09d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*__itt_event_start_ptr__3_0)(param_1);
    return iVar1;
  }
  return 0;
}

// __itt_event_end_init_3_0 @ 14f3e09f0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

int __cdecl __itt_event_end_init_3_0(int param_1)

{
  int iVar1;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_event_end_ptr__3_0 != (_func___cdecl_int_int *)0x0) &&
     (__itt_event_end_ptr__3_0 != __itt_event_end_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e0a36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*__itt_event_end_ptr__3_0)(param_1);
    return iVar1;
  }
  return 0;
}

// __itt_sync_set_nameA_init_3_0 @ 14f3e0a50

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_sync_set_nameA_init_3_0(void *param_1,char *param_2,char *param_3,int param_4)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_sync_set_nameA_ptr__3_0 != (_func___cdecl_void_void_ptr_char_ptr_char_ptr_int *)0x0) &&
     (__itt_sync_set_nameA_ptr__3_0 != __itt_sync_set_nameA_init_3_0)) {
    (*__itt_sync_set_nameA_ptr__3_0)(param_1,param_2,param_3,param_4);
  }
  return;
}

// __itt_sync_set_nameW_init_3_0 @ 14f3e0ad0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl
__itt_sync_set_nameW_init_3_0(void *param_1,wchar_t *param_2,wchar_t *param_3,int param_4)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_sync_set_nameW_ptr__3_0 !=
       (_func___cdecl_void_void_ptr_wchar_t_ptr_wchar_t_ptr_int *)0x0) &&
     (__itt_sync_set_nameW_ptr__3_0 != __itt_sync_set_nameW_init_3_0)) {
    (*__itt_sync_set_nameW_ptr__3_0)(param_1,param_2,param_3,param_4);
  }
  return;
}

// __itt_notify_sync_nameA_init_3_0 @ 14f3e0b50

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

int __cdecl
__itt_notify_sync_nameA_init_3_0
          (void *param_1,char *param_2,int param_3,char *param_4,int param_5,int param_6)

{
  int iVar1;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_notify_sync_nameA_ptr__3_0 ==
       (_func___cdecl_int_void_ptr_char_ptr_int_char_ptr_int_int *)0x0) ||
     (__itt_notify_sync_nameA_ptr__3_0 == __itt_notify_sync_nameA_init_3_0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*__itt_notify_sync_nameA_ptr__3_0)(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return iVar1;
}

// __itt_notify_sync_nameW_init_3_0 @ 14f3e0bf0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

int __cdecl
__itt_notify_sync_nameW_init_3_0
          (void *param_1,wchar_t *param_2,int param_3,wchar_t *param_4,int param_5,int param_6)

{
  int iVar1;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_notify_sync_nameW_ptr__3_0 ==
       (_func___cdecl_int_void_ptr_wchar_t_ptr_int_wchar_t_ptr_int_int *)0x0) ||
     (__itt_notify_sync_nameW_ptr__3_0 == __itt_notify_sync_nameW_init_3_0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*__itt_notify_sync_nameW_ptr__3_0)(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return iVar1;
}

// __itt_notify_sync_prepare_init_3_0 @ 14f3e0c90

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_notify_sync_prepare_init_3_0(void *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_notify_sync_prepare_ptr__3_0 != (_func___cdecl_void_void_ptr *)0x0) &&
     (__itt_notify_sync_prepare_ptr__3_0 != __itt_notify_sync_prepare_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e0cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_notify_sync_prepare_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_notify_sync_cancel_init_3_0 @ 14f3e0cf0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_notify_sync_cancel_init_3_0(void *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_notify_sync_cancel_ptr__3_0 != (_func___cdecl_void_void_ptr *)0x0) &&
     (__itt_notify_sync_cancel_ptr__3_0 != __itt_notify_sync_cancel_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e0d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_notify_sync_cancel_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_notify_sync_acquired_init_3_0 @ 14f3e0d50

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_notify_sync_acquired_init_3_0(void *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_notify_sync_acquired_ptr__3_0 != (_func___cdecl_void_void_ptr *)0x0) &&
     (__itt_notify_sync_acquired_ptr__3_0 != __itt_notify_sync_acquired_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e0d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_notify_sync_acquired_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_notify_sync_releasing_init_3_0 @ 14f3e0db0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_notify_sync_releasing_init_3_0(void *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_notify_sync_releasing_ptr__3_0 != (_func___cdecl_void_void_ptr *)0x0) &&
     (__itt_notify_sync_releasing_ptr__3_0 != __itt_notify_sync_releasing_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e0df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_notify_sync_releasing_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_memory_read_init_3_0 @ 14f3e0e10

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_memory_read_init_3_0(void *param_1,ulong64 param_2)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_memory_read_ptr__3_0 != (_func___cdecl_void_void_ptr_ulong64 *)0x0) &&
     (__itt_memory_read_ptr__3_0 != __itt_memory_read_init_3_0)) {
    (*__itt_memory_read_ptr__3_0)(param_1,param_2);
  }
  return;
}

// __itt_memory_write_init_3_0 @ 14f3e0e70

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_memory_write_init_3_0(void *param_1,ulong64 param_2)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_memory_write_ptr__3_0 != (_func___cdecl_void_void_ptr_ulong64 *)0x0) &&
     (__itt_memory_write_ptr__3_0 != __itt_memory_write_init_3_0)) {
    (*__itt_memory_write_ptr__3_0)(param_1,param_2);
  }
  return;
}

// __itt_memory_update_init_3_0 @ 14f3e0ed0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_memory_update_init_3_0(void *param_1,ulong64 param_2)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_memory_update_ptr__3_0 != (_func___cdecl_void_void_ptr_ulong64 *)0x0) &&
     (__itt_memory_update_ptr__3_0 != __itt_memory_update_init_3_0)) {
    (*__itt_memory_update_ptr__3_0)(param_1,param_2);
  }
  return;
}

// __itt_state_get_init_3_0 @ 14f3e0f30

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

int __cdecl __itt_state_get_init_3_0(void)

{
  int iVar1;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_state_get_ptr__3_0 != (_func___cdecl_int *)0x0) &&
     (__itt_state_get_ptr__3_0 != __itt_state_get_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e0f6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*__itt_state_get_ptr__3_0)();
    return iVar1;
  }
  return 0;
}

// __itt_state_set_init_3_0 @ 14f3e0f80

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

int __cdecl __itt_state_set_init_3_0(int param_1)

{
  int iVar1;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_state_set_ptr__3_0 != (_func___cdecl_int_int *)0x0) &&
     (__itt_state_set_ptr__3_0 != __itt_state_set_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e0fc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*__itt_state_set_ptr__3_0)(param_1);
    return iVar1;
  }
  return 0;
}

// __itt_obj_mode_set_init_3_0 @ 14f3e0fe0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

__itt_obj_state __cdecl __itt_obj_mode_set_init_3_0(__itt_obj_prop param_1,__itt_obj_state param_2)

{
  __itt_obj_state _Var1;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_obj_mode_set_ptr__3_0 !=
       (_func___cdecl___itt_obj_state___itt_obj_prop___itt_obj_state *)0x0) &&
     (__itt_obj_mode_set_ptr__3_0 != __itt_obj_mode_set_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e1033. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    _Var1 = (*__itt_obj_mode_set_ptr__3_0)(param_1,param_2);
    return _Var1;
  }
  return __itt_obj_state_err;
}

// __itt_thr_mode_set_init_3_0 @ 14f3e1050

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

__itt_thr_state __cdecl __itt_thr_mode_set_init_3_0(__itt_thr_prop param_1,__itt_thr_state param_2)

{
  __itt_thr_state _Var1;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_thr_mode_set_ptr__3_0 !=
       (_func___cdecl___itt_thr_state___itt_thr_prop___itt_thr_state *)0x0) &&
     (__itt_thr_mode_set_ptr__3_0 != __itt_thr_mode_set_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e10a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    _Var1 = (*__itt_thr_mode_set_ptr__3_0)(param_1,param_2);
    return _Var1;
  }
  return __itt_thr_state_err;
}

// __itt_frame_createA_init_3_0 @ 14f3e10c0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

__itt_frame_t * __cdecl __itt_frame_createA_init_3_0(char *param_1)

{
  __itt_frame_t *p_Var1;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_frame_createA_ptr__3_0 != (_func___cdecl___itt_frame_t_ptr_char_ptr *)0x0) &&
     (__itt_frame_createA_ptr__3_0 != __itt_frame_createA_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e1108. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    p_Var1 = (*__itt_frame_createA_ptr__3_0)(param_1);
    return p_Var1;
  }
  return (__itt_frame_t *)0x0;
}

// __itt_frame_createW_init_3_0 @ 14f3e1120

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

__itt_frame_t * __cdecl __itt_frame_createW_init_3_0(wchar_t *param_1)

{
  __itt_frame_t *p_Var1;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_frame_createW_ptr__3_0 != (_func___cdecl___itt_frame_t_ptr_wchar_t_ptr *)0x0) &&
     (__itt_frame_createW_ptr__3_0 != __itt_frame_createW_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e1168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    p_Var1 = (*__itt_frame_createW_ptr__3_0)(param_1);
    return p_Var1;
  }
  return (__itt_frame_t *)0x0;
}

// __itt_pt_region_createA_init_3_0 @ 14f3e1180

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

uchar __cdecl __itt_pt_region_createA_init_3_0(char *param_1)

{
  uchar uVar1;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_pt_region_createA_ptr__3_0 != (_func___cdecl_uchar_char_ptr *)0x0) &&
     (__itt_pt_region_createA_ptr__3_0 != __itt_pt_region_createA_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e11c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*__itt_pt_region_createA_ptr__3_0)(param_1);
    return uVar1;
  }
  return '\0';
}

// __itt_pt_region_createW_init_3_0 @ 14f3e11e0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

uchar __cdecl __itt_pt_region_createW_init_3_0(wchar_t *param_1)

{
  uchar uVar1;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_pt_region_createW_ptr__3_0 != (_func___cdecl_uchar_wchar_t_ptr *)0x0) &&
     (__itt_pt_region_createW_ptr__3_0 != __itt_pt_region_createW_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e1228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*__itt_pt_region_createW_ptr__3_0)(param_1);
    return uVar1;
  }
  return '\0';
}

// __itt_frame_begin_init_3_0 @ 14f3e1240

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_frame_begin_init_3_0(__itt_frame_t *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_frame_begin_ptr__3_0 != (_func___cdecl_void___itt_frame_t_ptr *)0x0) &&
     (__itt_frame_begin_ptr__3_0 != __itt_frame_begin_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e1288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_frame_begin_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_frame_end_init_3_0 @ 14f3e12a0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_frame_end_init_3_0(__itt_frame_t *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_frame_end_ptr__3_0 != (_func___cdecl_void___itt_frame_t_ptr *)0x0) &&
     (__itt_frame_end_ptr__3_0 != __itt_frame_end_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e12e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_frame_end_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_counter_destroy_init_3_0 @ 14f3e1300

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_counter_destroy_init_3_0(___itt_counter *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_counter_destroy_ptr__3_0 != (_func___cdecl_void____itt_counter_ptr *)0x0) &&
     (__itt_counter_destroy_ptr__3_0 != __itt_counter_destroy_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e1348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_counter_destroy_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_counter_inc_init_3_0 @ 14f3e1360

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_counter_inc_init_3_0(___itt_counter *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_counter_inc_ptr__3_0 != (_func___cdecl_void____itt_counter_ptr *)0x0) &&
     (__itt_counter_inc_ptr__3_0 != __itt_counter_inc_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e13a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_counter_inc_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_counter_inc_delta_init_3_0 @ 14f3e13c0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_counter_inc_delta_init_3_0(___itt_counter *param_1,ulong64 param_2)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_counter_inc_delta_ptr__3_0 != (_func___cdecl_void____itt_counter_ptr_ulong64 *)0x0) &&
     (__itt_counter_inc_delta_ptr__3_0 != __itt_counter_inc_delta_init_3_0)) {
    (*__itt_counter_inc_delta_ptr__3_0)(param_1,param_2);
  }
  return;
}

// __itt_counter_dec_init_3_0 @ 14f3e1420

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_counter_dec_init_3_0(___itt_counter *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_counter_dec_ptr__3_0 != (_func___cdecl_void____itt_counter_ptr *)0x0) &&
     (__itt_counter_dec_ptr__3_0 != __itt_counter_dec_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e1468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_counter_dec_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_counter_dec_delta_init_3_0 @ 14f3e1480

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_counter_dec_delta_init_3_0(___itt_counter *param_1,ulong64 param_2)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_counter_dec_delta_ptr__3_0 != (_func___cdecl_void____itt_counter_ptr_ulong64 *)0x0) &&
     (__itt_counter_dec_delta_ptr__3_0 != __itt_counter_dec_delta_init_3_0)) {
    (*__itt_counter_dec_delta_ptr__3_0)(param_1,param_2);
  }
  return;
}

// __itt_counter_set_value_init_3_0 @ 14f3e14e0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_counter_set_value_init_3_0(___itt_counter *param_1,void *param_2)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_counter_set_value_ptr__3_0 != (_func___cdecl_void____itt_counter_ptr_void_ptr *)0x0) &&
     (__itt_counter_set_value_ptr__3_0 != __itt_counter_set_value_init_3_0)) {
    (*__itt_counter_set_value_ptr__3_0)(param_1,param_2);
  }
  return;
}

// __itt_counter_set_value_ex_init_3_0 @ 14f3e1540

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl
__itt_counter_set_value_ex_init_3_0
          (___itt_counter *param_1,___itt_clock_domain *param_2,ulong64 param_3,void *param_4)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_counter_set_value_ex_ptr__3_0 !=
       (_func___cdecl_void____itt_counter_ptr____itt_clock_domain_ptr_ulong64_void_ptr *)0x0) &&
     (__itt_counter_set_value_ex_ptr__3_0 != __itt_counter_set_value_ex_init_3_0)) {
    (*__itt_counter_set_value_ex_ptr__3_0)(param_1,param_2,param_3,param_4);
  }
  return;
}

// __itt_mark_createA_init_3_0 @ 14f3e15c0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

int __cdecl __itt_mark_createA_init_3_0(char *param_1)

{
  int iVar1;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_mark_createA_ptr__3_0 != (_func___cdecl_int_char_ptr *)0x0) &&
     (__itt_mark_createA_ptr__3_0 != __itt_mark_createA_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e1608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*__itt_mark_createA_ptr__3_0)(param_1);
    return iVar1;
  }
  return 0;
}

// __itt_mark_createW_init_3_0 @ 14f3e1620

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

int __cdecl __itt_mark_createW_init_3_0(wchar_t *param_1)

{
  int iVar1;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_mark_createW_ptr__3_0 != (_func___cdecl_int_wchar_t_ptr *)0x0) &&
     (__itt_mark_createW_ptr__3_0 != __itt_mark_createW_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e1668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*__itt_mark_createW_ptr__3_0)(param_1);
    return iVar1;
  }
  return 0;
}

// __itt_markA_init_3_0 @ 14f3e1680

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

int __cdecl __itt_markA_init_3_0(int param_1,char *param_2)

{
  int iVar1;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_markA_ptr__3_0 != (_func___cdecl_int_int_char_ptr *)0x0) &&
     (__itt_markA_ptr__3_0 != __itt_markA_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e16d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*__itt_markA_ptr__3_0)(param_1,param_2);
    return iVar1;
  }
  return 0;
}

// __itt_markW_init_3_0 @ 14f3e16f0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

int __cdecl __itt_markW_init_3_0(int param_1,wchar_t *param_2)

{
  int iVar1;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_markW_ptr__3_0 != (_func___cdecl_int_int_wchar_t_ptr *)0x0) &&
     (__itt_markW_ptr__3_0 != __itt_markW_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e1745. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*__itt_markW_ptr__3_0)(param_1,param_2);
    return iVar1;
  }
  return 0;
}

// __itt_mark_off_init_3_0 @ 14f3e1760

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

int __cdecl __itt_mark_off_init_3_0(int param_1)

{
  int iVar1;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_mark_off_ptr__3_0 != (_func___cdecl_int_int *)0x0) &&
     (__itt_mark_off_ptr__3_0 != __itt_mark_off_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e17a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*__itt_mark_off_ptr__3_0)(param_1);
    return iVar1;
  }
  return 0;
}

// __itt_mark_globalA_init_3_0 @ 14f3e17c0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

int __cdecl __itt_mark_globalA_init_3_0(int param_1,char *param_2)

{
  int iVar1;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_mark_globalA_ptr__3_0 != (_func___cdecl_int_int_char_ptr *)0x0) &&
     (__itt_mark_globalA_ptr__3_0 != __itt_mark_globalA_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e1815. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*__itt_mark_globalA_ptr__3_0)(param_1,param_2);
    return iVar1;
  }
  return 0;
}

// __itt_mark_globalW_init_3_0 @ 14f3e1830

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

int __cdecl __itt_mark_globalW_init_3_0(int param_1,wchar_t *param_2)

{
  int iVar1;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_mark_globalW_ptr__3_0 != (_func___cdecl_int_int_wchar_t_ptr *)0x0) &&
     (__itt_mark_globalW_ptr__3_0 != __itt_mark_globalW_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e1885. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*__itt_mark_globalW_ptr__3_0)(param_1,param_2);
    return iVar1;
  }
  return 0;
}

// __itt_mark_global_off_init_3_0 @ 14f3e18a0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

int __cdecl __itt_mark_global_off_init_3_0(int param_1)

{
  int iVar1;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_mark_global_off_ptr__3_0 != (_func___cdecl_int_int *)0x0) &&
     (__itt_mark_global_off_ptr__3_0 != __itt_mark_global_off_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e18e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*__itt_mark_global_off_ptr__3_0)(param_1);
    return iVar1;
  }
  return 0;
}

// __itt_stack_caller_create_init_3_0 @ 14f3e1900

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

___itt_caller * __cdecl __itt_stack_caller_create_init_3_0(void)

{
  ___itt_caller *p_Var1;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_stack_caller_create_ptr__3_0 != (_func___cdecl____itt_caller_ptr *)0x0) &&
     (__itt_stack_caller_create_ptr__3_0 != __itt_stack_caller_create_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e193f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    p_Var1 = (*__itt_stack_caller_create_ptr__3_0)();
    return p_Var1;
  }
  return (___itt_caller *)0x0;
}

// __itt_stack_caller_destroy_init_3_0 @ 14f3e1950

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_stack_caller_destroy_init_3_0(___itt_caller *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_stack_caller_destroy_ptr__3_0 != (_func___cdecl_void____itt_caller_ptr *)0x0) &&
     (__itt_stack_caller_destroy_ptr__3_0 != __itt_stack_caller_destroy_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e1998. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_stack_caller_destroy_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_stack_callee_enter_init_3_0 @ 14f3e19b0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_stack_callee_enter_init_3_0(___itt_caller *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_stack_callee_enter_ptr__3_0 != (_func___cdecl_void____itt_caller_ptr *)0x0) &&
     (__itt_stack_callee_enter_ptr__3_0 != __itt_stack_callee_enter_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e19f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_stack_callee_enter_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_stack_callee_leave_init_3_0 @ 14f3e1a10

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_stack_callee_leave_init_3_0(___itt_caller *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_stack_callee_leave_ptr__3_0 != (_func___cdecl_void____itt_caller_ptr *)0x0) &&
     (__itt_stack_callee_leave_ptr__3_0 != __itt_stack_callee_leave_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e1a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_stack_callee_leave_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_clock_domain_create_init_3_0 @ 14f3e1a70

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

___itt_clock_domain * __cdecl
__itt_clock_domain_create_init_3_0
          (_func___cdecl_void____itt_clock_info_ptr_void_ptr *param_1,void *param_2)

{
  ___itt_clock_domain *p_Var1;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_clock_domain_create_ptr__3_0 !=
       (_func___cdecl____itt_clock_domain_ptr__func___cdecl_void____itt_clock_info_ptr_void_ptr_ptr_void_ptr
        *)0x0) && (__itt_clock_domain_create_ptr__3_0 != __itt_clock_domain_create_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e1ac7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    p_Var1 = (*__itt_clock_domain_create_ptr__3_0)(param_1,param_2);
    return p_Var1;
  }
  return (___itt_clock_domain *)0x0;
}

// __itt_clock_domain_reset_init_3_0 @ 14f3e1ae0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_clock_domain_reset_init_3_0(void)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_clock_domain_reset_ptr__3_0 != (_func___cdecl_void *)0x0) &&
     (__itt_clock_domain_reset_ptr__3_0 != __itt_clock_domain_reset_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e1b1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_clock_domain_reset_ptr__3_0)();
    return;
  }
  return;
}

// __itt_id_create_ex_init_3_0 @ 14f3e1b30

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl
__itt_id_create_ex_init_3_0
          (___itt_domain *param_1,___itt_clock_domain *param_2,ulong64 param_3,___itt_id *param_4)

{
  ___itt_id local_28;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_id_create_ex_ptr__3_0 !=
       (_func___cdecl_void____itt_domain_ptr____itt_clock_domain_ptr_ulong64____itt_id *)0x0) &&
     (__itt_id_create_ex_ptr__3_0 != __itt_id_create_ex_init_3_0)) {
    local_28.d1._0_4_ = (undefined4)param_4->d1;
    local_28.d1._4_4_ = *(undefined4 *)((longlong)&param_4->d1 + 4);
    local_28.d2._0_4_ = (undefined4)param_4->d2;
    local_28.d2._4_4_ = *(undefined4 *)((longlong)&param_4->d2 + 4);
    local_28.d3 = param_4->d3;
    (*__itt_id_create_ex_ptr__3_0)(param_1,param_2,param_3,&local_28);
  }
  return;
}

// __itt_id_destroy_ex_init_3_0 @ 14f3e1bd0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl
__itt_id_destroy_ex_init_3_0
          (___itt_domain *param_1,___itt_clock_domain *param_2,ulong64 param_3,___itt_id *param_4)

{
  ___itt_id local_28;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_id_destroy_ex_ptr__3_0 !=
       (_func___cdecl_void____itt_domain_ptr____itt_clock_domain_ptr_ulong64____itt_id *)0x0) &&
     (__itt_id_destroy_ex_ptr__3_0 != __itt_id_destroy_ex_init_3_0)) {
    local_28.d1._0_4_ = (undefined4)param_4->d1;
    local_28.d1._4_4_ = *(undefined4 *)((longlong)&param_4->d1 + 4);
    local_28.d2._0_4_ = (undefined4)param_4->d2;
    local_28.d2._4_4_ = *(undefined4 *)((longlong)&param_4->d2 + 4);
    local_28.d3 = param_4->d3;
    (*__itt_id_destroy_ex_ptr__3_0)(param_1,param_2,param_3,&local_28);
  }
  return;
}

// __itt_task_begin_ex_init_3_0 @ 14f3e1c70

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl
__itt_task_begin_ex_init_3_0
          (___itt_domain *param_1,___itt_clock_domain *param_2,ulong64 param_3,___itt_id *param_4,
          ___itt_id *param_5,___itt_string_handle *param_6)

{
  ___itt_id local_48;
  ___itt_id local_28;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_task_begin_ex_ptr__3_0 !=
       (_func___cdecl_void____itt_domain_ptr____itt_clock_domain_ptr_ulong64____itt_id____itt_id____itt_string_handle_ptr
        *)0x0) && (__itt_task_begin_ex_ptr__3_0 != __itt_task_begin_ex_init_3_0)) {
    local_48.d1 = param_5->d1;
    local_48.d2 = param_5->d2;
    local_48.d3 = param_5->d3;
    local_28.d1._0_4_ = (undefined4)param_4->d1;
    local_28.d1._4_4_ = *(undefined4 *)((longlong)&param_4->d1 + 4);
    local_28.d2._0_4_ = (undefined4)param_4->d2;
    local_28.d2._4_4_ = *(undefined4 *)((longlong)&param_4->d2 + 4);
    local_28.d3 = param_4->d3;
    (*__itt_task_begin_ex_ptr__3_0)(param_1,param_2,param_3,&local_28,&local_48,param_6);
  }
  return;
}

// __itt_task_begin_fn_ex_init_3_0 @ 14f3e1d40

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl
__itt_task_begin_fn_ex_init_3_0
          (___itt_domain *param_1,___itt_clock_domain *param_2,ulong64 param_3,___itt_id *param_4,
          ___itt_id *param_5,void *param_6)

{
  ___itt_id local_48;
  ___itt_id local_28;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_task_begin_fn_ex_ptr__3_0 !=
       (_func___cdecl_void____itt_domain_ptr____itt_clock_domain_ptr_ulong64____itt_id____itt_id_void_ptr
        *)0x0) && (__itt_task_begin_fn_ex_ptr__3_0 != __itt_task_begin_fn_ex_init_3_0)) {
    local_48.d1 = param_5->d1;
    local_48.d2 = param_5->d2;
    local_48.d3 = param_5->d3;
    local_28.d1._0_4_ = (undefined4)param_4->d1;
    local_28.d1._4_4_ = *(undefined4 *)((longlong)&param_4->d1 + 4);
    local_28.d2._0_4_ = (undefined4)param_4->d2;
    local_28.d2._4_4_ = *(undefined4 *)((longlong)&param_4->d2 + 4);
    local_28.d3 = param_4->d3;
    (*__itt_task_begin_fn_ex_ptr__3_0)(param_1,param_2,param_3,&local_28,&local_48,param_6);
  }
  return;
}

// __itt_task_end_ex_init_3_0 @ 14f3e1e10

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl
__itt_task_end_ex_init_3_0(___itt_domain *param_1,___itt_clock_domain *param_2,ulong64 param_3)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_task_end_ex_ptr__3_0 !=
       (_func___cdecl_void____itt_domain_ptr____itt_clock_domain_ptr_ulong64 *)0x0) &&
     (__itt_task_end_ex_ptr__3_0 != __itt_task_end_ex_init_3_0)) {
    (*__itt_task_end_ex_ptr__3_0)(param_1,param_2,param_3);
  }
  return;
}

// __itt_task_begin_overlapped_init_3_0 @ 14f3e1e80

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl
__itt_task_begin_overlapped_init_3_0
          (___itt_domain *param_1,___itt_id *param_2,___itt_id *param_3,
          ___itt_string_handle *param_4)

{
  ___itt_id local_48;
  ___itt_id local_28;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_task_begin_overlapped_ptr__3_0 !=
       (_func___cdecl_void____itt_domain_ptr____itt_id____itt_id____itt_string_handle_ptr *)0x0) &&
     (__itt_task_begin_overlapped_ptr__3_0 != __itt_task_begin_overlapped_init_3_0)) {
    local_48.d1 = param_3->d1;
    local_48.d2 = param_3->d2;
    local_48.d3 = param_3->d3;
    local_28.d1._0_4_ = (undefined4)param_2->d1;
    local_28.d1._4_4_ = *(undefined4 *)((longlong)&param_2->d1 + 4);
    local_28.d2._0_4_ = (undefined4)param_2->d2;
    local_28.d2._4_4_ = *(undefined4 *)((longlong)&param_2->d2 + 4);
    local_28.d3 = param_2->d3;
    (*__itt_task_begin_overlapped_ptr__3_0)(param_1,&local_28,&local_48,param_4);
  }
  return;
}

// __itt_task_begin_overlapped_ex_init_3_0 @ 14f3e1f30

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl
__itt_task_begin_overlapped_ex_init_3_0
          (___itt_domain *param_1,___itt_clock_domain *param_2,ulong64 param_3,___itt_id *param_4,
          ___itt_id *param_5,___itt_string_handle *param_6)

{
  ___itt_id local_48;
  ___itt_id local_28;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_task_begin_overlapped_ex_ptr__3_0 !=
       (_func___cdecl_void____itt_domain_ptr____itt_clock_domain_ptr_ulong64____itt_id____itt_id____itt_string_handle_ptr
        *)0x0) &&
     (__itt_task_begin_overlapped_ex_ptr__3_0 != __itt_task_begin_overlapped_ex_init_3_0)) {
    local_48.d1 = param_5->d1;
    local_48.d2 = param_5->d2;
    local_48.d3 = param_5->d3;
    local_28.d1._0_4_ = (undefined4)param_4->d1;
    local_28.d1._4_4_ = *(undefined4 *)((longlong)&param_4->d1 + 4);
    local_28.d2._0_4_ = (undefined4)param_4->d2;
    local_28.d2._4_4_ = *(undefined4 *)((longlong)&param_4->d2 + 4);
    local_28.d3 = param_4->d3;
    (*__itt_task_begin_overlapped_ex_ptr__3_0)(param_1,param_2,param_3,&local_28,&local_48,param_6);
  }
  return;
}

// __itt_task_end_overlapped_init_3_0 @ 14f3e2000

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_task_end_overlapped_init_3_0(___itt_domain *param_1,___itt_id *param_2)

{
  ___itt_id local_28;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_task_end_overlapped_ptr__3_0 != (_func___cdecl_void____itt_domain_ptr____itt_id *)0x0)
     && (__itt_task_end_overlapped_ptr__3_0 != __itt_task_end_overlapped_init_3_0)) {
    local_28.d1._0_4_ = (undefined4)param_2->d1;
    local_28.d1._4_4_ = *(undefined4 *)((longlong)&param_2->d1 + 4);
    local_28.d2._0_4_ = (undefined4)param_2->d2;
    local_28.d2._4_4_ = *(undefined4 *)((longlong)&param_2->d2 + 4);
    local_28.d3 = param_2->d3;
    (*__itt_task_end_overlapped_ptr__3_0)(param_1,&local_28);
  }
  return;
}

// __itt_task_end_overlapped_ex_init_3_0 @ 14f3e2080

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl
__itt_task_end_overlapped_ex_init_3_0
          (___itt_domain *param_1,___itt_clock_domain *param_2,ulong64 param_3,___itt_id *param_4)

{
  ___itt_id local_28;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_task_end_overlapped_ex_ptr__3_0 !=
       (_func___cdecl_void____itt_domain_ptr____itt_clock_domain_ptr_ulong64____itt_id *)0x0) &&
     (__itt_task_end_overlapped_ex_ptr__3_0 != __itt_task_end_overlapped_ex_init_3_0)) {
    local_28.d1._0_4_ = (undefined4)param_4->d1;
    local_28.d1._4_4_ = *(undefined4 *)((longlong)&param_4->d1 + 4);
    local_28.d2._0_4_ = (undefined4)param_4->d2;
    local_28.d2._4_4_ = *(undefined4 *)((longlong)&param_4->d2 + 4);
    local_28.d3 = param_4->d3;
    (*__itt_task_end_overlapped_ex_ptr__3_0)(param_1,param_2,param_3,&local_28);
  }
  return;
}

// __itt_marker_ex_init_3_0 @ 14f3e2120

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl
__itt_marker_ex_init_3_0
          (___itt_domain *param_1,___itt_clock_domain *param_2,ulong64 param_3,___itt_id *param_4,
          ___itt_string_handle *param_5,__itt_scope param_6)

{
  ___itt_id local_28;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_marker_ex_ptr__3_0 !=
       (_func___cdecl_void____itt_domain_ptr____itt_clock_domain_ptr_ulong64____itt_id____itt_string_handle_ptr___itt_scope
        *)0x0) && (__itt_marker_ex_ptr__3_0 != __itt_marker_ex_init_3_0)) {
    local_28.d1._0_4_ = (undefined4)param_4->d1;
    local_28.d1._4_4_ = *(undefined4 *)((longlong)&param_4->d1 + 4);
    local_28.d2._0_4_ = (undefined4)param_4->d2;
    local_28.d2._4_4_ = *(undefined4 *)((longlong)&param_4->d2 + 4);
    local_28.d3 = param_4->d3;
    (*__itt_marker_ex_ptr__3_0)(param_1,param_2,param_3,&local_28,param_5,param_6);
  }
  return;
}

// __itt_metadata_add_with_scope_init_3_0 @ 14f3e21d0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl
__itt_metadata_add_with_scope_init_3_0
          (___itt_domain *param_1,__itt_scope param_2,___itt_string_handle *param_3,
          __itt_metadata_type param_4,ulong64 param_5,void *param_6)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_metadata_add_with_scope_ptr__3_0 !=
       (_func___cdecl_void____itt_domain_ptr___itt_scope____itt_string_handle_ptr___itt_metadata_type_ulong64_void_ptr
        *)0x0) && (__itt_metadata_add_with_scope_ptr__3_0 != __itt_metadata_add_with_scope_init_3_0)
     ) {
    (*__itt_metadata_add_with_scope_ptr__3_0)(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}

// __itt_metadata_str_add_with_scopeA_init_3_0 @ 14f3e2270

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl
__itt_metadata_str_add_with_scopeA_init_3_0
          (___itt_domain *param_1,__itt_scope param_2,___itt_string_handle *param_3,char *param_4,
          ulong64 param_5)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_metadata_str_add_with_scopeA_ptr__3_0 !=
       (_func___cdecl_void____itt_domain_ptr___itt_scope____itt_string_handle_ptr_char_ptr_ulong64 *
       )0x0) &&
     (__itt_metadata_str_add_with_scopeA_ptr__3_0 != __itt_metadata_str_add_with_scopeA_init_3_0)) {
    (*__itt_metadata_str_add_with_scopeA_ptr__3_0)(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}

// __itt_metadata_str_add_with_scopeW_init_3_0 @ 14f3e2300

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl
__itt_metadata_str_add_with_scopeW_init_3_0
          (___itt_domain *param_1,__itt_scope param_2,___itt_string_handle *param_3,wchar_t *param_4
          ,ulong64 param_5)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_metadata_str_add_with_scopeW_ptr__3_0 !=
       (_func___cdecl_void____itt_domain_ptr___itt_scope____itt_string_handle_ptr_wchar_t_ptr_ulong64
        *)0x0) &&
     (__itt_metadata_str_add_with_scopeW_ptr__3_0 != __itt_metadata_str_add_with_scopeW_init_3_0)) {
    (*__itt_metadata_str_add_with_scopeW_ptr__3_0)(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}

// __itt_relation_add_to_current_ex_init_3_0 @ 14f3e2390

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl
__itt_relation_add_to_current_ex_init_3_0
          (___itt_domain *param_1,___itt_clock_domain *param_2,ulong64 param_3,
          __itt_relation param_4,___itt_id *param_5)

{
  ___itt_id local_28;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_relation_add_to_current_ex_ptr__3_0 !=
       (_func___cdecl_void____itt_domain_ptr____itt_clock_domain_ptr_ulong64___itt_relation____itt_id
        *)0x0) &&
     (__itt_relation_add_to_current_ex_ptr__3_0 != __itt_relation_add_to_current_ex_init_3_0)) {
    local_28.d1._0_4_ = (undefined4)param_5->d1;
    local_28.d1._4_4_ = *(undefined4 *)((longlong)&param_5->d1 + 4);
    local_28.d2._0_4_ = (undefined4)param_5->d2;
    local_28.d2._4_4_ = *(undefined4 *)((longlong)&param_5->d2 + 4);
    local_28.d3 = param_5->d3;
    (*__itt_relation_add_to_current_ex_ptr__3_0)(param_1,param_2,param_3,param_4,&local_28);
  }
  return;
}

// __itt_relation_add_ex_init_3_0 @ 14f3e2440

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl
__itt_relation_add_ex_init_3_0
          (___itt_domain *param_1,___itt_clock_domain *param_2,ulong64 param_3,___itt_id *param_4,
          __itt_relation param_5,___itt_id *param_6)

{
  ___itt_id local_48;
  ___itt_id local_28;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_relation_add_ex_ptr__3_0 !=
       (_func___cdecl_void____itt_domain_ptr____itt_clock_domain_ptr_ulong64____itt_id___itt_relation____itt_id
        *)0x0) && (__itt_relation_add_ex_ptr__3_0 != __itt_relation_add_ex_init_3_0)) {
    local_48.d1 = param_6->d1;
    local_48.d2 = param_6->d2;
    local_48.d3 = param_6->d3;
    local_28.d1._0_4_ = (undefined4)param_4->d1;
    local_28.d1._4_4_ = *(undefined4 *)((longlong)&param_4->d1 + 4);
    local_28.d2._0_4_ = (undefined4)param_4->d2;
    local_28.d2._4_4_ = *(undefined4 *)((longlong)&param_4->d2 + 4);
    local_28.d3 = param_4->d3;
    (*__itt_relation_add_ex_ptr__3_0)(param_1,param_2,param_3,&local_28,param_5,&local_48);
  }
  return;
}

// __itt_track_group_create_init_3_0 @ 14f3e2510

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

___itt_track_group * __cdecl
__itt_track_group_create_init_3_0(___itt_string_handle *param_1,___itt_track_group_type param_2)

{
  ___itt_track_group *p_Var1;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_track_group_create_ptr__3_0 !=
       (_func___cdecl____itt_track_group_ptr____itt_string_handle_ptr____itt_track_group_type *)0x0)
     && (__itt_track_group_create_ptr__3_0 != __itt_track_group_create_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e2565. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    p_Var1 = (*__itt_track_group_create_ptr__3_0)(param_1,param_2);
    return p_Var1;
  }
  return (___itt_track_group *)0x0;
}

// __itt_track_create_init_3_0 @ 14f3e2580

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

___itt_track * __cdecl
__itt_track_create_init_3_0
          (___itt_track_group *param_1,___itt_string_handle *param_2,___itt_track_type param_3)

{
  ___itt_track *p_Var1;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_track_create_ptr__3_0 !=
       (_func___cdecl____itt_track_ptr____itt_track_group_ptr____itt_string_handle_ptr____itt_track_type
        *)0x0) && (__itt_track_create_ptr__3_0 != __itt_track_create_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e25e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    p_Var1 = (*__itt_track_create_ptr__3_0)(param_1,param_2,param_3);
    return p_Var1;
  }
  return (___itt_track *)0x0;
}

// __itt_set_track_init_3_0 @ 14f3e2610

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_set_track_init_3_0(___itt_track *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_set_track_ptr__3_0 != (_func___cdecl_void____itt_track_ptr *)0x0) &&
     (__itt_set_track_ptr__3_0 != __itt_set_track_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e2658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_set_track_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_api_version_init_3_0 @ 14f3e2670

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

char * __cdecl __itt_api_version_init_3_0(void)

{
  char *pcVar1;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_api_version_ptr__3_0 != (_func___cdecl_char_ptr *)0x0) &&
     (__itt_api_version_ptr__3_0 != __itt_api_version_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e26af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar1 = (*__itt_api_version_ptr__3_0)();
    return pcVar1;
  }
  return (char *)0x0;
}

// __itt_av_saveA_init_3_0 @ 14f3e26c0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

int __cdecl
__itt_av_saveA_init_3_0
          (void *param_1,int param_2,int *param_3,int param_4,char *param_5,int param_6)

{
  int iVar1;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_av_saveA_ptr__3_0 == (_func___cdecl_int_void_ptr_int_int_ptr_int_char_ptr_int *)0x0) ||
     (__itt_av_saveA_ptr__3_0 == __itt_av_saveA_init_3_0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*__itt_av_saveA_ptr__3_0)(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return iVar1;
}

// __itt_av_saveW_init_3_0 @ 14f3e2760

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

int __cdecl
__itt_av_saveW_init_3_0
          (void *param_1,int param_2,int *param_3,int param_4,wchar_t *param_5,int param_6)

{
  int iVar1;
  
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_av_saveW_ptr__3_0 == (_func___cdecl_int_void_ptr_int_int_ptr_int_wchar_t_ptr_int *)0x0)
     || (__itt_av_saveW_ptr__3_0 == __itt_av_saveW_init_3_0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*__itt_av_saveW_ptr__3_0)(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return iVar1;
}

// __itt_module_loadA_init_3_0 @ 14f3e2800

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_module_loadA_init_3_0(void *param_1,void *param_2,char *param_3)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_module_loadA_ptr__3_0 != (_func___cdecl_void_void_ptr_void_ptr_char_ptr *)0x0) &&
     (__itt_module_loadA_ptr__3_0 != __itt_module_loadA_init_3_0)) {
    (*__itt_module_loadA_ptr__3_0)(param_1,param_2,param_3);
  }
  return;
}

// __itt_module_loadW_init_3_0 @ 14f3e2870

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_module_loadW_init_3_0(void *param_1,void *param_2,wchar_t *param_3)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_module_loadW_ptr__3_0 != (_func___cdecl_void_void_ptr_void_ptr_wchar_t_ptr *)0x0) &&
     (__itt_module_loadW_ptr__3_0 != __itt_module_loadW_init_3_0)) {
    (*__itt_module_loadW_ptr__3_0)(param_1,param_2,param_3);
  }
  return;
}

// __itt_module_unload_init_3_0 @ 14f3e28e0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_module_unload_init_3_0(void *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_module_unload_ptr__3_0 != (_func___cdecl_void_void_ptr *)0x0) &&
     (__itt_module_unload_ptr__3_0 != __itt_module_unload_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e2928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_module_unload_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_histogram_submit_init_3_0 @ 14f3e2940

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl
__itt_histogram_submit_init_3_0
          (___itt_histogram *param_1,ulong64 param_2,void *param_3,void *param_4)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_histogram_submit_ptr__3_0 !=
       (_func___cdecl_void____itt_histogram_ptr_ulong64_void_ptr_void_ptr *)0x0) &&
     (__itt_histogram_submit_ptr__3_0 != __itt_histogram_submit_init_3_0)) {
    (*__itt_histogram_submit_ptr__3_0)(param_1,param_2,param_3,param_4);
  }
  return;
}

// __itt_domain_createA_init_3_0 @ 14f3e29c0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

___itt_domain * __cdecl __itt_domain_createA_init_3_0(char *param_1)

{
  ___itt_domain *p_Var1;
  ___itt_domain *p_Var2;
  int iVar3;
  ___itt_domain *p_Var4;
  size_t _MaxCount;
  char *_Dst;
  bool bVar5;
  
  p_Var4 = (___itt_domain *)0x0;
  if (param_1 == (char *)0x0) {
    return (___itt_domain *)0x0;
  }
  if (__itt__ittapi_global.mutex_initialized == 0) {
    LOCK();
    bVar5 = __itt__ittapi_global.atomic_counter == 0;
    if (bVar5) {
      __itt__ittapi_global.atomic_counter = 1;
    }
    UNLOCK();
    if (bVar5) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
      __itt__ittapi_global.mutex_initialized = 1;
    }
    else {
      bVar5 = true;
      while (bVar5) {
        SwitchToThread();
        bVar5 = __itt__ittapi_global.mutex_initialized == 0;
      }
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
  if (__itt__ittapi_global.api_initialized != 0) {
    if ((__itt_domain_createA_ptr__3_0 != (_func___cdecl____itt_domain_ptr_char_ptr *)0x0) &&
       (__itt_domain_createA_ptr__3_0 != __itt_domain_createA_init_3_0)) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
                    /* WARNING: Could not recover jumptable at 0x00014f3e2a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      p_Var4 = (*__itt_domain_createA_ptr__3_0)(param_1);
      return p_Var4;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
    return (___itt_domain *)&dummy_domain;
  }
  iVar3 = __itt_is_collector_available();
  p_Var2 = __itt__ittapi_global.domain_list;
  p_Var1 = p_Var4;
  if (iVar3 != 0) {
    while (p_Var4 = p_Var2, p_Var4 != (___itt_domain *)0x0) {
      if ((p_Var4->nameA != (LPCSTR)0x0) &&
         (iVar3 = lstrcmpA(p_Var4->nameA,param_1), p_Var2 = __itt__ittapi_global.domain_list,
         iVar3 == 0)) goto LAB_14f3e2b72;
      p_Var1 = p_Var4;
      p_Var2 = p_Var4->next;
    }
    p_Var4 = malloc(0x30);
    p_Var2 = __itt__ittapi_global.domain_list;
    if (p_Var4 != (___itt_domain *)0x0) {
      p_Var4->flags = 1;
      _MaxCount = strnlen(param_1,0x1000);
      _Dst = malloc(_MaxCount + 1);
      if (_Dst != (char *)0x0) {
        strncpy_s(_Dst,_MaxCount + 1,param_1,_MaxCount);
      }
      p_Var4->nameA = _Dst;
      p_Var4->nameW = (wchar_t *)0x0;
      p_Var4->extra1 = 0;
      p_Var4->extra2 = (void *)0x0;
      p_Var4->next = (___itt_domain *)0x0;
      p_Var2 = p_Var4;
      if (p_Var1 != (___itt_domain *)0x0) {
        p_Var1->next = p_Var4;
        p_Var2 = __itt__ittapi_global.domain_list;
      }
    }
  }
LAB_14f3e2b72:
  __itt__ittapi_global.domain_list = p_Var2;
  LeaveCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
  return p_Var4;
}

// __itt_domain_createW_init_3_0 @ 14f3e2ba0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

___itt_domain * __cdecl __itt_domain_createW_init_3_0(wchar_t *param_1)

{
  wchar_t wVar1;
  wchar_t wVar2;
  ___itt_domain *p_Var3;
  ___itt_domain *p_Var4;
  ___itt_domain *p_Var5;
  int iVar6;
  ___itt_domain_conflict *p_Var7;
  wchar_t *pwVar8;
  longlong lVar9;
  bool bVar10;
  
  p_Var7 = (___itt_domain_conflict *)0x0;
  if (param_1 == (wchar_t *)0x0) {
    return (___itt_domain *)0x0;
  }
  if (__itt__ittapi_global.mutex_initialized == 0) {
    LOCK();
    bVar10 = __itt__ittapi_global.atomic_counter == 0;
    if (bVar10) {
      __itt__ittapi_global.atomic_counter = 1;
    }
    UNLOCK();
    if (bVar10) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
      __itt__ittapi_global.mutex_initialized = 1;
    }
    else {
      bVar10 = true;
      while (bVar10) {
        SwitchToThread();
        bVar10 = __itt__ittapi_global.mutex_initialized == 0;
      }
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
  if (__itt__ittapi_global.api_initialized == 0) {
    iVar6 = __itt_is_collector_available();
    p_Var4 = __itt__ittapi_global.domain_list;
    p_Var3 = (___itt_domain *)p_Var7;
    p_Var5 = __itt__ittapi_global.domain_list;
    if (iVar6 != 0) {
      while (p_Var7 = (___itt_domain_conflict *)p_Var5,
            (___itt_domain *)p_Var7 != (___itt_domain *)0x0) {
        pwVar8 = ((___itt_domain *)p_Var7)->nameW;
        if (pwVar8 != (wchar_t *)0x0) {
          lVar9 = (longlong)param_1 - (longlong)pwVar8;
          do {
            wVar1 = *pwVar8;
            wVar2 = *(wchar_t *)((longlong)pwVar8 + lVar9);
            if (wVar1 != wVar2) break;
            pwVar8 = pwVar8 + 1;
          } while (wVar2 != L'\0');
          if (wVar1 == wVar2) goto LAB_14f3e2d1e;
        }
        p_Var3 = (___itt_domain *)p_Var7;
        p_Var5 = ((___itt_domain *)p_Var7)->next;
      }
      p_Var7 = malloc(0x30);
      p_Var4 = __itt__ittapi_global.domain_list;
      if ((___itt_domain *)p_Var7 != (___itt_domain *)0x0) {
        ((___itt_domain *)p_Var7)->flags = 1;
        ((___itt_domain *)p_Var7)->nameA = (char *)0x0;
        pwVar8 = _wcsdup(param_1);
        ((___itt_domain *)p_Var7)->nameW = pwVar8;
        ((___itt_domain *)p_Var7)->extra1 = 0;
        ((___itt_domain *)p_Var7)->extra2 = (void *)0x0;
        ((___itt_domain *)p_Var7)->next = (___itt_domain *)0x0;
        p_Var4 = (___itt_domain *)p_Var7;
        if (p_Var3 != (___itt_domain *)0x0) {
          p_Var3->next = (___itt_domain *)p_Var7;
          p_Var4 = __itt__ittapi_global.domain_list;
        }
      }
    }
LAB_14f3e2d1e:
    __itt__ittapi_global.domain_list = p_Var4;
    LeaveCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
  }
  else if ((__itt_domain_createW_ptr__3_0 == (_func___cdecl____itt_domain_ptr_wchar_t_ptr *)0x0) ||
          (__itt_domain_createW_ptr__3_0 == __itt_domain_createW_init_3_0)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
    p_Var7 = &dummy_domain;
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
    p_Var7 = (___itt_domain_conflict *)(*__itt_domain_createW_ptr__3_0)(param_1);
  }
  return (___itt_domain *)p_Var7;
}

// __itt_module_load_with_sections_init_3_0 @ 14f3e2d50

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_module_load_with_sections_init_3_0(___itt_module_object *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if (((__itt_module_load_with_sections_ptr__3_0 !=
        (_func___cdecl_void____itt_module_object_ptr *)0x0) &&
      (__itt_module_load_with_sections_ptr__3_0 != __itt_module_load_with_sections_init_3_0)) &&
     (param_1 != (___itt_module_object *)0x0)) {
    param_1->version = 1;
                    /* WARNING: Could not recover jumptable at 0x00014f3e2da3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_module_load_with_sections_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_module_unload_with_sections_init_3_0 @ 14f3e2dc0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_module_unload_with_sections_init_3_0(___itt_module_object *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if (((__itt_module_unload_with_sections_ptr__3_0 !=
        (_func___cdecl_void____itt_module_object_ptr *)0x0) &&
      (__itt_module_unload_with_sections_ptr__3_0 != __itt_module_unload_with_sections_init_3_0)) &&
     (param_1 != (___itt_module_object *)0x0)) {
    param_1->version = 1;
                    /* WARNING: Could not recover jumptable at 0x00014f3e2e13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_module_unload_with_sections_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_string_handle_createA_init_3_0 @ 14f3e2e30

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

___itt_string_handle * __cdecl __itt_string_handle_createA_init_3_0(char *param_1)

{
  ___itt_string_handle *p_Var1;
  ___itt_string_handle *p_Var2;
  int iVar3;
  ___itt_string_handle *p_Var4;
  size_t _MaxCount;
  char *_Dst;
  bool bVar5;
  
  p_Var4 = (___itt_string_handle *)0x0;
  if (param_1 == (char *)0x0) {
    return (___itt_string_handle *)0x0;
  }
  if (__itt__ittapi_global.mutex_initialized == 0) {
    LOCK();
    bVar5 = __itt__ittapi_global.atomic_counter == 0;
    if (bVar5) {
      __itt__ittapi_global.atomic_counter = 1;
    }
    UNLOCK();
    if (bVar5) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
      __itt__ittapi_global.mutex_initialized = 1;
    }
    else {
      bVar5 = true;
      while (bVar5) {
        SwitchToThread();
        bVar5 = __itt__ittapi_global.mutex_initialized == 0;
      }
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
  if (__itt__ittapi_global.api_initialized != 0) {
    if ((__itt_string_handle_createA_ptr__3_0 !=
         (_func___cdecl____itt_string_handle_ptr_char_ptr *)0x0) &&
       (__itt_string_handle_createA_ptr__3_0 != __itt_string_handle_createA_init_3_0)) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
                    /* WARNING: Could not recover jumptable at 0x00014f3e2eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      p_Var4 = (*__itt_string_handle_createA_ptr__3_0)(param_1);
      return p_Var4;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
    return (___itt_string_handle *)0x0;
  }
  iVar3 = __itt_is_collector_available();
  p_Var2 = __itt__ittapi_global.string_list;
  p_Var1 = p_Var4;
  if (iVar3 != 0) {
    while (p_Var4 = p_Var2, p_Var4 != (___itt_string_handle *)0x0) {
      if ((p_Var4->strA != (LPCSTR)0x0) &&
         (iVar3 = lstrcmpA(p_Var4->strA,param_1), p_Var2 = __itt__ittapi_global.string_list,
         iVar3 == 0)) goto LAB_14f3e2fdd;
      p_Var1 = p_Var4;
      p_Var2 = p_Var4->next;
    }
    p_Var4 = malloc(0x28);
    p_Var2 = __itt__ittapi_global.string_list;
    if (p_Var4 != (___itt_string_handle *)0x0) {
      _MaxCount = strnlen(param_1,0x1000);
      _Dst = malloc(_MaxCount + 1);
      if (_Dst != (char *)0x0) {
        strncpy_s(_Dst,_MaxCount + 1,param_1,_MaxCount);
      }
      p_Var4->strA = _Dst;
      p_Var4->strW = (wchar_t *)0x0;
      p_Var4->extra1 = 0;
      p_Var4->extra2 = (void *)0x0;
      p_Var4->next = (___itt_string_handle *)0x0;
      p_Var2 = p_Var4;
      if (p_Var1 != (___itt_string_handle *)0x0) {
        p_Var1->next = p_Var4;
        p_Var2 = __itt__ittapi_global.string_list;
      }
    }
  }
LAB_14f3e2fdd:
  __itt__ittapi_global.string_list = p_Var2;
  LeaveCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
  return p_Var4;
}

// __itt_string_handle_createW_init_3_0 @ 14f3e3010

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

___itt_string_handle * __cdecl __itt_string_handle_createW_init_3_0(wchar_t *param_1)

{
  wchar_t wVar1;
  wchar_t wVar2;
  ___itt_string_handle *p_Var3;
  ___itt_string_handle *p_Var4;
  ___itt_string_handle *p_Var5;
  int iVar6;
  ___itt_string_handle *p_Var7;
  wchar_t *pwVar8;
  longlong lVar9;
  bool bVar10;
  
  p_Var7 = (___itt_string_handle *)0x0;
  if (param_1 == (wchar_t *)0x0) {
    return (___itt_string_handle *)0x0;
  }
  if (__itt__ittapi_global.mutex_initialized == 0) {
    LOCK();
    bVar10 = __itt__ittapi_global.atomic_counter == 0;
    if (bVar10) {
      __itt__ittapi_global.atomic_counter = 1;
    }
    UNLOCK();
    if (bVar10) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
      __itt__ittapi_global.mutex_initialized = 1;
    }
    else {
      do {
        SwitchToThread();
      } while (__itt__ittapi_global.mutex_initialized == 0);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
  if (__itt__ittapi_global.api_initialized == 0) {
    iVar6 = __itt_is_collector_available();
    p_Var4 = __itt__ittapi_global.string_list;
    p_Var3 = p_Var7;
    p_Var5 = __itt__ittapi_global.string_list;
    if (iVar6 != 0) {
      while (p_Var7 = p_Var5, p_Var7 != (___itt_string_handle *)0x0) {
        pwVar8 = p_Var7->strW;
        if (pwVar8 != (wchar_t *)0x0) {
          lVar9 = (longlong)param_1 - (longlong)pwVar8;
          do {
            wVar1 = *pwVar8;
            wVar2 = *(wchar_t *)((longlong)pwVar8 + lVar9);
            if (wVar1 != wVar2) break;
            pwVar8 = pwVar8 + 1;
          } while (wVar2 != L'\0');
          if (wVar1 == wVar2) goto LAB_14f3e3182;
        }
        p_Var3 = p_Var7;
        p_Var5 = p_Var7->next;
      }
      p_Var7 = malloc(0x28);
      p_Var4 = __itt__ittapi_global.string_list;
      if (p_Var7 != (___itt_string_handle *)0x0) {
        p_Var7->strA = (char *)0x0;
        pwVar8 = _wcsdup(param_1);
        p_Var7->strW = pwVar8;
        p_Var7->extra1 = 0;
        p_Var7->extra2 = (void *)0x0;
        p_Var7->next = (___itt_string_handle *)0x0;
        p_Var4 = p_Var7;
        if (p_Var3 != (___itt_string_handle *)0x0) {
          p_Var3->next = p_Var7;
          p_Var4 = __itt__ittapi_global.string_list;
        }
      }
    }
LAB_14f3e3182:
    __itt__ittapi_global.string_list = p_Var4;
    LeaveCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
  }
  else if ((__itt_string_handle_createW_ptr__3_0 ==
            (_func___cdecl____itt_string_handle_ptr_wchar_t_ptr *)0x0) ||
          (__itt_string_handle_createW_ptr__3_0 == __itt_string_handle_createW_init_3_0)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
    p_Var7 = (___itt_string_handle *)0x0;
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
    p_Var7 = (*__itt_string_handle_createW_ptr__3_0)(param_1);
  }
  return p_Var7;
}

// __itt_counter_createA_init_3_0 @ 14f3e31b0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

___itt_counter * __cdecl __itt_counter_createA_init_3_0(char *param_1,char *param_2)

{
  __itt_counter_info *p_Var1;
  __itt_counter_info *p_Var2;
  int iVar3;
  ___itt_counter *p_Var4;
  __itt_counter_info *p_Var5;
  size_t sVar6;
  char *_Dst;
  __itt_counter_info *_Dst_00;
  bool bVar7;
  
  _Dst_00 = (__itt_counter_info *)0x0;
  if (param_1 == (char *)0x0) {
    return (___itt_counter *)0x0;
  }
  if (__itt__ittapi_global.mutex_initialized == 0) {
    LOCK();
    bVar7 = __itt__ittapi_global.atomic_counter == 0;
    if (bVar7) {
      __itt__ittapi_global.atomic_counter = 1;
    }
    UNLOCK();
    if (bVar7) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
      __itt__ittapi_global.mutex_initialized = 1;
    }
    else {
      bVar7 = true;
      while (bVar7) {
        SwitchToThread();
        bVar7 = __itt__ittapi_global.mutex_initialized == 0;
      }
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
  if (__itt__ittapi_global.api_initialized != 0) {
    if ((__itt_counter_createA_ptr__3_0 != (_func___cdecl____itt_counter_ptr_char_ptr_char_ptr *)0x0
        ) && (__itt_counter_createA_ptr__3_0 != __itt_counter_createA_init_3_0)) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
                    /* WARNING: Could not recover jumptable at 0x00014f3e3274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      p_Var4 = (*__itt_counter_createA_ptr__3_0)(param_1,param_2);
      return p_Var4;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
    return (___itt_counter *)0x0;
  }
  iVar3 = __itt_is_collector_available();
  p_Var5 = _Dst_00;
  p_Var2 = __itt__ittapi_global.counter_list;
  p_Var1 = _Dst_00;
  if (iVar3 != 0) {
    while (p_Var5 = p_Var2, p_Var5 != (__itt_counter_info *)0x0) {
      if (((p_Var5->nameA != (LPCSTR)0x0) && (p_Var5->type == 1)) &&
         (iVar3 = lstrcmpA(p_Var5->nameA,param_1), iVar3 == 0)) {
        if (p_Var5->domainA == (LPCSTR)0x0) {
          bVar7 = param_2 == (char *)0x0;
        }
        else {
          if (param_2 == (char *)0x0) goto LAB_14f3e32f4;
          iVar3 = lstrcmpA(p_Var5->domainA,param_2);
          bVar7 = iVar3 == 0;
        }
        p_Var2 = __itt__ittapi_global.counter_list;
        if (bVar7) goto LAB_14f3e33cf;
      }
LAB_14f3e32f4:
      p_Var1 = p_Var5;
      p_Var2 = p_Var5->next;
    }
    p_Var5 = malloc(0x40);
    p_Var2 = __itt__ittapi_global.counter_list;
    if (p_Var5 != (__itt_counter_info *)0x0) {
      sVar6 = strnlen(param_1,0x1000);
      _Dst = malloc(sVar6 + 1);
      if (_Dst != (char *)0x0) {
        strncpy_s(_Dst,sVar6 + 1,param_1,sVar6);
      }
      p_Var5->nameA = _Dst;
      p_Var5->nameW = (void *)0x0;
      if (param_2 != (char *)0x0) {
        sVar6 = strnlen(param_2,0x1000);
        _Dst_00 = malloc(sVar6 + 1);
        if (_Dst_00 != (__itt_counter_info *)0x0) {
          strncpy_s((char *)_Dst_00,sVar6 + 1,param_2,sVar6);
        }
      }
      p_Var5->domainA = (char *)_Dst_00;
      p_Var5->domainW = (void *)0x0;
      p_Var5->type = 1;
      p_Var5->index = 0;
      p_Var5->next = (__itt_counter_info *)0x0;
      p_Var2 = p_Var5;
      if (p_Var1 != (__itt_counter_info *)0x0) {
        p_Var1->next = p_Var5;
        p_Var2 = __itt__ittapi_global.counter_list;
      }
    }
  }
LAB_14f3e33cf:
  __itt__ittapi_global.counter_list = p_Var2;
  LeaveCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
  return (___itt_counter *)p_Var5;
}

// __itt_counter_createW_init_3_0 @ 14f3e3400

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

___itt_counter * __cdecl __itt_counter_createW_init_3_0(wchar_t *param_1,wchar_t *param_2)

{
  short sVar1;
  short sVar2;
  __itt_counter_info *p_Var3;
  __itt_counter_info *p_Var4;
  __itt_counter_info *p_Var5;
  int iVar6;
  __itt_counter_info *p_Var7;
  short *psVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  bool bVar11;
  
  p_Var7 = (__itt_counter_info *)0x0;
  if (param_1 == (wchar_t *)0x0) {
    return (___itt_counter *)0x0;
  }
  if (__itt__ittapi_global.mutex_initialized == 0) {
    LOCK();
    bVar11 = __itt__ittapi_global.atomic_counter == 0;
    if (bVar11) {
      __itt__ittapi_global.atomic_counter = 1;
    }
    UNLOCK();
    if (bVar11) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
      __itt__ittapi_global.mutex_initialized = 1;
    }
    else {
      bVar11 = true;
      while (bVar11) {
        SwitchToThread();
        bVar11 = __itt__ittapi_global.mutex_initialized == 0;
      }
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
  if (__itt__ittapi_global.api_initialized == 0) {
    iVar6 = __itt_is_collector_available();
    p_Var4 = __itt__ittapi_global.counter_list;
    p_Var3 = p_Var7;
    p_Var5 = __itt__ittapi_global.counter_list;
    if (iVar6 != 0) {
      while (p_Var7 = p_Var5, p_Var7 != (__itt_counter_info *)0x0) {
        psVar8 = p_Var7->nameW;
        if ((psVar8 != (short *)0x0) && (p_Var7->type == 1)) {
          lVar10 = (longlong)param_1 - (longlong)psVar8;
          do {
            sVar1 = *psVar8;
            sVar2 = *(short *)((longlong)psVar8 + lVar10);
            if (sVar1 != sVar2) break;
            psVar8 = psVar8 + 1;
          } while (sVar2 != 0);
          if (sVar1 == sVar2) {
            psVar8 = p_Var7->domainW;
            if (psVar8 == (short *)0x0) {
              bVar11 = param_2 == (wchar_t *)0x0;
            }
            else {
              if (param_2 == (wchar_t *)0x0) goto LAB_14f3e3569;
              lVar10 = (longlong)param_2 - (longlong)psVar8;
              do {
                sVar1 = *psVar8;
                sVar2 = *(short *)((longlong)psVar8 + lVar10);
                if (sVar1 != sVar2) break;
                psVar8 = psVar8 + 1;
              } while (sVar2 != 0);
              bVar11 = sVar1 == sVar2;
            }
            if (bVar11) goto LAB_14f3e35c5;
          }
        }
LAB_14f3e3569:
        p_Var3 = p_Var7;
        p_Var5 = p_Var7->next;
      }
      p_Var7 = malloc(0x40);
      p_Var4 = __itt__ittapi_global.counter_list;
      if (p_Var7 != (__itt_counter_info *)0x0) {
        p_Var7->nameA = (char *)0x0;
        pwVar9 = _wcsdup(param_1);
        p_Var7->nameW = pwVar9;
        p_Var7->domainA = (char *)0x0;
        pwVar9 = _wcsdup(param_2);
        p_Var7->domainW = pwVar9;
        p_Var7->type = 1;
        p_Var7->index = 0;
        p_Var7->next = (__itt_counter_info *)0x0;
        p_Var4 = p_Var7;
        if (p_Var3 != (__itt_counter_info *)0x0) {
          p_Var3->next = p_Var7;
          p_Var4 = __itt__ittapi_global.counter_list;
        }
      }
    }
LAB_14f3e35c5:
    __itt__ittapi_global.counter_list = p_Var4;
    LeaveCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
  }
  else if ((__itt_counter_createW_ptr__3_0 ==
            (_func___cdecl____itt_counter_ptr_wchar_t_ptr_wchar_t_ptr *)0x0) ||
          (__itt_counter_createW_ptr__3_0 == __itt_counter_createW_init_3_0)) {
    LeaveCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
    p_Var7 = (__itt_counter_info *)0x0;
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
    p_Var7 = (__itt_counter_info *)(*__itt_counter_createW_ptr__3_0)(param_1,param_2);
  }
  return (___itt_counter *)p_Var7;
}

// __itt_counter_create_typedA_init_3_0 @ 14f3e35f0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

___itt_counter * __cdecl
__itt_counter_create_typedA_init_3_0(char *param_1,char *param_2,__itt_metadata_type param_3)

{
  __itt_counter_info *p_Var1;
  __itt_counter_info *p_Var2;
  int iVar3;
  ___itt_counter *p_Var4;
  __itt_counter_info *p_Var5;
  size_t sVar6;
  char *_Dst;
  char *_Dst_00;
  bool bVar7;
  
  p_Var5 = (__itt_counter_info *)0x0;
  if (param_1 == (char *)0x0) {
    return (___itt_counter *)0x0;
  }
  if (__itt__ittapi_global.mutex_initialized == 0) {
    LOCK();
    bVar7 = __itt__ittapi_global.atomic_counter == 0;
    if (bVar7) {
      __itt__ittapi_global.atomic_counter = 1;
    }
    UNLOCK();
    if (bVar7) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
      __itt__ittapi_global.mutex_initialized = 1;
    }
    else {
      bVar7 = true;
      while (bVar7) {
        SwitchToThread();
        bVar7 = __itt__ittapi_global.mutex_initialized == 0;
      }
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
  if (__itt__ittapi_global.api_initialized != 0) {
    if ((__itt_counter_create_typedA_ptr__3_0 !=
         (_func___cdecl____itt_counter_ptr_char_ptr_char_ptr___itt_metadata_type *)0x0) &&
       (__itt_counter_create_typedA_ptr__3_0 != __itt_counter_create_typedA_init_3_0)) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
                    /* WARNING: Could not recover jumptable at 0x00014f3e36b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      p_Var4 = (*__itt_counter_create_typedA_ptr__3_0)(param_1,param_2,param_3);
      return p_Var4;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
    return (___itt_counter *)0x0;
  }
  iVar3 = __itt_is_collector_available();
  p_Var2 = __itt__ittapi_global.counter_list;
  if (iVar3 != 0) {
    p_Var1 = (__itt_counter_info *)0x0;
    for (p_Var5 = __itt__ittapi_global.counter_list; p_Var5 != (__itt_counter_info *)0x0;
        p_Var5 = p_Var5->next) {
      if (((p_Var5->nameA != (LPCSTR)0x0) && (p_Var5->type == param_3)) &&
         (iVar3 = lstrcmpA(p_Var5->nameA,param_1), iVar3 == 0)) {
        if (p_Var5->domainA == (LPCSTR)0x0) {
          bVar7 = param_2 == (char *)0x0;
        }
        else {
          if (param_2 == (char *)0x0) goto LAB_14f3e3735;
          iVar3 = lstrcmpA(p_Var5->domainA,param_2);
          bVar7 = iVar3 == 0;
        }
        p_Var2 = __itt__ittapi_global.counter_list;
        if (bVar7) goto LAB_14f3e3813;
      }
LAB_14f3e3735:
      p_Var1 = p_Var5;
    }
    p_Var5 = malloc(0x40);
    p_Var2 = __itt__ittapi_global.counter_list;
    if (p_Var5 != (__itt_counter_info *)0x0) {
      sVar6 = strnlen(param_1,0x1000);
      _Dst = malloc(sVar6 + 1);
      if (_Dst != (char *)0x0) {
        strncpy_s(_Dst,sVar6 + 1,param_1,sVar6);
      }
      _Dst_00 = (char *)0x0;
      p_Var5->nameA = _Dst;
      p_Var5->nameW = (void *)0x0;
      if (param_2 != (char *)0x0) {
        sVar6 = strnlen(param_2,0x1000);
        _Dst_00 = malloc(sVar6 + 1);
        if (_Dst_00 != (char *)0x0) {
          strncpy_s(_Dst_00,sVar6 + 1,param_2,sVar6);
        }
      }
      p_Var5->domainW = (void *)0x0;
      p_Var5->index = 0;
      p_Var5->next = (__itt_counter_info *)0x0;
      p_Var5->domainA = _Dst_00;
      p_Var5->type = param_3;
      p_Var2 = p_Var5;
      if (p_Var1 != (__itt_counter_info *)0x0) {
        p_Var1->next = p_Var5;
        p_Var2 = __itt__ittapi_global.counter_list;
      }
    }
  }
LAB_14f3e3813:
  __itt__ittapi_global.counter_list = p_Var2;
  LeaveCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
  return (___itt_counter *)p_Var5;
}

// __itt_counter_create_typedW_init_3_0 @ 14f3e3840

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

___itt_counter * __cdecl
__itt_counter_create_typedW_init_3_0(wchar_t *param_1,wchar_t *param_2,__itt_metadata_type param_3)

{
  short sVar1;
  short sVar2;
  __itt_counter_info *p_Var3;
  __itt_counter_info *p_Var4;
  __itt_counter_info *p_Var5;
  int iVar6;
  __itt_counter_info *p_Var7;
  short *psVar8;
  wchar_t *pwVar9;
  longlong lVar10;
  bool bVar11;
  
  p_Var7 = (__itt_counter_info *)0x0;
  if (param_1 == (wchar_t *)0x0) {
    p_Var7 = (__itt_counter_info *)0x0;
  }
  else {
    if (__itt__ittapi_global.mutex_initialized == 0) {
      LOCK();
      bVar11 = __itt__ittapi_global.atomic_counter == 0;
      if (bVar11) {
        __itt__ittapi_global.atomic_counter = 1;
      }
      UNLOCK();
      if (bVar11) {
        InitializeCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
        __itt__ittapi_global.mutex_initialized = 1;
      }
      else {
        do {
          SwitchToThread();
        } while (__itt__ittapi_global.mutex_initialized == 0);
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
    if (__itt__ittapi_global.api_initialized == 0) {
      iVar6 = __itt_is_collector_available();
      p_Var4 = __itt__ittapi_global.counter_list;
      p_Var3 = p_Var7;
      p_Var5 = __itt__ittapi_global.counter_list;
      if (iVar6 != 0) {
        while (p_Var7 = p_Var5, p_Var7 != (__itt_counter_info *)0x0) {
          psVar8 = p_Var7->nameW;
          if ((psVar8 != (short *)0x0) && (p_Var7->type == param_3)) {
            lVar10 = (longlong)param_1 - (longlong)psVar8;
            do {
              sVar1 = *psVar8;
              sVar2 = *(short *)((longlong)psVar8 + lVar10);
              if (sVar1 != sVar2) break;
              psVar8 = psVar8 + 1;
            } while (sVar2 != 0);
            if (sVar1 == sVar2) {
              psVar8 = p_Var7->domainW;
              if (psVar8 == (short *)0x0) {
                bVar11 = param_2 == (wchar_t *)0x0;
              }
              else {
                if (param_2 == (wchar_t *)0x0) goto LAB_14f3e39a8;
                lVar10 = (longlong)param_2 - (longlong)psVar8;
                do {
                  sVar1 = *psVar8;
                  sVar2 = *(short *)((longlong)psVar8 + lVar10);
                  if (sVar1 != sVar2) break;
                  psVar8 = psVar8 + 1;
                } while (sVar2 != 0);
                bVar11 = sVar1 == sVar2;
              }
              if (bVar11) goto LAB_14f3e3a02;
            }
          }
LAB_14f3e39a8:
          p_Var3 = p_Var7;
          p_Var5 = p_Var7->next;
        }
        p_Var7 = malloc(0x40);
        p_Var4 = __itt__ittapi_global.counter_list;
        if (p_Var7 != (__itt_counter_info *)0x0) {
          p_Var7->nameA = (char *)0x0;
          pwVar9 = _wcsdup(param_1);
          p_Var7->nameW = pwVar9;
          p_Var7->domainA = (char *)0x0;
          pwVar9 = _wcsdup(param_2);
          p_Var7->domainW = pwVar9;
          p_Var7->type = param_3;
          p_Var7->index = 0;
          p_Var7->next = (__itt_counter_info *)0x0;
          p_Var4 = p_Var7;
          if (p_Var3 != (__itt_counter_info *)0x0) {
            p_Var3->next = p_Var7;
            p_Var4 = __itt__ittapi_global.counter_list;
          }
        }
      }
LAB_14f3e3a02:
      __itt__ittapi_global.counter_list = p_Var4;
      LeaveCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
    }
    else if ((__itt_counter_create_typedW_ptr__3_0 ==
              (_func___cdecl____itt_counter_ptr_wchar_t_ptr_wchar_t_ptr___itt_metadata_type *)0x0)
            || (__itt_counter_create_typedW_ptr__3_0 == __itt_counter_create_typedW_init_3_0)) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
      p_Var7 = (__itt_counter_info *)0x0;
    }
    else {
      LeaveCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
      p_Var7 = (__itt_counter_info *)
               (*__itt_counter_create_typedW_ptr__3_0)(param_1,param_2,param_3);
    }
  }
  return (___itt_counter *)p_Var7;
}

// __itt_pause_init_3_0 @ 14f3e3a40

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_pause_init_3_0(void)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_pause_ptr__3_0 != (_func___cdecl_void *)0x0) &&
     (__itt_pause_ptr__3_0 != __itt_pause_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e3a7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_pause_ptr__3_0)();
    return;
  }
  return;
}

// __itt_resume_init_3_0 @ 14f3e3a90

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_resume_init_3_0(void)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_resume_ptr__3_0 != (_func___cdecl_void *)0x0) &&
     (__itt_resume_ptr__3_0 != __itt_resume_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e3acf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_resume_ptr__3_0)();
    return;
  }
  return;
}

// __itt_pause_scoped_init_3_0 @ 14f3e3ae0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_pause_scoped_init_3_0(__itt_collection_scope param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_pause_scoped_ptr__3_0 != (_func___cdecl_void___itt_collection_scope *)0x0) &&
     (__itt_pause_scoped_ptr__3_0 != __itt_pause_scoped_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e3b26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_pause_scoped_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_resume_scoped_init_3_0 @ 14f3e3b40

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_resume_scoped_init_3_0(__itt_collection_scope param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_resume_scoped_ptr__3_0 != (_func___cdecl_void___itt_collection_scope *)0x0) &&
     (__itt_resume_scoped_ptr__3_0 != __itt_resume_scoped_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e3b86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_resume_scoped_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_thread_set_nameA_init_3_0 @ 14f3e3ba0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_thread_set_nameA_init_3_0(char *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_thread_set_nameA_ptr__3_0 != (_func___cdecl_void_char_ptr *)0x0) &&
     (__itt_thread_set_nameA_ptr__3_0 != __itt_thread_set_nameA_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e3be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_thread_set_nameA_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_thread_set_nameW_init_3_0 @ 14f3e3c00

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_thread_set_nameW_init_3_0(wchar_t *param_1)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_thread_set_nameW_ptr__3_0 != (_func___cdecl_void_wchar_t_ptr *)0x0) &&
     (__itt_thread_set_nameW_ptr__3_0 != __itt_thread_set_nameW_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e3c48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_thread_set_nameW_ptr__3_0)(param_1);
    return;
  }
  return;
}

// __itt_thread_ignore_init_3_0 @ 14f3e3c60

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_thread_ignore_init_3_0(void)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_thread_ignore_ptr__3_0 != (_func___cdecl_void *)0x0) &&
     (__itt_thread_ignore_ptr__3_0 != __itt_thread_ignore_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e3c9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_thread_ignore_ptr__3_0)();
    return;
  }
  return;
}

// __itt_thr_name_setA_init_3_0 @ 14f3e3cb0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

int __cdecl __itt_thr_name_setA_init_3_0(char *param_1,int param_2)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_thread_set_nameA_ptr__3_0 != (_func___cdecl_void_char_ptr *)0x0) &&
     (__itt_thread_set_nameA_ptr__3_0 != __itt_thread_set_nameA_init_3_0)) {
    (*__itt_thread_set_nameA_ptr__3_0)(param_1);
  }
  return 0;
}

// __itt_thr_name_setW_init_3_0 @ 14f3e3d10

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

int __cdecl __itt_thr_name_setW_init_3_0(wchar_t *param_1,int param_2)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_thread_set_nameW_ptr__3_0 != (_func___cdecl_void_wchar_t_ptr *)0x0) &&
     (__itt_thread_set_nameW_ptr__3_0 != __itt_thread_set_nameW_init_3_0)) {
    (*__itt_thread_set_nameW_ptr__3_0)(param_1);
  }
  return 0;
}

// __itt_thr_ignore_init_3_0 @ 14f3e3d70

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_thr_ignore_init_3_0(void)

{
  if ((__itt__ittapi_global.api_initialized == 0) &&
     (__itt__ittapi_global.thread_list == (___itt_thread_info *)0x0)) {
    (*__itt_init_ittlib_ptr)((char *)0x0,__itt_group_all);
  }
  if ((__itt_thread_ignore_ptr__3_0 != (_func___cdecl_void *)0x0) &&
     (__itt_thread_ignore_ptr__3_0 != __itt_thread_ignore_init_3_0)) {
                    /* WARNING: Could not recover jumptable at 0x00014f3e3daf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*__itt_thread_ignore_ptr__3_0)();
    return;
  }
  return;
}

// __itt_histogram_createA_init_3_0 @ 14f3e3dc0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

___itt_histogram * __cdecl
__itt_histogram_createA_init_3_0
          (___itt_domain *param_1,char *param_2,__itt_metadata_type param_3,
          __itt_metadata_type param_4)

{
  ___itt_histogram *p_Var1;
  ___itt_histogram *p_Var2;
  int iVar3;
  ___itt_histogram *p_Var4;
  size_t _MaxCount;
  char *_Dst;
  bool bVar5;
  
  p_Var4 = (___itt_histogram *)0x0;
  if ((param_1 == (___itt_domain *)0x0) || (param_2 == (char *)0x0)) {
    return (___itt_histogram *)0x0;
  }
  if (__itt__ittapi_global.mutex_initialized == 0) {
    LOCK();
    bVar5 = __itt__ittapi_global.atomic_counter == 0;
    if (bVar5) {
      __itt__ittapi_global.atomic_counter = 1;
    }
    UNLOCK();
    if (bVar5) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
      __itt__ittapi_global.mutex_initialized = 1;
    }
    else {
      bVar5 = true;
      while (bVar5) {
        SwitchToThread();
        bVar5 = __itt__ittapi_global.mutex_initialized == 0;
      }
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
  if (__itt__ittapi_global.api_initialized != 0) {
    if ((__itt_histogram_createA_ptr__3_0 !=
         (_func___cdecl____itt_histogram_ptr____itt_domain_ptr_char_ptr___itt_metadata_type___itt_metadata_type
          *)0x0) && (__itt_histogram_createA_ptr__3_0 != __itt_histogram_createA_init_3_0)) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
                    /* WARNING: Could not recover jumptable at 0x00014f3e3e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      p_Var4 = (*__itt_histogram_createA_ptr__3_0)(param_1,param_2,param_3,param_4);
      return p_Var4;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
    return (___itt_histogram *)0x0;
  }
  iVar3 = __itt_is_collector_available();
  p_Var2 = __itt__ittapi_global.histogram_list;
  if (iVar3 != 0) {
    p_Var1 = (___itt_histogram *)0x0;
    for (p_Var4 = __itt__ittapi_global.histogram_list; p_Var4 != (___itt_histogram *)0x0;
        p_Var4 = p_Var4->next) {
      if ((((p_Var4->domain != (___itt_domain *)0x0) && (p_Var4->domain == param_1)) &&
          (p_Var4->nameA != (LPCSTR)0x0)) &&
         (iVar3 = lstrcmpA(p_Var4->nameA,param_2), p_Var2 = __itt__ittapi_global.histogram_list,
         iVar3 == 0)) goto LAB_14f3e3f9a;
      p_Var1 = p_Var4;
    }
    p_Var4 = malloc(0x38);
    p_Var2 = __itt__ittapi_global.histogram_list;
    if (p_Var4 != (___itt_histogram *)0x0) {
      p_Var4->domain = param_1;
      _MaxCount = strnlen(param_2,0x1000);
      _Dst = malloc(_MaxCount + 1);
      if (_Dst != (char *)0x0) {
        strncpy_s(_Dst,_MaxCount + 1,param_2,_MaxCount);
      }
      p_Var4->nameA = _Dst;
      p_Var4->nameW = (void *)0x0;
      p_Var4->x_type = param_3;
      p_Var4->y_type = param_4;
      p_Var4->extra1 = 0;
      p_Var4->extra2 = (void *)0x0;
      p_Var2 = p_Var4;
      if (p_Var1 != (___itt_histogram *)0x0) {
        p_Var1->next = p_Var4;
        p_Var2 = __itt__ittapi_global.histogram_list;
      }
    }
  }
LAB_14f3e3f9a:
  __itt__ittapi_global.histogram_list = p_Var2;
  LeaveCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
  return p_Var4;
}

// __itt_histogram_createW_init_3_0 @ 14f3e3fd0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

___itt_histogram * __cdecl
__itt_histogram_createW_init_3_0
          (___itt_domain *param_1,wchar_t *param_2,__itt_metadata_type param_3,
          __itt_metadata_type param_4)

{
  short sVar1;
  short sVar2;
  ___itt_histogram *p_Var3;
  ___itt_histogram *p_Var4;
  int iVar5;
  ___itt_histogram *p_Var6;
  short *psVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  bool bVar10;
  
  p_Var6 = (___itt_histogram *)0x0;
  if ((param_1 == (___itt_domain *)0x0) || (param_2 == (wchar_t *)0x0)) {
    p_Var6 = (___itt_histogram *)0x0;
  }
  else {
    if (__itt__ittapi_global.mutex_initialized == 0) {
      LOCK();
      bVar10 = __itt__ittapi_global.atomic_counter == 0;
      if (bVar10) {
        __itt__ittapi_global.atomic_counter = 1;
      }
      UNLOCK();
      if (bVar10) {
        InitializeCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
        __itt__ittapi_global.mutex_initialized = 1;
      }
      else {
        bVar10 = true;
        while (bVar10) {
          SwitchToThread();
          bVar10 = __itt__ittapi_global.mutex_initialized == 0;
        }
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
    if (__itt__ittapi_global.api_initialized == 0) {
      iVar5 = __itt_is_collector_available();
      p_Var4 = __itt__ittapi_global.histogram_list;
      if (iVar5 != 0) {
        p_Var3 = (___itt_histogram *)0x0;
        for (p_Var6 = __itt__ittapi_global.histogram_list; p_Var6 != (___itt_histogram *)0x0;
            p_Var6 = p_Var6->next) {
          if (((p_Var6->domain != (___itt_domain *)0x0) && (p_Var6->domain == param_1)) &&
             (psVar7 = p_Var6->nameW, psVar7 != (short *)0x0)) {
            lVar9 = (longlong)param_2 - (longlong)psVar7;
            do {
              sVar1 = *psVar7;
              sVar2 = *(short *)((longlong)psVar7 + lVar9);
              if (sVar1 != sVar2) break;
              psVar7 = psVar7 + 1;
            } while (sVar2 != 0);
            if (sVar1 == sVar2) goto LAB_14f3e4176;
          }
          p_Var3 = p_Var6;
        }
        p_Var6 = malloc(0x38);
        p_Var4 = __itt__ittapi_global.histogram_list;
        if (p_Var6 != (___itt_histogram *)0x0) {
          p_Var6->domain = param_1;
          p_Var6->nameA = (char *)0x0;
          pwVar8 = _wcsdup(param_2);
          p_Var6->nameW = pwVar8;
          p_Var6->x_type = param_3;
          p_Var6->y_type = param_4;
          p_Var6->extra1 = 0;
          p_Var6->extra2 = (void *)0x0;
          p_Var4 = p_Var6;
          if (p_Var3 != (___itt_histogram *)0x0) {
            p_Var3->next = p_Var6;
            p_Var4 = __itt__ittapi_global.histogram_list;
          }
        }
      }
LAB_14f3e4176:
      __itt__ittapi_global.histogram_list = p_Var4;
      LeaveCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
    }
    else if ((__itt_histogram_createW_ptr__3_0 ==
              (_func___cdecl____itt_histogram_ptr____itt_domain_ptr_wchar_t_ptr___itt_metadata_type___itt_metadata_type
               *)0x0) || (__itt_histogram_createW_ptr__3_0 == __itt_histogram_createW_init_3_0)) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
      p_Var6 = (___itt_histogram *)0x0;
    }
    else {
      LeaveCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
      p_Var6 = (*__itt_histogram_createW_ptr__3_0)(param_1,param_2,param_3,param_4);
    }
  }
  return p_Var6;
}

// __itt_enable_attach_init_3_0 @ 14f3e41a0

void __cdecl __itt_enable_attach_init_3_0(void)

{
  return;
}

// __itt_report_error @ 14f3e41b0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_report_error(int param_1)

{
  undefined1 local_res10 [24];
  
  if (__itt__ittapi_global.error_handler != (void *)0x0) {
    (*__itt__ittapi_global.error_handler)(param_1,local_res10);
  }
  return;
}

// __itt_is_collector_available @ 14f3e41f0

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

int __cdecl __itt_is_collector_available(void)

{
  char *pcVar1;
  uint uVar2;
  bool bVar3;
  
  if (__itt__ittapi_global.mutex_initialized == 0) {
    LOCK();
    bVar3 = __itt__ittapi_global.atomic_counter == 0;
    if (bVar3) {
      __itt__ittapi_global.atomic_counter = 1;
    }
    UNLOCK();
    if (bVar3) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
      __itt__ittapi_global.mutex_initialized = 1;
    }
    else {
      bVar3 = true;
      while (bVar3) {
        SwitchToThread();
        bVar3 = __itt__ittapi_global.mutex_initialized == 0;
      }
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
  if (__itt__ittapi_global.state == __itt_collection_uninitialized) {
    pcVar1 = __itt_get_lib_name();
    __itt__ittapi_global.state = (pcVar1 != (char *)0x0) + __itt_collection_collector_absent;
  }
  uVar2 = __itt__ittapi_global.state - __itt_collection_collector_exists;
  LeaveCriticalSection((LPCRITICAL_SECTION)&__itt__ittapi_global.mutex);
  return (int)(uVar2 < 2);
}

// __itt_fsplit @ 14f3e42a0

char * __cdecl __itt_fsplit(char *param_1,char *param_2,char **param_3,int *param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  
  if ((((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) && (param_3 != (char **)0x0)) &&
     (param_4 != (int *)0x0)) {
    iVar4 = 0;
    if (*param_1 != '\0') {
      pcVar3 = param_1;
      while (*param_2 != '\0') {
        pcVar2 = param_2;
        cVar1 = *param_2;
        while (*pcVar3 != cVar1) {
          cVar1 = pcVar2[1];
          pcVar2 = pcVar2 + 1;
          if (cVar1 == '\0') goto LAB_14f3e431d;
        }
        pcVar3 = pcVar3 + 1;
        iVar4 = iVar4 + 1;
        if (*pcVar3 == '\0') break;
      }
    }
LAB_14f3e431d:
    pcVar3 = param_1 + iVar4;
    if (param_1[iVar4] != '\0') {
      *param_4 = 0;
      *param_3 = pcVar3;
      cVar1 = *pcVar3;
      while (cVar1 != '\0') {
        cVar1 = *param_2;
        if (cVar1 != '\0') {
          pcVar2 = param_2;
          do {
            if (*pcVar3 == cVar1) goto LAB_14f3e436e;
            cVar1 = pcVar2[1];
            pcVar2 = pcVar2 + 1;
          } while (cVar1 != '\0');
        }
        *param_4 = *param_4 + 1;
        pcVar3 = pcVar3 + 1;
        iVar4 = iVar4 + 1;
        cVar1 = *pcVar3;
      }
LAB_14f3e436e:
      pcVar3 = param_1 + iVar4;
      if (param_1[iVar4] != '\0') {
        do {
          if (*param_2 == '\0') break;
          pcVar2 = param_2;
          cVar1 = *param_2;
          while (*pcVar3 != cVar1) {
            cVar1 = pcVar2[1];
            pcVar2 = pcVar2 + 1;
            if (cVar1 == '\0') {
              return param_1 + iVar4;
            }
          }
          pcVar3 = pcVar3 + 1;
          iVar4 = iVar4 + 1;
        } while (*pcVar3 != '\0');
      }
      return param_1 + iVar4;
    }
  }
  return (char *)0x0;
}

// __itt_get_env_var @ 14f3e43f0

char * __cdecl __itt_get_env_var(char *param_1)

{
  DWORD DVar1;
  char *pcVar2;
  ulonglong uVar3;
  
  if (param_1 != (char *)0x0) {
    uVar3 = (longlong)&DAT_1553dcff6 - (longlong)env_value;
    DVar1 = GetEnvironmentVariableA(param_1,env_value,(DWORD)uVar3);
    if (uVar3 <= DVar1) {
      __itt_report_error(5);
      return (char *)0x0;
    }
    if (DVar1 != 0) {
      pcVar2 = env_value;
      env_value = env_value + (DVar1 + 1);
      return pcVar2;
    }
    DVar1 = GetLastError();
    if (DVar1 == 0) {
      return env_value;
    }
    if (DVar1 != 0xcb) {
      __itt_report_error(4);
    }
  }
  return (char *)0x0;
}

// __itt_get_lib_name @ 14f3e44c0

char * __cdecl __itt_get_lib_name(void)

{
  DWORD DVar1;
  char *pcVar2;
  ulonglong uVar3;
  
  uVar3 = (longlong)&DAT_1553dcff6 - (longlong)env_value;
  DVar1 = GetEnvironmentVariableA(s_INTEL_LIBITTNOTIFY64_154df2ba8,env_value,(DWORD)uVar3);
  if (uVar3 <= DVar1) {
    __itt_report_error(5);
    return (char *)0x0;
  }
  if (DVar1 != 0) {
    pcVar2 = env_value;
    env_value = env_value + (DVar1 + 1);
    return pcVar2;
  }
  DVar1 = GetLastError();
  if (DVar1 == 0) {
    return env_value;
  }
  if (DVar1 != 0xcb) {
    __itt_report_error(4);
  }
  return (char *)0x0;
}

// __itt_get_groups @ 14f3e4570

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

___itt_group_id __cdecl __itt_get_groups(void)

{
  byte *pbVar1;
  ___itt_group_id _Var2;
  char cVar3;
  int iVar4;
  ___itt_group_id _Var5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  ulonglong uVar11;
  char *pcVar12;
  ulonglong uVar13;
  char cVar14;
  char *pcVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  char local_118 [256];
  
  uVar11 = 0;
  pcVar6 = __itt_get_env_var(s_INTEL_ITTNOTIFY_GROUPS_154df2bc0);
  uVar18 = uVar11;
  pcVar12 = group_alias[0].env_var;
  if (pcVar6 == (char *)0x0) {
    while (pcVar12 != (char *)0x0) {
      pcVar12 = __itt_get_env_var(pcVar12);
      if (pcVar12 != (char *)0x0) {
        return group_alias[(int)uVar18].groups;
      }
      uVar11 = uVar11 + 1;
      uVar18 = (ulonglong)((int)uVar18 + 1);
      pcVar12 = group_alias[uVar11].env_var;
    }
    _Var5 = __itt_group_none;
  }
  else {
LAB_14f3e45c0:
    _Var5 = (___itt_group_id)uVar18;
    cVar3 = (char)DAT_154df2bd8;
    uVar13 = uVar11;
    uVar16 = uVar11;
    if (*pcVar6 != '\0') {
      while (cVar3 != '\0') {
        puVar10 = &DAT_154df2bd8;
        uVar7 = DAT_154df2bd8 & 0xff;
        while (pcVar6[uVar13] != (char)uVar7) {
          pbVar1 = (byte *)((longlong)puVar10 + 1);
          uVar7 = (uint)*pbVar1;
          puVar10 = (undefined4 *)((longlong)puVar10 + 1);
          if (*pbVar1 == 0) goto LAB_14f3e4602;
        }
        uVar13 = uVar13 + 1;
        uVar16 = (ulonglong)((int)uVar16 + 1);
        if (pcVar6[uVar13] == '\0') break;
      }
    }
LAB_14f3e4602:
    cVar14 = pcVar6[uVar13];
    _Var2 = group_list[0].id;
    if (cVar14 != '\0') {
      pcVar12 = pcVar6 + (int)uVar16;
      uVar17 = uVar11;
      do {
        uVar7 = (uint)uVar17;
        if (cVar3 != '\0') {
          uVar8 = DAT_154df2bd8 & 0xff;
          puVar10 = &DAT_154df2bd8;
          do {
            if (cVar14 == (char)uVar8) goto LAB_14f3e4654;
            pbVar1 = (byte *)((longlong)puVar10 + 1);
            uVar8 = (uint)*pbVar1;
            puVar10 = (undefined4 *)((longlong)puVar10 + 1);
          } while (*pbVar1 != 0);
        }
        cVar14 = pcVar6[uVar13 + 1];
        uVar13 = uVar13 + 1;
        uVar16 = (ulonglong)((int)uVar16 + 1);
        uVar7 = uVar7 + 1;
        uVar17 = (ulonglong)uVar7;
      } while (cVar14 != '\0');
LAB_14f3e4654:
      uVar8 = (uint)uVar16;
      pcVar15 = pcVar6 + uVar13;
      cVar14 = pcVar6[uVar13];
      if (cVar14 != '\0') {
        while (uVar8 = (uint)uVar16, cVar3 != '\0') {
          uVar9 = DAT_154df2bd8 & 0xff;
          puVar10 = &DAT_154df2bd8;
          while (cVar14 != (char)uVar9) {
            pbVar1 = (byte *)((longlong)puVar10 + 1);
            uVar9 = (uint)*pbVar1;
            puVar10 = (undefined4 *)((longlong)puVar10 + 1);
            if (*pbVar1 == 0) goto LAB_14f3e4692;
          }
          cVar14 = pcVar15[1];
          pcVar15 = pcVar15 + 1;
          uVar8 = uVar8 + 1;
          uVar16 = (ulonglong)uVar8;
          if (cVar14 == '\0') break;
        }
      }
LAB_14f3e4692:
      pcVar6 = pcVar6 + (int)uVar8;
      if (pcVar6 == (char *)0x0) goto joined_r0x00014f3e472d;
      uVar8 = 0xfe;
      if ((int)uVar7 < 0xfe) {
        uVar8 = uVar7;
      }
      strncpy_s(local_118,0xfe,pcVar12,(longlong)(int)uVar8);
      local_118[(int)uVar8] = '\0';
      uVar13 = uVar11;
      pcVar12 = group_list[0].name;
      while (pcVar12 != (LPCSTR)0x0) {
        iVar4 = lstrcmpA(local_118,pcVar12);
        if (iVar4 == 0) {
          uVar18 = (ulonglong)(_Var5 | group_list[uVar13].id);
          break;
        }
        uVar13 = uVar13 + 1;
        pcVar12 = group_list[uVar13].name;
      }
      goto LAB_14f3e45c0;
    }
joined_r0x00014f3e472d:
    while (_Var2 != __itt_group_none) {
      if ((_Var2 != __itt_group_all) && (_Var2 + ~__itt_group_model < 0xf7f)) {
        uVar18 = (ulonglong)((___itt_group_id)uVar18 | _Var2);
      }
      _Var5 = (___itt_group_id)uVar18;
      uVar11 = uVar11 + 1;
      _Var2 = group_list[uVar11].id;
    }
  }
  return _Var5;
}

// __itt_lib_version @ 14f3e47d0

int __cdecl __itt_lib_version(HINSTANCE__ *param_1)

{
  FARPROC pFVar1;
  
  if (param_1 != (HINSTANCE__ *)0x0) {
    pFVar1 = GetProcAddress((HMODULE)param_1,s___itt_api_init_154df2be0);
    if (pFVar1 != (FARPROC)0x0) {
      return 2;
    }
    pFVar1 = GetProcAddress((HMODULE)param_1,s___itt_api_version_154df2bf0);
    if (pFVar1 != (FARPROC)0x0) {
      return 1;
    }
  }
  return 0;
}

// __itt_nullify_all_pointers @ 14f3e4830

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_nullify_all_pointers(void)

{
  ___itt_api_info *p_Var1;
  longlong lVar2;
  
  if ((__itt__ittapi_global.api_list_ptr)->name != (char *)0x0) {
    lVar2 = 0;
    p_Var1 = __itt__ittapi_global.api_list_ptr;
    do {
      lVar2 = lVar2 + 1;
      *p_Var1->func_ptr = p_Var1->null_func;
      p_Var1 = __itt__ittapi_global.api_list_ptr + lVar2;
    } while (__itt__ittapi_global.api_list_ptr[lVar2].name != (char *)0x0);
  }
  return;
}

// __itt_free_allocated_resources @ 14f3e4870

/* WARNING: Enum "___itt_group_id": Some values do not have unique names */

void __cdecl __itt_free_allocated_resources(void)

{
  ___itt_string_handle *p_Var1;
  ___itt_domain *p_Var2;
  __itt_counter_info *p_Var3;
  ___itt_histogram *p_Var4;
  __itt_counter_info *_Memory;
  ___itt_string_handle *_Memory_00;
  ___itt_histogram *_Memory_01;
  ___itt_domain *_Memory_02;
  
  _Memory_00 = __itt__ittapi_global.string_list;
  while (_Memory_00 != (___itt_string_handle *)0x0) {
    p_Var1 = _Memory_00->next;
    free(_Memory_00->strA);
    free(_Memory_00->strW);
    free(_Memory_00);
    _Memory_00 = p_Var1;
  }
  __itt__ittapi_global.string_list = (___itt_string_handle *)0x0;
  _Memory_02 = __itt__ittapi_global.domain_list;
  while (_Memory_02 != (___itt_domain *)0x0) {
    p_Var2 = _Memory_02->next;
    free(_Memory_02->nameA);
    free(_Memory_02->nameW);
    free(_Memory_02);
    _Memory_02 = p_Var2;
  }
  __itt__ittapi_global.domain_list = (___itt_domain *)0x0;
  _Memory = __itt__ittapi_global.counter_list;
  while (_Memory != (__itt_counter_info *)0x0) {
    p_Var3 = _Memory->next;
    free(_Memory->nameA);
    free(_Memory->domainA);
    free(_Memory->nameW);
    free(_Memory->domainW);
    free(_Memory);
    _Memory = p_Var3;
  }
  __itt__ittapi_global.counter_list = (__itt_counter_info *)0x0;
  _Memory_01 = __itt__ittapi_global.histogram_list;
  while (_Memory_01 != (___itt_histogram *)0x0) {
    p_Var4 = _Memory_01->next;
    free(_Memory_01->nameA);
    free(_Memory_01->nameW);
    free(_Memory_01);
    _Memory_01 = p_Var4;
  }
  __itt__ittapi_global.histogram_list = (___itt_histogram *)0x0;
  return;
}

