// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 11

// EVP_CIPHER_do_all @ 14f6a7af0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_CIPHER_do_all(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0x14f6a7b00;
  OPENSSL_init_crypto(4,0);
  local_18 = param_2;
  local_10 = param_1;
  OBJ_NAME_do_all(2,FUN_14f6a7e00,&local_18);
  return;
}

// EVP_CIPHER_do_all_sorted @ 14f6a7b50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_CIPHER_do_all_sorted(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0x14f6a7b60;
  OPENSSL_init_crypto(4,0);
  local_18 = param_2;
  local_10 = param_1;
  OBJ_NAME_do_all_sorted(2,FUN_14f6a7e00,&local_18);
  return;
}

// EVP_MD_do_all @ 14f6a7bb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_MD_do_all(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0x14f6a7bc0;
  OPENSSL_init_crypto(8,0);
  local_18 = param_2;
  local_10 = param_1;
  OBJ_NAME_do_all(1,FUN_14f6a7e40,&local_18);
  return;
}

// EVP_MD_do_all_sorted @ 14f6a7c10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_MD_do_all_sorted(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0x14f6a7c20;
  OPENSSL_init_crypto(8,0);
  local_18 = param_2;
  local_10 = param_1;
  OBJ_NAME_do_all_sorted(1,FUN_14f6a7e40,&local_18);
  return;
}

// EVP_add_cipher @ 14f6a7c70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_add_cipher(undefined4 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar2 = OBJ_nid2sn(*param_1);
    iVar1 = OBJ_NAME_add(uVar2,2,param_1);
    if (iVar1 != 0) {
      uVar2 = OBJ_nid2ln(*param_1);
      uVar2 = OBJ_NAME_add(uVar2,2,param_1);
      return uVar2;
    }
  }
  return 0;
}

// EVP_add_digest @ 14f6a7cd0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_add_digest(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = OBJ_nid2sn(*param_1);
  iVar1 = OBJ_NAME_add(uVar2,1,param_1);
  if (iVar1 != 0) {
    uVar3 = OBJ_nid2ln(*param_1);
    uVar3 = OBJ_NAME_add(uVar3,1,param_1);
    if ((int)uVar3 != 0) {
      if ((param_1[1] != 0) && (*param_1 != param_1[1])) {
        uVar3 = OBJ_nid2sn();
        iVar1 = OBJ_NAME_add(uVar3,0x8001,uVar2);
        if (iVar1 == 0) {
          return 0;
        }
        uVar3 = OBJ_nid2ln(param_1[1]);
        uVar3 = OBJ_NAME_add(uVar3,0x8001,uVar2);
      }
      return uVar3;
    }
  }
  return 0;
}

// EVP_get_cipherbyname @ 14f6a7d80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_get_cipherbyname(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = OPENSSL_init_crypto(4,0);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = OBJ_NAME_get(param_1,2);
  return uVar2;
}

// EVP_get_digestbyname @ 14f6a7dc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_get_digestbyname(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = OPENSSL_init_crypto(8,0);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = OBJ_NAME_get(param_1,1);
  return uVar2;
}

// FUN_14f6a7e00 @ 14f6a7e00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a7e00(longlong param_1,undefined8 *param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014f6a7e27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_2[1])(0,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f6a7e36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_2[1])(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8),0,*param_2);
  return;
}

// FUN_14f6a7e40 @ 14f6a7e40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14f6a7e40(longlong param_1,undefined8 *param_2)

{
  if (*(int *)(param_1 + 4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014f6a7e67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)param_2[1])(0,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014f6a7e76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_2[1])(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 8),0,*param_2);
  return;
}

// evp_cleanup_int @ 14f6a7e80

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void evp_cleanup_int(void)

{
  OBJ_NAME_cleanup(2);
  OBJ_NAME_cleanup(1);
  OBJ_NAME_cleanup(0xffffffff);
  EVP_PBE_cleanup();
  OBJ_sigid_free();
  evp_app_cleanup_int();
  return;
}

