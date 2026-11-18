// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 7

// PKCS12_gen_mac @ 14f7bc700

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS12_gen_mac(void)

{
  FUN_14f7bcc70();
  return;
}

// PKCS12_get0_mac @ 14f7bc730

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PKCS12_get0_mac(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4
                    ,longlong param_5)

{
  if (*(undefined8 **)(param_5 + 8) == (undefined8 *)0x0) {
    if (param_1 != (undefined8 *)0x0) {
      *param_1 = 0;
    }
    if (param_2 != (undefined8 *)0x0) {
      *param_2 = 0;
    }
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = 0;
    }
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    X509_SIG_get0(**(undefined8 **)(param_5 + 8),param_2,param_1);
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = *(undefined8 *)(*(longlong *)(param_5 + 8) + 8);
    }
    if (param_4 != (undefined8 *)0x0) {
      *param_4 = *(undefined8 *)(*(longlong *)(param_5 + 8) + 0x10);
      return;
    }
  }
  return;
}

// PKCS12_set_mac @ 14f7bc7e0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
PKCS12_set_mac(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
              undefined4 param_5,undefined4 param_6,longlong param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  code *local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined1 local_78 [64];
  ulonglong local_38;
  undefined8 uStack_28;
  
  uStack_28 = 0x14f7bc7ef;
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (param_7 == 0) {
    param_7 = EVP_sha1();
  }
  local_98 = (undefined4 *)param_7;
  iVar1 = PKCS12_setup_mac(param_1,param_6,param_4,param_5);
  if (iVar1 == 0) {
    local_98 = (undefined4 *)CONCAT44(local_98._4_4_,0xba);
    ERR_put_error(0x23,0x7b,0x6e,"crypto\\pkcs12\\p12_mutl.c");
    uVar2 = 0;
  }
  else {
    local_90 = PKCS12_key_gen_utf8;
    local_98 = local_88;
    iVar1 = FUN_14f7bcc70(param_1,param_2,param_3,local_78);
    if (iVar1 == 0) {
      local_98 = (undefined4 *)CONCAT44(local_98._4_4_,0xc2);
      ERR_put_error(0x23,0x7b,0x6d,"crypto\\pkcs12\\p12_mutl.c");
      uVar2 = 0;
    }
    else {
      X509_SIG_getm(**(undefined8 **)(param_1 + 8),0,&local_80);
      iVar1 = ASN1_OCTET_STRING_set(local_80,local_78,local_88[0]);
      if (iVar1 == 0) {
        local_98 = (undefined4 *)CONCAT44(local_98._4_4_,199);
        ERR_put_error(0x23,0x7b,0x6f,"crypto\\pkcs12\\p12_mutl.c");
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

// PKCS12_setup_mac @ 14f7bc930

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
PKCS12_setup_mac(longlong param_1,int param_2,void *param_3,int param_4,undefined8 param_5)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f7bc94a;
  PKCS12_MAC_DATA_free(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 8) = 0;
  lVar2 = PKCS12_MAC_DATA_new();
  *(longlong *)(param_1 + 8) = lVar2;
  if (lVar2 == 0) {
    return 0;
  }
  if (1 < param_2) {
    lVar2 = ASN1_INTEGER_new();
    *(longlong *)(*(longlong *)(param_1 + 8) + 0x10) = lVar2;
    if (lVar2 == 0) {
      uVar4 = 0xda;
      goto LAB_14f7bc996;
    }
    iVar1 = ASN1_INTEGER_set(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10),param_2);
    if (iVar1 == 0) {
      uVar4 = 0xde;
      goto LAB_14f7bc996;
    }
  }
  iVar1 = 8;
  if (param_4 != 0) {
    iVar1 = param_4;
  }
  lVar2 = CRYPTO_malloc((longlong)iVar1,"crypto\\pkcs12\\p12_mutl.c",0xe4);
  *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 8) = lVar2;
  if (lVar2 == 0) {
    uVar4 = 0xe5;
  }
  else {
    **(int **)(*(longlong *)(param_1 + 8) + 8) = iVar1;
    _Dst = *(void **)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 8);
    if (param_3 == (void *)0x0) {
      iVar1 = RAND_bytes(_Dst,iVar1);
      if (iVar1 < 1) {
        return 0;
      }
    }
    else {
      memcpy(_Dst,param_3,(longlong)iVar1);
    }
    X509_SIG_getm(**(undefined8 **)(param_1 + 8),&local_res8,0);
    uVar4 = EVP_MD_type(param_5);
    uVar3 = OBJ_nid2obj(uVar4);
    iVar1 = X509_ALGOR_set0(local_res8,uVar3,5);
    if (iVar1 != 0) {
      return 1;
    }
    uVar4 = 0xf1;
  }
LAB_14f7bc996:
  ERR_put_error(0x23,0x7a,0x41,"crypto\\pkcs12\\p12_mutl.c",uVar4,uVar5);
  return 0;
}

