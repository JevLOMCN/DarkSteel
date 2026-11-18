// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 47

// EVP_CIPHER_CTX_block_size @ 14f6c0350

undefined4 EVP_CIPHER_CTX_block_size(longlong *param_1)

{
  return *(undefined4 *)(*param_1 + 4);
}

// EVP_CIPHER_CTX_buf_noconst @ 14f6c0360

longlong EVP_CIPHER_CTX_buf_noconst(longlong param_1)

{
  return param_1 + 0x38;
}

// EVP_CIPHER_CTX_cipher @ 14f6c0370

undefined8 EVP_CIPHER_CTX_cipher(undefined8 *param_1)

{
  return *param_1;
}

// EVP_CIPHER_CTX_encrypting @ 14f6c0390

undefined4 EVP_CIPHER_CTX_encrypting(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}

// EVP_CIPHER_CTX_get_cipher_data @ 14f6c03b0

undefined8 EVP_CIPHER_CTX_get_cipher_data(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}

// EVP_CIPHER_CTX_iv_length @ 14f6c03d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 EVP_CIPHER_CTX_iv_length(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_res8 [8];
  
  if ((*(uint *)(*param_1 + 0x10) & 0x800) != 0) {
    iVar1 = EVP_CIPHER_CTX_ctrl(param_1,0x25,0,local_res8,0x14f6c03da);
    uVar2 = 0xffffffff;
    if (iVar1 == 1) {
      uVar2 = local_res8[0];
    }
    return uVar2;
  }
  return *(undefined4 *)(*param_1 + 0xc);
}

// EVP_CIPHER_CTX_iv_noconst @ 14f6c0420

longlong EVP_CIPHER_CTX_iv_noconst(longlong param_1)

{
  return param_1 + 0x28;
}

// EVP_CIPHER_CTX_key_length @ 14f6c0430

undefined4 EVP_CIPHER_CTX_key_length(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x68);
}

// EVP_CIPHER_CTX_num @ 14f6c0450

undefined4 EVP_CIPHER_CTX_num(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x58);
}

// EVP_CIPHER_CTX_original_iv @ 14f6c0460

longlong EVP_CIPHER_CTX_original_iv(longlong param_1)

{
  return param_1 + 0x18;
}

// EVP_CIPHER_CTX_set_flags @ 14f6c0490

void EVP_CIPHER_CTX_set_flags(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | param_2;
  return;
}

// EVP_CIPHER_CTX_set_num @ 14f6c04a0

void EVP_CIPHER_CTX_set_num(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x58) = param_2;
  return;
}

// EVP_CIPHER_CTX_test_flags @ 14f6c04b0

uint EVP_CIPHER_CTX_test_flags(longlong param_1,uint param_2)

{
  return *(uint *)(param_1 + 0x6c) & param_2;
}

// EVP_CIPHER_asn1_to_param @ 14f6c04c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int EVP_CIPHER_asn1_to_param(longlong *param_1)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f6c04d0;
  iVar2 = -1;
  pcVar1 = *(code **)(*param_1 + 0x40);
  if (pcVar1 == (code *)0x0) {
    uVar3 = *(uint *)(*param_1 + 0x10);
    if ((uVar3 >> 0xc & 1) != 0) {
      uVar3 = uVar3 & 0xf0007;
      if (uVar3 < 6) {
LAB_14f6c0514:
        iVar2 = EVP_CIPHER_get_asn1_iv();
        goto LAB_14f6c0519;
      }
      if ((7 < uVar3) && (uVar3 != 0x10001)) {
        if (uVar3 == 0x10002) {
          return 1;
        }
        if (uVar3 != 0x10003) goto LAB_14f6c0514;
      }
      iVar2 = -2;
    }
  }
  else {
    iVar2 = (*pcVar1)();
LAB_14f6c0519:
    if (0 < iVar2) goto LAB_14f6c0566;
  }
  uVar4 = 0x7a;
  if (iVar2 == -2) {
    uVar4 = 0x6b;
  }
  ERR_put_error(6,0xcc,uVar4,"crypto\\evp\\evp_lib.c",0x51,uVar5);
LAB_14f6c0566:
  if (iVar2 < -1) {
    iVar2 = -1;
  }
  return iVar2;
}

// EVP_CIPHER_block_size @ 14f6c0580

