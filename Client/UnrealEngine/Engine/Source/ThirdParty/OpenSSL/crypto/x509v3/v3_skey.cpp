// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 3

// i2s_ASN1_OCTET_STRING @ 14f782130

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2s_ASN1_OCTET_STRING(undefined8 param_1,undefined4 *param_2)

{
  OPENSSL_buf2hexstr(*(undefined8 *)(param_2 + 2),*param_2);
  return;
}

// FUN_14f782160 @ 14f782160

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_14f782160(undefined8 param_1,int *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 local_70;
  int local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined1 local_58 [64];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f78216c;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  lVar2 = 0;
  do {
    lVar3 = lVar2 + 1;
    if (*(char *)(param_3 + lVar2) != (&s_hash)[lVar2]) {
      lVar2 = s2i_ASN1_OCTET_STRING(param_1,param_2);
      return lVar2;
    }
    lVar2 = lVar3;
  } while (lVar3 != 5);
  lVar2 = ASN1_OCTET_STRING_new();
  if (lVar2 == 0) {
    local_78 = CONCAT44(local_78._4_4_,0x45);
    ERR_put_error(0x22,0x73,0x41,"crypto\\x509v3\\v3_skey.c");
    return 0;
  }
  if (param_2 == (int *)0x0) {
LAB_14f7822b7:
    local_78._0_4_ = 0x4d;
LAB_14f7822bf:
    uVar4 = 0x72;
  }
  else {
    if (*param_2 == 1) {
      return lVar2;
    }
    if (*(longlong *)(param_2 + 6) == 0) {
      if (*(longlong *)(param_2 + 4) == 0) goto LAB_14f7822b7;
      lVar3 = *(longlong *)(*(longlong *)(param_2 + 4) + 0x50);
    }
    else {
      lVar3 = *(longlong *)(*(longlong *)(param_2 + 6) + 0x20);
    }
    if (lVar3 == 0) {
      local_78._0_4_ = 0x57;
      goto LAB_14f7822bf;
    }
    local_78 = lVar3;
    X509_PUBKEY_get0_param(0,&local_60,&local_68,0);
    local_78 = EVP_sha1();
    local_70 = 0;
    iVar1 = EVP_Digest(local_60,(longlong)local_68,local_58,&local_64);
    if (iVar1 == 0) goto LAB_14f7822d9;
    iVar1 = ASN1_OCTET_STRING_set(lVar2,local_58,local_64);
    if (iVar1 != 0) {
      return lVar2;
    }
    local_78 = CONCAT44(local_78._4_4_,0x61);
    uVar4 = 0x41;
  }
  ERR_put_error(0x22,0x73,uVar4,"crypto\\x509v3\\v3_skey.c");
LAB_14f7822d9:
  ASN1_OCTET_STRING_free(lVar2);
  return 0;
}

// s2i_ASN1_OCTET_STRING @ 14f782300

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * s2i_ASN1_OCTET_STRING(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 local_res20 [2];
  undefined8 uVar3;
  
  uVar3 = 0x14f782310;
  puVar1 = (undefined4 *)ASN1_OCTET_STRING_new();
  if (puVar1 == (undefined4 *)0x0) {
    ERR_put_error(0x22,0x70,0x41,"crypto\\x509v3\\v3_skey.c",0x28,uVar3);
    return (undefined4 *)0x0;
  }
  lVar2 = OPENSSL_hexstr2buf(param_3,local_res20);
  *(longlong *)(puVar1 + 2) = lVar2;
  if (lVar2 == 0) {
    ASN1_OCTET_STRING_free(puVar1);
    return (undefined4 *)0x0;
  }
  *puVar1 = local_res20[0];
  return puVar1;
}