// PKCS12_verify_mac @ 14f7bcab0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 PKCS12_verify_mac(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  int *local_78;
  code *local_70;
  int local_68 [2];
  undefined8 local_60;
  undefined1 local_58 [64];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f7bcabc;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 8) == 0) {
    local_78 = (int *)CONCAT44(local_78._4_4_,0x9d);
    uVar3 = 0x6c;
  }
  else {
    local_70 = PKCS12_key_gen_utf8;
    local_78 = local_68;
    iVar1 = FUN_14f7bcc70();
    if (iVar1 != 0) {
      X509_SIG_get0(**(undefined8 **)(param_1 + 8),0,&local_60);
      iVar1 = ASN1_STRING_length(local_60);
      if (local_68[0] != iVar1) {
        return 0;
      }
      uVar2 = ASN1_STRING_get0_data(local_60);
      iVar1 = CRYPTO_memcmp(local_58,uVar2,local_68[0]);
      if (iVar1 != 0) {
        return 0;
      }
      return 1;
    }
    local_78 = (int *)CONCAT44(local_78._4_4_,0xa2);
    uVar3 = 0x6d;
  }
  ERR_put_error(0x23,0x7e,uVar3,"crypto\\pkcs12\\p12_mutl.c");
  return 0;
}

// FUN_14f7bcbb0 @ 14f7bcbb0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_14f7bcbb0(void)

{
  int iVar1;
  undefined4 in_stack_00000028;
  int in_stack_00000030;
  undefined4 *in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 *local_80;
  undefined1 local_78 [64];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x14f7bcbbc;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (in_stack_00000030 == 0x20) {
    local_80 = local_78;
    local_88 = 0x60;
    local_90 = in_stack_00000040;
    local_98 = in_stack_00000028;
    iVar1 = PKCS5_PBKDF2_HMAC();
    if (iVar1 != 0) {
      *in_stack_00000038 = local_38;
      in_stack_00000038[1] = uStack_34;
      in_stack_00000038[2] = uStack_30;
      in_stack_00000038[3] = uStack_2c;
      in_stack_00000038[4] = local_28;
      in_stack_00000038[5] = uStack_24;
      in_stack_00000038[6] = uStack_20;
      in_stack_00000038[7] = uStack_1c;
      OPENSSL_cleanse(local_78,0x60);
      return 1;
    }
  }
  return 0;
}