undefined4 EVP_CIPHER_block_size(longlong param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// EVP_CIPHER_flags @ 14f6c0590

undefined4 EVP_CIPHER_flags(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}

// EVP_CIPHER_get_asn1_iv @ 14f6c05a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint EVP_CIPHER_get_asn1_iv(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint local_res10 [2];
  
  uVar2 = 0;
  if (param_2 != 0) {
    if ((*(uint *)(*param_1 + 0x10) & 0x800) == 0) {
      uVar3 = *(uint *)(*param_1 + 0xc);
    }
    else {
      iVar1 = EVP_CIPHER_CTX_ctrl(param_1,0x25,0,local_res10);
      uVar3 = 0xffffffff;
      if (iVar1 == 1) {
        uVar3 = local_res10[0];
      }
    }
    if (0x10 < uVar3) {
      OPENSSL_die("assertion failed: l <= sizeof(c->iv)","crypto\\evp\\evp_lib.c",0x5e);
    }
    uVar2 = ASN1_TYPE_get_octetstring(param_2,param_1 + 3,uVar3);
    if (uVar2 == uVar3) {
      if (0 < (int)uVar2) {
        memcpy(param_1 + 5,param_1 + 3,(ulonglong)uVar3);
      }
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

// EVP_CIPHER_iv_length @ 14f6c0670

undefined4 EVP_CIPHER_iv_length(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// EVP_CIPHER_key_length @ 14f6c0680

undefined4 EVP_CIPHER_key_length(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}

// EVP_CIPHER_nid @ 14f6c0690

undefined4 EVP_CIPHER_nid(undefined4 *param_1)

{
  return *param_1;
}

// EVP_CIPHER_param_to_asn1 @ 14f6c06a0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int EVP_CIPHER_param_to_asn1(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x14f6c06b0;
  piVar1 = (int *)*param_1;
  iVar2 = -1;
  if (*(code **)(piVar1 + 0xe) == (code *)0x0) {
    if (((uint)piVar1[4] >> 0xc & 1) != 0) {
      uVar3 = piVar1[4] & 0xf0007;
      if (uVar3 < 6) {
LAB_14f6c06f7:
        iVar2 = EVP_CIPHER_set_asn1_iv();
        goto LAB_14f6c06fc;
      }
      if ((7 < uVar3) && (uVar3 != 0x10001)) {
        if (uVar3 == 0x10002) {
          if (*piVar1 == 0xf6) {
            ASN1_TYPE_set(param_2,5);
          }
          return 1;
        }
        if (uVar3 != 0x10003) goto LAB_14f6c06f7;
      }
      iVar2 = -2;
    }
  }
  else {
    iVar2 = (**(code **)(piVar1 + 0xe))();
LAB_14f6c06fc:
    if (0 < iVar2) goto LAB_14f6c0763;
  }
  uVar4 = 0x7a;
  if (iVar2 == -2) {
    uVar4 = 0xe4;
  }
  ERR_put_error(6,0xcd,uVar4,"crypto\\evp\\evp_lib.c",0x2e,uVar5);
LAB_14f6c0763:
  if (iVar2 < -1) {
    iVar2 = -1;
  }
  return iVar2;
}

// EVP_CIPHER_set_asn1_iv @ 14f6c0780

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 EVP_CIPHER_set_asn1_iv(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint local_res10 [2];
  
  if (param_2 == 0) {
    return 0;
  }
  if ((*(uint *)(*param_1 + 0x10) & 0x800) == 0) {
    uVar3 = *(uint *)(*param_1 + 0xc);
  }
  else {
    iVar1 = EVP_CIPHER_CTX_ctrl(param_1,0x25,0,local_res10);
    uVar3 = 0xffffffff;
    if (iVar1 == 1) {
      uVar3 = local_res10[0];
    }
  }
  if (0x10 < uVar3) {
    OPENSSL_die("assertion failed: j <= sizeof(c->iv)","crypto\\evp\\evp_lib.c",0x6f);
  }
  uVar2 = ASN1_TYPE_set_octetstring(param_2,param_1 + 3,uVar3);
  return uVar2;
}

// EVP_CIPHER_type @ 14f6c0820

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int EVP_CIPHER_type(int *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if (iVar3 < 0x1a6) {
    if (iVar3 == 0x1a5) {
switchD_14f6c08aa_caseD_28a:
      return 0x1a5;
    }
    switch(iVar3) {
    case 5:
    case 0x61:
      return 5;
    case 0x1e:
    case 0x3d:
      goto switchD_14f6c0866_caseD_1e;
    case 0x25:
    case 0x62:
    case 0xa6:
      return 0x25;
    }
  }
  else {
    switch(iVar3) {
    case 0x1a9:
    case 0x28b:
    case 0x28e:
      return 0x1a9;
    case 0x1ad:
    case 0x28c:
    case 0x28f:
      return 0x1ad;
    case 0x28a:
    case 0x28d:
      goto switchD_14f6c08aa_caseD_28a;
    case 0x290:
    case 0x291:
    case 0x292:
    case 0x293:
switchD_14f6c0866_caseD_1e:
      return 0x1e;
    }
  }
  uVar1 = OBJ_nid2obj(iVar3);
  lVar2 = OBJ_get0_data(uVar1);
  if (lVar2 == 0) {
    iVar3 = 0;
  }
  ASN1_OBJECT_free(uVar1);
  return iVar3;
}

// EVP_Cipher @ 14f6c0ad0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_Cipher(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014f6c0ae7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}

// EVP_MD_CTX_clear_flags @ 14f6c0b00

void EVP_MD_CTX_clear_flags(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & ~param_2;
  return;
}

// EVP_MD_CTX_md @ 14f6c0b10

undefined8 EVP_MD_CTX_md(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  return *param_1;
}

// EVP_MD_CTX_md_data @ 14f6c0b30

undefined8 EVP_MD_CTX_md_data(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}

// EVP_MD_CTX_pkey_ctx @ 14f6c0b40

undefined8 EVP_MD_CTX_pkey_ctx(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}

// EVP_MD_CTX_set_flags @ 14f6c0b50

void EVP_MD_CTX_set_flags(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | param_2;
  return;
}

// EVP_MD_CTX_set_pkey_ctx @ 14f6c0b60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_MD_CTX_set_pkey_ctx(longlong param_1,longlong param_2)

{
  if ((*(uint *)(param_1 + 0x10) & 0x400) == 0) {
    EVP_PKEY_CTX_free(*(undefined8 *)(param_1 + 0x20));
  }
  *(longlong *)(param_1 + 0x20) = param_2;
  if (param_2 != 0) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x400;
    return;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffbff;
  return;
}

// EVP_MD_CTX_set_update_fn @ 14f6c0bc0

void EVP_MD_CTX_set_update_fn(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}

// EVP_MD_CTX_test_flags @ 14f6c0bd0

uint EVP_MD_CTX_test_flags(longlong param_1,uint param_2)

{
  return *(uint *)(param_1 + 0x10) & param_2;
}

// EVP_MD_block_size @ 14f6c0bf0

undefined4 EVP_MD_block_size(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}

// EVP_MD_meth_dup @ 14f6c0c10

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_MD_meth_dup(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  uVar1 = *(undefined4 *)((longlong)param_1 + 4);
  uVar2 = *(undefined4 *)param_1;
  puVar4 = (undefined8 *)CRYPTO_zalloc(0x48,"crypto\\evp\\evp_lib.c",0x150);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)puVar4 = uVar2;
    *(undefined4 *)((longlong)puVar4 + 4) = uVar1;
    uVar3 = param_1[1];
    *puVar4 = *param_1;
    puVar4[1] = uVar3;
    uVar3 = param_1[3];
    puVar4[2] = param_1[2];
    puVar4[3] = uVar3;
    uVar3 = param_1[5];
    puVar4[4] = param_1[4];
    puVar4[5] = uVar3;
    uVar3 = param_1[7];
    puVar4[6] = param_1[6];
    puVar4[7] = uVar3;
    puVar4[8] = param_1[8];
  }
  return;
}

// EVP_MD_meth_free @ 14f6c0c90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_MD_meth_free(undefined8 param_1)

{
  CRYPTO_free(param_1,"crypto\\evp\\evp_lib.c",0x162);
  return;
}

// EVP_MD_meth_get_flags @ 14f6c0d10

undefined4 EVP_MD_meth_get_flags(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}

// EVP_MD_meth_new @ 14f6c0d60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void EVP_MD_meth_new(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)CRYPTO_zalloc(0x48,"crypto\\evp\\evp_lib.c",0x150);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
  }
  return;
}

