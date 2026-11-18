// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 10

// SCT_CTX_free @ 14f734f60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SCT_CTX_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    EVP_PKEY_free(*param_1);
    CRYPTO_free(param_1[1],"crypto\\ct\\ct_sct_ctx.c",0x26);
    CRYPTO_free(param_1[3],"crypto\\ct\\ct_sct_ctx.c",0x27);
    CRYPTO_free(param_1[5],"crypto\\ct\\ct_sct_ctx.c",0x28);
    CRYPTO_free(param_1[7],"crypto\\ct\\ct_sct_ctx.c",0x29);
    CRYPTO_free(param_1,"crypto\\ct\\ct_sct_ctx.c",0x2a);
  }
  return;
}

// SCT_CTX_new @ 14f735000

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong SCT_CTX_new(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0x14f73500c;
  lVar1 = CRYPTO_zalloc(0x50,"crypto\\ct\\ct_sct_ctx.c",0x19);
  if (lVar1 == 0) {
    ERR_put_error(0x32,0x7e,0x41,"crypto\\ct\\ct_sct_ctx.c",0x1c,uVar2);
  }
  return lVar1;
}

// SCT_CTX_set1_cert @ 14f735060

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SCT_CTX_set1_cert(longlong param_1,undefined8 param_2,longlong param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 local_res20;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x14f73507d;
  lVar10 = 0;
  local_res20 = 0;
  local_38 = 0;
  iVar7 = 0;
  iVar2 = X509_get_ext_by_NID(param_2,0x3b8,0xffffffff);
  if (iVar2 < 0) {
LAB_14f7350c9:
    bVar1 = false;
  }
  else {
    iVar3 = X509_get_ext_by_NID(param_2,0x3b8,iVar2);
    bVar1 = true;
    if (iVar3 < 0) goto LAB_14f7350c9;
  }
  lVar8 = lVar10;
  if ((bVar1) ||
     ((iVar3 = iVar7, iVar2 == -1 &&
      ((param_3 != 0 || (iVar3 = i2d_X509(param_2,&local_res20), iVar3 < 0)))))) goto LAB_14f7351f2;
  iVar4 = X509_get_ext_by_NID(param_2,0x3b7,0xffffffff);
  if (iVar4 < 0) {
LAB_14f73512e:
    iVar6 = iVar7;
  }
  else {
    iVar5 = X509_get_ext_by_NID(param_2,0x3b7,iVar4);
    iVar6 = 1;
    if (iVar5 < 0) goto LAB_14f73512e;
  }
  lVar8 = 0;
  if ((iVar6 == 0) && ((iVar4 < 0 || (iVar2 < 0)))) {
    if (iVar4 == -1) {
      iVar4 = iVar2;
    }
    lVar8 = lVar10;
    if (iVar4 < 0) {
LAB_14f735197:
      X509_free(lVar8);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x28),"crypto\\ct\\ct_sct_ctx.c",0xb2);
      *(undefined8 *)(param_1 + 0x28) = local_res20;
      *(longlong *)(param_1 + 0x30) = (longlong)iVar3;
      CRYPTO_free(*(undefined8 *)(param_1 + 0x38),"crypto\\ct\\ct_sct_ctx.c",0xb6);
      *(undefined8 *)(param_1 + 0x38) = local_38;
      *(longlong *)(param_1 + 0x40) = (longlong)iVar7;
      return 1;
    }
    lVar8 = X509_dup(param_2);
    if (lVar8 != 0) {
      uVar9 = X509_delete_ext(lVar8,iVar4);
      X509_EXTENSION_free(uVar9);
      iVar2 = FUN_14f735470(lVar8,param_3);
      if ((iVar2 != 0) && (iVar7 = i2d_re_X509_tbs(lVar8,&local_38), 0 < iVar7)) goto LAB_14f735197;
    }
  }
LAB_14f7351f2:
  CRYPTO_free(local_res20,"crypto\\ct\\ct_sct_ctx.c",0xbc);
  CRYPTO_free(local_38,"crypto\\ct\\ct_sct_ctx.c",0xbd);
  X509_free(lVar8);
  return 0;
}

// SCT_CTX_set1_issuer @ 14f735250

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SCT_CTX_set1_issuer(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = X509_get_X509_PUBKEY(param_2);
  FUN_14f735360(uVar1,param_1 + 0x18,param_1 + 0x20);
  return;
}

// SCT_CTX_set1_issuer_pubkey @ 14f735290

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SCT_CTX_set1_issuer_pubkey(longlong param_1,undefined8 param_2)

