// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 7

// RAND_event @ 14f7235c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RAND_event(void)

{
  RAND_poll();
  RAND_status();
  return;
}

// RAND_screen @ 14f7235f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RAND_screen(void)

{
  RAND_poll();
  return;
}

// rand_pool_acquire_entropy @ 14f723610

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void rand_pool_acquire_entropy(undefined8 param_1)

{
  NTSTATUS NVar1;
  longlong lVar2;
  PUCHAR pbBuffer;
  longlong lVar3;
  
  lVar2 = rand_pool_bytes_needed(param_1,1);
  pbBuffer = (PUCHAR)rand_pool_add_begin(param_1,lVar2);
  if (pbBuffer != (PUCHAR)0x0) {
    NVar1 = BCryptGenRandom((BCRYPT_ALG_HANDLE)0x0,pbBuffer,(ULONG)lVar2,2);
    lVar3 = 0;
    if (NVar1 == 0) {
      lVar3 = lVar2;
    }
    rand_pool_add_end(param_1,lVar3,lVar3 * 8);
    lVar2 = rand_pool_entropy_available(param_1);
    if (lVar2 != 0) {
      return;
    }
  }
  rand_pool_entropy_available(param_1);
  return;
}

// rand_pool_add_additional_data @ 14f7236a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void rand_pool_add_additional_data(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  DWORD local_28 [2];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f7236ac;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_20.QuadPart = 0;
  local_28[0] = GetCurrentThreadId();
  QueryPerformanceCounter(&local_20);
  rand_pool_add(param_1,local_28,0x10);
  return;
}

// rand_pool_add_nonce_data @ 14f723720

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void rand_pool_add_nonce_data(undefined8 param_1)

{
  DWORD DVar1;
  undefined1 auStack_48 [32];
  DWORD local_28;
  undefined1 local_24 [8];
  undefined4 local_1c;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f72372c;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  local_28 = 0;
  local_24 = (undefined1  [8])0x0;
  local_1c = 0;
  local_28 = GetCurrentProcessId();
  DVar1 = GetCurrentThreadId();
  local_24._0_4_ = DVar1;
  GetSystemTimeAsFileTime((LPFILETIME)(local_24 + 4));
  rand_pool_add(param_1,&local_28,0x10);
  return;
}

// rand_pool_cleanup @ 14f7237a0

void rand_pool_cleanup(void)

{
  return;
}

// rand_pool_init @ 14f7237b0

undefined8 rand_pool_init(void)

{
  return 1;
}

