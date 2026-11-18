// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 4

// EVP_add_alg_module @ 14f720fa0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_add_alg_module(void)

{
  CONF_module_add("alg_section",FUN_14f720fd0,0);
  return;
}

// FUN_14f720fd0 @ 14f720fd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14f720fd0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int local_res18 [4];
  undefined8 uVar6;
  
  uVar6 = 0x14f720fe0;
  uVar2 = CONF_imodule_get_value();
  lVar3 = NCONF_get_section(param_2,uVar2);
  if (lVar3 == 0) {
    ERR_put_error(6,0xb1,0xa5,"crypto\\evp\\evp_cnf.c",0x1c,uVar6);
    return 0;
  }
  iVar5 = 0;
  iVar1 = OPENSSL_sk_num(lVar3);
  if (0 < iVar1) {
    do {
      lVar4 = OPENSSL_sk_value(lVar3,iVar5);
      iVar1 = strcmp(*(char **)(lVar4 + 8),"fips_mode");
      if (iVar1 == 0) {
        iVar1 = X509V3_get_value_bool(lVar4,local_res18);
        if (iVar1 == 0) {
          ERR_put_error(6,0xb1,0xa8,"crypto\\evp\\evp_cnf.c",0x24);
          return 0;
        }
        if (0 < local_res18[0]) {
          ERR_put_error(6,0xb1,0xa7,"crypto\\evp\\evp_cnf.c",0x28);
          return 0;
        }
      }
      else {
        ERR_put_error(6,0xb1,0xa9,"crypto\\evp\\evp_cnf.c",0x2c);
        ERR_add_error_data(4,"name=",*(undefined8 *)(lVar4 + 8),", value=",
                           *(undefined8 *)(lVar4 + 0x10));
      }
      iVar5 = iVar5 + 1;
      iVar1 = OPENSSL_sk_num(lVar3);
    } while (iVar5 < iVar1);
  }
  return 1;
}

// FUN_14f721160 @ 14f721160

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f721160(void)

{
  OPENSSL_sk_num();
  return;
}

// FUN_14f721180 @ 14f721180

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f721180(void)

{
  OPENSSL_sk_value();
  return;
}