{
  FUN_14f735360(param_2,param_1 + 0x18,param_1 + 0x20);
  return;
}

// SCT_CTX_set1_pubkey @ 14f7352c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SCT_CTX_set1_pubkey(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = X509_PUBKEY_get(param_2);
  if (lVar2 != 0) {
    iVar1 = FUN_14f735360(param_2,param_1 + 1,param_1 + 2);
    if (iVar1 != 0) {
      EVP_PKEY_free(*param_1);
      *param_1 = lVar2;
      return 1;
    }
    EVP_PKEY_free(lVar2);
  }
  return 0;
}

// SCT_CTX_set_time @ 14f735350

void SCT_CTX_set_time(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return;
}

// FUN_14f735360 @ 14f735360

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong FUN_14f735360(undefined8 param_1,longlong *param_2,ulonglong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res10 [8];
  undefined8 local_res20;
  
  lVar2 = *param_2;
  lVar4 = 0;
  local_res20 = 0;
  lVar5 = lVar4;
  if ((lVar2 == 0) || (*param_3 < 0x20)) {
    lVar2 = CRYPTO_malloc(0x20,"crypto\\ct\\ct_sct_ctx.c",0xce);
    if (lVar2 == 0) goto LAB_14f735420;
  }
  iVar1 = i2d_X509_PUBKEY(param_1,&local_res20);
  if (0 < iVar1) {
    uVar3 = EVP_sha256();
    iVar1 = EVP_Digest(local_res20,(longlong)iVar1,lVar2,local_res10,uVar3,0);
    if (iVar1 != 0) {
      if (lVar2 != *param_2) {
        CRYPTO_free(*param_2,"crypto\\ct\\ct_sct_ctx.c",0xdc);
        *param_2 = lVar2;
        *param_3 = 0x20;
      }
      lVar5 = 1;
      lVar2 = lVar4;
    }
  }
LAB_14f735420:
  CRYPTO_free(lVar2,"crypto\\ct\\ct_sct_ctx.c",0xe4);
  CRYPTO_free(local_res20,"crypto\\ct\\ct_sct_ctx.c",0xe5);
  return lVar5;
}

// FUN_14f735470 @ 14f735470

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_14f735470(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_2 == 0) {
    return 1;
  }
  iVar3 = X509_get_ext_by_NID(param_2,0x5a);
  if (-1 < iVar3) {
    iVar4 = X509_get_ext_by_NID(param_2,0x5a,iVar3);
    bVar1 = true;
    if (-1 < iVar4) goto LAB_14f7354dc;
  }
  bVar1 = false;
LAB_14f7354dc:
  iVar4 = X509_get_ext_by_NID(param_1,0x5a);
  bVar2 = false;
  if ((-1 < iVar4) && (iVar5 = X509_get_ext_by_NID(param_1,0x5a,iVar4), bVar2 = false, -1 < iVar5))
  {
    bVar2 = true;
  }
  if (((((-2 < iVar3) && (-2 < iVar4)) && (!bVar1)) && ((!bVar2 && ((iVar3 < 0 || (iVar4 != -1))))))
     && ((iVar3 != -1 || (iVar4 < 0)))) {
    uVar6 = X509_get_issuer_name(param_2);
    iVar5 = X509_set_issuer_name(param_1,uVar6);
    if (iVar5 != 0) {
      if (iVar3 != -1) {
        lVar7 = X509_get_ext(param_2,iVar3);
        lVar8 = X509_get_ext(param_1,iVar4);
        if (lVar7 == 0) {
          return 0;
        }
        if (lVar8 == 0) {
          return 0;
        }
        lVar7 = X509_EXTENSION_get_data(lVar7);
        if (lVar7 == 0) {
          return 0;
        }
        iVar3 = X509_EXTENSION_set_data(lVar8,lVar7);
        if (iVar3 == 0) {
          return 0;
        }
      }
      return 1;
    }
  }
  return 0;
}

// FUN_14f7355c0 @ 14f7355c0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_14f7355c0(undefined8 param_1,ulonglong param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  
  uVar3 = X509_get_ext_by_NID(param_1,param_2,0xffffffff);
  if (param_3 != (undefined4 *)0x0) {
    if (((int)uVar3 < 0) ||
       (iVar1 = X509_get_ext_by_NID(param_1,param_2 & 0xffffffff,uVar3 & 0xffffffff), iVar1 < 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    *param_3 = uVar2;
    return uVar3 & 0xffffffff;
  }
  return uVar3;
}