// FUN_14f7bcc70 @ 14f7bcc70

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_14f7bcc70(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,code *param_6)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 uStack_164;
  longlong local_160;
  int local_158;
  undefined4 *local_150;
  longlong local_148;
  undefined4 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  code *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_b8 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  undefined8 uVar14;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_188;
  uVar14 = 0;
  uVar13 = 0;
  local_110 = param_5;
  local_118 = PKCS12_key_gen_utf8;
  if (param_6 != (code *)0x0) {
    local_118 = param_6;
  }
  lVar12 = 0;
  local_138 = param_3;
  local_130 = param_2;
  local_108 = param_4;
  iVar5 = OBJ_obj2nid(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18));
  if (iVar5 != 0x15) {
    _local_168 = CONCAT44(uStack_164,0x5c);
    ERR_put_error(0x23,0x6b,0x79,"crypto\\pkcs12\\p12_mutl.c");
    return 0;
  }
  puVar2 = *(undefined4 **)(*(longlong *)(param_1 + 8) + 8);
  uVar3 = *(undefined8 *)(puVar2 + 2);
  uVar1 = *puVar2;
  uVar6 = 1;
  if (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) != 0) {
    uVar6 = ASN1_INTEGER_get();
  }
  X509_SIG_get0(**(undefined8 **)(param_1 + 8),&local_128,0);
  X509_ALGOR_get0(&local_120,0,0,local_128);
  uVar7 = OBJ_obj2nid(local_120);
  uVar9 = OBJ_nid2sn(uVar7);
  lVar10 = EVP_get_digestbyname(uVar9);
  if (lVar10 == 0) {
    _local_168 = CONCAT44(uStack_164,0x69);
    ERR_put_error(0x23,0x6b,0x76,"crypto\\pkcs12\\p12_mutl.c");
    return 0;
  }
  iVar5 = EVP_MD_size(lVar10);
  iVar8 = EVP_MD_type(lVar10);
  if (iVar5 < 0) {
    return 0;
  }
  if (((iVar8 == 0x329) || (iVar8 - 0x3d6U < 2)) &&
     (lVar11 = ossl_safe_getenv("LEGACY_GOST_PKCS12"), lVar11 == 0)) {
    iVar5 = 0x20;
    local_150 = local_b8;
    local_158 = 0x60;
    local_160 = lVar10;
    local_168 = uVar6;
    iVar8 = PKCS5_PBKDF2_HMAC(local_130,local_138,uVar3,uVar1);
    if (iVar8 == 0) {
      local_168 = 0x77;
      ERR_put_error(0x23,0x6b,0x6b,"crypto\\pkcs12\\p12_mutl.c");
      goto LAB_14f7bcee2;
    }
    local_f8 = local_78;
    uStack_f4 = uStack_74;
    uStack_f0 = uStack_70;
    uStack_ec = uStack_6c;
    local_e8 = local_68;
    uStack_e4 = uStack_64;
    uStack_e0 = uStack_60;
    uStack_dc = uStack_5c;
    OPENSSL_cleanse(local_b8,0x60);
  }
  else {
    local_150 = &local_f8;
    local_160 = CONCAT44(local_160._4_4_,uVar6);
    local_168 = 3;
    local_158 = iVar5;
    local_148 = lVar10;
    iVar8 = (*local_118)(local_130,local_138,uVar3,uVar1);
    if (iVar8 == 0) {
      local_168 = 0x7d;
      ERR_put_error(0x23,0x6b,0x6b,"crypto\\pkcs12\\p12_mutl.c");
      goto LAB_14f7bcee2;
    }
  }
  lVar12 = HMAC_CTX_new();
  uVar13 = uVar14;
  if (lVar12 != 0) {
    local_168 = 0;
    uStack_164 = 0;
    iVar5 = HMAC_Init_ex(lVar12,&local_f8,iVar5,lVar10);
    if ((iVar5 != 0) &&
       (piVar4 = *(int **)(*(longlong *)(param_1 + 0x10) + 0x20),
       iVar5 = HMAC_Update(lVar12,*(undefined8 *)(piVar4 + 2),(longlong)*piVar4), iVar5 != 0)) {
      iVar5 = HMAC_Final(lVar12,local_108,local_110);
      uVar13 = 0;
      if (iVar5 != 0) {
        uVar13 = 1;
      }
    }
  }
LAB_14f7bcee2:
  OPENSSL_cleanse(&local_f8,0x40);
  HMAC_CTX_free(lVar12);
  return uVar13;
}

