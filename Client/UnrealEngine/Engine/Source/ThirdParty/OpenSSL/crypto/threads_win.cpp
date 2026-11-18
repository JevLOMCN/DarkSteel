// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 15

// CRYPTO_THREAD_cleanup_local @ 14f6c5a30

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool CRYPTO_THREAD_cleanup_local(DWORD *param_1)

{
  BOOL BVar1;
  
  BVar1 = TlsFree(*param_1);
  return BVar1 != 0;
}

// CRYPTO_THREAD_compare_id @ 14f6c5a60

bool CRYPTO_THREAD_compare_id(int param_1,int param_2)

{
  return param_1 == param_2;
}

// CRYPTO_THREAD_get_current_id @ 14f6c5a70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_THREAD_get_current_id(void)

{
                    /* WARNING: Could not recover jumptable at 0x00014f6c5a81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  GetCurrentThreadId();
  return;
}

// CRYPTO_THREAD_get_local @ 14f6c5a90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

LPVOID CRYPTO_THREAD_get_local(DWORD *param_1)

{
  DWORD dwErrCode;
  LPVOID pvVar1;
  
  dwErrCode = GetLastError();
  pvVar1 = TlsGetValue(*param_1);
  SetLastError(dwErrCode);
  return pvVar1;
}

// CRYPTO_THREAD_init_local @ 14f6c5ae0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool CRYPTO_THREAD_init_local(DWORD *param_1)

{
  DWORD DVar1;
  
  DVar1 = TlsAlloc();
  *param_1 = DVar1;
  return DVar1 != 0xffffffff;
}

// CRYPTO_THREAD_lock_free @ 14f6c5b10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void CRYPTO_THREAD_lock_free(LPCRITICAL_SECTION param_1)

{
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    DeleteCriticalSection(param_1);
    CRYPTO_free(param_1,"crypto\\threads_win.c",0x40);
  }
  return;
}

// CRYPTO_THREAD_lock_new @ 14f6c5b50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

LPCRITICAL_SECTION CRYPTO_THREAD_lock_new(void)

{
  BOOL BVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)CRYPTO_zalloc(0x28,"crypto\\threads_win.c",0x16);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    BVar1 = InitializeCriticalSectionAndSpinCount(lpCriticalSection,0x400);
    if (BVar1 != 0) {
      return lpCriticalSection;
    }
    CRYPTO_free(lpCriticalSection,"crypto\\threads_win.c",0x1e);
  }
  return (LPCRITICAL_SECTION)0x0;
}

// CRYPTO_THREAD_read_lock @ 14f6c5bc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CRYPTO_THREAD_read_lock(LPCRITICAL_SECTION param_1)

{
  EnterCriticalSection(param_1);
  return 1;
}

// CRYPTO_THREAD_run_once @ 14f6c5bf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool CRYPTO_THREAD_run_once(int *param_1,code *param_2)

{
  int iVar1;
  bool bVar2;
  
  if (*param_1 == 2) {
    return true;
  }
  while( true ) {
    LOCK();
    iVar1 = *param_1;
    bVar2 = iVar1 == 0;
    if (bVar2) {
      *param_1 = 1;
      iVar1 = 0;
    }
    UNLOCK();
    if (bVar2) break;
    if (iVar1 != 1) {
      return *param_1 == 2;
    }
  }
  (*param_2)();
  *param_1 = 2;
  return true;
}

// CRYPTO_THREAD_set_local @ 14f6c5c60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool CRYPTO_THREAD_set_local(DWORD *param_1,LPVOID param_2)

{
  BOOL BVar1;
  
  BVar1 = TlsSetValue(*param_1,param_2);
  return BVar1 != 0;
}

// CRYPTO_THREAD_unlock @ 14f6c5c90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CRYPTO_THREAD_unlock(LPCRITICAL_SECTION param_1)

{
  LeaveCriticalSection(param_1);
  return 1;
}

// CRYPTO_THREAD_write_lock @ 14f6c5cc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 CRYPTO_THREAD_write_lock(LPCRITICAL_SECTION param_1)

{
  EnterCriticalSection(param_1);
  return 1;
}

// CRYPTO_atomic_add @ 14f6c5cf0

undefined8 CRYPTO_atomic_add(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  LOCK();
  iVar1 = *param_1;
  *param_1 = *param_1 + param_2;
  UNLOCK();
  *param_3 = iVar1 + param_2;
  return 1;
}

// openssl_get_fork_id @ 14f6c5d10

undefined8 openssl_get_fork_id(void)

{
  return 0;
}

// openssl_init_fork_handlers @ 14f6c5d20

undefined8 openssl_init_fork_handlers(void)

{
  return 0;
}

