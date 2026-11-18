// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// GetCurrentFiber @ 14f734e80

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

PVOID GetCurrentFiber(void)

{
  return FiberData;
}

// async_fibre_init_dispatcher @ 14f734e90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 async_fibre_init_dispatcher(undefined8 *param_1)

{
  void *pvVar1;
  LPVOID pvVar2;
  
  pvVar2 = ConvertThreadToFiber((LPVOID)0x0);
  *param_1 = pvVar2;
  if (pvVar2 == (LPVOID)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    pvVar1 = FiberData;
    *param_1 = FiberData;
    if (pvVar1 == (void *)0x0) {
      return 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 1) = 1;
  }
  return 1;
}

// async_local_cleanup @ 14f734ef0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void async_local_cleanup(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)async_get_ctx();
  if (((plVar1 != (longlong *)0x0) && (*plVar1 != 0)) && ((int)plVar1[1] != 0)) {
    ConvertFiberToThread();
    *plVar1 = 0;
  }
  return;
}

// async_start_func_win @ 14f734f40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void async_start_func_win(void)

{
  async_start_func();
  return;
}