// EVP_MD_meth_set_app_datasize @ 14f6c0db0

undefined8 EVP_MD_meth_set_app_datasize(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  return 1;
}

// EVP_MD_meth_set_final @ 14f6c0df0

undefined8 EVP_MD_meth_set_final(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return 1;
}

// EVP_MD_meth_set_flags @ 14f6c0e00

undefined8 EVP_MD_meth_set_flags(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return 1;
}

// EVP_MD_meth_set_init @ 14f6c0e10

undefined8 EVP_MD_meth_set_init(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return 1;
}

// EVP_MD_meth_set_input_blocksize @ 14f6c0e20

undefined8 EVP_MD_meth_set_input_blocksize(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  return 1;
}

// EVP_MD_meth_set_result_size @ 14f6c0e30

undefined8 EVP_MD_meth_set_result_size(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return 1;
}

// EVP_MD_meth_set_update @ 14f6c0e40

undefined8 EVP_MD_meth_set_update(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return 1;
}

// EVP_MD_pkey_type @ 14f6c0e50

undefined4 EVP_MD_pkey_type(longlong param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// EVP_MD_size @ 14f6c0e60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 EVP_MD_size(longlong param_1)

{
  if (param_1 == 0) {
    ERR_put_error(6,0xa2,0x9f,"crypto\\evp\\evp_lib.c",0x143);
    return 0xffffffff;
  }
  return *(undefined4 *)(param_1 + 8);
}

// EVP_MD_type @ 14f6c0eb0

undefined4 EVP_MD_type(undefined4 *param_1)

{
  return *param_1;
}

