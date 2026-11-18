// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libpas
// Functions: 5

// pas_vlog_fd @ 140d85f50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl pas_vlog_fd(int param_1,char *param_2,char *param_3)

{
  code *pcVar1;
  ulong uVar2;
  DWORD DVar3;
  uint uVar4;
  ulong64 *puVar5;
  int *piVar6;
  ulonglong uVar7;
  undefined1 *_Buf;
  bool bVar8;
  undefined1 auStack_468 [32];
  undefined8 local_448;
  char *local_440;
  undefined1 local_438 [1024];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_468;
  uVar2 = pas_thread_that_is_crash_logging;
  do {
    pas_thread_that_is_crash_logging = uVar2;
    if (uVar2 == 0) break;
    DVar3 = GetCurrentThreadId();
    bVar8 = uVar2 != DVar3;
    uVar2 = pas_thread_that_is_crash_logging;
  } while (bVar8);
  puVar5 = __local_stdio_printf_options();
  local_448 = 0;
  _Buf = local_438;
  local_440 = param_3;
  uVar4 = __stdio_common_vsprintf(*puVar5 | 2,_Buf,0x400,param_2);
  if ((int)uVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (uVar4 != 0) {
    uVar7 = 0x3ff;
    if (uVar4 < 0x3ff) {
      uVar7 = (ulonglong)uVar4;
    }
    do {
      while( true ) {
        uVar4 = _write(param_1,_Buf,(uint)uVar7);
        if (-1 < (int)uVar4) break;
        piVar6 = _errno();
        if (*piVar6 != 4) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
      }
      if (uVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      _Buf = _Buf + uVar4;
      uVar7 = uVar7 - uVar4;
    } while (uVar7 != 0);
  }
  if ((local_38 ^ (ulonglong)auStack_468) != __security_cookie.value) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// pas_log_fd @ 140d86060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl pas_log_fd(int param_1,char *param_2)

{
  code *pcVar1;
  char local_res18 [16];
  undefined1 auStack_38 [40];
  char *local_10;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_38;
  local_10 = local_res18;
  pas_vlog_fd(param_1,param_2,local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// pas_vlog @ 140d860b0

void __cdecl pas_vlog(char *param_1,char *param_2)

{
  pas_vlog_fd(1,param_1,param_2);
  return;
}

// pas_log @ 140d860d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl pas_log(char *param_1)

{
  code *pcVar1;
  char local_res10 [24];
  undefined1 auStack_38 [40];
  char *local_10;
  ulonglong local_8;
  
  local_8 = __security_cookie.value ^ (ulonglong)auStack_38;
  local_10 = local_res10;
  pas_vlog_fd(1,param_1,local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == __security_cookie.value) {
    return;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// pas_start_crash_logging @ 140d86130

void __cdecl pas_start_crash_logging(void)

{
  pas_thread_that_is_crash_logging = GetCurrentThreadId();
  LOCK();
  UNLOCK();
  return;
}

