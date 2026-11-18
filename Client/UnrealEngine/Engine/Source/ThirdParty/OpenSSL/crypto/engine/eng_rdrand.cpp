// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// FUN_14f6fd180 @ 14f6fd180

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14f6fd180(undefined8 param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
    return false;
  }
  lVar1 = OPENSSL_ia32_rdrand_bytes(param_1,(longlong)param_2);
  return param_2 == lVar1;
}

// FUN_14f6fd1e0 @ 14f6fd1e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f6fd1e0(void)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = ENGINE_new();
  if (lVar2 != 0) {
    iVar1 = FUN_14f6fd230(lVar2);
    if (iVar1 != 0) {
      return lVar2;
    }
    ENGINE_free(lVar2);
  }
  return 0;
}

// FUN_14f6fd230 @ 14f6fd230

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f6fd230(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = ENGINE_set_id(param_1,PTR_s_rdrand_154df8f80);
  if (iVar1 != 0) {
    iVar1 = ENGINE_set_name(param_1,PTR_s_Intel_RDRAND_engine_154df8f88);
    if (iVar1 != 0) {
      iVar1 = ENGINE_set_flags(param_1,8);
      if (iVar1 != 0) {
        iVar1 = ENGINE_set_init_function(param_1,&LAB_14f6fd340);
        if (iVar1 != 0) {
          iVar1 = ENGINE_set_RAND(param_1,&DAT_154df8f50);
          if (iVar1 != 0) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

// engine_load_rdrand_int @ 14f6fd2c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void engine_load_rdrand_int(void)

{
  int iVar1;
  longlong lVar2;
  
  if (((DAT_15540a9f4 & 0x40000000) != 0) && (lVar2 = ENGINE_new(), lVar2 != 0)) {
    iVar1 = FUN_14f6fd230(lVar2);
    if (iVar1 != 0) {
      ENGINE_add(lVar2);
      ENGINE_free(lVar2);
      ERR_clear_error();
      return;
    }
    ENGINE_free();
    return;
  }
  return;
}

