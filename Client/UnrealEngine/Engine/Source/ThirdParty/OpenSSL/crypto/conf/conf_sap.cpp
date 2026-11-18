// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 3

// OPENSSL_config @ 14f6fc190

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OPENSSL_config(char *param_1)

{
  undefined8 local_28;
  char *local_20;
  undefined8 local_18;
  undefined8 uStack_8;
  
  uStack_8 = 0x14f6fc19a;
  local_28 = 0;
  local_20 = (char *)0x0;
  local_18 = 0;
  if (param_1 != (char *)0x0) {
    local_20 = _strdup(param_1);
  }
  local_18 = CONCAT44(local_18._4_4_,0x32);
  OPENSSL_init_crypto(0x40,&local_28);
  return;
}

// openssl_config_int @ 14f6fc1e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 openssl_config_int(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (DAT_1553e2c8c != 0) {
    return 1;
  }
  if (param_1 == (undefined8 *)0x0) {
    uVar1 = 0;
    uVar2 = 0x32;
    uVar3 = uVar1;
  }
  else {
    uVar1 = *param_1;
    uVar2 = *(undefined4 *)(param_1 + 2);
    uVar3 = param_1[1];
  }
  OPENSSL_load_builtin_modules();
  ENGINE_load_builtin_engines();
  ERR_clear_error();
  uVar1 = CONF_modules_load_file(uVar1,uVar3,uVar2);
  DAT_1553e2c8c = 1;
  return uVar1;
}

// openssl_no_config_int @ 14f6fc270

void openssl_no_config_int(void)

{
  DAT_1553e2c8c = 1;
  return;
}

